void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_603 = -1;
	iLocal_604 = -1;
	iLocal_606 = -1;
	iLocal_607 = -1;
	iLocal_610 = -1;
	iLocal_614 = -1;
	fLocal_620 = 0f;
	fLocal_621 = 0f;
	if (func_1(iVar1867) || iVar1867 == 14)
	{
		Local_718 = iVar1867;
		_set_scenario_group_enabled_hash(-686154976, true);
		func_2(&uLocal_1839, 1);
		func_3(&uLocal_1839, 1);
		func_4(&uLocal_1839, 1);
		func_5(&uLocal_1839, 1);
		func_6(&uLocal_1839, 1);
		func_7(&uLocal_1839, 1);
		func_8(&uLocal_1839, 1);
		func_9(&uLocal_1839, 1);
		func_10(&uLocal_1839, 0);
		if (func_11(Global_1392581->f_3, 8))
		{
			func_12(&uLocal_716, 1, 1);
		}
		if (iVar1867 != 14 && func_13(iVar1867, 65536))
		{
			func_14(&uLocal_717, -2147483648);
		}
		func_15();
		iLocal_611 = func_16(1299961383, 1015970717);
	}
	if (iVar716 == 14)
	{
		Local_718.f_1[0] = vScriptParam_0.z;
	}
	if (has_force_cleanup_occurred(523))
	{
		iLocal_616 = 1;
		bLocal_617 = func_17(get_cause_of_most_recent_force_cleanup());
	}
	while (true)
	{
		func_19(bVar614, 1859, bVar616);
		if (func_20())
		{
			func_18();
		}
		func_21();
		if (func_22(&vScriptParam_0))
		{
			func_23(&iLocal_14, 5);
		}
		if ((get_frame_count() % 10) == 0)
		{
			fLocal_695 = func_24();
		}
		func_12(&uLocal_716, 128, 0);
		iLocal_607 = -1;
		func_12(&uLocal_716, 268435456, 0);
		func_25(&Local_718, &uLocal_717, iVar601);
		func_26(iVar601, &uLocal_716);
		if (func_27(&Local_718, &uLocal_716, iVar601))
		{
			iLocal_618 = 1;
			iLocal_616 = 1;
		}
		if (iLocal_14 != 5 && iVar716 != 14)
		{
			func_28();
		}
		func_29();
		switch (iLocal_14)
		{
			case 0:
				if (!does_entity_exist(&(Local_718.f_1[0])))
				{
					if (iVar716 == 14)
					{
						Local_718.f_1[0] = vScriptParam_0.z;
					}
					else
					{
						Local_718.f_1[0] = func_30(iVar716);
					}
				}
				else if (_0xbd3c4a2ed509205e(&(Local_718.f_1[0])))
				{
					func_14(&uLocal_717, 536870912);
					func_31(get_entity_coords(&(Local_718.f_1[0]), true, false), 225f, 0);
					func_32(iVar716, 1, 0, 0);
					func_33(&Local_718, &(Local_718.f_1102));
					func_34(Global_40.f_8863[87], 4);
					func_35();
					_set_scenario_group_enabled_hash(2045433246, true);
					func_36(&Local_718);
					func_37(&Local_718);
					func_38(&Local_718);
					func_39(&uLocal_699);
					iLocal_1836 = 0;
					func_23(&iLocal_14, 1);
				}
				break;
			case 1:
				if (func_40(&Local_718, &uLocal_699, &iLocal_1836))
				{
					func_41(&Local_718);
					settimera(0);
					func_23(&iLocal_14, 2);
				}
				break;
			case 2:
				if (!func_11(Global_1392581->f_3, 8))
				{
					if (func_42(&Local_718))
					{
						if (func_43(uVar714, 1))
						{
							func_44();
							func_45(&Local_718, iVar601);
						}
						func_23(&iLocal_14, 3);
					}
				}
				break;
			case 3:
				if (func_46(&Local_718, 125f))
				{
					func_47();
					func_12(&uLocal_716, 64, func_48());
					func_49();
					if (func_43(uVar714, 64))
					{
						if (func_44())
						{
							func_12(&uLocal_716, 268435456, 1);
						}
						func_50(iVar601);
					}
					else
					{
						iLocal_603 = -1;
						func_12(&uLocal_716, 64, 0);
						func_12(&uLocal_716, 8, 0);
						remove_shocking_event(iVar608);
					}
					if (func_51(&Local_718, iVar601))
					{
						func_52(&Local_718, iVar601);
					}
					func_53();
					func_54();
					func_42(&Local_718);
					func_55(&Local_718, 1);
					func_56();
					func_57();
					func_58();
					func_59();
					func_60();
					func_61(1);
					func_62();
					if (func_63())
					{
						func_64();
						func_65(&uLocal_609);
						func_23(&iLocal_14, 4);
					}
				}
				break;
			case 4:
				if (!func_13(iVar716, 32768))
				{
					func_66(iVar716, 32768);
					func_66(iVar716, 65536);
				}
				func_47();
				set_ped_can_play_gesture_anims(Global_35, 0, 1);
				func_67(&uLocal_716, &vLocal_627);
				func_68(&Local_718, &vLocal_627, &uLocal_716, &uLocal_717, iVar601, &uLocal_605, &uLocal_609);
				func_59();
				func_60();
				func_61(0);
				func_69(&uLocal_716);
				func_58();
				func_49();
				func_70();
				if (func_44())
				{
					if (!func_11(Local_718.f_1[iVar601]->f_4, 2))
					{
						func_34(&(Local_718.f_1[iVar601]->f_4), 2);
					}
					func_12(&uLocal_716, 268435456, 1);
				}
				if (func_51(&Local_718, iVar601))
				{
					func_52(&Local_718, iVar601);
				}
				func_53();
				func_71(iVar601);
				func_50(iVar601);
				func_54();
				func_72();
				func_42(&Local_718);
				func_55(&Local_718, 0);
				func_62();
				func_73();
				break;
			case 5:
				func_18();
				break;
		}
		wait(0);
	}
}

bool func_1(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

void func_2(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_74(&(uParam0->f_1), 8);
	}
	else
	{
		func_34(&(uParam0->f_1), 8);
	}
}

void func_3(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_74(&(uParam0->f_1), 4);
	}
	else
	{
		func_34(&(uParam0->f_1), 4);
	}
}

void func_4(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_74(&(uParam0->f_1), 2);
	}
	else
	{
		func_34(&(uParam0->f_1), 2);
	}
}

void func_5(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_34(uParam0, 8);
	}
	else
	{
		func_74(uParam0, 8);
	}
}

void func_6(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_34(uParam0, 16);
	}
	else
	{
		func_74(uParam0, 67108864);
		func_74(uParam0, 16);
	}
}

void func_7(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_74(&(uParam0->f_1), 256);
	}
	else
	{
		func_34(&(uParam0->f_1), 256);
	}
}

void func_8(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_34(uParam0, 524288);
	}
	else
	{
		func_74(uParam0, 524288);
	}
}

void func_9(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_34(uParam0, 256);
	}
	else
	{
		func_74(uParam0, 256);
	}
}

void func_10(var uParam0, int iParam1)
{
	uParam0->f_18 = iParam1;
}

bool func_11(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_12(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_11(*uParam0, iParam1))
		{
			func_34(uParam0, iParam1);
		}
	}
	else if (func_11(*uParam0, iParam1))
	{
		func_74(uParam0, iParam1);
	}
}

bool func_13(int iParam0, int iParam1)
{
	if (!func_1(iParam0))
	{
		return false;
	}
	return (Global_40.f_11029[iParam0] && iParam1) != 0;
}

void func_14(var uParam0, int iParam1)
{
	if (!func_75(uParam0, iParam1))
	{
		func_34(uParam0, iParam1);
	}
}

void func_15()
{
}

int func_16(int iParam0, int iParam1)
{
	Var1 = { func_76(iParam0, iParam1) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

bool func_17(int iParam0)
{
	if (((func_77(iParam0, 1) && func_77(iParam0, 2)) && func_77(iParam0, 8)) && func_77(iParam0, 512))
	{
		return true;
	}
	return false;
}

void func_18()
{
	bVar0 = does_entity_exist(&(Local_718.f_1[0]));
	func_74(&(Global_1392581->f_3), 4);
	func_74(&(Global_1392581->f_3), 16);
	if (is_itemset_valid(iVar600))
	{
		destroy_itemset(iVar600);
	}
	if (func_75(&uLocal_717, 134217728))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	if (!bVar616)
	{
		if (func_13(iVar716, 16))
		{
			func_78();
			func_79(iVar716);
			func_80(iVar716, 32768);
		}
	}
	Global_1430221->f_2 = 0;
	if (!bVar616)
	{
		func_32(iVar716, 0, 0, 0);
		if (func_13(iVar716, 65536))
		{
			func_81(Global_1392581->f_4[iVar716]);
		}
	}
	func_82();
	if (func_43(uVar714, 536870912))
	{
		func_83(1);
		func_12(&uLocal_716, 536870912, 0);
	}
	func_74(Global_40.f_8863[87], 4);
	iVar2 = 0;
	while (iVar2 < Local_718.f_1099)
	{
		iVar3 = &Local_718.f_310[iVar2];
		if (does_entity_exist(iVar3))
		{
			if (does_entity_belong_to_this_script(iVar3, false))
			{
				if (func_11(Local_718.f_310[iVar2]->f_7, 32))
				{
					_0x3088634cf8c819cf(iVar3);
				}
				set_ped_flee_attributes(iVar3, 32768, false);
				if (Local_718.f_310[iVar2]->f_8 == Local_718.f_1102)
				{
					set_ped_keep_task(iVar3, true);
					set_ped_as_no_longer_needed(&iVar3);
				}
				else if (((bVar615 || bVar616) || !bVar0) && (Local_718.f_310[iVar2]->f_3 != 0 || !bVar0))
				{
					func_84(&iVar3);
				}
				else
				{
					set_ped_keep_task(iVar3, true);
					set_ped_as_no_longer_needed(&iVar3);
					_0x39a2fc5af55a52b1(iVar3, 5000);
				}
			}
		}
		iVar2++;
	}
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (_0x91a5f9cbebb9d936(Local_718.f_1[iVar1]->f_5))
		{
			iVar4 = _0x6f46f8acb44c4fc1(Local_718.f_1[iVar1]->f_5);
			_0xa1cfb35069d23c23(iVar4);
			func_85(iVar4);
			remove_scenario_blocking_area(Local_718.f_1[iVar1]->f_5, false);
		}
		if (_does_volume_exist(Local_718.f_1[iVar1]->f_1))
		{
			func_85(Local_718.f_1[iVar1]->f_1);
		}
		if (does_entity_exist(&(Local_718.f_1[iVar1])))
		{
			if (bVar0)
			{
				_0xd4907ef4334c7602(&(Local_718.f_1[iVar1]), 0);
				_0x68830738a6bfb370(&(Local_718.f_1[iVar1]), 0);
			}
			_0x119a5714578f4e05(&(Local_718.f_1[iVar1]), 0);
		}
		iVar5 = _0x5c16855277819bbf();
		if (iVar5 > 0)
		{
			iVar6 = (func_86(&Local_718, iVar1) - Local_718.f_1[iVar1]->f_9);
			if (iVar6 > 0)
			{
				if (iVar6 > iVar5)
				{
					iVar6 = iVar5;
				}
				_0x7d4e70a67a651c71(iVar6);
			}
		}
		iVar1++;
	}
	if (!bVar616)
	{
		if (bVar0)
		{
			_0x4182c037aa1f0091(&(Local_718.f_1[0]), 1);
			_0xa72b1bf3857b94d7(&(Local_718.f_1[0]), 0);
		}
	}
	_set_scenario_group_enabled_hash(-686154976, true);
	_set_scenario_group_enabled_hash(2045433246, false);
	iVar7 = 0;
	while (iVar7 < 4)
	{
		func_85(&(iLocal_622[iVar7]));
		iVar7++;
	}
	if (is_itemset_valid(iVar599))
	{
		destroy_itemset(iVar599);
	}
	remove_shocking_event(iVar608);
	remove_relationship_group(iVar1866);
	if (func_87(162))
	{
		func_88(162);
	}
	if (!bVar616)
	{
		_0x710448d44a64c213(1);
		if (_0xad401c63158acbaa(player_id()))
		{
			_0x987be590fb9d41e5(0);
			_0xdcf12b89624aac96(0);
		}
	}
	func_89(2, 0, 0);
	func_89(1, 0, 0);
	Global_1392581->f_44 = 0;
	terminate_this_thread();
}

void func_19(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_90(bParam2) || is_screen_faded_out())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_20()
{
	return false;
}

void func_21()
{
}

bool func_22(var uParam0)
{
	if (func_75(&uLocal_717, 536870912))
	{
		if (!does_entity_exist(&(Local_718.f_1[0])))
		{
			return true;
		}
	}
	if (func_91(0, 0, 1) && func_92(0) != Global_1392581->f_1)
	{
		return true;
	}
	else if (*uParam0 == 14)
	{
		return false;
	}
	if (!func_1(*uParam0))
	{
		return true;
	}
	if (!_0x0516fae561276efc((*Global_1425371)[*uParam0]->f_1))
	{
		return true;
	}
	fVar0 = 300f;
	if (func_43(uVar713, 65536))
	{
		if (!func_93(&Local_718) || (Local_718.f_1099 - Local_718.f_1101) < (Local_718.f_1099 / 2))
		{
			fVar0 = 100f;
		}
	}
	if (does_entity_exist(&(Local_718.f_1[0])) || func_13(*uParam0, 8192))
	{
		if (!func_46(&Local_718, fVar0))
		{
			return true;
		}
	}
	else if (func_94(*uParam0, fVar0, 0))
	{
		return true;
	}
	return false;
}

void func_23(int iParam0, int iParam1)
{
	if (iParam1 != *iParam0)
	{
		*iParam0 = iParam1;
	}
}

float func_24()
{
	if (!does_entity_exist(&(Local_718.f_1[0])))
	{
		return 9999f;
	}
	if (_0xde8c5b9f65017fa1(&(Local_718.f_1[0])) <= 0)
	{
		return 9999f;
	}
	uVar0 = _0xaf787e081ac4a8ee(&(Local_718.f_1[0]));
	iVar1 = _0x86fa6d8b48667d75(&(Local_718.f_1[0]));
	iVar2 = _0x1180a2974d251b7b(&(Local_718.f_1[0]));
	fVar3 = 9999f;
	fVar4 = 9999f;
	if (iVar1 >= 0)
	{
		vVar5 = { _0xba958f68031ddbfc(uVar0, iVar1) };
		if (func_95(vVar5, 500f, 1))
		{
			fVar3 = func_96(&(Local_718.f_1[0]), vVar5, 1);
		}
	}
	if (iVar2 >= 0)
	{
		vVar8 = { _0xba958f68031ddbfc(uVar0, iVar2) };
		if (func_95(vVar8, 500f, 1))
		{
			fVar4 = func_96(&(Local_718.f_1[0]), vVar8, 1);
		}
	}
	if (fVar4 < fVar3)
	{
		fVar11 = fVar4;
		vLocal_696 = { vVar8 };
	}
	else
	{
		fVar11 = fVar3;
		vLocal_696 = { vVar5 };
	}
	return fVar11;
}

void func_25(int iParam0, var uParam1, int iParam2)
{
	if ((get_frame_count() % 60) != 0 || func_75(uParam1, 268435456))
	{
		return;
	}
	if (func_97())
	{
		if (!func_75(uParam1, 1073741824))
		{
			func_14(uParam1, 1073741824);
			bVar0 = true;
		}
	}
	else if (func_75(uParam1, 1073741824))
	{
		func_98(uParam1, 1073741824);
		bVar0 = true;
	}
	if (bVar0)
	{
		func_45(iParam0, iParam2);
	}
}

void func_26(int iParam0, var uParam1)
{
	if (iParam0 > -1 && _does_scenario_point_exist(_0xd04241bbf6d03a5e(Global_35)))
	{
		func_99(uParam1);
	}
}

bool func_27(int iParam0, var uParam1, int iParam2)
{
	if (!func_43(*uParam1, 1))
	{
		if (func_11(Global_1392581->f_3, 8))
		{
			func_12(uParam1, 1, 1);
			return true;
		}
	}
	else if (!func_11(Global_1392581->f_3, 8))
	{
		if (!func_43(*uParam1, 64))
		{
			func_12(uParam1, 1, 0);
		}
		if (!func_43(*uParam1, -2147483648))
		{
			func_45(iParam0, iParam2);
			func_12(uParam1, -2147483648, 1);
		}
	}
	return false;
}

void func_28()
{
	iVar0 = (get_frame_count() % Local_718.f_1098);
	if ((iVar0 >= 0 && iVar0 < Local_718.f_1098) && !does_entity_exist(&(Local_718.f_1[iVar0])))
	{
		if (_does_volume_exist(Local_718.f_1105))
		{
			_delete_volume(Local_718.f_1105);
		}
		iVar0 = 1;
		while (iVar0 <= 13)
		{
			if (_does_volume_exist(Local_718.f_1[iVar0]->f_1))
			{
				_delete_volume(Local_718.f_1[iVar0]->f_1);
			}
			if (_does_volume_exist(Local_718.f_1[iVar0]->f_2))
			{
				_delete_volume(Local_718.f_1[iVar0]->f_2);
			}
			Local_718.f_1[iVar0]->f_8 = 0;
			Local_718.f_1[iVar0]->f_3 = 0;
			iVar1 = 0;
			while (iVar1 < 8)
			{
				Local_718.f_1[iVar0]->f_11[iVar1] = 0;
				iVar1++;
			}
			iVar0++;
		}
		iVar2 = 0;
		while (iVar2 < 45)
		{
			if (does_entity_exist(&(Local_718.f_310[iVar2])))
			{
				set_ped_keep_task(&(Local_718.f_310[iVar2]), true);
				set_ped_as_no_longer_needed(Local_718.f_310[iVar2]);
				func_74(&(Local_718.f_310[iVar2]->f_7), 16);
				Local_718.f_310[iVar2]->f_4 = 0;
				Local_718.f_310[iVar2]->f_6 = 0;
			}
			iVar2++;
		}
		iVar3 = 0;
		while (iVar3 < 4)
		{
			if (_does_volume_exist(&(iLocal_622[iVar3])))
			{
				_delete_volume(&(iLocal_622[iVar3]));
			}
			iVar3++;
		}
		iLocal_1836 = 0;
		Local_718.f_1099 = 0;
		func_23(&iLocal_14, 0);
	}
}

void func_29()
{
	if (!func_75(&uLocal_717, 268435456))
	{
		if (func_100() && !func_46(&Local_718, 100f))
		{
			func_14(&uLocal_717, 268435456);
		}
	}
	else if (!func_100() || func_46(&Local_718, 75f))
	{
		func_98(&uLocal_717, 268435456);
	}
}

int func_30(int iParam0)
{
	if (!func_1(iParam0))
	{
		return 0;
	}
	if (!_0xc29996a337bdd099((*Global_1425371)[iParam0]->f_1))
	{
		return 0;
	}
	func_66(iParam0, 16);
	return _0x6e585a616abb8401((*Global_1425371)[iParam0]->f_1);
}

void func_31(vector3 vParam0, float fParam3, var uParam4)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_101(vVar0, vVar3, 0f) };
	vVar9 = { func_102(vVar0, vVar3, 0f) };
	set_ped_paths_back_to_original(vVar6, vVar9, uParam4);
}

void func_32(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_1(iVar0))
		{
			if (iVar0 != iParam0)
			{
				if (bParam1)
				{
					func_66(iVar0, 2);
					if (bParam3)
					{
						if (_0xc29996a337bdd099((*Global_1425371)[iVar0]->f_1))
						{
							_0x0d5fdf0d36fa10cd((*Global_1425371)[iVar0]->f_1);
						}
					}
				}
				else
				{
					func_80(iVar0, 2);
				}
			}
			else
			{
				func_80(iVar0, 2);
				if (_0xc29996a337bdd099((*Global_1425371)[iVar0]->f_1))
				{
					if (bParam2)
					{
						_0x718eb706b6e998a0((*Global_1425371)[iVar0]->f_1);
					}
					else
					{
						_0xe682002db1f30669((*Global_1425371)[iVar0]->f_1);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_33(int iParam0, var uParam1)
{
	uVar0[0] = &iParam0->f_1[0];
	func_103(iParam0, 0);
	if (!_does_volume_exist(iParam0->f_1[0]->f_1))
	{
		func_104(iParam0->f_1[0], &(iParam0->f_1[0]->f_1), 0, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0);
	}
	iParam0->f_1098 = func_105(&uVar0);
	iVar15 = 1;
	while (iVar15 <= 13)
	{
		func_106(iParam0, iVar15);
		if (does_entity_exist(&(uVar0[iVar15])))
		{
			iParam0->f_1[iVar15] = &uVar0[iVar15];
			func_103(iParam0, iVar15);
			if (iParam0->f_1[iVar15]->f_6 == 3)
			{
				*uParam1 = iVar15;
			}
			if (!_does_volume_exist(iParam0->f_1[iVar15]->f_1))
			{
				func_104(iParam0->f_1[iVar15], &(iParam0->f_1[iVar15]->f_1), iVar15, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0);
			}
			if (!_does_volume_exist(iParam0->f_1[iVar15]->f_2))
			{
				func_104(iParam0->f_1[iVar15], &(iParam0->f_1[iVar15]->f_2), iVar15, -1082130432, -1082130432, -1082130432, 1, 0, 0, 0);
			}
			if (iParam0->f_1[iVar15]->f_6 == 3)
			{
				func_104(iParam0->f_1[iVar15], &(iParam0->f_1105), iVar15, 14f, 5f, 15f, 0, -4f, 1, "NOCABOOSEJUMP");
			}
			if (!is_entity_dead(&(uVar0[iVar15])))
			{
			}
			if (does_entity_exist(&(iParam0->f_1[iVar15])))
			{
			}
		}
		iVar15++;
	}
}

void func_34(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_35()
{
	if (iVar1866 == 0)
	{
		add_relationship_group("amb_train_guards", &uLocal_1868);
	}
	set_relationship_between_groups(6, iVar1866, 555364152);
	set_relationship_between_groups(6, 555364152, iVar1866);
	set_relationship_between_groups(6, iVar1866, 1030835986);
}

void func_36(int iParam0)
{
	iVar0 = 0;
	if (func_93(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < iParam0->f_1098)
		{
			if (func_51(iParam0, iVar1))
			{
				if (iVar0 >= 3)
				{
				}
				else
				{
					iParam0->f_941[iVar0] = iVar1;
					iVar0++;
					iVar1++;
				}
				iVar0 = iVar0;
				while (iVar0 <= 2)
				{
					iParam0->f_941[iVar0] = -1;
					iVar0++;
				}
			}
		}
	}
}

void func_37(int iParam0)
{
	if (func_93(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (&iParam0->f_941[iVar0] >= 0)
			{
				iVar1 = func_107();
				iVar2 = get_random_int_in_range(1, 3);
				switch (iVar2)
				{
					case 3:
						iParam0->f_941[iVar0]->f_3[3]->f_7 = iVar1;
						*iParam0->f_941[iVar0]->f_3[3] = { 1.51f, -0.77f, 1.77f };
						iParam0->f_941[iVar0]->f_3[3]->f_3 = 92f;
						func_108(&(iParam0->f_941[iVar0]->f_3[3]->f_11), 11);
					case 2:
						iParam0->f_941[iVar0]->f_3[2]->f_7 = iVar1;
						*iParam0->f_941[iVar0]->f_3[2] = { 1.51f, -0.69f, 1.77f };
						iParam0->f_941[iVar0]->f_3[2]->f_3 = 92f;
						func_108(&(iParam0->f_941[iVar0]->f_3[2]->f_11), 11);
					case 1:
						iParam0->f_941[iVar0]->f_3[1]->f_7 = iVar1;
						*iParam0->f_941[iVar0]->f_3[1] = { 1.54f, -0.29f, 1.77f };
						iParam0->f_941[iVar0]->f_3[1]->f_3 = 92f;
						func_108(&(iParam0->f_941[iVar0]->f_3[1]->f_11), 11);
						break;
				}
			}
			iVar0++;
		}
	}
}

void func_38(int iParam0)
{
	iVar0 = func_109(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar2 = func_110(iParam0, (iVar0 - 1), 0);
	(iParam0->f_1[(iVar0 - 1)])->f_5 = func_111(iVar2);
	iVar1 = func_112(iParam0);
	if (iVar1 == -1 || iVar1 == iVar0)
	{
		return;
	}
	if (iVar1 + 1 >= iParam0->f_1098)
	{
		return;
	}
	if ((iParam0->f_1[iVar1 + 1])->f_6 != 3)
	{
		iVar2 = func_110(iParam0, iVar1 + 1, 1);
		(iParam0->f_1[iVar1 + 1])->f_5 = func_111(iVar2);
	}
}

void func_39(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		StringCopy((*uParam0)[iVar0], "", 64);
		iVar0++;
	}
}

bool func_40(int iParam0, var uParam1, int iParam2)
{
	switch (*iParam2)
	{
		case 0:
			_text_database_request("TNRB");
			func_113(iParam0);
			func_114(uParam1);
			func_115();
			*iParam2 = 1;
			break;
		case 1:
			if (!_text_database_has_loaded("TNRB"))
			{
				return false;
			}
			if (!func_116(iParam0))
			{
				return false;
			}
			if (!func_115())
			{
				return false;
			}
			*iParam2 = 2;
			return true;
		case 2:
			return true;
	}
	return false;
}

void func_41(int iParam0)
{
	if (func_93(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (&iParam0->f_941[iVar0] >= 0)
			{
				func_117(0f, 0f, 0f, &(iParam0->f_941[iVar0]->f_3), 0, 0, 0, -1, 0);
				func_118(iParam0, iVar0);
			}
			iVar0++;
		}
	}
}

bool func_42(int iParam0)
{
	if (!func_75(&uLocal_717, -2147483648) || iParam0->f_1103 == 0)
	{
		if (iParam0->f_1103 != 1)
		{
			func_119(iParam0, iParam0->f_1103);
		}
		else
		{
			func_120(iParam0, iParam0->f_1103, 1);
		}
	}
	else
	{
		func_120(iParam0, iParam0->f_1103, 1);
	}
	iParam0->f_1103++;
	if (iParam0->f_1103 >= iParam0->f_1098)
	{
		iParam0->f_1103 = 0;
		if (func_11(iParam0->f_1[iParam0->f_1103]->f_4, 4))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_43(int iParam0, int iParam1)
{
	return func_11(iParam0, iParam1);
}

bool func_44()
{
	if (iVar601 >= 0)
	{
		if (!func_11(Local_718.f_1[iVar601]->f_4, 2))
		{
			if (is_ped_shooting(Global_35))
			{
				if (!func_43(uVar714, 4096) && !func_43(uVar714, 1048576))
				{
					func_64();
				}
				func_34(&(Local_718.f_1[iVar601]->f_4), 2);
			}
		}
	}
	if ((get_frame_count() % 5) == 0)
	{
		if (!func_43(uVar714, 524288))
		{
			bVar0 = false;
			if (iVar608 >= 0)
			{
				uVar1 = 1;
				if (_0xf4860514ad354226(iVar608, Global_36, 40f, &uVar1) > 0)
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				fLocal_620 = (fVar618 + (5f * timestep()));
				if (fVar618 >= 10f)
				{
					_0xedfc6c1fd1c964f5(get_player_index(), 1343354387, 0, 0, 0, 0, 0, 0, 0);
					func_12(&uLocal_716, 524288, 1);
				}
			}
			else
			{
				fLocal_620 = (fVar618 - (5f * timestep()));
				if (fVar618 < 0f)
				{
					fLocal_620 = 0f;
				}
			}
		}
		iVar3 = 0;
		while (iVar3 < 14)
		{
			if (does_entity_exist(&(Local_718.f_1[iVar3])))
			{
				if (is_ped_on_specific_vehicle(Global_35, &(Local_718.f_1[iVar3])) || (_does_volume_exist(Local_718.f_1[iVar3]->f_1) && is_entity_in_volume(Global_35, Local_718.f_1[iVar3]->f_1, true, 0)))
				{
					vVar4 = { get_entity_coords(&(Local_718.f_1[iVar3]), true, false) };
					func_12(&uLocal_716, 64, 1);
					fVar8 = (Global_36.f_2 - vVar4.z);
					if (fVar8 > 4f)
					{
						if (!func_43(uVar714, 8))
						{
							remove_shocking_event(iVar608);
							iLocal_610 = add_shocking_event_for_entity(-1905235087, Global_35, 0f, 30f, 40f, -1f, -1f, 180f, false, false, -1, -1);
							func_12(&uLocal_716, 8, 1);
						}
					}
					else if (func_43(uVar714, 8))
					{
						remove_shocking_event(iVar608);
						iLocal_610 = -1;
						func_12(&uLocal_716, 8, 0);
						add_shocking_event_for_entity(-1905235087, Global_35, 10f, 10f, 15f, -1f, -1f, 180f, false, false, -1, -1);
						bVar7 = true;
					}
					if (iVar3 != iVar601 || bVar7)
					{
						iLocal_604 = iVar601;
						iLocal_603 = iVar3;
						func_121(vLocal_627[1]);
						func_45(&Local_718, iVar601);
						if (iVar601 == 1)
						{
							func_45(&Local_718, 0);
						}
						iVar9 = 0;
						while (iVar9 < 8)
						{
							func_122(Local_15[iVar9], 0, 0, 1, 0);
							iVar9++;
						}
						func_81(vLocal_627[11]);
						return true;
					}
					else
					{
						return false;
					}
				}
			}
			iVar3++;
		}
		if (iVar601 != -1)
		{
			func_12(&uLocal_716, 64, 0);
			func_12(&uLocal_716, 8, 0);
			iLocal_603 = -1;
			remove_shocking_event(iVar608);
			iLocal_610 = -1;
			func_81(vLocal_627[11]);
		}
	}
	return false;
}

void func_45(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= iParam0->f_1098)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_1[iParam1]->f_8)
	{
		iVar1 = &iParam0->f_1[iParam1]->f_11[iVar0];
		if (iVar1 >= 0)
		{
			func_34(&(iParam0->f_310[iVar1]->f_7), 2048);
		}
		iVar0++;
	}
}

bool func_46(int iParam0, float fParam1)
{
	if (!func_123(*iParam0))
	{
		if (!does_entity_exist(&(iParam0->f_1[0])) && *iParam0 != 14)
		{
			iParam0->f_1[0] = func_30(*iParam0);
		}
		return func_124(*iParam0, iParam0->f_1[0], fParam1, iParam0->f_1102);
	}
	return false;
}

void func_47()
{
	iLocal_619 = 0;
	if (func_43(uVar714, 1))
	{
		func_121(vLocal_627[17]);
		return;
	}
	if (get_entity_speed(&(Local_718.f_1[0])) <= 0.2f)
	{
		if (!func_125(vLocal_627[17]))
		{
			func_81(vLocal_627[17]);
		}
	}
	else
	{
		func_121(vLocal_627[17]);
		return;
	}
	if (func_126())
	{
		return;
	}
	if (func_43(uVar714, 16384))
	{
		fVar0 = 130f;
	}
	else
	{
		fVar0 = 15f;
	}
	if (!func_127(vLocal_627[17], fVar0))
	{
		return;
	}
	iLocal_619 = 1;
}

bool func_48()
{
	if (is_player_riding_train(player_id()))
	{
		return true;
	}
	return func_128(&Local_718, &Global_35);
}

void func_49()
{
	if (does_entity_exist(&(Local_718.f_1[0])))
	{
		if (!func_43(uVar714, 16384))
		{
			if (func_129(&Local_718))
			{
				if (!func_125(vLocal_627[16]))
				{
					func_81(vLocal_627[16]);
				}
				if (func_125(vLocal_627[5]))
				{
					func_121(vLocal_627[5]);
				}
				func_12(&uLocal_716, 16384, 1);
			}
		}
		else if (!func_129(&Local_718))
		{
			if (!func_125(vLocal_627[5]))
			{
				func_81(vLocal_627[5]);
			}
			if (func_125(vLocal_627[16]))
			{
				func_121(vLocal_627[16]);
			}
			if (func_130(vLocal_627[5], 5f))
			{
				func_12(&uLocal_716, 16384, 0);
			}
		}
	}
}

void func_50(int iParam0)
{
	if (!func_43(uVar713, 8) && iParam0 > -1)
	{
		if (iParam0 != 0)
		{
			if ((func_43(uVar713, 4096) && func_131(iParam0)) && func_43(uVar713, 268435456))
			{
				iVar0 = func_132(iParam0);
				if (iVar0 != 0)
				{
					if (Local_718.f_1[iParam0]->f_8 > 1)
					{
						StringCopy(&cVar1, func_133(1), 24);
					}
					else
					{
						StringCopy(&cVar1, func_133(0), 24);
					}
					func_65(&uLocal_609);
					func_134(iVar0, Global_35, &cVar1, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			else if (!func_11(Local_718.f_1[iParam0]->f_4, 2))
			{
				if (bVar616)
				{
					if (get_game_timer() >= iVar610)
					{
						iVar4 = func_132(iParam0);
						if (iVar4 != 0)
						{
							func_65(&uLocal_609);
							func_134(iVar4, Global_35, func_135(func_11(Local_718.f_1[iParam0]->f_4, 32)), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
							func_34(&(Local_718.f_1[iParam0]->f_4), 32);
							iLocal_613 = (get_game_timer() + get_random_int_in_range(10000, 13000));
						}
					}
				}
			}
		}
	}
}

bool func_51(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return false;
	}
	if (!does_entity_exist(&(iParam0->f_1[iParam1])))
	{
		return false;
	}
	if (get_entity_model(&(iParam0->f_1[iParam1])) == 1786827347)
	{
		return true;
	}
	return false;
}

void func_52(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (!func_93(iParam0))
	{
		return;
	}
	iVar0 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (&iParam0->f_941[iVar0] == iParam1)
		{
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar0 < 0)
	{
		return;
	}
	if (_does_scenario_point_exist(iParam0->f_941[iVar0]->f_1))
	{
		return;
	}
	if (!does_entity_exist(iParam0->f_941[iVar0]->f_3[0]->f_8))
	{
		if (!does_entity_exist(&(iParam0->f_1[&iParam0->f_941[iVar0]])))
		{
			return;
		}
		if (!_0x53784cea0159439b(&(iParam0->f_1[&iParam0->f_941[iVar0]])))
		{
			return;
		}
		iParam0->f_941[iVar0]->f_2 = _0xce2acd6f602803e5(&(iParam0->f_1[&iParam0->f_941[iVar0]]));
		if (!_does_propset_exist(iParam0->f_941[iVar0]->f_2))
		{
			return;
		}
		vVar1 = { get_offset_from_entity_in_world_coords(&(iParam0->f_1[&iParam0->f_941[iVar0]]), *iParam0->f_941[iVar0]->f_3[0]) };
		func_137(iParam0->f_941[iVar0]->f_2, func_136(), &(iParam0->f_941[iVar0]->f_3[0]->f_8), vVar1, -1082130432);
	}
	if (_does_propset_exist(iParam0->f_941[iVar0]->f_2))
	{
		if (does_entity_exist(iParam0->f_941[iVar0]->f_3[0]->f_8))
		{
			iParam0->f_941[iVar0]->f_1 = create_scenario_point_attached_to_entity(iParam0->f_941[iVar0]->f_3[0]->f_8, 45887683, func_138(0), 0f, 0, 0, 0);
		}
		else
		{
			iParam0->f_941[iVar0]->f_1 = create_scenario_point_attached_to_entity(&(iParam0->f_1[&iParam0->f_941[iVar0]]), 45887683, func_138(1), -90f, 0, 0, 0);
		}
	}
}

void func_53()
{
	if (func_43(uVar714, 64) && !func_43(uVar714, 8))
	{
		set_ped_reset_flag(Global_35, 275, true);
	}
}

void func_54()
{
	if (func_43(uVar714, 2097152))
	{
		iVar0 = 0;
		while (iVar0 < 14)
		{
			iVar1 = 0;
			while (iVar1 < Local_718.f_1[iVar0]->f_8)
			{
				if (Local_718.f_310[&Local_718.f_1[iVar0]->f_11[iVar1]]->f_3 == 1)
				{
					func_139(&Local_718, iVar0, &vLocal_627, &uLocal_1839, &uLocal_1867, &uLocal_716, &uLocal_717, &iLocal_606, Local_15[iVar1], Local_432[iVar1], 1, 1);
				}
				iVar1++;
			}
			iVar0++;
		}
	}
}

void func_55(int iParam0, bool bParam1)
{
	func_140(iParam0);
	if (func_141(&uLocal_716))
	{
		func_142(iParam0, iParam0->f_1104);
	}
	func_143(iParam0->f_1104, &bVar0, bParam1);
	if (iVar599 != -1)
	{
		if (iVar599 != 1)
		{
			if (iParam0->f_1104 != iVar599)
			{
				func_143(iVar599, &bVar0, bParam1);
			}
		}
		else if (iParam0->f_1104 != 0)
		{
			func_143(0, &bVar0, bParam1);
		}
	}
	else
	{
		iVar1 = -1;
		if (&Local_718.f_1[0]->f_11[0] >= 0 && !is_entity_dead(&(iParam0->f_310[&Local_718.f_1[0]->f_11[0]])))
		{
			if (iParam0->f_310[&Local_718.f_1[0]->f_11[0]]->f_9 < 27f)
			{
				iVar1 = 0;
			}
		}
		if ((iVar1 < 0 && &Local_718.f_1[iParam0->f_1102]->f_11[0] >= 0) && !is_entity_dead(&(iParam0->f_310[&Local_718.f_1[iParam0->f_1102]->f_11[0]])))
		{
			if (iParam0->f_310[&iParam0->f_1[iParam0->f_1102]->f_11[0]]->f_9 < 27f)
			{
				iVar1 = iParam0->f_1102;
			}
		}
		if ((iVar1 >= 0 && iVar1 < iParam0->f_1098) && iParam0->f_1104 != iVar1)
		{
			func_143(iVar1, &bVar0, bParam1);
		}
	}
	if (func_75(&uLocal_717, 268435456))
	{
		if (!func_11(Local_718.f_1[iParam0->f_1104]->f_4, 65536) && func_144(&Local_718, iParam0->f_1104))
		{
			func_145(&Local_718, iParam0->f_1104);
		}
	}
	else if (func_11(Local_718.f_1[iParam0->f_1104]->f_4, 65536))
	{
		func_146(&Local_718, &uLocal_717, iParam0->f_1104);
	}
	iParam0->f_1104++;
	if (iParam0->f_1104 >= iParam0->f_1098)
	{
		iParam0->f_1104 = 0;
	}
	if (bVar0)
	{
		if (!func_125(vLocal_627[0]))
		{
			func_81(vLocal_627[0]);
		}
	}
	if (func_130(vLocal_627[0], 0.5f))
	{
		func_147(iVar599);
	}
}

void func_56()
{
	if (_does_volume_exist(Local_718.f_1105))
	{
		if (func_148(Global_35, Local_718.f_1105, 1, 0))
		{
			if (is_ped_on_mount(Global_35))
			{
				iVar0 = 0;
				while (iVar0 <= 7)
				{
					iVar1 = &Local_718.f_1[Local_718.f_1102]->f_11[iVar0];
					if (iVar1 >= 0)
					{
						if (!is_ped_injured(&(Local_718.f_310[iVar1])))
						{
							disable_control_action(0, -640622144, false);
						}
					}
					iVar0++;
				}
			}
		}
	}
}

void func_57()
{
	iVar0 = func_16(1299961383, 1015970717);
	if (iVar601 >= 0)
	{
		if (iVar0 != iVar609)
		{
			iLocal_612 = get_game_timer();
			iLocal_611 = iVar0;
			func_149(iVar601, 1);
			vVar1 = { get_offset_from_entity_given_world_coords(&(Local_718.f_1[iVar601]), Global_36) };
			if (vVar1.y >= 7f)
			{
				if ((iVar601 - 1) >= 0)
				{
					func_149((iVar601 - 1), 0);
				}
			}
			else if (vVar1.y <= -7f)
			{
				if (iVar601 + 1 < 14)
				{
					func_149(iVar601 + 1, 0);
				}
			}
		}
	}
}

void func_58()
{
	if (!func_11(Local_718.f_1[0]->f_4, 4096))
	{
		if (_0x2963b5c1637e8a27(&(Local_718.f_1[0])) == Global_35)
		{
			_0x9f29999dfdf2aeb8(&(Local_718.f_1[0]), 10f);
			func_34(&(Local_718.f_1[0]->f_4), 4096);
		}
	}
	else if (_0x2963b5c1637e8a27(&(Local_718.f_1[0])) != Global_35)
	{
		func_74(&(Local_718.f_1[0]->f_4), 4096);
	}
}

void func_59()
{
	if (func_43(uVar714, 64))
	{
		if (_0xa22c46f16359471c())
		{
			_0x710448d44a64c213(0);
		}
	}
	else if (!_0xa22c46f16359471c())
	{
		_0x710448d44a64c213(1);
	}
}

void func_60()
{
	if (bVar617)
	{
		if (!func_43(uVar714, 262144) && !func_43(uVar714, 1073741824))
		{
			if (!func_150())
			{
				return;
			}
			func_12(&uLocal_716, 262144, 1);
			func_81(vLocal_627[6]);
			fLocal_694 = get_random_float_in_range(20f, 30f);
		}
	}
}

void func_61(bool bParam0)
{
	if (func_43(uVar713, 2048))
	{
		return;
	}
	if (!func_125(vLocal_627[2]))
	{
		func_81(vLocal_627[2]);
	}
	if (func_43(uVar713, 32768))
	{
		if (get_ped_in_vehicle_seat(&(Local_718.f_1[0]), -1) != Global_35)
		{
			set_train_cruise_speed(&(Local_718.f_1[0]), 0f);
		}
	}
	if (func_43(uVar713, 32768))
	{
		if (func_151(0, 1, &(Local_718.f_310[&Local_718.f_1[0]->f_11[0]]), 1))
		{
			if (!func_125(vLocal_627[21]))
			{
				func_81(vLocal_627[21]);
			}
			if (func_130(vLocal_627[21], 8.5f))
			{
				if (iVar612 < 4)
				{
					func_134(&(Local_718.f_310[&Local_718.f_1[0]->f_11[0]]), Global_35, func_152(iVar612), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_615 = iVar612 + 1;
				}
				else if (func_46(&Local_718, 50f) && func_43(uVar713, 2))
				{
					func_12(&uLocal_716, 2048, 1);
				}
			}
		}
	}
	if (func_130(vLocal_627[2], 1.5f))
	{
		if (does_entity_exist(&(Local_718.f_1[0])))
		{
			if (!func_43(uVar713, 2048))
			{
				if (bParam0 || (!bParam0 && (!is_entity_dead(&(Local_718.f_310[&Local_718.f_1[0]->f_11[0]])) || !does_entity_exist(&(Local_718.f_310[&Local_718.f_1[0]->f_11[0]])))))
				{
					if (!is_itemset_valid(iVar599))
					{
						iLocal_602 = create_itemset(true);
					}
					bVar2 = false;
					if (get_entity_speed(&(Local_718.f_1[0])) <= 10f)
					{
						iVar3 = 3;
					}
					else
					{
						iVar3 = 4;
					}
					iVar1 = 0;
					while (iVar1 < iVar3)
					{
						if (!_does_volume_exist(&(iLocal_622[iVar1])))
						{
							switch (iVar1)
							{
								case 0:
									sVar4 = "TrainRob - volProbe0";
									fVar5 = 0f;
									fVar6 = 0f;
									fVar7 = 20f;
									fVar8 = 45f;
									fVar9 = 10f;
									break;
								case 1:
									sVar4 = "TrainRob - volProbe1";
									fVar5 = 20f;
									fVar6 = -3f;
									fVar7 = 20f;
									fVar8 = 45f;
									fVar9 = 10f;
									break;
								case 2:
									sVar4 = "TrainRob - volProbe2";
									fVar5 = -20f;
									fVar6 = 3f;
									fVar7 = 20f;
									fVar8 = 45f;
									fVar9 = 10f;
									break;
								case 3:
									sVar4 = "TrainRob - volProbefast";
									fVar5 = 0f;
									fVar6 = 0f;
									fVar7 = 32f;
									fVar8 = 50f;
									fVar9 = 14f;
									break;
							}
							iLocal_622[iVar1] = _create_volume_box_with_custom_name(get_entity_coords(&(Local_718.f_1[0]), true, false), get_entity_rotation(&(Local_718.f_1[0]), 2), fVar9, fVar8, 8f, sVar4);
							_0x7c00cfc48a782dc0(&(iLocal_622[iVar1]), &(Local_718.f_1[0]), fVar6, fVar7, 0f, 0f, 0f, fVar5, 2, 1);
						}
						_0x20a4bf0e09bee146(iVar599);
						_0x886171a12f400b89(&(iLocal_622[iVar1]), iVar599, 2);
						iVar10 = 0;
						while (iVar10 < get_itemset_size(iVar599))
						{
							iVar0 = get_vehicle_index_from_entity_index(_get_entity_from_item(get_indexed_item_in_itemset(iVar10, iVar599)));
							if (!func_153(iVar0) && &Local_718.f_1[0] != iVar0)
							{
								if (_0x857acb0ab4bd0d55(iVar0))
								{
									if (iVar0 == get_last_driven_vehicle())
									{
										if (!func_43(uVar713, 2))
										{
											if (iVar612 > 1)
											{
												iLocal_615 = (iVar612 - 1);
											}
											func_12(&uLocal_716, 2, 1);
											if (func_125(vLocal_627[17]))
											{
												func_81(vLocal_627[17]);
											}
											if (func_125(vLocal_627[21]))
											{
												func_81(vLocal_627[21]);
											}
										}
									}
									bVar2 = true;
								}
								else
								{
									iVar10++;
								}
								iVar1++;
								if (bVar2)
								{
									if (!func_43(uVar713, 32768))
									{
										func_134(&(Local_718.f_310[&Local_718.f_1[0]->f_11[0]]), Global_35, func_152(iVar612), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
										iLocal_615 = iVar612 + 1;
										set_ped_config_flag(&(Local_718.f_310[&Local_718.f_1[0]->f_11[0]]), 492, true);
										func_12(&uLocal_716, 32768, 1);
									}
								}
								else if (func_43(uVar713, 32768))
								{
									if (!func_43(uVar713, 1073741824))
									{
										func_121(vLocal_627[21]);
										iLocal_615 = 0;
										set_ped_config_flag(&(Local_718.f_310[&Local_718.f_1[0]->f_11[0]]), 492, false);
										func_12(&uLocal_716, 32768, 0);
										func_12(&uLocal_716, 2, 0);
										if (get_ped_in_vehicle_seat(&(Local_718.f_1[0]), -1) != Global_35)
										{
											set_train_cruise_speed(&(Local_718.f_1[0]), func_154(iVar715));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_62()
{
	if (!func_75(&uLocal_717, 1073741824))
	{
		return;
	}
	if (func_43(uVar714, 1))
	{
		return;
	}
	if (iVar716 == 14 && !func_43(uVar714, 65536))
	{
		return;
	}
	if (func_155(&uLocal_717))
	{
		func_156(162, 0);
		func_14(&uLocal_717, 2);
	}
	if (func_157(25))
	{
		if (func_158(&Local_718, iVar601, &uLocal_717))
		{
			func_156(153, 0);
			func_14(&uLocal_717, 4);
		}
		if (func_159(&Local_718, &uLocal_717))
		{
			func_156(154, 0);
			func_14(&uLocal_717, 8);
		}
		if (func_160(&Local_718, iVar601, &uLocal_716, &uLocal_717))
		{
			func_156(160, 0);
			func_14(&uLocal_717, 16);
		}
		if (func_161(&Local_718, &uLocal_716, &uLocal_717))
		{
			func_156(155, 0);
			func_14(&uLocal_717, 32);
		}
		if (func_162(iVar601, &uLocal_717))
		{
			func_156(157, 0);
			func_14(&uLocal_717, 64);
		}
	}
}

bool func_63()
{
	if (!func_43(uVar714, 64))
	{
		return false;
	}
	if (func_43(uVar714, 4096))
	{
		return true;
	}
	if (func_163())
	{
		return true;
	}
	if (func_164())
	{
		_0x785177e4d57d7389(player_id(), -1521715232, 0, 0, -1);
		return true;
	}
	if (func_43(uVar714, 8388608))
	{
		return true;
	}
	if (_0x2963b5c1637e8a27(&(Local_718.f_1[0])) == Global_35)
	{
		_0x785177e4d57d7389(player_id(), -1521715232, 0, 0, -1);
		return true;
	}
	return false;
}

int func_64()
{
	if (!func_43(uVar714, 4096))
	{
		func_81(vLocal_627[3]);
	}
	Global_1430221->f_2 = 1;
	func_139(&Local_718, iVar601, &vLocal_627, &uLocal_1839, &uLocal_1867, &uLocal_716, &uLocal_717, &iLocal_606, Local_15[0], Local_432[0], 1, !func_165(&Local_718, iVar601));
	add_shocking_event_for_entity(1498498500, Global_35, 5f, 20f, 10f, -1f, -1f, 180f, false, false, -1, -1);
	func_81(&(Local_718.f_1106));
	func_12(&uLocal_716, 65536, 1);
	func_81(vLocal_627[14]);
	return 1;
}

void func_65(var uParam0)
{
	*uParam0 = (get_game_timer() + get_random_int_in_range(7000, 11000));
}

void func_66(int iParam0, int iParam1)
{
	if (!func_1(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

void func_67(var uParam0, var uParam1)
{
	if (func_166(uParam0, uParam1))
	{
		func_81((*uParam1)[18]);
		report_police_spotted_player(get_player_index());
	}
}

void func_68(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6)
{
	if (iParam4 < 0 || iParam4 >= iParam0->f_1098)
	{
		return;
	}
	if (func_43(*uParam2, 512) || !is_player_control_on(get_player_index()))
	{
		if (is_entity_dead(Global_35))
		{
			return;
		}
		if (has_anim_event_fired(Global_35, 152436526))
		{
			func_167(Global_35, 0, 0, 1, 1, 0);
			func_34(&(iParam0->f_1[iParam4]->f_4), 2);
			if (!func_125((*uParam1)[19]))
			{
				func_81((*uParam1)[19]);
			}
		}
		if (func_168(uParam1, uParam2, uParam5) && iParam4 > -1)
		{
			iVar0 = get_random_int_in_range(0, iParam0->f_1[iParam4]->f_8);
			iVar0 = &iParam0->f_1[iParam4]->f_11[iVar0];
			if (iVar0 > -1)
			{
				func_65(uParam6);
				func_134(&(iParam0->f_310[iVar0]), Global_35, func_169(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
			}
		}
		if (func_170(uParam1))
		{
			func_121((*uParam1)[15]);
			set_player_control(get_player_index(), true, 0, false);
			func_98(uParam3, 134217728);
			func_12(uParam2, 512, 0);
		}
		else
		{
			set_player_control(get_player_index(), false, func_171(), false);
			func_14(uParam3, 134217728);
			_display_hud_component(724769646);
		}
	}
}

void func_69(var uParam0)
{
	if (func_43(*uParam0, 536870912) && func_172(uParam0, 0))
	{
		func_83(1);
		func_12(uParam0, 536870912, 0);
	}
}

void func_70()
{
	if (does_entity_exist(&(Local_718.f_1[0])))
	{
		if (func_173())
		{
			func_174(1);
			_0xedfc6c1fd1c964f5(get_player_index(), 1685924442, 0, 0, 0, 0, 0, 0, 0);
			if (!_0xad401c63158acbaa(player_id()))
			{
				if (func_175())
				{
					_0x75cbf20ba47e4f89(Global_36, 0);
				}
				else
				{
					_0x75cbf20ba47e4f89(Global_36, -867256593);
				}
			}
			_0x987be590fb9d41e5(1);
			_0xdcf12b89624aac96(1);
			func_81(vLocal_627[18]);
			func_81(vLocal_627[19]);
			if (func_176())
			{
				if (func_177(&Local_718))
				{
					_0x787e43477746876f(&(Local_718.f_1[0]));
					_0x4182c037aa1f0091(&(Local_718.f_1[0]), 0);
					_0x9f29999dfdf2aeb8(&(Local_718.f_1[0]), 7f);
				}
			}
			else if (func_177(&Local_718))
			{
				func_178(&(Local_718.f_1[0]), 0f);
				func_179();
			}
			func_12(&uLocal_716, 4, 1);
		}
		if (func_180())
		{
			func_179();
			func_12(&uLocal_716, 1024, 1);
		}
	}
}

void func_71(int iParam0)
{
	if (get_game_timer() >= iVar606)
	{
		if (is_ambient_speech_playing(Global_35))
		{
			func_65(&uLocal_609);
		}
		else if (!func_43(uVar713, 8) && iParam0 > -1)
		{
			if (iParam0 != 0)
			{
				if (func_43(uVar713, 4096))
				{
					iVar0 = func_132(iParam0);
					if (iVar0 != 0)
					{
						if (!is_ambient_speech_playing(iVar0))
						{
							if (func_134(iVar0, Global_35, func_181(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0))
							{
								func_65(&uLocal_609);
							}
						}
						else
						{
							func_65(&uLocal_609);
						}
					}
				}
			}
		}
	}
}

void func_72()
{
	if ((func_125(&(Local_718.f_1109)) && func_43(uVar714, 33554432)) && !func_127(&(Local_718.f_1109), 3f))
	{
		return;
	}
	bVar0 = func_182(4);
	if (func_43(uVar714, 33554432))
	{
		if (!bVar0)
		{
			func_12(&uLocal_716, 33554432, 0);
			func_81(&(Local_718.f_1109));
		}
	}
	else if (bVar0)
	{
		func_12(&uLocal_716, 33554432, 1);
		func_81(&(Local_718.f_1109));
	}
}

void func_73()
{
	if (!func_43(uVar714, 8192))
	{
		if (_0x9d5c9a5a3321b128(player_id()))
		{
			func_12(&uLocal_716, 8192, 1);
			func_12(&uLocal_716, 16, 1);
			return;
		}
	}
	if (func_43(uVar714, 64))
	{
		return;
	}
	if (!func_43(uVar714, 16))
	{
		if (func_94(iVar716, 60f, 1))
		{
			if (!func_183(player_id(), 1, 0, 1))
			{
				iVar2 = (get_frame_count() % 7) * 7;
				iVar3 = (iVar2 + 7 - 1);
				if (iVar3 >= Local_718.f_1099)
				{
					iVar3 = (Local_718.f_1099 - 1);
				}
				iVar1 = iVar2;
				while (iVar1 <= iVar3)
				{
					iVar0 = &Local_718.f_310[iVar1];
					if (!is_entity_dead(iVar0))
					{
					}
					else
					{
						iVar1++;
					}
				}
				if (!is_entity_dead(iVar0))
				{
					clear_ped_tasks(iVar0, 1, 0);
					set_ped_config_flag(iVar0, 146, false);
					set_ped_config_flag(iVar0, 190, true);
					_0xc6c4e15cf7d52fea(iVar0, 1000f);
					func_174(1);
					_0xedfc6c1fd1c964f5(player_id(), 1685924442, 0, 0, 0, 0, 0, 0, 0);
					if (!_0xad401c63158acbaa(player_id()))
					{
						if (func_175())
						{
							_0x75cbf20ba47e4f89(Global_36, 0);
						}
						else
						{
							_0x75cbf20ba47e4f89(Global_36, -867256593);
						}
					}
					_0x987be590fb9d41e5(1);
					_0xdcf12b89624aac96(1);
					_0xd7494ded50c6ef52(player_id(), 1685924442, 2);
					_0xf0b67bad53c35bd9(iVar0, Global_35, iVar0, Global_36, 1685924442);
					set_ped_flee_attributes(iVar0, 32768, false);
					func_12(&uLocal_716, 16, 1);
				}
			}
		}
	}
}

void func_74(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_75(var uParam0, int iParam1)
{
	return func_11(*uParam0, iParam1);
}

struct<2> func_76(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_77(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_78()
{
	if (does_entity_exist(&(Local_718.f_1[0])))
	{
		_0x4182c037aa1f0091(&(Local_718.f_1[0]), 1);
		_0xdc69f6913cca0b99(&(Local_718.f_1[0]), 0);
		set_train_cruise_speed(&(Local_718.f_1[0]), 10f);
		_0x9f29999dfdf2aeb8(&(Local_718.f_1[0]), 10f);
	}
}

void func_79(int iParam0)
{
	func_80(iParam0, 16);
}

void func_80(int iParam0, int iParam1)
{
	if (!func_1(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (&Global_40.f_11029[iParam0] - (Global_40.f_11029[iParam0] && iParam1));
}

void func_81(var uParam0)
{
	func_184(uParam0, 0f);
}

void func_82()
{
	_uilog_clear_cached_objective();
}

void func_83(int iParam0)
{
	sVar0 = func_185(iParam0);
	if (!is_string_null_or_empty(sVar0))
	{
		func_186(sVar0, 0);
	}
}

void func_84(int* iParam0)
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

void func_85(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

int func_86(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 1;
	}
	else if (iParam0->f_1[iParam1]->f_6 == 3)
	{
		return 2;
	}
	else if (iParam0->f_1[iParam1]->f_6 == 1)
	{
		return 2;
	}
	else if (iParam0->f_1[iParam1]->f_6 == 2)
	{
		return 7;
	}
	return 0;
}

bool func_87(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_187() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_88(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_187() != -1)
	{
		uVar3 = &Global_36638.f_1444[iVar1];
		clear_bit(&uVar3, iVar2);
		Global_36638.f_1444[iVar1] = uVar3;
		return;
	}
	uVar4 = &Global_40.f_7832[iVar1];
	clear_bit(&uVar4, iVar2);
	Global_40.f_7832[iVar1] = uVar4;
}

void func_89(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_188(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (bParam2)
		{
			func_189(iParam0, 4);
		}
		else
		{
			func_190(iParam0, 33554432);
		}
	}
	else if (bParam2)
	{
		func_191(iParam0, 4);
	}
	else
	{
		func_192(iParam0, 33554432);
	}
	_0x9b4e793b1cb6550a();
	func_193(iParam0);
}

bool func_90(bool bParam0)
{
	iVar0 = get_cause_of_most_recent_force_cleanup();
	if (bParam0)
	{
		return true;
	}
	if (func_17(iVar0))
	{
		return false;
	}
	if (func_77(iVar0, 1) || func_77(iVar0, 2))
	{
		return true;
	}
	return false;
}

bool func_91(int iParam0, bool bParam1, bool bParam2)
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
		if (func_194())
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
		iVar0 = func_195(&(Global_1898164->f_1[0]));
		if (func_196(iVar0) && func_197((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_198(&(Global_1898164->f_1[0])))
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

int func_92(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

bool func_93(int iParam0)
{
	if ((*iParam0 == 0 || *iParam0 == 1) || *iParam0 == 14)
	{
		return true;
	}
	return false;
}

bool func_94(int iParam0, float fParam1, bool bParam2)
{
	if (iParam0 != 14 && !bParam2)
	{
		return func_199(iParam0, Global_36) > fParam1;
	}
	return !func_124(iParam0, Local_718.f_1[0], fParam1, -1);
}

bool func_95(vector3 vParam0, float fParam3, bool bParam4)
{
	vParam0.f_2 = 0f;
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (_does_volume_exist((*Global_1888801)[iVar0]->f_3))
		{
			if ((*Global_1888801)[iVar0]->f_20 == 1 || (!bParam4 && (*Global_1888801)[iVar0]->f_20 == 2))
			{
				vVar1 = { _0xf70f00013a62f866((*Global_1888801)[iVar0]->f_3) };
				vVar1.f_2 = 0f;
				fVar4 = vdist2(vParam0, vVar1);
				if (fVar4 < (fParam3 * fParam3))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

float func_96(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_97()
{
	iVar0 = func_200(0, 0);
	if (func_201(iVar0))
	{
		return true;
	}
	iVar0 = func_202(0, 0);
	if (func_201(iVar0))
	{
		return true;
	}
	return false;
}

void func_98(var uParam0, int iParam1)
{
	if (func_75(uParam0, iParam1))
	{
		func_74(uParam0, iParam1);
	}
}

void func_99(var uParam0)
{
	if (!func_43(*uParam0, 4194304))
	{
		func_203(func_76(978382515, 1015970717), 1);
		func_12(uParam0, 4194304, 1);
	}
}

bool func_100()
{
	if (func_43(uVar714, 65536))
	{
		return false;
	}
	if (func_204())
	{
		return true;
	}
	return false;
}

Vector3 func_101(vector3 vParam0, vector3 vParam3, float fParam6)
{
	if (vParam0.x < vParam3.x)
	{
		vVar0.x = (vParam0.x - fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x - fParam6);
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_1 = (vParam0.y - fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y - fParam6);
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_2 = (vParam0.z - fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z - fParam6);
	}
	return vVar0;
}

Vector3 func_102(vector3 vParam0, vector3 vParam3, float fParam6)
{
	if (vParam0.x > vParam3.x)
	{
		vVar0.x = (vParam0.x + fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x + fParam6);
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_1 = (vParam0.y + fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y + fParam6);
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_2 = (vParam0.z + fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z + fParam6);
	}
	return vVar0;
}

void func_103(int iParam0, int iParam1)
{
	if (!does_entity_exist(&(iParam0->f_1[iParam1])))
	{
		return;
	}
	iVar0 = get_entity_model(&(iParam0->f_1[iParam1]));
	iParam0->f_1[iParam1]->f_6 = func_205(iVar0);
	iParam0->f_1[iParam1]->f_7 = func_206(iVar0);
}

void func_104(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4, float fParam5, bool bParam6, int iParam7, bool bParam8, char* sParam9)
{
	vVar6 = { get_entity_rotation(*uParam0, 2) };
	vVar6.x = 0f;
	vVar6.f_1 = 0f;
	StringCopy(&cVar9, "Car_", 16);
	if (!bParam8)
	{
		_int_to_string(iParam2, "%d", &cVar11);
		StringConCat(&cVar9, &cVar11, 16);
		if (bParam6)
		{
			StringConCat(&cVar9, "def", 16);
		}
	}
	else
	{
		StringCopy(&cVar9, sParam9, 16);
	}
	if ((fParam3 != -1f || fParam4 != -1f) || fParam5 != -1f)
	{
		*uParam1 = _create_volume_box_with_custom_name(get_entity_coords(*uParam0, true, false), vVar6, fParam3, fParam4, fParam5, &cVar9);
	}
	else
	{
		iVar15 = get_entity_model(*uParam0);
		get_model_dimensions(iVar15, &vVar0, &vVar3);
		vVar16 = { (1f * (vVar3.x - vVar0.x)), (1f * (vVar3.y - vVar0.y)), (vVar3.z - vVar0.z) };
		if (bParam6)
		{
			if (iVar15 != -1946016570)
			{
				vVar16.x = (vVar16.x - 1.2f);
				vVar16.f_1 = (vVar16.y - 4f);
			}
			else
			{
				vVar16.x = (vVar16.x - 1.2f);
				vVar16.f_1 = (vVar16.y - 2.2f);
			}
			vVar16.f_2 = 2f;
		}
		*uParam1 = _create_volume_box_with_custom_name(get_entity_coords(*uParam0, true, false), vVar6, vVar16, &cVar9);
	}
	vVar19 = { 0f, iParam7, ((vVar3.z - vVar0.z) / 2f) };
	if (bParam6)
	{
		vVar19.f_2 = 2f;
	}
	_0x7c00cfc48a782dc0(*uParam1, *uParam0, vVar19, 0f, 0f, 0f, 2, 1);
}

int func_105(var uParam0)
{
	if (does_entity_exist(uParam0[0]))
	{
		if (is_entity_dead(uParam0[0]))
		{
		}
		iVar1 = 1;
		while (iVar1 <= (*uParam0 - 1))
		{
			iVar0 = get_train_carriage(uParam0[0], iVar1);
			if (does_entity_exist(iVar0))
			{
				(*uParam0)[iVar1] = iVar0;
			}
			else
			{
				return iVar1;
			}
			iVar1++;
		}
	}
	else
	{
		return 0;
	}
	return *uParam0;
}

void func_106(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iParam0->f_1[iParam1]->f_11[iVar0] = -1;
		iVar0++;
	}
}

int func_107()
{
	iVar0 = get_random_int_in_range(0, 4);
	switch (iVar0)
	{
		case 0:
			return -1281909308;
		case 1:
			return 531516298;
		case 2:
			return 178323656;
		default:
			break;
	}
	return -1281909308;
}

void func_108(var uParam0, int iParam1)
{
	func_207(uParam0, iParam1);
}

int func_109(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (iParam0->f_1[iVar0]->f_6 != 2)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_110(int iParam0, int iParam1, bool bParam2)
{
	iVar21 = &iParam0->f_1[iParam1];
	if (!does_entity_exist(iVar21))
	{
		return 0;
	}
	StringCopy(&cVar13, "Car_", 32);
	_int_to_string(iParam1, "%d", &cVar17);
	StringConCat(&cVar13, &cVar17, 32);
	StringConCat(&cVar13, "_ScenarioBlocker", 32);
	vVar7 = { get_entity_rotation(iVar21, 2) };
	iVar22 = get_entity_model(iVar21);
	get_model_dimensions(iVar22, &vVar1, &vVar4);
	vVar23 = { (vVar4.x - vVar1.x), (vVar4.y - vVar1.y), (vVar4.z - vVar1.z) };
	vVar23.f_1 = (vVar23.y / 2f);
	if (bParam2)
	{
		vVar10 = { 0f, ((vVar23.y / 2f) - (vVar23.y / 4f)), 0f };
	}
	else
	{
		vVar10 = { 0f, ((-vVar23.y / 2f) + (vVar23.y / 4f)), 0f };
	}
	iVar0 = _create_volume_box_with_custom_name(get_entity_coords(iVar21, true, false), vVar7, vVar23, &cVar13);
	_0x7c00cfc48a782dc0(iVar0, iVar21, vVar10, 0f, 0f, 0f, 2, 1);
	return iVar0;
}

var func_111(int iParam0)
{
	func_208(iParam0, 0);
	_0x18262cafebb5fbe1(iParam0, 0, 0, 0, -1, -1, 32);
	_0xb56d41a694e42e86(iParam0, 0, 0, 0, -1, -1, 32);
	return _0x4c39c95ae5db1329(iParam0, 0, 15);
}

int func_112(int iParam0)
{
	iVar0 = (iParam0->f_1098 - 1);
	while (iVar0 >= 0)
	{
		if (iParam0->f_1[iVar0]->f_6 != 2)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0 = (iVar0 + -1);
	}
	return -1;
}

void func_113(int iParam0)
{
	if (func_93(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (&iParam0->f_941[iVar0] >= 0)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (iParam0->f_941[iVar0]->f_3[iVar1]->f_7 != 0)
					{
						request_model(iParam0->f_941[iVar0]->f_3[iVar1]->f_7, false);
					}
					iVar1++;
				}
			}
			iVar0++;
		}
		request_model(func_136(), false);
	}
}

void func_114(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_210(func_209(iVar0), uParam0);
		iVar0++;
	}
}

bool func_115()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!prepare_music_event(func_185(iVar0)))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_116(int iParam0)
{
	if (func_93(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (&iParam0->f_941[iVar0] >= 0)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (iParam0->f_941[iVar0]->f_3[iVar1]->f_7 != 0 && !has_model_loaded(iParam0->f_941[iVar0]->f_3[iVar1]->f_7))
					{
						return false;
					}
					iVar1++;
				}
			}
			iVar0++;
		}
		if (!has_model_loaded(func_136()))
		{
			return false;
		}
	}
	return true;
}

int func_117(vector3 vParam0, var uParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
{
	iVar4 = 1;
	if (iParam7 < 0 || iParam7 >= *uParam3)
	{
		iParam7 = (*uParam3 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (bParam8 && does_entity_exist((*uParam3)[iVar0]->f_8))
		{
		}
		else if ((*uParam3)[iVar0]->f_7 != 0 && !func_211((*uParam3)[iVar0]->f_11, 16))
		{
			if (!has_model_loaded((*uParam3)[iVar0]->f_7))
			{
				iVar4 = 0;
			}
			else
			{
				if ((*uParam3)[iVar0]->f_9 != -1)
				{
					iVar8 = (*uParam3)[iVar0]->f_9;
					vVar5 = { get_offset_from_entity_in_world_coords((*uParam3)[iVar8]->f_8, *(*uParam3)[iVar0]) };
					if (func_211((*uParam3)[iVar0]->f_11, 64))
					{
						(*uParam3)[iVar0]->f_8 = create_object_no_offset((*uParam3)[iVar0]->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(*uParam3)[iVar0]->f_8 = create_object((*uParam3)[iVar0]->f_7, vVar5, true, true, false, false, true);
					}
					attach_entity_to_entity((*uParam3)[iVar0]->f_8, (*uParam3)[iVar8]->f_8, 0, *(*uParam3)[iVar0], (*uParam3)[iVar0]->f_4, false, false, false, false, 2, true, false, false);
				}
				else
				{
					if (!func_211((*uParam3)[iVar0]->f_11, 8))
					{
						vVar5 = { _get_object_offset_from_coords(vParam0, fParam4, *(*uParam3)[iVar0]) };
					}
					else
					{
						vVar5 = { *(*uParam3)[iVar0] };
					}
					if (!func_211((*uParam3)[iVar0]->f_11, 128))
					{
						func_212(&vVar5, (*uParam3)[iVar0]->f_10);
					}
					if (func_211((*uParam3)[iVar0]->f_11, 64))
					{
						(*uParam3)[iVar0]->f_8 = create_object_no_offset((*uParam3)[iVar0]->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(*uParam3)[iVar0]->f_8 = create_object((*uParam3)[iVar0]->f_7, vVar5, true, true, false, false, true);
					}
					if (func_213((*uParam3)[iVar0]->f_4))
					{
						vVar1 = { 0f, 0f, (*uParam3)[iVar0]->f_3 };
					}
					else
					{
						vVar1 = { (*uParam3)[iVar0]->f_4 };
					}
					if (func_211((*uParam3)[iVar0]->f_11, 4))
					{
						vVar1.f_2 = func_214((vVar1.z + fParam4));
					}
					set_entity_rotation((*uParam3)[iVar0]->f_8, vVar1, 2, true);
					if (!func_211((*uParam3)[iVar0]->f_11, 128))
					{
						if ((*uParam3)[iVar0]->f_10)
						{
							_0x9587913b9e772d29((*uParam3)[iVar0]->f_8, 0);
						}
					}
				}
				if (func_211((*uParam3)[iVar0]->f_11, 2))
				{
					freeze_entity_position((*uParam3)[iVar0]->f_8, true);
				}
				if (func_211((*uParam3)[iVar0]->f_11, 32))
				{
					set_entity_visible((*uParam3)[iVar0]->f_8, false);
				}
				if (bParam5)
				{
					set_entity_load_collision_flag((*uParam3)[iVar0]->f_8, 1);
					activate_physics((*uParam3)[iVar0]->f_8);
				}
				_0xa91e6cf94404e8c9((*uParam3)[iVar0]->f_8);
				vVar9 = { get_entity_coords((*uParam3)[iVar0]->f_8, true, false) };
			}
		}
		iVar0++;
	}
	return iVar4;
}

void func_118(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		if (iParam0->f_941[iParam1]->f_3[iVar0]->f_7 != 0)
		{
			vVar1 = { get_offset_from_entity_in_world_coords(&(iParam0->f_1[&iParam0->f_941[iParam1]]), *iParam0->f_941[iParam1]->f_3[iVar0]) };
			fVar4 = (get_entity_heading(&(iParam0->f_1[&iParam0->f_941[iParam1]])) + iParam0->f_941[iParam1]->f_3[iVar0]->f_3);
			_set_entity_coords_and_heading(iParam0->f_941[iParam1]->f_3[iVar0]->f_8, vVar1, fVar4, true, false, true);
			attach_entity_to_entity(iParam0->f_941[iParam1]->f_3[iVar0]->f_8, &(iParam0->f_1[&iParam0->f_941[iParam1]]), 0, *iParam0->f_941[iParam1]->f_3[iVar0], 0f, 0f, iParam0->f_941[iParam1]->f_3[iVar0]->f_3, false, false, false, false, 2, true, false, false);
			set_entity_proofs(iParam0->f_941[iParam1]->f_3[iVar0]->f_8, 6, false);
		}
		iVar0++;
	}
}

void func_119(int iParam0, int iParam1)
{
	if (func_11(iParam0->f_1[iParam1]->f_4, 65536))
	{
		return;
	}
	switch (iParam0->f_1[iParam1]->f_3)
	{
		case 0:
			if (does_entity_exist(&(iParam0->f_1[iParam1])))
			{
				if (func_215(iParam0, iParam1))
				{
					_0x119a5714578f4e05(&(iParam0->f_1[iParam1]), 1);
				}
				func_74(&(iParam0->f_1[iParam1]->f_4), 4);
				if (!func_11(iParam0->f_1[iParam1]->f_4, 131072))
				{
					_0xf008e0ba1fe1d644(func_86(iParam0, iParam1));
					func_34(&(iParam0->f_1[iParam1]->f_4), 131072);
				}
				iParam0->f_1[iParam1]->f_3 = 2;
			}
			break;
		case 2:
			func_216(iParam0, iParam1);
			func_34(&(iParam0->f_1[iParam1]->f_4), 4);
			func_217(iParam1);
			break;
	}
}

void func_120(int iParam0, int iParam1, bool bParam2)
{
	if (!_does_volume_exist(iParam0->f_1[iParam1]->f_1))
	{
		return;
	}
	if (!func_11(iParam0->f_1[iParam1]->f_4, 16))
	{
		if (bParam2)
		{
			func_208(iParam0->f_1[iParam1]->f_1, 0);
		}
		_0xd4907ef4334c7602(&(iParam0->f_1[iParam1]), 1);
		_0x68830738a6bfb370(&(iParam0->f_1[iParam1]), 1);
		_0x119a5714578f4e05(&(iParam0->f_1[iParam1]), 0);
		func_34(&(iParam0->f_1[iParam1]->f_4), 16);
	}
	else if (bParam2 && !func_11(iParam0->f_1[iParam1]->f_4, 8192))
	{
		func_208(iParam0->f_1[iParam1]->f_1, 0);
		func_34(&(iParam0->f_1[iParam1]->f_4), 8192);
	}
}

void func_121(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_122(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_218((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_219(&((*uParam0)[iVar0]->f_6), 1, 1);
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

bool func_123(int iParam0)
{
	switch (iParam0)
	{
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			return true;
	}
	return false;
}

bool func_124(int iParam0, var uParam1, float fParam2, int iParam3)
{
	if (!func_220(iParam0) && iParam0 != 14)
	{
		return false;
	}
	if (iParam0 != 14)
	{
		if (!does_entity_exist(*uParam1) || is_entity_dead(*uParam1))
		{
			if (func_221(Global_35, _0x1e8a921112891651((*Global_1425371)[iParam0]->f_1), 1) < (fParam2 * fParam2))
			{
				return true;
			}
			*uParam1 = _0x6e585a616abb8401((*Global_1425371)[iParam0]->f_1);
		}
	}
	if (does_entity_exist(*uParam1) && !is_entity_dead(*uParam1))
	{
		if (func_222(Global_35, *uParam1, 1) < (fParam2 * fParam2))
		{
			return true;
		}
		if (iParam3 < 0)
		{
			iVar0 = _0x671a07c9a1cd50a5(*uParam1);
		}
		else
		{
			iVar0 = get_train_carriage(*uParam1, iParam3);
		}
		if (does_entity_exist(iVar0))
		{
			if (func_222(Global_35, iVar0, 1) < (fParam2 * fParam2))
			{
				return true;
			}
		}
		iVar1 = _0x60b7d1dcc312697d(*uParam1);
		if (iVar1 > 3)
		{
			iVar1 = (iVar1 / 2);
			iVar2 = get_train_carriage(*uParam1, iVar1);
			if (does_entity_exist(iVar2))
			{
				if (func_222(Global_35, iVar2, 1) < (fParam2 * fParam2))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_125(var uParam0)
{
	return func_223(*uParam0, 1);
}

bool func_126()
{
	if (!func_1(iVar716) && iVar716 != 14)
	{
		return false;
	}
	if (iVar716 == 14)
	{
		uVar0 = _0x45853f4e17d847d5(&(Local_718.f_1[0]));
	}
	else
	{
		uVar0 = (*Global_1425371)[iVar716]->f_1;
	}
	if (!_0x0516fae561276efc(uVar0))
	{
		return false;
	}
	return !_0x37d238be69f7378a(uVar0);
}

bool func_127(var uParam0, float fParam1)
{
	if (!func_125(uParam0))
	{
		return false;
	}
	if (func_224(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_128(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (does_entity_exist(&(iParam0->f_1[iVar0])))
		{
			if (!does_entity_exist(*uParam1))
			{
				return false;
			}
			if (is_ped_on_specific_vehicle(*uParam1, &(iParam0->f_1[iVar0])))
			{
				return true;
			}
			if (func_225(*uParam1, &(iParam0->f_1[iVar0]), 0))
			{
				return true;
			}
			if (_does_volume_exist(iParam0->f_1[iVar0]->f_1) && is_entity_in_volume(*uParam1, iParam0->f_1[iVar0]->f_1, true, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_129(int iParam0)
{
	if (_0xe887bd31d97793f6(&(iParam0->f_1[0])))
	{
		return true;
	}
	if (get_entity_speed(&(iParam0->f_1[0])) > 0.2f)
	{
		return false;
	}
	if (_0xde8c5b9f65017fa1(&(iParam0->f_1[0])) <= 0)
	{
		return false;
	}
	uVar1 = _0xaf787e081ac4a8ee(&(iParam0->f_1[0]));
	iVar0 = _0x86fa6d8b48667d75(&(iParam0->f_1[0]));
	if (iVar0 >= 0)
	{
		vVar2 = { _0xba958f68031ddbfc(uVar1, iVar0) };
		fVar5 = func_96(&(iParam0->f_1[0]), vVar2, 1);
		if (fVar5 < 25f)
		{
			return true;
		}
	}
	iVar0 = _0x1180a2974d251b7b(&(iParam0->f_1[0]));
	if (iVar0 >= 0)
	{
		vVar2 = { _0xba958f68031ddbfc(uVar1, iVar0) };
		fVar5 = func_96(&(iParam0->f_1[0]), vVar2, 1);
		if (fVar5 < 25f)
		{
			return true;
		}
	}
	return false;
}

bool func_130(var uParam0, float fParam1)
{
	if (func_127(uParam0, fParam1))
	{
		func_121(uParam0);
		return true;
	}
	return false;
}

bool func_131(int iParam0)
{
	if (!func_11(Local_718.f_1[iParam0]->f_4, 1))
	{
		if (func_11(Local_718.f_1[iParam0]->f_4, 4))
		{
			if (Local_718.f_1[iParam0]->f_8 <= 0 || Local_718.f_1[iParam0]->f_9 >= Local_718.f_1[iParam0]->f_8)
			{
				return true;
			}
			iVar0 = 0;
			while (iVar0 < Local_718.f_1[iParam0]->f_8)
			{
				iVar1 = &Local_718.f_1[iParam0]->f_11[iVar0];
				if (func_226(iParam0, iVar1))
				{
					return false;
				}
				iVar0++;
			}
			func_34(&(Local_718.f_1[iParam0]->f_4), 1);
		}
		else
		{
			return false;
		}
	}
	return true;
}

int func_132(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Local_718.f_1[iParam0]->f_8 == 0)
	{
		return 0;
	}
	iVar0 = get_random_int_in_range(0, Local_718.f_1[iParam0]->f_8);
	iVar2 = 0;
	while (!func_227(iParam0, iVar0) && iVar1 < 10)
	{
		iVar0 = func_228(0, Local_718.f_1[iParam0]->f_8, iVar0);
		iVar1++;
	}
	iVar3 = &Local_718.f_1[iParam0]->f_11[iVar0];
	if (func_227(iParam0, iVar0))
	{
		iVar2 = &Local_718.f_310[iVar3];
	}
	return iVar2;
}

char* func_133(bool bParam0)
{
	iVar0 = get_random_int_in_range(0, 3);
	if (bParam0)
	{
		switch (iVar0)
		{
			case 0:
			case default:
				return "PLEAD";
			case 1:
				return "INTIMIDATED_AGAIN_GEN";
			case 2:
				return "GENERIC_FRIGHTENED_HIGH";
				switch (iVar0)
				{
					case 0:
					case default:
						return "INTIMIDATED_AGAIN_ROB";
					case 1:
						return "SCARED_HELP";
					case 2:
						return "GENERIC_FRIGHTENED_HIGH";
						default:
							break;
				}
				default:
					break;
		}
	}
}

bool func_134(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_229(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

char* func_135(bool bParam0)
{
	if (bParam0)
	{
		return "GENERIC_CURSE_MED";
	}
	return "WHATS_GOING_ON";
}

int func_136()
{
	return -64257206;
}

int func_137(int iParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6)
{
	if (does_entity_exist(*uParam2))
	{
		return 1;
	}
	if (!_0xf42db680a8b2a4d9(iParam0))
	{
		return 0;
	}
	iVar8 = -1;
	fVar10 = 99999.9f;
	iVar0 = create_itemset(false);
	iVar6 = _get_entities_from_propset(iParam0, iVar0, iParam1, false, false);
	iVar7 = 0;
	while (iVar7 < iVar6)
	{
		if (iVar7 < iVar1)
		{
			iVar1[iVar7] = _0x18013392501ce5dc(get_indexed_item_in_itemset(iVar7, iVar0));
			fVar9 = func_96(&(iVar1[iVar7]), vParam3, 1);
			if (fVar9 < fVar10 && (fParam6 < 0f || fVar9 < fParam6))
			{
				fVar10 = fVar9;
				iVar8 = iVar7;
			}
		}
	else
	{
		}
		else
		{
			iVar7++;
		}
	}
	_0x20a4bf0e09bee146(iVar0);
	clean_itemset(iVar0);
	destroy_itemset(iVar0);
	if (iVar8 >= 0)
	{
		*uParam2 = &iVar1[iVar8];
		return 1;
	}
	return 0;
}

Vector3 func_138(bool bParam0)
{
	if (!bParam0)
	{
		return -0.3f, -0.025f, -0.8f;
	}
	return 1.35f, -0.52f, 0.94f;
}

int func_139(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, var uParam8, int* iParam9, bool bParam10, bool bParam11)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if (func_43(*uParam5, 4096))
	{
		return 0;
	}
	if (!func_11(iParam0->f_1[iParam1]->f_4, 2))
	{
		if (!func_43(*uParam5, 536870912))
		{
			func_83(0);
			func_12(uParam5, 536870912, 1);
		}
		if (bParam10 || bParam11)
		{
			if (func_230(iParam0, uParam5, iParam1, bParam10) && !bParam11)
			{
				if (iParam0->f_1[iParam1]->f_6 == 2)
				{
					func_231(iParam0->f_1[iParam1]->f_8, iParam0->f_1[iParam1]->f_7);
				}
			}
			func_232(uParam5);
			func_34(&(iParam0->f_1[iParam1]->f_4), 2);
			if (!func_125((*uParam2)[12]))
			{
				func_81((*uParam2)[12]);
			}
			func_81((*uParam2)[15]);
			func_45(iParam0, iParam1);
			if (*uParam4 != 0)
			{
				func_233(uParam3, uParam4);
			}
			return 1;
		}
		if (!func_230(iParam0, uParam5, iParam1, 0))
		{
			return 0;
		}
		if (!func_43(*uParam5, 134217728))
		{
			func_234(iParam0, iParam1, uParam2, uParam5, uParam6, iParam7, uParam8, iParam9);
			if (iParam0->f_1[iParam1]->f_6 == 2)
			{
				func_231(iParam0->f_1[iParam1]->f_8, iParam0->f_1[iParam1]->f_7);
			}
			func_232(uParam5);
			func_34(&(iParam0->f_1[iParam1]->f_4), 2);
			if (!func_125((*uParam2)[12]))
			{
				func_81((*uParam2)[12]);
			}
			func_45(iParam0, iParam1);
			if (*uParam4 != 0)
			{
				func_233(uParam3, uParam4);
			}
		}
		return 1;
	}
	return 0;
}

void func_140(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iParam0->f_1098)
	{
		if (func_11(iParam0->f_1[iVar0]->f_4, 32768))
		{
			func_12(&uLocal_716, 16777216, 1);
			return;
		}
		iVar0++;
	}
	func_12(&uLocal_716, 16777216, 0);
}

bool func_141(var uParam0)
{
	if (func_43(*uParam0, 64))
	{
		return true;
	}
	if (func_43(*uParam0, 4096))
	{
		return true;
	}
	if (func_43(*uParam0, 1048576))
	{
		return true;
	}
	if (func_43(*uParam0, 67108864))
	{
		return true;
	}
	if (func_43(*uParam0, 2048))
	{
		return true;
	}
	if (func_43(*uParam0, 2097152))
	{
		return true;
	}
	if (func_43(*uParam0, 1024))
	{
		return true;
	}
	if (func_43(*uParam0, 8192))
	{
		return true;
	}
	if (func_43(*uParam0, 256))
	{
		return true;
	}
	if (func_43(*uParam0, 2))
	{
		return true;
	}
	if (func_43(*uParam0, 16384))
	{
		return true;
	}
	if (func_43(*uParam0, 65536))
	{
		return true;
	}
	if (func_43(*uParam0, 32768))
	{
		return true;
	}
	if (func_43(*uParam0, 4))
	{
		return true;
	}
	return false;
}

void func_142(int iParam0, int iParam1)
{
	if (!func_11(iParam0->f_1[iParam1]->f_4, 16384) && *iParam0 == 14)
	{
		func_235(&(iParam0->f_1[iParam1]));
		func_34(&(iParam0->f_1[iParam1]->f_4), 16384);
	}
}

void func_143(int iParam0, bool bParam1, bool bParam2)
{
	func_236(&Local_718, &uLocal_716, &vLocal_627, iParam0);
	func_237(&Local_718, &uLocal_716, &vLocal_627, iParam0);
	func_238(&Local_718, &uLocal_716, &uLocal_717, iParam0);
	if (Local_718.f_1[iParam0]->f_8 == 0)
	{
		return;
	}
	func_239(iParam0);
	iVar0 = 0;
	iVar1 = (Local_718.f_1[iParam0]->f_8 - 1);
	if ((!func_11(Local_718.f_1[iParam0]->f_4, 2) && !func_43(uVar711, 8388608)) && func_125(vLocal_627[8]))
	{
		Local_718.f_1[iParam0]->f_21 = func_240(iParam0);
	}
	else
	{
		Local_718.f_1[iParam0]->f_21 = 0;
	}
	iVar3 = iVar0;
	while (iVar3 <= iVar1)
	{
		iVar2 = &Local_718.f_1[iParam0]->f_11[iVar3];
		if (iVar2 < 0)
		{
			return;
		}
		if (func_75(&uLocal_717, 268435456) && func_144(&Local_718, iParam0))
		{
			func_241(&Local_718, iVar2, iParam0);
		}
		else if (does_entity_exist(&(Local_718.f_310[iVar2])))
		{
			if (!_does_scenario_point_exist(Local_718.f_310[iVar2]->f_6) && is_ped_using_any_scenario(&(Local_718.f_310[iVar2])))
			{
				Local_718.f_310[iVar2]->f_6 = _get_scenario_point_ped_is_using(&(Local_718.f_310[iVar2]), false);
			}
			func_242(&Local_718, iVar2);
			func_243(iParam0, iVar2);
			if (func_11(Local_718.f_310[iVar2]->f_7, 16))
			{
				if (is_entity_dead(&(Local_718.f_310[iVar2])))
				{
					if (Local_718.f_310[iVar2]->f_4 != 19)
					{
						*bParam1 = func_244(iParam0, iVar2);
						if (*bParam1)
						{
							func_245(&Local_718, iVar2, iVar598);
						}
						func_246(Local_718.f_310[iVar2], 19);
					}
				}
				else if (_0x0eaf918f751f27ba(&(Local_718.f_310[iVar2])))
				{
					if (Local_718.f_310[iVar2]->f_4 != 14)
					{
						func_246(Local_718.f_310[iVar2], 14);
					}
				}
				else if (Local_718.f_310[iVar2]->f_4 > 0)
				{
					if (((((((Local_718.f_310[iVar2]->f_4 != 16 && Local_718.f_310[iVar2]->f_4 != 15) && Local_718.f_310[iVar2]->f_4 != 19) && Local_718.f_310[iVar2]->f_4 != 14) && Local_718.f_310[iVar2]->f_4 != 20) && Local_718.f_310[iVar2]->f_3 != 1) && Local_718.f_310[iVar2]->f_3 != 0) && func_247(&Local_718, &uLocal_716, &vLocal_627, iParam0, iVar2, iVar598))
					{
						func_246(Local_718.f_310[iVar2], 15);
					}
					else if (((((((((Local_718.f_310[iVar2]->f_4 != 19 && Local_718.f_310[iVar2]->f_4 != 14) && Local_718.f_310[iVar2]->f_4 != 16) && Local_718.f_310[iVar2]->f_4 != 15) && Local_718.f_310[iVar2]->f_4 != 20) && Local_718.f_310[iVar2]->f_4 != 11) && Local_718.f_310[iVar2]->f_4 != 12) && Local_718.f_310[iVar2]->f_4 != 13) && Local_718.f_310[iVar2]->f_3 != 1) && Local_718.f_310[iVar2]->f_3 != 0)
					{
						if (!is_ped_using_any_scenario(&(Local_718.f_310[iVar2])))
						{
							if (((!is_ped_on_vehicle(&(Local_718.f_310[iVar2]), false) && !is_ped_in_any_vehicle(&(Local_718.f_310[iVar2]), false)) && !is_ped_on_specific_vehicle(&(Local_718.f_310[iVar2]), &(Local_718.f_1[iParam0]))) && !func_148(&(Local_718.f_310[iVar2]), Local_718.f_1[iParam0]->f_1, 1, 0))
							{
								func_246(Local_718.f_310[iVar2], 16);
							}
							else if (func_248(&Local_718, iVar2, iParam0, iVar598))
							{
								func_249(&Local_718, iVar2, iParam0);
							}
						}
					}
				}
				switch (Local_718.f_310[iVar2]->f_4)
				{
					case 0:
						func_250(&Local_718, iVar2);
						if (func_251(iParam0, iVar2))
						{
							Local_718.f_1[0]->f_11[0] = &Local_718.f_1[iParam0]->f_11[iVar3];
							func_34(&(Local_718.f_310[iVar2]->f_7), 2);
							Local_718.f_310[iVar2]->f_3 = 0;
							set_ped_config_flag(&(Local_718.f_310[iVar2]), 233, true);
							set_ped_config_flag(&(Local_718.f_310[iVar2]), 21, true);
							func_246(Local_718.f_310[iVar2], 4);
						}
						else if (Local_718.f_310[iVar2]->f_3 == 1)
						{
							func_246(Local_718.f_310[iVar2], 2);
						}
						else
						{
							func_246(Local_718.f_310[iVar2], 1);
						}
						break;
					case 4:
						func_252(&Local_718, &uLocal_716, iParam0, iVar2, iVar598, &vLocal_627, Local_432[iVar3], Local_15[iVar3], &uLocal_1838, &uLocal_1839, &uLocal_1867);
						bVar4 = func_253(&Local_718, iVar2, &uLocal_716, 0);
						if (func_254(&Local_718, iVar2, &uLocal_1839, &uLocal_1867, &uLocal_716, iVar598) || bVar4)
						{
							if (func_11(Local_718.f_310[iVar2]->f_7, 512) || func_172(&uLocal_716, 0))
							{
								func_255(&Local_718, &uLocal_1839, &uLocal_1867, &uLocal_716, iVar2);
							}
							else if ((func_256(iVar1862) || bVar4) || iVar1862 == 0)
							{
								func_257(&Local_718, &uLocal_716, iVar598, &uLocal_1839, &uLocal_1867, func_43(uVar711, 64), 0, 0);
							}
						}
						func_258(&Local_718, &vLocal_627, iVar598, &uLocal_1839, &uLocal_1867, &uLocal_716, 1);
						func_259(&Local_718, &(Local_718.f_310[iVar2]), iParam0, iVar2, 0);
						func_260(&Local_718, iVar2);
						break;
					case 5:
						func_258(&Local_718, &vLocal_627, iVar598, &uLocal_1839, &uLocal_1867, &uLocal_716, 0);
						func_252(&Local_718, &uLocal_716, iParam0, iVar2, iVar598, &vLocal_627, Local_432[iVar3], Local_15[iVar3], &uLocal_1838, &uLocal_1839, &uLocal_1867);
						if (!func_125(vLocal_627[7]))
						{
							func_81(vLocal_627[7]);
						}
						if (!func_11(Local_718.f_310[iVar2]->f_7, -2147483648) && func_151(0, 1, Global_35, 1))
						{
							func_261(&Local_718);
							func_34(&(Local_718.f_310[iVar2]->f_7), -2147483648);
						}
						if (func_130(vLocal_627[7], 15f))
						{
							_0xe7fa07624574b79a(&(Local_718.f_310[iVar2]), Global_35, 2, 1, 0.5f, 1, 0, 0, 0);
						}
						bVar5 = get_entity_speed(&(Local_718.f_1[0])) < 1f;
						if (!func_125(vLocal_627[7]) || func_224(vLocal_627[7]) > 4f)
						{
							bVar6 = true;
						}
						if (func_262(&Local_718, iVar2, 10f, &uLocal_1839, &uLocal_1867, &uLocal_716, iVar598) && (func_256(iVar1862) || iVar1862 == 0))
						{
							if (bVar6 || iVar1862 != 4)
							{
								bVar7 = true;
							}
						}
						if ((((bVar7 || _0x2963b5c1637e8a27(&(Local_718.f_1[0])) == Global_35) || (does_entity_exist(&(Local_718.f_310[iVar2])) && _0xe33f98bd76490abc(&(Local_718.f_310[iVar2]), player_id(), 0))) || (bVar6 && func_253(&Local_718, iVar2, &uLocal_716, 0))) || bVar5)
						{
							func_257(&Local_718, &uLocal_716, iVar598, &uLocal_1839, &uLocal_1867, (!bVar5 && (func_43(uVar711, 64) || func_253(&Local_718, iVar2, &uLocal_716, 0))), 1, 0);
						}
						func_260(&Local_718, iVar2);
						func_259(&Local_718, &(Local_718.f_310[iVar2]), iParam0, iVar2, 0);
						break;
					case 6:
						func_258(&Local_718, &vLocal_627, iVar598, &uLocal_1839, &uLocal_1867, &uLocal_716, 0);
						func_252(&Local_718, &uLocal_716, iParam0, iVar2, iVar598, &vLocal_627, Local_432[iVar3], Local_15[iVar3], &uLocal_1838, &uLocal_1839, &uLocal_1867);
						if (func_151(-3.5f, 1, Global_35, 1))
						{
							func_261(&Local_718);
							ped_cower_in_place(&(Local_718.f_310[iVar2]), Global_35);
							if (iVar1862 != 0)
							{
								func_233(&uLocal_1839, &uLocal_1867);
							}
							set_train_cruise_speed(&(Local_718.f_1[0]), 0f);
							_0x4182c037aa1f0091(&(Local_718.f_1[0]), 1);
							_0x160c1b5ab48ab87c(&(Local_718.f_1[0]), 9999f);
							func_12(&uLocal_716, 2048, 1);
							if (!is_player_control_on(get_player_index()))
							{
								set_player_control(get_player_index(), true, 0, false);
								func_98(&uLocal_717, 134217728);
							}
							func_246(Local_718.f_310[iVar2], 7);
						}
						func_260(&Local_718, iVar2);
						func_259(&Local_718, &(Local_718.f_310[iVar2]), iParam0, iVar2, 0);
						break;
					case 7:
						func_258(&Local_718, &vLocal_627, iVar598, &uLocal_1839, &uLocal_1867, &uLocal_716, 0);
						func_252(&Local_718, &uLocal_716, iParam0, iVar2, iVar598, &vLocal_627, Local_432[iVar3], Local_15[iVar3], &uLocal_1838, &uLocal_1839, &uLocal_1867);
						if (get_ped_in_vehicle_seat(&(Local_718.f_1[0]), -1) != Global_35)
						{
							set_train_cruise_speed(&(Local_718.f_1[0]), 0f);
						}
						if (!func_11(Local_718.f_310[iVar2]->f_7, 256))
						{
							ped_cower_in_place(&(Local_718.f_310[iVar2]), Global_35);
							func_34(&(Local_718.f_310[iVar2]->f_7), 256);
						}
						func_260(&Local_718, iVar2);
						func_259(&Local_718, &(Local_718.f_310[iVar2]), iParam0, iVar2, 1);
						break;
					case 1:
						if (!does_entity_belong_to_this_script(&(Local_718.f_310[iVar2]), true))
						{
							set_entity_as_mission_entity(&(Local_718.f_310[iVar2]), true, true);
						}
						func_263(&Local_718, iVar2, uVar711);
						if (func_11(Local_718.f_310[iVar2]->f_7, 64))
						{
							if (get_game_timer() >= Local_718.f_310[iVar2]->f_13)
							{
								if (func_11(Local_718.f_310[iVar2]->f_7, 1073741824))
								{
									func_134(&(Local_718.f_310[iVar2]), Global_35, "GENERIC_SHOCKED_MED", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1808677283, 0, 0, 0);
								}
								_0x62fdad5e01d2dd47(&(Local_718.f_310[iVar3]), Global_36, 3, 0);
								_0xe7fa07624574b79a(&(Local_718.f_310[iVar2]), Global_35, 3, 2, get_random_float_in_range(4f, 7f), 1, 0, 0, 0);
								func_74(&(Local_718.f_310[iVar2]->f_7), 64);
							}
						}
						if (func_43(uVar711, 256))
						{
							func_264(&Local_718, iVar2, &uLocal_716, &uLocal_717, iVar598);
						}
						if (!bParam2)
						{
							if (!func_11(Local_718.f_310[iVar2]->f_7, 8))
							{
								if (((func_11(Local_718.f_1[iParam0]->f_4, 2) || func_265(iVar2)) || func_262(&Local_718, iVar2, 10f, &uLocal_1839, &uLocal_1867, &uLocal_716, iVar598)) || (does_entity_exist(&(Local_718.f_310[iVar2])) && _0xe33f98bd76490abc(&(Local_718.f_310[iVar2]), player_id(), 0)))
								{
									func_34(&(Local_718.f_310[iVar2]->f_7), 8);
									func_34(&(Local_718.f_310[iVar2]->f_7), 512);
									func_139(&Local_718, iParam0, &vLocal_627, &uLocal_1839, &uLocal_1867, &uLocal_716, &uLocal_717, &iLocal_606, Local_15[iVar3], Local_432[iVar3], 1, !func_165(&Local_718, iVar598));
								}
							}
							if (!func_11(Local_718.f_310[iVar2]->f_7, 2))
							{
								if (iParam0 == iVar598 && Local_718.f_310[iVar2]->f_3 != 1)
								{
									if (!does_blip_exist(Local_718.f_310[iVar2]->f_1))
									{
										func_266(&(Local_718.f_310[iVar2]), &(Local_718.f_310[iVar2]->f_1), -1749618580, 0, 0, "BLIP_TNRB_PASSENGER");
									}
								}
								else if (does_blip_exist(Local_718.f_310[iVar2]->f_1))
								{
									func_267(&(Local_718.f_310[iVar2]->f_1));
								}
								if (!func_43(uVar711, 8))
								{
									func_268(iParam0, iVar3);
								}
							}
							else
							{
								func_246(Local_718.f_310[iVar2], 12);
							}
						}
						else if (!func_43(uVar711, 8))
						{
							if (func_268(iParam0, iVar3))
							{
								func_34(&(Local_718.f_310[iVar2]->f_7), 8);
							}
						}
						break;
					case 2:
						func_269(&Local_718, iVar2);
						func_270(&Local_718, &uLocal_716, iParam0, iVar2, iVar598, &vLocal_627, Local_432[iVar3], Local_15[iVar3], &uLocal_1837);
						if (!func_11(Local_718.f_310[iVar2]->f_7, 8))
						{
							if (func_271(iParam0, iVar2))
							{
								func_34(&(Local_718.f_310[iVar2]->f_7), 8);
								func_272(&Local_718, iParam0, &vLocal_627, &uLocal_1839, &uLocal_1867, &uLocal_716);
								func_246(Local_718.f_310[iVar2], 17);
								func_34(&(Local_718.f_310[iVar2]->f_7), 2);
							}
						}
						if (func_11(Local_718.f_310[iVar2]->f_7, 8))
						{
							if (iParam0 == iVar598 || Local_718.f_310[iVar2]->f_9 < 10f)
							{
								func_34(&(Local_718.f_310[iVar2]->f_7), 2);
								func_272(&Local_718, iParam0, &vLocal_627, &uLocal_1839, &uLocal_1867, &uLocal_716);
								func_246(Local_718.f_310[iVar2], 17);
							}
						}
						else
						{
							if ((iVar598 != iParam0 && iVar598 < 0) && Local_718.f_1[iParam0]->f_6 == 3)
							{
								func_273(&Local_718, &uLocal_716, iVar2, &fLocal_621);
							}
							else
							{
								func_274(&Local_718, &vLocal_627, &uLocal_716, &uLocal_1839, &uLocal_1867, &iLocal_606, iVar2, iParam0, iVar598, iVar599, &uLocal_608);
							}
							if (func_275(&Local_718, iParam0) && func_271(iParam0, iVar2))
							{
								func_246(Local_718.f_310[iVar2], 3);
							}
						}
						if (func_43(uVar711, 262144) && IntToFloat(get_game_timer()) >= fVar689)
						{
							func_12(&uLocal_716, 262144, 0);
							func_12(&uLocal_716, 1073741824, 1);
						}
						break;
					case 3:
						func_269(&Local_718, iVar2);
						func_246(Local_718.f_310[iVar2], 17);
						break;
					case 8:
						func_268(iParam0, iVar3);
						if (func_151(0, 1, Global_35, 1))
						{
							if (func_11(Local_718.f_310[iVar2]->f_7, 8192))
							{
								func_134(&(Local_718.f_310[iVar2]), Global_35, "INSULT_RESPONSE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else if (func_11(Local_718.f_310[iVar2]->f_7, 4096))
							{
								func_134(&(Local_718.f_310[iVar2]), Global_35, "GREET_GENERAL_STRANGER", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							if (Local_718.f_310[iVar2]->f_3 == 1)
							{
								func_246(Local_718.f_310[iVar2], 2);
							}
							else if (Local_718.f_310[iVar2]->f_3 == 0)
							{
								func_246(Local_718.f_310[iVar2], 4);
							}
							else
							{
								func_246(Local_718.f_310[iVar2], 1);
							}
							func_74(&(Local_718.f_310[iVar2]->f_7), 134217728);
							func_34(&(Local_718.f_310[iVar2]->f_7), 2048);
						}
						break;
					case 9:
						func_268(iParam0, iVar3);
						func_263(&Local_718, iVar2, uVar711);
						if (func_276(&Local_718, &vLocal_627, iVar2) && func_277(&Local_718, &vLocal_627, &uLocal_716, &uLocal_717, iParam0, iVar2, &iLocal_606, &uLocal_609))
						{
							func_121(vLocal_627[1]);
							func_246(Local_718.f_310[iVar2], 11);
						}
						break;
					case 11:
						func_268(iParam0, iVar3);
						func_263(&Local_718, iVar2, uVar711);
						if (!func_125(vLocal_627[13]))
						{
							func_81(vLocal_627[13]);
						}
						func_278(Local_718.f_310[iVar2], &uLocal_609, &uLocal_717);
						func_121(vLocal_627[13]);
						func_279(Local_718.f_310[iVar2]);
						func_246(Local_718.f_310[iVar2], 12);
						break;
					case 12:
						func_268(iParam0, iVar3);
						func_278(Local_718.f_310[iVar2], &uLocal_609, &uLocal_717);
						func_263(&Local_718, iVar2, uVar711);
						func_34(&(Local_718.f_310[iVar2]->f_7), 2);
						func_74(&(Local_718.f_310[iVar2]->f_7), 134217728);
						func_45(&Local_718, iParam0);
						if (func_151(0, 1, &(Local_718.f_310[iVar2]), 1))
						{
							_0x9a77dfd295e29b09(&(Local_718.f_310[iVar2]), true);
							func_246(Local_718.f_310[iVar2], 13);
						}
						if (does_blip_exist(Local_718.f_310[iVar2]->f_1))
						{
							func_267(&(Local_718.f_310[iVar2]->f_1));
						}
						break;
					case 13:
						func_268(iParam0, iVar3);
						func_278(Local_718.f_310[iVar2], &uLocal_609, &uLocal_717);
						func_263(&Local_718, iVar2, uVar711);
						if (does_blip_exist(Local_718.f_310[iVar2]->f_1))
						{
							func_267(&(Local_718.f_310[iVar2]->f_1));
						}
						break;
					case 17:
						func_269(&Local_718, iVar2);
						if (Local_718.f_310[iVar2]->f_3 == 1)
						{
							func_12(&uLocal_716, 1048576, 1);
						}
						if (!func_11(Local_718.f_1[iParam0]->f_4, 2))
						{
							func_34(&(Local_718.f_1[iParam0]->f_4), 2);
						}
						func_280(&Local_718, &uLocal_716, iVar2, iParam0, iVar598, &uLocal_1868, &uLocal_608, Local_432[iVar3], Local_15[iVar3]);
						func_246(Local_718.f_310[iVar2], 18);
						break;
					case 18:
						func_269(&Local_718, iVar2);
						if (!func_11(Local_718.f_1[iParam0]->f_4, 2))
						{
							func_34(&(Local_718.f_1[iParam0]->f_4), 2);
						}
						func_280(&Local_718, &uLocal_716, iVar2, iParam0, iVar598, &uLocal_1868, &uLocal_608, Local_432[iVar3], Local_15[iVar3]);
						break;
					case 14:
						func_263(&Local_718, iVar2, uVar711);
						break;
					case 15:
						func_268(iParam0, iVar3);
						func_263(&Local_718, iVar2, uVar711);
						func_246(Local_718.f_310[iVar2], 16);
						break;
					case 16:
						func_268(iParam0, iVar3);
						func_281(&Local_718, iParam0, iVar2);
						break;
					case 19:
						if (!func_11(Local_718.f_310[iVar2]->f_7, 2))
						{
							func_34(&(Local_718.f_310[iVar2]->f_7), 2);
						}
						if (does_blip_exist(Local_718.f_310[iVar2]->f_1))
						{
							func_267(&(Local_718.f_310[iVar2]->f_1));
						}
						if (does_entity_exist(&(Local_718.f_310[iVar2])))
						{
							Local_718.f_310[iVar2]->f_1 = get_blip_from_entity(&(Local_718.f_310[iVar2]));
							if (does_blip_exist(Local_718.f_310[iVar2]->f_1))
							{
								func_267(&(Local_718.f_310[iVar2]->f_1));
							}
						}
						if (!func_11(Local_718.f_310[iVar2]->f_7, 128))
						{
							func_34(&(Local_718.f_310[iVar2]->f_7), 128);
						}
						func_34(&(Local_718.f_310[iVar2]->f_7), 2048);
						func_122(Local_15[iVar3], 0, 0, 1, 0);
						if (Local_718.f_310[iVar2]->f_3 == 1)
						{
							func_45(&Local_718, iVar598);
						}
						func_246(Local_718.f_310[iVar2], 20);
						func_244(iParam0, iVar2);
						if (func_11(Local_718.f_310[iVar2]->f_7, 32))
						{
							_0x3088634cf8c819cf(&(Local_718.f_310[iVar2]));
						}
						set_ped_as_no_longer_needed(Local_718.f_310[iVar2]);
						Local_718.f_1[iParam0]->f_9++;
						_0x7d4e70a67a651c71(1);
						break;
				}
			}
			else
			{
				func_282(iParam0, iVar3);
			}
		}
		else if (!func_11(Local_718.f_310[iVar2]->f_7, 2))
		{
			func_34(&(Local_718.f_310[iVar2]->f_7), 2);
		}
		iVar3++;
	}
}

bool func_144(int iParam0, int iParam1)
{
	if (iParam1 == 0 || iParam1 == iParam0->f_1102)
	{
		return false;
	}
	return true;
}

void func_145(int iParam0, int iParam1)
{
	iParam0->f_1[iParam1]->f_4 = 0;
	iParam0->f_1[iParam1]->f_3 = 0;
	iParam0->f_1[iParam1]->f_9 = 0;
	iParam0->f_1[iParam1]->f_8 = 0;
	iParam0->f_1[iParam1]->f_10 = 0;
	iParam0->f_1[iParam1]->f_20 = -1;
	func_106(iParam0, iParam1);
	_0x119a5714578f4e05(&(iParam0->f_1[iParam1]), 0);
	_0xd4907ef4334c7602(&(iParam0->f_1[iParam1]), 1);
	_0x68830738a6bfb370(&(iParam0->f_1[iParam1]), 1);
	_0x7d4e70a67a651c71(func_86(iParam0, iParam1));
	func_34(&(iParam0->f_1[iParam1]->f_4), 65536);
}

void func_146(int iParam0, var uParam1, int iParam2)
{
	if (!func_75(uParam1, -2147483648))
	{
		_0xd4907ef4334c7602(&(iParam0->f_1[iParam2]), 0);
		_0x68830738a6bfb370(&(iParam0->f_1[iParam2]), 0);
	}
	func_74(&(iParam0->f_1[iParam2]->f_4), 65536);
}

void func_147(int iParam0)
{
	iVar0 = func_132(iParam0);
	if (iVar0 != 0)
	{
		func_134(iVar0, Global_35, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1808677283, 0, 0, 0);
		func_65(&uLocal_609);
	}
}

bool func_148(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_149(int iParam0, bool bParam1)
{
	iVar2 = -1;
	if (bParam1)
	{
		func_283(&Local_718, iVar599, &iVar2);
	}
	iVar1 = 0;
	while (iVar1 < Local_718.f_1[iParam0]->f_8)
	{
		iVar0 = &Local_718.f_1[iParam0]->f_11[iVar1];
		if (iVar0 >= 0)
		{
			if (Local_718.f_310[iVar0]->f_3 != 1 && Local_718.f_310[iVar0]->f_3 != 0)
			{
				func_34(&(Local_718.f_310[iVar0]->f_7), 64);
				if (iVar2 == iVar0)
				{
					iVar3 = 300;
					func_34(&(Local_718.f_310[iVar0]->f_7), 1073741824);
				}
				else
				{
					iVar3 = (300 + get_random_int_in_range(300, 1000));
				}
				Local_718.f_310[iVar0]->f_13 = (iVar608 + iVar3);
			}
		}
		iVar1++;
	}
}

bool func_150()
{
	if (func_43(uVar714, 2))
	{
		return true;
	}
	iVar0 = &Local_718.f_1[0]->f_11[0];
	if (is_entity_dead(&(Local_718.f_310[iVar0])) && _0x3ec28da1ffac9ddd(&(Local_718.f_310[iVar0]), Global_35, 0, 0))
	{
		return true;
	}
	if (_0x2963b5c1637e8a27(&(Local_718.f_1[0])) != &Local_718.f_310[iVar0])
	{
		return true;
	}
	if (func_11(Local_718.f_310[iVar0]->f_7, 4194304) || func_11(Local_718.f_310[iVar0]->f_7, 512))
	{
		return true;
	}
	return false;
}

bool func_151(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_284(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_285(fParam0))
	{
		return false;
	}
	return true;
}

char* func_152(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GENERIC_CURSE_MED";
		case 1:
			return "BLOCKED_GENERIC";
		case 2:
			return "GENERIC_ANGRY_REACTION";
		case 3:
			return "GENERIC_CURSE_HIGH";
		default:
			break;
	}
	return "BLOCKED_GENERIC";
}

bool func_153(int iParam0)
{
	return is_this_model_a_train(get_entity_model(iParam0));
}

float func_154(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 11f;
		case 1:
			return 11f;
		case 2:
			return 11f;
		case 3:
			return 11f;
		case 6:
			return 0f;
		case 7:
			return 0f;
		case 8:
			return 3.5f;
		case 9:
			return 3.5f;
		case 10:
			return 3.5f;
		case 11:
			return 3.5f;
		case 12:
			return 3.5f;
		case 5:
			return 0f;
		case 4:
			return 11f;
		default:
			break;
	}
	return 5f;
}

bool func_155(var uParam0)
{
	if (func_75(uParam0, 2))
	{
		return false;
	}
	if (func_87(162))
	{
		return false;
	}
	if (!func_75(uParam0, 1))
	{
		return false;
	}
	return true;
}

void func_156(int iParam0, bool bParam1)
{
	func_286(iParam0, &iVar0, &iVar1);
	if (!func_287(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_288(iVar0, iVar1);
}

bool func_157(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_289((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_158(int iParam0, int iParam1, var uParam2)
{
	if (func_75(uParam2, 4))
	{
		return false;
	}
	if (func_87(153))
	{
		return false;
	}
	if (*iParam0 == 2 || *iParam0 == 3)
	{
		return false;
	}
	if (!func_290(iParam0, iParam1))
	{
		return false;
	}
	return true;
}

bool func_159(int iParam0, var uParam1)
{
	if (func_75(uParam1, 8))
	{
		return false;
	}
	if (func_87(154))
	{
		return false;
	}
	if (!func_291(iParam0, 1097859072))
	{
		return false;
	}
	if (!func_292(Global_35))
	{
		return false;
	}
	return true;
}

bool func_160(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (func_75(uParam3, 16))
	{
		return false;
	}
	if (func_87(160))
	{
		return false;
	}
	if (iParam1 < 0 || !func_43(*uParam2, 64))
	{
		return false;
	}
	if (!iParam0->f_1[iParam1]->f_6 == 2)
	{
		return false;
	}
	if (iParam0->f_1[iParam1]->f_8 <= 0)
	{
		return false;
	}
	return true;
}

bool func_161(int iParam0, var uParam1, var uParam2)
{
	if (func_75(uParam2, 32))
	{
		return false;
	}
	if (*iParam0 == 2 || *iParam0 == 3)
	{
		return false;
	}
	if (func_87(155))
	{
		return false;
	}
	if (!func_43(*uParam1, 64))
	{
		return false;
	}
	return true;
}

bool func_162(int iParam0, var uParam1)
{
	if (func_75(uParam1, 64))
	{
		return false;
	}
	if (func_87(157))
	{
		return false;
	}
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 1)
	{
		return false;
	}
	return true;
}

bool func_163()
{
	if (!_0xcb690f680a3ea971(Global_35, 4))
	{
		return false;
	}
	if (!get_ped_reset_flag(Global_35, 0))
	{
		return false;
	}
	if (!func_43(uVar714, 128))
	{
		return false;
	}
	if (iVar605 < 0)
	{
		return false;
	}
	if (Local_718.f_310[iVar605]->f_3 == 1)
	{
		return false;
	}
	return true;
}

bool func_164()
{
	if (does_entity_exist(_0x2963b5c1637e8a27(&(Local_718.f_1[0]))))
	{
		iVar0 = _0x2963b5c1637e8a27(&(Local_718.f_1[0]));
		if (does_entity_exist(iVar0) && is_explosion_in_sphere(25, get_entity_coords(iVar0, true, false), 8.25f))
		{
			func_12(&uLocal_716, 2097152, 1);
			set_train_cruise_speed(&(Local_718.f_1[0]), 0f);
			return true;
		}
	}
	return false;
}

bool func_165(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return false;
	}
	if (iParam0->f_1[iParam1]->f_8 < 1)
	{
		return false;
	}
	return true;
}

bool func_166(var uParam0, var uParam1)
{
	if (!func_43(*uParam0, 4))
	{
		return false;
	}
	if (!func_43(*uParam0, 64))
	{
		return false;
	}
	return true;
}

int func_167(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	return func_293(iParam0, 0f, 0f, 0f, iParam1, iParam2, bParam3, iParam4, bParam5);
}

bool func_168(var uParam0, var uParam1, var uParam2)
{
	if (func_43(*uParam1, 134217728))
	{
		if (has_anim_event_fired(Global_35, -808813879))
		{
			return true;
		}
	}
	else if (func_127((*uParam0)[15], func_294(*uParam2)))
	{
		*uParam2++;
		return true;
	}
	return false;
}

char* func_169()
{
	iVar0 = get_random_int_in_range(0, 2);
	switch (iVar0)
	{
		case 0:
		case default:
			return "GENERIC_FRIGHTENED_MED";
		case 1:
			return "GENERIC_SHOCKED_MED";
			default:
				break;
	}
}

bool func_170(var uParam0)
{
	if (!func_125((*uParam0)[15]))
	{
		return true;
	}
	if (func_127((*uParam0)[15], 8f))
	{
		return true;
	}
	if (has_anim_event_fired(Global_35, 2019359053))
	{
		return true;
	}
	return false;
}

int func_171()
{
	return 4992;
}

bool func_172(var uParam0, bool bParam1)
{
	if (func_43(*uParam0, 1))
	{
		return false;
	}
	if (_0xad401c63158acbaa(get_player_index()))
	{
		_0x9c5bd8c562565ce6(&Var0);
		if (Var0.f_11 == 6)
		{
			return true;
		}
		else if (!bParam1 && (Var0.f_15 || Var0.f_16))
		{
			return true;
		}
	}
	return false;
}

bool func_173()
{
	if (func_43(uVar714, 4))
	{
		return false;
	}
	if (!func_43(uVar714, 131072) && Local_718.f_1100 > 0)
	{
		return false;
	}
	fVar0 = 120f;
	if (func_43(uVar714, 8388608))
	{
		fVar0 = 60f;
	}
	if (func_127(vLocal_627[14], fVar0))
	{
		return true;
	}
	fVar0 = 60f;
	if (func_43(uVar714, 8388608))
	{
		fVar0 = 30f;
	}
	if (func_127(vLocal_627[14], fVar0))
	{
		iVar10 = func_295();
		if ((iVar10 > 0 && iVar10 < 14) && does_entity_exist(&(Local_718.f_1[iVar10])))
		{
			vVar11 = { get_entity_coords(&(Local_718.f_1[iVar10]), true, false) };
			if (get_closest_road(vVar11, 100f, 1, &vVar1, &uVar4, &uVar7, &uVar8, &uVar9, true))
			{
				if (get_distance_between_coords(vVar11, vVar1, true) < 75f)
				{
					return true;
				}
			}
		}
	}
	fVar0 = 15f;
	if (func_43(uVar714, 8388608))
	{
		fVar0 = 7.5f;
	}
	if (!func_127(vLocal_627[14], fVar0))
	{
		return false;
	}
	if (fVar693 < 300f)
	{
		return true;
	}
	return false;
}

void func_174(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_296(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_297(Global_1935630, 4194304);
	}
	enable_dispatch_service(15, bParam0);
	enable_dispatch_service(6, bParam0);
	enable_dispatch_service(1, bParam0);
	enable_dispatch_service(16, bParam0);
	enable_dispatch_service(2, bParam0);
	enable_dispatch_service(3, bParam0);
	enable_dispatch_service(4, bParam0);
	enable_dispatch_service(5, bParam0);
	enable_dispatch_service(7, bParam0);
	enable_dispatch_service(9, bParam0);
	enable_dispatch_service(10, bParam0);
	enable_dispatch_service(11, bParam0);
	enable_dispatch_service(12, bParam0);
	enable_dispatch_service(13, bParam0);
	enable_dispatch_service(14, bParam0);
}

bool func_175()
{
	return (Global_1894899 & 1 != 0 && func_298() != -1);
}

bool func_176()
{
	if (!func_43(uVar714, 16384))
	{
		return true;
	}
	if (!_0xe887bd31d97793f6(&(Local_718.f_1[0])))
	{
		return true;
	}
	if (fVar693 > 300f)
	{
		return true;
	}
	return false;
}

bool func_177(int iParam0)
{
	iVar0 = _0x2963b5c1637e8a27(&(iParam0->f_1[0]));
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	if (iVar0 == Global_35)
	{
		return false;
	}
	return true;
}

void func_178(int iParam0, float fParam1)
{
	if (!is_entity_dead(iParam0))
	{
		set_train_speed(iParam0, fParam1);
		set_train_cruise_speed(iParam0, fParam1);
	}
}

void func_179()
{
	_0x4182c037aa1f0091(&(Local_718.f_1[0]), 1);
	_0x160c1b5ab48ab87c(&(Local_718.f_1[0]), -1f);
	_0xdc69f6913cca0b99(&(Local_718.f_1[0]), 1);
	set_train_cruise_speed(&(Local_718.f_1[0]), 0f);
	_0x9f29999dfdf2aeb8(&(Local_718.f_1[0]), 0f);
}

bool func_180()
{
	if (func_43(uVar714, 1024))
	{
		return false;
	}
	if (_0xe887bd31d97793f6(&(Local_718.f_1[0])) && fVar693 < 100f)
	{
		return true;
	}
	if (!func_299())
	{
		return false;
	}
	if (get_ped_in_vehicle_seat(&(Local_718.f_1[0]), -1) == Global_35)
	{
		return false;
	}
	if (iVar601 < 0)
	{
		return false;
	}
	if ((!func_43(uVar714, 131072) && !func_183(player_id(), 1, 0, 1)) && Local_718.f_1100 > 0)
	{
		return false;
	}
	fVar0 = 45f;
	if (func_43(uVar714, 8388608))
	{
		fVar0 = 35f;
	}
	else if (func_43(uVar714, 32))
	{
		fVar0 = 40f;
	}
	if (func_127(vLocal_627[19], fVar0))
	{
		return true;
	}
	if (!func_172(&uLocal_716, 1))
	{
		return false;
	}
	if (!func_127(vLocal_627[19], 30f))
	{
		return false;
	}
	return true;
}

char* func_181()
{
	iVar0 = get_random_int_in_range(0, 4);
	switch (iVar0)
	{
		case 0:
		case default:
			return "PLEAD";
		case 1:
			return "DONT_HURT_ME";
		case 2:
			return "SCARED_HELP";
		case 3:
			return "GENERIC_FRIGHTENED_HIGH";
			default:
				break;
	}
}

bool func_182(int iParam0)
{
	iVar0 = _0x5407b7288d0478b7(Global_35, iParam0);
	return iVar0 > 0;
}

int func_183(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_300(bParam1, bParam2, bParam3);
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

void func_184(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_301() - fParam1);
	func_302(uParam0, 1);
	func_303(uParam0, 2);
	uParam0->f_2 = 0f;
}

char* func_185(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PRTRN_START";
		case 1:
			return "PRTRN_IDLE";
		default:
			break;
	}
	return "";
}

int func_186(char* sParam0, bool bParam1)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (!prepare_music_event(sParam0))
		{
			return 0;
		}
	}
	if (trigger_music_event(sParam0))
	{
		return 1;
	}
	return 0;
}

int func_187()
{
	return Global_1572887->f_12;
}

bool func_188(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

void func_189(int iParam0, int iParam1)
{
	func_34(&(Global_1914319->f_3[iParam0]->f_6), iParam1);
}

void func_190(int iParam0, int iParam1)
{
	if (!func_188(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 || iParam1);
}

void func_191(int iParam0, int iParam1)
{
	func_74(&(Global_1914319->f_3[iParam0]->f_6), iParam1);
}

void func_192(int iParam0, int iParam1)
{
	if (!func_188(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 - (Global_1914319->f_3[iParam0]->f_7 && iParam1));
}

void func_193(int iParam0)
{
	Global_1914319->f_15923 = iParam0;
}

bool func_194()
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

int func_195(int iParam0)
{
	if (!func_198(iParam0))
	{
		return -1;
	}
	return func_305(func_304(iParam0));
}

bool func_196(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_197(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_198(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

float func_199(int iParam0, vector3 vParam1)
{
	if (func_220(iParam0))
	{
		return vdist(_0x1e8a921112891651((*Global_1425371)[iParam0]->f_1), vParam1);
	}
	return 1E+08f;
}

int func_200(int iParam0, int iParam1)
{
	return func_306(&uVar0, iParam0, iParam1);
}

bool func_201(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_202(int iParam0, int iParam1)
{
	return func_307(&uVar0, iParam0, iParam1);
}

void func_203(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_204()
{
	if (func_308(func_298()))
	{
		return true;
	}
	if (iVar716 != 14)
	{
		if (func_308(func_309(_0x1e8a921112891651((*Global_1425371)[iVar716]->f_1), 1)))
		{
			return true;
		}
	}
	else
	{
		if (does_entity_exist(&(Local_718.f_1[0])) && func_308(func_309(get_entity_coords(&(Local_718.f_1[0]), true, false), 1)))
		{
			return true;
		}
		if (Local_718.f_1102 > 0)
		{
			iVar0 = Local_718.f_1102;
		}
		else if (Local_718.f_1098 > 0)
		{
			iVar0 = (Local_718.f_1098 - 1);
		}
		if (iVar0 > 0)
		{
			if (does_entity_exist(&(Local_718.f_1[Local_718.f_1102])) && func_308(func_309(get_entity_coords(&(Local_718.f_1[Local_718.f_1102]), true, false), 1)))
			{
				return true;
			}
		}
	}
	return false;
}

int func_205(int iParam0)
{
	switch (iParam0)
	{
		case -544816550:
		case -164452766:
		case 89913743:
		case 265500599:
		case 1192745176:
		case 1871675108:
			return 0;
		case -988822064:
		case -321394418:
		case 253923078:
		case 405368030:
		case 583628516:
		case 944661538:
		case 962088794:
		case 1297830025:
		case 1308722738:
		case 1786827347:
			return 1;
		case -1828437268:
		case -1032231746:
		case -234987592:
		case 479008570:
		case 572854005:
		case 703203753:
		case 2135054537:
			return 2;
		case -1946016570:
			return 3;
		default:
			break;
	}
	return -1;
}

int func_206(int iParam0)
{
	switch (iParam0)
	{
		case -1032231746:
		case -234987592:
		case 479008570:
		case 572854005:
		case 703203753:
		case 2135054537:
			return 0;
		case -1828437268:
			return 1;
		default:
			break;
	}
	return -1;
}

void func_207(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_208(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

char* func_209(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SCRIPT_PROC@ROBBERIES@TRAIN@ROB_PASSENGERS@LONG_ARMS";
		case 1:
			return "SCRIPT_PROC@ROBBERIES@TRAIN@ROB_PASSENGERS@PISTOLS";
		default:
			break;
	}
	return "SCRIPT_PROC@ROBBERIES@TRAIN@ROB_PASSENGERS@LONG_ARMS";
	return "";
}

void func_210(char* sParam0, var uParam1)
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

bool func_211(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_212(var uParam0, bool bParam1)
{
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + 5f);
	if (bParam1)
	{
		if (!func_310(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 };
		}
	}
}

bool func_213(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_214(float fParam0)
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

bool func_215(int iParam0, int iParam1)
{
	if (iParam0->f_1[iParam1]->f_6 == 1)
	{
		if (get_random_float_in_range(0f, 1f) >= 0.6f)
		{
			return false;
		}
	}
	return true;
}

int func_216(int iParam0, int iParam1)
{
	if (does_entity_exist(&(iParam0->f_1[iParam1])))
	{
		if (iParam0->f_1099 < 45 && iParam0->f_1[iParam1]->f_8 < 8)
		{
			if (!is_itemset_valid(iVar597))
			{
				iLocal_601 = create_itemset(true);
			}
			_0x20a4bf0e09bee146(iVar597);
			iVar2 = _0x0e558d3a49d759d6(&(iParam0->f_1[iParam1]), iVar597);
			iVar4 = _0x2963b5c1637e8a27(&(iParam0->f_1[iParam1]));
			if (does_entity_exist(iVar4))
			{
				func_311(iVar4, iVar597);
				iVar2++;
			}
			if ((func_312(iVar599, iParam1) || func_43(iVar712, 4096)) || func_43(iVar712, 1048576))
			{
				_0x119a5714578f4e05(&(iParam0->f_1[iParam1]), 0);
				func_120(iParam0, iParam1, 0);
			}
			if (iVar2 <= iParam0->f_1[iParam1]->f_8)
			{
				if (is_itemset_valid(iVar597))
				{
					_0x20a4bf0e09bee146(iVar597);
				}
				return iParam0->f_1[iParam1]->f_8;
			}
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				iVar5 = _0x3ffb15534067dcd4(get_indexed_item_in_itemset(iVar1, iVar597));
				if (!is_entity_dead(iVar5))
				{
					if (is_ped_human(iVar5))
					{
						if (iVar5 == Global_35)
						{
						}
						else if (!_0x40851bcc33acd9ab(iVar5) && !_0x0eaf918f751f27ba(iVar5))
						{
							if (!func_313(&iVar5))
							{
								if (iParam0->f_1099 >= 45)
								{
									if (!is_entity_a_mission_entity(iVar5))
									{
										set_entity_as_mission_entity(iVar5, true, false);
									}
									func_84(&iVar5);
									Jump @520; //curOff = 363
								}
								else if (iParam0->f_1[iParam1]->f_8 >= 8)
								{
									if (!is_entity_a_mission_entity(iVar5))
									{
										set_entity_as_mission_entity(iVar5, true, false);
									}
									func_84(&iVar5);
								}
								else
								{
									iVar3 = iParam0->f_1[iParam1]->f_8;
									iParam0->f_310[iParam0->f_1099] = iVar5;
									iParam0->f_1[iParam1]->f_11[iVar3] = iParam0->f_1099;
									func_34(&(iParam0->f_1[iParam1]->f_4), 4);
									iVar0++;
									iParam0->f_1[iParam1]->f_8++;
									iParam0->f_1099++;
								}
								iVar1++;
								if (is_itemset_valid(iVar597))
								{
									_0x20a4bf0e09bee146(iVar597);
								}
								Jump @561; //curOff = 546
								iVar0 = iParam0->f_1[iParam1]->f_8;
								if (is_itemset_valid(iVar597))
								{
									_0x20a4bf0e09bee146(iVar597);
								}
								return iVar0;
							}
						}
					}
				}
			}
		}
	}
}

void func_217(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Local_718.f_1[iParam0]->f_8)
	{
		iVar1 = &Local_718.f_1[iParam0]->f_11[iVar0];
		if (does_entity_belong_to_this_script(&(Local_718.f_310[iVar1]), true))
		{
		}
		else
		{
			if (func_11(Local_718.f_310[iVar1]->f_7, 16))
			{
				func_74(&(Local_718.f_310[iVar1]->f_7), 16);
			}
			if (func_314(iParam0, iVar0))
			{
				func_282(iParam0, iVar0);
			}
		}
		iVar0++;
	}
}

bool func_218(int iParam0)
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

void func_219(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_218(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_315(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_316(iVar0);
	*uParam0 = 0;
}

bool func_220(int iParam0)
{
	if (func_1(iParam0))
	{
		return _0xc29996a337bdd099((*Global_1425371)[iParam0]->f_1);
	}
	return false;
}

float func_221(int iParam0, vector3 vParam1, bool bParam4)
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
	return func_317(vVar0, vParam1);
}

float func_222(int iParam0, int iParam1, bool bParam2)
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
	return func_317(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

bool func_223(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_224(var uParam0)
{
	if (!func_125(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_318(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_301() - uParam0->f_1);
}

bool func_225(int iParam0, int iParam1, bool bParam2)
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

bool func_226(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return false;
	}
	if (!func_148(&(Local_718.f_310[iParam1]), Local_718.f_1[iParam0]->f_1, 1, 0))
	{
		return false;
	}
	if (Local_718.f_310[iParam1]->f_4 > 1)
	{
		return false;
	}
	if (func_11(Local_718.f_310[iParam1]->f_7, 2))
	{
		return false;
	}
	return true;
}

bool func_227(int iParam0, int iParam1)
{
	iVar0 = &Local_718.f_1[iParam0]->f_11[iParam1];
	if (iVar0 < 0)
	{
		return false;
	}
	if (!func_319(&(Local_718.f_310[iVar0]), 0))
	{
		return false;
	}
	if (Local_718.f_310[iVar0]->f_3 == 1)
	{
		return false;
	}
	if (_0x0eaf918f751f27ba(&(Local_718.f_310[iVar0])))
	{
		return false;
	}
	return true;
}

int func_228(int iParam0, int iParam1, int iParam2)
{
	iVar0 = get_random_int_in_range(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_320())
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
			iVar0 = func_321(func_320(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

int func_229(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_175())
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
				if (func_322(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_323(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_81(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_324(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_321(func_325(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_230(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_43(*uParam1, 64))
	{
		return false;
	}
	if (func_43(*uParam1, 256))
	{
		return false;
	}
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam0->f_1[iParam2]->f_8 < 1)
	{
		return false;
	}
	if (iParam2 == 0)
	{
		return false;
	}
	if (func_43(*uParam1, 8))
	{
		return false;
	}
	if (bParam3)
	{
		return true;
	}
	if (func_172(uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_231(int iParam0, int iParam1)
{
	if (iParam0 > 1)
	{
		if (iParam1 == 0)
		{
			func_134(Global_35, Global_35, "ROB_WEALTHY_GROUP", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
		}
		else
		{
			func_134(Global_35, Global_35, "ROB_GROUP", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
		}
	}
	else if (iParam0 > 0)
	{
		func_134(Global_35, Global_35, "ROB_GENERAL", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
	}
}

void func_232(var uParam0)
{
	func_12(uParam0, 4096, 1);
	func_34(&(Global_1392581->f_3), 4);
	func_89(2, 1, 0);
	func_89(1, 1, 0);
}

void func_233(var uParam0, var uParam1)
{
	if (uParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		uParam0->f_8 = func_326();
		_0xeacebaae0a33fb3f(player_id());
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_5 = 0;
	uParam0->f_10 = 0;
	func_327(uParam0, 0);
	*uParam1 = 0;
	uParam0->f_16 = 0;
}

void func_234(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, int* iParam7)
{
	set_player_control(get_player_index(), false, func_171(), false);
	func_14(uParam4, 134217728);
	_display_hud_component(724769646);
	_0x3ee1f7a8c32f24e1(player_id(), &iVar2, false, false);
	open_sequence_task(&iVar3);
	if (!func_328())
	{
		iVar0 = func_329(iParam5, 1);
	}
	else
	{
		iVar0 = func_330(Global_35, 0, 1, 0);
	}
	if (func_201(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			iVar1 = 0;
		}
		else
		{
			iVar1 = 1;
		}
		if (does_entity_exist(iVar2))
		{
			task_turn_ped_to_face_entity(0, iVar2, 0, -1082130432, -1082130432, -1082130432);
		}
		task_play_anim(0, func_209(iVar1), func_331(iVar1), 2f, -2f, -1, 67108880, 0f, false, 65536, false, 0, false);
	}
	close_sequence_task(iVar3);
	task_perform_sequence(Global_35, iVar3);
	clear_sequence_task(&iVar3);
	func_122(uParam6, 0, 0, 1, 0);
	func_332(iParam7, 1);
	func_81((*uParam2)[15]);
	func_12(uParam3, 134217728, 1);
	func_12(uParam3, 512, 1);
	func_34(&(iParam0->f_1[iParam1]->f_4), 2);
}

void func_235(int iParam0)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		_0xcbf88256e44d5d39(iParam0, 1);
		set_can_auto_vault_on_entity(iParam0, true);
		set_can_climb_on_entity(iParam0, true);
		set_vehicle_is_considered_by_player(iParam0, true);
		_0xba8818212633500a(iParam0, 0, 0);
	}
}

void func_236(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_333())
	{
		if (func_125((*uParam2)[19]))
		{
			func_121((*uParam2)[19]);
		}
		return;
	}
	if (is_ped_shooting(Global_35))
	{
		_0x785177e4d57d7389(get_player_index(), 1343354387, 0, 0, -1);
		if (!func_125((*uParam2)[19]))
		{
			func_81((*uParam2)[19]);
		}
	}
	if (!func_43(*uParam1, 32))
	{
		if (is_bullet_in_area(get_entity_coords(&(iParam0->f_1[iParam3]), true, false), (19f / 2f), true))
		{
			func_12(uParam1, 32, 1);
		}
	}
}

void func_237(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_43(*uParam1, 1048576))
	{
		if (func_11(iParam0->f_1[iParam3]->f_4, 256))
		{
			iVar1 = 0;
			while (iVar1 < iParam0->f_1[iParam3]->f_8)
			{
				iVar0 = &iParam0->f_1[iParam3]->f_11[iVar1];
				if ((iVar0 >= 0 && iParam0->f_310[iVar0]->f_3 == 1) && is_ped_shooting(&(iParam0->f_310[iVar0])))
				{
					func_12(uParam1, 1048576, 1);
					if (!func_125((*uParam2)[19]))
					{
						func_81((*uParam2)[19]);
					}
				}
				iVar1++;
			}
		}
	}
}

void func_238(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_75(uParam2, 268435456))
	{
		if (func_11(iParam0->f_1[iParam3]->f_4, 32768))
		{
			func_74(&(iParam0->f_1[iParam3]->f_4), 32768);
		}
		return;
	}
	if (func_334(iParam0, uParam1, uParam2, iParam3))
	{
		if (func_335(iParam0, iParam3))
		{
			func_34(&(iParam0->f_1[iParam3]->f_4), 32768);
		}
		else
		{
			func_74(&(iParam0->f_1[iParam3]->f_4), 32768);
		}
	}
}

void func_239(int iParam0)
{
	if (_does_volume_exist(Local_718.f_1[iParam0]->f_1) && _is_explosion_in_volume(-1, Local_718.f_1[iParam0]->f_1))
	{
		_0x785177e4d57d7389(get_player_index(), -102241052, 0, 0, -1);
		_0x785177e4d57d7389(get_player_index(), 1420320220, 0, 0, -1);
		func_174(1);
		_0xedfc6c1fd1c964f5(get_player_index(), 1685924442, 0, 0, 0, 0, 0, 0, 0);
		if (!_0xad401c63158acbaa(player_id()))
		{
			if (func_175())
			{
				_0x75cbf20ba47e4f89(Global_36, 0);
			}
			else
			{
				_0x75cbf20ba47e4f89(Global_36, -867256593);
			}
		}
		_0x987be590fb9d41e5(1);
		_0xdcf12b89624aac96(1);
	}
}

int func_240(int iParam0)
{
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = iParam0;
	while (iVar0 >= 1)
	{
		if (func_11(Local_718.f_1[iVar0]->f_4, 2))
		{
			iVar1 = absi((iParam0 - iVar0));
			Jump @87; //curOff = 51
		}
		else if (Local_718.f_1[iVar0]->f_8 == 0)
		{
			iVar3++;
		}
		iVar0 = (iVar0 + -1);
	}
	if (iVar1 > -1 && iVar3 > 0)
	{
		iVar1 = (iVar1 + iVar3 * 1);
	}
	iVar3 = 0;
	iVar0 = iParam0;
	while (iVar0 <= (Local_718.f_1098 - 1))
	{
		if (func_11(Local_718.f_1[iVar0]->f_4, 2))
		{
			iVar2 = absi((iParam0 - iVar0));
			Jump @198; //curOff = 162
		}
		else if (Local_718.f_1[iVar0]->f_8 == 0)
		{
			iVar3++;
		}
		iVar0++;
	}
	if (iVar2 > -1 && iVar3 > 0)
	{
		iVar2 = (iVar2 + iVar3 * 1);
	}
	if (iVar1 >= 0 && iVar2 < 0)
	{
		return iVar1;
	}
	else if (iVar2 >= 0 && iVar1 < 0)
	{
		return iVar2;
	}
	return func_321(iVar1 < iVar2, iVar1, iVar2);
}

void func_241(int iParam0, int iParam1, int iParam2)
{
	func_267(&(iParam0->f_310[iParam1]->f_1));
	iParam0->f_310[iParam1]->f_2 = 0;
	iParam0->f_310[iParam1]->f_4 = 0;
	iParam0->f_310[iParam1]->f_7 = 0;
	iParam0->f_310[iParam1]->f_3 = -1;
	iParam0->f_310[iParam1]->f_10 = 0f;
	iParam0->f_310[iParam1]->f_9 = -1f;
	iParam0->f_310[iParam1]->f_8 = -1;
	iParam0->f_310[iParam1]->f_11 = -1;
	iParam0->f_310[iParam1]->f_13 = 0;
	iParam0->f_310[iParam1]->f_12 = 0;
	iParam0->f_310[iParam1]->f_6 = 0;
	set_ped_keep_task(&(iParam0->f_310[iParam1]), true);
	set_ped_as_no_longer_needed(iParam0->f_310[iParam1]);
	iParam0->f_310[iParam1] = 0;
	iParam0->f_1[iParam2]->f_8 = (iParam0->f_1[iParam2]->f_8 - 1);
	iParam0->f_1099 = (iParam0->f_1099 - 1);
}

void func_242(int iParam0, int iParam1)
{
	if (!is_entity_dead(&(iParam0->f_310[iParam1])))
	{
		iParam0->f_310[iParam1]->f_9 = func_322(&(iParam0->f_310[iParam1]), 1, 1);
	}
	else
	{
		iParam0->f_310[iParam1]->f_9 = 9999.9f;
	}
}

void func_243(int iParam0, int iParam1)
{
	if (!func_125(vLocal_627[8]))
	{
		func_81(vLocal_627[8]);
	}
	if (!func_11(Local_718.f_310[iParam1]->f_7, 512))
	{
		if (func_11(Local_718.f_1[iParam0]->f_4, 2))
		{
			func_34(&(Local_718.f_310[iParam1]->f_7), 512);
			func_34(&(Local_718.f_310[iParam1]->f_7), 2048);
		}
		else if (func_43(uVar712, 8388608))
		{
			func_34(&(Local_718.f_310[iParam1]->f_7), 512);
			func_34(&(Local_718.f_310[iParam1]->f_7), 2048);
		}
		else if (func_127(vLocal_627[8], 3f))
		{
			fVar0 = get_random_float_in_range(0f, 1f);
			iVar1 = Local_718.f_1[iParam0]->f_21;
			if (iVar1 == 0)
			{
				func_34(&(Local_718.f_310[iParam1]->f_7), 512);
				func_34(&(Local_718.f_310[iParam1]->f_7), 2048);
			}
			else
			{
				fVar2 = (1f / to_float(iVar1));
				if (fVar0 < fVar2)
				{
					func_34(&(Local_718.f_310[iParam1]->f_7), 512);
					func_34(&(Local_718.f_310[iParam1]->f_7), 2048);
					func_121(vLocal_627[8]);
				}
			}
		}
	}
}

int func_244(int iParam0, int iParam1)
{
	if (!func_11(Local_718.f_310[iParam1]->f_7, 128) && func_336(&(Local_718.f_310[iParam1]), Global_35))
	{
		func_34(&(Local_718.f_1[iParam0]->f_4), 8);
		func_12(&uLocal_716, 8388608, 1);
		func_34(&(Local_718.f_310[iParam1]->f_7), 128);
		return 1;
	}
	return 0;
}

void func_245(int iParam0, int iParam1, int iParam2)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < iParam0->f_1098)
	{
		if (func_148(&(iParam0->f_310[iParam1]), iParam0->f_1[iVar1]->f_1, 0, 0))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iParam2 >= 0)
	{
		if (iParam2 > iVar0)
		{
			iVar2 = iVar0;
			iVar3 = iParam2;
		}
		else
		{
			iVar2 = iParam2;
			iVar3 = iVar0;
		}
		iVar1 = iVar2;
		while (iVar1 <= iVar3)
		{
			func_337(iParam0, iVar1);
			iVar1++;
		}
	}
	else
	{
		func_337(iParam0, iVar1);
	}
}

void func_246(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_4)
	{
		uParam0->f_4 = iParam1;
	}
}

bool func_247(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	if (!func_125((*uParam2)[9]))
	{
		func_81((*uParam2)[9]);
	}
	if (!func_11(iParam0->f_1[iParam3]->f_4, 2) && !(func_43(*uParam1, 1024) || func_43(*uParam1, 32768)))
	{
		return false;
	}
	iVar0 = (iParam0->f_1[iParam3]->f_8 - iParam0->f_1[iParam3]->f_9);
	if (iVar0 <= 3 && !(func_43(*uParam1, 1024) || func_43(*uParam1, 32768)))
	{
		return false;
	}
	if (iParam0->f_310[iParam4]->f_9 < 19f && func_43(*uParam1, 64))
	{
		return false;
	}
	if ((iParam0->f_310[iParam4]->f_4 == 11 || iParam0->f_310[iParam4]->f_4 == 12) || iParam0->f_310[iParam4]->f_4 == 9)
	{
		return false;
	}
	bVar1 = func_338(iParam0, uParam1, iParam3, iParam4);
	if ((!func_43(*uParam1, 1024) && !bVar1) && (((iParam5 == -1 || iParam5 == iParam3) || iParam3 == iParam5 + 1) || iParam3 == (iParam5 - 1)))
	{
		return false;
	}
	if ((func_43(*uParam1, 1024) || func_43(*uParam1, 32768)) || func_172(uParam1, 1))
	{
		fVar2 = 4f;
	}
	else if ((func_43(*uParam1, 8388608) || func_11(iParam0->f_1[iParam3]->f_4, 8)) || bVar1)
	{
		fVar2 = 15f;
	}
	else if (func_11(iParam0->f_1[iParam3]->f_4, 64))
	{
		fVar2 = 20f;
	}
	else if (iParam5 > iParam3 + 1 || iParam5 < (iParam3 - 1))
	{
		fVar2 = 15f;
	}
	else
	{
		fVar2 = 25f;
	}
	if (iParam5 != -1)
	{
		iVar3 = absi((iParam5 - iParam3));
		if (iVar3 > 0)
		{
			iVar3 = (iVar3 - 1);
		}
		fVar2 = (fVar2 - (fVar2 * (0.33f * IntToFloat(iVar3))));
	}
	if (!func_127((*uParam2)[9], fVar2))
	{
		return false;
	}
	func_121((*uParam2)[9]);
	iParam0->f_1[iParam3]->f_9++;
	func_34(&(iParam0->f_1[iParam3]->f_4), 64);
	return true;
}

bool func_248(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0->f_310[iParam1]->f_3 == 0)
	{
		return false;
	}
	if ((iParam3 == -1 || iParam2 > iParam3 + 1) || iParam2 < (iParam3 - 1))
	{
		return true;
	}
	if (!is_entity_on_screen(&(iParam0->f_310[iParam1])))
	{
		return true;
	}
	return false;
}

void func_249(int iParam0, int iParam1, int iParam2)
{
	if (!_does_scenario_point_exist(iParam0->f_310[iParam1]->f_6))
	{
		vVar0 = { get_entity_coords(&(iParam0->f_310[iParam1]), true, false) };
		iParam0->f_310[iParam1]->f_6 = _find_closest_active_scenario_point_of_type(vVar0, 547706868, 4f, 1, false);
	}
	if (_does_scenario_point_exist(iParam0->f_310[iParam1]->f_6))
	{
		if (func_11(iParam0->f_310[iParam1]->f_7, 256))
		{
			_task_use_scenario_point_2(&(iParam0->f_310[iParam1]), Global_35, iParam0->f_310[iParam1]->f_6, 0, -1, 0, -1f, false);
		}
		else
		{
			_task_use_scenario_point(&(iParam0->f_310[iParam1]), iParam0->f_310[iParam1]->f_6, 0, -1, false, true, 0, false, -1f, false);
		}
	}
}

void func_250(int iParam0, int iParam1)
{
	set_entity_is_target_priority(&(iParam0->f_310[iParam1]), false, 0f);
	set_blocking_of_non_temporary_events(&(iParam0->f_310[iParam1]), true);
	set_ped_config_flag(&(iParam0->f_310[iParam1]), 178, false);
	set_ped_config_flag(&(iParam0->f_310[iParam1]), 315, true);
	set_ped_config_flag(&(iParam0->f_310[iParam1]), 297, false);
	set_ped_config_flag(&(iParam0->f_310[iParam1]), 301, true);
	set_ped_combat_attributes(&(iParam0->f_310[iParam1]), 17, true);
	set_ped_flee_attributes(&(iParam0->f_310[iParam1]), 32768, true);
	set_ped_config_flag(&(iParam0->f_310[iParam1]), 162, false);
	if (iParam0->f_310[iParam1]->f_3 != 1)
	{
		_0xae6004120c18df97(&(iParam0->f_310[iParam1]), 0, 0);
		func_339(iParam0, iParam1);
	}
	if (iParam0->f_310[iParam1]->f_3 == 2)
	{
		_0xd355e2f1bb41087e(&(iParam0->f_310[iParam1]), 0.5f);
		set_ped_config_flag(&(iParam0->f_310[iParam1]), 138, true);
		_0xc163dac52ac975d3(&(iParam0->f_310[iParam1]), 32);
		_0xc163dac52ac975d3(&(iParam0->f_310[iParam1]), 1);
		_0xc163dac52ac975d3(&(iParam0->f_310[iParam1]), 31);
		_0xc163dac52ac975d3(&(iParam0->f_310[iParam1]), 6);
		_0xc163dac52ac975d3(&(iParam0->f_310[iParam1]), 5);
		_0xc163dac52ac975d3(&(iParam0->f_310[iParam1]), 26);
		_0xc163dac52ac975d3(&(iParam0->f_310[iParam1]), 33);
		_0xc163dac52ac975d3(&(iParam0->f_310[iParam1]), 15);
		_0xc163dac52ac975d3(&(iParam0->f_310[iParam1]), 27);
		_0xc163dac52ac975d3(&(iParam0->f_310[iParam1]), 28);
		_0xc163dac52ac975d3(&(iParam0->f_310[iParam1]), 3);
		_0xc163dac52ac975d3(&(iParam0->f_310[iParam1]), 14);
		_0xc163dac52ac975d3(&(iParam0->f_310[iParam1]), 16);
		set_ped_config_flag(&(iParam0->f_310[iParam1]), 1, true);
	}
	set_ragdoll_blocking_flags(&(iParam0->f_310[iParam1]), 24592);
	_0x52a24d8a1da89658(&(iParam0->f_310[iParam1]), 2, 1);
	set_ped_config_flag(&(iParam0->f_310[iParam1]), 186, false);
}

bool func_251(int iParam0, int iParam1)
{
	if (_0x2963b5c1637e8a27(&(Local_718.f_1[0])) == &Local_718.f_310[iParam1])
	{
		return true;
	}
	if (Local_718.f_310[iParam1]->f_3 == 0)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return false;
}

void func_252(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int* iParam6, var uParam7, var uParam8, var uParam9, var uParam10)
{
	if (!func_340(iParam0, iParam3, iParam4))
	{
		*uParam8 = 0;
		return;
	}
	if (iParam3 >= 45)
	{
		return;
	}
	if (is_entity_dead(&(iParam0->f_310[iParam3])))
	{
		return;
	}
	if (iParam4 < 0)
	{
		if (*uParam8 != 1)
		{
			func_341(uParam7, iParam6);
			func_342(uParam7, 0);
			*uParam8 = 1;
		}
	}
	if (func_11(iParam0->f_310[iParam3]->f_7, 2048))
	{
		func_341(uParam7, iParam6);
		bVar0 = (func_43(*uParam1, 2048) || func_11(iParam0->f_310[iParam3]->f_7, 134217728));
		if (func_11(iParam0->f_310[iParam3]->f_7, 268435456))
		{
			func_343(uParam7, bVar0);
		}
		else if (func_11(iParam0->f_310[iParam3]->f_7, 32768))
		{
			func_344(uParam7, bVar0);
		}
		else
		{
			func_342(uParam7, bVar0);
		}
		func_74(&(iParam0->f_310[iParam3]->f_7), 2048);
	}
	iVar1 = func_345(1, 0, 0) | 2048 | 16384 | 256;
	iVar2 = func_346(iParam0->f_310[iParam3], iParam6, 19f, uParam7, 0, 3, 0, 0, iVar1, 0, 0, 2, iParam0->f_310[iParam3]->f_9);
	if (iVar2 != -1)
	{
		func_34(&(iParam0->f_310[iParam3]->f_7), 134217728);
		func_34(&(iParam0->f_310[iParam3]->f_7), 2048);
	}
	switch (iVar2)
	{
		case 0:
			func_341(uParam7, iParam6);
			func_45(iParam0, iParam2);
			if (func_11(iParam0->f_310[iParam3]->f_7, 32768))
			{
				func_134(Global_35, &(iParam0->f_310[iParam3]), "DEFUSE_LEFT_PROPERTY", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				func_81((*uParam5)[3]);
				func_34(&(iParam0->f_310[iParam3]->f_7), 268435456);
				func_74(&(iParam0->f_310[iParam3]->f_7), 134217728);
			}
			else if (!func_11(iParam0->f_310[iParam3]->f_7, 512))
			{
				if (func_320())
				{
					func_134(Global_35, &(iParam0->f_310[iParam3]), "GREET_MALE", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				else
				{
					func_134(Global_35, &(iParam0->f_310[iParam3]), "GREET_GENERAL", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				func_246(iParam0->f_310[iParam3], 8);
				func_34(&(iParam0->f_310[iParam3]->f_7), 4096);
			}
			break;
		case 1:
			if (!func_11(iParam0->f_310[iParam3]->f_7, 512))
			{
				func_341(uParam7, iParam6);
				func_45(iParam0, iParam2);
				if (is_ped_male(&(iParam0->f_310[iParam3])))
				{
					func_134(Global_35, &(iParam0->f_310[iParam3]), func_347(iParam0->f_310[iParam3]), 0, -1082130432, iParam0->f_310[iParam3]->f_11, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				else
				{
					func_134(Global_35, &(iParam0->f_310[iParam3]), func_347(iParam0->f_310[iParam3]), 0, -1082130432, iParam0->f_310[iParam3]->f_11, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				func_246(iParam0->f_310[iParam3], 8);
				func_34(&(iParam0->f_310[iParam3]->f_7), 8192);
			}
			break;
		case 2:
			func_329(&uVar3, 0);
			func_257(iParam0, uParam1, iParam4, uParam9, uParam10, 1, 0, 1);
			break;
	}
}

bool func_253(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	bVar0 = func_43(*uParam2, 64);
	fVar1 = 3f;
	if (func_333() && !bVar0)
	{
		fVar1 = (fVar1 / 2f);
	}
	if (iParam1 > -1 && !is_entity_dead(&(iParam0->f_310[iParam1])))
	{
		if (is_bullet_in_area(get_entity_coords(&(iParam0->f_310[iParam1]), true, false), fVar1, true))
		{
			return true;
		}
		if (_0xdc416ca762bc4f43(get_entity_coords(&(iParam0->f_310[iParam1]), true, false), fVar1, 1, 1) > 0)
		{
			return true;
		}
	}
	if (!bVar0 || (bVar0 && bParam3))
	{
		if (_0x7a76104cc2cc69e8(&(iParam0->f_1[0]), 1, 1))
		{
			return true;
		}
		if (_0x3ec28da1ffac9ddd(&(iParam0->f_1[0]), Global_35, 0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_254(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	if (iParam0->f_310[iParam1]->f_4 == 19)
	{
		return false;
	}
	if (func_262(iParam0, iParam1, 10f, uParam2, uParam3, uParam4, iParam5))
	{
		get_current_ped_weapon(Global_35, &iVar0, true, 0, false);
		if (*uParam3 != 8 || _0x705be297eebdb95d(iVar0))
		{
			return true;
		}
	}
	if (does_entity_exist(&(iParam0->f_310[iParam1])) && _0xe33f98bd76490abc(&(iParam0->f_310[iParam1]), player_id(), 0))
	{
		return true;
	}
	if (func_11(iParam0->f_310[iParam1]->f_7, 512))
	{
		return true;
	}
	if (func_172(uParam4, 1) && (iParam5 != -1 || func_348(&(iParam0->f_310[iParam1]), Global_35, 0, 1114636288, 0)))
	{
		return true;
	}
	return false;
}

void func_255(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	if (func_43(*uParam3, 67108864))
	{
		return;
	}
	if (*uParam2 != 0)
	{
		func_233(uParam1, uParam2);
	}
	_0xe7fa07624574b79a(&(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]), Global_35, 3, 1, 0f, 1, 0, 0, 0);
	if (!func_43(*uParam3, 1024) && !func_338(iParam0, uParam3, 0, &(iParam0->f_1[0]->f_11[0])))
	{
		_0x4182c037aa1f0091(&(iParam0->f_1[0]), 0);
		_0x160c1b5ab48ab87c(&(iParam0->f_1[0]), 0f);
		_0x787e43477746876f(&(iParam0->f_1[0]));
	}
	func_246(iParam0->f_310[&iParam0->f_1[0]->f_11[0]], 5);
	func_74(&(iParam0->f_310[iParam4]->f_7), 32768);
	func_74(&(iParam0->f_310[iParam4]->f_7), 65536);
	func_74(&(iParam0->f_310[iParam4]->f_7), 131072);
	func_12(uParam3, 67108864, 1);
}

bool func_256(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 8:
		case 16:
		case 2048:
			return true;
		default:
			break;
	}
	return false;
}

void func_257(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, int iParam7)
{
	_0xaab050da48b57978(&(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]), "Default_Panic", 0, -1, 4);
	if (bParam5 && (iParam7 || func_349(iParam0, uParam1, iParam2)))
	{
		func_350(iParam0);
	}
	if (!func_43(*uParam1, 64) && !bParam6)
	{
		func_255(iParam0, uParam3, uParam4, uParam1, &(iParam0->f_1[0]->f_11[0]));
		func_34(&(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]->f_7), 512);
		func_34(&(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]->f_7), 2048);
		return;
	}
	else
	{
		func_34(&(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]->f_7), 2048);
		func_12(uParam1, 2048, 1);
		func_246(iParam0->f_310[&iParam0->f_1[0]->f_11[0]], 6);
	}
}

void func_258(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	bVar0 = false;
	if (_0x2963b5c1637e8a27(&(iParam0->f_1[0])) == &iParam0->f_310[&iParam0->f_1[0]->f_11[0]])
	{
		if (iParam2 == 0)
		{
			vVar1 = { get_offset_from_entity_given_world_coords(&(iParam0->f_1[0]), Global_36) };
			if (vVar1.z >= 1f)
			{
				bVar0 = true;
			}
			bVar0 = true;
		}
		else if (iParam2 == 1)
		{
			vVar1 = { get_offset_from_entity_given_world_coords(&(iParam0->f_1[1]), Global_36) };
			if (vVar1.z >= 2f)
			{
				bVar0 = true;
			}
		}
		else if (!bParam6 && (iParam2 == 2 || iParam2 == 3))
		{
			bVar0 = true;
		}
	}
	if (bParam6)
	{
		if (bVar0 && func_127((*uParam1)[11], 1.5f))
		{
			if (!func_11(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]->f_7, 32768))
			{
				sVar4 = func_351();
				if (*iParam0 == 2 || *iParam0 == 3)
				{
					sVar4 = "STOP_THAT";
				}
				func_134(&(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]), Global_35, sVar4, 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
				func_34(&(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]->f_7), 32768);
				func_34(&(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]->f_7), 2048);
				func_81((*uParam1)[7]);
			}
			else if (!func_11(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]->f_7, 65536))
			{
				fVar5 = 7.5f;
				if (func_11(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]->f_7, 268435456) && !func_11(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]->f_7, 67108864))
				{
					fVar5 = 8.5f;
				}
				if (func_127((*uParam1)[7], fVar5))
				{
					if (func_11(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]->f_7, 268435456) && !func_11(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]->f_7, 67108864))
					{
						func_134(&(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]), Global_35, func_352(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
						func_34(&(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]->f_7), 67108864);
					}
					else
					{
						func_134(&(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]), Global_35, func_353(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
						func_34(&(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]->f_7), 65536);
					}
					func_34(&(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]->f_7), 2048);
					func_81((*uParam1)[7]);
				}
			}
			else if (func_127((*uParam1)[7], 8.5f))
			{
				func_255(iParam0, uParam3, uParam4, uParam5, &(iParam0->f_1[0]->f_11[0]));
				func_34(&(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]->f_7), 2048);
			}
		}
	}
	else
	{
		if (iParam0->f_310[&iParam0->f_1[0]->f_11[0]]->f_9 < 15f)
		{
			if (!func_354(&(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]), 150319005))
			{
				task_look_at_entity(&(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]), Global_35, -1, 4, 51, 1);
			}
		}
		if (!func_125((*uParam1)[7]) && func_151(0, 1, &(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]), 1))
		{
			func_81((*uParam1)[7]);
		}
		if (bVar0 && func_127((*uParam1)[7], 10f))
		{
			if (iParam2 == 2 || iParam2 == 3)
			{
				if (!func_11(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]->f_7, 32768))
				{
					func_134(&(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]), Global_35, func_355(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
					func_34(&(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]->f_7), 32768);
					func_121((*uParam1)[7]);
				}
			}
			else if (iParam0->f_310[&iParam0->f_1[0]->f_11[0]]->f_9 > 5f)
			{
				sVar6 = func_356();
				func_134(&(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]), Global_35, sVar6, 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
				func_121((*uParam1)[7]);
			}
			else if (iParam0->f_310[&iParam0->f_1[0]->f_11[0]]->f_9 < 15f)
			{
				if (!func_11(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]->f_7, 65536))
				{
					func_134(&(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]), Global_35, func_357(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
					func_121((*uParam1)[7]);
				}
				else
				{
					sVar7 = func_356();
					func_134(&(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]), Global_35, sVar7, 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
					func_121((*uParam1)[7]);
				}
			}
		}
	}
}

void func_259(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!is_ped_in_any_vehicle(iParam1, false))
	{
		_0x16f798a05bb9e3b5(iParam1);
		if (get_script_task_status(iParam1, 518218985, true) == 8)
		{
			func_358(iParam1);
			set_ped_flee_attributes(iParam1, 32768, false);
			_task_smart_flee_style_ped(iParam1, Global_35, 3, 0, 1000f, 1000000, 0);
		}
		return;
	}
	if (!bParam4)
	{
		return;
	}
	if (func_359(iParam0, iParam3))
	{
		vVar0 = { func_360(iParam0) };
		if (func_213(vVar0))
		{
			return;
		}
		func_361(iParam0, iParam1, iParam2, iParam3, vVar0);
	}
}

void func_260(int iParam0, int iParam1)
{
	if (!does_entity_exist(&(iParam0->f_310[iParam1])))
	{
		return;
	}
	if (!func_11(iParam0->f_310[iParam1]->f_7, 512))
	{
		return;
	}
	if (!func_151(3f, 1, 0, 0))
	{
		return;
	}
	if (!func_125(&(iParam0->f_1112)))
	{
		func_362(&(iParam0->f_1112), 0);
		return;
	}
	if (func_127(&(iParam0->f_1112), 20f))
	{
		iVar0 = get_random_int_in_range(0, 11);
		switch (iVar0)
		{
			case 0:
				sVar1 = "SCARED_HELP";
				break;
			case 1:
				sVar1 = "GENERIC_FRIGHTENED_HIGH";
				break;
			case 2:
				sVar1 = "GET_AWAY_FROM_ME";
				break;
			case 3:
				sVar1 = "STOP_THAT";
				break;
			case 4:
				sVar1 = "SICK_BASTARD";
				break;
			case 5:
				sVar1 = "PLEAD";
				break;
			case 6:
				sVar1 = "PANIC_HELP";
				break;
			case 7:
				sVar1 = "NEED_HELP";
				break;
			case 8:
				sVar1 = "LEAVE_ME";
				break;
			case 9:
				sVar1 = "GENERIC_SHOCKED_HIGH";
				break;
			case 10:
				sVar1 = "GENERIC_ANGRY_SHOUT";
				break;
			default:
				sVar1 = "GENERIC_CURSE_HIGH";
				break;
		}
		func_134(&(iParam0->f_310[iParam1]), Global_35, sVar1, 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
		func_81(&(iParam0->f_1112));
	}
}

void func_261(int iParam0)
{
	func_134(&(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]), Global_35, "SCARED_HELP", 0, -1082130432, 0, 0, 0, 1, 0, 0, 1744022339, 0, 0, 0);
	_0xcfe122ec635cc2b2(&(iParam0->f_1[0]), "DANGER", 0, 0);
}

bool func_262(int iParam0, int iParam1, float fParam2, var uParam3, var uParam4, var uParam5, int iParam6)
{
	if (func_363(iParam0->f_310[iParam1], fParam2))
	{
		*uParam4 = 8;
		return true;
	}
	else if (func_364(&(iParam0->f_310[iParam1]), 0, uParam3, uParam4, 0, 0) || (iParam0->f_310[iParam1]->f_8 == iParam6 && func_365(&(iParam0->f_310[iParam1]), uParam3)))
	{
		if (*uParam4 == 256)
		{
			if (func_333())
			{
				return false;
			}
			if ((((!func_43(*uParam5, 64) && iParam0->f_310[iParam1]->f_8 >= 0) && iParam0->f_310[iParam1]->f_8 < 14) && does_entity_exist(&(iParam0->f_1[iParam0->f_310[iParam1]->f_8]))) && _0x970339efa4fde518(&(iParam0->f_1[iParam0->f_310[iParam1]->f_8]), 1, 1) == 0)
			{
				func_233(uParam3, uParam4);
				return false;
			}
		}
		else if (*uParam4 == 16384)
		{
			if (!func_172(uParam5, 1))
			{
				func_233(uParam3, uParam4);
				return false;
			}
		}
		return true;
	}
	return false;
}

void func_263(int iParam0, int iParam1, var uParam2)
{
	if (((func_11(iParam0->f_310[iParam1]->f_7, 512) || func_43(uParam2, 1048576)) && (!func_11(iParam0->f_310[iParam1]->f_7, 256) || (get_frame_count() % 10) == 0)) && is_ped_using_any_scenario(&(iParam0->f_310[iParam1])))
	{
		if (iParam0->f_310[iParam1]->f_12 < 0)
		{
			if (func_366(&(iParam0->f_310[iParam1]), 1, 1, 1, 0))
			{
				iParam0->f_310[iParam1]->f_12 = 0;
			}
			else
			{
				iParam0->f_310[iParam1]->f_12 = (get_game_timer() + get_random_int_in_range(100, 980));
			}
		}
		if (get_game_timer() >= iParam0->f_310[iParam1]->f_12)
		{
			_0xaab050da48b57978(&(iParam0->f_310[iParam1]), "Default_Panic", 0, -1, 4);
			if (func_367(iParam0, iParam1))
			{
				_0xd8ceeed54c672b5d(&(iParam0->f_310[iParam1]), Global_35, 0f, 0f, 0f, 3, 3);
			}
			else
			{
				_0xd8ceeed54c672b5d(&(iParam0->f_310[iParam1]), &(iParam0->f_310[iParam1]), 0f, 3f, 0.5f, 3, 3);
			}
			_0x9a77dfd295e29b09(&(iParam0->f_310[iParam1]), true);
			_0xeeed8fafec331a70(&(iParam0->f_310[iParam1]), Global_36, 3);
			func_34(&(iParam0->f_310[iParam1]->f_7), 256);
		}
	}
}

void func_264(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	bVar0 = func_11(iParam0->f_310[iParam1]->f_7, 1);
	if (func_43(*uParam2, 33554432) || iParam0->f_310[iParam1]->f_8 != iParam4)
	{
		if (!func_75(uParam3, 1) && func_368(&(iParam0->f_310[iParam1]), 1, 1, 1, 0, 0))
		{
			func_14(uParam3, 1);
		}
		if (!bVar0 && does_blip_exist(iParam0->f_310[iParam1]->f_1))
		{
			_blip_set_modifier(iParam0->f_310[iParam1]->f_1, -1186550032);
			func_34(&(iParam0->f_310[iParam1]->f_7), 1);
		}
	}
	else if (iParam0->f_310[iParam1]->f_8 == iParam4)
	{
		if (bVar0 && does_blip_exist(iParam0->f_310[iParam1]->f_1))
		{
			_set_blip_flash_style(iParam0->f_310[iParam1]->f_1, -1186550032);
			func_74(&(iParam0->f_310[iParam1]->f_7), 1);
		}
	}
}

bool func_265(int iParam0)
{
	if (func_127(&(Local_718.f_1106), 5f))
	{
		return false;
	}
	if (is_shocking_event_in_sphere(1498498500, Global_36, 1f) && is_shocking_event_in_sphere(1498498500, get_entity_coords(&(Local_718.f_310[iParam0]), true, false), 10f))
	{
		return true;
	}
	return false;
}

void func_266(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

void func_267(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

bool func_268(int iParam0, int iParam1)
{
	if (iParam0 == iVar599)
	{
		iVar0 = &Local_718.f_1[iParam0]->f_11[iParam1];
		if (func_369(&Local_718, &uLocal_716, &uLocal_717, iParam0, iVar0, Local_432[iParam1], Local_15[iParam1], &vLocal_627, &uLocal_1839, &uLocal_1867, &iLocal_606, &iLocal_607))
		{
			func_263(&Local_718, iParam1, uVar712);
			return true;
		}
	}
	return false;
}

void func_269(int iParam0, int iParam1)
{
	if (is_entity_dead(&(iParam0->f_310[iParam1])) || iParam0->f_310[iParam1]->f_4 == 19)
	{
		return;
	}
	if (func_370(iParam0, iParam1, &bVar0))
	{
		func_84(iParam0->f_310[iParam1]);
		func_246(iParam0->f_310[iParam1], 19);
	}
	else if (bVar0)
	{
		if (!is_ped_in_combat(&(iParam0->f_310[iParam1]), 0))
		{
			clear_ped_tasks_immediately(&(iParam0->f_310[iParam1]), true, true);
			set_current_ped_weapon(&(iParam0->f_310[iParam1]), -1569615261, false, 0, false, false);
			set_current_ped_weapon(&(iParam0->f_310[iParam1]), -1569615261, false, 1, false, false);
			task_swap_weapon(&(iParam0->f_310[iParam1]), 0, 1, 0, 0);
			func_371(&(iParam0->f_310[iParam1]), 0, -1082130432, -1082130432, -1, -1, -1, -1082130432);
			set_ped_as_no_longer_needed(iParam0->f_310[iParam1]);
			func_246(iParam0->f_310[iParam1], 20);
		}
	}
}

void func_270(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int* iParam6, var uParam7, var uParam8)
{
	if (iParam4 != iParam2)
	{
		if (iParam4 < 0 && iParam0->f_1[iParam2]->f_6 == 3)
		{
			if (iParam0->f_310[iParam3]->f_9 < 40f)
			{
				func_372(iParam0, iParam3, iParam2, iParam6, uParam7, uParam8);
			}
			else
			{
				*uParam8 = 0;
			}
		}
		return;
	}
	if (iParam3 >= 45)
	{
		return;
	}
	if (is_entity_dead(&(iParam0->f_310[iParam3])))
	{
		return;
	}
	if (func_11(iParam0->f_310[iParam3]->f_7, 512))
	{
		set_ped_config_flag(&(iParam0->f_310[iParam3]), 297, false);
		set_ped_config_flag(&(iParam0->f_310[iParam3]), 315, true);
		return;
	}
	if (func_11(iParam0->f_310[iParam3]->f_7, 2048))
	{
		func_341(uParam7, iParam6);
		if (((iParam0->f_310[iParam3]->f_4 == 17 || iParam0->f_310[iParam3]->f_4 == 18) || iParam0->f_310[iParam3]->f_4 == 19) || iParam0->f_310[iParam3]->f_4 == 20)
		{
		}
		else if (func_11(iParam0->f_310[iParam3]->f_7, 32768))
		{
			func_373(uParam7, (func_11(iParam0->f_310[iParam3]->f_7, 268435456) || func_11(iParam0->f_310[iParam3]->f_7, 134217728)));
		}
		else
		{
			func_374(uParam7, (func_11(iParam0->f_310[iParam3]->f_7, 268435456) || func_11(iParam0->f_310[iParam3]->f_7, 134217728)));
		}
		func_74(&(iParam0->f_310[iParam3]->f_7), 2048);
	}
	iVar0 = func_345(1, 0, 0) | 16384;
	iVar1 = func_346(iParam0->f_310[iParam3], iParam6, 19f, uParam7, 0, 3, 0, 0, iVar0, 0, 0, 2, iParam0->f_310[iParam3]->f_9);
	if (iVar1 != -1)
	{
		func_34(&(iParam0->f_310[iParam3]->f_7), 134217728);
		func_34(&(iParam0->f_310[iParam3]->f_7), 2048);
	}
	switch (iVar1)
	{
		case 0:
			func_341(uParam7, iParam6);
			func_45(iParam0, iParam2);
			if (func_11(iParam0->f_310[iParam3]->f_7, 32768))
			{
				if (func_11(iParam0->f_310[iParam3]->f_7, 524288))
				{
					func_134(Global_35, &(iParam0->f_310[iParam3]), "DEFUSE_LEFT_PROPERTY_KEEP_GOING", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				else
				{
					func_134(Global_35, &(iParam0->f_310[iParam3]), "DEFUSE_LEFT_PROPERTY", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				func_81((*uParam5)[3]);
				func_34(&(iParam0->f_310[iParam3]->f_7), 268435456);
				func_74(&(iParam0->f_310[iParam3]->f_7), 134217728);
			}
			else if (!func_11(iParam0->f_310[iParam3]->f_7, 512))
			{
				if (func_320())
				{
					func_134(Global_35, &(iParam0->f_310[iParam3]), "GREET_MALE", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				else
				{
					func_134(Global_35, &(iParam0->f_310[iParam3]), "GREET_GENERAL", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				func_246(iParam0->f_310[iParam3], 8);
				func_34(&(iParam0->f_310[iParam3]->f_7), 4096);
			}
			break;
		case 1:
			if (!func_11(iParam0->f_310[iParam3]->f_7, 512))
			{
				func_341(uParam7, iParam6);
				func_45(iParam0, iParam2);
				if (is_ped_male(&(iParam0->f_310[iParam3])))
				{
					func_134(Global_35, &(iParam0->f_310[iParam3]), func_347(iParam0->f_310[iParam3]), 0, -1082130432, iParam0->f_310[iParam3]->f_11, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				else
				{
					func_134(Global_35, &(iParam0->f_310[iParam3]), func_347(iParam0->f_310[iParam3]), 0, -1082130432, iParam0->f_310[iParam3]->f_11, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				func_246(iParam0->f_310[iParam3], 8);
				func_34(&(iParam0->f_310[iParam3]->f_7), 4096);
				func_34(&(iParam0->f_310[iParam3]->f_7), 8192);
			}
			break;
		case 2:
			break;
	}
}

bool func_271(int iParam0, int iParam1)
{
	if (Local_718.f_310[iParam1]->f_4 == 19)
	{
		return false;
	}
	if (!func_11(Local_718.f_310[iParam1]->f_7, 4))
	{
		if (func_262(&Local_718, iParam1, 10f, &uLocal_1839, &uLocal_1867, &uLocal_716, iVar599))
		{
			if (iVar1863 != 256 || iVar599 < 0)
			{
				func_34(&(Local_718.f_310[iParam1]->f_7), 4);
			}
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		if (func_11(Local_718.f_310[iParam1]->f_7, 16384))
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		if (func_43(uVar712, 67108864))
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		if (func_43(uVar712, 2048))
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		if (func_43(uVar712, 1048576))
		{
			bVar0 = true;
		}
	}
	if (!bVar0 && func_11(Local_718.f_1[iParam0]->f_4, 2))
	{
		bVar0 = true;
	}
	if (!bVar0 && func_265(iParam1))
	{
		bVar0 = true;
	}
	if ((!bVar0 && does_entity_exist(&(Local_718.f_310[iParam1]))) && _0xe33f98bd76490abc(&(Local_718.f_310[iParam1]), player_id(), 0))
	{
		bVar0 = true;
	}
	if (!bVar0 && func_43(uVar712, 1024))
	{
		bVar0 = true;
	}
	if ((!bVar0 && func_172(&uLocal_716, 1)) && (iVar599 != -1 || func_348(&(Local_718.f_310[iParam1]), Global_35, 0, 1114636288, 0)))
	{
		bVar0 = true;
	}
	if (!bVar0 && func_11(Local_718.f_310[iParam1]->f_7, 512))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if ((func_43(uVar712, 1073741824) && !func_43(uVar712, 16384)) && ((Local_718.f_310[iParam1]->f_9 < 60f || iVar599 >= 0) && func_127(vLocal_627[17], 30f)))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (iVar610 < 0)
		{
			iLocal_614 = get_game_timer();
		}
		if (!func_11(Local_718.f_310[iParam1]->f_7, 32))
		{
			request_ped_visibility_tracking(&(Local_718.f_310[iParam1]));
			func_34(&(Local_718.f_310[iParam1]->f_7), 32);
		}
		iVar1 = 0;
		bVar2 = false;
		if (iVar599 >= 0)
		{
			iVar1 = (iParam0 - iVar599);
			if (iVar1 < 0)
			{
				iVar1 = (iVar1 * -1);
			}
			if (Local_718.f_1[iVar599]->f_6 == 1 || Local_718.f_1[iVar599]->f_6 == 3)
			{
				bVar2 = true;
			}
		}
		if (Local_718.f_310[iParam1]->f_12 < 0)
		{
			if (((iVar1 == 0 && iVar599 >= 0) || func_11(Local_718.f_310[iParam1]->f_7, 4)) || (bVar2 && iVar1 == 1))
			{
				Local_718.f_310[iParam1]->f_12 = (get_game_timer() + get_random_int_in_range(100, 600));
			}
			else if (func_43(uVar712, 2048))
			{
				Local_718.f_310[iParam1]->f_12 = (get_game_timer() + get_random_int_in_range(6500, 8500));
			}
			else if (iVar1 == 1)
			{
				Local_718.f_310[iParam1]->f_12 = (get_game_timer() + get_random_int_in_range(16000, 18000));
			}
			else if (iVar1 == 2)
			{
				Local_718.f_310[iParam1]->f_12 = (get_game_timer() + get_random_int_in_range(23000, 25000));
			}
			else
			{
				Local_718.f_310[iParam1]->f_12 = (get_game_timer() + get_random_int_in_range(30000, 32000));
			}
		}
		else
		{
			bVar3 = false;
			if (((iVar1 == 0 || func_11(Local_718.f_310[iParam1]->f_7, 4)) || (bVar2 && iVar1 == 1)) && iVar599 >= 0)
			{
				bVar3 = true;
			}
			else if (iVar1 >= 1)
			{
				if (_0x164cecc59e70df86(&(Local_718.f_310[iParam1]), 50f))
				{
					Local_718.f_310[iParam1]->f_10 = (Local_718.f_310[iParam1]->f_10 + (1f * timestep()));
				}
				else
				{
					Local_718.f_310[iParam1]->f_10 = 0f;
				}
				if (Local_718.f_310[iParam1]->f_10 >= 1.4f && (func_43(uVar712, 131072) || func_43(uVar712, 8388608)))
				{
					bVar3 = true;
				}
				fVar4 = to_float(iVar1 * 5);
				if (func_43(uVar712, 32))
				{
					fVar4 = (IntToFloat(iVar1) * 3.5f);
				}
				if (Local_718.f_310[iParam1]->f_9 > 15f && iVar1 == 1)
				{
					fVar4 = (fVar4 * 1.5f);
				}
				if (Local_718.f_310[iParam1]->f_10 >= fVar4)
				{
					bVar3 = true;
				}
			}
			if (bVar3)
			{
				func_12(&uLocal_716, 131072, 1);
				if ((Local_718.f_310[iParam1]->f_12 - get_game_timer()) >= 1000)
				{
					Local_718.f_310[iParam1]->f_12 = (get_game_timer() + get_random_int_in_range(100, 900));
				}
			}
		}
		if ((iVar599 != iParam0 && iVar599 < 0) && Local_718.f_1[iParam0]->f_6 == 3)
		{
			if (Local_718.f_310[iParam1]->f_12 < 0)
			{
				Local_718.f_310[iParam1]->f_12 = get_game_timer() + 200;
			}
		}
		func_34(&(Local_718.f_310[iParam1]->f_7), 16384);
		if (get_game_timer() >= Local_718.f_310[iParam1]->f_12)
		{
			func_12(&uLocal_716, 131072, 1);
			return true;
		}
	}
	return false;
}

int func_272(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	func_45(iParam0, iParam1);
	if (*uParam4 != 0)
	{
		func_233(uParam3, uParam4);
	}
	if (!func_125((*uParam2)[12]))
	{
		func_81((*uParam2)[12]);
	}
	func_12(uParam5, 256, 1);
	return 1;
}

void func_273(int iParam0, var uParam1, int iParam2, float fParam3)
{
	if (((iParam0->f_310[iParam2]->f_9 < 17f && !func_43(*uParam1, 16384)) && !func_11(iParam0->f_310[iParam2]->f_7, 16384)) && (get_entity_speed(Global_35) >= 1f || get_entity_speed(&(iParam0->f_1[0])) < 1f))
	{
		bVar0 = true;
	}
	if ((bVar0 || func_11(iParam0->f_310[iParam2]->f_7, 8192)) && (is_ped_facing_ped(&(iParam0->f_310[iParam2]), Global_35, 180f) || func_375(Global_35, iParam0->f_1105, 148, 1)))
	{
		vVar1 = { get_offset_from_entity_given_world_coords(&(iParam0->f_310[iParam2]), get_entity_coords(Global_35, true, false)) };
		if (vVar1.y < 0f)
		{
			return;
		}
		*fParam3 = (*fParam3 + (1f * timestep()));
		fVar4 = *fParam3;
		if (func_11(iParam0->f_310[iParam2]->f_7, 268435456))
		{
			fVar4 = (fVar4 - 4f);
		}
		if (!func_11(iParam0->f_310[iParam2]->f_7, 32768))
		{
			if ((*fParam3 >= 5f || (*fParam3 >= 1.3f && iParam0->f_310[iParam2]->f_9 < 8f)) || func_11(iParam0->f_310[iParam2]->f_7, 8192))
			{
				_0xe7fa07624574b79a(&(iParam0->f_310[iParam2]), Global_35, 2, 2, 100f, 1, 0, 0, 0);
				func_134(&(iParam0->f_310[iParam2]), Global_35, "GUARD_PLAYER_LOITERING", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
				func_34(&(iParam0->f_310[iParam2]->f_7), 32768);
				func_34(&(iParam0->f_310[iParam2]->f_7), 2048);
				*fParam3 = 0f;
			}
		}
		else if (!func_11(iParam0->f_310[iParam2]->f_7, 65536))
		{
			if (fVar4 >= 7f)
			{
				_0xe7fa07624574b79a(&(iParam0->f_310[iParam2]), Global_35, 2, 2, 100f, 1, 0, 0, 0);
				func_134(&(iParam0->f_310[iParam2]), Global_35, "WARNED_ALREADY", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
				func_34(&(iParam0->f_310[iParam2]->f_7), 65536);
				*fParam3 = 0f;
			}
		}
		else if (!func_11(iParam0->f_310[iParam2]->f_7, 131072))
		{
			if (fVar4 >= 7f)
			{
				task_look_at_entity(&(iParam0->f_310[iParam2]), Global_35, 3000, 0, 51, 0);
				_0x802092b07e3b1eea(&(iParam0->f_310[iParam2]), Global_36, 3);
				clear_ped_tasks(&(iParam0->f_310[iParam2]), 1, 0);
				open_sequence_task(&iVar5);
				task_aim_gun_at_entity(0, Global_35, -1, 0, 1);
				close_sequence_task(iVar5);
				task_perform_sequence(&(iParam0->f_310[iParam2]), iVar5);
				clear_sequence_task(&iVar5);
				func_134(&(iParam0->f_310[iParam2]), Global_35, func_376(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
				func_34(&(iParam0->f_310[iParam2]->f_7), 131072);
				*fParam3 = 0f;
			}
		}
		else if (fVar4 >= 6f)
		{
			func_246(iParam0->f_310[iParam2], 17);
		}
	}
	else
	{
		*fParam3 = (*fParam3 - (1f * timestep()));
		if (*fParam3 < 0f)
		{
			if (!is_ped_using_any_scenario(&(iParam0->f_310[iParam2])))
			{
				clear_ped_tasks(&(iParam0->f_310[iParam2]), 1, 0);
				_task_use_nearest_scenario_to_coord(&(iParam0->f_310[iParam2]), get_entity_coords(&(iParam0->f_310[iParam2]), true, false), 3f, -1, false, false, false, false);
			}
			*fParam3 = 0f;
		}
	}
}

void func_274(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10)
{
	if (func_11(iParam0->f_310[iParam6]->f_7, 32768) && !func_377(iParam0, uParam2, iParam8))
	{
		if (func_125((*uParam1)[3]) && !func_318((*uParam1)[3]))
		{
			func_378((*uParam1)[3]);
			if (!func_11(iParam0->f_310[iParam6]->f_7, 262144))
			{
				func_34(&(iParam0->f_310[iParam6]->f_7), 262144);
			}
			func_74(&(iParam0->f_1[iParam7]->f_4), 128);
		}
		if (!func_125((*uParam1)[4]))
		{
			func_81((*uParam1)[4]);
		}
		if (!func_11(iParam0->f_310[iParam6]->f_7, 16777216))
		{
			if (!func_11(iParam0->f_1[iParam7]->f_4, 1024) && func_11(iParam0->f_310[iParam6]->f_7, 131072))
			{
				if (func_127((*uParam1)[4], (10.5f / 2f)))
				{
					task_clear_look_at(&(iParam0->f_310[iParam6]));
					_0x541e5b41dca45828(&(iParam0->f_310[iParam6]), 2, 0);
					if (!is_ped_using_any_scenario(&(iParam0->f_310[iParam6])))
					{
						clear_ped_tasks(&(iParam0->f_310[iParam6]), 1, 0);
						if (_does_scenario_point_exist(iParam0->f_310[iParam6]->f_6))
						{
							_task_use_scenario_point(&(iParam0->f_310[iParam6]), iParam0->f_310[iParam6]->f_6, 0, 0, true, false, 0, false, -1f, false);
						}
						else
						{
							_task_use_nearest_scenario_to_coord(&(iParam0->f_310[iParam6]), get_entity_coords(&(iParam0->f_310[iParam6]), true, false), 3f, -1, false, false, false, false);
						}
					}
					else if (!_does_scenario_point_exist(iParam0->f_310[iParam6]->f_6))
					{
						iParam0->f_310[iParam6]->f_6 = _get_scenario_point_ped_is_using(&(iParam0->f_310[iParam6]), false);
					}
					func_74(&(iParam0->f_310[iParam6]->f_7), 32768);
					func_74(&(iParam0->f_310[iParam6]->f_7), 524288);
					func_74(&(iParam0->f_310[iParam6]->f_7), 67108864);
					func_74(&(iParam0->f_310[iParam6]->f_7), 131072);
				}
			}
		}
		func_379(iParam0, iParam6);
		if (func_130((*uParam1)[4], 10.5f))
		{
			if (func_11(iParam0->f_310[iParam6]->f_7, 262144))
			{
				func_74(&(iParam0->f_310[iParam6]->f_7), 262144);
				func_74(&(iParam0->f_1[iParam7]->f_4), 1024);
				func_74(&(iParam0->f_1[iParam7]->f_4), 512);
				func_34(&(iParam0->f_310[iParam6]->f_7), 2048);
			}
			else if (func_11(iParam0->f_310[iParam6]->f_7, 131072))
			{
				func_74(&(iParam0->f_310[iParam6]->f_7), 131072);
				func_74(&(iParam0->f_310[iParam6]->f_7), 16777216);
				func_74(&(iParam0->f_1[iParam7]->f_4), 2048);
				func_74(&(iParam0->f_1[iParam7]->f_4), 1024);
				func_34(&(iParam0->f_310[iParam6]->f_7), 2048);
				iParam0->f_1[iParam7]->f_20 = -1;
			}
			else if (func_11(iParam0->f_310[iParam6]->f_7, 65536))
			{
				func_74(&(iParam0->f_310[iParam6]->f_7), 65536);
				func_74(&(iParam0->f_310[iParam6]->f_7), 16777216);
				func_74(&(iParam0->f_1[iParam7]->f_4), 2048);
				func_74(&(iParam0->f_1[iParam7]->f_4), 1024);
				func_34(&(iParam0->f_310[iParam6]->f_7), 2048);
				iParam0->f_1[iParam7]->f_20 = -1;
			}
			else if (func_11(iParam0->f_310[iParam6]->f_7, 32768))
			{
				func_74(&(iParam0->f_310[iParam6]->f_7), 16777216);
				func_74(&(iParam0->f_1[iParam7]->f_4), 2048);
				func_74(&(iParam0->f_310[iParam6]->f_7), 32768);
				func_74(&(iParam0->f_310[iParam6]->f_7), 524288);
				func_74(&(iParam0->f_310[iParam6]->f_7), 67108864);
				func_74(&(iParam0->f_1[iParam7]->f_4), 1024);
				func_74(&(iParam0->f_1[iParam7]->f_4), 512);
				func_34(&(iParam0->f_310[iParam6]->f_7), 2048);
				iParam0->f_1[iParam7]->f_20 = -1;
			}
			if (func_125((*uParam1)[3]))
			{
				func_121((*uParam1)[3]);
			}
			_0x541e5b41dca45828(&(iParam0->f_310[iParam6]), 2, 0);
			if (!is_ped_using_any_scenario(&(iParam0->f_310[iParam6])))
			{
				task_clear_look_at(&(iParam0->f_310[iParam6]));
				clear_ped_tasks(&(iParam0->f_310[iParam6]), 1, 0);
				if (_does_scenario_point_exist(iParam0->f_310[iParam6]->f_6))
				{
					_task_use_scenario_point(&(iParam0->f_310[iParam6]), iParam0->f_310[iParam6]->f_6, 0, 0, true, false, 0, false, -1f, false);
				}
				else
				{
					_task_use_nearest_scenario_to_coord(&(iParam0->f_310[iParam6]), get_entity_coords(&(iParam0->f_310[iParam6]), true, false), 3f, -1, false, false, false, false);
				}
			}
			else if (!_does_scenario_point_exist(iParam0->f_310[iParam6]->f_6))
			{
				iParam0->f_310[iParam6]->f_6 = _get_scenario_point_ped_is_using(&(iParam0->f_310[iParam6]), false);
			}
		}
	}
	if (iParam8 == iParam7 && func_377(iParam0, uParam2, iParam8))
	{
		if (!func_11(iParam0->f_1[iParam7]->f_4, 2048))
		{
			if (func_380(iParam0, iParam7, iParam6))
			{
				func_381(iParam0, iParam6, iParam7);
				bVar0 = true;
			}
		}
		else
		{
			iVar1 = iParam0->f_1[iParam7]->f_20;
			if (iParam6 == iVar1)
			{
				bVar0 = true;
			}
			else if (iParam0->f_310[iParam6]->f_9 < iParam0->f_310[iVar1]->f_9)
			{
				func_382(iParam0, iParam7);
				func_381(iParam0, iParam6, iParam7);
				func_383(iParam0, iParam6, iVar1);
				bVar0 = true;
			}
		}
		if (!func_11(iParam0->f_310[iParam6]->f_7, 16777216))
		{
			if (bVar0 && _does_scenario_point_exist(_0xd04241bbf6d03a5e(Global_35)))
			{
				func_272(iParam0, iParam7, uParam1, uParam3, uParam4, uParam2);
				func_34(&(iParam0->f_1[iParam7]->f_4), 128);
				func_34(&(iParam0->f_310[iParam6]->f_7), 2048);
				func_74(&(iParam0->f_310[iParam6]->f_7), 268435456);
				func_246(iParam0->f_310[iParam6], 17);
				func_83(0);
				func_12(uParam2, 536870912, 1);
			}
			if (!func_11(iParam0->f_310[iParam6]->f_7, 32768))
			{
				if (func_11(iParam0->f_1[iParam7]->f_4, 512))
				{
					_0xe7fa07624574b79a(&(iParam0->f_310[iParam6]), Global_35, 2, 2, 100f, 1, 0, 0, 0);
					func_34(&(iParam0->f_310[iParam6]->f_7), 32768);
					func_34(&(iParam0->f_310[iParam6]->f_7), 2048);
				}
			}
			else if (!func_11(iParam0->f_310[iParam6]->f_7, 131072))
			{
				if (func_11(iParam0->f_1[iParam7]->f_4, 1024))
				{
					task_look_at_entity(&(iParam0->f_310[iParam6]), Global_35, 3000, 0, 51, 0);
					_0x802092b07e3b1eea(&(iParam0->f_310[iParam6]), Global_36, 3);
					clear_ped_tasks(&(iParam0->f_310[iParam6]), 1, 0);
					open_sequence_task(&iVar2);
					task_seek_clear_los_to_entity(0, Global_35, (19f / 2f), 1f, -1082130432);
					task_aim_gun_at_entity(0, Global_35, -1, 0, 1);
					close_sequence_task(iVar2);
					task_perform_sequence(&(iParam0->f_310[iParam6]), iVar2);
					clear_sequence_task(&iVar2);
					func_34(&(iParam0->f_310[iParam6]->f_7), 131072);
					func_34(&(iParam0->f_310[iParam6]->f_7), 2048);
					func_81((*uParam1)[3]);
				}
			}
			return;
		}
		if (!func_125((*uParam1)[3]))
		{
			func_81((*uParam1)[3]);
		}
		else if (func_318((*uParam1)[3]))
		{
			func_384((*uParam1)[3]);
		}
		if (func_125((*uParam1)[4]))
		{
			func_121((*uParam1)[4]);
		}
		if (func_127((*uParam1)[3], 1f))
		{
			if (func_43(*uParam2, 1073741824))
			{
				func_246(iParam0->f_310[iParam6], 17);
				return;
			}
			if (bVar0 && _does_scenario_point_exist(_0xd04241bbf6d03a5e(Global_35)))
			{
				func_34(&(iParam0->f_310[iParam6]->f_7), 131072);
				func_34(&(iParam0->f_310[iParam6]->f_7), 524288);
			}
			if (func_385(iParam0, iParam6, iParam7, iParam9))
			{
				func_34(&(iParam0->f_310[iParam6]->f_7), 65536);
				if (iParam0->f_1[iParam7]->f_6 == 3 && iParam0->f_310[iParam6]->f_9 < 5f)
				{
					func_34(&(iParam0->f_310[iParam6]->f_7), 32768);
					func_34(&(iParam0->f_310[iParam6]->f_7), 131072);
					func_34(&(iParam0->f_310[iParam6]->f_7), 524288);
				}
			}
			if (!func_11(iParam0->f_310[iParam6]->f_7, 32768))
			{
				if (bVar0)
				{
					_0x62fdad5e01d2dd47(&(iParam0->f_310[iParam6]), Global_36, 1, 0);
					_0xe7fa07624574b79a(&(iParam0->f_310[iParam6]), Global_35, 2, 2, 100f, 1, 0, 0, 0);
					func_134(&(iParam0->f_310[iParam6]), Global_35, func_386(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
					func_34(&(iParam0->f_310[iParam6]->f_7), 32768);
					func_34(&(iParam0->f_1[iParam7]->f_4), 128);
					func_74(&(iParam0->f_310[iParam6]->f_7), 268435456);
					func_34(&(iParam0->f_310[iParam6]->f_7), 2048);
					func_34(&(iParam0->f_1[iParam7]->f_4), 512);
					func_81((*uParam1)[3]);
				}
			}
			else
			{
				fVar3 = 6.5f;
				if (func_11(iParam0->f_310[iParam6]->f_7, 268435456))
				{
					fVar3 = 9.5f;
				}
				if ((func_127((*uParam1)[3], fVar3) || !func_11(iParam0->f_1[iParam7]->f_4, 128)) || _does_scenario_point_exist(_0xd04241bbf6d03a5e(Global_35)))
				{
					if (func_387(iParam0, iParam6, iParam8, iParam9, 1, uParam2))
					{
						func_134(&(iParam0->f_310[iParam6]), Global_35, func_388(1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
						func_34(&(iParam0->f_310[iParam6]->f_7), 524288);
						func_34(&(iParam0->f_1[iParam7]->f_4), 128);
						func_74(&(iParam0->f_310[iParam6]->f_7), 268435456);
						func_34(&(iParam0->f_1[iParam7]->f_4), 512);
						func_34(&(iParam0->f_310[iParam6]->f_7), 2048);
						func_81((*uParam1)[3]);
					}
					else if (func_387(iParam0, iParam6, iParam8, iParam9, 0, uParam2))
					{
						func_134(&(iParam0->f_310[iParam6]), Global_35, func_388(0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
						func_34(&(iParam0->f_310[iParam6]->f_7), 67108864);
						func_34(&(iParam0->f_1[iParam7]->f_4), 128);
						func_74(&(iParam0->f_310[iParam6]->f_7), 134217728);
						func_34(&(iParam0->f_1[iParam7]->f_4), 512);
						func_34(&(iParam0->f_310[iParam6]->f_7), 2048);
						func_81((*uParam1)[3]);
					}
					else if (!func_11(iParam0->f_310[iParam6]->f_7, 65536))
					{
						if (bVar0)
						{
							func_134(&(iParam0->f_310[iParam6]), Global_35, func_389(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
							func_34(&(iParam0->f_310[iParam6]->f_7), 65536);
							func_34(&(iParam0->f_1[iParam7]->f_4), 128);
							func_34(&(iParam0->f_310[iParam6]->f_7), 2048);
							func_34(&(iParam0->f_1[iParam7]->f_4), 512);
							func_74(&(iParam0->f_310[iParam6]->f_7), 268435456);
							_0x62fdad5e01d2dd47(&(iParam0->f_310[iParam6]), Global_36, 1, 0);
							clear_ped_tasks(&(iParam0->f_310[iParam6]), 1, 0);
							task_look_at_entity(&(iParam0->f_310[iParam6]), Global_35, 3000, 0, 51, 0);
							open_sequence_task(&iVar2);
							task_swap_weapon(0, 1, 0, 0, 0);
							task_seek_clear_los_to_entity(0, Global_35, (19f / 2f), 1f, -1082130432);
							task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
							close_sequence_task(iVar2);
							task_perform_sequence(&(iParam0->f_310[iParam6]), iVar2);
							clear_sequence_task(&iVar2);
							func_81((*uParam1)[3]);
						}
					}
					else if (!func_11(iParam0->f_310[iParam6]->f_7, 131072))
					{
						if (bVar0)
						{
							_0x802092b07e3b1eea(&(iParam0->f_310[iParam6]), Global_36, 3);
							clear_ped_tasks(&(iParam0->f_310[iParam6]), 1, 0);
							task_look_at_entity(&(iParam0->f_310[iParam6]), Global_35, 3000, 0, 51, 0);
							open_sequence_task(&iVar2);
							task_seek_clear_los_to_entity(0, Global_35, (19f / 2f), 1f, -1082130432);
							task_aim_gun_at_entity(0, Global_35, -1, 0, 1);
							close_sequence_task(iVar2);
							task_perform_sequence(&(iParam0->f_310[iParam6]), iVar2);
							clear_sequence_task(&iVar2);
							func_134(&(iParam0->f_310[iParam6]), Global_35, func_376(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
							func_34(&(iParam0->f_310[iParam6]->f_7), 131072);
							func_34(&(iParam0->f_1[iParam7]->f_4), 128);
							func_34(&(iParam0->f_1[iParam7]->f_4), 512);
							func_34(&(iParam0->f_1[iParam7]->f_4), 1024);
							func_74(&(iParam0->f_310[iParam6]->f_7), 268435456);
							func_34(&(iParam0->f_310[iParam6]->f_7), 2048);
							func_81((*uParam1)[3]);
						}
					}
					else if (bVar0)
					{
						_0x802092b07e3b1eea(&(iParam0->f_310[iParam6]), Global_36, 3);
						func_134(&(iParam0->f_310[iParam6]), Global_35, func_390(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
						*uParam10 = get_game_timer() + 8000;
						func_34(&(iParam0->f_310[iParam6]->f_7), 536870912);
						func_272(iParam0, iParam7, uParam1, uParam3, uParam4, uParam2);
						func_34(&(iParam0->f_1[iParam7]->f_4), 128);
						func_34(&(iParam0->f_310[iParam6]->f_7), 2048);
						func_74(&(iParam0->f_310[iParam6]->f_7), 268435456);
						func_246(iParam0->f_310[iParam6], 17);
						func_83(0);
						func_12(uParam2, 536870912, 1);
					}
				}
			}
		}
	}
}

bool func_275(int iParam0, int iParam1)
{
	iVar1 = func_321((iParam1 - 1) < 0, -1, (iParam1 - 1));
	iVar0 = func_321(iParam1 + 1 >= iParam0->f_1098, -1, iParam1 + 1);
	if (iParam1 != -1 && func_11(iParam0->f_1[iParam1]->f_4, 2))
	{
		return true;
	}
	if (iVar1 != -1 && func_11(iParam0->f_1[iVar1]->f_4, 2))
	{
		return true;
	}
	if (iVar0 != -1 && func_11(iParam0->f_1[iVar0]->f_4, 2))
	{
		return true;
	}
	return false;
}

int func_276(int iParam0, var uParam1, int iParam2)
{
	if (func_151(0, 1, Global_35, 1))
	{
		return 1;
	}
	if (func_125((*uParam1)[1]) && !func_127((*uParam1)[1], 2.5f))
	{
		return 0;
	}
	return 1;
}

int func_277(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, var uParam7)
{
	if (!does_entity_exist(&(iParam0->f_310[iParam5])))
	{
		return 0;
	}
	if ((!func_328() && !func_127((*uParam1)[20], 1.5f)) && !func_391(iParam0, iParam5, uParam2))
	{
		set_player_control(get_player_index(), false, func_171(), false);
		func_14(uParam3, 134217728);
		_display_hud_component(724769646);
		func_329(iParam6, 0);
		if (!func_125((*uParam1)[20]))
		{
			func_81((*uParam1)[20]);
		}
		return 0;
	}
	if ((!_0x82cb0f3f0c7785e5(&(iParam0->f_310[iParam5])) && !func_127((*uParam1)[20], 1.5f)) && !func_391(iParam0, iParam5, uParam2))
	{
		if (iParam0->f_310[iParam5]->f_12 == 0)
		{
			iParam0->f_310[iParam5]->f_12 = get_game_timer();
		}
		_0xd8ceeed54c672b5d(&(iParam0->f_310[iParam5]), Global_35, 0f, 0f, 0f, 3, 3);
		_0x9a77dfd295e29b09(&(iParam0->f_310[iParam5]), true);
		return 0;
	}
	func_121((*uParam1)[20]);
	_0xe735a7da22e88359(&(iParam0->f_310[iParam5]));
	if (!is_player_control_on(get_player_index()) && !func_43(*uParam2, 512))
	{
		func_98(uParam3, 134217728);
		set_player_control(get_player_index(), true, 0, false);
	}
	func_65(uParam7);
	func_134(&(iParam0->f_310[iParam5]), Global_35, "HAND_OVER_MONEY", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
	return 1;
}

void func_278(var uParam0, var uParam1, var uParam2)
{
	if (has_anim_event_fired(Global_35, 25446659))
	{
		func_134(Global_35, *uParam0, "ROB_ESCALATED_HIT", 0, -1082130432, 0, 0, 0, 1, 1, 0, 1506116031, 1, 0, 0);
		func_65(uParam1);
	}
	if (has_anim_event_fired(Global_35, 60809731))
	{
		stop_current_playing_speech(*uParam0, 0);
	}
	if (has_anim_event_fired(*uParam0, -2007843936))
	{
		func_134(*uParam0, Global_35, "HAND_OVER_MONEY", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
		func_65(uParam1);
		if (!is_player_control_on(get_player_index()))
		{
			func_98(uParam2, 134217728);
			set_player_control(get_player_index(), true, 0, false);
		}
	}
}

void func_279(var uParam0)
{
	_request_scenario_type(767498549, 8193, get_entity_model(*uParam0), 0);
}

void func_280(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8)
{
	if (!is_entity_dead(&(iParam0->f_310[iParam2])))
	{
		if (get_script_task_status(&(iParam0->f_310[iParam2]), 780511057, true) == 8 && iParam0->f_310[iParam2]->f_5 != 4)
		{
			task_clear_look_at(&(iParam0->f_310[iParam2]));
			_0x802092b07e3b1eea(&(iParam0->f_310[iParam2]), Global_36, 3);
			task_combat_ped(&(iParam0->f_310[iParam2]), Global_35, 16777216, 16);
			set_blocking_of_non_temporary_events(&(iParam0->f_310[iParam2]), false);
			set_ped_relationship_group_hash(&(iParam0->f_310[iParam2]), *uParam5);
			register_target(&(iParam0->f_310[iParam2]), Global_35, 1);
			set_entity_is_target_priority(&(iParam0->f_310[iParam2]), true, 15f);
			set_ped_target_loss_response(&(iParam0->f_310[iParam2]), 1);
			set_ped_keep_task(&(iParam0->f_310[iParam2]), true);
			set_ped_config_flag(&(iParam0->f_310[iParam2]), 297, false);
			set_ped_config_flag(&(iParam0->f_310[iParam2]), 315, true);
			if (iParam4 == iParam3)
			{
				func_122(uParam8, 0, 0, 1, 0);
			}
		}
		if (get_game_timer() >= *uParam6)
		{
			if (get_random_int_in_range(0, 10) == 0)
			{
				if (iParam0->f_310[iParam2]->f_9 < 50f)
				{
					if (!func_11(iParam0->f_310[iParam2]->f_7, 536870912))
					{
						sVar0 = func_390();
					}
					else
					{
						sVar0 = func_392();
					}
					if (func_134(&(iParam0->f_310[iParam2]), Global_35, sVar0, 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 0, 0, 0))
					{
						func_34(&(iParam0->f_310[iParam2]->f_7), 536870912);
						*uParam6 = (get_game_timer() + get_random_int_in_range(8000, 12000));
					}
				}
			}
		}
		if (get_game_timer() >= iParam0->f_310[iParam2]->f_12)
		{
			iVar1 = 0;
			iVar2 = -1;
			if (func_128(iParam0, iParam0->f_310[iParam2]) && get_entity_speed(&(iParam0->f_1[0])) > 0.2f)
			{
				if (!func_128(iParam0, &Global_35) || iParam4 < 0)
				{
					iVar1 = 1;
				}
				else if (_does_volume_exist(iParam0->f_1[iParam4]->f_1) && is_entity_in_volume(&(iParam0->f_310[iParam2]), iParam0->f_1[iParam4]->f_1, true, 0))
				{
					iVar1 = 2;
					iVar2 = iParam4;
				}
				else if (iParam4 > 0)
				{
					iVar1 = 3;
				}
				else
				{
					iVar3 = func_393(iParam0, iParam2);
					if (iVar3 > 1)
					{
						iVar1 = 3;
					}
					else
					{
						iVar1 = 3;
						if (iVar3 >= 0)
						{
							vVar4 = { get_offset_from_entity_given_world_coords(&(iParam0->f_1[iVar3]), get_entity_coords(&(iParam0->f_310[iParam2]), true, false)) };
							if (vVar4.z < 2.3f)
							{
								iVar1 = 4;
							}
						}
					}
				}
			}
			else if (iParam4 != -1 || func_46(iParam0, 30f))
			{
				iVar1 = 0;
			}
			else
			{
				iVar1 = 5;
			}
			if (iVar1 != iParam0->f_310[iParam2]->f_5)
			{
				func_394(iParam0, iParam2, iVar1, iVar2);
			}
			switch (iParam0->f_310[iParam2]->f_5)
			{
				case 1:
					set_ped_max_move_blend_ratio(&(iParam0->f_310[iParam2]), 1f);
					break;
			}
			iParam0->f_310[iParam2]->f_12 = get_game_timer() + 1000;
		}
		if (!does_blip_exist(iParam0->f_310[iParam2]->f_1))
		{
			iParam0->f_310[iParam2]->f_1 = _blip_add_for_entity(831283580, &(iParam0->f_310[iParam2]));
		}
	}
}

void func_281(int iParam0, int iParam1, int iParam2)
{
	func_395(iParam0, iParam2, iParam1);
}

void func_282(int iParam0, int iParam1)
{
	iParam1 = &Local_718.f_1[iParam0]->f_11[iParam1];
	set_ped_config_flag(&(Local_718.f_310[iParam1]), 171, true);
	set_ped_config_flag(&(Local_718.f_310[iParam1]), 189, true);
	if (!is_entity_a_mission_entity(&(Local_718.f_310[iParam1])))
	{
		set_entity_as_mission_entity(&(Local_718.f_310[iParam1]), true, true);
	}
	if (is_ped_male(&(Local_718.f_310[iParam1])))
	{
		if (get_entity_model(&(Local_718.f_310[iParam1])) == func_396())
		{
			Local_718.f_310[iParam1]->f_3 = 1;
			Local_718.f_1100++;
			func_397(&(Local_718.f_310[iParam1]), 379542007, 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			func_398(Local_718.f_310[iParam1]);
			if (!func_11(Local_718.f_1[iParam0]->f_4, 256))
			{
				func_34(&(Local_718.f_1[iParam0]->f_4), 256);
			}
		}
		else if (get_entity_model(&(Local_718.f_310[iParam1])) == func_399())
		{
			Local_718.f_310[iParam1]->f_3 = 0;
		}
		else
		{
			Local_718.f_310[iParam1]->f_3 = 2;
		}
	}
	else
	{
		Local_718.f_310[iParam1]->f_3 = 2;
	}
	Local_718.f_310[iParam1]->f_8 = iParam0;
	func_250(&Local_718, iParam1);
	cVar0 = func_400(get_entity_model(&(Local_718.f_310[iParam1])));
	if (!is_string_null_or_empty(cVar0))
	{
		func_401(&(Local_718.f_310[iParam1]), cVar0, 0);
	}
	func_34(&(Local_718.f_310[iParam1]->f_7), 16);
}

var func_283(int iParam0, int iParam1, int iParam2)
{
	fVar2 = 9999.9f;
	iVar0 = 0;
	while (iVar0 < iParam0->f_1[iParam1]->f_8)
	{
		iVar1 = &iParam0->f_1[iParam1]->f_11[iVar0];
		if (iVar1 >= 0 && iParam0->f_310[iVar1]->f_9 < fVar2)
		{
			fVar2 = iParam0->f_310[iVar1]->f_9;
			uVar3 = &iParam0->f_310[iVar1];
			*iParam2 = iVar1;
		}
		iVar0++;
	}
	return uVar3;
}

bool func_284(int iParam0, bool bParam1)
{
	if (func_402(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

bool func_285(float fParam0)
{
	if (func_403(1))
	{
		return true;
	}
	if (func_125(&uLocal_0) && !func_130(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

void func_286(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_287(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_404(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_405(iParam0))
	{
		return false;
	}
	if (func_406(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_407(iParam0, 1)) || func_408(32768))
	{
		if (!func_407(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_409())
	{
		return false;
	}
	return true;
}

void func_288(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_289(int iParam0, bool bParam1)
{
	switch (func_410(iParam0))
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

bool func_290(int iParam0, int iParam1)
{
	if (iParam1 >= 0)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_1098)
	{
		if (does_entity_exist(&(iParam0->f_1[iVar0])))
		{
			if (!func_11(iParam0->f_1[iVar0]->f_4, -2147483648))
			{
				track_vehicle_visibility(&(iParam0->f_1[iVar0]));
				func_34(&(iParam0->f_1[iVar0]->f_4), -2147483648);
			}
			if (is_vehicle_visible(&(iParam0->f_1[iVar0])))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_291(int iParam0, float fParam1)
{
	if (is_entity_dead(Global_35))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (func_411(iParam0, iVar0, fParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_292(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

int func_293(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	Var0.f_8 = -1082130432;
	if (get_current_ped_weapon(iParam0, &(Var0.f_6), false, iParam5, false))
	{
		iVar20 = get_current_ped_weapon_entity_index(iParam0, iParam5);
		if (does_entity_exist(iVar20))
		{
			Var0 = { func_412(iVar20) };
			if (func_213(vParam1))
			{
				Var0.f_3 = { func_413(iVar20) };
			}
			else
			{
				Var0.f_3 = { vParam1 };
			}
			Var0.f_7 = 1f;
			Var0.f_12 = 1;
			if (bParam8)
			{
				if (func_319(iParam0, 0))
				{
					Var0.f_9 = iParam0;
				}
				else
				{
					Var0.f_9 = 0;
				}
			}
			Var0.f_13 = 1;
			Var0.f_14 = iParam7;
			if (func_319(iParam4, 0))
			{
				Var0.f_11 = iParam4;
			}
			_fire_single_bullet_ignore_entity_new(&Var0);
			if (bParam6)
			{
				if (get_ammo_in_clip(iParam0, &iVar21, Var0.f_6))
				{
					if (iVar21 > 0)
					{
						set_ammo_in_clip(iParam0, Var0.f_6, (iVar21 - 1));
					}
				}
			}
			return 1;
		}
	}
	return 0;
}

float func_294(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case default:
			return 10f;
		case 2:
			return 5f;
		case 1:
			return 3f;
		case 0:
			return 1f;
			default:
				break;
	}
}

int func_295()
{
	if ((get_frame_count() % 5) != 0)
	{
		return -1;
	}
	return ((get_frame_count() % Local_718.f_1098 * 5) / 5);
}

void func_296(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_297(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_298()
{
	return Global_1894899->f_2;
}

bool func_299()
{
	if (func_414())
	{
		return false;
	}
	if (func_43(uVar714, 16777216))
	{
		return false;
	}
	return true;
}

int func_300(bool bParam0, bool bParam1, bool bParam2)
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

float func_301()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_302(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_303(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_304(int iParam0)
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

int func_305(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_306(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_415(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_416("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_417(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_201(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_415(iParam1, 512) && func_418(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_415(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_415(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_415(iParam1, 33554432)))
				{
					if (iVar0 == 0 || _0xa2091482ed42ef85(Global_35, &Var4) > _0xa2091482ed42ef85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_419(iVar1);
	}
	if (func_201(iVar0))
	{
	}
	else if (!func_415(iParam1, 512))
	{
		iParam1 |= 512;
		return func_306(uParam0, iParam1, iParam2);
	}
	else if (func_415(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

int func_307(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_415(iParam1, 128);
	if (func_416("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		Var23.f_9 = -1591664384;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_417(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_201(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4) && !_is_weapon_bow(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_415(iParam1, 512) && func_418(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if ((((((_is_weapon_two_handed(Var4.f_4) || func_420(Var4.f_4)) && (!_is_weapon_shotgun(Var4.f_4) || func_415(iParam1, 16))) && (!_is_weapon_sniper(Var4.f_4) || func_415(iParam1, 4))) && (!func_420(Var4.f_4) || func_415(iParam1, 8))) && (!_is_weapon_repeater(Var4.f_4) || !func_415(iParam1, 8388608))) && (!_is_weapon_rifle(Var4.f_4) || !func_415(iParam1, 1048576)))
				{
					if (iVar0 == 0 || _0xa2091482ed42ef85(Global_35, &Var4) > _0xa2091482ed42ef85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_419(iVar1);
	}
	if (is_weapon_valid(iVar0))
	{
	}
	else if (!func_415(iParam1, 512) && !func_415(iParam1, 1024))
	{
		iParam1 |= 512;
		return func_307(uParam0, iParam1, iParam2);
	}
	else if (func_415(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

bool func_308(int iParam0)
{
	if (!func_421(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_422(iParam0));
}

int func_309(vector3 vParam0, int iParam3)
{
	iVar0 = func_298();
	if (func_421(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_423(vParam0, iParam3);
}

bool func_310(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_424(*uParam0, 0f, 0f, 0f))
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

void func_311(int iParam0, int iParam1)
{
	if (!is_itemset_valid(iParam1))
	{
		return;
	}
	if (does_entity_exist(iParam0))
	{
		if (!is_in_itemset(iParam0, iParam1))
		{
			add_to_itemset(iParam0, iParam1);
		}
	}
}

bool func_312(int iParam0, int iParam1)
{
	if (func_11(Global_1392581->f_3, 8))
	{
		return false;
	}
	if (iParam0 != iParam1)
	{
		return false;
	}
	return true;
}

bool func_313(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Local_718.f_1099)
	{
		if (*iParam0 == &Local_718.f_310[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_314(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Local_718.f_1098)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 8)
	{
		return false;
	}
	iVar0 = &Local_718.f_1[iParam0]->f_11[iParam1];
	if (iVar0 < 0 || iVar0 >= 45)
	{
		return false;
	}
	if (func_11(Local_718.f_310[iVar0]->f_7, 16))
	{
		return false;
	}
	if (is_entity_dead(&(Local_718.f_310[iVar0])))
	{
		return false;
	}
	if (_0x40851bcc33acd9ab(&(Local_718.f_310[iVar0])))
	{
		return false;
	}
	if (_0x0eaf918f751f27ba(&(Local_718.f_310[iVar0])))
	{
		return false;
	}
	return true;
}

int func_315(int iParam0)
{
	return iParam0;
}

void func_316(int iParam0)
{
	if (!func_425(iParam0))
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

float func_317(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_318(var uParam0)
{
	return func_223(*uParam0, 2);
}

bool func_319(int iParam0, int iParam1)
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
	if (func_211(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_211(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_211(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_211(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_211(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_211(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_211(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_211(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_320()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

int func_321(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

float func_322(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_323(Global_35, iParam0, bParam1, bParam2);
}

float func_323(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_324(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_325(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_426(iParam0, &Var0);
}

int func_326()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_327(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_34(uParam0, 134217728);
	}
	else
	{
		func_74(uParam0, 134217728);
	}
}

bool func_328()
{
	iVar0 = func_330(Global_35, 0, 1, 0);
	if (((iVar0 == -1569615261 || iVar0 == 2055893578) || _is_weapon_melee(iVar0)) || !is_weapon_valid(iVar0))
	{
		return false;
	}
	if (_0x705be297eebdb95d(iVar0))
	{
		return true;
	}
	return false;
}

int func_329(int iParam0, bool bParam1)
{
	if (func_328())
	{
		return func_330(Global_35, 0, 1, 0);
	}
	iVar0 = func_330(Global_35, 1, 1, 0);
	if (!func_201(iVar0))
	{
		iVar0 = func_330(Global_35, 2, 1, 0);
	}
	if (!func_201(iVar0))
	{
		iVar0 = func_330(Global_35, 3, 1, 0);
	}
	if (!func_201(iVar0))
	{
		iVar0 = func_330(Global_35, 9, 1, 0);
	}
	if (iVar0 != -1569615261 && !func_354(Global_35, 716706914))
	{
		set_current_ped_weapon(Global_35, iVar0, false, 0, false, false);
		if (bParam1)
		{
			*iParam0++;
			iVar1 = 0;
		}
		else
		{
			iVar1 = Global_35;
		}
		task_swap_weapon(iVar1, 1, 0, 0, 0);
	}
	return iVar0;
}

int func_330(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

char* func_331(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TRAIN_ROB_START_RIFLE";
		case 1:
			return "PISTOL_ARMED_ROB_START";
		default:
			break;
	}
	return "";
}

void func_332(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_333()
{
	return Global_1310750->f_16077 != 0;
}

bool func_334(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_75(uParam2, 268435456))
	{
		return false;
	}
	if (iParam3 == 0)
	{
		return true;
	}
	if (iParam3 == (iParam0->f_1098 - 1))
	{
		return true;
	}
	if (iParam3 == (iParam0->f_1098 / 2))
	{
		return true;
	}
	return false;
}

bool func_335(int iParam0, int iParam1)
{
	vVar0 = { get_offset_from_entity_in_world_coords(&(iParam0->f_1[iParam1]), 6.5f, 0f, 0f) };
	vVar3 = { vVar0 };
	if (func_427(&vVar3, 3f))
	{
		vVar6 = { vVar0 - vVar3 };
		if (absf(vVar6.z) < 3f)
		{
			return false;
		}
	}
	vVar0 = { get_offset_from_entity_in_world_coords(&(iParam0->f_1[iParam1]), (-1f * 6.5f), 0f, 0f) };
	vVar3 = { vVar0 };
	if (func_427(&vVar3, 3f))
	{
		vVar6 = { vVar0 - vVar3 };
		if (absf(vVar6.z) < 3f)
		{
			return false;
		}
	}
	return true;
}

bool func_336(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_a_ped(iParam0))
		{
			if (is_entity_dead(iParam0))
			{
				if (get_ped_source_of_death(get_ped_index_from_entity_index(iParam0)) == iParam1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_337(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= iParam0->f_1098)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < iParam0->f_1[iParam1]->f_8)
	{
		iVar0 = &iParam0->f_1[iParam1]->f_11[iVar1];
		if (iVar0 >= 0 && iVar0 < 45)
		{
			func_34(&(iParam0->f_310[iVar0]->f_7), 2048);
		}
		iVar1++;
	}
}

bool func_338(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_43(*uParam1, 2048))
	{
		return true;
	}
	iVar0 = _0x2963b5c1637e8a27(&(iParam0->f_1[0]));
	if (is_entity_dead(iVar0))
	{
		return true;
	}
	if (func_95(get_entity_coords(&(iParam0->f_310[iParam3]), true, false), 1140457472, 0))
	{
		return true;
	}
	return false;
}

void func_339(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (iParam0->f_310[iParam1]->f_8 >= 0 && iParam0->f_310[iParam1]->f_8 < iParam0->f_1098)
	{
		if (iParam0->f_1[iParam0->f_310[iParam1]->f_8]->f_7 == 0)
		{
			iVar0 = get_random_int_in_range(800, 1200);
		}
		else if (iParam0->f_1[iParam0->f_310[iParam1]->f_8]->f_7 == 1)
		{
			iVar0 = get_random_int_in_range(300, 600);
		}
	}
	if (iVar0 > 0)
	{
		Var1.f_1 = 10;
		Var1.f_12 = 10;
		_0xad44856a1cd29635(Global_35, &(iParam0->f_310[iParam1]), &Var1);
		iVar24 = 0;
		while (iVar24 < Var1)
		{
			if (&Var1.f_1[iVar24] == 2084597891)
			{
				Var1.f_12[iVar24] = iVar0;
				_0xbb282cf5d2333fb8(&(iParam0->f_310[iParam1]), &Var1);
				return;
			}
			iVar24++;
		}
		if (Var1 >= 10)
		{
			Var1.f_12[0] = iVar0;
		}
		else
		{
			Var1.f_12[Var1] = iVar0;
			Var1++;
		}
		_0xbb282cf5d2333fb8(&(iParam0->f_310[iParam1]), &Var1);
	}
}

bool func_340(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 && iParam0->f_310[iParam1]->f_9 < 27f)
	{
		return true;
	}
	if (iParam2 == 0 || iParam2 == 1)
	{
		return true;
	}
	return false;
}

void func_341(var uParam0, int* iParam1)
{
	func_428(iParam1, 0);
}

void func_342(var uParam0, bool bParam1)
{
	func_430((*uParam0)[0], func_429(7), 0, -163964935, 0, 0, 0, 1, 0);
	func_431((*uParam0)[0], 1);
	func_432((*uParam0)[0], 1);
	func_433((*uParam0)[0], 15f);
	func_430((*uParam0)[1], func_429(10), 0, 648122183, 0, 0, 0, 1, 0);
	func_431((*uParam0)[1], 1);
	func_432((*uParam0)[1], 1);
	func_433((*uParam0)[1], 15f);
	func_430((*uParam0)[2], "TRB_STOP_DRIVER", 0, -1616532217, 0, 0, 0, 1, 0);
	func_431((*uParam0)[2], 1);
	func_432((*uParam0)[2], bParam1);
	func_433((*uParam0)[2], 15f);
}

void func_343(var uParam0, bool bParam1)
{
	func_430((*uParam0)[0], func_429(8), 0, -163964935, 0, 0, 0, 1, 0);
	func_431((*uParam0)[0], 1);
	func_432((*uParam0)[0], 1);
	func_433((*uParam0)[0], 15f);
	func_430((*uParam0)[1], func_429(10), 0, 648122183, 0, 0, 0, 1, 0);
	func_431((*uParam0)[1], 1);
	func_432((*uParam0)[1], 1);
	func_433((*uParam0)[1], 15f);
	func_430((*uParam0)[2], "TRB_STOP_DRIVER", 0, -1616532217, 0, 0, 0, 1, 0);
	func_431((*uParam0)[2], 1);
	func_432((*uParam0)[2], bParam1);
	func_433((*uParam0)[2], 15f);
}

void func_344(var uParam0, bool bParam1)
{
	func_430((*uParam0)[0], func_429(8), 0, -163964935, 0, 0, 0, 1, 0);
	func_431((*uParam0)[0], 1);
	func_432((*uParam0)[0], bParam1);
	func_433((*uParam0)[0], 15f);
	func_430((*uParam0)[1], func_429(10), 0, 648122183, 0, 0, 0, 1, 0);
	func_431((*uParam0)[1], 1);
	func_432((*uParam0)[1], 1);
	func_433((*uParam0)[1], 15f);
	func_430((*uParam0)[2], "TRB_STOP_DRIVER", 0, -1616532217, 0, 0, 0, 1, 0);
	func_431((*uParam0)[2], 1);
	func_432((*uParam0)[2], bParam1);
	func_433((*uParam0)[2], 15f);
}

int func_345(int iParam0, int iParam1, int iParam2)
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

int func_346(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_434(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_435(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
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
			func_81(&(iParam1->f_13));
		}
		if (func_436(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_437(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_346(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_438(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_439(*uParam0, 1, 1);
						}
					}
					else if (func_440(iParam1, 22))
					{
						func_439(*uParam0, 0, 1);
					}
				}
				if (func_441(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_442(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_443(iParam8);
					if (func_444(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_445(uParam3);
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
					func_446(iParam1, uParam3, fVar8);
					if (func_447(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_122(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_448(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_441(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_449(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_444(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_442(uParam0, func_441(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_443(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_122(uParam3, 0, 0, 1, 1);
					}
					func_332(iParam1, 1);
				}
				func_446(iParam1, uParam3, fVar8);
				if (func_448(uParam0, iParam1, fParam4, bVar6))
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
			func_450(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

char[] func_347(var uParam0)
{
	if (uParam0->f_11 == 0)
	{
		uParam0->f_11 = get_random_int_in_range(1, 20);
	}
	if (is_ped_male(*uParam0))
	{
		StringCopy(&cVar4, "INSULT_MALE_CONV", 32);
	}
	else
	{
		StringCopy(&cVar4, "INSULT_FEMALE_CONV", 32);
	}
	StringConCat(&cVar4, "_PART", 32);
	_int_to_string(1, "%d", &cVar0);
	StringConCat(&cVar4, &cVar0, 32);
	return func_451(cVar4);
}

bool func_348(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_452(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_453(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && is_entity_a_ped(iParam1))
	{
		return _0x9d9473cb82d83a30(iParam0, get_ped_index_from_entity_index(iParam1), 0) == 1;
	}
	return _0x7f9b9791d4cb71f6(iParam0, iParam1, bParam2, 0) == 1;
}

int func_349(int iParam0, var uParam1, int iParam2)
{
	if (_0x2963b5c1637e8a27(&(iParam0->f_1[0])) == Global_35)
	{
		return 0;
	}
	if (func_323(&(iParam0->f_1[0]), Global_35, 1, 1) > 27f)
	{
		return 0;
	}
	if (!is_ped_sitting_in_any_vehicle(&(iParam0->f_310[&iParam0->f_1[0]->f_11[0]])))
	{
		return 0;
	}
	vVar0 = { get_entity_coords(&(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]), true, false) };
	if (_get_entity_inside_explosion_area(-1, vVar0 + Vector(30f, 100f, 0f), vVar0 - Vector(30f, 100f, 0f), 30f) == func_454(Global_35))
	{
		return 0;
	}
	if (is_projectile_in_area(vVar0 + Vector(100f, 100f, 100f), vVar0 - Vector(100f, 100f, 100f), true))
	{
		return 0;
	}
	if (iParam2 < 2)
	{
		return 1;
	}
	if ((iParam2 < 3 && func_43(*uParam1, 8)) && is_entity_on_screen(&(iParam0->f_310[&iParam0->f_1[0]->f_11[0]])))
	{
		return 1;
	}
	return 0;
}

void func_350(int iParam0)
{
	func_455(0);
	if (!is_vehicle_stopped(&(iParam0->f_1[0])))
	{
		cVar0 = "CALL_OUT_TO_TRAIN_ENGINEER";
	}
	else
	{
		cVar0 = "ROB_SHOUTED";
	}
	func_134(Global_35, &(iParam0->f_310[&iParam0->f_1[0]->f_11[0]]), cVar0, 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
}

char* func_351()
{
	return "GET_OUT_CONDUCTOR";
}

char* func_352()
{
	return "GET_OUT";
}

char* func_353()
{
	return "LEAVE_NOW";
}

bool func_354(int iParam0, int iParam1)
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

char* func_355()
{
	return "WHATS_GOING_ON_BACK_THERE";
}

char* func_356()
{
	iVar0 = get_random_int_in_range(0, 3);
	switch (iVar0)
	{
		case 0:
		case default:
			return "GENERIC_ANGRY_REACTION";
		case 1:
			return "GET_AWAY_FROM_ME";
		case 2:
			return "DONT_BE_STUPID";
			default:
				break;
	}
}

char* func_357()
{
	return "NEED_HELP";
}

void func_358(int iParam0)
{
	_0xbbf6d1d07c02d00a(iParam0, 32);
	_0xbbf6d1d07c02d00a(iParam0, 1);
	_0xbbf6d1d07c02d00a(iParam0, 31);
	_0xbbf6d1d07c02d00a(iParam0, 4);
	_0xbbf6d1d07c02d00a(iParam0, 0);
	_0xbbf6d1d07c02d00a(iParam0, 6);
	_0xbbf6d1d07c02d00a(iParam0, 5);
	_0xbbf6d1d07c02d00a(iParam0, 26);
	_0xbbf6d1d07c02d00a(iParam0, 33);
	_0xbbf6d1d07c02d00a(iParam0, 15);
	_0xbbf6d1d07c02d00a(iParam0, 27);
	_0xbbf6d1d07c02d00a(iParam0, 28);
	_0xbbf6d1d07c02d00a(iParam0, 3);
	_0xbbf6d1d07c02d00a(iParam0, 14);
	_0xbbf6d1d07c02d00a(iParam0, 16);
	_0xae6004120c18df97(iParam0, 0, 1);
	set_ped_config_flag(iParam0, 1, false);
}

bool func_359(int iParam0, int iParam1)
{
	if (!func_125(&(iParam0->f_1115)))
	{
		func_362(&(iParam0->f_1115), 0);
		return false;
	}
	else if (is_entity_on_screen(&(iParam0->f_310[iParam1])) && iParam0->f_310[iParam1]->f_9 < 300f)
	{
		func_81(&(iParam0->f_1115));
		return false;
	}
	else if (!func_127(&(iParam0->f_1115), 5f))
	{
		return false;
	}
	if (get_entity_speed(&(iParam0->f_1[0])) > 0.2f)
	{
		return false;
	}
	if (is_ped_ragdoll(&(iParam0->f_310[iParam1])))
	{
		return false;
	}
	if (iParam0->f_310[iParam1]->f_9 < (19f / 2f))
	{
		return false;
	}
	return true;
}

Vector3 func_360(int iParam0)
{
	vVar3 = { get_entity_coords(&(iParam0->f_1[0]), true, false) };
	fVar6 = get_entity_heading(&(iParam0->f_1[0]));
	if (func_456(vVar3, get_entity_coords(&(iParam0->f_1[1]), true, false), Global_36))
	{
		vVar0 = { _get_object_offset_from_coords(vVar3, fVar6, -1.83f, -5f, 0f) };
	}
	else
	{
		vVar0 = { _get_object_offset_from_coords(vVar3, fVar6, 1.83f, -5f, 0f) };
	}
	vVar0.f_2 = (vVar0.z + 1f);
	if (!get_ground_z_for_3d_coord(vVar0, &(vVar0.f_2), false))
	{
		return 0f, 0f, 0f;
	}
	if (is_sphere_visible(vVar0, 1f))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

void func_361(int iParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4)
{
	clear_ped_tasks_immediately(iParam1, true, true);
	set_entity_coords(iParam1, vParam4, true, false, true, true);
	func_281(iParam0, iParam2, iParam3);
}

void func_362(var uParam0, bool bParam1)
{
	if (bParam1 || !func_125(uParam0))
	{
		func_81(uParam0);
	}
}

bool func_363(var uParam0, float fParam1)
{
	if (func_11(uParam0->f_7, 2))
	{
		return false;
	}
	iVar0 = *uParam0;
	if (!func_328())
	{
		return false;
	}
	if (_0xd0b7aeb56229d317(Global_35) == iVar0)
	{
		return true;
	}
	if (!func_453(iVar0, Global_35, fParam1, 1))
	{
		return false;
	}
	iVar1 = _0x7f9b9791d4cb71f6(iVar0, Global_35, false, 0);
	if (iVar1 == 0 || iVar1 == 2)
	{
		return false;
	}
	if (func_368(iVar0, 1, 1, 1, 0, 0))
	{
		return true;
	}
	if (func_457(iVar0, 15f, 35f, 1097859072, 0))
	{
		return true;
	}
	return false;
}

bool func_364(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_458(uParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !is_entity_dead(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = vdist(Global_36, get_entity_coords(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_459(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_460(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_461(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_460(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_462(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_460(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_365(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_460(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_183(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_460(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_463(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_464(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_460(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_465(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_460(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_466(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_460(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_466(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_460(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_467(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_460(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_468(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_460(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_469(uParam2, 4000))
				{
					if ((func_470(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_471(uParam2, iParam0)) && func_472(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_460(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_470(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_471(uParam2, iParam0)) && func_472(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_460(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_473(iParam0, Global_1935630->f_41))
							{
								func_474();
								*uParam3 = 2;
								func_460(iParam0, uParam2, *uParam3);
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
					if (*uParam2 & 131072 == 0)
					{
						if (func_473(iParam0, Global_1935630->f_41))
						{
							func_474();
							*uParam3 = 2;
							func_460(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_475(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_326() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_474();
						*uParam3 = 2;
						func_460(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_476())
					{
						if (func_473(iParam0, Global_1935630->f_42))
						{
							func_474();
							*uParam3 = 2;
							func_460(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_477(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_460(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_478(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_460(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_479(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_460(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_480(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_460(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_481(uParam2, 4000))
				{
					if (func_482(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_460(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_483(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_460(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_484(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_460(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_365(int iParam0, var uParam1)
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
	if (func_485(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_486(uParam1)
		{
			fVar3 = func_487(uParam1);
			if (uParam1->f_12 < fVar3)
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

bool func_366(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_488(iVar0, 0)))
		{
			if (func_489(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_367(int iParam0, int iParam1)
{
	if (iParam0->f_310[iParam1]->f_9 <= 5f)
	{
		return true;
	}
	if (func_490(player_id(), &(iParam0->f_310[iParam1])))
	{
		return true;
	}
	if (func_457(&(iParam0->f_310[iParam1]), 5f, 15f, 1097859072, 0))
	{
		return true;
	}
	return false;
}

bool func_368(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_323(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_488(iVar0, 0)))
		{
			if (func_491(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_369(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int* iParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11)
{
	bVar0 = true;
	if (is_entity_dead(&(iParam0->f_310[iParam4])))
	{
		bVar0 = false;
	}
	else if (!is_ped_using_any_scenario(&(iParam0->f_310[iParam4])) && !get_is_task_active(&(iParam0->f_310[iParam4]), 3))
	{
		bVar0 = false;
	}
	else if (iParam0->f_310[iParam4]->f_3 == 1 || iParam0->f_310[iParam4]->f_3 == 0)
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_492(iParam0, uParam7, uParam1, uParam2, uParam8, uParam9, iParam5, uParam6, iParam3, iParam4, iParam10);
		if (func_11(iParam0->f_310[iParam4]->f_7, 2048))
		{
			func_341(uParam6, iParam5);
			if (iParam0->f_310[iParam4]->f_4 == 19 || iParam0->f_310[iParam4]->f_4 == 20)
			{
				func_122(uParam6, 0, 0, 1, 0);
			}
			else if (func_11(iParam0->f_310[iParam4]->f_7, 2) || func_11(iParam0->f_310[iParam4]->f_7, 4194304))
			{
				func_493(uParam6, func_11(iParam0->f_310[iParam4]->f_7, 67108864), 1);
			}
			else if (func_11(iParam0->f_310[iParam4]->f_7, 512))
			{
				func_493(uParam6, func_11(iParam0->f_310[iParam4]->f_7, 67108864), (func_11(iParam0->f_310[iParam4]->f_7, 134217728) || !func_75(uParam2, 1073741824)));
			}
			else
			{
				func_494(uParam6, func_11(iParam0->f_310[iParam4]->f_7, 134217728), func_11(iParam0->f_310[iParam4]->f_7, 4096), func_11(iParam0->f_310[iParam4]->f_7, 8192), !func_75(uParam2, 1073741824));
			}
			func_74(&(iParam0->f_310[iParam4]->f_7), 2048);
		}
		iVar2 = func_345(1, 0, 0) | 2048 | 16384 | 256 | 65536 | 2097152;
		iVar1 = func_346(iParam0->f_310[iParam4], iParam5, 19f, uParam6, 0, 3, 0, 0, iVar2, 0, 0, 2, iParam0->f_310[iParam4]->f_9);
		func_74(&(iParam0->f_310[iParam4]->f_7), 33554432);
		if (func_440(iParam5, 1))
		{
			func_12(uParam1, 128, 1);
			*iParam11 = iParam4;
			func_34(&(iParam0->f_310[iParam4]->f_7), 33554432);
		}
		if (iVar1 != -1)
		{
			func_34(&(iParam0->f_310[iParam4]->f_7), 134217728);
		}
		switch (iVar1)
		{
			case 2:
				func_81((*uParam7)[1]);
				func_34(&(iParam0->f_310[iParam4]->f_7), 512);
				if (!func_43(*uParam1, 65536) || !func_11(iParam0->f_310[iParam4]->f_7, 512))
				{
					func_139(iParam0, iParam3, uParam7, uParam8, uParam9, uParam1, uParam2, iParam10, uParam6, iParam5, 0, 0);
					iParam0->f_310[iParam4]->f_3 = 2;
					bVar3 = true;
				}
				else
				{
					func_121((*uParam7)[15]);
					if (!func_328())
					{
						set_player_control(get_player_index(), false, func_171(), false);
						func_14(uParam2, 134217728);
						_display_hud_component(724769646);
						func_329(iParam10, 0);
					}
				}
				if (!bVar3)
				{
					func_495(iParam0, uParam1, iParam4, iParam3);
				}
				func_74(&(iParam0->f_310[iParam4]->f_7), 256);
				func_263(iParam0, iParam4, *uParam1);
				func_45(iParam0, iParam3);
				iParam0->f_310[iParam4]->f_3 = 2;
				func_34(&(iParam0->f_310[iParam4]->f_7), 4194304);
				iParam0->f_1[iParam3]->f_10++;
				func_341(uParam6, iParam5);
				func_99(uParam1);
				func_246(iParam0->f_310[iParam4], 9);
				return true;
			case 1:
				if (!func_11(iParam0->f_310[iParam4]->f_7, 512))
				{
					func_341(uParam6, iParam5);
					func_45(iParam0, iParam3);
					if (is_ped_male(&(iParam0->f_310[iParam4])))
					{
						func_134(Global_35, &(iParam0->f_310[iParam4]), func_347(iParam0->f_310[iParam4]), 0, -1082130432, iParam0->f_310[iParam4]->f_11, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					else
					{
						func_134(Global_35, &(iParam0->f_310[iParam4]), func_347(iParam0->f_310[iParam4]), 0, -1082130432, iParam0->f_310[iParam4]->f_11, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					func_246(iParam0->f_310[iParam4], 8);
					func_34(&(iParam0->f_310[iParam4]->f_7), 4096);
					func_34(&(iParam0->f_310[iParam4]->f_7), 8192);
					func_34(&(iParam0->f_310[iParam4]->f_7), 2048);
				}
				break;
			case 0:
				func_341(uParam6, iParam5);
				func_45(iParam0, iParam3);
				if (!func_11(iParam0->f_310[iParam4]->f_7, 512))
				{
					if (func_320())
					{
						if (is_ped_male(&(iParam0->f_310[iParam4])))
						{
							func_134(Global_35, &(iParam0->f_310[iParam4]), "GREET_MALE", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
						}
						else
						{
							func_134(Global_35, &(iParam0->f_310[iParam4]), "GREET_FEMALE", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
						}
					}
					else
					{
						func_134(Global_35, &(iParam0->f_310[iParam4]), "GREET_GENERAL", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					func_246(iParam0->f_310[iParam4], 8);
					func_34(&(iParam0->f_310[iParam4]->f_7), 4096);
					func_34(&(iParam0->f_310[iParam4]->f_7), 2048);
				}
				else
				{
					func_134(Global_35, &(iParam0->f_310[iParam4]), func_496(iParam0->f_310[iParam4]), 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					func_34(&(iParam0->f_310[iParam4]->f_7), 67108864);
				}
				break;
		}
	}
	else if (func_440(iParam5, 1))
	{
		func_122(uParam6, 0, 0, 1, 0);
		func_332(iParam5, 1);
	}
	return false;
}

bool func_370(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0->f_310[iParam1]->f_4 == 20)
	{
		return false;
	}
	if (iParam0->f_310[iParam1]->f_3 != 1)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 > 45)
	{
		return false;
	}
	if (is_entity_dead(&(iParam0->f_310[iParam1])))
	{
		return false;
	}
	if (get_entity_speed(&(iParam0->f_1[0])) < 1f)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_1098)
	{
		if (!_does_volume_exist(iParam0->f_1[iVar0]->f_1))
		{
			return false;
		}
		if (func_148(&(iParam0->f_310[iParam1]), iParam0->f_1[iVar0]->f_1, 1, 0))
		{
			iParam0->f_310[iParam1]->f_8 = iVar0;
			return false;
		}
		iVar0++;
	}
	if ((is_entity_on_screen(&(iParam0->f_310[iParam1])) && iParam0->f_310[iParam1]->f_9 < 300f) || iParam0->f_310[iParam1]->f_9 < (19f * 4f))
	{
		*bParam2 = 1;
		return false;
	}
	return true;
}

void func_371(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	fVar0 = func_96(iParam0, Global_36, 1);
	switch (iParam1)
	{
		case 1:
			fParam2 = 100f;
			fParam3 = 200f;
			iParam4 = 3000;
			iParam5 = 1000;
			iParam6 = 4000;
			break;
		case 2:
			fParam2 = 60f;
			fParam3 = 120f;
			iParam4 = 1000;
			iParam5 = 1;
			iParam6 = 1000;
			break;
		case 0:
			fParam2 = 75f;
			fParam3 = 140f;
			iParam4 = 1000;
			iParam5 = 1;
			iParam6 = 1500;
			break;
		case 3:
			if (fParam2 < 0f)
			{
			}
			if (fParam3 < 0f)
			{
			}
			if (iParam4 < 0)
			{
			}
			if (iParam5 < 0)
			{
			}
			break;
	}
	if (fParam2 >= fParam3)
	{
	}
	_0x39a2fc5af55a52b1(iParam0, iParam6);
	if (fParam7 > 0f)
	{
		_0x7c08e7cb8d951b70(iParam0, fParam7);
	}
	_0x36e4b61dc56de77c(iParam0, fParam2, fParam3, iParam4, iParam5);
}

void func_372(int iParam0, int iParam1, int iParam2, int* iParam3, var uParam4, var uParam5)
{
	bVar0 = func_11(iParam0->f_310[iParam1]->f_7, 32768);
	iVar1 = func_497(iParam0, iParam1, iParam3, uParam4, uParam5);
	if (iVar1 != -1)
	{
		func_120(iParam0, iParam2, 0);
	}
	switch (iVar1)
	{
		case 0:
			if (bVar0)
			{
				func_341(uParam4, iParam3);
				func_34(&(iParam0->f_310[iParam1]->f_7), 2048);
				func_134(Global_35, &(iParam0->f_310[iParam1]), "DEFUSE_ARGUMENT_TOUGH", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				func_34(&(iParam0->f_310[iParam1]->f_7), 268435456);
				func_74(&(iParam0->f_310[iParam1]->f_7), 134217728);
			}
			else
			{
				func_341(uParam4, iParam3);
				func_34(&(iParam0->f_310[iParam1]->f_7), 2048);
				func_134(&(iParam0->f_310[iParam1]), Global_35, "GREET_GENERAL_STRANGER", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 1:
			func_341(uParam4, iParam3);
			func_34(&(iParam0->f_310[iParam1]->f_7), 2048);
			func_34(&(iParam0->f_310[iParam1]->f_7), 8192);
			break;
	}
}

void func_373(var uParam0, bool bParam1)
{
	func_430((*uParam0)[0], func_429(8), 0, -163964935, 0, 0, 0, 1, 0);
	func_431((*uParam0)[0], 1);
	func_432((*uParam0)[0], bParam1);
	func_433((*uParam0)[0], 15f);
	func_430((*uParam0)[1], func_429(10), 0, 648122183, 0, 0, 0, 1, 0);
	func_431((*uParam0)[1], 1);
	func_432((*uParam0)[1], 1);
	func_433((*uParam0)[1], 15f);
	func_430((*uParam0)[2], func_429(12), 0, -1616532217, 0, 0, 0, 1, 0);
	func_431((*uParam0)[2], 0);
	func_433((*uParam0)[2], 15f);
}

void func_374(var uParam0, bool bParam1)
{
	func_430((*uParam0)[0], func_429(7), 0, -163964935, 0, 0, 0, 1, 0);
	func_431((*uParam0)[0], 1);
	func_432((*uParam0)[0], 1);
	func_433((*uParam0)[0], 15f);
	func_430((*uParam0)[1], func_429(10), 0, 648122183, 0, 0, 0, 1, 0);
	func_431((*uParam0)[1], 1);
	func_432((*uParam0)[1], 1);
	func_433((*uParam0)[1], 15f);
	func_430((*uParam0)[2], func_429(12), 0, -1616532217, 0, 0, 0, 1, 0);
	func_431((*uParam0)[2], 0);
	func_433((*uParam0)[2], 15f);
}

bool func_375(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist(iParam1))
	{
		return false;
	}
	return is_entity_in_volume(iParam0, iParam1, true, 0);
}

char* func_376()
{
	return "FINAL_WARNING";
}

bool func_377(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (!func_43(*uParam1, 64))
	{
		return false;
	}
	if (func_43(*uParam1, 8))
	{
		return false;
	}
	if (iParam0->f_1[iParam2]->f_6 == 2)
	{
		return false;
	}
	return true;
}

void func_378(var uParam0)
{
	if (!func_125(uParam0))
	{
	}
	if (!func_318(uParam0))
	{
		uParam0->f_2 = (func_301() - uParam0->f_1);
		func_302(uParam0, 2);
	}
}

void func_379(int iParam0, int iParam1)
{
	if (!func_11(iParam0->f_310[iParam1]->f_7, 131072))
	{
		if (func_354(&(iParam0->f_310[iParam1]), 242628503) && get_sequence_progress(&(iParam0->f_310[iParam1])) == 1)
		{
			clear_ped_tasks(&(iParam0->f_310[iParam1]), 1, 0);
			task_turn_ped_to_face_entity(&(iParam0->f_310[iParam1]), Global_35, -1, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (func_354(&(iParam0->f_310[iParam1]), 242628503) && get_sequence_progress(&(iParam0->f_310[iParam1])) == 0)
	{
		clear_ped_tasks(&(iParam0->f_310[iParam1]), 1, 0);
		task_aim_gun_at_entity(&(iParam0->f_310[iParam1]), Global_35, -1, 0, 1);
	}
}

bool func_380(int iParam0, int iParam1, int iParam2)
{
	if (func_11(iParam0->f_310[iParam2]->f_7, 32768) || !_get_ped_crouch_movement(Global_35))
	{
		bVar0 = func_348(&(iParam0->f_310[iParam2]), Global_35, 0, 19f, 0);
	}
	else
	{
		bVar0 = has_entity_clear_los_to_entity_in_front(&(iParam0->f_310[iParam2]), Global_35, 17);
	}
	if (!bVar0)
	{
		if (func_375(Global_35, iParam0->f_1[iParam1]->f_2, 148, 1))
		{
			vVar1 = { get_offset_from_entity_given_world_coords(&(iParam0->f_310[iParam2]), get_entity_coords(Global_35, true, false)) };
			fVar4 = 2f;
			if (func_11(iParam0->f_310[iParam2]->f_7, 32768))
			{
				fVar4 = 6f;
			}
			if (vVar1.x < 0f)
			{
				vVar1.x = (vVar1.x * -1f);
			}
			if (vVar1.y > 0f && vVar1.x < fVar4)
			{
				bVar0 = true;
			}
		}
	}
	return bVar0;
}

void func_381(int iParam0, int iParam1, int iParam2)
{
	if (!func_11(iParam0->f_1[iParam2]->f_4, 2048))
	{
		func_34(&(iParam0->f_310[iParam1]->f_7), 16777216);
		func_34(&(iParam0->f_1[iParam2]->f_4), 2048);
		iParam0->f_1[iParam2]->f_20 = iParam1;
	}
}

void func_382(int iParam0, int iParam1)
{
	if (func_11(iParam0->f_1[iParam1]->f_4, 2048))
	{
		func_74(&(iParam0->f_310[iParam0->f_1[iParam1]->f_20]->f_7), 16777216);
		func_74(&(iParam0->f_1[iParam1]->f_4), 2048);
		iParam0->f_1[iParam1]->f_20 = -1;
	}
}

void func_383(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_498(iParam0, iParam1);
	iVar1 = func_498(iParam0, iParam2);
	if (iVar0 >= iVar1)
	{
		return;
	}
	switch (iVar1)
	{
		case 3:
			func_34(&(iParam0->f_310[iParam1]->f_7), 131072);
		case 2:
			func_34(&(iParam0->f_310[iParam1]->f_7), 65536);
		case 1:
			func_34(&(iParam0->f_310[iParam1]->f_7), 32768);
		default:
			break;
	}
}

void func_384(var uParam0)
{
	if (!func_125(uParam0))
	{
	}
	if (func_318(uParam0))
	{
		uParam0->f_1 = (func_301() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_303(uParam0, 2);
	}
}

bool func_385(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 != -1)
	{
		return false;
	}
	if (is_vehicle_stopped(&(iParam0->f_1[0])))
	{
		return false;
	}
	if (func_11(iParam0->f_1[iParam2]->f_4, 128))
	{
		return false;
	}
	return true;
}

char* func_386()
{
	iVar0 = get_random_int_in_range(0, 3);
	switch (iVar0)
	{
		case 0:
		case default:
			return "SPOTTED_ENTERING_FAR";
		case 1:
			return "GET_LOST";
		case 2:
			return "DISCOVERED_FAR";
			default:
				break;
	}
}

bool func_387(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, var uParam5)
{
	if (func_11(iParam0->f_310[iParam1]->f_7, 524288))
	{
		return false;
	}
	if (func_499(iParam0, iParam2))
	{
		return true;
	}
	if (!bParam4)
	{
		if (func_11(iParam0->f_310[iParam1]->f_7, 67108864))
		{
			return false;
		}
		if (func_11(iParam0->f_310[iParam1]->f_7, 268435456))
		{
			return true;
		}
	}
	else if (func_11(iParam0->f_310[iParam1]->f_7, 131072) && func_377(iParam0, uParam5, iParam3))
	{
		return true;
	}
	return false;
}

char* func_388(bool bParam0)
{
	if (bParam0)
	{
		return "KEEP_GOING";
	}
	return "GUARD_PLAYER_LOITERING";
}

char* func_389()
{
	iVar0 = get_random_int_in_range(0, 3);
	switch (iVar0)
	{
		case 0:
		case default:
			return "SPOTTED_ENTERING_NEAR";
		case 1:
			return "WARNING";
		case 2:
			return "WARNED_ALREADY";
			default:
				break;
	}
}

char* func_390()
{
	return "OPENS_FIRE";
}

bool func_391(int iParam0, int iParam1, var uParam2)
{
	if (!func_43(*uParam2, 64))
	{
		return true;
	}
	if (iParam0->f_310[iParam1]->f_9 > (2.75f + 1f))
	{
		return true;
	}
	if (iParam0->f_310[iParam1]->f_12 == 0)
	{
		return false;
	}
	if ((get_game_timer() - iParam0->f_310[iParam1]->f_12) < 3000)
	{
		return false;
	}
	return true;
}

char* func_392()
{
	iVar0 = get_random_int_in_range(0, 3);
	switch (iVar0)
	{
		case 0:
		case default:
			return "OPENS_FIRE";
		case 1:
			return "TAUNT_GEN_NEUTRAL";
		case 2:
			return "TAUNT_GEN_MALE";
			default:
				break;
	}
}

int func_393(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (does_entity_exist(&(iParam0->f_1[iVar0])))
		{
			if (_does_volume_exist(iParam0->f_1[iVar0]->f_1) && is_entity_in_volume(&(iParam0->f_310[iParam1]), iParam0->f_1[iVar0]->f_1, true, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_394(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam2)
	{
		case 5:
			set_ped_combat_movement(&(iParam0->f_310[iParam1]), 1);
			set_ped_combat_range(&(iParam0->f_310[iParam1]), 2);
			set_ped_combat_attributes(&(iParam0->f_310[iParam1]), 50, false);
			set_ped_combat_attributes(&(iParam0->f_310[iParam1]), 42, false);
			set_ped_config_flag(&(iParam0->f_310[iParam1]), 189, true);
			_0x78815fc52832b690(&(iParam0->f_310[iParam1]), 1);
			_0xfc3db99c8144cd81(&(iParam0->f_310[iParam1]), iParam0->f_1[iParam0->f_310[iParam1]->f_8]->f_2, 0, 0, 0);
			break;
		case 0:
			set_ped_combat_movement(&(iParam0->f_310[iParam1]), 2);
			set_ped_combat_range(&(iParam0->f_310[iParam1]), 0);
			set_ped_combat_attributes(&(iParam0->f_310[iParam1]), 50, true);
			set_ped_combat_attributes(&(iParam0->f_310[iParam1]), 42, true);
			set_ped_config_flag(&(iParam0->f_310[iParam1]), 189, false);
			_0x78815fc52832b690(&(iParam0->f_310[iParam1]), 1);
			func_500(&(iParam0->f_310[iParam1]));
			break;
		case 1:
			set_ped_combat_movement(&(iParam0->f_310[iParam1]), 1);
			set_ped_combat_range(&(iParam0->f_310[iParam1]), 2);
			set_ped_combat_attributes(&(iParam0->f_310[iParam1]), 50, false);
			set_ped_combat_attributes(&(iParam0->f_310[iParam1]), 42, false);
			_0x78815fc52832b690(&(iParam0->f_310[iParam1]), 1);
			set_ped_config_flag(&(iParam0->f_310[iParam1]), 189, true);
			func_500(&(iParam0->f_310[iParam1]));
			break;
		case 2:
			set_ped_combat_movement(&(iParam0->f_310[iParam1]), 1);
			set_ped_combat_range(&(iParam0->f_310[iParam1]), 0);
			set_ped_combat_attributes(&(iParam0->f_310[iParam1]), 50, false);
			set_ped_combat_attributes(&(iParam0->f_310[iParam1]), 42, false);
			_0x8acc0506743a8a5c(&(iParam0->f_310[iParam1]), 1093694531, 1, -1082130432);
			set_ped_config_flag(&(iParam0->f_310[iParam1]), 189, true);
			func_500(&(iParam0->f_310[iParam1]));
			break;
		case 3:
			set_ped_combat_movement(&(iParam0->f_310[iParam1]), 2);
			set_ped_combat_range(&(iParam0->f_310[iParam1]), 0);
			set_ped_combat_attributes(&(iParam0->f_310[iParam1]), 50, true);
			set_ped_combat_attributes(&(iParam0->f_310[iParam1]), 42, false);
			_0x8acc0506743a8a5c(&(iParam0->f_310[iParam1]), 1093694531, 1, -1082130432);
			set_ped_config_flag(&(iParam0->f_310[iParam1]), 189, true);
			func_500(&(iParam0->f_310[iParam1]));
			break;
		case 4:
			set_blocking_of_non_temporary_events(&(iParam0->f_310[iParam1]), true);
			open_sequence_task(&iVar0);
			vVar1 = { get_offset_from_entity_given_world_coords(&(iParam0->f_1[1]), get_entity_coords(&(iParam0->f_310[iParam1]), true, false)) };
			task_goto_entity_offset_xy_aiming(0, &(iParam0->f_1[1]), 0, -1, 0.65f, vVar1.x, -4f, 1073741824, 17);
			task_turn_ped_to_face_entity(0, &(iParam0->f_1[1]), 0, 3f, -1082130432, -1082130432);
			task_climb(0, true);
			close_sequence_task(iVar0);
			task_perform_sequence(&(iParam0->f_310[iParam1]), iVar0);
			set_ped_config_flag(&(iParam0->f_310[iParam1]), 189, true);
			break;
	}
	iParam0->f_310[iParam1]->f_5 = iParam2;
}

void func_395(int iParam0, int iParam1, int iParam2)
{
	if (func_501(iParam0, iParam1))
	{
		func_84(iParam0->f_310[iParam1]);
		iParam0->f_310[iParam1]->f_4 = 20;
		iParam0->f_1101++;
	}
}

int func_396()
{
	return 138130985;
}

int func_397(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_201(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_201(iVar4) && iVar4 != iVar0)
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
	if (func_187() == -1 && !func_502(iVar0))
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
				if (func_502(-183018591))
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
		if (iParam0 != Global_35 && func_201(iVar0))
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
		func_503(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_504(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_505(iVar0))
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

void func_398(var uParam0)
{
	set_ped_config_flag(*uParam0, 307, true);
	set_ped_config_flag(*uParam0, 43, true);
	set_ped_combat_movement(*uParam0, 1);
	set_ped_combat_ability(*uParam0, 2);
	_0xbd75500141e4725c(*uParam0, 298468673);
	set_ped_combat_range(*uParam0, 1);
	set_ped_combat_attributes(*uParam0, 58, true);
	set_ped_combat_attributes(*uParam0, 6, false);
	set_ped_combat_attributes(*uParam0, 17, false);
	set_ped_combat_attributes(*uParam0, 5, true);
	set_ped_combat_attributes(*uParam0, 3, false);
	set_ped_combat_attributes(*uParam0, 50, false);
	set_ped_combat_attributes(*uParam0, 42, false);
	set_ped_combat_attributes(*uParam0, 30, false);
	set_ped_combat_attributes(*uParam0, 24, true);
	set_ped_combat_attributes(*uParam0, 71, false);
	set_ped_combat_attributes(*uParam0, 73, true);
	set_ped_combat_attributes(*uParam0, 47, false);
	set_ped_combat_attributes(*uParam0, 31, false);
	set_ped_combat_attributes(*uParam0, 1, false);
	set_combat_float(*uParam0, 13, 7.5f);
	set_ped_accuracy(*uParam0, 50);
}

int func_399()
{
	return -786018483;
}

char* func_400(int iParam0)
{
	switch (iParam0)
	{
		case -786018483:
			iVar0 = get_random_int_in_range(0, 3);
			switch (iVar0)
			{
				case 0:
				case default:
					return "0835_S_M_M_GenConductor_01_WHITE_01";
				case 1:
					return "0836_S_M_M_GenConductor_01_WHITE_02";
				case 2:
					return "0837_S_M_M_GenConductor_01_WHITE_03";
					break;
				case 138130985:
					iVar0 = get_random_int_in_range(0, 10);
					switch (iVar0)
					{
						case 0:
						case default:
							return "0946_A_M_M_Guard_White_AGGRESSIVE_01";
						case 1:
							return "0947_A_M_M_Guard_White_AGGRESSIVE_02";
						case 2:
							return "0948_A_M_M_Guard_White_AGGRESSIVE_03";
						case 3:
							return "0949_A_M_M_Guard_White_AGGRESSIVE_04";
						case 4:
							return "0950_A_M_M_Guard_White_AGGRESSIVE_05";
						case 5:
							return "0951_A_M_M_Guard_White_AGGRESSIVE_06";
						case 6:
							return "0952_A_M_M_Guard_White_AGGRESSIVE_07";
						case 7:
							return "0953_A_M_M_Guard_White_AGGRESSIVE_08";
						case 8:
							return "0954_A_M_M_Guard_White_AGGRESSIVE_09";
						case 9:
							return "0955_A_M_M_Guard_White_AGGRESSIVE_10";
							break;
					}
					return "";
				}

void func_401(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_402(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

bool func_402(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_319(iParam0, iParam1);
}

bool func_403(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

bool func_404(int iParam0, int iParam1)
{
	if (func_187() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_405(int iParam0)
{
	if (func_187() != -1)
	{
		if (func_407(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_407(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_406(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_407(iParam0, 65536) && !func_407(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_407(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_407(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_407(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_408(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_409()
{
	return Global_1905944->f_5694;
}

int func_410(int iParam0)
{
	if (!func_198(iParam0))
	{
		return -1;
	}
	return func_506(iParam0);
}

bool func_411(int iParam0, int iParam1, float fParam2)
{
	if (!does_entity_exist(&(iParam0->f_1[iParam1])))
	{
		return false;
	}
	if (get_distance_between_coords(get_entity_coords(Global_35, true, false), get_entity_coords(&(iParam0->f_1[iParam1]), true, false), true) <= fParam2)
	{
		return true;
	}
	return false;
}

Vector3 func_412(int iParam0)
{
	vVar0 = { 0f, 0f, 0f };
	if (!does_entity_exist(iParam0))
	{
		return vVar0;
	}
	iVar3 = get_entity_bone_index_by_name(iParam0, "Gun_Muzzle");
	vVar4 = { get_world_position_of_entity_bone(iParam0, iVar3) };
	vVar7 = { get_offset_from_entity_in_world_coords(iParam0, 1f, 0f, 0f) - get_entity_coords(iParam0, false, false) };
	vVar7 = { vVar7 / FtoV(vmag(vVar7)) };
	vVar0 = { vVar4 + Vector(0.1f, 0.1f, 0.1f) * vVar7 };
	return vVar0;
}

Vector3 func_413(int iParam0)
{
	vVar0 = { 0f, 0f, 0f };
	if (!does_entity_exist(iParam0))
	{
		return vVar0;
	}
	iVar3 = get_entity_bone_index_by_name(iParam0, "Gun_Muzzle");
	vVar4 = { get_world_position_of_entity_bone(iParam0, iVar3) };
	vVar7 = { get_offset_from_entity_in_world_coords(iParam0, 1f, 0f, 0f) - get_entity_coords(iParam0, false, false) };
	vVar7 = { vVar7 / FtoV(vmag(vVar7)) };
	vVar0 = { vVar4 + vVar7 };
	return vVar0;
}

bool func_414()
{
	fVar0 = 250f;
	if (func_309(vLocal_696, 1) == 5)
	{
		fVar0 = 475f;
	}
	if (fVar693 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_415(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_416(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_507(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_417(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_418(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_507(0);
	*uParam1 = { func_509(iParam0, func_508(0), iParam3, 0) };
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

int func_419(int iParam0)
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

bool func_420(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

bool func_421(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_422(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_510())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

int func_423(vector3 vParam0, bool bParam3)
{
	iVar0 = func_511(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1894065)[iVar0][iVar2];
			if (_does_volume_exist((*Global_1888801)[iVar4]->f_3))
			{
				if (_0xf256a75210c5c0eb((*Global_1888801)[iVar4]->f_3, vParam0))
				{
					switch ((*Global_1888801)[iVar4]->f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

bool func_424(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_425(int iParam0)
{
	return func_512(iParam0, 2);
}

bool func_426(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_427(var uParam0, float fParam1)
{
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (get_ground_z_for_3d_coord(vVar0, &uVar3, false))
	{
		uParam0->f_2 = uVar3;
		return true;
	}
	return false;
}

void func_428(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_121(&(iParam0->f_18));
}

char* func_429(int iParam0)
{
	if (func_513(iParam0))
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

void func_430(int* iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = iParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_218(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_514(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_515(iParam0->f_6, iParam0->f_5, 0);
			}
			func_516(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_517(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_431(int* iParam0, bool bParam1)
{
	func_518(iParam0, !bParam1);
}

void func_432(int* iParam0, bool bParam1)
{
	func_519(iParam0, !bParam1, 0);
}

void func_433(int* iParam0, float fParam1)
{
	if (fParam1 <= 0f)
	{
		func_520(iParam0, 0);
	}
	else
	{
		func_521(iParam0, fParam1);
	}
}

void func_434(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

float func_435(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_436(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_522(iParam0, iParam1))
		{
			if (!func_11(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_122(uParam2, 0, 0, 1, 0);
				func_34(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_11(iParam1->f_10, 1))
		{
			func_523(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_74(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_437(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_11(iParam4, 32);
		func_524(iParam1, uParam2, 0);
		iVar5 = func_525(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_122(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_11(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_11(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_11(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_11(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_11(iParam4, 8388608) || func_11(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_11(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_11(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_440(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_440(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_11(iParam4, 67108864))
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
				iParam6 = func_526(uParam0);
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
			if (func_11(iParam4, 268435456))
			{
				iVar8 = func_527(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_528(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_440(iParam1, 23))
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
			if (func_11(iParam4, 2) || func_11(iParam4, 16))
			{
				func_439(*uParam0, 1, 1);
			}
			else
			{
				func_439(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_438(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_439(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_440(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_441(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_529(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_442(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_530(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_11(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_443(int iParam0)
{
	if (func_11(iParam0, 4))
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
	if (func_11(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_11(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_444(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_531(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_532(Global_35)) || func_533(Global_35)) || func_534(Global_35));
	fVar12 = -1f;
	if (func_125(&(iParam1->f_13)))
	{
		fVar12 = func_224(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_218((*uParam4)[iVar0]->f_6);
		func_535(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_536(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_537(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_122(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_538(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_524(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_539(iParam1, fParam6, iParam1->f_9))
					{
						func_81(&(iParam1->f_18));
						if (bVar6)
						{
							func_538(uParam4, 0, 0);
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
		func_540(iParam1, fParam2);
	}
	return bVar5;
}

void func_445(var uParam0)
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

void func_446(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_541((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_540(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_447(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_542(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_543(iParam1, 0);
				func_524(iParam1, uParam2, func_440(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_448(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_81(&(iParam1->f_18));
			return false;
		}
		else if (func_125(&(iParam1->f_18)))
		{
			func_121(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_125(&(iParam1->f_18)))
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
	return func_130(&(iParam1->f_18), fParam2);
	return true;
}

void func_449(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_535(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_450(int* iParam0, var uParam1)
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
	func_524(iParam0, uParam1, 1);
	func_122(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

var func_451(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

bool func_452(int iParam0, int iParam1, float fParam2)
{
	return func_544(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

bool func_453(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_454(var uParam0)
{
	return uParam0;
}

void func_455(int iParam0)
{
	func_121(&uLocal_0);
	func_545(1, iParam0, 0);
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_546();
}

bool func_456(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_457(int iParam0, float fParam1, float fParam2, float fParam3, bool bParam4)
{
	if (!Global_1935630->f_27 && !bParam4)
	{
		return false;
	}
	if (is_control_pressed(0, -128997553))
	{
		fVar0 = func_323(iParam0, player_ped_id(), 0, 1);
		if (fVar0 < fParam3 && fVar0 > 0.5f)
		{
			if (is_player_free_aiming(player_id()) || is_player_targetting_entity(player_id(), iParam0, false))
			{
				if (_0x3ee1f7a8c32f24e1(player_id(), &iVar1, false, false))
				{
					iVar2 = iParam0;
					if (iVar1 == iVar2)
					{
						return false;
					}
				}
				iVar3 = func_488(player_ped_id(), 0);
				if (func_420(iVar3) && !is_control_pressed(0, 130948705))
				{
					return false;
				}
				if (is_ped_in_any_vehicle(iParam0, false) && was_ped_skeleton_updated(iParam0))
				{
					vVar4 = { get_ped_bone_coords(iParam0, 21030, 0f, 0f, 0f) };
				}
				else
				{
					vVar4 = { get_entity_coords(iParam0, false, false) };
				}
				vVar7 = { func_547(0) };
				vVar10 = { func_548(vVar4 - get_gameplay_cam_coord()) };
				fVar13 = absf(get_angle_between_2d_vectors(vVar10.x, vVar10.y, vVar7.x, vVar7.y));
				fVar14 = absf(get_angle_between_2d_vectors(vVar10.y, vVar10.z, vVar7.y, vVar7.z));
				if (fVar13 < fParam1)
				{
					if (fVar14 < fParam2)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_458(var uParam0, bool bParam1, int iParam2)
{
	func_549(iParam2);
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
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		uParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		uParam0->f_13 = func_550(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == -1504859554)
					{
						if (is_ped_planting_bomb(Global_35))
						{
							func_34(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_551(1))
						{
							func_34(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_551(1) || *uParam0 & 8192 != 0))
				{
					func_74(uParam0, 33554432);
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
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!does_entity_exist(uParam0->f_14))
		{
			if (func_552(uParam0))
			{
				uParam0->f_15 = func_326();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_326() - uParam0->f_15) > 500)
			{
				if (!is_ped_on_mount(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_553(uParam0);
}

bool func_459(int iParam0, var uParam1)
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
			if (!func_485(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_554(iParam0, iVar2) <= func_555(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_460(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_556(iParam2, 1, 1, 1, 0))
	{
		func_34(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_327(uParam1, 1);
	func_557();
}

bool func_461(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_368(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_487(uParam1);
			if (func_558(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_486(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_327(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_327(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_462(int iParam0, int iParam1, var uParam2)
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
	if (func_366(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_487(uParam2);
		if (func_558(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_486(uParam2)
				{
					func_327(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_463(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_326();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_464(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_559(uParam2);
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
			if (func_472(uParam2, iParam1))
			{
				func_327(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_465(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_560(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_472(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_327(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_466(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_561(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_327(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_327(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_562(iParam1, vVar0, vVar4))
					{
						func_327(uParam2, 1);
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
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_327(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_562(iParam1, vVar0, vVar7))
					{
						func_327(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_467(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_485(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_563(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_564(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && decor_exist_on(iParam0, "HorseOwnerTeamA")) || (decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && decor_exist_on(iParam0, "HorseOwnerTeamB")))
					{
						*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
						*vVar2[1] = { vVar9 };
						uParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_565(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_566(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_567(uParam1, iParam0, fVar1, iVar0))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_468(int iParam0, var uParam1)
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

bool func_469(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_326();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_470(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_568(iVar0, &iVar2))
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
	if (func_569(iVar0, iParam0))
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

int func_471(var uParam0, int iParam1)
{
	if (!decor_exist_on(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = decor_get_int(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (decor_set_int(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_472(var uParam0, int iParam1)
{
	if (func_570(uParam0))
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

bool func_473(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_323(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_474()
{
}

bool func_475(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_571(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_326();
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
						if (func_96(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_326();
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

bool func_476()
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
	if ((func_326() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_477(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_555(uParam0);
	if (uParam0->f_12 > func_572(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_573(iParam1);
	iVar1 = func_574(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, true, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_478(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_575(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_479(int iParam0, var uParam1)
{
	if (*uParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630->f_24)
	{
		return true;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_576(iParam0, uParam1, 1))
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
					if (!func_577(uParam1, iParam0))
					{
						if (func_96(iVar4, Global_36, 1) < 7f)
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

bool func_480(int iParam0, var uParam1)
{
	if (!func_578(0))
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

bool func_481(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_326();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_482(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_483(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_326();
	}
	else if (func_326() - uParam1->f_4) > func_579(uParam1)
	{
		return func_580(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_484(var uParam0, int iParam1)
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

bool func_485(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_574(iParam2);
	}
	else
	{
		iVar1 = func_573(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_574(iParam0);
	}
	else
	{
		iVar0 = func_573(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_11(*uParam1, 8388608))
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

int func_486(var uParam0)
{
	return uParam0->f_18;
}

float func_487(var uParam0)
{
	return uParam0->f_17;
}

int func_488(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_489(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_490(int iParam0, int iParam1)
{
	if ((is_player_playing(iParam0) && does_entity_exist(iParam1)) && !is_entity_dead(iParam1))
	{
		if (((_0x3ee1f7a8c32f24e1(iParam0, &iVar0, false, false) && does_entity_exist(iVar0)) && iVar0 == iParam1) || ((_0xbea3a6e5f5f79a6f(iParam0, &iVar0) && does_entity_exist(iVar0)) && iVar0 == iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_491(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_489(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_492(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int* iParam6, var uParam7, int iParam8, int iParam9, int iParam10)
{
	if (func_581(iParam0, iParam9))
	{
		func_341(uParam7, iParam6);
		func_99(uParam2);
		if (!func_43(*uParam2, 65536) || !func_11(iParam0->f_310[iParam9]->f_7, 512))
		{
			func_139(iParam0, iParam8, uParam1, uParam4, uParam5, uParam2, uParam3, iParam10, uParam7, iParam6, 0, 0);
		}
		else
		{
			func_121((*uParam1)[15]);
		}
		func_34(&(iParam0->f_310[iParam9]->f_7), 512);
		func_263(iParam0, iParam9, *uParam2);
		func_34(&(iParam0->f_310[iParam9]->f_7), 4194304);
		func_34(&(iParam0->f_310[iParam9]->f_7), 2);
		iParam0->f_1[iParam8]->f_10++;
		func_45(iParam0, iParam8);
		func_134(Global_35, &(iParam0->f_310[iParam9]), "ROB_COACH_THREATEN_WARNING_SHOT", 0, -1082130432, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
		func_81((*uParam1)[1]);
		func_121((*uParam1)[15]);
		func_246(iParam0->f_310[iParam9], 9);
	}
}

void func_493(var uParam0, bool bParam1, bool bParam2)
{
	func_430((*uParam0)[2], func_429(12), 0, -1616532217, 0, 0, 0, 1, 0);
	func_431((*uParam0)[2], 1);
	func_432((*uParam0)[2], (bParam1 || bParam2));
	func_433((*uParam0)[2], 2.75f);
	func_430((*uParam0)[1], func_429(10), 0, 648122183, 0, 0, 0, 1, 0);
	func_431((*uParam0)[1], 1);
	func_432((*uParam0)[1], 1);
	func_433((*uParam0)[1], 2.75f);
	func_430((*uParam0)[0], func_429(7), 0, -163964935, 0, 0, 0, 1, 0);
	func_431((*uParam0)[0], 1);
	func_432((*uParam0)[0], 1);
	func_433((*uParam0)[0], 2.75f);
}

void func_494(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	func_430((*uParam0)[0], func_429(7), 0, -163964935, 0, 0, 0, 1, 0);
	func_431((*uParam0)[0], 1);
	func_432((*uParam0)[0], (bParam1 || bParam2));
	func_433((*uParam0)[0], 2.75f);
	func_430((*uParam0)[1], func_429(10), 0, 648122183, 0, 0, 0, 1, 0);
	func_431((*uParam0)[1], 1);
	func_432((*uParam0)[1], (bParam1 || bParam3));
	func_433((*uParam0)[1], 2.75f);
	func_430((*uParam0)[2], func_429(12), 0, -1616532217, 0, 0, 0, 1, 0);
	func_431((*uParam0)[2], 1);
	func_432((*uParam0)[2], (bParam1 || bParam4));
	func_433((*uParam0)[2], 2.75f);
}

void func_495(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_11(iParam0->f_310[iParam2]->f_7, 512))
	{
		if (iParam0->f_1[iParam3]->f_10 == 0)
		{
			func_134(Global_35, &(iParam0->f_310[iParam2]), "ROB_GENERAL", 0, -1082130432, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
		}
		else
		{
			iVar0 = get_random_int_in_range(0, 4);
			if (iVar0 == 0)
			{
				func_134(Global_35, &(iParam0->f_310[iParam2]), "ROB_ESCALATED_GENERAL", 0, -1082130432, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
			}
			else
			{
				func_134(Global_35, &(iParam0->f_310[iParam2]), "ROB_ESCALATED_THREATEN", 0, -1082130432, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
			}
		}
	}
}

char* func_496(var uParam0)
{
	if (func_11(uParam0->f_7, 4194304) || func_11(uParam0->f_7, 2))
	{
		return "ROB_ACCEPT_OFFER";
	}
	return "ROB_DEFUSE";
}

int func_497(int iParam0, int iParam1, int* iParam2, var uParam3, var uParam4)
{
	bVar0 = func_11(iParam0->f_310[iParam1]->f_7, 32768);
	if (*uParam4 != 1 || func_11(iParam0->f_310[iParam1]->f_7, 2048))
	{
		func_341(uParam3, iParam2);
		if (!bVar0)
		{
			func_582(uParam3);
		}
		else
		{
			func_583((*uParam3)[0], 0, 1);
			func_373(uParam3, (func_11(iParam0->f_310[iParam1]->f_7, 268435456) || func_11(iParam0->f_310[iParam1]->f_7, 134217728)));
		}
		func_74(&(iParam0->f_310[iParam1]->f_7), 2048);
		*uParam4 = 1;
	}
	iVar2 = func_345(1, 0, 0) | 16384;
	if (bVar0)
	{
		fVar1 = 0f;
	}
	else
	{
		fVar1 = 2f;
	}
	iVar3 = func_346(iParam0->f_310[iParam1], iParam2, 19f, uParam3, fVar1, 3, 0, 0, iVar2, 0, 0, 2, iParam0->f_310[iParam1]->f_9);
	if (iVar3 != -1)
	{
		return iVar3;
	}
	if (func_584(iParam2))
	{
		iVar4 = func_585(iParam2);
		if (iVar4 != -1)
		{
			if (!bVar0)
			{
				switch (iVar4)
				{
					case 0:
						func_583((*uParam3)[0], 1, 1);
						func_134(Global_35, &(iParam0->f_310[iParam1]), "GREET_GENERAL", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
					case 1:
						func_583((*uParam3)[1], 1, 1);
						func_134(Global_35, &(iParam0->f_310[iParam1]), func_347(iParam0->f_310[iParam1]), 0, -1082130432, iParam0->f_310[iParam1]->f_11, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
				}
			}
		}
	}
	return iVar3;
}

int func_498(int iParam0, int iParam1)
{
	if (func_11(iParam0->f_310[iParam1]->f_7, 131072))
	{
		return 3;
	}
	if (func_11(iParam0->f_310[iParam1]->f_7, 65536))
	{
		return 2;
	}
	if (func_11(iParam0->f_310[iParam1]->f_7, 32768))
	{
		return 1;
	}
	return 0;
}

bool func_499(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return true;
	}
	iVar0 = func_586(Global_35, &(iParam0->f_1[iParam1]), 1060437492);
	if (!_0xf60165e1d2c5370b(Global_35, &uVar1, &fVar2))
	{
		return false;
	}
	if (fVar2 >= 1.5f)
	{
		return true;
	}
	else if (fVar2 >= 1f)
	{
		if (iVar0 == 1)
		{
			return true;
		}
	}
	return false;
}

void func_500(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		remove_ped_defensive_area(iParam0, true);
		remove_ped_defensive_area(iParam0, false);
	}
}

bool func_501(int iParam0, int iParam1)
{
	if (is_entity_dead(&(iParam0->f_310[iParam1])))
	{
		return false;
	}
	if (iParam0->f_310[iParam1]->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_502(int iParam0)
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

int func_503(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_587(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_588((386 + iVar28), 1);
			if (func_589(iParam0, &Var0, iVar5, 0))
			{
				if (func_590(iParam0, &Var6, iVar5))
				{
					Var29 = { func_509(iParam0, Var0, iVar5, 0) };
					func_591(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_592(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_593(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_594(iParam0, iParam1);
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

void func_504(int iParam0, int iParam1, float fParam2)
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
			Jump @522; //curOff = 482
			*fParam2 = get_random_float_in_range(0.3f, 0.4f);
			if (get_ped_relationship_group_hash(iParam0) == 1030835986)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				set_ped_config_flag(iParam0, 361, true);
			}
		}

bool func_505(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_506(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_595(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_507(bool bParam0)
{
	if (func_187() == -1)
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

struct<4> func_508(bool bParam0)
{
	iVar0 = func_507(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_509(923904168, func_596(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_509(923904168, func_596(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_509(923904168, func_596(bParam0), -740156546, 0);
}

struct<4> func_509(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_597(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_507(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_510()
{
	if (func_187() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_511(vector3 vParam0)
{
	iVar0 = func_598(vParam0, 0f, 0f, 0, 2);
	return func_598(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

bool func_512(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_513(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_514(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_218(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_515(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_218(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_516(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_218(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (bParam1)
	{
		func_599(iParam0, 4);
		func_600(iVar0, 1);
		func_601(iVar0, 1);
	}
	else
	{
		func_602(iParam0, 4);
		func_601(iVar0, 0);
	}
}

void func_517(int* iParam0, char* sParam1)
{
	if (func_218(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_515(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_603(iParam0, 1);
}

void func_518(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_604(iParam0, 4))
		{
			func_219(&(iParam0->f_6), 1, 1);
			func_605(iParam0, 4);
		}
	}
	else if (func_604(iParam0, 4))
	{
		func_603(iParam0, 4);
		func_605(iParam0, 14);
	}
}

void func_519(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_604(iParam0, 13))
	{
		func_605(iParam0, 0);
	}
	else
	{
		func_603(iParam0, 0);
	}
	if (func_218(iParam0->f_6))
	{
		if (bParam2)
		{
			func_219(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_520(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		iParam0->f_4 = 0f;
	}
	func_603(iParam0, 7);
}

void func_521(int* iParam0, float fParam1)
{
	iParam0->f_4 = fParam1;
	func_605(iParam0, 7);
}

bool func_522(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_606((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_523(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_541((*uParam0)[iVar0]))
		{
			func_605((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

void func_524(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_219(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_428(iParam0, 0);
		}
	}
}

int func_525(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_607(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_218((*uParam2)[iVar0]->f_6))
		{
			func_605((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_526(var uParam0)
{
	iVar0 = func_608(*uParam0);
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

int func_527(var uParam0, int iParam1)
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

void func_528(int* iParam0, int* iParam1)
{
	if (!func_440(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_605(iParam1, 19);
			func_543(iParam0, 23);
			func_609(iParam1, 2);
		}
	}
}

bool func_529(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_610(16))
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
					func_611(16);
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

void func_530(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_607(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_531(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_532(int iParam0)
{
	return (func_612(iParam0, 4) || func_612(iParam0, 5));
}

int func_533(int iParam0)
{
	return func_612(iParam0, 7);
}

int func_534(int iParam0)
{
	return func_612(iParam0, 6);
}

void func_535(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_541(iParam1))
		{
			clear_bit(iParam1, 14);
			func_607(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_536(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_613(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_614(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_516(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_516(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_615(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_537(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_616(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_617(iParam1, 1))
	{
		func_618(iParam1, 1);
		return true;
	}
	return false;
}

void func_538(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_519((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_539(int* iParam0, float fParam1, bool bParam2)
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

void func_540(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_541(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_542(int iParam0)
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

void func_543(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_544(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_545(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_546()
{
	_0xdd1232b332cbb9e7(4, 1, 0);
}

Vector3 func_547(int iParam0)
{
	if (!does_cam_exist(iParam0))
	{
		vVar0 = { get_gameplay_cam_rot(2) };
	}
	else
	{
		vVar0 = { get_cam_rot(iParam0, 2) };
	}
	fVar3 = sin(vVar0.z);
	fVar4 = cos(vVar0.z);
	fVar5 = sin(vVar0.x);
	fVar6 = cos(vVar0.x);
	return func_548((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_548(vector3 vParam0)
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

void func_549(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_619();
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
			func_620(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_550(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_551(bool bParam0)
{
	if (func_621(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_552(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_187() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_622(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_622(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_574(iVar0) == -1)
	{
		return false;
	}
	if (!decor_exist_on(iVar0, "HorseScriptCreator") || decor_get_int(iVar0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return false;
	}
	uParam0->f_14 = iVar0;
	return true;
}

void func_553(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_623(uParam0);
	}
}

float func_554(int iParam0, int iParam1)
{
	return func_323(iParam0, iParam1, 1, 1);
}

float func_555(var uParam0)
{
	return uParam0->f_26;
}

bool func_556(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_557()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_558(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_11(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (_0x06087579e7aa85a9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (has_entity_clear_los_to_entity(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

float func_559(var uParam0)
{
	return uParam0->f_23;
}

int func_560(var uParam0)
{
	return uParam0->f_21;
}

int func_561(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_562(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_544(iParam0, vParam4, 0.5f))
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

int func_563(int iParam0)
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
	if (func_624(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_564(int iParam0)
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

bool func_565(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_625(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_566(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_625(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_567(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_625(iParam1))
	{
		return false;
	}
	if (*uParam0 & 65536 != 0)
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

bool func_568(int iParam0, int iParam1)
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

bool func_569(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_626(iParam0, 1, 0, 0) != 2055893578)
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

bool func_570(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_571(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_96(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_572(var uParam0)
{
	return uParam0->f_24;
}

int func_573(int iParam0)
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

int func_574(int iParam0)
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

int func_575(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_568(Global_35, &iVar1))
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
		fVar2 = func_323(iParam0, player_ped_id(), 0, 1);
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
		if (func_323(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_576(int iParam0, var uParam1, bool bParam2)
{
	func_621(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_577(uParam1, iVar0))
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
				if (!bParam2 || !func_577(uParam1, iVar1))
				{
					if (func_96(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_577(var uParam0, int iParam1)
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

int func_578(int iParam0)
{
	if (func_510())
	{
		return 0;
	}
	return func_289((*Global_1347702)[58]->f_15, 1);
}

int func_579(var uParam0)
{
	return uParam0->f_20;
}

int func_580(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
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

bool func_581(int iParam0, int iParam1)
{
	if (func_11(iParam0->f_310[iParam1]->f_7, 4194304))
	{
		return false;
	}
	if (!func_11(iParam0->f_310[iParam1]->f_7, 33554432))
	{
		return false;
	}
	if (iParam0->f_310[iParam1]->f_3 == 1)
	{
		return false;
	}
	if (iParam0->f_310[iParam1]->f_9 > (2.75f + 0.5f))
	{
		return false;
	}
	if (!is_ped_shooting(Global_35))
	{
		return false;
	}
	if (_0x6614f9039bd31931(get_player_index(), 7, 0))
	{
		return false;
	}
	if (_0x336b3d200ab007cb(Global_35, Global_36, 19f, 4) > 0)
	{
		return false;
	}
	return true;
}

void func_582(var uParam0)
{
	func_430((*uParam0)[0], func_429(7), 0, -163964935, 0, 0, 0, 1, 0);
	func_431((*uParam0)[0], 1);
	func_432((*uParam0)[0], 0);
	func_433((*uParam0)[0], 15f);
	func_430((*uParam0)[1], func_429(10), 0, 648122183, 0, 0, 0, 1, 0);
	func_431((*uParam0)[1], 1);
	func_432((*uParam0)[1], 0);
	func_433((*uParam0)[1], 15f);
	func_430((*uParam0)[2], func_429(12), 0, -1616532217, 0, 0, 0, 1, 0);
	func_431((*uParam0)[2], 0);
	func_433((*uParam0)[2], 15f);
}

void func_583(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_604(iParam0, 13))
		{
			if (bParam2)
			{
				func_519(iParam0, 0, 0);
			}
			func_605(iParam0, 13);
		}
	}
	else if (func_604(iParam0, 13))
	{
		func_603(iParam0, 13);
	}
}

bool func_584(int* iParam0)
{
	return iParam0->f_2 == 2;
}

int func_585(int* iParam0)
{
	if (func_440(iParam0, 0))
	{
		if (func_627(iParam0))
		{
			func_332(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

int func_586(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_628(iParam0, vVar0, iParam2);
}

struct<5> func_587(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_596(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_629(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_509(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_508(bParam1) };
			if (bParam2 && func_630(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_589(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_589(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_590(iParam0, &Var5, 1728382685))
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
			Var0 = { func_631(bParam1) };
			switch (func_632(iParam0))
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
			if (func_633(iParam0, -1823706425))
			{
				Var0 = { func_509(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_633(iParam0, -1483207246))
			{
				Var0 = { func_509(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_634(Var0, &Var27, bParam1, 0))
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

int func_588(int iParam0, int iParam1)
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

bool func_589(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_635(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_590(int iParam0, var uParam1, int iParam2)
{
	if (func_418(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

bool func_591(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_636(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_634(*uParam1, &Var0, bParam6, 0))
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
	if (!func_592(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_507(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_592(bool bParam0)
{
	if (func_187() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_507(bParam0));
}

int func_593(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_637(iParam0))
	{
		return 0;
	}
	if (!func_592(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_594(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_638(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

int func_595(int iParam0)
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

struct<4> func_596(bool bParam0)
{
	return func_509(1328661203, func_639(), -1591664384, bParam0);
}

bool func_597(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_598(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

void func_599(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_600(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_512(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_601(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_602(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

void func_603(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_604(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_605(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

int func_606(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_607(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_218(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_219(&(iParam1->f_6), 0, 1);
	}
	if (!func_218(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_541(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_640(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_218(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_615(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_641(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_642(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_514(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_641(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_516(iParam1->f_6, 0, 1);
				}
				else
				{
					func_516(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_608(int iParam0)
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

void func_609(int* iParam0, int iParam1)
{
	if (!func_604(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_605(iParam0, 14);
		}
	}
}

bool func_610(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_611(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_612(int iParam0, int iParam1)
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

bool func_613(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_614(int iParam0, bool bParam1)
{
	if (bParam1 && !func_218(iParam0))
	{
		return false;
	}
	return !func_512(iParam0, 4);
}

void func_615(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_218(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	func_641(iParam0, 18, 0, 1);
	func_641(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_616(int iParam0, bool bParam1)
{
	if (bParam1 && !func_218(iParam0))
	{
		return false;
	}
	iVar0 = func_315(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_617(int iParam0, bool bParam1)
{
	if (bParam1 && !func_218(iParam0))
	{
		return false;
	}
	iVar0 = func_315(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_618(int iParam0, bool bParam1)
{
	if (bParam1 && !func_218(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

bool func_619()
{
	if (func_643())
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

void func_620(var uParam0, var uParam1)
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

bool func_621(bool bParam0, int iParam1, int iParam2)
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

int func_622(var uParam0)
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
	if (uParam0->f_6 == 3)
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

void func_623(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_74(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_34(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_624(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_625(int iParam0)
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

int func_626(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_627(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

int func_628(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_644(vVar3, vVar6);
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
	if (func_456(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_629(int iParam0)
{
	if (!func_597(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_630(int iParam0, bool bParam1)
{
	if (func_632(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_645(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_631(bool bParam0)
{
	iVar0 = func_507(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_509(271701509, func_596(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_509(271701509, func_596(bParam0), 12999093, 0);
}

int func_632(int iParam0)
{
	if (!func_597(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_633(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_632(iParam0);
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

bool func_634(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_507(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_635(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_597(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_509(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_507(bParam6), &Var0, 0);
	return uVar4;
}

bool func_636(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_637(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_638(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

struct<4> func_639()
{
	return Var0;
}

int func_640(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_512(iVar0, 2))
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
				func_646(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_641(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_218(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_642(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_218(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

bool func_643()
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

float func_644(vector3 vParam0, vector3 vParam3)
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

bool func_645(int iParam0)
{
	if (!func_647(iParam0))
	{
		return false;
	}
	return func_648(iParam0);
}

void func_646(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_600(iParam0, 1);
	func_601(iParam0, 1);
	func_602(iParam0, 128);
}

bool func_647(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_648(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

