void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(523))
	{
		iLocal_474 = 1;
	}
	while (true)
	{
		func_2(bVar472, 961, 0);
		if (bVar472)
		{
			wait(0);
		}
		else
		{
			if (iLocal_15.f_95 < 13)
			{
				if (func_3(&ScriptParam_0))
				{
					func_4(&iLocal_15, 13);
				}
			}
			if (func_5())
			{
				func_6();
			}
			func_7();
			switch (iLocal_15.f_95)
			{
				case 0:
					if (func_8(ScriptParam_0))
					{
						func_4(&iLocal_15, 1);
					}
					break;
				case 1:
					if (func_9())
					{
						if (func_10())
						{
							func_4(&iLocal_15, 2);
						}
						else if (iLocal_15.f_217 > 0)
						{
							func_4(&iLocal_15, 3);
						}
						else if (iLocal_15.f_218 > 0)
						{
							func_4(&iLocal_15, 4);
						}
						else if (iLocal_15.f_216 > 0)
						{
							func_4(&iLocal_15, 5);
						}
						else
						{
							func_4(&iLocal_15, 6);
						}
					}
					break;
				case 2:
					if (func_10())
					{
						func_11();
					}
					func_4(&iLocal_15, 3);
					break;
				case 3:
					if (func_12())
					{
						if (func_13())
						{
							func_4(&iLocal_15, 4);
						}
					}
					break;
				case 4:
					if (func_14())
					{
						func_4(&iLocal_15, 5);
					}
					break;
				case 5:
					if (func_15())
					{
						func_4(&iLocal_15, 6);
					}
					break;
				case 6:
					if (func_16())
					{
						func_4(&iLocal_15, 7);
					}
					break;
				case 7:
					if (func_17())
					{
						Global_40.f_9632[iLocal_15.f_151]->f_2 = (1 + Global_40.f_9632[iLocal_15.f_151]->f_2);
						if (func_18(Global_1393447, 65536))
						{
							func_19(Global_1393447, 65536);
						}
						if (func_18(Global_1393447, 16))
						{
							func_19(Global_1393447, 16);
						}
						func_4(&iLocal_15, 8);
					}
					break;
				case 8:
					if (func_20())
					{
						if (iLocal_15.f_20 > (100f - 10f))
						{
							func_21();
							func_4(&iLocal_15, 9);
						}
						else
						{
							func_22(&iLocal_15, 16);
						}
					}
					break;
				case 9:
					if (func_23())
					{
						iLocal_15.f_225 = get_entity_health(Global_35);
						iLocal_15.f_226 = func_24();
						if (Global_40.f_9632.f_194 != iLocal_15.f_151)
						{
							switch (iLocal_15.f_151)
							{
								case 0:
								case 5:
								case 6:
								case 11:
								case 35:
								case 42:
									break;
								default:
									func_25(&iLocal_15, 1);
									break;
							}
						}
						func_26();
						func_27(&iLocal_15);
						iLocal_15.f_21 = iLocal_15.f_20;
						func_28(&iLocal_15, 1);
						_0x45ef176b532ca851(player_id(), 0);
						func_22(&iLocal_15, 16384);
						func_4(&iLocal_15, 10);
					}
					break;
				case 10:
					func_29();
					if (func_30(&iLocal_15, 32768) || func_31())
					{
						switch (iLocal_15.f_151)
						{
							case 0:
							case 5:
							case 6:
							case 11:
							case 35:
							case 42:
								break;
							default:
								func_32(&iLocal_15, 1);
								break;
						}
						func_33(&iLocal_15, 1);
						func_34(120, 0, 1);
						func_35(1, -1, 0, 0, 0);
						func_36(&iLocal_15);
						func_4(&iLocal_15, 11);
					}
					break;
				case 11:
					func_37(&iLocal_15);
					func_38();
					if (func_39(&iLocal_15))
					{
						if (func_18(Global_1393447, 16))
						{
							func_19(Global_1393447, 16);
						}
						func_40(&(iLocal_15.f_244), 0);
						func_4(&iLocal_15, 12);
					}
					break;
				case 12:
					func_41(&iLocal_15);
					func_38();
					if (func_42())
					{
						if (func_18(Global_1393447, 16))
						{
							func_19(Global_1393447, 16);
						}
						func_4(&iLocal_15, 13);
					}
					break;
				case 13:
					func_1();
					break;
			}
			wait(0);
		}
	}
}

void func_1()
{
	if (func_18(Global_1393447, 2))
	{
		func_19(Global_1393447, 2);
	}
	if (func_18(Global_1393447, 16))
	{
		func_19(Global_1393447, 16);
	}
	if (func_18(Global_1393447, 32768))
	{
		func_19(Global_1393447, 32768);
	}
	if (func_43())
	{
		if (func_30(&iLocal_15, 4))
		{
			func_44(0);
			func_45(&iLocal_15, 4);
		}
	}
	fVar0 = 8f;
	if (iLocal_15.f_151 == 17)
	{
		fVar0 = 12f;
	}
	if (((!func_46() && !func_47(&(iLocal_15.f_250), fVar0)) && !is_screen_faded_out()) && !func_48())
	{
		func_40(&(iLocal_15.f_250), 0);
		return;
	}
	if (func_47(&(iLocal_15.f_250), fVar0))
	{
	}
	func_37(&iLocal_15);
	func_49();
	func_50(&iLocal_15, 0);
	func_51();
	func_52(&iLocal_15);
	_0x45ef176b532ca851(player_id(), 0);
	func_28(&iLocal_15, 1);
	func_53(&iLocal_15, 0);
	if (iLocal_15.f_93 != 0)
	{
		remove_shocking_event(iLocal_15.f_93);
	}
	if (_does_volume_exist(iLocal_15.f_237))
	{
		func_54(&iLocal_15);
		func_55(iLocal_15.f_237);
	}
	func_33(&iLocal_15, 1);
	if (iLocal_15.f_95 >= 9 && iLocal_15.f_95 < 11)
	{
		if (func_56(iLocal_15.f_151))
		{
		}
		else if (func_57(iLocal_15.f_151, 1) || func_58(iLocal_15.f_151, 1))
		{
			func_59(Global_1393447, 2048);
			if (!func_60(&(iLocal_15.f_244)))
			{
				func_34(120, 0, 1);
			}
		}
	}
	if (func_61(Global_35, 0, 0))
	{
		set_entity_invincible(Global_35, false);
	}
	if (func_61(iLocal_15.f_56, 0, 0))
	{
		set_entity_invincible(iLocal_15.f_56, false);
	}
	if (are_strings_equal(_0xf81c53561d15f330(), func_62(iLocal_15.f_151)))
	{
		_0x1096603b519c905f("");
	}
	func_63(iLocal_15.f_151);
	terminate_this_thread();
}

void func_2(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_64(bParam2) || is_screen_faded_out())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_3(var uParam0)
{
	if (func_65())
	{
		return true;
	}
	if (Global_16)
	{
		return true;
	}
	if (func_66(0, 1, 1))
	{
		return true;
	}
	if (iLocal_15.f_95 <= 9 && iLocal_15.f_96 & 2097152 == 0)
	{
		if (func_18(Global_1393447, 2))
		{
			if (func_67(&iLocal_15))
			{
				func_19(Global_1393447, 2);
				return false;
			}
			else
			{
				return true;
			}
		}
	}
	else if (Global_1393447->f_2 & 2 != 0)
	{
		func_19(Global_1393447, 2);
		return false;
	}
	if (iLocal_15.f_96 & 16 != 0)
	{
		return true;
	}
	if (iLocal_15.f_95 < 10 && iLocal_15.f_96 & 1048576 == 0)
	{
		if (is_screen_faded_in())
		{
			if (func_68())
			{
				if (!uParam0->f_8)
				{
					return true;
				}
			}
			if (!func_69(iLocal_15.f_209))
			{
				if (iLocal_15.f_20 > 207f)
				{
					if (iLocal_15.f_223 == 0)
					{
						iLocal_15.f_223 = get_game_timer() + 1000;
						return false;
					}
					else if (iLocal_15.f_223 < get_game_timer())
					{
						vVar0 = { func_70(player_id()) };
						return true;
					}
				}
				else
				{
					iLocal_15.f_223 = 0;
				}
			}
		}
	}
	else
	{
		if (func_71())
		{
			return true;
		}
		if (func_72(&uVar5))
		{
			fVar4 = func_73();
			iVar3 = 0;
			while (iVar3 < iLocal_15.f_215)
			{
				if (&iLocal_15.f_9[iVar3] < fVar4)
				{
					if (func_61(&(iLocal_15[iVar3]), 0, 1))
					{
						return false;
					}
				}
				iVar3++;
			}
			return true;
		}
	}
	return false;
}

void func_4(int iParam0, int iParam1)
{
	iParam0->f_95 = iParam1;
}

bool func_5()
{
	return false;
}

void func_6()
{
}

void func_7()
{
	func_74();
	func_75();
}

bool func_8(struct<8> Param0, var uParam8)
{
	if (Global_1879534->f_1)
	{
		return false;
	}
	if (func_69(iLocal_15.f_209))
	{
		func_76(&(iLocal_15.f_152));
		func_77(&(iLocal_15.f_152));
		func_78(&(iLocal_15.f_152), 0);
		func_79(&(iLocal_15.f_152), 1);
		func_80(&(iLocal_15.f_152), 6f);
		iLocal_15.f_209 = { Param0 };
		iLocal_15.f_151 = Param0.f_3;
		iLocal_15.f_221 = Param0.f_4;
		iLocal_15.f_222 = func_81(iLocal_15.f_151);
		if (Param0.f_7)
		{
			func_22(&iLocal_15, 2);
		}
		if (!func_82(iLocal_15.f_151))
		{
			func_4(&iLocal_15, 12);
			return false;
		}
	}
	fVar0 = get_distance_between_coords(Global_36, iLocal_15.f_209, true);
	if (is_screen_faded_in())
	{
		if (fVar0 < 200f)
		{
			if (func_83())
			{
				vVar1 = { func_84(iLocal_15.f_151, 0, iLocal_15.f_221) };
				vVar1 = { func_84(iLocal_15.f_151, 1, iLocal_15.f_221) };
				if (func_85())
				{
					if (func_86(&iLocal_15))
					{
						func_22(&iLocal_15, 1);
					}
				}
				if (!iLocal_15.f_227)
				{
					if (func_87(iLocal_15.f_181, 0))
					{
						iLocal_15.f_227 = func_88(iLocal_15.f_181, -1);
					}
				}
				if (func_89(player_id(), 1, 0, 1))
				{
					func_4(&iLocal_15, 13);
					return false;
				}
				else
				{
					if (!bVar4)
					{
						func_90(&iLocal_15);
						func_91(&iLocal_15, 8672);
					}
					_0xed9582b3da8f02b4((((iLocal_15.f_215 + iLocal_15.f_216) + iLocal_15.f_217 * 2) + iLocal_15.f_219) + 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_9()
{
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < iLocal_15.f_216)
	{
		iVar3 = func_92(iVar1);
		request_model(iVar3, false);
		if (!has_model_loaded(iVar3))
		{
			bVar0 = false;
		}
		iVar1++;
	}
	if (bVar0)
	{
		iVar1 = 0;
		while (iVar1 < iLocal_15.f_216)
		{
			iVar3 = func_92(iVar1);
			iVar2 = func_93(iVar1);
			if (!_is_metaped_outfit_request_valid(&(iLocal_15.f_66[iVar1])))
			{
				if (iVar2 == func_94())
				{
				}
				else
				{
					iLocal_15.f_66[iVar1] = _request_metaped_outfit(iVar3, iVar2);
					bVar0 = false;
					Jump @162; //curOff = 137
					if (!_0x610438375e5d1801(&(iLocal_15.f_66[iVar1])))
					{
						bVar0 = false;
					}
				}
				iVar1++;
				request_model(-274058460, false);
				if (!func_95())
				{
					return false;
				}
				iVar1 = 0;
				while (iVar1 < iLocal_15.f_215)
				{
					iVar2 = func_96(iVar1);
					iVar4 = func_97(iVar1);
					if (!_is_metaped_outfit_request_valid(&(iLocal_15.f_31[iVar1])))
					{
						if (iVar2 == func_94())
						{
						}
						else
						{
							iLocal_15.f_31[iVar1] = _request_metaped_outfit(iVar4, iVar2);
							bVar0 = false;
							Jump @293; //curOff = 268
							if (!_0x610438375e5d1801(&(iLocal_15.f_31[iVar1])))
							{
								bVar0 = false;
							}
						}
						iVar1++;
						if (!has_model_loaded(-274058460))
						{
							bVar0 = false;
						}
						if (!_0x5e420ff293ee5472())
						{
							bVar0 = false;
						}
						return bVar0;
					}
				}
			}
		}
	}
}

bool func_10()
{
	return false;
}

void func_11()
{
}

bool func_12()
{
	if (iLocal_15.f_217 <= 0)
	{
		return true;
	}
	iVar0 = iLocal_15.f_220;
	iVar1 = func_98(iVar0);
	vVar2 = { func_99(iVar0) };
	fVar5 = func_100(iVar0);
	if (iVar1 != 0)
	{
		if (func_101(iVar0))
		{
			if (!func_102(&vVar2, 1, 5, 0))
			{
				return false;
			}
		}
		iLocal_15.f_49[iVar0] = create_vehicle(iVar1, vVar2, fVar5, true, true, false, false);
		set_vehicle_on_ground_properly(&(iLocal_15.f_49[iVar0]), 0f);
		set_entity_visible(&(iLocal_15.f_49[iVar0]), true);
		_0x3f08c6163a4ab1d6(&(iLocal_15.f_49[iVar0]));
		func_103(&(iLocal_15.f_49[iVar0]));
		if (!does_entity_belong_to_this_script(&(iLocal_15.f_49[iVar0]), false))
		{
			set_entity_as_mission_entity(&(iLocal_15.f_49[iVar0]), true, false);
		}
	}
	iLocal_15.f_220++;
	if (iLocal_15.f_220 >= iLocal_15.f_217)
	{
		iLocal_15.f_220 = 0;
		return true;
	}
	return false;
}

bool func_13()
{
	return true;
}

bool func_14()
{
	if (iLocal_15.f_218 <= 0)
	{
		return true;
	}
	iVar0 = iLocal_15.f_220;
	iVar1 = func_104(iVar0);
	vVar2 = { func_105(iVar0) };
	fVar5 = func_106(iVar0);
	if (iVar1 != 0)
	{
		if (func_107(iVar0))
		{
			if (!func_102(&vVar2, 1, 5, 0))
			{
				return false;
			}
		}
		iLocal_15.f_52[iVar0] = create_object(iVar1, vVar2, true, true, false, false, true);
		set_entity_rotation(&(iLocal_15.f_52[iVar0]), 0f, 0f, fVar5, 2, true);
		set_entity_visible(&(iLocal_15.f_52[iVar0]), false);
		if (!does_entity_belong_to_this_script(&(iLocal_15.f_52[iVar0]), false))
		{
			set_entity_as_mission_entity(&(iLocal_15.f_52[iVar0]), true, false);
		}
		if (func_107(iVar0))
		{
			place_object_on_ground_properly(&(iLocal_15.f_52[iVar0]), 0);
		}
	}
	iLocal_15.f_220++;
	if (iLocal_15.f_220 >= iLocal_15.f_218)
	{
		iLocal_15.f_220 = 0;
		return true;
	}
	return false;
}

bool func_15()
{
	if (iLocal_15.f_216 <= 0)
	{
		return true;
	}
	iVar0 = iLocal_15.f_220;
	iVar1 = func_92(iVar0);
	vVar2 = { func_108(iVar0) };
	uVar5 = func_109(iVar0);
	iVar6 = func_93(iVar0);
	if (!does_entity_exist(&(iLocal_15.f_40[iVar0])))
	{
		if (iVar1 != 0)
		{
			if (func_110(iVar0))
			{
				if (!func_102(&vVar2, 1, 5, 0))
				{
					return false;
				}
			}
			if (func_93(iVar0) == func_94())
			{
				iLocal_15.f_40[iVar0] = func_111(iVar1, vVar2, uVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				iLocal_15.f_40[iVar0] = func_111(iVar1, vVar2, uVar5, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
				_set_ped_body_component(&(iLocal_15.f_40[iVar0]), func_93(iVar0));
				_update_ped_variation(&(iLocal_15.f_40[iVar0]), false, true, true, true, false);
			}
		}
	}
	if (func_61(&(iLocal_15.f_40[iVar0]), 0, 1))
	{
		func_112(&(iLocal_15.f_40[iVar0]), 0);
		if (func_30(&iLocal_15, 1))
		{
			iVar7 = func_113(iVar0);
			if (iVar7 != 3)
			{
				if (!does_entity_exist(&(iLocal_15.f_84[iVar0])))
				{
					iLocal_15.f_84[iVar0] = create_object(-274058460, vVar2, true, true, false, false, true);
					func_114(iVar0, iVar7, &vVar9, &vVar12, &iVar8);
					attach_entity_to_entity(&(iLocal_15.f_84[iVar0]), &(iLocal_15.f_40[iVar0]), iVar8, vVar9, vVar12, false, false, false, false, 1, true, false, false);
					return false;
				}
			}
		}
		func_115(&(iLocal_15.f_152), &(iLocal_15.f_40[iVar0]), 0);
		set_blocking_of_non_temporary_events(&(iLocal_15.f_40[iVar0]), true);
		set_ped_config_flag(&(iLocal_15.f_40[iVar0]), 277, true);
		request_ped_visibility_tracking(&(iLocal_15.f_40[iVar0]));
		set_entity_visible(&(iLocal_15.f_40[iVar0]), false);
		if (!does_entity_belong_to_this_script(&(iLocal_15.f_40[iVar0]), false))
		{
			set_entity_as_mission_entity(&(iLocal_15.f_40[iVar0]), true, false);
		}
		iLocal_15.f_220++;
		if (iLocal_15.f_220 >= iLocal_15.f_216)
		{
			iLocal_15.f_220 = 0;
			return true;
		}
	}
	return false;
}

bool func_16()
{
	return true;
}

bool func_17()
{
	if (iLocal_15.f_215 <= 0)
	{
		return true;
	}
	iVar0 = iLocal_15.f_220;
	iVar1 = func_97(iVar0);
	vVar2 = { func_116(iVar0) };
	uVar5 = func_117(iVar0);
	iVar6 = func_96(iVar0);
	iVar7 = func_118(iLocal_15.f_181);
	if (iVar1 != 0)
	{
		if (func_119(iVar0))
		{
			if (!func_102(&vVar2, 1, 5, 0))
			{
				return false;
			}
		}
		if (iVar6 == func_94())
		{
			iLocal_15[iVar0] = func_111(iVar1, vVar2, uVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			iLocal_15[iVar0] = _0xeaf682a14f8e5f53(&(iLocal_15.f_31[iVar0]), vVar2, uVar5, 1, 1, 1, 0);
			if (!does_entity_exist(&(iLocal_15[iVar0])))
			{
				iLocal_15[iVar0] = func_111(iVar1, vVar2, uVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
		}
		if (does_entity_exist(&(iLocal_15[iVar0])))
		{
			set_blocking_of_non_temporary_events(&(iLocal_15[iVar0]), true);
			set_ped_config_flag(&(iLocal_15[iVar0]), 277, false);
			set_ped_config_flag(&(iLocal_15[iVar0]), 6, true);
			set_ped_config_flag(&(iLocal_15[iVar0]), 233, true);
			request_ped_visibility_tracking(&(iLocal_15[iVar0]));
			func_120(&(iLocal_15.f_152), &(iLocal_15[iVar0]));
			func_121(&(iLocal_15.f_152), &(iLocal_15[iVar0]), 0);
			set_entity_visible(&(iLocal_15[iVar0]), false);
			if (!does_entity_belong_to_this_script(&(iLocal_15[iVar0]), false))
			{
				set_entity_as_mission_entity(&(iLocal_15[iVar0]), true, false);
			}
			if (iLocal_15.f_181 == -1)
			{
				set_ped_relationship_group_hash(&(iLocal_15[iVar0]), -401180987);
			}
			func_122(&(iLocal_15[iVar0]), 1);
			_0xbd75500141e4725c(&(iLocal_15[iVar0]), iVar7);
			decor_set_bool(&(iLocal_15[iVar0]), "bBeatPed", true);
			func_124(func_123(&(iLocal_15[iVar0])), &(iLocal_15[iVar0]));
		}
		else
		{
			iLocal_15.f_220 = (iLocal_15.f_220 - 1);
		}
	}
	iLocal_15.f_220++;
	if (iLocal_15.f_220 >= iLocal_15.f_215)
	{
		iLocal_15.f_220 = 0;
		return true;
	}
	return false;
}

bool func_18(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_19(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

bool func_20()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_61(&(iLocal_15[iVar0]), 0, 0))
		{
			iVar1 = iVar0;
			func_125(&Local_274, iVar0);
			func_126(iVar0);
			func_127(&iLocal_15, iVar1, 0);
			func_128(&iLocal_15, iVar1, 0);
			if (func_129(iVar0))
			{
				func_130(&(iLocal_15[iVar0]), &(iLocal_15.f_40[iVar0]), 0, -1, 1);
			}
			else
			{
				if (func_61(&(iLocal_15.f_40[iVar0]), 0, 0))
				{
					func_131(&(iLocal_15.f_40[iVar0]), 197929875, -1, 0, 0, -1082130432);
				}
				if (func_132(iVar0))
				{
					_set_ped_crouch_movement(&(iLocal_15[iVar0]), true, 0, true);
				}
				set_ped_combat_attributes(&(iLocal_15[iVar0]), 98, true);
			}
			set_ped_combat_attributes(&(iLocal_15[iVar0]), 47, true);
			func_133(&iLocal_15, iVar0, -1, -1);
			func_134(&iLocal_15, iVar0);
		}
		iVar0++;
	}
	return true;
}

void func_21()
{
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_215)
	{
		if (does_entity_exist(&(iLocal_15[iVar0])))
		{
			_0xa91e6cf94404e8c9(&(iLocal_15[iVar0]));
			if (!func_135(&iLocal_15, iVar0, 4))
			{
				set_entity_visible(&(iLocal_15[iVar0]), true);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_216)
	{
		if (does_entity_exist(&(iLocal_15.f_40[iVar0])))
		{
			_0xa91e6cf94404e8c9(&(iLocal_15.f_40[iVar0]));
			if (!func_136(&iLocal_15, iVar0, 4))
			{
				set_entity_visible(&(iLocal_15.f_40[iVar0]), true);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_217)
	{
		if (does_entity_exist(&(iLocal_15.f_49[iVar0])))
		{
			_0xa91e6cf94404e8c9(&(iLocal_15.f_49[iVar0]));
			set_entity_visible(&(iLocal_15.f_49[iVar0]), true);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_218)
	{
		if (does_entity_exist(&(iLocal_15.f_52[iVar0])))
		{
			set_entity_visible(&(iLocal_15.f_52[iVar0]), true);
		}
		iVar0++;
	}
}

void func_22(int iParam0, int iParam1)
{
	iParam0->f_96 = (iParam0->f_96 || iParam1);
}

bool func_23()
{
	if (Local_274.f_3 >= 1)
	{
		if (!func_137(&Local_274, 128))
		{
			if (func_138(&(Local_274.f_37[4]), Global_36) || func_138(&(Local_274.f_37[5]), Global_36))
			{
				func_139(&Local_274, 128);
			}
		}
	}
	if (!func_137(&Local_274, 2))
	{
		if (func_140())
		{
			func_141();
			func_142(&(Local_274.f_195), &(iLocal_15[1]), 0, 20f);
			func_143();
			func_144(&Local_274, 3);
		}
	}
	switch (Local_274.f_3)
	{
		case 0:
			if (func_145())
			{
				if (func_146())
				{
					func_147(iLocal_15.f_151, 1);
					func_144(&Local_274, 3);
				}
			}
			else if (func_148())
			{
				if (func_149())
				{
					func_22(&iLocal_15, 16);
					func_4(&iLocal_15, 13);
				}
			}
			else
			{
				func_150(&iLocal_15, 0);
				if (func_151())
				{
					func_141();
					Local_274.f_56 = func_152(&(iLocal_15[0]), Global_36, 1);
					func_25(&iLocal_15, 1);
					func_32(&iLocal_15, 1);
					func_153();
					func_144(&Local_274, 1);
				}
			}
			break;
		case 1:
			func_141();
			if (func_154())
			{
				func_144(&Local_274, 2);
			}
			break;
		case 2:
			func_155();
			func_144(&Local_274, 3);
			break;
		case 3:
			return true;
	}
	return false;
}

float func_24()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_25(int iParam0, bool bParam1)
{
	if (!func_18(Global_1393447, 65536))
	{
		func_59(Global_1393447, 16);
		func_59(Global_1393447, 65536);
		func_22(iParam0, 2097152);
		Global_40.f_9632.f_194 = iParam0->f_151;
		func_53(iParam0, 1);
		func_156(-1, 0, 0, 0, 0);
		func_157();
		Var0.f_6 = -1082130432;
		Var0.f_7 = -1082130432;
		Var0.f_8 = -1082130432;
		Var0.f_9 = -1082130432;
		Var0.f_10 = -1082130432;
		Var0.f_11 = -1082130432;
		Var0.f_12 = -1;
		Var0.f_13 = -1;
		Var0 = -1215290486;
		Var0.f_6 = 100f;
		if (!func_69(iParam0->f_212))
		{
			Var0.f_3 = { iParam0->f_212 };
		}
		else
		{
			Var0.f_3 = { iParam0->f_209 };
		}
		if (func_56(iParam0->f_151))
		{
			Var0.f_8 = 40f;
			Var0.f_9 = 40f;
			Var0.f_7 = 40f;
		}
		else
		{
			Var0.f_8 = 120f;
			Var0.f_9 = 120f;
			Var0.f_7 = 120f;
		}
		iParam0->f_93 = _0xca1315c33b9a2847(&Var0);
		if (!func_43())
		{
			func_44(1);
			func_22(iParam0, 4);
		}
		if (bParam1)
		{
			func_35(1, -1, 0, 0, 0);
		}
		else
		{
			func_158();
			func_159();
		}
		if (func_56(iParam0->f_151))
		{
			func_34(30, 0, 1);
		}
		else
		{
			func_161(func_160(-843295694), 1);
			func_33(iParam0, 0);
		}
		_0x1096603b519c905f(func_62(iParam0->f_151));
		func_162(iParam0);
		func_163(0, 13);
		iVar17 = 0;
		while (iVar17 < iParam0->f_215)
		{
			if (func_61(iParam0[iVar17], 0, 1))
			{
				task_look_at_entity(iParam0[iVar17], Global_35, -1, 0, 51, 0);
			}
			iVar17++;
		}
	}
}

void func_26()
{
	iVar1 = 0;
	while (iVar1 < iLocal_15.f_216)
	{
		if (func_61(&(iLocal_15.f_40[iVar1]), 0, 0))
		{
			iVar0 = _get_rider_of_mount(&(iLocal_15.f_40[iVar1]), false);
			if (func_61(iVar0, 0, 0))
			{
				_0x931b241409216c1f(iVar0, &(iLocal_15.f_40[iVar1]), 0);
				func_164(&iLocal_15, iVar1, 32);
			}
		}
		iVar1++;
	}
}

void func_27(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iParam0->f_215)
	{
		if (func_61(iParam0[iVar0], 0, 1))
		{
			set_ped_combat_attributes(iParam0[iVar0], 57, false);
			set_ped_combat_attributes(iParam0[iVar0], 127, true);
		}
		iVar0++;
	}
}

void func_28(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!func_30(iParam0, 33554432))
		{
			func_165(0);
			func_22(iParam0, 33554432);
		}
	}
	else if (func_30(iParam0, 33554432))
	{
		func_165(1);
		func_45(iParam0, 33554432);
	}
}

void func_29()
{
	func_40(&(iLocal_15.f_247), 0);
	if (func_47(&(iLocal_15.f_247), 5f))
	{
		func_50(&iLocal_15, 0);
	}
	if (func_47(&(iLocal_15.f_247), 3f))
	{
		func_166(&iLocal_15);
	}
	func_38();
	if (!func_30(&iLocal_15, 8388608))
	{
		if (!func_30(&iLocal_15, 4194304))
		{
			if (iLocal_15.f_181 == 2)
			{
				func_167(&iLocal_15, 1.1f);
			}
			else
			{
				func_167(&iLocal_15, 1.2f);
			}
			func_22(&iLocal_15, 4194304);
		}
		if (func_30(&iLocal_15, 4194304))
		{
			iVar0 = get_entity_health(Global_35);
			if ((iVar0 < (iLocal_15.f_225 - 60) || IntToFloat(iVar0) < (IntToFloat(iLocal_15.f_225) * 0.7f)) || iVar0 < 80)
			{
				func_167(&iLocal_15, 1f);
				func_22(&iLocal_15, 8388608);
			}
		}
	}
}

bool func_30(int iParam0, int iParam1)
{
	return (iParam0->f_96 && iParam1) != 0;
}

bool func_31()
{
	func_168(&(Local_274.f_75));
	Local_274.f_53 = func_169(&iLocal_15);
	func_170(&iLocal_15, &(Local_274.f_112), &(Local_274.f_112.f_43));
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_215)
	{
		if (iVar0 > 1)
		{
			func_171(&iLocal_15, iVar0, &(iLocal_15.f_40[iVar0]));
		}
		iVar0++;
	}
	switch (Local_274.f_4)
	{
		case 0:
			func_172();
			func_142(&(Local_274.f_195), &(iLocal_15[1]), 0, 20f);
			func_40(Local_274.f_9[0], 0);
			func_173(&iLocal_15, 1, 0, -1);
			func_174(&iLocal_15, 1, 0, -1);
			func_175(&Local_274, 1);
			break;
		case 1:
			func_176();
			if (func_177(&iLocal_15, &(Local_274.f_51), &(iLocal_15.f_241), "COMBAT_FLEE", 1092616192))
			{
				func_175(&Local_274, 2);
			}
			break;
		case 2:
			func_178();
			func_175(&Local_274, 3);
			break;
		case 3:
			return true;
	}
	return false;
}

void func_32(int iParam0, bool bParam1)
{
	if (func_18(Global_1393447, 65536))
	{
		if (func_87(iParam0->f_181, 0))
		{
			func_179(iParam0->f_181, bParam1);
		}
		func_180(iParam0->f_151, bParam1);
	}
}

void func_33(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(1);
		func_45(iParam0, 8192);
	}
	else
	{
		func_182(1);
		func_22(iParam0, 8192);
	}
}

void func_34(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_183(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 = (iVar0 / 2);
		if ((iVar0 + get_game_timer()) > Global_1327479->f_5)
		{
			Global_1327479->f_5 = (get_game_timer() + iVar0);
		}
	}
}

void func_35(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_59(Global_1393447, 1);
	func_158();
	func_159();
	func_184((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_185() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_186();
		if (iParam1 == -1)
		{
			if (func_187(iParam0, 1))
			{
				func_188(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_187(iParam0, 2))
			{
				func_188(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_187(iParam0, 4))
			{
				func_188(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_189(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_190(to_float(iVar0), 1, 0);
	}
	else
	{
		func_190((to_float(200) / 3f), 1, 0);
	}
}

void func_36(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iParam0->f_216)
	{
		if (does_entity_exist(&(iParam0->f_40[iVar0])))
		{
			set_ped_config_flag(&(iParam0->f_40[iVar0]), 273, false);
			if (is_entity_a_mission_entity(&(iParam0->f_40[iVar0])))
			{
				set_ped_as_no_longer_needed(iParam0->f_40[iVar0]);
			}
		}
		iVar0++;
	}
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < iParam0->f_217)
	{
		if (does_entity_exist(&(iParam0->f_49[iVar0])))
		{
			if (_0xa19447d83294e29f(&(iParam0->f_49[iVar0]), &iVar1, &iVar2))
			{
				if (iVar1 <= 0)
				{
					Jump @218; //curOff = 142
				}
				else
				{
					iVar4 = 0;
					while (iVar4 < 6)
					{
						iVar3 = _get_ped_in_draft_seat(&(iParam0->f_49[iVar0]), iVar4);
						if (does_entity_exist(iVar3) && !is_entity_dead(iVar3))
						{
							set_ped_as_no_longer_needed(&iVar3);
						}
						iVar4++;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_37(int iParam0)
{
	if (func_30(iParam0, 16384))
	{
		if (func_61(Global_35, 0, 1))
		{
			if (!func_30(iParam0, 1024))
			{
				if (iParam0->f_181 != -1 && !func_56(iParam0->f_151))
				{
					compendium_gang_ambush_survived(func_191(iParam0->f_181));
					func_22(iParam0, 1024);
				}
			}
		}
	}
}

void func_38()
{
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_216)
	{
		if (!func_136(&iLocal_15, iVar0, 16))
		{
			if (func_61(&(iLocal_15.f_40[iVar0]), 0, 0))
			{
				if (func_192(iVar0))
				{
					_task_smart_flee_style_coord(&(iLocal_15.f_40[iVar0]), iLocal_15.f_209, 4, 0, -1082130432, -1, 0);
					set_ped_keep_task(&(iLocal_15.f_40[iVar0]), true);
					set_blocking_of_non_temporary_events(&(iLocal_15.f_40[iVar0]), false);
					set_ped_as_no_longer_needed(iLocal_15.f_40[iVar0]);
					func_164(&iLocal_15, iVar0, 16);
				}
			}
		}
		iVar0++;
	}
}

int func_39(int iParam0)
{
	return func_41(iParam0);
	return 0;
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1 || !func_60(uParam0))
	{
		func_193(uParam0);
	}
}

int func_41(int iParam0)
{
	func_40(&(iParam0->f_241), 0);
	iVar0 = 0;
	while (iVar0 < iParam0->f_215)
	{
		if (func_61(iParam0[iVar0], 0, 1))
		{
			if (does_blip_exist(&(iParam0->f_22[iVar0])))
			{
				if (func_152(iParam0[iVar0], Global_36, 1) > 40f || func_47(&(iParam0->f_241), 15f))
				{
					func_194(iParam0->f_22[iVar0]);
					set_ped_as_no_longer_needed((*iParam0)[iVar0]);
					return 1;
				}
			}
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= iParam0->f_215)
	{
		return 1;
	}
	return 0;
}

bool func_42()
{
	if (func_47(&(iLocal_15.f_244), 45f) && func_195())
	{
		func_54(&iLocal_15);
		func_196(&(iLocal_15.f_244));
	}
	return false;
}

bool func_43()
{
	return Global_1415398->f_1;
}

void func_44(int iParam0)
{
	Global_1415398->f_1 = iParam0;
}

void func_45(int iParam0, int iParam1)
{
	if (func_30(iParam0, iParam1))
	{
	}
	iParam0->f_96 = (iParam0->f_96 - (iParam0->f_96 && iParam1));
}

bool func_46()
{
	return true;
}

bool func_47(var uParam0, float fParam1)
{
	if (!func_60(uParam0))
	{
		return false;
	}
	if (func_197(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_48()
{
	return Global_1392040->f_6;
}

void func_49()
{
	_0xcbb54cc7ffffab86(player_id(), 0, 0, 0);
	func_198(&iLocal_15, 1);
	func_178();
}

void func_50(int iParam0, bool bParam1)
{
	if (!func_30(iParam0, 256))
	{
		if (func_30(iParam0, 32) || bParam1)
		{
			if (func_61(iParam0->f_56, 0, 1))
			{
				func_199(iParam0->f_56, 0);
				func_22(iParam0, 256);
			}
		}
	}
}

void func_51()
{
	iVar1 = 4748164;
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_215)
	{
		if (does_entity_exist(&(iLocal_15[iVar0])))
		{
			if (func_200(iVar0))
			{
				iVar2[iVar0] = get_mount(&(iLocal_15[iVar0]));
				delete_ped(iLocal_15[iVar0]);
			}
			else
			{
				if (func_61(&(iLocal_15[iVar0]), 0, 0))
				{
					if (!func_30(&iLocal_15, 16384))
					{
						func_201(iLocal_15[iVar0]);
					}
					func_122(&(iLocal_15[iVar0]), 0);
					set_ped_combat_attributes(&(iLocal_15[iVar0]), 5, true);
					_0x24c82ef607105faa(&(iLocal_15[iVar0]), -920810745);
					_0xb8b6430ead2d2437(&(iLocal_15[iVar0]), 993130593);
					if (func_202(&(iLocal_15[iVar0])))
					{
						set_ped_relationship_group_hash(&(iLocal_15[iVar0]), -401180987);
					}
					_set_ped_crouch_movement(&(iLocal_15[iVar0]), false, 0, false);
					if ((is_ped_in_combat(&(iLocal_15[iVar0]), Global_35) || is_ped_fleeing(&(iLocal_15[iVar0]))) || func_135(&iLocal_15, iVar0, 256))
					{
						if (is_ped_in_combat(&(iLocal_15[iVar0]), 0))
						{
							clear_ped_tasks(&(iLocal_15[iVar0]), 0, 0);
							_task_smart_flee_style_ped(&(iLocal_15[iVar0]), Global_35, 4, iVar1, -1082130432, -1, 0);
						}
						set_ped_keep_task(&(iLocal_15[iVar0]), true);
					}
					else if ((iLocal_15.f_215 == iLocal_15.f_216 && func_61(&(iLocal_15.f_40[iVar0]), 0, 1)) && !is_ped_in_any_vehicle(&(iLocal_15[iVar0]), true))
					{
						iVar11 = &iLocal_15.f_40[iVar0];
						_0x931b241409216c1f(&(iLocal_15.f_40[iVar0]), iVar11, 0);
						open_sequence_task(&iVar12);
						task_mount_animal(0, &(iLocal_15.f_40[iVar0]), 20000, -1, 2f, 1, 0, 0);
						if (!func_69(iLocal_15.f_118[iVar0]->f_1))
						{
							task_follow_nav_mesh_to_coord(0, iLocal_15.f_118[iVar0]->f_1, 2f, 20000, 0.25f, 0, 40000f);
						}
						_task_move_in_traffic_3(0, Global_35, 2.5f, 0, 0);
						func_203(&(iLocal_15[iVar0]), &iVar12, 0, 0, 1, 1);
						set_ped_keep_task(&(iLocal_15[iVar0]), true);
					}
					else
					{
						iVar11 = 0;
						if (is_ped_in_any_vehicle(&(iLocal_15[iVar0]), true) && does_entity_exist(get_vehicle_ped_is_in(&(iLocal_15[iVar0]), true)))
						{
							if (_0x4e76cb57222a00e5(&(iLocal_15[iVar0])) == -1)
							{
								iVar13 = get_vehicle_ped_is_in(&(iLocal_15[iVar0]), true);
								open_sequence_task(&iVar12);
								if (!func_69(iLocal_15.f_118[iVar0]->f_1))
								{
									_task_vehicle_drive_to_destination(0, iVar13, iLocal_15.f_118[iVar0]->f_1, 7f, 524419, 6, 5f, 7f, 0);
								}
								_task_move_in_traffic_3(0, Global_35, -1f, 0, 0);
								func_203(&(iLocal_15[iVar0]), &iVar12, 0, 0, 1, 1);
							}
						}
						else if (is_ped_on_mount(&(iLocal_15[iVar0])))
						{
							open_sequence_task(&iVar12);
							if (!func_69(iLocal_15.f_118[iVar0]->f_1))
							{
								task_follow_nav_mesh_to_coord(0, iLocal_15.f_118[iVar0]->f_1, 2f, 20000, 0.25f, 0, 40000f);
							}
							_task_move_in_traffic_3(0, Global_35, 2.5f, 0, 0);
							func_203(&(iLocal_15[iVar0]), &iVar12, 0, 0, 1, 1);
							set_ped_keep_task(&(iLocal_15[iVar0]), true);
						}
						else
						{
							if (func_204(iVar0))
							{
								open_sequence_task(&iVar12);
								_task_smart_flee_style_ped(0, Global_35, 3, iVar1, -1082130432, -1, 0);
								func_203(&(iLocal_15[iVar0]), &iVar12, 0, 0, 1, 1);
								_0x39a2fc5af55a52b1(&(iLocal_15[iVar0]), 2000);
							}
							else
							{
								open_sequence_task(&iVar12);
								_task_move_in_traffic_3(0, Global_35, 1f, 128, 0);
								func_203(&(iLocal_15[iVar0]), &iVar12, 0, 0, 1, 1);
							}
							set_ped_keep_task(&(iLocal_15[iVar0]), true);
						}
					}
				}
				if (is_ped_in_any_vehicle(&(iLocal_15[iVar0]), false) && get_ped_in_vehicle_seat(get_vehicle_ped_is_using(&(iLocal_15[iVar0])), -1) == &iLocal_15[iVar0])
				{
					set_ped_as_no_longer_needed(iLocal_15[iVar0]);
				}
				else if ((!is_ped_fleeing(&(iLocal_15[iVar0])) && !is_ped_in_combat(&(iLocal_15[iVar0]), Global_35)) && !func_135(&iLocal_15, iVar0, 128))
				{
					_0x39a2fc5af55a52b1(&(iLocal_15[iVar0]), -1);
				}
				set_ped_as_no_longer_needed(iLocal_15[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_216)
	{
		if (does_entity_exist(&(iLocal_15.f_40[iVar0])))
		{
			if (func_205(iVar0, &iVar2))
			{
				if (does_entity_exist(&(iLocal_15.f_84[iVar0])))
				{
					delete_object(iLocal_15.f_84[iVar0]);
				}
				delete_ped(iLocal_15.f_40[iVar0]);
			}
			else
			{
				if (does_entity_exist(&(iLocal_15.f_84[iVar0])))
				{
					if (func_206(iVar0))
					{
						delete_object(iLocal_15.f_84[iVar0]);
					}
					else
					{
						detach_entity(&(iLocal_15.f_84[iVar0]), true, true);
						activate_physics(&(iLocal_15.f_84[iVar0]));
						set_object_as_no_longer_needed(iLocal_15.f_84[iVar0]);
					}
				}
				if (func_61(&(iLocal_15.f_40[iVar0]), 0, 1))
				{
					if (func_60(&(iLocal_15.f_247)))
					{
						if (!func_61(_get_rider_of_mount(&(iLocal_15.f_40[iVar0]), false), 0, 0))
						{
							_task_smart_flee_style_coord(&(iLocal_15.f_40[iVar0]), iLocal_15.f_209, 4, 0, -1082130432, -1, 0);
							set_ped_keep_task(&(iLocal_15.f_40[iVar0]), true);
						}
					}
					else if (!does_entity_exist(_0xf103823ffe72bb49(&(iLocal_15.f_40[iVar0]))) && !does_entity_exist(_get_rider_of_mount(&(iLocal_15.f_40[iVar0]), true)))
					{
						_task_smart_flee_style_coord(&(iLocal_15.f_40[iVar0]), iLocal_15.f_209, 4, 0, -1082130432, -1, 0);
						set_ped_keep_task(&(iLocal_15.f_40[iVar0]), true);
					}
				}
				set_ped_as_no_longer_needed(iLocal_15.f_40[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_217)
	{
		if (does_entity_exist(&(iLocal_15.f_49[iVar0])))
		{
			if (func_207(iVar0))
			{
				delete_vehicle(iLocal_15.f_49[iVar0]);
			}
			else if (get_players_last_vehicle() == &iLocal_15.f_49[iVar0] && get_vehicle_ped_is_in(Global_35, true) == &iLocal_15.f_49[iVar0])
			{
			}
			else
			{
				set_vehicle_as_no_longer_needed(iLocal_15.f_49[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_218)
	{
		if (does_entity_exist(&(iLocal_15.f_52[iVar0])))
		{
			if (func_208(&iLocal_15, &(iLocal_15.f_52[iVar0])))
			{
				delete_object(iLocal_15.f_52[iVar0]);
			}
			else
			{
				set_object_as_no_longer_needed(iLocal_15.f_52[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_52(int iParam0)
{
	if (!func_30(iParam0, 128))
	{
		return;
	}
	switch (iParam0->f_181)
	{
		case 0:
			func_209(347599949);
			func_209(-1273613561);
			break;
		case 2:
			func_209(-355385988);
			func_209(-628956517);
			break;
		case 1:
			func_209(363815774);
			break;
		case 3:
			func_209(-1421951598);
			break;
		case 4:
			func_209(-1090280091);
			break;
		case 5:
			func_209(424175505);
			break;
	}
}

void func_53(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		_0xde5faa741a781f73(player_id(), 1);
		func_22(iParam0, 65536);
	}
	else
	{
		_0xde5faa741a781f73(player_id(), 0);
		func_45(iParam0, 65536);
	}
}

void func_54(int iParam0)
{
	fVar0 = func_210(iParam0->f_151);
	func_211(iParam0, fVar0);
}

void func_55(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_212(vVar0, 0);
}

bool func_56(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 11:
			return true;
		default:
			break;
	}
	return false;
}

bool func_57(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (&Global_40.f_9632[iParam0] > 0)
		{
			if (&Global_40.f_9632[iParam0] >= func_213(iParam0))
			{
				return true;
			}
			Var2 = { func_160(85200619) };
			if (stat_id_get_int(&Var2, &uVar0))
			{
				iVar1 = _0x1e7384ab5d4f4581(uVar0);
				if (iVar1 >= Global_40.f_9632[iParam0]->f_3)
				{
					return false;
				}
			}
		}
	}
	return &Global_40.f_9632[iParam0] > 0;
}

bool func_58(int iParam0, bool bParam1)
{
	if (func_57(iParam0, bParam1))
	{
		return true;
	}
	if (Global_40.f_9632[iParam0]->f_1 == 0)
	{
		return false;
	}
	if (!bParam1)
	{
		return Global_40.f_9632[iParam0]->f_1 > 0;
	}
	if (func_214(iParam0))
	{
		return true;
	}
	return false;
}

void func_59(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_60(var uParam0)
{
	return func_215(*uParam0, 1);
}

bool func_61(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_216(iParam0, iParam1);
}

char* func_62(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GAORP";
		case 1:
		case 2:
		case 36:
			return "GALOA";
		case 3:
		case 4:
		case 38:
			return "GAOWA";
		case 5:
		case 35:
			return "GAOBT";
		case 6:
			return "GAOBB";
		case 42:
			return "GAOBB";
		case 7:
		case 41:
			return "GAOBA";
		case 8:
		case 40:
			return "GAORR";
		case 9:
		case 10:
		case 37:
			return "GAROA";
		case 11:
			return "GALPC";
		case 12:
			return "GALOA";
		case 13:
			return "GAEWB";
		case 14:
			return "GAEWT";
		case 15:
			return "GALBT";
		case 16:
			return "GAHCA";
		case 17:
		case 39:
			return "GAROR";
		case 18:
			return "GAIFA";
		case 19:
			return "GAIFA";
		case 21:
			return "GAMFA";
		case 20:
			return "GAMHA";
		case 23:
			return "GAMBA";
		case 22:
			return "GAMRA";
		case 24:
			return "GASBF";
		case 25:
			return "GATLA";
		case 28:
			return "GASLA";
		case 26:
			return "GASRA";
		case 27:
			return "GASFA";
		case 29:
			return "GALHA";
		case 30:
			return "GALHA";
		case 31:
			return "GABCA";
		case 32:
			return "GABSA";
		case 33:
			return "GABRA";
		case 34:
			return "GAGNR";
		case 43:
			return "GAPTO";
		default:
			break;
	}
	return "";
}

void func_63(var uParam0)
{
	Global_1393447->f_49 = -1;
}

bool func_64(bool bParam0)
{
	iVar0 = get_cause_of_most_recent_force_cleanup();
	if (bParam0)
	{
		return true;
	}
	if (func_217(iVar0))
	{
		return false;
	}
	if (func_218(iVar0, 1) || func_218(iVar0, 2))
	{
		return true;
	}
	return false;
}

bool func_65()
{
	return false;
}

bool func_66(int iParam0, bool bParam1, bool bParam2)
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
		if (func_219())
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
		iVar0 = func_220(&(Global_1898164->f_1[0]));
		if (func_221(iVar0) && func_222((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_223(&(Global_1898164->f_1[0])))
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

bool func_67(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iParam0->f_215)
	{
		if (does_entity_exist(iParam0[iVar0]))
		{
			if (func_135(iParam0, iVar0, 8))
			{
				if (func_224(iParam0[iVar0], Global_36, 1) < (70f * 70f) || func_225(iParam0[iVar0], 70f, -1082130432, -1082130432, -1082130432))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_68()
{
	if (func_66(0, 1, 1))
	{
		return true;
	}
	return false;
}

bool func_69(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_70(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

bool func_71()
{
	if (!func_30(&iLocal_15, 16384))
	{
		return false;
	}
	iVar0 = func_226();
	switch (iVar0)
	{
		case 105:
			if (func_227() && func_228())
			{
				return true;
			}
			break;
		case 95:
			if (func_227() && func_228())
			{
				return true;
			}
			break;
	}
	if (func_228())
	{
		if (iLocal_15.f_151 != 43)
		{
			if (func_229())
			{
				if (func_230(iVar0))
				{
					return false;
				}
				switch (iVar0)
				{
					case 82:
						return false;
					case 5:
					case 22:
					case 26:
					case 35:
					case 38:
					case 56:
					case 69:
					case 76:
					case 78:
					case 92:
					case 105:
					case 115:
					case 120:
						func_40(&(iLocal_15.f_253), 0);
						if (func_47(&(iLocal_15.f_253), 0.5f))
						{
							return true;
						}
						break;
				}
			}
		}
	}
	return false;
}

bool func_72(var uParam0)
{
	if (iLocal_15.f_21 == 0f)
	{
		*uParam0 = 210f;
	}
	else if (iLocal_15.f_21 < (func_73() - 10f))
	{
		*uParam0 = func_73();
	}
	else
	{
		*uParam0 = 210f;
	}
	if (iLocal_15.f_20 > *uParam0)
	{
		return true;
	}
	switch (iLocal_15.f_151)
	{
		case 29:
		case 30:
			if (iLocal_15.f_95 < 10)
			{
				return true;
			}
			break;
		case 0:
		case 11:
			if (!func_30(&iLocal_15, 512) && !func_30(&iLocal_15, 16384))
			{
				return true;
			}
			break;
	}
	return false;
}

float func_73()
{
	if (!func_47(Local_274.f_9[0], 25f))
	{
		return 250f;
	}
	return 120f;
}

void func_74()
{
	if (iLocal_15.f_95 <= 8)
	{
		iLocal_15.f_20 = get_distance_between_coords(Global_36, iLocal_15.f_209, true);
		if (iLocal_15.f_21 == 0f || iLocal_15.f_21 > iLocal_15.f_20)
		{
			iLocal_15.f_21 = iLocal_15.f_20;
		}
		return;
	}
	if (iLocal_15.f_18 < 0)
	{
		iLocal_15.f_20 = get_distance_between_coords(Global_36, iLocal_15.f_209, true);
		if (iLocal_15.f_21 == 0f || iLocal_15.f_21 > iLocal_15.f_20)
		{
			iLocal_15.f_21 = iLocal_15.f_20;
		}
	}
	else if (does_entity_exist(&(iLocal_15[iLocal_15.f_18])))
	{
		iLocal_15.f_9[iLocal_15.f_18] = vdist(Global_36, get_entity_coords(&(iLocal_15[iLocal_15.f_18]), false, true));
	}
	iLocal_15.f_18++;
	if (iLocal_15.f_18 >= iLocal_15.f_215)
	{
		iLocal_15.f_18 = -1;
	}
}

void func_75()
{
	if (iLocal_15.f_19 < iLocal_15.f_215)
	{
		iVar0 = iLocal_15.f_19;
		if (does_entity_exist(&(iLocal_15[iVar0])))
		{
			if (!func_135(&iLocal_15, iVar0, 8))
			{
				if (func_225(&(iLocal_15[iVar0]), 200f, -1082130432, &(iLocal_15.f_9[iVar0]), -1082130432))
				{
					func_231(&iLocal_15, iVar0, 8);
				}
			}
		}
	}
	else if (iLocal_15.f_19 < (iLocal_15.f_215 + iLocal_15.f_216))
	{
		iVar0 = (iLocal_15.f_19 - iLocal_15.f_215);
		if (does_entity_exist(&(iLocal_15.f_40[iVar0])))
		{
			if (!func_136(&iLocal_15, iVar0, 8))
			{
				if (func_225(&(iLocal_15.f_40[iVar0]), 200f, -1082130432, -1082130432, -1082130432))
				{
					func_164(&iLocal_15, iVar0, 8);
				}
			}
		}
	}
	else if (iLocal_15.f_19 < ((iLocal_15.f_215 + iLocal_15.f_216) + iLocal_15.f_217))
	{
		iVar0 = ((iLocal_15.f_19 - iLocal_15.f_215) - iLocal_15.f_216);
		if (does_entity_exist(&(iLocal_15.f_49[iVar0])))
		{
			if (!func_232(&iLocal_15, iVar0, 8))
			{
				if (is_entity_a_vehicle(&(iLocal_15.f_49[iVar0])) && !is_entity_dead(&(iLocal_15.f_49[iVar0])))
				{
					if (func_233(&(iLocal_15.f_49[iVar0]), 200f, -1082130432))
					{
						func_234(&iLocal_15, iVar0, 8);
					}
				}
			}
		}
	}
	iLocal_15.f_19++;
	if (iLocal_15.f_19 >= ((iLocal_15.f_215 + iLocal_15.f_216) + iLocal_15.f_217))
	{
		iLocal_15.f_19 = 0;
	}
}

void func_76(int iParam0)
{
	func_236(iParam0, (func_235(iParam0) - 6f));
	func_237(iParam0, 1);
}

void func_77(int iParam0)
{
	func_238(iParam0, 0);
	func_239(iParam0, 0);
	func_78(iParam0, 1);
	func_240(iParam0, 1);
	func_241(iParam0, 0);
	func_242(iParam0, 1);
	func_243(iParam0, 1, 1, 1);
}

void func_78(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(&(uParam0->f_1), 256);
	}
	else
	{
		func_245(&(uParam0->f_1), 256);
	}
}

void func_79(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(&(uParam0->f_1), 4);
	}
	else
	{
		func_245(&(uParam0->f_1), 4);
	}
}

void func_80(var uParam0, float fParam1)
{
	uParam0->f_23 = fParam1;
}

var func_81(int iParam0)
{
	return &(Global_40.f_9632[iParam0]);
}

bool func_82(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return true;
		case 36:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 38:
			return true;
		case 5:
			return true;
		case 35:
			return true;
		case 6:
			return true;
		case 42:
			return true;
		case 7:
			return true;
		case 41:
			return true;
		case 9:
			return true;
		case 10:
			return true;
		case 37:
			return true;
		case 8:
			return true;
		case 40:
			return true;
		case 11:
			return true;
		case 12:
			return true;
		case 13:
			return true;
		case 14:
			return true;
		case 16:
			return true;
		case 15:
			return true;
		case 17:
			return true;
		case 39:
			return true;
		case 18:
			return true;
		case 19:
			return true;
		case 20:
			return true;
		case 23:
			return true;
		case 22:
			return true;
		case 21:
			return true;
		case 24:
			return true;
		case 25:
			return true;
		case 28:
			return true;
		case 26:
			return true;
		case 27:
			return true;
		case 29:
			return true;
		case 30:
			return true;
		case 31:
			return true;
		case 32:
			return true;
		case 33:
			return true;
		case 34:
			return true;
		case 43:
			return true;
		default:
			break;
	}
	return false;
}

bool func_83()
{
	switch (iLocal_15.f_221)
	{
		case 0:
			Local_274 = 0;
			break;
		case 1:
			Local_274 = 1;
			break;
		default:
			Local_274 = 0;
			break;
	}
	if (get_distance_between_coords(Global_36, func_84(iLocal_15.f_151, 0, iLocal_15.f_221), true) < get_distance_between_coords(Global_36, func_84(iLocal_15.f_151, 1, iLocal_15.f_221), true))
	{
		func_139(&Local_274, 1);
	}
	iLocal_15.f_215 = 4;
	iLocal_15.f_217 = 0;
	iLocal_15.f_218 = 0;
	iLocal_15.f_216 = 4;
	if (iLocal_15.f_151 == 41)
	{
		Local_274.f_62 = 1;
		iLocal_15.f_181 = -1;
	}
	else if (func_246())
	{
		Local_274.f_61 = 1;
		iLocal_15.f_181 = 4;
	}
	else
	{
		iLocal_15.f_181 = 0;
	}
	func_22(&iLocal_15, 131072);
	func_247();
	func_248();
	func_249(&(iLocal_15.f_182), 65, 0f, 1.75f, 1.75f, 1.75f, 32896);
	iVar0 = func_251(func_250());
	if (iVar0 >= 21 || iVar0 < 5)
	{
		func_139(&Local_274, 1024);
	}
	return true;
}

Vector3 func_84(int iParam0, int iParam1, int iParam2)
{
	func_252(iParam0, iParam1, &vVar0, &uVar3, iParam2);
	return vVar0;
}

bool func_85()
{
	return true;
}

bool func_86(int iParam0)
{
	iVar0 = get_clock_hours();
	if (iVar0 >= 20)
	{
		return true;
	}
	if (iVar0 < 5)
	{
		return true;
	}
	return false;
}

bool func_87(int iParam0, bool bParam1)
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

bool func_88(int iParam0, int iParam1)
{
	if (!func_253(iParam0, 1))
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
		iVar0 = func_254(iParam0);
	}
	bVar1 = get_random_int_in_range(0, 100) < iVar0;
	return bVar1;
}

bool func_89(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_255(bParam1, bParam2, bParam3);
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

void func_90(int iParam0)
{
	fVar0 = func_210(iParam0->f_151);
	func_256(iParam0, fVar0);
}

void func_91(int iParam0, int iParam1)
{
	if (!_does_volume_exist(iParam0->f_238))
	{
		iParam0->f_238 = _create_volume_cylinder_with_custom_name(iParam0->f_209, 0f, 0f, 0f, 80f, 80f, 40f, "volAvoidance");
	}
	func_257(iParam0->f_238, iParam1, 262144, 1, 0);
}

int func_92(int iParam0)
{
	if (&iLocal_15.f_57[iParam0] == 0)
	{
		if (!func_87(iLocal_15.f_181, 1))
		{
			iLocal_15.f_57[iParam0] = func_258(997958153, 1);
		}
		else
		{
			iLocal_15.f_57[iParam0] = func_259(iLocal_15.f_181, 0, 1);
		}
	}
	return &(iLocal_15.f_57[iParam0]);
}

int func_93(int iParam0)
{
	if (&iLocal_15.f_75[iParam0] == 0)
	{
		if (iLocal_15.f_181 != -1 && iLocal_15.f_181 != 1)
		{
			iLocal_15.f_75[iParam0] = func_260(iLocal_15.f_181, iParam0, 0);
		}
		else
		{
			iLocal_15.f_75[iParam0] = func_94();
		}
		if (&iLocal_15.f_75[iParam0] == 1268180497)
		{
			iLocal_15.f_75[iParam0] = func_94();
		}
	}
	return &(iLocal_15.f_75[iParam0]);
}

int func_94()
{
	return 41788943;
}

bool func_95()
{
	switch (Local_274.f_2)
	{
		case 0:
			func_261();
			func_262(&iLocal_15);
			request_waypoint_recording("am_odrbra_f_1");
			request_waypoint_recording("am_odrbra_f_2");
			request_waypoint_recording("am_odrbra_r_1");
			request_waypoint_recording("am_odrbra_r_2");
			Local_274.f_2 = 1;
			break;
		case 1:
			iVar0 = 1;
			if (!func_263())
			{
				iVar0 = 0;
			}
			if (!func_264(&iLocal_15))
			{
				iVar0 = 0;
			}
			if (((!get_is_waypoint_recording_loaded("am_odrbra_f_1") || !get_is_waypoint_recording_loaded("am_odrbra_f_2")) || !get_is_waypoint_recording_loaded("am_odrbra_r_1")) || !get_is_waypoint_recording_loaded("am_odrbra_r_2"))
			{
				iVar0 = 0;
			}
			return iVar0;
	}
	return false;
}

int func_96(int iParam0)
{
	iVar0 = iParam0;
	return func_265(iVar0);
}

int func_97(int iParam0)
{
	return func_266(&iLocal_15, iParam0);
}

int func_98(int iParam0)
{
	return 0;
}

Vector3 func_99(int iParam0)
{
	return 0f, 0f, 0f;
}

float func_100(int iParam0)
{
	return 0f;
}

bool func_101(int iParam0)
{
	return true;
}

bool func_102(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_267(*uParam0, 0f, 0f, 0f))
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

void func_103(int iParam0)
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

int func_104(int iParam0)
{
	return 0;
}

Vector3 func_105(int iParam0)
{
	return 0f, 0f, 0f;
}

float func_106(int iParam0)
{
	return 0f;
}

bool func_107(int iParam0)
{
	return true;
}

Vector3 func_108(int iParam0)
{
	iVar0 = iParam0;
	vVar1 = { func_268(&Local_274, iVar0) };
	return vVar1;
}

var func_109(int iParam0)
{
	iVar0 = iParam0;
	Var1 = { func_268(&Local_274, iVar0) };
	return Var1.f_3;
}

bool func_110(int iParam0)
{
	return true;
}

int func_111(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_269(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_112(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_270(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

int func_113(int iParam0)
{
	if (iParam0 < 2)
	{
		return 3;
	}
	return 0;
}

void func_114(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0:
			if ((iParam0 % 2) == 0)
			{
				iParam1 = 1;
			}
			else
			{
				iParam1 = 2;
			}
			break;
	}
	switch (iParam1)
	{
		case 1:
			*uParam2 = { -0.31f, 0.03f, -0.22f };
			*uParam3 = { 0f, 50f, 90f };
			break;
		case 2:
			*uParam2 = { 0.31f, 0.03f, -0.22f };
			*uParam3 = { 0f, -50f, 90f };
			break;
	}
	*iParam4 = get_ped_bone_index(&(iLocal_15.f_40[iParam0]), 62111);
}

void func_115(var uParam0, int iParam1, int iParam2)
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

Vector3 func_116(int iParam0)
{
	iVar0 = iParam0;
	vVar1 = { func_271(&Local_274, iVar0) };
	return vVar1;
}

var func_117(int iParam0)
{
	iVar0 = iParam0;
	Var1 = { func_271(&Local_274, iVar0) };
	return Var1.f_3;
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -651526383;
		case 2:
			return 114942645;
		case 1:
			return 1846188867;
		case 4:
			return -87251158;
		case 3:
			return -61242338;
		case 5:
			return 744552419;
		case 10:
			return -655472496;
		default:
			break;
	}
	return 353608996;
}

bool func_119(int iParam0)
{
	return true;
}

void func_120(var uParam0, int iParam1)
{
	set_ped_config_flag(iParam1, 168, true);
	_0xbb1e41dd3d3c6250(iParam1, "SpAggroDefault", 0);
	decor_set_bool(iParam1, "UsesTracker", true);
}

void func_121(var uParam0, int iParam1, int iParam2)
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

void func_122(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		decor_set_bool(iParam0, "bValidRobber", true);
	}
	else if (decor_exist_on(iParam0, "bValidRobber"))
	{
		decor_set_bool(iParam0, "bValidRobber", false);
	}
}

int func_123(int iParam0)
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

void func_124(int iParam0, int iParam1)
{
	if (!func_61(iParam1, 0, 0))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			set_ped_accuracy(iParam1, 20);
			fVar0 = get_combat_float(iParam1, 1);
			fVar0 = (fVar0 * get_random_float_in_range(0.8f, 1.2f));
			set_combat_float(iParam1, 1, fVar0);
			iVar1 = get_random_int_in_range(80, 110);
			set_ped_shoot_rate(iParam1, iVar1);
			fVar0 = get_combat_float(iParam1, 3);
			fVar0 = (fVar0 * get_random_float_in_range(0.8f, 1.25f));
			set_combat_float(iParam1, 1, fVar0);
			break;
		case 1:
			set_ped_accuracy(iParam1, 15);
			set_ped_combat_attributes(iParam1, 30, false);
			break;
	}
}

void func_125(int iParam0, int iParam1)
{
	cVar0 = func_272(iParam0, iParam1);
	func_273(&(iLocal_15[iParam1]), cVar0, 0);
}

void func_126(int iParam0)
{
	remove_all_ped_weapons(&(iLocal_15[iParam0]), true, true);
	func_274(&(iLocal_15[iParam0]), -618550132, -1, 0, 0, 1056964608, 1065353216, 0);
	func_274(&(iLocal_15[iParam0]), func_275(iParam0), -1, 1, 0, 1056964608, 1065353216, 0);
}

void func_127(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!is_entity_visible(iParam0[iParam1]))
		{
			_0xa91e6cf94404e8c9(iParam0[iParam1]);
			set_entity_visible(iParam0[iParam1], true);
		}
		else
		{
			set_entity_visible(iParam0[iParam1], true);
		}
		set_entity_collision(iParam0[iParam1], true, false);
		set_entity_proofs(iParam0[iParam1], 0, false);
		freeze_entity_position(iParam0[iParam1], false);
		func_276(iParam0, iParam1, 4);
	}
	else
	{
		set_entity_visible(iParam0[iParam1], false);
		set_entity_collision(iParam0[iParam1], false, false);
		set_entity_proofs(iParam0[iParam1], 127, false);
		freeze_entity_position(iParam0[iParam1], true);
		func_231(iParam0, iParam1, 4);
	}
}

void func_128(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (does_entity_exist(&(iParam0->f_84[iParam1])))
		{
			set_entity_visible(&(iParam0->f_84[iParam1]), true);
		}
		set_entity_visible(&(iParam0->f_40[iParam1]), true);
		func_277(iParam0, iParam1, 4);
	}
	else
	{
		if (does_entity_exist(&(iParam0->f_84[iParam1])))
		{
			set_entity_visible(&(iParam0->f_84[iParam1]), false);
		}
		set_entity_visible(&(iParam0->f_40[iParam1]), false);
		func_164(iParam0, iParam1, 4);
	}
}

bool func_129(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

int func_130(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

void func_131(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5)
{
	_task_start_scenario_in_place(iParam0, iParam1, iParam2, bParam3, iParam4, fParam5, false);
}

bool func_132(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return true;
		default:
			break;
	}
	return false;
}

void func_133(int iParam0, int iParam1, int iParam2, int iParam3)
{
	set_ped_firing_pattern(iParam0[iParam1], -687903391);
	_0x20e54854def6a54a(iParam0[iParam1], 40051185);
	switch (iParam0->f_181)
	{
		case 2:
			if (iParam3 >= 0)
			{
				set_ped_shoot_rate(iParam0[iParam1], iParam3);
			}
			else
			{
				set_ped_shoot_rate(iParam0[iParam1], 80);
			}
			if (iParam2 >= 0)
			{
				set_ped_accuracy(iParam0[iParam1], iParam2);
			}
			else
			{
				set_ped_accuracy(iParam0[iParam1], 65);
			}
			break;
		case 0:
			if (iParam3 >= 0)
			{
				set_ped_shoot_rate(iParam0[iParam1], iParam3);
			}
			else
			{
				set_ped_shoot_rate(iParam0[iParam1], 100);
			}
			if (iParam2 >= 0)
			{
				set_ped_accuracy(iParam0[iParam1], iParam2);
			}
			else
			{
				set_ped_accuracy(iParam0[iParam1], 50);
			}
			break;
		case 1:
			if (iParam3 >= 0)
			{
				set_ped_shoot_rate(iParam0[iParam1], iParam3);
			}
			else
			{
				set_ped_shoot_rate(iParam0[iParam1], 110);
			}
			if (iParam2 >= 0)
			{
				set_ped_accuracy(iParam0[iParam1], iParam2);
			}
			else
			{
				set_ped_accuracy(iParam0[iParam1], 40);
			}
			break;
		case 5:
			if (iParam3 >= 0)
			{
				set_ped_shoot_rate(iParam0[iParam1], iParam3);
			}
			else
			{
				set_ped_shoot_rate(iParam0[iParam1], 100);
			}
			if (iParam2 >= 0)
			{
				set_ped_accuracy(iParam0[iParam1], iParam2);
			}
			else
			{
				set_ped_accuracy(iParam0[iParam1], 45);
			}
			break;
	}
}

void func_134(int iParam0, int iParam1)
{
	if (!func_61(iParam0[iParam1], 0, 0))
	{
		return;
	}
	set_ped_combat_range(iParam0[iParam1], 0);
	set_ped_combat_movement(iParam0[iParam1], 2);
}

bool func_135(int iParam0, int iParam1, int iParam2)
{
	return (iParam0->f_97[iParam1] && iParam2) != 0;
}

bool func_136(int iParam0, int iParam1, int iParam2)
{
	return (iParam0->f_106[iParam1] && iParam2) != 0;
}

bool func_137(int iParam0, int iParam1)
{
	return (iParam0->f_1 && iParam1) != 0;
}

bool func_138(int iParam0, vector3 vParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(iParam0, vParam1);
}

void func_139(int iParam0, int iParam1)
{
	iParam0->f_1 = (iParam0->f_1 || iParam1);
}

bool func_140()
{
	if (func_137(&Local_274, 16384))
	{
		if (func_278(&iLocal_15, &(iLocal_15.f_152), &(iLocal_15.f_152.f_16), &(Local_274.f_52), 0, 3, 1))
		{
			if (Local_274.f_5 <= 3)
			{
				switch (iLocal_15.f_152.f_16)
				{
					case 4:
					case 256:
						func_279(&(iLocal_15.f_152), &(iLocal_15.f_152.f_16));
						return false;
				}
			}
			func_280(0);
			return true;
		}
	}
	if (func_137(&Local_274, 4096))
	{
		func_280(1);
		return true;
	}
	return false;
}

void func_141()
{
	if (!func_61(iLocal_15.f_56, 0, 0))
	{
		iLocal_15.f_56 = func_281(&iLocal_15, 0);
		if (func_61(iLocal_15.f_56, 0, 0))
		{
			set_entity_can_be_damaged_by_relationship_group(iLocal_15.f_56, false, -1996978098);
		}
	}
}

void func_142(var uParam0, int iParam1, bool bParam2, float fParam3)
{
	if (bParam2)
	{
		if ((((!uParam0->f_1 && *uParam0 == 0) && Global_1935630->f_58 != iParam1) && func_61(Global_1935630->f_58, 0, 1)) && func_282(Global_1935630->f_58))
		{
			*uParam0 = Global_1935630->f_58;
		}
		else
		{
			*uParam0 = iParam1;
		}
		uParam0->f_1 = 1;
		func_283(*uParam0, 1, fParam3, 0);
	}
	else
	{
		func_283(iParam1, 0, fParam3, 0);
		func_283(*uParam0, 0, fParam3, 0);
		*uParam0 = 0;
		uParam0->f_1 = 0;
	}
}

void func_143()
{
	if (!bVar2)
	{
		if (func_137(&Local_274, 64))
		{
			bVar2 = true;
		}
		else if (func_61(&(iLocal_15[0]), 0, 1))
		{
			func_284(&Local_274, &(iLocal_15[0]), Global_35, "OPENS_FIRE", -1073741824, 1, 1744022339, 0);
			bVar2 = true;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!func_61(&(iLocal_15[iVar0]), 0, 1))
		{
		}
		else
		{
			func_127(&iLocal_15, iVar0, 1);
			func_128(&iLocal_15, iVar0, 1);
			_set_ped_crouch_movement(&(iLocal_15[iVar0]), false, 0, false);
			_0x78815fc52832b690(&(iLocal_15[iVar0]), 1);
			switch (iVar0)
			{
				case 0:
					fVar3 = 0.1f;
					break;
				case 1:
					fVar3 = 0.2f;
					break;
				default:
					fVar3 = 0f;
					break;
			}
			set_current_ped_weapon(&(iLocal_15[iVar0]), get_best_ped_weapon(&(iLocal_15[iVar0]), false, false), false, 0, false, false);
			open_sequence_task(&iVar1);
			if (Local_274.f_75.f_4)
			{
				task_swap_weapon(0, 1, 0, 0, 0);
			}
			if (iVar0 > 1)
			{
				set_combat_float(&(iLocal_15[iVar0]), 32, 3f);
				task_combat_ped(0, Global_35, 0, 0);
			}
			else
			{
				task_combat_ped(0, Global_35, 0, 0);
			}
			func_203(&(iLocal_15[iVar0]), &iVar1, fVar3, 0, 1, 1);
			func_285(&iLocal_15, iVar0, 831283580, 0);
			if (!bVar2)
			{
				func_284(&Local_274, &(iLocal_15[iVar0]), Global_35, "OPENS_FIRE", -1073741824, 1, 1744022339, 0);
				bVar2 = true;
			}
		}
		iVar0++;
	}
	func_139(&Local_274, 16384);
	set_player_control(player_id(), true, 0, false);
	if (Local_274.f_3 <= 0)
	{
		func_147(iLocal_15.f_151, 1);
	}
}

void func_144(int iParam0, int iParam1)
{
	iParam0->f_3 = iParam1;
}

bool func_145()
{
	if (_does_volume_exist(&(Local_274.f_37[1])))
	{
		if (_0xf256a75210c5c0eb(&(Local_274.f_37[1]), Global_36))
		{
			return true;
		}
	}
	return false;
}

bool func_146()
{
	func_143();
	func_139(&Local_274, 4);
	return true;
}

void func_147(int iParam0, bool bParam1)
{
	func_156(-1, 0, 0, 0, 0);
	if (bParam1)
	{
		func_190(240f, 1, 0);
		func_183(120, 0, 1);
	}
	Global_40.f_9632[iParam0]->f_1++;
	Var2 = { func_160(85200619) };
	if (stat_id_get_int(&Var2, &uVar0))
	{
		iVar1 = _0x1e7384ab5d4f4581(uVar0);
		Global_40.f_9632[iParam0]->f_3 = (iVar1 + func_286(iParam0, 1));
	}
	func_163(0, 13);
}

bool func_148()
{
	if (!func_287(Global_35, &(Local_274.f_37[1]), 1, 0))
	{
		if (func_287(Global_35, &(Local_274.f_37[0]), 1, 0))
		{
			func_288(&iLocal_15, 7);
			return true;
		}
	}
	if (func_289(&iLocal_15))
	{
		return true;
	}
	return false;
}

bool func_149()
{
	func_172();
	return true;
}

void func_150(int iParam0, bool bParam1)
{
	if (iParam0->f_182.f_17 & 4 != 0)
	{
		return;
	}
	if (iParam0->f_182.f_17 & 128 != 0)
	{
		if (!func_290(&(iParam0->f_182), 256))
		{
			if (func_290(&(iParam0->f_182), 64))
			{
				if (is_control_pressed(0, -513041747))
				{
					func_40(&(iParam0->f_182.f_10), 0);
					if (func_291(&(iParam0->f_182.f_10)))
					{
						func_292(&(iParam0->f_182.f_10));
					}
					if (func_47(&(iParam0->f_182.f_10), 0.2f))
					{
						if (Global_1935630->f_40 != 0 && bParam1)
						{
							task_horse_action(Global_1935630->f_40, 8, 0, 0);
							func_293(&(iParam0->f_182), 256);
						}
					}
				}
				else if (func_60(&(iParam0->f_182.f_10)))
				{
					func_294(&(iParam0->f_182.f_10));
				}
			}
		}
	}
	if (iParam0->f_182.f_17 & 8 != 0)
	{
		set_player_control(player_id(), true, 0, false);
		func_293(&(iParam0->f_182), 4);
		set_entity_invincible(Global_35, false);
		if (func_61(get_mount(Global_35), 0, 1))
		{
			set_entity_invincible(get_mount(Global_35), false);
		}
		return;
	}
	iVar0 = get_mount(Global_35);
	if (iParam0->f_182.f_17 & 32768 != 0 && iParam0->f_182.f_17 & 64 == 0)
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (iParam0->f_182.f_17 & 1 == 0)
	{
		if (bVar1 && (func_295(&(iParam0->f_182[3])) || func_290(&(iParam0->f_182), 16)))
		{
			if (func_290(&(iParam0->f_182), 32))
			{
				if (func_296(iParam0))
				{
					if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
					{
						set_ped_max_move_blend_ratio(iVar0, iParam0->f_182.f_22);
					}
				}
				return;
			}
			if (!func_290(&(iParam0->f_182), 1))
			{
				set_player_control(player_id(), false, 0, false);
				func_293(&(iParam0->f_182), 1);
			}
		}
		else if (bVar1 && func_295(&(iParam0->f_182[2])))
		{
			if (func_296(iParam0))
			{
				if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
				{
					set_ped_max_move_blend_ratio(iVar0, iParam0->f_182.f_22);
				}
				if (is_ped_in_any_vehicle(Global_35, false))
				{
					iVar2 = get_vehicle_ped_is_in(Global_35, false);
					if (does_entity_exist(iVar2))
					{
						_0x0c3f0f7f92ca847c(iVar2, 6f);
					}
				}
			}
		}
		else if (bVar1 && func_295(&(iParam0->f_182[1])))
		{
			if (func_296(iParam0))
			{
				if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
				{
					set_ped_max_move_blend_ratio(iVar0, iParam0->f_182.f_23);
				}
				if (is_ped_in_any_vehicle(Global_35, false))
				{
					iVar2 = get_vehicle_ped_is_in(Global_35, false);
					if (does_entity_exist(iVar2))
					{
						_0x0c3f0f7f92ca847c(iVar2, 9f);
					}
				}
			}
		}
		else if (func_295(&(iParam0->f_182[0])))
		{
			if (!func_290(&(iParam0->f_182), 64))
			{
				func_293(&(iParam0->f_182), 64);
			}
			if (func_296(iParam0))
			{
				if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
				{
					set_ped_max_move_blend_ratio(iVar0, iParam0->f_182.f_24);
				}
				if (is_ped_in_any_vehicle(Global_35, false))
				{
					iVar2 = get_vehicle_ped_is_in(Global_35, false);
					if (does_entity_exist(iVar2))
					{
						_0x0c3f0f7f92ca847c(iVar2, 12f);
					}
				}
			}
		}
	}
	if (bVar1 && iParam0->f_182.f_17 & 1 != 0)
	{
		if (!func_290(&(iParam0->f_182), 2))
		{
			if (is_ped_in_any_vehicle(Global_35, false))
			{
				iVar3 = get_vehicle_ped_is_in(Global_35, false);
				if (does_entity_exist(iVar3))
				{
					bring_vehicle_to_halt(iVar3, 5f, 5000, false);
					func_40(&(iParam0->f_182.f_7), 0);
					func_293(&(iParam0->f_182), 2);
				}
			}
			else
			{
				if (func_187(iParam0->f_182.f_5, 16))
				{
					bVar4 = func_297(Global_35, &(iParam0->f_182.f_26), 1, 0, 256, 0);
				}
				else
				{
					bVar4 = func_298(Global_35, &(iParam0->f_182.f_6), iParam0->f_182.f_5, 0, 0, 1084227584, 100, 0, 0);
				}
				if (bVar4)
				{
					if (func_187(iParam0->f_182.f_5, 8))
					{
						set_entity_invincible(Global_35, true);
						if (func_61(iVar0, 0, 1))
						{
							set_entity_invincible(iVar0, true);
						}
					}
					iParam0->f_182.f_18 = { Global_36 };
					if (func_61(iVar0, 0, 1))
					{
						task_stand_still(iVar0, floor((iParam0->f_182.f_21 * 1000f)));
					}
					func_40(&(iParam0->f_182.f_7), 0);
					func_293(&(iParam0->f_182), 2);
				}
			}
		}
		else if (!func_290(&(iParam0->f_182), 4))
		{
			if (func_47(&(iParam0->f_182.f_7), iParam0->f_182.f_21))
			{
				if (func_187(iParam0->f_182.f_5, 8))
				{
					set_entity_invincible(Global_35, false);
					if (func_61(iVar0, 0, 1))
					{
						set_entity_invincible(iVar0, false);
					}
				}
				set_player_control(player_id(), true, 0, false);
				func_293(&(iParam0->f_182), 4);
			}
			else
			{
				set_entity_invincible(Global_35, true);
				if (func_61(iVar0, 0, 1))
				{
					set_entity_invincible(iVar0, false);
				}
			}
		}
	}
}

bool func_151()
{
	if (!func_290(&(iLocal_15.f_182), 64))
	{
		return false;
	}
	if (func_138(&(Local_274.f_37[2]), Global_36))
	{
		if (func_299() || func_138(&(Local_274.f_37[3]), Global_36))
		{
			return true;
		}
	}
	return false;
}

float func_152(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_153()
{
	func_78(&(iLocal_15.f_152), 0);
	func_79(&(iLocal_15.f_152), 0);
	func_300(&(iLocal_15.f_152), 1);
	func_301(&(iLocal_15.f_152), 1);
	func_239(&(iLocal_15.f_152), 1);
	func_302(&(iLocal_15.f_152), 1);
	func_240(&(iLocal_15.f_152), 1);
}

bool func_154()
{
	if (Local_274.f_5 >= 3)
	{
		if (!func_137(&Local_274, 8192))
		{
			if (func_303())
			{
				func_139(&Local_274, 8192);
			}
		}
	}
	if (Local_274.f_5 <= 4)
	{
		func_150(&iLocal_15, func_304() < 10f);
	}
	iVar10 = -1;
	if (Local_274.f_5 > 2)
	{
		iVar10 = func_305(&(Local_274.f_112));
		if (iVar10 == -1)
		{
			if (func_306(0f, 1, Local_274.f_74, 1))
			{
				if (func_307(Local_274.f_9[5], 3f))
				{
					func_308(&(Local_274.f_112));
					func_309(&(Local_274.f_112), 1, 0);
				}
			}
		}
		else if (iVar10 == 1)
		{
			if (Local_274.f_5 < 5)
			{
				func_310(&Local_274, 5);
			}
		}
	}
	switch (Local_274.f_5)
	{
		case 0:
			func_172();
			func_40(Local_274.f_9[1], 0);
			func_310(&Local_274, 1);
			break;
		case 1:
			if (func_47(Local_274.f_9[1], 0.01f))
			{
				func_308(&(Local_274.f_112));
				func_309(&(Local_274.f_112), 0, 1);
				func_193(Local_274.f_9[1]);
				func_311(&iLocal_15, &Local_274, &iVar0, &cVar1, &iVar9);
				func_284(&Local_274, &(iLocal_15[iVar0]), Global_35, &cVar1, -1073741824, 1, 1744022339, iVar9);
				func_310(&Local_274, 2);
			}
			break;
		case 2:
			if (func_47(Local_274.f_9[1], 0.01f) || func_225(&(iLocal_15[0]), 1116471296, -1082130432, -1082130432, -1082130432))
			{
				func_312();
				func_313();
				func_193(Local_274.f_9[1]);
				func_310(&Local_274, 3);
			}
			break;
		case 3:
			func_314();
			if (func_306(0f, 1, &(iLocal_15[1]), 1) && func_306(0f, 1, &(iLocal_15[0]), 1))
			{
				func_315(&iLocal_15, &Local_274, &iVar0, &cVar1, &iVar9);
				func_284(&Local_274, &(iLocal_15[iVar0]), Global_35, &cVar1, -1073741824, 1, 1744022339, iVar9);
				func_78(&(iLocal_15.f_152), 1);
				func_79(&(iLocal_15.f_152), 1);
				if (iLocal_15.f_152.f_16 != 0)
				{
					func_279(&(iLocal_15.f_152), &(iLocal_15.f_152.f_16));
				}
				func_310(&Local_274, 4);
			}
			break;
		case 4:
			if (func_316())
			{
			}
			break;
		case 5:
			if (func_47(Local_274.f_9[1], 4.5f) || iVar10 == 1)
			{
				func_284(&Local_274, &(iLocal_15[1]), Global_35, "TAUNT_GEN_MALE", -1073741824, 1, -500314840, 2);
				func_139(&Local_274, 64);
				func_193(Local_274.f_9[1]);
				func_310(&Local_274, 6);
			}
			break;
		case 6:
			if (func_47(Local_274.f_9[1], 1f))
			{
				func_310(&Local_274, 7);
			}
			break;
		case 7:
			return true;
	}
	return false;
}

void func_155()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!func_61(&(iLocal_15[iVar0]), 0, 1))
		{
		}
		else
		{
			func_285(&iLocal_15, iVar0, 831283580, 0);
			_set_ped_crouch_movement(&(iLocal_15[iVar0]), false, 0, false);
			_0x78815fc52832b690(&(iLocal_15[iVar0]), 1);
			if (iVar0 > 1)
			{
				set_combat_float(&(iLocal_15[iVar0]), 32, 3f);
				task_combat_ped(&(iLocal_15[iVar0]), Global_35, 0, 0);
			}
			else
			{
				task_combat_ped(&(iLocal_15[iVar0]), Global_35, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_156(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_317() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_318(iVar1) && !func_319(iVar1, iParam2)) && (!bParam3 || !func_320(iVar1))) && (!bParam4 || !func_321(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_322(iVar0);
			}
		}
		iVar0++;
	}
}

void func_157()
{
	if (!func_318(&Global_1327479))
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
	func_323(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_158()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_324(iVar0, 128))
		{
			func_325(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_159()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_324(iVar0, 128) && func_324(iVar0, 1))
		{
			func_325(iVar0, 4096);
		}
		iVar0++;
	}
}

struct<2> func_160(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_161(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_162(int iParam0)
{
	iVar2 = 0;
	while (iVar2 < iParam0->f_215)
	{
		if (func_61(iParam0[iVar2], 0, 0))
		{
			iVar0 = 0;
			iVar1 = get_random_int_in_range(200, 500);
			func_326(iParam0[iVar2], &iVar0);
			func_327(iParam0[iVar2], (iVar0 + iVar1));
		}
		iVar2++;
	}
	switch (iParam0->f_181)
	{
		case 0:
			func_328(347599949);
			func_328(-1273613561);
			break;
		case 2:
			func_328(-355385988);
			func_328(-628956517);
			break;
		case 1:
			func_328(363815774);
			break;
		case 3:
			func_328(-1421951598);
			break;
		case 4:
			func_328(-1090280091);
			break;
		case 5:
			func_328(424175505);
			break;
	}
	func_22(iParam0, 128);
}

void func_163(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_329(&Global_0, 8);
	}
	if (!func_330() || func_331() != -1)
	{
		return;
	}
	func_329(&Global_0, 1);
}

void func_164(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_106[iParam1] = (iParam0->f_106[iParam1] || iParam2);
}

void func_165(bool bParam0)
{
	Global_1935496->f_15 = !bParam0;
}

void func_166(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iParam0->f_215)
	{
		if (func_61(iParam0[iVar0], 0, 0))
		{
			if (!func_135(iParam0, iVar0, 512))
			{
				if (_is_ped_hogtied(iParam0[iVar0]))
				{
					task_combat_ped(iParam0[iVar0], Global_35, 0, 0);
					set_ped_keep_task(iParam0[iVar0], true);
					set_blocking_of_non_temporary_events(iParam0[iVar0], false);
					func_332(iParam0[iVar0]);
					func_231(iParam0, iVar0, 512);
				}
			}
			else if (!_is_ped_hogtied(iParam0[iVar0]))
			{
				func_276(iParam0, iVar0, 512);
			}
		}
		iVar0++;
	}
}

void func_167(int iParam0, float fParam1)
{
	iVar0 = 0;
	while (iVar0 < iParam0->f_215)
	{
		if (func_61(iParam0[iVar0], 0, 0))
		{
			_0xd77ae48611b7b10a(iParam0[iVar0], fParam1);
		}
		iVar0++;
	}
}

void func_168(var uParam0)
{
	if (uParam0->f_35)
	{
		return;
	}
	if (!uParam0->f_8)
	{
		return;
	}
	if (uParam0->f_14 && !uParam0->f_13)
	{
		if (func_333(Global_1935630->f_44) || uParam0->f_6)
		{
			if (func_334(uParam0->f_36))
			{
				func_335(&(uParam0->f_36), 1, 1);
				uParam0->f_13 = 1;
			}
		}
	}
	if (!func_60(&(uParam0->f_29)))
	{
		if (func_336(uParam0->f_28))
		{
			func_40(&(uParam0->f_29), 0);
		}
	}
	else if (uParam0->f_6 && !uParam0->f_1)
	{
		if (func_47(&(uParam0->f_29), 3f) && func_336(uParam0->f_28))
		{
			func_337(1);
			uParam0->f_35 = 1;
			if (!func_47(&(uParam0->f_29), 6f) && !uParam0->f_4)
			{
				func_338(609);
			}
		}
	}
}

int func_169(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iParam0->f_215)
	{
		if (func_61(iParam0[iVar0], 0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_170(int iParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < iParam0->f_215)
	{
		if (iVar0 < *uParam1)
		{
			if (!&iParam0->f_228[iVar0])
			{
				if (does_entity_exist(iParam0[iVar0]))
				{
					if (func_339(iParam0[iVar0]))
					{
						func_340((*iParam0)[iVar0], (*uParam1)[iVar0], uParam2, 1, 1);
						iParam0->f_228[iVar0] = 1;
					}
				}
				else
				{
					iParam0->f_228[iVar0] = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_171(int iParam0, int iParam1, int iParam2)
{
	if (!func_61(iParam0[iParam1], 0, 1))
	{
		return;
	}
	if (!_0xcc2b20596e29e4e3(iParam0[iParam1], 98))
	{
		if (func_61(Global_1935630->f_40, 0, 0))
		{
			if (Global_1935630->f_40 == iParam2)
			{
				bVar0 = true;
			}
		}
		if (!func_61(iParam2, 0, 1) || is_ped_fleeing(iParam2))
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (!is_ped_on_mount(iParam0[iParam1]))
			{
				set_ped_combat_attributes(iParam0[iParam1], 98, true);
			}
		}
	}
	else if (func_61(iParam2, 0, 0))
	{
		if (Global_1935630->f_40 != iParam2)
		{
			set_ped_combat_attributes(iParam0[iParam1], 98, false);
		}
	}
}

void func_172()
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_61(&(iLocal_15.f_40[iVar0]), 0, 1))
		{
			if (is_ped_using_any_scenario(&(iLocal_15.f_40[iVar0])))
			{
				clear_ped_tasks(&(iLocal_15.f_40[iVar0]), 1, 0);
			}
		}
		iVar0++;
	}
}

void func_173(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam3 == -1)
	{
		iParam3 = (iParam0->f_215 - 1);
	}
	if (bParam1)
	{
		iVar0 = iParam2;
		while (iVar0 <= iParam3)
		{
			if (func_61(iParam0[iVar0], 0, 0))
			{
				if (!func_341(iParam0, iVar0))
				{
					func_127(iParam0, iVar0, 1);
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iParam2;
		while (iVar0 <= iParam3)
		{
			if (func_61(iParam0[iVar0], 0, 0))
			{
				if (func_341(iParam0, iVar0))
				{
					func_127(iParam0, iVar0, 0);
				}
			}
			iVar0++;
		}
	}
}

void func_174(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam3 == -1)
	{
		iParam3 = (iParam0->f_216 - 1);
	}
	if (bParam1)
	{
		iVar0 = iParam2;
		while (iVar0 <= iParam3)
		{
			if (func_61(&(iParam0->f_40[iVar0]), 0, 0))
			{
				if (!func_342(iParam0, iVar0))
				{
					func_128(iParam0, iVar0, 1);
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iParam2;
		while (iVar0 <= iParam3)
		{
			if (func_61(iParam0[iVar0], 0, 0))
			{
				if (func_342(iParam0, iVar0))
				{
					func_128(iParam0, iVar0, 0);
				}
			}
			iVar0++;
		}
	}
}

void func_175(int iParam0, int iParam1)
{
	iParam0->f_4 = iParam1;
}

void func_176()
{
	switch (Local_274.f_55)
	{
		case 0:
			func_343();
			break;
		case 1:
			Local_274.f_53 = func_169(&iLocal_15);
			break;
	}
	Local_274.f_55++;
	Local_274.f_55 = (Local_274.f_55 % 2);
}

bool func_177(int iParam0, var uParam1, var uParam2, char* sParam3, float fParam4)
{
	if (*uParam1 < 0)
	{
		iVar0 = 0;
		while (iVar0 < iParam0->f_215)
		{
			if (func_61(iParam0[iVar0], 0, 1))
			{
				iVar1++;
				iVar2 = iVar0;
			}
			iVar0++;
		}
		if (iVar1 <= 1)
		{
			if (iVar2 >= 0)
			{
				if (!func_135(iParam0, iVar2, 1))
				{
					func_193(uParam2);
					*uParam1 = iVar2;
				}
			}
			else if (iVar1 == 0)
			{
				return true;
			}
		}
	}
	else
	{
		if (!func_60(uParam2))
		{
			if (func_61(iParam0[*uParam1], 0, 0))
			{
				_0x2e1d6d87346bb7d2(iParam0[*uParam1], Global_35, 1, 0);
			}
		}
		func_40(uParam2, 0);
		if (func_47(uParam2, fParam4))
		{
			if (func_61(iParam0[*uParam1], 0, 1))
			{
				if (func_344(iParam0, *uParam1))
				{
					_task_smart_flee_style_ped(iParam0[*uParam1], Global_35, 4, 524292, -1082130432, -1, 0);
					set_ped_keep_task(iParam0[*uParam1], true);
					func_332(iParam0[*uParam1]);
					func_345(iParam0[*uParam1], 0, 1);
					func_346(iParam0[*uParam1], Global_35, sParam3, 0, 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					return true;
				}
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

void func_178()
{
	if (func_61(iLocal_15.f_56, 0, 0))
	{
		set_entity_can_be_damaged_by_relationship_group(iLocal_15.f_56, true, -1996978098);
	}
}

void func_179(int iParam0, bool bParam1)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		Global_40.f_9632.f_177[iParam0] = &Global_40.f_9632.f_177[iParam0] + 1;
	}
	Global_40.f_9632.f_195++;
	Global_40.f_9632.f_193 = iParam0;
	Global_17504.f_7 = 1;
	if (bParam1)
	{
		Global_40.f_9632.f_192 = func_250();
	}
}

void func_180(int iParam0, bool bParam1)
{
	if (func_18(Global_1393447, 65536))
	{
		func_19(Global_1393447, 65536);
		func_156(-1, 0, 0, 0, 0);
		func_35(1, -1, 0, 0, 0);
		_0xde5faa741a781f73(player_id(), 1);
		if (bParam1)
		{
			func_34(120, 0, 1);
		}
		else
		{
			func_34(60, 0, 1);
		}
		iVar0 = func_347(iParam0);
		iVar1 = func_348(iParam0);
		if (func_87(iVar1, 0))
		{
			switch (iVar1)
			{
				case 0:
				case 2:
					func_349(iVar1);
					break;
			}
		}
		else
		{
			iVar2 = func_350();
			switch (iVar2)
			{
				case 0:
				case 2:
					func_351(0, iVar2);
					break;
			}
		}
		if (func_187(iVar0, 1))
		{
			func_352();
		}
		else if (func_187(iVar0, 2))
		{
			func_353(0);
		}
		func_354(iParam0);
		func_355(iParam0);
	}
}

void func_181(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

void func_182(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

void func_183(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_356(iParam0, iParam1, bParam2);
}

void func_184(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

int func_185()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_186()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_319(iVar0, 16777216))
		{
			if (!func_357(iVar0))
			{
				func_358(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

bool func_187(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_188(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_359(Global_1310750[iVar0], iParam0))
		{
			if (!func_360(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_361(iVar0) < func_362(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_363(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_189(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_364(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_364(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_364(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_364(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_364(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_364(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_364(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_190(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_24();
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

int func_191(int iParam0)
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

bool func_192(int iParam0)
{
	if (func_136(&iLocal_15, iParam0, 32))
	{
		if (!func_61(_get_rider_of_mount(&(iLocal_15.f_40[iParam0]), false), 0, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_61(_get_rider_of_mount(&(iLocal_15.f_40[iParam0]), true), 0, 1))
	{
		return false;
	}
	if (iLocal_15.f_216 == iLocal_15.f_215)
	{
		if (!func_61(&(iLocal_15[iParam0]), 0, 1))
		{
			return true;
		}
	}
	if (!func_136(&iLocal_15, iParam0, 64))
	{
		fVar0 = func_197(&(iLocal_15.f_247));
		if (fVar0 - 9f) > IntToFloat(iParam0)
		{
			return true;
		}
	}
	return false;
}

void func_193(var uParam0)
{
	func_365(uParam0, 0f);
}

void func_194(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

bool func_195()
{
	return true;
}

void func_196(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_197(var uParam0)
{
	if (!func_60(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_291(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_24() - uParam0->f_1);
}

void func_198(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!_0x6614f9039bd31931(player_id(), 14, 0))
		{
			_0x0751d461f06e41ce(player_id(), 14, 0, 1);
		}
	}
	else if (_0x6614f9039bd31931(player_id(), 14, 0))
	{
		_0x0751d461f06e41ce(player_id(), 14, 0, 0);
	}
}

void func_199(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_366(iParam0))
	{
		return;
	}
	iVar0 = func_367(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_368(iVar0);
	func_369(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_370(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_371(iVar0))
		{
			return;
		}
	}
	func_372(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_331() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

bool func_200(int iParam0)
{
	if (func_135(&iLocal_15, iParam0, 2))
	{
		return false;
	}
	if (func_135(&iLocal_15, iParam0, 128))
	{
		return false;
	}
	if (func_135(&iLocal_15, iParam0, 4))
	{
		return true;
	}
	if (func_373(&iLocal_15, &(iLocal_15[iParam0])))
	{
		return true;
	}
	if (!func_135(&iLocal_15, iParam0, 8))
	{
		return true;
	}
	return false;
}

void func_201(var uParam0)
{
	set_ped_config_flag(*uParam0, 6, false);
	set_ped_config_flag(*uParam0, 4, false);
	set_ped_config_flag(*uParam0, 494, true);
}

bool func_202(int iParam0)
{
	if (func_374(iParam0, 0))
	{
		return false;
	}
	return true;
}

void func_203(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_204(int iParam0)
{
	switch (iLocal_15.f_151)
	{
		case 24:
		case 26:
		case 27:
			return true;
	}
	return false;
}

bool func_205(int iParam0, int iParam1)
{
	if (func_136(&iLocal_15, iParam0, 2))
	{
		return false;
	}
	if (func_136(&iLocal_15, iParam0, 4))
	{
		return true;
	}
	if (func_375(&(iLocal_15.f_40[iParam0]), iParam1))
	{
		return true;
	}
	if (func_373(&iLocal_15, &(iLocal_15.f_40[iParam0])))
	{
		return true;
	}
	if (!func_136(&iLocal_15, iParam0, 8))
	{
		return true;
	}
	return false;
}

bool func_206(int iParam0)
{
	if (func_376(32768))
	{
		fVar0 = 120f;
	}
	else
	{
		fVar0 = 80f;
	}
	if (func_377(&(iLocal_15.f_84[iParam0]), fVar0))
	{
		return false;
	}
	if (func_152(&(iLocal_15.f_84[iParam0]), Global_36, 1) < 10f)
	{
		return false;
	}
	return true;
}

bool func_207(int iParam0)
{
	if (func_232(&iLocal_15, iParam0, 2))
	{
		return false;
	}
	if (is_ped_in_vehicle(Global_35, &(iLocal_15.f_49[iParam0]), true))
	{
		return false;
	}
	if (func_232(&iLocal_15, iParam0, 4))
	{
		return true;
	}
	if (func_378(&iLocal_15, &(iLocal_15.f_49[iParam0])))
	{
		return true;
	}
	if (!func_232(&iLocal_15, iParam0, 8))
	{
		return true;
	}
	return false;
}

bool func_208(int iParam0, int iParam1)
{
	if (func_377(iParam1, 1114636288) || func_379(iParam1, 1, 1) <= 30f)
	{
		return false;
	}
	return true;
}

void func_209(int iParam0)
{
}

float func_210(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 16:
		case 36:
		case 38:
			fVar0 = 45f;
			break;
		case 11:
			fVar0 = 15f;
			break;
		case 0:
			fVar0 = 70f;
			break;
		case 12:
			fVar0 = 2f;
			break;
		case 13:
			fVar0 = 55f;
			break;
		case 14:
		case 26:
			fVar0 = 50f;
			break;
		case 33:
			fVar0 = 85f;
			break;
		case 31:
		case 32:
			fVar0 = 50f;
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 15:
		case 17:
		case 22:
		case 27:
		case 29:
		case 30:
		case 34:
		case 35:
		case 39:
		case 40:
		case 41:
		case 42:
			fVar0 = 10f;
			break;
		case 9:
		case 10:
		case 37:
			fVar0 = 92.5f;
			break;
		case 18:
		case 19:
		case 20:
			fVar0 = 50f;
			break;
		case 23:
			fVar0 = 3f;
			break;
		case 21:
			fVar0 = 80f;
			break;
		case 24:
			fVar0 = 86f;
			break;
		case 25:
			fVar0 = 100f;
			break;
		case 28:
			fVar0 = 65f;
			break;
		default:
			fVar0 = 180f;
			break;
	}
	return fVar0;
}

void func_211(int iParam0, float fParam1)
{
	vVar0 = { iParam0->f_209 + Vector(-40f, -fParam1, -fParam1) };
	vVar3 = { iParam0->f_209 + Vector(40f, fParam1, fParam1) };
	vVar6 = { func_380(vVar0, vVar3, 0) };
	vVar9 = { func_381(vVar0, vVar3, 0) };
	clear_ped_non_creation_area();
	set_ped_paths_back_to_original(vVar6, vVar9, 0);
	func_382(iParam0->f_209, fParam1, 5);
	func_383(iParam0);
}

void func_212(vector3 vParam0, int iParam3)
{
	if (func_69(vParam0))
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
			if (func_384(vVar2, vParam0, 2f, 1))
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

int func_213(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		case 2:
			return 2;
		case 36:
			return 2;
		case 9:
			return 2;
		case 10:
			return 2;
		case 37:
			return 2;
		case 0:
			return 1;
		case 16:
			return 3;
		case 11:
			return 1;
		case 20:
			return 1;
		case 18:
			return 1;
		case 19:
			return 1;
		case 24:
			return 1;
		case 34:
			return 3;
		case 43:
			return 6;
		default:
			break;
	}
	return 2;
}

bool func_214(int iParam0)
{
	Var2 = { func_160(85200619) };
	if (stat_id_get_int(&Var2, &uVar0))
	{
		iVar1 = _0x1e7384ab5d4f4581(uVar0);
		if (iVar1 >= Global_40.f_9632[iParam0]->f_3)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_215(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_216(int iParam0, int iParam1)
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
	if (func_385(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_385(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_385(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_385(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_385(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_385(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_385(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_385(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_217(int iParam0)
{
	if (((func_218(iParam0, 1) && func_218(iParam0, 2)) && func_218(iParam0, 8)) && func_218(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_218(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_219()
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

int func_220(int iParam0)
{
	if (!func_223(iParam0))
	{
		return -1;
	}
	return func_387(func_386(iParam0));
}

bool func_221(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_222(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_223(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

float func_224(int iParam0, vector3 vParam1, bool bParam4)
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
	return func_388(vVar0, vParam1);
}

bool func_225(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_152(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (_0x5102307ce88798eb(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (_0x164cecc59e70df86(iParam0, fParam4))
				{
					return true;
				}
			}
			else if (is_tracked_ped_visible(iParam0))
			{
				return true;
			}
		}
		else if (!is_entity_occluded(iParam0))
		{
			if (is_entity_on_screen(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_226()
{
	return Global_1894899->f_2;
}

bool func_227()
{
	if (Global_1894899->f_187)
	{
		return true;
	}
	if (func_389(16) && !func_389(21))
	{
		return true;
	}
	return false;
}

bool func_228()
{
	if (iLocal_15.f_151 != 11)
	{
		return true;
	}
	if (iLocal_15.f_221 == 2)
	{
		return false;
	}
	return true;
}

bool func_229()
{
	return (Global_1894899 & 1 != 0 && func_226() != -1);
}

bool func_230(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 16:
		case 36:
		case 79:
		case 114:
		case 118:
		case 125:
		case 127:
		case 129:
			return true;
		default:
			break;
	}
	return false;
}

void func_231(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_97[iParam1] = (iParam0->f_97[iParam1] || iParam2);
}

bool func_232(int iParam0, int iParam1, int iParam2)
{
	return (iParam0->f_115[iParam1] && iParam2) != 0;
}

bool func_233(int iParam0, float fParam1, float fParam2)
{
	fVar0 = func_390(iParam0, Global_35, 1, 1);
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (_0xc8ccdb712fbcba92(iParam0))
		{
			return true;
		}
		if (!is_entity_occluded(iParam0))
		{
			if (is_entity_on_screen(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_234(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_115[iParam1] = (iParam0->f_115[iParam1] || iParam2);
}

float func_235(int iParam0)
{
	return iParam0->f_24;
}

void func_236(int iParam0, float fParam1)
{
	iParam0->f_25 = fParam1;
}

void func_237(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_245(iParam0, 1);
	}
	else
	{
		func_244(iParam0, 1);
	}
}

void func_238(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(&(uParam0->f_1), 16384);
	}
	else
	{
		func_245(&(uParam0->f_1), 16384);
	}
}

void func_239(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(&(uParam0->f_1), 2048);
	}
	else
	{
		func_245(&(uParam0->f_1), 2048);
	}
}

void func_240(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_245(iParam0, 16);
	}
	else
	{
		func_244(iParam0, 67108864);
		func_244(iParam0, 16);
	}
}

void func_241(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(&(iParam0->f_1), 128);
	}
	else
	{
		func_245(&(iParam0->f_1), 128);
	}
}

void func_242(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_245(iParam0, 256);
	}
	else
	{
		func_244(iParam0, 256);
	}
}

void func_243(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_245(iParam0, 268435456);
	}
	else
	{
		func_244(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_245(iParam0, 1073741824);
	}
	else
	{
		func_244(iParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_245(iParam0, 536870912);
	}
	else
	{
		func_244(iParam0, 536870912);
	}
}

void func_244(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_245(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_246()
{
	if (func_331() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

void func_247()
{
	func_78(&(iLocal_15.f_152), 0);
	func_79(&(iLocal_15.f_152), 1);
	func_300(&(iLocal_15.f_152), 1);
	func_301(&(iLocal_15.f_152), 1);
	func_239(&(iLocal_15.f_152), 0);
	func_238(&(iLocal_15.f_152), 0);
	func_302(&(iLocal_15.f_152), 1);
	func_240(&(iLocal_15.f_152), 1);
}

void func_248()
{
	iLocal_15.f_238 = _create_volume_cylinder_with_custom_name(iLocal_15.f_209, 0f, 0f, 0f, 60f, 60f, 40f, "volAvoidance");
	switch (iVar272)
	{
		case 0:
			func_391(&iLocal_15, &Local_274);
			break;
		case 1:
			func_392(&iLocal_15, &Local_274);
			break;
	}
}

void func_249(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6)
{
	uParam0->f_5 = iParam1;
	uParam0->f_21 = fParam2;
	uParam0->f_22 = fParam3;
	uParam0->f_23 = fParam4;
	uParam0->f_24 = fParam5;
	uParam0->f_17 = iParam6;
}

int func_250()
{
	return &Global_1899515;
}

int func_251(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

void func_252(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 180.6557f, 75.5711f, 98.7111f, 307.9777f);
							break;
						case 1:
							func_393(&Var0, -124.9678f, 182.499f, 92.7486f, 323.5033f);
							break;
						case 2:
							func_393(&Var0, -143.1968f, 392.7447f, 95.6412f, 26.7895f);
							break;
						case 3:
							func_393(&Var0, -175.487f, -208.2044f, 87.9832f, 155.3853f);
							break;
						case 4:
							func_393(&Var0, 810.023f, 376.8716f, 115.1321f, 278.0894f);
							break;
					}
					break;
				case 1:
				case 2:
				case 36:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, -78.546f, 574.7642f, 117.1554f, 285.065f);
							break;
						case 1:
							func_393(&Var0, 52.8403f, 228.5046f, 108.3697f, 1.1595f);
							break;
					}
					break;
				case 3:
				case 4:
				case 38:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, -98.0465f, 227.8637f, 99.6174f, 342f);
							break;
					}
					break;
				case 5:
				case 35:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, -1114.856f, 73.738f, 53.0233f, 354.9799f);
							break;
					}
					break;
				case 6:
				case 42:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, -566.0319f, 466.1427f, 98.0826f, 133.627f);
							break;
						case 1:
							func_393(&Var0, 731.3024f, -567.4277f, 75.8176f, 96.4522f);
							break;
						case 2:
							func_393(&Var0, 83.4469f, 582.1075f, 135.0757f, 264.5214f);
							break;
					}
					break;
				case 7:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, -1771.38f, 128.1271f, 153.5691f, 181.1798f);
							break;
					}
					break;
				case 41:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, -1771.38f, 128.1271f, 153.5691f, 181.1798f);
							break;
						case 1:
							func_393(&Var0, 831.6912f, -584.7949f, 78.2731f, 202.9779f);
							break;
					}
					break;
				case 8:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, -437.7152f, -378.8148f, 85.5442f, 56.3376f);
							break;
					}
					break;
				case 40:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, -437.7152f, -378.8148f, 85.5442f, 56.3376f);
							break;
					}
					break;
				case 9:
				case 10:
				case 37:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 202.3087f, 137.861f, 98.3938f, 326.3648f);
							break;
						case 1:
							func_393(&Var0, -372.0885f, -36.569f, 41.6905f, 348.5297f);
							break;
						case 2:
							func_393(&Var0, -927.3195f, -351.4889f, 48.6764f, 122.086f);
							break;
						case 3:
							func_393(&Var0, -1089.385f, 29.2608f, 55.1327f, 104.0236f);
							break;
					}
					break;
				case 11:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 1561.633f, -654.6262f, 46.2574f, 321.6371f);
							break;
						case 1:
							func_393(&Var0, 954.459f, -1251.211f, 54.8197f, 43.8895f);
							break;
						case 2:
							func_393(&Var0, 1528.073f, -1412.362f, 65.0164f, 100.1078f);
							break;
						case 3:
							func_393(&Var0, 1485.599f, -988.1472f, 49.9976f, 203.8493f);
							break;
						case 4:
							func_393(&Var0, 2060.011f, -1359.194f, 41.5979f, 309.696f);
							break;
						case 5:
							func_393(&Var0, 1347.459f, -1779.138f, 68.0518f, 13.8827f);
							break;
					}
					break;
				case 12:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 1486.386f, -863.9506f, 49.1165f, 40.9143f);
							break;
					}
					break;
				case 15:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 1751.006f, -792.3771f, 40.7652f, 45.2804f);
							break;
					}
					break;
				case 13:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 918.9561f, -1061.409f, 54.6744f, 191.2117f);
							break;
						case 1:
							func_393(&Var0, 1486.383f, -942.4707f, 47.8906f, 181.1513f);
							break;
					}
					break;
				case 14:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 1561.589f, -2121.429f, 44.3306f, 273.483f);
							break;
						case 1:
							func_393(&Var0, 1391.634f, -2269.641f, 44.9803f, 294.7664f);
							break;
						case 2:
							func_393(&Var0, 2067.27f, -1250.361f, 42.8864f, 257.827f);
							break;
					}
					break;
				case 16:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 1173.9f, -909.8f, 66.9f, -57.4f);
							break;
						case 1:
							func_393(&Var0, 878.2368f, -914.2035f, 54.1948f, 270.879f);
							break;
					}
					break;
				case 17:
				case 39:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 2069.093f, -1241.536f, 41.2556f, 176.86f);
							break;
						case 1:
							func_393(&Var0, 2081.443f, -899.7972f, 41.1731f, 260.946f);
							break;
						case 2:
							func_393(&Var0, 1212.386f, -1591.315f, 56.0669f, 23.4687f);
							break;
						case 3:
							func_393(&Var0, 1506.064f, -905.8009f, 47.8961f, 165.3073f);
							break;
						case 4:
							func_393(&Var0, 1606.995f, -1545.489f, 59.2865f, 177.0083f);
							break;
					}
					break;
				case 18:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 2410.232f, 1140.23f, 97.4886f, 180.3519f);
							break;
					}
					break;
				case 19:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 2410.232f, 1140.23f, 97.4886f, 180.3519f);
							break;
					}
					break;
				case 21:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 2449.325f, 1573.939f, 85.8194f, 39.9471f);
							break;
						case 1:
							func_393(&Var0, 2584.913f, 1633.828f, 97.7316f, 8.1257f);
							break;
						case 2:
							func_393(&Var0, 2730.857f, 1311.648f, 92.9221f, 149.1053f);
							break;
						case 3:
							func_393(&Var0, 2794.002f, 1031.168f, 59.517f, 188.3449f);
							break;
					}
					break;
				case 20:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 2430.674f, 1253.279f, 108.2854f, 292.6725f);
							break;
					}
					break;
				case 22:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 2659.633f, 897.6414f, 88.4611f, 203.4193f);
							break;
					}
					break;
				case 23:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 2709.737f, 473.069f, 65.8412f, 252.6725f);
							break;
					}
					break;
				case 24:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, -2313.103f, -1513.598f, 140.2823f, 15.1824f);
							break;
					}
					break;
				case 25:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, -1434.349f, -1281.048f, 79.4382f, 38.4403f);
							break;
					}
					break;
				case 26:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, -1304.657f, -1086.787f, 72.7056f, 19.326f);
							break;
					}
					break;
				case 28:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, -1451.386f, -1256.971f, 77.9939f, 246.5365f);
							break;
					}
					break;
				case 27:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, -1938.231f, -1737.649f, 121.0378f, 54.6957f);
							break;
						case 1:
							func_393(&Var0, -2237.81f, -1236.479f, 135.9782f, 291.2003f);
							break;
					}
					break;
				case 29:
				case 30:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, -2215.869f, -408.5112f, 163.5815f, 101.2651f);
							break;
					}
					break;
				case 31:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, -3476.859f, -2618.098f, -13.6175f, -100.63f);
							break;
					}
					break;
				case 32:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, -5102.887f, -2937.184f, 2.3186f, 58.5231f);
							break;
					}
					break;
				case 33:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, -3772.229f, -2818.31f, -16.4697f, 123.7911f);
							break;
						case 1:
							func_393(&Var0, -3998.259f, -2362.783f, -9.1375f, 73.6187f);
							break;
					}
					break;
				case 34:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 1972.732f, 1695.837f, 162.568f, 114.1732f);
							break;
					}
					break;
				case 43:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 2242.927f, 732.5889f, 91.0723f, 263.9706f);
							break;
						case 1:
							func_393(&Var0, 2698.555f, 183.9842f, 52.7268f, 12.5536f);
							break;
						case 2:
							func_393(&Var0, 2012.363f, 450.9774f, 114.9433f, 51.6697f);
							break;
						case 3:
							func_393(&Var0, 2870.96f, 831.843f, 48.2579f, 28.2762f);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 334.8338f, 220.554f, 101.8269f, 119.7537f);
							break;
						case 1:
							func_393(&Var0, -113.9271f, 443.0494f, 111.7579f, 219.7514f);
							break;
						case 2:
							func_393(&Var0, -298.4487f, 637.9625f, 111.069f, 190.7615f);
							break;
						case 3:
							func_393(&Var0, -379.536f, -313.1479f, 87.3478f, 269.676f);
							break;
						case 4:
							func_393(&Var0, 1058.255f, 395.0368f, 100.4976f, 78.4296f);
							break;
					}
					break;
				case 1:
				case 2:
				case 36:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 153.7973f, 524.9196f, 136.8577f, 48.6442f);
							break;
						case 1:
							func_393(&Var0, 206.1301f, 463.9098f, 121.7605f, 105.0337f);
							break;
					}
					break;
				case 3:
				case 4:
				case 38:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, -169.289f, 450.9006f, 96.4484f, 199.7628f);
							break;
					}
					break;
				case 5:
				case 35:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, -1093.884f, 187.3798f, 59.2496f, 162.9302f);
							break;
					}
					break;
				case 6:
				case 42:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, -650.8867f, 350.328f, 87.9592f, 308.87f);
							break;
						case 1:
							func_393(&Var0, 581.8732f, -498.1398f, 77.1145f, 214.5317f);
							break;
						case 2:
							func_393(&Var0, 195.9423f, 643.7529f, 133.8094f, 123.0221f);
							break;
					}
					break;
				case 7:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, -1720.367f, -58.8535f, 175.2912f, 20.2253f);
							break;
					}
					break;
				case 41:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, -1720.367f, -58.8535f, 175.2912f, 20.2253f);
							break;
						case 1:
							func_393(&Var0, 816.4929f, -791.5338f, 57.0665f, 358.0346f);
							break;
					}
					break;
				case 8:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, -602.5374f, -246.7336f, 40.84f, 224.9445f);
							break;
					}
					break;
				case 40:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, -602.5374f, -246.7336f, 40.84f, 224.9445f);
							break;
					}
					break;
				case 9:
				case 10:
				case 37:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 488.6012f, 346.341f, 104.38f, 132.2152f);
							break;
						case 1:
							func_393(&Var0, -491.0948f, 240.2662f, 42.8778f, 245.3544f);
							break;
						case 2:
							func_393(&Var0, -1063.855f, -573.8351f, 81.1675f, 22.0417f);
							break;
						case 3:
							func_393(&Var0, -1383.4f, -131.3f, 94.2f, 2.2213f);
							break;
					}
					break;
				case 11:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 1721.41f, -764.9014f, 41.3985f, 48.7414f);
							break;
						case 1:
							func_393(&Var0, 917.1657f, -1057.089f, 55.351f, 197.7367f);
							break;
						case 2:
							func_393(&Var0, 1367.119f, -1379.669f, 79.039f, 234.1533f);
							break;
						case 3:
							func_393(&Var0, 1492.79f, -1122.532f, 56.3596f, 8.428f);
							break;
						case 4:
							func_393(&Var0, 2246.185f, -1359.823f, 44.2797f, 67.8845f);
							break;
						case 5:
							func_393(&Var0, 1289.32f, -1632.029f, 65.404f, 182.4022f);
							break;
					}
					break;
				case 12:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 1583.548f, -629.852f, 46.1712f, 146.2081f);
							break;
					}
					break;
				case 15:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 1582.927f, -623.4384f, 46.2721f, 218.2033f);
							break;
					}
					break;
				case 13:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 947.2817f, -1236.62f, 53.763f, 23.4717f);
							break;
						case 1:
							func_393(&Var0, 1508.104f, -1149.061f, 53.7777f, 48.8161f);
							break;
					}
					break;
				case 14:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 1861.568f, -1978.116f, 43.699f, 111.3814f);
							break;
						case 1:
							func_393(&Var0, 1506.446f, -2206.457f, 42.6941f, 158.0186f);
							break;
						case 2:
							func_393(&Var0, 2273.229f, -1369.996f, 45.7006f, 80.9983f);
							break;
					}
					break;
				case 16:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 1346.7f, -858.3f, 72.7f, 88.6f);
							break;
						case 1:
							func_393(&Var0, 1107.901f, -916.9768f, 66.9322f, 90.5837f);
							break;
					}
					break;
				case 17:
				case 39:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 2264.292f, -1366.995f, 44.3097f, 79.8327f);
							break;
						case 1:
							func_393(&Var0, 2264.248f, -1037.55f, 42.1479f, 54.3753f);
							break;
						case 2:
							func_393(&Var0, 1091.079f, -1431.687f, 54.6637f, 223.0478f);
							break;
						case 3:
							func_393(&Var0, 1493.179f, -1116.514f, 55.4248f, 352.523f);
							break;
						case 4:
							func_393(&Var0, 1753.022f, -1638.871f, 48.5096f, 34.1859f);
							break;
					}
					break;
				case 18:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
							break;
					}
					break;
				case 19:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
							break;
					}
					break;
				case 21:
					switch (iParam4)
					{
						case 0:
							func_393(&Var0, 2299.518f, 1759.59f, 107.9513f, 195.5682f);
							break;
						case 1:
							func_393(&Var0, 2705.534f, 1911.673f, 113.9124f, 141.4947f);
							break;
						case 2:
							func_393(&Var0, 2530.082f, 1242.029f, 148.8438f, 338.4772f);
							Jump @5135; //curOff = 5103
							func_393(&Var0, 2848.581f, 689.1435f, 64.6365f, 0.9953f);
							Jump @5957; //curOff = 5135
							switch (iParam4)
							{
								case 0:
									func_393(&Var0, 2508.16f, 1404.184f, 95.79f, 124.3386f);
									break;
							}
							Jump @5957; //curOff = 5181
							switch (iParam4)
							{
								case 0:
									func_393(&Var0, 2799.991f, 890.5291f, 63.6047f, 152.4149f);
									break;
							}
							Jump @5957; //curOff = 5227
							switch (iParam4)
							{
								case 0:
									func_393(&Var0, 2921.223f, 414.4291f, 48.478f, 74.3386f);
									break;
							}
							Jump @5957; //curOff = 5273
							switch (iParam4)
							{
								case 0:
									func_393(&Var0, -2409.259f, -1475.456f, 147.1943f, 267.4513f);
									break;
							}
							Jump @5957; //curOff = 5319
							switch (iParam4)
							{
								case 0:
									func_393(&Var0, -1682.643f, -1246.672f, 84.8961f, 286.9227f);
									break;
							}
							Jump @5957; //curOff = 5365
							switch (iParam4)
							{
								case 0:
									func_393(&Var0, -1154.178f, -1214.848f, 68.3049f, 89.9786f);
									break;
							}
							Jump @5957; //curOff = 5411
							switch (iParam4)
							{
								case 0:
									func_393(&Var0, -2231.266f, -1599.062f, 145.9509f, 251.4796f);
									break;
								case 1:
									func_393(&Var0, -2091.402f, -1125.535f, 119.3745f, 117.3666f);
									break;
							}
							Jump @5957; //curOff = 5492
							switch (iParam4)
							{
								case 0:
									func_393(&Var0, -1563.969f, -868.5887f, 86.2286f, 229.2799f);
									break;
							}
							Jump @5957; //curOff = 5538
							switch (iParam4)
							{
								case 0:
									func_393(&Var0, -2295.963f, -328.9082f, 154.6866f, 183.9384f);
									break;
							}
							Jump @5957; //curOff = 5584
							switch (iParam4)
							{
								case 0:
									func_393(&Var0, -3161.003f, -2610.719f, 9.9647f, 66.5f);
									break;
							}
							Jump @5957; //curOff = 5630
							switch (iParam4)
							{
								case 0:
									func_393(&Var0, -5379.7f, -2940.985f, 1.6323f, 255.6953f);
									break;
							}
							Jump @5957; //curOff = 5676
							switch (iParam4)
							{
								case 0:
									func_393(&Var0, -3982.679f, -3068.613f, -13.872f, 331.3266f);
									break;
								case 1:
									func_393(&Var0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
									break;
							}
							Jump @5957; //curOff = 5757
							switch (iParam4)
							{
								case 0:
									func_393(&Var0, 1819.118f, 1593.633f, 168.2121f, 313.8806f);
									break;
							}
							Jump @5957; //curOff = 5803
							switch (iParam4)
							{
								case 0:
									func_393(&Var0, 2482.688f, 729.5152f, 72.2941f, 117.0933f);
									break;
								case 1:
									func_393(&Var0, 2585.403f, 338.2195f, 69.6483f, 220.6653f);
									break;
								case 2:
									func_393(&Var0, 1805.624f, 550.4319f, 105.9446f, 233.3962f);
									break;
								case 3:
									func_393(&Var0, 2793.57f, 1038.077f, 58.5925f, 188.5771f);
									break;
							}
							Jump @6225; //curOff = 5957
							switch (iParam0)
							{
								case 13:
									switch (iParam4)
									{
										case 0:
											func_393(&Var0, 997.1635f, -1186.04f, 64.0811f, 75.3782f);
											break;
										case 1:
											func_393(&Var0, 1391.092f, -1081.252f, 70.8405f, 284.1285f);
											break;
									}
									break;
								case 33:
									switch (iParam4)
									{
										case 0:
											func_393(&Var0, -3729.811f, -3131.73f, -5.6609f, 79.6603f);
											break;
										case 1:
											func_393(&Var0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
											break;
									}
									break;
								case 0:
									switch (iParam4)
									{
										case 1:
											func_393(&Var0, 54.6531f, 217.5979f, 107.1034f, 40.7729f);
											break;
									}
									break;
							}
							Jump @6225; //curOff = 6194
							*uParam2 = { 0f, 0f, 0f };
							*uParam3 = 0f;
							Jump @6225; //curOff = 6208
							*uParam2 = { 0f, 0f, 0f };
							*uParam3 = 0f;
							*uParam2 = { Var0 };
							*uParam3 = Var0.f_3;
							if (func_69(*uParam2))
							{
								*uParam2 = { 0f, 0f, 0f };
								*uParam3 = 0f;
							}
						}

bool func_253(int iParam0, bool bParam1)
{
	if (!func_87(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0]->f_1 == 3 || (bParam1 && Global_40.f_9571[iParam0]->f_1 == 4));
}

int func_254(int iParam0)
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

int func_255(bool bParam0, bool bParam1, bool bParam2)
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

void func_256(int iParam0, float fParam1)
{
	if (!_does_volume_exist(iParam0->f_237))
	{
		func_394(&(iParam0->f_237), iParam0->f_209, iParam0->f_151);
	}
	func_395(iParam0->f_237, "ambush_restriction", 1, 0, 512, 0, -1082130432);
	vVar0 = { iParam0->f_209 + Vector(-40f, -fParam1, -fParam1) };
	vVar3 = { iParam0->f_209 + Vector(40f, fParam1, fParam1) };
	vVar6 = { func_380(vVar0, vVar3, 0) };
	vVar9 = { func_381(vVar0, vVar3, 0) };
	if (func_396(iParam0->f_151))
	{
		iVar12 = func_397(iParam0);
		func_398(iParam0->f_209, fParam1, 0, 0, iVar12);
	}
	set_ped_non_creation_area(vVar6, vVar9);
	set_ped_paths_in_area(vVar6, vVar9, false, 1);
	stop_fire_in_range(iParam0->f_209, fParam1);
	func_399(iParam0->f_209, fParam1, 0);
}

void func_257(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_244(&iParam1, 8192);
	}
	if (bParam4)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

int func_258(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 997958153:
			return get_random_model_from_population_set(1468170991, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		case 918497150:
			return get_random_model_from_population_set(-62570976, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		case 356361174:
			return get_random_model_from_population_set(-165971473, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		case -1771663379:
			return get_random_model_from_population_set(-2049218219, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		case -311956671:
			return get_random_model_from_population_set(989061023, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		default:
			break;
	}
	return get_random_model_from_population_set(1468170991, 0, -1190799868, true, false, 0f, 0f, 0f);
}

int func_259(int iParam0, int iParam1, int iParam2)
{
	iVar2 = 0;
	iVar1 = func_400(iParam0);
	if ((func_187(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
	{
		iVar0 = get_random_int_in_range(0, iVar1);
	}
	else
	{
		iVar0 = iParam1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					iVar2 = -247265944;
					break;
				case 1:
					iVar2 = 1696286663;
					break;
				case 2:
					iVar2 = -1038436471;
					break;
				case 3:
					iVar2 = -85890205;
					break;
				case 4:
					iVar2 = -727455979;
					break;
				case 5:
					iVar2 = -1679658797;
					break;
				default:
					if (func_401())
					{
						iVar2 = -247265944;
					}
					else
					{
						iVar2 = 1696286663;
					}
					break;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
					iVar2 = 1072019803;
					break;
				case 1:
					iVar2 = -1038436471;
					break;
				case 2:
					iVar2 = -1261814606;
					break;
				case 3:
					iVar2 = -1554827654;
					break;
				default:
					if (func_401())
					{
						iVar2 = -1038436471;
					}
					else
					{
						iVar2 = 1072019803;
					}
					break;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 0:
					iVar2 = 2024948086;
					break;
				case 1:
					iVar2 = -1265030920;
					break;
				case 2:
					iVar2 = 937246805;
					break;
				case 3:
					iVar2 = -1599683008;
					break;
				case 4:
					iVar2 = -450053710;
					break;
				default:
					if (func_401())
					{
						iVar2 = 2024948086;
					}
					else
					{
						iVar2 = -1265030920;
					}
					break;
			}
			break;
		case 4:
			switch (iVar0)
			{
				case 0:
					iVar2 = 1230359523;
					break;
				case 1:
					iVar2 = 96930969;
					break;
				case 2:
					iVar2 = -586898625;
					break;
				case 3:
					iVar2 = 36009259;
					break;
				default:
					if (func_401())
					{
						iVar2 = 1230359523;
					}
					else
					{
						iVar2 = 96930969;
					}
					break;
			}
			break;
		case 5:
			switch (iVar0)
			{
				case 0:
					iVar2 = -727455979;
					break;
				case 1:
					iVar2 = 2119038574;
					break;
				case 2:
					iVar2 = -1180427609;
					break;
				case 3:
					iVar2 = -1250098797;
					break;
				default:
					if (func_401())
					{
						iVar2 = -727455979;
					}
					else
					{
						iVar2 = 2119038574;
					}
					break;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case 0:
					iVar2 = 917402668;
					break;
				case 1:
					iVar2 = -914712122;
					break;
				case 2:
					iVar2 = -598917269;
					break;
				case 3:
					iVar2 = -598917269;
					break;
				default:
					iVar2 = 917402668;
					break;
			}
			break;
		case 10:
			switch (iVar0)
			{
				case 0:
					iVar2 = -1250098797;
					break;
				case 1:
					iVar2 = 2130094044;
					break;
				case 2:
					iVar2 = 1861665605;
					break;
				case 3:
					iVar2 = -1924405794;
					break;
				case 4:
					iVar2 = -1180427609;
					break;
				default:
					iVar2 = -1250098797;
					break;
			}
			break;
		default:
			iVar2 = -1038436471;
			break;
	}
	return iVar2;
}

int func_260(int iParam0, int iParam1, int iParam2)
{
	iVar2 = 1268180497;
	iVar1 = func_400(iParam0);
	if ((func_187(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
	{
		iVar0 = get_random_int_in_range(0, iVar1);
	}
	else
	{
		iVar0 = iParam1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					iVar2 = -1279161173;
					break;
				case 1:
					iVar2 = -520362209;
					break;
				case 2:
					iVar2 = -803977904;
					break;
				case 3:
					iVar2 = -1279161173;
					break;
				case 4:
					iVar2 = -520362209;
					break;
				case 5:
					iVar2 = -803977904;
					break;
				default:
					if (func_401())
					{
						iVar2 = -1279161173;
					}
					else
					{
						iVar2 = -520362209;
					}
					break;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
					iVar2 = 42113864;
					break;
				case 1:
					iVar2 = 694577423;
					break;
				case 2:
					iVar2 = 42113864;
					break;
				case 3:
					iVar2 = 694577423;
					break;
				default:
					if (func_401())
					{
						iVar2 = 42113864;
					}
					else
					{
						iVar2 = 694577423;
					}
					break;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 0:
					iVar2 = 1078773108;
					break;
				case 1:
					iVar2 = 1314808215;
					break;
				case 2:
					iVar2 = -801577650;
					break;
				case 3:
					iVar2 = -1635384855;
					break;
				case 4:
					iVar2 = -1150469193;
					break;
				default:
					if (func_401())
					{
						iVar2 = 1078773108;
					}
					else
					{
						iVar2 = 1314808215;
					}
					break;
			}
			break;
		case 4:
			switch (iVar0)
			{
				case 0:
					iVar2 = 1371076591;
					break;
				case 1:
					iVar2 = 998558599;
					break;
				case 2:
					iVar2 = -1175500706;
					break;
				case 3:
					iVar2 = 1814441161;
					break;
				default:
					if (func_401())
					{
						iVar2 = 1371076591;
					}
					else
					{
						iVar2 = 998558599;
					}
					break;
			}
			break;
		case 5:
			switch (iVar0)
			{
				case 0:
					iVar2 = -314847033;
					break;
				case 1:
					iVar2 = -2125596339;
					break;
				case 2:
					iVar2 = 1938775504;
					break;
				case 3:
					iVar2 = -477512349;
					break;
				default:
					if (func_401())
					{
						iVar2 = -2125596339;
					}
					else
					{
						iVar2 = 1938775504;
					}
					break;
			}
			break;
		default:
			break;
	}
	return iVar2;
}

void func_261()
{
	iVar0 = 0;
	while (iVar0 < 0)
	{
		sVar1 = func_402(iVar0);
		if (!is_string_null_or_empty(sVar1))
		{
			request_anim_dict(sVar1);
		}
		iVar0++;
	}
}

void func_262(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < iParam0->f_215)
	{
		iVar0 = func_266(iParam0, iVar1);
		request_model(iVar0, false);
		iVar1++;
	}
}

bool func_263()
{
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < 0)
	{
		sVar1 = func_402(iVar0);
		if (!is_string_null_or_empty(sVar1))
		{
			if (!has_anim_dict_loaded(sVar1))
			{
				iVar2 = 0;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_264(int iParam0)
{
	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < iParam0->f_215)
	{
		iVar0 = func_266(iParam0, iVar1);
		if (!has_model_loaded(iVar0))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

int func_265(int iParam0)
{
	switch (iLocal_15.f_181)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1104129217;
				case 1:
					return 1394167636;
				case 2:
					return -304965544;
				case 3:
					return 605381;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 1104129217;
				case 1:
					return 1394167636;
				case 2:
					return -304965544;
				case 3:
					return 605381;
				default:
					break;
			}
			break;
	}
	return func_94();
}

int func_266(int iParam0, int iParam1)
{
	switch (iParam0->f_181)
	{
		case 0:
			return 347599949;
		case 4:
			return -1090280091;
		default:
			break;
	}
	return 1057570823;
}

bool func_267(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

struct<4> func_268(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case 0:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_403(0, 10);
					case 1:
						return func_403(0, 11);
					case 2:
						return func_403(0, 4);
					case 3:
						return func_403(0, 7);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_403(1, 10);
					case 1:
						return func_403(1, 11);
					case 2:
						return func_403(1, 4);
					case 3:
						return func_403(1, 7);
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_403(2, 10);
					case 1:
						return func_403(2, 11);
					case 2:
						return func_403(2, 4);
					case 3:
						return func_403(2, 7);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_403(3, 10);
					case 1:
						return func_403(3, 11);
					case 2:
						return func_403(3, 4);
					case 3:
						return func_403(3, 7);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

void func_269(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_404(iParam1))
		{
			func_405(iParam0, 41788943);
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
			func_406(iParam0, 0, 1);
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
			func_407(iParam0, 0);
			bVar0 = true;
		}
		func_408(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

int func_270(int iParam0)
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

struct<4> func_271(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case 0:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_403(0, 0);
					case 1:
						return func_403(0, 2);
					case 2:
						return func_403(0, 4);
					case 3:
						return func_403(0, 7);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_403(1, 0);
					case 1:
						return func_403(1, 2);
					case 2:
						return func_403(1, 4);
					case 3:
						return func_403(1, 7);
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_403(2, 0);
					case 1:
						return func_403(2, 2);
					case 2:
						return func_403(2, 4);
					case 3:
						return func_403(2, 7);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_403(3, 0);
					case 1:
						return func_403(3, 2);
					case 2:
						return func_403(3, 4);
					case 3:
						return func_403(3, 7);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

char* func_272(int iParam0, int iParam1)
{
	iVar0 = func_409(iParam0, iParam1);
	return func_410(iVar0);
}

void func_273(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_61(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

int func_274(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_411(iParam3, 1);
	bVar1 = func_411(iParam3, 2);
	bVar2 = !func_411(iParam3, 4);
	bVar3 = func_411(iParam3, 8);
	bVar4 = !func_411(iParam3, 16);
	bVar5 = func_411(iParam3, 32);
	bVar6 = func_411(iParam3, 64);
	return func_412(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

int func_275(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -594562071;
		case 1:
			return -1101297303;
		case 2:
			return -594562071;
		case 3:
			return -1101297303;
		default:
			break;
	}
	return -594562071;
}

void func_276(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_97[iParam1] = (&iParam0->f_97[iParam1] - (iParam0->f_97[iParam1] && iParam2));
}

void func_277(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_106[iParam1] = (&uParam0->f_106[iParam1] - (uParam0->f_106[iParam1] && iParam2));
}

bool func_278(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_413(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_414(iParam0[*uParam3], 0, iParam1, uParam2, 0, 0))
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

void func_279(int iParam0, var uParam1)
{
	if (iParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		iParam0->f_8 = func_185();
		_0xeacebaae0a33fb3f(player_id());
	}
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_10 = 0;
	func_415(iParam0, 0);
	*uParam1 = 0;
	iParam0->f_16 = 0;
}

void func_280(int iParam0)
{
	Local_274.f_8 = iParam0;
}

int func_281(int iParam0, int iParam1)
{
	Var1.f_10 = 7;
	Var1 = 0;
	Var1.f_1 = iParam1;
	Var1.f_2 = 0;
	return func_416(&uVar0, &Var1);
}

bool func_282(int iParam0)
{
	if (decor_exist_on(iParam0, "bValidRobber") && decor_get_bool(iParam0, "bValidRobber"))
	{
		return true;
	}
	return false;
}

void func_283(int iParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (does_entity_exist(iParam0))
	{
		_0xe98d55c5983f2509(iParam0);
	}
	if (bParam1)
	{
		if (!func_417(610))
		{
			if (!func_418())
			{
				func_419(1);
				func_420();
			}
		}
		func_421(610, 1);
		set_ped_config_flag(iParam0, 317, true);
		if (does_entity_exist(iParam0))
		{
			_0x870708a6e147a9ad(iParam0, "", fParam2, fParam2, 0, 0, 0, 0, 0, -1);
		}
		_0xcbb54cc7ffffab86(player_id(), iParam0, 1, 0);
	}
	else
	{
		if (does_entity_exist(iParam0))
		{
			_0x870708a6e147a9ad(iParam0, "", fParam2, fParam2, 8, 0, 0, 0, 0, -1);
		}
		set_ped_config_flag(iParam0, 317, false);
		if (!bParam3)
		{
			_0xcbb54cc7ffffab86(player_id(), 0, 0, 0);
		}
	}
}

int func_284(int iParam0, int iParam1, int iParam2, char* sParam3, float fParam4, bool bParam5, int iParam6, int iParam7)
{
	if (func_346(iParam1, iParam2, sParam3, "", fParam4, iParam7, 0, 1, 1, fParam4 >= 0f, bParam5, iParam6, 1, 0, 0))
	{
		iParam0->f_74 = iParam1;
		func_309(&(iParam0->f_112), 0, 1);
		func_193(iParam0->f_9[5]);
	}
	return 0;
}

void func_285(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_422(iParam0[iParam1], iParam0->f_22[iParam1], iParam2, iParam3, 0, 0);
}

int func_286(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					return 720;
				case 2:
					return 720;
				case 36:
					return 720;
				case 5:
				case 35:
					return 720;
				case 6:
				case 42:
					return 720;
				case 9:
					return 720;
				case 10:
					return 720;
				case 37:
					return 720;
				case 12:
					return 720;
				case 13:
					return 720;
				case 14:
					return 720;
				case 15:
					return 720;
				case 16:
					return 720;
				case 18:
					return 720;
				case 31:
					return 720;
				case 34:
					return 720;
				case 43:
					return 20;
				default:
					break;
			}
			return 3600;
		case 1:
			switch (iParam0)
			{
				case 43:
					return 20;
				default:
					break;
			}
			return 180;
	}
	return 180;
}

bool func_287(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_288(int iParam0, int iParam1)
{
}

bool func_289(int iParam0)
{
	switch (iParam0->f_224)
	{
		case 0:
			if (func_423(iParam0))
			{
				func_288(iParam0, 1);
				return true;
			}
			break;
		case 1:
			if (func_424(iParam0))
			{
				func_288(iParam0, 2);
				return true;
			}
			break;
		case 2:
			if (func_425(iParam0))
			{
				func_288(iParam0, 3);
				return true;
			}
			break;
		case 3:
			if (func_426(iParam0))
			{
				func_288(iParam0, 4);
				return true;
			}
			break;
		case 4:
			if (func_427(iParam0))
			{
				func_288(iParam0, 5);
				return true;
			}
			break;
		case 5:
			if (func_428(iParam0))
			{
				func_288(iParam0, 6);
				return true;
			}
			break;
		case 6:
			break;
	}
	iParam0->f_224++;
	iParam0->f_224 = (iParam0->f_224 % 7);
	return false;
}

bool func_290(var uParam0, int iParam1)
{
	return (uParam0->f_17 && iParam1) != 0;
}

bool func_291(var uParam0)
{
	return func_215(*uParam0, 2);
}

void func_292(var uParam0)
{
	if (!func_60(uParam0))
	{
	}
	if (func_291(uParam0))
	{
		uParam0->f_1 = (func_24() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_429(uParam0, 2);
	}
}

void func_293(var uParam0, int iParam1)
{
	uParam0->f_17 = (uParam0->f_17 || iParam1);
}

void func_294(var uParam0)
{
	if (!func_60(uParam0))
	{
	}
	if (!func_291(uParam0))
	{
		uParam0->f_2 = (func_24() - uParam0->f_1);
		func_430(uParam0, 2);
	}
}

bool func_295(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return false;
	}
	if (_0xf256a75210c5c0eb(iParam0, Global_36))
	{
		return true;
	}
	return false;
}

bool func_296(int iParam0)
{
	if (!func_60(&(iParam0->f_182.f_13)))
	{
		return true;
	}
	if (!func_47(&(iParam0->f_182.f_13), iParam0->f_182.f_16))
	{
		return true;
	}
	return false;
}

int func_297(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (!is_entity_dead(iParam0))
	{
		iVar0 = get_mount(iParam0);
		bVar1 = !is_entity_dead(iVar0);
		bVar2 = is_ped_on_mount(iParam0);
		bVar3 = false;
		if (!bVar2 || !bVar1)
		{
			if (!bVar2 || !get_ped_reset_flag(Global_35, 149))
			{
				if (!bVar2 || !get_ped_reset_flag(Global_35, 148))
				{
					if (!is_ped_ragdoll(iParam0))
					{
						set_player_control(player_id(), true, 0, false);
						if (*uParam1 > 0)
						{
							*uParam1 = 0;
						}
						return 1;
					}
				}
			}
		}
		switch (*uParam1)
		{
			case 0:
				if (bVar1)
				{
					set_player_control(player_id(), false, iParam4, false);
					*uParam1 = 1;
				}
				break;
			case 1:
				bVar3 = (bParam3 && (is_ped_running(iVar0) || is_ped_sprinting(iVar0)));
				if (bVar3 || (!bParam2 || func_431(iVar0)))
				{
					if (bVar3)
					{
						task_horse_action(iVar0, 9, 0, 0);
					}
					else
					{
						task_horse_action(iVar0, 2, 0, 0);
					}
					*uParam1 = 2;
				}
				break;
			case 2:
				if (get_ped_reset_flag(iParam0, 148))
				{
					*uParam1 = 3;
				}
				else if (!func_432(iVar0, 1041577989))
				{
					*uParam1 = 1;
				}
				break;
			case 3:
				if (bVar2 || !get_ped_reset_flag(iParam0, 148))
				{
					if (!is_ped_ragdoll(iParam0))
					{
						set_player_control(player_id(), true, 0, false);
						return 1;
					}
				}
				break;
		}
	}
	if (bParam5)
	{
		_display_hud_component(724769646);
	}
	return 0;
}

int func_298(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	bVar3 = is_ped_on_mount(iParam0);
	if (bVar3)
	{
		iVar2 = get_mount(iParam0);
		if (!does_entity_exist(iVar2) || is_entity_dead(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = is_ped_in_any_vehicle(iParam0, true);
		if (bVar4)
		{
			iVar1 = get_vehicle_ped_is_in(iParam0, true);
			if (!does_entity_exist(iVar1) || is_entity_dead(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (func_385(*uParam1, 128))
	{
		if (!func_432(iParam0, 1245594896))
		{
			clear_ped_tasks(iParam0, 1, 0);
			*uParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_385(*uParam1, 2))
	{
		if (bVar3)
		{
			if (!func_431(iVar2))
			{
				return 0;
			}
			if (!func_432(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { get_entity_coords(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_433(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_385(*uParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				clear_ped_tasks(iParam0, 1, 0);
				task_dismount_animal(iParam0, iParam4, 0, 0, 0, 0);
			}
			return 0;
		}
		else if ((func_187(iParam2, 128) && does_entity_exist(_get_last_mount(iParam0))) && does_entity_exist(_get_first_entity_ped_is_carrying(_get_last_mount(iParam0))))
		{
			task_pickup_carriable_entity(iParam0, _get_first_entity_ped_is_carrying(_get_last_mount(iParam0)));
			func_434(uParam1, 128);
			return 0;
		}
		else
		{
			*uParam1 = 0;
			return 1;
		}
	}
	if (func_385(*uParam1, 4))
	{
		if (is_ped_in_any_vehicle(iParam0, true))
		{
			return 0;
		}
		else
		{
			clear_ped_tasks_immediately(iParam0, false, true);
			*uParam1 = 0;
			return 1;
		}
	}
	if (func_385(*uParam1, 8))
	{
		if (bVar3)
		{
			if (!func_431(iVar2))
			{
				return 0;
			}
		}
		if ((!bVar3 && is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iParam0))) || (bVar3 && is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iVar2))))
		{
			*uParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (is_ped_a_player(iParam0) && is_player_control_on(get_player_index()))
	{
		if (!func_187(iParam2, 2) && _0xb16223cb7da965f0(get_player_index()))
		{
			_0xae637bb8ef017875(get_player_index(), 1);
		}
		if (!func_187(iParam2, 2048))
		{
			if (is_player_control_on(get_player_index()))
			{
				set_player_control(get_player_index(), false, iParam3, false);
				if (func_187(iParam2, 8192))
				{
					_display_hud_component(724769646);
				}
			}
		}
	}
	disable_control_action(0, -1879280170, false);
	if (bVar3)
	{
		if (is_entity_in_air(iVar2, 0))
		{
			return 0;
		}
		if (func_385(*uParam1, 2336))
		{
			if (!func_431(iVar2))
			{
			}
			if (func_435(iVar2, *uParam1))
			{
				func_436(uParam1, 32);
				func_436(uParam1, 256);
				func_436(uParam1, 2048);
				func_434(uParam1, 512);
				func_434(uParam1, 1024);
				func_434(uParam1, 4096);
			}
			else
			{
				return 0;
			}
		}
		if (func_385(*uParam1, 64))
		{
			disable_control_action(0, 1520437207, false);
			if (!func_431(iVar2))
			{
			}
			if (is_ped_walking(iVar2))
			{
				return 0;
			}
			else
			{
				func_436(uParam1, 64);
			}
		}
		if (func_187(iParam2, 16))
		{
			task_horse_action(iVar2, 2, 0, 0);
			*uParam1 = 0;
			return 1;
		}
		disable_control_action(0, 1520437207, false);
		if (((is_ped_sprinting(iVar2) || (is_ped_running(iVar2) && func_187(iParam2, 1024))) || func_187(iParam2, 8)) && !func_385(*uParam1, 5632))
		{
			task_horse_action(iVar2, 1, 0, 0);
			func_434(uParam1, 32);
		}
		else if ((is_ped_running(iVar2) && func_187(iParam2, 4096)) && !func_385(*uParam1, 5632))
		{
			task_horse_action(iVar2, 8, 0, 0);
			func_434(uParam1, 2048);
			func_434(uParam1, 4096);
		}
		else if (((get_ped_desired_move_blend_ratio(iVar2) <= 1.5f && get_ped_desired_move_blend_ratio(iVar2) >= 1.001f) && func_187(iParam2, 32)) && !func_385(*uParam1, 5632))
		{
			task_horse_action(iVar2, 3, 0, 0);
			func_434(uParam1, 256);
			func_434(uParam1, 1024);
		}
		else if (is_ped_walking(iVar2))
		{
			task_stand_still(iVar2, -1);
			func_434(uParam1, 64);
		}
		else if (!func_187(iParam2, 1))
		{
			if (!func_187(iParam2, 256))
			{
				_0xb832f1a686b9b810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_433(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_385(*uParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			task_dismount_animal(iParam0, iParam4, 0, 0, 0, 0);
			set_ped_desired_move_blend_ratio(iVar2, 0f);
			func_434(uParam1, 2);
		}
		else
		{
			task_stand_still(iParam0, 1000);
			func_434(uParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_187(iParam2, 1))
		{
			open_sequence_task(&iVar0);
			task_stand_still(0, 250);
			task_leave_any_vehicle(0, 0, 0);
			close_sequence_task(iVar0);
			task_perform_sequence(iParam0, iVar0);
			clear_sequence_task(&iVar0);
			bring_vehicle_to_halt(iVar1, fParam5, iParam6, false);
			func_434(uParam1, 4);
		}
		else
		{
			*uParam1 = 0;
			return 1;
		}
	}
	else if (!func_187(iParam2, 512))
	{
		task_stand_still(iParam0, 200);
		func_434(uParam1, 8);
	}
	return 0;
}

bool func_299()
{
	if (get_entity_speed(Global_35) < 7f)
	{
		return false;
	}
	if (is_ped_falling(Global_35))
	{
		return false;
	}
	if (is_ped_jumping(Global_35))
	{
		return false;
	}
	return true;
}

void func_300(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(&(uParam0->f_1), 2);
	}
	else
	{
		func_245(&(uParam0->f_1), 2);
	}
}

void func_301(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(&(uParam0->f_1), 8);
	}
	else
	{
		func_245(&(uParam0->f_1), 8);
	}
}

void func_302(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(&(uParam0->f_1), 1);
	}
	else
	{
		func_245(&(uParam0->f_1), 1);
	}
}

bool func_303()
{
	if (func_138(&(Local_274.f_37[6]), Global_36))
	{
		return true;
	}
	return false;
}

float func_304()
{
	if (&iLocal_15.f_9[0] < &iLocal_15.f_9[1])
	{
		return &(iLocal_15.f_9[0]);
	}
	return &(iLocal_15.f_9[1]);
}

int func_305(var uParam0)
{
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = 524288 | func_437(3, 0, 0);
	iVar5 = 1;
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (!does_entity_exist(&(iLocal_15[iVar1])))
		{
		}
		else
		{
			iVar0 = func_438(iLocal_15[iVar1], (*uParam0)[iVar1], 20f, &(uParam0->f_43), &iVar5, 4f, 3, 0, 0, iVar4, 0, 0, 2, 1, -1082130432, 0);
			if (func_439((*uParam0)[iVar1]))
			{
				if (uParam0->f_79 == -1)
				{
					uParam0->f_79 = iVar1;
				}
				iVar3 = (*uParam0)[iVar1]->f_1;
				switch (iVar3)
				{
					case 0:
						if (!func_440(uParam0->f_43[0], 0))
						{
							func_441(uParam0->f_43[0], 1, 1);
						}
						break;
					case 1:
						if (!func_440(uParam0->f_43[1], 0))
						{
							func_142(&(Local_274.f_195), &(iLocal_15[1]), 0, 20f);
							func_441(uParam0->f_43[1], 1, 1);
						}
						break;
				}
				switch (iVar3)
				{
					case 0:
					case 1:
						func_309(uParam0, 0, 1);
						break;
				}
			}
			if (iVar0 != -1)
			{
				iVar2 = iVar0;
				uParam0->f_78 = iVar2;
				switch (iVar2)
				{
					case 0:
						break;
					case 1:
						uParam0->f_82++;
						break;
				}
				uParam0->f_80 = 0;
			}
		}
		iVar1++;
	}
	return iVar2;
}

bool func_306(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_442(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_443(fParam0))
	{
		return false;
	}
	return true;
}

bool func_307(var uParam0, float fParam1)
{
	if (func_47(uParam0, fParam1))
	{
		func_196(uParam0);
		return true;
	}
	return false;
}

void func_308(var uParam0)
{
	sVar0[0] = func_444(8);
	sVar0[1] = func_444(10);
	if (func_246())
	{
		sVar3[0] = "";
		sVar3[1] = "BRA_V2_ILO_NEG";
	}
	else
	{
		sVar3[0] = "";
		sVar3[1] = "BRA_V1_ILO_NEG";
	}
	func_445(uParam0->f_43[0], &(sVar0[0]), &(sVar3[0]), -163964935, 0, 0, 0, 0, 0);
	func_445(uParam0->f_43[1], &(sVar0[1]), &(sVar3[1]), 648122183, 0, 0, 0, 0, 0);
	func_441(uParam0->f_43[0], 1, 1);
}

void func_309(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_446(uParam0, 0))
		{
			func_447(uParam0, 0, 1);
		}
		if (!func_446(uParam0, 1))
		{
			func_447(uParam0, 1, 1);
		}
	}
	else
	{
		if (bParam2 || func_446(uParam0, 0))
		{
			func_447(uParam0, 0, 0);
		}
		if (bParam2 || func_446(uParam0, 1))
		{
			func_447(uParam0, 1, 0);
		}
	}
}

void func_310(int iParam0, int iParam1)
{
	iParam0->f_5 = iParam1;
}

void func_311(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	func_448(iParam0, iParam1, *iParam2, sParam3, *iParam4);
	switch (iParam0->f_181)
	{
		case 0:
			*iParam2 = 0;
			StringCopy(sParam3, "GANG_INTERACT_STOP_RIGHT_THERE", 64);
			*iParam4 = 2;
			break;
		case 4:
			*iParam2 = 1;
			StringCopy(sParam3, "GANG_INTERACT_STOP_RIGHT_THERE", 64);
			*iParam4 = 1;
			break;
		default:
			*iParam2 = 1;
			StringCopy(sParam3, "GANG_INTERACT_STOP_RIGHT_THERE", 64);
			*iParam4 = 2;
			break;
	}
}

void func_312()
{
	vVar1 = { func_449(&Local_274, 0) };
	_set_ped_crouch_movement(&(iLocal_15[0]), false, 0, false);
	func_127(&iLocal_15, 0, 1);
	func_128(&iLocal_15, 0, 1);
	func_128(&iLocal_15, 1, 1);
	if (get_entity_speed(Global_35) >= 7f || func_137(&Local_274, 1))
	{
		force_ped_motion_state(&(iLocal_15[0]), -530524, false, 0, false);
	}
	_0x8acc0506743a8a5c(&(iLocal_15[0]), 166028666, 1, -1082130432);
	open_sequence_task(&iVar0);
	task_follow_nav_mesh_to_coord(0, vVar1, 2f, 20000, 4.5f, 2049, 40000f);
	task_go_to_coord_while_aiming_at_entity(0, vVar1, Global_35, 2f, 0, 1056964608, 1082130432, 1, 0, 0, -687903391, 20000, 0);
	task_aim_at_entity(0, Global_35, -1, 1, 1);
	func_203(&(iLocal_15[0]), &iVar0, 0, 0, 1, 1);
	vVar1 = { func_449(&Local_274, 1) };
	_set_ped_crouch_movement(&(iLocal_15[1]), false, 0, false);
	func_127(&iLocal_15, 1, 1);
	func_127(&iLocal_15, 1, 1);
	if (get_entity_speed(Global_35) >= 7f || func_137(&Local_274, 1))
	{
		force_ped_motion_state(&(iLocal_15[1]), -530524, false, 0, false);
	}
	_0x8acc0506743a8a5c(&(iLocal_15[1]), 166028666, 1, -1082130432);
	open_sequence_task(&iVar0);
	task_follow_nav_mesh_to_coord(0, vVar1, 2f, 20000, 4.5f, 2049, 40000f);
	task_go_to_coord_while_aiming_at_entity(0, vVar1, Global_35, 2f, 0, 1056964608, 1082130432, 1, 0, 0, -687903391, 20000, 0);
	task_aim_at_entity(0, Global_35, -1, 1, 1);
	func_203(&(iLocal_15[1]), &iVar0, 0, 0, 1, 1);
	func_285(&iLocal_15, 0, 831283580, 0);
	func_285(&iLocal_15, 1, 831283580, 0);
	Local_274.f_63 = func_450();
	if (Global_1935630->f_40 != 0)
	{
		Local_274.f_64 = 1;
	}
	func_40(Local_274.f_9[6], 0);
	func_139(&Local_274, 16384);
}

void func_313()
{
	iVar9 = 2;
	while (iVar9 <= 3)
	{
		func_127(&iLocal_15, iVar9, 1);
		func_128(&iLocal_15, iVar9, 1);
		vVar1 = { func_449(&Local_274, iVar9) };
		vVar5 = { func_451(&Local_274, iVar9) };
		open_sequence_task(&iVar0);
		task_go_to_coord_while_aiming_at_entity(0, vVar1, Global_35, 1.5f, 0, 8f, 0f, 1, 1, 0, -687903391, 20000, 0);
		task_go_to_coord_while_aiming_at_entity(0, vVar5, Global_35, 1f, 0, 5f, 0f, 1, 1, 0, -687903391, 20000, 0);
		task_go_to_coord_while_aiming_at_entity(0, vVar5, Global_35, 0.101f, 0, 2f, 0f, 1, 0, 0, -687903391, 20000, 0);
		if (iVar9 == 2)
		{
			task_aim_gun_at_entity(0, Global_35, -1, 1, 1);
		}
		func_203(&(iLocal_15[iVar9]), &iVar0, 0, 0, 1, 1);
		iVar9++;
	}
}

void func_314()
{
	iVar0 = 2;
	while (iVar0 <= 3)
	{
		if (func_61(&(iLocal_15[iVar0]), 0, 1))
		{
			if (!does_blip_exist(&(iLocal_15.f_22[iVar0])))
			{
				if (func_225(&(iLocal_15[iVar0]), 80f, 30f, &(iLocal_15.f_9[iVar0]), -1082130432))
				{
					func_285(&iLocal_15, iVar0, 831283580, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_315(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	func_448(iParam0, iParam1, *iParam2, sParam3, *iParam4);
	switch (iParam0->f_181)
	{
		case 0:
			*iParam2 = 1;
			StringCopy(sParam3, "GANG_STOP_OR_WE_SHOOT", 64);
			*iParam4 = 1;
			break;
		case 4:
			*iParam2 = 1;
			StringCopy(sParam3, "GANG_STOP_OR_WE_SHOOT", 64);
			*iParam4 = 1;
			break;
		default:
			*iParam2 = 0;
			StringCopy(sParam3, "GANG_STOP_OR_ILL_SHOOT", 64);
			*iParam4 = 2;
			break;
	}
}

bool func_316()
{
	func_452(&(Local_274.f_195), 40f);
	if (func_30(&iLocal_15, 33554432))
	{
		if (func_453(&iLocal_15))
		{
			func_139(&Local_274, 4096);
			return false;
		}
	}
	if (Local_274.f_7 <= 6)
	{
		if (func_454())
		{
			func_139(&Local_274, 4096);
			return false;
		}
		if (Local_274.f_7 < 6)
		{
			func_314();
		}
	}
	else
	{
		if (func_455())
		{
			func_139(&Local_274, 4096);
			return false;
		}
		func_168(&(Local_274.f_75));
	}
	func_456(&iLocal_15);
	switch (Local_274.f_7)
	{
		case 0:
			func_457();
			func_458(&Local_274, 1);
			break;
		case 1:
			if (!func_459(&Local_274, 0))
			{
				func_460(&iLocal_15, &Local_274, &iVar8, &cVar0, &iVar9);
				func_284(&Local_274, &(iLocal_15[iVar8]), Global_35, &cVar0, -1073741824, 1, 1744022339, iVar9);
				func_28(&iLocal_15, 0);
				func_458(&Local_274, 2);
			}
			break;
		case 2:
			if (func_461(&iLocal_15, 1, 1) || !_0x621d1b289caf5978(player_id()))
			{
				if (!func_459(&Local_274, 0))
				{
					func_462(&iLocal_15, &Local_274, &iVar8, &cVar0, &iVar9);
					func_284(&Local_274, &(iLocal_15[iVar8]), Global_35, &cVar0, -1073741824, 1, 1744022339, iVar9);
					func_142(&(Local_274.f_195), &(iLocal_15[1]), 1, 20f);
					_0xbed386157f65942c(player_id(), 1);
					_0x45ef176b532ca851(player_id(), func_463());
					func_40(Local_274.f_9[7], 0);
					func_458(&Local_274, 3);
				}
			}
			else
			{
				func_464();
				func_458(&Local_274, 6);
			}
			break;
		case 3:
			if (func_461(&iLocal_15, 1, 1) || !_0x621d1b289caf5978(player_id()))
			{
				fVar10 = 8.5f;
				if (func_465(fVar10) && !func_459(&Local_274, 0))
				{
					func_466(&iLocal_15, &Local_274, &iVar8, &cVar0, &iVar9);
					func_284(&Local_274, &(iLocal_15[iVar8]), Global_35, &cVar0, -1073741824, 1, 1744022339, iVar9);
					func_193(Local_274.f_9[7]);
					func_458(&Local_274, 4);
				}
			}
			else
			{
				func_464();
				func_458(&Local_274, 6);
			}
			break;
		case 4:
			if (func_461(&iLocal_15, 1, 1) || !_0x621d1b289caf5978(player_id()))
			{
				fVar10 = 7.5f;
				if (func_465(fVar10) && !func_459(&Local_274, 0))
				{
					func_142(&(Local_274.f_195), &(iLocal_15[1]), 0, 20f);
					func_467(&iLocal_15, &Local_274, &iVar8, &cVar0, &iVar9);
					func_284(&Local_274, &(iLocal_15[iVar8]), Global_35, &cVar0, -1073741824, 1, 1744022339, iVar9);
					func_139(&Local_274, 64);
					func_458(&Local_274, 5);
				}
			}
			else
			{
				func_464();
				func_458(&Local_274, 6);
			}
			break;
		case 5:
			func_40(Local_274.f_9[4], 0);
			if (func_47(Local_274.f_9[4], 0.4f))
			{
				func_139(&Local_274, 4096);
			}
			break;
		case 6:
			func_468(&(Local_274.f_112.f_43), 1, 1);
			if (func_69(Local_274.f_197))
			{
				Local_274.f_197 = { Global_36 };
				func_469(&(Local_274.f_37[6]));
				Local_274.f_197 = { Global_36 };
				Local_274.f_37[6] = _create_volume_cylinder_with_custom_name(Local_274.f_197, 0f, 0f, 0f, 3f, 3f, 5f, "volRobArea");
			}
			if ((!func_461(&iLocal_15, 0, 0) && !func_459(&Local_274, 0)) && func_306(0f, 1, Global_35, 1))
			{
				func_458(&Local_274, 7);
			}
			break;
		case 7:
			if (func_470())
			{
				if (func_471(&(iLocal_15[1]), &(Local_274.f_75), 0.2f, 1, 0, 2, 0, 0, 0, 5000, 1, 0))
				{
					_0x4fd80c3dd84b817b(&(iLocal_15[1]));
					_0x58f7db5bd8fa2288(&(iLocal_15[1]));
					func_142(&(Local_274.f_195), &(iLocal_15[1]), 0, 20f);
					if (Local_274.f_75.f_4)
					{
						func_28(&iLocal_15, 1);
						func_458(&Local_274, 8);
					}
					else
					{
						clear_ped_tasks(&(iLocal_15[1]), 1, 0);
						task_react(&(iLocal_15[1]), Global_35, Global_36, "Default_Shocked", 0.6f, 0, 4);
						task_react(&(iLocal_15[0]), Global_35, Global_36, "Default_Shocked", 0.3f, 0, 4);
						func_458(&Local_274, 5);
					}
				}
			}
			break;
		case 8:
			if (func_306(0f, 1, &(iLocal_15[1]), 1))
			{
				func_472();
				func_458(&Local_274, 9);
			}
			break;
		case 9:
			if (func_473())
			{
				func_458(&Local_274, 10);
			}
			break;
		case 10:
			break;
		case 11:
			return true;
	}
	return false;
}

int func_317()
{
	return Global_1310750->f_16037;
}

bool func_318(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_319(int iParam0, int iParam1)
{
	if (!func_318(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_320(int iParam0)
{
	if (!func_318(iParam0))
	{
		return false;
	}
	if (func_474(64) && func_475(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_321(int iParam0)
{
	if (!func_318(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_322(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_318(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_476(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_323(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

bool func_324(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_325(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

int func_326(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		return _0xba2a089e60ed1163(iParam1, iParam0, 2084597891, 0, 0);
	}
	if (!decor_exist_on(iParam0, "loot_money"))
	{
		return 0;
	}
	*iParam1 = decor_get_int(iParam0, "loot_money");
	return 1;
}

bool func_327(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_477(iParam0);
		return func_478(iParam0, 2084597891, iParam1, iVar0);
	}
	return decor_set_int(iParam0, "loot_money", iParam1);
}

void func_328(int iParam0)
{
}

void func_329(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_330()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_331()
{
	return Global_1572887->f_12;
}

void func_332(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		remove_ped_defensive_area(iParam0, true);
		remove_ped_defensive_area(iParam0, false);
	}
}

bool func_333(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_334(int iParam0)
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

void func_335(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_334(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_479(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_480(iVar0);
	*uParam0 = 0;
}

bool func_336(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x59fa676177dbe4c9(iParam0) == 4;
}

void func_337(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_338(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_331() != -1)
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

bool func_339(int iParam0)
{
	if (!func_216(iParam0, 3))
	{
		return true;
	}
	if (is_ped_in_combat(iParam0, 0))
	{
		return true;
	}
	if (_get_lassoed_entity(Global_35) == iParam0)
	{
		return true;
	}
	if (_0xd0b7aeb56229d317(iParam0) == Global_35)
	{
		return true;
	}
	if (_0xd0b7aeb56229d317(Global_35) == iParam0)
	{
		return true;
	}
	return false;
}

void func_340(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_481(uParam0);
		func_482(iParam1, uParam2);
	}
	func_345(*uParam0, 1, bParam4);
}

bool func_341(int iParam0, int iParam1)
{
	if (is_entity_visible_to_script(iParam0[iParam1]) || is_entity_visible(iParam0[iParam1]))
	{
		return true;
	}
	if (!func_135(iParam0, iParam1, 4))
	{
		return true;
	}
	return false;
}

bool func_342(int iParam0, int iParam1)
{
	if (is_entity_visible_to_script(&(iParam0->f_40[iParam1])) || is_entity_visible(&(iParam0->f_40[iParam1])))
	{
		return true;
	}
	if (!func_136(iParam0, iParam1, 4))
	{
		return true;
	}
	return false;
}

void func_343()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_61(&(iLocal_15[iVar0]), 0, 1))
		{
			if (!does_blip_exist(&(iLocal_15.f_22[iVar0])))
			{
				if (func_483(&(iLocal_15[iVar0]), 1))
				{
					func_285(&iLocal_15, iVar0, 831283580, 0);
				}
			}
		}
		iVar0++;
	}
}

bool func_344(int iParam0, int iParam1)
{
	fVar0 = func_152(iParam0[iParam1], Global_36, 1);
	fVar1 = get_distance_between_coords(func_484(iParam0[iParam1], 1065353216), func_484(Global_35, 1065353216), true);
	if (fVar0 < 10f)
	{
		return false;
	}
	if (is_entity_occluded(iParam0[iParam1]))
	{
		return true;
	}
	if (is_ped_in_cover(iParam0[iParam1], 1, 0))
	{
		return true;
	}
	if (fVar1 < (fVar0 - 2f))
	{
		return false;
	}
	return true;
}

void func_345(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

bool func_346(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_485(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

int func_347(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = 2;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
		case 36:
			iVar0 = 2;
			break;
		case 3:
			iVar0 = 1;
			break;
		case 4:
			iVar0 = 2;
			break;
		case 38:
			iVar0 = 2;
			break;
		case 5:
			iVar0 = 2;
			break;
		case 35:
			iVar0 = 2;
			break;
		case 6:
			iVar0 = 2;
			break;
		case 42:
			iVar0 = 2;
			break;
		case 7:
			iVar0 = 2;
			break;
		case 41:
			iVar0 = 2;
			break;
		case 8:
			iVar0 = 2;
			break;
		case 40:
			iVar0 = 2;
			break;
		case 9:
			iVar0 = 1;
			break;
		case 10:
			iVar0 = 2;
			break;
		case 37:
			iVar0 = 2;
			break;
		case 11:
			iVar0 = 2;
			break;
		case 12:
			iVar0 = 1;
			break;
		case 13:
			iVar0 = 1;
			break;
		case 14:
			iVar0 = 1;
			break;
		case 15:
			iVar0 = 1;
			break;
		case 16:
			iVar0 = 1;
			break;
		case 17:
			iVar0 = 2;
			break;
		case 39:
			iVar0 = 2;
			break;
		case 18:
			iVar0 = 2;
			break;
		case 19:
			iVar0 = 1;
			break;
		case 20:
			iVar0 = 1;
			break;
		case 21:
			iVar0 = 1;
			break;
		case 22:
			iVar0 = 1;
			break;
		case 23:
			iVar0 = 2;
			break;
		case 24:
			iVar0 = 2;
			break;
		case 25:
			iVar0 = 1;
			break;
		case 26:
			iVar0 = 1;
			break;
		case 27:
			iVar0 = 1;
			break;
		case 28:
			iVar0 = 1;
			break;
		case 29:
			iVar0 = 2;
			break;
		case 30:
			iVar0 = 2;
			break;
		case 31:
			iVar0 = 1;
			break;
		case 32:
			iVar0 = 1;
			break;
		case 33:
			iVar0 = 2;
			break;
		case 34:
			iVar0 = 2;
			break;
		case 43:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_348(int iParam0)
{
	iVar0 = -1;
	if (iParam0 >= 0)
	{
		if (iParam0 <= 10)
		{
			iVar0 = 0;
		}
		else if (iParam0 <= 17)
		{
			iVar0 = 2;
		}
		else if (iParam0 <= 23)
		{
			iVar0 = 1;
		}
		else if (iParam0 <= 28)
		{
			iVar0 = 3;
		}
		else if (iParam0 <= 30)
		{
			iVar0 = 4;
		}
		else if (iParam0 <= 33)
		{
			iVar0 = 5;
		}
	}
	return iVar0;
}

void func_349(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 6)
	{
		return;
	}
	func_351(func_486(iParam0) + 1, iParam0);
}

int func_350()
{
	return Global_1393447->f_51;
}

void func_351(int iParam0, int iParam1)
{
	Global_40.f_9632.f_184[iParam1] = iParam0;
}

void func_352()
{
	func_353(Global_40.f_9632.f_196 + 1);
}

void func_353(int iParam0)
{
	Global_40.f_9632.f_196 = iParam0;
}

void func_354(int iParam0)
{
	func_487(iParam0, 0);
	Global_40.f_9632[iParam0] = &Global_40.f_9632[iParam0] + 1;
	if (&Global_40.f_9632[iParam0] > Global_40.f_9632[iParam0]->f_1)
	{
		Global_40.f_9632[iParam0]->f_1++;
	}
	func_163(0, 13);
}

void func_355(int iParam0)
{
	iVar1 = func_488(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_489(iVar1);
		func_487(iVar1, bVar0);
	}
	iVar1 = func_490(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_489(iVar1);
		func_487(iVar1, bVar0);
	}
	iVar1 = func_491(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_489(iVar1);
		func_487(iVar1, bVar0);
	}
}

void func_356(int iParam0, int iParam1, bool bParam2)
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

bool func_357(int iParam0)
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

void func_358(int iParam0, int iParam1)
{
	if (!func_318(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

bool func_359(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_360(int iParam0)
{
	if (!func_318(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_361(int iParam0)
{
	if (func_318(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_362(int iParam0)
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

void func_363(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_364(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

void func_364(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_492(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_331() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

void func_365(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_24() - fParam1);
	func_430(uParam0, 1);
	func_429(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_366(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_367(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_367(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_368(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_494(iParam0, 32);
	func_495();
}

void func_369(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_370(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_372(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_372(iParam0);
	}
}

int func_370(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (*Global_1900383)[iParam0]->f_3;
}

bool func_371(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (*Global_1900383)[iParam0]->f_2;
}

void func_372(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_2 = 0;
	(*Global_1900383)[iParam0]->f_3 = 0;
}

bool func_373(int iParam0, int iParam1)
{
	if (is_entity_dead(iParam1))
	{
		return false;
	}
	if (_is_ped_hogtied(iParam1))
	{
		return false;
	}
	if (!is_entity_visible(iParam1))
	{
		return true;
	}
	if (is_ped_in_combat(iParam1, Global_35))
	{
		if (func_225(iParam1, 200f, (30f * 3f), -1082130432, -1082130432))
		{
			return false;
		}
	}
	else if (func_225(iParam1, 200f, 30f, -1082130432, -1082130432))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		if (does_entity_exist(_get_rider_of_mount(iParam1, true)))
		{
			return false;
		}
	}
	return true;
}

bool func_374(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_in_combat(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_375(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (iParam0 == iParam1[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_376(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_251(func_250());
	if (func_187(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_187(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_187(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_187(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_187(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_187(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_187(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_187(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_187(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_187(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_187(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_187(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_187(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_187(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_187(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_187(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_187(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_377(int iParam0, float fParam1)
{
	if (is_entity_on_screen(iParam0) && func_496(Global_35, iParam0, 0, fParam1, 0))
	{
		return true;
	}
	return false;
}

bool func_378(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return true;
	}
	if (func_233(iParam1, 120f, 30f))
	{
		return false;
	}
	return true;
}

float func_379(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_390(Global_35, iParam0, bParam1, bParam2);
}

Vector3 func_380(vector3 vParam0, vector3 vParam3, float fParam6)
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

Vector3 func_381(vector3 vParam0, vector3 vParam3, float fParam6)
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

void func_382(vector3 vParam0, float fParam3, int iParam4)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_380(vVar0, vVar3, 0f) };
	vVar9 = { func_381(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		set_roads_back_to_original(vVar6, vVar9, 0, 1);
	}
	else
	{
		_0x6c3f12eceb6d2e2a(vVar6, vVar9, iParam4, 1);
	}
}

void func_383(int iParam0)
{
	if (_does_volume_exist(iParam0->f_238))
	{
		_0xa1cfb35069d23c23(iParam0->f_238);
		_0x74c2b3dc0b294102(iParam0->f_238);
	}
}

bool func_384(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_385(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_386(int iParam0)
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

int func_387(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

float func_388(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_389(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_497((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

float func_390(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_391(int iParam0, int iParam1)
{
	if (func_137(iParam1, 1))
	{
		iParam1->f_37[6] = _create_volume_cylinder_with_custom_name(-1737.212f, 58.81725f, 158.8715f, 0f, 0f, 18.34016f, 8f, 8f, 5f, "volBridgeRobArea");
		iParam1->f_37[2] = _create_volume_box_with_custom_name(-1743.692f, 69.342f, 159.326f, 0f, 0f, 33.70486f, 4.208f, 25f, 9.654927f, "volTrigger");
		iParam1->f_37[3] = _create_volume_box_with_custom_name(-1738.478f, 61.426f, 159.149f, 0f, 0f, 33.70486f, 4.264f, 25f, 9.370013f, "volTriggerSlow");
		iParam1->f_37[0] = _create_volume_aggregate_with_custom_name("volKill");
		_0x39816f6f94f385ad(&(iParam1->f_37[0]), -1907.113f, -51.53559f, 212.4884f, 0f, 0f, -83.43656f, 220.5375f, 335.8115f, 240.5904f);
		_0x39816f6f94f385ad(&(iParam1->f_37[0]), -1581.194f, -85.49786f, 128.7063f, 0f, 0f, -93.16156f, 303.745f, 341.2541f, 107.3552f);
		_0x39816f6f94f385ad(&(iParam1->f_37[0]), -1673.457f, -109.6284f, 128.7063f, 0f, 0f, 173.1701f, 303.745f, 341.2541f, 107.3552f);
		iParam0->f_182[0] = _create_volume_box_with_custom_name(-1745.833f, 74.472f, 159.339f, 0f, 0f, 32.84999f, 7.022682f, 10.237f, 10f, "volSlow");
		iParam0->f_182[1] = _create_volume_box_with_custom_name(-1743.226f, 67.917f, 155.116f, 0f, 0f, 32.84999f, 7.022682f, 10.237f, 10f, "volSlower");
		iParam0->f_182[2] = _create_volume_box_with_custom_name(-1738.758f, 60.999f, 155.116f, 0f, 0f, 32.84999f, 12.91665f, 8.565f, 9.370356f, "volSlowest");
		iParam1->f_37[4] = _create_volume_box_with_custom_name(-1748.319f, 76.6726f, 155.1157f, 0f, 0f, 33.59163f, 5.17899f, 24.2928f, 10f, "volBridgeFront");
		iParam1->f_37[5] = _create_volume_box_with_custom_name(-1731.654f, 37.99594f, 155.1157f, 0f, 0f, 19.89062f, 5.17899f, 24.2928f, 10f, "volBridgeBack");
		iParam1->f_37[7] = _create_volume_aggregate_with_custom_name("volGriefArea");
		_0x39816f6f94f385ad(&(iParam1->f_37[7]), -1762.107f, 52.76211f, 157.4706f, 0f, 0f, 16f, 35.9721f, 28.83903f, 52.59315f);
		_0x39816f6f94f385ad(&(iParam1->f_37[7]), -1753.436f, 31.77595f, 157.4706f, 0f, 0f, 16f, 35.9721f, 19.78889f, 38.47161f);
		_0x39816f6f94f385ad(&(iParam1->f_37[7]), -1731.675f, 45.06287f, 152.0251f, 0f, 0f, 16f, 68.26999f, 19.78889f, 39.99775f);
		_0x39816f6f94f385ad(&(iParam1->f_37[7]), -1742.678f, 79.87193f, 147.4783f, 0f, 0f, 16f, 35.9721f, 33.7631f, 13.59598f);
		_0x39816f6f94f385ad(&(iParam1->f_37[7]), -1710.665f, 64.04034f, 150.1661f, 0f, 0f, 16f, 35.9721f, 19.78889f, 45.35422f);
		_0x39816f6f94f385ad(&(iParam1->f_37[7]), -1766.693f, 66.48969f, 161.7077f, 0f, 0f, 35f, 35.9721f, 15.2716f, 21.8018f);
	}
	else
	{
		iParam1->f_37[6] = _create_volume_cylinder_with_custom_name(-1735.447f, 56.41874f, 158.8715f, 0f, 0f, 0f, 8f, 8f, 5f, "volBridgeRobArea");
		iParam1->f_37[2] = _create_volume_box_with_custom_name(-1732.65f, 40.79314f, 161.9901f, -5f, 0f, 19.70485f, 4.140419f, 25f, 13f, "volTrigger");
		iParam1->f_37[3] = _create_volume_box_with_custom_name(-1733.915f, 44.32264f, 161.6615f, -5f, 0f, 19.70485f, 4.418937f, 11.86304f, 13f, "volTriggerSlow");
		iParam1->f_37[0] = _create_volume_aggregate_with_custom_name("volKill");
		_0x39816f6f94f385ad(&(iParam1->f_37[0]), -1874.758f, -16.34735f, 188.0956f, 0f, 0f, -34.35329f, 178.4207f, 242.0585f, 305.9797f);
		_0x39816f6f94f385ad(&(iParam1->f_37[0]), -1623.138f, 191.5055f, 128.7063f, 0f, 0f, -85.59352f, 296.4414f, 231.8987f, 107.3552f);
		_0x39816f6f94f385ad(&(iParam1->f_37[0]), -1716.568f, 72.54486f, 188.0956f, 0f, 0f, -70.353f, 62.75396f, 46.50194f, 112.4214f);
		_0x39816f6f94f385ad(&(iParam1->f_37[0]), -1765.099f, 55.21907f, 188.0956f, 0f, 0f, -70.353f, 62.75396f, 46.50194f, 112.4214f);
		iParam0->f_182[0] = _create_volume_box_with_custom_name(-1731.054f, 35.283f, 158.334f, 0f, 0f, -160.487f, 7.022682f, 6f, 10f, "volSlow");
		iParam0->f_182[1] = _create_volume_box_with_custom_name(-1732.597f, 40.377f, 158.545f, 0f, 0f, -160.5822f, 7.022682f, 6f, 10f, "volSlower");
		iParam0->f_182[2] = _create_volume_box_with_custom_name(-1735.728f, 49.261f, 158.545f, 0f, 0f, -160.5822f, 12.91665f, 13.565f, 9.370356f, "volSlowest");
		iParam1->f_37[4] = _create_volume_box_with_custom_name(-1731.654f, 37.99594f, 159.2157f, 0f, 0f, 19.89062f, 5.17899f, 24.2928f, 10f, "volBridgeFront");
		iParam1->f_37[5] = _create_volume_box_with_custom_name(-1748.319f, 76.6726f, 155.1157f, 0f, 0f, 33.59163f, 5.17899f, 24.2928f, 10f, "volBridgeBack");
		iParam1->f_37[7] = _create_volume_aggregate_with_custom_name("volGriefArea");
		_0x39816f6f94f385ad(&(iParam1->f_37[7]), -1761.187f, 49.55367f, 157.4706f, 0f, 0f, 16f, 35.9721f, 19.78889f, 52.59315f);
		_0x39816f6f94f385ad(&(iParam1->f_37[7]), -1753.436f, 31.77595f, 157.4706f, 0f, 0f, 16f, 35.9721f, 19.78889f, 38.47161f);
		_0x39816f6f94f385ad(&(iParam1->f_37[7]), -1739.2f, 71.30732f, 152.0251f, 0f, 0f, 16f, 68.26999f, 19.78889f, 39.99775f);
		_0x39816f6f94f385ad(&(iParam1->f_37[7]), -1730.752f, 38.28046f, 147.4783f, 0f, 0f, 16f, 35.9721f, 19.78889f, 13.59598f);
		_0x39816f6f94f385ad(&(iParam1->f_37[7]), -1710.665f, 64.04034f, 150.1661f, 0f, 0f, 16f, 35.9721f, 19.78889f, 45.35422f);
	}
}

void func_392(int iParam0, int iParam1)
{
	if (func_137(iParam1, 1))
	{
		iParam1->f_37[6] = _create_volume_aggregate_with_custom_name("volBridgeRobArea");
		_0x39816f6f94f385ad(&(iParam1->f_37[6]), 838.1658f, -697.9883f, 69.4267f, 0f, 0f, -15.32145f, 8.882322f, 23.19692f, 15f);
		_0x39816f6f94f385ad(&(iParam1->f_37[6]), 836.9966f, -698.0906f, 69.4267f, 0f, 0f, -20.32144f, 8.882322f, 23.10287f, 15f);
		iParam1->f_37[2] = _create_volume_box_with_custom_name(839.541f, -690.551f, 65f, 0f, 0f, 169.5818f, 32.18207f, 25f, 30f, "volTrigger");
		iParam1->f_37[3] = _create_volume_box_with_custom_name(837.3818f, -702.2953f, 65f, 0f, 0f, 169.5818f, 32.18207f, 25f, 30f, "volTriggerSlow");
		iParam1->f_37[0] = _create_volume_aggregate_with_custom_name("volKill");
		_0x39816f6f94f385ad(&(iParam1->f_37[0]), 653.8997f, -754.6222f, 77.2983f, 0f, 0f, -100.4366f, 220.5375f, 335.8115f, 102.3968f);
		_0x39816f6f94f385ad(&(iParam1->f_37[0]), 950.4058f, -881.6387f, 64.1602f, 0f, 0f, -112.1616f, 303.745f, 341.2541f, 107.3552f);
		iParam0->f_182[0] = _create_volume_box_with_custom_name(842.281f, -678.498f, 62f, 0f, 0f, -10.08309f, 48.55145f, 32.70766f, 30f, "volSlow");
		iParam0->f_182[1] = _create_volume_box_with_custom_name(837.324f, -702.5f, 68f, 0f, 0f, -10.08309f, 44.21958f, 30f, 30f, "volSlower");
		iParam0->f_182[2] = _create_volume_box_with_custom_name(832.5411f, -720.9957f, 71f, 0f, 0f, -14.08309f, 40f, 18f, 30f, "volSlowest");
		iParam1->f_37[4] = _create_volume_box_with_custom_name(-1748.319f, 76.6726f, 155.1157f, 0f, 0f, 33.59163f, 5.17899f, 24.2928f, 10f, "volBridgeFront");
		iParam1->f_37[5] = _create_volume_box_with_custom_name(-1731.654f, 37.99594f, 155.1157f, 0f, 0f, 19.89062f, 5.17899f, 24.2928f, 10f, "volBridgeBack");
		iParam1->f_37[7] = _create_volume_aggregate_with_custom_name("volGriefArea");
		_0x39816f6f94f385ad(&(iParam1->f_37[7]), 817.3767f, -692.2924f, 69.4267f, 0f, 0f, -15.32145f, 32.91606f, 56.89853f, 28.48458f);
		_0x39816f6f94f385ad(&(iParam1->f_37[7]), 859.656f, -703.876f, 69.4267f, 0f, 0f, -15.32145f, 32.91606f, 56.89853f, 28.48458f);
		_0x39816f6f94f385ad(&(iParam1->f_37[7]), 830.3483f, -726.0137f, 69.4267f, 0f, 0f, -15.32145f, 76.61453f, 34.77027f, 28.48458f);
		_0x39816f6f94f385ad(&(iParam1->f_37[7]), 848.6749f, -659.1212f, 69.4267f, 0f, 0f, -15.32145f, 76.61453f, 34.77027f, 28.48458f);
	}
	else
	{
		iParam1->f_37[6] = _create_volume_aggregate_with_custom_name("volBridgeRobArea");
		_0x39816f6f94f385ad(&(iParam1->f_37[6]), 845.8454f, -660.186f, 69.4267f, 0f, 0f, -2.32145f, 8.882322f, 23.19692f, 15f);
		_0x39816f6f94f385ad(&(iParam1->f_37[6]), 845.0909f, -667.5868f, 69.4267f, 0f, 0f, -9.32144f, 8.882322f, 9.10287f, 15f);
		iParam1->f_37[2] = _create_volume_box_with_custom_name(845.0783f, -666.7124f, 65f, 0f, 0f, 173.5818f, 21.59675f, 25f, 30f, "volTrigger");
		iParam1->f_37[3] = _create_volume_box_with_custom_name(846.3382f, -655.5139f, 65f, 0f, 0f, 173.5818f, 21.59675f, 25f, 30f, "volTriggerSlow");
		iParam1->f_37[0] = _create_volume_aggregate_with_custom_name("volKill");
		_0x39816f6f94f385ad(&(iParam1->f_37[0]), 732.3145f, -570.2667f, 41.81028f, 0f, 0f, -100.4825f, 178.4207f, 249.7477f, 119.4785f);
		_0x39816f6f94f385ad(&(iParam1->f_37[0]), 995.8594f, -566.3121f, 68.67828f, 0f, 0f, -0.406f, 296.4414f, 231.8987f, 107.3552f);
		iParam0->f_182[0] = _create_volume_box_with_custom_name(840.8793f, -678.9103f, 69.31625f, 0f, 0f, -10.08309f, 48.55145f, 32.70766f, 30f, "volSlow");
		iParam0->f_182[1] = _create_volume_box_with_custom_name(843.8898f, -658.1097f, 70.10764f, 0f, 0f, -10.08309f, 44.21958f, 30f, 30f, "volSlower");
		iParam0->f_182[2] = _create_volume_box_with_custom_name(847.0398f, -643.6722f, 73.08923f, 0f, 0f, -6.083089f, 40f, 18f, 45.31071f, "volSlowest");
		iParam1->f_37[4] = _create_volume_box_with_custom_name(-1731.654f, 37.99594f, 159.2157f, 0f, 0f, 19.89062f, 5.17899f, 24.2928f, 10f, "volBridgeFront");
		iParam1->f_37[5] = _create_volume_box_with_custom_name(-1748.319f, 76.6726f, 155.1157f, 0f, 0f, 33.59163f, 5.17899f, 24.2928f, 10f, "volBridgeBack");
		iParam1->f_37[7] = _create_volume_aggregate_with_custom_name("volGriefArea");
		_0x39816f6f94f385ad(&(iParam1->f_37[7]), 821.9105f, -667.5668f, 69.4267f, 0f, 0f, -9.715546f, 32.91606f, 56.89853f, 28.48458f);
		_0x39816f6f94f385ad(&(iParam1->f_37[7]), 866.4661f, -675.2966f, 69.4267f, 0f, 0f, -1.715546f, 32.91606f, 56.89853f, 28.48458f);
		_0x39816f6f94f385ad(&(iParam1->f_37[7]), 840.722f, -696.6516f, 69.4267f, 0f, 0f, -6.715547f, 76.61453f, 34.77027f, 28.48458f);
		_0x39816f6f94f385ad(&(iParam1->f_37[7]), 851.9071f, -631.4554f, 69.4267f, 0f, 0f, -2.715547f, 76.61453f, 34.77027f, 28.48458f);
	}
}

void func_393(var uParam0, vector3 vParam1, float fParam4)
{
	*uParam0 = { vParam1 };
	uParam0->f_3 = fParam4;
}

void func_394(var uParam0, vector3 vParam1, int iParam4)
{
	if (func_56(iParam4))
	{
		fVar0 = 120f;
	}
	else
	{
		fVar0 = 180f;
	}
	*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, 0f, 0f, 0f, fVar0, fVar0, 40f, "volAmbush");
}

int func_395(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_498(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_396(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 9:
		case 10:
		case 11:
		case 16:
		case 37:
			return false;
	}
	return true;
}

int func_397(int iParam0)
{
	switch (iParam0->f_151)
	{
		case 3:
		case 4:
		case 6:
			return 6;
		case 0:
		case 1:
		case 2:
		case 5:
		case 7:
		case 8:
		case 9:
		case 10:
			return 6;
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
			return 6;
		case 18:
		case 19:
		case 20:
			return 4;
		case 21:
		case 22:
		case 23:
			return 6;
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
			return 6;
		case 29:
		case 30:
			return 6;
		case 31:
		case 32:
		case 33:
			return 6;
		case 38:
			return 6;
		case 34:
		case 35:
		case 36:
		case 37:
		case 39:
		case 40:
		case 41:
			return 6;
		case 43:
			return 6;
		default:
			break;
	}
	return 4;
}

void func_398(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_380(vVar0, vVar3, 0f) };
	vVar9 = { func_381(vVar0, vVar3, 0f) };
	if (iParam4 == 1)
	{
		set_roads_back_to_original(vVar6, vVar9, iParam5, 1);
	}
	else if (iParam6 == 5)
	{
		set_roads_in_area(vVar6, vVar9, iParam4, 1, iParam5);
	}
	else
	{
		_0xafe2ae66f6251c66(vVar6, vVar9, iParam6, 1);
	}
}

void func_399(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

int func_400(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 2:
			return 4;
		case 3:
			return 5;
		case 4:
			return 4;
		case 5:
			return 4;
		case 1:
			return 4;
		case 10:
			return 5;
		default:
			break;
	}
	return 1;
}

bool func_401()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

char* func_402(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_re@test";
		default:
			break;
	}
	return "";
}

struct<4> func_403(int iParam0, int iParam1)
{
	return func_499(iParam0, iParam1);
}

bool func_404(int iParam0)
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

void func_405(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_500(iParam0, iParam1))
		{
			if (func_501(iParam0, iParam1))
			{
				if (func_502(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_503(iParam0);
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

void func_406(int iParam0, int iParam1, bool bParam2)
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

void func_407(int iParam0, bool bParam1)
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

void func_408(int iParam0, int iParam1)
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

int func_409(int iParam0, int iParam1)
{
	if (iParam0->f_62)
	{
		switch (iParam1)
		{
			case 0:
				return 4;
			case 1:
				return 5;
			case 2:
				return 4;
			case 3:
				return 5;
			default:
				break;
		}
		return 4;
	}
	else if (iParam0->f_61)
	{
		switch (iParam1)
		{
			case 0:
				return 3;
			case 1:
				return 2;
			case 2:
				return 3;
			case 3:
				return 2;
			default:
				break;
		}
		return 3;
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return 0;
			case 1:
				return 1;
			case 2:
				return 1;
			case 3:
				return 0;
			default:
				break;
		}
	}
	return 0;
}

char* func_410(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0360_G_M_M_UniDuster_03_IRISH_01";
		case 1:
			return "0357_G_M_M_UniDuster_02_WHITE_01";
		case 2:
			return "0712_G_M_M_UniRanchers_01_WHITE_02";
		case 3:
			return "0713_G_M_M_UniRanchers_01_WHITE_03";
		case 4:
			return "1062_G_M_M_UniCriminals_01_WHITE_09";
		case 5:
			return "1063_G_M_M_UniCriminals_01_WHITE_10";
		default:
			break;
	}
	return "";
}

bool func_411(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_412(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_333(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_333(iVar4) && iVar4 != iVar0)
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
	if (func_331() == -1 && !func_504(iVar0))
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
				if (func_504(-183018591))
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
		if (iParam0 != Global_35 && func_333(iVar0))
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
		func_505(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_506(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_507(iVar0))
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

int func_413(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_414(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam2->f_5)
	{
		func_508(iParam2, 1, iVar0);
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
			if (func_509(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_510(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_511(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_510(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_512(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_510(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_513(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_510(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_89(player_id(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_510(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_514(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_515(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_510(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_516(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_510(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_517(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_510(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_517(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_510(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_518(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_510(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_519(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					func_510(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_520(iParam2, 4000))
				{
					if ((func_521(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_522(iParam2, iParam0)) && func_523(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_510(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_521(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_522(iParam2, iParam0)) && func_523(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_510(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_524(iParam0, Global_1935630->f_41))
							{
								func_525();
								*uParam3 = 2;
								func_510(iParam0, iParam2, *uParam3);
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
						if (func_524(iParam0, Global_1935630->f_41))
						{
							func_525();
							*uParam3 = 2;
							func_510(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_526(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_185() - iParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_525();
						*uParam3 = 2;
						func_510(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_527())
					{
						if (func_524(iParam0, Global_1935630->f_42))
						{
							func_525();
							*uParam3 = 2;
							func_510(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_528(iParam2, iParam0))
			{
				*uParam3 = 1024;
				func_510(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_529(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					func_510(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_530(iParam0, iParam2))
					{
						*uParam3 = 8192;
						func_510(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_531(iParam0, iParam2))
				{
					*uParam3 = 32768;
					func_510(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_532(iParam2, 4000))
				{
					if (func_533(&iParam0, iParam2))
					{
						*uParam3 = 512;
						func_510(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_534(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_510(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_535(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_510(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_415(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_245(iParam0, 134217728);
	}
	else
	{
		func_244(iParam0, 134217728);
	}
}

int func_416(var uParam0, var uParam1)
{
	uParam1->f_10 = func_493(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_69(uParam1->f_6))
		{
		}
	}
	bVar0 = func_330();
	if (*uParam1)
	{
		if (bVar0 && !func_497((*Global_1835011)[4]->f_1, 1))
		{
			if (func_536(5))
			{
				func_537(5);
				func_538(5);
				func_539(0);
				func_540(0);
			}
		}
	}
	if (func_541(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_497((*Global_1835011)[37]->f_1, 1)) && !func_497((*Global_1835011)[43]->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_497((*Global_1835011)[43]->f_1, 1)) && !func_497((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_542(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_543(iVar1))
	{
		bVar3 = true;
		if (func_544(iVar1))
		{
			bVar4 = true;
		}
		if (func_545(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				func_546(uParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_536(0) && func_536(1))
			{
				func_547(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_548())
			{
				func_549();
			}
			func_539(0);
			func_540(0);
			func_550(uParam1->f_6);
		}
	}
	if (!func_543(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_551(uParam1->f_10) == 0 || func_552(uParam1->f_10) == 0) || func_553(uParam1->f_10) == 0)
			{
				func_554(uParam1->f_10);
			}
			func_555(uParam1->f_10);
			func_556(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_542(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_543(iVar1))
	{
		bVar3 = true;
		if (func_544(iVar1))
		{
			bVar4 = true;
		}
		if (func_545(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (_0x083d497d57b7400f(iVar2))
			{
				freeze_entity_position(iVar2, false);
			}
			if (!func_69(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_557(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!_0xa0bc8faed8cfeb3c(iVar2))
			{
				*uParam0 = 0;
				return 0;
			}
			iVar6 = player_id();
			iVar7 = _get_saddle_horse_for_player(iVar6);
			if (does_entity_exist(iVar7))
			{
				if (iVar7 != iVar2)
				{
					_set_ped_as_saddle_horse_for_player(iVar6, 0);
				}
			}
			Var8 = { func_558(uParam1->f_10) };
			Var10 = { func_559() };
			func_560(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_371(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_561(uParam1->f_10);
		if (uParam1->f_2 && !func_69(uParam1->f_6))
		{
			freeze_entity_position(iVar2, false);
			_0x0348469daa17576c(iVar2);
			set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
			set_entity_heading(iVar2, uParam1->f_9);
			_0x9587913b9e772d29(iVar2, 0);
		}
		*uParam0 = 2;
		return iVar2;
	}
	func_369(uParam1->f_10);
	if (func_371(uParam1->f_10))
	{
		iVar16 = func_370(uParam1->f_10);
		iVar17 = get_id_of_this_thread();
		if (iVar16 != iVar17)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	*uParam0 = 2;
	return iVar2;
}

bool func_417(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_562(iParam0, 65536) && !func_562(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_562(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_562(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_418()
{
	if (!func_563() && func_564(1))
	{
		return true;
	}
	return false;
}

void func_419(int iParam0)
{
	func_337(1);
}

void func_420()
{
	iVar0 = 0;
	while (iVar0 < 21)
	{
		iVar1 = 0;
		while (iVar1 < 31)
		{
			func_565(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_421(int iParam0, bool bParam1)
{
	func_566(iParam0, &iVar0, &iVar1);
	if (!func_567(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_568(iVar0, iVar1);
}

void func_422(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

bool func_423(int iParam0)
{
	if ((Global_1935630->f_26 || _0x5407b7288d0478b7(Global_35, 16384) > 0) || func_89(player_id(), 1, 0, 1))
	{
		return true;
	}
	return false;
}

bool func_424(int iParam0)
{
	if (!func_30(iParam0, 131072))
	{
		if (Global_1935630->f_40 == 0)
		{
			if (!func_30(iParam0, 16777216) || iParam0->f_20 < 60f)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_425(int iParam0)
{
	if (func_569(50))
	{
		if (func_570(iParam0->f_209, 1, 8, 0))
		{
			return true;
		}
	}
	if (func_571())
	{
		return true;
	}
	if (Global_1430231->f_4)
	{
		func_572(21);
		return true;
	}
	if (func_187(Global_1392581->f_3, 4) || is_player_riding_train(player_id()))
	{
		func_572(22);
		return true;
	}
	return false;
}

bool func_426(int iParam0)
{
	if (!func_30(iParam0, 262144))
	{
		if (iParam0->f_20 < 60f)
		{
			if (func_573(iParam0, 60f, iParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_427(int iParam0)
{
	if (!func_30(iParam0, 524288))
	{
		if (iParam0->f_20 < 60f)
		{
			if (func_574(iParam0, 60f, iParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_428(int iParam0)
{
	if (!func_56(iParam0->f_151))
	{
		if (iParam0->f_20 < 60f)
		{
			if (func_575(iParam0->f_151, iParam0->f_221))
			{
				return true;
			}
		}
	}
	return false;
}

void func_429(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_430(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_431(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return false;
	}
	if (does_entity_exist(Global_35))
	{
		if (!is_entity_dead(Global_35) && !is_ped_injured(Global_35))
		{
			if (_get_rider_of_mount(iParam0, false) == Global_35)
			{
				disable_control_action(0, 308778731, false);
				disable_control_action(0, 1002303471, false);
				disable_control_action(0, 1520437207, false);
			}
		}
	}
	set_ped_max_move_blend_ratio(iParam0, 0f);
	if (func_432(iParam0, 1041577989))
	{
		return false;
	}
	if (is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_432(int iParam0, int iParam1)
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

bool func_433(int iParam0, vector3 vParam1)
{
	vVar0 = { get_entity_coords(iParam0, true, false) };
	vVar3 = { vVar0 + get_entity_forward_vector(iParam0) };
	return func_576(vVar0, vVar3, vParam1);
}

void func_434(var uParam0, int iParam1)
{
	func_577(uParam0, iParam1);
}

bool func_435(int iParam0, int iParam1)
{
	if (!func_432(iParam0, 1041577989))
	{
		return true;
	}
	fVar0 = _0xa710dc5d25f8b942(iParam0, 1041577989);
	if (func_385(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return true;
		}
		return false;
	}
	if (func_385(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return true;
		}
		return false;
	}
	if (func_385(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_436(var uParam0, int iParam1)
{
	func_578(uParam0, iParam1);
}

int func_437(int iParam0, int iParam1, int iParam2)
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

int func_438(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_579(&iVar0);
	if (func_187(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_580(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_187(iVar0, 134217728))
	{
		func_581(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_582(558))
				{
					func_421(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

bool func_439(var uParam0)
{
	return uParam0->f_2 == 2;
}

bool func_440(int* iParam0, bool bParam1)
{
	if (!bParam1 || func_334(iParam0->f_6))
	{
		return func_583(iParam0, 13);
	}
	return false;
}

void func_441(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_583(iParam0, 13))
		{
			if (bParam2)
			{
				func_584(iParam0, 0, 0);
			}
			func_585(iParam0, 13);
		}
	}
	else if (func_583(iParam0, 13))
	{
		func_586(iParam0, 13);
	}
}

bool func_442(int iParam0, bool bParam1)
{
	if (func_61(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

bool func_443(float fParam0)
{
	if (func_587(1))
	{
		return true;
	}
	if (func_60(&uLocal_0) && !func_307(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

char* func_444(int iParam0)
{
	if (func_588(iParam0))
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

void func_445(int* iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = uParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_334(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_589(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_590(iParam0->f_6, iParam0->f_5, 0);
			}
			func_591(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_592(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

bool func_446(var uParam0, int iParam1)
{
	if ((func_593(uParam0->f_43[iParam1], 1, 0) && !func_583(uParam0->f_43[iParam1], 4)) && !func_583(uParam0->f_43[iParam1], 13))
	{
		return true;
	}
	return false;
}

void func_447(var uParam0, int iParam1, bool bParam2)
{
	func_584(uParam0->f_43[iParam1], bParam2, 0);
}

void func_448(int iParam0, int iParam1, var uParam2, char* sParam3, var uParam4)
{
}

struct<4> func_449(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case 0:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_403(0, 1);
					case 1:
						return func_403(0, 3);
					case 2:
						return func_403(0, 5);
					case 3:
						return func_403(0, 8);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_403(1, 1);
					case 1:
						return func_403(1, 3);
					case 2:
						return func_403(1, 5);
					case 3:
						return func_403(1, 8);
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_403(2, 1);
					case 1:
						return func_403(2, 3);
					case 2:
						return func_403(2, 5);
					case 3:
						return func_403(2, 8);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_403(3, 1);
					case 1:
						return func_403(3, 3);
					case 2:
						return func_403(3, 5);
					case 3:
						return func_403(3, 8);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

float func_450()
{
	return get_distance_between_coords(Global_36, func_594(&Local_274, 1), true);
}

struct<4> func_451(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case 0:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 2:
						return func_403(0, 6);
					case 3:
						return func_403(0, 9);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 2:
						return func_403(1, 6);
					case 3:
						return func_403(1, 9);
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_137(iParam0, 1))
			{
				switch (iParam1)
				{
					case 2:
						return func_403(2, 6);
					case 3:
						return func_403(2, 9);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 2:
						return func_403(3, 6);
					case 3:
						return func_403(3, 9);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

void func_452(var uParam0, float fParam1)
{
	if (uParam0->f_1)
	{
		if (Global_1935630->f_58 != *uParam0)
		{
			if (func_61(Global_1935630->f_58, 0, 1) && func_282(Global_1935630->f_58))
			{
				func_142(uParam0, *uParam0, 0, fParam1);
				func_142(uParam0, Global_1935630->f_58, 1, fParam1);
			}
		}
	}
}

bool func_453(int iParam0)
{
	if (_0x038b1f1674f0e242(Global_35))
	{
		func_40(&(iParam0->f_256), 0);
		if (func_47(&(iParam0->f_256), 1.5f))
		{
			clear_ped_tasks(Global_35, 1, 0);
			return true;
		}
	}
	return false;
}

bool func_454()
{
	if (func_137(&Local_274, 8192))
	{
		if (!func_138(&(Local_274.f_37[6]), Global_36))
		{
			return true;
		}
	}
	if (Local_274.f_63 >= 0f)
	{
		if (Local_274.f_63 + 3f) < func_450()
		{
			return true;
		}
		if (!Local_274.f_75.f_4)
		{
			if (func_47(Local_274.f_9[6], 2f))
			{
				if (func_138(&(Local_274.f_37[7]), Global_36))
				{
					return true;
				}
			}
		}
	}
	if (Local_274.f_75 <= 0)
	{
		if (func_461(&iLocal_15, 0, 0) || !Local_274.f_64)
		{
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				if (&iLocal_15.f_9[iVar0] < 2f)
				{
					return true;
				}
				iVar0++;
			}
		}
	}
	return false;
}

bool func_455()
{
	if (func_595())
	{
		if (func_152(Global_35, Local_274.f_197, 0) > 7f && func_596(&iLocal_15, 0, 3) < 15f)
		{
			if (func_597())
			{
				return true;
			}
		}
	}
	return false;
}

void func_456(int iParam0)
{
	if (func_598(Global_35))
	{
		disable_control_action(0, -1453452184, false);
	}
}

void func_457()
{
	iVar0 = func_600(func_599(), 0, 0, 0);
	switch (iVar0)
	{
		case 0:
			Local_274.f_75.f_16 = "ARRIVAL_SURRENDER_ROB_MALE";
			Local_274.f_75.f_21 = 1;
			Local_274.f_75.f_17 = "GANG_INTERACT_DEMAND_MONEY_PAT";
			Local_274.f_75.f_22 = 2;
			Local_274.f_75.f_18 = "GANG_INTERACT_KNOCKOUT";
			Local_274.f_75.f_23 = 1;
			Local_274.f_75.f_19 = "CALLOUT_FOLLOW_ROB_ATTACK_NEUTRAL";
			Local_274.f_75.f_24 = 1;
			break;
		case 4:
			Local_274.f_75.f_16 = "ARRIVAL_SURRENDER_ROB_MALE";
			Local_274.f_75.f_21 = 3;
			Local_274.f_75.f_18 = "GANG_INTERACT_KNOCKOUT";
			Local_274.f_75.f_23 = 2;
			Local_274.f_75.f_19 = "CALLOUT_FOLLOW_ROB_ATTACK_NEUTRAL";
			Local_274.f_75.f_24 = 1;
			break;
		default:
			Local_274.f_75.f_16 = "ARRIVAL_SURRENDER_ROB_MALE";
			Local_274.f_75.f_21 = 1;
			Local_274.f_75.f_18 = "GANG_INTERACT_KNOCKOUT";
			Local_274.f_75.f_23 = 1;
			Local_274.f_75.f_19 = "CALLOUT_FOLLOW_ROB_ATTACK_NEUTRAL";
			Local_274.f_75.f_24 = 1;
			break;
	}
}

void func_458(int iParam0, int iParam1)
{
	iParam0->f_7 = iParam1;
}

bool func_459(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		return !func_306(0f, 1, iParam1, 1);
	}
	return !func_306(0f, 1, iParam0->f_74, 1);
}

void func_460(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	func_448(iParam0, iParam1, *iParam2, sParam3, *iParam4);
	switch (iParam0->f_181)
	{
		case 0:
			*iParam2 = 1;
			StringCopy(sParam3, "GANG_INTERACT_APPROACH_TOLL", 64);
			*iParam4 = 1;
			break;
		case 4:
			*iParam2 = 1;
			StringCopy(sParam3, "GANG_INTERACT_APPROACH_TOLL", 64);
			*iParam4 = 2;
			break;
		default:
			*iParam2 = 1;
			StringCopy(sParam3, "GANG_INTERACT_APPROACH_STICKUP", 64);
			*iParam4 = 1;
			break;
	}
}

bool func_461(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if ((func_432(Global_35, 501393341) || func_432(Global_35, 1553520516)) || func_432(Global_35, 1920417248))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (!_is_ped_getting_into_a_mount_seat(Global_35, true))
		{
			return false;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		return true;
	}
	if (is_ped_in_any_vehicle(Global_35, true))
	{
		return true;
	}
	return false;
}

void func_462(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	func_448(iParam0, iParam1, *iParam2, sParam3, *iParam4);
	switch (iParam0->f_181)
	{
		case 0:
			*iParam2 = 1;
			StringCopy(sParam3, "ORDER_DISMOUNT", 64);
			*iParam4 = 1;
			break;
		case 4:
			*iParam2 = 1;
			StringCopy(sParam3, "ORDER_DISMOUNT_HORSE", 64);
			*iParam4 = 2;
			break;
		default:
			*iParam2 = 0;
			StringCopy(sParam3, "ORDER_DISMOUNT_HORSE", 64);
			*iParam4 = 2;
			break;
	}
	if (!func_461(iParam0, 1, 1))
	{
		StringCopy(sParam3, "HANDS_UP", 64);
		*iParam4 = 0;
	}
}

char* func_463()
{
	switch (iLocal_15.f_181)
	{
		case 0:
			return "BRA_V1_ILO_SURRENDER";
		case 4:
			return "BRA_V2_ILO_SURRENDER";
		default:
			break;
	}
	return "BRA_V3_ILO_SURRENDER";
}

void func_464()
{
	func_198(&iLocal_15, 0);
	func_142(&(Local_274.f_195), &(iLocal_15[1]), 0, 50f);
}

int func_465(float fParam0)
{
	return func_601(&iLocal_15, *Local_274.f_9[7], fParam0);
}

void func_466(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	func_448(iParam0, iParam1, *iParam2, sParam3, *iParam4);
	switch (iParam0->f_181)
	{
		case 0:
			*iParam2 = 0;
			StringCopy(sParam3, "FINAL_WARNING", 64);
			*iParam4 = 2;
			break;
		case 4:
			*iParam2 = 0;
			StringCopy(sParam3, "FINAL_WARNING", 64);
			*iParam4 = 1;
			break;
		default:
			*iParam2 = 0;
			StringCopy(sParam3, "ORDER_DISMOUNT_HORSE_ESCALATED", 64);
			*iParam4 = 1;
			if (!func_461(iParam0, 1, 1))
			{
				StringCopy(sParam3, "FINAL_WARNING", 64);
				*iParam4 = 0;
			}
			break;
	}
}

void func_467(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	func_448(iParam0, iParam1, *iParam2, sParam3, *iParam4);
	switch (iParam0->f_181)
	{
		case 0:
			*iParam2 = 1;
			StringCopy(sParam3, "CALLOUT_FOLLOW_ROB_ATTACK_NEUTRAL", 64);
			*iParam4 = 1;
			break;
		case 4:
			*iParam2 = 1;
			StringCopy(sParam3, "CALLOUT_FOLLOW_ROB_ATTACK_NEUTRAL", 64);
			*iParam4 = 1;
			break;
		default:
			*iParam2 = 1;
			StringCopy(sParam3, "CALLOUT_FOLLOW_ROB_ATTACK_NEUTRAL", 64);
			*iParam4 = 1;
			break;
	}
}

void func_468(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_441((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

void func_469(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

bool func_470()
{
	if (Local_274.f_75 > 0)
	{
		return true;
	}
	if (func_461(&iLocal_15, 0, 0))
	{
		return false;
	}
	func_40(Local_274.f_9[8], 0);
	if (!func_47(Local_274.f_9[8], 1f))
	{
		return false;
	}
	if (func_459(&Local_274, 0))
	{
		return false;
	}
	if (!func_306(0f, 1, Global_35, 1))
	{
		return false;
	}
	return true;
}

bool func_471(int iParam0, var uParam1, float fParam2, bool bParam3, float fParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
{
	func_168(uParam1);
	if (Global_1935630->f_12)
	{
		uParam1->f_1 = 0;
		uParam1->f_2 = 1;
		return true;
	}
	disable_control_action(0, -128997553, false);
	disable_control_action(0, 1632043089, false);
	disable_control_action(0, -124244224, false);
	disable_control_action(0, -209515122, false);
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, -2131587435, false);
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, 2103129879, false);
	set_ped_reset_flag(Global_35, 194, true);
	switch (*uParam1)
	{
		case 0:
			if (!uParam1->f_7)
			{
				if (!is_string_null_or_empty(uParam1->f_16))
				{
					if (bParam3)
					{
						func_602(0);
					}
					if (func_306(fParam4, 1, 0, 0))
					{
						func_346(iParam0, Global_35, uParam1->f_16, 0, -1082130432, uParam1->f_21, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				uParam1->f_7 = 1;
			}
			if ((((((!is_ped_ragdoll(Global_35) && !is_ped_falling(Global_35)) && !_0x3e592d0486dec0f6(Global_35)) && !is_entity_in_air(Global_35, 1)) && !func_432(Global_35, 501393341)) && !func_432(Global_35, 1553520516)) && !func_432(Global_35, 451360105))
			{
				_0xc163dac52ac975d3(iParam0, 32);
				uParam1->f_25 = { Global_36 };
				if (func_187(iParam5, 4))
				{
					force_ped_motion_state(Global_35, -1871534317, false, 0, false);
				}
				else
				{
					clear_ped_tasks(Global_35, 1, 0);
				}
				if (func_333(Global_1935630->f_44))
				{
					func_40(&(uParam1->f_32), 0);
				}
				else
				{
					func_603(&(uParam1->f_32), 0.5f, 0);
				}
				task_rob_ped(iParam0, Global_35, 0f, iParam5, iParam9);
				if (!func_582(609))
				{
					func_337(1);
					uParam1->f_28 = func_604("TF_AIM_AMBUSH", 10000, 0, 0, 0, 1);
					func_566(609, &uVar0, &uVar1);
					func_605(&uVar0, &uVar1);
				}
				uParam1->f_8 = 1;
				*uParam1 = 2;
			}
			break;
		case 2:
			if (((!uParam1->f_12 && !uParam1->f_13) && func_47(&(uParam1->f_32), 2f)) && func_606(iParam0, -663203358, "bStartSuccess", 1, 1.8f, 1))
			{
				if (func_607(&(uParam1->f_36), "PLAYER_SURRENDER_REACH_FOR_WEAPON", Global_36, 0, 130948705, 1097859072, 0, 0, 1, "", 1, 0, 0, 0, 1, 0, 1704213876, 0))
				{
					uParam1->f_12 = 1;
				}
				if (!uParam1->f_14)
				{
					if (func_334(uParam1->f_36))
					{
						uParam1->f_14 = 1;
					}
				}
			}
			if (uParam1->f_14)
			{
				if (func_606(iParam0, 534755167, "bEndSuccess", 1, 1.8f, 1))
				{
					func_335(&(uParam1->f_36), 1, 1);
				}
			}
			if (is_entity_dead(iParam0))
			{
				uParam1->f_1 = 1;
				return true;
			}
			bVar2 = false;
			if (func_608() && is_player_free_aiming(player_id()))
			{
				bVar2 = true;
			}
			else if (Global_1935630->f_25)
			{
				bVar2 = true;
			}
			else if (is_ped_in_combat(iParam0, 0) && func_432(iParam0, 780511057))
			{
				bVar2 = true;
			}
			else if (func_609(uParam1))
			{
				bVar2 = true;
			}
			else if (func_610(uParam1, bParam11))
			{
				bVar2 = true;
			}
			else if ((func_187(iParam5, 16) && !func_432(iParam0, 1435919172)) && !has_anim_event_fired(iParam0, -1898385492))
			{
				bVar2 = true;
			}
			if (!uParam1->f_15)
			{
				if (is_ped_shooting(iParam0))
				{
					clear_ped_tasks(Global_35, 1, 0);
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				if (!is_string_null_or_empty(uParam1->f_20))
				{
					if (bParam3)
					{
						func_602(0);
					}
					if (func_306(fParam4, 1, 0, 0))
					{
						func_346(Global_35, iParam0, uParam1->f_20, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				func_335(&(uParam1->f_36), 1, 1);
				uParam1->f_13 = 1;
				uParam1->f_6 = 1;
				return true;
			}
			if (has_anim_event_fired(iParam0, -1898385492))
			{
				if (iParam6 != 0)
				{
					func_611(iParam6, 1, 0, -142743235, 0);
					func_612(iParam0, iParam6, 1, 0);
				}
				iVar3 = floor((to_float(func_613(1)) * fParam2));
				if (iVar3 > 0)
				{
					func_614(iVar3, 0, 0, 1, 1);
					func_615(iVar3);
					func_326(iParam0, &iVar4);
					func_327(iParam0, (iVar4 + iVar3));
				}
				set_pad_shake(0, 100, 100);
				if (!uParam1->f_3)
				{
					uParam1->f_2 = 1;
				}
			}
			if (bParam7)
			{
				if (func_606(iParam0, -1631911761, "bBeforeHitBreakout", iParam8, 0.9f, 0))
				{
					uParam1->f_5 = 1;
					return true;
				}
			}
			if (func_606(iParam0, 641027726, "DLG_INTRO", iParam8, 0.5f, 0))
			{
				if (!is_string_null_or_empty(uParam1->f_17))
				{
					if (bParam3)
					{
						func_602(0);
					}
					if (func_306(0f, 1, iParam0, 1))
					{
						func_346(iParam0, Global_35, uParam1->f_17, 0, -1082130432, uParam1->f_22, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				uParam1->f_15 = 1;
			}
			if (func_606(iParam0, -502975245, "DLG_HIT", iParam8, 0.6f, 0))
			{
				if (bParam3)
				{
					if (!is_string_null_or_empty(uParam1->f_18))
					{
						func_602(0);
					}
				}
				if (uParam1->f_11)
				{
					if (func_306(0, 1, iParam0, 1))
					{
						if (!is_string_null_or_empty(uParam1->f_18))
						{
							func_346(iParam0, Global_35, uParam1->f_18, 0, -1082130432, uParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
				}
				else if (func_306(fParam4, 1, 0, 0))
				{
					if (!is_string_null_or_empty(uParam1->f_18))
					{
						func_346(iParam0, Global_35, uParam1->f_18, 0, -1082130432, uParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				func_335(&(uParam1->f_36), 1, 1);
				uParam1->f_13 = 1;
				apply_ped_damage_pack(Global_35, "PD_Right_cut_cheek", 0f, 1f);
				apply_ped_damage_pack(Global_35, "PD_Right_bruise_eye_A", 0f, 1f);
				if (bParam10)
				{
				}
				uParam1->f_4 = 1;
			}
			if (func_606(iParam0, 1729031946, "DLG_FAILED", iParam8, 0.7f, 0))
			{
				if (!is_string_null_or_empty(uParam1->f_19))
				{
					if (bParam3)
					{
						func_602(0);
					}
					if (func_306(fParam4, 1, 0, 0))
					{
						func_346(iParam0, Global_35, uParam1->f_19, 0, -1082130432, uParam1->f_24, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				uParam1->f_2 = 0;
				uParam1->f_3 = 1;
			}
			if (func_606(iParam0, 1842457532, "Blendout", iParam8, 0.8f, 0) || !func_432(iParam0, 2137044382))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_472()
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!func_61(&(iLocal_15[iVar0]), 0, 0))
		{
		}
		else
		{
			func_194(iLocal_15.f_22[iVar0]);
			switch (iVar0)
			{
				case 0:
					fVar9 = 0.2f;
					break;
				case 1:
					fVar9 = 0.75f;
					break;
			}
			vVar5 = { func_616(&Local_274, iVar0) };
			open_sequence_task(&iVar1);
			if (func_61(&(iLocal_15.f_40[iVar0]), 0, 0))
			{
				switch (iVar272)
				{
					case 0:
						if (func_137(&Local_274, 1))
						{
							if (iVar0 == 0)
							{
								sVar20 = "am_odrbra_f_1";
							}
							else
							{
								sVar20 = "am_odrbra_f_2";
							}
						}
						else if (iVar0 == 0)
						{
							sVar20 = "am_odrbra_r_1";
						}
						else
						{
							sVar20 = "am_odrbra_r_2";
						}
						task_follow_waypoint_recording(0, sVar20, 0, 74, -1, 0, 0, -1);
						break;
					case 1:
						task_follow_nav_mesh_to_coord(0, get_entity_coords(&(iLocal_15.f_40[iVar0]), true, false), 2f, -1, 3f, 1, 40000f);
						break;
				}
				task_mount_animal(0, &(iLocal_15.f_40[iVar0]), -1, -1, 2f, 1, 0, 0);
			}
			else
			{
				switch (iVar272)
				{
					case 0:
						task_follow_nav_mesh_to_coord(0, vVar5, 2.001f, -1, 0.25f, 1, 40000f);
						task_follow_nav_mesh_to_coord(0, vVar2, 2f, -1, 6f, 1, 40000f);
						break;
					case 1:
						task_follow_nav_mesh_to_coord(0, vVar2, 2f, -1, 6f, 1, 40000f);
						break;
				}
			}
			func_203(&(iLocal_15[iVar0]), &iVar1, fVar9, 0, 1, 1);
		}
		iVar0++;
	}
	iVar0 = 2;
	while (iVar0 <= 3)
	{
		if (!func_61(&(iLocal_15[iVar0]), 0, 0))
		{
		}
		else
		{
			func_194(iLocal_15.f_22[iVar0]);
			switch (iVar0)
			{
				case 0:
					fVar9 = 0.4f;
					break;
				case 1:
					fVar9 = 0.9f;
					break;
			}
			vVar21 = { func_617(&Local_274, iVar0) };
			open_sequence_task(&iVar1);
			_task_smart_flee_style_ped_via(&(iLocal_15[iVar0]), Global_35, 4, vVar21, 29568, -1082130432, -1, 0);
			func_203(&(iLocal_15[iVar0]), &iVar1, fVar9, 0, 1, 1);
		}
		iVar0++;
	}
	func_618(&iLocal_15, &Local_274, &iVar10, &cVar11, &iVar19);
	if (func_61(&(iLocal_15[iVar10]), 0, 0))
	{
		func_284(&Local_274, &(iLocal_15[iVar10]), Global_35, &cVar11, -1073741824, 1, 1744022339, iVar19);
	}
}

bool func_473()
{
	iVar5 = 1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_598(&(iLocal_15[iVar0])))
		{
			if (!func_432(&(iLocal_15[iVar0]), 518218985))
			{
				vVar1 = { func_617(&Local_274, iVar0) };
				_task_smart_flee_style_ped_via(&(iLocal_15[iVar0]), Global_35, 4, vVar1, 29568, -1082130432, -1, 0);
				iVar5 = 0;
			}
		}
		else
		{
			iVar5 = 0;
		}
		iVar0++;
	}
	return iVar5;
}

bool func_474(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_475(int iParam0)
{
	return func_319(iParam0, Global_1310750->f_16072 | 64);
}

void func_476(int iParam0)
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

int func_477(int iParam0)
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

var func_478(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

int func_479(int iParam0)
{
	return iParam0;
}

void func_480(int iParam0)
{
	if (!func_619(iParam0))
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

void func_481(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_482(int* iParam0, var uParam1)
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
	func_620(iParam0, uParam1, 1);
	func_621(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

bool func_483(int iParam0, bool bParam1)
{
	if (((((func_432(iParam0, 780511057) || func_432(iParam0, -219932022)) || func_432(iParam0, 1120685857)) || func_432(iParam0, -2117564886)) || func_432(iParam0, 655999185)) || func_432(iParam0, 1345172471))
	{
		return true;
	}
	if (is_ped_in_combat(iParam0, 0))
	{
		return true;
	}
	if (bParam1)
	{
		if (func_432(iParam0, -653332088) || func_432(iParam0, 167901368))
		{
			return true;
		}
		if (is_ped_shooting(iParam0))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_484(int iParam0, float fParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { get_entity_coords(iParam0, false, false) };
	if (is_entity_dead(iParam0))
	{
		return vVar0;
	}
	vVar6 = { get_entity_forward_vector(iParam0) };
	func_622(vVar6);
	vVar6 = { FtoV((get_entity_speed(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

int func_485(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_229())
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
				if (func_379(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_390(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_193(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_623(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_625(func_624(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

int func_486(int iParam0)
{
	return &(Global_40.f_9632.f_184[iParam0]);
}

void func_487(int iParam0, bool bParam1)
{
	Var2 = { func_160(85200619) };
	if (stat_id_get_int(&Var2, &uVar0))
	{
		iVar1 = _0x1e7384ab5d4f4581(uVar0);
		Global_40.f_9632[iParam0]->f_3 = iVar1;
		if (bParam1)
		{
			iVar4 = func_286(iParam0, 0);
			iVar4 = floor((0.666f * IntToFloat(iVar4)));
			Global_40.f_9632[iParam0]->f_3 = (Global_40.f_9632[iParam0]->f_3 + iVar4);
		}
		else
		{
			Global_40.f_9632[iParam0]->f_3 = (Global_40.f_9632[iParam0]->f_3 + func_286(iParam0, 0));
		}
	}
}

int func_488(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 35;
		case 1:
		case 2:
			return 36;
		case 9:
		case 10:
			return 37;
		case 3:
		case 4:
			return 38;
		case 17:
			return 39;
		case 6:
			return 42;
		case 8:
			return 40;
		case 35:
			return 5;
		case 36:
			return 1;
		case 37:
			return 9;
		case 38:
			return 3;
		case 39:
			return 17;
		case 42:
			return 6;
		case 40:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_489(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 36:
		case 37:
		case 40:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_490(int iParam0)
{
	switch (iParam0)
	{
		case 36:
			return 2;
		case 37:
			return 10;
		case 38:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_491(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		case 9:
			return 10;
		case 3:
			return 4;
		case 2:
			return 1;
		case 10:
			return 9;
		case 4:
			return 3;
		default:
			break;
	}
	return -1;
}

int func_492(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

int func_493(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_494(int iParam0, int iParam1)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_24 = ((*Global_1900383)[iParam0]->f_24 - ((*Global_1900383)[iParam0]->f_24 && iParam1));
}

void func_495()
{
	if (func_543(0))
	{
		func_626(0);
	}
	if (func_543(1))
	{
		func_626(1);
	}
	if (func_543(5))
	{
		func_626(5);
	}
	if (func_543(6))
	{
		func_627(6);
	}
}

bool func_496(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_628(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_629(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && is_entity_a_ped(iParam1))
	{
		return _0x9d9473cb82d83a30(iParam0, get_ped_index_from_entity_index(iParam1), 0) == 1;
	}
	return _0x7f9b9791d4cb71f6(iParam0, iParam1, bParam2, 0) == 1;
}

bool func_497(int iParam0, bool bParam1)
{
	switch (func_630(iParam0))
	{
		case 5:
			return true;
		case 6:
			if (bParam1)
			{
				return true;
			}
			break;
	}
	return false;
}

int func_498(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_69(vParam0))
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
		if (func_631(vParam0))
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
	if (bParam9 >= 0f)
	{
		_0xd460135c98940274(iVar0, bParam9);
	}
	func_632(iVar0, bParam8);
	return iVar0;
}

struct<4> func_499(int iParam0, int iParam1)
{
	Var0 = { func_633(iParam0, iParam1) };
	Var0.f_3 = func_634(iParam0, iParam1);
	return Var0;
}

bool func_500(int iParam0, int iParam1)
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

bool func_501(int iParam0, int iParam1)
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

bool func_502(int iParam0, int iParam1)
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
	if (!func_500(iParam0, iVar0))
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

void func_503(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_504(int iParam0)
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

int func_505(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_635(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_636((386 + iVar28), 1);
			if (func_637(iParam0, &Var0, iVar5, 0))
			{
				if (func_638(iParam0, &Var6, iVar5))
				{
					Var29 = { func_639(iParam0, Var0, iVar5, 0) };
					func_640(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_641(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_642(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_643(iParam0, iParam1);
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

void func_506(int iParam0, int iParam1, float fParam2)
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

bool func_507(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

void func_508(int iParam0, bool bParam1, int iParam2)
{
	func_644(iParam2);
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
		iParam0->f_13 = func_645(0);
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
							func_245(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_646(1))
						{
							func_245(iParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_646(1) || *iParam0 & 8192 != 0))
				{
					func_244(iParam0, 33554432);
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
			if (func_647(iParam0))
			{
				iParam0->f_15 = func_185();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_185() - iParam0->f_15) > 500)
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
	func_648(iParam0);
}

bool func_509(int iParam0, int iParam1)
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
			if (!func_649(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_650(iParam0, iVar2) <= func_651(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_510(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_652(iParam2, 1, 1, 1, 0))
	{
		func_245(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_415(iParam1, 1);
	func_653();
}

bool func_511(int iParam0, int iParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_654(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_655(iParam1);
			if (func_656(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - iParam1->f_2);
				iVar3 = func_657(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_415(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_415(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_512(int iParam0, int iParam1, int iParam2)
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
	if (func_658(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_655(iParam2);
		if (func_656(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = get_game_timer();
			}
			if (iParam2->f_2 != 0)
			{
				if (get_game_timer() - iParam2->f_2) > func_657(iParam2)
				{
					func_415(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_513(int iParam0, int iParam1)
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
	if (func_649(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - iParam1->f_3) > func_657(iParam1)
		{
			fVar3 = func_655(iParam1);
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

bool func_514(int iParam0, float fParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_185();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_515(var uParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_659(iParam2);
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
			if (func_523(iParam2, iParam1))
			{
				func_415(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_516(var uParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 < IntToFloat(func_660(iParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_523(iParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_415(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_517(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_661(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_415(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, iParam2->f_27))
				{
					func_415(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar4, 0, 0);
					if (func_662(iParam1, vVar0, vVar4))
					{
						func_415(iParam2, 1);
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
					func_415(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar7, 0, 0);
					if (func_662(iParam1, vVar0, vVar7))
					{
						func_415(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_518(int iParam0, int iParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_649(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_663(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_664(&(Global_1935630->f_34[iVar0])))
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
			if (func_665(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_666(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_667(iParam1, iParam0, fVar1, iVar0))
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

bool func_519(int iParam0, int iParam1)
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

bool func_520(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_185();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_521(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_668(iVar0, &iVar2))
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
	if (func_669(iVar0, iParam0))
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

int func_522(int iParam0, int iParam1)
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

bool func_523(int iParam0, int iParam1)
{
	if (func_670(iParam0))
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

bool func_524(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_390(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_525()
{
}

bool func_526(int iParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_671(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_185();
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
						if (func_152(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								iParam0->f_9 = func_185();
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

bool func_527()
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
	if ((func_185() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_528(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_651(iParam0);
	if (iParam0->f_12 > func_235(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_672(iParam1);
	iVar1 = func_673(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, true, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, iParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, iParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_529(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_674(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_530(int iParam0, int iParam1)
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
		if (func_675(iParam0, iParam1, 1))
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
					if (!func_676(iParam1, iParam0))
					{
						if (func_152(iVar4, Global_36, 1) < 7f)
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

bool func_531(int iParam0, int iParam1)
{
	if (!func_677(0))
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

bool func_532(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_185();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_533(int iParam0, int iParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_534(int iParam0, int iParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_185();
	}
	else if (func_185() - iParam1->f_4) > func_678(iParam1)
	{
		return func_679(iParam0, iParam1, 0, -1082130432);
	}
	return 0;
}

bool func_535(int iParam0, int iParam1)
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

bool func_536(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_553(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_537(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_543(iParam0))
	{
		return;
	}
	iVar0 = func_542(iParam0);
	func_680(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_681(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_682(iParam0, 0);
	func_372(iParam0);
}

void func_538(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(Global_40.f_1095.f_1[iParam0], "", 64);
	Global_40.f_1095.f_1[iParam0]->f_8 = 0;
	Global_40.f_1095.f_1[iParam0]->f_9 = 0;
	Global_40.f_1095.f_1[iParam0]->f_10 = 0;
	Global_40.f_1095.f_1[iParam0]->f_11 = 0;
	Global_40.f_1095.f_1[iParam0]->f_12 = -1;
	Global_40.f_1095.f_1[iParam0]->f_13 = -15;
	Global_40.f_1095.f_1[iParam0]->f_14 = 0;
	func_683(&Var0);
	func_684(iParam0, Var0);
	func_685(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_686(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_687(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_688(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_689(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_690(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_691(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_692(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_693(&(Global_40.f_1095.f_1[iParam0]->f_425));
	Global_40.f_1095.f_1[iParam0]->f_427 = { 0f, 0f, 0f };
	Global_40.f_1095.f_1[iParam0]->f_430 = 0f;
	Global_40.f_1095.f_1[iParam0]->f_431 = -1;
	Global_40.f_1095.f_1[iParam0]->f_432 = -1;
	Global_40.f_1095.f_1[iParam0]->f_433 = 0;
	Global_40.f_1095.f_1[iParam0]->f_434 = 0;
	Global_40.f_1095.f_1[iParam0]->f_435 = 0;
	(*Global_1900383)[iParam0] = 0;
	(*Global_1900383)[iParam0]->f_1 = 0;
	(*Global_1900383)[iParam0]->f_2 = 0;
	(*Global_1900383)[iParam0]->f_3 = 0;
	(*Global_1900383)[iParam0]->f_19 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_22 = 0f;
	(*Global_1900383)[iParam0]->f_23 = 0;
	(*Global_1900383)[iParam0]->f_24 = 0;
	(*Global_1900383)[iParam0]->f_25 = 0;
	if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		remove_blip(&((*Global_1900383)[iParam0]->f_26));
	}
	(*Global_1900383)[iParam0]->f_26 = 0;
	if (does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		remove_blip(&((*Global_1900383)[iParam0]->f_27));
	}
	(*Global_1900383)[iParam0]->f_27 = 0;
	(*Global_1900383)[iParam0]->f_28 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_31 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_34 = 0f;
	(*Global_1900383)[iParam0]->f_35 = 0;
	(*Global_1900383)[iParam0]->f_36 = 0;
	(*Global_1900383)[iParam0]->f_37 = 0;
	(*Global_1900383)[iParam0]->f_38 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_41 = 0;
	(*Global_1900383)[iParam0]->f_42 = 0;
	(*Global_1900383)[iParam0]->f_43 = 0;
	(*Global_1900383)[iParam0]->f_44 = -1;
}

void func_539(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_540(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_541(vector3 vParam0)
{
	return func_694(_get_map_zone_at_coords(vParam0, 10));
}

int func_542(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0];
}

bool func_543(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (does_entity_exist(Global_1900383[iParam0]))
	{
		return true;
	}
	return false;
}

bool func_544(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_543(iParam0))
	{
		return false;
	}
	iVar0 = func_542(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

bool func_545(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_543(iParam0))
	{
		return false;
	}
	iVar0 = func_542(iParam0);
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return true;
	}
	return false;
}

void func_546(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_543(iParam0))
	{
		return;
	}
	iVar0 = func_542(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_547(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_627(iParam0);
	func_627(iParam0);
	func_695(iParam0, iParam1);
	func_696(iParam0, iParam1);
	func_697(iParam0, iParam1);
	iVar1 = func_542(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_698(iVar1);
		}
		if (iParam0 == 0)
		{
			_0x8fbf9edb378ccb8c(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			uVar2 = _0x227b06324234fb09(iVar0, iVar1);
		}
		else
		{
			if (_0x46fa0ae18f4c7fa9(iVar0) == iVar1)
			{
				_0x8fbf9edb378ccb8c(iVar0, 0);
			}
			if (_0xd3f7445cea2e5035(iVar0) == iVar1)
			{
				_0x227b06324234fb09(iVar0, 0);
			}
		}
	}
	iVar3 = func_542(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_698(iVar3);
		}
		if (iParam1 == 0)
		{
			_0x8fbf9edb378ccb8c(iVar0, iVar3);
		}
		else if (iParam1 == 1)
		{
			uVar4 = _0x227b06324234fb09(iVar0, iVar3);
		}
		else
		{
			if (_0x46fa0ae18f4c7fa9(iVar0) == iVar3)
			{
				_0x8fbf9edb378ccb8c(iVar0, 0);
			}
			if (_0xd3f7445cea2e5035(iVar0) == iVar3)
			{
				_0x227b06324234fb09(iVar0, 0);
			}
		}
	}
	func_495();
}

bool func_548()
{
	iVar0 = func_699();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_549()
{
	iVar0 = func_699();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_700(0);
}

void func_550(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_551(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_9;
}

int func_552(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_8;
}

int func_553(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_14;
}

void func_554(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_701(&uVar0, &uVar1, &uVar2);
	func_702(iParam0, uVar0);
	func_703(iParam0, uVar1);
	func_704(iParam0, uVar2);
	func_705(iParam0, 1);
	func_706(iParam0, 1);
}

void func_555(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_707(iParam0, 1);
}

void func_556(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_19 = { vParam1 };
	(*Global_1900383)[iParam0]->f_22 = uParam4;
}

bool func_557(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_708(iParam0, 1);
}

struct<2> func_558(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_709(iParam0, &uVar2))
	{
	}
	if (!func_710(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_559()
{
	if (func_711(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_711(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_711(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_711(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_711(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_711(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_560(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	if (!_0xa0bc8faed8cfeb3c(iParam0))
	{
		return;
	}
	func_712(iParam0);
	func_713(iParam0, uParam1);
	func_714(iParam0);
	func_715(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_716(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_561(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_2 = 1;
	(*Global_1900383)[iParam0]->f_3 = get_id_of_this_thread();
}

bool func_562(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_563()
{
	if (func_717())
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_1905944[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_564(bool bParam0)
{
	if (func_718())
	{
		return false;
	}
	if (_0x7ec0d68233e391ac(5) == 2)
	{
		return false;
	}
	if ((!is_screen_faded_in() || is_screen_fading_in()) || is_screen_fading_out())
	{
		return false;
	}
	if (!bParam0)
	{
		if (!func_563())
		{
			return false;
		}
	}
	if (Global_16)
	{
		return false;
	}
	if (!func_719())
	{
		return false;
	}
	if (_0xf236c84c6adfcb2f())
	{
		return false;
	}
	if (func_720())
	{
		return false;
	}
	return true;
}

void func_565(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_566(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_567(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_721(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_722(iParam0))
	{
		return false;
	}
	if (func_417(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_562(iParam0, 1)) || func_723(32768))
	{
		if (!func_562(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_719())
	{
		return false;
	}
	return true;
}

void func_568(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_569(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_48;
}

bool func_570(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_69(vParam0))
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

bool func_571()
{
	return Global_1310750->f_16077 != 0;
}

void func_572(int iParam0)
{
	Global_1393447->f_1 = iParam0;
}

int func_573(int iParam0, float fParam1, int iParam2)
{
	iVar4 = 0;
	while (iVar4 < iParam0->f_217)
	{
		iVar0[iVar5] = &iParam0->f_49[iVar4];
		iVar5++;
		iVar4++;
	}
	if (is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0[iVar5] = get_vehicle_ped_is_in(Global_35, false);
		iVar5++;
	}
	return func_724(&iVar0, iParam0->f_209, fParam1, 0, 0, 1084227584, bVar6, iParam2);
}

bool func_574(int iParam0, float fParam1, int iParam2)
{
	iVar16 = 0;
	while (iVar16 < iParam0->f_216)
	{
		uVar6[iVar17] = &iParam0->f_40[iVar16];
		iVar17++;
		iVar16++;
	}
	uVar6[iVar17] = iParam0->f_56;
	iVar17++;
	if (_does_volume_exist(iParam2))
	{
		iVar18 = func_725(&uVar0, &uVar6, 5, iParam2);
	}
	else
	{
		iVar18 = func_726(&uVar0, &uVar6, 5, iParam0->f_209, fParam1);
	}
	iVar16 = 0;
	while (iVar16 < iVar18)
	{
		iVar19 = 0;
		iVar27 = _get_rider_of_mount(&(uVar0[iVar16]), false);
		if (iVar27 != 0 && iVar27 != Global_35)
		{
			vVar21 = { get_entity_coords(&(uVar0[iVar16]), true, false) };
			if (!func_69(vVar21))
			{
				if (get_closest_vehicle_node(vVar21, &vVar24, 1, 3f, 0f))
				{
					if (func_384(vVar21, vVar24, 5f, 0) && is_ped_heading_towards_position(iVar27, iParam0->f_209, 40f))
					{
						iVar19 = 1;
						iVar20 = 1;
					}
				}
			}
		}
		iVar16++;
	}
	return iVar20;
}

bool func_575(var uParam0, var uParam1)
{
	vVar2 = { func_728(func_727()) };
	fVar5 = 120f;
	fVar5 = (fVar5 * fVar5);
	if (func_388(Global_36, vVar2) < 40000f)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_729(iVar0))
		{
			fVar6 = func_730(iVar0);
			if (fVar6 <= 10000f && fVar6 > 0f)
			{
				iVar1 = func_731(iVar0);
				if (!does_entity_exist(iVar1) || is_entity_dead(iVar1))
				{
					return false;
				}
				if (func_388(get_entity_coords(iVar1, true, false), vVar2) > fVar5)
				{
					fVar7 = func_224(iVar1, Global_36, 1);
					if (fVar7 <= 40000f && fVar7 > 0f)
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_576(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_577(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_578(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_579(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_580(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_579(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_732(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
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
			func_193(&(iParam1->f_13));
		}
		if (func_733(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_734(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_580(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_481(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_735(*uParam0, 1, 1);
						}
					}
					else if (func_736(iParam1, 22))
					{
						func_735(*uParam0, 0, 1);
					}
				}
				if (func_737(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_738(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_739(iParam8);
					if (func_740(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_741(uParam3);
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
					func_742(iParam1, uParam3, fVar8);
					if (func_743(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_621(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_744(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_737(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_745(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_740(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_738(uParam0, func_737(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_739(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_621(uParam3, 0, 0, 1, 1);
					}
					func_746(iParam1, 1);
				}
				func_742(iParam1, uParam3, fVar8);
				if (func_744(uParam0, iParam1, fParam4, bVar6))
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
			func_482(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_581(int* iParam0, var uParam1, var uParam2)
{
	iVar0 = func_747(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_346(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_582(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_331() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

bool func_583(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_584(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_583(iParam0, 13))
	{
		func_585(iParam0, 0);
	}
	else
	{
		func_586(iParam0, 0);
	}
	if (func_334(iParam0->f_6))
	{
		if (bParam2)
		{
			func_335(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_585(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_586(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_587(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

bool func_588(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_589(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_334(iParam0))
	{
		return;
	}
	iVar0 = func_479(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_590(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_334(iParam0))
	{
		return;
	}
	iVar0 = func_479(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_591(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_334(iParam0))
	{
		return;
	}
	iVar0 = func_479(iParam0);
	if (bParam1)
	{
		func_748(iParam0, 4);
		func_749(iVar0, 1);
		func_750(iVar0, 1);
	}
	else
	{
		func_751(iParam0, 4);
		func_750(iVar0, 0);
	}
}

void func_592(int* iParam0, char* sParam1)
{
	if (func_334(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_590(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_586(iParam0, 1);
}

bool func_593(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_334(uParam0->f_6))
	{
		if (is_bit_set(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_752(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

Vector3 func_594(int iParam0, int iParam1)
{
	vVar0 = { func_449(iParam0, iParam1) };
	return vVar0;
}

bool func_595()
{
	if (iVar272 != 0)
	{
		return true;
	}
	if (Global_36.f_2 <= 153.5f)
	{
		return true;
	}
	if (func_753(&iLocal_15, 0, iLocal_15.f_215, 0) > 1)
	{
		return true;
	}
	return false;
}

float func_596(int iParam0, int iParam1, int iParam2)
{
	fVar0 = func_754(iParam0, iParam1, iParam2);
	fVar0 = sqrt(fVar0);
	return fVar0;
}

bool func_597()
{
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_215)
	{
		if (func_755(iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_598(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

int func_599()
{
	return Global_1897952->f_41;
}

int func_600(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	bVar0 = (func_246() && !bParam2);
	switch (iParam0)
	{
		case 15:
		case 16:
			return 5;
		case 3:
		case 9:
			return 0;
		case 1:
			if (!bVar0 && !bParam1)
			{
				return 0;
			}
			else
			{
				return 4;
			}
			break;
		case 10:
			return 1;
		case 4:
		case 12:
			if (bVar0 || bParam1)
			{
				return 3;
			}
			break;
		case 0:
		case 11:
			return 2;
		case 5:
			if (bVar0 || bParam1)
			{
				return 3;
			}
			break;
	}
	return -1;
}

int func_601(int iParam0, var uParam1, float fParam2, var uParam3, float fParam4)
{
	if (func_756(iParam0))
	{
		fParam4 = (fParam4 + 5f);
	}
	if (!func_306(0f, 1, Global_35, 1))
	{
		return 0;
	}
	if (func_47(&uParam1, fParam4))
	{
		return 1;
	}
	return 0;
}

void func_602(int iParam0)
{
	func_196(&uLocal_0);
	func_757(1, iParam0, 0);
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_758();
}

void func_603(var uParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_60(uParam0))
	{
		func_365(uParam0, fParam1);
	}
}

var func_604(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_605(var uParam0, var uParam1)
{
	if (func_331() != -1)
	{
		uVar0 = &Global_36638.f_1444[*uParam0];
		set_bit(&uVar0, *uParam1);
		Global_36638.f_1444[*uParam0] = uVar0;
		return;
	}
	uVar1 = &Global_40.f_7832[*uParam0];
	set_bit(&uVar1, *uParam1);
	Global_40.f_7832[*uParam0] = uVar1;
}

bool func_606(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5)
{
	if (does_entity_exist(iParam0))
	{
		if (!bParam5 || !is_entity_dead(iParam0))
		{
			if (has_anim_event_fired(iParam0, iParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_607(var uParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	if (!func_334(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!is_entity_dead(iParam5))
		{
			*uParam0 = func_759(sParam1, iParam6, iParam5, iParam10, fParam9, 0, iParam15, iVar0, 1070386381, 570, 4000, 10, 1073741824, 0, iParam18, 0, 0);
			func_760(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = func_761(sParam1, iParam6, iParam13, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		else
		{
			if (func_69(vParam2))
			{
				return false;
			}
			*uParam0 = func_762(sParam1, iParam6, vParam2, fParam7, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		if (fParam8 != 0f)
		{
			func_589(*uParam0, sParam1, ceil(absf(fParam8)), 1);
			if (ceil(absf(fParam8)) > func_613(1))
			{
				func_591(*uParam0, 0, 1);
			}
		}
		if (!is_string_null_or_empty(sParam11))
		{
		}
		if (bParam19)
		{
			func_763(*uParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (func_752(*uParam0, 0))
		{
			if (_is_ped_carrying(Global_35))
			{
				func_591(*uParam0, 0, 1);
			}
		}
		else if (!_is_ped_carrying(Global_35))
		{
			func_591(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (ceil(absf(fParam8)) > func_613(1))
		{
			func_591(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (does_entity_exist(iParam5) && is_entity_dead(iParam5))
		{
			if (func_334(*uParam0))
			{
				func_335(uParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && func_764(*uParam0, 1)) || (bParam17 && func_765(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				func_614(ceil(absf(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				func_766(ceil(absf(fParam8)), 0, 1065353216, 1, 0, 0, 1, 752097756);
			}
		}
		func_335(uParam0, 1, 1);
		return true;
	}
	return false;
}

bool func_608()
{
	if (func_767(4))
	{
		return Global_1935630->f_27;
	}
	return func_768();
}

bool func_609(var uParam0)
{
	if (uParam0->f_4)
	{
		return false;
	}
	if (uParam0->f_9)
	{
		return false;
	}
	if (!is_weapon_valid(Global_1935630->f_44))
	{
		return false;
	}
	if (!_0x705be297eebdb95d(Global_1935630->f_44))
	{
		return false;
	}
	if (func_47(&(uParam0->f_32), 1f))
	{
		if (!func_432(Global_35, 716706914))
		{
			return true;
		}
	}
	return false;
}

bool func_610(var uParam0, bool bParam1)
{
	if (uParam0->f_10)
	{
		return false;
	}
	if ((is_ped_walking(Global_35) || is_ped_running(Global_35)) || is_ped_sprinting(Global_35))
	{
		if (bParam1 || get_distance_between_coords(Global_36, uParam0->f_25, false) > 2f)
		{
			return true;
		}
	}
	return false;
}

int func_611(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_769(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_770(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = get_ped_ammo_by_type(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		_remove_ammo_from_ped_by_type(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_771(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_772(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_773(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_774(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_774(iParam0, 0, 0) - iParam1) < 0)
		{
			func_611(iParam0, func_774(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_775(iParam0) == -427144552)
	{
		if (!func_776(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_777(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_641(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_771(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_778(iParam0, iParam1);
	return 1;
}

void func_612(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_477(iParam0);
		func_478(iParam0, iParam1, iParam2, iVar0);
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

int func_613(int iParam0)
{
	return _money_get_cash_balance();
}

void func_614(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_779(iParam0);
	if (bParam3)
	{
		func_780(iParam0, sParam1, iParam2);
	}
}

void func_615(int iParam0)
{
	if (iParam0 < 200)
	{
		_play_sound_from_entity("LOOT_MONEY", Global_35, "LOOT_BODY_SOUNDSET", false, 0, 0);
	}
	else
	{
		_play_sound_from_entity("LOOT_MONEY_BILLS", Global_35, "LOOT_BODY_SOUNDSET", false, 0, 0);
	}
}

struct<4> func_616(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case 0:
			if (func_137(iParam0, 1))
			{
				return func_403(0, 13);
			}
			else
			{
				return func_403(1, 13);
			}
			break;
		case 1:
			if (func_137(iParam0, 1))
			{
				return func_403(2, 13);
			}
			else
			{
				return func_403(3, 13);
			}
			break;
	}
	return Var0;
}

struct<4> func_617(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
					if (func_137(iParam0, 1))
					{
						return func_403(0, 12);
					}
					else
					{
						return func_403(1, 12);
					}
					break;
				case 2:
				case 3:
					if (func_137(iParam0, 1))
					{
						return func_403(0, 14);
					}
					else
					{
						return func_403(1, 14);
					}
					break;
			}
			break;
		case 1:
			if (func_137(iParam0, 1))
			{
				return func_403(2, 12);
			}
			else
			{
				return func_403(3, 12);
			}
			break;
	}
	return Var0;
}

void func_618(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	func_448(iParam0, iParam1, *iParam2, sParam3, *iParam4);
	switch (iParam0->f_181)
	{
		case 0:
			*iParam2 = 0;
			StringCopy(sParam3, "CALLOUT_FOLLOW_ROB_FLEE_MALE", 64);
			*iParam4 = 1;
			break;
		case 4:
			*iParam2 = 0;
			StringCopy(sParam3, "CALLOUT_LETS_GET_OUTTA_HERE_MALE", 64);
			*iParam4 = 2;
			break;
		default:
			*iParam2 = 0;
			StringCopy(sParam3, "CALLOUT_LETS_GET_OUTTA_HERE_MALE", 64);
			*iParam4 = 1;
			break;
	}
}

bool func_619(int iParam0)
{
	return func_781(iParam0, 2);
}

void func_620(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_335(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_782(iParam0, 0);
		}
	}
}

void func_621(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_334((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_335(&((*uParam0)[iVar0]->f_6), 1, 1);
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

Vector3 func_622(vector3 vParam0)
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

bool func_623(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_624(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_783(iParam0, &Var0);
}

int func_625(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_626(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_542(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		bVar1 = true;
	}
	if (!_0xa0bc8faed8cfeb3c(iVar0))
	{
		return;
	}
	if (func_708(iParam0, 64))
	{
		func_627(iParam0);
		return;
	}
	bVar2 = false;
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26) && !does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		if (!get_blip_from_entity(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_784(42);
	if (bVar1)
	{
		if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
		{
			remove_blip(&((*Global_1900383)[iParam0]->f_26));
		}
		if (iVar0 == _get_saddle_horse_for_player(player_id()) && bVar3)
		{
			if (!does_blip_exist((*Global_1900383)[iParam0]->f_27))
			{
				(*Global_1900383)[iParam0]->f_27 = _blip_add_for_entity(-515518185, iVar0);
				set_blip_sprite((*Global_1900383)[iParam0]->f_27, -1327110633, true);
				func_785(&((*Global_1900383)[iParam0]->f_27));
			}
		}
		else if (does_blip_exist((*Global_1900383)[iParam0]->f_27))
		{
			remove_blip(&((*Global_1900383)[iParam0]->f_27));
		}
		return;
	}
	else if (does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		remove_blip(&((*Global_1900383)[iParam0]->f_27));
	}
	bVar4 = false;
	if (is_ped_on_mount(Global_35))
	{
		if (Global_1935630->f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (does_blip_exist((*Global_1900383)[iParam0]->f_26) && bVar4)
	{
		func_627(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if (Global_40.f_1095.f_1[iParam0]->f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = -1925605092;
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_786(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
			{
				remove_blip(&((*Global_1900383)[iParam0]->f_26));
			}
			return;
		}
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		(*Global_1900383)[iParam0]->f_26 = _blip_add_for_entity(iVar5, iVar0);
		(*Global_1900383)[iParam0]->f_25 = 0;
		func_787(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_708(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_788(iParam0);
	if (does_entity_exist(iVar11))
	{
		if (!is_entity_dead(iVar11))
		{
			if (get_mount(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { get_entity_coords(iVar0, true, false) };
	fVar15 = func_789(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_790(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 3)
		{
			iVar17 = -401963276;
			(*Global_1900383)[iParam0]->f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = _get_ped_remaining_revival_time(iVar0, true);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 4)
		{
			iVar17 = -1380599892;
			(*Global_1900383)[iParam0]->f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 2)
		{
			iVar17 = 1313031610;
			(*Global_1900383)[iParam0]->f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 1)
		{
			iVar17 = -1012863186;
			(*Global_1900383)[iParam0]->f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_791((*Global_1900383)[iParam0]->f_26);
		func_792((*Global_1900383)[iParam0]->f_26);
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, iVar17);
		if (iVar17 == -401963276)
		{
			_blip_set_modifier((*Global_1900383)[iParam0]->f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, iVar18);
	}
	if ((_get_saddle_horse_for_player(player_id()) == iVar0 && bVar3) && !bVar9)
	{
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, 673950256);
	}
	else
	{
		_set_blip_flash_style((*Global_1900383)[iParam0]->f_26, 673950256);
	}
	if (func_793(iVar0) && !bVar9)
	{
		if (iVar5 == -1925605092)
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, iVar20);
	}
	else
	{
		_set_blip_flash_style((*Global_1900383)[iParam0]->f_26, 561559387);
		_set_blip_flash_style((*Global_1900383)[iParam0]->f_26, -201249929);
	}
	iVar21 = func_786(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = -217389439;
				break;
			case 1:
				iVar22 = 13992470;
				break;
			case 2:
				iVar22 = 396341162;
				break;
			case 3:
				iVar22 = 623069873;
				break;
			case 4:
				iVar22 = -637422489;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = 937553910;
				break;
			case 1:
				iVar22 = 489732756;
				break;
			case 2:
				iVar22 = 195204984;
				break;
			case 3:
				iVar22 = -103418913;
				break;
			case 4:
				iVar22 = -815685893;
				break;
		}
	}
	if (iVar22 == 0)
	{
		_0x44813684f72b563c(iVar0, (*Global_1900383)[iParam0]->f_26);
	}
	else
	{
		_0x97f6f158cc5b5ca2(iVar0, (*Global_1900383)[iParam0]->f_26);
		_0x7563cbca99253d1a(iVar0, iVar22);
	}
}

void func_627(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		remove_blip(&((*Global_1900383)[iParam0]->f_26));
	}
	(*Global_1900383)[iParam0]->f_25 = 0;
}

bool func_628(int iParam0, int iParam1, float fParam2)
{
	return func_794(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

bool func_629(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_630(int iParam0)
{
	if (!func_223(iParam0))
	{
		return -1;
	}
	return func_795(iParam0);
}

bool func_631(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_632(int iParam0, bool bParam1)
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

Vector3 func_633(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1729.037f, 55.1623f, 154.6673f;
				case 1:
					return -1736.706f, 53.1099f, 154.7622f;
				case 2:
					return -1727.261f, 55.5487f, 154.547f;
				case 3:
					return -1733.147f, 54.4014f, 154.7622f;
				case 4:
					return -1730.825f, -28.8174f, 169.2484f;
				case 5:
					return -1723.19f, -9.9752f, 162.8449f;
				case 6:
					return -1723.285f, 1.4775f, 160.3464f;
				case 7:
					return -1731.255f, -32.5596f, 170.4781f;
				case 8:
					return -1717.962f, -6.0187f, 161.6357f;
				case 9:
					return -1718.992f, 4.6263f, 160.1538f;
				case 10:
					return -1695.524f, 56.0071f, 135.1386f;
				case 11:
					return -1692.293f, 55.8458f, 134.5537f;
				case 12:
					return -1563.492f, 72.4161f, 109.6908f;
				case 13:
					return -1739.58f, 43.3928f, 152.9405f;
				case 14:
					return -1720.876f, -59.0768f, 175.3309f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1728.544f, 64.984f, 154.7763f;
				case 1:
					return -1740.827f, 63.24f, 154.7625f;
				case 2:
					return -1727.622f, 66.0547f, 154.7285f;
				case 3:
					return -1736.994f, 63.0852f, 154.7622f;
				case 4:
					return -1763.714f, 122.9245f, 155.3251f;
				case 5:
					return -1764.739f, 107.2557f, 158.4045f;
				case 6:
					return -1761.188f, 100.4338f, 157.896f;
				case 7:
					return -1764.412f, 127.6986f, 153.5219f;
				case 8:
					return -1769.007f, 108.5848f, 158.3481f;
				case 9:
					return -1766.606f, 101.1617f, 158.2021f;
				case 10:
					return -1695.524f, 56.0071f, 135.1386f;
				case 11:
					return -1692.293f, 55.8458f, 134.5537f;
				case 12:
					return -1563.944f, 72.2114f, 109.8925f;
				case 13:
					return -1750.64f, 66.0685f, 155.6229f;
				case 14:
					return -1754.979f, 147.9245f, 146.5603f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 823.6652f, -711.5054f, 64.5023f;
				case 1:
					return 833.2661f, -711.5591f, 64.4245f;
				case 2:
					return 822.0086f, -712.6428f, 64.0812f;
				case 3:
					return 829.8744f, -711.6774f, 64.2322f;
				case 4:
					return 791.9047f, -760.6771f, 53.1025f;
				case 5:
					return 822.8891f, -743.5657f, 58.0261f;
				case 6:
					return 830.783f, -728.4836f, 61.111f;
				case 7:
					return 788.7646f, -761.1575f, 52.7973f;
				case 8:
					return 818.172f, -744.451f, 57.646f;
				case 9:
					return 822.1853f, -732.6055f, 60.4165f;
				case 10:
					return 804.9972f, -706.3107f, 64.1642f;
				case 11:
					return 802.7814f, -707.7939f, 64.1291f;
				case 12:
					return 809.162f, -869.8225f, 52.1317f;
				case 13:
					return 811.2566f, -707.0321f, 64.1727f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 835.8835f, -646.5416f, 71.4059f;
				case 1:
					return 848.412f, -647.9088f, 70.322f;
				case 2:
					return 833.0231f, -644.6268f, 71.5748f;
				case 3:
					return 843.9594f, -647.127f, 70.4443f;
				case 4:
					return 827.7505f, -592.3489f, 78.4614f;
				case 5:
					return 837.864f, -601.7726f, 76.8486f;
				case 6:
					return 844.8516f, -619.3614f, 74.1909f;
				case 7:
					return 823.8334f, -587.7614f, 78.5552f;
				case 8:
					return 840.006f, -597.2047f, 77.1917f;
				case 9:
					return 846.9919f, -616.7607f, 74.2096f;
				case 10:
					return 823.1742f, -644.031f, 71.6492f;
				case 11:
					return 825.2624f, -644.0623f, 71.7028f;
				case 12:
					return 818.0812f, -571.9724f, 79.3586f;
				case 13:
					return 835.4178f, -637.4328f, 72.1319f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_634(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 127.0514f;
				case 1:
					return 23.0514f;
				case 2:
					return 113.0514f;
				case 3:
					return 33.0514f;
				case 4:
					return 1.9035f;
				case 5:
					return -18.0965f;
				case 6:
					return -6.0965f;
				case 7:
					return 339.9035f;
				case 8:
					return 7.9035f;
				case 9:
					return 57.9035f;
				case 10:
					return 292.3187f;
				case 11:
					return 290.3187f;
				case 12:
					return 282.8064f;
				case 13:
					return -110.2839f;
				case 14:
					return 197.2242f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 143.949f;
				case 1:
					return 197.949f;
				case 2:
					return 143.949f;
				case 3:
					return 205.949f;
				case 4:
					return 148.8011f;
				case 5:
					return 200.8011f;
				case 6:
					return 190.8011f;
				case 7:
					return 148.8012f;
				case 8:
					return 204.8012f;
				case 9:
					return 232.8012f;
				case 10:
					return 292.3187f;
				case 11:
					return 290.3187f;
				case 12:
					return 282.8064f;
				case 13:
					return 41.7161f;
				case 14:
					return 331.2242f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 263.0514f;
				case 1:
					return -18.9486f;
				case 2:
					return 273.0514f;
				case 3:
					return 329.0514f;
				case 4:
					return -98.0965f;
				case 5:
					return -40.0965f;
				case 6:
					return -20.0965f;
				case 7:
					return 291.9035f;
				case 8:
					return 327.9035f;
				case 9:
					return 337.9035f;
				case 10:
					return 196.3187f;
				case 11:
					return 192.3187f;
				case 12:
					return 184.8064f;
				case 13:
					return 69.7161f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 257.949f;
				case 1:
					return 179.949f;
				case 2:
					return 271.949f;
				case 3:
					return 191.949f;
				case 4:
					return 240.8011f;
				case 5:
					return 198.8011f;
				case 6:
					return 182.8011f;
				case 7:
					return 236.8012f;
				case 8:
					return 192.8012f;
				case 9:
					return 180.8012f;
				case 10:
					return -41.6813f;
				case 11:
					return -27.6813f;
				case 12:
					return 70.8064f;
				case 13:
					return 99.7161f;
			}
			break;
	}
	return 0f;
}

struct<5> func_635(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_796(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_775(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_639(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_797(bParam1) };
			if (bParam2 && func_798(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_637(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_637(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_638(iParam0, &Var5, 1728382685))
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
			Var0 = { func_799(bParam1) };
			switch (func_800(iParam0))
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
			if (func_801(iParam0, -1823706425))
			{
				Var0 = { func_639(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_801(iParam0, -1483207246))
			{
				Var0 = { func_639(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_802(Var0, &Var27, bParam1, 0))
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

int func_636(int iParam0, int iParam1)
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

bool func_637(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_803(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_638(int iParam0, var uParam1, int iParam2)
{
	if (func_804(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_639(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_769(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_805(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_640(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_806(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_802(*uParam1, &Var0, bParam6, 0))
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
	if (!func_641(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_805(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_641(bool bParam0)
{
	if (func_331() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_805(bParam0));
}

int func_642(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_807(iParam0))
	{
		return 0;
	}
	if (!func_641(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_643(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_413(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_644(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_768();
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
			func_808(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_645(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_646(bool bParam0)
{
	if (func_809(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_647(int iParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_331() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_810(iParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_810(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_673(iVar0) == -1)
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

void func_648(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_811(iParam0);
	}
}

bool func_649(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_673(iParam2);
	}
	else
	{
		iVar1 = func_672(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_673(iParam0);
	}
	else
	{
		iVar0 = func_672(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_187(*iParam1, 8388608))
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

float func_650(int iParam0, int iParam1)
{
	return func_390(iParam0, iParam1, 1, 1);
}

float func_651(int iParam0)
{
	return iParam0->f_26;
}

bool func_652(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_653()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_654(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_390(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_812(iVar0, 0)))
		{
			if (func_813(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_655(int iParam0)
{
	return iParam0->f_17;
}

bool func_656(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_187(*iParam0, 4194304))
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

int func_657(int iParam0)
{
	return iParam0->f_18;
}

bool func_658(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_812(iVar0, 0)))
		{
			if (func_814(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_659(int iParam0)
{
	return iParam0->f_23;
}

int func_660(int iParam0)
{
	return iParam0->f_21;
}

int func_661(int iParam0)
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

bool func_662(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_794(iParam0, vParam4, 0.5f))
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

int func_663(int iParam0)
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
	if (func_815(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_664(int iParam0)
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

bool func_665(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_816(iParam1))
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

bool func_666(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_816(iParam1))
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

bool func_667(int iParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_816(iParam1))
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

bool func_668(int iParam0, int iParam1)
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

bool func_669(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_817(iParam0, 1, 0, 0) != 2055893578)
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

bool func_670(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_671(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_152(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_672(int iParam0)
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

int func_673(int iParam0)
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

int func_674(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_668(Global_35, &iVar1))
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
		fVar2 = func_390(iParam0, player_ped_id(), 0, 1);
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
		if (func_390(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_675(int iParam0, int iParam1, bool bParam2)
{
	func_809(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_676(iParam1, iVar0))
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
				if (!bParam2 || !func_676(iParam1, iVar1))
				{
					if (func_152(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_676(int iParam0, int iParam1)
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

bool func_677(int iParam0)
{
	if (func_246())
	{
		return false;
	}
	return func_497((*Global_1347702)[58]->f_15, 1);
}

int func_678(int iParam0)
{
	return iParam0->f_20;
}

int func_679(int iParam0, int iParam1, bool bParam2, float fParam3)
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

void func_680(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_542(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_818(iVar6);
		if (!_0x608bc6a6aacd5036(&Var2, iVar0, iVar1, 0))
		{
		}
		else
		{
			iVar7 = Var2.f_3;
			if (!does_entity_exist(iVar7))
			{
			}
			else if (is_entity_a_mission_entity(iVar7) && !_0x88ad6cc10d8d35b2(iVar7))
			{
			}
			else
			{
				if (!is_entity_a_mission_entity(iVar7))
				{
					set_entity_as_mission_entity(iVar7, true, true);
				}
				_0x0d0db2b6af19a987(&iVar7);
			}
		}
		iVar6++;
	}
}

bool func_681(int iParam0)
{
	if (!func_819(iParam0))
	{
		return false;
	}
	if (!func_820())
	{
		return true;
	}
	return false;
}

void func_682(int iParam0, int iParam1)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0] = iParam1;
}

void func_683(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_684(int iParam0, struct<2> Param1)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_821(iParam0, Param1))
	{
	}
	if (!func_822(iParam0, Param1.f_1))
	{
	}
}

void func_685(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_823((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_686(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_687(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		(*uParam0)[iVar0] = 0;
		(*uParam0)[iVar0]->f_1 = 0;
		(*uParam0)[iVar0]->f_2 = 0;
		(*uParam0)[iVar0]->f_3 = 0;
		(*uParam0)[iVar0]->f_4 = 0;
		iVar0++;
	}
}

void func_688(var uParam0)
{
	uParam0->f_1 = 0f;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			uParam0->f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_689(int iParam0, var uParam1)
{
	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_690(int iParam0, var uParam1)
{
	iVar0 = 0;
	if (iParam0 == 2)
	{
		iVar0 = 50;
	}
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_691(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_692(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_693(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_694(int iParam0)
{
	switch (iParam0)
	{
		case 2025841068:
			return 0;
		case 822658194:
			return 1;
		case 1308232528:
			return 2;
		case 1835499550:
			return 3;
		case 476637847:
			return 4;
		case -120156735:
			return 6;
		case 1645618177:
			return 7;
		case -512529193:
			return 8;
		case 131399519:
			return 9;
		case 178647645:
			return 10;
		case -864275692:
			return 11;
		case 1684533001:
			return 12;
		case -2066240242:
			return 13;
		case -2145992129:
			return 14;
		case -108848014:
			return 15;
		case 892930832:
			return 16;
		default:
			break;
	}
	return -1;
}

void func_695(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam1], Global_40.f_1095.f_1[iParam0], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam0], &(Global_1900383->f_508), 436);
}

void func_696(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_463), (*Global_1900383)[iParam1], 45);
	_copy_memory((*Global_1900383)[iParam1], (*Global_1900383)[iParam0], 45);
	_copy_memory((*Global_1900383)[iParam0], &(Global_1900383->f_463), 45);
}

int func_697(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_824(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_824(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_825(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_826(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_827(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_698(int iParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35))
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (func_828(iParam0))
	{
		return;
	}
	iVar0 = player_id();
	if (is_player_dead(iVar0))
	{
	}
	if (!is_entity_a_mission_entity(iParam0))
	{
		set_entity_as_mission_entity(iParam0, false, true);
	}
	_0xbcc76708e5677e1d(iParam0, 0);
	_0x931b241409216c1f(Global_35, iParam0, 0);
	_0xb8b6430ead2d2437(iParam0, 130495496);
	iVar1 = get_entity_model(iParam0);
	iVar2 = _get_default_relationship_group_hash(iVar1);
	set_ped_relationship_group_hash(iParam0, iVar2);
	set_entity_invincible(iParam0, false);
	_0xf74e134f40192884(iParam0, 1);
	_0xfd6943b6df77e449(iParam0, false);
	_0xdf93973251fb2ca5(iVar0, 1);
	request_ped_visibility_tracking(iParam0);
	_0xaeb97d84cdf3c00b(iParam0, 0);
	if (func_366(iParam0))
	{
		iVar3 = func_367(iParam0);
		if (func_829(iVar3))
		{
			set_ped_config_flag(iParam0, 324, true);
		}
	}
	set_ped_config_flag(iParam0, 211, true);
	set_ped_config_flag(iParam0, 208, true);
	set_ped_config_flag(iParam0, 209, true);
	set_ped_config_flag(iParam0, 400, true);
	set_ped_config_flag(iParam0, 297, true);
	set_ped_config_flag(iParam0, 136, false);
	set_ped_config_flag(iParam0, 312, false);
	set_ped_config_flag(iParam0, 113, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 277, true);
	set_ped_config_flag(iParam0, 319, true);
	set_ped_config_flag(iParam0, 6, true);
	set_animal_tuning_bool_param(iParam0, 25, false);
	set_animal_tuning_bool_param(iParam0, 24, false);
}

int func_699()
{
	return Global_1900383->f_393;
}

void func_700(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

int func_701(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_330())
	{
		if (func_830())
		{
			bVar0 = false;
			if (!func_497((*Global_1835011)[15]->f_1, 1) && !func_784(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_831();
				*iParam1 = func_832();
				*uParam2 = func_833();
				return 1;
			}
			else
			{
				*uParam0 = func_834();
				*iParam1 = func_835();
				*uParam2 = func_836();
				return 1;
			}
		}
		else if (func_246())
		{
			if (!func_497((*Global_1835011)[60]->f_1, 1))
			{
				*uParam0 = func_837();
				*iParam1 = func_838();
				*uParam2 = func_839();
				return 1;
			}
			else
			{
				*uParam0 = func_840();
				*iParam1 = func_841();
				*uParam2 = func_842();
				return 1;
			}
		}
	}
	else if (func_830())
	{
		*uParam0 = func_843();
		*iParam1 = func_844();
		*uParam2 = func_845();
		return 1;
	}
	else if (func_246())
	{
		*uParam0 = func_846();
		*iParam1 = func_847();
		*uParam2 = func_848();
		return 1;
	}
	return 0;
}

void func_702(int iParam0, var uParam1)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_8 = uParam1;
}

void func_703(int iParam0, var uParam1)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_9 = uParam1;
}

void func_704(int iParam0, var uParam1)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_10 = uParam1;
}

void func_705(int iParam0, int iParam1)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_14 = iParam1;
}

void func_706(int iParam0, int iParam1)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_551(iParam0);
	if (!is_model_valid(iVar0))
	{
		func_701(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = get_default_max_attribute_rank(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0]->f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = fVar4;
	func_849(iParam1);
	iVar5 = func_542(iParam0);
	if (!does_entity_exist(iVar5))
	{
		return;
	}
	if (is_entity_dead(iVar5) || is_ped_injured(iVar5))
	{
		return;
	}
	iVar6 = floor(Global_40.f_1095.f_1[iParam0]->f_372.f_1);
	set_attribute_points(iVar5, 7, iVar6);
	iVar7 = get_attribute_rank(iVar5, 7);
	Global_40.f_1095.f_1[iParam0]->f_372 = iVar7;
	_0xa69899995997a63b(iVar5, iVar7);
}

void func_707(int iParam0, int iParam1)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_24 = ((*Global_1900383)[iParam0]->f_24 || iParam1);
}

bool func_708(int iParam0, int iParam1)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return ((*Global_1900383)[iParam0]->f_24 && iParam1) != 0;
}

bool func_709(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_824(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_850(Var0, 1415981582, 0);
	if (!func_769(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_710(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_824(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_850(Var0, -2119169513, 0);
	if (!func_769(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_711(int iParam0, var uParam1)
{
	if (!func_851(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_852() };
	*uParam1 = func_850(Var0, iParam0, 0);
	if (!func_769(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_712(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	_0xdf631e4bce1b1fc4(iParam0, -1442703445, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, -1505972720, 0, 0);
}

void func_713(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	func_853(iParam0, *uParam1);
	func_853(iParam0, uParam1->f_1);
}

void func_714(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	_0xdf631e4bce1b1fc4(iParam0, 399422490, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, -1163401704, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, 88372018, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, -630346294, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, -273475295, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, -2142954459, 0, 0);
}

void func_715(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	func_853(iParam0, *uParam1);
	func_853(iParam0, uParam1->f_1);
	func_853(iParam0, uParam1->f_2);
	func_853(iParam0, uParam1->f_3);
	func_853(iParam0, uParam1->f_4);
	func_853(iParam0, uParam1->f_5);
}

int func_716(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!_0xa0bc8faed8cfeb3c(iParam0))
	{
		return 0;
	}
	iVar0 = get_entity_model(iParam0);
	if (!_does_metaped_outfit_exist_for_ped_model(iParam1, iVar0))
	{
		return 0;
	}
	_set_ped_body_component(iParam0, iParam1);
	if (bParam2)
	{
		_update_ped_variation(iParam0, true, true, true, true, false);
	}
	return 1;
}

bool func_717()
{
	return Global_1905944->f_5693 != -1;
}

bool func_718()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) <= 4);
}

bool func_719()
{
	return Global_1905944->f_5694;
}

bool func_720()
{
	uVar0 = Global_1905944->f_5695;
	Global_1905944->f_5695 = 0;
	return uVar0;
}

bool func_721(int iParam0, int iParam1)
{
	if (func_331() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_722(int iParam0)
{
	if (func_331() != -1)
	{
		if (func_562(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_562(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_723(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_724(int iParam0, vector3 vParam1, int iParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, int iParam9)
{
	if (_does_volume_exist(iParam9))
	{
		iVar12 = func_854(&iVar0, iParam0, iParam9, iVar0);
	}
	else
	{
		iVar12 = func_855(&iVar0, iParam0, iVar0, vParam1, iParam4);
	}
	iVar13 = 0;
	while (iVar13 < iVar12)
	{
		iVar14 = 0;
		if (is_this_model_a_train(get_entity_model(&(iVar0[iVar13]))))
		{
		}
		else if ((!bParam6 || get_ped_in_vehicle_seat(&(iVar0[iVar13]), -1) != 0) && (!bParam5 || get_entity_speed(&(iVar0[iVar13])) >= 1f))
		{
			vVar6 = { get_entity_coords(&(iVar0[iVar13]), true, false) };
			if (!func_69(vVar6))
			{
				vVar9 = { 0f, 0f, 0f };
				if (get_closest_vehicle_node(vVar6, &vVar9, 1, 3f, 0f))
				{
					if (func_384(vVar6, vVar9, iParam7, 0))
					{
						iVar14 = 1;
						iVar15 = 1;
					}
				}
			}
		}
		iVar13++;
	}
	return iVar15;
}

int func_725(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = create_itemset(true);
	iVar5 = _0x886171a12f400b89(iParam3, iVar0, 1);
	if (iVar5 > iParam2)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		iVar1 = get_indexed_item_in_itemset(iVar4, iVar0);
		iVar2 = iVar1;
		if (does_entity_exist(iVar2))
		{
			if (!is_entity_dead(iVar2))
			{
				if (func_856(iVar2))
				{
					if (!func_375(iVar2, iParam1))
					{
						if (iVar3 < *uParam0 && iVar3 < iParam2)
						{
							(*uParam0)[iVar3] = iVar2;
							iVar3++;
						}
					}
				}
			}
		}
		iVar4++;
	}
	destroy_itemset(iVar0);
	return iVar3;
}

int func_726(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6)
{
	iVar0 = _create_volume_cylinder(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	iVar1 = func_725(uParam0, iParam1, iParam2, iVar0);
	func_469(iVar0);
	return iVar1;
}

int func_727()
{
	return Global_40.f_4283;
}

Vector3 func_728(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1343.699f, 2429.397f, 307.0626f;
		case 1:
			return -123.1805f, -28.8611f, 94.8478f;
		case 2:
			return 667.9077f, -1252.78f, 42.9221f;
		case 3:
			return 1880.807f, -1873.231f, 41.8094f;
		case 4:
			return 1422.625f, -7332.473f, 80.5977f;
		case 5:
			return 2254.96f, -758.12f, 41.75f;
		case 6:
			return 2351.282f, 1362.077f, 104.9752f;
		case 7:
			return -2593.21f, 453.9533f, 145.9973f;
		case 8:
			return func_857();
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_729(int iParam0)
{
	if (func_858(iParam0))
	{
		if (func_216(Global_1360165[iParam0], 0))
		{
			return true;
		}
	}
	return false;
}

float func_730(int iParam0)
{
	if (!func_859(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

int func_731(int iParam0)
{
	if (func_858(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

float func_732(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_733(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_860(iParam0, iParam1))
		{
			if (!func_187(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_621(uParam2, 0, 0, 1, 0);
				func_245(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_187(iParam1->f_10, 1))
		{
			func_861(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_244(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_734(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_187(iParam4, 32);
		func_620(iParam1, uParam2, 0);
		iVar5 = func_862(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_621(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_187(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_187(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_187(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_187(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_187(iParam4, 8388608) || func_187(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_187(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_187(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_736(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_736(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_187(iParam4, 67108864))
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
				iParam6 = func_863(uParam0);
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
			if (func_187(iParam4, 268435456))
			{
				iVar8 = func_864(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_865(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_736(iParam1, 23))
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
			if (func_187(iParam4, 2) || func_187(iParam4, 16))
			{
				func_735(*uParam0, 1, 1);
			}
			else
			{
				func_735(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_735(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_736(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_737(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_866(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_738(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_867(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_187(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_739(int iParam0)
{
	if (func_187(iParam0, 4))
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
	if (func_187(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_187(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_740(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_613(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_868(Global_35)) || func_869(Global_35)) || func_870(Global_35));
	fVar12 = -1f;
	if (func_60(&(iParam1->f_13)))
	{
		fVar12 = func_197(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_334((*uParam4)[iVar0]->f_6);
		func_871(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_872(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_873(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_621(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_874(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_620(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_875(iParam1, fParam6, iParam1->f_9))
					{
						func_193(&(iParam1->f_18));
						if (bVar6)
						{
							func_874(uParam4, 0, 0);
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
		func_876(iParam1, fParam2);
	}
	return bVar5;
}

void func_741(var uParam0)
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

void func_742(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_877((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_876(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_743(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_878(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_879(iParam1, 0);
				func_620(iParam1, uParam2, func_736(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_744(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_193(&(iParam1->f_18));
			return false;
		}
		else if (func_60(&(iParam1->f_18)))
		{
			func_196(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_60(&(iParam1->f_18)))
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
	return func_307(&(iParam1->f_18), fParam2);
	return true;
}

void func_745(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_871(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_746(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_747(int* iParam0)
{
	if (func_736(iParam0, 0))
	{
		if (func_880(iParam0))
		{
			func_746(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_748(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_749(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_781(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_750(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_751(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

bool func_752(int iParam0, bool bParam1)
{
	if (bParam1 && !func_334(iParam0))
	{
		return false;
	}
	return !func_781(iParam0, 4);
}

int func_753(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	fVar0 = 999999.9f;
	iVar3 = -1;
	iVar2 = iParam1;
	while (iVar2 <= iParam2)
	{
		if (func_61(iParam0[iVar2], 0, 0))
		{
			fVar1 = &iParam0->f_9[iVar2];
			if (fVar1 < fVar0 && (!bParam3 || func_306(0f, 1, iParam0[iVar2], 1)))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar3;
}

float func_754(int iParam0, int iParam1, int iParam2)
{
	fVar1 = 999999.9f;
	iVar2 = iParam1;
	while (iVar2 <= iParam2)
	{
		if (func_61(iParam0[iVar2], 0, 1))
		{
			fVar0 = func_224(iParam0[iVar2], Global_36, 1);
			if (fVar0 < fVar1)
			{
				fVar1 = fVar0;
			}
		}
		iVar2++;
	}
	return fVar1;
}

bool func_755(int iParam0)
{
	if (func_61(&(iLocal_15[iParam0]), 0, 0))
	{
		if (func_225(&(iLocal_15[iParam0]), 1116471296, -1082130432, -1082130432, 50f))
		{
			if (has_entity_clear_los_to_entity(&(iLocal_15[iParam0]), Global_35, 17))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_756(int iParam0)
{
	if (iParam0->f_94 <= 0)
	{
		if (func_881())
		{
			iParam0->f_94 = func_185();
			return true;
		}
	}
	else if ((iParam0->f_94 - func_185()) < 5000)
	{
		return true;
	}
	return false;
}

void func_757(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_758()
{
	_0xdd1232b332cbb9e7(4, 1, 0);
}

int func_759(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_781(iVar0, 2))
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
				func_882(iVar1, iParam1, sParam0, 5, iParam3, fParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_760(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2 && !func_334(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_479(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	(*Global_1945938)[iVar0]->f_9 = fParam1;
	_uiprompt_context_set_size((*Global_1945938)[iVar0]->f_3, fParam1);
}

int func_761(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (!_does_volume_exist(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_781(iVar0, 2))
		{
			if (iParam2 == (*Global_1945938)[iVar0]->f_10 && iParam1 == (*Global_1945938)[iVar0]->f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_882(iVar1, iParam1, sParam0, 2, iParam3, fParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_762(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_69(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_781(iVar0, 2))
		{
			if (func_384(vParam2, (*Global_1945938)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1945938)[iVar0]->f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_882(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_763(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_334(iParam0))
	{
		return;
	}
	iVar0 = func_479(iParam0);
	func_749(iVar0, bParam1);
}

bool func_764(int iParam0, bool bParam1)
{
	if (bParam1 && !func_334(iParam0))
	{
		return false;
	}
	iVar0 = func_479(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

bool func_765(int iParam0, bool bParam1)
{
	if (bParam1 && !func_334(iParam0))
	{
		return false;
	}
	iVar0 = func_479(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

void func_766(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_883(iParam0, sParam4, iParam5);
	}
	func_884(iParam0, bParam1, fParam2, iParam3, iParam7);
}

bool func_767(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

bool func_768()
{
	if (func_885())
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

bool func_769(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_770(int iParam0, int iParam1)
{
	if (!func_769(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_775(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_886(iParam0, 1399091007))
	{
		func_887(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_771(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_769(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_888())
	{
		func_889(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_890(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_890(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_891(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_775(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if ((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_892(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (get_hash_key(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (is_string_null_or_empty(Var7))
	{
		return;
	}
	iVar12 = 109029619;
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (_item_database_is_overpowered_item(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_894(_create_var_string(10, &cVar2, _create_var_string(0, func_893(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_886(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_893(iParam0));
	}
	func_895(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

bool func_772(int iParam0, int iParam1, bool bParam2)
{
	if (!func_769(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_775(iParam0);
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
		if (!func_896(iParam0, 1))
		{
			return false;
		}
	}
	return func_774(iParam0, 0, bParam2) >= iParam1;
}

struct<2> func_773(int iParam0)
{
	if (!func_769(iParam0, 0))
	{
		return Var0;
	}
	if (func_886(iParam0, -305066475))
	{
		if (func_331() == -1)
		{
			if (func_886(iParam0, -537818634))
			{
				return func_160(189951448);
			}
			else
			{
				return func_160(1176172851);
			}
		}
	}
	else if (func_886(iParam0, -537818634))
	{
		return func_160(-963660207);
	}
	if (func_886(iParam0, 2084895747))
	{
		return func_160(1694039471);
	}
	return Var2;
}

int func_774(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_769(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_775(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_770(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_897(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_805(bParam2), iParam0, 0);
	return uVar2;
}

int func_775(int iParam0)
{
	if (!func_769(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_776(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_898(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_899(&Var0, func_797(0));
	}
	if (!func_900(&Var0, &iVar14, &iVar15, 0))
	{
		return false;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_901(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_640(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_902(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_777(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_769(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_635(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_903(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_639(iParam0, Var0, Var0.f_4, bParam4) };
	return func_640(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_778(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_886(iParam0, 606799272))
		{
			func_904(iParam0, iParam1);
		}
		if (func_886(iParam0, -1112814642) && func_886(iParam0, -1697809989))
		{
			func_905(iParam0, iParam1, 1, 0);
		}
	}
}

void func_779(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_613(1) < iParam0)
	{
		iParam0 = func_613(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_160(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_780(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_895(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

bool func_781(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_782(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_196(&(iParam0->f_18));
}

bool func_783(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_784(int iParam0)
{
	if (!func_906(iParam0))
	{
		return false;
	}
	return func_907(iParam0);
}

void func_785(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_909(func_908(255), 109029619));
	}
	else if (func_830())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_246();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_786(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_40.f_1095.f_1[iParam0]->f_372;
}

void func_787(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_909(func_908(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_830())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_246())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_788(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (*Global_1900383)[iParam0]->f_37;
}

float func_789(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_790(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_551(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_786(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_786(iParam0) + 1;
	fVar6 = func_910(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_911(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_791(int iParam0)
{
	_set_blip_flash_style(iParam0, -401963276);
	_set_blip_flash_style(iParam0, 231194138);
	_set_blip_flash_style(iParam0, -1012863186);
	_set_blip_flash_style(iParam0, -272772079);
	_set_blip_flash_style(iParam0, 1313031610);
	_set_blip_flash_style(iParam0, -1814032670);
	_set_blip_flash_style(iParam0, -1380599892);
	_set_blip_flash_style(iParam0, 430539302);
	_set_blip_flash_style(iParam0, -995247980);
	_set_blip_flash_style(iParam0, -25056193);
	_set_blip_flash_style(iParam0, -264630352);
}

void func_792(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_793(int iParam0)
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

bool func_794(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_795(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_912(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

struct<4> func_796(bool bParam0)
{
	return func_639(1328661203, func_913(), -1591664384, bParam0);
}

struct<4> func_797(bool bParam0)
{
	iVar0 = func_805(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_639(923904168, func_796(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_639(923904168, func_796(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_639(923904168, func_796(bParam0), -740156546, 0);
}

bool func_798(int iParam0, bool bParam1)
{
	if (func_800(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_784(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_799(bool bParam0)
{
	iVar0 = func_805(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_639(271701509, func_796(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_639(271701509, func_796(bParam0), 12999093, 0);
}

int func_800(int iParam0)
{
	if (!func_769(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_801(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_800(iParam0);
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

bool func_802(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_805(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_803(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_769(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_639(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_805(bParam6), &Var0, 0);
	return uVar4;
}

bool func_804(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_805(0);
	*uParam1 = { func_639(iParam0, func_797(0), iParam3, 0) };
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

int func_805(bool bParam0)
{
	if (func_331() == -1)
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

bool func_806(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_807(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

void func_808(var uParam0, var uParam1)
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

bool func_809(bool bParam0, int iParam1, int iParam2)
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

int func_810(int iParam0)
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

void func_811(int iParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_244(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_245(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_812(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_813(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_814(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_814(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_815(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_816(int iParam0)
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

int func_817(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_818(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

bool func_819(int iParam0)
{
	switch (iParam0)
	{
		case -1523757120:
		case -1516219602:
		case -1063137731:
		case 604357666:
		case 705691988:
		case 1048964673:
		case 1576849913:
			return true;
	}
	return false;
}

bool func_820()
{
	return _unlock_is_unlocked(99890643);
}

bool func_821(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_824(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_639(iParam1, Var0, 1415981582, 0) };
	return func_914(Var29, 1);
}

bool func_822(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_824(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_639(iParam1, Var0, -2119169513, 0) };
	return func_914(Var29, 1);
}

void func_823(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0] = 0;
		uParam0->f_10[iVar0]->f_1 = 0;
		uParam0->f_10[iVar0]->f_2 = 0;
		uParam0->f_10[iVar0]->f_3 = 0;
		uParam0->f_10[iVar0]->f_4 = 0;
		uParam0->f_10[iVar0]->f_5 = 0;
		uParam0->f_10[iVar0]->f_6 = 0;
		uParam0->f_10[iVar0]->f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

bool func_824(int iParam0, var uParam1)
{
	if (!func_915(iParam0))
	{
		return false;
	}
	iVar0 = func_825(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_796(0) };
	if (!func_916(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_917(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

int func_825(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
		case 1:
			return -832337898;
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

bool func_826(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	if (!func_641(bParam10))
	{
		return func_918(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_802(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (func_919(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!_0xdccaa7c3bfd88862(func_805(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_914(Var14, 1))
		{
		}
	}
	return true;
}

bool func_827(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!func_641(bParam9))
	{
		return func_920(Param0, Param4, iParam8, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	if (func_919(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_802(Param0, &Var0, bParam9, 1) || !func_802(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (func_919(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_805(0);
	if (!_0xf2753d691bcda314(iVar28, &Param0, &Param4))
	{
		return false;
	}
	if (!_0x734311e2852760d0(iVar28, &Param0, (Var14.f_10 || iParam8)))
	{
	}
	if (!_0x734311e2852760d0(iVar28, &Param4, (Var0.f_10 || iParam8)))
	{
	}
	return true;
}

bool func_828(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_921(get_entity_model(iParam0)))
	{
		return true;
	}
	if (decor_exist_on(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_829(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

bool func_830()
{
	if (func_331() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

int func_831()
{
	return 1342496140;
}

int func_832()
{
	return 446670976;
}

int func_833()
{
	return 1;
}

int func_834()
{
	return -868094182;
}

int func_835()
{
	return 1074477367;
}

int func_836()
{
	return 1;
}

int func_837()
{
	return -997197050;
}

int func_838()
{
	return -2063289686;
}

int func_839()
{
	return 2;
}

int func_840()
{
	return -868094182;
}

int func_841()
{
	return 1074477367;
}

int func_842()
{
	return 1;
}

int func_843()
{
	return 1235275977;
}

int func_844()
{
	return 2030804811;
}

int func_845()
{
	return 1;
}

int func_846()
{
	return 1974379573;
}

int func_847()
{
	return 2024948086;
}

int func_848()
{
	return 1;
}

void func_849(int iParam0)
{
	if (func_922() < iParam0)
	{
		func_923(iParam0);
	}
}

int func_850(struct<4> Param0, int iParam4, int iParam5)
{
	Var0.f_9 = -1591664384;
	if (func_924(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_851(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_800(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_925(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (_item_database_get_has_slot_info(iVar5, iVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
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

struct<4> func_852()
{
	Var0 = { func_796(0) };
	return func_639(856287005, Var0, -218846335, 0);
}

void func_853(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam1 == -377364164 || iParam1 == 357708345)
	{
		return;
	}
	iVar0 = iParam1;
	_set_ped_component_enabled(iParam0, iVar0, false, false, false);
}

int func_854(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = create_itemset(true);
	iVar6 = _0x886171a12f400b89(iParam2, iVar0, 2);
	if (iVar6 >= iParam3)
	{
	}
	iVar5 = 0;
	while (iVar5 < iVar6)
	{
		iVar1 = get_indexed_item_in_itemset(iVar5, iVar0);
		iVar2 = iVar1;
		if (is_entity_a_vehicle(iVar2))
		{
			iVar3 = iVar1;
			if (!func_926(iVar3, iParam1))
			{
				(*iParam0)[iVar4] = iVar3;
				iVar4++;
			}
		}
		if (iVar4 >= iParam3)
		{
		}
		else
		{
			iVar5++;
		}
	}
	destroy_itemset(iVar0);
	return iVar4;
}

int func_855(int iParam0, int iParam1, int iParam2, vector3 vParam3, int iParam6)
{
	iVar0 = _create_volume_sphere(vParam3, 0f, 0f, 0f, iParam6, iParam6, iParam6);
	iVar1 = func_854(iParam0, iParam1, iVar0, iParam2);
	func_469(iVar0);
	return iVar1;
}

bool func_856(int iParam0)
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

Vector3 func_857()
{
	if (func_389(70))
	{
		return -1634.252f, -1358.577f, 83.9077f;
	}
	if (func_389(73))
	{
		return -1665.419f, -1346.258f, 84.11175f;
	}
	return -1641.1f, -1359.979f, 83.4932f;
}

bool func_858(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_859(int iParam0)
{
	return iParam0 > -1;
}

bool func_860(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_927((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_861(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_877((*uParam0)[iVar0]))
		{
			func_585((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_862(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_928(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_334((*uParam2)[iVar0]->f_6))
		{
			func_585((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_863(var uParam0)
{
	iVar0 = func_123(*uParam0);
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

int func_864(var uParam0, int iParam1)
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

void func_865(int* iParam0, int* iParam1)
{
	if (!func_736(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_585(iParam1, 19);
			func_879(iParam0, 23);
			func_929(iParam1, 2);
		}
	}
}

bool func_866(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_767(16))
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
					func_930(16);
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

void func_867(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_928(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

bool func_868(int iParam0)
{
	return (func_931(iParam0, 4) || func_931(iParam0, 5));
}

int func_869(int iParam0)
{
	return func_931(iParam0, 7);
}

int func_870(int iParam0)
{
	return func_931(iParam0, 6);
}

void func_871(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_877(iParam1))
		{
			clear_bit(iParam1, 14);
			func_928(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_872(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_932(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_752(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_591(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_591(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_933(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_873(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_765(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_934(iParam1, 1))
	{
		func_935(iParam1, 1);
		return true;
	}
	return false;
}

void func_874(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_584((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_875(int* iParam0, float fParam1, bool bParam2)
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

void func_876(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_877(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_878(int iParam0)
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

void func_879(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_880(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_881()
{
	if (((func_432(Global_35, 501393341) || func_432(Global_35, 1553520516)) || func_432(Global_35, 1920417248)) || is_control_just_pressed(0, -874806616))
	{
		return true;
	}
	return false;
}

void func_882(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, float fParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
{
	(*Global_1945938)[iParam0]->f_4 = iParam1;
	(*Global_1945938)[iParam0] = iParam4;
	(*Global_1945938)[iParam0]->f_16 = get_id_of_this_thread();
	(*Global_1945938)[iParam0]->f_2 = fParam5;
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
	_uiprompt_set_transport_mode(iVar0, fParam5);
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
			_uiprompt_set_standardized_hold_mode(iVar0, bParam24);
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
	func_749(iParam0, 1);
	func_750(iParam0, 1);
	func_751(iParam0, 128);
}

void func_883(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_895(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_884(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_936())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_895(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_937(iVar0);
			func_938(iVar0, 0, 0);
		}
		func_895(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_161(func_160(1644987397), iVar1);
	}
}

bool func_885()
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

bool func_886(int iParam0, int iParam1)
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

void func_887(int iParam0, var uParam1, var uParam2)
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

bool func_888()
{
	return !&Global_1911774;
}

void func_889(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774->f_4[Global_1911774->f_3] = iParam0;
	Global_1911774->f_4[Global_1911774->f_3]->f_1 = iParam1;
	Global_1911774->f_4[Global_1911774->f_3]->f_2 = bParam2;
	Global_1911774->f_4[Global_1911774->f_3]->f_3 = bParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_890(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_891(int iParam0, int iParam1)
{
	if (!func_769(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_892(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (is_string_null_or_empty(&(Var3.f_2[iVar0])))
			{
				Jump @227; //curOff = 56
			}
			else if (is_string_null_or_empty(Var3.f_2[iVar0]->f_1))
			{
			}
			else
			{
				iVar1 = get_hash_key(&(Var3.f_2[iVar0]));
				iVar2 = get_hash_key(Var3.f_2[iVar0]->f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0]->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *Var3.f_2[iVar0] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_893(int iParam0)
{
	if (!func_769(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

char* func_894(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

var func_895(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _0xb249ebcb30dd88e0(&Var0, &Var13, iParam8);
	func_939(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_896(int iParam0, int iParam1)
{
	if (!func_769(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_770(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_940("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_901(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_333(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_902(iVar1);
				return true;
			}
			iVar3++;
		}
		func_902(iVar1);
	}
	return false;
}

int func_897(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_898(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_899(&Var0, func_797(0));
	}
	if (!func_900(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_902(iVar14);
	return uVar15;
}

struct<14> func_898(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_899(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_900(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_805(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_901(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_902(int iParam0)
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

bool func_903(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_806(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_641(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_805(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_904(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_331() == -1)
	{
		if (func_941(43))
		{
			if (func_886(iParam0, 412399755))
			{
				func_942(-1791518714);
				if (func_943() == 0)
				{
					func_163(0, 10);
					iVar0 = func_944(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_945(iParam0) < func_946(iParam0))
						{
							func_947(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_941(44))
		{
			if (func_886(iParam0, 709057512))
			{
				func_942(-2087881550);
				if (func_943() == 1)
				{
					func_163(0, 10);
					iVar0 = func_944(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_945(iParam0) < func_946(iParam0))
						{
							func_947(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_941(45))
		{
			if (func_886(iParam0, -1478961327))
			{
				func_942(1908068621);
				if (func_943() == 2)
				{
					func_163(0, 10);
					iVar0 = func_944(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_945(iParam0) < func_946(iParam0))
						{
							func_947(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_941(46))
		{
			if (func_886(iParam0, -1238404098))
			{
				func_942(1611247019);
				if (func_943() == 3)
				{
					func_163(0, 10);
					iVar0 = func_944(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_945(iParam0) < func_946(iParam0))
						{
							func_947(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_941(47))
		{
			if (func_886(iParam0, 1160548794))
			{
				func_942(1319635688);
				if (func_943() == 4)
				{
					func_163(0, 10);
					iVar0 = func_944(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_945(iParam0) < func_946(iParam0))
						{
							func_947(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_905(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_772(func_948(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_949(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_950(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

bool func_906(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_907(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

char* func_908(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_951(37, iParam0))
		{
			return _0xd8402b858f4ddd88(&(Global_1109400->f_12), get_length_of_literal_string(&(Global_1109400->f_12)));
		}
		else
		{
			return get_player_name(player_id());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!&Global_1225639->f_21[iParam0])
	{
		return sVar0;
	}
	if (func_951(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_909(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_894(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_910(int iParam0)
{
	iParam0 = func_493(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_40.f_1095.f_1[iParam0]->f_372.f_1;
}

float func_911(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_912(int iParam0)
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

struct<4> func_913()
{
	return Var0;
}

bool func_914(struct<4> Param0, int iParam4)
{
	if (!func_641(0))
	{
		return func_952(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_802(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_805(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_915(int iParam0)
{
	iVar0 = func_825(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_796(0) };
	if (func_953(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

bool func_916(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_805(bParam7);
	if (_0x033ee4b89f3ac545(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return false;
	}
	if (!_0xbe012571b25f5aca(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

bool func_917(var uParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(func_805(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

int func_918(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_802(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_919(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_803(Var0.f_4, Param4, iParam8, 0);
	iVar15 = _0xe80e50bee276a54a(Var0.f_4, iParam8);
	if (iVar15 >= 0)
	{
		if (iVar14 >= iVar15)
		{
			return -1;
		}
		else if ((iVar14 + Var0.f_11) > iVar15)
		{
			if (bParam11)
			{
				return -1;
			}
			Var0.f_11 = (iVar15 - iVar14);
		}
	}
	Var16 = { func_954(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar32 = func_955(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

bool func_919(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_920(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	if (func_919(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_802(Param0, &Var0, 1, 0) || !func_802(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_919(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_954(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var44 = { func_954(&Var14) };
	Var44.f_4 = { Var0.f_5 };
	Var44.f_11 = Var0.f_9;
	Var44.f_10 = (Var0.f_10 || iParam8);
	iVar60 = -1;
	if (bParam9)
	{
		if (_cashinventory_transaction_start(&iVar60, 712853601, 1168099063))
		{
			if (_cashinventory_transaction_add_item(iVar60, &Var28, 16) && _cashinventory_transaction_add_item(iVar60, &Var44, 16))
			{
				if (_cashinventory_transaction_checkout(iVar60))
				{
					func_956(iVar60, 1);
				}
				else
				{
					_cashinventory_transaction_delete(iVar60);
					return -1;
				}
			}
			else
			{
				_cashinventory_transaction_delete(iVar60);
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		iVar60 = func_955(1168099063, &Var28, 0);
		iVar60 = func_955(1168099063, &Var44, 0);
	}
	return iVar60;
}

bool func_921(int iParam0)
{
	switch (iParam0)
	{
		case -1760684159:
		case -1718100160:
		case -1642485146:
		case -1486704931:
		case -1391147923:
		case -1356425746:
		case -1181161469:
		case -1084397164:
		case -1053639984:
		case -941733863:
		case -646460384:
		case -575759638:
		case -548014618:
		case 291878635:
		case 979093383:
		case 1139858530:
		case 1760888205:
		case 1800725969:
			return true;
	}
	return false;
}

int func_922()
{
	return Global_40.f_1095.f_3135;
}

void func_923(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

bool func_924(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_805(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_802(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_925(int iParam0)
{
	if (!func_769(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_800(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

bool func_926(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (iParam0 == iParam1[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_927(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_928(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_334(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_335(&(iParam1->f_6), 0, 1);
	}
	if (!func_334(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_877(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_759(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_334(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_933(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_957(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_958(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_589(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_957(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_591(iParam1->f_6, 0, 1);
				}
				else
				{
					func_591(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_929(int* iParam0, int iParam1)
{
	if (!func_583(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_585(iParam0, 14);
		}
	}
}

void func_930(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_931(int iParam0, int iParam1)
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

bool func_932(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_933(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_334(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_479(iParam0);
	func_957(iParam0, 18, 0, 1);
	func_957(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_934(int iParam0, bool bParam1)
{
	if (bParam1 && !func_334(iParam0))
	{
		return false;
	}
	iVar0 = func_479(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_935(int iParam0, bool bParam1)
{
	if (bParam1 && !func_334(iParam0))
	{
		return;
	}
	iVar0 = func_479(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

bool func_936()
{
	if (func_959())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_937(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_960((Global_40.f_4283.f_325 + iParam0));
}

void func_938(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_936())
	{
		func_895(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_895(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

void func_939(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_940(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_805(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_941(int iParam0)
{
	if (func_331() != -1)
	{
		return false;
	}
	return func_497((*Global_1347702)[iParam0]->f_15, 1);
}

void func_942(int iParam0)
{
	if (!func_961(iParam0))
	{
		func_963(func_962(iParam0));
	}
}

int func_943()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_961(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_944(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_945(iVar9);
	iVar2 = func_945(iVar10);
	iVar3 = func_945(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_945(iVar12);
	}
	iVar5 = func_946(iVar9);
	iVar6 = func_946(iVar10);
	iVar7 = func_946(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_946(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_945(int iParam0)
{
	if (func_772(iParam0, 1, 0))
	{
		iVar0 = func_774(iParam0, 0, 0);
	}
	return iVar0;
}

int func_946(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return 5;
		case -164081697:
			return 5;
		case -1161319399:
			return 5;
		case 728781265:
			return 15;
		case -222563712:
			return 20;
		case 1794857344:
			return 7;
		case 1952409553:
			return 10;
		case 2116770557:
			return 25;
		case -651064726:
			return 3;
		case -404270094:
			return 7;
		case 2093126853:
			return 5;
		case 2085530337:
			return 30;
		case -150591160:
			return 5;
		case -323969289:
			return 10;
		case 1504361882:
			return 5;
		case -1521783510:
			return 5;
		case 1714875242:
			return 5;
		case 1019229063:
			return 5;
		case 927763737:
			return 10;
		default:
			break;
	}
	return 0;
}

void func_947(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_330() && (func_964(38) || func_941(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = get_hash_key("BLIP_RC_PHINEAS");
				iVar13 = 38816757;
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838;
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_330() && (func_964(39) || func_941(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770;
				iVar13 = -1223580455;
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_965(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_330() && (func_964(41) || func_941(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610;
			iVar13 = -1666208710;
			break;
		case 49:
			if (func_330() && (func_964(49) || func_941(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276;
				iVar13 = -170865073;
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_965(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_966(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_967(iParam0, iVar13, iVar14))
	{
	}
	if (func_968(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_969(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_970(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_971(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_972(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

int func_948(int iParam0, int iParam1)
{
	if (!func_973(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_949(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_948(iParam1, 5) || iParam0 == func_948(iParam1, 6)) || iParam0 == func_948(iParam1, 7)) || iParam0 == func_948(iParam1, 8)) || iParam0 == func_948(iParam1, 9))
	{
		func_974(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_947(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_975(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_950(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_948(iParam1, 5) || iParam0 == func_948(iParam1, 6)) || iParam0 == func_948(iParam1, 7)) || iParam0 == func_948(iParam1, 8)) || iParam0 == func_948(iParam1, 9))
	{
		if (func_974(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_947(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_975(51, 0, 0, iVar0, func_965(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_947(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_975(51, 0, 0, iVar0, func_965(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_951(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_976(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_977())
	{
		return func_976(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_976(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

int func_952(struct<4> Param0, int iParam4, bool bParam5)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_802(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_775(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_978(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_979(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_980(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_981(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_954(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_955(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_953(var uParam0, int iParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_805(bParam2), uParam0, iParam1);
}

struct<16> func_954(var uParam0)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	return Var0;
}

int func_955(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			if (_cashinventory_transaction_add_item(iVar0, uParam1, 16))
			{
				if (_cashinventory_transaction_checkout(iVar0))
				{
					func_956(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_956(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16))
	{
		func_956(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_956(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1224227)
	{
		if (&Global_1224227->f_1[iVar0] == iParam0)
		{
			if (Global_1224227->f_1[iVar0]->f_1 == iParam1)
			{
			}
			else
			{
				Global_1224227->f_1[iVar0]->f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_982(iParam0, iParam1);
}

void func_957(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_334(iParam0))
	{
		return;
	}
	iVar0 = func_479(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_958(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_334(iParam0))
	{
		return;
	}
	iVar0 = func_479(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

bool func_959()
{
	return _unlock_is_unlocked(-121456797);
}

void func_960(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_160(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

bool func_961(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_962(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		case -2087881550:
			return 2;
		case 1908068621:
			return 4;
		case 1611247019:
			return 8;
		case 1319635688:
			return 16;
		default:
			break;
	}
	return 0;
}

void func_963(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_964(int iParam0)
{
	if (func_331() != -1)
	{
		return false;
	}
	if (!func_221(iParam0))
	{
		return false;
	}
	return func_983((*Global_1347702)[iParam0]->f_15);
}

int func_965(int iParam0, int iParam1)
{
	if (!func_973(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_966(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_984() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_985(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_986(), 12);
			}
			break;
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_987() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_988(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_987(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_989(), 13);
			}
			break;
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_990() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_991(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_990(), 10);
			}
			break;
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = _create_var_string(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_965(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_967(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (_uilog_is_entry_registered(3, 578982838))
			{
				_uilog_remove_entry(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (_uilog_is_entry_registered(3, 349797279))
			{
				_uilog_remove_entry(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (_uilog_is_entry_registered(3, 1974744712))
			{
				_uilog_remove_entry(3, 1974744712);
			}
		}
	}
	if (_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_remove_entry(3, iParam1);
	}
	return true;
}

bool func_968(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_969(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_970(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_992(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_772(iVar2, 1, 0) || func_994(func_993(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_995(func_992(iVar0))), func_995(func_992(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_987() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_996(iVar0)), func_996(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_988() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_996(iVar0)), func_996(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_996(iVar0)), func_996(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_948(iParam3, func_997(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_945(iVar2) - iParam7) >= func_965(iParam3, func_998(iVar0));
				}
				else
				{
					bVar1 = func_945(iVar2) >= func_965(iParam3, func_998(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_945(iVar2) + iParam7) >= func_965(iParam3, func_998(iVar0));
			}
			else
			{
				bVar1 = func_945(iVar2) >= func_965(iParam3, func_998(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_999(iVar2)), func_999(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1000(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1001(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1001(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_990() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1002(iVar0)), func_1002(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_991() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1002(iVar0)), func_1002(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1002(iVar0)), func_1002(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_948(iParam3, func_997(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_945(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1003(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1003(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1004(iVar2)), func_1004(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_971(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == -2076669067)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == -1531394072)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == 1995362678)
	{
		if (func_989() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == 678508515)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, true, false);
	}
	return true;
}

bool func_972(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_223(func_1005(0)) && ((func_1006(0) == 1 || func_1006(0) == 8) || func_1006(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			_uilog_mark_entry_availability(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				_uilog_mark_entry_availability(3, iParam1, 1, "");
			}
		}
	}
	return true;
}

bool func_973(int iParam0, var uParam1)
{
	if (!func_1007(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

bool func_974(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793;
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239;
			}
			break;
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432;
				iVar1 = -843795569;
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854;
				iVar1 = -843795569;
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854;
				iVar1 = 1761263432;
			}
			break;
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1464585113;
			}
			break;
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = 102446365;
			}
			break;
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 924882045;
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 59384454;
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_1003(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1003(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1003(iVar0))
		{
			*iParam2++;
		}
		if (func_1003(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1003(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1003(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1003(iVar0))
		{
			*iParam2++;
		}
		if (func_1003(iVar1))
		{
			*iParam2++;
		}
		if (func_1003(iVar0) && func_1003(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1003(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1003(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1003(iVar0))
		{
			*iParam2++;
		}
		if (func_1003(iVar1))
		{
			*iParam2++;
		}
		if (func_1003(iVar2))
		{
			*iParam2++;
		}
		if ((func_1003(iVar0) && func_1003(iVar1)) && func_1003(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1003(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1003(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1003(iVar0))
		{
			*iParam2++;
		}
		if (func_1003(iVar1))
		{
			*iParam2++;
		}
		if (func_1003(iVar2))
		{
			*iParam2++;
		}
		if (func_1003(iVar3))
		{
			*iParam2++;
		}
		if (((func_1003(iVar0) && func_1003(iVar1)) && func_1003(iVar2)) && func_1003(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_975(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_330() && (func_964(38) || func_941(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = get_hash_key("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757;
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_330() && (func_964(39) || func_941(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770;
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455;
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963;
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610;
			iVar6 = -1666208710;
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_330() && (func_964(49) || func_941(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276;
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073;
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931;
			iVar6 = -1424865411;
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar5 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar5 = get_hash_key("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_330() && (func_964(38) || func_941(38)))
		{
			iVar6 = 38816757;
		}
		else
		{
			iVar6 = 578982838;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_1008(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1008(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_1010(_create_var_string(2, sVar0), _create_var_string(2, func_995(func_1009(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1008(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1008(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_330() && (func_964(39) || func_941(39)))
		{
			iVar6 = -1223580455;
		}
		else
		{
			iVar6 = 349797279;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1008(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1008(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_330() && (func_964(49) || func_941(49)))
		{
			iVar6 = -170865073;
		}
		else
		{
			iVar6 = 1974744712;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1008(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1008(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1008(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1008(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_976(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_977()
{
	return Global_1109400->f_245;
}

struct<28> func_978(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_805(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_954(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_979(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			if (_cashinventory_transaction_add_item(iVar0, uParam1, 28))
			{
				if (_cashinventory_transaction_checkout(iVar0))
				{
					func_956(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_956(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28))
	{
		func_956(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_980(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_805(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_954(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_981(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			if (_cashinventory_transaction_add_item(iVar0, uParam1, 17))
			{
				if (_cashinventory_transaction_checkout(iVar0))
				{
					func_956(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_956(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17))
	{
		func_956(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_982(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1224227 < 20)
	{
		Global_1224227 = &Global_1224227 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1224227->f_1[iVar0] = { *(Global_1224227->f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	*(Global_1224227->f_1[(&Global_1224227 - 1)]) = { Var1 };
}

bool func_983(int iParam0)
{
	iVar0 = func_630(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_984()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_772(func_1011(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_985()
{
	return func_1012(Global_40.f_12019);
}

int func_986()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_1011(iVar1);
		if (func_772(iVar2, 1, 0) || func_994(func_993(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_987()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1013(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_988()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1014(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_989()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1000(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_990()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

int func_991()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_992(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_993(int iParam0)
{
	switch (iParam0)
	{
		case -1230863414:
			return 1;
		case -1021394391:
			return 8;
		case 232875659:
			return 4;
		case -1028735103:
			return 16;
		case 554799588:
			return 32;
		case 1265323898:
			return 64;
		case -1854702679:
			return 128;
		case -987306668:
			return 256;
		case -479775696:
			return 2;
		case 515229791:
			return 512;
		case -435742319:
			return 1024;
		case 1423129537:
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_994(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_995(int iParam0)
{
	switch (iParam0)
	{
		case 554799588:
			return "COL_CC_GUN_SET";
		case -1021394391:
			return "COL_CC_ART_SET";
		case -987306668:
			return "COL_CC_LND_SET";
		case -1028735103:
			return "COL_CC_GRL_SET";
		case 515229791:
			return "COL_CC_PLT_SET";
		case -1230863414:
			return "COL_CC_ACT_SET";
		case 232875659:
			return "COL_CC_AML_SET";
		case 1423129537:
			return "COL_CC_VEH_SET";
		case -435742319:
			return "COL_CC_SPT_SET";
		case -1854702679:
			return "COL_CC_INV_SET";
		case 1265323898:
			return "COL_CC_HOR_SET";
		case -479775696:
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

char* func_996(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_997(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_998(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return 15;
}

char* func_999(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return "COL_EP_LITTLE_FOUND";
		case -164081697:
			return "COL_EP_REDDISH_FOUND";
		case -1161319399:
			return "COL_EP_SNOWY_FOUND";
		case 728781265:
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case -222563712:
			return "COL_HF_FOUND";
		case 1794857344:
			return "COL_RO_LADY_SLIPPER_FOUND";
		case 1952409553:
			return "COL_RO_MOCCASIN_FOUND";
		case 2116770557:
			return "COL_GF_FOUND";
		case -651064726:
			return "COL_RO_ACUNAS_STAR_FOUND";
		case -404270094:
			return "COL_RO_CIGAR_FOUND";
		case 2093126853:
			return "COL_RO_GHOST_FOUND";
		case 2085530337:
			return "COL_SF_FOUND";
		case -150591160:
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case -323969289:
			return "COL_RO_RAT_TAIL_FOUND";
		case 1504361882:
			return "COL_RO_SPIDER_FOUND";
		case -1521783510:
			return "COL_RO_CLAMSHELL_FOUND";
		case 1714875242:
			return "COL_RO_DRAGONS_FOUND";
		case 1019229063:
			return "COL_RO_QUEENS_FOUND";
		case 927763737:
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_1000(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_1001(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_1002(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

bool func_1003(int iParam0)
{
	if (func_1015(iParam0) && func_772(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1016(iParam0) && func_1017(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1004(int iParam0)
{
	if (!func_769(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_893(iParam0));
}

int func_1005(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_1006(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

bool func_1007(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

var func_1008(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

int func_1009(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

var func_1010(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_1011(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_1012(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_1013(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1014(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_1015(int iParam0)
{
	switch (iParam0)
	{
		case 444160793:
			return true;
		case -1969404854:
			return true;
		case 1761263432:
			return true;
		case -843795569:
			return true;
		case -832850511:
			return true;
		case -1464585113:
			return true;
		case -1290897778:
			return true;
		case -100913452:
			return true;
		case 313332607:
			return true;
		case -124539232:
			return true;
		case 59384454:
			return true;
		case 905173572:
			return true;
		case 1432949803:
			return true;
		case -983831788:
			return true;
		case -1882344824:
			return true;
		default:
			break;
	}
	return false;
}

int func_1016(int iParam0)
{
	switch (iParam0)
	{
		case -1866642239:
			return 1;
		case -935543049:
			return 1;
		case 102446365:
			return 1;
		case 924882045:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1017(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1018(&iVar0, 0, iVar95, &Var1) && !func_1018(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_1019(iVar0, &Var1);
			if (func_769(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

bool func_1018(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_543(iParam1) && !func_544(iParam1))
	{
		iVar0 = func_542(iParam1);
	}
	else
	{
		return false;
	}
	func_823(uParam3);
	iVar5 = func_818(iParam2);
	if (!_0x608bc6a6aacd5036(&Var1, iVar0, iVar5, 0))
	{
		return false;
	}
	*iParam0 = Var1.f_3;
	if (!does_entity_exist(*iParam0))
	{
		return false;
	}
	if (is_entity_a_mission_entity(*iParam0) && !_0x88ad6cc10d8d35b2(*iParam0))
	{
		return false;
	}
	*uParam3 = get_entity_model(*iParam0);
	uParam3->f_2 = _0xd21c7418c590bb40(*iParam0);
	uParam3->f_3 = _get_entity_carry_config(*iParam0);
	return true;
}

void func_1019(int iParam0, int iParam1)
{
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_1020(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1021(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1020(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = _get_ped_damage(iParam0);
	*uParam2 = _0xf8b48a361dc388ae(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = _get_ped_quality(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_1021(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = _0x9e7738b291706746(uParam0, iParam1, iParam2);
	return uVar2;
}

