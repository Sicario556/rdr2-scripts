void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_32 = "";
	sLocal_33 = "";
	iLocal_759 = 1;
	sLocal_787 = "ARMS";
	iLocal_808 = -1210356313;
	iLocal_809 = 280720199;
	fLocal_828 = 0f;
	fLocal_835 = 5f;
	iLocal_904 = -283162583;
	iLocal_1278 = 6;
	iLocal_1372 = -1;
	Local_51.f_3 = func_1(&vScriptParam_0);
	Local_51.f_161 = func_2(vScriptParam_0.z, 2);
	bVar0 = false;
	if (has_force_cleanup_occurred(523))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		func_3(&Local_51, 1);
		iLocal_14 = func_4(Local_51.f_3, 2, 0);
		func_5(&(Local_51.f_5));
		func_6(&uLocal_867);
		if (iLocal_14 == 1)
		{
			func_7(&(Local_51.f_5), 1);
			func_8(&(Local_51.f_5), 500);
			func_9(&(Local_51.f_5), 1);
		}
	}
	while (true)
	{
		if (bVar0)
		{
			func_11(bVar0, 1360, 0);
			wait(0);
		}
		else
		{
			switch (iVar757)
			{
				case 1:
					if (func_12(&Local_51, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_13(&Local_51, &uLocal_785, &uLocal_786);
						Local_51.f_51.f_4 = iVar784;
						func_15(&Local_51, iVar783, 2007);
						func_16();
						iLocal_759 = 0;
					}
					else if (Local_51.f_160)
					{
						func_10();
					}
					break;
				case 0:
					if (func_17())
					{
						_request_propset_2(-1210356313);
						iLocal_759 = 3;
					}
					break;
				case 3:
					if (func_18())
					{
						if (func_19())
						{
							func_20(uLocal_895[0], Local_51.f_51, 6f, 0, 0);
							func_21(uLocal_895[1], Local_51.f_51, 4f);
							func_20(uLocal_895[2], func_22(iVar783, Local_51.f_51.f_4), 2f, 0, 1);
							switch (iVar784)
							{
								case 1:
									func_20(uLocal_895[3], 1316.457f, -1631.233f, 65.43966f, 1f, 0, 0);
									func_20(uLocal_895[4], 1317.823f, -1627.908f, 65.15807f, 1f, 0, 0);
									func_20(uLocal_895[5], 1313.625f, -1631.687f, 65.5304f, 1f, 0, 0);
									func_20(uLocal_895[6], 1314.432f, -1630.339f, 65.42619f, 1f, 0, 0);
									func_20(uLocal_895[7], 1315.583f, -1625.064f, 65.0082f, 1f, 0, 0);
									break;
								case 4:
									func_20(uLocal_895[3], 1408.471f, -1706.774f, 66.32634f, 1f, 0, 0);
									func_20(uLocal_895[4], 1397.019f, -1701.414f, 66.21142f, 1f, 0, 0);
									func_20(uLocal_895[5], 1403.413f, -1700.891f, 65.93549f, 1f, 0, 0);
									func_20(uLocal_895[6], 1379.213f, -1685.438f, 66.61638f, 1f, 0, 0);
									break;
							}
							func_23(Local_51.f_51, &Local_503, 0f, 1, 0, -1, 0);
							if (!is_entity_dead(iLocal_34))
							{
								if (_has_propset_loaded(iVar806))
								{
									_0xc0f0417a90402742(iLocal_34, uVar807);
								}
								if (iLocal_14 != 1)
								{
									if (_has_propset_loaded(iVar806) && _has_propset_loaded_2(-1210356313))
									{
										_0xd80faf919a2e56ea(iLocal_34, iVar806);
									}
								}
							}
							func_24(iVar783, iVar784);
							func_25(iVar783, iVar784);
							func_26();
							func_27();
							iLocal_759 = 4;
						}
					}
					break;
				case 4:
					if ((!func_28(512) && func_29(Local_51.f_51, 1) < 30f) && iVar756 < 4)
					{
						func_30(Local_51.f_51, &iLocal_831, -89429847, 0, 0, 0);
						func_31(512);
					}
					if (func_32(&Local_51, &iLocal_35, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						Local_51.f_50 = 1;
						func_10();
					}
					if (func_33())
					{
						iVar1 = 0;
						while (iVar1 < 4)
						{
							if (func_34(&(iLocal_35[iVar1]), 0, 0))
							{
								func_35(&(iLocal_35[iVar1]), 30f, 0, 0);
								set_blocking_of_non_temporary_events(&(iLocal_35[iVar1]), false);
							}
							iVar1++;
						}
						Local_51.f_50 = 1;
						func_10();
					}
					if (!func_36(&Local_51, &iLocal_35, iLocal_14, 0, 1, 0, 1, 0))
					{
						func_31(-2147483648);
						func_10();
					}
					break;
			}
			wait(Local_51.f_158);
		}
	}
}

var func_1(var uParam0)
{
	return *uParam0;
}

bool func_2(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_3(var uParam0, bool bParam1)
{
	func_37(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_38("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	allow_sonar_blips(bParam1);
}

int func_4(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return (func_39(iParam0) % iParam1);
	}
	return (func_40(iParam0) % iParam1);
}

void func_5(int iParam0)
{
	func_37(iParam0);
	func_7(iParam0, 0);
	func_41(iParam0, 0);
	func_42(iParam0, 1);
	func_43(iParam0, 0);
	func_44(iParam0, 0);
}

void func_6(int iParam0)
{
	func_45(iParam0);
	func_46(iParam0, 0);
	func_47(iParam0, 0);
	func_42(iParam0, 0);
	func_48(iParam0, 1);
	func_49(iParam0, 1);
	func_44(iParam0, 0);
}

void func_7(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(&(iParam0->f_1), 8);
	}
	else
	{
		func_51(&(iParam0->f_1), 8);
	}
}

void func_8(int iParam0, int iParam1)
{
	iParam0->f_18 = iParam1;
}

void func_9(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(&(uParam0->f_1), 1024);
	}
	else
	{
		func_51(&(uParam0->f_1), 1024);
	}
}

void func_10()
{
	func_52();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_entity_dead(&(iLocal_35[iVar0])))
		{
			if (!Local_51.f_46 && !func_53(iVar0))
			{
				set_ped_relationship_group_hash(&(iLocal_35[iVar0]), 623901053);
			}
			if (func_28(524288))
			{
				_0xe737d5f14304a2ec(&(iLocal_35[iVar0]), player_id(), 120000);
			}
			_0x24c82ef607105faa(&(iLocal_35[iVar0]), -920810745);
			set_ped_combat_attributes(&(iLocal_35[iVar0]), 6, true);
			func_54(iLocal_35[iVar0], Local_936[iVar0], &(Local_936[iVar0]->f_21), 1, 1);
		}
		iVar0++;
	}
	func_55();
	func_56();
	func_57();
	if (bVar791)
	{
		func_58(1);
	}
	if (!Local_51.f_44)
	{
		Local_51.f_45 = 0;
	}
	func_59(&Local_51, &iLocal_35, &uLocal_40, iLocal_14, uVar783, uVar784, 0, 1, 0, 1);
	func_60(&Local_503);
	func_61(&uLocal_45);
	func_62(&uLocal_40);
	func_63(&iLocal_831);
	func_64(iVar832);
	func_65(&(Local_772.f_1));
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_66(uLocal_895[iVar0], 1);
		iVar0++;
	}
	func_67(&Local_528);
	terminate_this_thread();
}

void func_11(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_68(bParam2) || is_screen_faded_out())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_12(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (bParam6 || func_69(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_70(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_71(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				clear_area(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_72(uParam0, -1, 0, bParam7);
			}
			_0x9d16896f0dbe78a2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_73(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_13(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 11;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 11;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 11;
			*uParam2 = 2;
			break;
		case 3:
			*uParam1 = 11;
			*uParam2 = 3;
			break;
		case 4:
			*uParam1 = 11;
			*uParam2 = 4;
			break;
		case 5:
			*uParam1 = 11;
			*uParam2 = 5;
			break;
	}
}

Vector3 func_14(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 85.68f;
				case 1:
					return 0f, 0f, -174.24f;
				case 2:
					return 0f, 0f, 98.64f;
				case 3:
					return 0f, 0f, -97.92f;
				case 4:
					return 0f, 0f, 261.02f;
				case 5:
					return 0f, 0f, 10.08f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_15(var uParam0, int iParam1, int iParam2)
{
	Stack.Push(iParam1);
	Stack.Push(uParam0->f_51.f_4);
	Call_Loc(iParam2);
	vVar0 = { StackVal, StackVal, StackVal };
	uParam0->f_51.f_3 = vVar0.z;
}

void func_16()
{
	_0x9851de7aec10b4e1(Local_51.f_51, fVar833, 1, 0);
	func_74(Local_51.f_51, fVar833, 0, 0, 1, 1, 0);
	if (Local_51.f_161)
	{
		clear_area(Local_51.f_51, 30f, 65536);
		_0x9d16896f0dbe78a2(Local_51.f_51, fVar833);
	}
}

bool func_17()
{
	switch (iVar755)
	{
		case 0:
			if (func_75(&Local_51))
			{
				func_76(iVar783);
				func_77(&Local_245);
				func_77(&Local_374);
				func_78();
				func_79(&Local_503);
				func_80();
				func_81();
				func_82();
				request_model(iVar902, false);
				_request_propset(iVar806);
				_request_propset(iVar807);
				if (!is_string_null_or_empty(func_83(iVar783, iVar784)))
				{
					request_waypoint_recording(func_83(iVar783, iVar784));
				}
				iLocal_757 = 1;
			}
			break;
		case 1:
			if (!func_84(&uLocal_756, uVar785))
			{
				return false;
			}
			if (!func_85(&uLocal_549))
			{
				return false;
			}
			if (!func_86(&Local_503))
			{
				return false;
			}
			if (!func_87(&Local_245))
			{
				return false;
			}
			if (!func_87(&Local_374))
			{
				return false;
			}
			if (!has_model_loaded(iVar902))
			{
				return false;
			}
			if (!_is_anim_scene_loaded(Local_528.f_1, true, false))
			{
				return false;
			}
			if (!_has_propset_loaded(iVar806))
			{
				return false;
			}
			if (!_has_propset_loaded(iVar807))
			{
				return false;
			}
			if (!is_string_null_or_empty(func_83(iVar783, iVar784)))
			{
				if (!get_is_waypoint_recording_loaded(func_83(iVar783, iVar784)))
				{
					return false;
				}
			}
			return true;
	}
	return false;
}

bool func_18()
{
	switch (iVar766)
	{
		case 0:
			iLocal_768 = 1;
			break;
		case 1:
			if (!func_88(Local_51.f_51, 0f, &Local_245, &iLocal_35, 0, 0, -1, 1))
			{
				return false;
			}
			iLocal_768 = 4;
			break;
		case 4:
			if (Local_374[2]->f_1 == 0 || Local_374[3]->f_1 == 0)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			vVar0 = { func_14(iVar783, iVar784) };
			vVar3 = { _get_object_offset_from_coords(Local_51.f_51, vVar0.z, 0f, 5.15f, 0f) };
			iLocal_34 = func_89(iVar902, vVar3, vVar0.z, 1, 1, bVar6);
			if (does_entity_exist(iLocal_34))
			{
				func_90(iLocal_34, &Local_51, 0);
				set_vehicle_on_ground_properly(iLocal_34, 0f);
				set_vehicle_can_be_targetted(iLocal_34, false);
				set_can_climb_on_entity(iLocal_34, true);
				func_91(iLocal_34);
				if (iLocal_14 == 1)
				{
					_0xb7079f4c72896756(Global_35, iLocal_34, 0, 1, -1);
				}
				if (iLocal_14 == 1)
				{
					func_92(&iLocal_34, 3);
				}
				else
				{
					func_92(&iLocal_34, 1);
				}
				iLocal_768 = 5;
			}
			break;
		case 5:
			if (!func_88(Local_51.f_51, 0f, &Local_374, &uLocal_45, 0, 0, -1, 1))
			{
				return false;
			}
			if (((((does_entity_exist(iLocal_34) && does_entity_exist(&(uLocal_45[2]))) && does_entity_exist(&(uLocal_45[3]))) && !is_entity_dead(iLocal_34)) && !is_entity_dead(&(uLocal_45[2]))) && !is_entity_dead(&(uLocal_45[3])))
			{
				_0x316cdb5b6e8f4110(&(uLocal_45[2]), iLocal_34, 0);
				_0x316cdb5b6e8f4110(&(uLocal_45[3]), iLocal_34, 1);
			}
			iLocal_768 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_19()
{
	switch (iVar758)
	{
		case 0:
			if (add_relationship_group("REL_REAMD_LEMOYNE_RAIDERS", &uLocal_765))
			{
			}
			if (add_relationship_group("REL_REAMD_DEALERS", &uLocal_766))
			{
			}
			if (add_relationship_group("REL_REAMD_JOINT", &uLocal_767))
			{
			}
			set_relationship_between_groups(2, iVar764, iVar763);
			set_relationship_between_groups(2, iVar764, 1391706777);
			set_relationship_between_groups(2, iVar763, iVar764);
			set_relationship_between_groups(2, iVar763, 1391706777);
			func_93(&uLocal_760, 1);
			break;
		case 1:
			iVar0 = iVar814;
			func_94(iVar0);
			uLocal_816 = iVar814 + 1;
			if (iVar814 > 3)
			{
				func_93(&uLocal_760, 2);
			}
			break;
		case 2:
			if (does_entity_exist(&(uLocal_45[0])))
			{
				func_35(&(uLocal_45[0]), 1088421888, 0, 0);
				Local_1279[0]->f_1[0] = 675090918;
				Local_1279[0]->f_12[0] = 1;
				Local_1279[0] = 1;
				Local_1279[1]->f_1[0] = 1681219929;
				Local_1279[1]->f_12[0] = 1;
				Local_1279[1] = 1;
				_0xa88e215ceb0435c0(&(uLocal_45[0]), Local_1279[0], 205298116, 128, 2, 0);
				_0xa88e215ceb0435c0(&(uLocal_45[0]), Local_1279[1], 205298116, 128, 2, 1);
			}
			if (does_entity_exist(&(uLocal_45[1])))
			{
				func_35(&(uLocal_45[1]), 1088421888, 0, 0);
				Local_1279[2]->f_1[0] = 489075255;
				Local_1279[2]->f_12[0] = 2;
				Local_1279[2] = 2;
				Local_1279[3]->f_1[0] = 1301922967;
				Local_1279[3]->f_12[0] = 1;
				Local_1279[3] = 1;
				_0xa88e215ceb0435c0(&(uLocal_45[1]), Local_1279[2], 205298116, 128, 2, 0);
				_0xa88e215ceb0435c0(&(uLocal_45[1]), Local_1279[3], 205298116, 128, 2, 1);
			}
			if (does_entity_exist(&(uLocal_45[2])))
			{
				func_35(&(uLocal_45[2]), 1088421888, 0, 0);
			}
			if (does_entity_exist(&(uLocal_45[3])))
			{
				func_35(&(uLocal_45[3]), 1088421888, 0, 0);
			}
			func_95(&(Local_51.f_5), &(uLocal_45[0]), 0);
			func_95(&(Local_51.f_5), &(uLocal_45[1]), 0);
			func_95(&(Local_51.f_5), &(uLocal_45[2]), 0);
			func_95(&(Local_51.f_5), &(uLocal_45[3]), 0);
			func_98(&(uLocal_45[0]), func_96(0, iVar783, iVar784), func_97(0, iVar783, iVar784), 2, 1073741824);
			func_98(&(uLocal_45[1]), func_96(1, iVar783, iVar784), func_97(1, iVar783, iVar784), 2, 1073741824);
			func_99(uLocal_45[0], 1);
			func_99(uLocal_45[1], 1);
			func_93(&uLocal_760, 3);
			break;
		case 3:
			if (func_100(2, 0))
			{
				func_101(-2147483648);
			}
			return true;
	}
	return false;
}

void func_20(var uParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	iVar0 = 61;
	if (bParam6)
	{
		iVar0 |= 2 | 256;
	}
	func_102(uParam0, vParam1, fParam4, 1, iVar0, 0);
}

void func_21(var uParam0, vector3 vParam1, float fParam4)
{
	iVar0 = 258;
	func_102(uParam0, vParam1, fParam4, 2, iVar0, 0);
}

Vector3 func_22(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			switch (iParam1)
			{
				case 0:
					return 1843.289f, -382.0404f, 42.29816f;
				case 1:
					return 1315.223f, -1643.497f, 65.99081f;
				case 2:
					return 780.0723f, -904.9696f, 50.11354f;
				case 3:
					return 863.2411f, -535.3668f, 88.32434f;
				case 4:
					return 1388.234f, -1699.7f, 66.7458f;
				case 5:
					return 1567.932f, -1164.354f, 44.73336f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_23(vector3 vParam0, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
{
	iVar4 = 1;
	if (iParam7 < 0 || iParam7 >= *iParam3)
	{
		iParam7 = (*iParam3 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (bParam8 && does_entity_exist((*iParam3)[iVar0]->f_8))
		{
		}
		else if ((*iParam3)[iVar0]->f_7 != 0 && !func_103((*iParam3)[iVar0]->f_11, 16))
		{
			if (!has_model_loaded((*iParam3)[iVar0]->f_7))
			{
				iVar4 = 0;
			}
			else
			{
				if ((*iParam3)[iVar0]->f_9 != -1)
				{
					iVar8 = (*iParam3)[iVar0]->f_9;
					vVar5 = { get_offset_from_entity_in_world_coords((*iParam3)[iVar8]->f_8, *(*iParam3)[iVar0]) };
					if (func_103((*iParam3)[iVar0]->f_11, 64))
					{
						(*iParam3)[iVar0]->f_8 = create_object_no_offset((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(*iParam3)[iVar0]->f_8 = create_object((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false, true);
					}
					attach_entity_to_entity((*iParam3)[iVar0]->f_8, (*iParam3)[iVar8]->f_8, 0, *(*iParam3)[iVar0], (*iParam3)[iVar0]->f_4, false, false, false, false, 2, true, false, false);
				}
				else
				{
					if (!func_103((*iParam3)[iVar0]->f_11, 8))
					{
						vVar5 = { _get_object_offset_from_coords(vParam0, fParam4, *(*iParam3)[iVar0]) };
					}
					else
					{
						vVar5 = { *(*iParam3)[iVar0] };
					}
					if (!func_103((*iParam3)[iVar0]->f_11, 128))
					{
						func_104(&vVar5, (*iParam3)[iVar0]->f_10);
					}
					if (func_103((*iParam3)[iVar0]->f_11, 64))
					{
						(*iParam3)[iVar0]->f_8 = create_object_no_offset((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(*iParam3)[iVar0]->f_8 = create_object((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false, true);
					}
					if (func_105((*iParam3)[iVar0]->f_4))
					{
						vVar1 = { 0f, 0f, (*iParam3)[iVar0]->f_3 };
					}
					else
					{
						vVar1 = { (*iParam3)[iVar0]->f_4 };
					}
					if (func_103((*iParam3)[iVar0]->f_11, 4))
					{
						vVar1.f_2 = func_106((vVar1.z + fParam4));
					}
					set_entity_rotation((*iParam3)[iVar0]->f_8, vVar1, 2, true);
					if (!func_103((*iParam3)[iVar0]->f_11, 128))
					{
						if ((*iParam3)[iVar0]->f_10)
						{
							_0x9587913b9e772d29((*iParam3)[iVar0]->f_8, 0);
						}
					}
				}
				if (func_103((*iParam3)[iVar0]->f_11, 2))
				{
					freeze_entity_position((*iParam3)[iVar0]->f_8, true);
				}
				if (func_103((*iParam3)[iVar0]->f_11, 32))
				{
					set_entity_visible((*iParam3)[iVar0]->f_8, false);
				}
				if (bParam5)
				{
					set_entity_load_collision_flag((*iParam3)[iVar0]->f_8, 1);
					activate_physics((*iParam3)[iVar0]->f_8);
				}
				_0xa91e6cf94404e8c9((*iParam3)[iVar0]->f_8);
				vVar9 = { get_entity_coords((*iParam3)[iVar0]->f_8, true, false) };
			}
		}
		iVar0++;
	}
	return iVar4;
}

void func_24(int iParam0, int iParam1)
{
	func_107(&(Local_51.f_51), 50, 10, 0);
	vVar0 = { func_14(iParam0, iParam1) };
	vVar3 = { Local_51.f_51 };
	func_107(&vVar3, 50, 10, 0);
	if (_does_anim_scene_exist(Local_528.f_1))
	{
		set_anim_scene_origin(Local_528.f_1, vVar3, vVar0, 2);
		set_anim_scene_entity(Local_528.f_1, "dealerA", &(iLocal_35[0]), 0);
		set_anim_scene_entity(Local_528.f_1, "dealerb", &(iLocal_35[1]), 0);
		set_anim_scene_entity(Local_528.f_1, "confeda", &(iLocal_35[2]), 0);
		set_anim_scene_entity(Local_528.f_1, "confedb", &(iLocal_35[3]), 0);
		if (iLocal_14 == 1)
		{
			set_anim_scene_entity(Local_528.f_1, "Cash", Local_503[1]->f_8, 0);
		}
		set_anim_scene_bool(Local_528.f_1, "FLAG_LOOP", false, false);
		start_anim_scene(Local_528.f_1);
	}
}

void func_25(int iParam0, int iParam1)
{
	if (!is_entity_dead(iLocal_34))
	{
		iVar1 = 12;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (iVar0 != 0 && does_extra_exist(iLocal_34, iVar0))
			{
				set_vehicle_extra(iLocal_34, iVar0, true);
			}
			iVar0++;
		}
		if (!is_entity_dead(Local_503[0]->f_8))
		{
			attach_entity_to_entity(Local_503[0]->f_8, iLocal_34, 0, *Local_503[0], 0f, 0f, Local_503[0]->f_3, true, false, true, false, 2, true, true, false);
		}
	}
}

void func_26()
{
	switch (iLocal_14)
	{
		case 1:
			func_108(&uLocal_817, 1f, 1f, 0f, 1f, 1f, 0.5812f, 0.7438f, 1065353216, 0.8411f, 1065353216);
			break;
		case 0:
			func_108(&uLocal_817, 0.1f, 0.603f, 0f, 0.457f, 0.883f, 1f, 1f, 0.899f, 1064514355, 0.788f);
			break;
	}
}

void func_27()
{
	_0xa46e98bdc407e23d(Local_51.f_171, 30f, 30f, 6f);
}

bool func_28(int iParam0)
{
	return func_103(iVar803, iParam0);
}

float func_29(vector3 vParam0, int iParam3)
{
	return func_109(Global_35, vParam0, iParam3);
}

void func_30(vector3 vParam0, int* iParam3, int iParam4, int iParam5, char* sParam6, int iParam7)
{
	if (does_blip_exist(*iParam3))
	{
		remove_blip(iParam3);
	}
	*iParam3 = _blip_add_for_coord(iParam4, vParam0);
	if (iParam7 != 0)
	{
		_blip_set_modifier(*iParam3, iParam7);
	}
	if (iParam5 != 0)
	{
		set_blip_sprite(*iParam3, iParam5, true);
	}
	if (!is_string_null_or_empty(sParam6))
	{
		set_blip_name_from_text_file(*iParam3, sParam6);
	}
}

void func_31(int iParam0)
{
	if (!func_28(iParam0))
	{
		func_110(&uLocal_806, iParam0);
	}
}

bool func_32(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_111())
			{
				return true;
			}
		}
		if (bParam7)
		{
			if (Global_16)
			{
				return true;
			}
		}
		if (!uParam0->f_48)
		{
			if (is_player_riding_train(player_id()))
			{
				return true;
			}
		}
	}
	if (bParam2 || bParam4)
	{
		if (uParam0->f_188 == 0)
		{
			if (bParam5)
			{
				fVar0 = 300f;
				if (!bParam8 && uParam0->f_48)
				{
					fVar0 = (fVar0 - 65f);
				}
			}
			else if (func_112(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_71(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_71(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_71(uParam0->f_3, 2) || iParam12 == 1)
			{
				fVar0 = 125f;
				fVar0 = (fVar0 + 10f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 50f);
				}
			}
			uParam0->f_189 = fVar0;
		}
		else
		{
			fVar0 = uParam0->f_189;
		}
		fVar0 = (fVar0 * fVar0);
		if (bParam2)
		{
			if (uParam0->f_188 < *iParam1)
			{
				if (does_entity_exist(iParam1[uParam0->f_188]))
				{
					if (Global_1935630->f_40 != iParam1[uParam0->f_188])
					{
						if ((bParam3 && !is_entity_dead(iParam1[uParam0->f_188])) || !bParam3)
						{
							if ((&uParam0->f_98[uParam0->f_188] * &uParam0->f_98[uParam0->f_188]) <= fVar0)
							{
								uParam0->f_187 = 0;
							}
						}
					}
				}
				uParam0->f_188++;
			}
			else
			{
				uParam0->f_188 = 0;
				if (uParam0->f_187)
				{
					return true;
				}
				else
				{
					uParam0->f_187 = 1;
				}
			}
		}
		if (bParam4)
		{
			if (fParam9 == 0f)
			{
				if (func_113(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_113(Global_36, vVar1) > fVar0)
				{
					return true;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *iParam1)
		{
			if (!is_entity_dead(iParam1[uParam0->f_191]))
			{
				uParam0->f_190 = 0;
			}
			uParam0->f_191++;
		}
		else if (uParam0->f_190)
		{
			return true;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}
	return false;
}

bool func_33()
{
	func_114();
	if (iVar756 > 1)
	{
		func_115();
		func_116();
		func_117();
		func_118();
		func_119();
		func_120();
		func_121();
		func_122();
		func_123();
		func_124();
		func_125();
		func_126();
		if (!func_127(8))
		{
			vVar0 = { get_entity_coords(iLocal_34, true, false) };
			if (func_128(iLocal_14, vVar0, &uLocal_832, &uLocal_833))
			{
				func_101(8);
			}
		}
	}
	switch (iVar756)
	{
		case 0:
			if (func_129())
			{
				if (_0x23e33cb9f4a3f547(Local_528.f_1, sLocal_32))
				{
					_set_anim_scene_playback_list_bool(Local_528.f_1, sLocal_32, true);
					func_130(&uLocal_758, 1);
				}
			}
			break;
		case 1:
			if (func_132(&Local_51, &uLocal_769, 0.5f, 60f, func_131(iVar783, iVar784), 1500, 1.25f, 1.25f, 1, 0, 1, -1082130432, 1, 0, 0))
			{
				if (_0x23e33cb9f4a3f547(Local_528.f_1, sLocal_33))
				{
					_set_anim_scene_playback_list_bool(Local_528.f_1, sLocal_33, true);
				}
				func_133(0);
				func_133(1);
				func_133(2);
				func_133(3);
				func_134(&Local_772, iVar783, iVar784);
				func_41(&(Local_51.f_5), 1);
				func_130(&uLocal_758, 2);
			}
			break;
		case 2:
			switch (iVar811)
			{
				case 0:
					func_135(Local_936[0], &(Local_936[0]->f_21), uLocal_1242[0], 0);
					break;
				case 1:
					func_135(Local_936[1], &(Local_936[1]->f_21), uLocal_1242[1], 0);
					break;
				case 2:
					func_135(Local_936[2], &(Local_936[2]->f_21), uLocal_1242[2], 0);
					break;
				case 3:
					func_135(Local_936[3], &(Local_936[3]->f_21), uLocal_1242[3], 0);
					break;
				default:
					if (iLocal_14 == 1)
					{
						func_136(&(Local_936[1]->f_21), iLocal_14, 0, 0);
						func_136(&(Local_936[3]->f_21), iLocal_14, 0, 0);
						func_137(Local_936[1], 0);
						func_137(Local_936[3], 0);
						func_138(&(Local_936[1]->f_21), 1, 0);
						func_138(&(Local_936[3]->f_21), 1, 0);
					}
					func_130(&uLocal_758, 3);
					break;
			}
			uLocal_813 = iVar811 + 1;
			break;
		case 3:
			func_139();
			func_140();
			func_141();
			func_142();
			func_143();
			if (!func_127(256))
			{
				if (func_144())
				{
					func_101(256);
				}
			}
			if (!func_127(512))
			{
				if (func_145())
				{
					func_101(256);
				}
			}
			if (iLocal_14 == 1 && func_146())
			{
				func_63(&iLocal_831);
				func_147(&(Local_51.f_5));
				func_130(&uLocal_758, 9);
			}
			else if (func_28(32))
			{
				func_148();
				func_63(&iLocal_831);
				func_31(134217728);
				func_31(268435456);
				func_147(&(Local_51.f_5));
				func_130(&uLocal_758, 9);
			}
			else if (func_127(256) || func_127(512))
			{
				func_63(&iLocal_831);
				func_149();
				func_150(&(iLocal_35[1]), (35f + 10f), 0);
				func_150(&(iLocal_35[2]), (35f + 10f), 0);
				func_147(&(Local_51.f_5));
				if (func_151())
				{
					func_148();
				}
				func_130(&uLocal_758, 12);
			}
			break;
		case 4:
			if (func_152())
			{
				func_130(&uLocal_758, 12);
			}
			break;
		case 7:
			func_153();
			func_154(1);
			if (func_155())
			{
				func_150(&(iLocal_35[2]), (35f + 10f), 0);
				func_150(&(iLocal_35[3]), (35f + 10f), 0);
				func_148();
				func_156();
				func_63(&iLocal_831);
				func_130(&uLocal_758, 8);
			}
			break;
		case 8:
			func_153();
			if (func_157())
			{
				if (func_158(&uLocal_923))
				{
					if (func_159(&uLocal_923) > 2f)
					{
						func_31(8388608);
						func_160(2097152, 0);
						func_160(2097152, 1);
						func_161(0, 1);
						func_162(&(Local_51.f_5));
						func_130(&uLocal_758, 12);
					}
				}
				else
				{
					func_163(&uLocal_923);
				}
			}
			break;
		case 9:
			func_153();
			func_154(1);
			if (func_155())
			{
				func_150(&(iLocal_35[1]), (35f + 10f), 0);
				func_150(&(iLocal_35[2]), (35f + 10f), 0);
				func_148();
				func_156();
				func_63(&iLocal_831);
				func_130(&uLocal_758, 10);
			}
			break;
		case 10:
			func_153();
			func_154(1);
			if (func_127(4096) && !func_127(8192))
			{
				if (func_164() || func_157())
				{
					Local_51.f_46 = 1;
					func_101(8192);
					func_130(&uLocal_758, 9);
				}
			}
			if (!func_127(16384))
			{
				if ((is_entity_dead(iLocal_34) || !is_vehicle_driveable(iLocal_34, true, false)) || is_entity_on_fire(iLocal_34))
				{
					iVar3 = 0;
					while (iVar3 < 4)
					{
						if (func_165(1073741824, iVar3))
						{
							func_160(1073741824, iVar3);
							if (!is_ped_dead_or_dying(&(iLocal_35[iVar3]), true))
							{
								task_combat_hated_targets_around_ped(&(iLocal_35[iVar3]), 100f, 0, 0);
							}
						}
						iVar3++;
					}
					func_101(16384);
					func_166(&iLocal_34);
				}
			}
			if ((!func_28(134217728) || func_164()) && (!func_28(268435456) || func_157()))
			{
				func_163(&uLocal_932);
				func_130(&uLocal_758, 11);
			}
			break;
		case 11:
			if (!func_28(134217728) || !func_28(268435456))
			{
				func_167(&uLocal_932);
				func_130(&uLocal_758, 12);
			}
			else if (func_168(&uLocal_932, 3f))
			{
				func_169(Global_35, 0, 536870912, -417894478);
				func_130(&uLocal_758, 12);
			}
			break;
		case 12:
			if (func_170(&uLocal_806))
			{
				return false;
			}
			if (!Local_51.f_46)
			{
				if (!func_171(1073741824))
				{
					if (func_158(&uLocal_923))
					{
						if (is_scripted_speech_playing(Global_35))
						{
							func_163(&uLocal_923);
						}
						else if (func_28(262144) || func_29(Local_51.f_51, 1) > 45f)
						{
							func_167(&uLocal_923);
						}
						else if (func_168(&uLocal_923, 3f))
						{
							func_169(Global_35, 0, 1073741824, -417894478);
						}
					}
					else if (!func_28(262144))
					{
						if (func_29(Local_51.f_51, 1) < 45f)
						{
							func_163(&uLocal_923);
						}
					}
				}
			}
			if (func_28(33554432))
			{
				if (func_172(iVar1370))
				{
					if (func_158(&uLocal_929))
					{
						if (func_173(&uLocal_929) > 7000)
						{
							func_174(iVar1370, 580546400);
							func_167(&uLocal_929);
						}
						else
						{
							return false;
						}
					}
				}
				else if (func_175(Global_35, iLocal_34, 0))
				{
					iLocal_1372 = func_177(69, 24, func_176());
					if (func_172(iVar1370))
					{
						func_178(iVar1370, 580546400);
						func_163(&uLocal_929);
					}
				}
			}
			else if (!func_127(16384))
			{
				if ((func_179(18) && func_157()) && func_164())
				{
					if ((is_entity_dead(iLocal_34) || !is_vehicle_driveable(iLocal_34, true, false)) || is_entity_on_fire(iLocal_34))
					{
						func_101(16384);
						func_166(&iLocal_34);
					}
					else if (func_180(&iLocal_34))
					{
						func_181("RE_AMD_OBJ_HELP", 10000, 0, 0, 0, 1);
						func_31(33554432);
					}
				}
			}
			if ((!is_entity_dead(iLocal_34) && !func_127(4)) && func_109(iLocal_34, Local_51.f_51, 1) > 65f)
			{
				return true;
			}
			else if (func_29(Local_51.f_51, 1) > 80f)
			{
				func_182();
				return true;
			}
			break;
	}
	return false;
}

bool func_34(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_183(iParam0, iParam1);
}

int func_35(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		_0xe98d55c5983f2509(iParam0);
	}
	if (!get_ped_config_flag(iParam0, 178, true))
	{
		set_ped_config_flag(iParam0, 178, true);
	}
	if (get_ped_config_flag(iParam0, 297, true) != bParam2)
	{
		set_ped_config_flag(iParam0, 297, bParam2);
	}
	if (get_ped_config_flag(iParam0, 315, true))
	{
		set_ped_config_flag(iParam0, 315, false);
	}
	if (get_ped_config_flag(iParam0, 331, true))
	{
		set_ped_config_flag(iParam0, 331, false);
	}
	if (get_ped_config_flag(iParam0, 130, true))
	{
		set_ped_config_flag(iParam0, 130, false);
	}
	if (get_ped_config_flag(iParam0, 301, true))
	{
		set_ped_config_flag(iParam0, 301, false);
	}
	if (bParam2 && bParam3)
	{
		if (_0x870708a6e147a9ad(iParam0, "INTERACT_LOCKON", fParam1, 0, 0, 0, 0, 0, 0, -1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_36(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_184(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_185(uParam0, iParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_186(&(uParam0->f_5));
			}
			func_51(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_187(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_188(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_189(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					func_190(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_191(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_71(uParam0->f_3, 128))
	{
		if ((does_entity_exist(iParam1[0]) && !is_ped_injured(iParam1[0])) && uParam0->f_3 != 49)
		{
			if (!_0xf6a8a652a6b186cd(_0xf6f5447d418daa82(iParam1[0])))
			{
				func_192(uParam0, iParam1[0]);
			}
		}
		if (bParam6)
		{
			if (_is_ped_carrying(Global_35))
			{
				iVar1 = _get_first_entity_ped_is_carrying(Global_35);
				if (does_entity_exist(iVar1))
				{
					if (is_entity_a_ped(iVar1))
					{
						iVar2 = get_ped_index_from_entity_index(iVar1);
						if (does_entity_exist(iVar2))
						{
							if (_is_ped_hogtied(iVar2) || ((bParam5 || is_ped_human(iVar2)) && is_entity_dead(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

void func_37(int iParam0)
{
	func_193(iParam0, 0);
	func_194(iParam0, 0);
	func_42(iParam0, 1);
	func_43(iParam0, 1);
	func_195(iParam0, 0);
	func_196(iParam0, 1);
	func_197(iParam0, 1, 1, 1);
}

var func_38(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_198(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_199(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_198(sVar0, iParam1, 0, 0, 1, 1);
}

int func_39(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_1;
}

int func_40(int iParam0)
{
	return &(Global_17504.f_42[iParam0]);
}

void func_41(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(&(iParam0->f_1), 16);
	}
	else
	{
		func_51(&(iParam0->f_1), 16);
	}
}

void func_42(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(&(iParam0->f_1), 256);
	}
	else
	{
		func_51(&(iParam0->f_1), 256);
	}
}

void func_43(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(iParam0, 16);
	}
	else
	{
		func_50(iParam0, 67108864);
		func_50(iParam0, 16);
	}
}

void func_44(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(iParam0, 262144);
	}
	else
	{
		func_50(iParam0, 262144);
	}
}

void func_45(int iParam0)
{
	func_201(iParam0, (func_200(iParam0) - 6f));
	func_202(iParam0, 1);
}

void func_46(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(&(iParam0->f_1), 2);
	}
	else
	{
		func_51(&(iParam0->f_1), 2);
	}
}

void func_47(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(&(iParam0->f_1), 4);
	}
	else
	{
		func_51(&(iParam0->f_1), 4);
	}
}

void func_48(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(&(iParam0->f_1), 131072);
	}
	else
	{
		func_51(&(iParam0->f_1), 131072);
	}
}

void func_49(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(iParam0, 4);
	}
	else
	{
		func_50(iParam0, 4);
	}
}

void func_50(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_51(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_52()
{
	if (func_203(2, 2))
	{
		return;
	}
	if (func_28(2))
	{
		func_204(2, 2);
	}
}

bool func_53(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return false;
		case 3:
			return false;
		default:
			break;
	}
	return false;
}

void func_54(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_205(uParam0);
		func_206(iParam1, uParam2);
	}
	func_207(*uParam0, 1, bParam4);
}

void func_55()
{
	if ((does_entity_exist(iLocal_34) && is_entity_dead(iLocal_34)) && !_does_volume_exist(iVar832))
	{
		vVar0 = { get_entity_coords(iLocal_34, false, false) };
		func_208(&uLocal_834, vVar0, 0f, 0f, 0f, 4f, 4f, 2f, "REAMD_VOL_VEHICLE_AVOID");
		_0xb56d41a694e42e86(iVar832, 0, 0, 0, -1, -1, 0);
		_0x18262cafebb5fbe1(iVar832, 0, 0, 0, -1, -1, 0);
	}
}

void func_56()
{
	if (does_entity_exist(iLocal_34))
	{
		if (func_209(iLocal_34, 1, 1) > 150f)
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_34(&(iLocal_35[iVar0]), 0, 1))
				{
					_0x39a2fc5af55a52b1(&(iLocal_35[iVar0]), -1);
				}
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!is_entity_dead(&(uLocal_45[iVar0])))
				{
					_0x39a2fc5af55a52b1(&(uLocal_45[iVar0]), -1);
				}
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (does_entity_exist(Local_503[iVar0]->f_8))
				{
					func_210(Local_503[iVar0]->f_8, 1, 1);
					delete_object(&(Local_503[iVar0]->f_8));
				}
				iVar0++;
			}
			if (_does_propset_exist(iVar828))
			{
				_delete_propset(iVar828, true, true);
			}
			if (does_entity_exist(iLocal_34))
			{
				delete_vehicle(&iLocal_34);
			}
		}
		else if (is_vehicle_driveable(iLocal_34, true, false))
		{
			if (_does_propset_exist(iVar828))
			{
				_set_propset_as_no_longer_needed(iVar828);
			}
			if (!Local_51.f_48 || func_28(-2147483648))
			{
				iVar1 = func_211(&iLocal_35);
				if (func_34(&(iLocal_35[iVar1]), 0, 1))
				{
					open_sequence_task(&iVar2);
					task_enter_vehicle(0, iLocal_34, -1, -1, 2f, 1, 0);
					if (!is_string_null_or_empty(func_83(iVar783, iVar784)) && get_is_waypoint_recording_loaded(func_83(iVar783, iVar784)))
					{
						task_vehicle_follow_waypoint_recording(0, iLocal_34, func_83(iVar783, iVar784), 524311, 0, 2056, -1, -1082130432, 0, 1073741824, 0);
					}
					task_vehicle_drive_wander(0, iLocal_34, 3f, 524295);
					func_212(&(iLocal_35[iVar1]), &iVar2, 0, 0, 1, 1);
					func_213(8388608, iVar1);
					set_ped_keep_task(&(iLocal_35[iVar1]), true);
				}
				else
				{
					set_vehicle_as_no_longer_needed(&iLocal_34);
					set_vehicle_as_no_longer_needed(&iLocal_34);
				}
			}
			else
			{
				set_vehicle_as_no_longer_needed(&iLocal_34);
				set_vehicle_as_no_longer_needed(&iLocal_34);
			}
		}
		else
		{
			set_vehicle_as_no_longer_needed(&iLocal_34);
			set_vehicle_as_no_longer_needed(&iLocal_34);
		}
	}
}

void func_57()
{
	if (!Local_51.f_48 || func_28(-2147483648))
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (func_34(&(iLocal_35[iVar2]), 0, 1))
			{
				if (!func_165(8388608, iVar2) && !func_165(16777216, iVar2))
				{
					if (!bVar0 && !is_entity_dead(&(uLocal_45[0])))
					{
						iVar4 = &uLocal_45[0];
						bVar0 = true;
					}
					else if (!bVar1 && !is_entity_dead(&(uLocal_45[1])))
					{
						iVar4 = &uLocal_45[1];
						bVar1 = true;
					}
					else
					{
						iVar4 = 0;
					}
					if (does_entity_exist(iVar4))
					{
						open_sequence_task(&iVar3);
						task_mount_animal(0, iVar4, -1, -1, 1073741824, 1, 0, 0);
						task_wander_standard(0, 40000f, 0);
						func_212(&(iLocal_35[iVar2]), &iVar3, 0, 0, 1, 1);
						func_213(16777216, iVar2);
						set_ped_keep_task(&(iLocal_35[iVar2]), true);
					}
				}
			}
			iVar2++;
		}
	}
}

void func_58(bool bParam0)
{
	set_ped_config_flag(get_player_ped(player_id()), 2, !bParam0);
}

void func_59(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (are_strings_equal(_0xf81c53561d15f330(), func_214(uParam0->f_3)))
	{
		_0x1096603b519c905f("");
	}
	if (uParam0->f_48)
	{
		stop_audio_scene("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_215(uParam0->f_3, 524288);
		}
	}
	if (func_34(player_ped_id(), 0, 1))
	{
		iVar1 = get_mount(Global_35);
		set_ped_config_flag(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			bVar3 = (bParam8 && decor_exist_on(iParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_34(iParam1[iVar0], 0, 0))
			{
				func_216(iParam1[iVar0], bVar3);
				if (func_217(uParam0, (*iParam1)[iVar0]))
				{
					func_218((*iParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_34(iParam1[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (get_ped_stealth_movement(iParam1[iVar0]))
						{
							set_ped_stealth_movement(iParam1[iVar0], 0, 0, 0);
						}
						else if (_get_ped_crouch_movement(iParam1[iVar0]))
						{
							_set_ped_crouch_movement(iParam1[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							func_220(iParam1[iVar0], 1073741824, func_219(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
						}
						else
						{
							task_wander_standard(iParam1[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_221(uParam0);
	}
	func_222(uParam0);
	if (!uParam0->f_186)
	{
		func_184(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_223(uParam0->f_3, uParam0->f_185);
		_int_to_string(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		func_224(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_60(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (does_entity_exist((*uParam0)[iVar0]->f_8))
		{
			set_object_as_no_longer_needed(&((*uParam0)[iVar0]->f_8));
		}
		iVar0++;
	}
}

void func_61(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_216(uParam0[iVar0], 0);
		iVar0++;
	}
}

void func_62(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_63((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_63(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_64(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_65(var uParam0)
{
	if (*uParam0 != 0)
	{
		remove_shocking_event(*uParam0);
		*uParam0 = 0;
	}
}

void func_66(var uParam0, int iParam1)
{
	if (func_225(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

void func_67(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_1))
	{
		_delete_anim_scene(uParam0->f_1);
		uParam0->f_1 = -1;
	}
}

bool func_68(bool bParam0)
{
	iVar0 = get_cause_of_most_recent_force_cleanup();
	if (bParam0)
	{
		return true;
	}
	if (func_226(iVar0))
	{
		return false;
	}
	if (func_227(iVar0, 1) || func_227(iVar0, 2))
	{
		return true;
	}
	return false;
}

int func_69(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_228(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_229(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_187(iParam0, 128))
			{
				if (!func_230(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_231(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_232(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_105(*uParam1))
				{
					return func_233(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_234(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_2(Param4.f_2, 8))
				{
					func_229(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_235(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_236(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_237(vdist(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (func_187(iParam0, 128))
			{
				if (!func_238(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_233(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_231(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (vdist2(*uParam1, Global_36) < to_float(iVar0))
				{
					if (!func_235(uParam1))
					{
						return func_233(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (func_239(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_229(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_233(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		func_38("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_38("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_70(var uParam0, int iParam1)
{
	if (func_71(iParam1, 256))
	{
		if (_does_volume_exist(uParam0->f_172) || func_241(iParam1, func_240(uParam0), &(uParam0->f_172)))
		{
			if (func_34(Global_35, 0, 1))
			{
				return is_entity_in_volume(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_71(int iParam0, int iParam1)
{
	if (!func_242(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

void func_72(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_208(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_71(uParam0->f_3, 1) && !func_71(uParam0->f_3, 32))
	{
		func_208(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_71(uParam0->f_3, 2) && !func_71(uParam0->f_3, 32))
	{
		func_208(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	_0xb56d41a694e42e86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	_0x18262cafebb5fbe1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_243(uParam0->f_171, 1);
	}
	if (func_71(uParam0->f_3, 1))
	{
		func_208(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, _0x3e2a25b2416dd67e(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_244(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (does_entity_exist(iParam2))
	{
		_0x7c00cfc48a782dc0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_73(vector3 vParam0)
{
	vVar0 = { Global_36 - vParam0 };
	return get_heading_from_vector_2d(vVar0.x, vVar0.y);
}

void func_74(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 8;
	if (bParam4)
	{
		iVar0 |= 72;
	}
	if (bParam5)
	{
		iVar0 |= 131072;
	}
	if (bParam6)
	{
		iVar0 |= 24;
	}
	if (bParam7)
	{
		iVar0 |= 40;
	}
	if (bParam8)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

bool func_75(var uParam0)
{
	iVar0 = func_245(uParam0->f_3);
	iVar1 = func_246(1);
	if (iVar1 > 0)
	{
		iVar0 = (iVar0 + iVar1);
	}
	_0xed9582b3da8f02b4(iVar0);
	if (_0x5c16855277819bbf() >= iVar0)
	{
		return true;
	}
	return false;
}

void func_76(int iParam0)
{
	Local_245[0] = 22;
	Local_245[1] = 22;
	Local_245[2] = 22;
	Local_245[3] = 22;
	Local_245[0]->f_1 = 1057570823;
	Local_245[1]->f_1 = 1057570823;
	Local_245[2]->f_1 = -355385988;
	Local_245[3]->f_1 = -355385988;
	Local_245[0]->f_6 = { -2.5f, 4f, 0f };
	Local_245[1]->f_6 = { -3f, 4f, 0f };
	Local_245[2]->f_6 = { -2.5f, 3f, 0f };
	Local_245[3]->f_6 = { -3f, 3f, 0f };
	func_247(&(Local_245[0]->f_22));
	func_247(&(Local_245[1]->f_22));
	func_247(&(Local_245[2]->f_22));
	func_247(&(Local_245[3]->f_22));
	switch (iLocal_14)
	{
		case 0:
			StringCopy(&(Local_245[0]->f_23), "0920_A_M_M_Civ_Poor_White_AVOID_03", 64);
			StringCopy(&(Local_245[1]->f_23), "0926_A_M_M_Civ_Poor_White_AVOID_09", 64);
			StringCopy(&(Local_245[2]->f_23), "0177_G_M_Y_UniExConfeds_01_WHITE_01", 64);
			StringCopy(&(Local_245[3]->f_23), "0175_G_M_O_UniExConfeds_01_WHITE_02", 64);
			Local_245[0]->f_3 = -853749714;
			Local_245[1]->f_3 = 2136061081;
			Local_245[2]->f_3 = -1701454806;
			Local_245[3]->f_3 = -73982421;
			break;
		default:
			StringCopy(&(Local_245[0]->f_23), "0923_A_M_M_Civ_Poor_White_AVOID_06", 64);
			StringCopy(&(Local_245[1]->f_23), "0907_A_M_M_Civ_Poor_White_AGGRESSIVE_07", 64);
			StringCopy(&(Local_245[2]->f_23), "0176_G_M_O_UniExConfeds_01_WHITE_03", 64);
			StringCopy(&(Local_245[3]->f_23), "1026_G_M_Y_UniExConfeds_01_WHITE_04", 64);
			Local_245[0]->f_3 = -1399124181;
			Local_245[1]->f_3 = -556829805;
			Local_245[2]->f_3 = 779191267;
			Local_245[3]->f_3 = -1666457514;
			break;
	}
	Local_374[0]->f_1 = -1038436471;
	Local_374[1]->f_1 = 2024948086;
	Local_374[2]->f_1 = -1693870200;
	Local_374[3]->f_1 = -1599683008;
	Local_374[0]->f_6 = { -4f, 4f, 0f };
	Local_374[1]->f_6 = { -3f, 4f, 0f };
	Local_374[2]->f_6 = { -2f, 4f, 0f };
	Local_374[3]->f_6 = { -1f, 4f, 0f };
	func_248(&Local_51, 2);
}

void func_77(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_249(&((*iParam0)[iVar0]->f_1));
		func_249(&((*iParam0)[iVar0]->f_12));
		iVar0++;
	}
}

void func_78()
{
	switch (iLocal_14)
	{
		case 1:
			Local_503[1]->f_7 = -770982987;
			*Local_503[1] = { 0f, 0f, 0f };
			Local_503[1]->f_3 = 0f;
			Local_503[1]->f_10 = 0;
			Local_503[0]->f_7 = 438400824;
			*Local_503[0] = { 0f, -0.5f, 0.15f };
			Local_503[0]->f_3 = 0f;
			Local_503[0]->f_10 = 0;
			break;
	}
}

void func_79(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_7 != 0)
		{
			request_model((*uParam0)[iVar0]->f_7, false);
		}
		iVar0++;
	}
}

void func_80()
{
	Local_670[0] = "script_re@arms_deal";
	Local_670[0]->f_1 = "BREAKOUT_A_PED02";
	Local_670[1] = "script_re@arms_deal";
	Local_670[1]->f_1 = "BREAKOUT_B_CON02";
	Local_670[2] = "script_re@arms_deal";
	Local_670[2]->f_1 = "ACTION_B_PED02";
	Local_670[3] = "script_re@arms_deal";
	Local_670[3]->f_1 = "ACTION_B_CON02";
	Local_670[4] = "script_re@arms_deal";
	Local_670[4]->f_1 = "ACTION_C_PED02";
	Local_670[5] = "script_re@arms_deal";
	Local_670[5]->f_1 = "ACTION_C_CON02";
	Local_670[6] = "script_re@arms_deal";
	Local_670[6]->f_1 = "THANKS_D_PED01";
	Local_670[7] = "script_re@arms_deal";
	Local_670[7]->f_1 = "THANKS_B_PED02";
	Local_670[8] = "script_re@arms_deal";
	Local_670[8]->f_1 = "THANKS_C_CON01";
	Local_670[9] = "script_re@arms_deal";
	Local_670[9]->f_1 = "THANKS_A_CON02";
	func_250(&(Local_670[9]), &uLocal_549);
	Local_670[10] = "ai_react@breakouts@gen_male@kneel@bknee_down@generic@quick";
	Local_670[10]->f_1 = "breakout_quick_front";
	Local_670[11] = "ai_react@breakouts@gen_male@kneel@bknee_down@generic@quick";
	Local_670[11]->f_1 = "breakout_quick_backleft";
	Local_670[12] = "ai_react@breakouts@gen_male@kneel@bknee_down@generic@quick";
	Local_670[12]->f_1 = "breakout_quick_backright";
	Local_670[13] = "ai_react@breakouts@gen_male@kneel@bknee_down@generic@quick";
	Local_670[13]->f_1 = "breakout_quick_left";
	Local_670[14] = "ai_react@breakouts@gen_male@kneel@bknee_down@generic@quick";
	Local_670[14]->f_1 = "breakout_quick_right";
	func_250(&(Local_670[14]), &uLocal_549);
}

void func_81()
{
	switch (iLocal_14)
	{
		case 1:
			Local_528.f_4 = "script@beat@wilderness@armsDeal@inspectSuccess";
			sLocal_32 = func_251(0);
			sLocal_33 = func_251(1);
			break;
		case 0:
			Local_528.f_4 = "script@beat@wilderness@armsDeal@ambush";
			sLocal_32 = func_251(4);
			sLocal_33 = func_251(5);
			break;
	}
	if (!is_string_null_or_empty(Local_528.f_4))
	{
		Local_528.f_1 = _create_anim_scene(Local_528.f_4, 64, 0, false, true);
		if (!_is_anim_scene_loaded(Local_528.f_1, true, false))
		{
			load_anim_scene(Local_528.f_1);
		}
	}
}

void func_82()
{
	Local_701 = { 0f, 0f, 0f };
	Local_701.f_3 = Global_35;
	Local_701.f_8 = 4;
	Local_701.f_19 = 4;
	Local_701.f_20 = 4;
	Local_701.f_21 = 4;
	Local_701.f_22 = 4;
	Local_701.f_17 = 3;
	Local_701.f_18 = 3;
	Local_701.f_7 = 0;
	Local_726 = { 0f, 0f, 0f };
	Local_726.f_3 = Global_35;
	Local_726.f_8 = 3;
	Local_726.f_19 = 3;
	Local_726.f_20 = 3;
	Local_726.f_21 = 3;
	Local_726.f_22 = 3;
	Local_726.f_17 = 2;
	Local_726.f_18 = 2;
	Local_726.f_7 = 0;
}

char* func_83(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "re_arms_deal_scm_00";
		case 1:
			return "re_arms_deal_scm_01";
		case 2:
			return "re_arms_deal_scm_02";
		case 3:
			return "re_arms_deal_scm_03";
		case 4:
			return "re_arms_deal_scm_04";
		case 5:
			return "re_arms_deal_scm_05";
		default:
			break;
	}
	return "";
}

bool func_84(var uParam0, var uParam1)
{
	return true;
}

bool func_85(var uParam0)
{
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!is_string_null_or_empty((*uParam0)[iVar1]))
		{
			if (!has_anim_dict_loaded((*uParam0)[iVar1]))
			{
				bVar0 = false;
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		return false;
	}
	return true;
}

bool func_86(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_7 != 0)
		{
			if (!has_model_loaded((*uParam0)[iVar0]->f_7))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_87(int iParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!func_252((*iParam0)[iVar0]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_88(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
{
	if (*iParam4 != *iParam5)
	{
		return false;
	}
	if (iParam7 < 0 || iParam7 >= *iParam4)
	{
		iParam7 = 0;
	}
	if (iParam8 < 0 || iParam8 >= *iParam4)
	{
		iParam8 = (*iParam4 - 1);
	}
	iVar0 = iParam7;
	while (iVar0 <= iParam8)
	{
		if (func_253() || !func_254((*iParam4)[iVar0], (*iParam5)[iVar0], vParam0, fParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_89(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7)
{
	iVar0 = create_vehicle(iParam0, vParam1, fParam4, bParam5, bParam6, bParam7, false);
	_0xa91e6cf94404e8c9(iVar0);
	return iVar0;
}

int func_90(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return 0;
	}
	if (func_255(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_91(int iParam0)
{
	if (is_vehicle_driveable(iParam0, false, false))
	{
		sVar0 = "wagon_block_honor";
		if (!decor_exist_on(iParam0, sVar0))
		{
			decor_set_bool(iParam0, sVar0, true);
		}
	}
}

void func_92(int iParam0, int iParam1)
{
	if (!is_entity_dead(*iParam0))
	{
		decor_set_int(*iParam0, "wagonFenceValue", iParam1);
	}
}

void func_93(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_94(int iParam0)
{
	if (!is_entity_dead(&(iLocal_35[iParam0])))
	{
		func_256(iLocal_35[iParam0]);
		func_257(&(iLocal_35[iParam0]), 0);
		set_ped_config_flag(&(iLocal_35[iParam0]), 277, false);
		set_ped_config_flag(&(iLocal_35[iParam0]), 6, false);
		set_ped_config_flag(&(iLocal_35[iParam0]), 250, true);
		remove_all_ped_weapons(&(iLocal_35[iParam0]), true, true);
		func_259(&(iLocal_35[iParam0]), func_258(iParam0), -1, 0, 0, 1056964608, 1065353216, 0);
		set_ammo_in_clip(&(iLocal_35[iParam0]), func_258(iParam0), -1);
		switch (iParam0)
		{
			case 0:
			case 1:
				func_260(&(Local_51.f_5), &(iLocal_35[iParam0]), 0);
				set_ped_relationship_group_hash(&(iLocal_35[iParam0]), iVar763);
				break;
			default:
				set_ped_relationship_group_hash(&(iLocal_35[iParam0]), iVar762);
				break;
		}
		if (iParam0 != 1)
		{
			func_90(&(iLocal_35[iParam0]), &Local_51, 0);
		}
		if (iParam0 == 2)
		{
			func_262(&(iLocal_35[iParam0]), func_261(375893482, 0, -1));
		}
		if (iLocal_14 == 1 && (iParam0 == 3 || iParam0 == 1))
		{
			func_150(&(iLocal_35[iParam0]), (35f + 10f), 1);
		}
	}
}

void func_95(var uParam0, int iParam1, int iParam2)
{
	if (is_ped_human(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			decor_set_bool(iParam1, "HorseTeamA", true);
			break;
		case 1:
			decor_set_bool(iParam1, "HorseTeamB", true);
			break;
		case 2:
			decor_set_bool(iParam1, "HorseTeamA", true);
			decor_set_bool(iParam1, "HorseTeamB", true);
			break;
		default:
			break;
	}
	decor_set_int(iParam1, "HorseScriptCreator", get_hash_of_this_script_name());
}

Vector3 func_96(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 11:
					switch (iParam2)
					{
						case 0:
							return 1849.925f, -372.9819f, 42.48963f;
						case 1:
							return 1313.032f, -1633.066f, 65.66283f;
						case 2:
							return 789.1741f, -895.3729f, 50.49248f;
						case 3:
							return 853.8925f, -540.4401f, 87.58936f;
						case 4:
							return 1375.436f, -1681.776f, 66.682f;
						case 5:
							return 1575.729f, -1165.941f, 44.7604f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 11:
					switch (iParam2)
					{
						case 0:
							return 1851.821f, -372.0927f, 42.44438f;
						case 1:
							return 1311.263f, -1631.586f, 65.56376f;
						case 2:
							return 791.3358f, -893.1277f, 50.59101f;
						case 3:
							return 852.2385f, -542.253f, 87.28247f;
						case 4:
							return 1378.482f, -1684.875f, 66.6328f;
						case 5:
							return 1577.251f, -1167.564f, 44.6889f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_97(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 11:
					switch (iParam2)
					{
						case 0:
							return 88.35f;
						case 1:
							return 168.73f;
						case 2:
							return 91.42f;
						case 3:
							return -84.78f;
						case 4:
							return 322f;
						case 5:
							return 5f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 11:
					switch (iParam2)
					{
						case 0:
							return 76.31f;
						case 1:
							return 162.57f;
						case 2:
							return 89.34f;
						case 3:
							return -92.82f;
						case 4:
							return 333f;
						case 5:
							return 0f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f;
}

void func_98(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_263(Global_35) && is_player_teleport_active())
	{
	}
	if (func_264(iParam0))
	{
		if (func_265(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_103(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_98(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_98(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_103(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_103(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_103(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_103(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_103(iParam5, 129))
	{
		if (func_103(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_103(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_103(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_103(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_264(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_103(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_103(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

void func_99(var uParam0, bool bParam1)
{
	if (func_34(*uParam0, 0, 0))
	{
		set_ped_config_flag(*uParam0, 277, bParam1);
	}
}

bool func_100(int iParam0, int iParam1)
{
	if (!func_266(iParam0, 1))
	{
		return false;
	}
	if (iParam1 >= 0 && iParam1 <= 100)
	{
		iVar0 = iParam1;
	}
	else if (iParam1 > 100)
	{
		iVar0 = 100;
	}
	else
	{
		iVar0 = func_267(iParam0);
	}
	bVar1 = get_random_int_in_range(0, 100) < iVar0;
	return bVar1;
}

void func_101(int iParam0)
{
	if (!func_127(iParam0))
	{
		func_110(&uLocal_807, iParam0);
	}
}

void func_102(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_225(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, iParam4, iParam5, iParam6, iParam7);
		if (func_225(uParam0))
		{
		}
	}
}

bool func_103(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_104(var uParam0, bool bParam1)
{
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + 5f);
	if (bParam1)
	{
		if (!func_107(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 };
		}
	}
}

bool func_105(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_106(float fParam0)
{
	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

bool func_107(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_268(*uParam0, 0f, 0f, 0f))
	{
		return true;
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
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

void func_108(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, float fParam9, int iParam10)
{
	(*uParam0)[0] = fParam1;
	(*uParam0)[1] = fParam2;
	(*uParam0)[2] = fParam3;
	(*uParam0)[3] = fParam4;
	(*uParam0)[4] = fParam5;
	(*uParam0)[5] = fParam6;
	(*uParam0)[6] = fParam7;
	(*uParam0)[7] = iParam8;
	(*uParam0)[8] = fParam9;
	(*uParam0)[9] = iParam10;
}

float func_109(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_110(var uParam0, int iParam1)
{
	func_269(uParam0, iParam1);
}

bool func_111()
{
	if (!func_270(Global_1395482->f_1))
	{
		return false;
	}
	return func_271(Global_1395482->f_1, 32);
}

bool func_112(int iParam0)
{
	if (func_71(iParam0, 1))
	{
		return false;
	}
	return (1 == func_272(iParam0) || 2 == func_272(iParam0));
}

float func_113(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_114()
{
	if (Local_51.f_46)
	{
		bVar2 = func_273();
		if (!func_28(268435456))
		{
			if (func_274(&iLocal_35, &(Local_51.f_5), &uLocal_836, &uLocal_811, 2, 3, 1) || (bVar2 && !func_28(8388608)))
			{
				func_275(0, 0, 0, 0);
				func_31(268435456);
				func_101(8192);
				func_276(&(iLocal_35[2]), 67108864, &(iLocal_35[3]), 524288, 0, 0, 0, 0, -1, -1, -1, -1);
				func_130(&uLocal_758, 9);
				func_277(&(Local_51.f_5), &uLocal_836);
			}
		}
		if (!func_28(134217728))
		{
			if (func_274(&iLocal_35, &(Local_51.f_5), &uLocal_836, &uLocal_812, 0, 1, 1) || (bVar2 && func_28(8388608)))
			{
				func_275(0, 0, 0, 0);
				func_31(134217728);
				func_101(8192);
				func_276(&(iLocal_35[0]), 67108864, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1);
				if (!bVar792)
				{
					func_278(&(iLocal_35[1]), 1);
					iLocal_800 = 1;
				}
				func_130(&uLocal_758, 9);
				func_277(&(Local_51.f_5), &uLocal_836);
			}
			if (func_279(&iLocal_34))
			{
				func_275(0, 0, 0, 0);
				func_276(&(iLocal_35[0]), 16777216, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1);
				if (!bVar792)
				{
					func_278(&(iLocal_35[1]), 1);
					iLocal_799 = 1;
				}
				func_31(268435456);
				func_31(134217728);
				func_31(1073741824);
				func_101(8192);
				func_130(&uLocal_758, 9);
				return;
			}
		}
		return;
	}
	if (!func_28(1073741824))
	{
		if ((iLocal_14 == 1 || func_127(256)) || func_127(512))
		{
			if (func_279(&iLocal_34))
			{
				Local_51.f_46 = 1;
				func_275(0, 0, 0, 0);
				func_276(&(iLocal_35[2]), 16777216, &(iLocal_35[3]), 16777216, &(iLocal_35[0]), 16777216, 0, 0, -1, -1, -1, -1);
				func_31(268435456);
				func_101(8192);
				if (iLocal_14 != 1)
				{
					func_31(134217728);
				}
				func_31(1073741824);
				func_130(&uLocal_758, 9);
				return;
			}
		}
	}
	if (func_164())
	{
		iVar0 = 2;
		iVar1 = 3;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 3;
	}
	if (func_273() || func_274(&iLocal_35, &(Local_51.f_5), &uLocal_836, &uLocal_810, iVar0, iVar1, 1))
	{
		Local_51.f_46 = 1;
		bVar3 = false;
		bVar4 = false;
		if (Local_51.f_5.f_10 == &iLocal_35[2] || Local_51.f_5.f_10 == &iLocal_35[3])
		{
			bVar3 = true;
		}
		if (func_28(67108864))
		{
			if (iVar1246 == 2 || iVar1246 == 3)
			{
				bVar3 = true;
			}
		}
		if (iVar834 == 1024)
		{
			bVar3 = false;
		}
		func_275(0, 0, 0, 0);
		if (iLocal_14 == 1)
		{
			if (bVar3)
			{
				if (!func_280(&Local_51, 0, 40f) || !func_280(&Local_51, 1, 40f))
				{
					func_31(268435456);
					func_276(&(iLocal_35[2]), 67108864, &(iLocal_35[3]), 524288, 0, 0, 0, 0, -1, -1, -1, -1);
				}
				else
				{
					bVar4 = true;
				}
			}
			else if (!func_280(&Local_51, 2, 40f) || !func_280(&Local_51, 3, 40f))
			{
				func_31(134217728);
				func_276(&(iLocal_35[0]), 67108864, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1);
				if (!bVar792)
				{
					func_278(&(iLocal_35[1]), 1);
					iLocal_800 = 1;
				}
			}
			else
			{
				bVar4 = true;
			}
		}
		else
		{
			bVar4 = true;
			if (func_281(&(iLocal_35[0])) || func_281(&(iLocal_35[1])))
			{
				func_276(&(iLocal_35[2]), 67108864, &(iLocal_35[3]), 524288, 0, 0, 0, 0, -1, -1, -1, -1);
				func_31(268435456);
				func_282(&(Local_51.f_5));
				func_277(&(Local_51.f_5), &uLocal_836);
				func_148();
				func_130(&uLocal_758, 7);
				return;
			}
		}
		if (bVar4)
		{
			func_31(134217728);
			func_31(268435456);
			func_101(8192);
			if (iVar834 == 1024)
			{
				func_31(536870912);
				func_284(&(iLocal_35[1]), Global_35, func_283(8388608, 2), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else if (bVar3)
			{
				func_276(&(iLocal_35[2]), 67108864, &(iLocal_35[3]), 524288, &(iLocal_35[0]), 67108864, &(iLocal_35[1]), 1048576, -1, -1, -1, -1);
			}
			else
			{
				func_276(&(iLocal_35[0]), 67108864, &(iLocal_35[2]), 67108864, &(iLocal_35[3]), 524288, 0, 0, -1, -1, -1, -1);
				if (!bVar792)
				{
					func_278(&(iLocal_35[1]), 1);
				}
			}
		}
		func_277(&(Local_51.f_5), &uLocal_836);
		func_147(&(Local_51.f_5));
		func_130(&uLocal_758, 9);
	}
	if ((func_28(128) && !is_entity_dead(iLocal_34)) && func_29(Local_51.f_51, 1) < 7f)
	{
		Local_51.f_46 = 1;
		func_31(268435456);
		func_31(134217728);
		func_101(8192);
		func_276(&(iLocal_35[2]), 67108864, &(iLocal_35[3]), 524288, 0, 0, 0, 0, -1, -1, -1, -1);
		func_277(&(Local_51.f_5), &uLocal_836);
		func_147(&(Local_51.f_5));
		func_130(&uLocal_758, 9);
	}
}

void func_115()
{
	if ((func_28(262144) || func_28(1048576)) || Local_51.f_46)
	{
		return;
	}
	if (iVar784 == 4)
	{
		if (func_29(Local_51.f_51, 1) > 55f)
		{
			return;
		}
	}
	else if (func_29(Local_51.f_51, 1) > 35f)
	{
		return;
	}
	fVar0 = 20f;
	if (!func_28(65536))
	{
		if ((func_28(4096) && func_34(&(iLocal_35[iVar1248]), 0, 0)) && func_285(&(iLocal_35[iVar1248]), iVar1248))
		{
			fVar1 = func_286(&Local_51, iVar1248);
			if (fVar1 < fVar0)
			{
				fVar0 = fVar1;
				func_31(65536);
				func_287(131072);
				func_287(16384);
				func_287(32768);
			}
		}
	}
	if (!func_28(131072))
	{
		if ((func_28(8192) && func_34(&(iLocal_35[iVar1249]), 0, 0)) && func_285(&(iLocal_35[iVar1249]), iVar1249))
		{
			fVar1 = func_286(&Local_51, iVar1249);
			if (fVar1 < fVar0)
			{
				fVar0 = fVar1;
				func_287(65536);
				func_31(131072);
				func_287(16384);
				func_287(32768);
			}
		}
	}
	if (!func_28(16384))
	{
		if ((func_28(1024) && func_34(&(iLocal_35[iVar1246]), 0, 0)) && func_285(&(iLocal_35[iVar1246]), iVar1246))
		{
			fVar1 = func_286(&Local_51, iVar1246);
			if (fVar1 < fVar0)
			{
				fVar0 = fVar1;
				func_287(65536);
				func_287(131072);
				func_31(16384);
				func_287(32768);
			}
		}
	}
	if (!func_28(32768))
	{
		if ((func_28(2048) && func_34(&(iLocal_35[iVar1247]), 0, 0)) && func_285(&(iLocal_35[iVar1247]), iVar1247))
		{
			fVar1 = func_286(&Local_51, iVar1247);
			if (fVar1 < fVar0 || fVar1 == fVar0)
			{
				fVar0 = fVar1;
				func_287(65536);
				func_287(131072);
				func_287(16384);
				func_31(32768);
			}
		}
	}
	if (iLocal_14 == 1)
	{
		if (func_28(2048))
		{
			if (!func_288(&(iLocal_35[3]), &(iLocal_35[1])))
			{
				func_287(32768);
			}
		}
	}
}

void func_116()
{
	if ((!func_28(4096) || is_entity_dead(&(iLocal_35[iVar1248]))) || func_165(2097152, iVar1248))
	{
		return;
	}
	if (!func_28(262144))
	{
		if (func_289(iVar1274) && func_28(65536))
		{
			func_31(262144);
			func_290(&uLocal_1276, 9, iVar1248);
		}
	}
	if (iVar1274 > 0)
	{
		if (func_291(iVar1248))
		{
			if (func_165(65536, iVar1248))
			{
				func_292(iVar1248);
				func_130(&uLocal_758, 9);
			}
		}
	}
	switch (iVar1274)
	{
		case 0:
			if (func_165(16384, iVar1248) || func_165(16384, iVar1249))
			{
				func_293(iVar1248, 0, 0, 0);
				func_290(&uLocal_1276, 10, iVar1249);
				return;
			}
			func_294(iVar1248, 0, func_28(2097152));
			func_293(iVar1248, func_28(2097152), 1, 1);
			func_290(&uLocal_1276, 4, iVar1248);
			break;
		case 2:
			func_295(iVar1248, &(uLocal_45[0]), 0, 1f, 0);
			func_290(&uLocal_1276, 4, iVar1248);
			break;
		case 4:
			if (is_ped_on_mount(&(iLocal_35[iVar1248])))
			{
				func_290(&uLocal_1276, 6, iVar1248);
			}
			break;
		case 6:
			if (_is_ped_getting_into_a_mount_seat(&(iLocal_35[iVar1249]), false))
			{
				func_294(iVar1248, 0, func_28(2097152));
				func_293(iVar1248, 0, 1, 1);
				open_sequence_task(&iVar0);
				task_follow_nav_mesh_to_coord(0, func_296(iVar783, iVar784), 1.75f, -1, 0.25f, 1, 40000f);
				_task_move_in_traffic(0, 2f, 0, 0);
				func_212(&(iLocal_35[iVar1248]), &iVar0, 0, 0, 1, 1);
				iVar0 = 0;
				open_sequence_task(&iVar0);
				task_stand_still(0, 500);
				task_follow_nav_mesh_to_coord(0, func_296(iVar783, iVar784), 1.75f, -1, 0.25f, 1, 40000f);
				func_212(&(iLocal_35[iVar1249]), &iVar0, 0, 0, 1, 1);
				func_290(&uLocal_1276, 5, iVar1248);
				iLocal_801 = get_game_timer();
			}
			break;
		case 5:
			if ((get_game_timer() - iVar799) < 3500)
			{
			}
			else
			{
				if (!does_group_exist(iVar933))
				{
					iLocal_935 = create_group(2);
					set_group_formation(iVar933, 3);
				}
				if (!_0x878b68960c1c2a35(&(iLocal_35[iVar1248]), iVar933))
				{
					set_ped_as_group_leader(&(iLocal_35[iVar1248]), iVar933, false);
				}
				func_290(&uLocal_1276, 7, iVar1248);
				Jump @769; //curOff = 649
				if ((!func_28(524288) && func_28(262144)) && func_28(131072))
				{
					task_stand_still(&(iLocal_35[iVar1248]), -1);
					func_290(&uLocal_1276, 8, iVar1248);
				}
				Jump @769; //curOff = 714
				if (func_28(524288))
				{
					func_290(&uLocal_1276, 2, iVar1248);
				}
				Jump @769; //curOff = 739
				if (func_297(iVar1248, iVar1249))
				{
					func_290(&uLocal_1276, 2, iVar1248);
				}
			}
			default:
				break;
	}
}

void func_117()
{
	if ((!func_28(8192) || is_entity_dead(&(iLocal_35[iVar1249]))) || func_165(2097152, iVar1249))
	{
		return;
	}
	if (!func_28(262144))
	{
		if (func_289(iVar1275) && func_28(131072))
		{
			func_31(262144);
			func_290(&uLocal_1277, 9, iVar1249);
		}
	}
	if (iVar1275 > 0)
	{
		if (func_291(iVar1249))
		{
			if (func_165(65536, iVar1249))
			{
				func_292(iVar1249);
				func_130(&uLocal_758, 9);
			}
		}
	}
	switch (iVar1275)
	{
		case 0:
			if (func_165(16384, iVar1248) || func_165(16384, iVar1249))
			{
				func_293(iVar1249, 0, 0, 0);
				func_290(&uLocal_1277, 10, iVar1249);
				return;
			}
			func_63(uLocal_40[iVar1249]);
			func_294(iVar1249, 1, (func_28(2097152) || func_165(131072, iVar1249)));
			func_293(iVar1249, func_28(2097152), 1, 1);
			func_290(&uLocal_1277, 4, iVar1249);
			break;
		case 2:
			func_295(iVar1249, &(uLocal_45[1]), 0, 1f, 0);
			func_290(&uLocal_1277, 4, iVar1249);
			break;
		case 4:
			if (_is_ped_getting_into_a_mount_seat(&(iLocal_35[iVar1249]), false))
			{
				func_294(iVar1249, 1, (func_28(2097152) || func_165(131072, iVar1249)));
				func_293(iVar1249, 0, 1, 1);
				func_290(&uLocal_1277, 5, iVar1249);
			}
			break;
		case 5:
			if (does_group_exist(iVar933))
			{
				clear_ped_tasks(&(iLocal_35[iVar1249]), 1, 0);
				set_ped_as_group_member(&(iLocal_35[iVar1249]), iVar933);
				set_ped_config_flag(&(iLocal_35[iVar1249]), 279, true);
				func_298(&(iLocal_35[iVar1249]));
				func_290(&uLocal_1277, 7, iVar1249);
			}
			break;
		case 7:
			break;
		case 9:
			if (func_297(iVar1249, iVar1248))
			{
				func_290(&uLocal_1277, 2, iVar1249);
			}
			break;
	}
}

void func_118()
{
	if ((!func_28(1024) || is_entity_dead(&(iLocal_35[iVar1246]))) || (func_165(2097152, iVar1246) && !func_165(4194304, iVar1246)))
	{
		return;
	}
	if (!func_28(262144))
	{
		if (func_299(iVar1272) && func_28(16384))
		{
			func_110(&uLocal_806, 262144);
			func_300(&uLocal_1274, 9, iVar1246);
		}
	}
	if (iVar1272 > 0)
	{
		if (func_291(iVar1246))
		{
			if (func_165(65536, iVar1246))
			{
				func_292(iVar1246);
				func_130(&uLocal_758, 9);
			}
		}
	}
	switch (iVar1272)
	{
		case 0:
			if (func_165(16384, iVar1246) || func_165(16384, iVar1247))
			{
				func_293(iVar1246, 0, 0, 0);
				func_300(&uLocal_1274, 13, iVar1246);
				return;
			}
			func_294(iVar1246, 2, func_28(4194304));
			func_293(iVar1246, func_28(4194304), 1, 1);
			if (func_28(8388608) && func_29(Local_51.f_51, 1) < 35f)
			{
				if (iVar1246 == 1)
				{
					iLocal_1278 = 7;
				}
				task_play_upper_anim_facing_entity(&(iLocal_35[iVar1246]), &(Local_670[iVar1276]), Local_670[iVar1276]->f_1, Global_35, -1, 4f, -4f, 67125760, 0f, false, false, -1f, "UpperbodyFixup_filter", 65538, -1f);
				func_300(&uLocal_1274, 2, iVar1246);
			}
			else
			{
				func_300(&uLocal_1274, 3, iVar1246);
			}
			break;
		case 2:
			if (!is_entity_playing_anim(&(iLocal_35[iVar1246]), &(Local_670[iVar1276]), Local_670[iVar1276]->f_1, 1))
			{
				func_300(&uLocal_1274, 3, iVar1246);
			}
			break;
		case 3:
			if (iVar1246 == 0)
			{
				func_284(&(iLocal_35[0]), &(iLocal_35[iVar1247]), func_283(32768, 2), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_301(32768);
			}
			if ((iVar1246 == 2 && !func_171(4096)) && func_28(32))
			{
				func_284(&(iLocal_35[2]), 0, func_283(4096, 2), 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				func_301(4096);
			}
			func_302(&(iLocal_35[iVar1246]), -1, 131072);
			func_300(&uLocal_1274, 4, iVar1246);
			break;
		case 4:
			if ((!is_entity_dead(iLocal_34) && is_ped_in_vehicle(&(iLocal_35[iVar1246]), iLocal_34, false)) && func_303(&(iLocal_35[iVar1246]), iLocal_34, -1))
			{
				func_300(&uLocal_1274, 6, iVar1246);
			}
			if (!func_304(&(iLocal_35[iVar1246]), 242628503) && !func_304(&(iLocal_35[iVar1246]), -1794415470))
			{
				func_302(&(iLocal_35[iVar1246]), -1, 131072);
			}
			break;
		case 6:
			if (!is_entity_dead(iLocal_34) && (((!func_28(2048) || !does_entity_exist(&(iLocal_35[iVar1247]))) || is_entity_dead(&(iLocal_35[iVar1247]))) || is_ped_in_vehicle(&(iLocal_35[iVar1247]), iLocal_34, false)))
			{
				func_294(iVar1246, 2, func_28(4194304));
				func_293(iVar1246, 0, 1, 1);
				open_sequence_task(&iVar0);
				if (!is_string_null_or_empty(func_83(iVar783, iVar784)) && get_is_waypoint_recording_loaded(func_83(iVar783, iVar784)))
				{
					func_101(64);
					task_vehicle_follow_waypoint_recording(0, iLocal_34, func_83(iVar783, iVar784), 524311, 0, 3080, -1, -1082130432, 0, 1073741824, 0);
				}
				task_vehicle_drive_wander(0, iLocal_34, 3f, 524295);
				func_212(&(iLocal_35[iVar1246]), &iVar0, 0, 0, 1, 1);
				func_300(&uLocal_1274, 7, iVar1246);
			}
			break;
		case 7:
			if (!is_entity_dead(iLocal_34))
			{
				if (is_waypoint_playback_going_on_for_vehicle(iLocal_34, 0))
				{
					if (func_109(iLocal_34, func_305(iVar783, iVar784), 1) < 5f)
					{
						func_101(128);
						task_vehicle_drive_wander(&(iLocal_35[iVar1246]), iLocal_34, 3f, 524295);
						func_300(&uLocal_1274, 10, iVar1246);
					}
				}
			}
			if (func_306(Global_35, &(iLocal_35[iVar1246])) < 15f)
			{
				_0x66f9eb44342bb4c5(&(iLocal_35[iVar1246]), &Local_726);
			}
			if (_0xa9e185d498b9ac67(iLocal_34, Global_35) || _0xa9e185d498b9ac67(iLocal_34, Global_1935630->f_40))
			{
				if (!func_171(262144))
				{
					func_169(&(iLocal_35[iVar1246]), Global_35, 262144, 291934926);
				}
			}
			break;
		case 8:
			if (func_28(524288))
			{
				func_300(&uLocal_1274, 3, iVar1246);
			}
			break;
		case 9:
			if (func_297(iVar1246, iVar1247))
			{
				func_300(&uLocal_1274, 3, iVar1246);
			}
			break;
		case 10:
			break;
		case 11:
			if (is_entity_dead(iLocal_34) || !is_vehicle_driveable(iLocal_34, false, false))
			{
				func_307(iVar1246, &(iLocal_788[iVar1246]));
				func_160(4194304, iVar1246);
				func_300(&uLocal_1274, 13, iVar1246);
			}
			else if (!func_127(128) && func_175(&(iLocal_35[iVar1246]), iLocal_34, 1))
			{
				func_101(64);
				open_sequence_task(&iVar0);
				task_vehicle_follow_waypoint_recording(0, iLocal_34, func_83(iVar783, iVar784), 0, 0, 2056, -1, -1082130432, 0, 1073741824, 0);
				task_vehicle_drive_wander(0, iLocal_34, 3f, 524295);
				func_212(&(iLocal_35[iVar1246]), &iVar0, 0, 0, 1, 1);
				func_300(&uLocal_1274, 12, iVar1246);
				set_ped_keep_task(&(iLocal_35[iVar1246]), true);
				iLocal_802 = 1;
			}
			else
			{
				set_ped_combat_attributes(&(iLocal_35[iVar1246]), 6, true);
				func_307(iVar1246, &(iLocal_788[iVar1246]));
				func_160(4194304, iVar1246);
				set_ped_keep_task(&(iLocal_35[iVar1246]), true);
				func_300(&uLocal_1274, 13, iVar1246);
			}
			break;
		case 12:
			if (is_entity_dead(iLocal_34) || !is_vehicle_driveable(iLocal_34, false, false))
			{
				func_307(iVar1246, &(iLocal_788[iVar1246]));
				func_160(4194304, iVar1246);
				func_300(&uLocal_1274, 13, iVar1246);
			}
			else
			{
				if (bVar800)
				{
					if (func_308(&(iLocal_35[iVar1246]), 0) == -1569615261)
					{
						set_current_ped_weapon(&(iLocal_35[iVar1246]), func_258(iVar1246), false, 0, false, false);
					}
					task_combat_hated_targets(&(iLocal_35[iVar1246]), -1f);
				}
				if (func_127(64))
				{
					if (is_waypoint_playback_going_on_for_vehicle(iLocal_34, 0))
					{
						vehicle_waypoint_playback_override_speed(iLocal_34, 5f);
						if (func_109(iLocal_34, func_305(iVar783, iVar784), 1) < 10f)
						{
							set_ped_combat_attributes(&(iLocal_35[iVar1246]), 6, true);
							func_307(iVar1246, &(iLocal_788[iVar1246]));
							func_160(4194304, iVar1246);
							set_ped_keep_task(&(iLocal_35[iVar1246]), true);
							func_300(&uLocal_1274, 10, iVar1246);
						}
					}
				}
				else
				{
					func_307(iVar1246, &(iLocal_788[iVar1246]));
					func_160(4194304, iVar1246);
					func_300(&uLocal_1274, 13, iVar1246);
				}
			}
			break;
	}
}

void func_119()
{
	if ((!func_28(2048) || is_entity_dead(&(iLocal_35[iVar1247]))) || func_165(2097152, iVar1247))
	{
		return;
	}
	if ((func_28(1024) && does_entity_exist(&(iLocal_35[iVar1246]))) && is_entity_dead(&(iLocal_35[iVar1246])))
	{
		func_309(iVar1247, 0, 1.5f, 0);
		func_287(2048);
	}
	if (!func_28(262144))
	{
		if (func_310(iVar1273) && func_28(32768))
		{
			func_31(262144);
			func_300(&uLocal_1275, 9, iVar1247);
		}
	}
	if (iVar1273 > 0)
	{
		if (func_291(iVar1247))
		{
			if (func_165(65536, iVar1247))
			{
				func_292(iVar1247);
				func_130(&uLocal_758, 9);
			}
		}
	}
	switch (iVar1273)
	{
		case 0:
			if (func_165(16384, iVar1246) || func_165(16384, iVar1247))
			{
				func_293(iVar1247, 0, 0, 0);
				func_300(&uLocal_1275, 13, iVar1247);
				return;
			}
			func_63(uLocal_40[iVar1247]);
			func_294(iVar1247, 3, (func_28(4194304) || func_165(131072, iVar1247)));
			func_293(iVar1247, func_28(4194304), 1, 1);
			func_300(&uLocal_1275, 3, iVar1247);
			break;
		case 3:
			func_302(&(iLocal_35[iVar1247]), 0, 262144);
			set_ped_keep_task(&(iLocal_35[iVar1247]), true);
			func_300(&uLocal_1275, 4, iVar1247);
			break;
		case 4:
			if (!is_entity_dead(iLocal_34) && is_ped_in_vehicle(&(iLocal_35[iVar1247]), iLocal_34, false))
			{
				func_294(iVar1247, 3, (func_28(4194304) || func_165(131072, iVar1247)));
				func_293(iVar1247, 0, 1, 1);
				func_300(&uLocal_1275, 6, iVar1247);
			}
			if (!func_304(&(iLocal_35[iVar1247]), 242628503) && !func_304(&(iLocal_35[iVar1247]), -1794415470))
			{
				func_302(&(iLocal_35[iVar1247]), 0, 262144);
			}
			break;
		case 6:
			if (func_306(Global_35, &(iLocal_35[iVar1247])) < 15f)
			{
				_0x66f9eb44342bb4c5(&(iLocal_35[iVar1247]), &Local_726);
			}
			else if (func_304(&(iLocal_35[iVar1247]), 242628503))
			{
				clear_ped_tasks(&(iLocal_35[iVar1247]), 1, 0);
			}
			if (_0xa9e185d498b9ac67(iLocal_34, Global_35) || _0xa9e185d498b9ac67(iLocal_34, Global_1935630->f_40))
			{
				if (!func_304(&(iLocal_35[iVar1247]), 242628503))
				{
					open_sequence_task(&iVar0);
					if (func_308(&(iLocal_35[iVar1247]), 0) == -1569615261)
					{
						set_current_ped_weapon(&(iLocal_35[iVar1247]), func_258(iVar1247), false, 0, false, false);
						task_swap_weapon(0, 1, 0, 0, 0);
					}
					task_aim_at_entity(0, Global_35, -1, 0, 0);
					func_212(&(iLocal_35[iVar1247]), &iVar0, 0, 0, 1, 1);
				}
			}
			break;
		case 9:
			if (func_297(iVar1247, iVar1246))
			{
				func_300(&uLocal_1275, 3, iVar1247);
			}
			break;
	}
}

void func_120()
{
	if (func_311(Global_35, 0))
	{
		func_312(&Local_936);
	}
	else
	{
		func_313(&Local_936);
	}
}

void func_121()
{
	if (!bVar792)
	{
		return;
	}
	if (func_311(Global_35, 0))
	{
		return;
	}
	iLocal_794 = 0;
	if (func_34(iVar793, 0, 1))
	{
		if (bVar795)
		{
			iLocal_797 = 0;
			func_316(&(iLocal_35[iVar796]), func_314(iLocal_14, iVar796, 0, bVar798, bVar797), 1744022339, 0, 1, &(Local_245[iVar796]->f_23), func_315(iLocal_14, iVar796, 0, bVar798, bVar797), 1);
			iLocal_800 = 0;
			iLocal_799 = 0;
		}
		else
		{
			switch (iVar796)
			{
				case 2:
					switch (iVar794)
					{
						case 1024:
							iVar0 = 1;
							break;
						case 2048:
							iVar0 = 2;
							break;
					}
					break;
				case 3:
					switch (iVar794)
					{
						case 1024:
							iVar0 = 1;
							break;
						case 2048:
							iVar0 = 2;
							break;
					}
					break;
			}
			func_284(iVar793, Global_35, func_283(iVar794, 2), 0, -1082130432, iVar0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

void func_122()
{
	func_317(0);
	func_317(1);
	func_317(2);
	func_317(3);
}

void func_123()
{
	if (!does_entity_exist(iLocal_34))
	{
		if (!bVar791)
		{
			func_58(0);
			iLocal_793 = 1;
		}
	}
	if (get_vehicle_ped_is_in(get_player_ped(player_id()), false) == iLocal_34)
	{
		if (bVar791)
		{
			func_58(1);
			iLocal_793 = 0;
		}
	}
	else if (bVar791)
	{
		if (func_29(Local_51.f_51, 1) >= 30f)
		{
			func_58(1);
			iLocal_793 = 0;
		}
	}
	else if (func_29(Local_51.f_51, 1) < 30f)
	{
		func_58(0);
		iLocal_793 = 1;
	}
}

void func_124()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!does_entity_exist(&(iLocal_35[iVar0])))
		{
			return;
		}
		if (is_entity_dead(&(iLocal_35[iVar0])))
		{
			return;
		}
		if (_is_ped_hogtied(&(iLocal_35[iVar0])))
		{
			func_318(iLocal_35[iVar0], 1, 1, 1);
			iLocal_35[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_125()
{
	if (Local_51.f_46)
	{
		return;
	}
	if (bVar802)
	{
		if ((get_game_timer() - iVar801) > 3000)
		{
			Local_51.f_46 = 1;
			func_275(500, 350, 600, 200);
			func_31(134217728);
			func_31(268435456);
			func_101(8192);
			func_130(&uLocal_758, 9);
			func_276(&(iLocal_35[2]), 1024, &(iLocal_35[3]), 1024, 0, 0, 0, 0, 3, 2, -1, -1);
		}
	}
	else if (does_entity_exist(iLocal_34))
	{
		_0xa19447d83294e29f(iLocal_34, &iVar0, &iVar1);
		if (iVar0 != iVar1)
		{
			iLocal_804 = 1;
			iLocal_803 = get_game_timer();
		}
	}
}

void func_126()
{
	if (Local_51.f_46)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!does_entity_exist(&(uLocal_45[iVar0])))
		{
		}
		else if (!is_entity_dead(&(uLocal_45[iVar0])) && !has_entity_been_damaged_by_entity(&(uLocal_45[iVar0]), Global_35, 1, 1))
		{
		}
		else
		{
			if (has_entity_been_damaged_by_entity(&(uLocal_45[iVar0]), Global_35, 1, 1))
			{
				iVar1 = Global_35;
			}
			else
			{
				iVar1 = get_ped_source_of_death(&(uLocal_45[iVar0]));
				if (!does_entity_exist(iVar1))
				{
				}
				else
				{
					iVar2 = get_ped_index_from_entity_index(iVar1);
					if (Global_35 == iVar2 || Global_1935630->f_40 == iVar2)
					{
						Local_51.f_46 = 1;
						func_275(400, 200, 600, 500);
						func_31(134217728);
						func_31(268435456);
						func_101(8192);
						func_276(&(iLocal_35[2]), 2048, &(iLocal_35[3]), 2048, 0, 0, 0, 0, 3, 2, -1, -1);
						func_130(&uLocal_758, 9);
					}
				}
				iVar0++;
			}
		}
	}
}

bool func_127(int iParam0)
{
	return func_103(iVar804, iParam0);
}

bool func_128(int iParam0, vector3 vParam1, var uParam4, var uParam5)
{
	if (iParam0 == 1)
	{
		return true;
	}
	if (func_105(vParam1))
	{
		return false;
	}
	else if (_does_scenario_point_exist(*uParam5))
	{
		if (does_entity_exist(*uParam4))
		{
			iVar0 = get_object_index_from_entity_index(*uParam4);
			func_319(-509256108, vParam1, &iVar0, *uParam5, -1525360788);
			func_320(-509256108, vParam1, &iVar0, -2029793397, 24, *uParam5, -1525360788, 0);
			func_320(-509256108, vParam1, &iVar0, 1234009870, 18, *uParam5, -1525360788, 0);
			return true;
		}
		else
		{
			*uParam4 = _get_entity_scenario_point_is_attached_to(*uParam5);
		}
	}
	else
	{
		*uParam5 = _find_closest_active_scenario_point_of_type(vParam1, -1525360788, 5f, 1, false);
	}
	return false;
}

bool func_129()
{
	switch (iVar761)
	{
		case 0:
			iLocal_763 = 1;
			break;
		case 1:
			if (!_is_anim_scene_loaded(Local_528.f_1, true, false))
			{
				return false;
			}
			else
			{
				iLocal_763 = 2;
			}
			break;
		case 2:
			if (!is_string_null_or_empty(sLocal_32))
			{
				_0xdf7b5144e25cd3fe(Local_528.f_1, sLocal_32);
			}
			if (!is_string_null_or_empty(sLocal_33))
			{
				_0xdf7b5144e25cd3fe(Local_528.f_1, sLocal_33);
			}
			iLocal_763 = 3;
			break;
		case 3:
			if (!is_string_null_or_empty(sLocal_32) && !_0x23e33cb9f4a3f547(Local_528.f_1, sLocal_32))
			{
				return false;
			}
			if (!is_string_null_or_empty(sLocal_33) && !_0x23e33cb9f4a3f547(Local_528.f_1, sLocal_33))
			{
				return false;
			}
			iLocal_763 = 4;
			break;
		case 4:
			return true;
	}
	return false;
}

void func_130(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

float func_131(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			switch (iParam1)
			{
				case 0:
					return 45f;
				case 1:
					return 45f;
				case 2:
					return 45f;
				case 3:
					return 55f;
				case 4:
					return 45f;
				case 5:
					return 55f;
				default:
					break;
			}
			break;
	}
	return 45f;
}

bool func_132(var uParam0, var uParam1, float fParam2, float fParam3, float fParam4, int iParam5, float fParam6, float fParam7, int iParam8, float fParam9, bool bParam10, float fParam11, bool bParam12, int iParam13, bool bParam14)
{
	func_321(Global_35, uParam0->f_51, uParam1, 0f, 0, 0);
	fVar0 = 0f;
	if (func_322(uParam1, iParam5))
	{
		if (_is_ped_getting_into_a_mount_seat(Global_35, true) || is_ped_in_any_vehicle(Global_35, false))
		{
			fVar0 = (get_entity_speed(Global_35) * fParam7);
		}
		else
		{
			fVar0 = (get_entity_speed(Global_35) * fParam6);
		}
	}
	if (func_323(uParam0, fParam2, 1114636288, (fParam4 + fVar0), iParam8, fParam9, bParam10, fParam11, bParam12, 1125515264, bParam14, 1))
	{
		return true;
	}
	return false;
}

void func_133(int iParam0)
{
	if (!is_entity_dead(&(iLocal_35[iParam0])))
	{
		_request_ped_emotional_preset(&(iLocal_35[iParam0]), "Default_Curious");
		_request_ped_emotional_preset(&(iLocal_35[iParam0]), "Default_Shocked");
		_request_ped_emotional_preset(&(iLocal_35[iParam0]), "Default_Angry");
		if (func_53(iParam0) && iLocal_14 == 1)
		{
			_request_ped_emotional_preset(&(iLocal_35[iParam0]), "Default_Panic");
		}
	}
}

void func_134(var uParam0, int iParam1, int iParam2)
{
	func_328(uParam0, func_324(), "", func_325(iParam1, iParam2, Local_51.f_51), 0, func_326(), func_327(iParam1, iParam2), func_327(iParam1, iParam2), -1082130432, -1082130432, 1127481344, 0);
}

void func_135(int* iParam0, var uParam1, var uParam2, bool bParam3)
{
	func_330((*uParam1)[0], func_329(7), 0, -163964935, 0, 0, 0, 1, 0);
	func_330((*uParam1)[1], func_329(10), 0, 648122183, 0, 0, 0, 1, 0);
	func_137(iParam0, 0);
	func_138(uParam1, bParam3, 0);
	*uParam2 = func_331(1, 0, 0) | 64 | 128;
}

void func_136(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 1)
	{
		sVar0 = "RE_AMD_LWL_V2_GREET_DEFUSE";
		if (bParam3)
		{
			sVar0 = "RE_AMD_LWL_V1_GREET_DEFUSE";
		}
		func_332(uParam0, bParam2, sVar0, "RE_AMD_LWL_V2_GREET_POS", "RE_AMD_LWL_V2_GREET_NEG", 0);
	}
	else
	{
		func_332(uParam0, bParam2, "RE_AMD_LWL_V1_GREET_DEFUSE", "RE_AMD_LWL_V1_GREET_POS", "RE_AMD_LWL_V1_GREET_NEG", 0);
	}
}

void func_137(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_167(&(iParam0->f_18));
}

void func_138(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_333((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

void func_139()
{
	if (!Local_51.f_46)
	{
		switch (iLocal_14)
		{
			case 1:
				if (!is_entity_dead(&(iLocal_35[0])) && !is_entity_dead(&(iLocal_35[2])))
				{
					switch (iVar812)
					{
						case 0:
							if (func_334(&(iLocal_35[0]), &(iLocal_35[2]), 1, 291934926))
							{
								func_335(1891783641, &(iLocal_35[0]), 1);
								uLocal_814 = iVar812 + 1;
							}
							break;
						case 1:
							if (func_334(&(iLocal_35[2]), &(iLocal_35[0]), 2, 291934926))
							{
								_0xf9cbd46433e36713(Global_35, &(iLocal_35[2]), 0f, 0f, 0f, 10f, 40f, 100f, 100f, "ARMS_DEAL");
								func_335(1891783641, &(iLocal_35[2]), 1);
								uLocal_814 = iVar812 + 1;
							}
							break;
						case 2:
							if (func_334(&(iLocal_35[0]), &(iLocal_35[2]), 4, 291934926))
							{
								func_335(1891783641, &(iLocal_35[2]), 1);
								uLocal_814 = iVar812 + 1;
							}
							break;
						case 3:
							if (func_334(&(iLocal_35[2]), &(iLocal_35[0]), 8, 291934926))
							{
								uLocal_814 = iVar812 + 1;
							}
							break;
						case 4:
							if (func_334(&(iLocal_35[0]), &(iLocal_35[2]), 16, 291934926))
							{
								uLocal_814 = iVar812 + 1;
							}
							break;
						case 5:
							if (func_334(&(iLocal_35[2]), &(iLocal_35[0]), 32, 291934926))
							{
								uLocal_814 = iVar812 + 1;
							}
							break;
					}
				}
				break;
			case 0:
				if (!is_entity_dead(&(iLocal_35[0])) && !is_entity_dead(&(iLocal_35[2])))
				{
					switch (iVar812)
					{
						case 0:
							if (func_334(&(iLocal_35[0]), &(iLocal_35[2]), 1, 1744022339))
							{
								func_335(1891783641, &(iLocal_35[0]), 1);
								uLocal_814 = iVar812 + 1;
							}
							break;
						case 1:
							if (func_334(&(iLocal_35[2]), &(iLocal_35[0]), 64, 1744022339))
							{
								func_335(1891783641, &(iLocal_35[2]), 1);
								uLocal_814 = iVar812 + 1;
							}
							break;
						case 2:
							if (func_334(&(iLocal_35[2]), &(iLocal_35[0]), 128, 1744022339))
							{
								func_335(1891783641, &(iLocal_35[2]), 1);
								uLocal_814 = iVar812 + 1;
							}
							break;
						case 3:
							if (func_334(&(iLocal_35[3]), &(iLocal_35[0]), 512, 1744022339))
							{
								func_335(1891783641, &(iLocal_35[3]), 1);
								uLocal_814 = iVar812 + 1;
							}
							break;
						case 4:
							if (func_334(&(iLocal_35[3]), &(iLocal_35[0]), 16384, 1744022339))
							{
								uLocal_814 = iVar812 + 1;
							}
							break;
						case 5:
							if (func_334(&(iLocal_35[1]), &(iLocal_35[2]), 8192, 1744022339))
							{
								uLocal_814 = iVar812 + 1;
							}
							break;
						case 6:
							if (func_334(&(iLocal_35[2]), &(iLocal_35[3]), 32768, 291934926))
							{
								uLocal_814 = iVar812 + 1;
							}
							break;
					}
				}
				break;
		}
	}
}

void func_140()
{
	if (!_does_anim_scene_exist(Local_528.f_1) || !_is_anim_scene_started(Local_528.f_1, false))
	{
		fLocal_829 = -1f;
		return;
	}
	fLocal_829 = _get_anim_scene_progress(Local_528.f_1);
}

void func_141()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_entity_dead(&(iLocal_35[iVar0])))
		{
			func_336(iVar0);
			if (func_165(2, iVar0) || (func_28(1) && iVar1250 == iVar0))
			{
			}
			else if (func_337(iVar0, "ENDSINWALK", 1))
			{
				func_338(iVar0, 1);
				func_213(2, iVar0);
			}
		}
		iVar0++;
	}
	switch (iLocal_14)
	{
		case 1:
			if (func_28(1) && iVar1250 == 3)
			{
			}
			else if (func_339(&(iLocal_35[3]), "ENDSINSTAND") && !func_165(2, 3))
			{
				open_sequence_task(&iVar1);
				force_ped_motion_state(0, -1871534317, false, 0, false);
				task_stand_still(0, 250);
				task_enter_vehicle(0, iLocal_34, -1, 0, 1f, 262145, 0);
				func_212(&(iLocal_35[3]), &iVar1, 0, 0, 1, 1);
				func_31(2048);
				func_213(32, 3);
				iLocal_1249 = 3;
				func_213(1, 3);
				func_213(2, 3);
			}
			if (func_337(2, "cashGrab", 134217728))
			{
			}
			else if (func_337(2, "cashExchange", 268435456))
			{
				func_262(&(iLocal_35[2]), func_261(1072590268, 0, -1));
				func_262(&(iLocal_35[0]), func_261(375893482, 0, -1));
			}
			else if (func_337(0, "cashDrop", 536870912))
			{
				if (does_entity_exist(Local_503[1]->f_8))
				{
					remove_anim_scene_entity(Local_528.f_1, "Cash", Local_503[1]->f_8);
					delete_object(&(Local_503[1]->f_8));
				}
				func_31(16);
			}
			break;
		case 0:
			if (!func_28(256))
			{
				if (has_anim_event_fired(&(iLocal_35[0]), -1145714767))
				{
					func_31(256);
					func_340(&uLocal_765, &uLocal_766, 1, 0, 0);
				}
			}
			if (func_337(2, "fireGun", 67108864))
			{
				func_335(1066055203, &(iLocal_35[2]), 1);
			}
			if (func_337(3, "fireGun", 67108864))
			{
				func_154(0);
				func_335(1066055203, &(iLocal_35[3]), 1);
			}
			break;
	}
}

void func_142()
{
	if (iLocal_14 == 0 && !func_165(2, 3))
	{
		if (func_341(9))
		{
			if (func_342(&(iLocal_35[2]), Global_35, 0, 20f, 0) || func_342(&(iLocal_35[3]), Global_35, 0, 20f, 0))
			{
				remove_anim_scene_entity(Local_528.f_1, func_343(&(iLocal_35[3])), &(iLocal_35[3]));
				iLocal_1249 = 3;
				func_31(2048);
				func_31(32768);
				func_213(32, 3);
				func_213(2, 3);
			}
		}
	}
	if (!func_28(32) && iLocal_14 != 1)
	{
		if ((func_341(1) && iLocal_14 == 0) || (func_341(8) && iLocal_14 == 1))
		{
			return;
		}
		fVar0 = func_29(Local_51.f_51, 1);
		bVar1 = false;
		if (fVar0 < 3f)
		{
			bVar1 = true;
		}
		else if (fVar0 < 7f)
		{
			if (func_158(&uLocal_926))
			{
				if (func_173(&uLocal_926) > 2000)
				{
					bVar1 = true;
					func_167(&uLocal_926);
				}
			}
			else
			{
				func_163(&uLocal_926);
			}
		}
		else if (func_158(&uLocal_926))
		{
			func_167(&uLocal_926);
		}
		if (bVar1)
		{
			func_31(32);
			func_101(4096);
			func_344(0);
			func_284(&(iLocal_35[2]), &(iLocal_35[0]), func_283(4194304, 2), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

void func_143()
{
	if (iLocal_14 == 1)
	{
		return;
	}
	if (!&iLocal_788[3])
	{
		iLocal_788[3] = 1;
	}
	if (has_anim_event_fired(&(iLocal_35[2]), 92002788) && !&iLocal_788[2])
	{
		iLocal_788[2] = 1;
	}
}

bool func_144()
{
	if ((!_does_anim_scene_exist(Local_528.f_1) || !_is_anim_scene_started(Local_528.f_1, false)) || _is_anim_scene_finished(Local_528.f_1, false))
	{
		return true;
	}
	return false;
}

bool func_145()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_34(&(iLocal_35[iVar0]), 0, 1))
		{
			if (!func_165(2, iVar0))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_146()
{
	if (((Local_51.f_46 || func_127(256)) || func_127(512)) || func_165(2, iVar1250))
	{
		return false;
	}
	fVar2 = func_29(Local_51.f_51, 1);
	if (func_291(1))
	{
		if (func_165(8192, 1))
		{
			if (iVar759 < 1)
			{
				func_345(1, 0, 3);
				func_346(&uLocal_761, 2);
			}
			else if (func_165(131072, 1) && !func_165(524288, 1))
			{
				func_136(&(Local_936[1]->f_21), iLocal_14, 1, 0);
				func_293(1, 0, 1, 1);
				func_213(524288, 1);
			}
		}
		else if (func_165(65536, 1))
		{
			func_346(&uLocal_761, 7);
		}
	}
	if (func_291(3))
	{
		if (func_165(8192, 3))
		{
			if (iVar759 < 1)
			{
				func_345(3, 1, 0);
				func_346(&uLocal_761, 2);
			}
			else if (func_165(131072, 3) && !func_165(524288, 3))
			{
				func_136(&(Local_936[3]->f_21), iLocal_14, 1, 0);
				func_293(3, 0, 1, 1);
				func_213(524288, 3);
			}
		}
		else if (func_165(65536, 3))
		{
			func_346(&uLocal_761, 7);
		}
	}
	switch (iVar759)
	{
		case 0:
			if (fVar2 < 16f)
			{
				iLocal_815 = iVar813 + 1;
				if (iVar813 > 3)
				{
					iLocal_815 = 0;
				}
				if (func_347(&(iLocal_35[iVar813]), &uLocal_867, &uLocal_866, 0))
				{
					if (func_341(8))
					{
						func_346(&uLocal_761, 8);
					}
					else
					{
						func_348(&uLocal_837);
						func_346(&uLocal_761, 1);
					}
				}
			}
			break;
		case 1:
			func_148();
			fVar0 = func_286(&Local_51, 1);
			fVar1 = func_286(&Local_51, 3);
			if (fVar1 < fVar0)
			{
				func_345(3, 1, 0);
			}
			else
			{
				func_345(1, 0, 3);
			}
			func_346(&uLocal_761, 2);
			break;
		case 2:
			if (func_127(-2147483648))
			{
				func_345(3, 1, 0);
				func_346(&uLocal_761, 7);
				return false;
			}
			remove_anim_scene_entity(Local_528.f_1, func_343(&(iLocal_35[iVar1250])), &(iLocal_35[iVar1250]));
			clear_ped_tasks(&(iLocal_35[iVar1250]), 1, 0);
			open_sequence_task(&iVar4);
			task_turn_ped_to_face_entity(0, Global_35, 1000, -1082130432, -1082130432, -1082130432);
			task_play_upper_anim_facing_entity(0, &(Local_670[iLocal_50]), Local_670[iLocal_50]->f_1, Global_35, -1, 4f, -4f, 67125760, 0f, false, false, -1f, "UpperbodyFixup_filter", 65538, -1f);
			func_212(&(iLocal_35[iVar1250]), &iVar4, 0, 0, 1, 1);
			fLocal_828 = func_286(&Local_51, iVar1250);
			func_163(&uLocal_905);
			func_31(1);
			func_63(&iLocal_831);
			func_213(131072, iVar1250);
			func_160(8192, iVar1250);
			if (func_53(iVar1250))
			{
				func_294(iVar1250, 1, 0);
			}
			else
			{
				func_294(iVar1250, 3, 0);
			}
			func_293(iVar1250, 0, 1, 0);
			func_346(&uLocal_761, 3);
			break;
		case 3:
			if (func_103(iVar803, 65536))
			{
				if ((!func_127(2048) && !func_165(16384, iVar1250)) && func_159(&uLocal_911) > 2f)
				{
					if (func_53(iVar1250))
					{
						func_294(iVar1250, 1, 1);
					}
					else
					{
						func_294(iVar1250, 3, 1);
					}
					func_293(iVar1250, 1, 1, 0);
					func_101(2048);
				}
			}
			else if (func_339(&(iLocal_35[iVar1250]), "RE_AD_WARN"))
			{
				func_163(&uLocal_911);
				func_284(&(iLocal_35[iVar1250]), Global_35, func_283(65536, 2), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				func_349(&(iLocal_35[iVar1250]), uLocal_40[iVar1250], 831283580, 580546400, 0, 0);
				func_110(&uLocal_805, 65536);
			}
			if (fVar2 < 3.5f || func_350(&(iLocal_35[iVar1250]), 0, &uLocal_837, &uLocal_865, 0, 0))
			{
				func_346(&uLocal_761, 7);
			}
			if (fVar826 != 0f)
			{
				if (fVar2 > (fVar826 + 10f))
				{
					func_346(&uLocal_761, 6);
				}
				else if (func_165(524288, iVar1250) && fVar2 > (fVar826 + 1f))
				{
					func_346(&uLocal_761, 6);
				}
			}
			if (func_159(&uLocal_905) > 4f && !is_entity_playing_anim(&(iLocal_35[iVar1250]), &(Local_670[iLocal_50]), Local_670[iLocal_50]->f_1, 1))
			{
				func_346(&uLocal_761, 4);
			}
			if (func_28(16))
			{
				func_130(&uLocal_758, 4);
			}
			break;
		case 4:
			fVar3 = func_351(func_286(&Local_51, iVar1250), 0f, 8f);
			_0x8acc0506743a8a5c(&(iLocal_35[iVar1250]), 166028666, 1, -1082130432);
			open_sequence_task(&iVar4);
			if ((iVar1250 == 3 && !func_352(&(iLocal_35[iVar1250]))) || (iVar1250 == 1 && func_352(&(iLocal_35[iVar1250]))))
			{
				task_go_to_entity_while_aiming_at_entity(0, Global_35, Global_35, 1f, 0, (fVar3 * 0.95f), (fVar3 * 0.95f), 0, 0, -687903391, 0);
			}
			else
			{
				task_go_to_coord_while_aiming_at_entity(0, func_353(iVar783, iVar784, iVar1250), Global_35, 1f, 0, 1056964608, 1082130432, 1, 0, 0, -687903391, -1, 0);
			}
			task_aim_gun_at_entity(0, Global_35, -1, false, 1);
			func_212(&(iLocal_35[iVar1250]), &iVar4, 0, 0, 1, 1);
			iLocal_788[iVar1250] = 1;
			func_163(&uLocal_905);
			func_346(&uLocal_761, 5);
			break;
		case 5:
			if (fVar2 < 3.5f || func_350(&(iLocal_35[iVar1250]), 0, &uLocal_837, &uLocal_865, 0, 0))
			{
				func_346(&uLocal_761, 7);
			}
			if (fVar826 != 0f)
			{
				if (fVar2 > (fVar826 + 10f))
				{
					func_346(&uLocal_761, 6);
				}
				else if (func_165(524288, iVar1250) && fVar2 > (fVar826 + 1f))
				{
					func_346(&uLocal_761, 6);
				}
			}
			if (func_159(&uLocal_905) > 5f)
			{
				if (!func_341(5) || func_341(6))
				{
					func_346(&uLocal_761, 7);
				}
			}
			if (func_28(16))
			{
				func_130(&uLocal_758, 4);
			}
			break;
		case 6:
			if (func_34(&(iLocal_35[iVar1250]), 0, 1) && func_34(&(iLocal_35[iVar1251]), 0, 1))
			{
				iLocal_788[iVar1250] = 0;
				task_turn_ped_to_face_entity(&(iLocal_35[iVar1250]), &(iLocal_35[iVar1251]), 0, -1082130432, -1082130432, -1082130432);
				func_346(&uLocal_761, 8);
				_0x78815fc52832b690(&(iLocal_35[iVar1250]), 1);
			}
			break;
		case 7:
			func_354(&uLocal_1254);
			func_31(134217728);
			func_31(268435456);
			Local_51.f_46 = 1;
			func_31(64);
			func_163(&uLocal_905);
			stop_current_playing_speech(&(iLocal_35[0]), 700);
			stop_current_playing_speech(&(iLocal_35[2]), 700);
			if (iVar863 == 1024)
			{
				func_31(536870912);
				func_284(&(iLocal_35[1]), Global_35, func_283(8388608, 2), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else if (func_127(-2147483648))
			{
				func_284(&(iLocal_35[iVar1250]), Global_35, func_283(134217728, 2), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_278(&(iLocal_35[iVar1250]), iVar1250);
			}
			return true;
		case 8:
			if (fVar2 < 3.5f)
			{
				func_346(&uLocal_761, 7);
			}
			if (func_28(1))
			{
				if (fVar2 < 9f)
				{
					func_346(&uLocal_761, 7);
				}
			}
			break;
	}
	return false;
}

void func_147(int iParam0)
{
	func_37(iParam0);
	func_7(iParam0, 1);
	func_8(iParam0, 500);
	func_41(iParam0, 1);
	func_42(iParam0, 0);
	func_43(iParam0, 0);
	func_355(iParam0, 1);
	func_356(iParam0, 8000);
	func_44(iParam0, 0);
}

void func_148()
{
	Local_51.f_44 = 1;
	Local_51.f_45 = 1;
	if (!func_203(2, 2))
	{
		if (func_357(&(iLocal_35[2])) == 2 || func_357(&(iLocal_35[3])) == 2)
		{
			func_31(2);
		}
	}
}

void func_149()
{
	if (iVar1250 == 3)
	{
		func_358(3, 0, 1065353216, 0, 0);
	}
	else if (iVar1250 == 1)
	{
		func_359(1, 0, 1065353216, 0);
	}
}

void func_150(int iParam0, float fParam1, bool bParam2)
{
	if (func_34(iParam0, 0, 0))
	{
		set_entity_is_target_priority(iParam0, bParam2, fParam1);
	}
}

bool func_151()
{
	if (func_29(Local_51.f_51, 1) > 30f)
	{
		return false;
	}
	return true;
}

bool func_152()
{
	if (!does_entity_exist(&(iLocal_35[iVar1250])))
	{
		return false;
	}
	if (iVar760 < 10)
	{
		if (func_291(1))
		{
			if (func_165(65536, 1))
			{
				func_360(&uLocal_762, 10);
			}
		}
		if (func_291(3))
		{
			if (func_165(65536, 3))
			{
				func_360(&uLocal_762, 10);
			}
		}
	}
	switch (iVar760)
	{
		case 0:
			func_31(1048576);
			func_31(128);
			func_136(&(Local_936[1]->f_21), iLocal_14, 1, 1);
			func_293(1, 1, 1, 0);
			func_136(&(Local_936[3]->f_21), iLocal_14, 1, 1);
			func_293(3, 1, 1, 0);
			func_361(iVar1250, &iLocal_35, &uLocal_1269, &uLocal_1259);
			func_31(64);
			func_360(&uLocal_762, 1);
			break;
		case 1:
			func_344(0);
			func_163(&uLocal_911);
			func_169(&(iLocal_35[&uLocal_1269[0]]), Global_35, 2097152, 1744022339);
			if (func_362(&(iLocal_35[&uLocal_1269[0]]), Local_528.f_1))
			{
				func_213(2, &(uLocal_1269[0]));
				remove_anim_scene_entity(Local_528.f_1, func_343(&(iLocal_35[&uLocal_1269[0]])), &(iLocal_35[&uLocal_1269[0]]));
			}
			func_363(&(iLocal_35[&uLocal_1269[0]]), func_258(&(uLocal_1269[0])), 0);
			func_163(&uLocal_914);
			func_360(&uLocal_762, 2);
			break;
		case 2:
			if (func_173(&uLocal_914) > 250)
			{
				if (func_362(&(iLocal_35[&uLocal_1269[1]]), Local_528.f_1))
				{
					func_213(2, &(uLocal_1269[1]));
					remove_anim_scene_entity(Local_528.f_1, func_343(&(iLocal_35[&uLocal_1269[1]])), &(iLocal_35[&uLocal_1269[1]]));
				}
				func_363(&(iLocal_35[&uLocal_1269[1]]), func_258(&(uLocal_1269[1])), 1);
				func_163(&uLocal_914);
				func_360(&uLocal_762, 3);
			}
			break;
		case 3:
			if (func_173(&uLocal_914) > 450)
			{
				if (func_362(&(iLocal_35[&uLocal_1269[2]]), Local_528.f_1))
				{
					func_213(2, &(uLocal_1269[2]));
					remove_anim_scene_entity(Local_528.f_1, func_343(&(iLocal_35[&uLocal_1269[2]])), &(iLocal_35[&uLocal_1269[2]]));
				}
				func_363(&(iLocal_35[&uLocal_1269[2]]), func_258(&(uLocal_1269[2])), 1);
				func_163(&uLocal_914);
				func_360(&uLocal_762, 4);
			}
			break;
		case 4:
			if (func_173(&uLocal_914) > 450)
			{
				if (func_362(&(iLocal_35[&uLocal_1269[3]]), Local_528.f_1))
				{
					func_213(2, &(uLocal_1269[3]));
					remove_anim_scene_entity(Local_528.f_1, func_343(&(iLocal_35[&uLocal_1269[3]])), &(iLocal_35[&uLocal_1269[3]]));
				}
				func_363(&(iLocal_35[&uLocal_1269[3]]), func_258(&(uLocal_1269[3])), 1);
				func_167(&uLocal_914);
				func_163(&uLocal_917);
				func_360(&uLocal_762, 5);
			}
			break;
		case 5:
			fVar0 = func_286(&Local_51, iVar1250);
			if (fVar0 > 15f)
			{
				func_360(&uLocal_762, 6);
			}
			else if (((func_159(&uLocal_917) > 2f && fVar0 < 7f) || (func_159(&uLocal_917) > 5f && fVar0 < 15f)) || func_280(&Local_51, iVar1250, 5f))
			{
				func_275(0, 0, 0, 0);
				func_169(&(iLocal_35[3]), Global_35, 524288, 291934926);
				func_360(&uLocal_762, 10);
			}
			break;
		case 6:
			if (func_364(-3f, 1, 0, 0))
			{
				func_163(&uLocal_914);
				func_309(2, 0, 1065353216, 0);
				func_360(&uLocal_762, 7);
			}
			break;
		case 7:
			if (func_173(&uLocal_914) > 300)
			{
				func_163(&uLocal_914);
				func_358(3, 0, 1065353216, 0, 0);
				func_360(&uLocal_762, 8);
			}
			break;
		case 8:
			if (func_173(&uLocal_914) > 400)
			{
				func_163(&uLocal_914);
				func_365(0, 0, 1065353216, 0);
				if (!func_103(iVar803, 16))
				{
					func_169(&(iLocal_35[0]), &(iLocal_35[2]), 16, 291934926);
				}
				func_360(&uLocal_762, 9);
			}
			break;
		case 9:
			if (func_173(&uLocal_914) > 450)
			{
				func_167(&uLocal_914);
				func_359(1, 0, 1065353216, 0);
				func_360(&uLocal_762, 11);
			}
			break;
		case 10:
			func_63(&iLocal_831);
			func_354(&uLocal_1254);
			func_31(134217728);
			func_31(268435456);
			func_147(&(Local_51.f_5));
			func_130(&uLocal_758, 9);
			break;
		case 11:
			return true;
	}
	return false;
}

void func_153()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_entity_dead(&(iLocal_35[iVar0])))
		{
			func_336(iVar0);
		}
		iVar0++;
	}
}

void func_154(bool bParam0)
{
	if (func_28(8))
	{
		return;
	}
	if (bParam0)
	{
		if ((((func_34(&(iLocal_35[0]), 0, 0) && func_366(&(iLocal_35[0]))) || (func_34(&(iLocal_35[1]), 0, 0) && func_366(&(iLocal_35[1])))) || (func_34(&(iLocal_35[2]), 0, 0) && func_366(&(iLocal_35[2])))) || (func_34(&(iLocal_35[3]), 0, 0) && func_366(&(iLocal_35[3]))))
		{
			return;
		}
	}
	if (func_34(&(uLocal_45[0]), 0, 1))
	{
		clear_ped_tasks(&(uLocal_45[0]), 1, 0);
		if (_get_rider_of_mount(&(uLocal_45[0]), true) == 0)
		{
			_task_smart_flee_style_coord(&(uLocal_45[0]), Local_51.f_51, 3, 0, -1082130432, -1, 0);
		}
		else
		{
			task_horse_action(&(uLocal_45[0]), 5, iLocal_34, 0);
		}
		set_ped_keep_task(&(uLocal_45[0]), true);
	}
	if (func_34(&(uLocal_45[1]), 0, 1))
	{
		clear_ped_tasks(&(uLocal_45[1]), 1, 0);
		open_sequence_task(&iVar0);
		if (_get_rider_of_mount(&(uLocal_45[1]), true) == 0)
		{
			_task_smart_flee_style_coord(0, Local_51.f_51, 3, 0, -1082130432, -1, 0);
		}
		else
		{
			task_horse_action(0, 5, iLocal_34, 0);
		}
		func_212(&(uLocal_45[1]), &iVar0, 0.2f, 0.25f, 1, 1);
		set_ped_keep_task(&(uLocal_45[1]), true);
	}
	func_110(&uLocal_806, 8);
}

bool func_155()
{
	if (!_does_anim_scene_exist(Local_528.f_1) || func_127(512))
	{
		func_367();
		if (func_28(8388608))
		{
			func_340(&uLocal_765, &uLocal_766, 1, func_28(268435456), func_28(134217728));
		}
		else if (iLocal_14 == 1)
		{
			func_368(&iLocal_35, &uLocal_767);
		}
		else
		{
			func_340(&uLocal_765, &uLocal_766, 1, func_28(268435456), func_28(134217728));
		}
		return true;
	}
	switch (iVar762)
	{
		case 0:
			func_367();
			if (func_28(8388608))
			{
				func_340(&uLocal_765, &uLocal_766, 1, func_28(268435456), func_28(134217728));
			}
			else if (iLocal_14 == 1)
			{
				func_368(&iLocal_35, &uLocal_767);
			}
			else if (func_127(4096))
			{
				func_340(&uLocal_765, &uLocal_766, 1, 0, 0);
			}
			else
			{
				func_340(&uLocal_765, &uLocal_766, 1, func_28(268435456), func_28(134217728));
			}
			func_354(&uLocal_1254);
			func_369();
			func_361(iVar1250, &iLocal_35, &uLocal_1269, &uLocal_1259);
			func_370(&uLocal_1269, &uLocal_1264);
			func_371(&uLocal_764, 1);
			break;
		case 1:
			func_337(&(uLocal_1269[0]), "onKneesBreakout", 33554432);
			if (!func_165(8, &(uLocal_1269[0])))
			{
				func_372(&(uLocal_1269[0]), &(uLocal_1259[0]), &(uLocal_1264[0]), 50);
				func_213(2, &(uLocal_1269[0]));
			}
			func_163(&uLocal_914);
			func_371(&uLocal_764, 2);
			break;
		case 2:
			func_337(&(uLocal_1269[1]), "onKneesBreakout", 33554432);
			if ((func_173(&uLocal_914) > &uLocal_1254[1] || !func_34(&(iLocal_35[&uLocal_1269[1]]), 0, 1)) || !_0x3ab6c7b0bb0df4b1(&(iLocal_35[&uLocal_1269[1]]), Local_528.f_1))
			{
				if (!func_165(8, &(uLocal_1269[1])))
				{
					func_372(&(uLocal_1269[1]), &(uLocal_1259[1]), &(uLocal_1264[1]), 100);
					func_213(2, &(uLocal_1269[1]));
				}
				func_163(&uLocal_914);
				func_371(&uLocal_764, 3);
			}
			break;
		case 3:
			func_337(&(uLocal_1269[2]), "onKneesBreakout", 33554432);
			if ((func_173(&uLocal_914) > &uLocal_1254[2] || !func_34(&(iLocal_35[&uLocal_1269[2]]), 0, 1)) || !_0x3ab6c7b0bb0df4b1(&(iLocal_35[&uLocal_1269[2]]), Local_528.f_1))
			{
				if (!func_165(8, &(uLocal_1269[2])))
				{
					func_372(&(uLocal_1269[2]), &(uLocal_1259[2]), &(uLocal_1264[2]), 150);
					func_213(2, &(uLocal_1269[2]));
				}
				func_163(&uLocal_914);
				func_371(&uLocal_764, 4);
			}
			break;
		case 4:
			func_337(&(uLocal_1269[3]), "onKneesBreakout", 33554432);
			if ((func_173(&uLocal_914) > &uLocal_1254[3] || !func_34(&(iLocal_35[&uLocal_1269[3]]), 0, 1)) || !_0x3ab6c7b0bb0df4b1(&(iLocal_35[&uLocal_1269[3]]), Local_528.f_1))
			{
				if (!func_165(8, &(uLocal_1269[3])))
				{
					func_372(&(uLocal_1269[3]), &(uLocal_1259[3]), &(uLocal_1264[3]), 200);
					func_213(2, &(uLocal_1269[3]));
				}
				func_167(&uLocal_914);
				func_371(&uLocal_764, 6);
			}
			break;
		case 5:
			func_373(Local_528.f_1);
			break;
		case 6:
			return true;
	}
	return false;
}

void func_156()
{
	if (func_28(268435456))
	{
		func_340(&uLocal_765, &uLocal_766, 0, 1, 0);
		if (!func_165(2097152, 2) && !func_165(8, 2))
		{
			func_213(2097152, 2);
			func_349(&(iLocal_35[2]), uLocal_40[2], 831283580, 580546400, 0, 0);
			if (func_374(2))
			{
				func_213(1073741824, 2);
				func_375(2, uLocal_40[2]);
			}
			else
			{
				func_307(2, &(iLocal_788[2]));
			}
		}
		if (!func_165(2097152, 3) && !func_165(8, 3))
		{
			func_213(2097152, 3);
			func_349(&(iLocal_35[3]), uLocal_40[3], 831283580, 580546400, 0, 0);
			if (func_374(3))
			{
				func_213(1073741824, 3);
				func_375(3, uLocal_40[3]);
			}
			else
			{
				func_307(3, &(iLocal_788[3]));
			}
		}
		if ((!does_blip_exist(&(uLocal_40[2])) && does_entity_exist(&(iLocal_35[2]))) && !is_entity_dead(&(iLocal_35[2])))
		{
			func_349(&(iLocal_35[2]), uLocal_40[2], 831283580, 580546400, 0, 0);
		}
		if ((!does_blip_exist(&(uLocal_40[3])) && does_entity_exist(&(iLocal_35[3]))) && !is_entity_dead(&(iLocal_35[3])))
		{
			func_349(&(iLocal_35[3]), uLocal_40[3], 831283580, 580546400, 0, 0);
		}
	}
	if (func_28(134217728))
	{
		func_340(&uLocal_765, &uLocal_766, 0, 0, 1);
		if (!func_165(2097152, 0) && !is_entity_dead(&(iLocal_35[0])))
		{
			func_213(2097152, 0);
			func_349(&(iLocal_35[0]), uLocal_40[0], 831283580, 580546400, 0, 0);
			if (func_374(0))
			{
				func_213(1073741824, 0);
				func_375(0, uLocal_40[0]);
			}
			else
			{
				func_307(0, &(iLocal_788[0]));
			}
		}
		if (!func_165(2097152, 1) && !is_entity_dead(&(iLocal_35[1])))
		{
			func_213(2097152, 1);
			func_349(&(iLocal_35[1]), uLocal_40[1], 831283580, 580546400, 0, 0);
			if (func_374(1))
			{
				func_213(1073741824, 1);
				func_375(1, uLocal_40[1]);
			}
			else
			{
				func_307(1, &(iLocal_788[1]));
			}
		}
		if ((!does_blip_exist(&(uLocal_40[0])) && does_entity_exist(&(iLocal_35[0]))) && !is_entity_dead(&(iLocal_35[0])))
		{
			func_349(&(iLocal_35[0]), uLocal_40[0], 831283580, 580546400, 0, 0);
		}
		if ((!does_blip_exist(&(uLocal_40[1])) && does_entity_exist(&(iLocal_35[1]))) && !is_entity_dead(&(iLocal_35[1])))
		{
			func_349(&(iLocal_35[1]), uLocal_40[1], 831283580, 580546400, 0, 0);
		}
	}
}

bool func_157()
{
	if (!func_34(&(iLocal_35[2]), 0, 1) && !func_34(&(iLocal_35[3]), 0, 1))
	{
		return true;
	}
	if (func_165(8, 2) && func_165(8, 3))
	{
		return true;
	}
	return false;
}

bool func_158(var uParam0)
{
	return func_376(*uParam0, 1);
}

float func_159(var uParam0)
{
	if (!func_158(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_377(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_378() - uParam0->f_1);
}

void func_160(int iParam0, int iParam1)
{
	if (func_165(iParam0, iParam1))
	{
		func_379(uLocal_751[iParam1], iParam0);
	}
}

void func_161(int iParam0, int iParam1)
{
	if (func_34(&(iLocal_35[iParam0]), 0, 1))
	{
		func_309(iParam0, 0, 1065353216, 0);
		func_358(iParam1, 0, 1065353216, 0, 1);
	}
	else
	{
		func_309(iParam1, 0, 1065353216, 0);
	}
}

void func_162(int iParam0)
{
	func_37(iParam0);
	func_7(iParam0, 1);
	func_8(iParam0, 1500);
	func_41(iParam0, 1);
	func_47(iParam0, 1);
	func_42(iParam0, 0);
	func_43(iParam0, 0);
	func_44(iParam0, 0);
}

void func_163(var uParam0)
{
	func_380(uParam0, 0f);
}

bool func_164()
{
	if (!func_34(&(iLocal_35[0]), 0, 1) && !func_34(&(iLocal_35[1]), 0, 1))
	{
		return true;
	}
	if (func_165(8, 0) && func_165(8, 1))
	{
		return true;
	}
	return false;
}

bool func_165(int iParam0, int iParam1)
{
	return func_103(&(uLocal_751[iParam1]), iParam0);
}

void func_166(int iParam0)
{
	if (!is_entity_dead(*iParam0))
	{
		decor_remove(*iParam0, "wagonFenceValue");
	}
}

void func_167(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_168(var uParam0, float fParam1)
{
	if (func_381(uParam0, fParam1))
	{
		func_167(uParam0);
		return true;
	}
	return false;
}

void func_169(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	func_284(iParam0, iParam1, func_283(iParam2, 2), 0, -1082130432, 0, 0, 0, 1, 1, 1, iParam3, 1, 0, 0);
	func_301(iParam2);
}

bool func_170(var uParam0)
{
	if (!func_103(*uParam0, 4))
	{
		if (does_entity_exist(iLocal_34))
		{
			if (func_382(iLocal_34) == 0)
			{
				if (is_vehicle_stopped(iLocal_34))
				{
					func_383(iLocal_34);
					func_110(uParam0, 4);
				}
				else
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_171(int iParam0)
{
	return func_103(iVar802, iParam0);
}

bool func_172(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return does_blip_exist(&(Global_36308[iParam0]));
	}
	return false;
}

int func_173(var uParam0)
{
	if (!func_158(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_377(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_384() - round((uParam0->f_1 * 1000f)));
}

void func_174(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (does_blip_exist(&(Global_36308[iParam0])))
		{
			_set_blip_flash_style(&(Global_36308[iParam0]), iParam1);
		}
	}
}

bool func_175(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam1))
	{
		if (is_vehicle_driveable(iParam1, false, false))
		{
			if (!is_entity_dead(iParam0))
			{
				return is_ped_in_vehicle(iParam0, iParam1, bParam2);
			}
		}
	}
	return false;
}

Vector3 func_176()
{
	return 1410.669f, 271.409f, 89.4489f;
}

int func_177(int iParam0, int iParam1, vector3 vParam2)
{
	if (iParam1 == 0)
	{
		return -1;
	}
	if (func_105(vParam2))
	{
		return -1;
	}
	iVar2 = func_385(vParam2);
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_386(iVar0) == 0 && iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		else if ((func_386(iVar0) == iParam1 && func_387(iVar0) == iParam0) && iVar2 == func_388(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_178(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		_blip_set_modifier(&(Global_36308[iParam0]), iParam1);
	}
}

bool func_179(int iParam0)
{
	return !func_389(iParam0, 1);
}

bool func_180(int iParam0)
{
	if (!does_entity_exist(*iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(*iParam0);
	if (!is_model_valid(iVar0))
	{
		return false;
	}
	if (Global_1430231->f_4)
	{
		return false;
	}
	if (func_390(iVar0))
	{
		func_92(iParam0, func_391(iVar0));
		return true;
	}
	if (decor_exist_on(*iParam0, "wagonFenceValue") && decor_get_int(*iParam0, "wagonFenceValue") != 0)
	{
		return true;
	}
	return false;
}

var func_181(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _show_tooltip(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_182()
{
	if ((!is_entity_dead(iLocal_34) && func_34(&(iLocal_35[iVar1246]), 0, 1)) && get_script_task_status(&(iLocal_35[iVar1246]), -258271821, true) != 1)
	{
		task_vehicle_drive_wander(&(iLocal_35[iVar1246]), iLocal_34, 3f, 524295);
	}
}

bool func_183(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_103(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_103(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_103(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_103(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_103(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_103(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_103(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_103(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_184(var uParam0, int iParam1)
{
	vVar0 = { func_392(uParam0) };
	iVar3 = func_223(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	_0xca41e86545413b5b(7, 1221649453, -585414509, iVar3, vVar0);
	if (_0x01f4d242765c6b24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_185(var uParam0, int iParam1)
{
	if (uParam0->f_2 >= *iParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (does_entity_exist(iParam1[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = get_distance_between_coords(get_entity_coords(iParam1[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0f;
	}
}

void func_186(int iParam0)
{
	func_42(iParam0, 1);
	func_393(iParam0, 20);
}

bool func_187(int iParam0, int iParam1)
{
	if (!func_242(iParam0))
	{
		return false;
	}
	return ((*Global_1310750)[iParam0]->f_1 && iParam1) != 0;
}

void func_188(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_242(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_394())
	{
		func_395(1);
	}
	func_396(iParam2, uParam0->f_43);
	func_397(iParam2, 0, 0, 0, 0);
	if (func_398(iParam2) != -1)
	{
		_set_weather_type_frozen(true);
	}
	start_audio_scene("RE_active_location_scene");
	_0x1096603b519c905f(func_214(uParam0->f_3));
	if (does_blip_exist(*iParam3))
	{
		remove_blip(iParam3);
	}
	func_399(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_189(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0]->f_7 = 0f;
		(*uParam0)[iVar0]->f_8 = 0f;
		iVar0++;
	}
}

void func_190(var uParam0, int iParam1, float fParam2)
{
	bVar0 = false;
	if (uParam0->f_178 && func_400())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_187(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_188(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_189(&(uParam0->f_121));
			return;
		}
		if (_does_volume_exist(uParam0->f_173))
		{
			if (!func_401(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_402(uParam0, bVar0);
		func_403(uParam0->f_121[iParam1], fVar1, 1082130432, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_404(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_188(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_189(&(uParam0->f_121));
		}
	}
}

bool func_191(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	fVar0 = 30f;
	fVar1 = 150f;
	if (func_71(uParam2->f_3, 1))
	{
		fVar1 = 150f;
	}
	else
	{
		fVar1 = 70f;
	}
	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
		{
			if (func_405())
			{
				fVar0 = 15f;
			}
		}
		if (func_406(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_407(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (!func_406(uParam2, fVar1))
		{
			if (!func_408((*Global_1310750)[uParam2->f_3]->f_38))
			{
				return false;
			}
		}
		if (!func_409(uParam2->f_3, 2) && func_410(2))
		{
			return false;
		}
		if (func_71(iParam0, 4194304) || func_71(iParam0, 33554432))
		{
			if (func_411(1))
			{
				return false;
			}
		}
	}
	if (func_412(Global_35))
	{
		return false;
	}
	if (func_413(0, 1, 1) && !func_414(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_71(iParam0, 128))
	{
		if (is_player_riding_train(player_id()))
		{
			return false;
		}
		if (func_415(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_407(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (func_416())
		{
			return false;
		}
		iVar2 = func_418(func_417());
		if (func_419(iVar2))
		{
			if (func_420(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_421(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_422(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_192(var uParam0, int iParam1)
{
	if (func_423(uParam0->f_51))
	{
		func_424(uParam0->f_51, 0);
		fVar0 = func_425(uParam0->f_3);
		iVar2 = _create_volume_cylinder_with_custom_name(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_426());
		bVar1 = func_219(!func_71(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_428(iVar2, func_427(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

void func_193(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(&(iParam0->f_1), 16384);
	}
	else
	{
		func_51(&(iParam0->f_1), 16384);
	}
}

void func_194(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(&(iParam0->f_1), 2048);
	}
	else
	{
		func_51(&(iParam0->f_1), 2048);
	}
}

void func_195(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(&(iParam0->f_1), 128);
	}
	else
	{
		func_51(&(iParam0->f_1), 128);
	}
}

void func_196(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(iParam0, 256);
	}
	else
	{
		func_50(iParam0, 256);
	}
}

void func_197(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_51(iParam0, 268435456);
	}
	else
	{
		func_50(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_51(iParam0, 1073741824);
	}
	else
	{
		func_50(iParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_51(iParam0, 536870912);
	}
	else
	{
		func_50(iParam0, 536870912);
	}
}

var func_198(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _show_objective(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_199(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return _create_var_string(2, sParam1, sParam4);
		case 2:
			return _create_var_string(2, sParam1, sParam4, sParam5);
		case 3:
			return _create_var_string(10, sParam1, sParam2);
		case 4:
			return _create_var_string(42, sParam1, sParam2, sParam3);
	}
	return _create_var_string(2, func_429(sParam1));
}

float func_200(int iParam0)
{
	return iParam0->f_24;
}

void func_201(int iParam0, float fParam1)
{
	iParam0->f_25 = fParam1;
}

void func_202(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(iParam0, 1);
	}
	else
	{
		func_50(iParam0, 1);
	}
}

bool func_203(int iParam0, int iParam1)
{
	iVar0 = func_430(iParam1);
	if (func_431(iVar0, iParam0))
	{
		return true;
	}
	return false;
}

void func_204(int iParam0, int iParam1)
{
	iVar0 = func_430(iParam1);
	if (!func_432(iParam0))
	{
		func_433(iParam0, 0);
	}
	if (!func_431(iVar0, iParam0))
	{
		func_434(iVar0, iParam0);
	}
}

void func_205(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_206(int* iParam0, var uParam1)
{
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_435(iParam0, uParam1, 1);
	func_436(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

void func_207(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

void func_208(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

float func_209(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_437(Global_35, iParam0, bParam1, bParam2);
}

void func_210(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_entity_attached(iParam0))
		{
			detach_entity(iParam0, bParam1, bParam2);
		}
	}
}

int func_211(int iParam0)
{
	if (func_34(iParam0[2], 0, 1))
	{
		return 2;
	}
	else if (func_34(iParam0[3], 0, 1))
	{
		return 3;
	}
	else if (func_34(iParam0[0], 0, 1))
	{
		return 0;
	}
	else if (func_34(iParam0[1], 0, 1))
	{
		return 1;
	}
	return 2;
}

void func_212(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	close_sequence_task(*iParam1);
	if (!bParam5 || !is_entity_dead(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			_task_perform_sequence_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			task_perform_sequence(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		clear_sequence_task(iParam1);
	}
}

void func_213(int iParam0, int iParam1)
{
	if (!func_165(iParam0, iParam1))
	{
		func_110(uLocal_751[iParam1], iParam0);
	}
}

char* func_214(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "REAA";
		case 75:
			return "REBBR";
		case 1:
			return "REAM";
		case 2:
			return "REAP";
		case 3:
			return "REAMD";
		case 76:
			return "REBE";
		case 4:
			return "REBT";
		case 77:
			return "REBTE";
		case 5:
			return "REBAT";
		case 6:
			return "REBOT";
		case 7:
			return "REBNT";
		case 78:
			return "REBGP";
		case 8:
			return "REBUB";
		case 9:
			return "RECA";
		case 10:
			return "RECG";
		case 11:
			return "RECP";
		case 12:
			return "RECHR";
		case 79:
			return "RECQ";
		case 13:
			return "RECCT";
		case 14:
			return "RECW";
		case 80:
			return "REDAA";
		case 81:
			return "REDAB";
		case 82:
			return "REDAS";
		case 83:
			return "REDEB";
		case 84:
			return "REDJ";
		case 15:
			return "REDLP";
		case 85:
			return "REDIB";
		case 86:
			return "REDOM";
		case 87:
			return "REDM";
		case 16:
			return "REPND";
		case 88:
			return "REDD";
		case 89:
			return "REDB";
		case 90:
			return "REDW";
		case 17:
			return "REESC";
		case 18:
			return "REEX";
		case 91:
			return "REFF";
		case 19:
			return "REFT";
		case 92:
			return "REFR";
		case 20:
			return "REFO";
		case 21:
			return "REFD";
		case 93:
			return "REFND";
		case 22:
			return "REFC";
		case 23:
			return "REGCR";
		case 94:
			return "REGPE";
		case 24:
			return "REGP";
		case 119:
			return "REHOC";
		case 27:
			return "REHOR";
		case 28:
			return "REHR";
		case 29:
			return "REIK";
		case 30:
			return "REIR";
		case 95:
			return "REIT";
		case 31:
			return "REKV";
		case 32:
			return "REKD";
		case 33:
			return "REKR";
		case 34:
			return "REKS";
		case 35:
			return "RELRU";
		case 96:
			return "REETE";
		case 36:
			return "RELK";
		case 37:
			return "RELP";
		case 97:
			return "RELD";
		case 98:
			return "RELDR";
		case 38:
			return "RELF";
		case 39:
			return "RELM";
		case 40:
			return "REMC";
		case 41:
			return "REMUC";
		case 42:
			return "RENS";
		case 99:
			return "REOTE";
		case 100:
			return "REOR";
		case 43:
			return "REOL";
		case 44:
			return "REOT";
		case 101:
			return "REPA";
		case 102:
			return "REPT";
		case 103:
			return "REPP";
		case 45:
			return "RESB";
		case 104:
			return "REPS";
		case 46:
			return "REPCA";
		case 47:
			return "REPCS";
		case 48:
			return "REPO";
		case 105:
			return "REPCH";
		case 49:
			return "REPBR";
		case 50:
			return "REPW";
		case 106:
			return "REPH";
		case 107:
			return "RERI";
		case 51:
			return "RERP";
		case 108:
			return "RERD";
		case 53:
			return "RESA";
		case 54:
			return "RESAF";
		case 56:
			return "RESWA";
		case 55:
			return "RESW";
		case 57:
			return "RESS";
		case 109:
			return "RESO";
		case 58:
			return "RESKP";
		case 110:
			return "RESAM";
		case 59:
			return "RESH";
		case 60:
			return "REHU";
		case 61:
			return "RESSH";
		case 62:
			return "RESR";
		case 111:
			return "RESTF";
		case 112:
			return "REKT";
		case 67:
			return "RETC";
		case 68:
			return "RETP";
		case 113:
			return "REBUR";
		case 114:
			return "RETWC";
		case 115:
			return "RETR";
		case 117:
			return "RETT";
		case 116:
			return "RETWW";
		case 63:
			return "RETA";
		case 64:
			return "RETRB";
		case 65:
			return "RETW";
		case 66:
			return "RETH";
		case 69:
			return "REVC";
		case 70:
			return "REWTH";
		case 71:
			return "REWA";
		case 118:
			return "REWC";
		case 72:
			return "REWH";
		case 73:
			return "REWM";
		case 74:
			return "REWMC";
		default:
			break;
	}
	return "XXXX";
}

void func_215(int iParam0, int iParam1)
{
	if (!func_242(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 || iParam1);
}

void func_216(int iParam0, bool bParam1)
{
	if (func_34(iParam0, 0, 1))
	{
		set_blocking_of_non_temporary_events(iParam0, false);
		func_35(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			set_ped_as_no_longer_needed(&iParam0);
		}
	}
}

bool func_217(var uParam0, var uParam1)
{
	if (func_71(uParam0->f_3, 16777216))
	{
		if (func_357(*uParam1) != -1 || get_entity_model(*uParam1) == 1478983280)
		{
			return true;
		}
	}
	return false;
}

void func_218(var uParam0)
{
	set_ped_config_flag(*uParam0, 6, false);
	set_ped_config_flag(*uParam0, 4, false);
	set_ped_config_flag(*uParam0, 494, true);
}

float func_219(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_220(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	if (!Global_1935630->f_12 && (!bParam4 || func_34(iParam0, 0, 1)))
	{
		if (!does_entity_exist(iParam3))
		{
			iParam3 = get_mount(Global_35);
		}
		if (iParam3 != iParam0)
		{
			if (!is_entity_a_mission_entity(iParam0))
			{
				set_entity_as_mission_entity(iParam0, true, false);
			}
			clear_ped_tasks(iParam0, 1, 0);
			clear_ped_secondary_task(iParam0);
			fVar2 = func_219(fParam2 >= 0f, fParam2, vdist(get_entity_coords(iParam0, true, false), Global_36));
			if (fVar2 > 25f && is_entity_occluded(iParam0))
			{
				func_438(&iParam0);
			}
			else if (does_entity_exist(iParam0))
			{
				open_sequence_task(&iVar0);
				task_smart_flee_ped(0, Global_35, 1000f, -1, 0, iParam1, 0);
				close_sequence_task(iVar0);
				_task_perform_sequence_2(iParam0, iVar0, 0.1f, 0.5f);
				clear_sequence_task(&iVar0);
				iVar1 = get_mount(iParam0);
				if (does_entity_exist(iVar1))
				{
					_0x39a2fc5af55a52b1(iVar1, -1);
				}
				_0x39a2fc5af55a52b1(iParam0, -1);
			}
		}
	}
}

void func_221(var uParam0)
{
	if (_does_volume_exist(uParam0->f_171))
	{
		func_439(uParam0->f_171);
		_0xa1cfb35069d23c23(uParam0->f_171);
		_0x74c2b3dc0b294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		destroy_tracked_point(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_440(uParam0);
	func_441(uParam0);
	func_442(uParam0);
	if (!func_443(uParam0))
	{
		if (_0xf6a8a652a6b186cd(uParam0->f_51.f_11))
		{
			_0xfdfecc6ee4491e11(uParam0->f_51.f_11);
		}
		func_424(uParam0->f_51, 0);
	}
	if (does_blip_exist(uParam0->f_51.f_6))
	{
		remove_blip(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_444();
	}
	if (!func_445(uParam0->f_3) && !func_71(uParam0->f_3, 256))
	{
		func_446(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_64(uParam0->f_173);
	func_64(uParam0->f_172);
}

void func_222(var uParam0)
{
	if (does_blip_exist(uParam0->f_181))
	{
		remove_blip(&(uParam0->f_181));
	}
}

int func_223(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					case 1:
						return -2064800864;
					case 2:
						return -1459648117;
					default:
						break;
				}
				return 1764738688;
			case 1:
				return -1738452225;
			case 2:
				return -823209843;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					case 1:
						return 1082838675;
					default:
						break;
				}
				return -163609424;
			case 4:
				return -230454431;
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					case 1:
						return -779276698;
					default:
						break;
				}
				return 1848195968;
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					case 1:
						return -561787596;
					default:
						break;
				}
				return 199182688;
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					case 1:
						return 1805609920;
					default:
						break;
				}
				return -1157729664;
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					case 1:
						return -1805473967;
					default:
						break;
				}
				return -185185008;
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					default:
						break;
				}
				return 1331739776;
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					case 1:
						return 1422484995;
					default:
						break;
				}
				return 2012422144;
			case 12:
				return 1004100858;
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					case 1:
						return 1719865048;
					default:
						break;
				}
				return -462840960;
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					case 1:
						return -1541809666;
					default:
						break;
				}
				return -2063125376;
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					case 1:
						return 396925591;
					case 2:
						return -1318629866;
					default:
						break;
				}
				return 237843904;
			case 16:
				return 1583531269;
			case 17:
				return -728402510;
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					case 1:
						return 1895496017;
					default:
						break;
				}
				return -1622801152;
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					case 1:
						return 136987683;
					case 2:
						return -405984699;
					default:
						break;
				}
				return -1296870656;
			case 21:
				return 856957155;
			case 22:
				return 199192985;
			case 23:
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					case 1:
						return -548752013;
					case 2:
						return -1799015093;
					case 3:
						return -115167180;
					default:
						break;
				}
				return 1480735360;
			case 24:
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					case 1:
						return -195398422;
					default:
						break;
				}
				return 1888284288;
			case 25:
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					case 1:
						return -140925504;
					default:
						break;
				}
				return 1262841600;
			case 26:
				return -1065165983;
			case 27:
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					case 1:
						return -879341975;
					case 2:
						return 812000379;
					default:
						break;
				}
				return 1119637248;
			case 28:
				return -1641231995;
			case 29:
				switch (iParam1)
				{
					case 0:
						return -15789618;
					case 1:
						return -2001368627;
					default:
						break;
				}
				return 1411817728;
			case 30:
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					case 1:
						return -413778780;
					default:
						break;
				}
				return 260689376;
			case 31:
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					case 1:
						return -1268334164;
					default:
						break;
				}
				return 302505024;
			case 32:
				return -800701784;
			case 33:
				return -1599472750;
			case 34:
				return 239043929;
			case 35:
				return -1534174498;
			case 36:
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					case 1:
						return 1873758089;
					default:
						break;
				}
				return 1179130240;
			case 37:
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					case 1:
						return -2073786745;
					default:
						break;
				}
				return -959962496;
			case 38:
				return 1895786957;
			case 39:
				return -2058137475;
			case 40:
				switch (iParam1)
				{
					case 0:
						return -904691578;
					case 1:
						return 149442199;
					case 2:
						return 978666390;
					case 3:
						return -1076604521;
					case 4:
						return 919455489;
					default:
						break;
				}
				return -1427408128;
			case 41:
				return 598461796;
			case 42:
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					case 1:
						return -632377398;
					default:
						break;
				}
				return -190635712;
			case 43:
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					case 1:
						return -456339986;
					case 2:
						return 458545376;
					case 3:
						return 610100918;
					default:
						break;
				}
				return -2132368512;
			case 44:
				return 544369376;
			case 45:
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					case 1:
						return -1472914811;
					default:
						break;
				}
				return 1517869312;
			case 46:
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					case 1:
						return 1336213836;
					default:
						break;
				}
				return 1497529856;
			case 47:
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
			case 48:
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
			case 49:
				return 1602493990;
			case 50:
				switch (iParam1)
				{
					case 0:
						return 155959053;
					case 1:
						return 2125427011;
					case 2:
						return 371707271;
					case 3:
						return -731143567;
					case 4:
						return -742996004;
					default:
						break;
				}
				return -773614592;
			case 51:
				switch (iParam1)
				{
					case 0:
						return -114145497;
					case 1:
						return -770317277;
					default:
						break;
				}
				return -1496303104;
			case 52:
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					case 1:
						return -189901396;
					default:
						break;
				}
				return 855036416;
			case 53:
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					case 1:
						return -316021716;
					default:
						break;
				}
				return 1818026880;
			case 54:
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					case 1:
						return -170394045;
					default:
						break;
				}
				return -1865567744;
			case 55:
				return 1762656414;
			case 56:
				switch (iParam1)
				{
					case 0:
						return -117822482;
					case 1:
						return 2050912022;
					case 2:
						return -631458463;
					default:
						break;
				}
				return 1729892352;
			case 57:
				switch (iParam1)
				{
					case 0:
						return 494567551;
					case 1:
						return 1070551761;
					case 2:
						return -1249279900;
					default:
						break;
				}
				return 1256394752;
			case 58:
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					case 1:
						return -239132243;
					default:
						break;
				}
				return -2137622144;
			case 59:
				return -2018341642;
			case 60:
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
			case 61:
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
			case 62:
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					case 1:
						return 1877863225;
					default:
						break;
				}
				return 1397209856;
			case 63:
				return -1618254924;
			case 64:
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					case 1:
						return 2139528616;
					default:
						break;
				}
				return 1380866816;
			case 65:
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					case 1:
						return 2073650155;
					default:
						break;
				}
				return 1432305280;
			case 66:
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
			case 67:
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					case 1:
						return -1797377830;
					default:
						break;
				}
				return 685182784;
			case 68:
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					case 1:
						return -522278917;
					default:
						break;
				}
				return -2001177728;
			case 69:
				return -2137572125;
			case 70:
				switch (iParam1)
				{
					case 0:
						return 638370814;
					case 1:
						return -1062366341;
					default:
						break;
				}
				return -948494848;
			case 71:
				return -774894224;
			case 72:
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					case 1:
						return 28828972;
					default:
						break;
				}
				return -1846020608;
			case 73:
				switch (iParam1)
				{
					case 0:
						return 306936642;
					case 1:
						return 460031053;
					case 2:
						return 381656699;
					default:
						break;
				}
				return -188029312;
			case 74:
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
		}
	}
	else if (iParam0 >= 75 && iParam0 <= 118)
	{
		switch (iParam0)
		{
			case 75:
				return -346537584;
			case 76:
				switch (iParam1)
				{
					case 0:
						return -550739017;
					default:
						break;
				}
				return -1829585536;
			case 77:
				switch (iParam1)
				{
					case 0:
						return -609376390;
					case 1:
						return -311112952;
					case 2:
						return -682765316;
					case 3:
						return -2127446978;
					default:
						break;
				}
				return 1338777472;
			case 78:
				switch (iParam1)
				{
					case 0:
						return 581221752;
					case 1:
						return 20416722;
					default:
						break;
				}
				return 1293249792;
			case 79:
				switch (iParam1)
				{
					case 0:
						return -1786500412;
					default:
						break;
				}
				return 235904384;
			case 80:
				return -334565466;
			case 81:
				switch (iParam1)
				{
					case 0:
						return 31964051;
					case 1:
						return 245875704;
					default:
						break;
				}
				return 1046770304;
			case 82:
				switch (iParam1)
				{
					case 0:
						return 48921735;
					case 1:
						return 1062398415;
					default:
						break;
				}
				return -2047991552;
			case 83:
				return -1752276745;
			case 84:
				switch (iParam1)
				{
					case 0:
						return 418356694;
					case 1:
						return -1090928636;
					default:
						break;
				}
				return -1021157760;
			case 85:
				switch (iParam1)
				{
					case 0:
						return 278246928;
					case 1:
						return 1092461253;
					default:
						break;
				}
				return 900051136;
			case 86:
				return 1417655457;
			case 87:
				switch (iParam1)
				{
					case 0:
						return 188835226;
					case 1:
						return 220332139;
					default:
						break;
				}
				return 1359760512;
			case 88:
				switch (iParam1)
				{
					case 0:
						return -1638860831;
					case 1:
						return -812497188;
					default:
						break;
				}
				return 1616003072;
			case 89:
				return -69702063;
			case 90:
				switch (iParam1)
				{
					case 0:
						return -479871262;
					default:
						break;
				}
				return -1670654720;
			case 91:
				return -331264815;
			case 92:
				return -1217205534;
			case 93:
				switch (iParam1)
				{
					case 0:
						return -1662432355;
					case 1:
						return -368935814;
					default:
						break;
				}
				return -1021345856;
			case 94:
				switch (iParam1)
				{
					case 0:
						return -735413614;
					case 1:
						return -972169639;
					case 2:
						return -673250821;
					case 3:
						return 161473916;
					default:
						break;
				}
				return -1329933952;
			case 95:
				switch (iParam1)
				{
					case 0:
						return -1645068573;
					default:
						break;
				}
				return 1248360320;
			case 96:
				switch (iParam1)
				{
					case 0:
						return 884363685;
					case 1:
						return 368673822;
					case 2:
						return 578628915;
					case 3:
						return 689154642;
					case 4:
						return 471198511;
					case 5:
						return 967199063;
					case 6:
						return -38616787;
					case 7:
						return -1294637989;
					default:
						break;
				}
				return -84111088;
			case 97:
				switch (iParam1)
				{
					case 0:
						return -1639179308;
					case 1:
						return -436408638;
					default:
						break;
				}
				return 1995021696;
			case 98:
				switch (iParam1)
				{
					case 0:
						return 1464772696;
					case 1:
						return 6449957;
					default:
						break;
				}
				return -1853564800;
			case 99:
				switch (iParam1)
				{
					case 0:
						return 803309489;
					case 1:
						return -31873580;
					case 2:
						return -1922690045;
					case 3:
						return 515105064;
					default:
						break;
				}
				return -1759022208;
			case 100:
				return -307424281;
			case 101:
				switch (iParam1)
				{
					case 0:
						return 1006898715;
					case 1:
						return 1573993134;
					default:
						break;
				}
				return -1402545280;
			case 102:
				return -1979014350;
			case 103:
				return 2096137174;
			case 104:
				switch (iParam1)
				{
					case 0:
						return -861435303;
					case 1:
						return 2076430727;
					case 2:
						return -1266577036;
					default:
						break;
				}
				return 493009408;
			case 105:
				return 1152564685;
			case 106:
				switch (iParam1)
				{
					case 0:
						return 2036836823;
					case 1:
						return 2046057828;
					case 2:
						return -526712830;
					case 3:
						return -242317110;
					case 4:
						return 1729814355;
					case 5:
						return 1868875718;
					case 6:
						return -785635151;
					case 7:
						return 1586170447;
					case 8:
						return -291036947;
					default:
						break;
				}
				return -832026176;
			case 107:
				switch (iParam1)
				{
					case 0:
						return -981210833;
					case 1:
						return 875440489;
					default:
						break;
				}
				return -508430848;
			case 108:
				switch (iParam1)
				{
					case 0:
						return 1491780341;
					case 1:
						return 1920169067;
					default:
						break;
				}
				return -227796128;
			case 109:
				switch (iParam1)
				{
					case 0:
						return -1255044808;
					case 1:
						return -1012076841;
					default:
						break;
				}
				return -871899648;
			case 110:
				switch (iParam1)
				{
					case 0:
						return 792345848;
					case 1:
						return 121209110;
					default:
						break;
				}
				return 14115413;
			case 111:
				switch (iParam1)
				{
					case 0:
						return -1152301466;
					case 1:
						return -1113682855;
					case 2:
						return -1801389871;
					case 3:
						return -180725957;
					case 4:
						return 1811628790;
					default:
						break;
				}
				return 2016864128;
			case 112:
				switch (iParam1)
				{
					case 0:
						return 635397890;
					default:
						break;
				}
				return -717212864;
			case 113:
				return 1487351956;
			case 114:
				switch (iParam1)
				{
					case 0:
						return 1955914312;
					case 1:
						return 1685893021;
					case 2:
						return -711771194;
					case 3:
						return 146337879;
					default:
						break;
				}
				return 205846784;
			case 115:
				switch (iParam1)
				{
					case 0:
						return -775876869;
					case 1:
						return -39469638;
					default:
						break;
				}
				return 1483441280;
			case 116:
				switch (iParam1)
				{
					case 0:
						return 2113065035;
					case 1:
						return -2101774133;
					default:
						break;
				}
				return -815072896;
			case 117:
				return -689015496;
			case 118:
				switch (iParam1)
				{
					case 0:
						return -18903616;
					case 1:
						return -1607469655;
					default:
						break;
				}
				return -640409664;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 119:
				return 1996937952;
		}
	}
	return 1968536545;
}

void func_224(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_447() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

bool func_225(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_226(int iParam0)
{
	if (((func_227(iParam0, 1) && func_227(iParam0, 2)) && func_227(iParam0, 8)) && func_227(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_227(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

Vector3 func_228(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_242(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_448(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_449(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *Global_1310750->f_13358[iVar0];
}

void func_229(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_71(iParam0, 32))
	{
		if (func_450(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_451(Global_35, &(uParam1->f_12)) };
				if (!func_105(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_452(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_425(iParam0);
		iVar0 = _create_volume_cylinder_with_custom_name(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_426());
		if (func_453(Global_1310750[iParam0], 33554432))
		{
			func_428(iVar0, func_427(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_428(iVar0, func_427(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_71(iParam0, 1))
		{
			func_454(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_455(iParam0);
}

bool func_230(int iParam0, var uParam1)
{
	*uParam1 = _0x74f0209674864cbd();
	if (!_0x1ac5a8ab50cfaa33(*uParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((*Global_1310750)[iParam0]->f_4.f_4[iVar0]->f_1 != -1)
		{
			func_456(uParam1, *(*Global_1310750)[iParam0]->f_4.f_4[iVar0]);
		}
		iVar0++;
	}
	if (func_187(iParam0, 16))
	{
		_0xb8e3486d107f4194(*uParam1, 55f);
		_0x827a58ced9d4d5b4(*uParam1, 180f);
		fVar2 = to_float(func_457(iParam0));
		fVar1 = 60f;
	}
	else
	{
		_0x65d281985f2bdfc2(*uParam1, 35f);
		_0x827a58ced9d4d5b4(*uParam1, 65f);
		fVar2 = to_float(func_457(iParam0));
		fVar1 = 60f;
	}
	_0x9b6a58fdb0024f12(*uParam1, 35f);
	_0x954451ea2d2120fb(*uParam1, fVar2);
	_0x0f4f6c4ce471259d(*uParam1, (fVar2 + fVar1));
	_0x4a7d73989f52eb37(*uParam1, (fVar2 + 10f));
	_0x8f8c84363810691a(*uParam1, 7f);
	_0x2b8af29a78024bd3(*uParam1);
	return true;
}

void func_231(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_458(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*fParam1 = 225f;
				*fParam2 = 6400f;
			}
			else
			{
				*fParam1 = 225f;
				*fParam2 = 4900f;
			}
			*iParam3 = 2500;
			break;
		case 1:
			if (!func_71(iParam0, 1))
			{
				if (func_187(iParam0, 2))
				{
				}
			}
			func_459(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_460(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_460(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (func_112(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_232(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	fVar7 = 999999.9f;
	fVar8 = 0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_448(iParam1))
	{
		if (!func_461(iParam1, iVar0))
		{
			vVar4 = { func_228(iParam1, iVar0) };
			if (!func_105(vVar4))
			{
				fVar8 = vdist(Global_36, vVar4);
				if (func_237(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_462(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = vdist(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_105(vVar4))
	{
	}
	return vVar1;
}

int func_233(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_38("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_234(int iParam0, vector3 vParam1)
{
	iVar0 = 0;
	while (iVar0 < func_448(iParam0))
	{
		vVar1 = { func_228(iParam0, iVar0) };
		if (func_463(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_235(var uParam0)
{
	if (uParam0->f_7 == 0)
	{
		uParam0->f_7 = create_tracked_point();
		if (uParam0->f_7 == 0)
		{
		}
		set_tracked_point_info(uParam0->f_7, *uParam0, 4f);
	}
	else
	{
		iVar0 = _0xdfe332a5da6fe7c9(uParam0->f_7);
		if (iVar0 == -1)
		{
			return false;
		}
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

int func_236(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	vVar2 = { *uParam0 };
	func_321(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_322(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_105(*uParam0->f_12[iVar0]))
			{
				vVar5 = { *uParam0->f_12[iVar0] };
				vVar8 = { _0x83acc65d9acec5ef(Global_36, vVar2, vVar5, true) };
				if (vdist2(Global_36, vVar8) <= (35f * 35f) || vdist2(Global_36, *uParam0->f_12[iVar0]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_464(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { *uParam0->f_12[iVar1] };
						}
					}
					uParam0->f_8 = 0;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return func_233(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_237(float fParam0, int iParam1)
{
	fVar3 = (fParam0 * fParam0);
	func_231(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_71(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_238(var uParam0, bool bParam1)
{
	*bParam1 = 0;
	if (_0x0365000d8bf86531(&(uParam0->f_10)) == 4)
	{
		*bParam1 = 1;
	}
	else if (_0x0365000d8bf86531(&(uParam0->f_10)) == 3)
	{
		*uParam0 = { _0x865732725536ee39(&(uParam0->f_10)) };
		return true;
	}
	return false;
}

bool func_239(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_465(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_466(iParam0, uParam2))
	{
		return false;
	}
	if (!func_467(Param3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_468(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

int func_240(var uParam0)
{
	return uParam0->f_51.f_4;
}

bool func_241(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 106:
			switch (iParam1)
			{
				case 1:
					*uParam2 = _create_volume_aggregate();
					_0x39816f6f94f385ad(*uParam2, -771.7f, -1343.6f, 43.9f, 0f, 0f, 0f, 95f, 140f, 50f);
					_0x39816f6f94f385ad(*uParam2, -852.4f, -1349.5f, 45f, 5f, 0f, 0f, 70f, 130f, 50f);
					_0x39816f6f94f385ad(*uParam2, -907.6f, -1362.1f, 49f, 0f, 0f, 0f, 50f, 100f, 50f);
					return true;
				case 2:
					*uParam2 = _create_volume_aggregate();
					_0x39816f6f94f385ad(*uParam2, -270.606f, 827.282f, 118.4249f, 0f, 0f, 11.275f, 80f, 100.4f, 86.6f);
					_0x39816f6f94f385ad(*uParam2, -235.442f, 653.1498f, 112.3099f, 0f, 0f, 49.575f, 44.4f, 76.775f, 50f);
					_0x39816f6f94f385ad(*uParam2, -236.9004f, 797.5648f, 121.6383f, 0f, 0f, 17.55f, 53.975f, 105.5f, 20f);
					_0x39816f6f94f385ad(*uParam2, -339.8f, 829.675f, 100f, 0f, 0f, 14.975f, 25f, 75f, 50f);
					return true;
			}
			break;
	}
	return false;
}

bool func_242(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_243(int iParam0, int iParam1)
{
	if (func_469(iParam0))
	{
		return;
	}
	if (func_470(iParam0) == iParam1)
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

void func_244(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_50(&iParam1, 8192);
	}
	if (bParam4)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

int func_245(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 8;
		case 75:
			return 9;
		case 76:
			return 3;
		case 4:
			return 3;
		case 77:
			return 3;
		case 8:
			return 17;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 5;
		case 78:
			return 4;
		case 9:
			return 2;
		case 10:
			return 7;
		case 11:
			return 8;
		case 12:
			return 7;
		case 13:
			return 6;
		case 14:
			return 4;
		case 79:
			return 2;
		case 15:
			return 10;
		case 80:
			return 3;
		case 81:
			return 1;
		case 82:
			return 2;
		case 83:
			return 6;
		case 84:
			return 6;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 2;
		case 16:
			return 1;
		case 88:
			return 1;
		case 89:
			return 6;
		case 90:
			return 14;
		case 18:
			return 6;
		case 17:
			return 2;
		case 91:
			return 2;
		case 19:
			return 3;
		case 92:
			return 6;
		case 20:
			return 2;
		case 21:
			return 5;
		case 93:
			return 1;
		case 22:
			return 5;
		case 23:
			return 1;
		case 94:
			return 1;
		case 24:
			return 2;
		case 119:
			return 2;
		case 27:
			return 6;
		case 28:
			return 6;
		case 29:
			return 6;
		case 95:
			return 7;
		case 30:
			return 2;
		case 112:
			return 5;
		case 31:
			return 3;
		case 32:
			return 4;
		case 33:
			return 17;
		case 34:
			return 4;
		case 35:
			return 14;
		case 96:
			return 3;
		case 36:
			return 4;
		case 37:
			return 1;
		case 97:
			return 3;
		case 98:
			return 3;
		case 38:
			return 4;
		case 39:
			return 1;
		case 40:
			return 3;
		case 41:
			return 14;
		case 42:
			return 1;
		case 99:
			return 6;
		case 100:
			return 2;
		case 43:
			return 6;
		case 44:
			return 13;
		case 101:
			return 5;
		case 102:
			return 4;
		case 103:
			return 2;
		case 45:
			return 2;
		case 104:
			return 3;
		case 46:
			return 4;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 8;
		case 50:
			return 9;
		case 106:
			return 16;
		case 107:
			return 16;
		case 51:
			return 6;
		case 108:
			return 5;
		case 53:
			return 10;
		case 54:
			return 8;
		case 56:
			return 4;
		case 55:
			return 1;
		case 57:
			return 14;
		case 109:
			return 2;
		case 58:
			return 1;
		case 110:
			return 5;
		case 59:
			return 15;
		case 60:
			return 3;
		case 61:
			return 13;
		case 62:
			return 2;
		case 111:
			return 4;
		case 67:
			return 6;
		case 68:
			return 3;
		case 113:
			return 7;
		case 114:
			return 1;
		case 115:
			return 3;
		case 117:
			return 6;
		case 116:
			return 1;
		case 63:
			return 6;
		case 64:
			return 22;
		case 65:
			return 2;
		case 66:
			return 2;
		case 69:
			return 5;
		case 70:
			return 8;
		case 71:
			return 8;
		case 118:
			return 4;
		case 72:
			return 4;
		case 73:
			return 4;
		case 74:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_246(bool bParam0)
{
	if (bParam0)
	{
		return func_471(Global_1359489->f_4);
	}
	get_group_size(func_472(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_472(), iVar3);
		if (func_473(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_247(var uParam0)
{
	func_110(uParam0, 256);
}

void func_248(var uParam0, int iParam1)
{
	uParam0->f_177 = iParam1;
}

void func_249(var uParam0)
{
	if (*uParam0 != 0)
	{
		request_model(*uParam0, false);
	}
}

void func_250(char* sParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (is_string_null_or_empty((*uParam1)[iVar0]))
		{
			StringCopy((*uParam1)[iVar0], sParam0, 64);
			request_anim_dict((*uParam1)[iVar0]);
			return;
		}
		iVar0++;
	}
}

char* func_251(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pblSuccessMain";
		case 1:
			return "pblSuccessSkip";
		case 2:
			return "pblAmbushDealers";
		case 3:
			return "pblAmbushDealersSkip";
		case 4:
			return "pblAmbushConfeds";
		case 5:
			return "pblAmbushConfedsSkip";
		case 6:
			return "pblActionB";
		case 7:
			return "pblActionB";
		case 8:
			return "pblActionC";
		case 9:
			return "pblActionC";
		default:
			break;
	}
	return "INVALID PBL";
}

bool func_252(var uParam0)
{
	if (!func_474(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_474(uParam0->f_12))
		{
			return false;
		}
	}
	if (uParam0->f_3 != 41788943)
	{
		if (!_is_metaped_outfit_request_valid(uParam0->f_5))
		{
			uParam0->f_5 = _request_metaped_outfit(uParam0->f_1, uParam0->f_3);
			if (!_is_metaped_outfit_request_valid(uParam0->f_5))
			{
				uParam0->f_3 = 41788943;
			}
			return false;
		}
		else if (!_0x610438375e5d1801(uParam0->f_5))
		{
			return false;
		}
	}
	return true;
}

bool func_253()
{
	iVar0 = 0;
	while (iVar0 < &Global_1899517)
	{
		if (Global_1899517[iVar0] == get_id_of_this_thread())
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_254(var uParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, int iParam7)
{
	if (!does_entity_exist(*uParam1) && uParam0->f_1 != 0)
	{
		if (!does_entity_exist(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (has_model_loaded(uParam0->f_12))
			{
				Var2 = { func_475(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_476(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_477(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_478(uParam0->f_1, 1))
				{
					if (does_entity_exist(uParam0->f_11))
					{
						func_257(uParam0->f_11, 0);
					}
				}
			}
			else
			{
				request_model(uParam0->f_12, false);
			}
			return false;
		}
		else
		{
			if (has_model_loaded(uParam0->f_1))
			{
				bVar0 = (does_entity_exist(uParam0->f_11) && uParam0->f_13);
				if (bVar0)
				{
					Var2 = { func_475(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_476(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || func_479(&(uParam0->f_22)));
					Var2 = { func_475(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_476(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_477(uParam0->f_1, uParam0, Var2, Var2.f_3, iParam7, _is_this_model_a_horse(uParam0->f_1), uParam0->f_14, 0, 1);
				set_ped_config_flag(*uParam1, 307, true);
				if (!is_entity_dead(*uParam1))
				{
					if (bVar0)
					{
						func_480(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!is_string_null_or_empty(&(uParam0->f_23)))
					{
						func_481(*uParam1, &(uParam0->f_23), 0);
					}
				}
			}
			else
			{
				request_model(uParam0->f_1, false);
			}
			return false;
		}
	}
	return true;
}

bool func_255(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!does_entity_exist((*uParam1)[iVar0]->f_6))
		{
			(*uParam1)[iVar0]->f_6 = iParam0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_256(var uParam0)
{
	if (!func_34(*uParam0, 0, 0))
	{
		return;
	}
	_0x8acc0506743a8a5c(*uParam0, 166028666, 1, -1082130432);
}

void func_257(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_482(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

int func_258(int iParam0)
{
	if (iParam0 == 3)
	{
		return -183018591;
	}
	return 379542007;
}

int func_259(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_483(iParam3, 1);
	bVar1 = func_483(iParam3, 2);
	bVar2 = !func_483(iParam3, 4);
	bVar3 = func_483(iParam3, 8);
	bVar4 = !func_483(iParam3, 16);
	bVar5 = func_483(iParam3, 32);
	bVar6 = func_483(iParam3, 64);
	return func_484(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_260(var uParam0, int iParam1, int iParam2)
{
	if (!is_ped_human(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			decor_set_bool(iParam1, "HorseOwnerTeamA", true);
			break;
		case 1:
			decor_set_bool(iParam1, "HorseOwnerTeamB", true);
			break;
		case 2:
			decor_set_bool(iParam1, "HorseOwnerTeamA", true);
			decor_set_bool(iParam1, "HorseOwnerTeamB", true);
			break;
		default:
			break;
	}
}

int func_261(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_485(1811977508, 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	_0x48e4d50f87a96aa5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_486(iVar25, 0) && func_487(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

bool func_262(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_488(iParam0);
		return func_489(iParam0, 2084597891, iParam1, iVar0);
	}
	return decor_set_int(iParam0, "loot_money", iParam1);
}

int func_263(var uParam0)
{
	return uParam0;
}

bool func_264(int iParam0)
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

bool func_265(int iParam0)
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

bool func_266(int iParam0, bool bParam1)
{
	if (!func_490(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0]->f_1 == 3 || (bParam1 && Global_40.f_9571[iParam0]->f_1 == 4));
}

int func_267(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 75;
		case 2:
			return 50;
		case 1:
			return 50;
		case 3:
			return 35;
		case 4:
			return 35;
		case 5:
			return 50;
		default:
			break;
	}
	return 0;
}

bool func_268(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_269(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_270(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_271(int iParam0, int iParam1)
{
	if (!func_270(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

int func_272(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_273()
{
	if (is_entity_dead(iLocal_34))
	{
		return false;
	}
	if (func_28(1024) && (iVar1272 == 7 || iVar1272 == 10))
	{
		if (_0xa9e185d498b9ac67(iLocal_34, Global_35) || _0xa9e185d498b9ac67(iLocal_34, Global_1935630->f_40))
		{
			if (!func_158(&uLocal_920))
			{
				func_163(&uLocal_920);
			}
			else if (func_377(&uLocal_920))
			{
				func_491(&uLocal_920);
			}
			else if (func_159(&uLocal_920) > 6f)
			{
				func_31(67108864);
				return true;
			}
		}
		else if (func_158(&uLocal_920) && !func_377(&uLocal_920))
		{
			func_492(&uLocal_920);
		}
	}
	return false;
}

bool func_274(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_493(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_350(iParam0[*uParam3], 0, iParam1, uParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

void func_275(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_344(0);
	func_494(&(iLocal_35[0]), iParam0);
	func_494(&(iLocal_35[1]), iParam1);
	func_494(&(iLocal_35[2]), iParam2);
	func_494(&(iLocal_35[3]), iParam3);
}

void func_276(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bVar780)
	{
	}
	if (func_34(iParam2, 0, 1) && iParam3 != 0)
	{
		if (func_171(iParam3))
		{
			return;
		}
		iLocal_794 = 1;
		iLocal_795 = iParam2;
		iLocal_796 = iParam3;
		if (iParam9 != -1)
		{
			iLocal_798 = iParam9;
		}
	}
	else if (func_34(iParam0, 0, 1))
	{
		if (func_171(iParam1))
		{
			return;
		}
		iLocal_794 = 1;
		iLocal_795 = iParam0;
		iLocal_796 = iParam1;
		if (iParam8 != -1)
		{
			iLocal_798 = iParam8;
		}
	}
	else if (func_34(iParam6, 0, 1) && iParam7 != 0)
	{
		if (func_171(iParam7))
		{
			return;
		}
		iLocal_794 = 1;
		iLocal_795 = iParam6;
		iLocal_796 = iParam7;
		if (iParam11 != -1)
		{
			iLocal_798 = iParam11;
		}
	}
	else if (func_34(iParam4, 0, 1) && iParam5 != 0)
	{
		if (func_171(iParam5))
		{
			return;
		}
		iLocal_794 = 1;
		iLocal_795 = iParam4;
		iLocal_796 = iParam5;
		if (iParam10 != -1)
		{
			iLocal_798 = iParam10;
		}
	}
}

void func_277(int iParam0, var uParam1)
{
	if (iParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		iParam0->f_8 = func_384();
		_0xeacebaae0a33fb3f(player_id());
	}
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_10 = 0;
	func_495(iParam0, 0);
	*uParam1 = 0;
	iParam0->f_16 = 0;
}

void func_278(int iParam0, int iParam1)
{
	if (bVar793)
	{
	}
	if (bVar790)
	{
		return;
	}
	iLocal_797 = 1;
	iLocal_794 = 1;
	iLocal_795 = iParam0;
	iLocal_798 = iParam1;
}

bool func_279(int iParam0)
{
	if (is_entity_dead(*iParam0))
	{
		return false;
	}
	if (is_ped_in_vehicle(Global_35, *iParam0, false))
	{
		return true;
	}
	if (_0x619e63980bfc0096(Global_35, *iParam0, 0))
	{
		iVar0 = get_seat_ped_is_trying_to_enter(Global_35);
		switch (iVar0)
		{
			case -1:
				return true;
			case 0:
				return true;
			default:
				break;
		}
	}
	else
	{
		return is_ped_on_specific_vehicle(Global_35, *iParam0);
	}
	return false;
}

bool func_280(var uParam0, int iParam1, float fParam2)
{
	return func_286(uParam0, iParam1) <= fParam2;
}

int func_281(int iParam0)
{
	if (func_34(iParam0, 0, 1))
	{
		if (!has_entity_been_damaged_by_entity(iParam0, Global_35, 1, 1))
		{
			if (has_anim_event_fired(iParam0, -1145714767))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_282(int iParam0)
{
	func_37(iParam0);
	func_7(iParam0, 1);
	func_8(iParam0, 1500);
	func_41(iParam0, 0);
	func_47(iParam0, 0);
	func_42(iParam0, 0);
	func_43(iParam0, 0);
	func_44(iParam0, 0);
}

char* func_283(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return func_497("AMD", "LWL", "CHECK", func_496(iLocal_14));
		case 2:
			return func_497("AMD", "LWL", "MANAGE", func_496(iLocal_14));
		case 4:
			return func_497("AMD", "LWL", "DONT_ASK", func_496(iLocal_14));
		case 8:
			return func_497("AMD", "LWL", "AGREED", func_496(iLocal_14));
		case 16:
			return func_497("AMD", "LWL", "FELLERS", func_496(iLocal_14));
		case 32:
			return func_497("AMD", "LWL", "CRIMES", func_496(iLocal_14));
		case 64:
			return func_497("AMD", "LWL", "DISAPPOINTED", func_496(iLocal_14));
		case 128:
			return func_497("AMD", "LWL", "CRAP", func_496(iLocal_14));
		case 512:
			return func_497("AMD", "LWL", "HANDS_UP", func_496(iLocal_14));
		case 1024:
			return "PROPERTY_STOLEN";
		case 2048:
			switch (iParam1)
			{
				case 2:
					return "ARRIVAL_COMBAT_RAID_MALE";
				case 3:
					return "CALLOUT_JUST_KILL_EM_MALE";
				default:
					break;
			}
			break;
		case 4096:
			return func_497("AMD", "LWL", "MOURN", func_496(iLocal_14));
		case 8192:
			return func_497("AMD", "LWL", "MOURN", func_496(iLocal_14));
		case 16384:
			return func_497("AMD", "LWL", "BED", func_496(iLocal_14));
		case 32768:
			return func_497("AMD", "LWL", "FLEE", func_496(iLocal_14));
		case 65536:
			return func_497("AMD", "LWL", "WARN", func_496(iLocal_14));
		case 131072:
			return func_497("AMD", "LWL", "THREATEN", func_496(iLocal_14));
		case 262144:
			return "BLOCKED_GENERIC";
		case 524288:
			return func_497("AMD", "LWL", "AGGRO", func_496(iLocal_14));
		case 1048576:
			return func_497("AMD", "LWL", "AGGRO", func_496(iLocal_14));
		case 2097152:
			return func_497("AMD", "LWL", "WARN_AGGRO", func_496(iLocal_14));
		case 4194304:
			return func_497("AMD", "LWL", "GUNFIGHT_EARLY", func_496(iLocal_14));
		case 8388608:
			return func_497("AMD", "LWL", "AGGRO_MOUNT", func_496(iLocal_14));
		case 16777216:
			return func_497("AMD", "LWL", "AGGRO_WAGON", func_496(iLocal_14));
		case 33554432:
			return func_497("AMD", "LWL", "AGGRO_STEAL", func_496(iLocal_14));
		case 67108864:
			return func_497("AMD", "LWL", "AGGRO_POST_SHOOTOUT", func_496(iLocal_14));
		case 134217728:
			return func_497("AMD", "LWL", "FEUD", func_496(iLocal_14));
		case 256:
			return func_497("AMD", "LWL", "RIP", func_496(iLocal_14));
		case 268435456:
			return func_497("AMD", "LWL", "EXIT_WAGON", func_496(iLocal_14));
		case 536870912:
			return func_497("AMD", "LWL", "PLYFINAL_KILLED", func_496(iLocal_14));
		case 1073741824:
			return func_497("AMD", "LWL", "PLYFINAL_WATCHED", func_496(iLocal_14));
	}
	return "INVALID DIALOGUE STRING";
}

bool func_284(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_498(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_285(int iParam0, int iParam1)
{
	if (!func_34(iParam0, 0, 1))
	{
		return false;
	}
	if (!func_342(iParam0, Global_35, 0, 20f, 0))
	{
		return false;
	}
	if (_0x2dd4e0e26dfad97d(iParam0, Global_35, 1110704128))
	{
		return false;
	}
	if (!is_ped_facing_ped(iParam0, Global_35, 90f))
	{
		return false;
	}
	return true;
}

float func_286(var uParam0, int iParam1)
{
	return &(uParam0->f_98[iParam1]);
}

void func_287(int iParam0)
{
	if (func_28(iParam0))
	{
		func_379(&uLocal_806, iParam0);
	}
}

bool func_288(int iParam0, int iParam1)
{
	if (!func_34(iParam0, 0, 1))
	{
		return false;
	}
	else if (!func_34(iParam1, 0, 1))
	{
		return true;
	}
	if (func_209(iParam0, 1, 1) < func_209(iParam1, 1, 1))
	{
		return true;
	}
	return false;
}

bool func_289(int iParam0)
{
	if (Local_51.f_46)
	{
		return false;
	}
	else if (func_127(32768))
	{
		return false;
	}
	else if ((iParam0 > 0 && iParam0 != 9) && iParam0 != 10)
	{
		return true;
	}
	return false;
}

void func_290(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

int func_291(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_499(iParam0, Local_936[iParam0]);
		case 1:
			return func_499(iParam0, Local_936[iParam0]);
		case 2:
			return func_499(iParam0, Local_936[iParam0]);
		case 3:
			return func_499(iParam0, Local_936[iParam0]);
		default:
			break;
	}
	return 0;
}

void func_292(int iParam0)
{
	if (func_53(iParam0))
	{
		func_31(134217728);
	}
	else
	{
		func_31(268435456);
	}
}

void func_293(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	(*Local_15[iParam0])[0] = bParam1;
	(*Local_15[iParam0])[1] = iParam2;
	(*Local_15[iParam0])[2] = iParam3;
}

void func_294(int iParam0, int iParam1, bool bParam2)
{
	if (func_165(524288, 1) || func_165(524288, 3))
	{
		bVar0 = true;
	}
	switch (iParam1)
	{
		case 0:
			func_500(&(Local_936[iParam0]->f_21), bParam2, bVar0);
			break;
		case 1:
			func_501(&(Local_936[iParam0]->f_21), bParam2, bVar0);
			break;
		case 2:
			func_502(&(Local_936[iParam0]->f_21), iLocal_14, bParam2, bVar0);
			break;
		case 3:
			func_503(&(Local_936[iParam0]->f_21), iLocal_14, bParam2, bVar0);
			break;
	}
}

void func_295(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (is_entity_dead(&(iLocal_35[iParam0])))
	{
		return;
	}
	if (_does_anim_scene_exist(Local_528.f_1) && _is_anim_scene_started(Local_528.f_1, false))
	{
		remove_anim_scene_entity(Local_528.f_1, func_343(&(iLocal_35[iParam0])), &(iLocal_35[iParam0]));
	}
	if (bParam2)
	{
		force_ped_motion_state(&(iLocal_35[iParam0]), -668482597, false, 0, false);
	}
	if (func_34(iParam1, 0, 1))
	{
		open_sequence_task(&iVar0);
		if (bParam4)
		{
			task_react(0, Global_35, Global_36, "Default_Panic", &(uLocal_1259[iParam0]), 0, 4);
		}
		task_mount_animal(0, iParam1, -1, -1, iParam3, 1, 0, 0);
		func_212(&(iLocal_35[iParam0]), &iVar0, 0, 0, 1, 1);
	}
	else
	{
		func_504(&(iLocal_35[iParam0]), 2, Global_35, 0);
	}
	set_ped_keep_task(&(iLocal_35[iParam0]), true);
}

Vector3 func_296(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			switch (iParam1)
			{
				case 0:
					return 1883.499f, -353.6361f, 42.99891f;
				case 1:
					return 1323.799f, -1621.197f, 65.34177f;
				case 2:
					return 803.399f, -868.0172f, 52.29998f;
				case 3:
					return 822.8569f, -565.3245f, 80.48996f;
				case 4:
					return 1345.24f, -1757.963f, 69.7615f;
				case 5:
					return 1556.001f, -1115.632f, 42.5987f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_297(int iParam0, int iParam1)
{
	if (func_28(1048576))
	{
		return false;
	}
	else if (is_entity_dead(&(iLocal_35[iParam0])))
	{
		return false;
	}
	else if (!func_28(262144))
	{
		return false;
	}
	switch (iVar1243)
	{
		case 0:
			if (!is_entity_dead(iLocal_34) && _0x619e63980bfc0096(&(iLocal_35[iParam0]), iLocal_34, 1))
			{
			}
			else if (is_ped_on_mount(&(iLocal_35[iParam0])) && !_is_ped_getting_into_a_mount_seat(&(iLocal_35[iParam0]), true))
			{
			}
			else
			{
				func_148();
				func_163(&uLocal_908);
				if (!is_ped_in_any_vehicle(&(iLocal_35[iParam0]), false))
				{
					task_turn_ped_to_face_entity(&(iLocal_35[iParam0]), Global_35, 2000, -1082130432, -1082130432, -1082130432);
				}
				func_505(&(iLocal_35[iParam0]));
				func_506(&uLocal_1247, 1);
			}
			break;
		case 1:
			if (!is_entity_dead(&(iLocal_35[iParam0])))
			{
				func_334(&(iLocal_35[iParam0]), Global_35, 131072, 291934926);
			}
			if ((!func_304(&(iLocal_35[iParam0]), 242628503) || has_anim_event_fired(&(iLocal_35[iParam0]), -2113731257)) || func_159(&uLocal_908) > 7.5f)
			{
				if (iParam0 == iVar1246)
				{
					func_31(2097152);
					func_294(iParam0, 0, 1);
					if ((func_28(8192) && func_34(&(iLocal_35[iVar1247]), 0, 1)) && iVar1273 < 5)
					{
						func_294(iVar1247, 1, 1);
						func_293(iVar1247, 1, 1, 1);
					}
				}
				else if (iParam0 == iVar1247)
				{
					func_31(2097152);
					func_294(iParam0, 1, 1);
					if ((func_28(4096) && func_34(&(iLocal_35[iVar1246]), 0, 1)) && iVar1273 < 7)
					{
						func_294(iVar1246, 0, 1);
						func_293(iVar1246, 1, 1, 1);
					}
				}
				else if (iParam0 == iVar1244)
				{
					func_31(4194304);
					func_294(iParam0, 2, 1);
					if ((func_28(2048) && func_34(&(iLocal_35[iVar1245]), 0, 1)) && iVar1271 < 6)
					{
						func_294(iVar1245, 3, 1);
						func_293(iVar1245, 1, 1, 1);
					}
				}
				else
				{
					func_31(4194304);
					func_294(iParam0, 3, 1);
					if ((func_28(1024) && func_34(&(iLocal_35[iVar1244]), 0, 1)) && iVar1270 < 7)
					{
						func_294(iVar1244, 2, 1);
						func_293(iVar1244, 1, 1, 1);
					}
				}
				if (!func_165(16384, iParam0))
				{
					func_293(iParam0, 1, 1, 1);
				}
				func_506(&uLocal_1247, 2);
			}
			break;
		case 2:
			if (!is_entity_dead(&(iLocal_35[iParam0])))
			{
				func_334(&(iLocal_35[iParam0]), Global_35, 131072, 291934926);
			}
			_0x66f9eb44342bb4c5(&(iLocal_35[iParam0]), &Local_701);
			if ((iParam1 != iParam0 && !is_entity_dead(&(iLocal_35[iParam1]))) && func_165(2, iParam1))
			{
				_0x66f9eb44342bb4c5(&(iLocal_35[iParam1]), &Local_726);
			}
			func_163(&uLocal_911);
			if ((func_103(iVar801, 131072) && func_364(-3f, 1, 0, 0)) || func_159(&uLocal_908) > 4f)
			{
				func_507(&(Local_51.f_5), &uLocal_836);
				func_163(&uLocal_908);
				func_506(&uLocal_1247, 3);
			}
			break;
		case 3:
			if (!func_280(&Local_51, iParam0, 2f))
			{
				func_31(524288);
				func_167(&uLocal_908);
				func_506(&uLocal_1247, 7);
			}
			else if (func_159(&uLocal_908) > 6f)
			{
				func_507(&(Local_51.f_5), &uLocal_836);
				func_505(&(iLocal_35[iParam0]));
				func_284(&(iLocal_35[iParam0]), Global_35, func_283(2097152, 2), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				func_506(&uLocal_1247, 4);
			}
			break;
		case 4:
			_0x66f9eb44342bb4c5(&(iLocal_35[iParam0]), &Local_701);
			if ((iParam1 != iParam0 && !is_entity_dead(&(iLocal_35[iParam1]))) && func_165(2, iParam1))
			{
				_0x66f9eb44342bb4c5(&(iLocal_35[iParam1]), &Local_726);
			}
			if (has_anim_event_fired(&(iLocal_35[iParam0]), -2113731257) || func_364(5f, 1, 0, 0))
			{
				func_163(&uLocal_908);
				func_506(&uLocal_1247, 5);
			}
			break;
		case 5:
			if (!func_280(&Local_51, iParam0, 2f))
			{
				func_31(524288);
				func_167(&uLocal_908);
				func_506(&uLocal_1247, 7);
			}
			else if (func_159(&uLocal_908) > 4f)
			{
				Local_51.f_46 = 1;
				if (func_53(iParam0))
				{
					func_31(134217728);
				}
				else
				{
					func_31(268435456);
				}
				func_130(&uLocal_758, 9);
				func_506(&uLocal_1247, 6);
			}
			break;
		case 6:
			break;
		case 7:
			return true;
	}
	return false;
}

void func_298(int iParam0)
{
	if (func_34(iParam0, 0, 1))
	{
		clear_ped_tasks(iParam0, 1, 0);
		clear_ped_secondary_task(iParam0);
	}
}

bool func_299(int iParam0)
{
	if (Local_51.f_46)
	{
		return false;
	}
	else if (func_127(32768))
	{
		return false;
	}
	else if (iParam0 > 0)
	{
		if (iParam0 < 6)
		{
			return true;
		}
		else if (!func_28(2048))
		{
			if ((((iParam0 != 9 && iParam0 != 13) && iParam0 != 10) && iParam0 != 11) && iParam0 != 12)
			{
				return true;
			}
		}
	}
	return false;
}

void func_300(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

void func_301(int iParam0)
{
	if (!func_171(iParam0))
	{
		func_110(&uLocal_805, iParam0);
	}
}

void func_302(int iParam0, int iParam1, int iParam2)
{
	if (!func_34(iParam0, 0, 1))
	{
		return;
	}
	if (!func_175(iParam0, iLocal_34, 1))
	{
		if (get_script_task_status(iParam0, -1794415470, true) != 1 && get_script_task_status(iParam0, 242628503, true) != 1)
		{
			task_enter_vehicle(iParam0, iLocal_34, -1, iParam1, 1.5f, iParam2, 0);
		}
	}
}

bool func_303(int iParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam0) && !is_entity_dead(iParam1))
	{
		if (is_ped_sitting_in_vehicle(iParam0, iParam1))
		{
			if (get_ped_in_vehicle_seat(iParam1, iParam2) == iParam0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_304(int iParam0, int iParam1)
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

Vector3 func_305(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			switch (iParam1)
			{
				case 0:
					return 1813.695f, -446.8831f, 41.97974f;
				case 1:
					return 1343.588f, -1643.199f, 65.68797f;
				case 2:
					return 810.393f, -941.4841f, 51.06862f;
				case 3:
					return 829.9801f, -564.2598f, 81.84518f;
				case 4:
					return 1477.644f, -1698.715f, 61.6944f;
				case 5:
					return 1494.094f, -1042.356f, 50.65789f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_306(int iParam0, int iParam1)
{
	return func_437(iParam0, iParam1, 1, 1);
}

void func_307(int iParam0, bool bParam1)
{
	if (!func_34(&(iLocal_35[iParam0]), 0, 0))
	{
		return;
	}
	func_508(iLocal_35[iParam0]);
	open_sequence_task(&iVar0);
	if (bParam1)
	{
		task_combat_hated_targets_around_ped(0, 75f, 33554432, 0);
	}
	else
	{
		task_combat_hated_targets_around_ped(0, 75f, 0, 0);
	}
	func_212(&(iLocal_35[iParam0]), &iVar0, 0, 0, 1, 1);
}

int func_308(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

void func_309(int iParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (func_34(&(iLocal_35[iParam0]), 0, 1))
	{
		func_509(iParam0, -1, bParam1, fParam2, 0, 131073, bParam3, 0);
		func_31(1024);
		func_213(32, iParam0);
		iLocal_1248 = iParam0;
	}
}

bool func_310(int iParam0)
{
	if (Local_51.f_46)
	{
		return false;
	}
	else if (func_127(32768))
	{
		return false;
	}
	else if ((iParam0 > 0 && iParam0 != 9) && iParam0 != 13)
	{
		return true;
	}
	return false;
}

bool func_311(int iParam0, bool bParam1)
{
	if (func_34(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

void func_312(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			func_333((*uParam0)[iVar0]->f_21[iVar1], 0, 0);
			iVar1++;
		}
		iVar0++;
	}
}

void func_313(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		func_510(&((*uParam0)[iVar0]->f_21), iVar1);
		iVar0++;
	}
}

char* func_314(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	switch (iParam0)
	{
		case 1:
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						return "RESPONSE_IDLING";
					case 1:
						return "SCARED_COMMUNICATE";
					case 2:
						return "HEADS_UP_WILDERNESS";
					case 3:
						return "HEADS_UP_WILDERNESS";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "OPENS_FIRE";
					case 1:
						return "OPENS_FIRE";
					case 2:
						return "OPENS_FIRE";
					case 3:
						return "OPENS_FIRE";
					default:
						break;
				}
			}
			break;
		default:
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						return "LEAVE_NOW";
					case 1:
						return "MELEE_AGGRO_TRANSITION";
					case 2:
						return "HEADS_UP_THREATEN";
					case 3:
						return "HEADS_UP_CONFRONT";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "FIGHT_RESPONSE";
					case 2:
						return "OPENS_FIRE";
					case 3:
						return "OPENS_FIRE";
					case 1:
						if (bParam4)
						{
							return "GENERIC_ANGRY_REACTION";
						}
						else if (bParam3)
						{
							return "GENERIC_INSULT_HIGH_MALE";
						}
						else
						{
							return "FIGHT";
						}
						break;
				}
			}
			break;
	}
	return "OPENS_FIRE";
}

int func_315(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	switch (iParam0)
	{
		case 1:
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						return 1;
					case 1:
						return 1;
					case 2:
						return 2;
					case 3:
						return 1;
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 2;
					case 1:
						return 2;
					case 2:
						return 2;
					case 3:
						return 1;
					default:
						break;
				}
			}
			break;
		default:
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						return 1;
					case 1:
						return 1;
					case 2:
						return 1;
					case 3:
						return 1;
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 2;
					case 2:
						return 2;
					case 3:
						return 2;
					case 1:
						if (bParam4)
						{
							return 2;
						}
						else if (bParam3)
						{
							return 1;
						}
						else
						{
							return 1;
						}
						break;
				}
			}
			break;
	}
	return 0;
}

bool func_316(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_511(iParam0, &Var0);
}

void func_317(int iParam0)
{
	if (func_165(1048576, iParam0))
	{
		return;
	}
	iLocal_1237[iParam0] = func_512(iLocal_35[iParam0], Local_936[iParam0], 30f, &(Local_936[iParam0]->f_21), &(Local_51.f_192), 0f, 1, 0, 0, &(uLocal_1242[iParam0]), 0, 0, 2, 1, -1082130432, 0);
}

void func_318(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (_0xa7e51b53309eac97(*iParam0))
	{
		return;
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (!is_ped_injured(*iParam0))
	{
		set_entity_load_collision_flag(*iParam0, 0);
		if (!bParam3)
		{
			clear_ped_secondary_task(*iParam0);
		}
		set_ped_keep_task(*iParam0, bParam1);
		if (bParam2)
		{
			set_blocking_of_non_temporary_events(*iParam0, false);
		}
	}
	set_ped_as_no_longer_needed(iParam0);
}

void func_319(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!does_entity_exist(*iParam4))
	{
		*iParam4 = func_513(iParam0, vParam1, iParam5, iParam6);
	}
	if (does_entity_exist(*iParam4))
	{
		func_514(*iParam4);
	}
}

void func_320(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	func_515(iParam0, vParam1, 0f, 0f, 0f, 0f, 0f, 0f, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_321(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, int iParam7)
{
	fVar0 = func_219(bParam6, iParam7, vdist(vParam1, get_entity_coords(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_468(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
		{
			*iParam4 = func_384();
			iParam4->f_2 = func_109(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_468(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
	{
		*iParam4 = func_384();
		iParam4->f_2 = func_109(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_322(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_384() - *uParam0) >= iParam1;
	}
	return false;
}

bool func_323(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	bVar1 = false;
	fVar2 = func_402(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (get_entity_speed(Global_35) > fParam5)
		{
			return false;
		}
	}
	if (fParam7 > 0f)
	{
		if (absf((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return false;
		}
	}
	if (uParam0->f_178 && func_400())
	{
		bVar1 = true;
		fVar3 = func_219(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!_does_volume_exist(uParam0->f_173) || is_entity_in_volume(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_403(uParam0->f_121[iVar0], fVar3, 1082130432, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_403(uParam0->f_121[0], fVar3, 1082130432, 1, 90f, 0, 0);
		}
		if (func_404(&(uParam0->f_121), iParam4, fParam1))
		{
			func_189(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				_0xb2a38826e5886e83(func_223(uParam0->f_3, uParam0->f_185), 0);
			}
			return true;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!is_entity_dead(uParam0->f_121[iVar0]->f_6))
		{
			if (vdist2(Global_36, get_entity_coords(uParam0->f_121[iVar0]->f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (_does_volume_exist(uParam0->f_173) && !(bParam8 && _is_ped_getting_into_a_mount_seat(Global_35, true)))
					{
						if (!is_entity_in_volume(Global_35, uParam0->f_173, false, 0))
						{
							return false;
						}
					}
					if (bParam6)
					{
						func_188(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_189(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					_0xb2a38826e5886e83(func_223(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_324()
{
	switch (iLocal_14)
	{
		case 0:
			return 513747494;
		default:
			break;
	}
	return 67779789;
	return 513747494;
}

Vector3 func_325(int iParam0, int iParam1, vector3 vParam2)
{
	switch (iParam0)
	{
		case 11:
			switch (iParam1)
			{
				case 0:
					return 1852.195f, -384.1873f, 41.85531f;
				case 2:
					return 781.9018f, -906.9106f, 50.12431f;
				case 4:
					return 1389.215f, -1694.26f, 66.361f;
				default:
					break;
			}
			break;
	}
	return vParam2;
}

float func_326()
{
	switch (iLocal_14)
	{
		case 0:
			return 23f;
		case 1:
			return 35f;
		default:
			break;
	}
	return -1f;
}

float func_327(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			switch (iParam1)
			{
				case 0:
					return 30f;
				case 1:
					return 35f;
				case 2:
					return 35f;
				case 3:
					return 15f;
				case 4:
					return 30f;
				default:
					break;
			}
			break;
	}
	return 15f;
}

void func_328(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, bool bParam13)
{
	func_516(uParam0, 1);
	uParam0->f_12 = sParam2;
	uParam0->f_5 = fParam8;
	uParam0->f_6 = fParam9;
	*uParam0 = iParam1;
	uParam0->f_8 = fParam7;
	StringCopy(&cVar4, sParam2, 32);
	Var0 = { cVar4 };
	if (!func_105(vParam3))
	{
	}
	if (fParam8 > 0f)
	{
		StringConCat(&Var0, "Vis", 32);
		uParam0->f_2 = _create_volume_sphere_with_custom_name(vParam3, 0f, 0f, 0f, fParam8, fParam8, fParam8, &Var0);
	}
	else
	{
		uParam0->f_2 = _create_volume_cylinder_with_custom_name(vParam3, 0f, 0f, 0f, 1f, 1f, 3f, &cVar4);
	}
	if (fParam9 > 0f && fParam9 != fParam8)
	{
		Var0 = { cVar4 };
		StringConCat(&Var0, "Aud", 32);
		uParam0->f_3 = _create_volume_sphere_with_custom_name(vParam3, 0f, 0f, 0f, fParam9, fParam9, fParam9, &Var0);
	}
	if (!func_105(vParam3))
	{
		uParam0->f_1 = add_shocking_event_at_position(iParam1, vParam3, fParam7, fParam8, fParam9, fParam10, fParam11, -1, -1);
	}
	else
	{
		if (_does_volume_exist(uParam0->f_2))
		{
			_0x7c00cfc48a782dc0(uParam0->f_2, iParam6, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		if (_does_volume_exist(uParam0->f_3))
		{
			_0x7c00cfc48a782dc0(uParam0->f_3, iParam6, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		uParam0->f_1 = add_shocking_event_for_entity(iParam1, iParam6, fParam7, fParam8, fParam9, fParam10, fParam11, fParam12, bParam13, false, -1, -1);
	}
}

char* func_329(int iParam0)
{
	if (func_517(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				return "GREET_POS";
			case 1:
				return "GREET_NEG";
			case 2:
				return "GREET_SPOS";
			case 3:
				return "GREET_SNEG";
			case 4:
				return "GREET_ACC";
			case 5:
				return "GREET_REJ";
			case 6:
				return "BEAT_GRT_NEG";
			case 7:
				return "INTERACT_GREET";
			case 8:
				return "INTERACT_DEFUSE";
			case 9:
				return "INTERACT_LET_GO";
			case 10:
				return "INTERACT_INSULT";
			case 11:
				return "INTERACT_THREATEN";
			case 12:
				return "INTERACT_ROB";
			case 13:
				return "INTERACT_ROB_GRAPPLE_LET_GO";
			case 14:
				return "INTERACT_ROB_ACCEPT";
			case 15:
				return "INTERACT_ROB_REJECT_MELEE";
			case 16:
				return "INTERACT_STOP_WITNESS";
			case 17:
				return "INTERACT_STOP_VEHICLE";
			case 18:
				return "INTERACT_STOP_HORSE";
			case 19:
				return "INTERACT_REQUEST_RIDE";
			case 20:
				return "INTERACT_STEAL_HORSE";
			case 21:
				return "INTERACT_STEAL_VEHICLE";
			case 22:
				return "INTERACT_HORSE";
			case 23:
				return "INTERACT_CALLOUT";
			case 24:
				return "INTERACT_QUESTION";
			case 25:
				return "INTERACT_ENCOURAGE";
			case 26:
				return "INTERACT_INTERVENE";
			case 27:
				return "INTERACT_CONFRONT";
			case 28:
				return "RE_INTER_TRUTH";
			case 29:
				return "RE_INTER_LIE";
			case 30:
				return "INTERACT_QUIT";
			case 31:
				return "RE_INTER_DIRECT";
			case 32:
				return "INTERACT_SCOLD";
			case 33:
				return "INTERACT_PRAISE";
			case 34:
				return "INTERACT_ASSIST";
			case 35:
				return "INTERACT_MISLEAD";
			case 36:
				return "INTERACT_ASK";
			case 37:
				return "INTERACT_DEMAND";
			default:
				break;
		}
	}
	return "PED_INTERACT_PROMPT_LABEL_ERROR";
}

void func_330(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_518(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_519(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_520(iParam0->f_6, iParam0->f_5, 0);
			}
			func_521(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_522(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

int func_331(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

void func_332(var uParam0, bool bParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	if (bParam1)
	{
		func_330((*uParam0)[0], func_329(8), sParam2, -163964935, 0, 0, 0, 0, 0);
	}
	else
	{
		func_330((*uParam0)[0], func_329(7), sParam3, -163964935, 0, 0, 0, 0, 0);
	}
	if (!is_string_null_or_empty(sParam5))
	{
		func_330((*uParam0)[2], func_329(12), sParam5, -1616532217, 0, 0, 0, 0, 0);
	}
	func_330((*uParam0)[1], func_329(10), sParam4, 648122183, 0, 0, 0, 0, 0);
}

void func_333(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_523(iParam0, 13))
	{
		func_524(iParam0, 0);
	}
	else
	{
		func_525(iParam0, 0);
	}
	if (func_518(iParam0->f_6))
	{
		if (bParam2)
		{
			func_526(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_334(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (has_anim_event_fired(iParam0, func_527(iParam2)))
	{
		func_284(iParam0, iParam1, func_283(iParam2, 2), 0, -1082130432, 0, 0, 0, 1, 1, 0, iParam3, 1, 0, 0);
		func_301(iParam2);
		return true;
	}
	return false;
}

void func_335(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

void func_336(int iParam0)
{
	iVar0 = func_528(iParam0);
	if (func_165(8, iParam0))
	{
		if (func_337(iParam0, "onGround", 16))
		{
			func_529(&(iLocal_35[iParam0]), 1, 0);
		}
	}
	else if (iVar0 != iParam0 && func_337(iVar0, "fireGun", 4))
	{
		func_213(8, iParam0);
	}
}

bool func_337(int iParam0, char* sParam1, int iParam2)
{
	if (func_165(iParam2, iParam0))
	{
		return false;
	}
	else if (has_anim_event_fired(&(iLocal_35[iParam0]), get_hash_key(sParam1)))
	{
		func_213(iParam2, iParam0);
		return true;
	}
	return false;
}

void func_338(int iParam0, bool bParam1)
{
	if (is_entity_dead(&(iLocal_35[iParam0])) || func_165(2, iParam0))
	{
		return;
	}
	switch (iLocal_14)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					func_365(0, bParam1, 1065353216, 0);
					if (func_28(1) && iVar1248 == 1)
					{
						func_213(2, 1);
						func_359(1, 0, 1065353216, 0);
					}
					break;
				case 1:
					func_359(1, bParam1, 1065353216, 0);
					break;
				case 2:
					func_309(2, bParam1, 1065353216, 0);
					if (func_28(1) && iVar1248 == 3)
					{
						func_213(2, 3);
						func_358(3, 0, 1065353216, 0, 0);
					}
					break;
				case 3:
					func_358(3, 0, 1065353216, 0, 0);
					break;
			}
			break;
		case 0:
			switch (iParam0)
			{
				case 2:
					func_309(2, bParam1, 1065353216, 0);
					break;
				case 3:
					func_358(3, bParam1, 1065353216, 0, 0);
					break;
			}
			break;
	}
}

bool func_339(int iParam0, char* sParam1)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	return has_anim_event_fired(iParam0, get_hash_key(sParam1));
}

void func_340(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam2)
	{
		set_relationship_between_groups(6, *uParam1, *uParam0);
		set_relationship_between_groups(6, *uParam0, *uParam1);
	}
	if (bParam4)
	{
		set_relationship_between_groups(6, *uParam1, 1862763509);
		set_relationship_between_groups(6, *uParam1, 1391706777);
	}
	if (bParam3)
	{
		set_relationship_between_groups(6, *uParam0, 1862763509);
		set_relationship_between_groups(6, *uParam0, 1391706777);
	}
}

bool func_341(int iParam0)
{
	if (fVar826 == -1f)
	{
		return false;
	}
	else if (fVar826 > &uLocal_817[iParam0])
	{
		return true;
	}
	return false;
}

bool func_342(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_530(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_531(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && is_entity_a_ped(iParam1))
	{
		return _0x9d9473cb82d83a30(iParam0, get_ped_index_from_entity_index(iParam1), 0) == 1;
	}
	return _0x7f9b9791d4cb71f6(iParam0, iParam1, bParam2, 0) == 1;
}

char* func_343(int iParam0)
{
	if (iParam0 == &iLocal_35[0])
	{
		return "dealerA";
	}
	if (iParam0 == &iLocal_35[1])
	{
		return "dealerb";
	}
	if (iParam0 == &iLocal_35[2])
	{
		return "confeda";
	}
	if (iParam0 == &iLocal_35[3])
	{
		return "confedb";
	}
	return "INVALID PED";
}

void func_344(int iParam0)
{
	func_167(&uLocal_0);
	func_532(1, iParam0, 0);
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_533();
}

void func_345(int iParam0, int iParam1, int iParam2)
{
	iLocal_1252 = iParam0;
	iLocal_50 = iParam1;
	iLocal_1253 = iParam2;
}

void func_346(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_347(int iParam0, int iParam1, var uParam2, float fParam3)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam1->f_5)
	{
		func_534(iParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		iParam1->f_12 = fParam3;
	}
	else
	{
		iParam1->f_12 = vdist(Global_36, get_entity_coords(iParam0, false, false));
	}
	if (!Global_1935630->f_12 && !is_entity_dead(iParam0))
	{
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam1->f_1 & 2 != 0)
			{
				if (func_535(iParam1, 4000))
				{
					if ((func_536(iParam0, Global_1935630->f_41, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) && func_537(iParam1, iParam0)) && func_538(iParam1, iParam0))
					{
						func_539();
						*uParam2 = 2;
						func_540(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 2 != 0)
		{
			if (iParam1->f_12 < 4f)
			{
				if (func_535(iParam1, 4000))
				{
					if ((func_536(iParam0, Global_1935630->f_41, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) && func_537(iParam1, iParam0)) && func_538(iParam1, iParam0))
					{
						func_539();
						*uParam2 = 2;
						func_540(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam1 & 131072 == 0)
						{
							if (func_541(iParam0, Global_1935630->f_41))
							{
								func_539();
								*uParam2 = 2;
								func_540(iParam0, iParam1, *uParam2);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_41 != 0)
			{
				if (Global_1935630->f_40 == 0)
				{
					if (*iParam1 & 131072 == 0)
					{
						if (func_541(iParam0, Global_1935630->f_41))
						{
							func_539();
							*uParam2 = 2;
							func_540(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam1 & 131072 == 0)
				{
					if (func_542())
					{
						if (func_541(iParam0, Global_1935630->f_42))
						{
							func_539();
							*uParam2 = 2;
							func_540(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_543(iParam1, 1065353216))
			{
				if (!iParam1->f_1 & 4 != 0)
				{
					if (func_544(Global_35, iParam0, iParam1))
					{
						func_539();
						*uParam2 = 4;
						func_540(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (!iParam1->f_1 & 256 != 0)
				{
					if (func_545(Global_35, iParam0, iParam1))
					{
						func_539();
						*uParam2 = 256;
						func_540(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 131072 != 0)
		{
			if (func_546(iParam0, iParam1))
			{
				func_539();
				*uParam2 = 131072;
				func_540(iParam0, iParam1, *uParam2);
				return true;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (func_547(iParam0, iParam1))
			{
				func_539();
				*uParam2 = 262144;
				func_540(iParam0, iParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

void func_348(int iParam0)
{
	func_37(iParam0);
	func_7(iParam0, 1);
	func_8(iParam0, 250);
	func_44(iParam0, 0);
}

void func_349(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	if (!is_entity_dead(iParam0))
	{
		if (does_blip_exist(*iParam1))
		{
			remove_blip(iParam1);
		}
		iVar0 = get_blip_from_entity(iParam0);
		if (does_blip_exist(iVar0))
		{
			remove_blip(&iVar0);
		}
		*iParam1 = _blip_add_for_entity(iParam2, iParam0);
		if (iParam3 != 0)
		{
			_blip_set_modifier(*iParam1, iParam3);
		}
		if (iParam4 != 0)
		{
			set_blip_sprite(*iParam1, iParam4, true);
		}
		if (!is_string_null_or_empty(sParam5))
		{
			set_blip_name_from_text_file(*iParam1, sParam5);
		}
	}
}

bool func_350(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam2->f_5)
	{
		func_534(iParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !is_entity_dead(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = vdist(Global_36, get_entity_coords(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (func_548(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_540(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_549(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_540(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_550(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_540(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_551(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_540(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_407(player_id(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_540(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_543(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_544(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_540(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_545(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_540(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_552(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_540(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_552(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_540(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_553(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_540(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_554(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					func_540(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_535(iParam2, 4000))
				{
					if ((func_536(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_537(iParam2, iParam0)) && func_538(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_540(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_536(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_537(iParam2, iParam0)) && func_538(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_540(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_541(iParam0, Global_1935630->f_41))
							{
								func_539();
								*uParam3 = 2;
								func_540(iParam0, iParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (func_541(iParam0, Global_1935630->f_41))
						{
							func_539();
							*uParam3 = 2;
							func_540(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_555(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_384() - iParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_539();
						*uParam3 = 2;
						func_540(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_542())
					{
						if (func_541(iParam0, Global_1935630->f_42))
						{
							func_539();
							*uParam3 = 2;
							func_540(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_556(iParam2, iParam0))
			{
				*uParam3 = 1024;
				func_540(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_557(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					func_540(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_558(iParam0, iParam2))
					{
						*uParam3 = 8192;
						func_540(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_559(iParam0, iParam2))
				{
					*uParam3 = 32768;
					func_540(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_560(iParam2, 4000))
				{
					if (func_561(&iParam0, iParam2))
					{
						*uParam3 = 512;
						func_540(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_562(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_540(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_563(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_540(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

float func_351(float fParam0, float fParam1, float fParam2)
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

bool func_352(int iParam0)
{
	if (!does_entity_exist(iLocal_34) || !func_34(iParam0, 0, 0))
	{
		return false;
	}
	vVar0 = { get_offset_from_entity_in_world_coords(iLocal_34, 0f, 10f, 0f) };
	vVar3 = { get_entity_coords(iParam0, true, false) };
	if (func_564(Global_36, vVar3, vVar0))
	{
		return true;
	}
	return false;
}

Vector3 func_353(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 11:
			switch (iParam2)
			{
				case 1:
					switch (iParam1)
					{
						case 0:
							return 1849.682f, -382.4103f, 42.2056f;
						case 1:
							return 1313.553f, -1637.015f, 65.96715f;
						case 2:
							return 784.8195f, -907.0717f, 50.172f;
						case 3:
							return 857.6899f, -535.2601f, 87.88438f;
						case 4:
							return 1383.435f, -1695.935f, 66.69115f;
						case 5:
							return 1572.125f, -1169.729f, 44.98163f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return 1848.532f, -379.2958f, 42.28083f;
						case 1:
							return 1311.495f, -1638.225f, 66.04156f;
						case 2:
							return 784.6487f, -902.4513f, 50.2746f;
						case 3:
							return 858.7761f, -538.0076f, 87.85596f;
						case 4:
							return 1382.318f, -1700.524f, 66.80943f;
						case 5:
							return 1572.125f, -1169.729f, 44.98163f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_354(var uParam0)
{
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 300;
	(*uParam0)[2] = 600;
	(*uParam0)[3] = 900;
}

void func_355(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(iParam0, 1024);
	}
	else
	{
		func_50(iParam0, 1024);
	}
}

void func_356(int iParam0, int iParam1)
{
	iParam0->f_20 = iParam1;
}

int func_357(int iParam0)
{
	iVar0 = get_ped_relationship_group_default_hash(iParam0);
	switch (iVar0)
	{
		case -1448293989:
			return 3;
		case 555364152:
			return 2;
		case -1996978098:
			return 0;
		case 1078461828:
			return 1;
		case -1535431934:
			return 4;
		case -1663301869:
			return 5;
		default:
			break;
	}
	return -1;
}

void func_358(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (func_34(&(iLocal_35[iParam0]), 0, 1))
	{
		func_509(iParam0, 0, bParam1, fParam2, 0, 262145, bParam3, bParam4);
		func_31(2048);
		func_213(32, iParam0);
		iLocal_1249 = iParam0;
	}
}

void func_359(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (func_34(&(iLocal_35[iParam0]), 0, 1))
	{
		func_295(iParam0, &(uLocal_45[1]), bParam1, iParam2, bParam3);
		func_31(8192);
		func_213(32, iParam0);
		iLocal_1251 = iParam0;
	}
}

void func_360(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_361(int iParam0, int iParam1, var uParam2, var uParam3)
{
	(*uParam3)[0] = 0.5f;
	(*uParam3)[1] = 0.5f;
	(*uParam3)[2] = 0.5f;
	(*uParam3)[3] = 0.5f;
	iVar1 = 0;
	fVar3 = 9999f;
	switch (iParam0)
	{
		case 1:
			(*uParam2)[0] = 1;
			if (func_209(iParam1[0], 1, 1) < func_209(iParam1[2], 1, 1))
			{
				(*uParam2)[1] = 0;
				(*uParam2)[2] = 2;
			}
			else
			{
				(*uParam2)[1] = 2;
				(*uParam2)[2] = 0;
			}
			(*uParam2)[3] = 3;
			break;
		case 3:
			(*uParam2)[0] = 3;
			if (func_209(iParam1[0], 1, 1) < func_209(iParam1[2], 1, 1))
			{
				(*uParam2)[1] = 0;
				(*uParam2)[2] = 2;
			}
			else
			{
				(*uParam2)[1] = 2;
				(*uParam2)[2] = 0;
			}
			(*uParam2)[3] = 1;
			break;
		default:
			iVar0 = 0;
			while (iVar0 < *iParam1)
			{
				if (does_entity_exist(iParam1[iVar0]))
				{
					fVar2 = func_209(iParam1[iVar0], 1, 1);
					if (fVar2 < fVar3)
					{
						fVar3 = fVar2;
						iVar1 = iVar0;
					}
				}
				iVar0++;
			}
			iVar4 = iVar1;
			(*uParam2)[0] = iVar4;
			switch (iVar4)
			{
				case 0:
					if (func_209(iParam1[1], 1, 1) < func_209(iParam1[3], 1, 1))
					{
						(*uParam2)[1] = 1;
						(*uParam2)[2] = 3;
					}
					else
					{
						(*uParam2)[1] = 3;
						(*uParam2)[2] = 1;
					}
					(*uParam2)[3] = 2;
					break;
				case 1:
					if (func_209(iParam1[0], 1, 1) < func_209(iParam1[2], 1, 1))
					{
						(*uParam2)[1] = 0;
						(*uParam2)[2] = 2;
					}
					else
					{
						(*uParam2)[1] = 2;
						(*uParam2)[2] = 0;
					}
					(*uParam2)[3] = 3;
					break;
				case 2:
					if (func_209(iParam1[1], 1, 1) < func_209(iParam1[3], 1, 1))
					{
						(*uParam2)[1] = 1;
						(*uParam2)[2] = 3;
					}
					else
					{
						(*uParam2)[1] = 3;
						(*uParam2)[2] = 1;
					}
					(*uParam2)[3] = 0;
					break;
				case 3:
					if (func_209(iParam1[0], 1, 1) < func_209(iParam1[2], 1, 1))
					{
						(*uParam2)[1] = 0;
						(*uParam2)[2] = 2;
					}
					else
					{
						(*uParam2)[1] = 2;
						(*uParam2)[2] = 0;
					}
					(*uParam2)[3] = 1;
					break;
			}
			break;
	}
}

bool func_362(int iParam0, int iParam1)
{
	if (!func_34(iParam0, 0, 1))
	{
		return false;
	}
	if (!_is_anim_scene_loaded(iParam1, true, false) || !_is_anim_scene_started(iParam1, false))
	{
		return false;
	}
	return _0x3ab6c7b0bb0df4b1(iParam0, iParam1);
}

void func_363(int iParam0, int iParam1, bool bParam2)
{
	if (!func_34(iParam0, 0, 1))
	{
		return;
	}
	set_current_ped_weapon(iParam0, iParam1, false, 0, false, false);
	open_sequence_task(&iVar0);
	if (bParam2)
	{
		task_react(0, Global_35, Global_36, "Default_Curious", 0.7f, 0, 4);
	}
	if (func_308(iParam0, 0) == -1569615261)
	{
		task_swap_weapon(0, 1, 1, 0, 0);
	}
	task_aim_gun_at_entity(0, Global_35, -1, false, 1);
	func_212(iParam0, &iVar0, 0, 0, 1, 1);
}

bool func_364(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_311(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_565(fParam0))
	{
		return false;
	}
	return true;
}

void func_365(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (func_34(&(iLocal_35[iParam0]), 0, 1))
	{
		func_295(iParam0, &(uLocal_45[0]), bParam1, iParam2, bParam3);
		func_31(4096);
		func_213(32, iParam0);
		iLocal_1250 = iParam0;
	}
}

bool func_366(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return ((_0xc8d523bf5bbd3808(iParam0, -587661767) || _0xc8d523bf5bbd3808(iParam0, -1507090758)) || _0xc8d523bf5bbd3808(iParam0, -1102089407));
}

void func_367()
{
	func_566(0);
	func_566(1);
	func_566(2);
	func_566(3);
}

void func_368(int iParam0, var uParam1)
{
	set_ped_relationship_group_hash(iParam0[0], *uParam1);
	set_ped_relationship_group_hash(iParam0[1], *uParam1);
	set_ped_relationship_group_hash(iParam0[2], *uParam1);
	set_ped_relationship_group_hash(iParam0[3], *uParam1);
	set_relationship_between_groups(6, *uParam1, 1862763509);
}

void func_369()
{
	if (_does_anim_scene_exist(Local_528.f_1) && _is_anim_scene_started(Local_528.f_1, false))
	{
		if (does_entity_exist(Local_503[1]->f_8))
		{
			remove_anim_scene_entity(Local_528.f_1, "Cash", Local_503[1]->f_8);
		}
	}
}

void func_370(var uParam0, var uParam1)
{
	(*uParam1)[uParam0[0]] = "Default_Shocked";
	(*uParam1)[uParam0[1]] = "Default_Shocked";
	(*uParam1)[uParam0[2]] = "Default_Angry";
	(*uParam1)[uParam0[3]] = "Default_Angry";
}

void func_371(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_372(int iParam0, float fParam1, int iParam2, int iParam3)
{
	if (is_entity_dead(&(iLocal_35[iParam0])))
	{
		return;
	}
	if (_does_anim_scene_exist(Local_528.f_1))
	{
		remove_anim_scene_entity(Local_528.f_1, func_567(iParam0), &(iLocal_35[iParam0]));
	}
	if (func_342(&(iLocal_35[iParam0]), Global_35, 0, 35f, 1))
	{
		func_213(2048, iParam0);
	}
	bVar0 = func_28(268435456);
	if (func_53(iParam0))
	{
		bVar0 = func_28(134217728);
	}
	bVar1 = func_568();
	bVar2 = func_569();
	func_213(2097152, iParam0);
	func_256(iLocal_35[iParam0]);
	func_570(iParam0, uLocal_40[iParam0], 100f, iParam2, &(iLocal_788[iParam0]), bVar0, func_28(64), iParam3, 1, fParam1, func_165(33554432, iParam0), (bVar1 && bVar2), bVar2);
}

void func_373(int iParam0)
{
	if (_does_anim_scene_exist(iParam0))
	{
		if (_is_anim_scene_started(iParam0, false))
		{
			_delete_anim_scene(iParam0);
		}
	}
}

bool func_374(int iParam0)
{
	if (!func_28(1024) || iVar1245 != iParam0)
	{
		return false;
	}
	else if ((is_entity_dead(iLocal_34) || !is_vehicle_driveable(iLocal_34, true, false)) || !is_ped_in_vehicle(&(iLocal_35[iParam0]), iLocal_34, true))
	{
		return false;
	}
	else if (is_ped_on_vehicle(get_player_ped(player_id()), false))
	{
		return false;
	}
	func_213(4194304, iParam0);
	func_300(&uLocal_1274, 11, iVar1245);
	return true;
}

void func_375(int iParam0, int* iParam1)
{
	if (!func_34(&(iLocal_35[iParam0]), 0, 1))
	{
		return;
	}
	if (!does_blip_exist(*iParam1))
	{
		func_349(&(iLocal_35[iParam0]), iParam1, 831283580, 580546400, 0, 0);
	}
	if (get_script_task_status(&(iLocal_35[iParam0]), -2117564886, true) == 1 || get_script_task_status(&(iLocal_35[iParam0]), -2117564886, true) == 0)
	{
		return;
	}
	if (func_308(&(iLocal_35[iParam0]), 0) == -1569615261)
	{
		set_current_ped_weapon(&(iLocal_35[iParam0]), func_258(iParam0), false, 0, false, false);
	}
	task_combat_hated_targets(&(iLocal_35[iParam0]), -1f);
}

bool func_376(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_377(var uParam0)
{
	return func_376(*uParam0, 2);
}

float func_378()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_379(int iParam0, int iParam1)
{
	func_571(iParam0, iParam1);
}

void func_380(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_378() - fParam1);
	func_572(uParam0, 1);
	func_573(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_381(var uParam0, float fParam1)
{
	if (!func_158(uParam0))
	{
		return false;
	}
	if (func_159(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

int func_382(int iParam0)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return 0;
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar2 = _get_ped_in_draft_seat(iParam0, iVar0);
		if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_383(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (func_382(iParam0) == 0)
		{
			_0x04f0579dbdd32f34(iParam0);
		}
	}
}

int func_384()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

int func_385(struct<2> Param0, var uParam2)
{
	iVar0 = (round(absf(Param0)) & 32767 || shift_left(round(absf(Param0.f_1)) & 32767, 15));
	if (Param0 > 0f)
	{
		iVar0 |= 1073741824;
	}
	if (Param0.f_1 > 0f)
	{
		iVar0 |= -2147483648;
	}
	return iVar0;
}

int func_386(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_40.f_7862[iParam0]->f_1;
	}
	return Global_42606[iParam0]->f_1;
}

int func_387(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_7862[iParam0]);
	}
	return &(Global_42606[iParam0]);
}

int func_388(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_40.f_7862[iParam0]->f_2;
	}
	return Global_42606[iParam0]->f_2;
}

bool func_389(int iParam0, int iParam1)
{
	if (!func_574(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

bool func_390(int iParam0)
{
	switch (iParam0)
	{
		case -2053881888:
		case -1866132622:
		case -1861840953:
		case -1826304690:
		case -1758092337:
		case -1753201617:
		case -1708097161:
		case -1544786211:
		case -1426151250:
		case -1347283941:
		case -1278978750:
		case -1100387700:
		case -1008287740:
		case -999004291:
		case -824257932:
		case -570691410:
		case -405196566:
		case -377157708:
		case -283162583:
		case -136833353:
		case 47200842:
		case 93893176:
		case 150966765:
		case 219205323:
		case 374792535:
		case 822759307:
		case 1016623270:
		case 1596452133:
		case 1745694728:
		case 1761016051:
		case 1770617692:
		case 1874711736:
		case 2109471093:
			return true;
		default:
			break;
	}
	return false;
}

int func_391(int iParam0)
{
	switch (iParam0)
	{
		case -2053881888:
		case -1861840953:
		case -1347283941:
		case -1278978750:
		case -1100387700:
		case -824257932:
		case -570691410:
		case -377157708:
		case 47200842:
		case 219205323:
		case 374792535:
			return 1;
		case -1826304690:
		case -1708097161:
		case -1544786211:
		case -136833353:
		case 93893176:
		case 150966765:
		case 1596452133:
		case 1761016051:
		case 1770617692:
			return 2;
		case -1866132622:
		case -1758092337:
		case -1753201617:
		case -1426151250:
		case -999004291:
		case -405196566:
		case -283162583:
		case 822759307:
		case 1016623270:
		case 1745694728:
		case 1874711736:
		case 2109471093:
			return 3;
		case -1008287740:
			return 4;
		default:
			break;
	}
	return 0;
}

Vector3 func_392(var uParam0)
{
	return uParam0->f_51;
}

void func_393(int iParam0, int iParam1)
{
	iParam0->f_21 = iParam1;
}

bool func_394()
{
	return &Global_1935436 == 2;
}

void func_395(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_396(int iParam0, int iParam1)
{
	if (get_random_event_flag())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0]->f_1++;
	if (func_71(iParam0, 2))
	{
		func_576(iParam0, func_575(iParam1));
	}
	else
	{
		func_578(iParam0, func_577());
	}
	fVar0 = (1f + (to_float((Global_17504.f_42[iParam0]->f_1 / 2)) * 0.1f));
	if (fVar0 > 2f)
	{
		fVar0 = 2f;
	}
	else if (fVar0 < 1f)
	{
		fVar0 = 1f;
	}
	func_579(iParam0, (*Global_1310750)[iParam0]->f_36, fVar0, 1, 0);
	func_580(iParam0, 0);
	func_581(iParam0);
	func_582(1);
	set_ped_config_flag(Global_35, 514, true);
	if (!get_mission_flag())
	{
		set_random_event_flag(true);
	}
	_0x33d51f801cb16e4f();
	(*Global_1310750)[iParam0]->f_110 |= 4;
	Global_17504.f_6 = iParam0;
	Global_17504.f_10 = 1;
	Global_17504.f_7 = 0;
	Global_17504.f_8 = 0;
	if (!func_71(iParam0, 16))
	{
		func_397(iParam0, 0, 0, 0, 0);
	}
}

void func_397(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_583() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_242(iVar1) && !func_71(iVar1, iParam2)) && (!bParam3 || !func_414(iVar1))) && (!bParam4 || !func_584(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_585(iVar0);
			}
		}
		iVar0++;
	}
}

int func_398(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_39;
}

void func_399(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_453(Global_1310750[uParam0->f_3], 16777216))
	{
		if (bParam2)
		{
			if (func_71(uParam0->f_3, 1073741824))
			{
				func_586(2, -1, 0, 0, 0);
			}
			else
			{
				func_586(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_586(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_431(1, uParam0->f_177))
				{
					func_587(16, uParam0->f_177);
					func_434(1, uParam0->f_177);
				}
				compendium_gang_encountered(func_588(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_586(8, -1, 0, 0, 0);
	}
}

int func_400()
{
	if (func_589(Global_1935630->f_44))
	{
		if (_is_weapon_sniper(Global_1935630->f_44))
		{
			if (_0xa24c1d341c6e0d53(1, 1, 1))
			{
				if (is_player_free_aiming(player_id()))
				{
					return 1;
				}
			}
		}
		else if (func_590())
		{
			return 1;
		}
	}
	return 0;
}

bool func_401(int iParam0, int iParam1, bool bParam2, int iParam3)
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

float func_402(var uParam0, bool bParam1)
{
	if (uParam0->f_119 == -1f)
	{
		if (func_71(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_71(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_71(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_71(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_71(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_71(uParam0->f_3, 1))
		{
		}
		else if (func_71(uParam0->f_3, 2))
		{
			fVar0 = (fVar0 - 15f);
		}
		uParam0->f_119 = fVar0;
	}
	fVar0 = uParam0->f_119;
	if (bParam1)
	{
		fVar0 = (fVar0 + 150f);
	}
	return fVar0;
}

int func_403(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	iParam2 = iParam2;
	if (is_entity_dead(uParam0->f_6))
	{
		return 0;
	}
	fVar0 = vdist2(Global_36, get_entity_coords(uParam0->f_6, false, false));
	switch (*uParam0)
	{
		case 0:
			if (is_entity_a_ped(uParam0->f_6) && !_0x5102307ce88798eb(get_ped_index_from_entity_index(uParam0->f_6)))
			{
				request_ped_visibility_tracking(get_ped_index_from_entity_index(uParam0->f_6));
			}
			else if (func_591(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		case 1:
			if (is_entity_occluded(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (is_entity_a_ped(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = _0x164cecc59e70df86(get_ped_index_from_entity_index(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = is_tracked_ped_visible(get_ped_index_from_entity_index(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = _0xc8ccdb712fbcba92(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (is_entity_occluded(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (bParam5 && !is_entity_a_ped(uParam0->f_6))
					{
						fVar0 = vdist2(Global_36, get_entity_coords(uParam0->f_6, false, false));
					}
					if (func_592(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (func_378() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_404(var uParam0, int iParam1, float fParam2)
{
	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((does_entity_exist((*uParam0)[iVar0]->f_6) && (*uParam0)[iVar0]->f_7 > 0f) && is_entity_on_screen((*uParam0)[iVar0]->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + (*uParam0)[iVar0]->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return false;
	}
	if (fVar2 < fParam2)
	{
		return false;
	}
	func_189(uParam0);
	return true;
}

bool func_405()
{
	return (Global_1894899 & 1 != 0 && func_417() != -1);
}

bool func_406(var uParam0, float fParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_98)
	{
		if (&uParam0->f_98[iVar0] != 0f)
		{
			if (&uParam0->f_98[iVar0] < fParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_407(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_593(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225639->f_10)
		{
			if (!Global_1225639->f_11)
			{
				return false;
			}
		}
		else if (!does_entity_exist(get_player_ped(iParam0)))
		{
			return false;
		}
	}
	else if (!does_entity_exist(get_player_ped(iParam0)))
	{
		return false;
	}
	if (_0xad401c63158acbaa(iParam0))
	{
		_0xcbfb4951f2e3934c(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || get_player_wanted_level(iParam0) > 0)
		{
			return true;
		}
	}
	else if (bParam2 && !_0x148e7ac8141c9e64(iParam0) == 1370593166)
	{
		return false;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (_0x532c5fddb986ee5c(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || _0xdaefdfdb2aeece37(Var18, Var18.f_7) > 0))
			{
				return true;
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
				return true;
			}
		}
	}
	return false;
}

bool func_408(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_595(func_594());
	if (func_2(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_2(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_2(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_2(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_2(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_2(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_2(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_2(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_2(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_2(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_2(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_2(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_2(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_2(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_409(int iParam0, int iParam1)
{
	return (func_398(iParam0) && iParam1) != 0;
}

bool func_410(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	else if (iParam0 & -1 == -1)
	{
		return true;
	}
	_get_weather_type_transition(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	if (iParam0 & 1 == 1 && func_596(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_597(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_598(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_599(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_600(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_601(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_602(iVar3))
	{
		return true;
	}
	return false;
}

bool func_411(bool bParam0)
{
	if (func_603(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_412(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!is_ped_using_any_scenario(iParam0))
	{
		return false;
	}
	iVar0 = _get_scenario_point_type_ped_is_using(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if ((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864)
	{
		return true;
	}
	if (iVar0 == -2016812721 || iVar0 == 1097070152)
	{
		iVar0 = _0xc22aa08a8adb87d4(iParam0);
		if (iVar0 == 970972795)
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_413(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_604())
		{
			return true;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if ((*Global_1055058)[network_player_id_to_int()]->f_114 && network_is_in_tutorial_session())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if (Global_1898164->f_1[0]->f_2 == 8)
	{
		iVar0 = func_605(&(Global_1898164->f_1[0]));
		if (func_606(iVar0) && func_607((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_608(&(Global_1898164->f_1[0])))
	{
		return true;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((get_game_timer() - 5000) < &Global_1898438)
		{
			return true;
		}
	}
	switch (Global_1898164->f_1[0]->f_2)
	{
		case 0:
			return false;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return false;
}

bool func_414(int iParam0)
{
	if (!func_242(iParam0))
	{
		return false;
	}
	if (func_609(64) && func_610(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_415(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_611(iVar0) || func_612(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_416()
{
	return Global_1894899 & 4 != 0;
}

int func_417()
{
	return Global_1894899->f_2;
}

int func_418(int iParam0)
{
	if (!func_613(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 11:
			return 0;
		case 76:
			return 1;
		case 15:
			return 3;
		case 128:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_419(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_420(vector3 vParam0, int iParam3)
{
	if (!func_419(iParam3))
	{
		return false;
	}
	if (_does_volume_exist((*Global_1392194)[iParam3]->f_5))
	{
		return _0xf256a75210c5c0eb((*Global_1392194)[iParam3]->f_5, vParam0);
	}
	return false;
}

bool func_421(vector3 vParam0)
{
	if (func_105(vParam0))
	{
		return false;
	}
	fVar0 = func_219(func_405(), 6f, 22f);
	return _0x769bb7626b8cdb06(vParam0, fVar0, 1, 0, 16384);
}

bool func_422(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	iVar0 = player_id();
	if (!bParam4)
	{
		if (_0x1a51bfe60708e482(iVar0))
		{
			if (get_player_target_entity(iVar0, &iVar1))
			{
				if (!is_entity_a_mission_entity(iVar1))
				{
					if (is_scripted_speech_playing(Global_35) || is_any_speech_playing(Global_35))
					{
						func_163(uParam0);
						if (bParam3)
						{
							return true;
						}
					}
					if (!bParam3)
					{
						return true;
					}
				}
			}
		}
	}
	if (_0x6c54e69516cc56bd(iVar0) > 0)
	{
		func_163(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_158(uParam0))
		{
			return false;
		}
		else if (is_scripted_speech_playing(Global_35) || is_any_speech_playing(Global_35))
		{
			return true;
		}
		if (!func_381(uParam0, fParam2))
		{
			return true;
		}
		if (func_158(uParam0))
		{
			func_167(uParam0);
		}
	}
	return false;
}

bool func_423(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

void func_424(vector3 vParam0, int iParam3)
{
	if (func_105(vParam0))
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
			if (func_463(vVar2, vParam0, 2f, 1))
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

float func_425(int iParam0)
{
	if (!func_242(iParam0))
	{
		return 0f;
	}
	if (!func_614(iParam0))
	{
		return 0f;
	}
	return (*Global_1310750)[iParam0]->f_44;
}

char* func_426()
{
	return "unnamed";
}

char* func_427(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ANIMAL_ATTACK";
		case 75:
			return "BANDITO_BREAKOUT";
		case 8:
			return "BURNING_BODIES";
		case 1:
			return "ANIMAL_MAULING";
		case 2:
			return "APPROACH";
		case 3:
			return "ARMS_DEAL";
		case 76:
			return "BANDITO_EXECUTION";
		case 4:
			return "BEAR_TRAP";
		case 77:
			return "BGN_TOWN_ENCOUNTER";
		case 5:
			return "BOAT_ATTACK";
		case 6:
			return "BOOBY_TRAP";
		case 7:
			return "BOUNTY TRANSPORT";
		case 78:
			return "BRONTE_PATROL";
		case 9:
			return "CAMPFIRE_AMBUSH";
		case 10:
			return "CHAIN_GANG";
		case 11:
			return "CHECKPOINT";
		case 12:
			return "COACH_ROBBERY";
		case 79:
			return "CONSEQUENCE";
		case 13:
			return "CORPSE_CART";
		case 14:
			return "CRASHED_WAGON";
		case 80:
			return "DARK_ALLEY_AMBUSH";
		case 81:
			return "DARK_ALLEY_BUM";
		case 82:
			return "DARK_ALLEY_STAB";
		case 83:
			return "DEAD_BODIES";
		case 84:
			return "DEAD_JOHN";
		case 15:
			return "DEL_LOBO_POSSE";
		case 85:
			return "DISABLED_BEGGAR";
		case 86:
			return "DOMESTIC_DISPUTE";
		case 87:
			return "DROWN_MURDER";
		case 16:
			return "DRUNK_CAMP";
		case 88:
			return "DRUNK_DUELER";
		case 89:
			return "DUEL_BOASTER";
		case 90:
			return "DUEL_WINNER";
		case 17:
			return "ESCORT";
		case 18:
			return "EXECUTIONS";
		case 91:
			return "FLEEING_FAMILY";
		case 19:
			return "FLEEING_TRESPASSER";
		case 92:
			return "FOOT_ROBBERY";
		case 20:
			return "FRIENDLY_OUTDOORSMAN";
		case 21:
			return "FROZEN_TO_DEATH";
		case 22:
			return "FUSSAR_CHASE";
		case 23:
			return "GANG_CAMP_REMINDER";
		case 94:
			return "GANG_PED_ENCOUNTER";
		case 24:
			return "GOLD_PANNER";
		case 119:
			return "HERBALIST_CAMP";
		case 27:
			return "HORSE_RACE";
		case 28:
			return "HOSTAGE_RESCUE";
		case 29:
			return "INBRED_KIDNAP";
		case 30:
			return "INJURED_RIDER";
		case 95:
			return "INTIMIDATION TACTICS";
		case 31:
			return "KIDNAP_VICTIM";
		case 32:
			return "RALLY_DISPUTE";
		case 33:
			return "RALLY";
		case 34:
			return "RALLY_SETUP";
		case 35:
			return "LARAMIE_GANG_RUSTLING";
		case 96:
			return "LEM_TOWN_ENCOUNTER";
		case 36:
			return "LOCKED_SAFE";
		case 37:
			return "LONE_PRISONER";
		case 97:
			return "LOST_DOG";
		case 98:
			return "LOST_DRUNK";
		case 38:
			return "LOST_FRIEND";
		case 39:
			return "LOST_MAN";
		case 40:
			return "MOONSHINE_CAMP";
		case 41:
			return "MURDER_CAMPFIRE";
		case 42:
			return "NAKED_SWIMMER";
		case 93:
			return "FUNDRAISER";
		case 99:
			return "ODR_TOWN_ENCOUNTER";
		case 100:
			return "ON_THE_RUN";
		case 43:
			return "OUTLAW_LOOTER";
		case 44:
			return "OUTLAW_TRANSPORT";
		case 101:
			return "PARLOR_AMBUSH";
		case 102:
			return "PEEPING_TOM";
		case 103:
			return "PICKPOCKET";
		case 45:
			return "SNAKE_BITE";
		case 104:
			return "PISS_POT";
		case 46:
			return "PLAYER_CAMP_ATTACK";
		case 47:
			return "PLAYER_CAMP_STRANGER";
		case 48:
			return "POISONED";
		case 105:
			return "POLICE_CHASE";
		case 49:
			return "POSSE_BREAKOUT";
		case 50:
			return "PRISON_WAGON";
		case 106:
			return "PUBLIC_HANGING";
		case 107:
			return "RAT_INFESTATION";
		case 51:
			return "RIFLE_PRACTICE";
		case 108:
			return "ROWDY_DRUNKS";
		case 53:
			return "SAVAGE_AFTERMATH";
		case 54:
			return "SAVAGE_FIGHT";
		case 56:
			return "SAVAGE_WAGON";
		case 55:
			return "SAVAGE_WARNING";
		case 57:
			return "SHARP_SHOOTER";
		case 109:
			return "SHOW_OFF";
		case 58:
			return "SKIPPING_STONES";
		case 110:
			return "SLUM_AMBUSH";
		case 59:
			return "SPOOKED_HORSE";
		case 60:
			return "STALKING_HUNTER";
		case 61:
			return "STALKING_SHADOWS";
		case 62:
			return "STRANDED_RIDER";
		case 111:
			return "STREET_FIGHT";
		case 112:
			return "TAUNTING";
		case 67:
			return "TORTURING_CAPTIVE";
		case 68:
			return "TORCH_PROCESSION";
		case 113:
			return "TOWN_BURIAL";
		case 114:
			return "TOWN_CONFRONTATION";
		case 115:
			return "TOWN_ROBBERY";
		case 117:
			return "TOWN_TERROR";
		case 116:
			return "TOWN_WIDOW";
		case 63:
			return "TRAFFIC_ATTACK";
		case 64:
			return "TRAIN_HOLDUP";
		case 65:
			return "TRAPPED_WOMAN";
		case 66:
			return "TREASURE_HUNTER";
		case 69:
			return "VOICE";
		case 70:
			return "WAGON_THREAT";
		case 71:
			return "WASHED_ASHORE";
		case 118:
			return "WEALTHY_COUPLE";
		case 72:
			return "WILDERNESS_HANGING";
		case 73:
			return "WILD_MAN";
		case 74:
			return "WILD_MAN_CAVE";
		default:
			break;
	}
	return "BEAT NO NAME";
}

int func_428(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_454(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

char* func_429(char* sParam0)
{
	return sParam0;
}

int func_430(int iParam0)
{
	iVar0 = iParam0;
	return func_615(iVar0);
}

bool func_431(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

bool func_432(int iParam0)
{
	if (!func_490(iParam0, 0))
	{
		return false;
	}
	if (func_431(1, iParam0))
	{
		return true;
	}
	if (func_616(16, iParam0))
	{
		return true;
	}
	if (func_617(iParam0) >= 4)
	{
		if (_0x336b3d200ab007cb(Global_35, Global_36, 150f, 512) <= 0)
		{
			return true;
		}
	}
	return false;
}

void func_433(int iParam0, int iParam1)
{
	if (!func_431(1, iParam0))
	{
		if (!func_490(iParam0, 0))
		{
		}
		func_587(16, iParam0);
		func_434(1, iParam0);
	}
}

void func_434(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1] = (Global_40.f_9571[iParam1] || iParam0);
}

void func_435(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_526(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_137(iParam0, 0);
		}
	}
}

void func_436(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_518((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_526(&((*uParam0)[iVar0]->f_6), 1, 1);
					if (bParam2)
					{
						(*uParam0)[iVar0]->f_7 = 0;
						(*uParam0)[iVar0] = 0;
						(*uParam0)[iVar0]->f_5 = "";
						(*uParam0)[iVar0]->f_14 = 0;
						(*uParam0)[iVar0]->f_13 = "";
						(*uParam0)[iVar0]->f_15 = 0;
						(*uParam0)[iVar0]->f_11 = "";
						(*uParam0)[iVar0]->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}
}

float func_437(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!does_entity_exist(iParam1) && bParam3)
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false), bParam2);
}

void func_438(int* iParam0)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (_0xa7e51b53309eac97(*iParam0))
	{
		return;
	}
	if (!is_entity_a_mission_entity(*iParam0))
	{
		set_entity_as_mission_entity(*iParam0, true, false);
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (!is_entity_dead(*iParam0))
	{
		set_entity_load_collision_flag(*iParam0, 0);
	}
	delete_ped(iParam0);
}

void func_439(int iParam0)
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

void func_440(var uParam0)
{
	if (func_518(uParam0->f_162))
	{
		func_526(&(uParam0->f_162), 1, 1);
	}
	if (func_518(uParam0->f_163))
	{
		func_526(&(uParam0->f_163), 1, 1);
	}
	if (func_518(uParam0->f_164))
	{
		func_526(&(uParam0->f_164), 1, 1);
	}
	if (func_518(uParam0->f_165))
	{
		func_526(&(uParam0->f_165), 1, 1);
	}
}

void func_441(var uParam0)
{
	if (uParam0->f_170)
	{
		func_618();
	}
}

void func_442(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_619(32);
		func_446(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_443(var uParam0)
{
	if (func_620(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_621(uParam0->f_3);
		func_399(uParam0, 0, 1);
		func_622(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_623(0, 0);
		return true;
	}
	return false;
}

void func_444()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_445(int iParam0)
{
	if (!func_242(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

void func_446(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_272(iParam0) == 1 && bParam7)
	{
		return;
	}
	if (bParam6)
	{
		if (Global_17504.f_42[iParam0]->f_4 > iVar0)
		{
			return;
		}
	}
	if ((bParam1 || bParam6) || func_447() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

int func_447()
{
	return Global_1572887->f_12;
}

int func_448(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 12;
		case 2:
			return 23;
		case 3:
			return 6;
		case 4:
			return 17;
		case 5:
			return 1;
		case 6:
			return 3;
		case 7:
			return 23;
		case 8:
			return 1;
		case 9:
			return 8;
		case 10:
			return 2;
		case 11:
			return 4;
		case 12:
			return 18;
		case 13:
			return 12;
		case 14:
			return 7;
		case 15:
			return 21;
		case 16:
			return 19;
		case 17:
			return 12;
		case 18:
			return 7;
		case 19:
			return 1;
		case 20:
			return 17;
		case 21:
			return 3;
		case 22:
			return 1;
		case 23:
			return 17;
		case 24:
			return 14;
		case 27:
			return 11;
		case 28:
			return 5;
		case 29:
			return 8;
		case 30:
			return 38;
		case 31:
			return 20;
		case 32:
			return 10;
		case 33:
			return 13;
		case 34:
			return 11;
		case 35:
			return 2;
		case 36:
			return 12;
		case 37:
			return 20;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 12;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 27;
		case 44:
			return 9;
		case 45:
			return 15;
		case 46:
			return 2;
		case 47:
			return 2;
		case 48:
			return 9;
		case 49:
			return 7;
		case 50:
			return 36;
		case 51:
			return 5;
		case 53:
			return 3;
		case 54:
			return 6;
		case 55:
			return 2;
		case 56:
			return 12;
		case 57:
			return 14;
		case 58:
			return 8;
		case 59:
			return 3;
		case 60:
			return 11;
		case 61:
			return 2;
		case 62:
			return 17;
		case 63:
			return 6;
		case 64:
			return 7;
		case 65:
			return 10;
		case 66:
			return 12;
		case 67:
			return 5;
		case 68:
			return 5;
		case 69:
			return 5;
		case 70:
			return 6;
		case 71:
			return 8;
		case 72:
			return 9;
		case 73:
			return 4;
		case 74:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 77:
			return 3;
		case 78:
			return 2;
		case 79:
			return 6;
		case 80:
			return 3;
		case 81:
			return 15;
		case 82:
			return 9;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 11;
		case 86:
			return 2;
		case 87:
			return 9;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 2;
		case 92:
			return 3;
		case 93:
			return 1;
		case 94:
			return 9;
		case 95:
			return 1;
		case 96:
			return 7;
		case 97:
			return 6;
		case 98:
			return 4;
		case 99:
			return 2;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 105:
			return 2;
		case 106:
			return 4;
		case 107:
			return 1;
		case 108:
			return 3;
		case 109:
			return 3;
		case 110:
			return 1;
		case 111:
			return 4;
		case 112:
			return 3;
		case 113:
			return 3;
		case 114:
			return 16;
		case 115:
			return 3;
		case 116:
			return 7;
		case 117:
			return 2;
		case 118:
			return 10;
		case 119:
			return 17;
		default:
			break;
	}
	return 0;
}

int func_449(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 22;
		case 3:
			return 45;
		case 4:
			return 51;
		case 5:
			return 68;
		case 6:
			return 69;
		case 7:
			return 72;
		case 8:
			return 95;
		case 9:
			return 96;
		case 10:
			return 104;
		case 11:
			return 106;
		case 12:
			return 110;
		case 13:
			return 128;
		case 14:
			return 140;
		case 15:
			return 147;
		case 16:
			return 168;
		case 17:
			return 187;
		case 18:
			return 199;
		case 19:
			return 206;
		case 20:
			return 207;
		case 21:
			return 224;
		case 22:
			return 227;
		case 23:
			return 228;
		case 24:
			return 245;
		case 27:
			return 259;
		case 28:
			return 270;
		case 29:
			return 275;
		case 30:
			return 283;
		case 31:
			return 321;
		case 32:
			return 341;
		case 33:
			return 351;
		case 34:
			return 364;
		case 35:
			return 375;
		case 36:
			return 377;
		case 37:
			return 389;
		case 38:
			return 409;
		case 39:
			return 410;
		case 40:
			return 411;
		case 41:
			return 423;
		case 42:
			return 426;
		case 43:
			return 427;
		case 44:
			return 454;
		case 45:
			return 463;
		case 46:
			return 478;
		case 47:
			return 480;
		case 48:
			return 482;
		case 49:
			return 491;
		case 50:
			return 498;
		case 51:
			return 534;
		case 53:
			return 539;
		case 54:
			return 542;
		case 55:
			return 548;
		case 56:
			return 550;
		case 57:
			return 562;
		case 58:
			return 576;
		case 59:
			return 584;
		case 60:
			return 587;
		case 61:
			return 598;
		case 62:
			return 600;
		case 63:
			return 617;
		case 64:
			return 623;
		case 65:
			return 630;
		case 66:
			return 640;
		case 67:
			return 652;
		case 68:
			return 657;
		case 69:
			return 662;
		case 70:
			return 667;
		case 71:
			return 673;
		case 72:
			return 681;
		case 73:
			return 690;
		case 74:
			return 694;
		case 75:
			return 695;
		case 76:
			return 696;
		case 77:
			return 697;
		case 78:
			return 700;
		case 79:
			return 702;
		case 80:
			return 708;
		case 81:
			return 711;
		case 82:
			return 726;
		case 83:
			return 735;
		case 84:
			return 737;
		case 85:
			return 739;
		case 86:
			return 750;
		case 87:
			return 752;
		case 88:
			return 761;
		case 89:
			return 763;
		case 90:
			return 764;
		case 91:
			return 766;
		case 92:
			return 768;
		case 93:
			return 771;
		case 94:
			return 772;
		case 95:
			return 781;
		case 96:
			return 782;
		case 97:
			return 789;
		case 98:
			return 795;
		case 99:
			return 799;
		case 100:
			return 801;
		case 101:
			return 802;
		case 102:
			return 804;
		case 103:
			return 807;
		case 104:
			return 810;
		case 105:
			return 813;
		case 106:
			return 815;
		case 107:
			return 819;
		case 108:
			return 820;
		case 109:
			return 823;
		case 110:
			return 826;
		case 111:
			return 827;
		case 112:
			return 831;
		case 113:
			return 834;
		case 114:
			return 837;
		case 115:
			return 853;
		case 116:
			return 856;
		case 117:
			return 863;
		case 118:
			return 865;
		case 119:
			return 875;
		default:
			break;
	}
	return -1;
}

bool func_450(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*(*uParam2)[0] = { -1075.036f, -498.9537f, 80.4572f };
					*(*uParam2)[1] = { -1058.055f, -609.5211f, 76.6181f };
					*(*uParam2)[2] = { -1272.208f, -612.5573f, 100.8638f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 1:
					*(*uParam2)[0] = { -2288.302f, -389.368f, 155.9838f };
					*(*uParam2)[1] = { -2267.837f, -294.2087f, 162.0459f };
					*(*uParam2)[2] = { -2588.6f, -283.9735f, 157.3797f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 2:
					*(*uParam2)[0] = { -1751.366f, 174.5853f, 140.272f };
					*(*uParam2)[1] = { -1639.375f, -163.5104f, 165.0787f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 3:
					*(*uParam2)[0] = { -771.0659f, -259.0937f, 47.9193f };
					*(*uParam2)[1] = { -822.0638f, -500.4154f, 43.2726f };
					*(*uParam2)[2] = { -1024.218f, -401.8981f, 74.0529f };
					*(*uParam2)[3] = { -1006.993f, -282.9351f, 74.6298f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 4:
					*(*uParam2)[0] = { -1338.573f, 327.9119f, 84.6143f };
					*(*uParam2)[1] = { -1232.65f, 330.8496f, 62.4046f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 5:
					*(*uParam2)[0] = { -1502.984f, -885.5237f, 88.3171f };
					*(*uParam2)[1] = { -1297.384f, -819.8127f, 66.0834f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 6:
					*(*uParam2)[0] = { 350.4579f, 1090.999f, 185.1566f };
					*(*uParam2)[1] = { 92.55f, 1093.111f, 180.0293f };
					*(*uParam2)[2] = { 409.0284f, 1196.024f, 176.0849f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 7:
					*(*uParam2)[0] = { 749.1558f, 1391.218f, 169.0392f };
					*(*uParam2)[1] = { 655.3339f, 1501.052f, 182.3537f };
					*(*uParam2)[2] = { 564.7472f, 1351.075f, 181.0084f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 8:
					*(*uParam2)[0] = { 798.8331f, 1217.176f, 139.389f };
					*(*uParam2)[1] = { 796.767f, 1022.301f, 117.9023f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 9:
					*(*uParam2)[0] = { 1499.724f, 1483.517f, 148.1553f };
					*(*uParam2)[1] = { 1762.153f, 1460.505f, 154.3694f };
					*(*uParam2)[2] = { 1791.473f, 1553.145f, 158.3201f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 10:
					*(*uParam2)[0] = { 1592.016f, 838.9788f, 137.0506f };
					*(*uParam2)[1] = { 1481.788f, 983.7827f, 159.4282f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 11:
					*(*uParam2)[0] = { 2066.821f, 1396.182f, 161.616f };
					*(*uParam2)[1] = { 2018.585f, 1589.685f, 166.3078f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 12:
					*(*uParam2)[0] = { 1931.246f, 1417.71f, 175.205f };
					*(*uParam2)[1] = { 1758.616f, 1470.966f, 153.1616f };
					*(*uParam2)[2] = { 1908.101f, 1340.718f, 184.5229f };
					*(*uParam2)[3] = { 1758.631f, 1339.565f, 179.8116f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 13:
					*(*uParam2)[0] = { 906.3064f, 1862.921f, 276.5091f };
					*(*uParam2)[1] = { 1227.372f, 1910.686f, 303.6052f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 14:
					*(*uParam2)[0] = { 39.5976f, -446.5889f, 73.5138f };
					*(*uParam2)[1] = { 261.8906f, -501.4701f, 69.7941f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 15:
					*(*uParam2)[0] = { 147.7795f, 574.2345f, 124.4514f };
					*(*uParam2)[1] = { 353.6481f, 791.2978f, 158.3952f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 16:
					*(*uParam2)[0] = { 1152.273f, 1.4974f, 91.3795f };
					*(*uParam2)[1] = { 1229.58f, -41.3491f, 97.8027f };
					*(*uParam2)[2] = { 1388.351f, 191.7681f, 91.0511f };
					*(*uParam2)[3] = { 1182.174f, 249.1711f, 95.8012f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 17:
					*(*uParam2)[0] = { 2436.349f, 1255.752f, 108.7815f };
					*(*uParam2)[1] = { 2581.654f, 1319.187f, 109.4025f };
					*(*uParam2)[2] = { 2648.991f, 1389.994f, 86.802f };
					*(*uParam2)[3] = { 2499.877f, 1520.766f, 84.1962f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 18:
					*(*uParam2)[0] = { 2886.699f, 650.0214f, 56.9408f };
					*(*uParam2)[1] = { 2841.172f, 901.8114f, 48.3778f };
					*(*uParam2)[2] = { 2789.388f, 789.1998f, 69.4871f };
					*(*uParam2)[3] = { 2838.36f, 650.3098f, 66.5798f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 19:
					*(*uParam2)[0] = { 1966.349f, 55.0459f, 77.6335f };
					*(*uParam2)[1] = { 1997.614f, 290.7841f, 80.4139f };
					*(*uParam2)[2] = { 2073.044f, 228.7493f, 69.5644f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 20:
					*(*uParam2)[0] = { 2515.785f, 798.911f, 69.7688f };
					*(*uParam2)[1] = { 2506.887f, 618.8073f, 68.6403f };
					*(*uParam2)[2] = { 2377.615f, 751.5095f, 66.3114f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 21:
					*(*uParam2)[0] = { 2128.213f, 1721.563f, 130.3847f };
					*(*uParam2)[1] = { 2264.183f, 1720.874f, 103.2933f };
					*(*uParam2)[2] = { 2134.791f, 1568.948f, 115.1957f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 22:
					*(*uParam2)[0] = { 2826.741f, 2204.882f, 155.551f };
					*(*uParam2)[1] = { 2838.074f, 1999.792f, 161.9055f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					*(*uParam2)[0] = { 350.8081f, 1195.732f, 176.1334f };
					*(*uParam2)[1] = { -9.8736f, 1100.082f, 171.5504f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 6:
					*(*uParam2)[0] = { 951.1178f, 411.6494f, 111.4674f };
					*(*uParam2)[1] = { 786.1444f, 1078.456f, 125.8602f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 7:
					*(*uParam2)[0] = { -784.4099f, 128.655f, 42.3724f };
					*(*uParam2)[1] = { -478.0183f, 232.7834f, 42.1853f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 8:
					*(*uParam2)[0] = { 1148.99f, 1456.264f, 190.799f };
					*(*uParam2)[1] = { 840.1897f, 1221.47f, 141.6344f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 9:
					*(*uParam2)[0] = { 1413.901f, -334.469f, 88.1597f };
					*(*uParam2)[1] = { 1222.652f, -59.931f, 93.5015f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 10:
					*(*uParam2)[0] = { 1548.822f, -1190.659f, 49.1131f };
					*(*uParam2)[1] = { 1547.513f, -1410.952f, 60.6415f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					*(*uParam2)[0] = { 2466.914f, -732.939f, 42.531f };
					*(*uParam2)[1] = { 2303.902f, -750.908f, 41.569f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 1:
					*(*uParam2)[0] = { 1757.029f, -832.27f, 41.718f };
					*(*uParam2)[1] = { 1882.646f, -955.777f, 42.672f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 2:
					*(*uParam2)[0] = { 2117.433f, -847.803f, 41.749f };
					*(*uParam2)[1] = { 2112.33f, -625.643f, 41.772f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 12:
					*(*uParam2)[0] = { 2552.283f, -208.465f, 43.013f };
					*(*uParam2)[1] = { 2725.735f, 32.896f, 51.048f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 13:
					*(*uParam2)[0] = { 2219.83f, -503.6095f, 41.0142f };
					*(*uParam2)[1] = { 2371.775f, -527.7825f, 40.7584f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 14:
					*(*uParam2)[0] = { 2157.784f, -459.4536f, 40.5431f };
					*(*uParam2)[1] = { 2354.891f, -401.4336f, 40.5042f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 26:
					*(*uParam2)[0] = { 3266.224f, 1664.717f, 60.269f };
					*(*uParam2)[1] = { 3221.388f, 1809.026f, 74.813f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 27:
					*(*uParam2)[0] = { 2782.415f, 634.97f, 74.323f };
					*(*uParam2)[1] = { 2594.708f, 556.157f, 75.742f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 28:
					*(*uParam2)[0] = { 3268.065f, 1618.25f, 51.5041f };
					*(*uParam2)[1] = { 3151.345f, 1476.824f, 42.9185f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 29:
					*(*uParam2)[0] = { 2524.41f, 1402.663f, 97.646f };
					*(*uParam2)[1] = { 2436.137f, 1254.158f, 109.722f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 30:
					*(*uParam2)[0] = { 2145.954f, 1592.128f, 118.3828f };
					*(*uParam2)[1] = { 2118.189f, 1395.341f, 146.675f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 5:
					*(*uParam2)[0] = { 2724.549f, -7.066f, 51.083f };
					*(*uParam2)[1] = { 2542.005f, -233.1396f, 41.4732f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 6:
					*(*uParam2)[0] = { 2300.604f, -441.226f, 41.797f };
					*(*uParam2)[1] = { 2569.006f, -361.3357f, 40.5728f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 7:
					*(*uParam2)[0] = { 762.142f, 1455.038f, 160.172f };
					*(*uParam2)[1] = { 581.92f, 1359.699f, 182.007f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 8:
					*(*uParam2)[0] = { 1561.312f, 1602.54f, 188.8227f };
					*(*uParam2)[1] = { 1315.677f, 1471.669f, 160.1485f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					*(*uParam2)[0] = { -1366.784f, 150.125f, 77.8591f };
					*(*uParam2)[1] = { -1627.641f, 266.7185f, 105.116f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 1:
					*(*uParam2)[0] = { -1366.784f, 150.125f, 77.859f };
					*(*uParam2)[1] = { -1627.641f, 266.719f, 105.116f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 3:
					*(*uParam2)[0] = { -1090.74f, 151.3781f, 58.3089f };
					*(*uParam2)[1] = { -823.9262f, 278.8717f, 92.3226f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 6:
					*(*uParam2)[0] = { 1714.427f, -1933.318f, 45.6594f };
					*(*uParam2)[1] = { 1714.571f, -1856.846f, 48.5272f };
					*(*uParam2)[2] = { 1531.954f, -1706.023f, 57.3286f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 6:
					*(*uParam2)[0] = { -1736.774f, -836.8357f, 96.5171f };
					*(*uParam2)[1] = { -1915.833f, -682.8271f, 116.4542f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 7:
					*(*uParam2)[0] = { -755.4001f, -796.7909f, 49.7304f };
					*(*uParam2)[1] = { -1039.648f, -688.1265f, 69.6641f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 15:
					*(*uParam2)[0] = { 902.8263f, 386.1294f, 115.5771f };
					*(*uParam2)[1] = { 615.3056f, 258.5487f, 103.5037f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 16:
					*(*uParam2)[0] = { 874.3443f, 827.1644f, 114.901f };
					*(*uParam2)[1] = { 859.3398f, 590.4376f, 110.1404f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 17:
					*(*uParam2)[0] = { -769.1578f, 299.2588f, 93.7465f };
					*(*uParam2)[1] = { -588.5746f, 443.7545f, 97.2538f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 18:
					*(*uParam2)[0] = { 442.6022f, -274.5149f, 141.8569f };
					*(*uParam2)[1] = { 252.7831f, -219.3386f, 129.8086f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 19:
					*(*uParam2)[0] = { 82.4531f, 27.6559f, 99.5123f };
					*(*uParam2)[1] = { 441.6833f, 325.2197f, 102.5464f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 24:
					*(*uParam2)[0] = { 2682.666f, 254.0104f, 62.8591f };
					*(*uParam2)[1] = { 2726.419f, 15.7709f, 48.8237f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 25:
					*(*uParam2)[0] = { 2166.428f, 1654.068f, 114.0645f };
					*(*uParam2)[1] = { 2375.665f, 1665.218f, 95.4254f };
					*(*uParam2)[2] = { 2402.211f, 1816.359f, 106.9185f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 28:
					*(*uParam2)[0] = { 1832.606f, -1986.944f, 43.5085f };
					*(*uParam2)[1] = { 1691.085f, -1896.396f, 47.2405f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 29:
					*(*uParam2)[0] = { 1375.404f, -1591.844f, 68.4645f };
					*(*uParam2)[1] = { 1603.71f, -1744.756f, 52.1714f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 30:
					*(*uParam2)[0] = { 816.4478f, -915.9297f, 49.4983f };
					*(*uParam2)[1] = { 1006.361f, -1293.403f, 53.9613f };
					*(*uParam2)[2] = { 1094.919f, -1166.476f, 67.619f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 31:
					*(*uParam2)[0] = { 810.3403f, -872.8113f, 51.4344f };
					*(*uParam2)[1] = { 825.1677f, -576.8741f, 79.2273f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 32:
					*(*uParam2)[0] = { 1018.101f, -922.2153f, 66.9381f };
					*(*uParam2)[1] = { 832.2029f, -891.5154f, 51.1305f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 33:
					*(*uParam2)[0] = { 1472.147f, -437.5275f, 75.9389f };
					*(*uParam2)[1] = { 1224.738f, -51.7863f, 93.1655f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
	}
	return false;
}

Vector3 func_451(int iParam0, var uParam1)
{
	iVar1 = -1;
	if (does_entity_exist(iParam0))
	{
		vVar2 = { get_entity_coords(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_105(*(*uParam1)[iVar0]))
			{
				if (iVar1 < 0 || vdist2(vVar2, *(*uParam1)[iVar0]) < vdist2(vVar2, *(*uParam1)[iVar1]))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *(*uParam1)[iVar1];
		}
	}
	return 0f, 0f, 0f;
}

void func_452(var uParam0, bool bParam1)
{
	if (!does_blip_exist(uParam0->f_6))
	{
		uParam0->f_6 = _blip_add_for_coord(-1702907713, *uParam0);
		_blip_set_modifier(uParam0->f_6, 580546400);
		set_blip_name_from_text_file(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_38("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		_0x9851de7aec10b4e1(*uParam0, 100f, 1, 0);
	}
}

bool func_453(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_454(vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_105(vParam0))
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
		if (func_423(vParam0))
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
	func_624(iVar0, bParam8);
	return iVar0;
}

void func_455(int iParam0)
{
	if (!func_242(iParam0))
	{
		return;
	}
	func_625(iParam0);
}

void func_456(var uParam0, vector3 vParam1)
{
	if (vParam1.x != 0)
	{
		_0x5d9b0baaf04cf65b(*uParam0, vParam1.y, vParam1.x, vParam1.z);
	}
	else if (vParam1.y != -1)
	{
		_0x19bc99c678fba139(*uParam0, vParam1.y, vParam1.z);
	}
}

int func_457(int iParam0)
{
	if (func_187(iParam0, 2))
	{
		return 200;
	}
	if (func_187(iParam0, 4))
	{
		return 70;
	}
	if (func_187(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_458(int iParam0)
{
	if (func_71(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_577() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_71(iParam0, 2);
		bVar1 = func_71(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_405())
			{
				return 2;
			}
			else
			{
				return 1;
			}
		}
		else if (bVar0)
		{
			return 1;
		}
		else if (bVar1)
		{
			return 2;
		}
	}
	return -1;
}

void func_459(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam0 = 45f;
		*fParam1 = 135f;
	}
	else
	{
		*fParam0 = 45f;
		*fParam1 = 125f;
	}
	if (func_187(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = ceil((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_460(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam1 = 240f;
	}
	else
	{
		*fParam1 = 215f;
	}
	*fParam0 = 110f;
	if (func_187(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = ceil((*fParam0 + 110f));
	}
	else if (func_187(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = ceil((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_461(int iParam0, int iParam1)
{
	iVar0 = (func_449(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17504.f_12[iVar1]), iVar2);
}

bool func_462(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (func_105(vParam1))
	{
		return false;
	}
	if (func_465(iParam0, vParam1))
	{
		if (iParam0 == 42)
		{
		}
		else
		{
			return false;
		}
	}
	fVar0 = vdist2(vParam1, Global_36);
	if (func_112(iParam0))
	{
		fParam4 = 40000f;
	}
	if (fVar0 < fParam4 && fVar0 > fParam5)
	{
		return true;
	}
	else if (iParam0 == 42 || iParam0 == 110)
	{
		return true;
	}
	return false;
}

bool func_463(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_464(var uParam0)
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_105(*uParam0->f_12[iVar0]))
		{
			if (iVar1 < 0 || vdist2(Global_36, *uParam0->f_12[iVar1]) < vdist2(Global_36, *uParam0->f_12[iVar0]))
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_465(int iParam0, vector3 vParam1)
{
	if (!func_71(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_626(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_71(iParam0, 33554432))
	{
		if (func_627(vParam1, 200f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_466(int iParam0, var uParam1)
{
	iVar0 = 1;
	if (func_187(iParam0, 128))
	{
		if (!get_ground_z_for_3d_coord(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), &uVar1, false))
		{
			return false;
		}
		if (_0xbbe5b63effb08e68(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), 129, &uVar1, &iVar2, &uVar3))
		{
			if (iVar2 == 1619704960)
			{
				return false;
			}
		}
	}
	if (func_71(iParam0, 1) && !func_71(iParam0, 2))
	{
		if (func_71(iParam0, 4096) || func_71(iParam0, 2048))
		{
			if (func_628(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_467(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uVar0 = func_1(&uParam0);
	if (!func_629())
	{
		return false;
	}
	return true;
}

bool func_468(vector3 vParam0, int iParam3)
{
	if (is_entity_dead(iParam3))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(iParam3) };
	return func_630(vVar0, vParam0) > func_630(vVar0, get_entity_coords(iParam3, true, false));
}

bool func_469(int iParam0)
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

int func_470(int iParam0)
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

int func_471(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_571(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_472()
{
	return get_player_group(get_player_index());
}

bool func_473(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_447() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0];
		if (!is_entity_dead(iVar1) && iParam0 == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_474(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!has_model_loaded(iParam0))
		{
			return false;
		}
	}
	return true;
}

Vector3 func_475(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return _get_object_offset_from_coords(vParam0, bParam3, vParam4);
}

float func_476(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_106((fParam0 + fParam1));
}

int func_477(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam6)
	{
		func_631(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_632(uParam1))
	{
		iVar0 = _0xeaf682a14f8e5f53(uParam1->f_5, vParam2, bParam5, 1, 1, iParam9, iParam10);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = func_633(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (_is_metaped_outfit_request_valid(uParam1->f_5))
		{
			_release_metaped_outfit_request(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_633(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
	}
	if (is_entity_dead(iVar0))
	{
	}
	else
	{
		_0x9520175b35e2268d(iVar0, 1);
		set_blocking_of_non_temporary_events(iVar0, true);
		if (uParam1->f_10)
		{
			if (is_ped_human(iVar0))
			{
				_0x0fb1ba7ff73b41e1(iVar0, uParam1->f_4, 0);
			}
		}
		if (!is_string_null_or_empty(&(uParam1->f_23)) && !func_264(iVar0))
		{
			func_481(iVar0, &(uParam1->f_23), 0);
		}
		if (func_264(iVar0))
		{
			set_animal_tuning_bool_param(iVar0, 48, true);
		}
		else
		{
			set_ped_config_flag(iVar0, 307, true);
		}
		if (func_634(&(uParam1->f_22)))
		{
			set_ped_can_ragdoll(iVar0, true);
			set_ped_to_ragdoll(iVar0, 1000, 1000, 1, false, false, false);
			set_ped_config_flag(iVar0, 186, !func_635(&(uParam1->f_22)));
			func_529(iVar0, func_636(&(uParam1->f_22)), 0);
		}
		else
		{
			request_ped_visibility_tracking(iVar0);
		}
		if (func_637(&(uParam1->f_22)))
		{
			freeze_entity_position(iVar0, true);
		}
		if (func_638(&(uParam1->f_22)))
		{
			func_639(iVar0, 1);
		}
		_0xa91e6cf94404e8c9(iVar0);
		set_ped_config_flag(iVar0, 6, func_640(&(uParam1->f_22)));
		set_ped_config_flag(iVar0, 393, true);
		if (!func_103(uParam1->f_22, 8192))
		{
			_set_entity_something(iVar0, true);
		}
		if (!func_264(iVar0))
		{
			func_642(iVar0, !func_641(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 4, func_643(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 297, !func_644(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 317, !func_644(&(uParam1->f_22)));
			if (uParam1->f_31 != 623901053)
			{
				set_ped_relationship_group_hash(iVar0, uParam1->f_31);
			}
		}
	}
	if (does_entity_exist(iVar0))
	{
		if (is_ped_human(iVar0))
		{
			decor_set_bool(iVar0, "bBeatPed", true);
			decor_set_bool(iVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return iVar0;
}

bool func_478(int iParam0, int iParam1)
{
	if (func_645(iParam0) != -1)
	{
		return true;
	}
	switch (iParam0)
	{
		case -1208814201:
		case -535404896:
		case -390289284:
		case 1112571710:
		case 1478983280:
			return true;
		case -1990962020:
		case 1057570823:
			return iParam1;
		default:
			break;
	}
	return false;
}

bool func_479(var uParam0)
{
	return func_103(*uParam0, 32);
}

int func_480(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam1))
	{
		return 0;
	}
	if (get_mount(iParam0) != iParam1)
	{
		_set_ped_on_mount(iParam0, iParam1, iParam3, bParam4);
		set_ped_can_be_targetted(iParam1, bParam2);
	}
	return 1;
}

void func_481(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_34(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

int func_482(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 2139774588:
			return 1;
		case 1142025875:
			return 2;
		case 1587891565:
			return 4;
		case 1877013492:
			return 32;
		case -643014279:
			return 64;
		case -597116214:
			return 128;
		case 551416228:
			return 256;
		case 1022576842:
			return 512;
		case 953325896:
			return 1024;
		case 508358508:
			return 2048;
		case -735200598:
			return 4096;
		case -856432278:
			return 8192;
		case -2010847721:
			return 16384;
		case 446961221:
			return 32768;
		case -1972216640:
			return 65536;
		case 530833824:
			return 131072;
		case 1682361219:
			return 262144;
		case 158959085:
			return 524288;
		case 1919819559:
			return 1048576;
		case 1461411082:
			return 2097152;
		case -549508280:
			return 4194304;
		default:
			break;
	}
	return 0;
}

bool func_483(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_484(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if (!bParam12 && is_entity_dead(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case -1212426201:
		case -1101297303:
		case -594562071:
		case 416676503:
		case 860033945:
		case 970310034:
			iVar0 = _0xf8204ef17410bf43(iParam1, iParam7, iParam8, 0);
			if (!is_weapon_valid(iVar0))
			{
				iVar0 = -1569615261;
			}
			break;
		default:
			if (!is_weapon_valid(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((_0x705be297eebdb95d(iVar0) || _is_weapon_melee(iVar0)) && get_ped_relationship_group_hash(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, _get_weapon_name(iVar0), 128);
				iVar2 = _0xd42514c182121c23(get_entity_model(iParam0));
				if (!Global_43891 && _does_string_exist_in_string(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, _0x806862e5d266cf38(&cVar5, 0, (get_length_of_literal_string(&cVar5) - get_length_of_literal_string("_DUALWIELD"))), 128);
					iVar3 = get_hash_key(&cVar5);
					if (func_589(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = get_weapontype_group(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = _0x9eefd670f10656d7(iVar2, iVar1);
						if (!Global_43891)
						{
							if (func_589(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_447() == -1 && !func_646(iVar0))
	{
		if (has_ped_got_weapon(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43891) && iParam0 != Global_35) && get_ped_relationship_group_hash(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = _0xf8204ef17410bf43(iParam1, iParam7, iParam8, 0);
			if (!is_weapon_valid(iVar0))
			{
				iVar0 = -1569615261;
			}
		}
	}
	if (iVar0 == -1569615261 && iParam1 == -1569615261)
	{
		return iVar0;
	}
	else if (iVar0 == -1569615261)
	{
		switch (iParam1)
		{
			case -1101297303:
			case 416676503:
				iVar0 = 379542007;
				break;
			case -1212426201:
			case -594562071:
			case 860033945:
			case 970310034:
				if (func_646(-183018591))
				{
					iVar0 = -183018591;
				}
				else
				{
					iVar0 = 379542007;
				}
				break;
			default:
				iVar0 = 379542007;
				break;
		}
	}
	else if (iVar0 == -164645981 && iParam0 == Global_35)
	{
		iVar0 = 1247405313;
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_589(iVar0))
		{
			get_max_ammo(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!_is_weapon_melee(iVar0) && iVar0 != -1569615261) && !_is_weapon_lantern(iVar0))
		{
			iVar23 = get_ped_ammo_by_type(iParam0, get_ped_ammo_type_from_weapon(iParam0, iVar0));
			iVar24 = _get_weapon_clip_size(iVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_647(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_648(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_649(iVar0))
		{
			set_ped_infinite_ammo(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		_0xcffc3eccd7a5cceb(get_player_index(), iVar0, iParam4);
	}
	return iVar0;
}

bool func_485(int iParam0, int iParam1, bool bParam2)
{
	if (!func_486(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_650(iParam0);
	if (iVar0 == -427144552)
	{
		if (has_ped_got_weapon(Global_35, iParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_651(iParam0, 1))
		{
			return false;
		}
	}
	return func_652(iParam0, 0, bParam2) >= iParam1;
}

bool func_486(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_487(int iParam0, int iParam1)
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

int func_488(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar0 = get_ped_index_from_entity_index(iParam0);
			if (is_ped_human(iVar0))
			{
				if (is_ped_male(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_489(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

bool func_490(int iParam0, bool bParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if ((iParam0 >= 6 && !bParam1) || (iParam0 > 10 && bParam1))
	{
		return false;
	}
	return true;
}

void func_491(var uParam0)
{
	if (!func_158(uParam0))
	{
	}
	if (func_377(uParam0))
	{
		uParam0->f_1 = (func_378() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_573(uParam0, 2);
	}
}

void func_492(var uParam0)
{
	if (!func_158(uParam0))
	{
	}
	if (!func_377(uParam0))
	{
		uParam0->f_2 = (func_378() - uParam0->f_1);
		func_572(uParam0, 2);
	}
}

int func_493(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_494(var uParam0, int iParam1)
{
	stop_current_playing_ambient_speech(uParam0, iParam1);
	stop_current_playing_speech(uParam0, iParam1);
}

void func_495(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(iParam0, 134217728);
	}
	else
	{
		func_50(iParam0, 134217728);
	}
}

int func_496(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		default:
			break;
	}
	return 2;
	return -1;
}

var func_497(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&cVar0, "RE_", 64);
	StringCopy(&cVar8, sParam1, 32);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, &cVar8, 64);
	if (iParam3 >= 0)
	{
		StringConCat(&cVar0, "_V", 64);
		StringIntConCat(&cVar0, iParam3, 64);
	}
	else
	{
		StringConCat(&cVar0, "_ALL", 64);
	}
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, sParam2, 64);
	return func_653(cVar0);
}

int func_498(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	iParam5 = iParam5;
	iParam1 = iParam1;
	if (is_string_null_or_empty(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!is_entity_dead(iParam0) && !is_entity_dead(iParam1))
		{
			if (!has_entity_clear_los_to_entity_in_front(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_405())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!is_entity_dead(iParam0))
			{
				if (func_209(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!is_entity_dead(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_437(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_163(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_654(iParam0, iParam1, fVar1, bParam13))
				{
					task_look_at_entity(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = network_is_game_in_progress();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					set_bit(&(Var3.f_7), 3);
					set_bit(&(Var3.f_7), 2);
				}
				iVar2 = _0x72e4d1c4639bc465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					_0xb18fec133c7c6c69(iVar2);
				}
			}
			else
			{
				iVar2 = func_655(func_316(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

int func_499(int iParam0, int* iParam1)
{
	if (is_entity_dead(&(iLocal_35[iParam0])) || func_165(65536, iParam0))
	{
		return 0;
	}
	if (func_165(8192, iParam0))
	{
		if (!func_311(Global_35, 0))
		{
			func_160(8192, iParam0);
			func_213(32768, iParam0);
			func_293(iParam0, 0, 1, 1);
		}
		return 1;
	}
	else if (func_165(16384, iParam0))
	{
		if (!func_311(Global_35, 0))
		{
			func_316(&(iLocal_35[iParam0]), func_314(iLocal_14, iParam0, 0, 0, 0), 1744022339, 0, 1, &(Local_245[iParam0]->f_23), func_315(iLocal_14, iParam0, 0, 0, 0), 1);
			func_213(65536, iParam0);
		}
		return 1;
	}
	else if (func_656(iParam1) && &iLocal_1237[iParam0] != -1)
	{
		switch (&iLocal_1237[iParam0])
		{
			case 0:
				func_213(8192, iParam0);
				break;
			case 1:
			case 2:
				func_101(4);
				func_101(32768);
				func_213(16384, iParam0);
				break;
		}
		if (!Local_51.f_44)
		{
			func_148();
		}
		func_293(iParam0, 0, 0, 0);
		return 1;
	}
	return 0;
}

void func_500(var uParam0, bool bParam1, bool bParam2)
{
	sVar0 = "RE_AMD_LWL_V2_GREET_DEFUSE";
	if (bParam2)
	{
		sVar0 = "RE_AMD_LWL_V1_GREET_DEFUSE";
	}
	func_332(uParam0, bParam1, sVar0, "RE_AMD_LWL_V2_GREET_DEALER_POS", "RE_AMD_LWL_V2_GREET_DEALER_NEG", "RE_AMD_LWL_V2_ROB_DEALERS");
}

void func_501(var uParam0, bool bParam1, bool bParam2)
{
	sVar0 = "RE_AMD_LWL_V2_GREET_DEFUSE";
	if (bParam2)
	{
		sVar0 = "RE_AMD_LWL_V1_GREET_DEFUSE";
	}
	func_332(uParam0, bParam1, sVar0, "RE_AMD_LWL_V2_GREET_DEALER_POS", "RE_AMD_LWL_V2_GREET_DEALER_NEG", "RE_AMD_LWL_V2_ROB_DEALERS");
}

void func_502(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam1)
	{
		case 1:
			if (bParam3)
			{
				sVar0 = "RE_AMD_LWL_V1_GREET_DEFUSE";
			}
			else
			{
				sVar0 = "RE_AMD_LWL_V2_GREET_DEFUSE";
			}
			func_332(uParam0, bParam2, sVar0, "RE_AMD_LWL_V2_GREET_RAIDER_POS", "RE_AMD_LWL_V2_GREET_RAIDER_NEG", "RE_AMD_LWL_V2_ROB_RAIDERS");
			break;
		default:
			if (func_657())
			{
				func_332(uParam0, bParam2, "RE_AMD_LWL_V1_GREET_DEFUSE", "RE_AMD_LWL_V1_GREET_POS", "RE_AMD_LWL_V1_GREET_NEG", "RE_AMD_LWL_V1_ROB_RAIDERS");
			}
			else
			{
				func_332(uParam0, bParam2, "RE_AMD_LWL_V1_GREET_DEFUSE", "RE_AMD_LWL_V1_GREET_POS", "RE_AMD_LWL_V2_GREET_RAIDER_NEG", "RE_AMD_LWL_V1_ROB_RAIDERS");
			}
			break;
	}
}

void func_503(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam1)
	{
		case 1:
			if (bParam3)
			{
				sVar0 = "RE_AMD_LWL_V1_GREET_DEFUSE";
			}
			else
			{
				sVar0 = "RE_AMD_LWL_V2_GREET_DEFUSE";
			}
			func_332(uParam0, bParam2, sVar0, "RE_AMD_LWL_V2_GREET_RAIDER_POS", "RE_AMD_LWL_V2_GREET_RAIDER_NEG", "RE_AMD_LWL_V2_ROB_RAIDERS");
			break;
		default:
			func_332(uParam0, bParam2, "RE_AMD_LWL_V1_GREET_DEFUSE", "RE_AMD_LWL_V1_GREET_POS", "RE_AMD_LWL_V2_GREET_RAIDER_NEG", "RE_AMD_LWL_V1_ROB_RAIDERS");
			break;
	}
}

int func_504(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	if (!is_itemset_valid(&Global_1396084))
	{
		return 0;
	}
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (is_in_itemset(iParam0, &Global_1396084))
		{
			return 1;
		}
		add_to_itemset(iParam0, &Global_1396084);
		decor_set_bool(iParam0, "pedRoam_bInPedRoam", true);
		func_658(iParam0, 0);
		func_659(iParam0, iParam1);
		func_660(iParam0, iParam2);
		if (!is_string_null_or_empty(sParam3))
		{
			iVar0 = get_hash_key(sParam3);
			if (!func_661(iVar0))
			{
				decor_set_int(iParam0, "pedRoam_hashKey", iVar0);
			}
		}
		return 1;
	}
	return 0;
}

void func_505(int iParam0)
{
	if (!func_34(iParam0, 0, 1))
	{
		return;
	}
	sVar0 = &Local_670[0];
	sVar1 = Local_670[0]->f_1;
	if (iParam0 == &iLocal_35[3])
	{
		sVar0 = &Local_670[1];
		sVar1 = Local_670[1]->f_1;
	}
	if ((!is_entity_dead(iLocal_34) && func_662(iParam0, iLocal_34, 0)) && func_663(iParam0, iLocal_34) == -1)
	{
		task_play_anim(iParam0, sVar0, sVar1, 4f, -4f, -1, 67108880, 0f, false, 65536, false, "UpperBodyNoArms_filter", false);
	}
	else
	{
		task_play_anim(iParam0, sVar0, sVar1, 4f, -4f, -1, 67108880, 0f, false, 65536, false, "UpperbodyFixup_filter", false);
	}
}

void func_506(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_507(var uParam0, var uParam1)
{
	*uParam1 = 0;
	uParam0->f_10 = 0;
	uParam0->f_4 = 0;
}

void func_508(var uParam0)
{
	if (!func_34(*uParam0, 0, 0))
	{
		return;
	}
	set_ped_config_flag(*uParam0, 170, true);
	set_ped_config_flag(*uParam0, 340, true);
	set_ped_flee_attributes(*uParam0, 512, true);
	set_ped_combat_attributes(*uParam0, 5, true);
	set_ped_combat_attributes(*uParam0, 17, false);
	set_ped_combat_attributes(*uParam0, 50, false);
	set_ped_combat_attributes(*uParam0, 28, true);
	set_ped_combat_attributes(*uParam0, 54, true);
}

void func_509(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (is_entity_dead(&(iLocal_35[iParam0])))
	{
		return;
	}
	if (!is_entity_dead(iLocal_34) && is_ped_in_vehicle(&(iLocal_35[iParam0]), iLocal_34, false))
	{
		return;
	}
	else
	{
		if (_0x3ab6c7b0bb0df4b1(&(iLocal_35[iParam0]), -1))
		{
			remove_anim_scene_entity(Local_528.f_1, func_343(&(iLocal_35[iParam0])), &(iLocal_35[iParam0]));
		}
		if (bParam2)
		{
			force_ped_motion_state(&(iLocal_35[iParam0]), -668482597, false, 0, false);
		}
		func_664(iLocal_35[iParam0]);
		if (!is_entity_dead(iLocal_34))
		{
			open_sequence_task(&iVar3);
			if (bParam6)
			{
				task_react(0, Global_35, Global_36, "Default_Panic", &(uLocal_1259[iParam0]), 0, 4);
			}
			if (iParam4 > 0)
			{
				task_stand_still(0, iParam4);
			}
			vVar0 = { func_665(iParam5, bParam7) };
			if (!func_105(vVar0))
			{
				task_go_straight_to_coord(0, vVar0, 1f, -1, 1193033728, 1056964608, 1);
			}
			task_enter_vehicle(0, iLocal_34, -1, iParam1, fParam3, iParam5, 0);
			func_212(&(iLocal_35[iParam0]), &iVar3, 0, 0, 1, 1);
			set_ped_keep_task(&(iLocal_35[iParam0]), true);
		}
	}
}

void func_510(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iVar1 = iVar0;
		if (func_666((*uParam0)[iVar1], 1, 0) != Local_15[iParam1][iVar1])
		{
			func_333((*uParam0)[iVar1], Local_15[iParam1][iVar1], 0);
		}
		iVar0++;
	}
}

bool func_511(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

int func_512(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_667(&iVar0);
	if (func_2(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_668(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_2(iVar0, 134217728))
	{
		func_669(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_670(558))
				{
					func_671(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

int func_513(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	request_model(iParam0, false);
	if (!has_model_loaded(iParam0))
	{
		return 0;
	}
	if (!_does_scenario_point_exist(iParam4) && iParam5 != 0)
	{
		iParam4 = _find_closest_active_scenario_point_of_type(vParam1, iParam5, 1f, 0, false);
	}
	if (_does_scenario_point_exist(iParam4))
	{
		if (_0xea31f199a73801d3(iParam4))
		{
			iVar1 = _get_scenario_point_entity(iParam4, "CONTAINER");
			if (is_entity_an_object(iVar1))
			{
				iVar0 = get_object_index_from_entity_index(iVar1);
			}
		}
	}
	else
	{
		iVar0 = get_closest_object_of_type(vParam1, 0.5f, iParam0, false, false, true);
	}
	return iVar0;
}

void func_514(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		decor_set_bool(iParam0, "scripted_loot_only", true);
		_0x8c03cd6b5e0e85e8(iParam0, -1143637011);
	}
}

void func_515(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	if (!does_entity_exist(*iParam10))
	{
		*iParam10 = func_513(iParam0, vParam1, iParam13, iParam14);
	}
	if (does_entity_exist(*iParam10))
	{
		if (!func_105(vParam4) || !func_105(vParam7))
		{
			func_672(*iParam10, vParam4, vParam7);
		}
		func_673(*iParam10, iParam11, iParam12, iParam15);
	}
}

void func_516(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
	}
	if (uParam0->f_1 != 0)
	{
		remove_shocking_event(uParam0->f_1);
		uParam0->f_1 = 0;
	}
	func_64(uParam0->f_2);
	func_64(uParam0->f_3);
	uParam0->f_5 = -1f;
	uParam0->f_6 = -1f;
	uParam0->f_8 = -1f;
	uParam0->f_12 = "";
	func_163(&(uParam0->f_9));
	func_167(&(uParam0->f_9));
	*uParam0 = 0;
}

bool func_517(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

bool func_518(int iParam0)
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

void func_519(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_518(iParam0))
	{
		return;
	}
	iVar0 = func_674(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_520(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_518(iParam0))
	{
		return;
	}
	iVar0 = func_674(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_521(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_518(iParam0))
	{
		return;
	}
	iVar0 = func_674(iParam0);
	if (bParam1)
	{
		func_675(iParam0, 4);
		func_676(iVar0, 1);
		func_677(iVar0, 1);
	}
	else
	{
		func_678(iParam0, 4);
		func_677(iVar0, 0);
	}
}

void func_522(int* iParam0, char* sParam1)
{
	if (func_518(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_520(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_525(iParam0, 1);
}

bool func_523(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_524(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_525(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_526(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_518(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_674(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_679(iVar0);
	*uParam0 = 0;
}

int func_527(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 790744141;
		case 2:
			return 149614342;
		case 4:
			return -559356470;
		case 8:
			return 1852049024;
		case 16:
			return 1809661801;
		case 32:
			return -1897899944;
		case 64:
			return 2022786542;
		case 128:
			return 141905997;
		case 512:
			return -267673205;
		case 1024:
			return -2040233953;
		case 2048:
			return 1043694409;
		case 4096:
			return -114482302;
		case 8192:
			return -1095289676;
		case 16384:
			return -161854579;
		case 32768:
			return -114482302;
		case 65536:
			return -1067623131;
		case 131072:
			return -1067623131;
		case 524288:
			return 1468736574;
		case 1048576:
			return 1468736574;
		case 2097152:
			return -120771809;
		case 4194304:
			return 591173485;
		case 8388608:
			return 1787256768;
		case 16777216:
			return -256271136;
		case 33554432:
			return 1613587293;
		case 67108864:
			return -852328799;
		case 134217728:
			return 2015887348;
		default:
			break;
	}
	return -1;
}

int func_528(int iParam0)
{
	switch (iLocal_14)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					return 2;
				case 0:
					return 3;
				default:
					break;
			}
			break;
	}
	return iParam0;
}

void func_529(int iParam0, bool bParam1, bool bParam2)
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

bool func_530(int iParam0, int iParam1, float fParam2)
{
	return func_680(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

bool func_531(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (vdist2(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

void func_532(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_533()
{
	_0xdd1232b332cbb9e7(4, 1, 0);
}

void func_534(int iParam0, bool bParam1, int iParam2)
{
	func_681(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!does_entity_exist(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225639->f_11)
		{
			return;
		}
		if (Global_1225639->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		iParam0->f_10 = 0;
	}
	iParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		iParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		iParam0->f_13 = func_682(0);
	}
	switch (iParam0->f_6)
	{
		case 0:
			if (*iParam0 & 16 != 0)
			{
				if (!*iParam0 & 33554432 != 0)
				{
					if (iParam0->f_13 == -1504859554)
					{
						if (is_ped_planting_bomb(Global_35))
						{
							func_51(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_411(1))
						{
							func_51(iParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_411(1) || *iParam0 & 8192 != 0))
				{
					func_50(iParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!iParam0->f_1 & 1024 != 0)
	{
		if (!does_entity_exist(iParam0->f_14))
		{
			if (func_683(iParam0))
			{
				iParam0->f_15 = func_384();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_384() - iParam0->f_15) > 500)
			{
				if (!is_ped_on_mount(iParam0->f_14))
				{
					iParam0->f_14 = 0;
					iParam0->f_15 = 0;
				}
			}
		}
	}
	iParam0->f_6++;
	if (iParam0->f_6 >= 4)
	{
		iParam0->f_6 = 0;
		iParam0->f_7++;
		if (iParam0->f_7 > 4)
		{
			iParam0->f_7 = 0;
		}
	}
	func_684(iParam0);
}

bool func_535(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_384();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_536(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = player_ped_id();
	if (!bParam3)
	{
		if (has_entity_been_damaged_by_any_ped(iParam0) || has_entity_been_damaged_by_any_vehicle(iParam0))
		{
			if (has_entity_been_damaged_by_entity(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = get_players_last_vehicle();
			if (!is_entity_dead(iVar1))
			{
				if (has_entity_been_damaged_by_entity(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (is_ped_on_mount(iVar0))
			{
				if (!is_entity_dead(get_mount(iVar0)))
				{
					if (has_entity_been_damaged_by_entity(iParam0, get_mount(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (does_entity_exist(iParam1))
			{
				if (!is_entity_dead(iParam1))
				{
					if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_685(iVar0, &iVar2))
		{
			if ((is_ped_ragdoll(iParam0) || _0x947e43f544b6ab34(iParam0, player_id(), 10, 1000)) || (!bParam4 && is_entity_touching_entity(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (_0x29fce825613fefca(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_686(iVar0, iParam0))
	{
		return 1;
	}
	if (_0xd0b7aeb56229d317(player_ped_id()) == iParam0)
	{
		if (_0x0e99e3bf11bb6367(player_ped_id()))
		{
			return 1;
		}
	}
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_being_jacked(iParam0))
		{
			if (get_peds_jacker(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (is_ped_performing_melee_action(iVar0, 8, 0))
	{
		if (get_ped_config_flag(iParam0, 9, true) || is_ped_being_stealth_killed(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_537(int iParam0, int iParam1)
{
	if (!decor_exist_on(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = decor_get_int(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (decor_set_int(iParam1, "iDamageFrame", iParam0->f_5))
		{
		}
	}
	else if (iParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_538(int iParam0, int iParam1)
{
	if (func_687(iParam0))
	{
		return true;
	}
	if (_0x29fce825613fefca(iParam1, 400))
	{
		return true;
	}
	if (is_ped_dead_or_dying(iParam1, true))
	{
		return false;
	}
	if ((is_ped_performing_melee_action(Global_35, 8, 0) || get_ped_config_flag(iParam1, 9, true)) || is_ped_being_stealth_killed(iParam1))
	{
		return false;
	}
	if (is_ped_performing_melee_action(Global_35, 16, 0) || get_ped_config_flag(iParam1, 10, true))
	{
		return false;
	}
	if (_get_lassoed_entity(Global_35) != 0)
	{
		return true;
	}
	if (!is_ped_ragdoll(iParam1))
	{
		return true;
	}
	return false;
}

void func_539()
{
}

void func_540(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_688(iParam2, 1, 1, 1, 0))
	{
		func_51(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_495(iParam1, 1);
	func_444();
}

bool func_541(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_437(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_542()
{
	if (Global_1935630->f_42 == 0)
	{
		return false;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return false;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return false;
	}
	if ((func_384() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_543(int iParam0, float fParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_384();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_544(var uParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_689(iParam2);
			if (!is_weapon_valid(Global_1935630->f_46) || Global_1935630->f_46 == -1569615261)
			{
				_0xd355e2f1bb41087e(iParam1, fVar0);
			}
			else if (is_weapon_valid(Global_1935630->f_46) && _0xea522f991e120d45(Global_1935630->f_46))
			{
				_0xd355e2f1bb41087e(iParam1, 5f);
			}
			else
			{
				_0xd355e2f1bb41087e(iParam1, fVar0);
			}
		}
		if ((!is_weapon_valid(Global_1935630->f_46) || Global_1935630->f_46 == -1569615261) || (is_weapon_valid(Global_1935630->f_46) && _0x5809dbca0a37c82b(Global_1935630->f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (_0x9c81338b2e62ce0a(player_id(), iParam1, iVar1) && _0x285d36c5c72b0569(uParam0) <= fVar2)
		{
			if (func_538(iParam2, iParam1))
			{
				func_495(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_545(var uParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 < IntToFloat(func_690(iParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_538(iParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_495(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_546(int iParam0, int iParam1)
{
	fVar0 = func_691(iParam1);
	if (iParam1->f_12 > (fVar0 + 5f))
	{
		return false;
	}
	if (!_0x5102307ce88798eb(iParam0))
	{
		request_ped_visibility_tracking(iParam0);
	}
	if (iParam1->f_12 < fVar0 || is_tracked_ped_visible(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_692(_0x2ba9d7bf629f920c(iParam0), (fVar0 + 5f));
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, fVar2, -1f, fVar1) && _0x7f9b9791d4cb71f6(iParam0, Global_35, true, 0) == 1)
		{
			return true;
		}
		else if (is_weapon_valid(Global_1935630->f_44))
		{
			if (_is_weapon_lantern(Global_1935630->f_44) || _is_weapon_torch(Global_1935630->f_44))
			{
				if (iParam1->f_12 <= 5f)
				{
					if (func_693())
					{
						if (is_ped_facing_ped(Global_35, iParam0, 110f))
						{
							if (has_entity_clear_los_to_entity(iParam0, Global_35, 17))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_547(int iParam0, int iParam1)
{
	if (func_412(iParam0))
	{
		set_player_noise_multiplier(player_id(), 0.25f);
	}
	if (((_get_ped_crouch_movement(Global_35) || is_ped_in_cover(Global_35, 0, 0)) || is_ped_going_into_cover(Global_35)) || *iParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (_0x0ea9eacba3b01601(Global_35, iParam0, iVar1) && get_player_current_stealth_noise(player_id()) > 4f)
	{
		if (*iParam1 & 512 != 0)
		{
			if (is_ped_in_cover(Global_35, 0, 0) || is_ped_going_into_cover(Global_35))
			{
				return false;
			}
			if (_get_ped_crouch_movement(Global_35) || ((_0xa29fd00d45311eb7(Global_35, "stealth") == 1f && get_player_current_stealth_noise(player_id()) < 8f) && *iParam1 & 2097152 != 0))
			{
				return false;
			}
		}
		if (_0xa29fd00d45311eb7(Global_35, "stealth") == 1f && get_player_current_stealth_noise(player_id()) > 8f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

bool func_548(int iParam0, int iParam1)
{
	if (!_0x1d1b448d719415ab(iParam0))
	{
		return false;
	}
	iVar0 = _0x796eecff0c6d39be(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case -196899787:
		case 178452260:
		case 869302489:
		case 1589923363:
			iVar1 = _0x822a001bcea5bd81(iParam0, iVar0, 0, 0);
			if (!is_entity_a_ped(iVar1))
			{
				return false;
			}
			iVar2 = get_ped_index_from_entity_index(iVar1);
			if (!is_ped_human(iVar2))
			{
				return false;
			}
			if (decor_exist_on(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1935630->f_33)
			{
				return false;
			}
			if (iVar2 == Global_1935630->f_32)
			{
				return false;
			}
			if (!func_694(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_306(iParam0, iVar2) <= func_695(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_549(int iParam0, int iParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_696(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_697(iParam1);
			if (func_698(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - iParam1->f_2);
				iVar3 = func_699(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_495(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_495(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_550(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 0)
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (is_entity_dead(iParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (func_700(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_697(iParam2);
		if (func_698(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = get_game_timer();
			}
			if (iParam2->f_2 != 0)
			{
				if (get_game_timer() - iParam2->f_2) > func_699(iParam2)
				{
					func_495(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_551(int iParam0, int iParam1)
{
	if (!get_entity_player_is_free_aiming_at(player_id(), &iVar0))
	{
		return false;
	}
	if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!is_entity_a_ped(iVar0))
	{
		return false;
	}
	if (Global_1935630->f_40 != 0)
	{
		if (_get_rider_of_mount(Global_1935630->f_40, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = get_ped_index_from_entity_index(iVar0);
	if (func_694(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - iParam1->f_3) > func_699(iParam1)
		{
			fVar3 = func_697(iParam1);
			if (iParam1->f_12 < fVar3)
			{
				if (has_entity_clear_los_to_entity(iParam0, Global_35, 17) && has_entity_clear_los_to_entity(iParam0, iVar1, 17))
				{
					if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && _0x06087579e7aa85a9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_552(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_701(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_495(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, iParam2->f_27))
				{
					func_495(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar4, 0, 0);
					if (func_702(iParam1, vVar0, vVar4))
					{
						func_495(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_495(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar7, 0, 0);
					if (func_702(iParam1, vVar0, vVar7))
					{
						func_495(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_553(int iParam0, int iParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_694(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_703(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_704(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && decor_exist_on(iParam0, "HorseOwnerTeamA")) || (decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && decor_exist_on(iParam0, "HorseOwnerTeamB")))
					{
						*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
						*vVar2[1] = { vVar9 };
						iParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_705(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_706(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_707(iParam1, iParam0, fVar1, iVar0))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_554(int iParam0, int iParam1)
{
	if (!_0x1d1b448d719415ab(*iParam0))
	{
		return false;
	}
	iVar0 = _0x796eecff0c6d39be(*iParam0, 0, 0);
	switch (iVar0)
	{
		case -1695849405:
		case 2044016570:
			iVar1 = _0x822a001bcea5bd81(*iParam0, iVar0, 0, 0);
			iVar2 = _0x38497f139981c5c9(*iParam0, iVar0, 0, 0);
			vVar5 = { get_entity_coords(iVar1, false, false) };
			vVar8 = { get_entity_coords(iVar2, false, false) };
			_0x1a5c5d350068a673(*iParam0, 0);
			return true;
	}
	return false;
}

bool func_555(int iParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_708(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_384();
			return true;
		}
		else if (_0xa19447d83294e29f(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = _get_ped_in_draft_seat(iVar0, iVar6);
					if (does_entity_exist(iVar7))
					{
						if (func_109(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								iParam0->f_9 = func_384();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

bool func_556(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_695(iParam0);
	if (iParam0->f_12 > func_200(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_709(iParam1);
	iVar1 = func_710(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, true, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, iParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, iParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_557(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_711(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_558(int iParam0, int iParam1)
{
	if (*iParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630->f_24)
	{
		return true;
	}
	if (*iParam1 & 33554432 != 0)
	{
		if (func_712(iParam0, iParam1, 1))
		{
			return true;
		}
		if ((_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam0, Global_35, true, 0) == 1)
		{
			return true;
		}
	}
	iVar0 = get_jack_target(Global_35);
	if (does_entity_exist(iVar0) && !does_entity_belong_to_this_script(iVar0, true))
	{
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!_0x1d1b448d719415ab(iParam0))
	{
		return false;
	}
	iVar1 = _0x796eecff0c6d39be(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case -2027383723:
		case -870494873:
		case 73464052:
		case 1201762715:
			iVar2 = _0x822a001bcea5bd81(iParam0, iVar1, 0, 0);
			iVar3 = _0x38497f139981c5c9(iParam0, iVar1, 0, 0);
			if (!is_entity_a_ped(iVar2) || !is_entity_a_ped(iVar3))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar4 = get_ped_index_from_entity_index(iVar2);
			iVar5 = get_ped_index_from_entity_index(iVar3);
			if (iVar4 != Global_35)
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			if (_0x88ad6cc10d8d35b2(iVar5))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			return true;
		case -1601932249:
			iVar2 = _0x822a001bcea5bd81(iParam0, iVar1, 0, 0);
			iVar3 = _0x38497f139981c5c9(iParam0, iVar1, 0, 0);
			if (!is_entity_a_ped(iVar2) || !is_entity_a_ped(iVar3))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar4 = get_ped_index_from_entity_index(iVar2);
			iVar5 = get_ped_index_from_entity_index(iVar3);
			if (_0x06087579e7aa85a9(iParam0, iVar4, -1f, -1f, -1f, -1f) && _0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (has_entity_clear_los_to_entity(iParam0, iVar4, 17) && has_entity_clear_los_to_entity(iParam0, Global_35, 17))
				{
					if (!func_713(iParam1, iParam0))
					{
						if (func_109(iVar4, Global_36, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
	}
	return false;
}

bool func_559(int iParam0, int iParam1)
{
	if (!func_714(0))
	{
		return false;
	}
	if (is_ped_facing_ped(iParam0, Global_35, 90f))
	{
		if (has_entity_clear_los_to_entity(iParam0, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_560(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_384();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_561(int iParam0, int iParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_562(int iParam0, int iParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_384();
	}
	else if (func_384() - iParam1->f_4) > func_715(iParam1)
	{
		return func_716(iParam0, iParam1, 0, -1082130432);
	}
	return 0;
}

bool func_563(int iParam0, int iParam1)
{
	iVar0 = get_ped_source_of_death(iParam1);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (decor_exist_on(iParam1, "bIgnoreDamageChecking"))
	{
		return false;
	}
	iVar1 = get_ped_index_from_entity_index(iVar0);
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return true;
	}
	return false;
}

bool func_564(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_565(float fParam0)
{
	if (func_717(1))
	{
		return true;
	}
	if (func_158(&uLocal_0) && !func_168(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

void func_566(int iParam0)
{
	func_436(&(Local_936[iParam0]->f_21), 0, 0, 1, 0);
	func_160(8192, iParam0);
	func_160(16384, iParam0);
	func_160(32768, iParam0);
	func_160(65536, iParam0);
}

char* func_567(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dealerA";
		case 1:
			return "dealerb";
		case 2:
			return "confeda";
		case 3:
			return "confedb";
		default:
			break;
	}
	return "INVALID ENTITY";
}

int func_568()
{
	if (func_127(4096))
	{
		return 0;
	}
	if (iLocal_14 != 1)
	{
		return 0;
	}
	return 1;
}

bool func_569()
{
	return ((func_589(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) && _0x285d36c5c72b0569(Global_35) < 2f);
}

void func_570(int iParam0, int* iParam1, float fParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11, bool bParam12)
{
	if (!func_34(&(iLocal_35[iParam0]), 0, 0))
	{
		return;
	}
	func_508(iLocal_35[iParam0]);
	if (is_ped_in_any_vehicle(&(iLocal_35[iParam0]), false) && get_ped_in_vehicle_seat(get_vehicle_ped_is_using(&(iLocal_35[iParam0])), -1) == &iLocal_35[iParam0])
	{
		func_375(iParam0, iParam1);
		func_213(1073741824, iParam0);
		return;
	}
	if (bParam5)
	{
		func_349(&(iLocal_35[iParam0]), iParam1, 831283580, 580546400, 0, 0);
	}
	func_99(iLocal_35[iParam0], 0);
	iVar0 = 0;
	if (!bParam8)
	{
		iVar0 |= 16384;
	}
	if (bParam4)
	{
		iVar0 |= 33554432;
	}
	open_sequence_task(&iVar1);
	if (bParam10)
	{
		switch (func_718(&(iLocal_35[iParam0]), Global_35, 1060437492))
		{
			case 0:
				iVar2 = 10;
				break;
			case 2:
				iVar2 = 14;
				break;
			case 3:
				iVar2 = 13;
				break;
			case 1:
				switch (func_718(&(iLocal_35[iParam0]), Global_35, 1f))
				{
					case 3:
						iVar2 = 11;
						break;
					default:
						iVar2 = 12;
						break;
				}
				break;
		}
		task_play_anim(0, &(Local_670[iVar2]), Local_670[iVar2]->f_1, 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
	}
	if (!bParam4)
	{
		if (bParam11)
		{
			task_react(0, Global_35, Global_36, iParam3, fParam9, 0, 4);
		}
		else if (bParam12)
		{
			task_react(0, func_719(iParam0), func_720(func_719(iParam0)), iParam3, fParam9, 0, 4);
		}
	}
	if (bParam6 && iParam7 > -1)
	{
		if (func_308(&(iLocal_35[iParam0]), 0) == -1569615261)
		{
			set_current_ped_weapon(&(iLocal_35[iParam0]), func_258(iParam0), false, 0, false, false);
		}
		task_aim_gun_at_entity(0, Global_35, iParam7, bParam4, 1);
	}
	task_combat_hated_targets_around_ped(0, fParam2, iVar0, 0);
	func_212(&(iLocal_35[iParam0]), &iVar1, 0, 0, 1, 1);
}

void func_571(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_572(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_573(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_574(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

int func_575(int iParam0)
{
	if (iParam0 == -1)
	{
		iVar0 = func_721(1);
	}
	else
	{
		iVar0 = func_722(iParam0);
	}
	return iVar0;
}

void func_576(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_723(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_724(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2] = &Global_17504.f_2205[iVar2] + 1;
	}
}

int func_577()
{
	return Global_1897952->f_41;
}

void func_578(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_187(iParam0, 8192))
	{
		iVar0 = func_724(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0] = &Global_17504.f_2205[iVar0] + 1;
	}
}

void func_579(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	func_446(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

void func_580(int iParam0, bool bParam1)
{
	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_71(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_725(262144, iVar0, 0, 1);
		}
	}
	if (func_71(iParam0, 128))
	{
		func_725(128, iVar0, 0, 1);
	}
	else if (func_71(iParam0, 524288))
	{
		func_725(524288, iVar0, 0, 1);
	}
	else if (func_71(iParam0, 536870912))
	{
		func_725(536870912, iVar0, 0, 1);
	}
	else if (func_71(iParam0, 4194304))
	{
		func_725(4194304, iVar0, 0, 1);
	}
	else if (func_71(iParam0, 8388608))
	{
		func_725(8388608, iVar0, 0, 1);
	}
}

void func_581(int iParam0)
{
	Global_1310750->f_16077 = get_id_of_this_thread();
	Global_1310750->f_16071 = iParam0;
}

int func_582(bool bParam0)
{
	if (!bParam0 && func_726(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

int func_583()
{
	return Global_1310750->f_16037;
}

bool func_584(int iParam0)
{
	if (!func_242(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_585(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_242(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_727(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_586(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_728(Global_1393447, 1);
	func_729();
	func_730();
	func_731((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_384() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_732();
		if (iParam1 == -1)
		{
			if (func_2(iParam0, 1))
			{
				func_725(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_2(iParam0, 2))
			{
				func_725(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_2(iParam0, 4))
			{
				func_725(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_733(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_734(to_float(iVar0), 1, 0);
	}
	else
	{
		func_734((to_float(200) / 3f), 1, 0);
	}
}

void func_587(int iParam0, int iParam1)
{
	(*Global_1392050)[iParam1]->f_1 = ((*Global_1392050)[iParam1]->f_1 - ((*Global_1392050)[iParam1]->f_1 && iParam0));
}

int func_588(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1033509606;
		case 2:
			return 1143368244;
		case 1:
			return -1797026825;
		case 0:
			return 55818986;
		case 4:
			return -2100600611;
		case 3:
			return 529020251;
		case -1:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_589(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_590()
{
	return (Global_1935630->f_44 == -160924582 && is_first_person_aim_cam_active());
}

bool func_591(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (fParam1 > fParam2)
	{
		return false;
	}
	if (!is_entity_on_screen(uParam0->f_6))
	{
		return false;
	}
	return true;
}

bool func_592(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_591(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_378() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

int func_593(bool bParam0, bool bParam1, bool bParam2)
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

int func_594()
{
	return &Global_1899515;
}

int func_595(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_596(int iParam0)
{
	switch (iParam0)
	{
		case -1148613331:
		case -173507739:
		case 433385945:
		case 821931868:
		case 1500834021:
		case 1632247697:
			return true;
		default:
			break;
	}
	return false;
}

bool func_597(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case -416908843:
		case 212278652:
		case 839715153:
		case 1420204096:
		case 1974067816:
		case 2082228755:
			return true;
		default:
			break;
	}
	return false;
}

bool func_598(int iParam0)
{
	switch (iParam0)
	{
		case -273223690:
		case 603685163:
		case 669657108:
		case 725623432:
		case 1679686673:
			return true;
		default:
			break;
	}
	return false;
}

bool func_599(int iParam0)
{
	switch (iParam0)
	{
		case -702816767:
			return true;
		default:
			break;
	}
	return false;
}

bool func_600(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case 1500834021:
			return true;
		default:
			break;
	}
	return false;
}

bool func_601(int iParam0)
{
	switch (iParam0)
	{
		case 603685163:
		case 1679686673:
			return true;
		default:
			break;
	}
	return false;
}

bool func_602(int iParam0)
{
	switch (iParam0)
	{
		case -1317052143:
			return true;
		default:
			break;
	}
	return false;
}

bool func_603(bool bParam0, int iParam1, int iParam2)
{
	if (does_entity_exist(Global_1935630->f_32))
	{
		if (!bParam0 || is_ped_human(Global_1935630->f_32))
		{
			*iParam1 = Global_1935630->f_32;
			iVar0 = 1;
		}
	}
	if (does_entity_exist(Global_1935630->f_33))
	{
		if (!bParam0 || is_ped_human(Global_1935630->f_33))
		{
			if (_is_ped_hogtied(Global_1935630->f_33) || is_entity_dead(Global_1935630->f_33))
			{
				*iParam2 = Global_1935630->f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630->f_30 && !is_ped_injured(Global_35))
	{
		iVar1 = _get_lassoed_entity(Global_35);
		if (does_entity_exist(iVar1))
		{
			if (!bParam0 || is_ped_human(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

bool func_604()
{
	if (&Global_1048576)
	{
		return true;
	}
	if (Global_1572887->f_4)
	{
		return true;
	}
	if (&Global_524298)
	{
		return true;
	}
	if (&Global_1048577)
	{
		return true;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return true;
	}
	return false;
}

int func_605(int iParam0)
{
	if (!func_608(iParam0))
	{
		return -1;
	}
	return func_736(func_735(iParam0));
}

bool func_606(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_607(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_608(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_609(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_610(int iParam0)
{
	return func_71(iParam0, Global_1310750->f_16072 | 64);
}

int func_611(int iParam0)
{
	if (is_valid_interior(iParam0))
	{
		_get_interior_info(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1571304986:
			case -1342123354:
			case -1269216817:
			case -1212338017:
			case -803716508:
			case 768224943:
			case 1245139812:
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_612(int iParam0)
{
	if (is_valid_interior(iParam0))
	{
		_get_interior_info(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1946266312:
			case -1817199644:
			case -1604045519:
			case -857108408:
			case -431793961:
			case -17417813:
			case 37578405:
			case 459745161:
			case 653987431:
			case 1107105323:
			case 1135757916:
			case 1442115297:
			case 1548023642:
			case 1911907177:
				return 1;
		}
	}
	return 0;
}

bool func_613(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_614(int iParam0)
{
	return ((Global_1310750[iParam0] != 0 && !is_string_null_or_empty(&((*Global_1310750)[iParam0]->f_40))) && get_length_of_literal_string(&((*Global_1310750)[iParam0]->f_40)) != 0);
}

int func_615(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			iVar0 = 2;
			break;
		case 2:
			iVar0 = 4;
			break;
		case 3:
			iVar0 = 8;
			break;
		case 4:
			iVar0 = 16;
			break;
		case 5:
			iVar0 = 32;
			break;
		case 6:
			iVar0 = 512;
			break;
		default:
			return 0;
	}
	return iVar0;
}

bool func_616(int iParam0, int iParam1)
{
	return ((*Global_1392050)[iParam1]->f_1 && iParam0) != 0;
}

int func_617(int iParam0)
{
	if (func_490(iParam0, 0))
	{
		return Global_40.f_9571[iParam0]->f_2;
	}
	return -1;
}

void func_618()
{
	func_737(23);
}

void func_619(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

int func_620(var uParam0)
{
	if (uParam0->f_46 && uParam0->f_48)
	{
		if (uParam0->f_5.f_16 != 16384)
		{
			return 1;
		}
	}
	return 0;
}

void func_621(int iParam0)
{
	iVar0 = func_738(iParam0);
	if (iVar0 != 0)
	{
		func_739(-1, 24, 0, iVar0);
	}
}

void func_622(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17504.f_42[iParam0] == 0)
	{
		func_741(func_740(-1029789297), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0] = &Global_17504.f_42[iParam0] + 1;
	(*Global_1310750)[iParam0]->f_110 |= 8;
	if (func_71(iParam0, 2))
	{
		func_742(iParam0, func_575(iParam3));
	}
	if (func_71(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_577();
		}
		func_743(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_187(iParam0, 65536))
	{
		func_744(iParam0, iParam1);
		func_745(iParam0, func_228(iParam0, iParam1));
		func_619(128);
	}
	func_579(iParam0, (*Global_1310750)[iParam0]->f_37, 1065353216, 0, 0);
	func_580(iParam0, 1);
	if (!bParam2)
	{
		func_619(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_746(524288);
	}
	if (func_747(iParam0) != 0)
	{
		if (&Global_17504.f_42[iParam0] >= func_747(iParam0))
		{
			Global_17504.f_42[iParam0]->f_6 = 1;
		}
	}
}

void func_623(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_748(&Global_0, 8);
	}
	if (!func_749() || func_447() != -1)
	{
		return;
	}
	func_748(&Global_0, 1);
}

int func_624(int iParam0, bool bParam1)
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

void func_625(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0]->f_3++;
	(*Global_1310750)[iParam0]->f_110 |= 2;
}

bool func_626(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_105(vParam0))
	{
		return false;
	}
	iVar0[0] = iParam4;
	iVar5[0] = 16384;
	iVar5[1] = iParam5;
	if (_0x870e9981ed27c815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return true;
	}
	return false;
}

bool func_627(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_105(vParam0))
	{
		return false;
	}
	return _0x769bb7626b8cdb06(vParam0, fParam3, iParam5, iParam4, 16384);
}

bool func_628(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_105(*Global_1310750->f_16043[iVar0]))
		{
			if (func_113(vParam0, *Global_1310750->f_16043[iVar0]) < 2500f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_629()
{
	iVar0 = func_750(func_417());
	if (iVar0 == 8)
	{
		iVar1 = func_418(func_417());
		if (func_420(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_751(func_721(0)))
	{
		return false;
	}
	if (func_752())
	{
		return false;
	}
	if (is_player_riding_train(player_id()))
	{
		return false;
	}
	return true;
}

float func_630(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_631(var uParam0, var uParam1)
{
	vVar0 = { *uParam0 };
	if (func_753(&uParam1))
	{
		return 1;
	}
	if (!func_107(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_632(var uParam0)
{
	if (uParam0->f_3 != 41788943)
	{
		if (_is_metaped_outfit_request_valid(uParam0->f_5))
		{
			if (_0x610438375e5d1801(uParam0->f_5))
			{
				return true;
			}
		}
	}
	return false;
}

int func_633(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_754(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_634(var uParam0)
{
	return func_103(*uParam0, 4);
}

bool func_635(var uParam0)
{
	return func_103(*uParam0, 64);
}

bool func_636(var uParam0)
{
	return func_103(*uParam0, 8);
}

bool func_637(var uParam0)
{
	return func_103(*uParam0, 128);
}

bool func_638(var uParam0)
{
	return func_103(*uParam0, 2048);
}

void func_639(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 130, !bParam1);
	set_ped_config_flag(iParam0, 178, bParam1);
}

bool func_640(var uParam0)
{
	return func_103(*uParam0, 1024);
}

bool func_641(var uParam0)
{
	return func_103(*uParam0, 256);
}

void func_642(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 146, !bParam1);
	set_ped_config_flag(iParam0, 148, !bParam1);
}

bool func_643(var uParam0)
{
	return func_103(*uParam0, 512);
}

bool func_644(var uParam0)
{
	return func_103(*uParam0, 4096);
}

int func_645(int iParam0)
{
	switch (iParam0)
	{
		case -1273613561:
		case -776789570:
		case -763072541:
		case -486390692:
		case 50483426:
		case 215164947:
		case 247176142:
		case 347599949:
		case 852072701:
		case 861896523:
		case 1017000466:
		case 1245530084:
		case 1336863290:
		case 1485366395:
			return 0;
		case -969819655:
		case -628956517:
		case -355385988:
		case 300505615:
		case 466209020:
			return 2;
		case 363815774:
			return 1;
		case -1910990966:
		case -1421951598:
		case 1921874948:
			return 3;
		case -1090280091:
		case -1076294934:
			return 4;
		case -1011228908:
		case -1008616424:
		case 424175505:
			return 5;
	}
	return -1;
}

bool func_646(int iParam0)
{
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_unlocked(iVar0))
	{
		return true;
	}
	return false;
}

int func_647(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_35, iParam0, 0, false))
	{
		Var0 = { func_755(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_756((386 + iVar28), 1);
			if (func_757(iParam0, &Var0, iVar5, 0))
			{
				if (func_758(iParam0, &Var6, iVar5))
				{
					Var29 = { func_759(iParam0, Var0, iVar5, 0) };
					func_760(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_761(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_762(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_763(iParam0, iParam1);
					return 1;
				}
				if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}
}

void func_648(int iParam0, int iParam1, float fParam2)
{
	bVar0 = true;
	iVar1 = get_entity_model(iParam0);
	if (((((((*iParam1 == 383145463 || *iParam1 == -169598849) || *iParam1 == 600245965) || *iParam1 == 38266755) || *iParam1 == -510274983) || *iParam1 == 1252941818) || *iParam1 == 575725904) || *iParam1 == 1311933014)
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case -1273613561:
		case -776789570:
		case -763072541:
		case -486390692:
		case 50483426:
		case 215164947:
		case 247176142:
		case 347599949:
		case 852072701:
		case 861896523:
		case 1017000466:
		case 1245530084:
		case 1336863290:
		case 1485366395:
			*fParam2 = get_random_float_in_range(0.3f, 0.5f);
			break;
		case -969819655:
		case -628956517:
		case -355385988:
		case 300505615:
		case 466209020:
			*fParam2 = get_random_float_in_range(0.125f, 0.375f);
			break;
		case 363815774:
			*fParam2 = get_random_float_in_range(0.7f, 0.875f);
			break;
		case -1910990966:
		case -1421951598:
		case 1921874948:
			*fParam2 = get_random_float_in_range(0.4f, 0.6f);
			break;
		case -1090280091:
		case -1076294934:
			*fParam2 = get_random_float_in_range(0.125f, 0.25f);
			break;
		case -1011228908:
		case -1008616424:
		case 424175505:
			*fParam2 = get_random_float_in_range(0.3f, 0.5f);
			break;
		case -1208814201:
		case -390289284:
		case 1112571710:
		case 1478983280:
			*fParam2 = get_random_float_in_range(0.125f, 0.125f);
			break;
		default:
			*fParam2 = get_random_float_in_range(0.3f, 0.4f);
			if (get_ped_relationship_group_hash(iParam0) == 1030835986)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		set_ped_config_flag(iParam0, 361, true);
	}
}

bool func_649(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_650(int iParam0)
{
	if (!func_486(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_651(int iParam0, int iParam1)
{
	if (!func_486(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_764(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_765("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_766(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_589(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_767(iVar1);
				return true;
			}
			iVar3++;
		}
		func_767(iVar1);
	}
	return false;
}

int func_652(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_486(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_650(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_764(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_768(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_769(bParam2), iParam0, 0);
	return uVar2;
}

var func_653(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

bool func_654(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return false;
	}
	if (fParam2 > 25f)
	{
		return false;
	}
	if (iParam1 == Global_35)
	{
		if (is_ped_in_combat(Global_35, 0))
		{
			return false;
		}
	}
	return true;
}

int func_655(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_656(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_657()
{
	if (func_447() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

void func_658(int iParam0, int iParam1)
{
	decor_set_int(iParam0, "pedRoam_state", iParam1);
}

void func_659(int iParam0, int iParam1)
{
	decor_set_int(iParam0, "pedRoam_behavior", iParam1);
}

void func_660(int iParam0, int iParam1)
{
	decor_set_int(iParam0, "pedRoam_target", iParam1);
}

bool func_661(int iParam0)
{
	if (!is_itemset_valid(&Global_1396084))
	{
		return false;
	}
	iVar0 = get_itemset_size(&Global_1396084);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = get_indexed_item_in_itemset(iVar2, &Global_1396084);
		if (_does_item_have_valid_base(iVar1))
		{
			if (decor_exist_on(iVar1, "pedRoam_hashKey"))
			{
				if (decor_get_int(iVar1, "pedRoam_hashKey") == iParam0)
				{
					return true;
				}
			}
		}
		iVar2++;
	}
	return false;
}

bool func_662(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (does_entity_exist(iParam1) && !is_entity_dead(iParam1))
		{
			if (is_ped_in_vehicle(iParam0, iParam1, bParam2))
			{
				return true;
			}
		}
	}
	return false;
}

int func_663(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0) && !is_entity_dead(iParam1))
	{
		if (is_ped_sitting_in_vehicle(iParam0, iParam1))
		{
			if (get_ped_in_vehicle_seat(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (get_ped_in_vehicle_seat(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (get_ped_in_vehicle_seat(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (get_ped_in_vehicle_seat(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

void func_664(var uParam0)
{
	if (!func_34(*uParam0, 0, 0))
	{
		return;
	}
	set_ped_config_flag(*uParam0, 252, true);
	set_ped_config_flag(*uParam0, 255, true);
}

Vector3 func_665(int iParam0, bool bParam1)
{
	if (func_2(iParam0, 131072))
	{
		return func_770();
	}
	if (func_2(iParam0, 262144))
	{
		return func_771(bParam1);
	}
	return 0f, 0f, 0f;
}

int func_666(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_518(uParam0->f_6))
	{
		if (is_bit_set(*uParam0, 0))
		{
			if (!bParam2)
			{
				return 1;
			}
			if (func_772(uParam0->f_6, bParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_667(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_668(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_667(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_219(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			set_ped_reset_flag(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			set_ped_reset_flag(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_163(&(iParam1->f_13));
		}
		if (func_773(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_774(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_668(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_205(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_775(*uParam0, 1, 1);
						}
					}
					else if (func_776(iParam1, 22))
					{
						func_775(*uParam0, 0, 1);
					}
				}
				if (func_777(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_778(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_779(iParam8);
					if (func_780(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_781(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_782(iParam1, uParam3, fVar8);
					if (func_783(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_436(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_784(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_777(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_785(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_780(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_778(uParam0, func_777(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_779(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_436(uParam3, 0, 0, 1, 1);
					}
					func_786(iParam1, 1);
				}
				func_782(iParam1, uParam3, fVar8);
				if (func_784(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!is_bit_set(*iParam1, 3))
		{
			func_206(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_669(int* iParam0, var uParam1, var uParam2)
{
	iVar0 = func_787(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_284(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_670(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_447() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_671(int iParam0, bool bParam1)
{
	func_788(iParam0, &iVar0, &iVar1);
	if (!func_789(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_790(iVar0, iVar1);
}

void func_672(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (!decor_exist_on(iParam0, "loot_item_type1"))
	{
		decor_set_float(iParam0, "loot_item_offset1x", vParam1.x);
		decor_set_float(iParam0, "loot_item_offset1y", vParam1.y);
		decor_set_float(iParam0, "loot_item_offset1z", vParam1.z);
		decor_set_float(iParam0, "loot_item_orient1x", vParam4.x);
		decor_set_float(iParam0, "loot_item_orient1y", vParam4.y);
		decor_set_float(iParam0, "loot_item_orient1z", vParam4.z);
	}
	else if (!decor_exist_on(iParam0, "loot_item_type2"))
	{
		decor_set_float(iParam0, "loot_item_offset2x", vParam1.x);
		decor_set_float(iParam0, "loot_item_offset2y", vParam1.y);
		decor_set_float(iParam0, "loot_item_offset2z", vParam1.z);
		decor_set_float(iParam0, "loot_item_orient2x", vParam4.x);
		decor_set_float(iParam0, "loot_item_orient2y", vParam4.y);
		decor_set_float(iParam0, "loot_item_orient2z", vParam4.z);
	}
}

void func_673(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_488(iParam0);
		func_489(iParam0, iParam1, iParam2, iVar0);
	}
	else if (!decor_exist_on(iParam0, "loot_item_type1"))
	{
		decor_set_int(iParam0, "loot_item_type1", iParam1);
		decor_set_int(iParam0, "loot_item_amt1", iParam2);
		decor_set_int(iParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!decor_exist_on(iParam0, "loot_item_type2"))
	{
		decor_set_int(iParam0, "loot_item_type2", iParam1);
		decor_set_int(iParam0, "loot_item_amt2", iParam2);
		decor_set_int(iParam0, "loot_item_model2", iParam3);
		return;
	}
}

int func_674(int iParam0)
{
	return iParam0;
}

void func_675(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_676(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_791(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_677(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_678(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

void func_679(int iParam0)
{
	if (!func_792(iParam0))
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

bool func_680(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_681(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_793();
	if (Global_1935630->f_27)
	{
		Global_1935630->f_28 = get_game_timer();
	}
	if (is_weapon_valid(Global_1935630->f_44))
	{
		if (is_ped_shooting(Global_35))
		{
			if (get_current_ped_vehicle_weapon(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630->f_44;
			}
			Global_1935630->f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_794(&(Global_1935630->f_34), &(Global_1935630->f_39));
			Global_1935630->f_38 = iParam0;
			break;
		case 1:
			Global_1935630->f_30 = _0x72ad59f7b7fb6e24(player_id(), 4000);
			if (!Global_1935630->f_30)
			{
				if (Global_1935630->f_44 == 2055893578)
				{
					Global_1935630->f_30 = _get_lassoed_entity(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630->f_46)
			{
				case 2055893578:
					Global_1935630->f_25 = 0;
					break;
				default:
					if (is_weapon_valid(Global_1935630->f_46) && _0x5809dbca0a37c82b(Global_1935630->f_46))
					{
						Global_1935630->f_25 = _0x285d36c5c72b0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630->f_25 = _0x285d36c5c72b0569(Global_35) <= 1f;
					}
					if (Global_1935630->f_25)
					{
						Global_1935630->f_29 = get_frame_count();
					}
					break;
			}
			break;
		default:
			Global_1935630->f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_682(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_683(int iParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_447() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_795(iParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_795(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_710(iVar0) == -1)
	{
		return false;
	}
	if (!decor_exist_on(iVar0, "HorseScriptCreator") || decor_get_int(iVar0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return false;
	}
	iParam0->f_14 = iVar0;
	return true;
}

void func_684(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_796(iParam0);
	}
}

bool func_685(int iParam0, int iParam1)
{
	if (!_0xefc4303ddc6e60d3(iParam0))
	{
		return false;
	}
	*iParam1 = _0xed1f514af4732258(iParam0);
	if (!does_entity_exist(*iParam1))
	{
		return false;
	}
	if (is_ped_dead_or_dying(*iParam1, true))
	{
		return false;
	}
	if (!_0x2d64376cf437363e(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_686(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_797(iParam0, 1, 0, 0) != 2055893578)
	{
		return false;
	}
	if (is_ped_performing_melee_action(iParam0, 16, 0))
	{
		if (get_melee_target_for_ped(iParam0) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_687(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_688(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

float func_689(int iParam0)
{
	return iParam0->f_23;
}

int func_690(int iParam0)
{
	return iParam0->f_21;
}

float func_691(int iParam0)
{
	if (!*iParam0 & 1 != 0)
	{
		return func_200(iParam0);
	}
	if (_0x25ca89b2a39dcc69() > 0.833f)
	{
		return func_798(iParam0);
	}
	return func_200(iParam0);
}

float func_692(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_693()
{
	iVar0 = func_595(func_594());
	iVar1 = func_799(func_594());
	if (iVar0 >= 21)
	{
		return true;
	}
	else if (iVar0 < 5)
	{
		return true;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return true;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return true;
		}
	}
	return false;
}

bool func_694(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam2))
	{
		return false;
	}
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_ped_human(iParam2))
	{
		iVar1 = func_710(iParam2);
	}
	else
	{
		iVar1 = func_709(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_710(iParam0);
	}
	else
	{
		iVar0 = func_709(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_2(*iParam1, 8388608))
	{
		return true;
	}
	iVar2 = get_ped_relationship_group_hash(iParam0);
	iVar3 = get_ped_relationship_group_hash(iParam2);
	switch (iVar2)
	{
		case -1976316465:
		case -1505548114:
		case -350651841:
		case -50399569:
		case 106566339:
		case 707888648:
		case 841021282:
			switch (iVar3)
			{
				case -1976316465:
				case -1505548114:
				case -350651841:
				case 841021282:
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

float func_695(int iParam0)
{
	return iParam0->f_26;
}

bool func_696(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = player_ped_id();
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	iVar1 = get_player_index();
	if (is_player_dead(iVar1))
	{
		return false;
	}
	if (Global_1935630->f_44 == 2055893578 && Global_1935630->f_27)
	{
	}
	else if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, false, false))
	{
		if (is_entity_a_ped(iVar2) && iParam0 == get_ped_index_from_entity_index(iVar2))
		{
			return false;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		if (_get_rider_of_mount(Global_1935630->f_40, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_437(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (is_player_targetting_entity(iVar1, iParam0, bParam5) || is_player_free_aiming_at_entity(iVar1, iParam0))
	{
		if ((bParam1 && _0xcb690f680a3ea971(iVar0, 4)) || (bParam2 && _0xcb690f680a3ea971(iVar0, 2)))
		{
			return true;
		}
	}
	if (is_player_free_aiming(iVar1))
	{
		if (_is_weapon_sniper(func_308(iVar0, 0)))
		{
			if (func_800(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_697(int iParam0)
{
	return iParam0->f_17;
}

bool func_698(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_2(*iParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (_0x06087579e7aa85a9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*iParam0 & 32768 != 0)
	{
		if (has_entity_clear_los_to_entity(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_699(int iParam0)
{
	return iParam0->f_18;
}

bool func_700(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = player_ped_id();
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	iVar1 = get_player_index();
	if (is_player_dead(iVar1))
	{
		return false;
	}
	if (bParam3)
	{
	}
	if (is_player_targetting_entity(iVar1, iParam0, false) || is_player_free_aiming_at_entity(iVar1, iParam0))
	{
		if ((bParam1 && _0xcb690f680a3ea971(iVar0, 4)) || (bParam2 && _0xcb690f680a3ea971(iVar0, 2)))
		{
			return true;
		}
	}
	if (is_player_free_aiming(iVar1))
	{
		if (_is_weapon_sniper(func_308(iVar0, 0)))
		{
			if (func_801(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_701(int iParam0)
{
	switch (iParam0->f_7)
	{
		case 0:
			switch (iParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (iParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (iParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (iParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (iParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*iParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_702(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_680(iParam0, vParam4, 0.5f))
	{
		if (_0x0c9dbf48c6ba6e4c(iParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (vdist(vParam1, vParam4) < 5f)
	{
		return true;
	}
	return false;
}

int func_703(int iParam0)
{
	if (get_ped_config_flag(iParam0, 9, false))
	{
		if (Global_1935630->f_44 == -1569615261)
		{
			return 1;
		}
		if (is_weapon_valid(Global_1935630->f_46))
		{
			if (_is_weapon_melee(Global_1935630->f_46) || _is_weapon_bow(Global_1935630->f_46))
			{
				return 1;
			}
		}
	}
	if (func_802(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_704(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	if (_is_this_model_a_horse(iVar0))
	{
		return true;
	}
	return false;
}

bool func_705(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_412(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_706(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_412(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_707(int iParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_412(iParam1))
	{
		return false;
	}
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = _0x2ba9d7bf629f920c(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (has_entity_clear_los_to_entity(iParam1, &(Global_1935630->f_34[iParam3]), 17))
		{
			if (_0x06087579e7aa85a9(iParam1, &(Global_1935630->f_34[iParam3]), -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_708(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_109(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_709(int iParam0)
{
	if (!does_entity_belong_to_this_script(iParam0, true))
	{
		return -1;
	}
	if (decor_exist_on(iParam0, "HorseOwnerTeamA") && decor_get_bool(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (decor_exist_on(iParam0, "HorseOwnerTeamB") && decor_get_bool(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_710(int iParam0)
{
	if (!decor_exist_on(iParam0, "HorseScriptCreator") || decor_get_int(iParam0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return -1;
	}
	if (decor_exist_on(iParam0, "HorseTeamA") && decor_get_bool(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (decor_exist_on(iParam0, "HorseTeamB") && decor_get_bool(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_711(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	if (Global_1935630->f_40 != 0)
	{
		bVar0 = true;
	}
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam1, player_ped_id(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (has_entity_been_damaged_by_entity(iParam0, Global_1935630->f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (_0x947e43f544b6ab34(iParam0, get_player_index(), 10, 400))
		{
			if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
		if (_0x947e43f544b6ab34(iParam0, get_player_index(), 11, 400))
		{
			if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_685(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (is_ped_ragdoll(iParam0) || (!bParam2 && is_entity_touching_entity(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (_0x29fce825613fefca(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_437(iParam0, player_ped_id(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (is_entity_touching_entity(player_ped_id(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_437(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
		{
			if (is_entity_touching_entity(Global_1935630->f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (is_ped_ragdoll(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_712(int iParam0, int iParam1, bool bParam2)
{
	func_603(1, &iVar0, &iVar1);
	if (!does_entity_exist(iVar0) && !does_entity_exist(iVar1))
	{
		return false;
	}
	if (does_entity_exist(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (has_entity_clear_los_to_entity(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_713(iParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (does_entity_exist(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_713(iParam1, iVar1))
				{
					if (func_109(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_713(int iParam0, int iParam1)
{
	if (decor_exist_on(iParam1, "bIsCriminal") && decor_get_bool(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (get_ped_config_flag(iParam1, 4, false))
	{
		return true;
	}
	iVar0 = get_ped_relationship_group_default_hash(iParam1);
	switch (iVar0)
	{
		case -1996978098:
		case -1448293989:
		case -350226955:
		case 266218800:
		case 555364152:
		case 1078461828:
		case 1222652248:
			return true;
		default:
			break;
	}
	return false;
}

int func_714(int iParam0)
{
	if (func_657())
	{
		return 0;
	}
	return func_803((*Global_1347702)[58]->f_15, 1);
}

int func_715(int iParam0)
{
	return iParam0->f_20;
}

int func_716(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (iParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = iParam1->f_12;
	}
	if (is_ped_facing_ped(iParam0, Global_35, 90f))
	{
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (is_entity_touching_entity(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

bool func_717(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

int func_718(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_804(iParam0, vVar0, iParam2);
}

int func_719(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return &(iLocal_35[2]);
		case 1:
			return &(iLocal_35[3]);
		case 2:
			return &(iLocal_35[0]);
		case 3:
			return &(iLocal_35[1]);
		default:
			break;
	}
	return 0;
}

Vector3 func_720(int iParam0)
{
	return _get_object_offset_from_coords(get_entity_coords(iParam0, true, false), get_entity_heading(iParam0), 0f, 1f, 0f);
}

int func_721(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = func_805(1, 0, 0);
	}
	else
	{
		iVar0 = func_417();
	}
	return func_722(iVar0);
}

int func_722(int iParam0)
{
	switch (iParam0)
	{
		case 40:
			return 1;
		case 78:
			return 2;
		case 37:
			return 4;
		case 38:
			return 8;
		case 93:
			return 16;
		case 82:
			return 32;
		case 95:
			return 64;
		case 65:
			return 128;
		case 68:
			return 256;
		case 69:
			return 512;
		case 3:
			return 1024;
		case 61:
			return 2048;
		case 110:
			return 4096;
		case 5:
			return 8192;
		case 35:
			return 16384;
		case 22:
			return 32768;
		case 105:
			return 65536;
		case 8:
			return 131072;
		case 32:
			return 262144;
		case 26:
			return 524288;
		case 115:
			return 1048576;
		case 76:
			return 2097152;
		case 92:
			return 4194304;
		case 56:
			return 8388608;
		case 120:
			return 16777216;
		default:
			break;
	}
	return 0;
}

int func_723(int iParam0)
{
	iVar0 = 0;
	iVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = shift_right(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

int func_724(int iParam0, int iParam1)
{
	iVar0 = &Global_1326862->f_512[iParam1];
	iVar1 = &Global_1326862->f_558[iParam1];
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (iParam0 == &Global_1326862->f_11[iVar2])
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

void func_725(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_453(Global_1310750[iVar0], iParam0))
		{
			if (!func_445(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_806(iVar0) < func_807(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_579(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_726(int iParam0)
{
	iVar0 = func_808(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_727(int iParam0)
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

void func_728(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_729()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_809(iVar0, 128))
		{
			func_810(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_730()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_809(iVar0, 128) && func_809(iVar0, 1))
		{
			func_810(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_731(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

void func_732()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_71(iVar0, 16777216))
		{
			if (!func_811(iVar0))
			{
				func_812(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_733(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_446(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_446(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_446(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_446(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_446(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_446(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_734(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_378();
	fVar1 = (Global_1393447->f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447->f_60 = (fVar0 + fParam0);
	}
}

int func_735(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12106[iParam0]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0]);
}

int func_736(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

void func_737(int iParam0)
{
	if (func_447() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_183(func_813(iVar0), 0))
		{
			if (is_ped_group_member(func_813(iVar0), func_472(), 1))
			{
				func_814(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_738(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		case 60:
			return 37;
		case 97:
			return 26;
		default:
			break;
	}
	return 0;
}

void func_739(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		iParam3 = Global_1415419->f_19[iParam0]->f_5;
	}
	if (iParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 248)
		{
			if (Global_1415419->f_19[iVar0]->f_5 == iParam3)
			{
				if (iVar0 != iParam0)
				{
					if (func_815() > Global_32074.f_2697.f_6[iVar0]->f_5)
					{
						Global_32074.f_2697.f_6[iVar0]->f_5 = func_815();
					}
					func_816(&(Global_32074.f_2697.f_6[iVar0]->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_50(&(Global_1415419->f_19[iVar0]->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

struct<2> func_740(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_741(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_742(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_723(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_724(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2]->f_1++;
	}
}

void func_743(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_187(iParam0, 8192))
	{
		iVar0 = func_724(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0]->f_1++;
	}
}

void func_744(int iParam0, int iParam1)
{
	iVar0 = (func_449(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_17504.f_12[iVar1], iVar2);
}

void func_745(int iParam0, vector3 vParam1)
{
	if (func_71(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_105(vParam1))
	{
		return;
	}
	if (!func_242(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { *Global_17504.f_2084[iVar0] };
		if (func_105(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0]->f_3 == iParam0)
		{
			if (func_463(vVar2, vParam1, 1f, 1))
			{
				return;
			}
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		*Global_17504.f_2084[iVar1] = { vParam1 };
		Global_17504.f_2084[iVar1]->f_3 = iParam0;
		Global_17504.f_2084[iVar1]->f_4 = (*Global_1310750)[iParam0]->f_62;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_17504.f_2084)
		{
			if (iVar0 + 1 >= 24)
			{
				*Global_17504.f_2084[iVar0] = { vParam1 };
				Global_17504.f_2084[iVar0]->f_3 = iParam0;
				Global_17504.f_2084[iVar0]->f_4 = (*Global_1310750)[iParam0]->f_62;
			}
			else
			{
				*Global_17504.f_2084[iVar0] = { *(Global_17504.f_2084[iVar0 + 1]) };
			}
			iVar0++;
		}
	}
}

void func_746(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_812(iVar0, iParam0);
		iVar0++;
	}
}

int func_747(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 2;
		case 75:
			return 1;
		case 76:
			return 1;
		case 4:
			return 2;
		case 77:
			return 2;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 2;
		case 78:
			return 2;
		case 8:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 3;
		case 13:
			return 2;
		case 14:
			return 2;
		case 15:
			return 5;
		case 16:
			return 1;
		case 17:
			return 2;
		case 18:
			return 2;
		case 91:
			return 1;
		case 19:
			return 1;
		case 20:
			return 3;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 3;
		case 94:
			return 8;
		case 24:
			return 3;
		case 119:
			return 4;
		case 27:
			return 6;
		case 28:
			return 2;
		case 29:
			return 2;
		case 30:
			return 4;
		case 31:
			return 3;
		case 32:
			return 1;
		case 33:
			return 2;
		case 34:
			return 1;
		case 35:
			return 1;
		case 96:
			return 4;
		case 36:
			return 3;
		case 37:
			return 4;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 4;
		case 41:
			return 3;
		case 42:
			return 2;
		case 99:
			return 2;
		case 44:
			return 3;
		case 43:
			return 4;
		case 45:
			return 4;
		case 46:
			return 2;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 1;
		case 50:
			return 9;
		case 51:
			return 2;
		case 52:
			return 2;
		case 53:
			return 2;
		case 54:
			return 2;
		case 56:
			return 3;
		case 57:
			return 8;
		case 58:
			return 2;
		case 59:
			return 2;
		case 60:
			return 2;
		case 61:
			return 1;
		case 62:
			return 3;
		case 63:
			return 3;
		case 64:
			return 3;
		case 65:
			return 2;
		case 66:
			return 3;
		case 67:
			return 1;
		case 68:
			return 2;
		case 69:
			return 1;
		case 70:
			return 2;
		case 71:
			return 2;
		case 72:
			return 3;
		case 73:
			return 3;
		case 74:
			return 1;
		case 79:
			return 4;
		case 80:
			return 2;
		case 81:
			return 4;
		case 82:
			return 4;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 3;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 92:
			return 2;
		case 93:
			return 1;
		case 95:
			return 1;
		case 97:
			return 2;
		case 98:
			return 3;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 106:
			return 9;
		case 107:
			return 2;
		case 108:
			return 5;
		case 109:
			return 2;
		case 110:
			return 1;
		case 111:
			return 7;
		case 112:
			return 1;
		case 113:
			return 3;
		case 114:
			return 4;
		case 115:
			return 2;
		case 117:
			return 2;
		case 116:
			return 1;
		case 118:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_748(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_749()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_750(int iParam0)
{
	if (!func_613(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

bool func_751(int iParam0)
{
	return (Global_1310750->f_16074 && iParam0) != 0;
}

bool func_752()
{
	return Global_1894899 & 2 != 0;
}

bool func_753(var uParam0)
{
	return func_103(*uParam0, 1);
}

void func_754(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_817(iParam1))
		{
			func_818(iParam0, 41788943);
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
			func_819(iParam0, 0, 1);
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
			func_820(iParam0, 0);
			bVar0 = true;
		}
		func_821(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

struct<5> func_755(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_822(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_650(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_759(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_823(bParam1) };
			if (bParam2 && func_824(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_757(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_757(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_758(iParam0, &Var5, 1728382685))
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
			Var0 = { func_825(bParam1) };
			switch (func_826(iParam0))
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
			if (func_827(iParam0, -1823706425))
			{
				Var0 = { func_759(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_827(iParam0, -1483207246))
			{
				Var0 = { func_759(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_828(Var0, &Var27, bParam1, 0))
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

int func_756(int iParam0, int iParam1)
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

bool func_757(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_829(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_758(int iParam0, var uParam1, int iParam2)
{
	if (func_830(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_759(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_486(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_769(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_760(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_831(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_828(*uParam1, &Var0, bParam6, 0))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_761(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_769(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_761(bool bParam0)
{
	if (func_447() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_769(bParam0));
}

int func_762(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_832(iParam0))
	{
		return 0;
	}
	if (!func_761(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_763(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_493(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

int func_764(int iParam0, int iParam1)
{
	if (!func_486(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_650(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_487(iParam0, 1399091007))
	{
		func_833(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_765(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_769(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_766(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!_0x82fa24c3d3fcd9b7(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

int func_767(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!_0x42a2f33a1942e865(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_768(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_834(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_835(&Var0, func_823(0));
	}
	if (!func_836(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_767(iVar14);
	return uVar15;
}

int func_769(bool bParam0)
{
	if (func_447() == -1)
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

Vector3 func_770()
{
	switch (iVar784)
	{
		case 0:
			return 1840.723f, -383.8766f, 42.28694f;
		case 1:
			return 1317.383f, -1645.26f, 65.98895f;
		case 2:
			return 777.8688f, -907.4637f, 50.04131f;
		case 3:
			return 865.792f, -533.5311f, 88.01648f;
		case 4:
			return 1391.055f, -1697.967f, 66.39729f;
		case 5:
			return 1565.515f, -1162.214f, 44.4227f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_771(bool bParam0)
{
	if (bParam0)
	{
		switch (iVar783)
		{
			case 0:
				return 1844.086f, -379.4138f, 42.30054f;
			case 1:
				return 1313.056f, -1642.984f, 65.99541f;
			case 2:
				return 779.8592f, -902.8204f, 50.11404f;
			case 3:
				return 862.6526f, -537.3989f, 88.02016f;
			case 4:
				return 1386.838f, -1701.266f, 66.62038f;
			case 5:
				return 1571.346f, -1163.179f, 44.60621f;
			default:
				break;
		}
	}
	switch (iVar783)
	{
		case 0:
			return 1841.088f, -379.9351f, 42.30015f;
		case 1:
			return 1313.127f, -1645.996f, 65.99552f;
		case 2:
			return 777.3195f, -903.2181f, 50.04406f;
		case 3:
			return 865.1678f, -537.7794f, 87.93773f;
		case 4:
			return 1390.038f, -1701.856f, 66.50535f;
		case 5:
			return 1569.393f, -1161.886f, 44.47321f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_772(int iParam0, bool bParam1)
{
	if (bParam1 && !func_518(iParam0))
	{
		return false;
	}
	return !func_791(iParam0, 4);
}

bool func_773(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_837(iParam0, iParam1))
		{
			if (!func_2(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_436(uParam2, 0, 0, 1, 0);
				func_51(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_2(iParam1->f_10, 1))
		{
			func_838(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_50(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_774(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_2(iParam4, 32);
		func_435(iParam1, uParam2, 0);
		iVar5 = func_839(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_436(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_2(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_2(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_2(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_2(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_2(iParam4, 8388608) || func_2(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_2(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_2(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_776(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_776(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_2(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (_0x870708a6e147a9ad(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_840(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!is_string_null_or_empty(&cVar0))
						{
							iParam6 = get_hash_key(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, iParam6);
				}
				if (!is_string_null_or_empty(sParam5) && iParam6 == 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, get_hash_key(sParam5));
				}
				else if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, iParam6);
				}
			}
			set_ped_config_flag(*uParam0, 130, true);
			set_ped_config_flag(*uParam0, 178, false);
			set_ped_config_flag(*uParam0, 297, true);
			set_ped_config_flag(*uParam0, 301, false);
			if (func_2(iParam4, 268435456))
			{
				iVar8 = func_841(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_842(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_776(iParam1, 23))
			{
				set_ped_config_flag(*uParam0, 315, false);
				set_ped_config_flag(*uParam0, 331, false);
				set_ped_config_flag(*uParam0, 493, true);
			}
			else
			{
				set_ped_config_flag(*uParam0, 315, true);
				set_ped_config_flag(*uParam0, 493, false);
			}
			if (func_2(iParam4, 2) || func_2(iParam4, 16))
			{
				func_775(*uParam0, 1, 1);
			}
			else
			{
				func_775(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_775(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_776(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_777(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bVar0 = (!_does_volume_exist(iParam2) || is_entity_in_volume(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (func_843(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_778(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	if (bParam1)
	{
		if (!is_bit_set(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					set_bit((*uParam4)[iVar0], 14);
					iVar0++;
				}
			}
			func_844(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_2(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_779(int iParam0)
{
	if (func_2(iParam0, 4))
	{
		disable_control_action(0, -128997553, true);
		disable_control_action(0, 130948705, true);
		disable_control_action(0, 42190210, true);
		disable_control_action(0, 1632043089, true);
		disable_control_action(0, 1623727326, true);
		disable_control_action(0, -922478227, true);
		disable_control_action(0, -674562833, true);
		disable_control_action(0, -197984200, true);
		disable_control_action(0, -238861894, true);
	}
	if (func_2(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_2(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_780(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_845(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_846(Global_35)) || func_847(Global_35)) || func_848(Global_35));
	fVar12 = -1f;
	if (func_158(&(iParam1->f_13)))
	{
		fVar12 = func_159(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_518((*uParam4)[iVar0]->f_6);
		func_849(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_850(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_851(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_436(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_138(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_435(iParam1, uParam4, is_bit_set(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = is_bit_set(uParam4[iParam1->f_1], 16);
					if (!iParam1->f_9)
					{
						set_bit(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!is_string_null_or_empty((*uParam4)[iVar0]->f_11))
						{
							if (!is_string_null_or_empty((*uParam4)[iVar0]->f_12))
							{
								task_play_anim(Global_35, (*uParam4)[iVar0]->f_11, (*uParam4)[iVar0]->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (func_852(iParam1, fParam6, iParam1->f_9))
					{
						func_163(&(iParam1->f_18));
						if (bVar6)
						{
							func_138(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_853(iParam1, fParam2);
	}
	return bVar5;
}

void func_781(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (is_bit_set(uParam0[iVar0], 20))
		{
			if (!is_bit_set(uParam0[iVar0], 21))
			{
				clear_bit((*uParam0)[iVar0], 20);
				clear_bit((*uParam0)[iVar0], 21);
			}
		}
		iVar0++;
	}
}

void func_782(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_854((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_853(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_783(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_855(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_856(iParam1, 0);
				func_435(iParam1, uParam2, func_776(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_784(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		set_bit(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_163(&(iParam1->f_18));
			return false;
		}
		else if (func_158(&(iParam1->f_18)))
		{
			func_167(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_158(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35))
		{
			return false;
		}
	}
	return func_168(&(iParam1->f_18), fParam2);
	return true;
}

void func_785(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_849(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_786(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_787(int* iParam0)
{
	if (func_776(iParam0, 0))
	{
		if (func_656(iParam0))
		{
			func_786(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_788(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_789(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_857(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_858(iParam0))
	{
		return false;
	}
	if (func_859(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_860(iParam0, 1)) || func_861(32768))
	{
		if (!func_860(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_862())
	{
		return false;
	}
	return true;
}

void func_790(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_791(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_792(int iParam0)
{
	return func_791(iParam0, 2);
}

bool func_793()
{
	if (func_863())
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_1935630->f_44 == 2055893578)
		{
			return is_control_pressed(0, 130948705);
		}
		return get_ped_reset_flag(Global_35, 311);
	}
	else
	{
		return &(Global_1955569->f_992[2]);
	}
	return false;
}

void func_794(var uParam0, var uParam1)
{
	iVar2 = player_id();
	if (!_0x72ad59f7b7fb6e24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (_0x1a6e84f13c952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!does_entity_exist(uParam0[iVar1]))
			{
			}
			else if (!is_ped_human(uParam0[iVar1]) && !(decor_exist_on(uParam0[iVar1], "HorseTeamA") || decor_exist_on(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (decor_exist_on(uParam0[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

int func_795(int iParam0)
{
	if (iVar0 == 0)
	{
		if (is_control_just_pressed(0, -171675621))
		{
			if (_0x3ee1f7a8c32f24e1(player_id(), &iVar1, false, false))
			{
				if (does_entity_exist(iVar1))
				{
					if (is_entity_a_ped(iVar1))
					{
						if (_is_this_model_a_horse(get_entity_model(iVar1)))
						{
							iVar0 = get_ped_index_from_entity_index(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (iParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630->f_12)
			{
				iVar0 = _0x4b19f171450e0d4f(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = _get_lassoed_entity(Global_35);
		}
		if (iVar0 != 0)
		{
			if (does_entity_exist(iVar0))
			{
				if (!_is_this_model_a_horse(get_entity_model(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_796(int iParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_50(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_51(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

int func_797(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	iVar0 = -1569615261;
	if (is_entity_dead(iParam0) || !is_ped_human(iParam0))
	{
		return iVar0;
	}
	if (get_current_ped_weapon(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

var func_798(int iParam0)
{
	return iParam0->f_25;
}

int func_799(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

bool func_800(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_801(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_801(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	bVar2 = get_hud_screen_position_from_world_position(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

bool func_802(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !is_entity_dead(iParam0))
	{
		if (_0x9e2d5d6bc97a5f1e(iParam0, -1569615261, iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (is_weapon_valid(Global_1935630->f_44))
			{
				if (_is_weapon_melee(Global_1935630->f_44) || Global_1935630->f_44 == -618550132)
				{
					if (_0x9e2d5d6bc97a5f1e(iParam0, Global_1935630->f_44, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_803(int iParam0, bool bParam1)
{
	switch (func_864(iParam0))
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

int func_804(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_865(vVar3, vVar6);
	if (absf(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_564(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_805(int iParam0, bool bParam1, bool bParam2)
{
	fVar0 = 999999.9f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 150)
	{
		if ((*Global_1888801)[iVar2]->f_20 == iParam0)
		{
			if (!(bParam2 && iVar2 == Global_1894899->f_2))
			{
				if (!bParam1 || func_866(iVar2))
				{
					vVar3 = { _0xf70f00013a62f866((*Global_1888801)[iVar2]->f_3) };
					fVar6 = vdist(vVar3, Global_36);
					if (fVar6 < fVar0)
					{
						iVar1 = iVar2;
						fVar0 = fVar6;
					}
				}
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_806(int iParam0)
{
	if (func_242(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_807(int iParam0)
{
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = round((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

int func_808(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case 747514327:
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_809(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_810(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

bool func_811(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return true;
		default:
			break;
	}
	return false;
}

void func_812(int iParam0, int iParam1)
{
	if (!func_242(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

int func_813(int iParam0)
{
	if (!func_867(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_814(int iParam0, int iParam1)
{
	if (!func_868(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0];
	if (does_entity_exist(iVar0))
	{
		if (!is_entity_dead(iVar0))
		{
			decor_set_int(iVar0, "companion_manager_command", iParam1);
		}
	}
}

int func_815()
{
	return &Global_1899515;
}

void func_816(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_869(*uParam0);
	iVar1 = func_870(*uParam0);
	iVar2 = func_871(*uParam0);
	iVar3 = func_595(*uParam0);
	iVar4 = func_799(*uParam0);
	iVar5 = func_872(*uParam0);
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
	iVar6 = func_873(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_873(iVar1, iVar0);
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
	func_874(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_817(int iParam0)
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

void func_818(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_875(iParam0, iParam1))
		{
			if (func_876(iParam0, iParam1))
			{
				if (func_877(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_878(iParam0);
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

void func_819(int iParam0, int iParam1, bool bParam2)
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

void func_820(int iParam0, bool bParam1)
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

void func_821(int iParam0, int iParam1)
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

struct<4> func_822(bool bParam0)
{
	return func_759(1328661203, func_879(), -1591664384, bParam0);
}

struct<4> func_823(bool bParam0)
{
	iVar0 = func_769(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_759(923904168, func_822(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_759(923904168, func_822(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_759(923904168, func_822(bParam0), -740156546, 0);
}

bool func_824(int iParam0, bool bParam1)
{
	if (func_826(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_880(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_825(bool bParam0)
{
	iVar0 = func_769(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_759(271701509, func_822(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_759(271701509, func_822(bParam0), 12999093, 0);
}

int func_826(int iParam0)
{
	if (!func_486(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_827(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_826(iParam0);
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

bool func_828(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_769(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_829(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_486(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_759(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_769(bParam6), &Var0, 0);
	return uVar4;
}

bool func_830(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_769(0);
	*uParam1 = { func_759(iParam0, func_823(0), iParam3, 0) };
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

bool func_831(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_832(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

void func_833(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*uParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		case -1202134084:
			*uParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		case 1297050066:
			*uParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		case -1780177928:
			*uParam1 = -1803237008;
			*uParam2 = -2084181920;
			break;
		case -1467836497:
			*uParam1 = -1175521284;
			*uParam2 = 1950175060;
			break;
		case 1723805622:
			*uParam1 = -1559549888;
			*uParam2 = 1950175060;
			break;
		case -153287664:
			*uParam1 = -1650796693;
			*uParam2 = 836939099;
			break;
		case 1845082736:
			*uParam1 = -1521597660;
			*uParam2 = -1411815376;
			break;
		case 406755377:
			*uParam1 = -1288829256;
			*uParam2 = 218444191;
			break;
		case 1469029564:
			*uParam1 = 1393841762;
			*uParam2 = 218444191;
			break;
		case 45760211:
			*uParam1 = -851229814;
			*uParam2 = 1654725195;
			break;
		case -276295943:
			*uParam1 = 914704115;
			*uParam2 = 1858824185;
			break;
		case -2029793397:
			*uParam1 = -219896679;
			*uParam2 = -1330115686;
			break;
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686;
			break;
		case -2075613923:
			*uParam1 = -385817936;
			*uParam2 = -578347576;
			break;
		case 122656217:
			*uParam1 = 1192843172;
			*uParam2 = 231465488;
			break;
		case 2107187484:
			*uParam1 = 954871696;
			*uParam2 = -1878508229;
			break;
		case -791844268:
			*uParam1 = -1217273132;
			*uParam2 = -1878508229;
			break;
		case 305770744:
			*uParam1 = -2087227528;
			*uParam2 = 314966081;
			break;
		case 550900979:
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

struct<14> func_834(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
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
	return Var0;
}

void func_835(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_836(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_769(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_837(int iParam0, int* iParam1)
{
	if (iParam1->f_11 & 1 != 0)
	{
		if (_is_ped_lassoed(iParam0))
		{
			return true;
		}
	}
	if (iParam1->f_11 & 2 != 0)
	{
		if (_is_ped_hogtied(iParam0))
		{
			return true;
		}
	}
	bVar0 = iParam1->f_11 & 4 != false;
	bVar1 = iParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (is_ped_in_combat(iParam0, func_881((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_838(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_854((*uParam0)[iVar0]))
		{
			func_524((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_839(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_882(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_518((*uParam2)[iVar0]->f_6))
		{
			func_524((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_840(var uParam0)
{
	iVar0 = func_357(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337;
			break;
		case 1:
			iVar1 = 768137552;
			break;
		case 0:
			iVar1 = 1415388528;
			break;
		case 4:
			iVar1 = 1449436544;
			break;
		case 3:
			iVar1 = -1807204482;
			break;
		case 5:
			iVar1 = -1096701282;
			break;
	}
	return iVar1;
}

int func_841(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_842(int* iParam0, int* iParam1)
{
	if (!func_776(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_524(iParam1, 19);
			func_856(iParam0, 23);
			func_883(iParam1, 2);
		}
	}
}

bool func_843(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_884(16))
	{
		return Global_1935630->f_58 == iParam0;
	}
	if (!is_entity_dead(get_player_ped(player_id())))
	{
		if (_0x3ee1f7a8c32f24e1(player_id(), &iVar0, bParam2, bParam3))
		{
			if (does_entity_exist(iVar0))
			{
				if (is_entity_a_ped(iVar0))
				{
					func_885(16);
					Global_1935630->f_58 = get_ped_index_from_entity_index(iVar0);
					if (Global_1935630->f_58 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_844(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_882(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_845(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_846(int iParam0)
{
	return (func_886(iParam0, 4) || func_886(iParam0, 5));
}

int func_847(int iParam0)
{
	return func_886(iParam0, 7);
}

int func_848(int iParam0)
{
	return func_886(iParam0, 6);
}

void func_849(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_854(iParam1))
		{
			clear_bit(iParam1, 14);
			func_882(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_850(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_887(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_772(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_521(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_521(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_888(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_851(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_889(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_890(iParam1, 1))
	{
		func_891(iParam1, 1);
		return true;
	}
	return false;
}

bool func_852(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0f)
		{
			return true;
		}
	}
	return false;
}

void func_853(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_854(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_855(int iParam0)
{
	iVar1 = get_number_of_events(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (get_event_at_index(0, iVar0))
			{
				case 1387172233:
					if (get_event_data(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (is_entity_a_ped(vVar3.z))
								{
									if (iParam0 == get_ped_index_from_entity_index(vVar3.z))
									{
										return true;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return false;
}

void func_856(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_857(int iParam0, int iParam1)
{
	if (func_447() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_858(int iParam0)
{
	if (func_447() != -1)
	{
		if (func_860(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_860(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_859(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_860(iParam0, 65536) && !func_860(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_860(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_860(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_860(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_861(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_862()
{
	return Global_1905944->f_5694;
}

bool func_863()
{
	switch (Global_1935630->f_44)
	{
		case -164645981:
		case -160924582:
		case 827679807:
		case 1247405313:
			return true;
		default:
			break;
	}
	return false;
}

int func_864(int iParam0)
{
	if (!func_608(iParam0))
	{
		return -1;
	}
	return func_892(iParam0);
}

float func_865(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = vmag(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_866(int iParam0)
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

bool func_867(int iParam0)
{
	return iParam0 > -1;
}

bool func_868(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_869(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_655(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_870(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_871(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_872(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_873(int iParam0, int iParam1)
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

void func_874(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_893(uParam0, iParam6);
	func_894(uParam0, iParam5);
	func_895(uParam0, iParam4);
	func_896(uParam0, iParam3);
	func_897(uParam0, iParam2);
	func_898(uParam0, iParam1);
}

bool func_875(int iParam0, int iParam1)
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

bool func_876(int iParam0, int iParam1)
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

bool func_877(int iParam0, int iParam1)
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
	if (!func_875(iParam0, iVar0))
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

void func_878(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

struct<4> func_879()
{
	return Var0;
}

bool func_880(int iParam0)
{
	if (!func_899(iParam0))
	{
		return false;
	}
	return func_900(iParam0);
}

int func_881(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_882(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_518(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_526(&(iParam1->f_6), 0, 1);
	}
	if (!func_518(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_854(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_901(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_518(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_888(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_902(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_903(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_519(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_902(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_521(iParam1->f_6, 0, 1);
				}
				else
				{
					func_521(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_883(int* iParam0, int iParam1)
{
	if (!func_523(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_524(iParam0, 14);
		}
	}
}

bool func_884(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_885(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_886(int iParam0, int iParam1)
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

bool func_887(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bVar0 = (is_bit_set(*iParam1, 0) && !is_bit_set(*iParam1, 4));
	if (is_bit_set(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (is_bit_set(*iParam1, 20))
		{
			if (!is_bit_set(*iParam0, 25))
			{
				set_bit(iParam0, 24);
			}
			return true;
		}
	}
	if (is_bit_set(*iParam1, 9))
	{
		clear_bit(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (is_bit_set(*iParam1, 6))
		{
			return true;
		}
	}
	else if (is_bit_set(*iParam1, 5))
	{
		return true;
	}
	if (is_bit_set(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!is_bit_set(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!is_bit_set(*iParam1, 18))
	{
		if (is_bit_set(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!is_bit_set(*iParam1, 2))
	{
		if (is_bit_set(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

void func_888(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_518(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_674(iParam0);
	func_902(iParam0, 18, 0, 1);
	func_902(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_889(int iParam0, bool bParam1)
{
	if (bParam1 && !func_518(iParam0))
	{
		return false;
	}
	iVar0 = func_674(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_890(int iParam0, bool bParam1)
{
	if (bParam1 && !func_518(iParam0))
	{
		return false;
	}
	iVar0 = func_674(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_891(int iParam0, bool bParam1)
{
	if (bParam1 && !func_518(iParam0))
	{
		return;
	}
	iVar0 = func_674(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

int func_892(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_904(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

void func_893(var uParam0, int iParam1)
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

void func_894(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || shift_left(iParam1, 22));
}

void func_895(var uParam0, int iParam1)
{
	iVar0 = func_870(*uParam0);
	iVar1 = func_869(*uParam0);
	if (iParam1 < 1 || iParam1 > func_873(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || shift_left(iParam1, 17));
}

void func_896(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || shift_left(iParam1, 12));
}

void func_897(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || shift_left(iParam1, 6));
}

void func_898(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || shift_left(iParam1, 0));
}

bool func_899(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_900(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_901(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_791(iVar0, 2))
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
				func_905(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_902(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_518(iParam0))
	{
		return;
	}
	iVar0 = func_674(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_903(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_518(iParam0))
	{
		return;
	}
	iVar0 = func_674(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

int func_904(int iParam0)
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

void func_905(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
			_uiprompt_set_hold_auto_fill_mode(iVar0, iParam16, uParam15);
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
	func_676(iParam0, 1);
	func_677(iParam0, 1);
	func_678(iParam0, 128);
}

