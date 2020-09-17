void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(523))
	{
		func_1(vScriptParam_0);
	}
	while (true)
	{
		if (func_2())
		{
			func_1(vScriptParam_0);
		}
		func_3(&fVar0);
		if (Local_26.f_3 > 3)
		{
			func_4(&(Local_26.f_46));
			func_5(&(Local_26.f_46));
			func_6(&(Local_26.f_46));
		}
		switch (Local_26.f_3)
		{
			case 0:
				if (func_7(&vScriptParam_0))
				{
					if (func_8())
					{
						func_9(1);
					}
				}
				break;
			case 1:
				if (func_10())
				{
					func_11(0);
					func_9(3);
				}
				break;
			case 3:
				if (_does_volume_exist(Local_26.f_46.f_105))
				{
					if (is_entity_in_volume(Global_35, Local_26.f_46.f_105, true, 0))
					{
						func_12(&(Local_26.f_46));
						func_13(&(Local_26.f_46));
						if (func_14(&(Local_26.f_46), 0))
						{
							func_15(8);
						}
						if (!func_16(134217728))
						{
							if (Local_26.f_46.f_66 == 28)
							{
								if (func_17())
								{
									if (func_18(Local_26.f_46, 0) == 74 && _0xa00df706c60173d1(-877355938) == 984264800)
									{
										Local_26.f_46.f_107 = "COMP_PEARSON";
									}
								}
							}
							func_15(134217728);
						}
						func_9(4);
					}
				}
				break;
			case 4:
				func_13(&(Local_26.f_46));
				func_19(&(Local_26.f_46));
				if (_does_volume_exist(Local_26.f_46.f_105))
				{
					if (!is_entity_in_volume(Global_35, Local_26.f_46.f_105, true, 0))
					{
						func_20(&(Local_26.f_46));
						func_21(&(Local_26.f_46));
						func_22(Local_26.f_46.f_7[0], &(Local_26.f_46.f_29));
						func_9(3);
					}
					else
					{
						func_23(fVar0);
						if (!func_16(1048576))
						{
							if (func_24())
							{
								func_25(&(Local_26.f_46));
								func_26(1, 0);
								func_27(&(Local_26.f_46), 0);
								func_28();
								if (Local_26.f_4 < 9)
								{
									func_29(9);
								}
								func_30(0);
								func_9(5);
							}
						}
					}
				}
				break;
			case 2:
				if (func_16(4096))
				{
					func_30(0);
					func_9(5);
				}
				else
				{
					if (func_31())
					{
						if (func_16(16))
						{
							func_9(4);
						}
						else
						{
							func_9(7);
						}
					}
					Jump @894; //curOff = 568
					if (func_32(Local_26.f_46, 0, 0))
					{
						set_ped_config_flag(Local_26.f_46, 130, true);
						set_ped_config_flag(Local_26.f_46, 315, true);
					}
					func_19(&(Local_26.f_46));
					if (func_33(fVar0))
					{
						func_34(&(Local_26.f_34));
						func_9(6);
					}
					Jump @894; //curOff = 637
					if (!func_35(&(Local_26.f_46), 16777216))
					{
						if (_0x285d36c5c72b0569(Global_35) <= 1f)
						{
							func_36(&(Local_26.f_46), 35f, 1f, 1);
							func_37(&(Local_26.f_46), 16777216);
						}
					}
					if (!func_16(4194304))
					{
						if (func_38(0f, 1, Local_26.f_46, 1) && func_38(-4f, 1, 0, 0))
						{
							if (func_39(1))
							{
								func_40(262144);
							}
							func_15(4194304);
						}
					}
					else if (!func_16(8388608))
					{
						if ((func_38(0f, 1, Local_26.f_46, 1) && func_38(2f, 1, 0, 0)) && func_41(&(Local_26.f_34), 10f))
						{
							if (func_39(1))
							{
								func_40(64);
							}
							func_15(8388608);
						}
					}
					func_11(0);
					if (func_42(fVar0, 0, 0))
					{
						func_28();
						func_9(7);
					}
					else if (func_16(4096))
					{
						func_43();
					}
				}
				wait(0);
				default:
					break;
		}
	}
}

void func_1(int iParam0, var uParam1, var uParam2)
{
	if (Local_26.f_46.f_106 != 0)
	{
		if (_0x1ff441d7954f8709(Local_26.f_46.f_106))
		{
			_0xd2b9c78537ed5759(Local_26.f_46.f_106);
		}
	}
	func_20(&(Local_26.f_46));
	Global_1914319->f_17371 = 0;
	if (func_16(1) || func_16(4096))
	{
		func_44(150, 1);
		func_45(&(Local_26.f_46));
	}
	if (func_32(Local_26.f_46, 0, 0))
	{
		if (iParam0 != -1 && func_46(iParam0, 1))
		{
			func_47(iParam0, 0, 1, 0, 0);
		}
		func_48(Local_26.f_46, 1);
		set_ped_config_flag(Local_26.f_46, 315, false);
	}
	if (func_32(Local_26.f_44, 0, 0))
	{
		if (func_16(32768))
		{
			func_49(&(Local_26.f_44), 1, 0, 1);
		}
	}
	func_11(0);
	Global_1914319->f_17371 = 0;
	if (func_50(Local_26.f_46.f_66))
	{
		if (func_51(Local_26.f_46.f_66, 1024))
		{
			func_52(Local_26.f_46.f_66, 0);
		}
	}
	if (_does_scenario_point_exist(Local_26.f_46.f_5))
	{
		_delete_scenario_point(Local_26.f_46.f_5);
	}
	if (_does_volume_exist(Local_26.f_46.f_105))
	{
		_0x74c2b3dc0b294102(Local_26.f_46.f_105);
	}
	func_22(Local_26.f_46.f_7[0], &(Local_26.f_46.f_29));
	release_script_audio_bank();
	iVar0 = get_id_of_this_thread();
	iVar1 = iVar0;
	terminate_this_thread();
}

bool func_2()
{
	if ((Local_26.f_43 + 1 % 2) == 1)
	{
		if (func_53(Local_26.f_1, -1))
		{
			if (_does_volume_exist(Local_26.f_46.f_105))
			{
				if (get_distance_between_coords(Global_36, _0xf70f00013a62f866(Local_26.f_46.f_105), false) >= 20f)
				{
					return true;
				}
			}
			else if (does_entity_exist(Local_26.f_46))
			{
				if (func_54(Local_26.f_46, Global_36, 0) >= 20f)
				{
					return true;
				}
			}
		}
	}
	if (Local_26.f_3 > 0)
	{
		if (!_does_volume_exist(Local_26.f_46.f_105) && !does_entity_exist(Local_26.f_46))
		{
			return true;
		}
	}
	return false;
}

void func_3(float fParam0)
{
	func_55();
	if (func_56(&(Local_26.f_46)))
	{
		if (func_39(1))
		{
			func_40(2048);
		}
	}
	if (func_57())
	{
		if (func_32(Local_26.f_46, 0, 1))
		{
			if (func_58())
			{
			}
			*fParam0 = func_54(Local_26.f_46, Global_36, 1);
		}
		if (!func_35(&(Local_26.f_46), 512))
		{
			if (func_59())
			{
				if (func_35(&(Local_26.f_46), 32))
				{
					fVar0 = 3f;
				}
				else if (func_35(&(Local_26.f_46), 16))
				{
					fVar0 = 15f;
				}
				else if (func_35(&(Local_26.f_46), 4096))
				{
					fVar0 = 26f;
				}
				else
				{
					fVar0 = 29f;
				}
				if (func_60(&(Local_26.f_46), &(Local_26.f_40), fVar0, Local_26.f_46.f_66, Local_26.f_45, &(Local_26.f_44)))
				{
				}
			}
		}
		else
		{
			func_61(&(Local_26.f_46), Local_26.f_44);
		}
		if (Local_26.f_3 <= 6)
		{
			if (func_62())
			{
				func_22(Local_26.f_46.f_7[0], &(Local_26.f_46.f_29));
				func_28();
				if (func_42(*fParam0, 0, 1f))
				{
					if (!func_16(1))
					{
						func_26(1, 1);
					}
					func_9(7);
				}
			}
			if (!func_35(&(Local_26.f_46), 4096) && func_63(&(Local_26.f_46), 0, 1))
			{
				func_36(&(Local_26.f_46), 14f, 30f, 1);
				func_64(&(Local_26.f_46));
				if (!func_16(512))
				{
					func_65(1);
				}
				func_37(&(Local_26.f_46), 4096);
			}
		}
	}
	func_66();
}

void func_4(var uParam0)
{
	if (func_35(uParam0, 1048576))
	{
		return;
	}
	if (func_35(uParam0, 4096) || func_35(uParam0, 16))
	{
		if (Global_1935630->f_13)
		{
			func_37(uParam0, 1048576);
		}
	}
}

void func_5(var uParam0)
{
	if (!_does_volume_exist(uParam0->f_105))
	{
		return;
	}
	if (!is_entity_in_volume(Global_35, uParam0->f_105, true, 0))
	{
		return;
	}
	iVar0 = func_67(1);
	if (uParam0->f_99 < 0)
	{
		uParam0->f_99 = iVar0;
	}
	if (iVar0 > uParam0->f_99)
	{
		iVar1 = (iVar0 - uParam0->f_99);
		if (func_68(0))
		{
		}
		else
		{
			func_70(func_69(-985869509, 1776733566), iVar1);
		}
		uParam0->f_99 = iVar0;
	}
}

void func_6(var uParam0)
{
	if (uParam0->f_68.f_6)
	{
		return;
	}
	if (func_71(&(uParam0->f_68.f_3)))
	{
		if (func_72(player_id(), 1, 1, 0))
		{
			func_73(&(uParam0->f_68.f_3));
		}
	}
	if (func_41(&(uParam0->f_68.f_3), uParam0->f_68.f_2) && func_58())
	{
		func_74(uParam0, uParam0->f_68, 0, uParam0->f_68.f_1, 1, 0);
		uParam0->f_68.f_6 = 1;
	}
}

bool func_7(var uParam0)
{
	if (func_53(Local_26.f_1, -1) && !func_75(*uParam0))
	{
		return false;
	}
	Local_26.f_46.f_66 = uParam0->f_2;
	Local_26.f_1 = uParam0->f_1;
	Local_26.f_46.f_105 = Global_1914319->f_3[uParam0->f_1]->f_25;
	if (!_does_volume_exist(Local_26.f_46.f_105))
	{
	}
	iVar0 = get_interior_at_coords(Global_1914319->f_3[uParam0->f_1]->f_11);
	if (is_interior_ready(iVar0))
	{
		pin_interior_in_memory(iVar0);
	}
	_0xed9582b3da8f02b4(2);
	if (_0x5e420ff293ee5472())
	{
		if (!func_32(Local_26.f_46, 0, 1))
		{
			Local_26.f_46 = func_76(*uParam0);
			if (!func_32(Local_26.f_46, 0, 1) && func_53(Local_26.f_1, -1))
			{
				return false;
			}
			func_77();
		}
		Local_26.f_45 = func_78(Local_26.f_46.f_66);
		func_79(Local_26.f_45);
		return true;
	}
	return false;
}

bool func_8()
{
	request_model(1477581656, false);
	func_80(&(Local_26.f_46));
	if (does_entity_exist(Local_26.f_46))
	{
		_request_ped_emotional_preset(Local_26.f_46, "TaskIntimidated_OnFoot");
	}
	return true;
}

void func_9(int iParam0)
{
	Local_26.f_3 = iParam0;
}

bool func_10()
{
	if (!request_script_audio_bank("ROBBERIES"))
	{
		return true;
	}
	if (!has_model_loaded(1477581656))
	{
		return false;
	}
	if (!func_81(&(Local_26.f_46)))
	{
		return false;
	}
	func_82(&(Local_26.f_46));
	return true;
}

void func_11(bool bParam0)
{
	if (bParam0)
	{
		if (!is_scenario_type_enabled("PROP_PLAYER_CASH_REGISTER"))
		{
			set_scenario_type_enabled("PROP_PLAYER_CASH_REGISTER", true);
		}
	}
	else if (is_scenario_type_enabled("PROP_PLAYER_CASH_REGISTER"))
	{
		set_scenario_type_enabled("PROP_PLAYER_CASH_REGISTER", false);
	}
}

void func_12(var uParam0)
{
	if (func_83(uParam0))
	{
		func_84(499, 0);
	}
}

void func_13(var uParam0)
{
	if (uParam0->f_65 == 2)
	{
		iVar0 = func_85(uParam0);
		if (does_entity_exist(iVar0))
		{
			func_86(uParam0);
			return;
		}
	}
	switch (uParam0->f_65)
	{
		case 0:
			iVar1 = func_87(uParam0);
			iVar2 = get_entity_model(iVar1);
			uParam0->f_106 = _0x6f3068258a499e52(iVar2, uParam0->f_79, 7);
			if (uParam0->f_106 != 0)
			{
				uParam0->f_65 = 1;
			}
			break;
		case 1:
			if (_0x1ff441d7954f8709(uParam0->f_106))
			{
				func_86(uParam0);
				if (func_35(uParam0, 33554432))
				{
					uParam0->f_65 = 2;
				}
			}
			break;
		case 2:
			break;
	}
}

bool func_14(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_88(uParam0->f_66, 1, 0))
		{
			return true;
		}
	}
	return false;
}

void func_15(int iParam0)
{
	Local_26.f_2 = (Local_26.f_2 || iParam0);
}

bool func_16(int iParam0)
{
	return (Local_26.f_2 && iParam0) != 0;
}

bool func_17()
{
	if (func_89() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_18(int iParam0, bool bParam1)
{
	return func_90(iParam0, Global_1894899->f_2, bParam1);
}

void func_19(var uParam0)
{
	if (func_35(uParam0, 131072))
	{
		return;
	}
	if (!get_ped_config_flag(Global_35, 141, true))
	{
		set_ped_config_flag(Global_35, 141, true);
	}
	if (!get_ped_config_flag(Global_35, 308, true))
	{
		set_ped_config_flag(Global_35, 308, true);
	}
	func_37(uParam0, 131072);
}

void func_20(var uParam0)
{
	if (!func_35(uParam0, 131072))
	{
		return;
	}
	if (get_ped_config_flag(Global_35, 141, true))
	{
		set_ped_config_flag(Global_35, 141, false);
	}
	if (get_ped_config_flag(Global_35, 308, true))
	{
		set_ped_config_flag(Global_35, 308, false);
	}
	func_91(uParam0, 131072);
}

void func_21(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_22(int* iParam0, var uParam1)
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
	func_92(iParam0, uParam1, 1);
	func_93(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

void func_23(float fParam0)
{
	func_94(fParam0);
}

bool func_24()
{
	if (is_screen_faded_out())
	{
		return false;
	}
	if (Global_1879534->f_1)
	{
		return false;
	}
	if (func_35(&(Local_26.f_46), 2097152))
	{
		return true;
	}
	if (does_entity_exist(Local_26.f_46))
	{
		if (!func_32(Local_26.f_46, 0, 1))
		{
			if (has_entity_been_damaged_by_entity(Local_26.f_46, Global_35, 1, 1))
			{
				return true;
			}
			if (_is_ped_hogtied(Local_26.f_46))
			{
				return true;
			}
		}
	}
	return false;
}

int func_25(var uParam0)
{
	iVar0 = func_95(uParam0->f_66);
	if (iVar0 == 6 || uParam0->f_66 == 82)
	{
		if (func_96() == 105 && func_97())
		{
			return 0;
		}
		else if (!uParam0->f_102)
		{
			uParam0->f_102 = 1;
		}
	}
	if (uParam0->f_102)
	{
		if ((func_38(0f, 1, *uParam0, 1) && !is_ped_active_in_scenario(*uParam0, 1)) && is_ped_facing_ped(*uParam0, Global_35, 45f))
		{
			return 1;
		}
	}
	return 0;
}

void func_26(bool bParam0, bool bParam1)
{
	if (!func_16(2048) && !is_ped_dead_or_dying(Local_26.f_46, true))
	{
	}
	if (!func_16(512))
	{
		func_65(bParam0);
	}
	if (bParam1)
	{
		if (func_98(Local_26.f_6.f_16))
		{
			func_99();
		}
	}
	set_ped_config_flag(Local_26.f_46, 235, true);
	set_ped_config_flag(Local_26.f_46, 234, true);
	func_100(Local_26.f_46, Global_36, 5, 0, 3);
	_0xc163dac52ac975d3(Local_26.f_46, 32);
	if (!bParam0)
	{
		func_25(&(Local_26.f_46));
		func_101(&(Local_26.f_46), 0, 0, 0, 0);
	}
	func_102(Local_26.f_46);
	func_103(&(Local_26.f_34), 1);
	func_15(1);
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_35(uParam0, 262144))
		{
			func_37(uParam0, 262144);
		}
	}
	else if (func_35(uParam0, 262144))
	{
		func_91(uParam0, 262144);
	}
}

void func_28()
{
	if (func_32(Local_26.f_46, 0, 1))
	{
		if (!func_16(2048))
		{
			func_104(Local_26.f_46, 1, 0, 0, 1, 0);
			func_15(2048);
		}
		if (!func_16(1048576))
		{
			func_105();
			func_52(Local_26.f_46.f_66, 1);
			func_106(&(Local_26.f_46), Local_26.f_1, Local_26, Local_26.f_46.f_105);
			func_15(1048576);
		}
	}
}

void func_29(int iParam0)
{
	Local_26.f_4 = iParam0;
}

void func_30(bool bParam0)
{
	if (bParam0)
	{
		if (!is_scenario_type_enabled("PROP_PLAYER_ROB_CASH_REGISTER"))
		{
			set_scenario_type_enabled("PROP_PLAYER_ROB_CASH_REGISTER", true);
		}
	}
	else if (is_scenario_type_enabled("PROP_PLAYER_ROB_CASH_REGISTER"))
	{
		set_scenario_type_enabled("PROP_PLAYER_ROB_CASH_REGISTER", false);
	}
}

bool func_31()
{
	if (!func_32(Local_26.f_46, 0, 1))
	{
		return false;
	}
	switch (Local_26.f_5)
	{
		case 0:
			if (func_107(0))
			{
				if (func_38(-3f, 1, 0, 0))
				{
					if (func_108(&(Local_26.f_46), Local_26.f_1))
					{
						func_109(&(Local_26.f_46));
						func_110(3);
					}
					else
					{
						func_111(&(Local_26.f_46));
						task_turn_ped_to_face_entity(Local_26.f_46, Global_35, -1, -1082130432, -1f, -1f);
						func_110(1);
					}
				}
			}
			break;
		case 1:
			if (func_107(0))
			{
				if (func_38(-1f, 1, 0, 0))
				{
					func_112(&(Local_26.f_46));
					func_110(2);
				}
			}
			break;
		case 2:
			if (func_38(-1f, 1, 0, 0) || func_113(Local_26.f_46, 1))
			{
				func_114(&(Local_26.f_46));
				func_115(&(Local_26.f_46), &Local_26, Local_26.f_46.f_105, 379542007);
				func_110(4);
			}
			break;
		case 3:
			if (func_38(-4.5f, 1, 0, 0))
			{
				if (func_116(&(Local_26.f_46)))
				{
					func_15(16);
					func_110(4);
				}
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_32(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_117(iParam0, iParam1);
}

bool func_33(float fParam0)
{
	if (!func_35(&(Local_26.f_46), 16777216))
	{
		if (_0x285d36c5c72b0569(Global_35) <= 1f)
		{
			func_36(&(Local_26.f_46), 35f, 1f, 1);
			func_37(&(Local_26.f_46), 16777216);
		}
	}
	if (!func_32(Local_26.f_46, 0, 1))
	{
		if (Local_26.f_4 != 7)
		{
			if (Local_26.f_4 < 9)
			{
				if (Local_26.f_4 < 7)
				{
					if (does_entity_exist(&(Local_26.f_46.f_2[0])))
					{
						delete_object(Local_26.f_46.f_2[0]);
					}
					if (does_entity_exist(&(Local_26.f_46.f_2[1])))
					{
						delete_object(Local_26.f_46.f_2[1]);
					}
					func_11(1);
					func_30(0);
				}
				else
				{
					func_11(0);
					func_30(1);
				}
				func_29(9);
			}
			return false;
		}
	}
	if (!func_35(&(Local_26.f_46), 4096))
	{
		iVar0 = func_118(&(Local_26.f_46), Local_26.f_46.f_105, 0, 0, 0.5f, 0, 1109393408);
		if (Local_26.f_155 == -1)
		{
			Local_26.f_155 = iVar0;
		}
	}
	if (!func_16(2048))
	{
		if ((func_119(Local_26.f_46, -982327190) && Local_26.f_4 >= 8) && func_120(Local_26.f_46, &(Local_26.f_46.f_97[0]), "CLERK", 0, 0, 1, 0))
		{
			func_27(&(Local_26.f_46), 0);
			_0x58f7db5bd8fa2288(Local_26.f_46);
			task_turn_ped_to_face_entity(Local_26.f_46, Global_35, -1, -1082130432, -1f, -1f);
		}
	}
	if (!func_16(1048576))
	{
		if (!func_35(&(Local_26.f_46), 8388608))
		{
			if (func_35(&(Local_26.f_46), 4194304))
			{
				if (func_121(&(Local_26.f_46)))
				{
					_0xaab050da48b57978(Local_26.f_46, "TaskIntimidated_OnFoot", Global_35, -1, 4);
					func_37(&(Local_26.f_46), 8388608);
				}
			}
		}
		if (func_122(fParam0) || func_25(&(Local_26.f_46)))
		{
			func_27(&(Local_26.f_46), 0);
			func_28();
			if (Local_26.f_4 < 9)
			{
				if (Local_26.f_4 < 7)
				{
					if (does_entity_exist(&(Local_26.f_46.f_2[0])))
					{
						delete_object(Local_26.f_46.f_2[0]);
					}
					if (does_entity_exist(&(Local_26.f_46.f_2[1])))
					{
						delete_object(Local_26.f_46.f_2[1]);
					}
					func_11(1);
					func_30(0);
				}
				else
				{
					func_11(0);
					func_30(1);
				}
				func_29(9);
			}
		}
	}
	func_123(&(Local_26.f_46));
	if (Local_26.f_46.f_102 && Local_26.f_4 < 9)
	{
		return false;
	}
	switch (Local_26.f_4)
	{
		case 0:
			if (func_124(&(Local_26.f_46), Local_26.f_155))
			{
				if (!_0x88ad6cc10d8d35b2(Local_26.f_46) || !is_entity_a_mission_entity(Local_26.f_46))
				{
					set_entity_as_mission_entity(Local_26.f_46, true, true);
				}
				func_40(16);
				func_34(&(Local_26.f_34));
				func_29(5);
			}
			else if (func_41(&(Local_26.f_34), 3f) && func_38(0, 1, Global_35, 1))
			{
				func_40(16);
				func_34(&(Local_26.f_34));
				func_29(1);
			}
			break;
		case 1:
			if (func_124(&(Local_26.f_46), Local_26.f_155))
			{
				if (!_0x88ad6cc10d8d35b2(Local_26.f_46))
				{
					set_entity_as_mission_entity(Local_26.f_46, true, true);
				}
				func_34(&(Local_26.f_34));
				func_29(5);
			}
			else if (func_41(&(Local_26.f_34), 6f) && func_125(Local_26.f_46, 1050253722, 1060320051, 0, 1061158912))
			{
				func_34(&(Local_26.f_34));
				func_40(32);
				func_29(2);
			}
			break;
		case 2:
			if (func_124(&(Local_26.f_46), Local_26.f_155))
			{
				if (!_0x88ad6cc10d8d35b2(Local_26.f_46))
				{
					set_entity_as_mission_entity(Local_26.f_46, true, true);
				}
				func_34(&(Local_26.f_34));
				func_29(5);
			}
			else if ((func_41(&(Local_26.f_34), 7f) && func_125(Local_26.f_46, 1050253722, 1060320051, 0, 1061158912)) && func_126(Local_26.f_46))
			{
				func_34(&(Local_26.f_34));
				func_40(1048576);
				func_29(3);
			}
			else
			{
				func_29(3);
			}
			break;
		case 3:
			if (func_124(&(Local_26.f_46), Local_26.f_155))
			{
				if (!_0x88ad6cc10d8d35b2(Local_26.f_46))
				{
					set_entity_as_mission_entity(Local_26.f_46, true, true);
				}
				func_34(&(Local_26.f_34));
				func_29(5);
			}
			else if (func_41(&(Local_26.f_34), 15f))
			{
				func_34(&(Local_26.f_34));
				func_40(4194304);
				func_29(4);
			}
			break;
		case 4:
			func_28();
			break;
		case 5:
			if (func_41(&(Local_26.f_34), 2.25f))
			{
				if (func_107(0))
				{
					if (func_127())
					{
						func_15(2);
					}
					if (!func_16(2))
					{
						func_27(&(Local_26.f_46), 1);
						if (Local_26.f_46.f_90 < 0f)
						{
							Local_26.f_46.f_90 = func_128();
						}
						func_37(&(Local_26.f_46), 4194304);
						func_11(0);
						task_follow_nav_mesh_to_coord(Local_26.f_46, Local_26.f_46.f_75, 1f, 10000, 0.1f, 0, Local_26.f_46.f_78);
						func_29(6);
					}
					else
					{
						if (does_entity_exist(&(Local_26.f_46.f_2[0])))
						{
							delete_object(Local_26.f_46.f_2[0]);
						}
						if (does_entity_exist(&(Local_26.f_46.f_2[1])))
						{
							delete_object(Local_26.f_46.f_2[1]);
						}
						if (!func_119(Local_26.f_46, -875674219))
						{
							task_turn_ped_to_face_entity(Local_26.f_46, Global_35, -1, -1082130432, -1f, -1f);
						}
						if (func_39(1))
						{
							if (func_38(0f, 1, Local_26.f_46, 1) && func_38(0f, 1, Global_35, 1))
							{
								func_40(512);
								func_11(1);
								func_30(0);
								func_29(9);
							}
						}
						else
						{
							func_11(1);
							func_30(0);
							func_29(9);
						}
					}
				}
			}
			break;
		case 6:
			if (func_107(0))
			{
				_0xdf7b5144e25cd3fe(&(Local_26.f_46.f_97[0]), "pblExitB");
				if (!func_32(Local_26.f_46, 0, 1))
				{
					func_11(1);
					func_30(0);
					func_29(10);
					Jump @2340; //curOff = 1548
				}
				if (!func_16(33554432))
				{
					if (!func_16(64))
					{
						if (((func_39(1) && !func_16(2048)) && func_38(0f, 1, Local_26.f_46, 1)) && func_38(0f, 1, Global_35, 1))
						{
							func_40(128);
							func_15(33554432);
						}
					}
				}
				if (is_entity_at_coord(Local_26.f_46, Local_26.f_46.f_75, 0.3f, 0.3f, 5f, false, true, 0))
				{
					if (!func_119(Local_26.f_46, 713668775))
					{
						if (!func_16(67108864))
						{
							task_stand_still(Local_26.f_46, -1);
							func_15(67108864);
						}
						if (func_129(&(Local_26.f_46)))
						{
							func_29(7);
						}
					}
				}
				else if (!func_119(Local_26.f_46, 713668775) && !is_ped_ragdoll(Local_26.f_46))
				{
					if (Local_26.f_46.f_86 < 0f)
					{
						Local_26.f_46.f_86 = func_128();
					}
					if ((func_128() - Local_26.f_46.f_86) >= 3f)
					{
						if (is_ped_using_any_scenario(Local_26.f_46))
						{
							func_100(Local_26.f_46, Global_36, 5, 1, 1);
						}
					}
					func_29(5);
				}
			}
			break;
		case 7:
			func_11(0);
			if (func_107(0) && func_39(1))
			{
				func_130();
			}
			if (func_131(&(Local_26.f_46)))
			{
				if (func_132(&(Local_26.f_46), 0))
				{
					func_133(&(Local_26.f_46));
					func_29(8);
				}
				else if (!func_32(Local_26.f_46, 0, 1))
				{
					if (!func_134())
					{
						func_11(1);
						func_29(10);
					}
				}
			}
			break;
		case 8:
			if (!func_119(Local_26.f_46, -875674219))
			{
				if (func_120(Local_26.f_46, &(Local_26.f_46.f_97[0]), "CLERK", 0, 0, 1, 0))
				{
					func_27(&(Local_26.f_46), 0);
					_0x58f7db5bd8fa2288(Local_26.f_46);
					task_turn_ped_to_face_entity(Local_26.f_46, Global_35, -1, -1082130432, -1f, -1f);
				}
			}
			else
			{
				if (func_16(262144))
				{
					set_ped_config_flag(Global_35, 13, false);
				}
				func_11(0);
				func_34(&(Local_26.f_34));
				func_29(10);
			}
			break;
		case 9:
			if (func_41(&(Local_26.f_34), 4f))
			{
				if (func_107(0) && !func_16(2048))
				{
					func_34(&(Local_26.f_34));
					func_29(10);
				}
			}
			break;
		case 10:
			if (func_32(Global_35, 0, 1))
			{
				if (func_16(4096))
				{
					func_64(&(Local_26.f_46));
					func_29(11);
				}
				else if (!func_16(2097152) && !func_16(1048576))
				{
					if (!func_135(Local_26.f_46))
					{
						if (func_41(&(Local_26.f_34), 8f) && !func_136(&(Local_26.f_46), 0))
						{
							if (func_39(1))
							{
								func_40(524288);
								func_34(&(Local_26.f_34));
								func_15(2097152);
							}
						}
					}
				}
			}
			break;
		case 11:
			if (func_32(Global_35, 0, 1))
			{
				if (!func_136(&(Local_26.f_46), 0))
				{
					if (!is_player_control_on(get_player_index()))
					{
						set_player_control(get_player_index(), true, 0, false);
					}
					func_102(Local_26.f_46);
					return true;
				}
			}
			break;
	}
	return false;
}

void func_34(var uParam0)
{
	func_137(uParam0, 0f);
}

bool func_35(var uParam0, int iParam1)
{
	return (uParam0->f_67 && iParam1) != 0;
}

void func_36(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_72(player_id(), 1, 1, 0))
	{
		func_73(&(uParam0->f_68.f_3));
		return;
	}
	uParam0->f_68 = fParam1;
	uParam0->f_68.f_2 = fParam2;
	uParam0->f_68.f_1 = iParam3;
	func_34(&(uParam0->f_68.f_3));
}

void func_37(var uParam0, int iParam1)
{
	uParam0->f_67 = (uParam0->f_67 || iParam1);
}

bool func_38(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_138(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_139(fParam0))
	{
		return false;
	}
	return true;
}

bool func_39(bool bParam0)
{
	return func_140(Local_26.f_46, bParam0);
}

void func_40(int iParam0)
{
	if (Global_1914319->f_18903 != iParam0)
	{
		Global_1914319->f_18903 = iParam0;
	}
}

bool func_41(var uParam0, float fParam1)
{
	if (!func_71(uParam0))
	{
		return false;
	}
	if (func_141(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_42(float fParam0, bool bParam1, float fParam2)
{
	if (fParam2 > 0f)
	{
		if (!func_71(&(Local_26.f_37)))
		{
			func_103(&(Local_26.f_37), 0);
		}
		if (!func_41(&(Local_26.f_37), fParam2))
		{
			return false;
		}
	}
	if (bParam1 || func_142(&(Local_26.f_46), fParam0))
	{
		func_143(Local_26.f_46, 1);
		if (func_104(Local_26.f_46, 1, 0, Local_26.f_46.f_101, 1, 0))
		{
			func_15(2048);
			return true;
		}
	}
	return false;
}

void func_43()
{
	if (!func_16(1024))
	{
		if (!is_entity_in_volume(Global_35, Local_26.f_46.f_105, false, 0) && is_entity_in_volume(Local_26.f_46, Local_26.f_46.f_105, true, 0))
		{
			func_144();
			func_15(1024);
		}
	}
}

void func_44(int iParam0, int iParam1)
{
	if (func_89() != -1)
	{
		return;
	}
	if (func_145(&uVar0))
	{
		return;
	}
	iVar1 = iParam1;
	if (func_146())
	{
		iVar1 = 0;
	}
	func_147(iParam0, iVar1);
}

void func_45(var uParam0)
{
	if ((!func_35(uParam0, 4096) && !func_35(uParam0, 16)) && !func_35(uParam0, 8192))
	{
		return;
	}
	iVar0 = func_148(uParam0->f_66);
	if (iVar0 != func_149())
	{
		_0xcc3edc5614b03f61(iVar0);
	}
}

bool func_46(int iParam0, bool bParam1)
{
	if (func_89() != -1)
	{
		return false;
	}
	if (!func_75(iParam0))
	{
		return false;
	}
	if (!func_150(iParam0) && bParam1)
	{
		return false;
	}
	return func_151(iParam0, 1);
}

void func_47(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_75(iParam0))
	{
		return;
	}
	if (!func_151(iParam0, 1))
	{
		return;
	}
	if (!func_151(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_150(iParam0)) && func_152(iParam0))
	{
		return;
	}
	func_153(iParam0, 1);
	func_154(iParam0);
	if (func_156(func_155(iParam0)))
	{
		iVar0 = func_157(iParam0);
		if (!_0x800df3fc913355f3(iVar0))
		{
			return;
		}
		_0xbb68908cd11aebdc(iVar0);
		_0xb65e7f733956cf25(iVar0);
		if (bParam2 && !_0xeb98b38ca60742d7(iVar0))
		{
			_0x631cd2d77fdc0316(iVar0);
		}
		iVar1 = _0x31c70a716cae1fee(iVar0);
		if (!is_ped_injured(iVar1))
		{
			set_ped_config_flag(iVar1, 171, false);
		}
		if (bParam1)
		{
			_0x7b204f88f6c3d287(iVar0);
		}
		func_153(iParam0, 16);
	}
	if (func_151(iParam0, 128) && !bParam3)
	{
		func_158(iParam0, 0);
	}
}

void func_48(int iParam0, bool bParam1)
{
	if (!func_32(iParam0, 0, 1))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(iParam0, 130, false);
		set_ped_config_flag(iParam0, 315, false);
		set_ped_config_flag(iParam0, 178, true);
	}
	else
	{
		set_ped_config_flag(iParam0, 130, true);
		set_ped_config_flag(iParam0, 315, true);
		set_ped_config_flag(iParam0, 178, false);
	}
}

void func_49(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

bool func_50(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_51(int iParam0, int iParam1)
{
	if (!func_50(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

void func_52(int iParam0, bool bParam1)
{
	if (!func_50(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_51(iParam0, 1024))
		{
			func_159(iParam0, 1024);
			_0x9b4e793b1cb6550a();
		}
	}
	else if (func_51(iParam0, 1024))
	{
		func_160(iParam0, 1024);
		_0x9b4e793b1cb6550a();
	}
	func_161(iParam0);
}

bool func_53(int iParam0, int iParam1)
{
	iVar0 = 1;
	if (func_89() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = func_162(func_96(), iParam0);
		}
		iVar1 = get_frame_count();
		if (Global_1914319->f_3[iParam0]->f_444 >= iVar1)
		{
			return Global_1914319->f_3[iParam0]->f_445;
		}
		iVar0 = (func_163(iParam1) || func_165(func_164(iParam0)));
		Global_1914319->f_3[iParam0]->f_444 = iVar1;
		Global_1914319->f_3[iParam0]->f_445 = iVar0;
	}
	return iVar0;
}

float func_54(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_55()
{
	Local_26.f_43++;
	if (Local_26.f_43 >= 30)
	{
		Local_26.f_43 = 0;
	}
}

bool func_56(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		if (get_event_at_index(0, iVar0) == -1730772208)
		{
			bVar1 = func_166(uParam0, iVar0);
			if (bVar1)
			{
				func_37(uParam0, 8192);
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_57()
{
	return Local_26.f_3 >= 3;
}

bool func_58()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

bool func_59()
{
	if (func_167(Local_26.f_1))
	{
		if (func_72(player_id(), 1, 1, 0))
		{
			return false;
		}
		if (Local_26.f_3 == 2 || func_16(524288))
		{
			return true;
		}
		if (does_entity_exist(Local_26.f_46))
		{
			if (!func_32(Local_26.f_46, 0, 1))
			{
				if (has_entity_been_damaged_by_entity(Local_26.f_46, Global_35, 1, 1) || _is_ped_hogtied(Local_26.f_46))
				{
					return true;
				}
			}
		}
		if (func_35(&(Local_26.f_46), 4096))
		{
			return true;
		}
		if (func_168(&(Local_26.f_46)))
		{
			return true;
		}
	}
	return false;
}

bool func_60(var uParam0, var uParam1, float fParam2, int iParam3, int iParam4, var uParam5)
{
	iVar0 = func_96();
	switch (iVar0)
	{
		case 92:
		case 120:
			return false;
	}
	if (!func_35(uParam0, 512))
	{
		if (!func_71(uParam1))
		{
			func_103(uParam1, 0);
			return false;
		}
		if (func_41(uParam1, fParam2) && func_167(func_95(iParam3)))
		{
			func_79(iParam4);
			vVar1 = { func_169(iParam3) };
			if (!has_model_loaded(iParam4))
			{
				request_model(iParam4, false);
				return false;
			}
			if (func_167(func_95(iParam3)) || would_entity_be_occluded(iParam4, vVar1, true))
			{
				*uParam5 = func_170(iParam4, vVar1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			if (func_32(*uParam5, 0, 1))
			{
				if (!is_entity_a_mission_entity(*uParam5))
				{
					set_entity_as_mission_entity(*uParam5, true, true);
				}
				set_blocking_of_non_temporary_events(*uParam5, true);
				set_ped_config_flag(*uParam5, 146, false);
				set_ped_config_flag(*uParam5, 148, false);
				set_ped_config_flag(*uParam5, 113, true);
				func_37(uParam0, 512);
				return true;
			}
		}
	}
	else if (func_32(*uParam5, 0, 1))
	{
		return true;
	}
	return false;
}

void func_61(var uParam0, int iParam1)
{
	iVar0 = func_96();
	switch (iVar0)
	{
		case 92:
		case 120:
			return;
	}
	if (func_35(uParam0, 512) && !func_35(uParam0, 1024))
	{
		if (!func_32(iParam1, 0, 1))
		{
			return;
		}
		iVar1 = func_95(uParam0->f_66);
		if (func_72(player_id(), 0, 1, 0))
		{
			_task_smart_flee_style_ped(iParam1, Global_35, 4, 0, -1082130432, -1, 0);
			func_49(&iParam1, 1, 1, 0);
			func_37(uParam0, 1024);
		}
		if (is_entity_in_volume(iParam1, Global_1914319->f_3[iVar1]->f_25, true, 0) || func_171(iParam1, Global_35, 1, 12f, 0))
		{
			bVar2 = false;
			if (does_entity_exist(*uParam0) && is_entity_dead(*uParam0))
			{
				bVar2 = true;
			}
			if (func_167(iVar1))
			{
				clear_ped_tasks(iParam1, 1, 0);
				func_104(iParam1, 1, 0, 0, 1, bVar2);
				func_49(&iParam1, 1, 1, 1);
			}
			else
			{
				clear_ped_tasks(iParam1, 1, 0);
				func_104(iParam1, 1, 0, 0, 1, bVar2);
				func_49(&iParam1, 1, 1, 1);
			}
			func_37(uParam0, 1024);
		}
		else if (!is_ped_walking(iParam1) && !is_ped_fleeing(iParam1))
		{
			if (!func_35(uParam0, 2048))
			{
				task_follow_nav_mesh_to_coord(iParam1, func_172(uParam0->f_66), 1.5f, -1, 0.25f, 0, 40000f);
				func_37(uParam0, 2048);
			}
		}
	}
}

bool func_62()
{
	if (func_16(134217728))
	{
		if (func_32(Local_26.f_46, 0, 0))
		{
			if ((func_173(Local_26.f_46, Global_35) || _0x3bdfcf25b58b0415(Local_26.f_46)) || _is_ped_lassoed(Local_26.f_46))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_63(var uParam0, bool bParam1, bool bParam2)
{
	if (func_32(Global_35, 0, 1))
	{
		if (func_174(Global_35, -282082536) || func_174(Global_35, 325463335))
		{
			if (_is_ped_using_scenario_hash(Global_35, -282082536))
			{
				if (does_entity_exist(&(uParam0->f_2[0])))
				{
					delete_object(uParam0->f_2[0]);
				}
				if (does_entity_exist(&(uParam0->f_2[1])))
				{
					delete_object(uParam0->f_2[1]);
				}
			}
			if (bParam2)
			{
				return true;
			}
			else
			{
				return func_136(uParam0, bParam1);
			}
		}
	}
	return false;
}

void func_64(var uParam0)
{
	if (!func_16(4096))
	{
		if (!func_16(1048576))
		{
			if (func_32(*uParam0, 0, 1))
			{
				task_turn_ped_to_face_entity(*uParam0, Global_35, -1, 4f, 0.25f, -1f);
			}
		}
		func_129(&(Local_26.f_46));
		func_15(4096);
	}
}

void func_65(bool bParam0)
{
	if (func_32(Local_26.f_46, 0, 1))
	{
		if (!is_entity_a_mission_entity(Local_26.f_46))
		{
			set_entity_as_mission_entity(Local_26.f_46, true, true);
		}
		if (!get_ped_config_flag(Local_26.f_46, 168, true))
		{
			set_ped_config_flag(Local_26.f_46, 168, true);
			set_ped_config_flag(Local_26.f_46, 113, false);
		}
	}
	if (!bParam0)
	{
		func_48(Local_26.f_46, 0);
		set_blocking_of_non_temporary_events(Local_26.f_46, true);
	}
	else
	{
		set_blocking_of_non_temporary_events(Local_26.f_46, false);
	}
	iVar0 = func_95(Local_26.f_46.f_66);
	func_175(iVar0, Global_35, 1, 10);
	Local_26.f_46.f_99 = func_67(1);
	func_176(Local_26.f_46.f_66);
	func_11(1);
	Global_1914319->f_17371 = 1;
	func_52(Local_26.f_46.f_66, 1);
	func_177(Local_26.f_46.f_66, 1, 0);
	func_178(-1, 0, 0, 0, 0);
	func_179();
	func_180(45, 0, 1);
	func_15(512);
}

void func_66()
{
	if (Local_26.f_3 > 1)
	{
	}
}

int func_67(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_68(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_17370;
	}
	return (Global_1914319->f_17370 || Global_1914319->f_18996.f_1);
}

struct<2> func_69(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_70(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_71(var uParam0)
{
	return func_181(*uParam0, 1);
}

bool func_72(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_182(bParam1, bParam2, bParam3);
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

void func_73(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_74(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	if (func_72(player_id(), 1, 1, 0))
	{
		return;
	}
	iVar0 = func_96();
	switch (iVar0)
	{
		case 92:
		case 120:
			return;
	}
	uVar4[0] = Global_35;
	uVar4[1] = *uParam0;
	if (iParam2 != 0)
	{
		func_183(&iVar1, &uVar4, iVar1, iParam2, 0, 0, 0, -1, 1, 0, 0, 0);
		_0xb56d41a694e42e86(iParam2, 8192, 0, 0, -1, -1, 4);
	}
	else
	{
		func_184(&iVar1, &uVar4, Global_36, 10, iVar1, iParam1, iParam5, 0, 0, -1082130432);
	}
	iVar11 = player_id();
	iVar12 = get_interior_from_entity(Global_35);
	_0xd7494ded50c6ef52(iVar11, -1547772340, iParam3);
	func_185(uParam0, &uVar14);
	iVar7 = 0;
	while (iVar7 < iVar1)
	{
		if (iVar13 >= iParam3)
		{
		}
		else if (func_186(&(iVar1[iVar7]), iVar12))
		{
			func_100(&(iVar1[iVar7]), Global_36, 2, 0, 3);
			clear_ped_tasks(&(iVar1[iVar7]), 1, 0);
			set_ped_config_flag(&(iVar1[iVar7]), 146, false);
			set_ped_config_flag(&(iVar1[iVar7]), 148, false);
			set_ped_config_flag(&(iVar1[iVar7]), 190, bParam4);
			set_ped_config_flag(&(iVar1[iVar7]), 113, true);
			vVar8 = { get_entity_coords(&(iVar1[iVar7]), true, false) };
			_0x018f30d762e62df8(&(iVar1[iVar7]), &uVar14);
			set_ped_keep_task(&(iVar1[iVar7]), true);
			iVar13++;
		}
		iVar7++;
	}
	add_shocking_event_for_entity(-1215290486, Global_35, 10f, 10f, 10f, -1f, -1f, 180f, true, false, -1, -1);
}

bool func_75(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_76(int iParam0)
{
	if (!func_75(iParam0))
	{
		return 0;
	}
	if (!func_151(iParam0, 2))
	{
		return 0;
	}
	if (func_156(func_155(iParam0)))
	{
		return func_187(iParam0);
	}
	return _0xe76687023d8c8505(func_188(iParam0), 0);
}

void func_77()
{
	set_ped_can_be_targetted(Local_26.f_46, true);
	func_189(Local_26.f_46, 1);
	func_190(&(Local_26.f_6));
}

int func_78(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 190080028;
		case 7:
		case 17:
			return -787683245;
		case 19:
			return -439429058;
		case 39:
		case 41:
		case 42:
		case 43:
		case 47:
			return 1809883183;
		case 28:
		case 29:
			return 977834008;
		case 61:
			return 1127589605;
		case 73:
		case 74:
		case 75:
		case 82:
			return -2087759666;
		case 90:
			return 480011144;
		case 95:
			return -813796418;
	}
	return 525529657;
}

bool func_79(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

void func_80(var uParam0)
{
	uParam0->f_97[0] = _create_anim_scene(func_191(0), 0, 0, false, true);
	if (!_is_anim_scene_loaded(&(uParam0->f_97[0]), true, false))
	{
		load_anim_scene(&(uParam0->f_97[0]));
	}
}

bool func_81(var uParam0)
{
	if (!_is_anim_scene_loaded(&(uParam0->f_97[0]), true, false) || !_is_anim_scene_metadata_loaded(&(uParam0->f_97[0]), false))
	{
		return false;
	}
	return true;
}

void func_82(var uParam0)
{
	_0xdf7b5144e25cd3fe(&(uParam0->f_97[0]), "pblExitB");
	sVar0 = func_192(uParam0);
	_0xdf7b5144e25cd3fe(&(uParam0->f_97[0]), sVar0);
}

bool func_83(var uParam0)
{
	if (func_193(499))
	{
		return false;
	}
	if (!Global_20710.f_2400)
	{
		return false;
	}
	if (func_194(80, 0, 1))
	{
		return false;
	}
	iVar1 = func_95(uParam0->f_66);
	if (!func_195(iVar1))
	{
		return false;
	}
	if (func_196(iVar1))
	{
		if (func_197(iVar1, 32768))
		{
			return false;
		}
		return true;
	}
	if (uParam0->f_100 == -1)
	{
		iVar2 = 0;
		uParam0->f_100 = 0;
	}
	else
	{
		iVar2 = uParam0->f_100;
	}
	iVar0 = iVar2;
	while (iVar0 <= 25)
	{
		if (!func_196(iVar0))
		{
			if (func_197(iVar0, 32768))
			{
				func_198(iVar0, 32768);
			}
		}
		uParam0->f_100++;
		return false;
		iVar0++;
	}
	uParam0->f_100 = -1;
	return false;
}

void func_84(int iParam0, bool bParam1)
{
	func_199(iParam0, &iVar0, &iVar1);
	if (!func_200(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_201(iVar0, iVar1);
}

int func_85(var uParam0)
{
	if (uParam0->f_106 != 0)
	{
		if (_0x1ff441d7954f8709(uParam0->f_106))
		{
			uVar0 = _0x4735e2a4bb83d9da(uParam0->f_106);
			return uVar0;
		}
	}
	return 0;
}

void func_86(var uParam0)
{
	if (!func_35(uParam0, 33554432))
	{
		if (_is_anim_scene_loaded(&(uParam0->f_97[0]), true, false) || _is_anim_scene_loading(&(uParam0->f_97[0]), true))
		{
			iVar0 = func_85(uParam0);
			vVar1 = { get_entity_coords(iVar0, true, false) };
			freeze_entity_position(iVar0, true);
			set_anim_scene_origin(&(uParam0->f_97[0]), get_entity_coords(iVar0, true, false), get_entity_rotation(iVar0, 2), 2);
			set_anim_scene_entity(&(uParam0->f_97[0]), "CLERK", *uParam0, 0);
			set_anim_scene_entity(&(uParam0->f_97[0]), "REGISTER", iVar0, 0);
			uParam0->f_75 = { get_offset_from_entity_in_world_coords(iVar0, 0.02f, -0.88f, 0f) };
			uParam0->f_78 = get_entity_heading(iVar0);
			func_202(&(uParam0->f_75), 0f);
			func_37(uParam0, 33554432);
		}
	}
}

int func_87(var uParam0)
{
	uVar2 = 6;
	vVar10 = { get_entity_coords(*uParam0, false, false) };
	func_203(&uVar2, 0);
	uParam0->f_79 = { func_172(uParam0->f_66) };
	if (func_204(uParam0->f_79))
	{
		iVar9 = func_205(&uVar0, &uVar2, 1, vVar10, 4f);
	}
	else
	{
		iVar9 = func_205(&uVar0, &uVar2, 1, uParam0->f_79, 1.5f);
	}
	if (iVar9 <= 0)
	{
		if (!func_35(uParam0, 2))
		{
			func_37(uParam0, 2);
		}
	}
	else
	{
		if (func_35(uParam0, 2))
		{
			func_91(uParam0, 2);
		}
		return &(uVar0[0]);
	}
	return 0;
}

bool func_88(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_50(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	if (bParam1)
	{
		if (func_206(iParam0, 32768))
		{
			iVar0 = 1;
		}
	}
	if (bParam2)
	{
		if (func_206(iParam0, 1024))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_89()
{
	return Global_1572887->f_12;
}

int func_90(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_207(iParam1, &iVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_208(iParam0, iVar0, iVar1, bParam2);
}

void func_91(var uParam0, int iParam1)
{
	uParam0->f_67 = (uParam0->f_67 - (uParam0->f_67 && iParam1));
}

void func_92(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_209(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_210(iParam0, 0);
		}
	}
}

void func_93(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_211((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_209(&((*uParam0)[iVar0]->f_6), 1, 1);
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

void func_94(float fParam0)
{
	if (func_212())
	{
		if (func_213(Local_26.f_46.f_66))
		{
			func_214();
			func_26(0, 1);
			func_30(0);
			func_9(5);
		}
		else
		{
			func_101(&(Local_26.f_46), 0, 0, 0, 0);
			func_9(2);
		}
	}
	else if (func_35(&(Local_26.f_46), 4096) || func_35(&(Local_26.f_46), 8192))
	{
		if (Local_26.f_3 < 5)
		{
			if (func_32(Local_26.f_46, 0, 1))
			{
				if (func_42(fParam0, 1, 3f))
				{
					func_22(Local_26.f_46.f_7[0], &(Local_26.f_46.f_29));
					func_26(0, 0);
					func_28();
					func_9(6);
				}
			}
			else
			{
				func_30(0);
				func_29(11);
				func_9(5);
			}
		}
	}
	if (func_16(16384))
	{
		if (func_42(fParam0, 0, 0))
		{
			func_26(1, 1);
			func_9(7);
		}
	}
}

int func_95(int iParam0)
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

int func_96()
{
	return Global_1894899->f_2;
}

bool func_97()
{
	if (Global_1894899->f_187)
	{
		return true;
	}
	if (func_215(16) && !func_215(21))
	{
		return true;
	}
	return false;
}

bool func_98(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 4:
			return true;
		default:
			break;
	}
	return false;
}

void func_99()
{
	func_40(16);
}

void func_100(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!func_117(iParam0, 0))
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
	if (func_204(vParam1))
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

void func_101(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if ((is_string_null_or_empty(sParam1) || is_string_null_or_empty(sParam2)) || is_string_null_or_empty(sParam3))
	{
		sVar0 = func_216();
		sVar1 = func_217();
		sVar2 = func_218();
	}
	else
	{
		sVar0 = sParam1;
		sVar1 = sParam2;
		sVar2 = sParam3;
	}
	if (!uParam0->f_102 || bParam4)
	{
		if (uParam0->f_90 < 0f)
		{
			uParam0->f_90 = func_128();
		}
		func_37(uParam0, 4194304);
	}
	func_27(uParam0, 1);
	func_219(*uParam0, sVar0, sVar1, sVar2, 1);
	func_37(uParam0, 16384);
}

void func_102(int iParam0)
{
	if (!get_ped_config_flag(iParam0, 315, true))
	{
		_0xe98d55c5983f2509(iParam0);
		func_189(iParam0, 0);
	}
}

void func_103(var uParam0, bool bParam1)
{
	if (bParam1 || !func_71(uParam0))
	{
		func_34(uParam0);
	}
}

bool func_104(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_32(iParam0, 0, 1))
	{
		return false;
	}
	iVar0 = func_96();
	switch (iVar0)
	{
		case 92:
		case 120:
			if (is_ped_fleeing(iParam0) || func_119(iParam0, 518218985))
			{
				return true;
			}
			_0x935cf6e42baf7f4d(iParam0);
			_task_smart_flee_style_ped(iParam0, Global_35, 4, 176128, -1082130432, -1, 0);
			return true;
		default:
			break;
	}
	if (_0x0eaf918f751f27ba(iParam0))
	{
		return true;
	}
	if (bParam2)
	{
		set_blocking_of_non_temporary_events(iParam0, true);
	}
	if (bParam1)
	{
		func_220(1);
		if (bParam4)
		{
		}
		set_ped_config_flag(iParam0, 146, false);
		set_ped_config_flag(iParam0, 148, false);
		set_ped_config_flag(iParam0, 190, true);
		set_ped_config_flag(iParam0, 113, true);
		iVar1 = _0xe9eb79cbf9c0f58a(get_player_index());
		func_221(iParam0, &vVar2);
		if (bParam5)
		{
			vVar2.f_2 = -493957506;
		}
		else if (bParam3)
		{
			vVar2.f_2 = 1343354387;
		}
		else
		{
			vVar2.f_2 = -1547772340;
		}
		_0xd7494ded50c6ef52(player_id(), vVar2.z, iVar1 + 1);
		_0x018f30d762e62df8(iParam0, &vVar2);
		_0x935cf6e42baf7f4d(iParam0);
		set_ped_keep_task(iParam0, true);
		return true;
	}
	return false;
}

void func_105()
{
	if (func_222())
	{
		func_36(&(Local_26.f_46), 25f, 10f, 1);
	}
}

void func_106(var uParam0, var uParam1, int iParam2, int iParam3)
{
	func_22(uParam0->f_7[0], &(uParam0->f_29));
	func_102(*uParam0);
	if (func_223(uParam0))
	{
		func_100(*uParam0, Global_36, 3, 0, 3);
		func_115(uParam0, &iParam2, iParam3, 379542007);
	}
	else
	{
		func_100(*uParam0, Global_36, 5, 0, 3);
		func_40(4194304);
		set_ped_config_flag(*uParam0, 44, false);
		func_104(*uParam0, 1, 0, 0, 1, 0);
		if (!_0x0eaf918f751f27ba(*uParam0))
		{
			_0x935cf6e42baf7f4d(*uParam0);
			_task_smart_flee_style_ped(*uParam0, Global_35, 3, 176128, -1082130432, -1, 0);
		}
	}
}

bool func_107(bool bParam0)
{
	return func_140(Global_35, bParam0);
}

bool func_108(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 7:
		case 11:
			return true;
		case 3:
		case 6:
			return false;
		default:
			break;
	}
	return false;
}

void func_109(var uParam0)
{
	if (func_224())
	{
		sVar0 = "SHOP_CLERK_REOPEN_FAME";
	}
	else
	{
		sVar0 = "SHOP_CLERK_REOPEN";
	}
	func_225(*uParam0, Global_35, sVar0, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
}

void func_110(int iParam0)
{
	Local_26.f_5 = iParam0;
}

void func_111(var uParam0)
{
	if (func_226())
	{
		sVar0 = "SHOP_CLERK_STAYCLOSED_SICK";
	}
	else if (func_224())
	{
		sVar0 = "SHOP_CLERK_STAYCLOSED_FAME";
	}
	else
	{
		sVar0 = "SHOP_CLERK_STAYCLOSED";
	}
	func_225(*uParam0, Global_35, sVar0, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
}

void func_112(var uParam0)
{
	func_225(*uParam0, Global_35, "SHOP_CLERK_STAYCLOSED1", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
}

bool func_113(int iParam0, bool bParam1)
{
	if (func_227(Global_35, 0) == -1569615261)
	{
		return false;
	}
	if (is_control_pressed(0, -128997553))
	{
		disable_control_action(0, -1292666904, false);
	}
	else
	{
		enable_control_action(0, -1292666904, true);
	}
	iVar0 = get_player_index();
	uVar1 = func_228(iParam0);
	if (func_126(iParam0) && !_0x3ee1f7a8c32f24e1(iVar0, &uVar1, false, false))
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, bParam1);
		}
		set_blocking_of_non_temporary_events(iParam0, true);
		return true;
	}
	if (_is_ped_hogtied(iParam0) || _is_ped_lassoed(iParam0))
	{
		func_40(65536);
		return true;
	}
	return false;
}

void func_114(var uParam0)
{
	if (func_226())
	{
		sVar0 = "SHOP_CLERK_STAYCLOSED2_SICK";
	}
	else
	{
		sVar0 = "SHOP_CLERK_STAYCLOSED2";
	}
	func_225(*uParam0, Global_35, sVar0, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
}

void func_115(var uParam0, int* iParam1, int iParam2, int iParam3)
{
	func_229(*uParam0);
	func_230(uParam0, iParam1, iParam2, iParam3);
}

bool func_116(var uParam0)
{
	task_turn_ped_to_face_entity(*uParam0, Global_35, 0, -1082130432, -1f, -1f);
	func_159(uParam0->f_66, 2048);
	func_231(uParam0, 1);
	return true;
}

bool func_117(int iParam0, int iParam1)
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
	if (func_232(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_232(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_232(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_232(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_232(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_232(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_232(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_232(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_118(var uParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, float fParam6)
{
	if (!func_233(uParam0->f_7[0]))
	{
		switch (uParam0->f_64)
		{
			case 0:
				if (!func_68(0))
				{
					if (func_234())
					{
						func_235(uParam0, "PLAYER_HOLDUP_ROB", bParam2);
						func_236(uParam0);
						uParam0->f_64 = 1;
					}
				}
				break;
			case 1:
				if ((func_68(0) || !func_234()) || func_35(uParam0, 128))
				{
					func_237(uParam0, bParam2);
					uParam0->f_64 = 2;
				}
				else
				{
					func_236(uParam0);
				}
				break;
			case 2:
				if (!func_68(0) && func_234())
				{
					func_235(uParam0, "PLAYER_HOLDUP_ROB", bParam2);
					func_236(uParam0);
					func_91(uParam0, 128);
					uParam0->f_64 = 1;
				}
				break;
		}
	}
	iVar2 = 1;
	iVar3 = 2;
	if (func_35(uParam0, 256))
	{
		if (!func_35(uParam0, 67108864) && !bParam5)
		{
			iVar3 = 3;
			func_210(uParam0->f_7[0], 0);
			func_37(uParam0, 67108864);
		}
	}
	iVar0 = func_239(uParam0, uParam0->f_7[0], 30f, &(uParam0->f_29), &iVar2, fParam4, 1, 0, uParam0->f_107, 65792 | func_238(iVar3, 0, 0), iParam1, 0, 2, 0, -1082130432, 1);
	iVar1 = iVar0;
	if (func_233(uParam0->f_7[0]))
	{
		if (!uParam0->f_103)
		{
			if (uParam0->f_7[0]->f_1 == 0)
			{
				func_240(*uParam0, 500);
				func_241(uParam0, uParam0->f_7[0], &(uParam0->f_29), 30f, 65792 | func_238(3, 0, 0), uParam0->f_107, 2, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
				func_102(*uParam0);
				func_242(uParam0, 0, 0);
			}
			else if (uParam0->f_7[0]->f_1 == 1)
			{
				func_240(*uParam0, 500);
				func_102(*uParam0);
				func_242(uParam0, 0, 1);
			}
			func_103(&(uParam0->f_94), 0);
			uParam0->f_103 = 1;
		}
	}
	if (func_41(&(uParam0->f_94), 1f) && !func_41(&(uParam0->f_94), 2f))
	{
		if (!func_119(*uParam0, -875674219))
		{
			if (_0x916b8e075abc8b4e(*uParam0, 1) || !_0x02ebbb3989b7e695(*uParam0))
			{
				func_100(*uParam0, Global_36, 1, 0, 3);
			}
			else
			{
				func_100(*uParam0, Global_36, 5, 0, 3);
			}
			task_turn_ped_to_face_entity(*uParam0, Global_35, -1, -1082130432, -1f, -1f);
		}
	}
	if (uParam0->f_103)
	{
	}
	switch (iVar1)
	{
		case 0:
			if (!bParam3)
			{
				func_36(uParam0, 14f, fParam6, 1);
			}
			add_shocking_event_for_entity(-1215290486, Global_35, 10f, 10f, 10f, -1f, -1f, 180f, true, false, -1, -1);
			func_37(uParam0, 524288);
			func_73(&(uParam0->f_94));
			uParam0->f_103 = 0;
			break;
		case 1:
			func_37(uParam0, 65536);
			func_73(&(uParam0->f_94));
			uParam0->f_103 = 0;
			break;
	}
	return iVar1;
}

bool func_119(int iParam0, int iParam1)
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

bool func_120(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	if (func_243(iParam0, iParam1, sParam2, iParam3, fParam4, bParam5, iParam6 == 0))
	{
		return true;
	}
	return false;
}

bool func_121(var uParam0)
{
	if (((!is_ped_active_in_scenario(*uParam0, 1) && !_0x0c3cb2e600c8977d(*uParam0, 1)) && uParam0->f_90 > 0f) && (func_128() - uParam0->f_90) >= 1f)
	{
		return true;
	}
	return false;
}

int func_122(float fParam0)
{
	if (Local_26.f_4 >= 0 || func_35(&(Local_26.f_46), 4096))
	{
		if (func_142(&(Local_26.f_46), fParam0) || !func_107(0))
		{
			return 1;
		}
	}
	if (func_35(&(Local_26.f_46), 2097152))
	{
		return 1;
	}
	if (!func_107(0))
	{
		return 1;
	}
	if (Local_26.f_4 == 4)
	{
		return 1;
	}
	if ((func_244(&(Local_26.f_46), Local_26.f_6, Local_26.f_6.f_16) || _0x29fce825613fefca(Local_26.f_46, 3000)) || is_ped_ragdoll(Local_26.f_46))
	{
		return 1;
	}
	if (has_entity_been_damaged_by_entity(Local_26.f_46, Global_35, 1, 1))
	{
		return 1;
	}
	return 0;
}

void func_123(var uParam0)
{
	if (func_35(uParam0, 262144))
	{
		set_ped_can_play_gesture_anims(*uParam0, 0, 1);
	}
}

bool func_124(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return true;
	}
	return false;
}

bool func_125(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_245(get_entity_coords(iParam0, true, false), iParam1, iParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_126(int iParam0)
{
	iVar0 = func_227(player_ped_id(), 0);
	if (!is_weapon_valid(iVar0))
	{
		return false;
	}
	if ((_0x705be297eebdb95d(iVar0) || func_246(iVar0)) || (_is_weapon_melee(iVar0) && iVar0 != 2055893578))
	{
		if (func_247(iParam0, 8f, 25f, 1097859072, 0))
		{
			if (!_0x88ad6cc10d8d35b2(iParam0))
			{
				set_ped_config_flag(iParam0, 171, true);
				set_entity_as_mission_entity(iParam0, true, false);
			}
			set_blocking_of_non_temporary_events(iParam0, true);
			return true;
		}
	}
	return false;
}

bool func_127()
{
	return func_248(&(Local_26.f_46), 3f);
}

float func_128()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_129(var uParam0)
{
	if (func_249(uParam0))
	{
		func_11(0);
		func_250(uParam0);
		return true;
	}
	return false;
}

void func_130()
{
	if (!func_16(64))
	{
		if ((func_38(-3.5f, 1, 0, 0) && func_38(0, 1, Global_35, 1)) && func_38(0, 1, Local_26.f_46, 1))
		{
			func_40(131072);
			func_15(64);
		}
	}
}

bool func_131(var uParam0)
{
	sVar0 = func_192(uParam0);
	if (!_does_anim_scene_exist(&(uParam0->f_97[0])))
	{
		return false;
	}
	_0xdf7b5144e25cd3fe(&(uParam0->f_97[0]), sVar0);
	if (_0x23e33cb9f4a3f547(&(uParam0->f_97[0]), sVar0))
	{
		return true;
	}
	return false;
}

bool func_132(var uParam0, bool bParam1)
{
	func_30(1);
	if (func_251(*uParam0, -162746208, "bSwitchToExit", 1, 1067030938, 1))
	{
		if (!func_35(uParam0, 4))
		{
			if (bParam1)
			{
				func_252(uParam0, &uVar0, 1114636288, -1);
			}
			func_37(uParam0, 4);
		}
		if (func_35(uParam0, 16384))
		{
			func_91(uParam0, 16384);
		}
		return true;
	}
	return false;
}

void func_133(var uParam0)
{
	func_253(uParam0);
	sVar0 = func_192(uParam0);
	_set_anim_scene_playback_list_bool(&(uParam0->f_97[0]), sVar0, true);
}

bool func_134()
{
	return is_scenario_type_enabled("PROP_PLAYER_ROB_CASH_REGISTER");
}

bool func_135(int iParam0)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = func_254();
	if (func_50(iVar0))
	{
		if (func_255(iVar0))
		{
			return true;
		}
	}
	return is_any_speech_playing(iParam0);
}

bool func_136(var uParam0, bool bParam1)
{
	if (func_32(Global_35, 0, 1))
	{
		if (func_174(Global_35, -282082536) || func_174(Global_35, 325463335))
		{
			iVar0 = func_85(uParam0);
			func_27(uParam0, 0);
			if (does_entity_exist(&(uParam0->f_2[0])))
			{
				if (has_anim_event_fired(Global_35, -1898385492))
				{
					delete_object(uParam0->f_2[0]);
				}
			}
			if (does_entity_exist(&(uParam0->f_2[1])))
			{
				if (has_anim_event_fired(Global_35, -1898385492))
				{
					delete_object(uParam0->f_2[1]);
				}
			}
			if (bParam1)
			{
				if (is_player_control_on(get_player_index()))
				{
					set_player_control(get_player_index(), false, 384, false);
				}
			}
			if (does_entity_exist(iVar0))
			{
				if (!_0x083d497d57b7400f(iVar0))
				{
					freeze_entity_position(iVar0, true);
				}
			}
			return true;
		}
	}
	return false;
}

void func_137(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_128() - fParam1);
	func_256(uParam0, 1);
	func_257(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_138(int iParam0, bool bParam1)
{
	if (func_32(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

bool func_139(float fParam0)
{
	if (func_258(1))
	{
		return true;
	}
	if (func_71(&uLocal_0) && !func_259(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

bool func_140(int iParam0, bool bParam1)
{
	if (_does_volume_exist(Local_26.f_46.f_105))
	{
		if (bParam1)
		{
			if (is_ped_dead_or_dying(iParam0, true))
			{
				return false;
			}
		}
		return is_entity_in_volume(iParam0, Local_26.f_46.f_105, bParam1, 0);
	}
	return false;
}

float func_141(var uParam0)
{
	if (!func_71(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_260(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_128() - uParam0->f_1);
}

bool func_142(var uParam0, float fParam1)
{
	if (!func_35(uParam0, 16))
	{
		if (func_56(uParam0))
		{
			func_37(uParam0, 16);
		}
	}
	else if (!func_35(uParam0, 32))
	{
		if (func_56(uParam0))
		{
			func_37(uParam0, 32);
		}
	}
	if (func_72(player_id(), 0, 1, 0) && Global_1935630->f_24)
	{
		uParam0->f_101 = 1;
		return true;
	}
	if (_does_volume_exist(uParam0->f_105))
	{
		if (!_0xf256a75210c5c0eb(uParam0->f_105, Global_36))
		{
			return true;
		}
	}
	if (Global_1935630->f_24)
	{
		iVar0 = _0x336b3d200ab007cb(Global_35, Global_36, 10f, 16896);
		if (iVar0 >= 1)
		{
			uParam0->f_101 = 1;
			return true;
		}
	}
	if (Global_1935630->f_44 == -1569615261)
	{
		func_103(&(uParam0->f_87), 0);
		if (func_41(&(uParam0->f_87), 1.5f))
		{
			if (fParam1 > 4f)
			{
				return true;
			}
			else
			{
				func_34(&(uParam0->f_87));
			}
		}
	}
	else if (func_71(&(uParam0->f_87)))
	{
		func_73(&(uParam0->f_87));
	}
	if (!func_35(uParam0, 16))
	{
		if ((fParam1 < 4f || func_126(*uParam0)) || has_entity_clear_los_to_entity_in_front(Global_35, *uParam0, 17))
		{
			if (func_71(&(uParam0->f_82)))
			{
				func_73(&(uParam0->f_82));
			}
			return false;
		}
	}
	func_103(&(uParam0->f_82), 0);
	if (func_41(&(uParam0->f_82), 3f))
	{
		return true;
	}
	if (func_35(uParam0, 16))
	{
		return true;
	}
	if (func_136(uParam0, 0))
	{
		return true;
	}
	return false;
}

void func_143(int iParam0, bool bParam1)
{
	if (!func_32(iParam0, 0, 1))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(iParam0, 146, false);
		set_ped_config_flag(iParam0, 190, true);
	}
	else
	{
		set_ped_config_flag(iParam0, 146, true);
		set_ped_config_flag(iParam0, 190, false);
	}
}

void func_144()
{
	func_40(8);
}

bool func_145(var uParam0)
{
	if (-1829635046 == func_261(81053684))
	{
		if (func_262(uParam0))
		{
			return true;
		}
	}
	else if (func_263(-525676072, uParam0))
	{
		if (func_262(uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_146()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

void func_147(int iParam0, int iParam1)
{
	if (func_89() != -1)
	{
		return;
	}
	iVar0 = func_264();
	if (iParam0 <= 0)
	{
		return;
	}
	else if (iParam0 > 0 && (iVar0 + iParam0) > 3000)
	{
		iVar1 = (3000 - iVar0);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 < 0)
	{
		iVar2 = absi(iVar1);
		sVar9 = "FAME_EVENT_DEC";
	}
	else
	{
		iVar2 = iVar1;
		sVar9 = "FAME_EVENT_INC";
	}
	iVar3 = (iVar0 + iVar1);
	fVar6 = to_float(iVar0);
	fVar7 = to_float(&Global_1347398);
	fVar8 = to_float(iVar3);
	iVar4 = func_265(ceil(((fVar6 / fVar7) * 100f)), 0, 100);
	iVar5 = func_265(ceil(((fVar8 / fVar7) * 100f)), 0, 100);
	if ((iVar5 - iVar4) == 0)
	{
		return;
	}
	if (iParam1 & 0)
	{
	}
	if (iVar3 < 1000)
	{
		if (!func_266())
		{
			func_267(0);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 1000 && iVar3 < 2000)
	{
		if (!func_268())
		{
			func_267(1000);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 2000 && iVar3 < 3000)
	{
		if (!func_269())
		{
			func_267(2000);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (!func_270())
	{
		func_267(3000);
		play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
	}
	func_70(func_271(661720433), iVar1);
	iVar10 = func_264();
	_0x078f77fd1a43eab3(iVar0, iVar10);
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 52;
		case 17:
			return 68;
		case 28:
			return 54;
		case 29:
			return 61;
		case 39:
			return 49;
		case 40:
			return 70;
		case 42:
			return 55;
		case 43:
			return 62;
		case 61:
			return 56;
		case 73:
			return 50;
		case 74:
			return 58;
		case 75:
			return 76;
		case 82:
			return 71;
		case 90:
			return 57;
		case 91:
			return 63;
		case 95:
			return 51;
		case 54:
			return 64;
		default:
			break;
	}
	return func_149();
}

int func_149()
{
	return 5;
}

bool func_150(int iParam0)
{
	if (!func_75(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

bool func_151(int iParam0, int iParam1)
{
	if (func_89() != -1)
	{
		return false;
	}
	if (!func_75(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

bool func_152(int iParam0)
{
	if (!func_75(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_153(int iParam0, int iParam1)
{
	if (func_89() != -1)
	{
		return;
	}
	if (!func_75(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

void func_154(int iParam0)
{
	if (!func_75(iParam0))
	{
		return;
	}
	iVar0 = func_187(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

int func_155(int iParam0)
{
	if (!func_75(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_156(int iParam0)
{
	return iParam0 != 0;
}

int func_157(int iParam0)
{
	if (!func_75(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

int func_158(int iParam0, bool bParam1)
{
	if (!func_75(iParam0))
	{
		return 0;
	}
	if (!func_151(iParam0, 2))
	{
		return 0;
	}
	if (func_155(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_157(iParam0)))
	{
		return 1;
	}
	if (func_151(iParam0, 1) && !bParam1)
	{
		func_272(iParam0, 128);
		return 1;
	}
	func_153(iParam0, 129);
	func_154(iParam0);
	_0xfc77c5b44d5ff7c0(func_157(iParam0));
	func_273(iParam0, 0);
	return 1;
}

void func_159(int iParam0, int iParam1)
{
	if (!func_50(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

void func_160(int iParam0, int iParam1)
{
	if (!func_50(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_161(int iParam0)
{
	func_274(func_95(iParam0));
}

int func_162(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 101;
	}
	else if (iParam1 == 32)
	{
		return 126;
	}
	else if (iParam1 == 34)
	{
		return 127;
	}
	switch (iParam0)
	{
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
				case 6:
					return 130;
				case 27:
					return 131;
				case 26:
					return 129;
				case 19:
					return 59;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 15:
					return 6;
				case 33:
					return 11;
				case 29:
					return 106;
				case 30:
					return 107;
				case 3:
					return 7;
				case 8:
					return 9;
				case 10:
					return 10;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 31:
					return 108;
				case 22:
					return 16;
				case 7:
					return 17;
				case 21:
					return 12;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
				case 6:
					return 134;
				case 27:
					return 135;
				case 26:
					return 133;
				case 19:
					return 57;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 4:
					return 18;
				case 3:
					return 19;
				case 2:
					return 20;
				case 1:
					return 21;
				case 31:
					return 105;
				default:
					break;
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
				case 6:
					return 139;
				case 27:
					return 140;
				case 26:
					return 138;
				case 19:
					return 56;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
				case 6:
					return 143;
				case 27:
					return 144;
				case 26:
					return 142;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
				case 31:
					return 118;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 15:
					return 36;
				case 8:
					return 37;
				case 33:
					return 52;
				case 29:
					return 109;
				case 10:
					return 38;
				case 30:
					return 110;
				case 0:
					return 39;
				case 4:
					return 41;
				case 3:
					return 42;
				case 6:
					return 43;
				case 9:
					return 44;
				case 2:
					return 45;
				case 1:
					return 46;
				case 31:
					return 111;
				case 22:
					return 51;
				case 7:
					return 47;
				case 12:
					return 48;
				case 13:
					return 49;
				case 14:
					return 50;
				case 18:
					return 55;
				case 21:
					return 54;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 15:
					return 25;
				case 33:
					return 33;
				case 29:
					return 112;
				case 10:
					return 26;
				case 4:
					return 27;
				case 3:
					return 28;
				case 6:
					return 29;
				case 2:
					return 30;
				case 31:
					return 113;
				case 22:
					return 32;
				case 1:
					return 31;
				default:
					break;
			}
			break;
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 23;
				case 1:
					return 24;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
				case 26:
					return 146;
				case 6:
					return 147;
				case 27:
					return 148;
				case 19:
					return 58;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 29:
					return 114;
				case 33:
					return 66;
				case 10:
					return 60;
				case 3:
					return 61;
				case 20:
					return 62;
				case 9:
					return 63;
				case 31:
					return 115;
				case 22:
					return 64;
				case 2:
					return 65;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 15:
					return 68;
				case 8:
					return 69;
				case 33:
					return 70;
				case 29:
					return 102;
				case 10:
					return 72;
				case 30:
					return 103;
				case 0:
					return 73;
				case 3:
					return 74;
				case 6:
					return 75;
				case 9:
					return 76;
				case 2:
					return 77;
				case 31:
					return 104;
				case 1:
					return 78;
				case 22:
					return 80;
				case 20:
					return 79;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 30:
					return 116;
				case 4:
					return 82;
				case 2:
					return 86;
				case 1:
					return 85;
				case 31:
					return 117;
				case 9:
					return 84;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 29:
					return 120;
				case 6:
					return 0;
				case 2:
					return 2;
				case 31:
					return 121;
				case 22:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 90:
		case 128:
			switch (iParam1)
			{
				case 18:
					return 34;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 89;
				case 1:
					return 88;
				case 3:
					return 87;
				default:
					break;
			}
			break;
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
				default:
					break;
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
				default:
					break;
			}
			break;
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 33:
					return 93;
				case 3:
					return 90;
				case 6:
					return 91;
				case 9:
					return 94;
				case 10:
					return 92;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 3:
					return 95;
				case 2:
					return 96;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
				default:
					break;
			}
			break;
		case 117:
			switch (iParam1)
			{
				case 31:
					return 123;
				case 2:
					return 99;
				case 1:
					return 100;
				default:
					break;
			}
			break;
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
				default:
					break;
			}
			break;
	}
	return -1;
}

int func_163(int iParam0)
{
	if (!func_50(iParam0))
	{
		return 0;
	}
	iVar0 = func_95(iParam0);
	if ((((((((((iVar0 == 2 && func_275(28)) || (iVar0 == 18 && iParam0 != 55)) || iVar0 == 1) || iVar0 == 11) || iParam0 == 69) || iVar0 == 33) || iVar0 == 20) || iVar0 == 19) || iVar0 == 9) || func_276(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_164(int iParam0)
{
	if (iParam0 == 15)
	{
		return 65539;
	}
	return 7;
}

int func_165(int iParam0)
{
	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_278(func_277());
	if (func_279(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_279(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_279(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_279(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_279(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_279(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_279(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_279(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_279(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_279(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_279(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_279(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_279(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_279(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_279(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_279(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_279(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_166(var uParam0, int iParam1)
{
	if (get_event_data(0, iParam1, &Var0, 10))
	{
		if (Var0 != Global_35)
		{
			return 0;
		}
		if (Var0.f_4 != 2)
		{
			return 0;
		}
		if (Var0.f_5 != 1)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool func_167(int iParam0)
{
	if (!_does_volume_exist(Global_1914319->f_3[iParam0]->f_25))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(Global_1914319->f_3[iParam0]->f_25, Global_36);
}

bool func_168(var uParam0)
{
	return func_35(uParam0, 524288);
}

Vector3 func_169(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2940.831f, 1314.94f, 43.47723f;
		case 7:
			return -787.9549f, -1329.94f, 42.642f;
		case 17:
			return -756.287f, -1303.571f, 42.55379f;
		case 19:
			return 1442.6f, 263.8f, 90.5f;
		case 39:
			return 2714.857f, -1220.076f, 50.17068f;
		case 42:
			return 2826.128f, -1310.247f, 45.77036f;
		case 43:
			return 2724.865f, -1289.872f, 48.13114f;
		case 41:
			return 2846.573f, -1207.054f, 46.69181f;
		case 47:
			return 2545.625f, -1174.883f, 52.3105f;
		case 28:
			return 1320.562f, -1288.47f, 75.29237f;
		case 29:
			return 1331.844f, -1319.767f, 76.94893f;
		case 61:
			return -1798.134f, -386.6793f, 159.2768f;
		case 73:
			return -290.366f, 802.7841f, 118.2866f;
		case 74:
			return -316.9948f, 797.8707f, 116.5135f;
		case 75:
			return -285.2195f, 775.3804f, 117.7822f;
		case 82:
			return 3018.616f, 555.4745f, 43.68162f;
		case 90:
			return -5495.194f, -2937.927f, -1.45012f;
		case 91:
			return -5512.303f, -2962.822f, -2.57416f;
		case 95:
			return -3678.501f, -2632.466f, -14.71208f;
		case 87:
			return -1308.618f, 395.231f, 94.38168f;
		case 89:
			return -1308.618f, 395.231f, 94.38168f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_170(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_280(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_171(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_281(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_282(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && is_entity_a_ped(iParam1))
	{
		return _0x9d9473cb82d83a30(iParam0, get_ped_index_from_entity_index(iParam1), 0) == 1;
	}
	return _0x7f9b9791d4cb71f6(iParam0, iParam1, bParam2, 0) == 1;
}

Vector3 func_172(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2946.049f, 1319.564f, 45.14626f;
		case 7:
			return -785.9345f, -1322.95f, 44.21807f;
		case 17:
			return -762.7703f, -1292.778f, 43.8849f;
		case 19:
			return 1419.994f, 380.5412f, 110.2361f;
		case 39:
			return 2720.6f, -1233f, 50.4f;
		case 42:
			return 2825.685f, -1319.379f, 46.8135f;
		case 43:
			return 2717.57f, -1285.85f, 49.68f;
		case 41:
			return 2860.15f, -1201.55f, 49.92473f;
		case 47:
			return 2555.87f, -1167.69f, 53.73f;
		case 28:
			return 1329.456f, -1293.444f, 77.33836f;
		case 29:
			return 1323.26f, -1322.5f, 77.93f;
		case 61:
			return -1789.791f, -387.0551f, 160.6592f;
		case 73:
			return -287.5373f, 805.1658f, 119.7208f;
		case 74:
			return -323.4636f, 804.3255f, 118.215f;
		case 75:
			return -280.3192f, 779.6469f, 119.8516f;
		case 82:
			return 3026.349f, 561.7162f, 44.7613f;
		case 90:
			return -5487f, -2938f, -0.4f;
		case 95:
			return -3686.5f, -2622.7f, -13.4f;
		case 87:
			return -1302.749f, 393.2226f, 95.4803f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_173(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (!is_entity_dead(iParam1))
		{
			return has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1);
		}
	}
	return false;
}

bool func_174(int iParam0, int iParam1)
{
	return _is_ped_using_scenario_hash(iParam0, iParam1);
}

int func_175(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	if (!func_283(iParam0))
	{
		return 0;
	}
	if (!func_284(iParam0, &iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (func_89() == -1)
	{
		iVar1 = Global_1914319->f_3[iParam0]->f_10;
	}
	else
	{
		iVar1 = Global_1051260->f_48[iParam0]->f_16;
	}
	func_286(iVar0, uParam1, iVar0, bParam2, func_285(iVar1), 0, iParam3);
	return 1;
}

void func_176(int iParam0)
{
	Global_20710.f_1168[iParam0] = &Global_20710.f_1168[iParam0] + 1;
	Global_20710.f_1322[iParam0] = func_277();
}

void func_177(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_50(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_287(iParam0, 32768);
	}
	if (bParam2)
	{
		func_287(iParam0, 1024);
	}
}

void func_178(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_288() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_289(iVar1) && !func_290(iVar1, iParam2)) && (!bParam3 || !func_291(iVar1))) && (!bParam4 || !func_292(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_293(iVar0);
			}
		}
		iVar0++;
	}
}

void func_179()
{
	if (!func_289(&Global_1327479))
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
	func_294(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_180(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_295(iParam0, iParam1, bParam2);
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

bool func_181(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_182(bool bParam0, bool bParam1, bool bParam2)
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

int func_183(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	iVar0 = create_itemset(true);
	iVar6 = _0x886171a12f400b89(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = get_indexed_item_in_itemset(iVar5, iVar0);
			iVar2 = iVar1;
			if ((does_entity_exist(iVar2) && iVar4 < *iParam0) && iVar4 < iParam2)
			{
				if (func_296(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !decor_exist_on(iVar2, "bIgnoreThisPed"))
				{
					if (!func_297(iVar2, uParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < get_num_models_in_population_set(iParam7))
							{
								if (is_ped_model(iVar2, get_ped_model_name_in_population_set(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!is_entity_dead(iVar2))
								{
									set_blocking_of_non_temporary_events(iVar2, bParam5);
								}
							}
							(*iParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	destroy_itemset(iVar0);
	return iVar4;
}

void func_184(int iParam0, var uParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, bool bParam11)
{
	iVar0 = func_298(&uVar2, uParam1, iParam5, vParam2, iParam7, iParam8, bParam9, 0, -1, 1, iParam10, bParam11, 0, 0);
	func_299(&uVar2, iVar0, vParam2, 1, 1, 0);
	iVar1 = 0;
	iVar49 = 0;
	StringCopy(&cVar46, "GRABBED_PED ", 24);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_117(&(uVar2[iVar1]), 0))
		{
			vVar43 = { cVar46 };
			StringIntConCat(&vVar43, iVar1, 24);
			if (bParam9)
			{
				set_blocking_of_non_temporary_events(&(uVar2[iVar1]), true);
				set_entity_as_mission_entity(&(uVar2[iVar1]), true, true);
			}
			set_ped_name_debug(&(uVar2[iVar1]), &vVar43);
			(*iParam0)[iVar49] = &uVar2[iVar1];
			iVar49++;
			if (iVar49 >= iParam6)
			{
			}
			else
			{
				iVar1++;
			}
		}
	}
}

void func_185(var uParam0, var uParam1)
{
	*uParam1 = Global_35;
	uParam1->f_1 = *uParam0;
	uParam1->f_2 = -1547772340;
	uParam1->f_3 = { Global_36 };
	uParam1->f_6 = func_300(func_96(), 1, 1);
	uParam1->f_8 = 1;
	uParam1->f_9 = 0;
	uParam1->f_10 = 0;
	uParam1->f_11 = 0;
}

bool func_186(int iParam0, int iParam1)
{
	if (!func_32(iParam0, 0, 1))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	switch (iVar0)
	{
		case -378974401:
		case 254009656:
			return false;
		default:
			break;
	}
	iVar1 = get_interior_from_entity(iParam0);
	if (!is_valid_interior(iParam1))
	{
		return false;
	}
	if (iVar1 == iParam1)
	{
		return true;
	}
	if (is_valid_interior(iVar1))
	{
		return false;
	}
	return true;
}

int func_187(int iParam0)
{
	iVar0 = func_157(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!_0x800df3fc913355f3(iVar0))
	{
		return 0;
	}
	return _0x31c70a716cae1fee(iVar0);
}

int func_188(int iParam0)
{
	if (!func_75(iParam0))
	{
		return 0;
	}
	return _0xa00df706c60173d1(Global_1895087[iParam0]);
}

int func_189(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return 1;
}

void func_190(var uParam0)
{
	func_301(uParam0, 1, 1, 0);
	func_302(uParam0, 0);
	func_303(uParam0, 0);
	func_304(uParam0, 1);
	func_305(uParam0, 1);
	func_306(uParam0, 1);
	func_307(uParam0, 0);
	func_308(uParam0, 1);
}

char* func_191(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@proc@shoprobberies@GLOBAL@CLERK_OPEN_REGISTER@BASE";
		default:
			break;
	}
	return "bad anim scene";
}

char* func_192(var uParam0)
{
	if (uParam0->f_108 == -2)
	{
		uParam0->f_108 = func_309(uParam0);
	}
	sVar0 = "pblExitB";
	switch (uParam0->f_108)
	{
		case 0:
			sVar0 = "pblExitB";
			break;
		case 1:
			sVar0 = "pblExitL";
			break;
		case 2:
			sVar0 = "pblExitR";
			break;
		case 3:
			sVar0 = "pblExitBFar";
			break;
		case 4:
			sVar0 = "pblExitLFar";
			break;
		case 5:
			sVar0 = "pblExitRFar";
			break;
		case 7:
			sVar0 = "pblExitL45";
			break;
		case 6:
			sVar0 = "pblExitR45";
			break;
	}
	return sVar0;
}

bool func_193(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_89() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

bool func_194(int iParam0, bool bParam1, bool bParam2)
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
		if (func_310())
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
		iVar0 = func_311(&(Global_1898164->f_1[0]));
		if (func_312(iVar0) && func_313((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_314(&(Global_1898164->f_1[0])))
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

bool func_195(int iParam0)
{
	if (iParam0 > 25)
	{
		return false;
	}
	iVar0 = func_162(func_96(), iParam0);
	switch (iVar0)
	{
		case 41:
		case 82:
			return true;
	}
	switch (iParam0)
	{
		case -1:
		case 1:
		case 2:
		case 4:
		case 5:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
			return false;
	}
	return true;
}

bool func_196(int iParam0)
{
	if (!_does_volume_exist(Global_1914319->f_3[iParam0]->f_25))
	{
		return false;
	}
	if (_0xf256a75210c5c0eb(Global_1914319->f_3[iParam0]->f_25, Global_36))
	{
		return true;
	}
	if (!_does_volume_exist(Global_1914319->f_3[iParam0]->f_28))
	{
		return false;
	}
	if (_0xf256a75210c5c0eb(Global_1914319->f_3[iParam0]->f_28, Global_36))
	{
		return true;
	}
	return false;
}

bool func_197(int iParam0, int iParam1)
{
	if (!func_283(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_3[iParam0]->f_7 && iParam1) != 0;
}

void func_198(int iParam0, int iParam1)
{
	if (!func_283(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 - (Global_1914319->f_3[iParam0]->f_7 && iParam1));
}

void func_199(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_200(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_315(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_316(iParam0))
	{
		return false;
	}
	if (func_317(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_318(iParam0, 1)) || func_319(32768))
	{
		if (!func_318(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_320())
	{
		return false;
	}
	return true;
}

void func_201(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_202(var uParam0, float fParam1)
{
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (get_ground_z_for_3d_coord(vVar0, &uVar3, false))
	{
		uParam0->f_2 = uVar3;
		return 1;
	}
	return 0;
}

void func_203(var uParam0, bool bParam1)
{
	(*uParam0)[0] = -1043434543;
	(*uParam0)[1] = -305837470;
	(*uParam0)[2] = -1250929611;
	(*uParam0)[3] = 1462638198;
	(*uParam0)[4] = -30251080;
	(*uParam0)[5] = -1509673351;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			request_model(uParam0[iVar0], false);
			iVar0++;
		}
	}
}

bool func_204(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_205(var uParam0, var uParam1, int iParam2, vector3 vParam3, bool bParam6)
{
	iVar0 = _create_volume_sphere(vParam3, 0f, 0f, 0f, bParam6, bParam6, bParam6);
	iVar1 = func_321(uParam0, uParam1, iVar0, iParam2);
	func_322(iVar0);
	return iVar1;
}

bool func_206(int iParam0, int iParam1)
{
	return (Global_20710.f_2092[iParam0] && iParam1) != 0;
}

bool func_207(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = func_89() != -1;
	switch (iParam0)
	{
		case 76:
			*uParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 105:
			*uParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*uParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*uParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*uParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*uParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*uParam1 = 472;
			if (bParam3)
			{
				*iParam2 = 500;
			}
			else
			{
				*iParam2 = 502;
			}
			if (bVar0)
			{
				*iParam2 = 472;
			}
			break;
		case 38:
			*uParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*uParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*uParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*uParam1 = 589;
			if (bParam3)
			{
				*iParam2 = 598;
			}
			else
			{
				*iParam2 = 612;
			}
			if (bVar0)
			{
				*iParam2 = 590;
			}
			break;
		case 75:
			*uParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*uParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*uParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*uParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*uParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 659;
			if (bParam3)
			{
				*iParam2 = 673;
			}
			else
			{
				*iParam2 = 690;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*uParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*uParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 715;
			}
			else
			{
				*uParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*uParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*uParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*uParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*uParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*uParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*uParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*uParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*uParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*uParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*uParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*uParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*uParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*uParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*uParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*uParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*uParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*uParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*uParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

int func_208(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (is_entity_dead(iParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = _0x32a1e3b83d501096(iParam0);
	if (!_0x800df3fc913355f3(iVar0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_155(iVar2) != 0 && _0x800df3fc913355f3(func_157(iVar2)))
		{
			if (func_157(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

void func_209(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_211(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_323(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_324(iVar0);
	*uParam0 = 0;
}

void func_210(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_73(&(iParam0->f_18));
}

bool func_211(int iParam0)
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

bool func_212()
{
	set_ped_reset_flag(Local_26.f_46, 49, true);
	if (!func_35(&(Local_26.f_46), 4096))
	{
		Local_26.f_155 = func_118(&(Local_26.f_46), Local_26.f_46.f_105, 0, 0, 0.5f, 0, 1109393408);
		if (func_124(&(Local_26.f_46), Local_26.f_155))
		{
			set_ped_config_flag(Local_26.f_46, 171, true);
			return true;
		}
	}
	if (func_325(Local_26.f_46.f_66))
	{
		return false;
	}
	if (!func_51(Local_26.f_46.f_66, 4194304))
	{
		if (func_119(Global_35, 1630799643))
		{
			if ((func_326(Local_26.f_1) && func_327(Local_26.f_1)) && func_125(Local_26.f_46, 1050253722, 1060320051, 0, 1061158912))
			{
				func_103(&(Local_26.f_46.f_91), 0);
				if (func_41(&(Local_26.f_46.f_91), 0.1f))
				{
					func_37(&(Local_26.f_46), 2097152);
				}
				return false;
			}
		}
		if (((func_113(Local_26.f_46, 1) && func_126(Local_26.f_46)) && func_326(Local_26.f_1)) && func_327(Local_26.f_1))
		{
			func_103(&(Local_26.f_46.f_91), 0);
			if (func_41(&(Local_26.f_46.f_91), 0.1f))
			{
				func_37(&(Local_26.f_46), 2097152);
			}
			return false;
		}
		if (func_328(Local_26.f_46, 0, &(Local_26.f_6), &(Local_26.f_6.f_16), 0, 0))
		{
			func_103(&(Local_26.f_46.f_91), 0);
			if (func_41(&(Local_26.f_46.f_91), 0.1f))
			{
				func_37(&(Local_26.f_46), 2097152);
				if (func_98(Local_26.f_6.f_16))
				{
					func_15(16384);
					task_set_blocking_of_non_temporary_events(Local_26.f_46, true);
					return true;
				}
				if (func_329(Local_26.f_6.f_16))
				{
					func_15(16384);
					return false;
				}
				func_330(&(Local_26.f_6), &(Local_26.f_6.f_16));
				return true;
			}
			return false;
		}
		if (_does_volume_exist(Local_26.f_46.f_105))
		{
			func_331(Local_26.f_46.f_105, &Var0);
			if ((!func_204(Var0) && !func_204(Var0.f_3)) && Var0.f_6 > 0f)
			{
				if (is_bullet_in_angled_area(Var0, Var0.f_3, Var0.f_6, false))
				{
					func_15(16384);
					return false;
				}
			}
		}
	}
	return false;
}

bool func_213(int iParam0)
{
	return !func_51(iParam0, 1);
}

void func_214()
{
	if (func_16(16))
	{
		func_332(16);
	}
}

bool func_215(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_333((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

char* func_216()
{
	return "script_proc@robberies@shop@valdoc@ig_3";
}

char* func_217()
{
	return "hands_up_enter_doc";
}

char* func_218()
{
	return "hands_up_loop_doc";
}

void func_219(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4)
{
	func_100(iParam0, Global_36, 5, 0, 3);
	if (!is_ped_using_any_scenario(iParam0))
	{
		task_react(iParam0, Global_35, Global_36, "Default_Shocked", 1f, 0, 4);
	}
	open_sequence_task(&iVar0);
	if (is_ped_using_any_scenario(iParam0))
	{
		task_stand_still(0, 500);
	}
	task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, 0.3f, 0.52f);
	close_sequence_task(iVar0);
	task_perform_sequence(iParam0, iVar0);
	clear_sequence_task(&iVar0);
}

void func_220(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_334(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_335(Global_1935630, 4194304);
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

void func_221(int iParam0, var uParam1)
{
	*uParam1 = Global_35;
	uParam1->f_1 = iParam0;
	uParam1->f_2 = -1547772340;
	uParam1->f_3 = { Global_36 };
	uParam1->f_6 = func_300(func_96(), 1, 1);
	uParam1->f_8 = 1;
	uParam1->f_9 = 0;
	uParam1->f_10 = 0;
	uParam1->f_11 = 0;
}

bool func_222()
{
	if (func_16(128))
	{
		return false;
	}
	sVar0 = "SHOP_CLERK_REGROBSTART";
	func_336(0);
	if (func_225(Local_26.f_46, Global_35, sVar0, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
	{
		func_15(128);
		return true;
	}
	return false;
}

bool func_223(var uParam0)
{
	iVar0 = func_95(uParam0->f_66);
	if (iVar0 != 6 && func_96() != 92)
	{
		return false;
	}
	if (func_96() == 105 && func_97())
	{
		return false;
	}
	if (func_72(player_id(), 0, 1, 0))
	{
		return false;
	}
	if (func_337(uParam0->f_105, Global_36))
	{
		if (_0xf256a75210c5c0eb(uParam0->f_105, func_338(Global_35, 0.5f)))
		{
			return true;
		}
	}
	return false;
}

bool func_224()
{
	if (func_264() >= 1000)
	{
		return true;
	}
	return false;
}

bool func_225(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_339(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_226()
{
	if (func_340(0))
	{
		return true;
	}
	return false;
}

int func_227(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_228(int iParam0)
{
	return iParam0;
}

void func_229(var uParam0)
{
	func_40(256);
}

void func_230(var uParam0, int* iParam1, int iParam2, int iParam3)
{
	remove_all_ped_weapons(*uParam0, true, true);
	func_341(*uParam0, iParam3, -1, 0, 0, 1056964608, 1065353216, 0);
	func_342(uParam0, iParam1, iParam2);
}

int func_231(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_160(uParam0->f_66, 1024);
	}
	else
	{
		func_159(uParam0->f_66, 1024);
	}
	if (bParam1)
	{
		func_48(*uParam0, 1);
		return 1;
	}
	return 0;
}

bool func_232(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_233(var uParam0)
{
	return uParam0->f_2 == 2;
}

bool func_234()
{
	if (func_343(4))
	{
		return Global_1935630->f_27;
	}
	return func_344();
}

void func_235(var uParam0, char* sParam1, bool bParam2)
{
	if (!func_35(uParam0, 524288))
	{
		func_345(uParam0->f_29[0], 0);
		func_346(uParam0->f_29[0], "ROB_REGISTER", sParam1, -1616532217, 0, 0, 0, 1, 0);
		uParam0->f_29[0]->f_9 = 3;
	}
	if (!bParam2)
	{
		return;
	}
	switch (uParam0->f_66)
	{
		case 29:
		case 61:
			sVar0 = "SR_ROB_ILO_BASEMENT";
			break;
		case 43:
		case 73:
			sVar0 = "SR_ROB_ILO_BACKROOM";
			break;
	}
	if (!func_35(uParam0, 65536))
	{
		func_345(uParam0->f_29[1], 0);
		func_346(uParam0->f_29[1], sVar0, "", 1980406895, 0, 0, 0, 1, 0);
		uParam0->f_29[1]->f_9 = 3;
	}
}

void func_236(var uParam0)
{
	if (func_35(uParam0, 524288) || uParam0->f_7[0]->f_1 == 0)
	{
		return;
	}
	bVar0 = func_248(uParam0, 3f);
	if (!uParam0->f_104)
	{
		if (bVar0)
		{
			uParam0->f_29[0]->f_13 = "PLAYER_HOLDUP_ROB_FAR";
			uParam0->f_104 = 1;
		}
	}
	else if (!bVar0)
	{
		uParam0->f_29[0]->f_13 = "PLAYER_HOLDUP_ROB";
		uParam0->f_104 = 0;
	}
}

void func_237(var uParam0, bool bParam1)
{
	func_345(uParam0->f_29[0], 1);
	if (bParam1)
	{
		func_345(uParam0->f_29[1], 1);
	}
}

int func_238(int iParam0, int iParam1, int iParam2)
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

int func_239(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_347(&iVar0);
	if (func_279(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_348(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_279(iVar0, 134217728))
	{
		func_349(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_193(558))
				{
					func_84(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

void func_240(var uParam0, int iParam1)
{
	stop_current_playing_ambient_speech(uParam0, iParam1);
	stop_current_playing_speech(uParam0, iParam1);
}

bool func_241(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_279(iParam4, 32);
		func_92(iParam1, uParam2, 0);
		iVar5 = func_350(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_93(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_279(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_279(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_279(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_279(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_279(iParam4, 8388608) || func_279(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_279(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_279(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_351(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_351(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_279(iParam4, 67108864))
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
				iParam6 = func_352(uParam0);
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
			if (func_279(iParam4, 268435456))
			{
				iVar8 = func_353(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_354(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_351(iParam1, 23))
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
			if (func_279(iParam4, 2) || func_279(iParam4, 16))
			{
				func_355(*uParam0, 1, 1);
			}
			else
			{
				func_355(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_242(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_356(uParam0->f_29[0], 0))
		{
			func_357(uParam0->f_29[0], 1, 0);
		}
		if (bParam2)
		{
			if (!func_356(uParam0->f_29[1], 0))
			{
				func_357(uParam0->f_29[1], 1, 0);
			}
		}
	}
	else
	{
		if (func_356(uParam0->f_29[0], 0))
		{
			func_357(uParam0->f_29[0], 0, 0);
		}
		if (bParam2)
		{
			if (func_356(uParam0->f_29[1], 0))
			{
				func_357(uParam0->f_29[1], 0, 0);
			}
		}
	}
}

bool func_243(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, bool bParam6)
{
	if (is_entity_dead(iParam0) && bParam5)
	{
		return true;
	}
	if (!_does_anim_scene_exist(iParam1))
	{
		return true;
	}
	if (_is_anim_scene_finished(iParam1, false))
	{
		return true;
	}
	if (!_is_anim_scene_metadata_loaded(iParam1, false))
	{
		return true;
	}
	if (!is_string_null_or_empty(sParam2))
	{
		if (bParam6)
		{
			if (_0x73616e64696c616e(iParam1, sParam2, 1, 0))
			{
				return true;
			}
		}
		if (_0x005e6f28dd7ed58d(iParam1, sParam2) || _0xb89fcff19dafff28(iParam1, sParam2))
		{
			return true;
		}
	}
	if (iParam3 != 0 && has_anim_event_fired(iParam0, iParam3))
	{
		return true;
	}
	if (fParam4 > 0f && _get_anim_scene_progress(iParam1) >= fParam4)
	{
		return true;
	}
	return false;
}

bool func_244(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, int iParam29)
{
	if (func_35(uParam0, 4) && func_328(*uParam0, 0, &uParam1, &iParam29, 0, 0))
	{
		if (func_98(iParam29))
		{
			return true;
		}
	}
	return false;
}

bool func_245(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_246(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

bool func_247(int iParam0, float fParam1, float fParam2, float fParam3, bool bParam4)
{
	if (!Global_1935630->f_27 && !bParam4)
	{
		return false;
	}
	if (is_control_pressed(0, -128997553))
	{
		fVar0 = func_358(iParam0, player_ped_id(), 0, 1);
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
				iVar3 = func_227(player_ped_id(), 0);
				if (func_246(iVar3) && !is_control_pressed(0, 130948705))
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
				vVar7 = { func_359(0) };
				vVar10 = { func_360(vVar4 - get_gameplay_cam_coord()) };
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

int func_248(var uParam0, float fParam1)
{
	if (!func_35(uParam0, 33554432))
	{
		return 1;
	}
	if (!func_32(*uParam0, 0, 1))
	{
		return 1;
	}
	if (fParam1 != 30f)
	{
		fParam1 = 30f;
	}
	vVar0 = { get_entity_coords(*uParam0, true, false) };
	iVar3 = func_85(uParam0);
	if (does_entity_exist(iVar3))
	{
		vVar4 = { get_entity_coords(iVar3, true, false) };
	}
	fVar7 = get_distance_between_coords(vVar0, uParam0->f_75, false);
	fVar8 = get_distance_between_coords(Global_36, uParam0->f_75, false);
	fVar9 = get_distance_between_coords(Global_36, vVar4, false);
	if (fVar8 < 2f && fVar8 < fVar7)
	{
		if (fVar8 < fVar9)
		{
			return 1;
		}
	}
	if ((fVar7 > 4f && fVar8 < 4f) && fVar8 < fVar7)
	{
		return 1;
	}
	if (_is_ped_hogtied(*uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_249(var uParam0)
{
	_0xdf7b5144e25cd3fe(&(uParam0->f_97[0]), "pblExitB");
	if (_0x23e33cb9f4a3f547(&(uParam0->f_97[0]), "pblExitB"))
	{
		iVar0 = func_85(uParam0);
		if (does_entity_exist(iVar0))
		{
			if (uParam0->f_85 < 0f)
			{
				vVar1 = { get_offset_from_entity_in_world_coords(iVar0, 0.074814f, -0.117756f, 0.059386f) };
				uParam0->f_2[0] = create_object(1477581656, vVar1, true, true, false, false, true);
				vVar1 = { get_offset_from_entity_in_world_coords(iVar0, -0.082664f, -0.117757f, 0.059386f) };
				uParam0->f_2[1] = create_object(1477581656, vVar1, true, true, false, false, true);
				uParam0->f_5 = create_scenario_point_attached_to_entity(iVar0, 325463335, 0f, 0f, 0f, 0f, 0, 0, 1);
				if (!func_362(func_361(&(uParam0->f_97[0]), "pblExitB"), get_entity_coords(iVar0, true, false)))
				{
					set_anim_scene_origin(&(uParam0->f_97[0]), get_entity_coords(iVar0, true, false), get_entity_rotation(iVar0, 2), 2);
					set_anim_scene_entity(&(uParam0->f_97[0]), "CLERK", *uParam0, 0);
					set_anim_scene_entity(&(uParam0->f_97[0]), "REGISTER", iVar0, 0);
				}
				set_anim_scene_entity(&(uParam0->f_97[0]), "OOXO", &(uParam0->f_2[0]), 0);
				set_anim_scene_entity(&(uParam0->f_97[0]), "OXOO", &(uParam0->f_2[1]), 0);
				set_ped_move_anims_blend_out(*uParam0);
				uParam0->f_85 = func_128();
			}
			else if ((func_128() - uParam0->f_85) >= 0.2f)
			{
				clear_ped_tasks(*uParam0, 1, 0);
				start_anim_scene(&(uParam0->f_97[0]));
				_set_anim_scene_playback_list_bool(&(uParam0->f_97[0]), "pblExitB", true);
				return true;
			}
		}
		else
		{
			if (func_35(uParam0, 33554432))
			{
				func_91(uParam0, 33554432);
			}
			func_13(uParam0);
		}
	}
	return false;
}

void func_250(var uParam0)
{
	if (!func_35(uParam0, 1))
	{
		freeze_entity_position(&(uParam0->f_2[0]), true);
		freeze_entity_position(&(uParam0->f_2[1]), true);
		_0x8360c47380b6f351(uParam0->f_5, &(uParam0->f_2[0]), "OOXO", 1);
		_0x8360c47380b6f351(uParam0->f_5, &(uParam0->f_2[1]), "OXOO", 1);
		iVar0[0] = _get_scenario_point_entity(uParam0->f_5, "OXOO");
		iVar0[1] = _get_scenario_point_entity(uParam0->f_5, "OOXO");
		if (does_entity_exist(&(iVar0[0])))
		{
			freeze_entity_position(&(iVar0[0]), true);
			set_entity_collision(&(iVar0[0]), true, false);
		}
		if (does_entity_exist(&(iVar0[1])))
		{
			freeze_entity_position(&(iVar0[1]), true);
			set_entity_collision(&(iVar0[1]), true, false);
		}
		func_37(uParam0, 1);
	}
}

bool func_251(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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

int func_252(var uParam0, var uParam1, float fParam2, int iParam3)
{
	if (!func_32(*uParam0, 0, 1) || !func_32(Global_35, 0, 1))
	{
		return 1;
	}
	if (!*uParam1)
	{
		task_turn_ped_to_face_entity(*uParam0, Global_35, iParam3, -1082130432, -1f, -1f);
		*uParam1 = 1;
	}
	if (is_ped_facing_ped(*uParam0, Global_35, fParam2))
	{
		return 1;
	}
	return 0;
}

void func_253(var uParam0)
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
	Var0 = { 0f, 0f, 0f };
	Var0.f_3 = Global_35;
	Var0.f_8 = 4;
	Var0.f_19 = 4;
	Var0.f_21 = 4;
	Var0.f_17 = 4;
	Var0.f_18 = 4;
	Var0.f_7 = 40000;
	_0x66f9eb44342bb4c5(*uParam0, &Var0);
}

int func_254()
{
	if (func_58())
	{
		return Global_1914319->f_16855.f_1;
	}
	return -1;
}

bool func_255(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return func_51(iParam0, 1073741824);
}

void func_256(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_257(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_258(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

bool func_259(var uParam0, float fParam1)
{
	if (func_41(uParam0, fParam1))
	{
		func_73(uParam0);
		return true;
	}
	return false;
}

bool func_260(var uParam0)
{
	return func_181(*uParam0, 2);
}

int func_261(int iParam0)
{
	iVar0 = func_364(func_363(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_262(var uParam0)
{
	if (func_263(81053684, uParam0))
	{
		return true;
	}
	if (func_263(-525676072, uParam0))
	{
		return true;
	}
	return false;
}

bool func_263(int iParam0, var uParam1)
{
	iVar1 = func_364(func_363(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_365(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_264()
{
	if (func_89() != -1)
	{
		return 0;
	}
	return func_366(661720433);
}

int func_265(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_266()
{
	return Global_1347398->f_1 == 0;
}

void func_267(int iParam0)
{
	Global_1347398->f_1 = iParam0;
}

bool func_268()
{
	return Global_1347398->f_1 == 1000;
}

bool func_269()
{
	return Global_1347398->f_1 == 2000;
}

bool func_270()
{
	return Global_1347398->f_1 == 3000;
}

struct<2> func_271(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_272(int iParam0, int iParam1)
{
	if (func_89() != -1)
	{
		return;
	}
	if (!func_75(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

void func_273(int iParam0, int iParam1)
{
	if (!func_75(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

void func_274(int iParam0)
{
	Global_1914319->f_15923 = iParam0;
}

bool func_275(int iParam0)
{
	if (!func_367(iParam0))
	{
		return false;
	}
	return func_368(iParam0);
}

bool func_276(int iParam0)
{
	bVar0 = func_51(iParam0, 256);
	return bVar0;
}

int func_277()
{
	return &Global_1899515;
}

int func_278(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_279(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_280(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_369(iParam1))
		{
			func_370(iParam0, 41788943);
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
			func_371(iParam0, 0, 1);
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
			func_372(iParam0, 0);
			bVar0 = true;
		}
		func_373(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_281(int iParam0, int iParam1, float fParam2)
{
	return func_374(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

bool func_282(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_283(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

bool func_284(int iParam0, int iParam1)
{
	if (!func_283(iParam0))
	{
		return false;
	}
	if (func_89() != -1)
	{
		if (does_entity_exist(Global_1051260->f_48[iParam0]->f_19))
		{
			*iParam1 = get_ped_index_from_entity_index(Global_1051260->f_48[iParam0]->f_19);
		}
		else
		{
			return false;
		}
	}
	else if (does_entity_exist(Global_1914319->f_3[iParam0]->f_23))
	{
		*iParam1 = get_ped_index_from_entity_index(Global_1914319->f_3[iParam0]->f_23);
	}
	else
	{
		return false;
	}
	return true;
}

int func_285(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10074;
		case 2:
			return 10076;
		case 3:
			return 10077;
		case 6:
			return 10034;
		case 7:
			return 10040;
		case 8:
			return 10041;
		case 13:
			return 10042;
		case 14:
			return 10043;
		case 15:
			return 10043;
		case 17:
			return 10044;
		case 18:
			return 10050;
		case 19:
			return 10051;
		case 20:
			return 10052;
		case 21:
			return 10053;
		case 22:
			return 10000;
		case 23:
			return 10025;
		case 24:
			return 10026;
		case 25:
			return 10096;
		case 26:
			return 10098;
		case 27:
			return 10101;
		case 28:
			return 10102;
		case 29:
			return 10103;
		case 30:
			return 10104;
		case 31:
			return 10105;
		case 36:
			return 10005;
		case 37:
			return 10006;
		case 38:
			return 10008;
		case 39:
			return 10011;
		case 40:
			return 10012;
		case 41:
			return 10013;
		case 42:
			return 10014;
		case 43:
			return 10016;
		case 44:
			return 10017;
		case 45:
			return 10018;
		case 46:
			return 10020;
		case 47:
			return 10019;
		case 55:
			return 10116;
		case 48:
			return 10113;
		case 49:
			return 10114;
		case 50:
			return 10115;
		case 60:
			return 10028;
		case 61:
			return 10031;
		case 62:
			return 10031;
		case 65:
			return 10032;
		case 68:
			return 10058;
		case 69:
			return 10059;
		case 72:
			return 10061;
		case 73:
			return 10064;
		case 74:
			return 10065;
		case 75:
			return 10066;
		case 76:
			return 10067;
		case 77:
			return 10068;
		case 78:
			return 10069;
		case 79:
			return 10118;
		case 82:
			return 10088;
		case 86:
			return 10090;
		case 85:
			return 10090;
		case 89:
			return 10047;
		case 88:
			return 10047;
		case 120:
			return 10071;
		case 106:
			return 10036;
		case 107:
			return 10038;
		case 109:
			return 10007;
		case 110:
			return 10010;
		case 112:
			return 10097;
		case 114:
			return 10027;
		case 102:
			return 10060;
		case 103:
			return 10063;
		case 116:
			return 10085;
		case 128:
			return 10078;
		case 129:
			return 10079;
		case 130:
			return 10080;
		case 131:
			return 10081;
		case 132:
			return 10092;
		case 133:
			return 10093;
		case 134:
			return 10094;
		case 135:
			return 10095;
		case 137:
			return 10054;
		case 138:
			return 10055;
		case 139:
			return 10056;
		case 140:
			return 10057;
		case 141:
			return 10001;
		case 142:
			return 10002;
		case 143:
			return 10003;
		case 144:
			return 10004;
		case 145:
			return 10021;
		case 146:
			return 10022;
		case 147:
			return 10023;
		case 148:
			return 10024;
		case 90:
			return 10107;
		case 91:
			return 10108;
		case 92:
			return 10117;
		case 99:
			return 10119;
		case 100:
			return 10120;
		case 95:
			return 10111;
		default:
			break;
	}
	return 0;
}

void func_286(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	if (does_entity_exist(iParam0))
	{
		Var0.f_14 = iParam0;
		Var0 = uParam1;
		Var0.f_12 = 22;
		Var0.f_3 = iParam2;
		Var0.f_8 = iParam5;
		Var0.f_11 = iParam6;
		Var0.f_13 = iParam4;
		if (!bParam3)
		{
			func_375(&(Var0.f_16), 1);
		}
		_0x88bc5f4aef77fc4e(&Var0, 17);
	}
}

void func_287(int iParam0, int iParam1)
{
	if (func_206(iParam0, iParam1))
	{
		return;
	}
	Global_20710.f_2092[iParam0] = (Global_20710.f_2092[iParam0] || iParam1);
}

int func_288()
{
	return Global_1310750->f_16037;
}

bool func_289(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_290(int iParam0, int iParam1)
{
	if (!func_289(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_291(int iParam0)
{
	if (!func_289(iParam0))
	{
		return false;
	}
	if (func_376(64) && func_377(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_292(int iParam0)
{
	if (!func_289(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_293(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_289(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_378(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_294(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

void func_295(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_379(iParam0, iParam1, bParam2);
}

bool func_296(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!bParam5 && !is_ped_human(iParam0))
	{
		return false;
	}
	if (is_ped_a_player(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (is_entity_a_mission_entity(iParam0))
		{
			return false;
		}
	}
	if (bParam3 && func_380(iParam0))
	{
		return false;
	}
	if (bParam4)
	{
		if (is_ped_on_mount(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_18(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_297(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == uParam1[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_298(int iParam0, var uParam1, int iParam2, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	if (bParam13 <= 0f)
	{
		iVar0 = _create_volume_sphere(vParam3, 0f, 0f, 0f, bParam6, bParam6, bParam6);
	}
	else
	{
		iVar0 = _create_volume_cylinder(vParam3, 0f, 0f, 0f, bParam6, bParam6, bParam13);
	}
	iVar1 = func_183(iParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	func_322(iVar0);
	return iVar1;
}

void func_299(var uParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7)
{
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (bParam6)
		{
			fVar4 = vdist2(get_entity_coords(uParam0[iVar0], false, false), vParam2);
		}
		else
		{
			fVar4 = func_381(get_entity_coords(uParam0[iVar0], false, false), vParam2);
		}
		if (iVar0 > 0)
		{
			if ((bParam5 && fVar4 < fVar3) || (!bParam5 && fVar4 > fVar3))
			{
				uVar2 = uParam0[iVar0];
				uVar1 = uParam0[(iVar0 - 1)];
				(*uParam0)[(iVar0 - 1)] = uVar2;
				(*uParam0)[iVar0] = uVar1;
				iVar0 = (iVar0 - 1);
			}
		}
		fVar3 = fVar4;
		iVar0++;
	}
	if (bParam7)
	{
	}
}

int func_300(int iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 76:
			if (func_382(iParam0))
			{
				return 305496830;
			}
			else
			{
				return -1482428221;
			}
			break;
		case 105:
			if (func_382(iParam0))
			{
				return -1323821455;
			}
			else
			{
				return -1994249944;
			}
			break;
		case 5:
			return 1559741032;
		case 61:
			return 60667583;
		case 78:
			return 1758133584;
		case 26:
			return -577559008;
		case 38:
			if (!bParam1 || func_89() != -1)
			{
				return 1624541293;
			}
			if (func_275(45))
			{
				return 1624541293;
			}
			else
			{
				return 1716860278;
			}
			break;
		case 92:
			return 1637569166;
		case 65:
			return -867798278;
		case 69:
			return 1543937523;
		case 93:
			return 1030875135;
		case 95:
			return -201437056;
		case 57:
			return 794246846;
		case 3:
			return -968357677;
		case 32:
			return 728480338;
		case 82:
			return 725489698;
		case 35:
			return 183652754;
		case 56:
			return 2056744450;
		case 126:
			return 963280223;
		case 120:
			return -256309418;
		case 124:
			return 1666986024;
		case 115:
			return 251328732;
		case 127:
			if (!bParam1 || func_89() != -1)
			{
				return 1024208566;
			}
			if (func_275(45))
			{
				return 1024208566;
			}
			else
			{
				return 1640255731;
			}
			break;
		case 22:
			if (!bParam1 || func_89() != -1)
			{
				return 965626876;
			}
			if (func_333((*Global_1835011)[59]->f_1, 1))
			{
				return 965626876;
			}
			else
			{
				return 1039226266;
			}
			break;
		case 37:
			if (!bParam1 || func_89() != -1)
			{
				return -497792649;
			}
			if (func_333((*Global_1347702)[9]->f_15, 1))
			{
				return -497792649;
			}
			else if (func_275(45))
			{
				return -1738342532;
			}
			else
			{
				return -1308265478;
			}
			break;
		case 4:
		case 9:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			if (iParam0 == func_383())
			{
				return 2126166785;
			}
			break;
		case 110:
			if (!bParam1 || func_89() != -1)
			{
				return -1990305778;
			}
			if (func_275(45))
			{
				return -1990305778;
			}
			else
			{
				return -1679988168;
			}
			break;
	}
	if (bParam2)
	{
		iVar0 = func_384(iParam0);
		if (iVar0 != -1)
		{
			return func_385(iVar0, bParam1);
		}
	}
	return 0;
}

void func_301(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_386(uParam0, 268435456);
	}
	else
	{
		func_387(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_386(uParam0, 1073741824);
	}
	else
	{
		func_387(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_386(uParam0, 536870912);
	}
	else
	{
		func_387(uParam0, 536870912);
	}
}

void func_302(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_1 = 0;
		func_388(uParam0, 1);
		func_389(uParam0, 1);
		func_390(uParam0, 1);
		func_391(uParam0, 1);
		func_392(uParam0, 1);
		func_393(uParam0, 1);
		func_394(uParam0, 1);
	}
	else
	{
		uParam0->f_1 = -1;
		func_388(uParam0, 0);
		func_389(uParam0, 0);
		func_390(uParam0, 0);
		func_391(uParam0, 0);
		func_392(uParam0, 0);
		func_393(uParam0, 0);
		func_394(uParam0, 0);
	}
}

void func_303(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_387(&(uParam0->f_1), 256);
	}
	else
	{
		func_386(&(uParam0->f_1), 256);
	}
}

void func_304(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_387(&(uParam0->f_1), 4);
	}
	else
	{
		func_386(&(uParam0->f_1), 4);
	}
}

void func_305(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_387(&(uParam0->f_1), 2);
	}
	else
	{
		func_386(&(uParam0->f_1), 2);
	}
}

void func_306(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_387(&(uParam0->f_1), 8);
	}
	else
	{
		func_386(&(uParam0->f_1), 8);
	}
}

void func_307(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_387(&(uParam0->f_1), 16384);
	}
	else
	{
		func_386(&(uParam0->f_1), 16384);
	}
}

void func_308(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_387(&(uParam0->f_1), 16);
	}
	else
	{
		func_386(&(uParam0->f_1), 16);
	}
}

int func_309(var uParam0)
{
	iVar0[0] = 0;
	iVar0[1] = 2;
	iVar0[2] = 1;
	iVar0[3] = 0;
	iVar0[4] = 0;
	iVar0[5] = 0;
	iVar0[7] = 0;
	iVar0[6] = 0;
	switch (uParam0->f_66)
	{
		case 0:
			iVar0[0] = 1;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 2;
			break;
		case 7:
			iVar0[0] = 1;
			iVar0[1] = 1;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 2;
			iVar0[5] = 0;
			iVar0[6] = 3;
			break;
		case 8:
			iVar0[0] = 1;
			iVar0[1] = 3;
			iVar0[2] = 0;
			iVar0[3] = 0;
			iVar0[4] = 0;
			iVar0[5] = 0;
			break;
		case 17:
			iVar0[0] = 1;
			iVar0[1] = 0;
			iVar0[2] = 1;
			iVar0[3] = 2;
			iVar0[4] = 0;
			iVar0[5] = 3;
			break;
		case 19:
			iVar0[0] = 1;
			iVar0[1] = 0;
			iVar0[2] = 3;
			iVar0[3] = 0;
			iVar0[4] = 0;
			iVar0[5] = 0;
			break;
		case 22:
			break;
		case 28:
			iVar0[0] = 0;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 29:
			iVar0[0] = 2;
			iVar0[1] = 1;
			iVar0[2] = 1;
			iVar0[3] = 3;
			iVar0[4] = 2;
			iVar0[5] = 1;
			break;
		case 39:
			iVar0[0] = 0;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 42:
			iVar0[0] = 0;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 41:
			iVar0[0] = 0;
			iVar0[1] = 2;
			iVar0[2] = 2;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 43:
			iVar0[0] = 1;
			iVar0[1] = 1;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 2;
			iVar0[5] = 0;
			iVar0[6] = 3;
			break;
		case 47:
			iVar0[0] = 2;
			iVar0[1] = 1;
			iVar0[2] = 2;
			iVar0[3] = 2;
			iVar0[4] = 3;
			iVar0[5] = 0;
			break;
		case 61:
			iVar0[0] = 0;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 73:
			iVar0[0] = 2;
			iVar0[1] = 1;
			iVar0[2] = 2;
			iVar0[3] = 2;
			iVar0[4] = 1;
			iVar0[5] = 3;
			break;
		case 74:
			iVar0[0] = 1;
			iVar0[1] = 1;
			iVar0[2] = 2;
			iVar0[3] = 3;
			iVar0[4] = 2;
			iVar0[5] = 2;
			break;
		case 75:
			iVar0[0] = 1;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 1;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 82:
			iVar0[0] = 0;
			iVar0[1] = 1;
			iVar0[2] = 2;
			iVar0[3] = 0;
			iVar0[4] = 0;
			iVar0[5] = 3;
			break;
		case 87:
			iVar0[0] = 1;
			iVar0[1] = 0;
			iVar0[2] = 2;
			iVar0[3] = 0;
			iVar0[4] = 0;
			iVar0[5] = 3;
			break;
		case 90:
			iVar0[0] = 1;
			iVar0[1] = 2;
			iVar0[2] = 0;
			iVar0[3] = 1;
			iVar0[4] = 3;
			iVar0[5] = 0;
			break;
		case 91:
			iVar0[0] = 0;
			iVar0[1] = 1;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 1;
			iVar0[5] = 2;
			iVar0[6] = 3;
			break;
		case 95:
			iVar0[0] = 1;
			iVar0[1] = 0;
			iVar0[2] = 2;
			iVar0[3] = 0;
			iVar0[4] = 0;
			iVar0[5] = 3;
			break;
	}
	iVar9 = func_395(uParam0, &iVar0);
	return iVar9;
}

bool func_310()
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

int func_311(int iParam0)
{
	if (!func_314(iParam0))
	{
		return -1;
	}
	return func_397(func_396(iParam0));
}

bool func_312(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_313(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_314(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_315(int iParam0, int iParam1)
{
	if (func_89() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_316(int iParam0)
{
	if (func_89() != -1)
	{
		if (func_318(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_318(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_317(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_318(iParam0, 65536) && !func_318(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_318(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_318(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_318(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_319(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_320()
{
	return Global_1905944->f_5694;
}

int func_321(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = create_itemset(true);
	iVar6 = _0x886171a12f400b89(iParam2, iVar0, 3);
	if (iVar6 >= iParam3)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar6)
	{
		iVar1 = get_indexed_item_in_itemset(iVar4, iVar0);
		iVar2 = iVar1;
		if (is_entity_an_object(iVar2))
		{
			iVar5 = 0;
			while (iVar5 < *uParam1)
			{
				if (uParam1[iVar5] == 0)
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				else if (get_entity_model(iVar2) == uParam1[iVar5])
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				iVar5++;
			}
		}
		if (iVar3 >= iParam3)
		{
			destroy_itemset(iVar0);
			return iParam3;
		}
		iVar4++;
	}
	destroy_itemset(iVar0);
	return iVar3;
}

void func_322(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

int func_323(int iParam0)
{
	return iParam0;
}

void func_324(int iParam0)
{
	if (!func_398(iParam0))
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

bool func_325(int iParam0)
{
	if (!func_50(iParam0))
	{
		return false;
	}
	return func_279(&(Global_1914319->f_18594[iParam0]), 1);
}

bool func_326(int iParam0)
{
	return Global_1914319->f_3[iParam0]->f_410;
}

bool func_327(int iParam0)
{
	if (func_58())
	{
		if (Global_1914319->f_16855 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_328(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_399(uParam2, 1, iVar0);
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
			if (func_400(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_401(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_402(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_401(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_403(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_401(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_404(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_401(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_72(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_401(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_405(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_406(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_401(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_407(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_401(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_408(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_401(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_408(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_401(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_409(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_401(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_410(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_401(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_411(uParam2, 4000))
				{
					if ((func_412(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_413(uParam2, iParam0)) && func_414(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_401(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_412(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_413(uParam2, iParam0)) && func_414(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_401(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_415(iParam0, Global_1935630->f_41))
							{
								func_416();
								*uParam3 = 2;
								func_401(iParam0, uParam2, *uParam3);
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
						if (func_415(iParam0, Global_1935630->f_41))
						{
							func_416();
							*uParam3 = 2;
							func_401(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_417(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_418() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_416();
						*uParam3 = 2;
						func_401(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_419())
					{
						if (func_415(iParam0, Global_1935630->f_42))
						{
							func_416();
							*uParam3 = 2;
							func_401(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_420(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_401(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_421(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_401(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_422(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_401(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_423(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_401(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_424(uParam2, 4000))
				{
					if (func_425(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_401(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_426(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_401(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_427(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_401(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_329(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 16:
		case 32:
		case 64:
		case 128:
		case 2048:
		case 8192:
		case 32768:
			return true;
		default:
			break;
	}
	return false;
}

void func_330(var uParam0, var uParam1)
{
	if (uParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		uParam0->f_8 = func_418();
		_0xeacebaae0a33fb3f(player_id());
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_5 = 0;
	uParam0->f_10 = 0;
	func_428(uParam0, 0);
	*uParam1 = 0;
	uParam0->f_16 = 0;
}

int func_331(int iParam0, var uParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0x3e2a25b2416dd67e(iParam0) };
	uParam1->f_6 = vVar0.y;
	vVar0 = { vVar0 * Vector(0.5f, 0.5f, 0.5f) };
	vVar3 = { _0xf70f00013a62f866(iParam0) };
	vVar6 = { _0x18675bc914891122(iParam0) };
	fVar9 = vVar6.z;
	*uParam1 = { _get_object_offset_from_coords(vVar3, fVar9, -vVar0.x, 0f, -vVar0.z) };
	uParam1->f_3 = { _get_object_offset_from_coords(vVar3, fVar9, vVar0.x, 0f, vVar0.z) };
	return 1;
}

void func_332(int iParam0)
{
	Local_26.f_2 = (Local_26.f_2 - (Local_26.f_2 && iParam0));
}

bool func_333(int iParam0, bool bParam1)
{
	switch (func_429(iParam0))
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

void func_334(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_335(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_336(int iParam0)
{
	func_73(&uLocal_0);
	func_430(1, iParam0, 0);
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_431();
}

bool func_337(int iParam0, vector3 vParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(iParam0, vParam1);
}

Vector3 func_338(int iParam0, float fParam1)
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
	func_360(vVar6);
	vVar6 = { FtoV((get_entity_speed(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

int func_339(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_432())
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
				if (func_433(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_358(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_34(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_434(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_436(func_435(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_340(int iParam0)
{
	if (func_17())
	{
		return false;
	}
	return func_333((*Global_1347702)[58]->f_15, 1);
}

int func_341(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_437(iParam3, 1);
	bVar1 = func_437(iParam3, 2);
	bVar2 = !func_437(iParam3, 4);
	bVar3 = func_437(iParam3, 8);
	bVar4 = !func_437(iParam3, 16);
	bVar5 = func_437(iParam3, 32);
	bVar6 = func_437(iParam3, 64);
	return func_438(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_342(var uParam0, int* iParam1, int iParam2)
{
	set_ped_relationship_group_hash(*uParam0, -401180987);
	set_blocking_of_non_temporary_events(*uParam0, true);
	if (_does_volume_exist(iParam2))
	{
		_0xfc3db99c8144cd81(*uParam0, iParam2, 0, 0, 0);
	}
	_0x935cf6e42baf7f4d(*uParam0);
	task_combat_ped(*uParam0, Global_35, 0, 0);
	set_ped_keep_task(*uParam0, true);
	func_439(*uParam0, iParam1, 831283580, 580546400, 0, 0);
}

bool func_343(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

bool func_344()
{
	if (func_440())
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

void func_345(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_356(iParam0, 4))
		{
			func_209(&(iParam0->f_6), 1, 1);
			func_441(iParam0, 4);
		}
	}
	else if (func_356(iParam0, 4))
	{
		func_442(iParam0, 4);
		func_441(iParam0, 14);
	}
}

void func_346(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_211(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_443(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_444(iParam0->f_6, iParam0->f_5, 0);
			}
			func_445(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_446(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_347(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_348(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_347(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_447(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
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
			func_34(&(iParam1->f_13));
		}
		if (func_448(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_241(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_348(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_21(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_355(*uParam0, 1, 1);
						}
					}
					else if (func_351(iParam1, 22))
					{
						func_355(*uParam0, 0, 1);
					}
				}
				if (func_449(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_450(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_451(iParam8);
					if (func_452(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_453(uParam3);
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
					func_454(iParam1, uParam3, fVar8);
					if (func_455(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_93(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_456(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_449(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_457(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_452(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_450(uParam0, func_449(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_451(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_93(uParam3, 0, 0, 1, 1);
					}
					func_458(iParam1, 1);
				}
				func_454(iParam1, uParam3, fVar8);
				if (func_456(uParam0, iParam1, fParam4, bVar6))
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
			func_22(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_349(int* iParam0, var uParam1, var uParam2)
{
	iVar0 = func_459(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_225(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

int func_350(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_460(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_211((*uParam2)[iVar0]->f_6))
		{
			func_441((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

bool func_351(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

int func_352(var uParam0)
{
	iVar0 = func_461(*uParam0);
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

int func_353(var uParam0, int iParam1)
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

void func_354(int* iParam0, int* iParam1)
{
	if (!func_351(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_441(iParam1, 19);
			func_462(iParam0, 23);
			func_463(iParam1, 2);
		}
	}
}

void func_355(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_356(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_357(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_356(iParam0, 13))
	{
		func_441(iParam0, 0);
	}
	else
	{
		func_442(iParam0, 0);
	}
	if (func_211(iParam0->f_6))
	{
		if (bParam2)
		{
			func_209(&(iParam0->f_6), 0, 1);
		}
	}
}

float func_358(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

Vector3 func_359(int iParam0)
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
	return func_360((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_360(vector3 vParam0)
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

Vector3 func_361(int iParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return 0f, 0f, 0f;
	}
	_get_anim_scene_origin(iParam0, &vVar0, &uVar3, 2);
	return vVar0;
}

bool func_362(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_363(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_464(iVar0);
}

int func_364(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1506259487:
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
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

int func_365(int iParam0)
{
	if (!func_465(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

var func_366(int iParam0)
{
	Var1 = { func_271(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

bool func_367(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_368(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

bool func_369(int iParam0)
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

void func_370(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_466(iParam0, iParam1))
		{
			if (func_467(iParam0, iParam1))
			{
				if (func_468(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_469(iParam0);
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

void func_371(int iParam0, int iParam1, bool bParam2)
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

void func_372(int iParam0, bool bParam1)
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

void func_373(int iParam0, int iParam1)
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

bool func_374(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_375(var uParam0, int iParam1)
{
	func_470(uParam0, iParam1);
}

bool func_376(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_377(int iParam0)
{
	return func_290(iParam0, Global_1310750->f_16072 | 64);
}

void func_378(int iParam0)
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

void func_379(int iParam0, int iParam1, bool bParam2)
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

bool func_380(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_group_member(iParam0, func_471(), 1))
	{
		return true;
	}
	return false;
}

float func_381(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_382(int iParam0)
{
	if (!func_472(iParam0))
	{
		return false;
	}
	return func_473(iParam0, 33554432);
}

int func_383()
{
	return Global_40.f_4283.f_1;
}

int func_384(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 115)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

int func_385(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2137625828;
		case 1:
			return 1039226266;
		case 2:
			return 493546894;
		case 3:
			return -2119728378;
		case 4:
			if (!bParam1 || func_89() != -1)
			{
				return -1308265478;
			}
			if (func_275(45))
			{
				return -1308265478;
			}
			else
			{
				return -1738342532;
			}
			break;
		case 5:
			return -1147969487;
		case 6:
			return -1147969487;
		case 7:
			return -1147969487;
		case 8:
			return 537788226;
		case 9:
			return -1391142299;
		case 10:
			return 1178102426;
		case 11:
			return 1608357655;
		case 12:
			if (!bParam1 || func_89() != -1)
			{
				return -650528936;
			}
			if (func_275(45))
			{
				return -650528936;
			}
			else
			{
				return 139139039;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_89() != -1)
			{
				return -877373104;
			}
			if (func_275(45))
			{
				return -877373104;
			}
			else
			{
				return -1618764825;
			}
			break;
	}
	return 0;
}

void func_386(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_387(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_388(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_386(uParam0, 4);
	}
	else
	{
		func_387(uParam0, 4);
	}
}

void func_389(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_386(uParam0, 8);
	}
	else
	{
		func_387(uParam0, 8);
	}
}

void func_390(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_386(uParam0, 16);
	}
	else
	{
		func_387(uParam0, 67108864);
		func_387(uParam0, 16);
	}
}

void func_391(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_386(uParam0, 32);
	}
	else
	{
		func_387(uParam0, 32);
	}
}

void func_392(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_386(uParam0, 64);
	}
	else
	{
		func_387(uParam0, 64);
	}
}

void func_393(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_386(uParam0, 1024);
	}
	else
	{
		func_387(uParam0, 1024);
	}
}

void func_394(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_386(uParam0, 1048576);
	}
	else
	{
		func_387(uParam0, 1048576);
	}
}

int func_395(var uParam0, int iParam1)
{
	iVar0 = -1;
	iVar0 = func_474(iParam1);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar0 = func_475(iParam1);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar0 = func_476(iParam1);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	return -1;
}

int func_396(int iParam0)
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

int func_397(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_398(int iParam0)
{
	return func_477(iParam0, 2);
}

void func_399(var uParam0, bool bParam1, int iParam2)
{
	func_478(iParam2);
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
		uParam0->f_13 = func_479(0);
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
							func_386(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_480(1))
						{
							func_386(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_480(1) || *uParam0 & 8192 != 0))
				{
					func_387(uParam0, 33554432);
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
			if (func_481(uParam0))
			{
				uParam0->f_15 = func_418();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_418() - uParam0->f_15) > 500)
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
	func_482(uParam0);
}

bool func_400(int iParam0, var uParam1)
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
			if (!func_483(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_484(iParam0, iVar2) <= func_485(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_401(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_486(iParam2, 1, 1, 1, 0))
	{
		func_386(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_428(uParam1, 1);
	func_487();
}

bool func_402(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_488(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_489(uParam1);
			if (func_490(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_491(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_428(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_428(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_403(int iParam0, int iParam1, var uParam2)
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
	if (func_492(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_489(uParam2);
		if (func_490(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_491(uParam2)
				{
					func_428(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_404(int iParam0, var uParam1)
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
	if (func_483(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_491(uParam1)
		{
			fVar3 = func_489(uParam1);
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

bool func_405(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_418();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_406(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_493(uParam2);
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
			if (func_414(uParam2, iParam1))
			{
				func_428(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_407(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_494(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_414(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_428(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_408(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_495(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_428(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_428(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_496(iParam1, vVar0, vVar4))
					{
						func_428(uParam2, 1);
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
					func_428(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_496(iParam1, vVar0, vVar7))
					{
						func_428(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_409(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_483(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_497(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_498(&(Global_1935630->f_34[iVar0])))
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
			if (func_499(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_500(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_501(uParam1, iParam0, fVar1, iVar0))
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

bool func_410(int iParam0, var uParam1)
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

bool func_411(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_418();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_412(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_502(iVar0, &iVar2))
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
	if (func_503(iVar0, iParam0))
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

int func_413(var uParam0, int iParam1)
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

bool func_414(var uParam0, int iParam1)
{
	if (func_504(uParam0))
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

bool func_415(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_358(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_416()
{
}

bool func_417(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_505(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_418();
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
						if (func_54(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_418();
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

int func_418()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_419()
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
	if ((func_418() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_420(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_485(uParam0);
	if (uParam0->f_12 > func_506(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_507(iParam1);
	iVar1 = func_508(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, true, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_421(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_509(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_422(int iParam0, var uParam1)
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
		if (func_510(iParam0, uParam1, 1))
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
					if (!func_511(uParam1, iParam0))
					{
						if (func_54(iVar4, Global_36, 1) < 7f)
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

bool func_423(int iParam0, var uParam1)
{
	if (!func_340(0))
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

bool func_424(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_418();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_425(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_426(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_418();
	}
	else if (func_418() - uParam1->f_4) > func_512(uParam1)
	{
		return func_513(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_427(var uParam0, int iParam1)
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

void func_428(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_386(uParam0, 134217728);
	}
	else
	{
		func_387(uParam0, 134217728);
	}
}

int func_429(int iParam0)
{
	if (!func_314(iParam0))
	{
		return -1;
	}
	return func_514(iParam0);
}

void func_430(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_431()
{
	_0xdd1232b332cbb9e7(4, 1, 0);
}

bool func_432()
{
	return (Global_1894899 & 1 != 0 && func_96() != -1);
}

float func_433(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_358(Global_35, iParam0, bParam1, bParam2);
}

bool func_434(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_435(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_515(iParam0, &Var0);
}

int func_436(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_437(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_438(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_516(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_516(iVar4) && iVar4 != iVar0)
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
	if (func_89() == -1 && !func_517(iVar0))
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
				if (func_517(-183018591))
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
		if (iParam0 != Global_35 && func_516(iVar0))
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
		func_518(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_519(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_520(iVar0))
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

void func_439(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

bool func_440()
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

void func_441(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_442(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_443(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_323(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_444(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_323(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_445(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_323(iParam0);
	if (bParam1)
	{
		func_521(iParam0, 4);
		func_522(iVar0, 1);
		func_523(iVar0, 1);
	}
	else
	{
		func_524(iParam0, 4);
		func_523(iVar0, 0);
	}
}

void func_446(int* iParam0, char* sParam1)
{
	if (func_211(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_444(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_442(iParam0, 1);
}

float func_447(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_448(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_525(iParam0, iParam1))
		{
			if (!func_279(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_93(uParam2, 0, 0, 1, 0);
				func_386(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_279(iParam1->f_10, 1))
		{
			func_526(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_387(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_449(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_527(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_450(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_528(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_279(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_451(int iParam0)
{
	if (func_279(iParam0, 4))
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
	if (func_279(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_279(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_452(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_67(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_529(Global_35)) || func_530(Global_35)) || func_531(Global_35));
	fVar12 = -1f;
	if (func_71(&(iParam1->f_13)))
	{
		fVar12 = func_141(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_211((*uParam4)[iVar0]->f_6);
		func_532(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_533(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_534(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_93(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_535(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_92(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_536(iParam1, fParam6, iParam1->f_9))
					{
						func_34(&(iParam1->f_18));
						if (bVar6)
						{
							func_535(uParam4, 0, 0);
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
		func_537(iParam1, fParam2);
	}
	return bVar5;
}

void func_453(var uParam0)
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

void func_454(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_538((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_537(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_455(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_539(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_462(iParam1, 0);
				func_92(iParam1, uParam2, func_351(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_456(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_34(&(iParam1->f_18));
			return false;
		}
		else if (func_71(&(iParam1->f_18)))
		{
			func_73(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_71(&(iParam1->f_18)))
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
	return func_259(&(iParam1->f_18), fParam2);
	return true;
}

void func_457(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_532(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_458(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_459(int* iParam0)
{
	if (func_351(iParam0, 0))
	{
		if (func_540(iParam0))
		{
			func_458(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_460(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_211(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_209(&(iParam1->f_6), 0, 1);
	}
	if (!func_211(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_538(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_541(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_211(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_542(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_543(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_544(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_443(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_543(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_445(iParam1->f_6, 0, 1);
				}
				else
				{
					func_445(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_461(int iParam0)
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

void func_462(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_463(int* iParam0, int iParam1)
{
	if (!func_356(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_441(iParam0, 14);
		}
	}
}

int func_464(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_545(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_465(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_466(int iParam0, int iParam1)
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

bool func_467(int iParam0, int iParam1)
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

bool func_468(int iParam0, int iParam1)
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
	if (!func_466(iParam0, iVar0))
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

void func_469(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_470(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_471()
{
	return get_player_group(get_player_index());
}

bool func_472(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_473(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

int func_474(int iParam0)
{
	return func_546(iParam0, 3);
}

int func_475(int iParam0)
{
	return func_546(iParam0, 2);
}

int func_476(int iParam0)
{
	return func_546(iParam0, 1);
}

bool func_477(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_478(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_344();
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
			func_547(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_479(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_480(bool bParam0)
{
	if (func_548(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_481(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_89() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_549(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_549(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_508(iVar0) == -1)
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

void func_482(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_550(uParam0);
	}
}

bool func_483(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_508(iParam2);
	}
	else
	{
		iVar1 = func_507(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_508(iParam0);
	}
	else
	{
		iVar0 = func_507(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_279(*uParam1, 8388608))
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

float func_484(int iParam0, int iParam1)
{
	return func_358(iParam0, iParam1, 1, 1);
}

float func_485(var uParam0)
{
	return uParam0->f_26;
}

bool func_486(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_487()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_488(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_358(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_227(iVar0, 0)))
		{
			if (func_125(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_489(var uParam0)
{
	return uParam0->f_17;
}

bool func_490(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_279(*uParam0, 4194304))
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

int func_491(var uParam0)
{
	return uParam0->f_18;
}

bool func_492(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_227(iVar0, 0)))
		{
			if (func_245(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_493(var uParam0)
{
	return uParam0->f_23;
}

int func_494(var uParam0)
{
	return uParam0->f_21;
}

int func_495(var uParam0)
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

bool func_496(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_374(iParam0, vParam4, 0.5f))
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

int func_497(int iParam0)
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
	if (func_551(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_498(int iParam0)
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

bool func_499(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_552(iParam1))
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

bool func_500(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_552(iParam1))
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

bool func_501(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_552(iParam1))
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

bool func_502(int iParam0, int iParam1)
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

bool func_503(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_553(iParam0, 1, 0, 0) != 2055893578)
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

bool func_504(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_505(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_54(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_506(var uParam0)
{
	return uParam0->f_24;
}

int func_507(int iParam0)
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

int func_508(int iParam0)
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

int func_509(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_502(Global_35, &iVar1))
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
		fVar2 = func_358(iParam0, player_ped_id(), 0, 1);
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
		if (func_358(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_510(int iParam0, var uParam1, bool bParam2)
{
	func_548(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_511(uParam1, iVar0))
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
				if (!bParam2 || !func_511(uParam1, iVar1))
				{
					if (func_54(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_511(var uParam0, int iParam1)
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

int func_512(var uParam0)
{
	return uParam0->f_20;
}

int func_513(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_514(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_554(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_515(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_516(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_517(int iParam0)
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

int func_518(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_555(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_556((386 + iVar28), 1);
			if (func_557(iParam0, &Var0, iVar5, 0))
			{
				if (func_558(iParam0, &Var6, iVar5))
				{
					Var29 = { func_559(iParam0, Var0, iVar5, 0) };
					func_560(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_561(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_562(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_563(iParam0, iParam1);
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

void func_519(int iParam0, int iParam1, float fParam2)
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

bool func_520(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

void func_521(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_522(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_477(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_523(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_524(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

bool func_525(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_564((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_526(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_538((*uParam0)[iVar0]))
		{
			func_441((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

bool func_527(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_343(16))
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
					func_565(16);
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

void func_528(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_460(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

bool func_529(int iParam0)
{
	return (func_566(iParam0, 4) || func_566(iParam0, 5));
}

int func_530(int iParam0)
{
	return func_566(iParam0, 7);
}

int func_531(int iParam0)
{
	return func_566(iParam0, 6);
}

void func_532(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_538(iParam1))
		{
			clear_bit(iParam1, 14);
			func_460(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_533(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_567(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_568(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_445(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_445(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_542(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_534(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_569(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_570(iParam1, 1))
	{
		func_571(iParam1, 1);
		return true;
	}
	return false;
}

void func_535(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_357((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_536(int* iParam0, float fParam1, bool bParam2)
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

void func_537(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_538(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_539(int iParam0)
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

bool func_540(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

int func_541(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_477(iVar0, 2))
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
				func_572(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_542(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_211(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_323(iParam0);
	func_543(iParam0, 18, 0, 1);
	func_543(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

void func_543(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_323(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_544(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_323(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

int func_545(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return -1506259487;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
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

int func_546(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (iParam0[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_547(var uParam0, var uParam1)
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

bool func_548(bool bParam0, int iParam1, int iParam2)
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

int func_549(var uParam0)
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

void func_550(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_387(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_386(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_551(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_552(int iParam0)
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

int func_553(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_554(int iParam0)
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

struct<5> func_555(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_573(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_574(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_559(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_575(bParam1) };
			if (bParam2 && func_576(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_557(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_557(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_558(iParam0, &Var5, 1728382685))
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
			Var0 = { func_577(bParam1) };
			switch (func_365(iParam0))
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
			if (func_578(iParam0, -1823706425))
			{
				Var0 = { func_559(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_578(iParam0, -1483207246))
			{
				Var0 = { func_559(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_579(Var0, &Var27, bParam1, 0))
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

int func_556(int iParam0, int iParam1)
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

bool func_557(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_580(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_558(int iParam0, var uParam1, int iParam2)
{
	if (func_581(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_559(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_465(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_582(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_560(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_583(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_579(*uParam1, &Var0, bParam6, 0))
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
	if (!func_561(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_582(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_561(bool bParam0)
{
	if (func_89() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_582(bParam0));
}

int func_562(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_584(iParam0))
	{
		return 0;
	}
	if (!func_561(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_563(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_585(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

int func_564(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_565(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_566(int iParam0, int iParam1)
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

bool func_567(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_568(int iParam0, bool bParam1)
{
	if (bParam1 && !func_211(iParam0))
	{
		return false;
	}
	return !func_477(iParam0, 4);
}

bool func_569(int iParam0, bool bParam1)
{
	if (bParam1 && !func_211(iParam0))
	{
		return false;
	}
	iVar0 = func_323(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_570(int iParam0, bool bParam1)
{
	if (bParam1 && !func_211(iParam0))
	{
		return false;
	}
	iVar0 = func_323(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_571(int iParam0, bool bParam1)
{
	if (bParam1 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_323(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

void func_572(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_522(iParam0, 1);
	func_523(iParam0, 1);
	func_524(iParam0, 128);
}

struct<4> func_573(bool bParam0)
{
	return func_559(1328661203, func_586(), -1591664384, bParam0);
}

int func_574(int iParam0)
{
	if (!func_465(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_575(bool bParam0)
{
	iVar0 = func_582(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_559(923904168, func_573(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_559(923904168, func_573(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_559(923904168, func_573(bParam0), -740156546, 0);
}

bool func_576(int iParam0, bool bParam1)
{
	if (func_365(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_275(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_577(bool bParam0)
{
	iVar0 = func_582(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_559(271701509, func_573(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_559(271701509, func_573(bParam0), 12999093, 0);
}

bool func_578(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_365(iParam0);
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

bool func_579(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_582(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_580(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_465(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_559(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_582(bParam6), &Var0, 0);
	return uVar4;
}

bool func_581(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_582(0);
	*uParam1 = { func_559(iParam0, func_575(0), iParam3, 0) };
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

int func_582(bool bParam0)
{
	if (func_89() == -1)
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

bool func_583(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_584(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_585(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

struct<4> func_586()
{
	return Var0;
}

