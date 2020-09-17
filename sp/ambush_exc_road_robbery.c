void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(523))
	{
		iLocal_532 = 1;
	}
	while (true)
	{
		func_2(bVar530, 961, 0);
		if (bVar530)
		{
			wait(0);
		}
		else
		{
			if (Local_15.f_95 < 13)
			{
				if (func_3(&ScriptParam_0))
				{
					func_4(&Local_15, 13);
				}
			}
			if (func_5())
			{
				func_6();
			}
			func_7();
			switch (Local_15.f_95)
			{
				case 0:
					if (func_8(ScriptParam_0))
					{
						func_4(&Local_15, 1);
					}
					break;
				case 1:
					if (func_9())
					{
						if (func_10())
						{
							func_4(&Local_15, 2);
						}
						else if (Local_15.f_217 > 0)
						{
							func_4(&Local_15, 3);
						}
						else if (Local_15.f_218 > 0)
						{
							func_4(&Local_15, 4);
						}
						else if (Local_15.f_216 > 0)
						{
							func_4(&Local_15, 5);
						}
						else
						{
							func_4(&Local_15, 6);
						}
					}
					break;
				case 2:
					if (func_10())
					{
						func_11();
					}
					func_4(&Local_15, 3);
					break;
				case 3:
					if (func_12())
					{
						if (func_13())
						{
							func_4(&Local_15, 4);
						}
					}
					break;
				case 4:
					if (func_14())
					{
						func_4(&Local_15, 5);
					}
					break;
				case 5:
					if (func_15())
					{
						func_4(&Local_15, 6);
					}
					break;
				case 6:
					if (func_16())
					{
						func_4(&Local_15, 7);
					}
					break;
				case 7:
					if (func_17())
					{
						Global_40.f_9632[Local_15.f_151]->f_2 = (1 + Global_40.f_9632[Local_15.f_151]->f_2);
						if (func_18(Global_1393447, 65536))
						{
							func_19(Global_1393447, 65536);
						}
						if (func_18(Global_1393447, 16))
						{
							func_19(Global_1393447, 16);
						}
						func_4(&Local_15, 8);
					}
					break;
				case 8:
					if (func_20())
					{
						if (Local_15.f_20 > (100f - 10f))
						{
							func_21();
							func_4(&Local_15, 9);
						}
						else
						{
							func_22(&Local_15, 16);
						}
					}
					break;
				case 9:
					if (func_23())
					{
						Local_15.f_225 = get_entity_health(Global_35);
						Local_15.f_226 = func_24();
						if (Global_40.f_9632.f_194 != Local_15.f_151)
						{
							switch (Local_15.f_151)
							{
								case 0:
								case 5:
								case 6:
								case 11:
								case 35:
								case 42:
									break;
								default:
									func_25(&Local_15, 1);
									break;
							}
						}
						func_26();
						func_27(&Local_15);
						Local_15.f_21 = Local_15.f_20;
						func_28(&Local_15, 1);
						_0x45ef176b532ca851(player_id(), 0);
						func_22(&Local_15, 16384);
						func_4(&Local_15, 10);
					}
					break;
				case 10:
					func_29();
					if (func_30(&Local_15, 32768) || func_31())
					{
						switch (Local_15.f_151)
						{
							case 0:
							case 5:
							case 6:
							case 11:
							case 35:
							case 42:
								break;
							default:
								func_32(&Local_15, 1);
								break;
						}
						func_33(&Local_15, 1);
						func_34(120, 0, 1);
						func_35(1, -1, 0, 0, 0);
						func_36(&Local_15);
						func_4(&Local_15, 11);
					}
					break;
				case 11:
					func_37(&Local_15);
					func_38();
					if (func_39(&Local_15))
					{
						if (func_18(Global_1393447, 16))
						{
							func_19(Global_1393447, 16);
						}
						func_40(&(Local_15.f_244), 0);
						func_4(&Local_15, 12);
					}
					break;
				case 12:
					func_41(&Local_15);
					func_38();
					if (func_42())
					{
						if (func_18(Global_1393447, 16))
						{
							func_19(Global_1393447, 16);
						}
						func_4(&Local_15, 13);
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
		if (func_30(&Local_15, 4))
		{
			func_44(0);
			func_45(&Local_15, 4);
		}
	}
	fVar0 = 8f;
	if (Local_15.f_151 == 17)
	{
		fVar0 = 12f;
	}
	if (((!func_46() && !func_47(&(Local_15.f_250), fVar0)) && !is_screen_faded_out()) && !func_48())
	{
		func_40(&(Local_15.f_250), 0);
		return;
	}
	if (func_47(&(Local_15.f_250), fVar0))
	{
	}
	func_37(&Local_15);
	func_49();
	func_50(&Local_15, 0);
	func_51();
	func_52(&Local_15);
	_0x45ef176b532ca851(player_id(), 0);
	func_28(&Local_15, 1);
	func_53(&Local_15, 0);
	if (Local_15.f_93 != 0)
	{
		remove_shocking_event(Local_15.f_93);
	}
	if (_does_volume_exist(Local_15.f_237))
	{
		func_54(&Local_15);
		func_55(Local_15.f_237);
	}
	func_33(&Local_15, 1);
	if (Local_15.f_95 >= 9 && Local_15.f_95 < 11)
	{
		if (func_56(Local_15.f_151))
		{
		}
		else if (func_57(Local_15.f_151, 1) || func_58(Local_15.f_151, 1))
		{
			func_59(Global_1393447, 2048);
			if (!func_60(&(Local_15.f_244)))
			{
				func_34(120, 0, 1);
			}
		}
	}
	if (func_61(Global_35, 0, 0))
	{
		set_entity_invincible(Global_35, false);
	}
	if (func_61(Local_15.f_56, 0, 0))
	{
		set_entity_invincible(Local_15.f_56, false);
	}
	if (are_strings_equal(_0xf81c53561d15f330(), func_62(Local_15.f_151)))
	{
		_0x1096603b519c905f("");
	}
	func_63(Local_15.f_151);
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
	if (Local_15.f_95 <= 9 && Local_15.f_96 & 2097152 == 0)
	{
		if (func_18(Global_1393447, 2))
		{
			if (func_67(&Local_15))
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
	if (Local_15.f_96 & 16 != 0)
	{
		return true;
	}
	if (Local_15.f_95 < 10 && Local_15.f_96 & 1048576 == 0)
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
			if (!func_69(Local_15.f_209))
			{
				if (Local_15.f_20 > 207f)
				{
					if (Local_15.f_223 == 0)
					{
						Local_15.f_223 = get_game_timer() + 1000;
						return false;
					}
					else if (Local_15.f_223 < get_game_timer())
					{
						vVar0 = { func_70(player_id()) };
						return true;
					}
				}
				else
				{
					Local_15.f_223 = 0;
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
			while (iVar3 < Local_15.f_215)
			{
				if (&Local_15.f_9[iVar3] < fVar4)
				{
					if (func_61(&(Local_15[iVar3]), 0, 1))
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

void func_4(var uParam0, int iParam1)
{
	uParam0->f_95 = iParam1;
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
	if (func_69(Local_15.f_209))
	{
		func_76(&(Local_15.f_152));
		func_77(&(Local_15.f_152));
		func_78(&(Local_15.f_152), 0);
		func_79(&(Local_15.f_152), 1);
		func_80(&(Local_15.f_152), 6f);
		Local_15.f_209 = { Param0 };
		Local_15.f_151 = Param0.f_3;
		Local_15.f_221 = Param0.f_4;
		Local_15.f_222 = func_81(Local_15.f_151);
		if (Param0.f_7)
		{
			func_22(&Local_15, 2);
		}
		if (!func_82(Local_15.f_151))
		{
			func_4(&Local_15, 12);
			return false;
		}
	}
	fVar0 = get_distance_between_coords(Global_36, Local_15.f_209, true);
	if (is_screen_faded_in())
	{
		if (fVar0 < 200f)
		{
			if (func_83())
			{
				vVar1 = { func_84(Local_15.f_151, 0, Local_15.f_221) };
				vVar1 = { func_84(Local_15.f_151, 1, Local_15.f_221) };
				if (func_85())
				{
					if (func_86(&Local_15))
					{
						func_22(&Local_15, 1);
					}
				}
				if (!Local_15.f_227)
				{
					if (func_87(Local_15.f_181, 0))
					{
						Local_15.f_227 = func_88(Local_15.f_181, -1);
					}
				}
				if (func_89(player_id(), 1, 0, 1))
				{
					func_4(&Local_15, 13);
					return false;
				}
				else
				{
					if (!bVar4)
					{
						func_90(&Local_15);
						func_91(&Local_15, 8672);
					}
					_0xed9582b3da8f02b4((((Local_15.f_215 + Local_15.f_216) + Local_15.f_217 * 2) + Local_15.f_219) + 1);
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
	while (iVar1 < Local_15.f_216)
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
		while (iVar1 < Local_15.f_216)
		{
			iVar3 = func_92(iVar1);
			iVar2 = func_93(iVar1);
			if (!_is_metaped_outfit_request_valid(&(Local_15.f_66[iVar1])))
			{
				if (iVar2 == func_94())
				{
				}
				else
				{
					Local_15.f_66[iVar1] = _request_metaped_outfit(iVar3, iVar2);
					bVar0 = false;
					Jump @162; //curOff = 137
					if (!_0x610438375e5d1801(&(Local_15.f_66[iVar1])))
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
				while (iVar1 < Local_15.f_215)
				{
					iVar2 = func_96(iVar1);
					iVar4 = func_97(iVar1);
					if (!_is_metaped_outfit_request_valid(&(Local_15.f_31[iVar1])))
					{
						if (iVar2 == func_94())
						{
						}
						else
						{
							Local_15.f_31[iVar1] = _request_metaped_outfit(iVar4, iVar2);
							bVar0 = false;
							Jump @293; //curOff = 268
							if (!_0x610438375e5d1801(&(Local_15.f_31[iVar1])))
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
	if (Local_15.f_217 <= 0)
	{
		return true;
	}
	iVar0 = Local_15.f_220;
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
		Local_15.f_49[iVar0] = create_vehicle(iVar1, vVar2, fVar5, true, true, false, false);
		set_vehicle_on_ground_properly(&(Local_15.f_49[iVar0]), 0f);
		set_entity_visible(&(Local_15.f_49[iVar0]), true);
		_0x3f08c6163a4ab1d6(&(Local_15.f_49[iVar0]));
		func_103(&(Local_15.f_49[iVar0]));
		if (!does_entity_belong_to_this_script(&(Local_15.f_49[iVar0]), false))
		{
			set_entity_as_mission_entity(&(Local_15.f_49[iVar0]), true, false);
		}
	}
	Local_15.f_220++;
	if (Local_15.f_220 >= Local_15.f_217)
	{
		Local_15.f_220 = 0;
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
	if (Local_15.f_218 <= 0)
	{
		return true;
	}
	iVar0 = Local_15.f_220;
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
		Local_15.f_52[iVar0] = create_object(iVar1, vVar2, true, true, false, false, true);
		set_entity_rotation(&(Local_15.f_52[iVar0]), 0f, 0f, fVar5, 2, true);
		set_entity_visible(&(Local_15.f_52[iVar0]), false);
		if (!does_entity_belong_to_this_script(&(Local_15.f_52[iVar0]), false))
		{
			set_entity_as_mission_entity(&(Local_15.f_52[iVar0]), true, false);
		}
		if (func_107(iVar0))
		{
			place_object_on_ground_properly(&(Local_15.f_52[iVar0]), 0);
		}
	}
	Local_15.f_220++;
	if (Local_15.f_220 >= Local_15.f_218)
	{
		Local_15.f_220 = 0;
		return true;
	}
	return false;
}

bool func_15()
{
	if (Local_15.f_216 <= 0)
	{
		return true;
	}
	iVar0 = Local_15.f_220;
	iVar1 = func_92(iVar0);
	vVar2 = { func_108(iVar0) };
	uVar5 = func_109(iVar0);
	uVar6 = func_93(iVar0);
	if (!does_entity_exist(&(Local_15.f_40[iVar0])))
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
				Local_15.f_40[iVar0] = func_111(iVar1, vVar2, uVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				Local_15.f_40[iVar0] = func_111(iVar1, vVar2, uVar5, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
				_set_ped_body_component(&(Local_15.f_40[iVar0]), func_93(iVar0));
				_update_ped_variation(&(Local_15.f_40[iVar0]), false, true, true, true, false);
			}
		}
	}
	if (func_61(&(Local_15.f_40[iVar0]), 0, 1))
	{
		func_112(&(Local_15.f_40[iVar0]), 0);
		if (func_30(&Local_15, 1))
		{
			iVar7 = func_113(iVar0);
			if (iVar7 != 3)
			{
				if (!does_entity_exist(&(Local_15.f_84[iVar0])))
				{
					Local_15.f_84[iVar0] = create_object(-274058460, vVar2, true, true, false, false, true);
					func_114(iVar0, iVar7, &vVar9, &vVar12, &iVar8);
					attach_entity_to_entity(&(Local_15.f_84[iVar0]), &(Local_15.f_40[iVar0]), iVar8, vVar9, vVar12, false, false, false, false, 1, true, false, false);
					return false;
				}
			}
		}
		func_115(&(Local_15.f_152), &(Local_15.f_40[iVar0]), 0);
		set_blocking_of_non_temporary_events(&(Local_15.f_40[iVar0]), true);
		set_ped_config_flag(&(Local_15.f_40[iVar0]), 277, true);
		request_ped_visibility_tracking(&(Local_15.f_40[iVar0]));
		set_entity_visible(&(Local_15.f_40[iVar0]), false);
		if (!does_entity_belong_to_this_script(&(Local_15.f_40[iVar0]), false))
		{
			set_entity_as_mission_entity(&(Local_15.f_40[iVar0]), true, false);
		}
		Local_15.f_220++;
		if (Local_15.f_220 >= Local_15.f_216)
		{
			Local_15.f_220 = 0;
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
	if (Local_15.f_215 <= 0)
	{
		return true;
	}
	iVar0 = Local_15.f_220;
	iVar1 = func_97(iVar0);
	vVar2 = { func_116(iVar0) };
	uVar5 = func_117(iVar0);
	iVar6 = func_96(iVar0);
	iVar7 = func_118(Local_15.f_181);
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
			Local_15[iVar0] = func_111(iVar1, vVar2, uVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			Local_15[iVar0] = _0xeaf682a14f8e5f53(&(Local_15.f_31[iVar0]), vVar2, uVar5, 1, 1, 1, 0);
			if (!does_entity_exist(&(Local_15[iVar0])))
			{
				Local_15[iVar0] = func_111(iVar1, vVar2, uVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
		}
		if (does_entity_exist(&(Local_15[iVar0])))
		{
			set_blocking_of_non_temporary_events(&(Local_15[iVar0]), true);
			set_ped_config_flag(&(Local_15[iVar0]), 277, false);
			set_ped_config_flag(&(Local_15[iVar0]), 6, true);
			set_ped_config_flag(&(Local_15[iVar0]), 233, true);
			request_ped_visibility_tracking(&(Local_15[iVar0]));
			func_120(&(Local_15.f_152), &(Local_15[iVar0]));
			func_121(&(Local_15.f_152), &(Local_15[iVar0]), 0);
			set_entity_visible(&(Local_15[iVar0]), false);
			if (!does_entity_belong_to_this_script(&(Local_15[iVar0]), false))
			{
				set_entity_as_mission_entity(&(Local_15[iVar0]), true, false);
			}
			if (Local_15.f_181 == -1)
			{
				set_ped_relationship_group_hash(&(Local_15[iVar0]), -401180987);
			}
			func_122(&(Local_15[iVar0]), 1);
			_0xbd75500141e4725c(&(Local_15[iVar0]), iVar7);
			decor_set_bool(&(Local_15[iVar0]), "bBeatPed", true);
			func_124(func_123(&(Local_15[iVar0])), &(Local_15[iVar0]));
		}
		else
		{
			Local_15.f_220 = (Local_15.f_220 - 1);
		}
	}
	Local_15.f_220++;
	if (Local_15.f_220 >= Local_15.f_215)
	{
		Local_15.f_220 = 0;
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
	func_125();
	if (Local_274.f_48 == 4)
	{
		if (!func_126(&Local_274, 1))
		{
			func_127(Local_274.f_247[0], 1660.547f, -1606.303f, 54.78328f, 1.5f, 0, 0);
			func_127(Local_274.f_247[1], 1658.218f, -1605.348f, 54.93408f, 1.5f, 0, 0);
		}
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_61(&(Local_15[iVar0]), 0, 0))
		{
			func_129(&(Local_15[iVar0]), func_128(iVar0), 0);
			func_130(&Local_15, iVar0);
			Var2 = { func_131(&Local_274, iVar0) };
			remove_all_ped_weapons(&(Local_15[iVar0]), false, true);
			_0x49dadfc4cd808b0a(&(Local_15[iVar0]), 1, -1);
			func_121(&(Local_15.f_152), &(Local_15[iVar0]), 0);
			set_ped_config_flag(&(Local_15[iVar0]), 234, true);
			if (iVar0 <= 2)
			{
				func_115(&(Local_15.f_152), &(Local_15.f_40[iVar0]), 0);
			}
			switch (iVar0)
			{
				case 0:
					iVar6 = func_132(&Local_274, iVar0);
					sVar7 = func_133(&Local_274, iVar0);
					iVar1 = create_scenario_point(iVar6, Var2, Var2.f_3, 0, -1f, 1);
					if (_does_scenario_point_exist(iVar1))
					{
						_task_use_scenario_point(&(Local_15[iVar0]), iVar1, sVar7, -1, false, true, 0, false, -1f, false);
					}
					Local_274.f_112 = func_134(&(Local_15[iVar0]), -1101297303, -1, 0, 0, 1056964608, 1065353216, 0);
					break;
				case 1:
					iVar6 = func_132(&Local_274, iVar0);
					sVar7 = func_133(&Local_274, iVar0);
					iVar1 = create_scenario_point(iVar6, Var2, Var2.f_3, 0, -1f, 1);
					if (_does_scenario_point_exist(iVar1))
					{
						_task_use_scenario_point(&(Local_15[iVar0]), iVar1, sVar7, -1, false, true, 0, false, -1f, false);
					}
					Local_274.f_112 = func_134(&(Local_15[iVar0]), -594562071, -1, 1, 1, 1056964608, 1065353216, 0);
					break;
				case 2:
					task_stand_still(&(Local_15[iVar0]), -1);
					Local_274.f_112 = func_134(&(Local_15[iVar0]), -594562071, -1, 1, 0, 1056964608, 1065353216, 0);
					break;
				case 3:
					Local_274.f_112 = func_134(&(Local_15[iVar0]), -1101297303, -1, 0, 0, 1056964608, 1065353216, 0);
					iVar6 = func_132(&Local_274, iVar0);
					sVar7 = func_133(&Local_274, iVar0);
					iVar1 = create_scenario_point(iVar6, Var2, Var2.f_3, 0, -1f, 1);
					if (_does_scenario_point_exist(iVar1))
					{
						_task_use_scenario_point(&(Local_15[iVar0]), iVar1, sVar7, -1, false, true, 0, false, -1f, false);
					}
					if (Local_274.f_48 != 4)
					{
						func_127(Local_274.f_247[0], get_entity_coords(&(Local_15[iVar0]), false, true), 1f, 0, 0);
					}
					break;
			}
		}
		iVar0++;
	}
	func_135(&Local_15, &Local_274);
	func_136(&Local_274, 1, 0, 0);
	return true;
}

void func_21()
{
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (does_entity_exist(&(Local_15[iVar0])))
		{
			_0xa91e6cf94404e8c9(&(Local_15[iVar0]));
			if (!func_137(&Local_15, iVar0, 4))
			{
				set_entity_visible(&(Local_15[iVar0]), true);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_216)
	{
		if (does_entity_exist(&(Local_15.f_40[iVar0])))
		{
			_0xa91e6cf94404e8c9(&(Local_15.f_40[iVar0]));
			if (!func_138(&Local_15, iVar0, 4))
			{
				set_entity_visible(&(Local_15.f_40[iVar0]), true);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_217)
	{
		if (does_entity_exist(&(Local_15.f_49[iVar0])))
		{
			_0xa91e6cf94404e8c9(&(Local_15.f_49[iVar0]));
			set_entity_visible(&(Local_15.f_49[iVar0]), true);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_218)
	{
		if (does_entity_exist(&(Local_15.f_52[iVar0])))
		{
			set_entity_visible(&(Local_15.f_52[iVar0]), true);
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
	iVar0 = -1;
	iVar0 = func_139(&Local_15, &Local_274);
	if (Local_274.f_44 >= 1)
	{
		vVar1 = { func_140(Global_35, 1065353216) };
		Local_274.f_98 = func_141(&(Local_15[0]), Global_36, 1);
		Local_274.f_99 = func_141(&(Local_15[0]), vVar1, 1);
		if (Local_274.f_42 < 5)
		{
			if (Local_274.f_42 <= 3)
			{
				if (iVar0 == 1)
				{
					if (Local_274.f_44 > 1)
					{
						func_142(&(Local_274.f_156), 1);
						func_143(&Local_274, 4);
					}
				}
			}
			if (func_144())
			{
				func_143(&Local_274, 4);
				return false;
			}
		}
		func_145(&Local_274);
	}
	func_125();
	if (!func_126(&Local_274, 8))
	{
		if (func_146())
		{
			func_147(&(Local_274.f_49), 1);
			func_148();
			func_149();
			func_150(&Local_274, 5);
		}
	}
	switch (Local_274.f_42)
	{
		case 0:
			func_151();
			if (func_152())
			{
				if (func_153())
				{
					func_154(Local_15.f_151, 1);
					func_150(&Local_274, 5);
				}
			}
			else if (func_155())
			{
				if (func_156())
				{
					func_22(&Local_15, 16);
					func_4(&Local_15, 13);
				}
			}
			else
			{
				if (!is_entity_dead(&(Local_15[0])))
				{
					set_ped_can_play_ambient_anims(&(Local_15[0]), false);
				}
				if (func_157(iVar0))
				{
					func_148();
					func_25(&Local_15, 1);
					func_32(&Local_15, 1);
					func_158();
					func_150(&Local_274, 1);
				}
			}
			break;
		case 1:
			func_159(1077936128);
			func_151();
			func_148();
			func_160();
			if (func_61(&(Local_15[3]), 0, 0))
			{
				set_ped_can_play_ambient_anims(&(Local_15[3]), false);
			}
			if (func_161())
			{
				func_150(&Local_274, 5);
			}
			break;
		case 2:
			if (func_61(&(Local_15[3]), 0, 0))
			{
				set_ped_can_play_ambient_anims(&(Local_15[3]), false);
			}
			func_159(1077936128);
			if (func_151())
			{
			}
			break;
		case 3:
			if (func_162())
			{
			}
			break;
		case 4:
			func_163();
			func_150(&Local_274, 5);
			break;
		case 5:
			func_164(&(Local_15[0]), Local_15.f_22[0], 831283580, 0, 0, 0);
			func_164(&(Local_15[1]), Local_15.f_22[1], 831283580, 0, 0, 0);
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

void func_25(var uParam0, bool bParam1)
{
	if (!func_18(Global_1393447, 65536))
	{
		func_59(Global_1393447, 16);
		func_59(Global_1393447, 65536);
		func_22(uParam0, 2097152);
		Global_40.f_9632.f_194 = uParam0->f_151;
		func_53(uParam0, 1);
		func_165(-1, 0, 0, 0, 0);
		func_166();
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
		if (!func_69(uParam0->f_212))
		{
			Var0.f_3 = { uParam0->f_212 };
		}
		else
		{
			Var0.f_3 = { uParam0->f_209 };
		}
		if (func_56(uParam0->f_151))
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
		uParam0->f_93 = _0xca1315c33b9a2847(&Var0);
		if (!func_43())
		{
			func_44(1);
			func_22(uParam0, 4);
		}
		if (bParam1)
		{
			func_35(1, -1, 0, 0, 0);
		}
		else
		{
			func_167();
			func_168();
		}
		if (func_56(uParam0->f_151))
		{
			func_34(30, 0, 1);
		}
		else
		{
			func_170(func_169(-843295694), 1);
			func_33(uParam0, 0);
		}
		_0x1096603b519c905f(func_62(uParam0->f_151));
		func_171(uParam0);
		func_172(0, 13);
		iVar17 = 0;
		while (iVar17 < uParam0->f_215)
		{
			if (func_61(uParam0[iVar17], 0, 1))
			{
				task_look_at_entity(uParam0[iVar17], Global_35, -1, 0, 51, 0);
			}
			iVar17++;
		}
	}
}

void func_26()
{
	iVar1 = 0;
	while (iVar1 < Local_15.f_216)
	{
		if (func_61(&(Local_15.f_40[iVar1]), 0, 0))
		{
			iVar0 = _get_rider_of_mount(&(Local_15.f_40[iVar1]), false);
			if (func_61(iVar0, 0, 0))
			{
				_0x931b241409216c1f(iVar0, &(Local_15.f_40[iVar1]), 0);
				func_173(&Local_15, iVar1, 32);
			}
		}
		iVar1++;
	}
}

void func_27(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (func_61(uParam0[iVar0], 0, 1))
		{
			set_ped_combat_attributes(uParam0[iVar0], 57, false);
			set_ped_combat_attributes(uParam0[iVar0], 127, true);
		}
		iVar0++;
	}
}

void func_28(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!func_30(uParam0, 33554432))
		{
			func_174(0);
			func_22(uParam0, 33554432);
		}
	}
	else if (func_30(uParam0, 33554432))
	{
		func_174(1);
		func_45(uParam0, 33554432);
	}
}

void func_29()
{
	func_40(&(Local_15.f_247), 0);
	if (func_47(&(Local_15.f_247), 5f))
	{
		func_50(&Local_15, 0);
	}
	if (func_47(&(Local_15.f_247), 3f))
	{
		func_175(&Local_15);
	}
	func_38();
	if (!func_30(&Local_15, 8388608))
	{
		if (!func_30(&Local_15, 4194304))
		{
			if (Local_15.f_181 == 2)
			{
				func_176(&Local_15, 1.1f);
			}
			else
			{
				func_176(&Local_15, 1.2f);
			}
			func_22(&Local_15, 4194304);
		}
		if (func_30(&Local_15, 4194304))
		{
			iVar0 = get_entity_health(Global_35);
			if ((iVar0 < (Local_15.f_225 - 60) || IntToFloat(iVar0) < (IntToFloat(Local_15.f_225) * 0.7f)) || iVar0 < 80)
			{
				func_176(&Local_15, 1f);
				func_22(&Local_15, 8388608);
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
	func_145(&Local_274);
	Local_274.f_95 = func_177(&Local_15);
	func_160();
	func_178(&Local_15, &(Local_274.f_250), &Local_15);
	func_179(20f);
	func_180();
	func_181(&Local_15, &(Local_274.f_113), &(Local_274.f_156));
	if (!Local_274.f_256)
	{
		if (does_entity_exist(&(Local_15[3])))
		{
			if (func_182(&(Local_15[3])))
			{
				func_183(Local_15[3], &(Local_274.f_191), &(Local_274.f_212), 1, 1);
				Local_274.f_256 = 1;
			}
		}
		else
		{
			Local_274.f_256 = 1;
		}
	}
	if (func_184())
	{
		return true;
	}
	switch (Local_274.f_43)
	{
		case 0:
			func_40(Local_274.f_58[0], 0);
			func_185(&Local_274, 1);
			break;
		case 1:
			if (Local_274.f_95 <= 0)
			{
				func_185(&Local_274, 2);
			}
			break;
		case 2:
			if (Local_274.f_95 <= 0)
			{
				func_186();
				func_185(&Local_274, 3);
			}
			break;
		case 3:
			if (func_187(&(Local_274.f_250)))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_32(var uParam0, bool bParam1)
{
	if (func_18(Global_1393447, 65536))
	{
		if (func_87(uParam0->f_181, 0))
		{
			func_188(uParam0->f_181, bParam1);
		}
		func_189(uParam0->f_151, bParam1);
	}
}

void func_33(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_190(1);
		func_45(uParam0, 8192);
	}
	else
	{
		func_191(1);
		func_22(uParam0, 8192);
	}
}

void func_34(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_192(iParam0, iParam1, bParam2);
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
	func_167();
	func_168();
	func_193((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_194() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_195();
		if (iParam1 == -1)
		{
			if (func_196(iParam0, 1))
			{
				func_197(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_196(iParam0, 2))
			{
				func_197(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_196(iParam0, 4))
			{
				func_197(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_198(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_199(to_float(iVar0), 1, 0);
	}
	else
	{
		func_199((to_float(200) / 3f), 1, 0);
	}
}

void func_36(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_216)
	{
		if (does_entity_exist(&(uParam0->f_40[iVar0])))
		{
			set_ped_config_flag(&(uParam0->f_40[iVar0]), 273, false);
			if (is_entity_a_mission_entity(&(uParam0->f_40[iVar0])))
			{
				set_ped_as_no_longer_needed(uParam0->f_40[iVar0]);
			}
		}
		iVar0++;
	}
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_217)
	{
		if (does_entity_exist(&(uParam0->f_49[iVar0])))
		{
			if (_0xa19447d83294e29f(&(uParam0->f_49[iVar0]), &iVar1, &iVar2))
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
						iVar3 = _get_ped_in_draft_seat(&(uParam0->f_49[iVar0]), iVar4);
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

void func_37(var uParam0)
{
	if (func_30(uParam0, 16384))
	{
		if (func_61(Global_35, 0, 1))
		{
			if (!func_30(uParam0, 1024))
			{
				if (uParam0->f_181 != -1 && !func_56(uParam0->f_151))
				{
					compendium_gang_ambush_survived(func_200(uParam0->f_181));
					func_22(uParam0, 1024);
				}
			}
		}
	}
}

void func_38()
{
	iVar0 = 0;
	while (iVar0 < Local_15.f_216)
	{
		if (!func_138(&Local_15, iVar0, 16))
		{
			if (func_61(&(Local_15.f_40[iVar0]), 0, 0))
			{
				if (func_201(iVar0))
				{
					_task_smart_flee_style_coord(&(Local_15.f_40[iVar0]), Local_15.f_209, 4, 0, -1082130432, -1, 0);
					set_ped_keep_task(&(Local_15.f_40[iVar0]), true);
					set_blocking_of_non_temporary_events(&(Local_15.f_40[iVar0]), false);
					set_ped_as_no_longer_needed(Local_15.f_40[iVar0]);
					func_173(&Local_15, iVar0, 16);
				}
			}
		}
		iVar0++;
	}
}

bool func_39(var uParam0)
{
	return func_41(uParam0);
	return false;
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1 || !func_60(uParam0))
	{
		func_202(uParam0);
	}
}

int func_41(var uParam0)
{
	func_40(&(uParam0->f_241), 0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (func_61(uParam0[iVar0], 0, 1))
		{
			if (does_blip_exist(&(uParam0->f_22[iVar0])))
			{
				if (func_141(uParam0[iVar0], Global_36, 1) > 40f || func_47(&(uParam0->f_241), 15f))
				{
					func_203(uParam0->f_22[iVar0]);
					set_ped_as_no_longer_needed((*uParam0)[iVar0]);
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
	if (iVar1 >= uParam0->f_215)
	{
		return 1;
	}
	return 0;
}

bool func_42()
{
	if (func_47(&(Local_15.f_244), 45f) && func_204())
	{
		func_54(&Local_15);
		func_205(&(Local_15.f_244));
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

void func_45(var uParam0, int iParam1)
{
	if (func_30(uParam0, iParam1))
	{
	}
	uParam0->f_96 = (uParam0->f_96 - (uParam0->f_96 && iParam1));
}

bool func_46()
{
	if (Local_15.f_95 >= 10 && Local_15.f_95 < 12)
	{
		return true;
	}
	return func_206();
}

bool func_47(var uParam0, float fParam1)
{
	if (!func_60(uParam0))
	{
		return false;
	}
	if (func_207(uParam0) > fParam1)
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
	func_147(&(Local_274.f_49), 1);
	func_208(Local_274.f_247[0], 1);
	func_208(Local_274.f_247[1], 1);
	if (_0x6614f9039bd31931(player_id(), 14, 0))
	{
		_0x0751d461f06e41ce(player_id(), 14, 0, 0);
	}
	func_186();
	func_209(&(Local_274.f_37), &Local_15);
}

void func_50(var uParam0, bool bParam1)
{
	if (!func_30(uParam0, 256))
	{
		if (func_30(uParam0, 32) || bParam1)
		{
			if (func_61(uParam0->f_56, 0, 1))
			{
				func_210(uParam0->f_56, 0);
				func_22(uParam0, 256);
			}
		}
	}
}

void func_51()
{
	iVar1 = 4748164;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (does_entity_exist(&(Local_15[iVar0])))
		{
			if (func_211(iVar0))
			{
				iVar2[iVar0] = get_mount(&(Local_15[iVar0]));
				delete_ped(Local_15[iVar0]);
			}
			else
			{
				if (func_61(&(Local_15[iVar0]), 0, 0))
				{
					if (!func_30(&Local_15, 16384))
					{
						func_212(Local_15[iVar0]);
					}
					func_122(&(Local_15[iVar0]), 0);
					set_ped_combat_attributes(&(Local_15[iVar0]), 5, true);
					_0x24c82ef607105faa(&(Local_15[iVar0]), -920810745);
					_0xb8b6430ead2d2437(&(Local_15[iVar0]), 993130593);
					if (func_213(&(Local_15[iVar0])))
					{
						set_ped_relationship_group_hash(&(Local_15[iVar0]), -401180987);
					}
					_set_ped_crouch_movement(&(Local_15[iVar0]), false, 0, false);
					if ((is_ped_in_combat(&(Local_15[iVar0]), Global_35) || is_ped_fleeing(&(Local_15[iVar0]))) || func_137(&Local_15, iVar0, 256))
					{
						if (is_ped_in_combat(&(Local_15[iVar0]), 0))
						{
							clear_ped_tasks(&(Local_15[iVar0]), 0, 0);
							_task_smart_flee_style_ped(&(Local_15[iVar0]), Global_35, 4, iVar1, -1082130432, -1, 0);
						}
						set_ped_keep_task(&(Local_15[iVar0]), true);
					}
					else if ((Local_15.f_215 == Local_15.f_216 && func_61(&(Local_15.f_40[iVar0]), 0, 1)) && !is_ped_in_any_vehicle(&(Local_15[iVar0]), true))
					{
						iVar11 = &Local_15.f_40[iVar0];
						_0x931b241409216c1f(&(Local_15.f_40[iVar0]), iVar11, 0);
						open_sequence_task(&iVar12);
						task_mount_animal(0, &(Local_15.f_40[iVar0]), 20000, -1, 1073741824, 1, 0, 0);
						if (!func_69(Local_15.f_118[iVar0]->f_1))
						{
							task_follow_nav_mesh_to_coord(0, Local_15.f_118[iVar0]->f_1, 2f, 20000, 0.25f, 0, 40000f);
						}
						_task_move_in_traffic_3(0, Global_35, 2.5f, 0, 0);
						func_214(&(Local_15[iVar0]), &iVar12, 0, 0, 1, 1);
						set_ped_keep_task(&(Local_15[iVar0]), true);
					}
					else
					{
						iVar11 = 0;
						if (is_ped_in_any_vehicle(&(Local_15[iVar0]), true) && does_entity_exist(get_vehicle_ped_is_in(&(Local_15[iVar0]), true)))
						{
							if (_0x4e76cb57222a00e5(&(Local_15[iVar0])) == -1)
							{
								iVar13 = get_vehicle_ped_is_in(&(Local_15[iVar0]), true);
								open_sequence_task(&iVar12);
								if (!func_69(Local_15.f_118[iVar0]->f_1))
								{
									_task_vehicle_drive_to_destination(0, iVar13, Local_15.f_118[iVar0]->f_1, 7f, 524419, 6, 5f, 7f, 0);
								}
								_task_move_in_traffic_3(0, Global_35, -1f, 0, 0);
								func_214(&(Local_15[iVar0]), &iVar12, 0, 0, 1, 1);
							}
						}
						else if (is_ped_on_mount(&(Local_15[iVar0])))
						{
							open_sequence_task(&iVar12);
							if (!func_69(Local_15.f_118[iVar0]->f_1))
							{
								task_follow_nav_mesh_to_coord(0, Local_15.f_118[iVar0]->f_1, 2f, 20000, 0.25f, 0, 40000f);
							}
							_task_move_in_traffic_3(0, Global_35, 2.5f, 0, 0);
							func_214(&(Local_15[iVar0]), &iVar12, 0, 0, 1, 1);
							set_ped_keep_task(&(Local_15[iVar0]), true);
						}
						else
						{
							if (func_215(iVar0))
							{
								open_sequence_task(&iVar12);
								_task_smart_flee_style_ped(0, Global_35, 3, iVar1, -1082130432, -1, 0);
								func_214(&(Local_15[iVar0]), &iVar12, 0, 0, 1, 1);
								_0x39a2fc5af55a52b1(&(Local_15[iVar0]), 2000);
							}
							else
							{
								open_sequence_task(&iVar12);
								_task_move_in_traffic_3(0, Global_35, 1f, 128, 0);
								func_214(&(Local_15[iVar0]), &iVar12, 0, 0, 1, 1);
							}
							set_ped_keep_task(&(Local_15[iVar0]), true);
						}
					}
				}
				if (is_ped_in_any_vehicle(&(Local_15[iVar0]), false) && get_ped_in_vehicle_seat(get_vehicle_ped_is_using(&(Local_15[iVar0])), -1) == &Local_15[iVar0])
				{
					set_ped_as_no_longer_needed(Local_15[iVar0]);
				}
				else if ((!is_ped_fleeing(&(Local_15[iVar0])) && !is_ped_in_combat(&(Local_15[iVar0]), Global_35)) && !func_137(&Local_15, iVar0, 128))
				{
					_0x39a2fc5af55a52b1(&(Local_15[iVar0]), -1);
				}
				set_ped_as_no_longer_needed(Local_15[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_216)
	{
		if (does_entity_exist(&(Local_15.f_40[iVar0])))
		{
			if (func_216(iVar0, &iVar2))
			{
				if (does_entity_exist(&(Local_15.f_84[iVar0])))
				{
					delete_object(Local_15.f_84[iVar0]);
				}
				delete_ped(Local_15.f_40[iVar0]);
			}
			else
			{
				if (does_entity_exist(&(Local_15.f_84[iVar0])))
				{
					if (func_217(iVar0))
					{
						delete_object(Local_15.f_84[iVar0]);
					}
					else
					{
						detach_entity(&(Local_15.f_84[iVar0]), true, true);
						activate_physics(&(Local_15.f_84[iVar0]));
						set_object_as_no_longer_needed(Local_15.f_84[iVar0]);
					}
				}
				if (func_61(&(Local_15.f_40[iVar0]), 0, 1))
				{
					if (func_60(&(Local_15.f_247)))
					{
						if (!func_61(_get_rider_of_mount(&(Local_15.f_40[iVar0]), false), 0, 0))
						{
							_task_smart_flee_style_coord(&(Local_15.f_40[iVar0]), Local_15.f_209, 4, 0, -1082130432, -1, 0);
							set_ped_keep_task(&(Local_15.f_40[iVar0]), true);
						}
					}
					else if (!does_entity_exist(_0xf103823ffe72bb49(&(Local_15.f_40[iVar0]))) && !does_entity_exist(_get_rider_of_mount(&(Local_15.f_40[iVar0]), true)))
					{
						_task_smart_flee_style_coord(&(Local_15.f_40[iVar0]), Local_15.f_209, 4, 0, -1082130432, -1, 0);
						set_ped_keep_task(&(Local_15.f_40[iVar0]), true);
					}
				}
				set_ped_as_no_longer_needed(Local_15.f_40[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_217)
	{
		if (does_entity_exist(&(Local_15.f_49[iVar0])))
		{
			if (func_218(iVar0))
			{
				delete_vehicle(Local_15.f_49[iVar0]);
			}
			else if (get_players_last_vehicle() == &Local_15.f_49[iVar0] && get_vehicle_ped_is_in(Global_35, true) == &Local_15.f_49[iVar0])
			{
			}
			else
			{
				set_vehicle_as_no_longer_needed(Local_15.f_49[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_218)
	{
		if (does_entity_exist(&(Local_15.f_52[iVar0])))
		{
			if (func_219(&Local_15, &(Local_15.f_52[iVar0])))
			{
				delete_object(Local_15.f_52[iVar0]);
			}
			else
			{
				set_object_as_no_longer_needed(Local_15.f_52[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_52(var uParam0)
{
	if (!func_30(uParam0, 128))
	{
		return;
	}
	switch (uParam0->f_181)
	{
		case 0:
			func_220(347599949);
			func_220(-1273613561);
			break;
		case 2:
			func_220(-355385988);
			func_220(-628956517);
			break;
		case 1:
			func_220(363815774);
			break;
		case 3:
			func_220(-1421951598);
			break;
		case 4:
			func_220(-1090280091);
			break;
		case 5:
			func_220(424175505);
			break;
	}
}

void func_53(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		_0xde5faa741a781f73(player_id(), 1);
		func_22(uParam0, 65536);
	}
	else
	{
		_0xde5faa741a781f73(player_id(), 0);
		func_45(uParam0, 65536);
	}
}

void func_54(var uParam0)
{
	fVar0 = func_221(uParam0->f_151);
	func_222(uParam0, fVar0);
}

void func_55(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_223(vVar0, 0);
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
			if (&Global_40.f_9632[iParam0] >= func_224(iParam0))
			{
				return true;
			}
			Var2 = { func_169(85200619) };
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
	if (func_225(iParam0))
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
	return func_226(*uParam0, 1);
}

bool func_61(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_227(iParam0, iParam1);
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
	if (func_228(iVar0))
	{
		return false;
	}
	if (func_229(iVar0, 1) || func_229(iVar0, 2))
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
		if (func_230())
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
		iVar0 = func_231(&(Global_1898164->f_1[0]));
		if (func_232(iVar0) && func_233((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_234(&(Global_1898164->f_1[0])))
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

bool func_67(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (does_entity_exist(uParam0[iVar0]))
		{
			if (func_137(uParam0, iVar0, 8))
			{
				if (func_235(uParam0[iVar0], Global_36, 1) < (70f * 70f) || func_236(uParam0[iVar0], 70f, -1082130432, -1082130432, -1082130432))
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
	if (!func_30(&Local_15, 16384))
	{
		return false;
	}
	iVar0 = func_237();
	switch (iVar0)
	{
		case 105:
			if (func_238() && func_239())
			{
				return true;
			}
			break;
		case 95:
			if (func_238() && func_239())
			{
				return true;
			}
			break;
	}
	if (func_239())
	{
		if (Local_15.f_151 != 43)
		{
			if (func_240())
			{
				if (func_241(iVar0))
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
						func_40(&(Local_15.f_253), 0);
						if (func_47(&(Local_15.f_253), 0.5f))
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
	if (Local_15.f_21 == 0f)
	{
		*uParam0 = 210f;
	}
	else if (Local_15.f_21 < (func_73() - 10f))
	{
		*uParam0 = func_73();
	}
	else
	{
		*uParam0 = 210f;
	}
	if (Local_15.f_20 > *uParam0)
	{
		return true;
	}
	switch (Local_15.f_151)
	{
		case 29:
		case 30:
			if (Local_15.f_95 < 10)
			{
				return true;
			}
			break;
		case 0:
		case 11:
			if (!func_30(&Local_15, 512) && !func_30(&Local_15, 16384))
			{
				return true;
			}
			break;
	}
	return false;
}

float func_73()
{
	return 120f;
}

void func_74()
{
	if (Local_15.f_95 <= 8)
	{
		Local_15.f_20 = get_distance_between_coords(Global_36, Local_15.f_209, true);
		if (Local_15.f_21 == 0f || Local_15.f_21 > Local_15.f_20)
		{
			Local_15.f_21 = Local_15.f_20;
		}
		return;
	}
	if (Local_15.f_18 < 0)
	{
		Local_15.f_20 = get_distance_between_coords(Global_36, Local_15.f_209, true);
		if (Local_15.f_21 == 0f || Local_15.f_21 > Local_15.f_20)
		{
			Local_15.f_21 = Local_15.f_20;
		}
	}
	else if (does_entity_exist(&(Local_15[Local_15.f_18])))
	{
		Local_15.f_9[Local_15.f_18] = vdist(Global_36, get_entity_coords(&(Local_15[Local_15.f_18]), false, true));
	}
	Local_15.f_18++;
	if (Local_15.f_18 >= Local_15.f_215)
	{
		Local_15.f_18 = -1;
	}
}

void func_75()
{
	if (Local_15.f_19 < Local_15.f_215)
	{
		iVar0 = Local_15.f_19;
		if (does_entity_exist(&(Local_15[iVar0])))
		{
			if (!func_137(&Local_15, iVar0, 8))
			{
				if (func_236(&(Local_15[iVar0]), 200f, -1082130432, &(Local_15.f_9[iVar0]), -1082130432))
				{
					func_242(&Local_15, iVar0, 8);
				}
			}
		}
	}
	else if (Local_15.f_19 < (Local_15.f_215 + Local_15.f_216))
	{
		iVar0 = (Local_15.f_19 - Local_15.f_215);
		if (does_entity_exist(&(Local_15.f_40[iVar0])))
		{
			if (!func_138(&Local_15, iVar0, 8))
			{
				if (func_236(&(Local_15.f_40[iVar0]), 200f, -1082130432, -1082130432, -1082130432))
				{
					func_173(&Local_15, iVar0, 8);
				}
			}
		}
	}
	else if (Local_15.f_19 < ((Local_15.f_215 + Local_15.f_216) + Local_15.f_217))
	{
		iVar0 = ((Local_15.f_19 - Local_15.f_215) - Local_15.f_216);
		if (does_entity_exist(&(Local_15.f_49[iVar0])))
		{
			if (!func_243(&Local_15, iVar0, 8))
			{
				if (is_entity_a_vehicle(&(Local_15.f_49[iVar0])) && !is_entity_dead(&(Local_15.f_49[iVar0])))
				{
					if (func_244(&(Local_15.f_49[iVar0]), 200f, -1082130432))
					{
						func_245(&Local_15, iVar0, 8);
					}
				}
			}
		}
	}
	Local_15.f_19++;
	if (Local_15.f_19 >= ((Local_15.f_215 + Local_15.f_216) + Local_15.f_217))
	{
		Local_15.f_19 = 0;
	}
}

void func_76(var uParam0)
{
	func_247(uParam0, (func_246(uParam0) - 6f));
	func_248(uParam0, 1);
}

void func_77(var uParam0)
{
	func_249(uParam0, 0);
	func_250(uParam0, 0);
	func_78(uParam0, 1);
	func_251(uParam0, 1);
	func_252(uParam0, 0);
	func_253(uParam0, 1);
	func_254(uParam0, 1, 1, 1);
}

void func_78(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_255(&(uParam0->f_1), 256);
	}
	else
	{
		func_256(&(uParam0->f_1), 256);
	}
}

void func_79(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_255(&(uParam0->f_1), 4);
	}
	else
	{
		func_256(&(uParam0->f_1), 4);
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
	switch (Local_15.f_221)
	{
		case 0:
			Local_274.f_48 = 0;
			break;
		case 1:
			Local_274.f_48 = 1;
			break;
		case 2:
			Local_274.f_48 = 2;
			break;
		case 3:
			Local_274.f_48 = 3;
			break;
		case 4:
			Local_274.f_48 = 4;
			break;
		default:
			Local_274.f_48 = 0;
			break;
	}
	switch (Local_15.f_151)
	{
		case 39:
			Local_15.f_181 = -1;
			break;
		default:
			if (!func_257(2))
			{
				Local_15.f_181 = 2;
			}
			else
			{
				Local_15.f_181 = -1;
			}
			break;
	}
	fVar0[0] = 1E+10f;
	fVar0[1] = 1E+10f;
	fVar0[2] = 1E+10f;
	fVar0[0] = vdist2(Global_36, func_84(Local_15.f_151, 0, Local_15.f_221));
	fVar0[1] = vdist2(Global_36, func_84(Local_15.f_151, 1, Local_15.f_221));
	iVar5 = 0;
	iVar4 = 1;
	while (iVar4 <= 2)
	{
		if (&fVar0[iVar4] < &fVar0[iVar5])
		{
			iVar5 = iVar4;
		}
		iVar4++;
	}
	switch (iVar5)
	{
		case 0:
			func_143(&Local_274, 1);
			break;
		case 1:
			func_143(&Local_274, 2);
			break;
	}
	Local_15.f_215 = 4;
	Local_15.f_217 = 1;
	Local_15.f_218 = 0;
	Local_15.f_216 = 3;
	func_22(&Local_15, 131072);
	func_258(&Local_15, 3, 1);
	func_259();
	func_260();
	func_261(&(Local_15.f_182), 65, 0f, 1.75f, 2f, 2f, 0);
	return true;
}

Vector3 func_84(int iParam0, int iParam1, int iParam2)
{
	func_262(iParam0, iParam1, &vVar0, &uVar3, iParam2);
	return vVar0;
}

bool func_85()
{
	return false;
}

bool func_86(var uParam0)
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
	if (!func_263(iParam0, 1))
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
		iVar0 = func_264(iParam0);
	}
	bVar1 = get_random_int_in_range(0, 100) < iVar0;
	return bVar1;
}

int func_89(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_265(bParam1, bParam2, bParam3);
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

void func_90(var uParam0)
{
	fVar0 = func_221(uParam0->f_151);
	func_266(uParam0, fVar0);
}

void func_91(var uParam0, int iParam1)
{
	if (!_does_volume_exist(uParam0->f_238))
	{
		uParam0->f_238 = _create_volume_cylinder_with_custom_name(uParam0->f_209, 0f, 0f, 0f, 80f, 80f, 40f, "volAvoidance");
	}
	func_267(uParam0->f_238, iParam1, 262144, 1, 0);
}

int func_92(int iParam0)
{
	if (&Local_15.f_57[iParam0] == 0)
	{
		if (!func_87(Local_15.f_181, 1))
		{
			Local_15.f_57[iParam0] = func_268(997958153, 1);
		}
		else
		{
			Local_15.f_57[iParam0] = func_269(Local_15.f_181, 0, 1);
		}
	}
	return &(Local_15.f_57[iParam0]);
}

int func_93(int iParam0)
{
	if (&Local_15.f_75[iParam0] == 0)
	{
		if (Local_15.f_181 != -1 && Local_15.f_181 != 1)
		{
			Local_15.f_75[iParam0] = func_270(Local_15.f_181, iParam0, 0);
		}
		else
		{
			Local_15.f_75[iParam0] = func_94();
		}
		if (&Local_15.f_75[iParam0] == 1268180497)
		{
			Local_15.f_75[iParam0] = func_94();
		}
	}
	return &(Local_15.f_75[iParam0]);
}

int func_94()
{
	return 41788943;
}

bool func_95()
{
	switch (Local_274.f_41)
	{
		case 0:
			func_271();
			func_272(&Local_15);
			func_273(&Local_15);
			Local_274.f_41 = 1;
			break;
		case 1:
			iVar0 = 1;
			if (!func_274())
			{
				iVar0 = 0;
			}
			if (!func_275(&Local_15))
			{
				iVar0 = 0;
			}
			if (!func_276(&Local_15))
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
	return func_277(iVar0, &Local_15);
}

int func_97(int iParam0)
{
	iVar0 = iParam0;
	switch (Local_15.f_181)
	{
		case 2:
			switch (iVar0)
			{
				case 0:
					return -355385988;
				case 1:
					return -628956517;
				case 2:
					return -355385988;
				case 3:
					return -628956517;
				default:
					break;
			}
			return -628956517;
		default:
			switch (iVar0)
			{
				case 0:
					return 1057570823;
				case 1:
					return 1057570823;
				case 2:
					return 1057570823;
				case 3:
					return 1057570823;
				default:
					break;
			}
			return 1057570823;
	}
	return 1057570823;
}

int func_98(int iParam0)
{
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			return -1758092337;
		default:
			break;
	}
	return 0;
}

Vector3 func_99(int iParam0)
{
	iVar0 = iParam0;
	vVar1 = { func_278(&Local_274, iVar0) };
	return vVar1;
}

var func_100(int iParam0)
{
	iVar0 = iParam0;
	Var1 = { func_278(&Local_274, iVar0) };
	return Var1.f_3;
}

bool func_101(int iParam0)
{
	return true;
}

bool func_102(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_279(*uParam0, 0f, 0f, 0f))
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

int func_104(var uParam0)
{
	return 0;
}

Vector3 func_105(var uParam0)
{
	return 0f, 0f, 0f;
}

float func_106(var uParam0)
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
	vVar1 = { func_280(&Local_274, iVar0) };
	return vVar1;
}

var func_109(int iParam0)
{
	iVar0 = iParam0;
	Var1 = { func_280(&Local_274, iVar0) };
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
	func_281(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
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
		iVar0 = (iVar0 || func_282(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

int func_113(int iParam0)
{
	return 0;
}

void func_114(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
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
	*uParam4 = get_ped_bone_index(&(Local_15.f_40[iParam0]), 62111);
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
	vVar1 = { func_131(&Local_274, iVar0) };
	return vVar1;
}

var func_117(int iParam0)
{
	iVar0 = iParam0;
	Var1 = { func_131(&Local_274, iVar0) };
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

void func_125()
{
	if (func_126(&Local_274, 131072))
	{
		return;
	}
	if (func_283(&(Local_15.f_152), &(Local_15.f_49[0]), 0))
	{
		func_143(&Local_274, 131072);
	}
}

bool func_126(var uParam0, int iParam1)
{
	return (uParam0->f_39 && iParam1) != 0;
}

void func_127(var uParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	iVar0 = 61;
	if (bParam6)
	{
		iVar0 |= 2 | 256;
	}
	func_284(uParam0, vParam1, fParam4, 1, iVar0, 0);
}

char* func_128(int iParam0)
{
	iVar0 = func_285(iParam0);
	return func_286(iVar0);
}

void func_129(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_61(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

void func_130(int iParam0, int iParam1)
{
	if (!func_61(iParam0[iParam1], 0, 0))
	{
		return;
	}
	set_ped_combat_range(iParam0[iParam1], 0);
	set_ped_combat_movement(iParam0[iParam1], 2);
}

struct<4> func_131(var uParam0, int iParam1)
{
	switch (uParam0->f_48)
	{
		case 0:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(0, 0);
					case 1:
						return func_287(0, 2);
					case 2:
						return func_287(0, 5);
					case 3:
						return func_287(0, 8);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(1, 0);
					case 1:
						return func_287(1, 2);
					case 2:
						return func_287(1, 5);
					case 3:
						return func_287(1, 8);
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(2, 0);
					case 1:
						return func_287(2, 2);
					case 2:
						return func_287(2, 5);
					case 3:
						return func_287(2, 8);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(3, 0);
					case 1:
						return func_287(3, 2);
					case 2:
						return func_287(3, 5);
					case 3:
						return func_287(3, 8);
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(4, 0);
					case 1:
						return func_287(4, 2);
					case 2:
						return func_287(4, 5);
					case 3:
						return func_287(4, 8);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(5, 0);
					case 1:
						return func_287(5, 2);
					case 2:
						return func_287(5, 5);
					case 3:
						return func_287(5, 8);
					default:
						break;
				}
			}
			break;
		case 3:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(6, 0);
					case 1:
						return func_287(6, 2);
					case 2:
						return func_287(6, 5);
					case 3:
						return func_287(6, 8);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(7, 0);
					case 1:
						return func_287(7, 2);
					case 2:
						return func_287(7, 5);
					case 3:
						return func_287(7, 8);
					default:
						break;
				}
			}
			break;
		case 4:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(8, 0);
					case 1:
						return func_287(8, 2);
					case 2:
						return func_287(8, 5);
					case 3:
						return func_287(8, 8);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(9, 0);
					case 1:
						return func_287(9, 2);
					case 2:
						return func_287(9, 5);
					case 3:
						return func_287(9, 8);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

int func_132(var uParam0, int iParam1)
{
	switch (uParam0->f_48)
	{
		case 0:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return 705257970;
					case 1:
						return 1978275899;
					case 3:
						return 421625586;
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 79218445;
					case 1:
						return 1978275899;
					case 3:
						return 421625586;
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return 421625586;
					case 1:
						return 1978275899;
					case 3:
						return 421625586;
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 421625586;
					case 1:
						return 1978275899;
					case 2:
						return 421625586;
					case 3:
						return 421625586;
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return 421625586;
					case 1:
						return 1978275899;
					case 2:
						return 1978275899;
					case 3:
						return 421625586;
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 421625586;
					case 1:
						return 1978275899;
					case 2:
						return 1978275899;
					case 3:
						return 421625586;
					default:
						break;
				}
			}
			break;
		case 3:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return 421625586;
					case 1:
						return 1978275899;
					case 3:
						return -1543059912;
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 421625586;
					case 1:
						return 1978275899;
					case 3:
						return -1543059912;
					default:
						break;
				}
			}
			break;
		case 4:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return -1543059912;
					case 1:
						return 1978275899;
					case 3:
						return 421625586;
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return -1543059912;
					case 1:
						return 1978275899;
					case 3:
						return 421625586;
					default:
						break;
				}
			}
			break;
	}
	return 2087366558;
}

char* func_133(var uParam0, int iParam1)
{
	switch (uParam0->f_48)
	{
		case 0:
		case 1:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return "";
					case 1:
						return "";
					case 3:
						return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_A";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "";
					case 1:
						return "";
					case 2:
						return "";
					case 3:
						return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_A";
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_A";
					case 1:
						return "";
					case 2:
						return "";
					case 3:
						return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_A";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_A";
					case 1:
						return "";
					case 2:
						return "";
					case 3:
						return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_A";
					default:
						break;
				}
			}
			break;
		case 3:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_A";
					case 1:
						return "";
					case 3:
						return "";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_A";
					case 1:
						return "";
					case 3:
						return "";
					default:
						break;
				}
			}
			break;
		case 4:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return "";
					case 1:
						return "";
					case 3:
						return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_A";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "";
					case 1:
						return "";
					case 3:
						return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_A";
					default:
						break;
				}
			}
			break;
	}
	return "";
}

int func_134(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_288(iParam3, 1);
	bVar1 = func_288(iParam3, 2);
	bVar2 = !func_288(iParam3, 4);
	bVar3 = func_288(iParam3, 8);
	bVar4 = !func_288(iParam3, 16);
	bVar5 = func_288(iParam3, 32);
	bVar6 = func_288(iParam3, 64);
	return func_289(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_135(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		switch (iVar0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				set_ped_config_flag(iParam0[iVar0], 315, false);
				break;
			default:
				if (func_61(iParam0[iVar0], 0, 0))
				{
					set_ped_config_flag(iParam0[iVar0], 301, true);
					set_ped_config_flag(iParam0[iVar0], 317, false);
					set_ped_config_flag(iParam0[iVar0], 297, false);
				}
				break;
		}
		iVar0++;
	}
	if (func_290())
	{
		sVar1 = func_291(iParam0, uParam1);
		sVar2 = func_292(iParam0, uParam1);
	}
	else
	{
		sVar1 = func_293(iParam0, uParam1);
		sVar2 = func_294(iParam0, uParam1);
	}
	func_296(uParam1->f_156[0], func_295(7), sVar1, -163964935, 0, 0, 0, 1, 0);
	func_296(uParam1->f_156[1], func_295(10), sVar2, 648122183, 0, 0, 0, 1, 0);
	func_297(&(uParam1->f_156), 0, 0);
}

void func_136(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 || iParam2)
	{
		if (!func_298(uParam0->f_156[0], 0) && !func_298(uParam0->f_156[0], 4))
		{
			func_299(uParam0->f_156[0], 1, 0);
		}
	}
	else if (func_298(uParam0->f_156[0], 0) && !func_298(uParam0->f_156[0], 4))
	{
		func_299(uParam0->f_156[0], 0, 0);
	}
	if (iParam1 || iParam3)
	{
		if (!func_298(uParam0->f_156[1], 0) && !func_298(uParam0->f_156[1], 4))
		{
			func_299(uParam0->f_156[1], 1, 0);
		}
	}
	else if (func_298(uParam0->f_156[1], 0) && !func_298(uParam0->f_156[1], 4))
	{
		func_299(uParam0->f_156[1], 0, 0);
	}
}

bool func_137(int iParam0, int iParam1, int iParam2)
{
	return (iParam0->f_97[iParam1] && iParam2) != 0;
}

bool func_138(int iParam0, int iParam1, int iParam2)
{
	return (iParam0->f_106[iParam1] && iParam2) != 0;
}

int func_139(var uParam0, var uParam1)
{
	fVar0 = 50f;
	fVar1 = 2f;
	iVar4 = -1;
	iVar5 = 1;
	iVar3 = 0;
	while (iVar3 <= 1)
	{
		iVar2 = func_301((*uParam0)[iVar3], uParam1->f_113[iVar3], fVar0, &(uParam1->f_156), &iVar5, fVar1, 3, 0, "", 524288 | func_300(3, 0, 0), 0, 0, 2, 1, -1082130432, 0);
		if (func_302(uParam1->f_113[iVar3]))
		{
			if (!uParam1->f_257)
			{
				if (uParam1->f_113[iVar3]->f_1 != -1)
				{
					func_136(uParam1, 0, 0, 0);
					switch (uParam1->f_113[iVar3]->f_1)
					{
						case 0:
							func_136(uParam1, 0, 0, 0);
							break;
						case 1:
							func_136(uParam1, 0, 0, 0);
							break;
					}
					func_303(uParam0[0], 400);
					func_303(uParam0[1], 200);
					uParam1->f_257 = 1;
				}
			}
		}
		if (iVar2 != -1)
		{
			iVar4 = iVar2;
			uParam1->f_257 = 0;
		}
		iVar3++;
	}
	return iVar4;
}

Vector3 func_140(int iParam0, float fParam1)
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
	func_304(vVar6);
	vVar6 = { FtoV((get_entity_speed(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

float func_141(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_142(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_305((*uParam0)[iVar0], bParam1);
		iVar0++;
	}
}

void func_143(var uParam0, int iParam1)
{
	uParam0->f_39 = (uParam0->f_39 || iParam1);
}

bool func_144()
{
	if (_does_volume_exist(&(Local_274.f_86[4])))
	{
		if (_0xf256a75210c5c0eb(&(Local_274.f_86[4]), Global_36))
		{
			iVar1 = -1;
			sVar0 = func_306(&Local_15, &Local_274, 0, &iVar1);
			_0x8acc0506743a8a5c(&(Local_15[0]), 166028666, 1, -1082130432);
			task_aim_gun_at_entity(&(Local_15[0]), Global_35, 3000, 0, 1);
			func_164(&(Local_15[0]), Local_15.f_22[0], 831283580, 0, 0, 0);
			func_164(&(Local_15[1]), Local_15.f_22[1], 831283580, 0, 0, 0);
			func_307(&(Local_15[0]), Global_35, sVar0, -1073741824, 1, 1744022339, iVar1);
			return true;
		}
	}
	return false;
}

void func_145(var uParam0)
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
		if (func_308(Global_1935630->f_44) || uParam0->f_6)
		{
			if (func_309(uParam0->f_36))
			{
				func_310(&(uParam0->f_36), 1, 1);
				uParam0->f_13 = 1;
			}
		}
	}
	if (!func_60(&(uParam0->f_29)))
	{
		if (func_311(uParam0->f_28))
		{
			func_40(&(uParam0->f_29), 0);
		}
	}
	else if (uParam0->f_6 && !uParam0->f_1)
	{
		if (func_47(&(uParam0->f_29), 3f) && func_311(uParam0->f_28))
		{
			func_312(1);
			uParam0->f_35 = 1;
			if (!func_47(&(uParam0->f_29), 6f) && !uParam0->f_4)
			{
				func_313(609);
			}
		}
	}
}

bool func_146()
{
	if (func_126(&Local_274, 4))
	{
		return true;
	}
	else if (func_314(Global_35, &(Local_15.f_49[0]), 1))
	{
		return true;
	}
	if (func_315(&Local_15, &(Local_15.f_152), &(Local_15.f_180), &(Local_274.f_94), 0, 3, 1))
	{
		return true;
	}
	if (func_30(&Local_15, 33554432))
	{
		if (func_316(&Local_15))
		{
			return true;
		}
	}
	return false;
}

void func_147(var uParam0, bool bParam1)
{
	func_310(&(uParam0->f_5), 1, 1);
	if (bParam1)
	{
		func_317();
	}
}

void func_148()
{
	if (!func_61(Local_15.f_56, 0, 0))
	{
		Local_15.f_56 = func_318(&Local_15, 0);
		if (func_61(Local_15.f_56, 0, 0))
		{
			set_entity_can_be_damaged_by_relationship_group(Local_15.f_56, false, 555364152);
		}
	}
}

void func_149()
{
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (func_61(&(Local_15[iVar0]), 0, 1))
		{
			_set_ped_crouch_movement(&(Local_15[iVar0]), false, 0, false);
			iVar2 = iVar0;
			switch (iVar2)
			{
				case 0:
					fVar1 = 0.1f;
					break;
				case 1:
					fVar1 = 0.6f;
					break;
				case 2:
				case 3:
					func_319(iVar2, 3, 3);
					fVar1 = 0.3f;
					break;
			}
			if (is_ped_using_any_scenario(&(Local_15[iVar0])))
			{
				_0x802092b07e3b1eea(&(Local_15[iVar0]), Global_36, 3);
			}
			open_sequence_task(&iVar3);
			if (func_320(&(Local_15[iVar0]), 0) == -1569615261)
			{
				task_swap_weapon(0, 1, 0, 0, 0);
			}
			task_combat_ped(0, Global_35, 0, 0);
			func_214(&(Local_15[iVar0]), &iVar3, fVar1, 0, 1, 1);
			if (!func_126(&Local_274, 4))
			{
				if (!func_126(&Local_274, 1024))
				{
					if (Local_15.f_181 == 2)
					{
						func_307(&(Local_15[iVar0]), Global_35, "GENERIC_SHOCKED_HIGH", -1073741824, 1, 1744022339, -1);
					}
					else
					{
						func_307(&(Local_15[iVar0]), Global_35, "AMBUSH_ROR_V2_ROB_AGGRO", -1073741824, 1, 1744022339, -1);
					}
					func_164(&(Local_15[iVar0]), Local_15.f_22[iVar0], 831283580, 0, 0, 0);
					func_143(&Local_274, 1024);
				}
			}
		}
		iVar0++;
	}
	func_321(&(Local_274.f_37), &(Local_15[0]), 0, 50f);
	set_player_control(player_id(), true, 0, false);
	func_154(Local_15.f_151, 1);
}

void func_150(var uParam0, int iParam1)
{
	uParam0->f_42 = iParam1;
}

bool func_151()
{
	if (Local_274.f_45 < 3)
	{
		if (func_322())
		{
			func_323(&Local_274, 3);
		}
	}
	iVar3 = -1;
	iVar4 = -1;
	iVar4 = func_324(&Local_15, &Local_274);
	switch (Local_274.f_45)
	{
		case 0:
			func_325(&Local_15, &Local_274);
			func_323(&Local_274, 1);
			break;
		case 1:
			fVar2 = func_141(&(Local_15[3]), Global_36, 1);
			if (is_ped_facing_ped(&(Local_15[3]), Global_35, 40f) && fVar2 < 15f)
			{
				if (get_entity_speed(Global_35) < 5f)
				{
					func_326(&(Local_15[3]), Global_35, 2, 1, 5000, 1);
					Local_274.f_105 = fVar2;
					func_202(Local_274.f_58[1]);
					sVar0 = func_327(&Local_15, &Local_274, 3, &iVar3);
					func_307(&(Local_15[3]), Global_35, sVar0, -1073741824, 1, 1744022339, iVar3);
					func_323(&Local_274, 2);
				}
				else if (!func_60(Local_274.f_58[2]))
				{
					func_326(&(Local_15[3]), Global_35, 1, 1, 5000, 1);
					func_40(Local_274.f_58[2], 0);
				}
			}
			break;
		case 2:
			if (func_328() || iVar4 == 1)
			{
				func_319(3, 3, 1);
				sVar0 = func_306(&Local_15, &Local_274, 3, &iVar3);
				func_307(&(Local_15[3]), Global_35, sVar0, -1073741824, 1, 1744022339, iVar3);
				func_143(&Local_274, 4);
			}
			else if (func_47(Local_274.f_58[1], 3f))
			{
				func_329(&Local_274, 1);
			}
			break;
		case 3:
			func_202(Local_274.f_58[1]);
			func_319(0, 3, 2);
			func_319(1, 3, 1);
			func_330(&(Local_15[0]), Global_35, -1);
			open_sequence_task(&iVar1);
			func_330(0, Global_35, -1);
			func_214(&(Local_15[1]), &iVar1, 0.75f, 0, 1, 1);
			func_323(&Local_274, 4);
			break;
		case 4:
			if (func_47(Local_274.f_58[1], 0.1f) && func_331(0, 1, Global_35, 1))
			{
				sVar0 = func_306(&Local_15, &Local_274, 1, &iVar3);
				func_307(&(Local_15[1]), Global_35, sVar0, -1073741824, 1, 1744022339, iVar3);
				open_sequence_task(&iVar1);
				task_combat_ped(0, Global_35, 0, 0);
				func_214(&(Local_15[0]), &iVar1, 0, 0, 1, 1);
				open_sequence_task(&iVar1);
				task_combat_ped(0, Global_35, 0, 0);
				func_214(&(Local_15[1]), &iVar1, 1f, 0, 1, 1);
				func_251(&(Local_15.f_152), 0);
				func_143(&Local_274, 4);
			}
			break;
		case 5:
			return true;
	}
	return false;
}

bool func_152()
{
	if (func_126(&Local_274, 524288))
	{
		return true;
	}
	if (func_332(&(Local_274.f_86[1]), Global_36))
	{
		if (!func_126(&Local_274, 524288))
		{
			func_143(&Local_274, 524288);
		}
		return true;
	}
	return false;
}

bool func_153()
{
	switch (Local_274.f_97)
	{
		case 0:
			if (has_entity_clear_los_to_entity(&(Local_15[2]), Global_35, 17))
			{
				func_330(&(Local_15[2]), Global_35, -1);
				Local_274.f_97++;
			}
			break;
		case 1:
			if (is_ped_facing_ped(&(Local_15[2]), Global_35, 45f))
			{
				func_164(&(Local_15[2]), Local_15.f_22[2], 831283580, 0, 0, 0);
				task_aim_gun_at_entity(&(Local_15[2]), Global_35, -1, 0, 1);
				if (Local_15.f_181 == 2)
				{
					func_307(&(Local_15[2]), Global_35, "CALLOUT_EASY_PICKINGS_MALE", -1073741824, 1, 1744022339, 2);
				}
				else
				{
					func_307(&(Local_15[2]), Global_35, "CALLOUT_EASY_PICKINGS_NEUTRAL", -1073741824, 1, 1744022339, -1);
				}
				open_sequence_task(&iVar0);
				task_seek_clear_los_to_entity(0, Global_35, 20f, 1f, 0.5f);
				task_turn_ped_to_face_entity(0, Global_35, -1, -1f, -1f, -1082130432);
				close_sequence_task(iVar0);
				func_333(&(Local_15[0]), Global_36, 3, 0, 2);
				func_333(&(Local_15[1]), Global_36, 3, 0, 2);
				_task_perform_sequence_2(&(Local_15[0]), iVar0, 0.5f, 0.5f);
				_task_perform_sequence_2(&(Local_15[1]), iVar0, 1.2f, 1.2f);
				Local_274.f_97++;
			}
			break;
		case 2:
			if (func_331(0f, 1, &(Local_15[2]), 1) && func_331(0f, 1, Global_35, 1))
			{
				func_307(&(Local_15[2]), Global_35, "CALLOUT_JUST_KILL_EM_MALE", -1073741824, 1, 1744022339, -1);
				func_40(Local_274.f_58[8], 0);
				Local_274.f_97++;
			}
			break;
		case 3:
			if (func_47(Local_274.f_58[8], 0.5f))
			{
				Local_274.f_97++;
			}
			break;
		case 4:
			func_143(&Local_274, 4);
			func_149();
			return true;
	}
	return false;
}

void func_154(int iParam0, bool bParam1)
{
	func_165(-1, 0, 0, 0, 0);
	if (bParam1)
	{
		func_199(240f, 1, 0);
		func_192(120, 0, 1);
	}
	Global_40.f_9632[iParam0]->f_1++;
	Var2 = { func_169(85200619) };
	if (stat_id_get_int(&Var2, &uVar0))
	{
		iVar1 = _0x1e7384ab5d4f4581(uVar0);
		Global_40.f_9632[iParam0]->f_3 = (iVar1 + func_334(iParam0, 1));
	}
	func_172(0, 13);
}

bool func_155()
{
	if (!func_332(&(Local_274.f_86[1]), Global_36))
	{
		if (func_332(&(Local_274.f_86[0]), Global_36))
		{
			func_335(&Local_15, 7);
			return true;
		}
	}
	if (func_336(&Local_15))
	{
		return true;
	}
	return false;
}

bool func_156()
{
	return true;
}

bool func_157(int iParam0)
{
	if (func_302(Local_274.f_113[0]) || func_302(Local_274.f_113[1]))
	{
		return false;
	}
	if (iParam0 != -1)
	{
		return true;
	}
	vVar0 = { func_140(Global_35, 1.5f) };
	if (func_332(&(Local_274.f_86[2]), vVar0))
	{
		if (has_entity_clear_los_to_entity(&(Local_15[0]), Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

void func_158()
{
	func_78(&(Local_15.f_152), 1);
	func_79(&(Local_15.f_152), 1);
	func_337(&(Local_15.f_152), 1);
	func_338(&(Local_15.f_152), 1);
	func_250(&(Local_15.f_152), 1);
	func_339(&(Local_15.f_152), 1);
	func_251(&(Local_15.f_152), 1);
}

void func_159(float fParam0)
{
	if (!func_60(Local_274.f_58[4]))
	{
		if (Local_274.f_42 >= 1)
		{
			func_40(Local_274.f_58[4], 0);
		}
	}
	else if (func_47(Local_274.f_58[4], fParam0))
	{
		return;
	}
	func_340(&Local_15, 0);
}

void func_160()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_61(&(Local_15[iVar0]), 0, 1))
		{
			if (!does_blip_exist(&(Local_15.f_22[iVar0])))
			{
				if (is_ped_shooting(&(Local_15[iVar0])) || (func_341(&(Local_15[iVar0]), 1) && func_236(&(Local_15[iVar0]), 1116471296, 10f, -1082130432, -1082130432)))
				{
					func_164(&(Local_15[iVar0]), Local_15.f_22[iVar0], 831283580, 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
}

bool func_161()
{
	func_342(&(Local_274.f_37), 40f);
	if (Local_274.f_44 >= 5 && Local_274.f_44 < 12)
	{
		func_343(&Local_15, &Local_274);
		if (func_344())
		{
			func_345(&Local_15);
		}
	}
	switch (Local_274.f_44)
	{
		case 0:
			func_346();
			func_347(&Local_274, 1);
			break;
		case 1:
			if (func_348())
			{
				func_325(&Local_15, &Local_274);
				func_347(&Local_274, 2);
			}
			break;
		case 2:
			func_349();
			if (func_350())
			{
				func_347(&Local_274, 3);
			}
			else if (func_351())
			{
				func_352(&Local_15, &Local_274);
				func_347(&Local_274, 3);
			}
			break;
		case 3:
			func_349();
			if ((!func_290() && (Local_15.f_181 == 2 && Local_15.f_227)) && get_entity_speed(Global_35) < 1.75f)
			{
				if (func_353())
				{
					func_347(&Local_274, 4);
				}
			}
			else if (func_354())
			{
				func_28(&Local_15, 0);
				func_347(&Local_274, 4);
			}
			break;
		case 4:
			if (!func_126(&Local_274, 262144))
			{
				if ((func_331(0f, 1, &(Local_15[0]), 1) && func_331(0f, 1, &(Local_15[1]), 1)) && func_331(0f, 1, Global_35, 1))
				{
					func_135(&Local_15, &Local_274);
					func_136(&Local_274, 0, 0, 1);
					func_143(&Local_274, 262144);
				}
			}
			func_349();
			if (!func_290() && (Local_15.f_181 == 2 && Local_15.f_227))
			{
				if (func_47(Local_274.f_58[1], 1f))
				{
					func_143(&Local_274, 4);
				}
			}
			else if (!func_355())
			{
				if (func_356())
				{
					func_147(&(Local_274.f_49), 1);
					func_347(&Local_274, 5);
				}
			}
			else if (func_357())
			{
				func_147(&(Local_274.f_49), 1);
				func_347(&Local_274, 5);
			}
			else if (func_358())
			{
				func_147(&(Local_274.f_49), 1);
				return true;
			}
			break;
		case 5:
			if (!func_344())
			{
				if (!func_355())
				{
					func_321(&(Local_274.f_37), &(Local_15[0]), 1, 50f);
					_0x45ef176b532ca851(player_id(), "AMBUSH_PLAYER_SURRENDER");
					_0xbed386157f65942c(player_id(), 1);
				}
				if (func_359())
				{
					func_347(&Local_274, 6);
				}
				else if (func_358())
				{
					return true;
				}
			}
			else if (func_356())
			{
				func_347(&Local_274, 8);
			}
			break;
		case 6:
			if (!func_355())
			{
				func_356();
			}
			if (!func_344())
			{
				if (func_360())
				{
					func_347(&Local_274, 7);
				}
				else if (func_358())
				{
					return true;
				}
			}
			else
			{
				func_347(&Local_274, 8);
			}
			break;
		case 7:
			if (func_361())
			{
				return true;
			}
			break;
		case 8:
			if (!_does_volume_exist(&(Local_274.f_86[3])))
			{
				Local_274.f_86[3] = _create_volume_cylinder_with_custom_name(Global_36, 0f, 0f, 0f, 5f, 5f, 5f, "volHorseStayout");
			}
			func_362(&Local_15, &(Local_274.f_86[3]), Local_274.f_106, 1.25f, 8f, 1065353216, 1);
			if (!func_126(&Local_274, 64))
			{
				if (!func_331(0f, 1, &(Local_15[0]), 1) || !func_331(0f, 1, &(Local_15[1]), 1))
				{
					return false;
				}
				func_143(&Local_274, 64);
			}
			if (func_344() && func_363())
			{
				if (func_365(&(Local_15[0]), &Local_274, 0.1f, 1, -8.5f, 2, 0, 0, func_364(), 5000, 1, 1))
				{
					func_321(&(Local_274.f_37), &(Local_15[0]), 0, 50f);
					if (Local_274.f_6)
					{
						func_366(&(Local_15[0]), Global_35, "CALLOUT_FOLLOW_ROB_ATTACK_MALE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_143(&Local_274, 4);
					}
					else if (Local_274.f_4)
					{
						func_28(&Local_15, 1);
						set_current_ped_weapon(&(Local_15[0]), -1569615261, false, 0, false, false);
						task_swap_weapon(&(Local_15[0]), 1, 1, 0, 0);
						func_367();
						func_135(&Local_15, &Local_274);
						func_136(&Local_274, 0, 0, 1);
						func_150(&Local_274, 3);
					}
				}
				else if ((is_ped_walking(Global_35) || is_ped_running(Global_35)) || is_ped_sprinting(Global_35))
				{
					if (get_distance_between_coords(Global_36, Local_274.f_109, false) > 1f)
					{
						func_143(&Local_274, 4);
					}
				}
			}
			break;
		case 12:
			return true;
	}
	return false;
}

bool func_162()
{
	iVar6 = -1;
	if (Local_274.f_46 > 2)
	{
		if (Local_274.f_98 > 12.5f || func_141(&(Local_15[1]), Global_36, 1) > 12.5f)
		{
			if (!func_368())
			{
				if (func_369(&(Local_15[1]), 1630799643))
				{
					task_stand_still(&(Local_15[1]), 100);
				}
			}
		}
		if (Local_274.f_98 > 12.5f || func_141(&(Local_15[0]), Global_36, 1) > 12.5f)
		{
			if (!func_368())
			{
				if (func_369(&(Local_15[0]), 1630799643))
				{
					task_stand_still(&(Local_15[0]), 100);
				}
			}
		}
	}
	switch (Local_274.f_46)
	{
		case 0:
			if (func_320(&(Local_15[0]), 0) == -1569615261)
			{
				sVar0 = func_370(&Local_15, &Local_274, 0, &iVar6);
				func_307(&(Local_15[0]), Global_35, sVar0, -1073741824, 1, 1744022339, iVar6);
				func_371();
				func_372(&Local_274, 1);
			}
			break;
		case 1:
			if (!func_369(&(Local_15[0]), -1942934348))
			{
				Var2 = { func_131(&Local_274, 0) };
				open_sequence_task(&iVar1);
				task_turn_ped_to_face_entity(0, Global_35, 2000, -1f, -1f, -1082130432);
				task_follow_nav_mesh_to_coord(0, Var2, 1f, -1, 0.25f, 0, Var2.f_3);
				func_214(&(Local_15[0]), &iVar1, 0, 0, 1, 1);
				task_turn_ped_to_face_entity(&(Local_15[1]), Global_35, -1, -1f, -1f, -1082130432);
				func_372(&Local_274, 2);
			}
			break;
		case 2:
			if (!is_ped_ragdoll(Global_35))
			{
				if (!func_60(Local_274.f_58[3]))
				{
					func_40(Local_274.f_58[3], 1);
				}
				if (func_47(Local_274.f_58[3], 8f) && !func_126(&Local_274, 4))
				{
					if (Local_274.f_98 < 12.5f || func_141(&(Local_15[1]), Global_36, 1) < 12.5f)
					{
						if (func_331(0, 1, Global_35, 1))
						{
							sVar0 = func_370(&Local_15, &Local_274, 1, &iVar6);
							_0x8acc0506743a8a5c(&(Local_15[1]), 166028666, 1, -1082130432);
							task_aim_gun_at_entity(&(Local_15[1]), Global_35, -1, 0, 1);
							func_307(&(Local_15[1]), Global_35, sVar0, -1073741824, 1, 1744022339, iVar6);
							func_202(Local_274.f_58[3]);
							func_372(&Local_274, 3);
						}
					}
				}
			}
			else if (func_60(Local_274.f_58[3]))
			{
				func_373(Local_274.f_58[3]);
			}
			break;
		case 3:
			if (func_141(&(Local_15[1]), Global_36, 1) < 6f)
			{
				set_current_ped_weapon(&(Local_15[1]), -1569615261, false, 0, false, false);
				task_swap_weapon(&(Local_15[1]), 1, 1, 0, 0);
				task_confront(&(Local_15[1]), Global_35, 2);
				func_372(&Local_274, 4);
			}
			else if (func_47(Local_274.f_58[3], 8f))
			{
				if (func_368())
				{
					sVar0 = func_306(&Local_15, &Local_274, 0, &iVar6);
					_0x8acc0506743a8a5c(&(Local_15[0]), 166028666, 1, -1082130432);
					task_aim_gun_at_entity(&(Local_15[0]), Global_35, 3000, 0, 1);
					func_307(&(Local_15[0]), Global_35, sVar0, -1073741824, 1, 1744022339, iVar6);
					func_143(&Local_274, 4);
				}
			}
			break;
		case 4:
			if (func_47(Local_274.f_58[3], 8f))
			{
				if (func_368())
				{
					sVar0 = func_306(&Local_15, &Local_274, 0, &iVar6);
					_0x8acc0506743a8a5c(&(Local_15[0]), 166028666, 1, -1082130432);
					task_aim_gun_at_entity(&(Local_15[0]), Global_35, 3000, 0, 1);
					func_307(&(Local_15[0]), Global_35, sVar0, -1073741824, 1, 1744022339, iVar6);
					func_143(&Local_274, 4);
				}
			}
			else if (!func_126(&Local_274, 32768))
			{
				if (!func_368())
				{
					func_321(&(Local_274.f_37), &(Local_15[0]), 0, 50f);
					_0x8acc0506743a8a5c(&(Local_15[1]), 166028666, 1, -1082130432);
					task_aim_gun_at_entity(&(Local_15[1]), Global_35, 3000, 0, 1);
					func_143(&Local_274, 32768);
				}
			}
			break;
	}
	return false;
}

void func_163()
{
	fVar1 = 0f;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_61(&(Local_15[iVar0]), 0, 1))
		{
			switch (iVar0)
			{
				case 0:
					fVar1 = 0f;
					break;
				case 1:
					fVar1 = 1f;
					break;
				case 2:
					fVar1 = 0.75f;
					break;
				case 3:
					fVar1 = 0.5f;
					break;
			}
			func_164(&(Local_15[iVar0]), Local_15.f_22[iVar0], 831283580, 0, 0, 0);
			open_sequence_task(&iVar2);
			task_combat_ped(&(Local_15[iVar0]), Global_35, 0, 0);
			func_214(&(Local_15[iVar0]), &iVar2, fVar1, 0, 1, 1);
		}
		iVar0++;
	}
}

void func_164(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

void func_165(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_374() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_375(iVar1) && !func_376(iVar1, iParam2)) && (!bParam3 || !func_377(iVar1))) && (!bParam4 || !func_378(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_379(iVar0);
			}
		}
		iVar0++;
	}
}

void func_166()
{
	if (!func_375(&Global_1327479))
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
	func_380(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_167()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_381(iVar0, 128))
		{
			func_382(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_168()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_381(iVar0, 128) && func_381(iVar0, 1))
		{
			func_382(iVar0, 4096);
		}
		iVar0++;
	}
}

struct<2> func_169(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_170(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_171(var uParam0)
{
	iVar2 = 0;
	while (iVar2 < uParam0->f_215)
	{
		if (func_61(uParam0[iVar2], 0, 0))
		{
			iVar0 = 0;
			iVar1 = get_random_int_in_range(200, 500);
			func_383(uParam0[iVar2], &iVar0);
			func_384(uParam0[iVar2], (iVar0 + iVar1));
		}
		iVar2++;
	}
	switch (uParam0->f_181)
	{
		case 0:
			func_385(347599949);
			func_385(-1273613561);
			break;
		case 2:
			func_385(-355385988);
			func_385(-628956517);
			break;
		case 1:
			func_385(363815774);
			break;
		case 3:
			func_385(-1421951598);
			break;
		case 4:
			func_385(-1090280091);
			break;
		case 5:
			func_385(424175505);
			break;
	}
	func_22(uParam0, 128);
}

void func_172(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_386(&Global_0, 8);
	}
	if (!func_387() || func_388() != -1)
	{
		return;
	}
	func_386(&Global_0, 1);
}

void func_173(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_106[iParam1] = (iParam0->f_106[iParam1] || iParam2);
}

void func_174(bool bParam0)
{
	Global_1935496->f_15 = !bParam0;
}

void func_175(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (func_61(uParam0[iVar0], 0, 0))
		{
			if (!func_137(uParam0, iVar0, 512))
			{
				if (_is_ped_hogtied(uParam0[iVar0]))
				{
					task_combat_ped(uParam0[iVar0], Global_35, 0, 0);
					set_ped_keep_task(uParam0[iVar0], true);
					set_blocking_of_non_temporary_events(uParam0[iVar0], false);
					func_389(uParam0[iVar0]);
					func_242(uParam0, iVar0, 512);
				}
			}
			else if (!_is_ped_hogtied(uParam0[iVar0]))
			{
				func_390(uParam0, iVar0, 512);
			}
		}
		iVar0++;
	}
}

void func_176(var uParam0, float fParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (func_61(uParam0[iVar0], 0, 0))
		{
			_0xd77ae48611b7b10a(uParam0[iVar0], fParam1);
		}
		iVar0++;
	}
}

int func_177(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (func_61(uParam0[iVar0], 0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_178(var uParam0, int iParam1, var uParam2)
{
	if (func_391(iParam1, uParam2, 0, -1, 1073741824, 0))
	{
		switch (uParam0->f_181)
		{
			case 2:
				sVar0 = "AMBUSH_ROR_V1_PLYFINAL";
				break;
			default:
				sVar0 = "AMBUSH_ROR_V2_PLYFINAL";
				break;
		}
		if (func_307(Global_35, Global_35, sVar0, -1073741824, 1, 291934926, -1))
		{
			func_392(iParam1);
		}
	}
}

void func_179(float fParam0)
{
	if (func_237() == 5)
	{
		iVar0 = 0;
		while (iVar0 < Local_15.f_215)
		{
			if (&Local_15.f_9[iVar0] <= (fParam0 + 1f))
			{
				fVar1 = get_combat_float(&(Local_15[iVar0]), 31);
				if (!is_ped_on_mount(Global_35))
				{
					if (fVar1 != fParam0)
					{
						set_combat_float(&(Local_15[iVar0]), 31, fParam0);
					}
				}
				else if (fVar1 != 0f)
				{
					set_combat_float(&(Local_15[iVar0]), 31, -1f);
				}
			}
			iVar0++;
		}
	}
}

void func_180()
{
	if (!Local_274.f_255)
	{
		if (func_237() == 5)
		{
			iVar0 = 0;
			while (iVar0 < Local_15.f_215)
			{
				if (func_61(&(Local_15[iVar0]), 0, 0))
				{
					set_ped_config_flag(&(Local_15[iVar0]), 6, false);
					set_ped_config_flag(&(Local_15[iVar0]), 494, true);
				}
				iVar0++;
			}
			Local_274.f_255 = 1;
		}
	}
	else if (func_237() != 5)
	{
		iVar1 = 0;
		while (iVar1 < Local_15.f_215)
		{
			if (func_61(&(Local_15[iVar1]), 0, 0))
			{
				set_ped_config_flag(&(Local_15[iVar1]), 6, true);
				set_ped_config_flag(&(Local_15[iVar1]), 494, false);
			}
			iVar1++;
		}
		Local_274.f_255 = 1;
	}
}

void func_181(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (iVar0 < *uParam1)
		{
			if (!&uParam0->f_228[iVar0])
			{
				if (does_entity_exist(uParam0[iVar0]))
				{
					if (func_182(uParam0[iVar0]))
					{
						func_183((*uParam0)[iVar0], (*uParam1)[iVar0], uParam2, 1, 1);
						uParam0->f_228[iVar0] = 1;
					}
				}
				else
				{
					uParam0->f_228[iVar0] = 1;
				}
			}
		}
		iVar0++;
	}
}

bool func_182(int iParam0)
{
	if (!func_227(iParam0, 3))
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

void func_183(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_393(uParam0);
		func_394(iParam1, uParam2);
	}
	func_395(*uParam0, 1, bParam4);
}

bool func_184()
{
	if (func_237() == 5)
	{
		func_40(Local_274.f_58[7], 0);
		if (func_47(Local_274.f_58[7], 5f) && _0x285d36c5c72b0569(Global_35) > 5f)
		{
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (func_61(&(Local_15[iVar0]), 0, 0))
				{
					open_sequence_task(&iVar2);
					_task_smart_flee_style_ped(0, Global_35, 4, 8942468, -1082130432, -1, 0);
					func_214(&(Local_15[iVar0]), &iVar2, 1f, 2.5f, 1, 1);
					set_ped_keep_task(&(Local_15[iVar0]), true);
					func_242(&Local_15, iVar0, 256);
					func_242(&Local_15, iVar0, 2);
					if (!bVar1)
					{
						if (&Local_15.f_9[iVar0] < 40f)
						{
							if (func_307(&(Local_15[iVar0]), Global_35, "CALLOUT_FORGET_FLEEING_MALE", 60f, 1, 1744022339, -1))
							{
								bVar1 = true;
							}
						}
					}
				}
				iVar0++;
			}
			if (!bVar1)
			{
				iVar3 = func_396(&Local_15, 0, (Local_15.f_215 - 1), 1);
				if (iVar3 >= 0)
				{
					func_307(&(Local_15[iVar3]), Global_35, "CALLOUT_FORGET_FLEEING_MALE", 60f, 1, 1744022339, -1);
				}
			}
			return true;
		}
	}
	return false;
}

void func_185(var uParam0, int iParam1)
{
	uParam0->f_43 = iParam1;
}

void func_186()
{
	if (func_61(Local_15.f_56, 0, 0))
	{
		set_entity_can_be_damaged_by_relationship_group(Local_15.f_56, true, 555364152);
	}
}

bool func_187(var uParam0)
{
	if (func_196(*uParam0, 4))
	{
		return true;
	}
	return false;
}

void func_188(int iParam0, bool bParam1)
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
		Global_40.f_9632.f_192 = func_397();
	}
}

void func_189(int iParam0, bool bParam1)
{
	if (func_18(Global_1393447, 65536))
	{
		func_19(Global_1393447, 65536);
		func_165(-1, 0, 0, 0, 0);
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
		iVar0 = func_398(iParam0);
		iVar1 = func_399(iParam0);
		if (func_87(iVar1, 0))
		{
			switch (iVar1)
			{
				case 0:
				case 2:
					func_400(iVar1);
					break;
			}
		}
		else
		{
			iVar2 = func_401();
			switch (iVar2)
			{
				case 0:
				case 2:
					func_402(0, iVar2);
					break;
			}
		}
		if (func_196(iVar0, 1))
		{
			func_403();
		}
		else if (func_196(iVar0, 2))
		{
			func_404(0);
		}
		func_405(iParam0);
		func_406(iParam0);
	}
}

void func_190(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

void func_191(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

void func_192(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_407(iParam0, iParam1, bParam2);
}

void func_193(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

int func_194()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_195()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_376(iVar0, 16777216))
		{
			if (!func_408(iVar0))
			{
				func_409(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

bool func_196(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_197(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_410(Global_1310750[iVar0], iParam0))
		{
			if (!func_411(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_412(iVar0) < func_413(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_414(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_198(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_415(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_415(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_415(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_415(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_415(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_415(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_199(float fParam0, bool bParam1, bool bParam2)
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

int func_200(int iParam0)
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

bool func_201(int iParam0)
{
	if (func_138(&Local_15, iParam0, 32))
	{
		if (!func_61(_get_rider_of_mount(&(Local_15.f_40[iParam0]), false), 0, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_61(_get_rider_of_mount(&(Local_15.f_40[iParam0]), true), 0, 1))
	{
		return false;
	}
	if (Local_15.f_216 == Local_15.f_215)
	{
		if (!func_61(&(Local_15[iParam0]), 0, 1))
		{
			return true;
		}
	}
	if (!func_138(&Local_15, iParam0, 64))
	{
		fVar0 = func_207(&(Local_15.f_247));
		if (fVar0 - 9f) > IntToFloat(iParam0)
		{
			return true;
		}
	}
	return false;
}

void func_202(var uParam0)
{
	func_416(uParam0, 0f);
}

void func_203(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

bool func_204()
{
	return true;
}

void func_205(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_206()
{
	if (func_30(&Local_15, 16384))
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!func_61(&(Local_15[iVar1]), 0, 0))
		{
		}
		else
		{
			if (is_ped_in_combat(&(Local_15[iVar1]), 0))
			{
				return 1;
			}
			if (!func_137(&Local_15, iVar1, 2))
			{
				if (is_ped_using_any_scenario(&(Local_15[iVar1])))
				{
					func_333(&(Local_15[iVar1]), Global_36, 5, 1, 1);
				}
				func_242(&Local_15, iVar1, 2);
				_0x24c82ef607105faa(&(Local_15[iVar1]), -920810745);
			}
			switch (iVar1)
			{
				case 0:
					if (!func_417(&(Local_15[iVar1])))
					{
						iVar0 = 0;
						if (!func_369(&(Local_15[iVar1]), 1868526510))
						{
							if (func_137(&Local_15, iVar1, 8) || func_138(&Local_15, iVar1, 8))
							{
								func_418(&(Local_15[iVar1]), &(Local_15.f_40[iVar1]), 0, 2f, 20000);
							}
							else
							{
								_set_ped_on_mount(&(Local_15[iVar1]), &(Local_15.f_40[iVar1]), -1, true);
							}
						}
					}
					break;
				case 1:
					if (!func_314(&(Local_15[iVar1]), &(Local_15.f_49[0]), 0))
					{
						iVar0 = 0;
						if (!func_369(&(Local_15[iVar1]), -1794415470))
						{
							if (func_137(&Local_15, iVar1, 8))
							{
								func_419(&(Local_15[iVar1]), &(Local_15.f_49[0]), -1, 2f, -1, 131072);
							}
							else
							{
								task_warp_ped_into_vehicle(&(Local_15[iVar1]), &(Local_15.f_49[0]), -1);
							}
						}
					}
					else if (_0x4e76cb57222a00e5(&(Local_15[iVar1])) != -1 || !is_ped_still(&(Local_15[iVar1])))
					{
						iVar0 = 0;
					}
					break;
				case 2:
					if (!func_417(&(Local_15[iVar1])))
					{
						iVar0 = 0;
						if (!func_369(&(Local_15[iVar1]), 1868526510))
						{
							if (func_137(&Local_15, iVar1, 8) || func_138(&Local_15, iVar1, 8))
							{
								func_418(&(Local_15[iVar1]), &(Local_15.f_40[iVar1]), 0, 2f, 20000);
							}
							else
							{
								_set_ped_on_mount(&(Local_15[iVar1]), &(Local_15.f_40[iVar1]), -1, true);
							}
						}
					}
					break;
				case 3:
					if (!func_417(&(Local_15[iVar1])))
					{
						iVar0 = 0;
						if (!func_369(&(Local_15[iVar1]), 1868526510))
						{
							_0xf1c03a5352243a30(&(Local_15[iVar1]));
							if (func_137(&Local_15, iVar1, 8) || func_138(&Local_15, iVar1, 8))
							{
								func_418(&(Local_15[iVar1]), &(Local_15.f_40[1]), 0, 2f, 20000);
							}
							else
							{
								_set_ped_on_mount(&(Local_15[iVar1]), &(Local_15.f_40[1]), -1, true);
							}
						}
					}
					break;
				default:
					if (!func_417(&(Local_15[iVar1])))
					{
						iVar0 = 0;
						if (!func_369(&(Local_15[iVar1]), 1868526510))
						{
							if (func_137(&Local_15, iVar1, 8) || func_138(&Local_15, iVar1, 8))
							{
								func_418(&(Local_15[iVar1]), &(Local_15.f_40[iVar1]), 0, 2f, 20000);
							}
							else
							{
								_set_ped_on_mount(&(Local_15[iVar1]), &(Local_15.f_40[iVar1]), -1, true);
							}
						}
					}
					break;
			}
		}
		iVar1++;
	}
	return iVar0;
}

float func_207(var uParam0)
{
	if (!func_60(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_420(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_24() - uParam0->f_1);
}

void func_208(var uParam0, int iParam1)
{
	if (func_421(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

void func_209(var uParam0, var uParam1)
{
	if (uParam0->f_1)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (*uParam0 == uParam1[iVar0])
			{
				func_321(uParam0, uParam1[iVar0], 0, 30f);
			}
			else
			{
				iVar0++;
			}
		}
	}
}

void func_210(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_422(iParam0))
	{
		return;
	}
	iVar0 = func_423(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_424(iVar0);
	func_425(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_426(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_427(iVar0))
		{
			return;
		}
	}
	func_428(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_388() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

bool func_211(int iParam0)
{
	if (func_137(&Local_15, iParam0, 2))
	{
		return false;
	}
	if (func_137(&Local_15, iParam0, 128))
	{
		return false;
	}
	if (func_137(&Local_15, iParam0, 4))
	{
		return true;
	}
	if (func_429(&Local_15, &(Local_15[iParam0])))
	{
		return true;
	}
	if (!func_137(&Local_15, iParam0, 8))
	{
		return true;
	}
	return false;
}

void func_212(var uParam0)
{
	set_ped_config_flag(*uParam0, 6, false);
	set_ped_config_flag(*uParam0, 4, false);
	set_ped_config_flag(*uParam0, 494, true);
}

bool func_213(int iParam0)
{
	if (func_430(iParam0, 0))
	{
		return false;
	}
	return true;
}

void func_214(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_215(int iParam0)
{
	switch (Local_15.f_151)
	{
		case 24:
		case 26:
		case 27:
			return true;
	}
	return false;
}

bool func_216(int iParam0, int iParam1)
{
	if (func_138(&Local_15, iParam0, 2))
	{
		return false;
	}
	if (func_138(&Local_15, iParam0, 4))
	{
		return true;
	}
	if (func_431(&(Local_15.f_40[iParam0]), iParam1))
	{
		return true;
	}
	if (func_429(&Local_15, &(Local_15.f_40[iParam0])))
	{
		return true;
	}
	if (!func_138(&Local_15, iParam0, 8))
	{
		return true;
	}
	return false;
}

bool func_217(int iParam0)
{
	if (func_432(32768))
	{
		fVar0 = 120f;
	}
	else
	{
		fVar0 = 80f;
	}
	if (func_433(&(Local_15.f_84[iParam0]), fVar0))
	{
		return false;
	}
	if (func_141(&(Local_15.f_84[iParam0]), Global_36, 1) < 10f)
	{
		return false;
	}
	return true;
}

bool func_218(int iParam0)
{
	if (func_243(&Local_15, iParam0, 2))
	{
		return false;
	}
	if (is_ped_in_vehicle(Global_35, &(Local_15.f_49[iParam0]), true))
	{
		return false;
	}
	if (func_243(&Local_15, iParam0, 4))
	{
		return true;
	}
	if (func_434(&Local_15, &(Local_15.f_49[iParam0])))
	{
		return true;
	}
	if (!func_243(&Local_15, iParam0, 8))
	{
		return true;
	}
	return false;
}

bool func_219(int iParam0, int iParam1)
{
	if (func_433(iParam1, 1114636288) || func_435(iParam1, 1, 1) <= 30f)
	{
		return false;
	}
	return true;
}

void func_220(int iParam0)
{
}

float func_221(int iParam0)
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

void func_222(var uParam0, float fParam1)
{
	vVar0 = { uParam0->f_209 + Vector(-40f, -fParam1, -fParam1) };
	vVar3 = { uParam0->f_209 + Vector(40f, fParam1, fParam1) };
	vVar6 = { func_436(vVar0, vVar3, 0) };
	vVar9 = { func_437(vVar0, vVar3, 0) };
	clear_ped_non_creation_area();
	set_ped_paths_back_to_original(vVar6, vVar9, 0);
	func_438(uParam0->f_209, fParam1, 5);
	func_439(uParam0);
}

void func_223(vector3 vParam0, int iParam3)
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
			if (func_440(vVar2, vParam0, 2f, 1))
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

int func_224(int iParam0)
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

bool func_225(int iParam0)
{
	Var2 = { func_169(85200619) };
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

bool func_226(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_227(int iParam0, int iParam1)
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
	if (func_441(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_441(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_441(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_441(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_441(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_441(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_441(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_441(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_228(int iParam0)
{
	if (((func_229(iParam0, 1) && func_229(iParam0, 2)) && func_229(iParam0, 8)) && func_229(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_229(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_230()
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

int func_231(int iParam0)
{
	if (!func_234(iParam0))
	{
		return -1;
	}
	return func_443(func_442(iParam0));
}

bool func_232(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_233(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_234(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

float func_235(int iParam0, vector3 vParam1, bool bParam4)
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
	return func_444(vVar0, vParam1);
}

bool func_236(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_141(iParam0, Global_36, 1);
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

int func_237()
{
	return Global_1894899->f_2;
}

int func_238()
{
	if (Global_1894899->f_187)
	{
		return 1;
	}
	if (func_445(16) && !func_445(21))
	{
		return 1;
	}
	return 0;
}

bool func_239()
{
	if (Local_15.f_151 != 11)
	{
		return true;
	}
	if (Local_15.f_221 == 2)
	{
		return false;
	}
	return true;
}

bool func_240()
{
	return (Global_1894899 & 1 != 0 && func_237() != -1);
}

bool func_241(int iParam0)
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

void func_242(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_97[iParam1] = (iParam0->f_97[iParam1] || iParam2);
}

bool func_243(var uParam0, int iParam1, int iParam2)
{
	return (uParam0->f_115[iParam1] && iParam2) != 0;
}

bool func_244(int iParam0, float fParam1, float fParam2)
{
	fVar0 = func_446(iParam0, Global_35, 1, 1);
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

void func_245(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_115[iParam1] = (uParam0->f_115[iParam1] || iParam2);
}

float func_246(int iParam0)
{
	return iParam0->f_24;
}

void func_247(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

void func_248(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_256(uParam0, 1);
	}
	else
	{
		func_255(uParam0, 1);
	}
}

void func_249(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_255(&(uParam0->f_1), 16384);
	}
	else
	{
		func_256(&(uParam0->f_1), 16384);
	}
}

void func_250(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_255(&(uParam0->f_1), 2048);
	}
	else
	{
		func_256(&(uParam0->f_1), 2048);
	}
}

void func_251(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_256(uParam0, 16);
	}
	else
	{
		func_255(uParam0, 67108864);
		func_255(uParam0, 16);
	}
}

void func_252(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_255(&(uParam0->f_1), 128);
	}
	else
	{
		func_256(&(uParam0->f_1), 128);
	}
}

void func_253(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_256(uParam0, 256);
	}
	else
	{
		func_255(uParam0, 256);
	}
}

void func_254(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_256(uParam0, 268435456);
	}
	else
	{
		func_255(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_256(uParam0, 1073741824);
	}
	else
	{
		func_255(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_256(uParam0, 536870912);
	}
	else
	{
		func_255(uParam0, 536870912);
	}
}

void func_255(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_256(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_257(int iParam0)
{
	if (!func_87(iParam0, 0))
	{
		return false;
	}
	return Global_40.f_9571[iParam0]->f_1 == 5;
}

void func_258(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (func_196(iParam1, 1))
		{
			func_22(uParam0, 262144);
		}
		if (func_196(iParam1, 2))
		{
			func_22(uParam0, 524288);
		}
	}
	else
	{
		if (func_196(iParam1, 1))
		{
			func_45(uParam0, 262144);
		}
		if (func_196(iParam1, 2))
		{
			func_45(uParam0, 524288);
		}
	}
}

void func_259()
{
	func_78(&(Local_15.f_152), 0);
	func_79(&(Local_15.f_152), 1);
	func_337(&(Local_15.f_152), 1);
	func_338(&(Local_15.f_152), 1);
	func_250(&(Local_15.f_152), 0);
	func_249(&(Local_15.f_152), 0);
	func_339(&(Local_15.f_152), 1);
	func_251(&(Local_15.f_152), 1);
	func_447(&(Local_15.f_152), 1);
}

void func_260()
{
	switch (Local_274.f_48)
	{
		case 0:
			func_448(&Local_15, &Local_274);
			break;
		case 1:
			func_449(&Local_15, &Local_274);
			break;
		case 2:
			func_450(&Local_15, &Local_274);
			break;
		case 3:
			func_451(&Local_15, &Local_274);
			break;
		case 4:
			func_452(&Local_15, &Local_274);
			break;
	}
}

void func_261(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6)
{
	uParam0->f_5 = iParam1;
	uParam0->f_21 = fParam2;
	uParam0->f_22 = fParam3;
	uParam0->f_23 = fParam4;
	uParam0->f_24 = fParam5;
	uParam0->f_17 = iParam6;
}

void func_262(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
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
							func_453(&Var0, 180.6557f, 75.5711f, 98.7111f, 307.9777f);
							break;
						case 1:
							func_453(&Var0, -124.9678f, 182.499f, 92.7486f, 323.5033f);
							break;
						case 2:
							func_453(&Var0, -143.1968f, 392.7447f, 95.6412f, 26.7895f);
							break;
						case 3:
							func_453(&Var0, -175.487f, -208.2044f, 87.9832f, 155.3853f);
							break;
						case 4:
							func_453(&Var0, 810.023f, 376.8716f, 115.1321f, 278.0894f);
							break;
					}
					break;
				case 1:
				case 2:
				case 36:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -78.546f, 574.7642f, 117.1554f, 285.065f);
							break;
						case 1:
							func_453(&Var0, 52.8403f, 228.5046f, 108.3697f, 1.1595f);
							break;
					}
					break;
				case 3:
				case 4:
				case 38:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -98.0465f, 227.8637f, 99.6174f, 342f);
							break;
					}
					break;
				case 5:
				case 35:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -1114.856f, 73.738f, 53.0233f, 354.9799f);
							break;
					}
					break;
				case 6:
				case 42:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -566.0319f, 466.1427f, 98.0826f, 133.627f);
							break;
						case 1:
							func_453(&Var0, 731.3024f, -567.4277f, 75.8176f, 96.4522f);
							break;
						case 2:
							func_453(&Var0, 83.4469f, 582.1075f, 135.0757f, 264.5214f);
							break;
					}
					break;
				case 7:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -1771.38f, 128.1271f, 153.5691f, 181.1798f);
							break;
					}
					break;
				case 41:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -1771.38f, 128.1271f, 153.5691f, 181.1798f);
							break;
						case 1:
							func_453(&Var0, 831.6912f, -584.7949f, 78.2731f, 202.9779f);
							break;
					}
					break;
				case 8:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -437.7152f, -378.8148f, 85.5442f, 56.3376f);
							break;
					}
					break;
				case 40:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -437.7152f, -378.8148f, 85.5442f, 56.3376f);
							break;
					}
					break;
				case 9:
				case 10:
				case 37:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 202.3087f, 137.861f, 98.3938f, 326.3648f);
							break;
						case 1:
							func_453(&Var0, -372.0885f, -36.569f, 41.6905f, 348.5297f);
							break;
						case 2:
							func_453(&Var0, -927.3195f, -351.4889f, 48.6764f, 122.086f);
							break;
						case 3:
							func_453(&Var0, -1089.385f, 29.2608f, 55.1327f, 104.0236f);
							break;
					}
					break;
				case 11:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 1561.633f, -654.6262f, 46.2574f, 321.6371f);
							break;
						case 1:
							func_453(&Var0, 954.459f, -1251.211f, 54.8197f, 43.8895f);
							break;
						case 2:
							func_453(&Var0, 1528.073f, -1412.362f, 65.0164f, 100.1078f);
							break;
						case 3:
							func_453(&Var0, 1485.599f, -988.1472f, 49.9976f, 203.8493f);
							break;
						case 4:
							func_453(&Var0, 2060.011f, -1359.194f, 41.5979f, 309.696f);
							break;
						case 5:
							func_453(&Var0, 1347.459f, -1779.138f, 68.0518f, 13.8827f);
							break;
					}
					break;
				case 12:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 1486.386f, -863.9506f, 49.1165f, 40.9143f);
							break;
					}
					break;
				case 15:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 1751.006f, -792.3771f, 40.7652f, 45.2804f);
							break;
					}
					break;
				case 13:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 918.9561f, -1061.409f, 54.6744f, 191.2117f);
							break;
						case 1:
							func_453(&Var0, 1486.383f, -942.4707f, 47.8906f, 181.1513f);
							break;
					}
					break;
				case 14:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 1561.589f, -2121.429f, 44.3306f, 273.483f);
							break;
						case 1:
							func_453(&Var0, 1391.634f, -2269.641f, 44.9803f, 294.7664f);
							break;
						case 2:
							func_453(&Var0, 2067.27f, -1250.361f, 42.8864f, 257.827f);
							break;
					}
					break;
				case 16:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 1173.9f, -909.8f, 66.9f, -57.4f);
							break;
						case 1:
							func_453(&Var0, 878.2368f, -914.2035f, 54.1948f, 270.879f);
							break;
					}
					break;
				case 17:
				case 39:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 2069.093f, -1241.536f, 41.2556f, 176.86f);
							break;
						case 1:
							func_453(&Var0, 2081.443f, -899.7972f, 41.1731f, 260.946f);
							break;
						case 2:
							func_453(&Var0, 1212.386f, -1591.315f, 56.0669f, 23.4687f);
							break;
						case 3:
							func_453(&Var0, 1506.064f, -905.8009f, 47.8961f, 165.3073f);
							break;
						case 4:
							func_453(&Var0, 1606.995f, -1545.489f, 59.2865f, 177.0083f);
							break;
					}
					break;
				case 18:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 2410.232f, 1140.23f, 97.4886f, 180.3519f);
							break;
					}
					break;
				case 19:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 2410.232f, 1140.23f, 97.4886f, 180.3519f);
							break;
					}
					break;
				case 21:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 2449.325f, 1573.939f, 85.8194f, 39.9471f);
							break;
						case 1:
							func_453(&Var0, 2584.913f, 1633.828f, 97.7316f, 8.1257f);
							break;
						case 2:
							func_453(&Var0, 2730.857f, 1311.648f, 92.9221f, 149.1053f);
							break;
						case 3:
							func_453(&Var0, 2794.002f, 1031.168f, 59.517f, 188.3449f);
							break;
					}
					break;
				case 20:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 2430.674f, 1253.279f, 108.2854f, 292.6725f);
							break;
					}
					break;
				case 22:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 2659.633f, 897.6414f, 88.4611f, 203.4193f);
							break;
					}
					break;
				case 23:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 2709.737f, 473.069f, 65.8412f, 252.6725f);
							break;
					}
					break;
				case 24:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -2313.103f, -1513.598f, 140.2823f, 15.1824f);
							break;
					}
					break;
				case 25:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -1434.349f, -1281.048f, 79.4382f, 38.4403f);
							break;
					}
					break;
				case 26:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -1304.657f, -1086.787f, 72.7056f, 19.326f);
							break;
					}
					break;
				case 28:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -1451.386f, -1256.971f, 77.9939f, 246.5365f);
							break;
					}
					break;
				case 27:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -1938.231f, -1737.649f, 121.0378f, 54.6957f);
							break;
						case 1:
							func_453(&Var0, -2237.81f, -1236.479f, 135.9782f, 291.2003f);
							break;
					}
					break;
				case 29:
				case 30:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -2215.869f, -408.5112f, 163.5815f, 101.2651f);
							break;
					}
					break;
				case 31:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -3476.859f, -2618.098f, -13.6175f, -100.63f);
							break;
					}
					break;
				case 32:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -5102.887f, -2937.184f, 2.3186f, 58.5231f);
							break;
					}
					break;
				case 33:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -3772.229f, -2818.31f, -16.4697f, 123.7911f);
							break;
						case 1:
							func_453(&Var0, -3998.259f, -2362.783f, -9.1375f, 73.6187f);
							break;
					}
					break;
				case 34:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 1972.732f, 1695.837f, 162.568f, 114.1732f);
							break;
					}
					break;
				case 43:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 2242.927f, 732.5889f, 91.0723f, 263.9706f);
							break;
						case 1:
							func_453(&Var0, 2698.555f, 183.9842f, 52.7268f, 12.5536f);
							break;
						case 2:
							func_453(&Var0, 2012.363f, 450.9774f, 114.9433f, 51.6697f);
							break;
						case 3:
							func_453(&Var0, 2870.96f, 831.843f, 48.2579f, 28.2762f);
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
							func_453(&Var0, 334.8338f, 220.554f, 101.8269f, 119.7537f);
							break;
						case 1:
							func_453(&Var0, -113.9271f, 443.0494f, 111.7579f, 219.7514f);
							break;
						case 2:
							func_453(&Var0, -298.4487f, 637.9625f, 111.069f, 190.7615f);
							break;
						case 3:
							func_453(&Var0, -379.536f, -313.1479f, 87.3478f, 269.676f);
							break;
						case 4:
							func_453(&Var0, 1058.255f, 395.0368f, 100.4976f, 78.4296f);
							break;
					}
					break;
				case 1:
				case 2:
				case 36:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 153.7973f, 524.9196f, 136.8577f, 48.6442f);
							break;
						case 1:
							func_453(&Var0, 206.1301f, 463.9098f, 121.7605f, 105.0337f);
							break;
					}
					break;
				case 3:
				case 4:
				case 38:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -169.289f, 450.9006f, 96.4484f, 199.7628f);
							break;
					}
					break;
				case 5:
				case 35:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -1093.884f, 187.3798f, 59.2496f, 162.9302f);
							break;
					}
					break;
				case 6:
				case 42:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -650.8867f, 350.328f, 87.9592f, 308.87f);
							break;
						case 1:
							func_453(&Var0, 581.8732f, -498.1398f, 77.1145f, 214.5317f);
							break;
						case 2:
							func_453(&Var0, 195.9423f, 643.7529f, 133.8094f, 123.0221f);
							break;
					}
					break;
				case 7:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -1720.367f, -58.8535f, 175.2912f, 20.2253f);
							break;
					}
					break;
				case 41:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -1720.367f, -58.8535f, 175.2912f, 20.2253f);
							break;
						case 1:
							func_453(&Var0, 816.4929f, -791.5338f, 57.0665f, 358.0346f);
							break;
					}
					break;
				case 8:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -602.5374f, -246.7336f, 40.84f, 224.9445f);
							break;
					}
					break;
				case 40:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -602.5374f, -246.7336f, 40.84f, 224.9445f);
							break;
					}
					break;
				case 9:
				case 10:
				case 37:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 488.6012f, 346.341f, 104.38f, 132.2152f);
							break;
						case 1:
							func_453(&Var0, -491.0948f, 240.2662f, 42.8778f, 245.3544f);
							break;
						case 2:
							func_453(&Var0, -1063.855f, -573.8351f, 81.1675f, 22.0417f);
							break;
						case 3:
							func_453(&Var0, -1383.4f, -131.3f, 94.2f, 2.2213f);
							break;
					}
					break;
				case 11:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 1721.41f, -764.9014f, 41.3985f, 48.7414f);
							break;
						case 1:
							func_453(&Var0, 917.1657f, -1057.089f, 55.351f, 197.7367f);
							break;
						case 2:
							func_453(&Var0, 1367.119f, -1379.669f, 79.039f, 234.1533f);
							break;
						case 3:
							func_453(&Var0, 1492.79f, -1122.532f, 56.3596f, 8.428f);
							break;
						case 4:
							func_453(&Var0, 2246.185f, -1359.823f, 44.2797f, 67.8845f);
							break;
						case 5:
							func_453(&Var0, 1289.32f, -1632.029f, 65.404f, 182.4022f);
							break;
					}
					break;
				case 12:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 1583.548f, -629.852f, 46.1712f, 146.2081f);
							break;
					}
					break;
				case 15:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 1582.927f, -623.4384f, 46.2721f, 218.2033f);
							break;
					}
					break;
				case 13:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 947.2817f, -1236.62f, 53.763f, 23.4717f);
							break;
						case 1:
							func_453(&Var0, 1508.104f, -1149.061f, 53.7777f, 48.8161f);
							break;
					}
					break;
				case 14:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 1861.568f, -1978.116f, 43.699f, 111.3814f);
							break;
						case 1:
							func_453(&Var0, 1506.446f, -2206.457f, 42.6941f, 158.0186f);
							break;
						case 2:
							func_453(&Var0, 2273.229f, -1369.996f, 45.7006f, 80.9983f);
							break;
					}
					break;
				case 16:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 1346.7f, -858.3f, 72.7f, 88.6f);
							break;
						case 1:
							func_453(&Var0, 1107.901f, -916.9768f, 66.9322f, 90.5837f);
							break;
					}
					break;
				case 17:
				case 39:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 2264.292f, -1366.995f, 44.3097f, 79.8327f);
							break;
						case 1:
							func_453(&Var0, 2264.248f, -1037.55f, 42.1479f, 54.3753f);
							break;
						case 2:
							func_453(&Var0, 1091.079f, -1431.687f, 54.6637f, 223.0478f);
							break;
						case 3:
							func_453(&Var0, 1493.179f, -1116.514f, 55.4248f, 352.523f);
							break;
						case 4:
							func_453(&Var0, 1753.022f, -1638.871f, 48.5096f, 34.1859f);
							break;
					}
					break;
				case 18:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
							break;
					}
					break;
				case 19:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
							break;
					}
					break;
				case 21:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 2299.518f, 1759.59f, 107.9513f, 195.5682f);
							break;
						case 1:
							func_453(&Var0, 2705.534f, 1911.673f, 113.9124f, 141.4947f);
							break;
						case 2:
							func_453(&Var0, 2530.082f, 1242.029f, 148.8438f, 338.4772f);
							break;
						case 3:
							func_453(&Var0, 2848.581f, 689.1435f, 64.6365f, 0.9953f);
							break;
					}
					break;
				case 20:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 2508.16f, 1404.184f, 95.79f, 124.3386f);
							break;
					}
					break;
				case 22:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 2799.991f, 890.5291f, 63.6047f, 152.4149f);
							break;
					}
					break;
				case 23:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 2921.223f, 414.4291f, 48.478f, 74.3386f);
							break;
					}
					break;
				case 24:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -2409.259f, -1475.456f, 147.1943f, 267.4513f);
							break;
					}
					break;
				case 25:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -1682.643f, -1246.672f, 84.8961f, 286.9227f);
							break;
					}
					break;
				case 28:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -1154.178f, -1214.848f, 68.3049f, 89.9786f);
							break;
					}
					break;
				case 27:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -2231.266f, -1599.062f, 145.9509f, 251.4796f);
							break;
						case 1:
							func_453(&Var0, -2091.402f, -1125.535f, 119.3745f, 117.3666f);
							break;
					}
					break;
				case 26:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -1563.969f, -868.5887f, 86.2286f, 229.2799f);
							break;
					}
					break;
				case 29:
				case 30:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -2295.963f, -328.9082f, 154.6866f, 183.9384f);
							break;
					}
					break;
				case 31:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -3161.003f, -2610.719f, 9.9647f, 66.5f);
							break;
					}
					break;
				case 32:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -5379.7f, -2940.985f, 1.6323f, 255.6953f);
							break;
					}
					break;
				case 33:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -3982.679f, -3068.613f, -13.872f, 331.3266f);
							break;
						case 1:
							func_453(&Var0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
							break;
					}
					break;
				case 34:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 1819.118f, 1593.633f, 168.2121f, 313.8806f);
							break;
					}
					break;
				case 43:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 2482.688f, 729.5152f, 72.2941f, 117.0933f);
							break;
						case 1:
							func_453(&Var0, 2585.403f, 338.2195f, 69.6483f, 220.6653f);
							break;
						case 2:
							func_453(&Var0, 1805.624f, 550.4319f, 105.9446f, 233.3962f);
							break;
						case 3:
							func_453(&Var0, 2793.57f, 1038.077f, 58.5925f, 188.5771f);
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 13:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, 997.1635f, -1186.04f, 64.0811f, 75.3782f);
							break;
						case 1:
							func_453(&Var0, 1391.092f, -1081.252f, 70.8405f, 284.1285f);
							break;
					}
					break;
				case 33:
					switch (iParam4)
					{
						case 0:
							func_453(&Var0, -3729.811f, -3131.73f, -5.6609f, 79.6603f);
							break;
						case 1:
							func_453(&Var0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
							break;
					}
					break;
				case 0:
					switch (iParam4)
					{
						case 1:
							func_453(&Var0, 54.6531f, 217.5979f, 107.1034f, 40.7729f);
							break;
					}
					break;
			}
			break;
		case 3:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			break;
		default:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			break;
	}
	*uParam2 = { Var0 };
	*uParam3 = Var0.f_3;
	if (func_69(*uParam2))
	{
		*uParam2 = { 0f, 0f, 0f };
		*uParam3 = 0f;
	}
}

bool func_263(int iParam0, bool bParam1)
{
	if (!func_87(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0]->f_1 == 3 || (bParam1 && Global_40.f_9571[iParam0]->f_1 == 4));
}

int func_264(int iParam0)
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

int func_265(bool bParam0, bool bParam1, bool bParam2)
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

void func_266(var uParam0, float fParam1)
{
	if (!_does_volume_exist(uParam0->f_237))
	{
		func_454(&(uParam0->f_237), uParam0->f_209, uParam0->f_151);
	}
	func_455(uParam0->f_237, "ambush_restriction", 1, 0, 512, 0, -1082130432);
	vVar0 = { uParam0->f_209 + Vector(-40f, -fParam1, -fParam1) };
	vVar3 = { uParam0->f_209 + Vector(40f, fParam1, fParam1) };
	vVar6 = { func_436(vVar0, vVar3, 0) };
	vVar9 = { func_437(vVar0, vVar3, 0) };
	if (func_456(uParam0->f_151))
	{
		iVar12 = func_457(uParam0);
		func_458(uParam0->f_209, fParam1, 0, 0, iVar12);
	}
	set_ped_non_creation_area(vVar6, vVar9);
	set_ped_paths_in_area(vVar6, vVar9, false, 1);
	stop_fire_in_range(uParam0->f_209, fParam1);
	func_459(uParam0->f_209, fParam1, 0);
}

void func_267(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_255(&iParam1, 8192);
	}
	if (bParam4)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

int func_268(int iParam0, bool bParam1)
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

int func_269(int iParam0, int iParam1, int iParam2)
{
	iVar2 = 0;
	iVar1 = func_460(iParam0);
	if ((func_196(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
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
					if (func_461())
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
					if (func_461())
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
					if (func_461())
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
					if (func_461())
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
					if (func_461())
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

int func_270(int iParam0, int iParam1, int iParam2)
{
	iVar2 = 1268180497;
	iVar1 = func_460(iParam0);
	if ((func_196(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
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
					if (func_461())
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
					if (func_461())
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
					if (func_461())
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
					if (func_461())
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
					if (func_461())
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

void func_271()
{
	iVar0 = 0;
	while (iVar0 < 0)
	{
		sVar1 = func_462(iVar0);
		if (!is_string_null_or_empty(sVar1))
		{
			request_anim_dict(sVar1);
		}
		iVar0++;
	}
}

void func_272(var uParam0)
{
	iVar1 = 0;
	while (iVar1 < uParam0->f_217)
	{
		iVar0 = func_98(iVar1);
		request_model(iVar0, false);
		iVar1++;
	}
}

void func_273(var uParam0)
{
	iVar1 = 0;
	while (iVar1 < uParam0->f_215)
	{
		iVar0 = func_97(iVar1);
		request_model(iVar0, false);
		iVar1++;
	}
}

bool func_274()
{
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < 0)
	{
		sVar1 = func_462(iVar0);
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

bool func_275(var uParam0)
{
	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_215)
	{
		iVar0 = func_97(iVar1);
		if (!has_model_loaded(iVar0))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

bool func_276(var uParam0)
{
	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_217)
	{
		iVar0 = func_98(iVar1);
		if (!has_model_loaded(iVar0))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

int func_277(int iParam0, int iParam1)
{
	if (iParam1->f_181 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return 2132733042;
			case 1:
				return 277024448;
			case 2:
				return 327000813;
			case 3:
				return 532561550;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1776501247;
			case 1:
				return 449389388;
			case 2:
				return -632180586;
			case 3:
				return 16777490;
			default:
				break;
		}
	}
	return func_94();
}

struct<4> func_278(var uParam0, int iParam1)
{
	switch (uParam0->f_48)
	{
		case 0:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(0, 4);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(1, 4);
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(2, 4);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(3, 4);
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(4, 4);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(5, 4);
					default:
						break;
				}
			}
			break;
		case 3:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(6, 4);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(7, 4);
					default:
						break;
				}
			}
			break;
		case 4:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(8, 4);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(9, 4);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

bool func_279(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

struct<4> func_280(var uParam0, int iParam1)
{
	switch (uParam0->f_48)
	{
		case 0:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(0, 7);
					case 1:
						return func_287(0, 10);
					case 2:
						return func_287(0, 11);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(1, 7);
					case 1:
						return func_287(1, 10);
					case 2:
						return func_287(1, 11);
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(2, 7);
					case 1:
						return func_287(2, 10);
					case 2:
						return func_287(2, 11);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(3, 7);
					case 1:
						return func_287(3, 10);
					case 2:
						return func_287(3, 11);
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(4, 7);
					case 1:
						return func_287(4, 10);
					case 2:
						return func_287(4, 11);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(5, 7);
					case 1:
						return func_287(5, 10);
					case 2:
						return func_287(5, 11);
					default:
						break;
				}
			}
			break;
		case 3:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(6, 7);
					case 1:
						return func_287(6, 10);
					case 2:
						return func_287(6, 11);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(7, 7);
					case 1:
						return func_287(7, 10);
					case 2:
						return func_287(7, 11);
					default:
						break;
				}
			}
			break;
		case 4:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(8, 7);
					case 1:
						return func_287(8, 10);
					case 2:
						return func_287(8, 11);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(9, 7);
					case 1:
						return func_287(9, 10);
					case 2:
						return func_287(9, 11);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

void func_281(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_463(iParam1))
		{
			func_464(iParam0, 41788943);
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
			func_465(iParam0, 0, 1);
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
			func_466(iParam0, 0);
			bVar0 = true;
		}
		func_467(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

int func_282(int iParam0)
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

bool func_283(var uParam0, int iParam1, int iParam2)
{
	iVar0 = -1;
	iVar1 = -1;
	if (_0xa19447d83294e29f(iParam1, &iVar0, &iVar1))
	{
		if (iVar0 <= 0)
		{
			return true;
		}
		else if (iVar1 == iVar0)
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = _get_ped_in_draft_seat(iParam1, iVar2);
				if (does_entity_exist(iVar3) && !is_entity_dead(iVar3))
				{
					func_115(uParam0, iVar3, iParam2);
				}
				iVar2++;
			}
			return true;
		}
	}
	return false;
}

void func_284(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_421(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, iParam4, iParam5, iParam6, iParam7);
		if (func_421(uParam0))
		{
		}
	}
}

int func_285(int iParam0)
{
	switch (Local_15.f_181)
	{
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0;
				case 1:
					return 1;
				case 2:
					return 0;
				case 3:
					return 1;
				default:
					break;
			}
			break;
		default:
			switch (iParam0)
			{
				case 0:
					return 2;
				case 1:
					return 3;
				case 2:
					return 2;
				case 3:
					return 3;
				default:
					break;
			}
			break;
	}
	return -1;
}

char* func_286(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0175_G_M_O_UniExConfeds_01_WHITE_02";
		case 1:
			return "0179_G_M_Y_UniExConfeds_01_WHITE_03";
		case 3:
			return "0131_G_M_M_UniCriminals_01_WHITE_02";
		case 2:
			return "0134_G_M_M_UniCriminals_01_HISPANIC_01";
		default:
			break;
	}
	return "";
}

struct<4> func_287(int iParam0, int iParam1)
{
	return func_468(iParam0, iParam1);
}

bool func_288(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_289(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_308(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_308(iVar4) && iVar4 != iVar0)
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
	if (func_388() == -1 && !func_469(iVar0))
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
				if (func_469(-183018591))
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
		if (iParam0 != Global_35 && func_308(iVar0))
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
		func_470(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_471(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_472(iVar0))
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

bool func_290()
{
	if (func_388() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

char* func_291(int iParam0, var uParam1)
{
	switch (iParam0->f_181)
	{
		case 2:
			if (uParam1->f_44 < 2)
			{
				return "AMBUSH_ROR_V1_ILO_POS_INT";
			}
			else if (uParam1->f_44 >= 8)
			{
				return "AMBUSH_ROR_V1_ILO_GRTA";
			}
			else
			{
				return "AMBUSH_ROR_V1_ILO_GRTA";
			}
			break;
		default:
			if (uParam1->f_44 < 2)
			{
				return "AMBUSH_ROR_V2_ILO_POS_INT";
			}
			else if (uParam1->f_44 >= 8)
			{
				return "AMBUSH_ROR_V2_ILO_GRTA";
			}
			else
			{
				return "AMBUSH_ROR_V2_ILO_GRTA";
			}
			break;
	}
	return "";
}

char* func_292(int iParam0, var uParam1)
{
	switch (iParam0->f_181)
	{
		case 2:
			if (uParam1->f_44 < 2)
			{
				return "AMBUSH_ROR_V1_ILO_NEG_INT";
			}
			else if (uParam1->f_44 >= 8)
			{
				return "AMBUSH_ROR_V1_ILO_NEGA";
			}
			else
			{
				return "AMBUSH_ROR_V1_ILO_NEGA";
			}
			break;
		default:
			if (uParam1->f_44 < 2)
			{
				return "AMBUSH_ROR_V2_ILO_NEG_INT";
			}
			else if (uParam1->f_44 >= 8)
			{
				return "AMBUSH_ROR_V2_ILO_NEGA";
			}
			else
			{
				return "AMBUSH_ROR_V2_ILO_NEGA";
			}
			break;
	}
	return "";
}

char* func_293(int iParam0, var uParam1)
{
	switch (iParam0->f_181)
	{
		case 2:
			if (uParam1->f_44 < 2)
			{
				return "AMBUSH_ROR_V1_ILO_POS_INT";
			}
			else if (uParam1->f_44 >= 8)
			{
				return "AMBUSH_ROR_V1_ILO_GRTA";
			}
			else
			{
				return "AMBUSH_ROR_V1_ILO_GRTA";
			}
			break;
		default:
			if (uParam1->f_44 < 2)
			{
				return "AMBUSH_ROR_V2_ILOPOS_INT";
			}
			else if (uParam1->f_44 >= 8)
			{
				return "AMBUSH_ROR_V2_ILO_GRTA";
			}
			else
			{
				return "AMBUSH_ROR_V2_ILO_GRTA";
			}
			break;
	}
	return "";
}

char* func_294(int iParam0, var uParam1)
{
	switch (iParam0->f_181)
	{
		case 2:
			if (uParam1->f_44 < 2)
			{
				return "AMBUSH_ROR_V1_ILO_NEG_INT";
			}
			else if (uParam1->f_44 >= 8)
			{
				return "AMBUSH_ROR_V1_ILO_NEGA";
			}
			else
			{
				return "AMBUSH_ROR_V1_ILO_NEGA";
			}
			break;
		default:
			if (uParam1->f_44 < 2)
			{
				return "AMBUSH_ROR_V2_ILONEG_INT";
			}
			else if (uParam1->f_44 >= 8)
			{
				return "AMBUSH_ROR_V2_ILO_NEGA";
			}
			else
			{
				return "AMBUSH_ROR_V2_ILO_NEGA";
			}
			break;
	}
	return "";
}

char* func_295(int iParam0)
{
	if (func_473(iParam0))
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

void func_296(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_309(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_474(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_475(iParam0->f_6, iParam0->f_5, 0);
			}
			func_476(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_477(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_297(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_299((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_298(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_299(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_298(iParam0, 13))
	{
		func_478(iParam0, 0);
	}
	else
	{
		func_479(iParam0, 0);
	}
	if (func_309(iParam0->f_6))
	{
		if (bParam2)
		{
			func_310(&(iParam0->f_6), 0, 1);
		}
	}
}

int func_300(int iParam0, int iParam1, int iParam2)
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

int func_301(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_480(&iVar0);
	if (func_196(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_481(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_196(iVar0, 134217728))
	{
		func_482(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_483(558))
				{
					func_484(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

bool func_302(var uParam0)
{
	return uParam0->f_2 == 2;
}

void func_303(var uParam0, int iParam1)
{
	stop_current_playing_ambient_speech(uParam0, iParam1);
	stop_current_playing_speech(uParam0, iParam1);
}

Vector3 func_304(vector3 vParam0)
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

void func_305(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_298(iParam0, 4))
		{
			func_310(&(iParam0->f_6), 1, 1);
			func_478(iParam0, 4);
		}
	}
	else if (func_298(iParam0, 4))
	{
		func_479(iParam0, 4);
		func_478(iParam0, 14);
	}
}

char* func_306(int iParam0, var uParam1, int iParam2, int iParam3)
{
	switch (iParam0->f_181)
	{
		case 2:
			switch (iParam2)
			{
				case 0:
				case 2:
					*iParam3 = 2;
					return "CALLOUT_FOLLOW_ROB_ATTACK_MALE";
				case 1:
				case 3:
					*iParam3 = 1;
					return "CALLOUT_FOLLOW_ROB_ATTACK_MALE";
				default:
					break;
			}
			break;
		default:
			switch (iParam2)
			{
				case 0:
				case 2:
					return "AMBUSH_ROR_V2_ROB_ATTACK";
				case 1:
				case 3:
					return "AMBUSH_ROR_V2_ROB_ATTACK";
				default:
					break;
			}
			break;
	}
	return "Invalid";
}

bool func_307(int iParam0, int iParam1, char* sParam2, float fParam3, bool bParam4, int iParam5, int iParam6)
{
	return func_366(iParam0, iParam1, sParam2, "", fParam3, iParam6, 0, 1, 1, fParam3 >= 0f, bParam4, iParam5, 1, 0, 0);
}

bool func_308(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_309(int iParam0)
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

void func_310(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_309(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_485(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_486(iVar0);
	*uParam0 = 0;
}

bool func_311(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x59fa676177dbe4c9(iParam0) == 4;
}

void func_312(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_313(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_388() != -1)
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

bool func_314(int iParam0, int iParam1, bool bParam2)
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

bool func_315(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_487(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_488(uParam0[*uParam3], 0, iParam1, uParam2, 0, 0))
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

bool func_316(var uParam0)
{
	if (_0x038b1f1674f0e242(Global_35))
	{
		func_40(&(uParam0->f_256), 0);
		if (func_47(&(uParam0->f_256), 1.5f))
		{
			clear_ped_tasks(Global_35, 1, 0);
			return true;
		}
	}
	return false;
}

void func_317()
{
	func_489();
}

int func_318(var uParam0, int iParam1)
{
	Var1.f_10 = 7;
	Var1 = 0;
	Var1.f_1 = iParam1;
	Var1.f_2 = 0;
	return func_490(&uVar0, &Var1);
}

void func_319(int iParam0, int iParam1, int iParam2)
{
	func_333(&(Local_15[iParam0]), Global_36, iParam1, 0, iParam2);
}

int func_320(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

void func_321(var uParam0, int iParam1, bool bParam2, float fParam3)
{
	if (bParam2)
	{
		if ((((!uParam0->f_1 && *uParam0 == 0) && Global_1935630->f_58 != iParam1) && func_61(Global_1935630->f_58, 0, 1)) && func_491(Global_1935630->f_58))
		{
			*uParam0 = Global_1935630->f_58;
		}
		else
		{
			*uParam0 = iParam1;
		}
		uParam0->f_1 = 1;
		func_492(*uParam0, 1, fParam3, 0);
	}
	else
	{
		func_492(iParam1, 0, fParam3, 0);
		func_492(*uParam0, 0, fParam3, 0);
		*uParam0 = 0;
		uParam0->f_1 = 0;
	}
}

bool func_322()
{
	if (Local_274.f_98 < (Local_274.f_104 - 7f))
	{
		return true;
	}
	return false;
}

void func_323(var uParam0, int iParam1)
{
	uParam0->f_45 = iParam1;
}

int func_324(var uParam0, var uParam1)
{
	fVar0 = 15f;
	fVar1 = 2f;
	iVar3 = -1;
	iVar4 = 1;
	iVar2 = func_301((*uParam0)[3], &(uParam1->f_191), fVar0, &(uParam1->f_212), &iVar4, fVar1, 3, 0, "", 524288 | func_300(3, 0, 0), 0, 0, 2, 1, -1082130432, 0);
	iVar3 = iVar2;
	if (iVar3 != -1)
	{
		return iVar3;
	}
	if (func_302(&(uParam1->f_191)))
	{
		if (uParam1->f_191.f_1 != -1)
		{
			func_329(uParam1, 0);
			switch (uParam1->f_191.f_1)
			{
				case 0:
					func_136(uParam1, 0, 0, 1);
					break;
				case 1:
					func_136(uParam1, 0, 0, 0);
					break;
			}
		}
	}
	return iVar3;
}

void func_325(var uParam0, var uParam1)
{
	if (func_290())
	{
		sVar0 = func_291(uParam0, uParam1);
		sVar1 = func_292(uParam0, uParam1);
	}
	else
	{
		sVar0 = func_293(uParam0, uParam1);
		sVar1 = func_294(uParam0, uParam1);
	}
	if (uParam1->f_42 <= 0)
	{
		sVar1 = "BRA_V3_ILO_NEG";
	}
	set_ped_config_flag(uParam0[3], 315, false);
	func_296(uParam1->f_212[0], func_295(7), sVar0, -163964935, 0, 0, 0, 1, 0);
	func_296(uParam1->f_212[1], func_295(10), sVar1, 648122183, 0, 0, 0, 1, 0);
	func_297(&(uParam1->f_212), 0, 0);
	func_493(uParam1->f_212[0], 1, 1);
}

void func_326(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	fVar25 = to_float((iParam4 / 1000));
	if (bParam5)
	{
		_0xe7fa07624574b79a(iParam0, iParam1, iParam2, iParam3, fVar25, 1, 0, 0, 0);
	}
	task_look_at_entity(iParam0, iParam1, iParam4, 0, 51, 0);
	func_494(&Var0, iParam1, 0, -1, 3, 3, 2, 1, 0, 0, 0, 0);
	_0x66f9eb44342bb4c5(iParam0, &Var0);
}

char* func_327(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (uParam1->f_42 > 0)
	{
		switch (uParam0->f_181)
		{
			case 2:
				*iParam3 = 1;
				return "WARNING";
			default:
				break;
		}
		return "AMBUSH_ROR_V2_BACK_WARNING";
	}
	else
	{
		return "GANG_INTERACT_CHAT_WARNING_WILDERNESS";
	}
	return "";
}

bool func_328()
{
	if ((func_47(Local_274.f_58[1], 10f) && is_ped_facing_ped(Global_35, &(Local_15[3]), 40f)) && func_141(&(Local_15[3]), Global_36, 1) < Local_274.f_105)
	{
		return true;
	}
	return false;
}

void func_329(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_298(uParam0->f_212[0], 0) && !func_298(uParam0->f_212[0], 4))
		{
			func_299(uParam0->f_212[0], 1, 0);
		}
		if (!func_298(uParam0->f_212[1], 0) && !func_298(uParam0->f_212[1], 4))
		{
			func_299(uParam0->f_212[1], 1, 0);
		}
	}
	else
	{
		if (func_298(uParam0->f_212[0], 0) && !func_298(uParam0->f_212[0], 4))
		{
			func_299(uParam0->f_212[0], 0, 0);
		}
		if (func_298(uParam0->f_212[1], 0) && !func_298(uParam0->f_212[1], 4))
		{
			func_299(uParam0->f_212[1], 0, 0);
		}
	}
}

int func_330(int iParam0, var uParam1, int iParam2)
{
	task_turn_ped_to_face_entity(iParam0, uParam1, iParam2, 3f, 0.25f, -1082130432);
	return 1;
}

bool func_331(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_495(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_496(fParam0))
	{
		return false;
	}
	return true;
}

bool func_332(int iParam0, vector3 vParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(iParam0, vParam1);
}

void func_333(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!func_227(iParam0, 0))
	{
		return;
	}
	if (!is_ped_using_any_scenario(iParam0))
	{
		return;
	}
	if (iParam5 && _0xf9331b3a314eb49d(iParam0))
	{
		_0xf1c03a5352243a30(iParam0);
		return;
	}
	if (func_69(vParam1))
	{
	}
	switch (iParam4)
	{
		case 3:
			_0x802092b07e3b1eea(iParam0, vParam1, iParam6);
			break;
		case 5:
			_0x463803429297117c(iParam0, vParam1, iParam6, 0);
			break;
		case 6:
			_0x62fdad5e01d2dd47(iParam0, vParam1, iParam6, 0);
			break;
		case 4:
			_0xec6935ebe0847b90(iParam0, vParam1);
			break;
		case 2:
			_0xeeed8fafec331a70(iParam0, vParam1, iParam6);
			break;
		case 1:
			_0xf1c03a5352243a30(iParam0);
			break;
		case 7:
			_0xa3a9299c4f2adb98(iParam0);
			break;
		default:
			_0xa3a9299c4f2adb98(iParam0);
			break;
	}
}

int func_334(int iParam0, int iParam1)
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

void func_335(var uParam0, int iParam1)
{
}

bool func_336(var uParam0)
{
	switch (uParam0->f_224)
	{
		case 0:
			if (func_497(uParam0))
			{
				func_335(uParam0, 1);
				return true;
			}
			break;
		case 1:
			if (func_498(uParam0))
			{
				func_335(uParam0, 2);
				return true;
			}
			break;
		case 2:
			if (func_499(uParam0))
			{
				func_335(uParam0, 3);
				return true;
			}
			break;
		case 3:
			if (func_500(uParam0))
			{
				func_335(uParam0, 4);
				return true;
			}
			break;
		case 4:
			if (func_501(uParam0))
			{
				func_335(uParam0, 5);
				return true;
			}
			break;
		case 5:
			if (func_502(uParam0))
			{
				func_335(uParam0, 6);
				return true;
			}
			break;
		case 6:
			break;
	}
	uParam0->f_224++;
	uParam0->f_224 = (uParam0->f_224 % 7);
	return false;
}

void func_337(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_255(&(uParam0->f_1), 2);
	}
	else
	{
		func_256(&(uParam0->f_1), 2);
	}
}

void func_338(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_255(&(uParam0->f_1), 8);
	}
	else
	{
		func_256(&(uParam0->f_1), 8);
	}
}

void func_339(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_255(&(uParam0->f_1), 1);
	}
	else
	{
		func_256(&(uParam0->f_1), 1);
	}
}

void func_340(var uParam0, bool bParam1)
{
	if (uParam0->f_182.f_17 & 4 != 0)
	{
		return;
	}
	if (uParam0->f_182.f_17 & 128 != 0)
	{
		if (!func_503(&(uParam0->f_182), 256))
		{
			if (func_503(&(uParam0->f_182), 64))
			{
				if (is_control_pressed(0, -513041747))
				{
					func_40(&(uParam0->f_182.f_10), 0);
					if (func_420(&(uParam0->f_182.f_10)))
					{
						func_504(&(uParam0->f_182.f_10));
					}
					if (func_47(&(uParam0->f_182.f_10), 0.2f))
					{
						if (Global_1935630->f_40 != 0 && bParam1)
						{
							task_horse_action(Global_1935630->f_40, 8, 0, 0);
							func_505(&(uParam0->f_182), 256);
						}
					}
				}
				else if (func_60(&(uParam0->f_182.f_10)))
				{
					func_373(&(uParam0->f_182.f_10));
				}
			}
		}
	}
	if (uParam0->f_182.f_17 & 8 != 0)
	{
		set_player_control(player_id(), true, 0, false);
		func_505(&(uParam0->f_182), 4);
		set_entity_invincible(Global_35, false);
		if (func_61(get_mount(Global_35), 0, 1))
		{
			set_entity_invincible(get_mount(Global_35), false);
		}
		return;
	}
	iVar0 = get_mount(Global_35);
	if (uParam0->f_182.f_17 & 32768 != 0 && uParam0->f_182.f_17 & 64 == 0)
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (uParam0->f_182.f_17 & 1 == 0)
	{
		if (bVar1 && (func_506(&(uParam0->f_182[3])) || func_503(&(uParam0->f_182), 16)))
		{
			if (func_503(&(uParam0->f_182), 32))
			{
				if (func_507(uParam0))
				{
					if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
					{
						set_ped_max_move_blend_ratio(iVar0, uParam0->f_182.f_22);
					}
				}
				return;
			}
			if (!func_503(&(uParam0->f_182), 1))
			{
				set_player_control(player_id(), false, 0, false);
				func_505(&(uParam0->f_182), 1);
			}
		}
		else if (bVar1 && func_506(&(uParam0->f_182[2])))
		{
			if (func_507(uParam0))
			{
				if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
				{
					set_ped_max_move_blend_ratio(iVar0, uParam0->f_182.f_22);
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
		else if (bVar1 && func_506(&(uParam0->f_182[1])))
		{
			if (func_507(uParam0))
			{
				if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
				{
					set_ped_max_move_blend_ratio(iVar0, uParam0->f_182.f_23);
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
		else if (func_506(&(uParam0->f_182[0])))
		{
			if (!func_503(&(uParam0->f_182), 64))
			{
				func_505(&(uParam0->f_182), 64);
			}
			if (func_507(uParam0))
			{
				if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
				{
					set_ped_max_move_blend_ratio(iVar0, uParam0->f_182.f_24);
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
	if (bVar1 && uParam0->f_182.f_17 & 1 != 0)
	{
		if (!func_503(&(uParam0->f_182), 2))
		{
			if (is_ped_in_any_vehicle(Global_35, false))
			{
				iVar3 = get_vehicle_ped_is_in(Global_35, false);
				if (does_entity_exist(iVar3))
				{
					bring_vehicle_to_halt(iVar3, 5f, 5000, false);
					func_40(&(uParam0->f_182.f_7), 0);
					func_505(&(uParam0->f_182), 2);
				}
			}
			else
			{
				if (func_196(uParam0->f_182.f_5, 16))
				{
					bVar4 = func_508(Global_35, &(uParam0->f_182.f_26), 1, 0, 256, 0);
				}
				else
				{
					bVar4 = func_509(Global_35, &(uParam0->f_182.f_6), uParam0->f_182.f_5, 0, 0, 1084227584, 100, 0, 0);
				}
				if (bVar4)
				{
					if (func_196(uParam0->f_182.f_5, 8))
					{
						set_entity_invincible(Global_35, true);
						if (func_61(iVar0, 0, 1))
						{
							set_entity_invincible(iVar0, true);
						}
					}
					uParam0->f_182.f_18 = { Global_36 };
					if (func_61(iVar0, 0, 1))
					{
						task_stand_still(iVar0, floor((uParam0->f_182.f_21 * 1000f)));
					}
					func_40(&(uParam0->f_182.f_7), 0);
					func_505(&(uParam0->f_182), 2);
				}
			}
		}
		else if (!func_503(&(uParam0->f_182), 4))
		{
			if (func_47(&(uParam0->f_182.f_7), uParam0->f_182.f_21))
			{
				if (func_196(uParam0->f_182.f_5, 8))
				{
					set_entity_invincible(Global_35, false);
					if (func_61(iVar0, 0, 1))
					{
						set_entity_invincible(iVar0, false);
					}
				}
				set_player_control(player_id(), true, 0, false);
				func_505(&(uParam0->f_182), 4);
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

bool func_341(int iParam0, bool bParam1)
{
	if (((((func_369(iParam0, 780511057) || func_369(iParam0, -219932022)) || func_369(iParam0, 1120685857)) || func_369(iParam0, -2117564886)) || func_369(iParam0, 655999185)) || func_369(iParam0, 1345172471))
	{
		return true;
	}
	if (is_ped_in_combat(iParam0, 0))
	{
		return true;
	}
	if (bParam1)
	{
		if (func_369(iParam0, -653332088) || func_369(iParam0, 167901368))
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

void func_342(var uParam0, float fParam1)
{
	if (uParam0->f_1)
	{
		if (Global_1935630->f_58 != *uParam0)
		{
			if (func_61(Global_1935630->f_58, 0, 1) && func_491(Global_1935630->f_58))
			{
				func_321(uParam0, *uParam0, 0, fParam1);
				func_321(uParam0, Global_1935630->f_58, 1, fParam1);
			}
		}
	}
}

void func_343(var uParam0, var uParam1)
{
	if (!func_126(uParam1, 16384))
	{
		if ((is_disabled_control_just_pressed(0, -874806616) || is_disabled_control_just_pressed(0, -822242784)) || _0x621d1b289caf5978(player_id()))
		{
			if (_is_ped_getting_into_a_mount_seat(Global_35, true))
			{
				func_143(uParam1, 16384);
			}
		}
	}
}

bool func_344()
{
	if (func_126(&Local_274, 65536))
	{
		return true;
	}
	else if (_0x621d1b289caf5978(player_id()))
	{
		func_321(&(Local_274.f_37), 0, 0, 50f);
		Local_274.f_109 = { Global_36 };
		if (!_0x6614f9039bd31931(player_id(), 14, 0))
		{
			_0x0751d461f06e41ce(player_id(), 14, 0, 1);
		}
		func_143(&Local_274, 65536);
		return true;
	}
	return false;
}

void func_345(var uParam0)
{
	disable_control_action(0, -1404316431, false);
	disable_control_action(2, -1404316431, false);
	disable_control_action(0, 2103129879, false);
	disable_control_action(2, 2103129879, false);
}

void func_346()
{
	vVar5 = { func_140(Global_35, 1.5f) };
	if (func_332(&(Local_274.f_86[5]), vVar5))
	{
		vVar0 = { func_510(&Local_274, 0) };
	}
	else
	{
		vVar0 = { func_511(&(Local_15[0]), 1065353216) };
	}
	func_319(0, 5, 2);
	open_sequence_task(&iVar4);
	task_follow_nav_mesh_to_coord(0, vVar0, 1f, 20000, 0.1f, 0, 40000f);
	func_330(0, Global_35, -1);
	func_214(&(Local_15[0]), &iVar4, 0, 0, 1, 1);
	if (func_332(&(Local_274.f_86[5]), vVar5))
	{
		vVar0 = { func_510(&Local_274, 1) };
	}
	else
	{
		vVar0 = { func_511(&(Local_15[1]), 1065353216) };
	}
	func_319(1, 5, 1);
	open_sequence_task(&iVar4);
	task_follow_nav_mesh_to_coord(0, vVar0, 1f, 20000, 0.1f, 0, 40000f);
	task_turn_ped_to_face_entity(0, Global_35, -1, -1f, -1f, -1082130432);
	func_214(&(Local_15[1]), &iVar4, 0.5f, 0, 1, 1);
	func_40(Local_274.f_58[1], 0);
}

void func_347(var uParam0, int iParam1)
{
	uParam0->f_44 = iParam1;
}

bool func_348()
{
	if (func_47(Local_274.f_58[1], 1f))
	{
		iVar1 = -1;
		sVar0 = func_512(&Local_15, &Local_274, &iVar1);
		if (func_307(&(Local_15[0]), Global_35, sVar0, -1073741824, 1, 1744022339, iVar1))
		{
			func_136(&Local_274, 0, 0, 0);
			func_513(1891783641, &(Local_15[0]), 1);
			func_164(&(Local_15[0]), Local_15.f_22[0], -89429847, 580546400, 0, "RE_INTER_STRANGER");
			func_164(&(Local_15[1]), Local_15.f_22[1], -89429847, 580546400, 0, "RE_INTER_STRANGER");
			func_202(Local_274.f_58[1]);
			Local_274.f_101 = Local_274.f_98;
			Local_274.f_102 = func_514(26f, (Local_274.f_101 - 8f));
			func_319(3, 3, 2);
			_0x89f5e7adecccb49c(&(Local_15[0]), "intimidate");
			return true;
		}
	}
	return false;
}

void func_349()
{
	fVar3 = (&Local_15.f_9[0] + 15f);
	func_515(&(Local_274.f_57), &(Local_274.f_49), &(Local_15[0]), vVar0, 0, 4000, 1500, 1000, 1, 0, 1, fVar3);
}

bool func_350()
{
	if ((Local_274.f_98 > (Local_274.f_101 + 3f) && Local_274.f_99 > (Local_274.f_98 + 0.5f)) && !func_516())
	{
		return true;
	}
	if (Local_274.f_44 < 3)
	{
		if (!func_126(&Local_274, 1048576) && func_517(0))
		{
			func_143(&Local_274, 1048576);
		}
	}
	if (func_517(func_126(&Local_274, 1048576)))
	{
		if (Local_274.f_98 > Local_274.f_102 && !func_516())
		{
			return true;
		}
	}
	return false;
}

bool func_351()
{
	if (func_518(&Local_15, &Local_274))
	{
		return false;
	}
	if (func_47(Local_274.f_58[1], 3f))
	{
		iVar1 = -1;
		sVar0 = func_519(&Local_15, &Local_274, &iVar1);
		if (func_307(&(Local_15[1]), Global_35, sVar0, -1073741824, 1, 1744022339, iVar1))
		{
			func_202(Local_274.f_58[1]);
			return true;
		}
	}
	return false;
}

void func_352(var uParam0, var uParam1)
{
	switch (uParam0->f_181)
	{
		case 2:
			uParam1->f_16 = "ARRIVAL_SURRENDER_ROB_MALE";
			uParam1->f_21 = 2;
			uParam1->f_18 = "";
			uParam1->f_23 = 2;
			uParam1->f_17 = "GANG_INTERACT_DEMAND_MONEY_PAT";
			uParam1->f_22 = 1;
			uParam1->f_11 = 1;
			break;
		default:
			uParam1->f_16 = "AMBUSH_ROR_V2_ENTER_LINE";
			uParam1->f_18 = "";
			uParam1->f_17 = "AMBUSH_ROR_V2_INTRO_LINE";
			uParam1->f_11 = 1;
			break;
	}
}

bool func_353()
{
	iVar1 = -1;
	if (func_47(Local_274.f_58[1], 2f))
	{
		if (func_331(0f, 1, &(Local_15[1]), 1))
		{
			if (Local_274.f_98 < (15f + 3f))
			{
				func_307(&(Local_15[1]), Global_35, "HEADS_UP_STORY_MEMORY_RXCF1", -1073741824, 1, -500314840, 1);
				func_164(&(Local_15[1]), Local_15.f_22[1], 831283580, 0, 0, 0);
				func_251(&(Local_15.f_152), 0);
				open_sequence_task(&iVar2);
				task_combat_ped(0, Global_35, 0, 0);
				func_214(&(Local_15[1]), &iVar2, 1.5f, 0, 1, 1);
				func_164(&(Local_15[0]), Local_15.f_22[0], 831283580, 0, 0, 0);
				open_sequence_task(&iVar2);
				task_combat_ped(0, Global_35, 0, 0);
				func_214(&(Local_15[0]), &iVar2, 2.5f, 0, 1, 1);
				func_202(Local_274.f_58[1]);
				Local_274.f_103 = Local_274.f_98;
				return true;
			}
			else
			{
				func_164(&(Local_15[0]), Local_15.f_22[0], 831283580, 0, 0, 0);
				func_164(&(Local_15[1]), Local_15.f_22[1], 831283580, 0, 0, 0);
				func_307(&(Local_15[1]), Global_35, "HEADS_UP_STORY_MEMORY_RXCF1", -1073741824, 1, 1744022339, 1);
				_0x8acc0506743a8a5c(&(Local_15[1]), 166028666, 1, -1082130432);
				task_aim_gun_at_entity(&(Local_15[1]), Global_35, 3000, 0, 1);
				func_143(&Local_274, 4);
				return true;
			}
		}
	}
	else if (func_350())
	{
		sVar0 = func_520(&Local_15, &Local_274, 0, &iVar1);
		func_307(&(Local_15[1]), Global_35, sVar0, -1073741824, 1, 1744022339, 1);
		Local_274.f_104 = Local_274.f_98;
		func_150(&Local_274, 2);
		func_143(&Local_274, 4);
		return false;
	}
	return false;
}

bool func_354()
{
	iVar1 = -1;
	if (func_47(Local_274.f_58[1], 3f))
	{
		if (!func_518(&Local_15, &Local_274))
		{
			if (Local_274.f_98 < 15f)
			{
				sVar0 = func_521(&Local_15, &Local_274, &iVar1);
				if (func_331(0f, 1, &(Local_15[1]), 1) && func_331(0, 1, Global_35, 1))
				{
					if (func_307(&(Local_15[1]), Global_35, sVar0, -1073741824, 1, 1744022339, iVar1))
					{
						func_164(&(Local_15[0]), Local_15.f_22[0], 831283580, 0, 0, 0);
						func_164(&(Local_15[1]), Local_15.f_22[1], 831283580, 0, 0, 0);
						func_202(Local_274.f_58[1]);
						Local_274.f_103 = Local_274.f_98;
						return true;
					}
				}
			}
			else if (func_522())
			{
				if (func_331(0, 1, Global_35, 1))
				{
					sVar0 = func_306(&Local_15, &Local_274, 0, &iVar1);
					func_307(&(Local_15[0]), Global_35, sVar0, -1073741824, 1, 1744022339, iVar1);
					_0x8acc0506743a8a5c(&(Local_15[0]), 166028666, 1, -1082130432);
					task_aim_gun_at_entity(&(Local_15[0]), Global_35, 3000, 0, 1);
					func_143(&Local_274, 4);
					return true;
				}
			}
		}
	}
	else if (func_350())
	{
		sVar0 = func_520(&Local_15, &Local_274, 0, &iVar1);
		func_307(&(Local_15[0]), Global_35, sVar0, -1073741824, 1, 1744022339, iVar1);
		Local_274.f_104 = Local_274.f_98;
		func_203(Local_15.f_22[0]);
		func_203(Local_15.f_22[1]);
		func_150(&Local_274, 2);
		return false;
	}
	return false;
}

bool func_355()
{
	if ((func_369(Global_35, 501393341) || func_369(Global_35, 1553520516)) || func_369(Global_35, 1920417248))
	{
		return false;
	}
	if (_is_ped_getting_into_a_mount_seat(Global_35, true))
	{
		return true;
	}
	if (is_ped_in_any_vehicle(Global_35, true))
	{
		return true;
	}
	return false;
}

bool func_356()
{
	if (!func_369(Global_35, 1435919172))
	{
		Local_274.f_106 = { func_523(&Local_274) };
		func_102(&(Local_274.f_106), 1, 10, 0);
		if (!_does_volume_exist(&(Local_274.f_86[3])))
		{
			Local_274.f_86[3] = _create_volume_cylinder_with_custom_name(Global_36, 0f, 0f, 0f, 5f, 5f, 5f, "volHorseStayout");
		}
		func_362(&Local_15, &(Local_274.f_86[3]), Local_274.f_106, 1.25f, 8f, 1065353216, 1);
		return true;
	}
	return false;
}

bool func_357()
{
	if (!func_126(&Local_274, 4096))
	{
		if (func_47(Local_274.f_58[1], 0.5f))
		{
			_0xaab050da48b57978(&(Local_15[1]), "Default_Angry", 0, -1, 4);
			set_current_ped_weapon(&(Local_15[1]), get_best_ped_weapon(&(Local_15[1]), false, false), false, 0, false, false);
			task_swap_weapon(&(Local_15[1]), 1, 1, 0, 0);
			func_143(&Local_274, 4096);
		}
	}
	if (func_47(Local_274.f_58[1], 0.5f))
	{
		if (_get_ped_crouch_movement(&(Local_15[2])))
		{
			_set_ped_crouch_movement(&(Local_15[2]), false, 0, false);
			_0x89f5e7adecccb49c(&(Local_15[2]), "intimidate");
			vVar0 = { func_510(&Local_274, 2) };
			if (Local_274.f_48 == 1 && func_126(&Local_274, 1))
			{
				fVar4 = 2f;
			}
			else
			{
				fVar4 = 1f;
			}
			task_look_at_entity(&(Local_15[2]), Global_35, -1, 0, 51, 0);
			open_sequence_task(&iVar5);
			task_follow_nav_mesh_to_coord(0, vVar0, fVar4, 20000, 0.25f, 0, 40000f);
			task_turn_ped_to_face_entity(0, Global_35, -1, -1f, -1f, -1082130432);
			func_214(&(Local_15[2]), &iVar5, 0, 0, 1, 1);
			func_164(&(Local_15[2]), Local_15.f_22[2], 831283580, 0, 0, 0);
		}
	}
	if (!func_126(&Local_274, 2048))
	{
		if (func_47(Local_274.f_58[1], 2f))
		{
			set_current_ped_weapon(&(Local_15[0]), get_best_ped_weapon(&(Local_15[0]), false, false), false, 0, false, false);
			open_sequence_task(&iVar5);
			task_swap_weapon(0, 1, 0, 0, 0);
			task_turn_ped_to_face_entity(0, Global_35, -1, -1f, -1f, -1082130432);
			func_214(&(Local_15[0]), &iVar5, 0, 0, 1, 1);
			func_164(&(Local_15[0]), Local_15.f_22[0], 831283580, 0, 0, 0);
			func_164(&(Local_15[1]), Local_15.f_22[1], 831283580, 0, 0, 0);
			func_143(&Local_274, 2048);
		}
	}
	if (func_47(Local_274.f_58[1], 4f))
	{
		if (func_331(0, 1, Global_35, 1))
		{
			iVar6 = -1;
			sVar7 = func_524(&Local_15, &Local_274, 1, &iVar6);
			if (func_307(&(Local_15[1]), Global_35, sVar7, -1073741824, 1, 1744022339, iVar6))
			{
				func_321(&(Local_274.f_37), &(Local_15[0]), 1, 50f);
				_0x45ef176b532ca851(player_id(), "AMBUSH_PLAYER_SURRENDER");
				_0xbed386157f65942c(player_id(), 1);
				_0x8acc0506743a8a5c(&(Local_15[1]), 166028666, 1, -1082130432);
				task_aim_gun_at_entity(&(Local_15[1]), Global_35, -1, 0, 1);
				func_202(Local_274.f_58[1]);
				return true;
			}
		}
	}
	return false;
}

bool func_358()
{
	if (func_525() && !func_516())
	{
		iVar1 = -1;
		sVar0 = func_306(&Local_15, &Local_274, 0, &iVar1);
		func_307(&(Local_15[0]), Global_35, sVar0, -1073741824, 1, 1744022339, iVar1);
		_0x8acc0506743a8a5c(&(Local_15[0]), 166028666, 1, -1082130432);
		task_aim_gun_at_entity(&(Local_15[0]), Global_35, 3000, 0, 1);
		func_164(&(Local_15[0]), Local_15.f_22[0], 831283580, 0, 0, 0);
		func_164(&(Local_15[1]), Local_15.f_22[1], 831283580, 0, 0, 0);
		func_143(&Local_274, 4);
		return true;
	}
	return false;
}

bool func_359()
{
	fVar0 = 5f;
	if (func_344() || func_526())
	{
		fVar0 = (fVar0 + 3f);
	}
	if ((func_47(Local_274.f_58[1], fVar0) && !func_126(&Local_274, 4)) && func_331(0, 1, Global_35, 1))
	{
		iVar2 = -1;
		sVar1 = func_527(&Local_15, &Local_274, 1, &iVar2);
		if (func_307(&(Local_15[1]), Global_35, sVar1, -1073741824, 1, 1744022339, iVar2))
		{
			_0x8acc0506743a8a5c(&(Local_15[0]), 166028666, 1, -1082130432);
			set_current_ped_weapon(&(Local_15[0]), get_best_ped_weapon(&(Local_15[0]), false, false), false, 0, false, false);
			task_swap_weapon(&(Local_15[0]), 1, 0, 0, 0);
			task_aim_gun_at_entity(&(Local_15[0]), Global_35, -1, 0, 1);
			func_202(Local_274.f_58[1]);
			return true;
		}
	}
	return false;
}

bool func_360()
{
	fVar0 = 5f;
	if (func_344())
	{
		fVar0 = (fVar0 + 3f);
	}
	if (func_47(Local_274.f_58[1], fVar0) && func_331(0, 1, Global_35, 1))
	{
		iVar2 = -1;
		iVar3 = 0;
		sVar1 = func_306(&Local_15, &Local_274, iVar3, &iVar2);
		if (func_307(&(Local_15[iVar3]), Global_35, sVar1, -1073741824, 1, 1744022339, iVar2))
		{
			func_202(Local_274.f_58[1]);
			func_321(&(Local_274.f_37), &(Local_15[0]), 0, 50f);
			return true;
		}
	}
	return false;
}

bool func_361()
{
	if (func_47(Local_274.f_58[1], 0.5f))
	{
		func_143(&Local_274, 4);
		return true;
	}
	return false;
}

void func_362(int iParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6, float fParam7, bool bParam8)
{
	if (!func_30(iParam0, 32))
	{
		if (!func_417(Global_35))
		{
			iParam0->f_56 = Global_1935630->f_41;
			if (func_61(iParam0->f_56, 0, 1))
			{
				if (!_0x3ab6c7b0bb0df4b1(iParam0->f_56, -1))
				{
					clear_ped_tasks(iParam0->f_56, 1, 0);
				}
				_0xb56d41a694e42e86(iParam1, 2048, 0, 0, -1, -1, 0);
				set_ped_config_flag(iParam0->f_56, 355, true);
				if (func_69(vParam2))
				{
					task_smart_flee_ped(iParam0->f_56, iParam0[0], fParam6, 6000, 0, 2f, 0);
				}
				else
				{
					open_sequence_task(&iVar0);
					task_follow_nav_mesh_to_coord(0, vParam2, fParam5, 20000, fParam7, 0, 40000f);
					if (bParam8)
					{
						task_smart_flee_ped(0, iParam0[0], fParam6, 6000, 0, 2f, 0);
					}
					func_214(iParam0->f_56, &iVar0, 0, 0, 1, 1);
				}
				func_22(iParam0, 32);
			}
		}
	}
}

bool func_363()
{
	if (iVar272 > 0)
	{
		return true;
	}
	if (func_528(&Local_15, 0, 0))
	{
		return false;
	}
	if (!func_331(0f, 1, Global_35, 1))
	{
		return false;
	}
	return true;
}

int func_364()
{
	return 0;
}

bool func_365(int iParam0, var uParam1, float fParam2, bool bParam3, float fParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
{
	func_145(uParam1);
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
						func_529(0);
					}
					if (func_331(fParam4, 1, 0, 0))
					{
						func_366(iParam0, Global_35, uParam1->f_16, 0, -1082130432, uParam1->f_21, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				uParam1->f_7 = 1;
			}
			if ((((((!is_ped_ragdoll(Global_35) && !is_ped_falling(Global_35)) && !_0x3e592d0486dec0f6(Global_35)) && !is_entity_in_air(Global_35, 1)) && !func_369(Global_35, 501393341)) && !func_369(Global_35, 1553520516)) && !func_369(Global_35, 451360105))
			{
				_0xc163dac52ac975d3(iParam0, 32);
				uParam1->f_25 = { Global_36 };
				if (func_196(iParam5, 4))
				{
					force_ped_motion_state(Global_35, -1871534317, false, 0, false);
				}
				else
				{
					clear_ped_tasks(Global_35, 1, 0);
				}
				if (func_308(Global_1935630->f_44))
				{
					func_40(&(uParam1->f_32), 0);
				}
				else
				{
					func_530(&(uParam1->f_32), 0.5f, 0);
				}
				task_rob_ped(iParam0, Global_35, 0f, iParam5, iParam9);
				if (!func_483(609))
				{
					func_312(1);
					uParam1->f_28 = func_531("TF_AIM_AMBUSH", 10000, 0, 0, 0, 1);
					func_532(609, &uVar0, &uVar1);
					func_533(&uVar0, &uVar1);
				}
				uParam1->f_8 = 1;
				*uParam1 = 2;
			}
			break;
		case 2:
			if (((!uParam1->f_12 && !uParam1->f_13) && func_47(&(uParam1->f_32), 2f)) && func_534(iParam0, -663203358, "bStartSuccess", 1, 1.8f, 1))
			{
				if (func_535(&(uParam1->f_36), "PLAYER_SURRENDER_REACH_FOR_WEAPON", Global_36, 0, 130948705, 1097859072, 0, 0, 1, "", 1, 0, 0, 0, 1, 0, 1704213876, 0))
				{
					uParam1->f_12 = 1;
				}
				if (!uParam1->f_14)
				{
					if (func_309(uParam1->f_36))
					{
						uParam1->f_14 = 1;
					}
				}
			}
			if (uParam1->f_14)
			{
				if (func_534(iParam0, 534755167, "bEndSuccess", 1, 1.8f, 1))
				{
					func_310(&(uParam1->f_36), 1, 1);
				}
			}
			if (is_entity_dead(iParam0))
			{
				uParam1->f_1 = 1;
				return true;
			}
			bVar2 = false;
			if (func_536() && is_player_free_aiming(player_id()))
			{
				bVar2 = true;
			}
			else if (Global_1935630->f_25)
			{
				bVar2 = true;
			}
			else if (is_ped_in_combat(iParam0, 0) && func_369(iParam0, 780511057))
			{
				bVar2 = true;
			}
			else if (func_537(uParam1))
			{
				bVar2 = true;
			}
			else if (func_538(uParam1, bParam11))
			{
				bVar2 = true;
			}
			else if ((func_196(iParam5, 16) && !func_369(iParam0, 1435919172)) && !has_anim_event_fired(iParam0, -1898385492))
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
						func_529(0);
					}
					if (func_331(fParam4, 1, 0, 0))
					{
						func_366(Global_35, iParam0, uParam1->f_20, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				func_310(&(uParam1->f_36), 1, 1);
				uParam1->f_13 = 1;
				uParam1->f_6 = 1;
				return true;
			}
			if (has_anim_event_fired(iParam0, -1898385492))
			{
				if (iParam6 != 0)
				{
					func_539(iParam6, 1, 0, -142743235, 0);
					func_540(iParam0, iParam6, 1, 0);
				}
				iVar3 = floor((to_float(func_541(1)) * fParam2));
				if (iVar3 > 0)
				{
					func_542(iVar3, 0, 0, 1, 1);
					func_543(iVar3);
					func_383(iParam0, &iVar4);
					func_384(iParam0, (iVar4 + iVar3));
				}
				set_pad_shake(0, 100, 100);
				if (!uParam1->f_3)
				{
					uParam1->f_2 = 1;
				}
			}
			if (bParam7)
			{
				if (func_534(iParam0, -1631911761, "bBeforeHitBreakout", iParam8, 0.9f, 0))
				{
					uParam1->f_5 = 1;
					return true;
				}
			}
			if (func_534(iParam0, 641027726, "DLG_INTRO", iParam8, 0.5f, 0))
			{
				if (!is_string_null_or_empty(uParam1->f_17))
				{
					if (bParam3)
					{
						func_529(0);
					}
					if (func_331(0f, 1, iParam0, 1))
					{
						func_366(iParam0, Global_35, uParam1->f_17, 0, -1082130432, uParam1->f_22, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				uParam1->f_15 = 1;
			}
			if (func_534(iParam0, -502975245, "DLG_HIT", iParam8, 0.6f, 0))
			{
				if (bParam3)
				{
					if (!is_string_null_or_empty(uParam1->f_18))
					{
						func_529(0);
					}
				}
				if (uParam1->f_11)
				{
					if (func_331(0, 1, iParam0, 1))
					{
						if (!is_string_null_or_empty(uParam1->f_18))
						{
							func_366(iParam0, Global_35, uParam1->f_18, 0, -1082130432, uParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
				}
				else if (func_331(fParam4, 1, 0, 0))
				{
					if (!is_string_null_or_empty(uParam1->f_18))
					{
						func_366(iParam0, Global_35, uParam1->f_18, 0, -1082130432, uParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				func_310(&(uParam1->f_36), 1, 1);
				uParam1->f_13 = 1;
				apply_ped_damage_pack(Global_35, "PD_Right_cut_cheek", 0f, 1f);
				apply_ped_damage_pack(Global_35, "PD_Right_bruise_eye_A", 0f, 1f);
				if (bParam10)
				{
				}
				uParam1->f_4 = 1;
			}
			if (func_534(iParam0, 1729031946, "DLG_FAILED", iParam8, 0.7f, 0))
			{
				if (!is_string_null_or_empty(uParam1->f_19))
				{
					if (bParam3)
					{
						func_529(0);
					}
					if (func_331(fParam4, 1, 0, 0))
					{
						func_366(iParam0, Global_35, uParam1->f_19, 0, -1082130432, uParam1->f_24, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				uParam1->f_2 = 0;
				uParam1->f_3 = 1;
			}
			if (func_534(iParam0, 1842457532, "Blendout", iParam8, 0.8f, 0) || !func_369(iParam0, 2137044382))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_366(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_544(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_367()
{
	iVar0 = get_entity_max_health(Global_35, false);
	iVar1 = get_entity_health(Global_35);
	fVar2 = (to_float(iVar1) / to_float(iVar0));
	if (fVar2 > 0.15f)
	{
		func_545(Global_35, 0.15f, 0);
	}
	else if (iVar1 > 1)
	{
		apply_damage_to_ped(Global_35, 1, 1, -1, 0);
	}
}

bool func_368()
{
	if (Local_274.f_98 < 12.5f || func_141(&(Local_15[1]), Global_36, 1) < 12.5f)
	{
		if ((get_entity_speed(Global_35) < 0.25f || is_ped_heading_towards_position(Global_35, get_entity_coords(&(Local_15[1]), true, false), 50f)) || is_ped_heading_towards_position(Global_35, get_entity_coords(&(Local_15[0]), true, false), 50f))
		{
			return true;
		}
	}
	return false;
}

bool func_369(int iParam0, int iParam1)
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

char* func_370(var uParam0, var uParam1, int iParam2, int iParam3)
{
	switch (uParam0->f_181)
	{
		case 2:
			switch (iParam2)
			{
				case 0:
					*iParam3 = 2;
					return "GET_LOST";
				case 1:
					*iParam3 = 2;
					return "HEADS_UP_THREATEN";
				default:
					break;
			}
			break;
		default:
			switch (iParam2)
			{
				case 0:
					return "AMBUSH_ROR_V2_PR_LEAVE1";
				case 1:
					return "AMBUSH_ROR_V2_PR_LEAVE2";
				default:
					break;
			}
			break;
	}
	return "invalid";
}

void func_371()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_61(&(Local_15[iVar0]), 0, 1))
		{
			if (does_blip_exist(&(Local_15.f_22[iVar0])))
			{
				if (!is_ped_shooting(&(Local_15[iVar0])) || !func_341(&(Local_15[iVar0]), 1))
				{
					func_203(Local_15.f_22[iVar0]);
				}
			}
		}
		iVar0++;
	}
}

void func_372(var uParam0, int iParam1)
{
	uParam0->f_46 = iParam1;
}

void func_373(var uParam0)
{
	if (!func_60(uParam0))
	{
	}
	if (!func_420(uParam0))
	{
		uParam0->f_2 = (func_24() - uParam0->f_1);
		func_546(uParam0, 2);
	}
}

int func_374()
{
	return Global_1310750->f_16037;
}

bool func_375(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_376(int iParam0, int iParam1)
{
	if (!func_375(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_377(int iParam0)
{
	if (!func_375(iParam0))
	{
		return false;
	}
	if (func_547(64) && func_548(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_378(int iParam0)
{
	if (!func_375(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_379(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_375(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_549(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_380(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

bool func_381(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_382(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

int func_383(int iParam0, int iParam1)
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

bool func_384(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_550(iParam0);
		return func_551(iParam0, 2084597891, iParam1, iVar0);
	}
	return decor_set_int(iParam0, "loot_money", iParam1);
}

void func_385(int iParam0)
{
}

void func_386(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_387()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_388()
{
	return Global_1572887->f_12;
}

void func_389(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		remove_ped_defensive_area(iParam0, true);
		remove_ped_defensive_area(iParam0, false);
	}
}

void func_390(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_97[iParam1] = (&uParam0->f_97[iParam1] - (uParam0->f_97[iParam1] && iParam2));
}

bool func_391(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4, int iParam5)
{
	if (!func_196(*iParam0, 4))
	{
		if (func_196(iParam5, 1))
		{
			if (func_290())
			{
				func_552(iParam0, 4);
				return false;
			}
		}
		else if (func_196(iParam5, 2))
		{
			if (func_553())
			{
				func_552(iParam0, 4);
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (!func_196(*iParam0, 1))
	{
		if (!func_196(*iParam0, 4))
		{
			if (iParam3 < 0)
			{
				iParam3 = *uParam1;
			}
			iVar0 = iParam2;
			while (iVar0 <= ((iParam2 + iParam3) - 1))
			{
				if (func_61(uParam1[iVar0], 8, 1) && !is_ped_fleeing(uParam1[iVar0]))
				{
					return false;
				}
				iVar0++;
			}
		}
		func_40(&(iParam0->f_1), 0);
		func_552(iParam0, 1);
	}
	if (func_196(*iParam0, 1))
	{
		if (func_47(&(iParam0->f_1), (fParam4 + 4f)))
		{
			func_552(iParam0, 4);
			return false;
		}
		if (!func_47(&(iParam0->f_1), fParam4))
		{
			return false;
		}
		if (!func_331(0f, 1, Global_35, 1))
		{
			return false;
		}
		if (func_554(Global_35))
		{
			return false;
		}
		if (Global_1935630->f_24)
		{
			return false;
		}
		func_552(iParam0, 4);
		return true;
	}
	return false;
}

void func_392(int iParam0)
{
	if (!func_196(*iParam0, 4))
	{
		func_552(iParam0, 4);
	}
}

void func_393(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_394(int* iParam0, var uParam1)
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
	func_555(iParam0, uParam1, 1);
	func_556(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

void func_395(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

int func_396(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	fVar0 = 999999.9f;
	iVar3 = -1;
	iVar2 = iParam1;
	while (iVar2 <= iParam2)
	{
		if (func_61(uParam0[iVar2], 0, 0))
		{
			fVar1 = &uParam0->f_9[iVar2];
			if (fVar1 < fVar0 && (!bParam3 || func_331(0f, 1, uParam0[iVar2], 1)))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar3;
}

int func_397()
{
	return &Global_1899515;
}

int func_398(int iParam0)
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

int func_399(int iParam0)
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

void func_400(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 6)
	{
		return;
	}
	func_402(func_557(iParam0) + 1, iParam0);
}

var func_401()
{
	return Global_1393447->f_51;
}

void func_402(int iParam0, int iParam1)
{
	Global_40.f_9632.f_184[iParam1] = iParam0;
}

void func_403()
{
	func_404(Global_40.f_9632.f_196 + 1);
}

void func_404(int iParam0)
{
	Global_40.f_9632.f_196 = iParam0;
}

void func_405(int iParam0)
{
	func_558(iParam0, 0);
	Global_40.f_9632[iParam0] = &Global_40.f_9632[iParam0] + 1;
	if (&Global_40.f_9632[iParam0] > Global_40.f_9632[iParam0]->f_1)
	{
		Global_40.f_9632[iParam0]->f_1++;
	}
	func_172(0, 13);
}

void func_406(int iParam0)
{
	iVar1 = func_559(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_560(iVar1);
		func_558(iVar1, bVar0);
	}
	iVar1 = func_561(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_560(iVar1);
		func_558(iVar1, bVar0);
	}
	iVar1 = func_562(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_560(iVar1);
		func_558(iVar1, bVar0);
	}
}

void func_407(int iParam0, int iParam1, bool bParam2)
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

bool func_408(int iParam0)
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

void func_409(int iParam0, int iParam1)
{
	if (!func_375(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

bool func_410(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_411(int iParam0)
{
	if (!func_375(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_412(int iParam0)
{
	if (func_375(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_413(int iParam0)
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

void func_414(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_415(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

void func_415(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_563(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_388() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

void func_416(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_24() - fParam1);
	func_546(uParam0, 1);
	func_564(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_417(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

int func_418(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (!is_entity_dead(iParam1))
		{
			if (!is_ped_on_mount(iParam0) && !does_entity_exist(_get_rider_of_mount(iParam1, false)))
			{
				set_entity_invincible(iParam1, bParam2);
				if (get_script_task_status(iParam0, 1868526510, true) != 1)
				{
					task_mount_animal(iParam0, iParam1, iParam4, -1, fParam3, 1, 0, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_419(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_vehicle_driveable(iParam1, false, false))
		{
			if (is_vehicle_seat_free(iParam1, iParam2) && !is_ped_in_vehicle(iParam0, iParam1, false))
			{
				task_enter_vehicle(iParam0, iParam1, iParam4, iParam2, fParam3, iParam5, 0);
			}
		}
	}
}

bool func_420(var uParam0)
{
	return func_226(*uParam0, 2);
}

bool func_421(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_422(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_423(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_423(int iParam0)
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

void func_424(int iParam0)
{
	iParam0 = func_565(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_566(iParam0, 32);
	func_567();
}

void func_425(int iParam0)
{
	iParam0 = func_565(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_426(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_428(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_428(iParam0);
	}
}

int func_426(int iParam0)
{
	iParam0 = func_565(iParam0);
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

bool func_427(int iParam0)
{
	iParam0 = func_565(iParam0);
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

void func_428(int iParam0)
{
	iParam0 = func_565(iParam0);
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

bool func_429(int iParam0, int iParam1)
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
		if (func_236(iParam1, 200f, (30f * 3f), -1082130432, -1082130432))
		{
			return false;
		}
	}
	else if (func_236(iParam1, 200f, 30f, -1082130432, -1082130432))
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

bool func_430(int iParam0, int iParam1)
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

bool func_431(int iParam0, int iParam1)
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

bool func_432(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_568(func_397());
	if (func_196(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_196(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_196(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_196(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_196(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_196(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_196(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_196(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_196(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_196(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_196(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_196(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_196(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_196(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_196(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_196(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_196(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_433(int iParam0, float fParam1)
{
	if (is_entity_on_screen(iParam0) && func_569(Global_35, iParam0, 0, fParam1, 0))
	{
		return true;
	}
	return false;
}

bool func_434(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return true;
	}
	if (func_244(iParam1, 120f, 30f))
	{
		return false;
	}
	return true;
}

float func_435(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_446(Global_35, iParam0, bParam1, bParam2);
}

Vector3 func_436(vector3 vParam0, vector3 vParam3, float fParam6)
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

Vector3 func_437(vector3 vParam0, vector3 vParam3, float fParam6)
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

void func_438(vector3 vParam0, float fParam3, int iParam4)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_436(vVar0, vVar3, 0f) };
	vVar9 = { func_437(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		set_roads_back_to_original(vVar6, vVar9, 0, 1);
	}
	else
	{
		_0x6c3f12eceb6d2e2a(vVar6, vVar9, iParam4, 1);
	}
}

void func_439(var uParam0)
{
	if (_does_volume_exist(uParam0->f_238))
	{
		_0xa1cfb35069d23c23(uParam0->f_238);
		_0x74c2b3dc0b294102(uParam0->f_238);
	}
}

bool func_440(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_441(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_442(int iParam0)
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

int func_443(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

float func_444(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_445(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_570((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

float func_446(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_447(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_256(uParam0, 8);
	}
	else
	{
		func_255(uParam0, 8);
	}
}

void func_448(var uParam0, var uParam1)
{
	uParam0->f_238 = _create_volume_cylinder_with_custom_name(uParam0->f_209, 0f, 0f, 0f, 60f, 60f, 40f, "volAvoidance");
	uParam1->f_86[1] = _create_volume_box_with_custom_name(2155.291f, -1307.533f, 43.5036f, 0f, 0f, -19.99999f, 29.30557f, 19.59988f, 8.410868f, "volBypass");
	if (func_126(uParam1, 1))
	{
		uParam1->f_86[2] = _create_volume_cylinder_with_custom_name(2143.665f, -1329.046f, 47.645f, 0f, 0f, -19.99999f, 30.84809f, 18.32641f, 10f, "volTrigger");
		uParam1->f_86[4] = _create_volume_box_with_custom_name(2147.582f, -1309.071f, 43.5036f, 0f, 0f, -20f, 33.62549f, 10f, 6f, "volTrespass");
		uParam1->f_86[5] = _create_volume_box_with_custom_name(2141.202f, -1334.161f, 41.68f, 0f, 0f, -20f, 70f, 40f, 20f, "volExpectedApproach");
		uParam0->f_182[0] = _create_volume_aggregate_with_custom_name("volSlow");
		_0xbce668aaf83608be(&(uParam0->f_182[0]), 2155.131f, -1331.282f, 38.63309f, 0f, 0f, -20f, 30f, 30f, 10f);
		_0xbce668aaf83608be(&(uParam0->f_182[0]), 2119.558f, -1318.335f, 38.63309f, 0f, 0f, -20f, 30f, 30f, 10f);
		uParam0->f_182[2] = _create_volume_box_with_custom_name(2142.295f, -1329.024f, 41.67955f, 0f, 0f, -20f, 49.07673f, 30f, 20f, "volSlowest");
	}
	else if (func_126(uParam1, 2))
	{
		uParam1->f_86[2] = _create_volume_cylinder_with_custom_name(2144.136f, -1328.432f, 47.645f, 0f, 0f, -19.99999f, 27.194f, 18.5115f, 10f, "volTrigger");
		uParam1->f_86[4] = _create_volume_box_with_custom_name(2147.582f, -1309.071f, 43.5036f, 0f, 0f, -20f, 33.62549f, 10f, 6f, "volTrespass");
		uParam1->f_86[5] = _create_volume_box_with_custom_name(2141.758f, -1334.337f, 41.68f, 0f, 0f, -20f, 60f, 40f, 20f, "volExpectedApproach");
		uParam0->f_182[0] = _create_volume_aggregate_with_custom_name("volSlow");
		_0xbce668aaf83608be(&(uParam0->f_182[0]), 2155.131f, -1331.282f, 38.63309f, 0f, 0f, -20f, 30f, 30f, 10f);
		_0xbce668aaf83608be(&(uParam0->f_182[0]), 2119.558f, -1318.335f, 38.63309f, 0f, 0f, -20f, 30f, 30f, 10f);
		uParam0->f_182[2] = _create_volume_box_with_custom_name(2142.295f, -1329.024f, 41.67955f, 0f, 0f, -20f, 49.07673f, 30f, 20f, "volSlowest");
	}
}

void func_449(var uParam0, var uParam1)
{
	uParam0->f_238 = _create_volume_cylinder_with_custom_name(uParam0->f_209, 0f, 0f, 0f, 60f, 60f, 40f, "volAvoidance");
	if (func_126(uParam1, 1))
	{
		uParam1->f_86[2] = _create_volume_cylinder_with_custom_name(2151.068f, -952.2269f, 47.64503f, 0f, 0f, -37.99999f, 30.84809f, 23.32641f, 10f, "volTrigger");
		uParam1->f_86[5] = _create_volume_aggregate_with_custom_name("volExpectedApproach");
		_0xbce668aaf83608be(&(uParam1->f_86[5]), 2149.645f, -945.275f, 48.645f, 0f, 0f, 21f, 38.848f, 27.326f, 10f);
		_0xbce668aaf83608be(&(uParam1->f_86[5]), 2164.852f, -945.875f, 48.645f, 0f, 0f, -24f, 38.848f, 27.326f, 10f);
		uParam0->f_182[2] = _create_volume_cylinder_with_custom_name(2157.193f, -952.9478f, 38.63309f, 0f, 0f, -36.03543f, 20f, 20f, 10f, "volSlowest");
		uParam0->f_182[0] = _create_volume_cylinder_with_custom_name(2157.083f, -952.8764f, 38.63309f, 0f, 0f, -36.03543f, 35f, 35f, 10f, "volSlow");
		uParam1->f_86[1] = _create_volume_box_with_custom_name(2180.158f, -994.1818f, 41.89631f, 0f, 0f, -38f, 23.60051f, 23.43728f, 8f, "volBypass");
	}
	else if (func_126(uParam1, 2))
	{
		uParam1->f_86[2] = _create_volume_cylinder_with_custom_name(2162.497f, -961.1558f, 47.64503f, 0f, 0f, -37.99999f, 30.84809f, 23.32641f, 10f, "volTrigger");
		uParam1->f_86[5] = _create_volume_aggregate_with_custom_name("volExpectedApproach");
		_0xbce668aaf83608be(&(uParam1->f_86[5]), 2148.605f, -943.544f, 48.645f, 0f, 0f, 31f, 38.848f, 27.326f, 10f);
		_0xbce668aaf83608be(&(uParam1->f_86[5]), 2167.291f, -953.252f, 48.645f, 0f, 0f, -45f, 38.848f, 17.326f, 10f);
		uParam1->f_86[1] = _create_volume_box_with_custom_name(2151.706f, -974.7708f, 43.40208f, 0f, 0f, 31f, 15f, 15f, 6f, "volBypass");
		uParam0->f_182[2] = _create_volume_cylinder_with_custom_name(2165.06f, -961.2766f, 38.63309f, 0f, 0f, -36.03543f, 20f, 20f, 10f, "volSlowest");
		uParam0->f_182[0] = _create_volume_cylinder_with_custom_name(2164.951f, -961.2051f, 38.63309f, 0f, 0f, -36.03543f, 35f, 35f, 10f, "volSlow");
	}
}

void func_450(var uParam0, var uParam1)
{
	uParam0->f_238 = _create_volume_box_with_custom_name(1153.465f, -1484.267f, 59.98807f, 0f, 0f, -53.11343f, 91.69341f, 42f, 15f, "volAvoidance");
	if (func_126(uParam1, 1))
	{
		uParam1->f_86[2] = _create_volume_cylinder_with_custom_name(1153.099f, -1495.408f, 61.05664f, 0f, 0f, 128.3989f, 30.707f, 27.92532f, 10f, "volTrigger");
		uParam1->f_86[5] = _create_volume_box_with_custom_name(1148.567f, -1499.968f, 55.091f, 0f, 0f, 128.399f, 65f, 45f, 20f, "volExpectedApproach");
		uParam1->f_86[1] = _create_volume_box_with_custom_name(1142.787f, -1461.295f, 55.091f, 0f, 0f, 97.39899f, 14.48316f, 19.47089f, 20f, "volBypass");
		uParam0->f_182[0] = _create_volume_aggregate_with_custom_name("volSlow");
		_0xbce668aaf83608be(&(uParam0->f_182[0]), 1138.697f, -1473.754f, 55.24365f, 0f, 0f, 128.3989f, 30f, 30f, 10f);
		_0xbce668aaf83608be(&(uParam0->f_182[0]), 1167.339f, -1509.893f, 55.24365f, 0f, 0f, 128.3989f, 30f, 30f, 10f);
		uParam0->f_182[2] = _create_volume_box_with_custom_name(1156.775f, -1500.942f, 55.09116f, 0f, 0f, 128.3989f, 42.5404f, 30f, 20f, "volSlowest");
	}
	else if (func_126(uParam1, 2))
	{
		uParam1->f_86[2] = _create_volume_cylinder_with_custom_name(1149.715f, -1491.138f, 61.05664f, 0f, 0f, 128.3989f, 30.84809f, 23.32641f, 10f, "volTrigger");
		uParam1->f_86[5] = _create_volume_box_with_custom_name(1141.424f, -1497.557f, 60.107f, 0f, 0f, -52f, 66f, 26f, 20f, "volExpectedApproach");
		uParam1->f_86[1] = _create_volume_cylinder_with_custom_name(1178.394f, -1498.187f, 61.05664f, 0f, 0f, 128.3989f, 13.6739f, 13.32405f, 10f, "volBypass");
		uParam0->f_182[0] = _create_volume_aggregate_with_custom_name("volSlow");
		_0xbce668aaf83608be(&(uParam0->f_182[0]), 1139.42f, -1480.226f, 55.24365f, 0f, 0f, 128.3989f, 30f, 30f, 10f);
		_0xbce668aaf83608be(&(uParam0->f_182[0]), 1162.933f, -1509.893f, 55.24365f, 0f, 0f, 128.3989f, 30f, 30f, 10f);
		uParam0->f_182[2] = _create_volume_box_with_custom_name(1149.613f, -1491.907f, 55.09116f, 0f, 0f, 128.3989f, 49.07673f, 30f, 20f, "volSlowest");
	}
}

void func_451(var uParam0, var uParam1)
{
	uParam0->f_238 = _create_volume_cylinder_with_custom_name(uParam0->f_209, 0f, 0f, 0f, 60f, 60f, 40f, "volAvoidance");
	if (func_126(uParam1, 1))
	{
		uParam1->f_86[2] = _create_volume_cylinder_with_custom_name(1487.916f, -1000.662f, 56.33083f, 0f, 0f, 94.82475f, 30.707f, 27.92532f, 10f, "volTrigger");
		uParam1->f_86[5] = _create_volume_box_with_custom_name(1480.178f, -1001.068f, 56.331f, 0f, 0f, -87f, 63f, 42f, 20f, "volExpectedApproach");
		uParam0->f_182[0] = _create_volume_aggregate_with_custom_name("volSlow");
		_0xbce668aaf83608be(&(uParam0->f_182[0]), 1487.556f, -973.4777f, 50.51784f, 0f, 0f, 95.90029f, 30f, 30f, 10f);
		_0xbce668aaf83608be(&(uParam0->f_182[0]), 1492.296f, -1019.345f, 50.51784f, 0f, 0f, 95.90029f, 30f, 30f, 10f);
		uParam1->f_86[1] = _create_volume_cylinder_with_custom_name(1469.261f, -999.528f, 56.33083f, 0f, 0f, 94.82475f, 10.1629f, 9.770226f, 10f, "volBypass");
		uParam0->f_182[2] = _create_volume_box_with_custom_name(1487.734f, -1002.193f, 50.36535f, 0f, 0f, 93.60399f, 42.5404f, 30f, 20f, "volSlowest");
	}
	else if (func_126(uParam1, 2))
	{
		uParam1->f_86[2] = _create_volume_cylinder_with_custom_name(1490.791f, -1011.946f, 56.33083f, 0f, 0f, 91.87412f, 27.67f, 27.92532f, 10f, "volTrigger");
		uParam1->f_86[5] = _create_volume_box_with_custom_name(1480.013f, -1012.218f, 56.331f, 0f, 0f, -87f, 58f, 38f, 20f, "volExpectedApproach");
		uParam0->f_182[0] = _create_volume_aggregate_with_custom_name("volSlow");
		_0xbce668aaf83608be(&(uParam0->f_182[0]), 1485.693f, -991.6201f, 50.51784f, 0f, 0f, 100.5781f, 30f, 30f, 10f);
		_0xbce668aaf83608be(&(uParam0->f_182[0]), 1494.158f, -1036.949f, 50.51784f, 0f, 0f, 100.5781f, 30f, 30f, 10f);
		uParam1->f_86[1] = _create_volume_cylinder_with_custom_name(1507.89f, -978.9284f, 56.33083f, 0f, 0f, 91.87412f, 14.67f, 14f, 10f, "volBypass");
		uParam0->f_182[2] = _create_volume_box_with_custom_name(1489.664f, -1014.686f, 50.36535f, 0f, 0f, 96.30587f, 42.5404f, 30f, 20f, "volSlowest");
	}
}

void func_452(var uParam0, var uParam1)
{
	uParam0->f_238 = _create_volume_cylinder_with_custom_name(uParam0->f_209, 0f, 0f, 0f, 60f, 60f, 40f, "volAvoidance");
	if (func_126(uParam1, 1))
	{
		uParam1->f_86[2] = _create_volume_cylinder_with_custom_name(1655.522f, -1599.845f, 58f, 0f, 0f, -43.65688f, 22f, 9.620813f, 10f, "volTrigger");
		uParam1->f_86[5] = _create_volume_box_with_custom_name(1657.077f, -1597.177f, 60.4f, 0f, 0f, -45f, 47f, 14f, 20f, "volExpectedApproach");
		uParam0->f_182[2] = _create_volume_cylinder_with_custom_name(1651.59f, -1600.176f, 58f, 0f, 0f, -48.61898f, 20f, 12f, 10f, "volSlowest");
		uParam0->f_182[0] = _create_volume_cylinder_with_custom_name(1650.064f, -1597.117f, 63.10832f, 0f, 0f, 45.64705f, 20f, 35f, 10f, "volSlow");
		uParam1->f_86[1] = _create_volume_cylinder_with_custom_name(1685.32f, -1630.628f, 58f, 0f, 0f, -43.65688f, 9f, 9f, 7f, "volBypass");
	}
	else if (func_126(uParam1, 2))
	{
		uParam1->f_86[2] = _create_volume_cylinder_with_custom_name(1664.851f, -1608.931f, 58f, 0f, 0f, -31.93113f, 30f, 11.70849f, 10f, "volTrigger");
		uParam1->f_86[5] = _create_volume_box_with_custom_name(1670.328f, -1602.443f, 60.4f, 0f, 0f, -34f, 59f, 17f, 20f, "volExpectedApproach");
		uParam1->f_86[1] = _create_volume_cylinder_with_custom_name(1636.293f, -1592.454f, 58f, 0f, 0f, -31.93112f, 8f, 8f, 8f, "volBypass");
		uParam0->f_182[2] = _create_volume_cylinder_with_custom_name(1666.243f, -1607.567f, 61.255f, 0f, 0f, -30.9924f, 26.17722f, 12.59097f, 10f, "volSlowest");
		uParam0->f_182[0] = _create_volume_cylinder_with_custom_name(1666.243f, -1607.567f, 61.255f, 0f, 0f, -30.9924f, 47.78934f, 27.18242f, 10f, "volSlow");
	}
}

void func_453(var uParam0, vector3 vParam1, float fParam4)
{
	*uParam0 = { vParam1 };
	uParam0->f_3 = fParam4;
}

void func_454(var uParam0, vector3 vParam1, int iParam4)
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

int func_455(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_571(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_456(int iParam0)
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

int func_457(var uParam0)
{
	switch (uParam0->f_151)
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

void func_458(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_436(vVar0, vVar3, 0f) };
	vVar9 = { func_437(vVar0, vVar3, 0f) };
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

void func_459(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

int func_460(int iParam0)
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

bool func_461()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

char* func_462(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_common@wave@male@unapproved";
		default:
			break;
	}
	return "";
}

bool func_463(int iParam0)
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

void func_464(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_572(iParam0, iParam1))
		{
			if (func_573(iParam0, iParam1))
			{
				if (func_574(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_575(iParam0);
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

void func_465(int iParam0, int iParam1, bool bParam2)
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

void func_466(int iParam0, bool bParam1)
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

void func_467(int iParam0, int iParam1)
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

struct<4> func_468(int iParam0, int iParam1)
{
	Var0 = { func_576(iParam0, iParam1) };
	Var0.f_3 = func_577(iParam0, iParam1);
	return Var0;
}

bool func_469(int iParam0)
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

int func_470(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_578(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_579((386 + iVar28), 1);
			if (func_580(iParam0, &Var0, iVar5, 0))
			{
				if (func_581(iParam0, &Var6, iVar5))
				{
					Var29 = { func_582(iParam0, Var0, iVar5, 0) };
					func_583(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_584(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_585(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_586(iParam0, iParam1);
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

void func_471(int iParam0, int iParam1, float fParam2)
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

bool func_472(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

bool func_473(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_474(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_309(iParam0))
	{
		return;
	}
	iVar0 = func_485(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_475(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_309(iParam0))
	{
		return;
	}
	iVar0 = func_485(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_476(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_309(iParam0))
	{
		return;
	}
	iVar0 = func_485(iParam0);
	if (bParam1)
	{
		func_587(iParam0, 4);
		func_588(iVar0, 1);
		func_589(iVar0, 1);
	}
	else
	{
		func_590(iParam0, 4);
		func_589(iVar0, 0);
	}
}

void func_477(int* iParam0, char* sParam1)
{
	if (func_309(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_475(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_479(iParam0, 1);
}

void func_478(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_479(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_480(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_481(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_480(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_591(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
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
			func_202(&(iParam1->f_13));
		}
		if (func_592(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_593(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_481(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_393(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_594(*uParam0, 1, 1);
						}
					}
					else if (func_595(iParam1, 22))
					{
						func_594(*uParam0, 0, 1);
					}
				}
				if (func_596(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_597(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_598(iParam8);
					if (func_599(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_600(uParam3);
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
					func_601(iParam1, uParam3, fVar8);
					if (func_602(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_556(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_603(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_596(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_604(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_599(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_597(uParam0, func_596(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_598(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_556(uParam3, 0, 0, 1, 1);
					}
					func_605(iParam1, 1);
				}
				func_601(iParam1, uParam3, fVar8);
				if (func_603(uParam0, iParam1, fParam4, bVar6))
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
			func_394(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_482(int* iParam0, var uParam1, var uParam2)
{
	iVar0 = func_606(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_366(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_483(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_388() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_484(int iParam0, bool bParam1)
{
	func_532(iParam0, &iVar0, &iVar1);
	if (!func_607(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_608(iVar0, iVar1);
}

int func_485(int iParam0)
{
	return iParam0;
}

void func_486(int iParam0)
{
	if (!func_609(iParam0))
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

int func_487(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_488(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam2->f_5)
	{
		func_610(iParam2, 1, iVar0);
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
			if (func_611(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_612(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_613(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_612(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_614(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_612(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_615(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_612(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_89(player_id(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_612(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_616(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_617(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_612(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_618(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_612(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_619(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_612(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_619(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_612(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_620(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_612(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_621(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					func_612(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_622(iParam2, 4000))
				{
					if ((func_623(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_624(iParam2, iParam0)) && func_625(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_612(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_623(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_624(iParam2, iParam0)) && func_625(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_612(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_626(iParam0, Global_1935630->f_41))
							{
								func_627();
								*uParam3 = 2;
								func_612(iParam0, iParam2, *uParam3);
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
						if (func_626(iParam0, Global_1935630->f_41))
						{
							func_627();
							*uParam3 = 2;
							func_612(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_628(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_194() - iParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_627();
						*uParam3 = 2;
						func_612(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_629())
					{
						if (func_626(iParam0, Global_1935630->f_42))
						{
							func_627();
							*uParam3 = 2;
							func_612(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_630(iParam2, iParam0))
			{
				*uParam3 = 1024;
				func_612(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_631(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					func_612(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_632(iParam0, iParam2))
					{
						*uParam3 = 8192;
						func_612(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_633(iParam0, iParam2))
				{
					*uParam3 = 32768;
					func_612(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_634(iParam2, 4000))
				{
					if (func_635(&iParam0, iParam2))
					{
						*uParam3 = 512;
						func_612(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_636(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_612(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_637(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_612(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_489()
{
	_0x88544c0e3291dcae(1);
	func_638();
}

int func_490(var uParam0, var uParam1)
{
	uParam1->f_10 = func_565(uParam1->f_10);
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
	bVar0 = func_387();
	if (*uParam1)
	{
		if (bVar0 && !func_570((*Global_1835011)[4]->f_1, 1))
		{
			if (func_639(5))
			{
				func_640(5);
				func_641(5);
				func_642(0);
				func_643(0);
			}
		}
	}
	if (func_644(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_570((*Global_1835011)[37]->f_1, 1)) && !func_570((*Global_1835011)[43]->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_570((*Global_1835011)[43]->f_1, 1)) && !func_570((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_645(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_646(iVar1))
	{
		bVar3 = true;
		if (func_647(iVar1))
		{
			bVar4 = true;
		}
		if (func_648(iVar1))
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
				func_649(uParam1->f_10);
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
			if (!func_639(0) && func_639(1))
			{
				func_650(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_651())
			{
				func_652();
			}
			func_642(0);
			func_643(0);
			func_653(uParam1->f_6);
		}
	}
	if (!func_646(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_654(uParam1->f_10) == 0 || func_655(uParam1->f_10) == 0) || func_656(uParam1->f_10) == 0)
			{
				func_657(uParam1->f_10);
			}
			func_658(uParam1->f_10);
			func_659(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_645(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_646(iVar1))
	{
		bVar3 = true;
		if (func_647(iVar1))
		{
			bVar4 = true;
		}
		if (func_648(iVar1))
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
	if (func_660(uParam1->f_10))
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
			Var8 = { func_661(uParam1->f_10) };
			Var10 = { func_662() };
			func_663(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_427(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_664(uParam1->f_10);
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
	func_425(uParam1->f_10);
	if (func_427(uParam1->f_10))
	{
		iVar16 = func_426(uParam1->f_10);
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

bool func_491(int iParam0)
{
	if (decor_exist_on(iParam0, "bValidRobber") && decor_get_bool(iParam0, "bValidRobber"))
	{
		return true;
	}
	return false;
}

void func_492(int iParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (does_entity_exist(iParam0))
	{
		_0xe98d55c5983f2509(iParam0);
	}
	if (bParam1)
	{
		if (!func_665(610))
		{
			if (!func_666())
			{
				func_667(1);
				func_668();
			}
		}
		func_484(610, 1);
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

void func_493(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_298(iParam0, 13))
		{
			if (bParam2)
			{
				func_299(iParam0, 0, 0);
			}
			func_478(iParam0, 13);
		}
	}
	else if (func_298(iParam0, 13))
	{
		func_479(iParam0, 13);
	}
}

void func_494(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
{
	switch (iParam4)
	{
		case 0:
			iVar2 = 1;
			iVar0 = 1;
			iVar3 = 1;
			iVar1 = 1;
			break;
		case 1:
			iVar2 = 2;
			iVar0 = 2;
			iVar3 = 2;
			iVar1 = 2;
			break;
		case 2:
			iVar2 = 3;
			iVar0 = 3;
			iVar3 = 3;
			iVar1 = 3;
			break;
		case 3:
			iVar2 = 4;
			iVar0 = 4;
			iVar3 = 3;
			iVar1 = 3;
			break;
	}
	if (bParam8)
	{
		iVar3 = 0;
	}
	if (bParam9)
	{
		iVar1 = 0;
	}
	uParam0->f_3 = iParam1;
	uParam0->f_7 = iParam3;
	uParam0->f_5 = iParam10;
	uParam0->f_6 = iParam11;
	uParam0->f_8 = iVar0;
	uParam0->f_13 = iParam5;
	uParam0->f_14 = iParam6;
	uParam0->f_15 = iParam6;
	uParam0->f_23 = iVar3;
	uParam0->f_24 = iVar3;
	uParam0->f_16 = iVar1;
	uParam0->f_9 = iParam7;
	uParam0->f_10 = iParam7;
	uParam0->f_11 = iParam7;
	switch (iParam2)
	{
		case 0:
			uParam0->f_4 = 21030;
			uParam0->f_17 = iVar2;
			uParam0->f_18 = iVar2;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			break;
		case 1:
			uParam0->f_4 = 21030;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			uParam0->f_17 = 0;
			uParam0->f_18 = 0;
			break;
	}
}

bool func_495(int iParam0, bool bParam1)
{
	if (func_61(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

bool func_496(float fParam0)
{
	if (func_669(1))
	{
		return true;
	}
	if (func_60(&uLocal_0) && !func_670(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

bool func_497(var uParam0)
{
	if ((Global_1935630->f_26 || _0x5407b7288d0478b7(Global_35, 16384) > 0) || func_89(player_id(), 1, 0, 1))
	{
		return true;
	}
	return false;
}

bool func_498(var uParam0)
{
	if (!func_30(uParam0, 131072))
	{
		if (Global_1935630->f_40 == 0)
		{
			if (!func_30(uParam0, 16777216) || uParam0->f_20 < 60f)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_499(var uParam0)
{
	if (func_671(50))
	{
		if (func_672(uParam0->f_209, 1, 8, 0))
		{
			return true;
		}
	}
	if (func_673())
	{
		return true;
	}
	if (Global_1430231->f_4)
	{
		func_674(21);
		return true;
	}
	if (func_196(Global_1392581->f_3, 4) || is_player_riding_train(player_id()))
	{
		func_674(22);
		return true;
	}
	return false;
}

bool func_500(var uParam0)
{
	if (!func_30(uParam0, 262144))
	{
		if (uParam0->f_20 < 60f)
		{
			if (func_675(uParam0, 60f, uParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_501(var uParam0)
{
	if (!func_30(uParam0, 524288))
	{
		if (uParam0->f_20 < 60f)
		{
			if (func_676(uParam0, 60f, uParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_502(var uParam0)
{
	if (!func_56(uParam0->f_151))
	{
		if (uParam0->f_20 < 60f)
		{
			if (func_677(uParam0->f_151, uParam0->f_221))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_503(var uParam0, int iParam1)
{
	return (uParam0->f_17 && iParam1) != 0;
}

void func_504(var uParam0)
{
	if (!func_60(uParam0))
	{
	}
	if (func_420(uParam0))
	{
		uParam0->f_1 = (func_24() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_564(uParam0, 2);
	}
}

void func_505(var uParam0, int iParam1)
{
	uParam0->f_17 = (uParam0->f_17 || iParam1);
}

bool func_506(int iParam0)
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

bool func_507(var uParam0)
{
	if (!func_60(&(uParam0->f_182.f_13)))
	{
		return true;
	}
	if (!func_47(&(uParam0->f_182.f_13), uParam0->f_182.f_16))
	{
		return true;
	}
	return false;
}

int func_508(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
				if (bVar3 || (!bParam2 || func_678(iVar0)))
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
				else if (!func_369(iVar0, 1041577989))
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

int func_509(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
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
	if (func_441(*uParam1, 128))
	{
		if (!func_369(iParam0, 1245594896))
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
	if (func_441(*uParam1, 2))
	{
		if (bVar3)
		{
			if (!func_678(iVar2))
			{
				return 0;
			}
			if (!func_369(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { get_entity_coords(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_679(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_441(*uParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				clear_ped_tasks(iParam0, 1, 0);
				task_dismount_animal(iParam0, iParam4, 0, 0, 0, 0);
			}
			return 0;
		}
		else if ((func_196(iParam2, 128) && does_entity_exist(_get_last_mount(iParam0))) && does_entity_exist(_get_first_entity_ped_is_carrying(_get_last_mount(iParam0))))
		{
			task_pickup_carriable_entity(iParam0, _get_first_entity_ped_is_carrying(_get_last_mount(iParam0)));
			func_680(uParam1, 128);
			return 0;
		}
		else
		{
			*uParam1 = 0;
			return 1;
		}
	}
	if (func_441(*uParam1, 4))
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
	if (func_441(*uParam1, 8))
	{
		if (bVar3)
		{
			if (!func_678(iVar2))
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
		if (!func_196(iParam2, 2) && _0xb16223cb7da965f0(get_player_index()))
		{
			_0xae637bb8ef017875(get_player_index(), 1);
		}
		if (!func_196(iParam2, 2048))
		{
			if (is_player_control_on(get_player_index()))
			{
				set_player_control(get_player_index(), false, iParam3, false);
				if (func_196(iParam2, 8192))
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
		if (func_441(*uParam1, 2336))
		{
			if (!func_678(iVar2))
			{
			}
			if (func_681(iVar2, *uParam1))
			{
				func_682(uParam1, 32);
				func_682(uParam1, 256);
				func_682(uParam1, 2048);
				func_680(uParam1, 512);
				func_680(uParam1, 1024);
				func_680(uParam1, 4096);
			}
			else
			{
				return 0;
			}
		}
		if (func_441(*uParam1, 64))
		{
			disable_control_action(0, 1520437207, false);
			if (!func_678(iVar2))
			{
			}
			if (is_ped_walking(iVar2))
			{
				return 0;
			}
			else
			{
				func_682(uParam1, 64);
			}
		}
		if (func_196(iParam2, 16))
		{
			task_horse_action(iVar2, 2, 0, 0);
			*uParam1 = 0;
			return 1;
		}
		disable_control_action(0, 1520437207, false);
		if (((is_ped_sprinting(iVar2) || (is_ped_running(iVar2) && func_196(iParam2, 1024))) || func_196(iParam2, 8)) && !func_441(*uParam1, 5632))
		{
			task_horse_action(iVar2, 1, 0, 0);
			func_680(uParam1, 32);
		}
		else if ((is_ped_running(iVar2) && func_196(iParam2, 4096)) && !func_441(*uParam1, 5632))
		{
			task_horse_action(iVar2, 8, 0, 0);
			func_680(uParam1, 2048);
			func_680(uParam1, 4096);
		}
		else if (((get_ped_desired_move_blend_ratio(iVar2) <= 1.5f && get_ped_desired_move_blend_ratio(iVar2) >= 1.001f) && func_196(iParam2, 32)) && !func_441(*uParam1, 5632))
		{
			task_horse_action(iVar2, 3, 0, 0);
			func_680(uParam1, 256);
			func_680(uParam1, 1024);
		}
		else if (is_ped_walking(iVar2))
		{
			task_stand_still(iVar2, -1);
			func_680(uParam1, 64);
		}
		else if (!func_196(iParam2, 1))
		{
			if (!func_196(iParam2, 256))
			{
				_0xb832f1a686b9b810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_679(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_441(*uParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			task_dismount_animal(iParam0, iParam4, 0, 0, 0, 0);
			set_ped_desired_move_blend_ratio(iVar2, 0f);
			func_680(uParam1, 2);
		}
		else
		{
			task_stand_still(iParam0, 1000);
			func_680(uParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_196(iParam2, 1))
		{
			open_sequence_task(&iVar0);
			task_stand_still(0, 250);
			task_leave_any_vehicle(0, 0, 0);
			close_sequence_task(iVar0);
			task_perform_sequence(iParam0, iVar0);
			clear_sequence_task(&iVar0);
			bring_vehicle_to_halt(iVar1, fParam5, iParam6, false);
			func_680(uParam1, 4);
		}
		else
		{
			*uParam1 = 0;
			return 1;
		}
	}
	else if (!func_196(iParam2, 512))
	{
		task_stand_still(iParam0, 200);
		func_680(uParam1, 8);
	}
	return 0;
}

struct<4> func_510(var uParam0, int iParam1)
{
	switch (uParam0->f_48)
	{
		case 0:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(0, 1);
					case 1:
						return func_287(0, 3);
					case 2:
						return func_287(0, 6);
					case 3:
						return func_287(0, 9);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(1, 1);
					case 1:
						return func_287(1, 3);
					case 2:
						return func_287(1, 6);
					case 3:
						return func_287(1, 9);
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(2, 1);
					case 1:
						return func_287(2, 3);
					case 2:
						return func_287(2, 6);
					case 3:
						return func_287(2, 9);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(3, 1);
					case 1:
						return func_287(3, 3);
					case 2:
						return func_287(3, 6);
					case 3:
						return func_287(3, 9);
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(4, 1);
					case 1:
						return func_287(4, 3);
					case 2:
						return func_287(4, 6);
					case 3:
						return func_287(4, 9);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(5, 1);
					case 1:
						return func_287(5, 3);
					case 2:
						return func_287(5, 6);
					case 3:
						return func_287(5, 9);
					default:
						break;
				}
			}
			break;
		case 3:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(6, 1);
					case 1:
						return func_287(6, 3);
					case 2:
						return func_287(6, 6);
					case 3:
						return func_287(6, 9);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(7, 1);
					case 1:
						return func_287(7, 3);
					case 2:
						return func_287(7, 6);
					case 3:
						return func_287(7, 9);
					default:
						break;
				}
			}
			break;
		case 4:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(8, 1);
					case 1:
						return func_287(8, 3);
					case 2:
						return func_287(8, 6);
					case 3:
						return func_287(8, 9);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(9, 1);
					case 1:
						return func_287(9, 3);
					case 2:
						return func_287(9, 6);
					case 3:
						return func_287(9, 9);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

Vector3 func_511(int iParam0, float fParam1)
{
	vVar0 = { func_683(iParam0, Global_35, 1065353216) };
	vVar3 = { func_304(vVar0) };
	vVar6 = { get_entity_coords(iParam0, true, false) + vVar3 * Vector(fParam1, fParam1, fParam1) };
	return vVar6;
}

char* func_512(var uParam0, var uParam1, int iParam2)
{
	switch (uParam0->f_181)
	{
		case 2:
			*iParam2 = 3;
			return "GANG_INTERACT_HOLD_IT";
		default:
			break;
	}
	return "AMBUSH_ROR_V2_CALLOUT";
	return "invalid";
}

void func_513(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

float func_514(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_515(var uParam0, var uParam1, int iParam2, vector3 vParam3, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, bool bParam12, float fParam13)
{
	return;
	if (_0xa24c1d341c6e0d53(1, 0, 0))
	{
		if (func_684(uParam0, 64))
		{
			func_310(&(uParam1->f_5), 1, 1);
			func_685(uParam0, 64);
		}
	}
	else if (bParam12)
	{
		if (uParam1->f_3 == 0)
		{
			if (!is_entity_on_screen(iParam2))
			{
				if (!func_684(uParam0, 64))
				{
					if (uParam1->f_5 == 0)
					{
						uParam1->f_5 = func_686("BEAT_RESPOND", 1644850270, iParam2, 3, 0, 0, 0, 0, fParam13, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					}
					func_202(uParam1);
					func_687(uParam0, 64);
				}
			}
			else if (func_60(uParam1) && func_207(uParam1) > 6f)
			{
				if (func_684(uParam0, 64))
				{
					func_310(&(uParam1->f_5), 1, 1);
					func_685(uParam0, 64);
				}
			}
		}
		else if (!func_684(uParam0, 64))
		{
			func_687(uParam0, 64);
		}
	}
	else if (!func_684(uParam0, 64))
	{
		func_687(uParam0, 64);
	}
	if (func_684(uParam0, 64))
	{
		func_688(uParam1, iParam2, vParam3, iParam6, iParam7, fParam8, iParam9, iParam10, iParam11);
	}
}

bool func_516()
{
	bVar0 = false;
	if (is_ped_facing_ped(Global_35, &(Local_15[0]), 120f) || is_ped_facing_ped(Global_35, &(Local_15[1]), 120f))
	{
		bVar0 = true;
		if (Local_274.f_100 != 0f)
		{
			if (bVar0)
			{
				if (!func_60(Local_274.f_58[5]))
				{
					func_40(Local_274.f_58[5], 0);
				}
				else if (func_60(Local_274.f_58[5]) && func_47(Local_274.f_58[5], 8f))
				{
					bVar0 = false;
				}
			}
		}
	}
	if (is_control_pressed(0, -513041747))
	{
		if (func_60(Local_274.f_58[6]))
		{
			func_205(Local_274.f_58[5]);
		}
		bVar0 = true;
	}
	else if (is_control_just_released(0, -513041747))
	{
		if (!func_60(Local_274.f_58[6]))
		{
			func_40(Local_274.f_58[5], 0);
		}
		bVar0 = true;
	}
	else if (func_60(Local_274.f_58[6]))
	{
		bVar0 = true;
		if (func_47(Local_274.f_58[6], 3f))
		{
			func_205(Local_274.f_58[5]);
		}
	}
	Local_274.f_100 = Local_274.f_98;
	return bVar0;
}

bool func_517(bool bParam0)
{
	vVar0 = { func_689(&Local_274, bParam0) };
	vVar3 = { func_690(&Local_274, bParam0) };
	if (func_126(&Local_274, 1) && !bParam0)
	{
		if (func_691(vVar0, vVar3, Global_36))
		{
			iVar6 = 1;
		}
	}
	else if (!func_691(vVar0, vVar3, Global_36))
	{
		iVar6 = 1;
	}
	return iVar6;
}

bool func_518(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam1->f_113)
	{
		if (func_302(uParam1->f_113[iVar0]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_519(var uParam0, var uParam1, int iParam2)
{
	switch (uParam0->f_181)
	{
		case 2:
			*iParam2 = 2;
			return "GANG_HOLD_IT_SUPPORT";
		default:
			break;
	}
	return "AMBUSH_ROR_V2_CALLOUT_SUPPORT";
	return "invalid";
}

char* func_520(var uParam0, var uParam1, int iParam2, int iParam3)
{
	switch (uParam0->f_181)
	{
		case 2:
			switch (iParam2)
			{
				case 0:
					*iParam3 = 2;
					return "PEDTYPE_WON_DISPUTE";
				case 1:
					*iParam3 = 1;
					return "PEDTYPE_WON_DISPUTE";
				default:
					break;
			}
			break;
		default:
			switch (iParam2)
			{
				case 0:
					return "AMBUSH_ROR_V2_BETTER_RUN";
				case 1:
					return "AMBUSH_ROR_V2_BETTER_RUN";
				default:
					break;
			}
			break;
	}
	return "invalid";
}

char* func_521(var uParam0, var uParam1, int iParam2)
{
	switch (uParam0->f_181)
	{
		case 2:
			*iParam2 = 1;
			return "GANG_INTERACT_APPROACH_TOLL";
		default:
			break;
	}
	return "AMBUSH_ROR_V2_APPROACH_TOLL";
	return "invalid";
}

bool func_522()
{
	iVar0 = 0;
	if (!func_60(Local_274.f_58[5]))
	{
		func_40(Local_274.f_58[5], 0);
	}
	else if (func_60(Local_274.f_58[5]))
	{
		if (Local_274.f_98 > (Local_274.f_101 + 3f) && Local_274.f_99 > (Local_274.f_98 + 0.5f))
		{
			iVar0 = 1;
		}
		else if (func_47(Local_274.f_58[5], 8f))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

Vector3 func_523(var uParam0)
{
	vVar0 = { func_692(uParam0) };
	return vVar0;
}

char* func_524(var uParam0, var uParam1, int iParam2, int iParam3)
{
	switch (uParam0->f_181)
	{
		case 2:
			*iParam3 = 1;
			return "ORDER_DISMOUNT";
		default:
			break;
	}
	return "AMBUSH_ROR_V2_ORDER_DISMOUNT";
	return "invalid";
}

bool func_525()
{
	if (Local_274.f_98 > (Local_274.f_103 + 3f) && Local_274.f_99 > (Local_274.f_98 + 0.5f))
	{
		return true;
	}
	return false;
}

bool func_526()
{
	if (((func_369(Global_35, 501393341) || func_369(Global_35, 1553520516)) || func_369(Global_35, 1920417248)) || is_control_just_pressed(0, -874806616))
	{
		return true;
	}
	return false;
}

char* func_527(var uParam0, var uParam1, int iParam2, int iParam3)
{
	switch (uParam0->f_181)
	{
		case 2:
			*iParam3 = 1;
			return "FINAL_WARNING";
		default:
			break;
	}
	if (func_528(uParam0, 1, 1))
	{
		return "AMBUSH_ROR_V2_FINAL_WARNING";
	}
	*iParam3 = 2;
	return "FINAL_WARNING";
	return "invalid";
}

bool func_528(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if ((func_369(Global_35, 501393341) || func_369(Global_35, 1553520516)) || func_369(Global_35, 1920417248))
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

void func_529(int iParam0)
{
	func_205(&uLocal_0);
	func_693(1, iParam0, 0);
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_694();
}

void func_530(var uParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_60(uParam0))
	{
		func_416(uParam0, fParam1);
	}
}

var func_531(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_532(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

void func_533(var uParam0, var uParam1)
{
	if (func_388() != -1)
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

bool func_534(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5)
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

bool func_535(var uParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	if (!func_309(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!is_entity_dead(iParam5))
		{
			*uParam0 = func_686(sParam1, iParam6, iParam5, iParam10, iParam9, 0, iParam15, iVar0, 1070386381, 570, 4000, 10, 1073741824, 0, iParam18, 0, 0);
			func_695(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = func_696(sParam1, iParam6, iParam13, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		else
		{
			if (func_69(vParam2))
			{
				return false;
			}
			*uParam0 = func_697(sParam1, iParam6, vParam2, fParam7, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		if (fParam8 != 0f)
		{
			func_474(*uParam0, sParam1, ceil(absf(fParam8)), 1);
			if (ceil(absf(fParam8)) > func_541(1))
			{
				func_476(*uParam0, 0, 1);
			}
		}
		if (!is_string_null_or_empty(sParam11))
		{
		}
		if (bParam19)
		{
			func_698(*uParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (func_699(*uParam0, 0))
		{
			if (_is_ped_carrying(Global_35))
			{
				func_476(*uParam0, 0, 1);
			}
		}
		else if (!_is_ped_carrying(Global_35))
		{
			func_476(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (ceil(absf(fParam8)) > func_541(1))
		{
			func_476(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (does_entity_exist(iParam5) && is_entity_dead(iParam5))
		{
			if (func_309(*uParam0))
			{
				func_310(uParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && func_700(*uParam0, 1)) || (bParam17 && func_701(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				func_542(ceil(absf(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				func_702(ceil(absf(fParam8)), 0, 1065353216, 1, 0, 0, 1, 752097756);
			}
		}
		func_310(uParam0, 1, 1);
		return true;
	}
	return false;
}

bool func_536()
{
	if (func_703(4))
	{
		return Global_1935630->f_27;
	}
	return func_704();
}

bool func_537(var uParam0)
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
		if (!func_369(Global_35, 716706914))
		{
			return true;
		}
	}
	return false;
}

bool func_538(var uParam0, bool bParam1)
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

int func_539(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_705(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_706(iParam0, 1);
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
			func_707(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_708(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_709(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_710(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_710(iParam0, 0, 0) - iParam1) < 0)
		{
			func_539(iParam0, func_710(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_711(iParam0) == -427144552)
	{
		if (!func_712(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_713(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_584(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_707(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_714(iParam0, iParam1);
	return 1;
}

void func_540(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_550(iParam0);
		func_551(iParam0, iParam1, iParam2, iVar0);
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

int func_541(int iParam0)
{
	return _money_get_cash_balance();
}

void func_542(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_715(iParam0);
	if (bParam3)
	{
		func_716(iParam0, sParam1, iParam2);
	}
}

void func_543(int iParam0)
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

int func_544(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_240())
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
				if (func_435(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_446(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_202(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_717(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_719(func_718(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_545(int iParam0, float fParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		fParam1 = func_720(fParam1, 0f, 1f);
		iVar0 = floor((fParam1 * IntToFloat(get_entity_max_health(iParam0, bParam2))));
		_set_entity_health(iParam0, iVar0, 0);
	}
}

void func_546(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_547(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_548(int iParam0)
{
	return func_376(iParam0, Global_1310750->f_16072 | 64);
}

void func_549(int iParam0)
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

int func_550(int iParam0)
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

var func_551(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

void func_552(int iParam0, int iParam1)
{
	func_256(iParam0, iParam1);
}

bool func_553()
{
	if (func_388() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

bool func_554(int iParam0)
{
	return get_ped_config_flag(iParam0, 161, false);
}

void func_555(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_310(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_721(iParam0, 0);
		}
	}
}

void func_556(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_309((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_310(&((*uParam0)[iVar0]->f_6), 1, 1);
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

int func_557(int iParam0)
{
	return &(Global_40.f_9632.f_184[iParam0]);
}

void func_558(int iParam0, bool bParam1)
{
	Var2 = { func_169(85200619) };
	if (stat_id_get_int(&Var2, &uVar0))
	{
		uVar1 = _0x1e7384ab5d4f4581(uVar0);
		Global_40.f_9632[iParam0]->f_3 = uVar1;
		if (bParam1)
		{
			iVar4 = func_334(iParam0, 0);
			iVar4 = floor((0.666f * IntToFloat(iVar4)));
			Global_40.f_9632[iParam0]->f_3 = (Global_40.f_9632[iParam0]->f_3 + iVar4);
		}
		else
		{
			Global_40.f_9632[iParam0]->f_3 = (Global_40.f_9632[iParam0]->f_3 + func_334(iParam0, 0));
		}
	}
}

int func_559(int iParam0)
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

int func_560(int iParam0)
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

int func_561(int iParam0)
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

int func_562(int iParam0)
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

int func_563(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

void func_564(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_565(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_566(int iParam0, int iParam1)
{
	iParam0 = func_565(iParam0);
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

void func_567()
{
	if (func_646(0))
	{
		func_722(0);
	}
	if (func_646(1))
	{
		func_722(1);
	}
	if (func_646(5))
	{
		func_722(5);
	}
	if (func_646(6))
	{
		func_723(6);
	}
}

int func_568(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_569(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_724(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_725(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && is_entity_a_ped(iParam1))
	{
		return _0x9d9473cb82d83a30(iParam0, get_ped_index_from_entity_index(iParam1), 0) == 1;
	}
	return _0x7f9b9791d4cb71f6(iParam0, iParam1, bParam2, 0) == 1;
}

bool func_570(int iParam0, bool bParam1)
{
	switch (func_726(iParam0))
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

int func_571(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
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
		if (func_727(vParam0))
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
	func_728(iVar0, bParam8);
	return iVar0;
}

bool func_572(int iParam0, int iParam1)
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

bool func_573(int iParam0, int iParam1)
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

bool func_574(int iParam0, int iParam1)
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
	if (!func_572(iParam0, iVar0))
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

void func_575(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

Vector3 func_576(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2147.251f, -1316.011f, 41.8066f;
				case 1:
					return 2145.376f, -1318.39f, 41.8945f;
				case 2:
					return 2144.561f, -1315.481f, 41.6942f;
				case 3:
					return 2143.546f, -1318.269f, 41.8254f;
				case 4:
					return 2141.785f, -1300.229f, 41.646f;
				case 5:
					return 2158.18f, -1318.7f, 41.3161f;
				case 6:
					return 2151.83f, -1318.304f, 41.7381f;
				case 7:
					return 2152.676f, -1306.737f, 41.5564f;
				case 8:
					return 2238.174f, -1352.621f, 44.2797f;
				case 9:
					return 2237.524f, -1353.356f, 44.3099f;
				case 10:
					return 2239.939f, -1353.73f, 44.2797f;
				case 11:
					return 2149.919f, -1307.196f, 41.5971f;
				case 12:
					return 2148.287f, -1316.218f, 41.5357f;
				case 13:
					return 2144.786f, -1325.609f, 41.9523f;
				case 14:
					return 2141.628f, -1327.481f, 41.9596f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2145.089f, -1315.089f, 41.6689f;
				case 1:
					return 2143.427f, -1318.976f, 41.641f;
				case 2:
					return 2147.328f, -1316.196f, 41.8134f;
				case 3:
					return 2146.392f, -1318.939f, 41.9549f;
				case 4:
					return 2157.838f, -1309.506f, 41.4442f;
				case 5:
					return 2158.188f, -1318.708f, 41.3161f;
				case 6:
					return 2151.275f, -1317.967f, 41.7352f;
				case 7:
					return 2160.747f, -1314.674f, 41.3659f;
				case 8:
					return 2082.991f, -1291.337f, 41.6162f;
				case 9:
					return 2085.666f, -1292.521f, 41.6148f;
				case 10:
					return 2081.982f, -1289.978f, 41.6081f;
				case 11:
					return 2142.25f, -1309.832f, 41.6101f;
				case 12:
					return 2142.622f, -1314.196f, 41.6932f;
				case 13:
					return 2138.933f, -1324.129f, 41.6235f;
				case 14:
					return 2142.073f, -1327.015f, 41.9677f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2159.213f, -971.8553f, 41.0999f;
				case 1:
					return 2160.194f, -964.4299f, 41.5314f;
				case 2:
					return 2157.396f, -971.7147f, 41.0138f;
				case 3:
					return 2157.678f, -964.8805f, 41.1724f;
				case 4:
					return 2158.188f, -972.9938f, 40.8699f;
				case 5:
					return 2189.433f, -986.7276f, 41.0255f;
				case 6:
					return 2167.474f, -971.9501f, 41.1311f;
				case 7:
					return 2171.62f, -977.636f, 41.1047f;
				case 8:
					return 2228.379f, -1005.259f, 44.0555f;
				case 9:
					return 2227.684f, -1005.464f, 44.0383f;
				case 10:
					return 2229.569f, -1006.136f, 44.0702f;
				case 11:
					return 2161.567f, -975.9191f, 40.7883f;
				case 12:
					return 2157.931f, -968.4743f, 41.0576f;
				case 13:
					return 2166.614f, -955.6732f, 41.1486f;
				case 14:
					return 2167.944f, -957.4924f, 41.2408f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 2160.004f, -967.5445f, 41.7114f;
				case 1:
					return 2162.143f, -963.6604f, 41.8914f;
				case 2:
					return 2160.809f, -968.9245f, 41.619f;
				case 3:
					return 2163.619f, -965.0955f, 41.8914f;
				case 4:
					return 2159.268f, -968.9859f, 41.0429f;
				case 5:
					return 2158.034f, -969.6102f, 41.4421f;
				case 6:
					return 2154.013f, -962.7059f, 41.4194f;
				case 7:
					return 2146.932f, -971.5781f, 40.9804f;
				case 8:
					return 2113.003f, -889.23f, 40.6198f;
				case 9:
					return 2113.779f, -890.4282f, 40.6958f;
				case 10:
					return 2113.534f, -887.4044f, 40.5673f;
				case 11:
					return 2163.963f, -974.3878f, 40.9691f;
				case 12:
					return 2159.577f, -964.9375f, 41.3509f;
				case 13:
					return 2165.456f, -958.0557f, 41.5278f;
				case 14:
					return 2174.57f, -959.0756f, 40.7398f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1155.893f, -1485.089f, 53.7784f;
				case 1:
					return 1151.271f, -1490.42f, 52.5521f;
				case 2:
					return 1154.792f, -1485.177f, 53.5482f;
				case 3:
					return 1149.386f, -1488.679f, 52.5455f;
				case 4:
					return 1151.256f, -1481.362f, 53.2885f;
				case 5:
					return 1143.218f, -1459.846f, 54.4943f;
				case 6:
					return 1143.925f, -1480.999f, 52.6957f;
				case 7:
					return 1142.695f, -1458.683f, 54.7078f;
				case 8:
					return 1104.26f, -1456.561f, 52.0511f;
				case 9:
					return 1105.974f, -1456.867f, 52.0404f;
				case 10:
					return 1103.602f, -1454.501f, 52.156f;
				case 11:
					return 1157.095f, -1479.211f, 54.5609f;
				case 12:
					return 1141.249f, -1495.415f, 53.5181f;
				case 13:
					return 1155.253f, -1486.515f, 53.3976f;
				case 14:
					return 1153.59f, -1496.152f, 52.3798f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1155.641f, -1484.568f, 53.7927f;
				case 1:
					return 1152.311f, -1491.74f, 52.5312f;
				case 2:
					return 1155.565f, -1486.181f, 53.7098f;
				case 3:
					return 1150.636f, -1489.388f, 52.6313f;
				case 4:
					return 1163.407f, -1485.683f, 55.2387f;
				case 5:
					return 1178.615f, -1501.034f, 55.5034f;
				case 6:
					return 1163.529f, -1500.557f, 53.7477f;
				case 7:
					return 1179.44f, -1500.621f, 55.8282f;
				case 8:
					return 1168.332f, -1550.548f, 52.3476f;
				case 9:
					return 1168.963f, -1549.043f, 52.3564f;
				case 10:
					return 1168.989f, -1552.185f, 52.3771f;
				case 11:
					return 1157.602f, -1483.446f, 54.2007f;
				case 12:
					return 1141.972f, -1495.197f, 53.4331f;
				case 13:
					return 1155.605f, -1486.903f, 53.4402f;
				case 14:
					return 1145.096f, -1497.417f, 53.3068f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1497.045f, -999.7829f, 48.9649f;
				case 1:
					return 1493.368f, -1001.772f, 49.0753f;
				case 2:
					return 1497.057f, -998.0068f, 48.7575f;
				case 3:
					return 1493.399f, -999.6519f, 49.0861f;
				case 4:
					return 1501.904f, -998.2815f, 48.3669f;
				case 5:
					return 1466.993f, -999.0735f, 51.4976f;
				case 6:
					return 1476.747f, -995.2944f, 51.3127f;
				case 7:
					return 1472.366f, -1004.282f, 51.3152f;
				case 8:
					return 1482.223f, -1043.459f, 53.3295f;
				case 9:
					return 1479.782f, -1041.912f, 53.4861f;
				case 10:
					return 1481.533f, -1043.532f, 53.4156f;
				case 11:
					return 1499.777f, -1004.494f, 48.4792f;
				case 12:
					return 1496.689f, -999.9506f, 49.0444f;
				case 13:
					return 1485.891f, -999.1686f, 49.2575f;
				case 14:
					return 1490.406f, -1003.786f, 48.8177f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1497.008f, -1000.674f, 49.0231f;
				case 1:
					return 1493.854f, -1002.439f, 49.1329f;
				case 2:
					return 1495.63f, -999.7047f, 49.1569f;
				case 3:
					return 1493.233f, -1000.277f, 49.0661f;
				case 4:
					return 1499.684f, -996.9778f, 48.2393f;
				case 5:
					return 1508.444f, -980.8932f, 48.345f;
				case 6:
					return 1497.08f, -984.5303f, 48.2054f;
				case 7:
					return 1508.793f, -978.9645f, 48.3489f;
				case 8:
					return 1482.016f, -940.7007f, 48.2774f;
				case 9:
					return 1489.139f, -959.731f, 48.8506f;
				case 10:
					return 1481.814f, -940.3831f, 48.3313f;
				case 11:
					return 1501.368f, -995.0184f, 48.4029f;
				case 12:
					return 1496.515f, -1000.419f, 49.0914f;
				case 13:
					return 1483.255f, -1000.766f, 49.5808f;
				case 14:
					return 1493.787f, -1006.273f, 49.1415f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 1666.22f, -1611.427f, 54.5025f;
				case 1:
					return 1667.506f, -1608.155f, 54.4269f;
				case 2:
					return 1667.333f, -1611.794f, 54.4158f;
				case 3:
					return 1669.286f, -1608.878f, 54.2971f;
				case 4:
					return 1666.665f, -1613.032f, 54.4819f;
				case 5:
					return 1686.386f, -1631.423f, 53.0587f;
				case 6:
					return 1688.411f, -1624.448f, 52.7528f;
				case 7:
					return 1687.462f, -1635.545f, 53.2476f;
				case 8:
					return 1724.844f, -1629.594f, 49.8092f;
				case 9:
					return 1724.609f, -1630.189f, 49.8452f;
				case 10:
					return 1726.92f, -1630.46f, 49.6614f;
				case 11:
					return 1665.267f, -1617.987f, 54.7241f;
				case 12:
					return 1666.609f, -1611.577f, 54.4741f;
				case 13:
					return 1672.162f, -1603.129f, 54.2195f;
				case 14:
					return 1674.361f, -1604.642f, 54.0695f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 1656.18f, -1606.349f, 55.4125f;
				case 1:
					return 1660.649f, -1601.888f, 54.7761f;
				case 2:
					return 1657.147f, -1607.67f, 55.284f;
				case 3:
					return 1662.409f, -1604.536f, 54.6721f;
				case 4:
					return 1655.277f, -1607.257f, 55.534f;
				case 5:
					return 1637.667f, -1589.904f, 56.5347f;
				case 6:
					return 1642.132f, -1588.29f, 55.8456f;
				case 7:
					return 1632.928f, -1589.924f, 56.9814f;
				case 8:
					return 1624.093f, -1560.099f, 57.2859f;
				case 9:
					return 1623.039f, -1561.39f, 57.1965f;
				case 10:
					return 1622.924f, -1558.222f, 57.4796f;
				case 11:
					return 1644.131f, -1605.954f, 56.4517f;
				case 12:
					return 1665.421f, -1597.495f, 54.7173f;
				case 13:
					return 1658.788f, -1605.672f, 54.8796f;
				case 14:
					return 1662.766f, -1595.333f, 54.8887f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_577(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 99.9035f;
				case 1:
					return 155.9035f;
				case 2:
					return 221.9035f;
				case 3:
					return 161.9034f;
				case 4:
					return 203.588f;
				case 5:
					return -22.9486f;
				case 6:
					return 127.0514f;
				case 7:
					return 181.463f;
				case 8:
					return 161.162f;
				case 9:
					return 151.162f;
				case 10:
					return -110.537f;
				case 11:
					return 155.6917f;
				case 12:
					return 158.9852f;
				case 13:
					return 154.9852f;
				case 14:
					return 167.1432f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 211.9035f;
				case 1:
					return -156.0965f;
				case 2:
					return 95.9035f;
				case 3:
					return 215.9034f;
				case 4:
					return 115.588f;
				case 5:
					return -22.9486f;
				case 6:
					return 129.0514f;
				case 7:
					return -300.537f;
				case 8:
					return 169.162f;
				case 9:
					return 173.162f;
				case 10:
					return 3.463f;
				case 11:
					return 134.5254f;
				case 12:
					return 154.9852f;
				case 13:
					return 158.9852f;
				case 14:
					return 143.1432f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 3.9035f;
				case 1:
					return 23.9035f;
				case 2:
					return 303.9035f;
				case 3:
					return 7.9034f;
				case 4:
					return 267.588f;
				case 5:
					return 151.0514f;
				case 6:
					return 25.0514f;
				case 7:
					return 131.463f;
				case 8:
					return 147.162f;
				case 9:
					return 115.162f;
				case 10:
					return -132.537f;
				case 11:
					return -30.3083f;
				case 12:
					return -41.0148f;
				case 13:
					return 330.9852f;
				case 14:
					return 317.1432f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 287.9035f;
				case 1:
					return -78.0965f;
				case 2:
					return -52.0965f;
				case 3:
					return 275.9034f;
				case 4:
					return 31.588f;
				case 5:
					return 117.0514f;
				case 6:
					return 275.0514f;
				case 7:
					return -300.537f;
				case 8:
					return 259.162f;
				case 9:
					return 219.162f;
				case 10:
					return -4.537f;
				case 11:
					return -13.4746f;
				case 12:
					return -25.0148f;
				case 13:
					return 298.9852f;
				case 14:
					return 265.1432f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 153.9035f;
				case 1:
					return 163.9035f;
				case 2:
					return 213.9034f;
				case 3:
					return 155.9033f;
				case 4:
					return 83.588f;
				case 5:
					return 179.0514f;
				case 6:
					return 181.0513f;
				case 7:
					return 129.463f;
				case 8:
					return 315.1619f;
				case 9:
					return 271.1619f;
				case 10:
					return 11.463f;
				case 11:
					return 71.6917f;
				case 12:
					return 118.9852f;
				case 13:
					return 140.9852f;
				case 14:
					return 289.1431f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -260.0965f;
				case 1:
					return -256.0965f;
				case 2:
					return 73.9035f;
				case 3:
					return 107.9034f;
				case 4:
					return 159.588f;
				case 5:
					return 111.0514f;
				case 6:
					return 103.0514f;
				case 7:
					return -166.537f;
				case 8:
					return 295.162f;
				case 9:
					return 347.162f;
				case 10:
					return -106.537f;
				case 11:
					return -127.4746f;
				case 12:
					return 126.9852f;
				case 13:
					return -221.0148f;
				case 14:
					return 205.1432f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 407.9035f;
				case 1:
					return 79.9035f;
				case 2:
					return 887.9033f;
				case 3:
					return 805.9033f;
				case 4:
					return 579.588f;
				case 5:
					return 275.0514f;
				case 6:
					return 635.0513f;
				case 7:
					return 135.463f;
				case 8:
					return 637.1619f;
				case 9:
					return 711.1619f;
				case 10:
					return -178.537f;
				case 11:
					return 121.6917f;
				case 12:
					return 448.9852f;
				case 13:
					return 84.9852f;
				case 14:
					return 217.1431f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -236.0965f;
				case 1:
					return -246.0965f;
				case 2:
					return 555.9035f;
				case 3:
					return 473.9034f;
				case 4:
					return 65.588f;
				case 5:
					return -232.9486f;
				case 6:
					return 511.0514f;
				case 7:
					return -640.537f;
				case 8:
					return 211.162f;
				case 9:
					return 539.162f;
				case 10:
					return -58.537f;
				case 11:
					return 58.5254f;
				case 12:
					return 92.9852f;
				case 13:
					return -267.0148f;
				case 14:
					return 269.1432f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 335.9036f;
				case 1:
					return 361.9035f;
				case 2:
					return 1061.903f;
				case 3:
					return 1075.903f;
				case 4:
					return 611.588f;
				case 5:
					return 371.0515f;
				case 6:
					return 767.0513f;
				case 7:
					return 255.463f;
				case 8:
					return 883.162f;
				case 9:
					return 875.162f;
				case 10:
					return -122.537f;
				case 11:
					return 275.6917f;
				case 12:
					return 688.9852f;
				case 13:
					return 326.9852f;
				case 14:
					return 259.1431f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -86.0965f;
				case 1:
					return -88.0965f;
				case 2:
					return 311.9035f;
				case 3:
					return 647.9034f;
				case 4:
					return 21.588f;
				case 5:
					return -110.9486f;
				case 6:
					return 599.0514f;
				case 7:
					return -706.537f;
				case 8:
					return 151.162f;
				case 9:
					return 523.162f;
				case 10:
					return -316.537f;
				case 11:
					return 8.5254f;
				case 12:
					return -39.0148f;
				case 13:
					return -395.0148f;
				case 14:
					return 395.1432f;
			}
			break;
	}
	return 0f;
}

struct<5> func_578(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_729(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_711(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_582(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_730(bParam1) };
			if (bParam2 && func_731(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_580(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_580(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_581(iParam0, &Var5, 1728382685))
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
			Var0 = { func_732(bParam1) };
			switch (func_733(iParam0))
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
			if (func_734(iParam0, -1823706425))
			{
				Var0 = { func_582(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_734(iParam0, -1483207246))
			{
				Var0 = { func_582(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_735(Var0, &Var27, bParam1, 0))
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

int func_579(int iParam0, int iParam1)
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

bool func_580(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_736(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_581(int iParam0, var uParam1, int iParam2)
{
	if (func_737(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_582(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_705(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_738(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_583(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_739(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_735(*uParam1, &Var0, bParam6, 0))
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
	if (!func_584(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_738(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_584(bool bParam0)
{
	if (func_388() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_738(bParam0));
}

int func_585(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_740(iParam0))
	{
		return 0;
	}
	if (!func_584(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_586(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_487(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_587(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_588(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_741(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_589(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_590(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

float func_591(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_592(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_742(iParam0, iParam1))
		{
			if (!func_196(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_556(uParam2, 0, 0, 1, 0);
				func_256(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_196(iParam1->f_10, 1))
		{
			func_743(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_255(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_593(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_196(iParam4, 32);
		func_555(iParam1, uParam2, 0);
		iVar5 = func_744(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_556(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_196(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_196(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_196(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_196(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_196(iParam4, 8388608) || func_196(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_196(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_196(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_595(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_595(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_196(iParam4, 67108864))
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
				iParam6 = func_745(uParam0);
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
			if (func_196(iParam4, 268435456))
			{
				iVar8 = func_746(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_747(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_595(iParam1, 23))
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
			if (func_196(iParam4, 2) || func_196(iParam4, 16))
			{
				func_594(*uParam0, 1, 1);
			}
			else
			{
				func_594(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_594(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_595(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_596(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_748(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_597(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_749(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_196(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_598(int iParam0)
{
	if (func_196(iParam0, 4))
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
	if (func_196(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_196(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_599(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_541(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_750(Global_35)) || func_751(Global_35)) || func_752(Global_35));
	fVar12 = -1f;
	if (func_60(&(iParam1->f_13)))
	{
		fVar12 = func_207(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_309((*uParam4)[iVar0]->f_6);
		func_753(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_754(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_755(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_556(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_297(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_555(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_756(iParam1, fParam6, iParam1->f_9))
					{
						func_202(&(iParam1->f_18));
						if (bVar6)
						{
							func_297(uParam4, 0, 0);
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
		func_757(iParam1, fParam2);
	}
	return bVar5;
}

void func_600(var uParam0)
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

void func_601(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_758((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_757(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_602(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_759(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_760(iParam1, 0);
				func_555(iParam1, uParam2, func_595(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_603(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_202(&(iParam1->f_18));
			return false;
		}
		else if (func_60(&(iParam1->f_18)))
		{
			func_205(&(iParam1->f_18));
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
	return func_670(&(iParam1->f_18), fParam2);
	return true;
}

void func_604(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_753(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_605(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_606(int* iParam0)
{
	if (func_595(iParam0, 0))
	{
		if (func_761(iParam0))
		{
			func_605(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

bool func_607(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_762(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_763(iParam0))
	{
		return false;
	}
	if (func_665(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_764(iParam0, 1)) || func_765(32768))
	{
		if (!func_764(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_766())
	{
		return false;
	}
	return true;
}

void func_608(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_609(int iParam0)
{
	return func_741(iParam0, 2);
}

void func_610(int iParam0, bool bParam1, int iParam2)
{
	func_767(iParam2);
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
		iParam0->f_13 = func_768(0);
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
							func_256(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_769(1))
						{
							func_256(iParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_769(1) || *iParam0 & 8192 != 0))
				{
					func_255(iParam0, 33554432);
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
			if (func_770(iParam0))
			{
				iParam0->f_15 = func_194();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_194() - iParam0->f_15) > 500)
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
	func_771(iParam0);
}

bool func_611(int iParam0, int iParam1)
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
			if (!func_772(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_773(iParam0, iVar2) <= func_774(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_612(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_775(iParam2, 1, 1, 1, 0))
	{
		func_256(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_776(iParam1, 1);
	func_638();
}

bool func_613(int iParam0, int iParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_777(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_778(iParam1);
			if (func_779(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - iParam1->f_2);
				iVar3 = func_780(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_776(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_776(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_614(int iParam0, int iParam1, int iParam2)
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
	if (func_781(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_778(iParam2);
		if (func_779(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = get_game_timer();
			}
			if (iParam2->f_2 != 0)
			{
				if (get_game_timer() - iParam2->f_2) > func_780(iParam2)
				{
					func_776(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_615(int iParam0, int iParam1)
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
	if (func_772(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - iParam1->f_3) > func_780(iParam1)
		{
			fVar3 = func_778(iParam1);
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

bool func_616(int iParam0, float fParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_194();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_617(var uParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_782(iParam2);
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
			if (func_625(iParam2, iParam1))
			{
				func_776(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_618(var uParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 < IntToFloat(func_783(iParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_625(iParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_776(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_619(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_784(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_776(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, iParam2->f_27))
				{
					func_776(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar4, 0, 0);
					if (func_785(iParam1, vVar0, vVar4))
					{
						func_776(iParam2, 1);
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
					func_776(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar7, 0, 0);
					if (func_785(iParam1, vVar0, vVar7))
					{
						func_776(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_620(int iParam0, int iParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_772(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_786(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_787(&(Global_1935630->f_34[iVar0])))
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
			if (func_788(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_789(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_790(iParam1, iParam0, fVar1, iVar0))
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

bool func_621(int iParam0, int iParam1)
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

bool func_622(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_194();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_623(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_791(iVar0, &iVar2))
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
	if (func_792(iVar0, iParam0))
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

int func_624(int iParam0, int iParam1)
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

bool func_625(int iParam0, int iParam1)
{
	if (func_793(iParam0))
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

bool func_626(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_446(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_627()
{
}

bool func_628(int iParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_794(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_194();
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
						if (func_141(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								iParam0->f_9 = func_194();
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

bool func_629()
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
	if ((func_194() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_630(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_774(iParam0);
	if (iParam0->f_12 > func_246(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_795(iParam1);
	iVar1 = func_796(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, true, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, iParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, iParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_631(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_797(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_632(int iParam0, int iParam1)
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
		if (func_798(iParam0, iParam1, 1))
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
					if (!func_799(iParam1, iParam0))
					{
						if (func_141(iVar4, Global_36, 1) < 7f)
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

bool func_633(int iParam0, int iParam1)
{
	if (!func_800(0))
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

bool func_634(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_194();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_635(int iParam0, int iParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_636(int iParam0, int iParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_194();
	}
	else if (func_194() - iParam1->f_4) > func_801(iParam1)
	{
		return func_802(iParam0, iParam1, 0, -1082130432);
	}
	return 0;
}

bool func_637(int iParam0, int iParam1)
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

void func_638()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_639(int iParam0)
{
	iParam0 = func_565(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_656(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_640(int iParam0)
{
	iParam0 = func_565(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_646(iParam0))
	{
		return;
	}
	iVar0 = func_645(iParam0);
	func_803(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_804(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_805(iParam0, 0);
	func_428(iParam0);
}

void func_641(int iParam0)
{
	iParam0 = func_565(iParam0);
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
	func_806(&Var0);
	func_807(iParam0, Var0);
	func_808(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_809(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_810(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_811(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_812(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_813(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_814(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_815(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_816(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

void func_642(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_643(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_644(vector3 vParam0)
{
	return func_817(_get_map_zone_at_coords(vParam0, 10));
}

int func_645(int iParam0)
{
	iParam0 = func_565(iParam0);
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

bool func_646(int iParam0)
{
	iParam0 = func_565(iParam0);
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

bool func_647(int iParam0)
{
	iParam0 = func_565(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_646(iParam0))
	{
		return false;
	}
	iVar0 = func_645(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

bool func_648(int iParam0)
{
	iParam0 = func_565(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_646(iParam0))
	{
		return false;
	}
	iVar0 = func_645(iParam0);
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

void func_649(int iParam0)
{
	iParam0 = func_565(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_646(iParam0))
	{
		return;
	}
	iVar0 = func_645(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_650(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_723(iParam0);
	func_723(iParam0);
	func_818(iParam0, iParam1);
	func_819(iParam0, iParam1);
	func_820(iParam0, iParam1);
	iVar1 = func_645(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_821(iVar1);
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
	iVar3 = func_645(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_821(iVar3);
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
	func_567();
}

bool func_651()
{
	iVar0 = func_822();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_652()
{
	iVar0 = func_822();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_823(0);
}

void func_653(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_654(int iParam0)
{
	iParam0 = func_565(iParam0);
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

int func_655(int iParam0)
{
	iParam0 = func_565(iParam0);
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

int func_656(int iParam0)
{
	iParam0 = func_565(iParam0);
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

void func_657(int iParam0)
{
	iParam0 = func_565(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_824(&uVar0, &uVar1, &uVar2);
	func_825(iParam0, uVar0);
	func_826(iParam0, uVar1);
	func_827(iParam0, uVar2);
	func_828(iParam0, 1);
	func_829(iParam0, 1);
}

void func_658(int iParam0)
{
	iParam0 = func_565(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_830(iParam0, 1);
}

void func_659(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_565(iParam0);
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

bool func_660(int iParam0)
{
	iParam0 = func_565(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_831(iParam0, 1);
}

struct<2> func_661(int iParam0)
{
	iParam0 = func_565(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_832(iParam0, &uVar2))
	{
	}
	if (!func_833(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_662()
{
	if (func_834(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_834(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_834(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_834(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_834(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_834(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_663(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_835(iParam0);
	func_836(iParam0, uParam1);
	func_837(iParam0);
	func_838(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_839(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_664(int iParam0)
{
	iParam0 = func_565(iParam0);
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

bool func_665(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_764(iParam0, 65536) && !func_764(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_764(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_764(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_666()
{
	if (!func_840() && func_841(1))
	{
		return true;
	}
	return false;
}

void func_667(int iParam0)
{
	func_312(1);
}

void func_668()
{
	iVar0 = 0;
	while (iVar0 < 21)
	{
		iVar1 = 0;
		while (iVar1 < 31)
		{
			func_842(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

bool func_669(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

bool func_670(var uParam0, float fParam1)
{
	if (func_47(uParam0, fParam1))
	{
		func_205(uParam0);
		return true;
	}
	return false;
}

bool func_671(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_48;
}

bool func_672(vector3 vParam0, int iParam3, int iParam4, int iParam5)
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

bool func_673()
{
	return Global_1310750->f_16077 != 0;
}

void func_674(int iParam0)
{
	Global_1393447->f_1 = iParam0;
}

int func_675(var uParam0, float fParam1, int iParam2)
{
	iVar4 = 0;
	while (iVar4 < uParam0->f_217)
	{
		iVar0[iVar5] = &uParam0->f_49[iVar4];
		iVar5++;
		iVar4++;
	}
	if (is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0[iVar5] = get_vehicle_ped_is_in(Global_35, false);
		iVar5++;
	}
	return func_843(&iVar0, uParam0->f_209, fParam1, 0, 0, 1084227584, bVar6, iParam2);
}

bool func_676(var uParam0, float fParam1, int iParam2)
{
	iVar16 = 0;
	while (iVar16 < uParam0->f_216)
	{
		uVar6[iVar17] = &uParam0->f_40[iVar16];
		iVar17++;
		iVar16++;
	}
	uVar6[iVar17] = uParam0->f_56;
	iVar17++;
	if (_does_volume_exist(iParam2))
	{
		iVar18 = func_844(&uVar0, &uVar6, 5, iParam2);
	}
	else
	{
		iVar18 = func_845(&uVar0, &uVar6, 5, uParam0->f_209, fParam1);
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
					if (func_440(vVar21, vVar24, 5f, 0) && is_ped_heading_towards_position(iVar27, uParam0->f_209, 40f))
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

bool func_677(var uParam0, var uParam1)
{
	vVar2 = { func_847(func_846()) };
	fVar5 = 120f;
	fVar5 = (fVar5 * fVar5);
	if (func_444(Global_36, vVar2) < 40000f)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_848(iVar0))
		{
			fVar6 = func_849(iVar0);
			if (fVar6 <= 10000f && fVar6 > 0f)
			{
				iVar1 = func_850(iVar0);
				if (!does_entity_exist(iVar1) || is_entity_dead(iVar1))
				{
					return false;
				}
				if (func_444(get_entity_coords(iVar1, true, false), vVar2) > fVar5)
				{
					fVar7 = func_235(iVar1, Global_36, 1);
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

bool func_678(int iParam0)
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
	if (func_369(iParam0, 1041577989))
	{
		return false;
	}
	if (is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_679(int iParam0, vector3 vParam1)
{
	vVar0 = { get_entity_coords(iParam0, true, false) };
	vVar3 = { vVar0 + get_entity_forward_vector(iParam0) };
	return func_691(vVar0, vVar3, vParam1);
}

void func_680(var uParam0, int iParam1)
{
	func_851(uParam0, iParam1);
}

bool func_681(int iParam0, int iParam1)
{
	if (!func_369(iParam0, 1041577989))
	{
		return true;
	}
	fVar0 = _0xa710dc5d25f8b942(iParam0, 1041577989);
	if (func_441(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return true;
		}
		return false;
	}
	if (func_441(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return true;
		}
		return false;
	}
	if (func_441(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_682(var uParam0, int iParam1)
{
	func_852(uParam0, iParam1);
}

Vector3 func_683(int iParam0, int iParam1, int iParam2)
{
	return func_853(get_entity_coords(iParam0, true, false), get_entity_coords(iParam1, true, false), iParam2);
}

bool func_684(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_685(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_686(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_741(iVar0, 2))
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
				func_854(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_687(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_688(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	if (uParam0->f_3 == 5)
	{
		if (is_gameplay_hint_active())
		{
			func_489();
		}
		if (bParam10)
		{
			uParam0->f_3 = 0;
		}
		return;
	}
	if (uParam0->f_3 > 0 && uParam0->f_3 < 5)
	{
		vVar0 = { _get_object_offset_from_coords(get_entity_coords(iParam1, true, false), fParam5, vParam2) };
		if (func_855(uParam0, vVar0, iParam7, iParam6))
		{
			func_489();
			func_205(uParam0);
			uParam0->f_3 = 5;
		}
	}
	switch (uParam0->f_3)
	{
		case 0:
			if (!is_gameplay_hint_active())
			{
				if (func_856(uParam0, iParam1, vParam2, iParam6, iParam7, iParam8, iParam9))
				{
					uParam0->f_3 = 1;
				}
			}
			break;
		case 1:
			func_857(&(uParam0->f_4), *uParam0);
			if (func_858(uParam0) >= iParam7)
			{
				uParam0->f_3 = 2;
			}
			break;
	}
}

Vector3 func_689(var uParam0, bool bParam1)
{
	switch (uParam0->f_48)
	{
		case 0:
			if (func_126(uParam0, 1) && !bParam1)
			{
				return func_859(0, 12);
			}
			else
			{
				return func_859(1, 12);
			}
			break;
		case 1:
			if (func_126(uParam0, 1) && !bParam1)
			{
				return func_859(2, 13);
			}
			else
			{
				return func_859(3, 13);
			}
			break;
		case 2:
			if (func_126(uParam0, 1) && !bParam1)
			{
				return func_859(4, 12);
			}
			else
			{
				return func_859(5, 12);
			}
			break;
		case 3:
			if (func_126(uParam0, 1) && !bParam1)
			{
				return func_859(6, 12);
			}
			else
			{
				return func_859(7, 12);
			}
			break;
		case 4:
			if (func_126(uParam0, 1) && !bParam1)
			{
				return func_859(8, 13);
			}
			else
			{
				return func_859(9, 12);
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_690(var uParam0, bool bParam1)
{
	switch (uParam0->f_48)
	{
		case 0:
			if (func_126(uParam0, 1) && !bParam1)
			{
				return func_859(0, 13);
			}
			else
			{
				return func_859(1, 13);
			}
			break;
		case 1:
			if (func_126(uParam0, 1) && !bParam1)
			{
				return func_859(2, 12);
			}
			else
			{
				return func_859(3, 12);
			}
			break;
		case 2:
			if (func_126(uParam0, 1) && !bParam1)
			{
				return func_859(4, 13);
			}
			else
			{
				return func_859(5, 13);
			}
			break;
		case 3:
			if (func_126(uParam0, 1) && !bParam1)
			{
				return func_859(6, 13);
			}
			else
			{
				return func_859(7, 13);
			}
			break;
		case 4:
			if (func_126(uParam0, 1) && !bParam1)
			{
				return func_859(8, 12);
			}
			else
			{
				return func_859(9, 13);
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_691(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

struct<4> func_692(var uParam0)
{
	switch (uParam0->f_48)
	{
		case 0:
			if (func_126(uParam0, 1))
			{
				return func_287(0, 14);
			}
			else
			{
				return func_287(1, 14);
			}
			break;
		case 1:
			if (func_126(uParam0, 1))
			{
				return func_287(2, 14);
			}
			else
			{
				return func_287(3, 14);
			}
			break;
		case 2:
			if (func_126(uParam0, 1))
			{
				return func_287(4, 14);
			}
			else
			{
				return func_287(5, 14);
			}
			break;
		case 3:
			if (func_126(uParam0, 1))
			{
				return func_287(6, 14);
			}
			else
			{
				return func_287(7, 14);
			}
			break;
		case 4:
			if (func_126(uParam0, 1))
			{
				return func_287(8, 14);
			}
			else
			{
				return func_287(9, 14);
			}
			break;
	}
	return Var0;
}

void func_693(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_694()
{
	_0xdd1232b332cbb9e7(4, 1, 0);
}

void func_695(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2 && !func_309(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_485(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	(*Global_1945938)[iVar0]->f_9 = fParam1;
	_uiprompt_context_set_size((*Global_1945938)[iVar0]->f_3, fParam1);
}

int func_696(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
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
		if (func_741(iVar0, 2))
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
		func_854(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_697(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
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
		if (func_741(iVar0, 2))
		{
			if (func_440(vParam2, (*Global_1945938)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1945938)[iVar0]->f_4)
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
		func_854(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_698(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_309(iParam0))
	{
		return;
	}
	iVar0 = func_485(iParam0);
	func_588(iVar0, bParam1);
}

bool func_699(int iParam0, bool bParam1)
{
	if (bParam1 && !func_309(iParam0))
	{
		return false;
	}
	return !func_741(iParam0, 4);
}

bool func_700(int iParam0, bool bParam1)
{
	if (bParam1 && !func_309(iParam0))
	{
		return false;
	}
	iVar0 = func_485(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

bool func_701(int iParam0, bool bParam1)
{
	if (bParam1 && !func_309(iParam0))
	{
		return false;
	}
	iVar0 = func_485(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

void func_702(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_860(iParam0, sParam4, iParam5);
	}
	func_861(iParam0, bParam1, fParam2, iParam3, iParam7);
}

bool func_703(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

bool func_704()
{
	if (func_862())
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

bool func_705(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_706(int iParam0, int iParam1)
{
	if (!func_705(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_711(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_863(iParam0, 1399091007))
	{
		func_864(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_707(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_705(iParam0, 0))
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
	if (!func_865())
	{
		func_866(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_867(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_867(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_868(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_711(iParam0);
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
	else if (!func_869(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_871(_create_var_string(10, &cVar2, _create_var_string(0, func_870(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_863(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_870(iParam0));
	}
	func_872(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

bool func_708(int iParam0, int iParam1, bool bParam2)
{
	if (!func_705(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_711(iParam0);
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
		if (!func_873(iParam0, 1))
		{
			return false;
		}
	}
	return func_710(iParam0, 0, bParam2) >= iParam1;
}

struct<2> func_709(int iParam0)
{
	if (!func_705(iParam0, 0))
	{
		return Var0;
	}
	if (func_863(iParam0, -305066475))
	{
		if (func_388() == -1)
		{
			if (func_863(iParam0, -537818634))
			{
				return func_169(189951448);
			}
			else
			{
				return func_169(1176172851);
			}
		}
	}
	else if (func_863(iParam0, -537818634))
	{
		return func_169(-963660207);
	}
	if (func_863(iParam0, 2084895747))
	{
		return func_169(1694039471);
	}
	return Var2;
}

int func_710(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_705(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_711(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_706(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_874(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_738(bParam2), iParam0, 0);
	return uVar2;
}

int func_711(int iParam0)
{
	if (!func_705(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_712(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_875(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_876(&Var0, func_730(0));
	}
	if (!func_877(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_878(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_583(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_879(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_713(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_705(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_578(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_880(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_582(iParam0, Var0, Var0.f_4, bParam4) };
	return func_583(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_714(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_863(iParam0, 606799272))
		{
			func_881(iParam0, iParam1);
		}
		if (func_863(iParam0, -1112814642) && func_863(iParam0, -1697809989))
		{
			func_882(iParam0, iParam1, 1, 0);
		}
	}
}

void func_715(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_541(1) < iParam0)
	{
		iParam0 = func_541(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_169(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_716(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_872(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

bool func_717(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_718(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_883(iParam0, &Var0);
}

int func_719(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

float func_720(float fParam0, float fParam1, float fParam2)
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

void func_721(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_205(&(iParam0->f_18));
}

void func_722(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_645(iParam0);
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
	if (func_831(iParam0, 64))
	{
		func_723(iParam0);
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
	bVar3 = func_884(42);
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
				func_885(&((*Global_1900383)[iParam0]->f_27));
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
		func_723(iParam0);
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
		if (func_886(1) < 1)
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
		func_887(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_831(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_888(iParam0);
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
	fVar15 = func_889(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_890(iParam0))
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
		func_891((*Global_1900383)[iParam0]->f_26);
		func_892((*Global_1900383)[iParam0]->f_26);
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
	if (func_893(iVar0) && !bVar9)
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
	iVar21 = func_886(iParam0);
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

void func_723(int iParam0)
{
	iParam0 = func_565(iParam0);
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

bool func_724(int iParam0, int iParam1, float fParam2)
{
	return func_894(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

bool func_725(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_726(int iParam0)
{
	if (!func_234(iParam0))
	{
		return -1;
	}
	return func_895(iParam0);
}

bool func_727(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_728(int iParam0, bool bParam1)
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

struct<4> func_729(bool bParam0)
{
	return func_582(1328661203, func_896(), -1591664384, bParam0);
}

struct<4> func_730(bool bParam0)
{
	iVar0 = func_738(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_582(923904168, func_729(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_582(923904168, func_729(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_582(923904168, func_729(bParam0), -740156546, 0);
}

bool func_731(int iParam0, bool bParam1)
{
	if (func_733(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_884(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_732(bool bParam0)
{
	iVar0 = func_738(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_582(271701509, func_729(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_582(271701509, func_729(bParam0), 12999093, 0);
}

int func_733(int iParam0)
{
	if (!func_705(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_734(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_733(iParam0);
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

bool func_735(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_738(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_736(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_705(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_582(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_738(bParam6), &Var0, 0);
	return uVar4;
}

bool func_737(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_738(0);
	*uParam1 = { func_582(iParam0, func_730(0), iParam3, 0) };
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

int func_738(bool bParam0)
{
	if (func_388() == -1)
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

bool func_739(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_740(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_741(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_742(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_897((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_743(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_758((*uParam0)[iVar0]))
		{
			func_478((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_744(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_898(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_309((*uParam2)[iVar0]->f_6))
		{
			func_478((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_745(var uParam0)
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

int func_746(var uParam0, int iParam1)
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

void func_747(int* iParam0, int* iParam1)
{
	if (!func_595(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_478(iParam1, 19);
			func_760(iParam0, 23);
			func_899(iParam1, 2);
		}
	}
}

bool func_748(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_703(16))
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
					func_900(16);
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

void func_749(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_898(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

bool func_750(int iParam0)
{
	return (func_901(iParam0, 4) || func_901(iParam0, 5));
}

int func_751(int iParam0)
{
	return func_901(iParam0, 7);
}

int func_752(int iParam0)
{
	return func_901(iParam0, 6);
}

void func_753(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_758(iParam1))
		{
			clear_bit(iParam1, 14);
			func_898(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_754(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_902(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_699(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_476(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_476(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_903(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_755(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_701(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_904(iParam1, 1))
	{
		func_905(iParam1, 1);
		return true;
	}
	return false;
}

bool func_756(int* iParam0, float fParam1, bool bParam2)
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

void func_757(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_758(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_759(int iParam0)
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

void func_760(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_761(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_762(int iParam0, int iParam1)
{
	if (func_388() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_763(int iParam0)
{
	if (func_388() != -1)
	{
		if (func_764(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_764(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_764(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_765(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_766()
{
	return Global_1905944->f_5694;
}

void func_767(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_704();
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
			func_906(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_768(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_769(bool bParam0)
{
	if (func_907(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_770(int iParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_388() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_908(iParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_908(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_796(iVar0) == -1)
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

void func_771(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_909(iParam0);
	}
}

bool func_772(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_796(iParam2);
	}
	else
	{
		iVar1 = func_795(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_796(iParam0);
	}
	else
	{
		iVar0 = func_795(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_196(*iParam1, 8388608))
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

float func_773(int iParam0, int iParam1)
{
	return func_446(iParam0, iParam1, 1, 1);
}

float func_774(int iParam0)
{
	return iParam0->f_26;
}

bool func_775(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_776(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_256(iParam0, 134217728);
	}
	else
	{
		func_255(iParam0, 134217728);
	}
}

bool func_777(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_446(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_320(iVar0, 0)))
		{
			if (func_910(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_778(int iParam0)
{
	return iParam0->f_17;
}

bool func_779(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_196(*iParam0, 4194304))
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

int func_780(int iParam0)
{
	return iParam0->f_18;
}

bool func_781(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_320(iVar0, 0)))
		{
			if (func_911(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_782(int iParam0)
{
	return iParam0->f_23;
}

int func_783(int iParam0)
{
	return iParam0->f_21;
}

int func_784(int iParam0)
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

bool func_785(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_894(iParam0, vParam4, 0.5f))
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

int func_786(int iParam0)
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
	if (func_912(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_787(int iParam0)
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

bool func_788(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_913(iParam1))
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

bool func_789(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_913(iParam1))
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

bool func_790(int iParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_913(iParam1))
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

bool func_791(int iParam0, int iParam1)
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

bool func_792(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_914(iParam0, 1, 0, 0) != 2055893578)
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

bool func_793(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_794(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_141(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_795(int iParam0)
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

int func_796(int iParam0)
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

int func_797(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_791(Global_35, &iVar1))
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
		fVar2 = func_446(iParam0, player_ped_id(), 0, 1);
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
		if (func_446(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_798(int iParam0, int iParam1, bool bParam2)
{
	func_907(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_799(iParam1, iVar0))
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
				if (!bParam2 || !func_799(iParam1, iVar1))
				{
					if (func_141(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_799(int iParam0, int iParam1)
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

bool func_800(int iParam0)
{
	if (func_290())
	{
		return false;
	}
	return func_570((*Global_1347702)[58]->f_15, 1);
}

int func_801(int iParam0)
{
	return iParam0->f_20;
}

int func_802(int iParam0, int iParam1, bool bParam2, float fParam3)
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

void func_803(int iParam0)
{
	iParam0 = func_565(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_645(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_915(iVar6);
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

bool func_804(int iParam0)
{
	if (!func_916(iParam0))
	{
		return false;
	}
	if (!func_917())
	{
		return true;
	}
	return false;
}

void func_805(int iParam0, int iParam1)
{
	iParam0 = func_565(iParam0);
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

void func_806(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_807(int iParam0, struct<2> Param1)
{
	iParam0 = func_565(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_918(iParam0, Param1))
	{
	}
	if (!func_919(iParam0, Param1.f_1))
	{
	}
}

void func_808(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_920((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_809(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_810(var uParam0)
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

void func_811(var uParam0)
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

void func_812(int iParam0, var uParam1)
{
	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_813(int iParam0, var uParam1)
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

void func_814(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_815(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_816(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_817(int iParam0)
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

void func_818(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam1], Global_40.f_1095.f_1[iParam0], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam0], &(Global_1900383->f_508), 436);
}

void func_819(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_463), (*Global_1900383)[iParam1], 45);
	_copy_memory((*Global_1900383)[iParam1], (*Global_1900383)[iParam0], 45);
	_copy_memory((*Global_1900383)[iParam0], &(Global_1900383->f_463), 45);
}

int func_820(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_921(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_921(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_922(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_923(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_924(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_821(int iParam0)
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
	if (func_925(iParam0))
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
	if (func_422(iParam0))
	{
		iVar3 = func_423(iParam0);
		if (func_926(iVar3))
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

int func_822()
{
	return Global_1900383->f_393;
}

void func_823(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

int func_824(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_387())
	{
		if (func_553())
		{
			bVar0 = false;
			if (!func_570((*Global_1835011)[15]->f_1, 1) && !func_884(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_927();
				*iParam1 = func_928();
				*uParam2 = func_929();
				return 1;
			}
			else
			{
				*uParam0 = func_930();
				*iParam1 = func_931();
				*uParam2 = func_932();
				return 1;
			}
		}
		else if (func_290())
		{
			if (!func_570((*Global_1835011)[60]->f_1, 1))
			{
				*uParam0 = func_933();
				*iParam1 = func_934();
				*uParam2 = func_935();
				return 1;
			}
			else
			{
				*uParam0 = func_936();
				*iParam1 = func_937();
				*uParam2 = func_938();
				return 1;
			}
		}
	}
	else if (func_553())
	{
		*uParam0 = func_939();
		*iParam1 = func_940();
		*uParam2 = func_941();
		return 1;
	}
	else if (func_290())
	{
		*uParam0 = func_942();
		*iParam1 = func_943();
		*uParam2 = func_944();
		return 1;
	}
	return 0;
}

void func_825(int iParam0, var uParam1)
{
	iParam0 = func_565(iParam0);
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

void func_826(int iParam0, var uParam1)
{
	iParam0 = func_565(iParam0);
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

void func_827(int iParam0, var uParam1)
{
	iParam0 = func_565(iParam0);
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

void func_828(int iParam0, int iParam1)
{
	iParam0 = func_565(iParam0);
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

void func_829(int iParam0, int iParam1)
{
	iParam0 = func_565(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_654(iParam0);
	if (!is_model_valid(iVar0))
	{
		func_824(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = get_default_max_attribute_rank(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0]->f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = fVar4;
	func_945(iParam1);
	iVar5 = func_645(iParam0);
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

void func_830(int iParam0, int iParam1)
{
	iParam0 = func_565(iParam0);
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

bool func_831(int iParam0, int iParam1)
{
	iParam0 = func_565(iParam0);
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

bool func_832(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_921(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_946(Var0, 1415981582, 0);
	if (!func_705(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_833(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_921(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_946(Var0, -2119169513, 0);
	if (!func_705(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_834(int iParam0, var uParam1)
{
	if (!func_947(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_948() };
	*uParam1 = func_946(Var0, iParam0, 0);
	if (!func_705(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_835(int iParam0)
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

void func_836(int iParam0, var uParam1)
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
	func_949(iParam0, *uParam1);
	func_949(iParam0, uParam1->f_1);
}

void func_837(int iParam0)
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

void func_838(int iParam0, var uParam1)
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
	func_949(iParam0, *uParam1);
	func_949(iParam0, uParam1->f_1);
	func_949(iParam0, uParam1->f_2);
	func_949(iParam0, uParam1->f_3);
	func_949(iParam0, uParam1->f_4);
	func_949(iParam0, uParam1->f_5);
}

int func_839(int iParam0, int iParam1, bool bParam2)
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

bool func_840()
{
	if (func_950())
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

bool func_841(bool bParam0)
{
	if (func_951())
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
		if (!func_840())
		{
			return false;
		}
	}
	if (Global_16)
	{
		return false;
	}
	if (!func_766())
	{
		return false;
	}
	if (_0xf236c84c6adfcb2f())
	{
		return false;
	}
	if (func_952())
	{
		return false;
	}
	return true;
}

void func_842(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_843(int iParam0, vector3 vParam1, int iParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, int iParam9)
{
	if (_does_volume_exist(iParam9))
	{
		iVar12 = func_953(&iVar0, iParam0, iParam9, iVar0);
	}
	else
	{
		iVar12 = func_954(&iVar0, iParam0, iVar0, vParam1, iParam4);
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
					if (func_440(vVar6, vVar9, iParam7, 0))
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

int func_844(var uParam0, int iParam1, int iParam2, int iParam3)
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
				if (func_955(iVar2))
				{
					if (!func_431(iVar2, iParam1))
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

int func_845(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6)
{
	iVar0 = _create_volume_cylinder(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	iVar1 = func_844(uParam0, iParam1, iParam2, iVar0);
	func_956(iVar0);
	return iVar1;
}

int func_846()
{
	return Global_40.f_4283;
}

Vector3 func_847(int iParam0)
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
			return func_957();
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_848(int iParam0)
{
	if (func_958(iParam0))
	{
		if (func_227(Global_1360165[iParam0], 0))
		{
			return true;
		}
	}
	return false;
}

float func_849(int iParam0)
{
	if (!func_959(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

int func_850(int iParam0)
{
	if (func_958(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

void func_851(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_852(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

Vector3 func_853(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return func_304(vParam3 - vParam0) * Vector(fParam6, fParam6, fParam6);
}

void func_854(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
	func_588(iParam0, 1);
	func_589(iParam0, 1);
	func_590(iParam0, 128);
}

bool func_855(var uParam0, vector3 vParam1, int iParam4, int iParam5)
{
	if (func_69(vParam1))
	{
		return true;
	}
	if (!func_960(*uParam0, iParam4))
	{
		return false;
	}
	if (func_961(1092616192, 1085276160, 0))
	{
		return true;
	}
	if (func_962(uParam0))
	{
		return true;
	}
	if (uParam0->f_4 == 2)
	{
		if (iParam5 == -1)
		{
			iParam5 = 2000;
		}
		if (func_858(uParam0) >= (iParam5 + iParam4))
		{
			return true;
		}
	}
	else if (uParam0->f_4 == 1)
	{
		if (!func_963(uParam0->f_5, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_856(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (!func_309(uParam0->f_5))
	{
		return false;
	}
	if (func_963(uParam0->f_5, 1))
	{
		func_40(uParam0, 1);
		uParam0->f_6 = func_964(uParam0->f_5, 1);
		uParam0->f_7 = func_965(uParam0->f_5, 1);
		if (bParam8)
		{
			func_310(&(uParam0->f_5), 1, 1);
		}
		set_gameplay_entity_hint(iParam1, vParam2, true, iParam5, iParam6, iParam7, 0);
		set_gameplay_hint_fov(30f);
		return true;
	}
	return false;
}

void func_857(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (*uParam0 == 0)
	{
		if (func_858(&uParam1) < 500)
		{
			if (is_disabled_control_just_released(0, -416594956))
			{
				*uParam0 = 2;
			}
		}
		else if (is_disabled_control_pressed(0, -416594956))
		{
			*uParam0 = 1;
		}
	}
}

int func_858(var uParam0)
{
	if (!func_60(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_420(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_194() - round((uParam0->f_1 * 1000f)));
}

Vector3 func_859(int iParam0, int iParam1)
{
	return func_576(iParam0, iParam1);
}

void func_860(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_872(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_861(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_966())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_872(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_967(iVar0);
			func_968(iVar0, 0, 0);
		}
		func_872(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_170(func_169(1644987397), iVar1);
	}
}

bool func_862()
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

bool func_863(int iParam0, int iParam1)
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

void func_864(int iParam0, var uParam1, var uParam2)
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

bool func_865()
{
	return !&Global_1911774;
}

void func_866(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_867(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_868(int iParam0, int iParam1)
{
	if (!func_705(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_869(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_870(int iParam0)
{
	if (!func_705(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

char* func_871(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

var func_872(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_969(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_873(int iParam0, int iParam1)
{
	if (!func_705(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_706(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_970("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_878(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_308(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_879(iVar1);
				return true;
			}
			iVar3++;
		}
		func_879(iVar1);
	}
	return false;
}

int func_874(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_875(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_876(&Var0, func_730(0));
	}
	if (!func_877(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_879(iVar14);
	return uVar15;
}

struct<14> func_875(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_876(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_877(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_738(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_878(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_879(int iParam0)
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

bool func_880(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_739(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_584(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_738(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_881(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_388() == -1)
	{
		if (func_971(43))
		{
			if (func_863(iParam0, 412399755))
			{
				func_972(-1791518714);
				if (func_973() == 0)
				{
					func_172(0, 10);
					iVar0 = func_974(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_975(iParam0) < func_976(iParam0))
						{
							func_977(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_971(44))
		{
			if (func_863(iParam0, 709057512))
			{
				func_972(-2087881550);
				if (func_973() == 1)
				{
					func_172(0, 10);
					iVar0 = func_974(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_975(iParam0) < func_976(iParam0))
						{
							func_977(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_971(45))
		{
			if (func_863(iParam0, -1478961327))
			{
				func_972(1908068621);
				if (func_973() == 2)
				{
					func_172(0, 10);
					iVar0 = func_974(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_975(iParam0) < func_976(iParam0))
						{
							func_977(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_971(46))
		{
			if (func_863(iParam0, -1238404098))
			{
				func_972(1611247019);
				if (func_973() == 3)
				{
					func_172(0, 10);
					iVar0 = func_974(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_975(iParam0) < func_976(iParam0))
						{
							func_977(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_971(47))
		{
			if (func_863(iParam0, 1160548794))
			{
				func_972(1319635688);
				if (func_973() == 4)
				{
					func_172(0, 10);
					iVar0 = func_974(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_975(iParam0) < func_976(iParam0))
						{
							func_977(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_882(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_708(func_978(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_979(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_980(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

bool func_883(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_884(int iParam0)
{
	if (!func_981(iParam0))
	{
		return false;
	}
	return func_982(iParam0);
}

void func_885(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_984(func_983(255), 109029619));
	}
	else if (func_553())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_290();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_886(int iParam0)
{
	iParam0 = func_565(iParam0);
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

void func_887(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_984(func_983(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_553())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_290())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_888(int iParam0)
{
	iParam0 = func_565(iParam0);
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

float func_889(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_890(int iParam0)
{
	iParam0 = func_565(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_654(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_886(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_886(iParam0) + 1;
	fVar6 = func_985(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_986(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_891(int iParam0)
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

void func_892(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_893(int iParam0)
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

bool func_894(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_895(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_987(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

struct<4> func_896()
{
	return Var0;
}

int func_897(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_898(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_309(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_310(&(iParam1->f_6), 0, 1);
	}
	if (!func_309(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_758(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_686(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_309(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_903(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_988(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_989(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_474(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_988(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_476(iParam1->f_6, 0, 1);
				}
				else
				{
					func_476(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_899(int* iParam0, int iParam1)
{
	if (!func_298(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_478(iParam0, 14);
		}
	}
}

void func_900(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_901(int iParam0, int iParam1)
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

bool func_902(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_903(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_309(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_485(iParam0);
	func_988(iParam0, 18, 0, 1);
	func_988(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_904(int iParam0, bool bParam1)
{
	if (bParam1 && !func_309(iParam0))
	{
		return false;
	}
	iVar0 = func_485(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_905(int iParam0, bool bParam1)
{
	if (bParam1 && !func_309(iParam0))
	{
		return;
	}
	iVar0 = func_485(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

void func_906(var uParam0, var uParam1)
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

bool func_907(bool bParam0, int iParam1, int iParam2)
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

int func_908(int iParam0)
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

void func_909(int iParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_255(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_256(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_910(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_911(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_911(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_912(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_913(int iParam0)
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

int func_914(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_915(int iParam0)
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

bool func_916(int iParam0)
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

bool func_917()
{
	return _unlock_is_unlocked(99890643);
}

bool func_918(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_921(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_582(iParam1, Var0, 1415981582, 0) };
	return func_990(Var29, 1);
}

bool func_919(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_921(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_582(iParam1, Var0, -2119169513, 0) };
	return func_990(Var29, 1);
}

void func_920(var uParam0)
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

bool func_921(int iParam0, var uParam1)
{
	if (!func_991(iParam0))
	{
		return false;
	}
	iVar0 = func_922(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_729(0) };
	if (!func_992(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_993(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

int func_922(int iParam0)
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

bool func_923(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	if (!func_584(bParam10))
	{
		return func_994(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_735(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (func_995(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!_0xdccaa7c3bfd88862(func_738(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_990(Var14, 1))
		{
		}
	}
	return true;
}

bool func_924(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!func_584(bParam9))
	{
		return func_996(Param0, Param4, iParam8, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	if (func_995(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_735(Param0, &Var0, bParam9, 1) || !func_735(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (func_995(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_738(0);
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

bool func_925(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_997(get_entity_model(iParam0)))
	{
		return true;
	}
	if (decor_exist_on(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_926(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

int func_927()
{
	return 1342496140;
}

int func_928()
{
	return 446670976;
}

int func_929()
{
	return 1;
}

int func_930()
{
	return -868094182;
}

int func_931()
{
	return 1074477367;
}

int func_932()
{
	return 1;
}

int func_933()
{
	return -997197050;
}

int func_934()
{
	return -2063289686;
}

int func_935()
{
	return 2;
}

int func_936()
{
	return -868094182;
}

int func_937()
{
	return 1074477367;
}

int func_938()
{
	return 1;
}

int func_939()
{
	return 1235275977;
}

int func_940()
{
	return 2030804811;
}

int func_941()
{
	return 1;
}

int func_942()
{
	return 1974379573;
}

int func_943()
{
	return 2024948086;
}

int func_944()
{
	return 1;
}

void func_945(int iParam0)
{
	if (func_998() < iParam0)
	{
		func_999(iParam0);
	}
}

int func_946(struct<4> Param0, int iParam4, int iParam5)
{
	Var0.f_9 = -1591664384;
	if (func_1000(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_947(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_733(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1001(iParam0);
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

struct<4> func_948()
{
	Var0 = { func_729(0) };
	return func_582(856287005, Var0, -218846335, 0);
}

void func_949(int iParam0, int iParam1)
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

bool func_950()
{
	return Global_1905944->f_5693 != -1;
}

bool func_951()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) <= 4);
}

bool func_952()
{
	uVar0 = Global_1905944->f_5695;
	Global_1905944->f_5695 = 0;
	return uVar0;
}

int func_953(int iParam0, int iParam1, int iParam2, int iParam3)
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
			if (!func_1002(iVar3, iParam1))
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

int func_954(int iParam0, int iParam1, int iParam2, vector3 vParam3, int iParam6)
{
	iVar0 = _create_volume_sphere(vParam3, 0f, 0f, 0f, iParam6, iParam6, iParam6);
	iVar1 = func_953(iParam0, iParam1, iVar0, iParam2);
	func_956(iVar0);
	return iVar1;
}

bool func_955(int iParam0)
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

void func_956(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

Vector3 func_957()
{
	if (func_445(70))
	{
		return -1634.252f, -1358.577f, 83.9077f;
	}
	if (func_445(73))
	{
		return -1665.419f, -1346.258f, 84.11175f;
	}
	return -1641.1f, -1359.979f, 83.4932f;
}

bool func_958(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_959(int iParam0)
{
	return iParam0 > -1;
}

bool func_960(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (!func_60(&uParam0))
	{
		return false;
	}
	if (func_858(&uParam0) <= iParam3 + 500)
	{
		return false;
	}
	return true;
}

bool func_961(float fParam0, float fParam1, bool bParam2)
{
	func_1003(&uVar0, &uVar1, &iVar2, &iVar3, 529461124, 1410914475, -1497929239, 665185216, 2);
	if (!bParam2)
	{
		if (iVar2 != 0 || iVar3 != 0)
		{
			return true;
		}
	}
	if (!func_1004(fParam0, fParam1))
	{
		return true;
	}
	return false;
}

bool func_962(var uParam0)
{
	if (uParam0->f_6 > 0f)
	{
		fVar0 = func_141(Global_35, func_1005(uParam0->f_5), 1);
		if (fVar0 > (uParam0->f_6 + 0.5f))
		{
			return true;
		}
	}
	else if (_does_volume_exist(uParam0->f_7) && !is_entity_in_volume(Global_35, uParam0->f_7, true, 0))
	{
		return true;
	}
	return false;
}

bool func_963(int iParam0, bool bParam1)
{
	if (bParam1 && !func_309(iParam0))
	{
		return false;
	}
	iVar0 = func_485(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1945938)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1945938)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1945938)[iVar0]->f_3);
}

float func_964(int iParam0, bool bParam1)
{
	if (bParam1 && !func_309(iParam0))
	{
		return -1f;
	}
	iVar0 = func_485(iParam0);
	return (*Global_1945938)[iVar0]->f_9;
}

int func_965(int iParam0, bool bParam1)
{
	if (bParam1 && !func_309(iParam0))
	{
		return 0;
	}
	iVar0 = func_485(iParam0);
	return (*Global_1945938)[iVar0]->f_10;
}

bool func_966()
{
	if (func_1006())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_967(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1007((Global_40.f_4283.f_325 + iParam0));
}

void func_968(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_966())
	{
		func_872(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_872(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

void func_969(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_970(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_738(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_971(int iParam0)
{
	if (func_388() != -1)
	{
		return false;
	}
	return func_570((*Global_1347702)[iParam0]->f_15, 1);
}

void func_972(int iParam0)
{
	if (!func_1008(iParam0))
	{
		func_1010(func_1009(iParam0));
	}
}

int func_973()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1008(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_974(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_975(iVar9);
	iVar2 = func_975(iVar10);
	iVar3 = func_975(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_975(iVar12);
	}
	iVar5 = func_976(iVar9);
	iVar6 = func_976(iVar10);
	iVar7 = func_976(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_976(iVar12);
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

int func_975(int iParam0)
{
	if (func_708(iParam0, 1, 0))
	{
		iVar0 = func_710(iParam0, 0, 0);
	}
	return iVar0;
}

int func_976(int iParam0)
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

void func_977(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_387() && (func_1011(38) || func_971(38)))
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
			if (func_387() && (func_1011(39) || func_971(39)))
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
			iVar9 = func_1012(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_387() && (func_1011(41) || func_971(41)))
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
			if (func_387() && (func_1011(49) || func_971(49)))
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
			iVar9 = func_1012(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1013(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1014(iParam0, iVar13, iVar14))
	{
	}
	if (func_1015(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1016(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1017(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1018(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1019(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

int func_978(int iParam0, int iParam1)
{
	if (!func_1020(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_979(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_978(iParam1, 5) || iParam0 == func_978(iParam1, 6)) || iParam0 == func_978(iParam1, 7)) || iParam0 == func_978(iParam1, 8)) || iParam0 == func_978(iParam1, 9))
	{
		func_1021(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_977(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_1022(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_980(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_978(iParam1, 5) || iParam0 == func_978(iParam1, 6)) || iParam0 == func_978(iParam1, 7)) || iParam0 == func_978(iParam1, 8)) || iParam0 == func_978(iParam1, 9))
	{
		if (func_1021(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_977(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_1022(51, 0, 0, iVar0, func_1012(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_977(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_1022(51, 0, 0, iVar0, func_1012(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_981(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_982(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

char* func_983(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_1023(37, iParam0))
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
	if (func_1023(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_984(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_871(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_985(int iParam0)
{
	iParam0 = func_565(iParam0);
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

float func_986(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_987(int iParam0)
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

void func_988(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_309(iParam0))
	{
		return;
	}
	iVar0 = func_485(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_989(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_309(iParam0))
	{
		return;
	}
	iVar0 = func_485(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

bool func_990(struct<4> Param0, int iParam4)
{
	if (!func_584(0))
	{
		return func_1024(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_735(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_738(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_991(int iParam0)
{
	iVar0 = func_922(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_729(0) };
	if (func_1025(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

bool func_992(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_738(bParam7);
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

bool func_993(var uParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(func_738(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

int func_994(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_735(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_995(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_736(Var0.f_4, Param4, iParam8, 0);
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
	Var16 = { func_1026(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar32 = func_1027(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

bool func_995(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_996(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	if (func_995(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_735(Param0, &Var0, 1, 0) || !func_735(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_995(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_1026(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var44 = { func_1026(&Var14) };
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
					func_1028(iVar60, 1);
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
		iVar60 = func_1027(1168099063, &Var28, 0);
		iVar60 = func_1027(1168099063, &Var44, 0);
	}
	return iVar60;
}

bool func_997(int iParam0)
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

int func_998()
{
	return Global_40.f_1095.f_3135;
}

void func_999(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

bool func_1000(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_738(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_735(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_1001(int iParam0)
{
	if (!func_705(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_733(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

bool func_1002(int iParam0, int iParam1)
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

void func_1003(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = floor((get_control_normal(iParam8, iParam4) * 127f));
	*uParam1 = floor((get_control_normal(iParam8, iParam5) * 127f));
	*iParam2 = floor((get_control_normal(iParam8, iParam6) * 127f));
	*iParam3 = floor((get_control_normal(iParam8, iParam7) * 127f));
}

bool func_1004(float fParam0, float fParam1)
{
	if (is_ped_on_mount(Global_35))
	{
		return get_entity_speed(Global_35) < fParam0;
	}
	return get_entity_speed(Global_35) < fParam1;
}

Vector3 func_1005(int iParam0)
{
	iVar0 = func_485(iParam0);
	return func_1029(iVar0);
}

bool func_1006()
{
	return _unlock_is_unlocked(-121456797);
}

void func_1007(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_169(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

bool func_1008(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1009(int iParam0)
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

void func_1010(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1011(int iParam0)
{
	if (func_388() != -1)
	{
		return false;
	}
	if (!func_232(iParam0))
	{
		return false;
	}
	return func_1030((*Global_1347702)[iParam0]->f_15);
}

int func_1012(int iParam0, int iParam1)
{
	if (!func_1020(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1013(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_1031() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1032(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1033(), 12);
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
			else if (func_1034() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1035(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1034(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1036(), 13);
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
			else if (func_1037() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1038(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1037(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1012(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1014(int iParam0, int iParam1, int iParam2)
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

bool func_1015(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1016(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1017(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1039(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_708(iVar2, 1, 0) || func_1041(func_1040(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1042(func_1039(iVar0))), func_1042(func_1039(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1034() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1043(iVar0)), func_1043(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1035() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1043(iVar0)), func_1043(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1043(iVar0)), func_1043(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_978(iParam3, func_1044(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_975(iVar2) - iParam7) >= func_1012(iParam3, func_1045(iVar0));
				}
				else
				{
					bVar1 = func_975(iVar2) >= func_1012(iParam3, func_1045(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_975(iVar2) + iParam7) >= func_1012(iParam3, func_1045(iVar0));
			}
			else
			{
				bVar1 = func_975(iVar2) >= func_1012(iParam3, func_1045(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1046(iVar2)), func_1046(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1047(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1048(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1048(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1037() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1049(iVar0)), func_1049(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1038() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1049(iVar0)), func_1049(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1049(iVar0)), func_1049(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_978(iParam3, func_1044(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_975(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1050(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1050(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1051(iVar2)), func_1051(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1018(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1036() >= 13)
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

bool func_1019(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_234(func_1052(0)) && ((func_1053(0) == 1 || func_1053(0) == 8) || func_1053(0) == 6))
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

bool func_1020(int iParam0, var uParam1)
{
	if (!func_1054(iParam0))
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

bool func_1021(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1050(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1050(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1050(iVar0))
		{
			*iParam2++;
		}
		if (func_1050(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1050(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1050(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1050(iVar0))
		{
			*iParam2++;
		}
		if (func_1050(iVar1))
		{
			*iParam2++;
		}
		if (func_1050(iVar0) && func_1050(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1050(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1050(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1050(iVar0))
		{
			*iParam2++;
		}
		if (func_1050(iVar1))
		{
			*iParam2++;
		}
		if (func_1050(iVar2))
		{
			*iParam2++;
		}
		if ((func_1050(iVar0) && func_1050(iVar1)) && func_1050(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1050(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1050(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1050(iVar0))
		{
			*iParam2++;
		}
		if (func_1050(iVar1))
		{
			*iParam2++;
		}
		if (func_1050(iVar2))
		{
			*iParam2++;
		}
		if (func_1050(iVar3))
		{
			*iParam2++;
		}
		if (((func_1050(iVar0) && func_1050(iVar1)) && func_1050(iVar2)) && func_1050(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1022(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_387() && (func_1011(38) || func_971(38)))
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
			if (func_387() && (func_1011(39) || func_971(39)))
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
			if (func_387() && (func_1011(49) || func_971(49)))
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
		if (func_387() && (func_1011(38) || func_971(38)))
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
			func_1055(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1055(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_1057(_create_var_string(2, sVar0), _create_var_string(2, func_1042(func_1056(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1055(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1055(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_387() && (func_1011(39) || func_971(39)))
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
			func_1055(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1055(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_387() && (func_1011(49) || func_971(49)))
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
			func_1055(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1055(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1055(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1055(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_1023(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1058(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_1059())
	{
		return func_1058(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_1058(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

int func_1024(struct<4> Param0, int iParam4, bool bParam5)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_735(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_711(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1060(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1061(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1062(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1063(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1026(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1027(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1025(var uParam0, int iParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_738(bParam2), uParam0, iParam1);
}

struct<16> func_1026(var uParam0)
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

int func_1027(int iParam0, var uParam1, bool bParam2)
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
					func_1028(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1028(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16))
	{
		func_1028(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1028(int iParam0, int iParam1)
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
	func_1064(iParam0, iParam1);
}

Vector3 func_1029(int iParam0)
{
	if ((*Global_1945938)[iParam0]->f_5 == 1)
	{
		return _0xf70f00013a62f866((*Global_1945938)[iParam0]->f_10);
	}
	else if ((*Global_1945938)[iParam0]->f_5 == 2)
	{
		return (*Global_1945938)[iParam0]->f_6;
	}
	else if ((*Global_1945938)[iParam0]->f_5 == 3)
	{
		return get_offset_from_entity_in_world_coords((*Global_1945938)[iParam0]->f_11, (*Global_1945938)[iParam0]->f_12);
	}
	return 0f, 0f, 0f;
}

bool func_1030(int iParam0)
{
	iVar0 = func_726(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_1031()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_708(func_1065(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1032()
{
	return func_1066(Global_40.f_12019);
}

int func_1033()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_1065(iVar1);
		if (func_708(iVar2, 1, 0) || func_1041(func_1040(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1034()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1067(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1035()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1068(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1036()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1047(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1037()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

int func_1038()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_1039(int iParam0)
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

int func_1040(int iParam0)
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

bool func_1041(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1042(int iParam0)
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

char* func_1043(int iParam0)
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

int func_1044(int iParam0)
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

int func_1045(int iParam0)
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

char* func_1046(int iParam0)
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

bool func_1047(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_1048(int iParam0)
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

char* func_1049(int iParam0)
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

bool func_1050(int iParam0)
{
	if (func_1069(iParam0) && func_708(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1070(iParam0) && func_1071(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1051(int iParam0)
{
	if (!func_705(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_870(iParam0));
}

int func_1052(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_1053(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

bool func_1054(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

var func_1055(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

int func_1056(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

var func_1057(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

bool func_1058(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_1059()
{
	return Global_1109400->f_245;
}

struct<28> func_1060(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_738(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1026(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1061(int iParam0, var uParam1, bool bParam2)
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
					func_1028(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1028(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28))
	{
		func_1028(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1062(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_738(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1026(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1063(int iParam0, var uParam1, bool bParam2)
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
					func_1028(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1028(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17))
	{
		func_1028(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1064(int iParam0, int iParam1)
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

int func_1065(int iParam0)
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

int func_1066(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_1067(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1068(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_1069(int iParam0)
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

int func_1070(int iParam0)
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

int func_1071(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1072(&iVar0, 0, iVar95, &Var1) && !func_1072(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_1073(iVar0, &Var1);
			if (func_705(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

bool func_1072(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_646(iParam1) && !func_647(iParam1))
	{
		iVar0 = func_645(iParam1);
	}
	else
	{
		return false;
	}
	func_920(uParam3);
	iVar5 = func_915(iParam2);
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

void func_1073(int iParam0, int iParam1)
{
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_1074(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1075(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1074(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_1075(var uParam0, int iParam1, int iParam2, int iParam3)
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

