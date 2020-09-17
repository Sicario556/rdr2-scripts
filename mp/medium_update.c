void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	network_set_script_is_safe_for_network_game();
	func_1(32);
	func_2(Var0[0]);
	func_3(Var0[1]);
	func_4(Var0[2]);
	func_5(Var0[3]);
	func_6(Var0[4]);
	func_7(Var0[5]);
	func_8(Var0[6]);
	func_9(Var0[7]);
	func_10(Var0[8]);
	func_11(Var0[9]);
	func_12(Var0[10]);
	func_13(Var0[11]);
	func_14(Var0[12]);
	func_15(Var0[13]);
	func_16(Var0[14]);
	func_17(Var0[15]);
	iVar113 = 0;
	while (iVar113 < Var0)
	{
		Call_Loc(&Var0[iVar113]);
		func_18(&(Var0[iVar113]->f_6), 1);
		iVar113++;
	}
	func_19(32);
	while (Global_1572887->f_9)
	{
		wait(0);
	}
	while (!func_20(256))
	{
		wait(0);
	}
	func_19(4);
	while (!_0x9e4ef615e307fbbe())
	{
		Global_1940258->f_6 = is_entity_dead(Global_34);
		if (_0x9e4ef615e307fbbe())
		{
		}
		else
		{
			iVar113 = 0;
			while (iVar113 < Var0)
			{
				Call_Loc(Var0[iVar113]->f_1);
				Global_1940258->f_6 = is_entity_dead(Global_34);
				if (_0x9e4ef615e307fbbe())
				{
				}
				else
				{
					wait(0);
					iVar113++;
				}
			}
		}
	}
	while (!_0x380ffa15b72408fb(1440))
	{
		wait(0);
	}
	func_21(&Var0);
	terminate_this_thread();
}

void func_1(int iParam0)
{
	Global_18 = (Global_18 - (Global_18 && iParam0));
}

void func_2(var uParam0)
{
	*uParam0 = 1191;
	uParam0->f_1 = 1199;
	uParam0->f_2 = 1191;
	StringCopy(&(uParam0->f_3), "PLAYER MEDIUM", 24);
	uParam0->f_6 = 6;
}

void func_3(var uParam0)
{
	*uParam0 = 1191;
	uParam0->f_1 = 1658;
	uParam0->f_2 = 1191;
	StringCopy(&(uParam0->f_3), "FEED", 24);
	uParam0->f_6 = 6;
}

void func_4(var uParam0)
{
	*uParam0 = 1191;
	uParam0->f_1 = 1715;
	uParam0->f_2 = 1191;
	StringCopy(&(uParam0->f_3), "SCRIPT_LAUNCHER", 24);
	uParam0->f_6 = 6;
}

void func_5(var uParam0)
{
	*uParam0 = 1191;
	uParam0->f_1 = 1776;
	uParam0->f_2 = 1191;
	StringCopy(&(uParam0->f_3), "LAW(M)", 24);
	uParam0->f_6 = 6;
}

void func_6(var uParam0)
{
	*uParam0 = 1788;
	uParam0->f_1 = 1845;
	uParam0->f_2 = 2551;
	StringCopy(&(uParam0->f_3), "FOCUS_VOLUMES", 24);
	uParam0->f_6 = 6;
}

void func_7(var uParam0)
{
	*uParam0 = 2584;
	uParam0->f_1 = 2592;
	uParam0->f_2 = 1191;
	StringCopy(&(uParam0->f_3), "AGGRO CACHE", 24);
	uParam0->f_6 = 6;
}

void func_8(var uParam0)
{
	*uParam0 = 1191;
	uParam0->f_1 = 2825;
	uParam0->f_2 = 1191;
	StringCopy(&(uParam0->f_3), "HUD MEDIUM", 24);
	uParam0->f_6 = 6;
}

void func_9(var uParam0)
{
	*uParam0 = 1191;
	uParam0->f_1 = 2904;
	uParam0->f_2 = 1191;
	StringCopy(&(uParam0->f_3), "PERSONA PHOTOS", 24);
	uParam0->f_6 = 4;
}

void func_10(var uParam0)
{
	*uParam0 = 3224;
	uParam0->f_1 = 3236;
	uParam0->f_2 = 1191;
	StringCopy(&(uParam0->f_3), "SALOON MANAGER", 24);
	uParam0->f_6 = 6;
}

void func_11(var uParam0)
{
	*uParam0 = 1191;
	uParam0->f_1 = 3439;
	uParam0->f_2 = 3834;
	StringCopy(&(uParam0->f_3), "DM AMB. MANAGER", 24);
	uParam0->f_6 = 4;
}

void func_12(var uParam0)
{
	*uParam0 = 3866;
	uParam0->f_1 = 3909;
	uParam0->f_2 = 1191;
	StringCopy(&(uParam0->f_3), "REPEATED_SOUNDS(M)", 24);
	uParam0->f_6 = 6;
}

void func_13(var uParam0)
{
	*uParam0 = 1191;
	uParam0->f_1 = 3984;
	uParam0->f_2 = 4116;
	StringCopy(&(uParam0->f_3), "FLOW CAMP MANAGER", 24);
	uParam0->f_6 = 4;
}

void func_14(var uParam0)
{
	*uParam0 = 1191;
	uParam0->f_1 = 4144;
	uParam0->f_2 = 1191;
	StringCopy(&(uParam0->f_3), "NET CUTSCENE HANDLER", 24);
	uParam0->f_6 = 4;
}

void func_15(var uParam0)
{
	*uParam0 = 1191;
	uParam0->f_1 = 4182;
	uParam0->f_2 = 1191;
	StringCopy(&(uParam0->f_3), "NET FLOW HELP", 24);
	uParam0->f_6 = 4;
}

void func_16(var uParam0)
{
	*uParam0 = 4333;
	uParam0->f_1 = 4350;
	uParam0->f_2 = 4878;
	StringCopy(&(uParam0->f_3), "STORY_MISSION_COOP", 24);
	uParam0->f_6 = 4;
}

void func_17(var uParam0)
{
	*uParam0 = 1191;
	uParam0->f_1 = 4895;
	uParam0->f_2 = 1191;
	StringCopy(&(uParam0->f_3), "NET_FLOW_REPLAY_MANAGER", 24);
	uParam0->f_6 = 4;
}

void func_18(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_19(int iParam0)
{
	Global_18 = (Global_18 || iParam0);
}

bool func_20(int iParam0)
{
	return (Global_18 && iParam0) != 0;
}

void func_21(int iParam0)
{
	func_48(iParam0);
}

void func_22()
{
}

void func_23()
{
	if (func_49(Global_1940258->f_38) && (_is_weapon_rifle(Global_1940258->f_38) || _is_weapon_repeater(Global_1940258->f_38)))
	{
		Global_1940258->f_39 = Global_1940258->f_38;
	}
	if (func_50() == -1)
	{
		if ((_0xb16223cb7da965f0(get_player_index()) && _0x1e8099f449abb0ba(get_player_index())) && !_0xc93a9a45430d484e(get_player_index()))
		{
			iVar0 = _get_deadeye_ability_level(get_player_index());
			if ((!func_51(681) && !func_52(681)) && iVar0 == 2)
			{
				func_53(681, 0);
			}
			else if ((!func_51(682) && !func_52(682)) && iVar0 == 3)
			{
				func_53(682, 0);
			}
			else if ((!func_51(683) && !func_52(683)) && iVar0 == 4)
			{
				func_53(683, 0);
			}
			else if ((!func_51(684) && !func_52(684)) && iVar0 == 5)
			{
				func_53(684, 0);
			}
		}
	}
	if (!is_entity_dead(Global_34))
	{
		if (func_54(0, 0, 1))
		{
			if (_0x336b3d200ab007cb(Global_34, Global_35, 50f, 0) > 0)
			{
				set_ped_config_flag(Global_34, 424, true);
			}
			else
			{
				set_ped_config_flag(Global_34, 424, false);
			}
		}
		else
		{
			set_ped_config_flag(Global_34, 424, false);
		}
	}
	Var1.f_9 = -1591664384;
	if (func_56(func_55(0), 1782082944, &Var1, 0, 0))
	{
		Var15.f_9 = -1591664384;
		if (func_57(&Var15))
		{
			func_58(Var1, Var15, -1824203570, 0, 0);
			func_59(&Var1, 1);
		}
	}
}

void func_24()
{
	if (Global_1903125->f_5 > 0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (Global_1903125[iVar0] != 0)
			{
				func_60(iVar0);
			}
			iVar0++;
		}
	}
}

void func_25()
{
	if (Global_1939493->f_161 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (!is_string_null_or_empty(&((*Global_1939493)[iVar0]->f_10)))
			{
				func_61(iVar0);
			}
			iVar0++;
		}
	}
}

void func_26()
{
	func_62();
}

void func_27()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*Global_1956131)[iVar0]->f_1 = 0;
		(*Global_1956131)[iVar0]->f_2 = 0;
		(*Global_1956131)[iVar0] = 0;
		iVar0++;
	}
}

void func_28()
{
	iVar0 = func_63();
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	bVar5 = false;
	bVar6 = is_ped_injured(iVar0);
	bVar7 = (!bVar6 && is_ped_in_combat(iVar0, 0));
	bVar8 = (&Global_1956129 % 2) == false;
	bVar9 = (does_entity_exist(iVar0) && (is_ped_active_in_scenario(iVar0, 1) || is_ped_using_any_scenario(iVar0)));
	Global_1956129 = &Global_1956129 + 1;
	iVar4 = func_64(0, 0);
	if (iVar4 != -1)
	{
		if (!_does_volume_exist((*Global_1956131)[iVar4]->f_1) || !is_entity_in_volume(iVar0, (*Global_1956131)[iVar4]->f_1, true, 0))
		{
			func_65(iVar4, 1, 1);
			iVar4 = -1;
			bVar5 = true;
		}
	}
	if (iVar4 != -1 && bVar9)
	{
		func_65(iVar4, 1, 1);
		iVar4 = -1;
		bVar5 = true;
	}
	if (bVar9)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (_does_volume_exist((*Global_1956131)[iVar1]->f_1))
		{
			iVar2 = iVar1;
			if (!func_66(iVar1, 64, 1))
			{
				if (!is_thread_active((*Global_1956131)[iVar1]->f_3, false))
				{
					if (iVar1 == iVar4)
					{
						func_65(-1, 1, 1);
						iVar4 = -1;
						bVar5 = true;
					}
					func_67(&iVar2, 1);
				}
				else
				{
					if (bVar7)
					{
						if (func_66(iVar1, 16, 1))
						{
							if (iVar4 == iVar1)
							{
								func_65(-1, 1, 1);
								iVar4 = -1;
								bVar5 = true;
							}
							func_67(&iVar2, 1);
							Jump @555; //curOff = 346
						}
						else if (!func_66(iVar1, 1, 1))
						{
							if (func_66(iVar1, 32, 1))
							{
								func_68(iVar1, 1, 1);
								if (iVar4 == iVar1)
								{
									func_65(-1, 1, 1);
									iVar4 = -1;
									bVar5 = true;
								}
							}
						}
					}
					if (iVar3 == -1)
					{
						if (!bVar5 && iVar1 != iVar4)
						{
							if ((!func_66(iVar3, 1, 1) && _does_volume_exist((*Global_1956131)[iVar1]->f_1)) && is_entity_in_volume(iVar0, (*Global_1956131)[iVar1]->f_1, true, 0))
							{
								if (!is_entity_dead((*Global_1956131)[iVar1]->f_2) || !func_66(iVar1, 8, 1))
								{
									if (!bVar7 || !(func_66(iVar1, 16, 1) || func_66(iVar1, 32, 1)))
									{
										iVar3 = iVar1;
									}
								}
							}
						}
					}
				}
				iVar1++;
				if (bVar5)
				{
					return;
				}
				if (iVar4 != -1)
				{
					if (func_66(iVar4, 1, 1))
					{
						func_65(-1, 1, 1);
						return;
					}
					if (bVar8)
					{
						if (_0xa24c1d341c6e0d53(1, 1, 1))
						{
							if (func_69())
							{
								func_65(-1, 1, 1);
							}
							return;
						}
					}
					if (iVar3 != -1)
					{
						func_65(-1, 1, 1);
						return;
					}
				}
				else if ((iVar3 != -1 && !func_66(iVar3, 1, 1)) && _does_volume_exist((*Global_1956131)[iVar3]->f_1))
				{
					func_65(-1, 1, 1);
					func_70(iVar3);
				}
			}
		}
	}
}

void func_29()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_67(&iVar0, 1);
		iVar0++;
	}
}

void func_30()
{
}

void func_31()
{
	if (Global_1940258->f_6 || (Global_1572887->f_13 == 0 && !func_71()))
	{
		Global_1940258->f_26 = 0;
		Global_1940258->f_18 = 0;
		Global_1940258->f_27 = 0;
		return;
	}
	if (Global_1572887->f_13 == -1 || does_entity_exist(Global_34))
	{
		Global_1940258->f_26 = func_72(Global_34);
		Global_1940258->f_27 = func_72(Global_1940258->f_35);
		Global_1940258->f_18 = _0x336b3d200ab007cb(Global_34, Global_35, 30f, 16900) > 0;
		if (!Global_1940258->f_18)
		{
			iVar0 = _0xd0b7aeb56229d317(Global_34);
			if (does_entity_exist(iVar0))
			{
				if (is_ped_human(iVar0))
				{
					if (!is_entity_a_mission_entity(iVar0))
					{
						Global_1940258->f_18 = 1;
					}
				}
			}
		}
	}
	if (Global_1940258->f_50)
	{
		if ((get_game_timer() - Global_1940258->f_49) > 1500)
		{
			Global_1940258->f_50 = 0;
		}
	}
}

void func_32()
{
	func_73();
	if (!_databinding_is_data_id_valid(Global_1940144->f_43))
	{
		func_74();
	}
	if (!_databinding_is_data_id_valid(Global_1940144->f_47))
	{
		func_75();
	}
	if (Global_1940144->f_26)
	{
		if (!_0xec7e480ff8bd0bed(Global_34))
		{
			_0xd962f8579d702db5();
			Global_1940144->f_26 = 0;
		}
	}
}

void func_33()
{
	if (func_50() == -1)
	{
		return;
	}
	if (Global_1139381->f_5079.f_325 <= 0)
	{
		return;
	}
	if (network_is_game_in_progress() == 0)
	{
		return;
	}
	vVar0 = -1;
	switch (Global_1139381->f_5079.f_322)
	{
		case 0:
			func_76(1);
			break;
		case 1:
			request_script_with_name_hash(1377745958);
			if (has_script_with_name_hash_loaded(1377745958) && get_number_of_free_stacks_of_this_size(1024) > 0)
			{
				func_76(2);
			}
			break;
		case 2:
			vVar0.x = &Global_1139381->f_5079.f_326[Global_1139381->f_5079.f_323];
			vVar0.f_2 = Global_1139381->f_5079.f_326[Global_1139381->f_5079.f_323]->f_2;
			if (get_number_of_free_stacks_of_this_size(1024) <= 0)
			{
				return;
			}
			Global_1139381->f_5079.f_480 = start_new_script_with_name_hash_and_args(1377745958, &vVar0, 3, 1024);
			func_76(3);
			break;
		case 3:
			if (func_77())
			{
			}
			else
			{
				Global_1139381->f_5079.f_325 = (Global_1139381->f_5079.f_325 - 1);
				Global_1139381->f_5079.f_323 = (Global_1139381->f_5079.f_323 + 1 % 50);
				Global_1139381->f_5079.f_321 = 0;
				func_76(0);
			}
	}
}

void func_34()
{
	func_78();
}

void func_35()
{
	Global_1940018 = &Global_1940018 + 1;
	if (&Global_1940018 >= 3)
	{
		Global_1940018 = 0;
	}
	func_79(&Global_1940018);
	if (!func_80(&Global_1940018))
	{
		return;
	}
	func_81();
	func_84(func_83(func_82(), &Global_1940018));
	func_85(&Global_1940018);
	if (func_86(&Global_1940258, 4194304) || func_87(32768))
	{
		return;
	}
	if (is_thread_active(&(Global_1940018->f_42[&Global_1940018]), false) || is_thread_active(&(Global_1940018->f_46[&Global_1940018]), false))
	{
		func_88(&Global_1940018);
	}
	if (!is_thread_active(&(Global_1940018->f_46[&Global_1940018]), false))
	{
		if (func_89(&uVar0))
		{
			func_90();
		}
	}
	func_91();
}

void func_36()
{
	if (!_unlock_is_unlocked(956799153))
	{
		if (is_thread_active(Global_1210882->f_212, false))
		{
			_0x7de4643157ad646c(Global_1210882->f_212);
		}
		return;
	}
	if (func_92(&Global_1210882, 16))
	{
		if (!is_thread_active(Global_1210882->f_212, false))
		{
			func_93(Global_1210882, 4);
			func_93(Global_1210882, 8);
			func_93(Global_1210882, 16);
		}
		return;
	}
	if (&Global_1048577)
	{
		func_93(Global_1210882, 4);
		func_93(Global_1210882, 8);
		func_93(Global_1210882, 16);
		return;
	}
	if (func_94(0, 0))
	{
		func_93(Global_1210882, 4);
		func_93(Global_1210882, 8);
		func_93(Global_1210882, 16);
		return;
	}
	if (func_95())
	{
		func_93(Global_1210882, 4);
		func_93(Global_1210882, 8);
		func_93(Global_1210882, 16);
		return;
	}
	if (!func_92(&Global_1210882, 4))
	{
		request_script_with_name_hash(-1113941475);
		func_96(Global_1210882, 4);
	}
	else if (!func_92(&Global_1210882, 8))
	{
		if (has_script_with_name_hash_loaded(-1113941475))
		{
			func_96(Global_1210882, 8);
		}
	}
	if (func_92(&Global_1210882, 8) && !func_92(&Global_1210882, 16))
	{
		if (_0x1b89bc43b6e69107(-1113941475, -1, 1, 0))
		{
			return;
		}
		if (get_number_of_free_stacks_of_this_size(1024) <= 0)
		{
			return;
		}
		iVar0 = get_cloud_time_as_int();
		Global_1210882->f_212 = start_new_script_with_name_hash_and_args(-1113941475, &iVar0, 1, 1024);
		func_96(Global_1210882, 16);
	}
}

void func_37()
{
	if (is_thread_active(Global_1210882->f_212, false))
	{
		_0x7de4643157ad646c(Global_1210882->f_212);
	}
}

void func_38()
{
	iVar0 = 0;
	while (iVar0 < 24)
	{
		(*Global_1957967)[iVar0] = -1;
		iVar0++;
	}
	Global_1957967->f_25 = 0;
}

void func_39()
{
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (Global_1957967[iVar0] != -1)
		{
			if (_0x84848e1c0fc67dbb(Global_1957967[iVar0]))
			{
				release_sound_id(Global_1957967[iVar0]);
				(*Global_1957967)[iVar0] = -1;
			}
		}
		iVar0++;
	}
}

void func_40()
{
	if (func_97())
	{
		return;
	}
	iVar0 = get_cloud_time_as_int();
	if (absi((iVar0 - Global_1211286->f_1)) < 5)
	{
		return;
	}
	else
	{
		Global_1211286->f_1 = iVar0;
	}
	if (is_thread_active(&Global_1211286, false))
	{
		return;
	}
	if (get_number_of_free_stacks_of_this_size(6000) <= 0)
	{
		return;
	}
	request_script_with_name_hash(-325626406);
	if (!has_script_with_name_hash_loaded(-325626406))
	{
		return;
	}
	iVar1 = iVar0;
	Global_1211286 = start_new_script_with_name_hash_and_args(-325626406, &iVar1, 1, 6000);
}

void func_41()
{
	if (is_thread_active(&Global_1211286, false))
	{
		_0x7de4643157ad646c(&Global_1211286);
	}
}

void func_42()
{
	if (func_98())
	{
		func_99();
		return;
	}
	func_100();
	func_101();
	func_102();
	func_103();
}

void func_43()
{
	if (!func_104())
	{
		if (&Global_1960071)
		{
			Global_1960071 = 0;
		}
		return;
	}
	if (func_105())
	{
		Global_1960071 = 1;
		return;
	}
	if (!func_106())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_107(iVar0))
		{
			bVar1 = false;
			iVar2 = func_108(iVar0, &bVar1);
			if (bVar1)
			{
				func_53(func_109(iVar0), 1);
				func_110(iVar0);
			}
			else if (does_blip_exist(iVar2))
			{
				func_111(func_109(iVar0), iVar2, 1);
				func_110(iVar0);
			}
		}
		iVar0++;
	}
}

void func_44()
{
	func_112();
	func_113(-1);
}

void func_45()
{
	if (!network_is_game_in_progress())
	{
		return;
	}
	if (&Global_1048577)
	{
		return;
	}
	if (&Global_1048576)
	{
		return;
	}
	if (func_115(func_114(), 256, 0))
	{
		return;
	}
	if (!func_116(255))
	{
		return;
	}
	if (!_network_is_player_index_valid(Global_1296859->f_16))
	{
		return;
	}
	if (!_network_is_player_index_valid(&Global_1296859))
	{
		return;
	}
	if (func_117())
	{
		return;
	}
	if (&Global_1296859 == Global_1296859->f_16)
	{
		iVar0 = -1;
		fVar1 = 1E+13f;
		iVar4 = 0;
		while (iVar4 <= 25)
		{
			iVar3 = iVar4;
			if (!func_118(iVar3, &(Global_1296859->f_154[&Global_1296859])))
			{
			}
			else if (!func_119(iVar3))
			{
			}
			else if (!(*Global_1835011)[iVar3]->f_18)
			{
			}
			else if (!_does_thread_exist((*Global_1835011)[iVar3]->f_17))
			{
			}
			else if (!is_thread_active((*Global_1835011)[iVar3]->f_17, false))
			{
			}
			else if (func_120(iVar3))
			{
			}
			else
			{
				fVar2 = func_121((*Global_1835011)[iVar3]->f_19, Global_35);
				if (fVar2 < fVar1)
				{
					iVar0 = iVar3;
					fVar1 = fVar2;
				}
			}
			iVar4++;
		}
		if (func_122(&Global_1296859, &iVar5))
		{
			if (iVar5 != iVar0)
			{
				if (!func_123(iVar0))
				{
				}
			}
		}
	}
	if (!func_122(Global_1296859->f_16, &iVar6))
	{
	}
	if (func_124() != iVar6)
	{
		if (func_125())
		{
			func_126();
		}
		func_127();
		func_128();
		func_113(iVar6);
	}
	if (!func_129(3))
	{
		iVar7 = func_124();
		if (!func_119(iVar7))
		{
			return;
		}
		if (!func_129(0))
		{
			if (func_130((*Global_1835011)[iVar7]->f_51))
			{
				func_131(0, 1);
			}
			else
			{
				return;
			}
		}
		if (!func_129(1))
		{
			if (func_132(&((*Global_263042)[&Global_1296859]->f_1), 2097152))
			{
				func_131(1, 1);
			}
			else
			{
				return;
			}
		}
		if (!func_129(2))
		{
			func_133();
			func_131(2, 1);
		}
		func_131(3, 1);
	}
}

void func_46()
{
	func_112();
	func_113(-1);
}

void func_47()
{
	switch (func_134())
	{
		case 0:
			if (((!network_is_game_in_progress() || Global_1051252->f_8) || Global_1048577) // PointerArith)
			{
			}
			else
			{
				func_135();
				func_136(0);
				Var0 = { func_137(382107261) };
				_0x91a4f58e01ed5e4c(&Var0, func_138());
				func_139(1);
				Jump @299; //curOff = 109
				if (!Global_1211315->f_8)
				{
					if (!func_140())
					{
						func_136(1);
						func_139(3);
					}
					else
					{
						func_141();
						if (!func_142())
						{
							func_139(2);
							func_143(-1);
						}
						else if (((!network_is_game_in_progress() || Global_1051252->f_8) || Global_1048577) // PointerArith)
						{
							func_139(2);
						}
						else if (Global_1211315->f_8)
						{
							if (!func_140())
							{
								func_136(1);
								func_139(3);
							}
							else
							{
								Jump @299; //curOff = 236
								if (((!network_is_game_in_progress() || Global_1051252->f_8) || Global_1048577) // PointerArith)
								{
								}
								else
								{
									func_139(0);
									Jump @299; //curOff = 277
									if (!func_140())
									{
									}
									else
									{
										func_139(0);
									}
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

void func_48(int iParam0)
{
	bVar0 = func_50() != -1;
	iVar1 = 0;
	while (iVar1 < *iParam0)
	{
		if ((!bVar0 && (*iParam0)[iVar1]->f_6 & 2 != 0) || (bVar0 && (*iParam0)[iVar1]->f_6 & 4 != 0))
		{
			Call_Loc((*iParam0)[iVar1]->f_2);
		}
		iVar1++;
	}
}

bool func_49(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_50()
{
	return Global_1572887->f_13;
}

bool func_51(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17411.f_2565[iVar1]), iVar2);
}

bool func_52(int iParam0)
{
	func_144(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1904651[iVar0];
	return is_bit_set(iVar2, iVar1);
}

void func_53(int iParam0, bool bParam1)
{
	func_144(iParam0, &iVar0, &iVar1);
	if (!func_145(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_146(iVar0, iVar1);
}

bool func_54(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_13 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900736->f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900736->f_68;
		}
		if (func_117())
		{
			return true;
		}
		if (Global_1071686->f_3 && !Global_1572887->f_9)
		{
			if (((*Global_1056141)[network_player_id_to_int()]->f_463 && network_is_game_in_progress()) && network_is_in_tutorial_session())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900736->f_67;
		}
		else
		{
			return Global_1900736->f_68;
		}
	}
	if (iParam0 == 0 && func_148(func_147(0)))
	{
		return true;
	}
	if ((Global_1940258 && 81919 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((get_game_timer() - 5000) < &Global_1900871)
		{
			return true;
		}
	}
	switch (func_149(func_147(0)))
	{
		case -1:
			return false;
		case 2:
			return iParam0 & 1 == 0;
		case 5:
			return iParam0 & 2 == 0;
		case 3:
			return iParam0 & 16 == 0;
		case 4:
			return iParam0 & 32 == 0;
		case 7:
			return iParam0 & 1024 == 0;
		default:
			break;
	}
	return false;
}

struct<4> func_55(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_150(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_152(1328661203, func_151(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_152(1328661203, func_151(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_152(1328661203, func_151(), -1591664384, bParam0);
}

bool func_56(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_150(bParam7);
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

bool func_57(var uParam0)
{
	iVar3 = func_150(1);
	Var4.f_9 = -1591664384;
	Var18 = { func_153() };
	Var18.f_4 = -1824203570;
	Var23 = { func_154(0, -1591664384, -1591664384, Var18.f_4, 0, 0, 0) };
	func_155(&Var23, Var18);
	if (!func_156(&Var23, &iVar0, &iVar1, 1))
	{
		return false;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (func_157(&Var4, iVar2, iVar0, iVar1))
		{
			if (_0x033ee4b89f3ac545(iVar3, &Var4, Var18.f_4) > 0)
			{
			}
			else
			{
				*uParam0 = { Var4 };
				func_158(iVar0);
				return true;
			}
		}
		iVar2++;
	}
	func_158(iVar0);
	return false;
}

bool func_58(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	if (!func_159(bParam10))
	{
		return func_160(Param0, Param4, iParam8, 1, bParam9, 1, -1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_161(Param0, &Var0, 0, 0, -1))
	{
		return false;
	}
	if (func_162(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!_0xdccaa7c3bfd88862(func_150(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_163(Var14, 1, 0))
		{
		}
	}
	return true;
}

int func_59(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_161(*uParam0, &Var0, bParam1, 0, -1))
	{
		return 0;
	}
	func_164(uParam0);
	if (func_165(uParam0, bParam1))
	{
		func_166(uParam0, 0);
		return 1;
	}
	Var14 = { func_167(bParam1, 0, 1, 3) };
	if (_0x4c543d5dfcd2dafd(&Var14, uParam0))
	{
		func_166(uParam0, 0);
		return 1;
	}
	if (!func_168(uParam0, 1, bParam1))
	{
		return 0;
	}
	func_166(uParam0, 1);
	return 1;
}

void func_60(int iParam0)
{
	if (_0x59fa676177dbe4c9(Global_1903125[iParam0]) == 4)
	{
		(*Global_1903125)[iParam0] = 0;
		Global_1903125->f_5 = (Global_1903125->f_5 - 1);
		if (Global_1903125->f_5 < 0)
		{
			Global_1903125->f_5 = 0;
		}
	}
}

void func_61(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (is_string_null_or_empty(&((*Global_1939493)[iParam0]->f_10)))
	{
		return;
	}
	bVar0 = false;
	if ((*Global_1939493)[iParam0]->f_15 == 1)
	{
		bVar0 = func_169(&((*Global_1939493)[iParam0]->f_10), *(*Global_1939493)[iParam0], (*Global_1939493)[iParam0]->f_14);
	}
	else
	{
		bVar0 = func_170(&((*Global_1939493)[iParam0]->f_10), (*Global_1939493)[iParam0]->f_14);
	}
	if (bVar0)
	{
		func_171(iParam0);
	}
}

void func_62()
{
	if (func_50() != -1)
	{
		return;
	}
}

int func_63()
{
	switch (func_50())
	{
		case 0:
			return get_player_ped(player_id());
		default:
			break;
	}
	return Global_34;
}

int func_64(int iParam0, bool bParam1)
{
	iVar0 = func_63();
	if (bParam1 && is_entity_dead(iVar0))
	{
		return -1;
	}
	return &Global_1956130;
}

void func_65(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_63();
	if (!is_entity_dead(iVar0))
	{
		iVar1 = 0;
		iVar2 = iParam0;
		if (iParam0 == -1)
		{
			iVar2 = func_64(iParam1, bParam2);
			if (iVar2 != -1)
			{
				iVar1 = (*Global_1956131)[iVar2]->f_2;
				if (func_66(iVar2, 512, 1))
				{
					_0xc67a4910425f11f1(player_id(), 0);
				}
			}
		}
		task_clear_look_at(iVar0);
		_0xaac0ee3b4999abb5(iVar0, 0);
		enable_control_action(0, -128997553, true);
		if (does_entity_exist(iVar1))
		{
			if (is_entity_a_ped(iVar1))
			{
				iVar3 = get_ped_index_from_entity_index(iVar1);
				if (!is_entity_dead(iVar3))
				{
					task_clear_look_at(iVar3);
				}
			}
		}
		Global_1956130 = -1;
	}
}

bool func_66(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2 || func_172(iParam0, 1, 1))
	{
		return func_173(Global_1956131[iParam0], iParam1);
	}
	return false;
}

void func_67(int iParam0, bool bParam1)
{
	if (*iParam0 > -1 && *iParam0 < 4)
	{
		if (*Global_1956131)[*iParam0]->f_3 == get_id_of_this_thread()
		{
			if (func_64(1, 1) == *iParam0)
			{
				func_65(-1, 1, 1);
			}
			if (bParam1)
			{
				func_174((*Global_1956131)[*iParam0]->f_1);
			}
			(*Global_1956131)[*iParam0] = 0;
			(*Global_1956131)[*iParam0]->f_2 = 0;
			(*Global_1956131)[*iParam0]->f_3 = 0;
			*iParam0 = -1;
		}
	}
}

void func_68(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2 || func_172(iParam0, 1, 1))
	{
		func_175((*Global_1956131)[iParam0], iParam1);
	}
}

bool func_69()
{
	return func_176();
}

void func_70(int iParam0)
{
	if (func_172(iParam0, 1, 1))
	{
		iVar0 = func_63();
		iVar1 = (*Global_1956131)[iParam0]->f_2;
		bVar2 = func_66(iParam0, 4096, 1);
		if (does_entity_exist(iVar1))
		{
			if (!bVar2)
			{
				task_look_at_entity(iVar0, iVar1, -1, 0, 51, 0);
				_0xaac0ee3b4999abb5(iVar0, iVar1);
			}
			if (is_entity_a_ped(iVar1))
			{
				iVar3 = get_ped_index_from_entity_index(iVar1);
				if (!bVar2)
				{
					if (!is_entity_dead(iVar3))
					{
						task_look_at_entity(iVar3, iVar0, -1, 0, 51, 0);
					}
				}
				if (func_66(iParam0, 512, 1) && !is_string_null_or_empty(&((*Global_1956131)[iParam0]->f_4)))
				{
					_0x3946fc742ac305cd(player_id(), iVar3, &((*Global_1956131)[iParam0]->f_4), (*Global_1956131)[iParam0]->f_12, (*Global_1956131)[iParam0]->f_15, 0);
				}
			}
			Global_1956130 = iParam0;
		}
	}
}

bool func_71()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_5;
}

int func_72(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	iVar0 = _get_first_entity_ped_is_carrying(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (is_entity_a_ped(iVar0))
		{
			iVar1 = get_ped_index_from_entity_index(iVar0);
			return iVar1;
		}
	}
	return 0;
}

void func_73()
{
	if (is_ped_injured(Global_34))
	{
		return;
	}
	bVar0 = ((does_entity_exist(Global_1940258->f_34) || is_ped_in_any_vehicle(Global_34, false)) || is_ped_in_any_train(Global_34));
	if (&Global_1913397 == 0)
	{
		bVar2 = func_177();
		if (func_178(player_id(), 1, 1, 1))
		{
			if (Global_1940258->f_17)
			{
				if (_0x717da2281df90855(player_id()) > 0f)
				{
					fVar3 = 25f;
				}
				else
				{
					fVar3 = 40f;
				}
				iVar4 = create_itemset(true);
				if (is_itemset_valid(iVar4))
				{
					_0x0c392db374655176(Global_35, fVar3, iVar4);
					if (get_itemset_size(iVar4) <= 0)
					{
						iVar1 = 2080113112;
					}
					else
					{
						iVar1 = -1943724816;
					}
					destroy_itemset(iVar4);
				}
			}
			else
			{
				iVar1 = -1986542417;
			}
		}
		else if (func_179())
		{
			iVar1 = -547506804;
		}
		else if (bVar2)
		{
			if (bVar0)
			{
				iVar1 = func_180(get_entity_speed(Global_34), 1, -280612398, 642254004);
			}
			else
			{
				iVar1 = func_180(get_entity_speed(Global_34), 0, -117986897, -2024960240);
			}
		}
		else if (bVar0)
		{
			iVar1 = func_180(get_entity_speed(Global_34), 1, 455950385, -1943724816);
		}
		else
		{
			iVar1 = func_180(get_entity_speed(Global_34), 0, -189036996, 347777538);
		}
	}
	else
	{
		iVar1 = &Global_1913397;
	}
	if (iVar1 == iLocal_16)
	{
		return;
	}
	iLocal_16 = iVar1;
	_0x9c113883487fd53c(iLocal_16, 0);
}

void func_74()
{
	if (Global_1940144->f_95)
	{
		Global_1940144->f_43 = _databinding_add_data_container_from_path("", "quick_select_satchel_shortcut");
		Global_1940144->f_43.f_1 = _databinding_add_data_bool(Global_1940144->f_43, "isAccessible", 1);
	}
}

void func_75()
{
	if (func_50() == -1)
	{
		Global_1940144->f_47 = _databinding_add_data_container_from_path("", "quick_select_crafting_menu_shortcut");
		Global_1940144->f_47.f_1 = _databinding_add_data_bool(Global_1940144->f_47, "isAccessible", 1);
	}
}

void func_76(int iParam0)
{
	Global_1139381->f_5079.f_322 = iParam0;
}

bool func_77()
{
	return is_thread_active(Global_1139381->f_5079.f_480, false);
}

void func_78()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_181(iVar0);
		iVar0++;
	}
}

void func_79(int iParam0)
{
	if (func_50() == -1)
	{
		return;
	}
	bVar0 = func_182();
	if (bVar0)
	{
		if (!func_183(iParam0))
		{
			func_184(iParam0, 1);
		}
		if (!func_185(iParam0))
		{
			func_186(iParam0, 1);
		}
	}
	else
	{
		if (func_183(iParam0))
		{
			func_184(iParam0, 0);
		}
		if (func_185(iParam0))
		{
			func_186(iParam0, 0);
		}
	}
}

bool func_80(int iParam0)
{
	switch (func_82())
	{
		case 81:
			if (iParam0 == 0 || iParam0 == 1)
			{
				return true;
			}
			break;
		case 5:
			if (iParam0 == 2 || iParam0 == 1)
			{
				return true;
			}
			break;
		case 127:
			if (iParam0 == 0)
			{
				return true;
			}
			break;
		case 121:
			if (iParam0 == 0)
			{
				return true;
			}
			break;
		case 40:
			if (iParam0 == 0)
			{
				return true;
			}
			break;
		case 98:
			if (iParam0 == 0)
			{
				return true;
			}
			break;
		case 111:
			if (iParam0 == 2)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_81()
{
	if (Global_1940018->f_5[&Global_1940018]->f_6 == -1 || func_187(Global_1940018->f_5[&Global_1940018]->f_1))
	{
		return;
	}
	if (func_50() == 0)
	{
		return;
	}
	if (!is_valid_interior(Global_1940018->f_5[&Global_1940018]->f_9) || !is_interior_ready(Global_1940018->f_5[&Global_1940018]->f_9))
	{
		Global_1940018->f_5[&Global_1940018]->f_9 = get_interior_at_coords(Global_1940018->f_5[&Global_1940018]->f_1);
		return;
	}
	if (func_188(&Global_1940018, 524288))
	{
		if (!func_188(&Global_1940018, 1048576))
		{
			uVar0 = _0x5d1c5d8e62e8ee1c(Global_1940018->f_5[&Global_1940018]->f_9);
			_0xbfcb17895bb99e4e(uVar0, 0);
			func_189(&Global_1940018, 1048576);
		}
	}
	else if (!func_188(&Global_1940018, 524288))
	{
		if (!func_188(&Global_1940018, 1048576))
		{
			uVar1 = _0x5d1c5d8e62e8ee1c(Global_1940018->f_5[&Global_1940018]->f_9);
			_0xbfcb17895bb99e4e(uVar1, 1);
			func_189(&Global_1940018, 1048576);
		}
	}
}

int func_82()
{
	return Global_1893587->f_2;
}

int func_83(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 2:
					return 2;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 111:
			switch (iParam1)
			{
				case 2:
					return 3;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 0:
					return 5;
				case 1:
					return 6;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 8;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 0:
					return 7;
				default:
					break;
			}
			break;
		case 121:
			switch (iParam1)
			{
				case 0:
					return 4;
				default:
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 0:
					return 0;
				default:
					break;
			}
			break;
	}
	return -1;
}

void func_84(int iParam0)
{
	if (iParam0 == -1 || iParam0 == 9)
	{
		return;
	}
	if (&Global_1939084->f_55[iParam0])
	{
		if (func_50() == -1)
		{
		}
	}
}

void func_85(int iParam0)
{
	if (!func_190(Global_1940018->f_5[iParam0]->f_10, 0))
	{
		uVar0 = _0x112ddf56300bc6e5(func_191(func_83(func_82(), iParam0)));
		if (_0x800df3fc913355f3(uVar0))
		{
			Global_1940018->f_5[iParam0]->f_10 = _0x31c70a716cae1fee(uVar0);
		}
		return;
	}
	else
	{
		if (!_0xea8f168a76a0b9bc(get_player_index(), Global_1940018->f_5[iParam0]->f_10, 7, 1))
		{
			_0xa3db37edf9a74635(get_player_index(), Global_1940018->f_5[iParam0]->f_10, 7, 1, 1);
		}
		if (!_0xea8f168a76a0b9bc(get_player_index(), Global_1940018->f_5[iParam0]->f_10, 4, 1))
		{
			_0xa3db37edf9a74635(get_player_index(), Global_1940018->f_5[iParam0]->f_10, 4, 1, 1);
		}
	}
}

bool func_86(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_87(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_88(int iParam0)
{
	if (is_entity_dead(player_ped_id()))
	{
		return;
	}
	if (!func_192(iParam0))
	{
		return;
	}
	if (!_does_volume_exist(Global_1940018->f_5[iParam0]->f_4))
	{
		return;
	}
	Global_1940018->f_5[iParam0] = is_entity_in_volume(player_ped_id(), Global_1940018->f_5[iParam0]->f_4, true, 0);
}

bool func_89(var uParam0)
{
	vVar0 = { func_193(&Global_1940018) };
	if (func_187(vVar0))
	{
		return false;
	}
	if (func_188(&Global_1940018, 1))
	{
		return false;
	}
	if (func_86(&Global_1940258, 4194304))
	{
		return false;
	}
	if (func_194(Global_34, 0))
	{
		return false;
	}
	if (is_ped_on_mount(Global_34))
	{
		return false;
	}
	if (!is_ped_ragdoll(Global_34) && is_ped_on_vehicle(Global_34, false))
	{
		return false;
	}
	iVar3 = func_82();
	if (iVar3 == -1 || !func_195(iVar3))
	{
		return false;
	}
	if (func_196(4, 255))
	{
		return false;
	}
	if (func_198(func_197(Global_1940018->f_5[&Global_1940018]->f_6), 1))
	{
		return false;
	}
	*uParam0 = get_distance_between_coords(Global_35, vVar0, false);
	fVar4 = 30f;
	if (*uParam0 < fVar4)
	{
		return true;
	}
	return false;
}

void func_90()
{
	if (!is_thread_active(&(Global_1940018->f_46[&Global_1940018]), false))
	{
		if (has_script_loaded("saloon_dining"))
		{
			if (get_number_of_free_stacks_of_this_size(6005) > 0)
			{
				vVar0.x = Global_1940018->f_5[&Global_1940018]->f_6;
				vVar0.f_1 = &Global_1940018;
				vVar0.f_2 = { Global_1940018->f_5[&Global_1940018]->f_1 };
				Global_1940018->f_46[&Global_1940018] = start_new_script_with_args("saloon_dining", &vVar0, 5, 6005);
				set_script_as_no_longer_needed("saloon_dining");
			}
		}
		else
		{
			request_script("saloon_dining");
		}
	}
}

void func_91()
{
	switch (iLocal_235)
	{
		case 0:
			if (func_199())
			{
				iLocal_235 = 1;
			}
			break;
		case 1:
			if (Global_1940018->f_41 != func_82())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_174(&(Global_1940018->f_55[iVar0]));
					func_174(&(Global_1940018->f_58[iVar0]));
					func_174(&(Global_1940018->f_64[iVar0]));
					func_174(&(Global_1940018->f_61[iVar0]));
					iVar0++;
				}
				iLocal_235 = 0;
			}
			break;
	}
}

bool func_92(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_93(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_94(bool bParam0, bool bParam1)
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

bool func_95()
{
	return Global_1051252->f_8;
}

void func_96(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_97()
{
	if (!func_200() || Global_1572887->f_106.f_11 != 2)
	{
		if (func_115(func_114(), 3467, 0))
		{
			return true;
		}
	}
	if (func_94(1, 1))
	{
		return true;
	}
	Var0 = { func_201() };
	if (func_148(Var0))
	{
		iVar2 = func_202(Var0);
		if (iVar2 > 13 && !_is_app_running(1473691941))
		{
			return true;
		}
	}
	if (!network_is_game_in_progress())
	{
		return true;
	}
	if (func_117() && !_is_app_running(1473691941))
	{
		return true;
	}
	if (func_203() != -1)
	{
		return true;
	}
	if (func_205(func_204(-1777724963, player_id(), 1, 0)))
	{
		return true;
	}
	return false;
}

bool func_98()
{
	iVar0 = get_frame_count();
	return (Global_1293165->f_166 == iVar0 || Global_1293165->f_166 == (iVar0 - 1));
}

void func_99()
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!func_206(iVar0))
		{
		}
		else if (!func_207(iVar0))
		{
		}
		else
		{
			func_208(iVar0, 0, 0);
			func_209(Global_1293165->f_20[iVar0]);
			func_210(Global_1293165->f_20[iVar0], 0);
		}
		iVar0++;
	}
}

void func_100()
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!func_206(iVar0))
		{
		}
		else if (!func_211(iVar0))
		{
		}
		else
		{
			if (!func_208(iVar0, Global_1293165->f_120[iVar0]->f_1, Global_1293165->f_120[iVar0]->f_2))
			{
				return;
			}
			func_212(iVar0, 0, 0, 0);
		}
		iVar0++;
	}
}

void func_101()
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!func_206(iVar0))
		{
		}
		else if (!func_213(iVar0))
		{
		}
		else
		{
			iVar1 = func_214(iVar0);
			if (iVar1 == 0)
			{
				func_215(iVar0, 0);
			}
			else if (!_unlock_is_visible(iVar1))
			{
			}
			else
			{
				func_216(iVar0, 1);
				func_215(iVar0, 0);
				Global_1293165->f_20[iVar0]->f_1 = iVar0;
			}
		}
		iVar0++;
	}
}

void func_102()
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!func_206(iVar0))
		{
		}
		else if (!func_207(iVar0))
		{
		}
		else if (func_95())
		{
		}
		else if (func_217(Global_1293165->f_20[iVar0]))
		{
			func_209(Global_1293165->f_20[iVar0]);
			func_210(Global_1293165->f_20[iVar0], 0);
		}
		else
		{
			func_218(Global_1293165->f_20[iVar0]);
		}
		iVar0++;
	}
}

void func_103()
{
	iVar0 = _0x4be6c13a45cca8ec(Global_1296859->f_15);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (!func_206(iVar1))
		{
		}
		else if (!func_219(iVar1))
		{
		}
		else if (iVar0 == Global_1296859->f_10)
		{
			if (!func_207(iVar1))
			{
				if (&(*Global_1056141)[Global_1296859->f_10]->f_15.f_1[iVar1] != 0)
				{
					(*Global_1056141)[Global_1296859->f_10]->f_15.f_1[iVar1] = 0;
				}
				Jump @334; //curOff = 134
			}
			else if (iVar1 != &(*Global_1056141)[Global_1296859->f_10]->f_15.f_1[iVar1])
			{
				(*Global_1056141)[Global_1296859->f_10]->f_15.f_1[iVar1] = iVar1;
			}
		}
		else if (func_220(iVar1))
		{
			func_221(iVar1, 0);
		}
		else
		{
			if (&(*Global_1056141)[iVar0]->f_15.f_1[iVar1] == 0)
			{
				if (func_207(iVar1))
				{
					if (func_222(Global_1293165->f_20[iVar1]) < 5)
					{
						func_208(iVar1, 0, 1);
					}
					else if (func_223(iVar1, Global_1296859->f_10) < 3)
					{
						func_208(iVar1, 0, 1);
					}
				}
				return;
			}
			if (!func_207(iVar1))
			{
				func_224(&((*Global_1056141)[iVar0]->f_15.f_1[iVar1]), 1);
			}
		}
		iVar1++;
	}
}

bool func_104()
{
	if (!network_is_game_in_progress())
	{
		return false;
	}
	if (func_148(func_201()))
	{
		return false;
	}
	if (func_117())
	{
		return false;
	}
	return true;
}

bool func_105()
{
	if (!&Global_1960071)
	{
		if (is_player_control_on(player_id()) && !is_player_switch_in_progress())
		{
			if (func_225(20))
			{
				func_226(6, -1);
				if (func_225(25))
				{
					if (!func_227(1))
					{
						func_226(10, -1);
						func_226(11, -1);
					}
					else if (!func_227(0))
					{
						func_226(12, -1);
						func_226(13, -1);
					}
					else
					{
						func_226(14, -1);
					}
				}
			}
			else if (func_225(17) || func_225(19))
			{
				func_226(5, -1);
			}
			else if (func_118(16, &(Global_1296859->f_154[&Global_1296859])) || func_118(17, &(Global_1296859->f_154[&Global_1296859])))
			{
				func_226(0, -1);
			}
			else if (func_118(18, &(Global_1296859->f_154[&Global_1296859])) || func_118(19, &(Global_1296859->f_154[&Global_1296859])))
			{
				func_226(1, -1);
			}
			else if (!func_228(1))
			{
				func_226(2, 3);
			}
			else if (!func_228(2))
			{
				if ((func_225(13) && func_225(14)) && func_225(15))
				{
					func_226(4, -1);
				}
				else
				{
					func_226(3, 3);
				}
			}
			if (func_229() == -1050153785 && func_230(313296873))
			{
				if (func_231(-492264119, 1))
				{
					if (!_0xfbe782b3165ac8ec(-2028134866))
					{
						func_232(func_109(9));
						func_226(9, -1);
					}
				}
				else if (does_blip_exist(func_233(&(Global_1915715->f_18260[153]))))
				{
					func_232(func_109(7));
					func_226(7, -1);
				}
				else
				{
					func_232(func_109(8));
					func_226(8, -1);
				}
			}
			return true;
		}
	}
	return false;
}

bool func_106()
{
	return Global_1960071->f_1 != 0;
}

bool func_107(int iParam0)
{
	return is_bit_set(Global_1960071->f_1, iParam0);
}

int func_108(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (does_blip_exist((*Global_1835011)[16]->f_28))
			{
				iVar1 = 16;
			}
			else
			{
				iVar1 = 17;
			}
			iVar0 = _0x3e593df9c2962ec6(1673015813);
			set_blip_sprite(iVar0, (*Global_1835011)[iVar1]->f_27, true);
			return iVar0;
		case 1:
			if (does_blip_exist((*Global_1835011)[18]->f_28))
			{
				iVar1 = 18;
			}
			else
			{
				iVar1 = 19;
			}
			iVar0 = _0x3e593df9c2962ec6(1673015813);
			set_blip_sprite(iVar0, (*Global_1835011)[iVar1]->f_27, true);
			return iVar0;
		case 2:
			return Global_1293165->f_20[1]->f_4;
		case 4:
			return Global_1293165->f_20[2]->f_4;
		case 3:
			if (does_blip_exist((*Global_1835011)[13]->f_28))
			{
				iVar1 = 13;
			}
			else if (does_blip_exist((*Global_1835011)[14]->f_28))
			{
				iVar1 = 14;
			}
			else
			{
				iVar1 = 15;
			}
			iVar0 = _0x3e593df9c2962ec6(1673015813);
			set_blip_sprite(iVar0, (*Global_1835011)[iVar1]->f_27, true);
			return iVar0;
		case 5:
			iVar0 = _0x3e593df9c2962ec6(1673015813);
			set_blip_sprite(iVar0, (*Global_1835011)[20]->f_27, true);
			return iVar0;
		case 6:
			*iParam1 = 1;
			return 0;
		case 7:
			if (does_blip_exist(func_233(&(Global_1915715->f_18260[153]))))
			{
				return func_233(&(Global_1915715->f_18260[153]));
			}
			break;
		case 8:
			if (Global_1051439->f_3732 != -1 && does_blip_exist(func_233(&(Global_1915715->f_18260[Global_1051439->f_3732]))))
			{
				return func_233(&(Global_1915715->f_18260[Global_1051439->f_3732]));
			}
			break;
		case 9:
			*iParam1 = 1;
			return 0;
		case 10:
			*iParam1 = 1;
			return 0;
		case 11:
			iVar0 = _0x3e593df9c2962ec6(168093330);
			set_blip_sprite(iVar0, 1779658797, true);
			return iVar0;
		case 12:
			*iParam1 = 1;
			return 0;
		case 13:
			iVar0 = _0x3e593df9c2962ec6(168093330);
			set_blip_sprite(iVar0, 1779658797, true);
			return iVar0;
		case 14:
			*iParam1 = 1;
			return 0;
	}
	return 0;
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 726;
		case 1:
			return 727;
		case 2:
			return 728;
		case 4:
			return 729;
		case 3:
			return 730;
		case 5:
			return 731;
		case 6:
			return 732;
		case 7:
			return 858;
		case 8:
			return 859;
		case 9:
			return 860;
		case 10:
			return 866;
		case 11:
			return 867;
		case 12:
			return 868;
		case 13:
			return 869;
		case 14:
			return 870;
		default:
			break;
	}
	return 726;
}

void func_110(int iParam0)
{
	clear_bit(&(Global_1960071->f_1), iParam0);
}

void func_111(int iParam0, int iParam1, bool bParam2)
{
	func_144(iParam0, &iVar0, &iVar1);
	if (!func_145(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_234(iParam0, 1024))
	{
		return;
	}
	func_146(iVar0, iVar1);
	Global_1904651->f_33[iParam0]->f_3[0] = iParam1;
	Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 3;
}

void func_112()
{
	Global_1211325->f_1 = 0;
}

void func_113(int iParam0)
{
	Global_1211325 = iParam0;
	func_112();
}

struct<2> func_114()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_115(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return true;
	}
	if (func_148(*Global_1051213) && !func_235(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_236(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_196(iParam3, 255))
	{
		Global_1071686->f_28351 = 4;
		return true;
	}
	if (Global_263042[&Global_1296859] > 2)
	{
		Global_1071686->f_28351 = 5;
		return true;
	}
	if (&Global_262155 >= 1)
	{
		Global_1071686->f_28351 = 6;
		return true;
	}
	if (func_117())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_148(*Global_1051213))
		{
			Global_1071686->f_28351 = 8;
			return true;
		}
	}
	if (Global_265377->f_124675 != 0 && _does_thread_exist(Global_265377->f_124675))
	{
		Global_1071686->f_28351 = 9;
		return true;
	}
	Global_1071686->f_28351 = 0;
	return false;
}

bool func_116(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_16;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return (*Global_1100469)[iParam0]->f_16;
}

bool func_117()
{
	if (&Global_1048576)
	{
		return true;
	}
	if (Global_1572887->f_4)
	{
		return true;
	}
	if (&Global_2883584)
	{
		return true;
	}
	if (&Global_1048577)
	{
		return true;
	}
	if (!func_148(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_118(int iParam0, int iParam1)
{
	if (!func_237(iParam0))
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam1) || !network_is_player_connected(iParam1))
	{
		return false;
	}
	return _0x8f4f050054005c27(&((*Global_1056141)[iParam1]->f_15.f_20), iParam0);
}

bool func_119(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_120(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 13 && iParam0 <= 15)
	{
		return false;
	}
	if (func_225(iParam0))
	{
		if (!func_238(iParam0, &iVar0))
		{
			return false;
		}
	}
	else if (!func_239(iParam0, &iVar0))
	{
		return false;
	}
	iVar1 = _0x901e0dc25080c8b9(get_player_index());
	if (_0xd6f6acf4392187fb(iVar1))
	{
		if (_0x149a2751ab66ac02(iVar1) > 1)
		{
			iVar2 = _0x4be6c13a45cca8ec(iVar1);
			if (!_network_is_player_index_valid(iVar2))
			{
				return true;
			}
			iVar0 = (*Global_1056141)[iVar2]->f_15.f_23;
		}
	}
	if (iVar0 <= 0)
	{
		return false;
	}
	iVar3 = absi((get_cloud_time_as_int() - iVar0));
	iVar4 = func_240(iParam0);
	if (func_225(iParam0))
	{
		iVar4 = func_241(iParam0);
	}
	return iVar3 < iVar4;
}

float func_121(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_122(int iParam0, var uParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	*uParam1 = (*Global_1056141)[iParam0]->f_15;
	return true;
}

bool func_123(int iParam0)
{
	if (&Global_1296859 < 0 || &Global_1296859 >= 32)
	{
		return false;
	}
	if ((*Global_1056141)[&Global_1296859]->f_15 != iParam0)
	{
		(*Global_1056141)[&Global_1296859]->f_15 = iParam0;
	}
	return true;
}

int func_124()
{
	return &Global_1211325;
}

bool func_125()
{
	return func_132(&((*Global_263042)[&Global_1296859]->f_1), 2097152);
}

void func_126()
{
	func_242();
	func_243(&(Global_265377->f_124517));
	func_244(&(Global_265377->f_124517));
	func_245((*Global_263042)[Global_1296859->f_10]);
	_0xd39a72ae5ebd57e5();
}

void func_127()
{
	if (func_246(255) != 1)
	{
		return;
	}
	func_247(16384);
}

void func_128()
{
	func_248(0);
	func_249(0);
	func_250(0);
	func_251(0);
	func_252(0);
	func_253(0);
	func_254(0);
}

bool func_129(int iParam0)
{
	return func_255(Global_1211325->f_1, iParam0);
}

bool func_130(int iParam0)
{
	Var0 = 255;
	Var0.f_18 = 2147483647;
	Var0.f_21.f_2 = -504335712;
	Var0.f_21.f_4 = 3;
	Var0.f_26 = -1;
	Var0.f_30 = 1;
	Var0.f_31 = 1;
	Var0.f_32 = 1;
	Var0.f_33 = 32;
	Var0.f_34 = 1;
	Var0.f_35 = -2;
	Var0.f_47.f_5 = -1;
	Var0.f_53 = -1;
	Var0.f_53.f_1 = -1;
	Var0.f_55.f_3 = -1;
	if (!func_256(&Var0, iParam0, -1, -1, 3))
	{
		return false;
	}
	Var0.f_18 = -1;
	if (!func_257(&Var0, 255, 1, 1))
	{
		return false;
	}
	return true;
}

void func_131(int iParam0, int iParam1)
{
	if (func_255(Global_1211325->f_1, iParam0) == iParam1)
	{
		return;
	}
	func_258(&(Global_1211325->f_1), iParam0);
}

bool func_132(var uParam0, int iParam1)
{
	return (uParam0->f_20 && iParam1) != 0;
}

void func_133()
{
	func_248(1);
	func_249(1);
	func_250(1);
	func_251(1);
	func_252(1);
	func_253(1);
	func_254(1);
}

int func_134()
{
	return &Global_1211315;
}

void func_135()
{
	iVar0 = 13;
	while (iVar0 <= 25)
	{
		if ((*Global_1835011)[iVar0]->f_51 == 0)
		{
		}
		else if (!_0xe54dc27571d5edc5((*Global_1835011)[iVar0]->f_51))
		{
		}
		else if (func_225(iVar0))
		{
			iVar1 = func_259(iVar0);
			iVar2 = func_260(iVar0);
			missiondata_set_high_score((*Global_1835011)[iVar0]->f_51, iVar2);
			_0xe824ce7d13fcb300((*Global_1835011)[iVar0]->f_51, iVar1);
		}
		iVar0++;
	}
}

void func_136(int iParam0)
{
	_0x957a830c9b4b99ea(-1598695885, iParam0);
}

struct<2> func_137(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_138()
{
	iVar0 = 13;
	while (iVar0 <= 25)
	{
		if (func_225(iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_139(int iParam0)
{
	if (&Global_1211315 == iParam0)
	{
		return;
	}
	Global_1211315 = iParam0;
}

bool func_140()
{
	if (!func_200() || Global_1572887->f_106.f_11 != 2)
	{
		if (func_115(func_114(), 3467, 0))
		{
			return false;
		}
	}
	if (func_148(func_201()))
	{
		return false;
	}
	if (func_117())
	{
		return false;
	}
	if (Global_1109804->f_20)
	{
		if (func_203() == 0)
		{
			iVar0 = func_261();
			if (iVar0 == 0 || iVar0 == 1)
			{
				return false;
			}
		}
	}
	if (func_115(func_114(), 256, 0))
	{
		return false;
	}
	return true;
}

void func_141()
{
	func_262();
	func_263();
	func_264();
	func_265();
}

bool func_142()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_4;
}

void func_143(int iParam0)
{
	if (iParam0 == -1 && Global_1211315->f_2 != -1)
	{
		iVar0 = func_266((*Global_1835011)[Global_1211315->f_2]->f_1);
		if (func_267(iVar0))
		{
			func_268(Global_1211315->f_2, 1);
			func_269(Global_1211315->f_2, -1, 0, 1, 1, 0, 0);
			func_270(Global_1211315->f_2);
			func_271(Global_1211315->f_2);
		}
		Global_1211315->f_4 = { 0f, 0f, 0f };
		Global_1211315->f_3 = 0;
		func_272();
	}
	Global_1211315->f_9 = get_cloud_time_as_int();
	Global_1211315->f_2 = iParam0;
}

void func_144(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_145(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_273(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_274(iParam0))
	{
		return false;
	}
	if (func_275(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_234(iParam0, 1)) || func_87(32768))
	{
		if (!func_234(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_276())
	{
		return false;
	}
	return true;
}

void func_146(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

struct<2> func_147(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_148(struct<2> Param0)
{
	if (!func_277(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_278(Param0))
	{
		return false;
	}
	return true;
}

int func_149(var uParam0, var uParam1)
{
	return uParam0;
}

int func_150(bool bParam0)
{
	if (func_50() == -1)
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

struct<4> func_151()
{
	return Var0;
}

struct<4> func_152(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_279(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_150(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_153()
{
	return func_152(389943619, func_55(0), 1591329969, 1);
}

struct<14> func_154(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

void func_155(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_156(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_150(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_157(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_158(int iParam0)
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

bool func_159(bool bParam0)
{
	if (func_50() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_150(bParam0));
}

int func_160(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_161(Param0, &Var0, 1, 0, -1))
	{
		return -1;
	}
	if (func_162(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return -1;
	}
	Var14 = { func_152(Var0.f_4, Param4, iParam8, 1) };
	if (_0xb881ca836cc4b6d4(&Var14))
	{
		if (_0x4a606c17276e1bcc(&Param0) != _0x4a606c17276e1bcc(&Var14))
		{
			return -1;
		}
	}
	if (iParam12 == -1)
	{
		iParam12 = Var0.f_11;
	}
	iVar18 = func_280(Var0.f_4, Param4, iParam8, 1, 1, 0);
	iVar19 = _0xe80e50bee276a54a(Var0.f_4, iParam8);
	if (iVar19 >= 0)
	{
		if (iVar18 >= iVar19)
		{
			return -1;
		}
		else if ((iVar18 + iParam12) > iVar19)
		{
			if (bParam11)
			{
				return -1;
			}
			iParam12 = (iVar19 - iVar18);
		}
	}
	Var0.f_11 = iParam12;
	Var20 = { func_281(&Var0, 0) };
	Var20.f_4 = { Param4 };
	Var20.f_11 = iParam8;
	Var20.f_10 = bParam10;
	iVar36 = func_282(1168099063, &Var20, bParam9);
	if (iVar36 == -1)
	{
		return -1;
	}
	return iVar36;
}

bool func_161(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_283(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_162(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

bool func_163(struct<4> Param0, int iParam4, bool bParam5)
{
	if (!func_159(0))
	{
		return func_284(&Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_161(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_150(bParam5), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

void func_164(var uParam0)
{
	Var3.f_9 = -1591664384;
	if (!func_285("ALL HORSES", &iVar0, &iVar1, -1591664384, 0))
	{
		return;
	}
	if (iVar1 > 10)
	{
		iVar1 = 10;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_286(&Var3, iVar2, iVar0, iVar1, 0))
		{
		}
		else if (_0x4c543d5dfcd2dafd(&Var3, uParam0))
		{
		}
		else if (func_287(&(Var3.f_24), 16))
		{
			func_288(&(Var3.f_24), 16);
			func_289(&Var3, 1, 1);
		}
		iVar2++;
	}
	func_158(iVar0);
}

bool func_165(var uParam0, bool bParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (func_290(uParam0, &Var0, bParam1))
	{
		if (func_287(&(Var0.f_24), 16))
		{
			return true;
		}
		return false;
	}
	return false;
}

void func_166(var uParam0, bool bParam1)
{
	Global_1291734->f_11.f_310 = { *uParam0 };
	if (bParam1)
	{
		Global_1291734->f_11.f_318 = Global_1296859->f_21 + 10;
	}
}

struct<4> func_167(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (!func_291(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var29 = { func_292() };
		if (func_293() && _0xb881ca836cc4b6d4(&Var29))
		{
			Var0 = { Var29 };
		}
		else if (!_0x4c543d5dfcd2dafd(&Var29, &Var0))
		{
			func_166(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_294(player_id());
	}
	bVar33 = func_295(75);
	if (bVar33)
	{
		iParam3 = 3;
	}
	iVar34 = func_296(iParam3, 0);
	if (iVar34 != 3)
	{
		if (_0xb881ca836cc4b6d4(Global_17411.f_55.f_61[iVar34]))
		{
			Var0 = { *Global_17411.f_55.f_61[iVar34] };
		}
	}
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		if (!bParam1)
		{
			return func_151();
		}
		if (!func_297(&Var0, 0))
		{
			Var35 = { func_298(bParam0) };
		}
		else
		{
			Var35 = { Var0 };
		}
		return Var35;
	}
	return Var0;
}

bool func_168(var uParam0, bool bParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (func_290(uParam0, &Var0, bParam2))
	{
		bVar29 = func_287(&(Var0.f_24), 16);
		if (bVar29 == bParam1)
		{
			return true;
		}
		else
		{
			Var30.f_9 = -1591664384;
			Var59.f_9 = -1591664384;
			if (bParam1)
			{
				if (!bVar29 && func_291(&Var30, 0))
				{
					if (func_297(&Var59, bParam2))
					{
						func_288(&(Var59.f_24), 32);
						func_289(&Var59, 1, bParam2);
					}
					func_299(&(Var30.f_24), 32);
					func_168(&Var30, 0, bParam2);
				}
				func_299(&(Var0.f_24), 16);
				Var0.f_10 = 1;
			}
			else
			{
				if (bVar29 && func_297(&Var59, bParam2))
				{
					func_288(&(Var59.f_24), 32);
					func_289(&Var59, 1, bParam2);
				}
				func_299(&(Var0.f_24), 32);
				func_288(&(Var0.f_24), 16);
				Var0.f_10 = 0;
			}
		}
		if (func_289(&Var0, 1, bParam2))
		{
			return true;
		}
	}
	return false;
}

int func_169(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11)
{
	if (!does_script_exist(sParam0))
	{
		return 0;
	}
	request_script(sParam0);
	if (!has_script_loaded(sParam0))
	{
		return 0;
	}
	start_new_script_with_args(sParam0, &uParam1, 10, iParam11);
	set_script_as_no_longer_needed(sParam0);
	return 1;
}

int func_170(char* sParam0, int iParam1)
{
	if (!does_script_exist(sParam0))
	{
		return 0;
	}
	request_script(sParam0);
	if (!has_script_loaded(sParam0) || get_number_of_free_stacks_of_this_size(iParam1) <= 0)
	{
		return 0;
	}
	start_new_script(sParam0, iParam1);
	set_script_as_no_longer_needed(sParam0);
	return 1;
}

void func_171(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (is_string_null_or_empty(&((*Global_1939493)[iParam0]->f_10)))
	{
		return;
	}
	*(*Global_1939493)[iParam0] = { Var0 };
	Global_1939493->f_161 = (Global_1939493->f_161 - 1);
	if (Global_1939493->f_161 < 0)
	{
		Global_1939493->f_161 = 0;
	}
}

bool func_172(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 > -1 && iParam0 < 4)
	{
		if (!bParam1 || _does_volume_exist((*Global_1956131)[iParam0]->f_1))
		{
			if (!bParam2 || does_entity_exist((*Global_1956131)[iParam0]->f_2))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_173(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_174(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_175(var uParam0, int iParam1)
{
	func_300(uParam0, iParam1);
}

bool func_176()
{
	return (&Global_1956130 > -1 && &Global_1956130 < 4);
}

bool func_177()
{
	return (Global_1893587 & 1 != 0 && func_82() != -1);
}

int func_178(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_301(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_13 != -1)
	{
		if (iParam0 == Global_1296859->f_10)
		{
			if (!Global_1296859->f_11)
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

bool func_179()
{
	iVar0 = get_interior_from_entity(Global_34);
	if (!is_valid_interior(iVar0))
	{
		return false;
	}
	_get_interior_info(iVar0, &uVar1, &iVar4);
	switch (iVar4)
	{
		case -1212338017:
			return false;
		case 768224943:
			return false;
		case 1633500362:
			return false;
		case -1269216817:
			return false;
		case -1571304986:
			return false;
		case 1245139812:
			return false;
		case -803716508:
			return false;
		case 653987431:
			return false;
		case 1911907177:
			return false;
		default:
			break;
	}
	return true;
}

int func_180(float fParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		fVar0 = 2.5f;
		fVar1 = 7f;
	}
	else
	{
		fVar0 = 1f;
		fVar1 = 3f;
	}
	if (!(iLocal_16 == iParam2 || iLocal_16 == iParam3))
	{
		fVar0 = 0f;
	}
	if (fParam0 < (fVar1 - fVar0))
	{
		return iParam2;
	}
	else if (fParam0 >= (fVar1 + fVar0))
	{
		return iParam3;
	}
	return iLocal_16;
}

void func_181(int iParam0)
{
	func_302(Global_1940018->f_5[iParam0]->f_6, 1);
	func_303(Global_1940018->f_5[iParam0]->f_6, 0);
	if (_0xf6a8a652a6b186cd(Global_1940018->f_5[iParam0]->f_8))
	{
		_0xfdfecc6ee4491e11(Global_1940018->f_5[iParam0]->f_8);
	}
	func_304(iParam0, 8192);
	func_304(iParam0, 32768);
	func_304(iParam0, 524288);
	func_304(iParam0, 1048576);
	Global_1940018->f_5[iParam0]->f_10 = 0;
	Global_1940018->f_5[&Global_1940018]->f_9 = 0;
	Global_1940018->f_5[iParam0] = 0;
	Global_1940018->f_5[iParam0]->f_1 = { 0f, 0f, 0f };
	Global_1940018->f_5[iParam0]->f_4 = 0;
	Global_1940018->f_5[iParam0]->f_5 = -1;
	Global_1940018->f_5[iParam0]->f_6 = -1;
	Global_1940018->f_5[iParam0]->f_7 = 0;
}

bool func_182()
{
	iVar0 = get_frame_count();
	return (Global_1051439->f_3259 == iVar0 || Global_1051439->f_3259 == (iVar0 - 1));
}

bool func_183(int iParam0)
{
	return func_188(iParam0, 1024);
}

void func_184(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_188(iParam0, 1024))
		{
			func_189(iParam0, 1024);
		}
	}
	else if (func_188(iParam0, 1024))
	{
		func_304(iParam0, 1024);
	}
}

bool func_185(int iParam0)
{
	return func_188(iParam0, 1);
}

void func_186(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_188(iParam0, 1))
		{
			func_189(iParam0, 1);
		}
	}
	else if (func_188(iParam0, 1))
	{
		func_304(iParam0, 1);
	}
}

bool func_187(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_188(int iParam0, int iParam1)
{
	return func_92(Global_1940018->f_5[iParam0]->f_7, iParam1);
}

void func_189(int iParam0, int iParam1)
{
	func_96(&(Global_1940018->f_5[iParam0]->f_7), iParam1);
}

bool func_190(int iParam0, int iParam1)
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
	if (func_173(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_173(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_173(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_173(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_173(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_173(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_173(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_173(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 49689699;
		case 6:
			return 1690461416;
		case 3:
			return -1792832235;
		case 2:
			return 785713260;
		case 1:
			return -2099882877;
		case 8:
			return 41051113;
		case 0:
			return -53891762;
		case 4:
			return 1016865322;
		case 7:
			return 19124873;
		default:
			break;
	}
	return 0;
}

bool func_192(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return false;
	}
	return true;
}

Vector3 func_193(int iParam0)
{
	return Global_1940018->f_5[iParam0]->f_1;
}

bool func_194(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (bParam1)
		{
			return is_ped_dead_or_dying(iParam0, true);
		}
		else
		{
			return is_entity_dead(iParam0);
		}
	}
	return true;
}

bool func_195(int iParam0)
{
	if (!func_305(iParam0))
	{
		return false;
	}
	return func_306(iParam0, 8);
}

bool func_196(int iParam0, int iParam1)
{
	if (!Global_1071686->f_3)
	{
		return false;
	}
	if (!network_is_in_session())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	return (Global_1197355[iParam1] && iParam0) != 0;
}

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 56;
		case 2:
			return 54;
		case 3:
			return 36;
		case 4:
			return 105;
		case 5:
			return 79;
		case 6:
			return 81;
		case 7:
			return 110;
		case 8:
			return 94;
		default:
			break;
	}
	return -1;
}

bool func_198(int iParam0, int iParam1)
{
	if (!func_307(iParam0))
	{
		return false;
	}
	return (Global_1051439->f_3073[iParam0] && iParam1) != 0;
}

bool func_199()
{
	Global_1940018->f_41 = func_82();
	switch (Global_1940018->f_41)
	{
		case 81:
			if (!_does_volume_exist(&(Global_1940018->f_55[0])))
			{
				Global_1940018->f_55[0] = _create_volume_box_with_custom_name(-309.497f, 809.019f, 120.736f, 0f, 0f, 99.71499f, 20.984f, 11.92f, 5.626f, "Saloon-vBarDialogue");
			}
			if (!_does_volume_exist(&(Global_1940018->f_58[0])))
			{
				Global_1940018->f_58[0] = _create_volume_box_with_custom_name(-312.8126f, 805.6502f, 119.0267f, 0f, 0f, 9.450999f, 3.526598f, 5.756987f, 2.6f, "Saloon-vBarDialoguePrompt");
			}
			if (!_does_volume_exist(&(Global_1940018->f_61[0])))
			{
				Global_1940018->f_61[0] = _create_volume_box_with_custom_name(-313.5039f, 806.3469f, 118.5511f, 0f, 0f, 9.500049f, 1.307419f, 4.145394f, 2.622946f, "Saloon-vBarDialogueofflimit");
			}
			if (!_does_volume_exist(&(Global_1940018->f_64[0])))
			{
				Global_1940018->f_64[0] = _create_volume_box_with_custom_name(-309.419f, 809.032f, 122.29f, 0f, 0f, 99.715f, 23.304f, 12.404f, 2.649f, "Saloon-vBarDialogueMute");
			}
			if (!_does_volume_exist(&(Global_1940018->f_55[1])))
			{
				Global_1940018->f_55[1] = _create_volume_box_with_custom_name(-241.4293f, 769.837f, 118.2211f, 0f, 0f, 19.77785f, 7.545419f, 8.569216f, 2.435204f, "Saloon-vBarDialogue");
			}
			if (!_does_volume_exist(&(Global_1940018->f_58[1])))
			{
				Global_1940018->f_58[1] = _create_volume_box_with_custom_name(-240.3409f, 769.9477f, 118.2175f, 0f, 0f, 18.79571f, 1.613768f, 3.334327f, 2.435204f, "Saloon-vBarDialoguePrompt");
			}
			if (!_does_volume_exist(&(Global_1940018->f_61[1])))
			{
				Global_1940018->f_61[1] = _create_volume_box_with_custom_name(-238.8276f, 770.4627f, 118.2175f, 0f, 0f, 18.79571f, 1.613768f, 4.023208f, 2.435204f, "Saloon-vBarDialogueofflimit");
			}
			break;
		case 5:
			if (!_does_volume_exist(&(Global_1940018->f_55[0])))
			{
				Global_1940018->f_55[0] = _create_volume_aggregate_with_custom_name("volSaloonFancyInterior");
				_0x39816f6f94f385ad(&(Global_1940018->f_55[0]), 2629.396f, -1221.905f, 54.83224f, 0f, 0f, -135.58f, 3.110129f, 1.920147f, 4.694317f);
				_0x39816f6f94f385ad(&(Global_1940018->f_55[0]), 2628.751f, -1228.086f, 57.543f, 0f, 0f, 179.42f, 2.229593f, 11.71116f, 10.619f);
				_0x39816f6f94f385ad(&(Global_1940018->f_55[0]), 2635.506f, -1227.165f, 57.543f, 0f, 0f, 179.42f, 11.64868f, 13.72192f, 10.619f);
			}
			if (!_does_volume_exist(&(Global_1940018->f_58[0])))
			{
				Global_1940018->f_58[0] = _create_volume_box_with_custom_name(2638.078f, -1224.9f, 53.60266f, 0f, 0f, 0f, 2.04147f, 7.113753f, 3.196584f, "Saloon-vBarDialoguePrompt");
			}
			if (!_does_volume_exist(&(Global_1940018->f_61[0])))
			{
				Global_1940018->f_61[0] = _create_volume_box_with_custom_name(2639.981f, -1225.526f, 53.603f, 0f, 0f, 0.405f, 1.646f, 6.014f, 2.6f, "Saloon-vBarDialogueofflimit");
			}
			if (!_does_volume_exist(&(Global_1940018->f_64[0])))
			{
				Global_1940018->f_64[0] = _create_volume_box_with_custom_name(2634.331f, -1226.95f, 59.453f, 0f, 0f, 0f, 14.202f, 14.405f, 7.921f, "Saloon-vBarDialogueMute");
			}
			if (!_does_volume_exist(&(Global_1940018->f_55[1])))
			{
				Global_1940018->f_55[1] = _create_volume_box_with_custom_name(2796.705f, -1167.971f, 48.56161f, 0f, 0f, -120.25f, 13.49097f, 10.18626f, 3.324371f, "Saloon-vBarDialogueSLUM");
			}
			if (!_does_volume_exist(&(Global_1940018->f_58[1])))
			{
				Global_1940018->f_58[1] = _create_volume_box_with_custom_name(2793.41f, -1169.199f, 48.1851f, 0f, 0f, -30.34509f, 1.704269f, 3.946146f, 2.542513f, "Saloon-vBarDialoguePrompt");
			}
			if (!_does_volume_exist(&(Global_1940018->f_61[1])))
			{
				Global_1940018->f_61[1] = _create_volume_box_with_custom_name(2792.76f, -1167.248f, 48.185f, 0f, 0f, -28.65f, 1.31f, 4.322f, 2.45f, "Saloon-vBarDialogueofflimit");
			}
			if (!_does_volume_exist(&(Global_1940018->f_64[1])))
			{
				Global_1940018->f_64[1] = _create_volume_box_with_custom_name(2801.979f, -1166.155f, 48.562f, 0f, 0f, -120.25f, 5.894f, 3.149f, 3.395f, "Saloon-vBarDialogueMute");
			}
			break;
		case 98:
			if (!_does_volume_exist(&(Global_1940018->f_55[0])))
			{
				Global_1940018->f_55[0] = _create_volume_aggregate_with_custom_name("m_volSaloonInterior");
				_0x39816f6f94f385ad(&(Global_1940018->f_55[0]), 2946.662f, 523.323f, 46.02f, 0f, 0f, 180f, 9.627f, 13.43f, 3.143f);
				_0x39816f6f94f385ad(&(Global_1940018->f_55[0]), 2939.132f, 523.346f, 46.02f, 0f, 0f, 180f, 5.235f, 9.883f, 3.143f);
			}
			if (!_does_volume_exist(&(Global_1940018->f_58[0])))
			{
				Global_1940018->f_58[0] = _create_volume_box_with_custom_name(2948.501f, 527.229f, 45.24421f, 0f, 0f, 0f, 5.896486f, 4.004321f, 3.567921f, "Saloon-vBarDialoguePrompt");
			}
			if (!_does_volume_exist(&(Global_1940018->f_61[0])))
			{
				Global_1940018->f_61[0] = _create_volume_box_with_custom_name(2949.001f, 528.692f, 45.433f, 0f, -1.995f, 90.342f, 2.153f, 4.35f, 2.271f, "Saloon-vBarDialogueofflimit");
			}
			break;
		case 40:
			if (!_does_volume_exist(&(Global_1940018->f_55[0])))
			{
				Global_1940018->f_55[0] = _create_volume_aggregate_with_custom_name("Blackwater - m_volSaloonInterior");
				_0x39816f6f94f385ad(&(Global_1940018->f_55[0]), -818.523f, -1319.681f, 46.59f, 0f, 0f, 90f, 15.6f, 16f, 8f);
				_0x39816f6f94f385ad(&(Global_1940018->f_55[0]), -809.672f, -1319.568f, 48.818f, 0f, 0f, 90f, 15.5f, 2f, 4f);
				_0x39816f6f94f385ad(&(Global_1940018->f_55[0]), -809.672f, -1324.85f, 44.569f, 0f, 0f, 90f, 5.2f, 2f, 3.8f);
				_0x5b7d7bf36d2de18b(&(Global_1940018->f_55[0]), -810.751f, -1315.745f, 42.73711f, 0f, 0f, 0f, 2.326748f, 2.142643f, 3.663574f);
			}
			if (!_does_volume_exist(&(Global_1940018->f_58[0])))
			{
				Global_1940018->f_58[0] = _create_volume_box_with_custom_name(-817.6462f, -1318.322f, 43.72745f, 0f, 0f, 0f, 5f, 5.5f, 3f, "Saloon-vBarDialoguePrompt");
			}
			if (!_does_volume_exist(&(Global_1940018->f_61[0])))
			{
				Global_1940018->f_61[0] = _create_volume_box_with_custom_name(-818.6908f, -1319.289f, 43.72745f, 0f, 0f, 0f, 3f, 3.5f, 3f, "Saloon-vBarDialogueofflimit");
			}
			if (!_does_volume_exist(&(Global_1940018->f_64[0])))
			{
				Global_1940018->f_64[0] = _create_volume_aggregate_with_custom_name("Saloon-vBarDialogueMute");
				_0x39816f6f94f385ad(&(Global_1940018->f_64[0]), -818.523f, -1319.681f, 48.053f, 0f, 0f, 90f, 17.124f, 16.624f, 4.813f);
				_0x39816f6f94f385ad(&(Global_1940018->f_64[0]), -823.943f, -1319.869f, 43.727f, 0f, 0f, 0f, 5.657f, 6.398f, 3.334f);
			}
			break;
		case 111:
			if (!_does_volume_exist(&(Global_1940018->f_55[0])))
			{
				Global_1940018->f_55[0] = _create_volume_box_with_custom_name(1345.534f, -1375.4f, 82.904f, 0f, 0f, 80.2f, 11.601f, 14.755f, 7.028f, "Saloon-vBarDialogue");
			}
			if (!_does_volume_exist(&(Global_1940018->f_58[0])))
			{
				Global_1940018->f_58[0] = _create_volume_box_with_custom_name(1340.147f, -1374.74f, 80.38785f, 0f, 0f, -10.32368f, 4.458401f, 6.059777f, 2.440836f, "Saloon-vBarDialogue");
			}
			if (!_does_volume_exist(&(Global_1940018->f_61[0])))
			{
				Global_1940018->f_61[0] = _create_volume_box_with_custom_name(1339.3f, -1374.427f, 80.38785f, 0f, 0f, -10.32368f, 2.886978f, 2.606258f, 2.440836f, "Saloon-vBarDialogueofflimit");
			}
			if (!_does_volume_exist(&(Global_1940018->f_64[0])))
			{
				Global_1940018->f_64[0] = _create_volume_box_with_custom_name(1345.534f, -1375.4f, 84.92f, 0f, 0f, 80.2f, 11.982f, 15.553f, 3.692f, "Saloon-vBarDialogueMute");
			}
			break;
		case 121:
			if (!_does_volume_exist(&(Global_1940018->f_55[0])))
			{
				Global_1940018->f_55[0] = _create_volume_aggregate_with_custom_name("m_volSaloonInterior");
				_0x39816f6f94f385ad(&(Global_1940018->f_55[0]), -5515.285f, -2908.166f, 0.249091f, 0f, 0.149389f, 30f, 10.09642f, 10.85884f, 6.224696f);
				_0x39816f6f94f385ad(&(Global_1940018->f_55[0]), -5513.722f, -2914.647f, 0.249091f, 0.161928f, 0.036374f, -15.07891f, 4.181654f, 4.925784f, 6.224696f);
				_0x39816f6f94f385ad(&(Global_1940018->f_55[0]), -5510.41f, -2913.841f, 0.249091f, 0f, 0.149389f, 30f, 7.684982f, 4.925784f, 6.224696f);
			}
			if (!_does_volume_exist(&(Global_1940018->f_58[0])))
			{
				Global_1940018->f_58[0] = _create_volume_box_with_custom_name(-5517.708f, -2907.638f, -1.703205f, 0f, 0f, 30f, 6.704566f, 1.488849f, 2.762703f, "Saloon-vBarDialoguePrompt");
			}
			if (!_does_volume_exist(&(Global_1940018->f_61[0])))
			{
				Global_1940018->f_61[0] = _create_volume_box_with_custom_name(-5519.191f, -2906.316f, -1.703f, 0f, 0f, -60.333f, 1.891f, 5.329f, 2.441f, "Saloon-vBarDialogueofflimit");
			}
			if (!_does_volume_exist(&(Global_1940018->f_64[0])))
			{
				Global_1940018->f_64[0] = _create_volume_box_with_custom_name(-5515.285f, -2908.166f, 1.855f, 0f, 0f, 30f, 10.292f, 10.992f, 3.432f, "Saloon-vBarDialogueMute");
			}
			break;
		case 127:
			if (!_does_volume_exist(&(Global_1940018->f_55[0])))
			{
				Global_1940018->f_55[0] = _create_volume_aggregate_with_custom_name("m_volSaloonInterior");
				_0x39816f6f94f385ad(&(Global_1940018->f_55[0]), -3706.318f, -2599.046f, -11.47613f, 0f, 0f, 45f, 4f, 6.394596f, 6f);
				_0x39816f6f94f385ad(&(Global_1940018->f_55[0]), -3701.312f, -2601.316f, -11.47613f, 0f, 0f, 0f, 8.3f, 3f, 6f);
				_0x39816f6f94f385ad(&(Global_1940018->f_55[0]), -3703.562f, -2591.62f, -11.47613f, 0f, 0f, 0f, 12.8f, 13f, 6f);
			}
			if (!_does_volume_exist(&(Global_1940018->f_58[0])))
			{
				Global_1940018->f_58[0] = _create_volume_box_with_custom_name(-3701.373f, -2594.598f, -13.4666f, 0f, 0f, 0f, 2f, 8f, 3f, "Saloon-vBarDialoguePrompt");
			}
			if (!_does_volume_exist(&(Global_1940018->f_61[0])))
			{
				Global_1940018->f_61[0] = _create_volume_box_with_custom_name(-3698.998f, -2596.996f, -13.467f, 0f, 0f, -0.443f, 2.4f, 11.579f, 2.441f, "Saloon-vBarDialogueofflimit");
			}
			break;
	}
	return true;
}

bool func_200()
{
	return Global_1572887->f_106.f_75 != 1;
}

struct<2> func_201()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_147(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_147(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

int func_202(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_308(Param0);
	}
	return -1;
}

int func_203()
{
	return Global_1109804->f_21.f_12.f_1;
}

int func_204(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if ((*Global_1248240)[iVar0]->f_559 != iParam0)
		{
		}
		else if (bParam2 && !func_309(iVar0, 32, iParam1))
		{
		}
		else if (bParam3 && (*Global_1237665)[iVar0]->f_15 != iParam1)
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

bool func_205(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

bool func_206(int iParam0)
{
	if (iParam0 <= 0 || iParam0 >= 9)
	{
		return false;
	}
	return true;
}

bool func_207(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return Global_1293165[iParam0] == iParam0;
}

bool func_208(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_206(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_213(iParam0))
		{
			func_215(iParam0, 0);
		}
	}
	if (!func_207(iParam0))
	{
		func_310(iParam0, -1);
		return true;
	}
	if (bParam2)
	{
		if (network_is_game_in_progress())
		{
			iVar0 = func_311(3, iParam0);
			if (iVar0 == 0)
			{
				return false;
			}
			if (!func_313(func_312(iParam0)))
			{
				func_310(iParam0, func_314(iVar0, 0));
				return false;
			}
		}
	}
	else
	{
		func_310(iParam0, -1);
	}
	if (func_313(func_312(iParam0)))
	{
		switch (func_315(func_312(iParam0), 0))
		{
			case 1:
			default:
				return false;
				return false;
			case 2:
			}
			if (func_316(Global_1293165->f_20[iParam0]))
			{
				func_317(Global_1293165->f_20[iParam0]);
			}
			func_209(Global_1293165->f_20[iParam0]);
			func_216(iParam0, 0);
			func_310(iParam0, -1);
			return true;
		}

void func_209(var uParam0)
{
	func_318(uParam0);
	uVar0 = uParam0->f_1;
	*uParam0 = { Var1 };
	uParam0->f_1 = uVar0;
}

void func_210(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_211(int iParam0)
{
	if (!func_206(iParam0))
	{
		return false;
	}
	return Global_1293165->f_120[iParam0]->f_3;
}

void func_212(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 >= 9 || iParam0 <= 0)
	{
		return;
	}
	if (Global_1293165->f_120[iParam0]->f_3 == iParam1)
	{
		return;
	}
	Global_1293165->f_120[iParam0]->f_3 = iParam1;
	Global_1293165->f_120[iParam0]->f_2 = iParam3;
	Global_1293165->f_120[iParam0]->f_1 = iParam2;
}

bool func_213(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return &Global_1293165->f_10[iParam0] == iParam0;
}

int func_214(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1519264107;
		case 2:
			return -1349160228;
		case 3:
			return -732709691;
		case 4:
			return 1691387227;
		case 5:
			return -969278268;
		case 6:
			return 650135692;
		case 7:
			return 317202356;
		case 8:
			return 2111135919;
		default:
			break;
	}
	return 0;
}

void func_215(int iParam0, bool bParam1)
{
	if (!func_206(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (&Global_1293165->f_10[iParam0] == 0)
		{
			Global_1293165->f_10[iParam0] = iParam0;
		}
	}
	else if (&Global_1293165->f_10[iParam0] != 0)
	{
		Global_1293165->f_10[iParam0] = 0;
	}
}

void func_216(int iParam0, bool bParam1)
{
	if (!func_206(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Global_1293165[iParam0] == 0)
		{
			(*Global_1293165)[iParam0] = iParam0;
			if (func_219(iParam0))
			{
				func_319(iParam0, 1);
			}
		}
	}
	else if (Global_1293165[iParam0] != 0)
	{
		(*Global_1293165)[iParam0] = 0;
		if (func_219(iParam0))
		{
			func_319(iParam0, 0);
		}
	}
}

bool func_217(var uParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	if (func_115(func_114(), 256, 0))
	{
		return true;
	}
	Var0 = { func_201() };
	if (!func_320(uParam0->f_1))
	{
		if (func_148(Var0))
		{
			if (Global_1108365->f_935.f_28 != 6)
			{
				return true;
			}
		}
		if (func_117())
		{
			return true;
		}
	}
	if (func_321())
	{
		return true;
	}
	if (uParam0->f_1 == 0)
	{
		return false;
	}
	iVar2 = func_214(uParam0->f_1);
	if (iVar2 == 0)
	{
		return true;
	}
	if (!_unlock_is_unlocked(iVar2))
	{
		return true;
	}
	return false;
}

void func_218(var uParam0)
{
	iVar0 = uParam0->f_1;
	switch (func_222(uParam0))
	{
		case -1:
			func_208(iVar0, 0, 1);
			break;
		case 0:
			func_210(uParam0, 2);
			break;
		case 2:
			if (iVar0 == 6)
			{
				if (!func_322())
				{
				}
				else
				{
					if (!_0xfbe782b3165ac8ec(1992819465))
					{
						func_323(1992819465);
						func_323(371675485);
						func_323(2079949092);
					}
					if (!func_324(uParam0))
					{
					}
					else if (!func_325(uParam0))
					{
					}
					else
					{
						func_326(uParam0);
						func_210(uParam0, 3);
						Jump @814; //curOff = 202
						if (!does_blip_exist(uParam0->f_4))
						{
							func_210(uParam0, 2);
						}
						else if (func_326(uParam0))
						{
							func_318(uParam0);
							func_210(uParam0, 0);
						}
						else if (func_327(uParam0))
						{
							func_318(uParam0);
							func_210(uParam0, 0);
						}
						else if ((func_328(iVar0) && !func_219(iVar0)) && Global_1296859->f_16 != &Global_1296859)
						{
							func_318(uParam0);
							func_210(uParam0, 8);
						}
						else
						{
							if (!func_329(iVar0))
							{
								func_318(uParam0);
								func_210(uParam0, 8);
							}
							func_330(uParam0);
							if (!func_331(uParam0))
							{
							}
							else
							{
								func_210(uParam0, 1);
								Jump @814; //curOff = 381
								if (func_316(uParam0))
								{
									func_210(uParam0, 5);
								}
								else
								{
									func_210(uParam0, 4);
								}
								Jump @814; //curOff = 410
								if (!network_is_game_in_progress())
								{
								}
								else if (!func_332(uParam0))
								{
								}
								else
								{
									func_333();
									func_210(uParam0, 5);
									Jump @814; //curOff = 448
									func_330(uParam0);
									if (func_223(iVar0, Global_1296859->f_10) == 1 || func_223(iVar0, Global_1296859->f_10) == 2)
									{
										if (!func_331(uParam0))
										{
											func_318(uParam0);
											func_317(uParam0);
											func_210(uParam0, 0);
										}
										else if (func_326(uParam0))
										{
											func_318(uParam0);
											func_317(uParam0);
											func_210(uParam0, 0);
										}
										else if (func_327(uParam0))
										{
											func_318(uParam0);
											func_317(uParam0);
											func_210(uParam0, 0);
										}
										else if (!func_329(iVar0))
										{
											func_318(uParam0);
											func_317(uParam0);
											func_210(uParam0, 8);
										}
										else if (!func_334(uParam0))
										{
											if (!func_316(uParam0))
											{
												if (!network_is_game_in_progress())
												{
													func_335(0);
													func_210(uParam0, 7);
												}
												else
												{
													func_335(5);
													func_210(uParam0, 7);
												}
											}
										}
										else
										{
											func_210(uParam0, 6);
											Jump @814; //curOff = 690
											if (!func_336(uParam0))
											{
											}
											else
											{
												func_210(uParam0, 0);
												Jump @814; //curOff = 713
												if (!func_337(uParam0))
												{
													if (!func_228(uParam0->f_1) && !func_329(iVar0))
													{
														func_318(uParam0);
														func_317(uParam0);
														func_210(uParam0, 8);
													}
												}
												else
												{
													func_210(uParam0, 8);
													Jump @814; //curOff = 782
													if (!func_338(uParam0))
													{
													}
													else
													{
														func_209(uParam0);
														func_216(iVar0, 0);
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
			default:
				break;
	}
}

bool func_219(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return false;
		case 4:
			return false;
		case 5:
			return false;
		case 6:
			return false;
		case 7:
			return false;
		case 8:
			return false;
		default:
			break;
	}
	return false;
}

bool func_220(int iParam0)
{
	if (!func_206(iParam0))
	{
		return false;
	}
	return &(Global_1293165->f_120[iParam0]);
}

void func_221(int iParam0, int iParam1)
{
	if (!func_206(iParam0))
	{
		return;
	}
	Global_1293165->f_120[iParam0] = iParam1;
}

int func_222(var uParam0)
{
	return *uParam0;
}

int func_223(int iParam0, int iParam1)
{
	if (iParam0 <= 0 || iParam0 >= 9)
	{
		return -1;
	}
	if (!network_is_player_active(iParam1))
	{
		return -1;
	}
	return &((*Global_1056141)[iParam1]->f_41.f_1[iParam0]);
}

void func_224(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		return;
	}
	if (func_207(iParam0))
	{
		return;
	}
	if (func_213(iParam0))
	{
		return;
	}
	iVar0 = func_214(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = func_311(3, iParam0);
	if (iVar1 != 0)
	{
		if (func_339(iVar1) || func_340(iVar1))
		{
			return;
		}
	}
	bVar2 = _unlock_is_visible(iVar0);
	bVar3 = _unlock_is_unlocked(iVar0);
	if (func_313(func_312(iParam0)))
	{
		switch (func_315(func_312(iParam0), 0))
		{
			case 1:
			default:
				return;
				return;
			case 2:
				if (!bVar2)
				{
					func_310(iParam0, -1);
					return;
				}
			}
			if (!bVar3 || !bVar2)
			{
				iVar4 = func_311(0, iParam0);
				if (iVar4 == 0)
				{
					return;
				}
				if (_0xfbe782b3165ac8ec(iVar4))
				{
					return;
				}
				if (!func_313(func_312(iParam0)))
				{
					func_310(iParam0, func_314(iVar4, 0));
				}
				return;
			}
			func_310(iParam0, -1);
			func_215(iParam0, 1);
		}

bool func_225(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	iVar0 = func_341(2, iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	return _0xfbe782b3165ac8ec(iVar0);
}

void func_226(int iParam0, int iParam1)
{
	iVar0 = func_109(iParam0);
	if (!func_51(iVar0) || (iParam1 != -1 && func_342(iVar0) < iParam1))
	{
		set_bit(&(Global_1960071->f_1), iParam0);
	}
}

bool func_227(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = 18;
		iVar1 = 19;
	}
	else
	{
		iVar0 = 16;
		iVar1 = 17;
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (!func_225(iVar2))
		{
			return false;
		}
		iVar2++;
	}
	if (bParam0)
	{
		iVar0 = 23;
		iVar1 = 24;
	}
	else
	{
		iVar0 = 21;
		iVar1 = 22;
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (!func_225(iVar2))
		{
			return false;
		}
		iVar2++;
	}
	return true;
}

bool func_228(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return false;
	}
	iVar0 = func_214(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_unlocked(iVar0))
	{
		iVar1 = func_311(1, iParam0);
		if (iVar1 == 0)
		{
			return false;
		}
		if (_0xfbe782b3165ac8ec(iVar1))
		{
			return true;
		}
	}
	return false;
}

int func_229()
{
	return Global_1572887->f_405;
}

bool func_230(int iParam0)
{
	return func_344(func_343(iParam0));
}

bool func_231(int iParam0, int iParam1)
{
	if (!func_279(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_345(iParam0);
	switch (iVar0)
	{
		case -427144552:
			if (has_ped_got_weapon(Global_34, iParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 307971639:
			if (!func_346(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_347(iParam0))
			{
				return true;
			}
			break;
	}
	return func_348(iParam0, 0, 0, 0) >= iParam1;
}

void func_232(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_17411.f_2565[iVar1];
	clear_bit(&uVar3, iVar2);
	Global_17411.f_2565[iVar1] = uVar3;
}

int func_233(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_17081)
	{
		return &(Global_17081[iParam0]);
	}
	return 0;
}

bool func_234(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_235(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_236(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_237(int iParam0)
{
	iVar0 = iParam0;
	return (iVar0 >= 0 && iVar0 < 64);
}

bool func_238(int iParam0, int* iParam1)
{
	*iParam1 = -1;
	switch (iParam0)
	{
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			Var0 = { func_349(-697712761) };
			stat_id_get_int(&Var0, iParam1);
			return true;
		default:
			break;
	}
	return false;
}

bool func_239(int iParam0, int* iParam1)
{
	*iParam1 = -1;
	switch (iParam0)
	{
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			Var0 = { func_349(1270054266) };
			stat_id_get_int(&Var0, iParam1);
			return true;
		default:
			break;
	}
	return false;
}

int func_240(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 == 25)
	{
		return Global_1901947->f_50.f_26 * 2;
	}
	return Global_1901947->f_50.f_26;
}

int func_241(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1901947->f_50.f_27;
}

void func_242()
{
	Var0 = { func_350() };
	if (!func_148(Var0))
	{
		return;
	}
	if (Var0 == 2)
	{
		func_352(func_351(Var0), 0);
		return;
	}
	if (Var0 != 7)
	{
		return;
	}
	if (!func_353(Var0) && !func_354(Var0))
	{
		return;
	}
	func_355(Var0, 0, 2, 0, 0);
	if (func_353(Var0))
	{
		func_356(Var0);
	}
}

void func_243(var uParam0)
{
	func_357(&(uParam0->f_63), 1, 1);
	func_358(&(uParam0->f_35), 1);
}

void func_244(var uParam0)
{
	func_359(uParam0);
	uParam0->f_69 = -1;
	uParam0->f_69.f_1 = 0;
	func_360(&(uParam0->f_71));
	uParam0->f_135 = 0;
	StringCopy(&(uParam0->f_136), "", 24);
	func_361(&(uParam0->f_139), 0);
	uParam0->f_139.f_1 = 0;
	uParam0->f_139.f_2 = 0;
	uParam0->f_142 = -2;
	_0xde544b7ec0c187cc(&(uParam0->f_142.f_1));
	uParam0->f_142.f_2 = 0;
	uParam0->f_142.f_3 = 0;
	uParam0->f_142.f_4 = -1;
	func_361(&(uParam0->f_147), 0);
	uParam0->f_147.f_1 = 0;
	uParam0->f_147.f_2 = 0;
	uParam0->f_150 = 0;
	uParam0->f_151 = 0;
}

void func_245(var uParam0)
{
	*uParam0 = 0;
	func_360(&(uParam0->f_1));
	uParam0->f_65 = -1;
	uParam0->f_68 = 0;
	uParam0->f_69 = -1;
}

int func_246(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1296859->f_10;
	}
	return Global_263042[iParam0];
}

void func_247(int iParam0)
{
	Global_265377->f_124517.f_135 = (Global_265377->f_124517.f_135 || iParam0);
}

void func_248(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_524288->f_47317)
	{
		if (!func_362(iVar0))
		{
		}
		else
		{
			iVar1 = Global_524288->f_47318[iVar0]->f_57;
			if (!is_model_valid(iVar1))
			{
				iVar1 = 1599685341;
			}
			if (bParam0)
			{
				request_model(iVar1, false);
			}
			else
			{
				set_model_as_no_longer_needed(iVar1);
			}
		}
		iVar0++;
	}
}

void func_249(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_452)
	{
		if (!func_363(iVar0))
		{
		}
		else
		{
			iVar1 = Global_3145858->f_453[iVar0]->f_43;
			if (!is_model_valid(iVar1))
			{
				iVar1 = 594040097;
			}
			if (bParam0)
			{
				request_model(iVar1, false);
			}
			else
			{
				set_model_as_no_longer_needed(iVar1);
			}
		}
		iVar0++;
	}
}

void func_250(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_524288->f_40795)
	{
		if (!func_364(iVar0))
		{
		}
		else
		{
			iVar1 = Global_524288->f_40796[iVar0]->f_23;
			if (!is_model_valid(iVar1))
			{
				iVar1 = -1390341619;
			}
			if (bParam0)
			{
				request_model(iVar1, false);
			}
			else
			{
				set_model_as_no_longer_needed(iVar1);
			}
		}
		iVar0++;
	}
}

void func_251(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_13424)
	{
		if (!func_365(iVar0))
		{
		}
		else
		{
			iVar1 = Global_3145858->f_13425[iVar0]->f_66;
			if (!is_model_valid(iVar1))
			{
				iVar1 = 749266870;
			}
			if (bParam0)
			{
				request_model(iVar1, false);
			}
			else
			{
				set_model_as_no_longer_needed(iVar1);
			}
		}
		iVar0++;
	}
}

void func_252(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_36479 - 1))
	{
		if (!func_366(iVar0))
		{
		}
		else
		{
			uVar3 = Global_3145858->f_36480[iVar0]->f_1;
			iVar2 = _0x635423d55ca84fc8(uVar3);
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				iVar4 = _0x8df5f6a19f99f0d5(uVar3, iVar1);
				if (bParam0)
				{
					request_model(iVar4, false);
				}
				else
				{
					set_model_as_no_longer_needed(iVar4);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_253(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_18726)
	{
		if (!func_367(iVar0))
		{
		}
		else
		{
			iVar1 = Global_3145858->f_18727[iVar0]->f_8;
			if (!is_model_valid(iVar1))
			{
				iVar1 = 207132841;
			}
			if (bParam0)
			{
				request_model(iVar1, false);
			}
			else
			{
				set_model_as_no_longer_needed(iVar1);
			}
		}
		iVar0++;
	}
}

void func_254(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_32696 - 1))
	{
		iVar1 = Global_3145858->f_32697[iVar0]->f_11;
		if (iVar1 == -1)
		{
		}
		else if (bParam0)
		{
			_request_propset(iVar1);
		}
		else
		{
			_release_propset(iVar1);
		}
		iVar0++;
	}
}

bool func_255(int iParam0, int iParam1)
{
	return is_bit_set(iParam0, iParam1);
}

bool func_256(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam1 == 0)
	{
		return false;
	}
	if (uParam0->f_16 == iParam1)
	{
		func_368(uParam0, 4194304);
		return true;
	}
	iVar0 = func_369(iParam1);
	if (iVar0 == -1)
	{
		return false;
	}
	MemCopy(&(uParam0->f_27), {*Global_265377->f_4[iVar0]}, 3);
	uParam0->f_37 = { Global_265377->f_4[iVar0]->f_7 };
	uParam0->f_45 = Global_265377->f_4[iVar0]->f_22;
	uParam0->f_46 = Global_265377->f_4[iVar0]->f_30;
	uParam0->f_16 = Global_265377->f_4[iVar0]->f_28;
	uParam0->f_17 = &Global_265377->f_63755[iVar0];
	uParam0->f_61 = { Global_265377->f_4[iVar0]->f_24 };
	uParam0->f_30 = Global_265377->f_4[iVar0]->f_34;
	uParam0->f_32 = Global_265377->f_4[iVar0]->f_32;
	uParam0->f_33 = Global_265377->f_4[iVar0]->f_33;
	uParam0->f_21 = 1;
	uParam0->f_21.f_1 = 0;
	uParam0->f_21.f_4 = iParam4;
	uParam0->f_21.f_2 = Global_265377->f_4[iVar0]->f_29;
	uParam0->f_21.f_3 = Global_265377->f_4[iVar0]->f_31;
	uParam0->f_26 = Global_265377->f_4[iVar0]->f_31;
	uParam0->f_34 = Global_265377->f_4[iVar0]->f_40;
	uParam0->f_1 = { Global_265377->f_4[iVar0]->f_15 };
	MemCopy(&(uParam0->f_8), {Global_265377->f_4[iVar0]->f_4}, 8);
	func_370(Global_265377->f_4[iVar0]);
	if (iParam2 != -1)
	{
		if ((uParam0->f_21.f_2 == -933924539 && func_371(iParam2)) || (uParam0->f_21.f_2 == 395262693 && func_372(iParam2)))
		{
			uParam0->f_21.f_3 = iParam2;
			uParam0->f_26 = iParam2;
		}
	}
	if (iParam3 > 0)
	{
		uParam0->f_30 = iParam3;
	}
	iVar1 = func_373(&(Global_265377->f_63755[iVar0]));
	vVar2 = { func_374(uParam0->f_17) };
	if (iVar1 != -1)
	{
		uParam0->f_53 = { func_375(iVar1) };
	}
	else if (func_376(uParam0->f_17))
	{
		uParam0->f_53 = { func_378(func_377(uParam0->f_17)) };
	}
	else if (vVar2.y != -1 && vVar2.x != -1)
	{
		uParam0->f_53 = { func_379(&vVar2) };
	}
	else
	{
		uParam0->f_53 = { func_380(uParam0->f_16) };
		if (!func_148(uParam0->f_53))
		{
			uParam0->f_53 = { func_382(func_381(uParam0->f_21.f_2)) };
		}
	}
	func_383(uParam0);
	func_368(uParam0, 4194304);
	return true;
}

bool func_257(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_384(2097152))
	{
		return true;
	}
	if (func_132(&((*Global_263042)[&Global_1296859]->f_1), 2097152) && func_132(&((*Global_263042)[&Global_1296859]->f_1), 64))
	{
		if ((*Global_263042)[&Global_1296859]->f_1.f_16 == uParam0->f_16)
		{
			(*Global_263042)[&Global_1296859]->f_1.f_20 = ((*Global_263042)[&Global_1296859]->f_1.f_20 || uParam0->f_20);
			if (iParam1 != 255)
			{
				(*Global_263042)[&Global_1296859]->f_1 = iParam1;
			}
			(*Global_263042)[&Global_1296859]->f_1.f_18 = uParam0->f_18;
			func_385(&((*Global_263042)[&Global_1296859]->f_1), 64);
			func_386(32768);
			if (bParam2)
			{
				func_368(&((*Global_263042)[&Global_1296859]->f_1), 64);
			}
			if (bParam3)
			{
				func_247(32768);
			}
			func_387(&(Global_265377->f_124517), 0);
			return true;
		}
		else
		{
			func_126();
			func_388(2);
		}
	}
	if (func_389(uParam0, 0) && !func_390(255))
	{
		func_387(&(Global_265377->f_124517), 0);
		return true;
	}
	if (!func_391(uParam0->f_53, func_132(uParam0, 32768), 1))
	{
		return false;
	}
	if (!func_392(*uParam0))
	{
		func_387(&(Global_265377->f_124517), 18);
		return false;
	}
	if (func_393(uParam0))
	{
		func_387(&(Global_265377->f_124517), 19);
		return false;
	}
	if (func_354(uParam0->f_53))
	{
		func_387(&(Global_265377->f_124517), 20);
		return false;
	}
	if (uParam0->f_18 == 2147483647)
	{
		if (iParam1 == 255)
		{
			func_387(&(Global_265377->f_124517), 21);
			return false;
		}
		uParam0->f_18 = func_394(iParam1);
	}
	if (!func_395(uParam0->f_53))
	{
		func_396(uParam0->f_53);
	}
	if (iParam1 != 255)
	{
		*uParam0 = iParam1;
	}
	func_385(&((*Global_263042)[&Global_1296859]->f_1), 64);
	func_386(32768);
	if (bParam2)
	{
		func_368(uParam0, 64);
	}
	if (bParam3)
	{
		func_247(32768);
	}
	iVar0 = network_player_id_to_int();
	(*Global_263042)[iVar0]->f_1 = { *uParam0 };
	(*Global_263042)[iVar0]->f_1.f_19 = get_network_time_accurate();
	func_397(uParam0);
	func_385(&((*Global_263042)[iVar0]->f_1), 2097152);
	func_388(1);
	func_387(&(Global_265377->f_124517), 0);
	return true;
}

void func_258(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

int func_259(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_225(iParam0))
	{
		return 0;
	}
	iVar0 = func_398(iParam0, 5);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (_0xfbe782b3165ac8ec(iVar0))
	{
		return 5;
	}
	iVar0 = func_398(iParam0, 4);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (_0xfbe782b3165ac8ec(iVar0))
	{
		return 4;
	}
	iVar0 = func_398(iParam0, 3);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (_0xfbe782b3165ac8ec(iVar0))
	{
		return 3;
	}
	return 2;
}

int func_260(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return missiondata_get_high_score((*Global_1835011)[iParam0]->f_51);
}

var func_261()
{
	return Global_1109804->f_21.f_12.f_2;
}

void func_262()
{
	if (Global_1296859->f_16 > 32 || Global_1296859->f_16 < 0)
	{
		return;
	}
	iVar0 = Global_1211315->f_1;
	iVar1 = missiondata_get_replay_state((*Global_1835011)[iVar0]->f_51);
	if (Global_1296859->f_16 != Global_1296859->f_10)
	{
		if (iVar1 != 6)
		{
			_0xe4e2c581f127a11c((*Global_1835011)[iVar0]->f_51, 6);
		}
		return;
	}
	if (func_200())
	{
		if (iVar1 != 2)
		{
			_0xe4e2c581f127a11c((*Global_1835011)[iVar0]->f_51, 2);
		}
		return;
	}
	if (!func_225(iVar0))
	{
		if (iVar1 != 2)
		{
			_0xe4e2c581f127a11c((*Global_1835011)[iVar0]->f_51, 2);
		}
		return;
	}
	iVar2 = func_399(iVar0);
	iVar3 = func_400(Global_1296859->f_16);
	if (iVar2 > 0)
	{
		switch (func_401(iVar2, iVar3))
		{
			case 2:
				if (iVar1 != 4)
				{
					_0xe4e2c581f127a11c((*Global_1835011)[iVar0]->f_51, 4);
				}
				return;
			case 1:
				if (iVar1 != 5)
				{
					_0xe4e2c581f127a11c((*Global_1835011)[iVar0]->f_51, 5);
				}
				return;
			case 0:
				if (iVar1 == 5 || iVar1 == 4)
				{
					_0xe4e2c581f127a11c((*Global_1835011)[iVar0]->f_51, 2);
					iVar1 = 2;
				}
				break;
		}
	}
	func_238(iVar0, &iVar4);
	iVar5 = absi((get_cloud_time_as_int() - iVar4));
	if (iVar5 < func_241(iVar0))
	{
		if (iVar1 != 1)
		{
			_0xe4e2c581f127a11c((*Global_1835011)[iVar0]->f_51, 1);
		}
	}
	else if ((iVar1 == 1 || iVar1 == 2) || iVar1 == 6)
	{
		_0xe4e2c581f127a11c((*Global_1835011)[iVar0]->f_51, 0);
	}
}

void func_263()
{
	vVar6 = -1;
	vVar6.f_1 = -1;
	vVar6.f_2 = -1;
	while (_event_manager_is_event_pending(-4325789))
	{
		if (_event_manager_peek_event(-4325789, &vVar0))
		{
			switch (vVar0.x)
			{
				case -1203660660:
					iVar4 = _0x57e798b65c45ee17(vVar0.z);
					if (Global_1296859->f_16 != Global_1296859->f_10)
					{
					}
					else if (func_200())
					{
					}
					else if (vVar0.z == 0)
					{
					}
					else if (!func_140())
					{
					}
					else
					{
						switch (iVar4)
						{
							case -1598695885:
								iVar5 = 13;
								while (iVar5 <= 25)
								{
									if ((*Global_1835011)[iVar5]->f_51 != vVar0.z)
									{
									}
								else
								{
									}
									else
									{
										iVar5++;
									}
								}
								func_143(iVar5);
								break;
							default:
								vVar6 = { func_374(vVar0.z) };
								if (vVar6.x != -1 && vVar6.y != -1)
								{
									vVar6.f_2 = vVar0.y;
									iVar9 = func_402(vVar6.x, vVar6.y);
									switch (iVar4)
									{
										case 2087030163:
											iVar10 = func_404(func_403(Global_1296859->f_10, 1));
											break;
										default:
											break;
									}
									func_405(iVar9, iVar10, 1, vVar6.z);
								}
								break;
						}
						_close_app_by_hash(get_hash_key("player_menu"));
						_close_app_by_hash(29649618);
						do_screen_fade_out(0);
						Jump @338; //curOff = 329
					}
					_event_manager_pop_event(-4325789);
					default:
						break;
			}
		}
	}
}

void func_264()
{
	if (func_406() == -1)
	{
		return;
	}
	iVar0 = func_406();
	if (func_407(iVar0, 1))
	{
		if (!func_408() && !func_409(255))
		{
			func_410(Global_1296859->f_17);
			func_411(1);
			func_412(1);
			func_413((*Global_1835011)[iVar0]->f_19, 0f, 1);
			func_414(1);
			func_415(get_cloud_time_as_int());
		}
		iVar1 = func_416();
		if (iVar1 > 0)
		{
			if (absi((get_cloud_time_as_int() - iVar1)) > 180)
			{
				if (func_417(&vVar2))
				{
					func_411(0);
					func_418(vVar2, 0f, -1082130432, -1082130432, 1, 1, 1);
				}
				func_143(-1);
			}
		}
	}
	else if (absi((get_cloud_time_as_int() - Global_1211315->f_9)) >= 15)
	{
		func_143(-1);
		func_419(_create_var_string(2, "SM_MISSION_UNAVAILABLE"), 10000, 0, 0, 0, 1);
		do_screen_fade_in(1000);
	}
}

void func_265()
{
	uVar0 = Global_1211315->f_1 + 1;
	Global_1211315->f_1 = uVar0;
	if (Global_1211315->f_1 > 25)
	{
		Global_1211315->f_1 = 13;
	}
}

int func_266(struct<2> Param0)
{
	if (&Global_1900806 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1900806 - 1))
	{
		if (func_235(*(*Global_1900807)[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_267(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

void func_268(int iParam0, bool bParam1)
{
	iVar0 = func_266((*Global_1835011)[iParam0]->f_1);
	if (!func_267(iVar0))
	{
		return;
	}
	if (does_blip_exist(Global_1900838[iVar0]))
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		remove_blip((*Global_1900838)[iVar0]);
	}
	if (func_420(iVar0, 48))
	{
		set_script_as_no_longer_needed(&((*Global_1835011)[iParam0]->f_13));
	}
	if (bParam1)
	{
		func_314(func_341(4, iParam0), 0);
		func_355((*Global_1835011)[iParam0]->f_1, 0, 2, 0, 0);
	}
	if ((*Global_1835011)[iParam0]->f_32 != -1)
	{
		(*Global_1835011)[iParam0]->f_32 = -1;
	}
	func_421(iParam0);
}

void func_269(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	if (!func_267(iParam1))
	{
		iParam1 = func_266(func_422(iParam0));
		if (!func_267(iParam1))
		{
			return;
		}
	}
	if (does_blip_exist((*Global_1835011)[iParam0]->f_28))
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		remove_blip(&((*Global_1835011)[iParam0]->f_28));
		(*Global_1835011)[iParam0]->f_66 = 0;
	}
	else if (bParam2 && !Global_26640)
	{
		func_423(iParam0, iParam5, iParam1);
	}
	if (func_420(iParam1, 48))
	{
		set_script_as_no_longer_needed(&((*Global_1835011)[iParam0]->f_13));
	}
	Var0 = { (*Global_1835011)[iParam0]->f_13 };
	if ((bParam3 && !is_string_null_or_empty(&Var0)) && is_thread_active((*Global_1835011)[iParam0]->f_17, false))
	{
		_0x7de4643157ad646c((*Global_1835011)[iParam0]->f_17);
	}
	if (bParam4)
	{
		func_356((*Global_1835011)[iParam0]->f_1);
	}
	else
	{
		func_424(iParam1, 3831);
	}
	(*Global_1835011)[iParam0]->f_71 = 0;
}

void func_270(int iParam0)
{
	MemCopy(&uVar0, {(*Global_1835011)[iParam0]->f_4}, 3);
	if ((func_50() != -1 && !is_string_null_or_empty(&uVar0)) && is_thread_active((*Global_1835011)[iParam0]->f_8, false))
	{
		_0x7de4643157ad646c((*Global_1835011)[iParam0]->f_8);
	}
}

void func_271(int iParam0)
{
	if (!func_237(iParam0))
	{
		return;
	}
	iVar0 = get_player_index();
	if (!_network_is_player_index_valid(iVar0) || !network_is_player_connected(iVar0))
	{
		return;
	}
	if (!func_118(iParam0, iVar0))
	{
		return;
	}
	_0xb909149f2bb5f6da(&((*Global_1056141)[iVar0]->f_15.f_20), iParam0);
}

void func_272()
{
	Global_1211315->f_7 = 0;
}

bool func_273(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_274(int iParam0)
{
	if (func_234(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_275(int iParam0)
{
	if (Global_1904651->f_33[iParam0]->f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = get_cloud_time_as_int();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3534)
	{
		if (Global_39.f_3534[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904651->f_33[iParam0]->f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904651->f_33[iParam0]->f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (&Global_39.f_3534[iVar0] - iVar1);
			if (Global_39.f_3534[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904651->f_33[iParam0]->f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_276()
{
	if (!func_425())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

bool func_277(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

int func_278(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1071686->f_636.f_601;
		case 3:
			return Global_1071686->f_636.f_2103;
		case 4:
			return Global_1071686->f_636.f_12605;
		case 5:
			return Global_1071686->f_636.f_12907;
		case 6:
			return Global_1071686->f_636.f_15909;
		case 7:
			return Global_1071686->f_636.f_16511;
		case 8:
			return Global_1071686->f_636.f_18913;
		default:
			break;
	}
	return -1;
}

bool func_279(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_280(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_279(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_426(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_152(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_150(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_150(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

struct<16> func_281(var uParam0, bool bParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	if (bParam1)
	{
		Var0.f_15 = func_426(uParam0->f_4, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_151() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_282(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_427(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_429(func_428(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_430(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

bool func_283(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_150(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_284(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_161(*uParam0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam1)
	{
		return iVar0;
	}
	if (Var1.f_13)
	{
		return iVar0;
	}
	iVar15 = func_345(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_431(*uParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_432(-1230526146, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2072933068)
	{
		Var44 = { func_433(*uParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_434(-1230526146, &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var69 = { func_435(*uParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_436(-1230526146, &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_281(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_282(-1230526146, &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_285(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_150(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_286(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!func_157(uParam0, iParam1, iParam2, iParam3))
	{
		return false;
	}
	if (uParam0->f_9 == 1782082944)
	{
		return false;
	}
	if (func_290(uParam0, uParam0, bParam4))
	{
		return true;
	}
	return false;
}

bool func_287(var uParam0, int iParam1)
{
	return func_173(*uParam0, iParam1);
}

void func_288(var uParam0, int iParam1)
{
	if (!func_287(uParam0, iParam1))
	{
		return;
	}
	func_437(uParam0, iParam1);
}

bool func_289(var uParam0, bool bParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (_0x375f5870a7b8bec1(&(uParam0->f_16)))
	{
		StringCopy(&(uParam0->f_16), func_438(), 64);
	}
	if (func_159(bParam2))
	{
		if (!_0xd80a8854db5cfba5(func_150(bParam2), uParam0, uParam0, 29))
		{
			return false;
		}
	}
	else
	{
		Var0.f_9 = 1;
		Var0.f_11 = -1591664384;
		Var0 = { func_281(uParam0, 0) };
		Var0.f_16 = { uParam0->f_16 };
		Var0.f_25 = uParam0->f_27;
		Var0.f_26 = uParam0->f_28;
		Var0.f_24 = uParam0->f_25;
		Var0.f_27 = uParam0->f_24;
		if (func_432(-1230526146, &Var0, bParam1) == -1)
		{
			return false;
		}
	}
	return true;
}

bool func_290(var uParam0, var uParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	iVar0 = func_150(bParam2);
	if (!_0x025a1b1fb03fbf61(iVar0, uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_291(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	Var29 = { func_154(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_156(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_157(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_290(&Var45, &Var0, 0))
				{
					if (func_287(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_158(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_158(iVar43);
	}
	return false;
}

struct<4> func_292()
{
	return Global_1291734->f_11.f_310;
}

bool func_293()
{
	return Global_1291734->f_11.f_318 > Global_1296859->f_21;
}

int func_294(int iParam0)
{
	iVar0 = func_439(iParam0);
	bVar1 = func_115(func_114(), 0, 0);
	if (!bVar1)
	{
		return 3;
	}
	return iVar0;
}

bool func_295(int iParam0)
{
	return func_440(&(Global_3145858->f_6), iParam0);
}

int func_296(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				return 1;
			case 2:
				return 2;
			case 3:
				return 3;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 4;
			case 1:
				return 5;
			case 2:
				return 6;
			case 3:
				return 7;
			default:
				break;
		}
	}
	return -1;
}

bool func_297(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	Var29 = { func_154(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_156(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_157(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_290(&Var45, &Var0, 0))
				{
					if (func_287(&(Var0.f_24), 32))
					{
						*uParam0 = { Var0 };
						func_158(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_158(iVar43);
	}
	return false;
}

struct<4> func_298(bool bParam0)
{
	Var2.f_9 = -1591664384;
	if (!func_285("ALL HORSES", &iVar0, &iVar1, -1591664384, bParam0))
	{
		return Var2;
	}
	iVar16 = 0;
	while (iVar16 < iVar1)
	{
		if (!func_157(&Var2, iVar16, iVar0, iVar1))
		{
		}
		else if (_0xb881ca836cc4b6d4(&Var2))
		{
		}
		else
		{
			iVar16++;
		}
	}
	func_158(iVar0);
	return Var2;
}

void func_299(var uParam0, int iParam1)
{
	if (func_287(uParam0, iParam1))
	{
		return;
	}
	func_175(uParam0, iParam1);
}

void func_300(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_301(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940258->f_12)
	{
		if ((bParam2 || Global_1940258->f_13 > 0) || Global_1940258->f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1940258->f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1940258->f_14 > 0 || (bParam2 && Global_1940258->f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1940258->f_7)
		{
			if (bParam2 || Global_1940258->f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_302(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 5:
			sVar0 = "IZ_val_saloon_int_room_main";
			break;
	}
	if (is_string_null_or_empty(sVar0))
	{
		return;
	}
	set_ambient_zone_state_persistent(sVar0, bParam1, true);
}

void func_303(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 5:
			if (bParam1)
			{
				set_portal_settings_override("VAL_SALOON_SWINGING_DOOR", "VAL_SALOON_SWINGING_DOOR_BARRED");
			}
			else
			{
				remove_portal_settings_override("VAL_SALOON_SWINGING_DOOR_BARRED");
			}
			break;
	}
}

void func_304(int iParam0, int iParam1)
{
	func_93(&(Global_1940018->f_5[iParam0]->f_7), iParam1);
}

bool func_305(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_306(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_8123[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_19674[iParam0] && iParam1) != 0;
}

bool func_307(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

int func_308(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_441(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

bool func_309(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = network_player_id_to_int();
	}
	return (func_442(iParam0) && func_92((*(*Global_1238240)[iParam2])[iParam0]->f_19, iParam1));
}

void func_310(int iParam0, int iParam1)
{
	if (!func_206(iParam0))
	{
		return;
	}
	(*Global_1293332)[iParam0] = iParam1;
}

int func_311(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -562854755;
				case 1:
					return -193397860;
				case 2:
					return -1639158743;
				case 3:
					return -545263819;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -331472846;
				case 1:
					return 1266428317;
				case 2:
					return -1342435444;
				case 3:
					return -243002563;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 429079746;
				case 1:
					return 1587973176;
				case 2:
					return 1338229360;
				case 3:
					return -271501111;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 771711526;
				case 1:
					return -466995375;
				case 2:
					return -398924971;
				case 3:
					return -1232006170;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -2052512212;
				case 1:
					return -1144971953;
				case 2:
					return 86781479;
				case 3:
					return 416111513;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -446960320;
				case 1:
					return -2015262927;
				case 2:
					return -707938197;
				case 3:
					return 2136054096;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1149863246;
				case 1:
					return 407185110;
				case 2:
					return -769170006;
				case 3:
					return -411703805;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1554709632;
				case 1:
					return 410660064;
				case 2:
					return -254646314;
				case 3:
					return 1524612084;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_312(int iParam0)
{
	if (iParam0 <= 0 || iParam0 >= 9)
	{
		return -1;
	}
	return Global_1293332[iParam0];
}

bool func_313(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 2147483647)
	{
		return false;
	}
	return true;
}

int func_314(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (Global_1293346->f_458.f_1546 >= 40)
	{
		func_443();
		return -1;
	}
	Var0 = -1;
	Var0.f_5.f_1 = 11;
	Var0.f_18.f_1 = 10;
	Var0.f_4 = iParam0;
	Var0 = func_444();
	Var0.f_3 = iParam1;
	func_445(Var0, 0);
	return Var0;
}

int func_315(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (&Global_1293346->f_458.f_44[iVar0] == -1)
		{
		}
		else if (&Global_1293346->f_458.f_44[iVar0] != iParam0)
		{
		}
		else
		{
			return Global_1293346->f_458.f_44[iVar0]->f_1;
		}
		iVar0++;
	}
	if (bParam1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_1293346->f_458.f_1245[iVar0] == -1)
		{
		}
		else if (&Global_1293346->f_458.f_1245[iVar0] != iParam0)
		{
		}
		else
		{
			return Global_1293346->f_458.f_1245[iVar0]->f_1;
		}
		iVar0++;
	}
	return 0;
}

bool func_316(var uParam0)
{
	if (_does_thread_exist(uParam0->f_3))
	{
		if (is_thread_active(uParam0->f_3, false))
		{
			return true;
		}
	}
	return false;
}

int func_317(var uParam0)
{
	if (!_does_thread_exist(uParam0->f_3))
	{
		return 1;
	}
	_0x7de4643157ad646c(uParam0->f_3);
	return 0;
}

void func_318(var uParam0)
{
	if (does_blip_exist(uParam0->f_4))
	{
		set_radar_zoom(uParam0->f_4);
		remove_blip(&(uParam0->f_4));
	}
}

void func_319(int iParam0, bool bParam1)
{
	iVar0 = Global_1296859->f_10;
	if (!_network_is_player_index_valid(iVar0) || !network_is_player_active(iVar0))
	{
		return;
	}
	if (bParam1)
	{
		if (!is_bit_set((*Global_1056141)[iVar0]->f_41, iParam0))
		{
			set_bit(&((*Global_1056141)[iVar0]->f_41), iParam0);
		}
	}
	else if (is_bit_set((*Global_1056141)[iVar0]->f_41, iParam0))
	{
		clear_bit(&((*Global_1056141)[iVar0]->f_41), iParam0);
	}
}

bool func_320(var uParam0)
{
	return false;
}

bool func_321()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

bool func_322()
{
	iVar0 = func_446(-2104202019, 120471651);
	if (iVar0 > 0)
	{
		return true;
	}
	if (!_unlock_is_visible(-1348352077))
	{
		return false;
	}
	return true;
}

void func_323(int iParam0)
{
	if (!func_447(iParam0))
	{
		return;
	}
	if (func_448(iParam0))
	{
		return;
	}
	if (func_449(iParam0, 0, player_id(), 0, 0))
	{
	}
}

bool func_324(var uParam0)
{
	Var0.f_8 = 100;
	func_450(uParam0->f_1, &Var0);
	if (is_bit_set(Var0.f_9, 9))
	{
		if (!func_451(uParam0->f_1, &Var0, &uVar10, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_325(var uParam0)
{
	Var0.f_8 = 100;
	func_450(uParam0->f_1, &Var0);
	if (Var0.f_3 != 0)
	{
		if (does_blip_exist(uParam0->f_4))
		{
			remove_blip(&(uParam0->f_4));
		}
		if (is_bit_set(Var0.f_9, 9))
		{
			if (!func_451(uParam0->f_1, &Var0, &uVar10, 0))
			{
				return false;
			}
			func_452(uParam0, Var0);
		}
		else if (func_187(Var0))
		{
			return false;
		}
		fVar13 = func_453(uParam0->f_1);
		uParam0->f_4 = _blip_add_for_radius(1673015813, Var0, fVar13);
		set_blip_sprite(uParam0->f_4, Var0.f_3, true);
		set_blip_name_from_text_file(uParam0->f_4, &(Var0.f_4));
		_blip_set_modifier(uParam0->f_4, -1986290853);
		if (func_454(uParam0->f_1, &iVar14))
		{
			set_blip_flash_timer(uParam0->f_4, 72, iVar14);
		}
	}
	else
	{
		return false;
	}
	if (does_blip_exist(uParam0->f_4))
	{
		return true;
	}
	return false;
}

bool func_326(var uParam0)
{
	if (!func_455(uParam0->f_1, &iVar0))
	{
		return false;
	}
	if (uParam0->f_2 == iVar0)
	{
		return false;
	}
	uParam0->f_2 = iVar0;
	return true;
}

bool func_327(var uParam0)
{
	Var0.f_8 = 100;
	func_450(uParam0->f_1, &Var0);
	if (!is_bit_set(Var0.f_9, 9))
	{
		return false;
	}
	vVar10 = { func_456() };
	vVar13 = { func_456() };
	if (func_451(uParam0->f_1, &vVar10, &vVar13, 0))
	{
		if (!func_457(uParam0->f_8, vVar10))
		{
			func_452(uParam0, vVar10);
			vVar13 = { vVar13 };
			return true;
		}
	}
	return false;
}

bool func_328(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return false;
		case 4:
			return true;
		case 5:
			return false;
		case 6:
			return false;
		case 7:
			return false;
		case 8:
			return false;
		default:
			break;
	}
	return false;
}

bool func_329(int iParam0)
{
	iVar0 = func_214(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	return _unlock_is_visible(iVar0);
}

void func_330(var uParam0)
{
	if (!is_screen_faded_in())
	{
		return;
	}
	if (Global_33 != -1)
	{
		switch (uParam0->f_1)
		{
			case 4:
				if (Global_33 == 0)
				{
					if (func_231(-492264119, 1) && _0xfbe782b3165ac8ec(-2028134866))
					{
						func_419(_create_var_string(0, 1222048723, uParam0->f_4), 10000, 0, 0, 0, 1);
						_blip_set_modifier(uParam0->f_4, -1782749564);
					}
					Global_33 = -1;
				}
				break;
			case 5:
				if (Global_33 == 1)
				{
					func_419(_create_var_string(0, -875966959, uParam0->f_4), 10000, 0, 0, 0, 1);
					_blip_set_modifier(uParam0->f_4, -1782749564);
					Global_33 = -1;
				}
				break;
			case 3:
				if (Global_33 == 2)
				{
					func_419(_create_var_string(0, 1903929800, uParam0->f_4), 10000, 0, 0, 0, 1);
					_blip_set_modifier(uParam0->f_4, -1782749564);
					Global_33 = -1;
				}
				break;
			case 6:
				if (Global_33 == 3)
				{
					func_419(_create_var_string(0, -227617864, uParam0->f_4), 10000, 0, 0, 0, 1);
					_blip_set_modifier(uParam0->f_4, -1782749564);
					Global_33 = -1;
				}
				break;
		}
	}
}

bool func_331(var uParam0)
{
	if (func_458() == 9)
	{
		return false;
	}
	Var0.f_8 = 100;
	func_450(uParam0->f_1, &Var0);
	if (is_bit_set(Var0.f_9, 9) && func_187(Var0))
	{
		if (!func_451(uParam0->f_1, &Var0, &uVar13, 0))
		{
			return false;
		}
	}
	else if (func_187(Var0))
	{
		return false;
	}
	vVar10 = { get_entity_coords(get_player_ped(player_id()), false, false) };
	fVar16 = vdist2(Var0, vVar10);
	if (is_bit_set(Var0.f_9, 16))
	{
		fVar16 = func_121(Var0, vVar10);
	}
	if (fVar16 <= IntToFloat((Var0.f_8 * Var0.f_8)))
	{
		return true;
	}
	return false;
}

bool func_332(var uParam0)
{
	request_script_with_name_hash(-1571441951);
	if (!has_script_with_name_hash_loaded(-1571441951))
	{
		return false;
	}
	if (get_number_of_free_stacks_of_this_size(2051) <= 0)
	{
		return false;
	}
	Var0 = get_cloud_time_as_int();
	Var0.f_1 = uParam0->f_1;
	if (!_does_thread_exist(uParam0->f_3))
	{
		uParam0->f_3 = start_new_script_with_name_hash_and_args(-1571441951, &Var0, 2, 2051);
		set_script_with_name_hash_as_no_longer_needed(-1571441951);
		return false;
	}
	return true;
}

void func_333()
{
	Global_1293332->f_10 = 5;
}

bool func_334(var uParam0)
{
	switch (func_223(uParam0->f_1, Global_1296859->f_10))
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			func_318(uParam0);
			break;
		case 4:
			break;
		case 6:
			break;
		case 7:
		case 8:
			func_459();
			return true;
	}
	return false;
}

void func_335(int iParam0)
{
	Global_1293332->f_10 = iParam0;
}

bool func_336(var uParam0)
{
	if (!uParam0->f_6)
	{
		uParam0->f_5 = get_cloud_time_as_int();
		uParam0->f_6 = 1;
		return false;
	}
	if (absi((uParam0->f_5 - get_cloud_time_as_int())) > func_460())
	{
		uParam0->f_6 = 0;
		return true;
	}
	return false;
}

bool func_337(var uParam0)
{
	if (func_316(uParam0))
	{
		return false;
	}
	if (!func_228(uParam0->f_1))
	{
		return false;
	}
	return true;
}

bool func_338(var uParam0)
{
	if (func_461() || func_462())
	{
		return false;
	}
	switch (uParam0->f_1)
	{
		case 4:
			if ((func_463(4) && func_279(-428390721, 0)) && !func_231(-428390721, 1))
			{
				if (func_419(_create_var_string(2, "CUTSCENE_EXIT_HELP_MISSING_ROLE_ITEM_TRADER"), 10000, 0, 0, 0, 1) != 0)
				{
					return true;
				}
				return false;
			}
			break;
		case 5:
			if (func_463(5))
			{
				if (func_279(-1733092640, 0) && func_231(-1733092640, 1))
				{
					if (func_419(_create_var_string(2, "CUTSCENE_EXIT_HELP_HAS_ROLE_ITEM_COLLECTOR"), 10000, 0, 0, 0, 1) != 0)
					{
						return true;
					}
					return false;
				}
				else
				{
					if (func_419(_create_var_string(2, "CUTSCENE_EXIT_HELP_MISSING_ROLE_ITEM_COLLECTOR"), 10000, 0, 0, 0, 1) != 0)
					{
						return true;
					}
					return false;
				}
			}
			break;
	}
	return true;
}

int func_339(int iParam0)
{
	if (!func_447(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_2011)
	{
		if (Global_1293346->f_2011.f_1[iVar0]->f_4 == iParam0 && Global_1293346->f_2011.f_1[iVar0]->f_5 == 0)
		{
			return _0xe10f2d7715ababec(Global_1293346->f_2011.f_1[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

int func_340(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (&Global_1293346->f_458.f_44[iVar0] == -1)
		{
		}
		else if (Global_1293346->f_458.f_44[iVar0]->f_4 != iParam0)
		{
		}
		else
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_341(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -348950400;
				case 2:
					return 239417318;
				case 3:
					return 239417318;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1307826022;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1907908866;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -889182566;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -474428808;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 16540788;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -481682130;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1990849941;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1265587408;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return 1087345397;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return -1817797378;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					return -1142776975;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
					return 2117980229;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1427667791;
				case 2:
					return -1124047374;
				case 3:
					return -311950714;
				case 4:
					return -1877729336;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1733369788;
				case 2:
					return -1291660805;
				case 3:
					return 53620250;
				case 4:
					return -967242671;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1751392738;
				case 2:
					return -1002933146;
				case 3:
					return 300796817;
				case 4:
					return -1332027179;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1523907969;
				case 2:
					return -1340126692;
				case 3:
					return -1177458231;
				case 4:
					return 1413260826;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 318496303;
				case 2:
					return -1612797541;
				case 3:
					return -1876683153;
				case 4:
					return 1251939043;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -411791259;
				case 2:
					return 1855246300;
				case 3:
					return 763461736;
				case 4:
					return -92262210;
				default:
					break;
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -644680542;
				case 2:
					return 2084465459;
				case 3:
					return 1616668189;
				case 4:
					return -1758631398;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1585597204;
				case 2:
					return 941214835;
				case 3:
					return 68299210;
				case 4:
					return 1699902717;
				default:
					break;
			}
			break;
		case 21:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -913454268;
				case 2:
					return 1265238199;
				case 3:
					return -1638616368;
				case 4:
					return 1550104174;
				default:
					break;
			}
			break;
		case 22:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1239767970;
				case 2:
					return -1099733308;
				case 3:
					return -697261301;
				case 4:
					return 1865014264;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1227772128;
				case 2:
					return 1853607854;
				case 3:
					return 1511414161;
				case 4:
					return -2030843481;
				default:
					break;
			}
			break;
		case 24:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1597340910;
				case 2:
					return 885906515;
				case 3:
					return -674835160;
				case 4:
					return 867181329;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1824548752;
				case 2:
					return -645886158;
				case 3:
					return 825197572;
				case 4:
					return 1390137360;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_342(int iParam0)
{
	func_144(iParam0, &iVar0, &iVar1);
	if (!func_234(iParam0, 65536) && !func_234(iParam0, 32768))
	{
		if (func_273(iVar0, iVar1))
		{
			return 1;
		}
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_39.f_3534)
	{
		if (Global_39.f_3534[iVar2]->f_2 == iParam0)
		{
			return Global_39.f_3534[iVar2]->f_1;
		}
		iVar2++;
	}
	return 0;
}

int func_343(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case -88424047:
			iVar0 = 1;
			break;
		case 1651967528:
			iVar0 = 2;
			break;
		case -84928653:
			iVar0 = 3;
			break;
		case 1306134188:
			iVar0 = 4;
			break;
		case -1357178860:
			iVar0 = 5;
			break;
		case 133180145:
			iVar0 = 6;
			break;
		case 655115506:
			iVar0 = 7;
			break;
		case 1737952409:
			iVar0 = 8;
			break;
		case 2137301164:
			iVar0 = 9;
			break;
		case -110687166:
			iVar0 = 10;
			break;
		case -2030542394:
			iVar0 = 11;
			break;
		case -11301188:
			iVar0 = 12;
			break;
		case -1312679892:
			iVar0 = 13;
			break;
		case -61119924:
			iVar0 = 14;
			break;
		case 2134863183:
			iVar0 = 15;
			break;
		case -159568751:
			iVar0 = 16;
			break;
		case -1808811965:
			iVar0 = 17;
			break;
		case -1854341522:
			iVar0 = 18;
			break;
		case 1464020707:
			iVar0 = 19;
			break;
		case 1098974047:
			iVar0 = 20;
			break;
		case 868706284:
			iVar0 = 21;
			break;
		case 313296873:
			iVar0 = 22;
			break;
		case 541270806:
			iVar0 = 23;
			break;
		case 922800273:
			iVar0 = 24;
			break;
		case 1298496858:
			iVar0 = 25;
			break;
		case 1699163417:
			iVar0 = 26;
			break;
		case 864110990:
			iVar0 = 27;
			break;
		case -2127829790:
			iVar0 = 28;
			break;
		case -575777117:
			iVar0 = 29;
			break;
		case -1879562593:
			iVar0 = 30;
			break;
		case 1890312850:
			iVar0 = 31;
			break;
		case 1735278055:
			iVar0 = 32;
			break;
		case -1480790826:
			iVar0 = 33;
			break;
	}
	return iVar0;
}

bool func_344(int iParam0)
{
	return func_464(&(Global_1572887->f_405.f_1), iParam0, 3);
}

int func_345(int iParam0)
{
	if (!func_279(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_346(int iParam0, int iParam1)
{
	if (!func_279(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_465(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_285("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_157(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_49(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_158(iVar1);
				return true;
			}
			iVar3++;
		}
		func_158(iVar1);
	}
	return false;
}

bool func_347(int iParam0)
{
	if (!func_279(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_466(iParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_467(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_468(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_469(iParam0);
	iVar2 = func_468(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

int func_348(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_279(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_345(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_465(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_470(iParam0, 0);
	}
	if (func_426(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_150(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_471(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_150(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

struct<2> func_349(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_350()
{
	return Global_265377->f_124517.f_71.f_53;
}

int func_351(struct<2> Param0)
{
	if (!func_148(Param0))
	{
		return -1;
	}
	if (Param0 != 2)
	{
		return -1;
	}
	return func_308(Param0);
}

void func_352(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	Var0 = { func_375(iParam0) };
	if (!func_354(Var0))
	{
		return;
	}
	func_472(0);
	func_473();
	func_355(Var0, 0, 2, 0, 0);
	Global_1900736->f_69 = 0;
	if (bParam1)
	{
		func_314(func_341(4, iParam0), 0);
	}
	func_421(iParam0);
	func_139(0);
}

bool func_353(struct<2> Param0)
{
	iVar0 = func_474(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

bool func_354(struct<2> Param0)
{
	iVar0 = func_474(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_355(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_148(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_354(Param0) && !func_353(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_475(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_474(Param0) == 3)
		{
			func_476(1, -1706799532);
		}
		else if (func_474(Param0) == 4)
		{
			func_476(0, -1706799532);
		}
	}
	if ((func_474(Param0) == 3 || func_474(Param0) == 1) || ((bParam5 && func_474(Param0) == 4) && _0x01f4d242765c6b24(func_475(Param0))))
	{
		if (iParam3 != -1)
		{
			func_477(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_477(Param0, 2, iParam4, 255, 0);
		}
	}
	func_478(Param0, 0);
	if (func_235(func_147(0), Param0))
	{
		func_479(1);
		func_480(0);
		func_481(0);
		func_482(1);
	}
	func_483(Param0);
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_149(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		_0x1096603b519c905f("");
	}
}

void func_356(struct<2> Param0)
{
	if (&Global_1900806 <= 0)
	{
		return;
	}
	if (!func_148(Param0))
	{
		return;
	}
	if (func_353(Param0))
	{
		func_355(Param0, 0, -1, 0, 0);
	}
	iVar0 = func_266(Param0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1900806 > 1)
	{
		*(*Global_1900807)[iVar1] = { *((*Global_1900807)[(&Global_1900806 - 1)]) };
		*(*Global_1900838)[iVar1] = { *((*Global_1900838)[(&Global_1900806 - 1)]) };
		func_484((*Global_1900807)[(&Global_1900806 - 1)]);
		*((*Global_1900838)[(&Global_1900806 - 1)]) = { Var2 };
	}
	else
	{
		func_484((*Global_1900807)[iVar1]);
		*(*Global_1900838)[iVar1] = { Var2 };
	}
	Global_1900806 = (&Global_1900806 - 1);
	if (&Global_1900806 < 0)
	{
		Global_1900806 = 0;
	}
}

void func_357(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 != 0)
	{
		if (bParam2)
		{
			texture_download_release(*uParam0);
		}
	}
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	if (bParam1)
	{
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = 0;
}

void func_358(var uParam0, bool bParam1)
{
	if (*uParam0 != 0)
	{
		texture_download_release(*uParam0);
		*uParam0 = 0;
	}
	*uParam0 = uVar0;
	uParam0->f_1 = uVar1;
	uParam0->f_2 = uVar2;
	uParam0->f_3 = uVar3;
	MemCopy(&(uParam0->f_4), {vVar4}, 8);
	if (bParam1)
	{
		MemCopy(&(uParam0->f_12), {Var7}, 8);
		uParam0->f_20 = { Var11 };
	}
}

void func_359(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 5;
	uParam0->f_2 = -1;
	func_485(&(uParam0->f_3));
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	StringCopy(&(uParam0->f_22), "", 24);
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	func_486(&(uParam0->f_29));
	func_487(&(uParam0->f_30));
	func_488(&(uParam0->f_32));
	func_489(&(uParam0->f_33));
	func_490(&(uParam0->f_35));
	func_491(&(uParam0->f_63));
}

void func_360(var uParam0)
{
	*uParam0 = 255;
	uParam0->f_1 = { Var0 };
	StringCopy(&(uParam0->f_8), "", 64);
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 2147483647;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	func_485(&(uParam0->f_21));
	uParam0->f_26 = -1;
	StringCopy(&(uParam0->f_27), "", 24);
	uParam0->f_30 = 1;
	uParam0->f_31 = 1;
	uParam0->f_32 = 1;
	uParam0->f_33 = 32;
	uParam0->f_34 = 1;
	uParam0->f_35 = -2;
	uParam0->f_36 = 0;
	StringCopy(&(uParam0->f_37), "", 64);
	uParam0->f_45 = 0;
	uParam0->f_46 = 0;
	func_491(&(uParam0->f_47));
	func_484(&(uParam0->f_53));
	func_492(&(uParam0->f_55));
	uParam0->f_60 = 0;
	uParam0->f_61 = { 0f, 0f, 0f };
}

void func_361(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_362(int iParam0)
{
	if (Global_524288->f_47318[iParam0]->f_57 == 0)
	{
		return false;
	}
	if (func_493(Global_524288->f_47318[iParam0]->f_142, Global_524288->f_47318[iParam0]->f_146, Global_524288->f_47318[iParam0]->f_150, Global_524288->f_47318[iParam0]->f_159, Global_524288->f_47318[iParam0]->f_160))
	{
		return true;
	}
	return false;
}

bool func_363(int iParam0)
{
	if (Global_3145858->f_453[iParam0]->f_43 == 0)
	{
		return false;
	}
	if (func_493(Global_524288->f_35372[iParam0]->f_22, Global_524288->f_35372[iParam0]->f_18, Global_524288->f_35372[iParam0]->f_26, Global_524288->f_35372[iParam0]->f_35, Global_524288->f_35372[iParam0]->f_36))
	{
		return true;
	}
	return false;
}

bool func_364(int iParam0)
{
	if (Global_524288->f_40796[iParam0]->f_23 == 0)
	{
		return false;
	}
	if (func_493(Global_524288->f_40796[iParam0]->f_62, Global_524288->f_40796[iParam0]->f_61, Global_524288->f_40796[iParam0]->f_63, Global_524288->f_40796[iParam0]->f_156, Global_524288->f_40796[iParam0]->f_157))
	{
		return true;
	}
	return false;
}

bool func_365(int iParam0)
{
	if (Global_3145858->f_13425[iParam0]->f_66 == 0)
	{
		return false;
	}
	if (func_493(Global_3145858->f_13425[iParam0]->f_96, Global_3145858->f_13425[iParam0]->f_95, Global_3145858->f_13425[iParam0]->f_97, Global_3145858->f_13425[iParam0]->f_162, Global_3145858->f_13425[iParam0]->f_163))
	{
		return true;
	}
	return false;
}

bool func_366(int iParam0)
{
	if (Global_3145858->f_36480[iParam0]->f_1 == 0 || func_187(Global_3145858->f_36480[iParam0]->f_4))
	{
		return false;
	}
	if (is_bit_set(Global_3145858->f_36480[iParam0]->f_7, 13))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 1;
	}
	if (func_493(Global_524288->f_134002[iParam0]->f_65, Global_524288->f_134002[iParam0]->f_66, iVar0, -1, 0))
	{
		return true;
	}
	return false;
}

bool func_367(int iParam0)
{
	if (Global_3145858->f_18727[iParam0]->f_8 == 0)
	{
		return false;
	}
	if (func_493(Global_3145858->f_18727[iParam0]->f_14, Global_3145858->f_18727[iParam0]->f_13, Global_3145858->f_18727[iParam0]->f_15, -1, 0))
	{
		return true;
	}
	return false;
}

void func_368(var uParam0, int iParam1)
{
	uParam0->f_20 = (uParam0->f_20 || iParam1);
}

int func_369(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_265377->f_2)
	{
		if (&Global_265377->f_63755[iVar0] == iParam0)
		{
			return iVar0;
		}
		if (Global_265377->f_4[iVar0]->f_28 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_370(char* sParam0)
{
	StringCopy(&(Global_1572887->f_106.f_91.f_6), sParam0, 32);
}

bool func_371(int iParam0)
{
	if (func_494(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

bool func_372(int iParam0)
{
	if (func_495(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

int func_373(int iParam0)
{
	if (func_50() == -1)
	{
		return -1;
	}
	iVar0 = 9;
	while (iVar0 <= 25)
	{
		if (func_496(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_374(int iParam0)
{
	vVar5 = -1;
	vVar5.f_1 = -1;
	vVar5.f_2 = -1;
	if (!func_497(&Var0))
	{
		return vVar5;
	}
	if (!func_498(&Var0, 13, 0, 0, 1))
	{
		return vVar5;
	}
	if (!func_498(&Var0, 17, 0, 0, 1))
	{
		return vVar5;
	}
	uVar12 = Var0.f_1;
	iVar9 = func_499(&Var0, 0);
	iVar8 = 0;
	while (iVar8 <= (iVar9 - 1))
	{
		Var0.f_1 = uVar12;
		if (!func_498(&Var0, 19, iVar8, 0, 1))
		{
		}
		else if (!func_498(&Var0, 20, 0, 0, 1))
		{
		}
		else
		{
			iVar10 = func_499(&Var0, 1);
			if (!func_498(&Var0, 22, iParam0, 0, 0))
			{
			}
			else
			{
				iVar11 = _0xe13634bb6baf0734(Var0, Var0.f_1);
				vVar5.x = iVar8;
				vVar5.f_1 = ((iVar10 - iVar11) - 1);
			}
			else
			{
				iVar8++;
			}
			return vVar5;
		}
	}
}

struct<2> func_375(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 100)
	{
		return func_114();
	}
	return (*Global_1835011)[iParam0]->f_1;
}

bool func_376(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return func_377(iParam0) != -1;
}

int func_377(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		iVar1 = iVar0;
		if (iParam0 == func_500(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

struct<2> func_378(int iParam0)
{
	return func_501(iParam0);
}

struct<2> func_379(int iParam0)
{
	if (!func_497(&uVar0))
	{
		return func_114();
	}
	if (!func_498(&uVar0, 13, 0, 0, 1))
	{
		return func_114();
	}
	if (!func_498(&uVar0, 17, 0, 0, 1))
	{
		return func_114();
	}
	if (!func_498(&uVar0, 19, *iParam0, 0, 1))
	{
		return func_114();
	}
	if (!func_498(&uVar0, 20, 0, 0, 1))
	{
		return func_114();
	}
	if (!func_498(&uVar0, 23, iParam0->f_1, 0, 1))
	{
		return func_114();
	}
	iVar5 = func_502(&uVar0);
	return func_382(iVar5);
}

struct<2> func_380(int iParam0)
{
	if (iParam0 == 0)
	{
		return func_114();
	}
	if (!func_503(&uVar0, 7, iParam0, 76966722))
	{
		return func_114();
	}
	func_504(7, &uVar0, &Var5);
	if (Var5.f_4 != 7)
	{
		return func_114();
	}
	return func_505(Var5.f_3, Var5.f_4);
}

int func_381(int iParam0)
{
	switch (iParam0)
	{
		case -504335712:
			return 1005649839;
		case 395262693:
			return -47596571;
		case -933924539:
			return 921725912;
		default:
			break;
	}
	return 0;
}

struct<2> func_382(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_505(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_505(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_505(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_505(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_505(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_505(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_505(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_114();
}

void func_383(var uParam0)
{
	uParam0->f_20 = 0;
}

bool func_384(int iParam0)
{
	return (Global_265377->f_124517.f_135 && iParam0) != 0;
}

void func_385(var uParam0, int iParam1)
{
	if (!(uParam0->f_20 && iParam1) != 0)
	{
		return;
	}
	uParam0->f_20 = (uParam0->f_20 - (uParam0->f_20 && iParam1));
}

void func_386(int iParam0)
{
	Global_265377->f_124517.f_135 = (Global_265377->f_124517.f_135 - (Global_265377->f_124517.f_135 && iParam0));
}

void func_387(var uParam0, int iParam1)
{
	uParam0->f_156 = iParam1;
}

void func_388(int iParam0)
{
	(*Global_263042)[&Global_1296859] = iParam0;
	func_506();
}

bool func_389(var uParam0, bool bParam1)
{
	if (((bParam1 && _network_is_player_index_valid(*uParam0)) && network_is_player_active(*uParam0)) && (*Global_263042)[&Global_1296859]->f_1 == *uParam0)
	{
		return true;
	}
	if ((*Global_263042)[&Global_1296859]->f_1.f_17 != uParam0->f_17)
	{
		return false;
	}
	if ((*Global_263042)[&Global_1296859]->f_1.f_18 != uParam0->f_18)
	{
		return false;
	}
	return true;
}

bool func_390(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_263042[&Global_1296859] > 2;
	}
	return Global_263042[iParam0] > 2;
}

bool func_391(struct<2> Param0, bool bParam2, bool bParam3)
{
	iVar0 = network_player_id_to_int();
	if (Global_263042[iVar0] <= 0)
	{
		if (bParam3)
		{
			func_387(&(Global_265377->f_124517), 10);
		}
		return false;
	}
	if (Global_263042[iVar0] > 2)
	{
		if (bParam3)
		{
			func_387(&(Global_265377->f_124517), 11);
		}
		return false;
	}
	if (func_148(*Global_1051213))
	{
		if (!func_235(Param0, *Global_1051213))
		{
			if (bParam3)
			{
				func_387(&(Global_265377->f_124517), 12);
			}
			return false;
		}
	}
	if (!bParam2 && func_149(func_147(0)) == 2)
	{
		if (bParam3)
		{
			func_387(&(Global_265377->f_124517), 13);
		}
		return false;
	}
	if (func_507(255) && !func_132(&((*Global_263042)[&Global_1296859]->f_1), 64))
	{
		if (bParam3)
		{
			func_387(&(Global_265377->f_124517), 14);
		}
		return false;
	}
	if (_network_is_player_index_valid((*Global_263042)[iVar0]->f_1) && network_is_player_active((*Global_263042)[iVar0]->f_1))
	{
		if (bParam3)
		{
			func_387(&(Global_265377->f_124517), 15);
		}
		return false;
	}
	if ((*Global_263042)[iVar0]->f_1.f_16 == 0 || func_132(&((*Global_263042)[&Global_1296859]->f_1), 64))
	{
		if (bParam3)
		{
			func_387(&(Global_265377->f_124517), 0);
		}
		return true;
	}
	if (bParam3)
	{
		func_387(&(Global_265377->f_124517), 16);
	}
	return false;
}

bool func_392(struct<28> Param0, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63)
{
	if (is_string_null_or_empty(&(Param0.f_27)))
	{
		return false;
	}
	return true;
}

bool func_393(var uParam0)
{
	uVar0 = func_508(uParam0->f_18, uParam0->f_17);
	iVar1 = count_player_bits(&uVar0);
	iVar4 = network_player_id_to_int();
	iVar2 = 0;
	while (iVar2 < func_509())
	{
		iVar3 = func_510(iVar2);
		if (_0x72b2e00c9bac6789(&uVar0, iVar3))
		{
		}
		else if (iVar4 == iVar3)
		{
		}
		else
		{
			iVar1++;
		}
		iVar2++;
	}
	if (!_0x72b2e00c9bac6789(&uVar0, iVar4))
	{
		iVar1++;
	}
	return iVar1 > uParam0->f_33;
}

int func_394(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return -1;
	}
	iVar0 = iParam0;
	iVar1 = (*Global_263042)[iVar0]->f_65;
	if (iVar1 == -1)
	{
	}
	return iVar1;
}

bool func_395(struct<2> Param0)
{
	return func_474(Param0) == 0;
}

int func_396(struct<2> Param0)
{
	if (!func_148(Param0))
	{
		return 0;
	}
	func_478(Param0, 0);
	return 1;
}

void func_397(var uParam0)
{
	Global_265377->f_124517.f_3 = { uParam0->f_21 };
}

int func_398(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			switch (iParam0)
			{
				case 13:
					return -1774209103;
				case 14:
					return -484847260;
				case 15:
					return -1044410704;
				case 16:
					return -2122972398;
				case 17:
					return -1218416922;
				case 18:
					return 2073788457;
				case 19:
					return -296360548;
				case 20:
					return -1731631915;
				case 21:
					return -1524512151;
				case 22:
					return 1196461768;
				case 23:
					return -520566046;
				case 24:
					return 1119358563;
				case 25:
					return -1986410890;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 13:
					return -1799196167;
				case 14:
					return 1662783149;
				case 15:
					return 1984378115;
				case 16:
					return 2146619054;
				case 17:
					return -394780741;
				case 18:
					return 1906218842;
				case 19:
					return -1535247080;
				case 20:
					return 1236393289;
				case 21:
					return -365616331;
				case 22:
					return -1026403216;
				case 23:
					return -1833674363;
				case 24:
					return 1073394707;
				case 25:
					return 468877771;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 13:
					return -264759998;
				case 14:
					return -25775681;
				case 15:
					return 1326174952;
				case 16:
					return 507375445;
				case 17:
					return 210193384;
				case 18:
					return 1952321776;
				case 19:
					return -195325719;
				case 20:
					return -1238749761;
				case 21:
					return -2107197527;
				case 22:
					return 1881412388;
				case 23:
					return 1668837153;
				case 24:
					return 1371392940;
				case 25:
					return -1941087738;
				default:
					break;
			}
			break;
	}
	return 0;
}

var func_399(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_52;
}

int func_400(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = network_player_id_to_int();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return (*Global_1145091)[iParam0]->f_8.f_1;
}

int func_401(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 >= 8 && iParam0 < 8)
	{
		return 2;
	}
	else if (iParam1 <= 7 && iParam0 > 7)
	{
		return 1;
	}
	return 0;
}

var func_402(int iParam0, int iParam1)
{
	if (!func_497(&uVar0))
	{
		return 0;
	}
	if (!func_498(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_498(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_498(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_498(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_498(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	return func_502(&uVar0);
}

int func_403(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!_network_is_player_index_valid(iParam0))
		{
			return -1;
		}
	}
	return (*Global_1298536)[iParam0]->f_5.f_12;
}

int func_404(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 680390016;
		case 1:
			return -2070886255;
		case 2:
			return 1821948827;
		case 3:
			return -1823593561;
		case 4:
			return -1930045261;
		default:
			break;
	}
	return -1588462292;
}

int func_405(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_3 = -1;
	Var0.f_3.f_4 = -1;
	Var12 = 255;
	Var12.f_18 = 2147483647;
	Var12.f_21.f_2 = -504335712;
	Var12.f_21.f_4 = 3;
	Var12.f_26 = -1;
	Var12.f_30 = 1;
	Var12.f_31 = 1;
	Var12.f_32 = 1;
	Var12.f_33 = 32;
	Var12.f_34 = 1;
	Var12.f_35 = -2;
	Var12.f_47.f_5 = -1;
	Var12.f_53 = -1;
	Var12.f_53.f_1 = -1;
	Var12.f_55.f_3 = -1;
	Var0 = { func_505(iParam0, 7) };
	iVar9 = func_511(iParam0);
	iVar10 = func_512(iVar9);
	iVar11 = func_513(iVar9, iParam0);
	iVar79 = func_514(iVar10, iVar11);
	if (iVar79 == 0)
	{
		return 0;
	}
	if (!func_256(&Var12, iVar79, -1, -1, 3))
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iVar8 = func_515(iVar9, iParam0);
	}
	else
	{
		iVar8 = iParam3;
	}
	Var0.f_3 = iVar10;
	Var0.f_3.f_1 = iVar11;
	Var0.f_3.f_2 = iVar8;
	Var0.f_3.f_3 = func_516(iVar9, iParam1);
	Var0.f_3.f_4 = iParam2;
	iVar76 = func_517(iVar9, iParam0, iParam2);
	iVar78 = func_518(iVar9, iParam0, iParam2);
	iVar77 = func_519(iVar9, iParam0, iParam2);
	Var12.f_53 = { Var0 };
	iVar80 = func_520(&(Var0.f_3));
	func_521(iVar78);
	func_522(Var12, Var12.f_53, iVar76, iVar77, iVar80);
	return 1;
}

int func_406()
{
	return Global_1211315->f_2;
}

bool func_407(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 13 && iParam0 <= 25)
	{
		if ((*Global_1835011)[iParam0]->f_51 == 0)
		{
			return false;
		}
	}
	if (!bParam1)
	{
		if (func_225(iParam0))
		{
			return true;
		}
	}
	if (func_523(iParam0) > 0)
	{
		iVar0 = absi((get_cloud_time_as_int() - func_523(iParam0)));
		if (iVar0 < 60)
		{
			return false;
		}
		else
		{
			func_524(iParam0, 0);
		}
	}
	if (Global_1139381->f_4912[iParam0]->f_1 && Global_1139381->f_4912[iParam0]->f_2)
	{
		if (func_313((*Global_1835011)[iParam0]->f_32))
		{
			(*Global_1835011)[iParam0]->f_32 = -1;
		}
		if (func_525(iParam0))
		{
			if (!func_526(iParam0))
			{
				if (func_527(iParam0) == 0)
				{
					func_528(iParam0, get_cloud_time_as_int());
					return false;
				}
				if (absi((get_cloud_time_as_int() - func_527(iParam0))) > 30)
				{
					func_268(iParam0, 1);
					func_269(iParam0, -1, 0, 1, 1, 0, 0);
					func_528(iParam0, 0);
					func_524(iParam0, get_cloud_time_as_int());
				}
				return false;
			}
		}
		func_528(iParam0, 0);
		func_524(iParam0, 0);
		return true;
	}
	func_421(iParam0);
	iVar1 = func_341(0, iParam0);
	if (iVar1 == 0)
	{
		return false;
	}
	if (!Global_1139381->f_4912[iParam0]->f_1 || !Global_1139381->f_4912[iParam0]->f_2)
	{
		if ((*Global_1835011)[iParam0]->f_32 == -1)
		{
			(*Global_1835011)[iParam0]->f_32 = func_314(iVar1, 0);
		}
		switch (func_315((*Global_1835011)[iParam0]->f_32, 0))
		{
			case 1:
				return false;
			case 2:
				if (!Global_1139381->f_4912[iParam0]->f_2)
				{
					(*Global_1835011)[iParam0]->f_32 = -1;
				}
				break;
			case 3:
				(*Global_1835011)[iParam0]->f_32 = -1;
				break;
		}
	}
	return false;
}

bool func_408()
{
	return Global_1211315->f_3;
}

bool func_409(int iParam0)
{
	return func_529(1, iParam0);
}

void func_410(vector3 vParam0)
{
	Global_1211315->f_4 = { vParam0 };
}

void func_411(bool bParam0)
{
	if (!bParam0)
	{
		func_530(25);
	}
	else
	{
		func_531(25);
	}
}

void func_412(bool bParam0)
{
	if (!bParam0)
	{
		func_530(18);
	}
	else
	{
		func_531(18);
	}
}

void func_413(vector3 vParam0, float fParam3, bool bParam4)
{
	if (func_532(vParam0, fParam3))
	{
		func_533(1, bParam4);
	}
}

void func_414(int iParam0)
{
	Global_1211315->f_3 = iParam0;
}

void func_415(int iParam0)
{
	Global_1211315->f_7 = iParam0;
}

var func_416()
{
	return Global_1211315->f_7;
}

bool func_417(var uParam0)
{
	if (func_187(Global_1211315->f_4))
	{
		return false;
	}
	*uParam0 = { Global_1211315->f_4 };
	return true;
}

void func_418(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8)
{
	vVar0 = { get_entity_coords(player_ped_id(), false, false) };
	fVar3 = fParam3;
	if (!func_534(Global_1296859->f_17, &vVar0, &fVar3))
	{
		vVar0 = { get_entity_coords(player_ped_id(), false, false) };
		fVar3 = fParam3;
	}
	func_535(vParam0, fParam3, vVar0, fVar3, iParam4, iParam5, iParam6, iParam7, fParam8, 1);
}

int func_419(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_420(int iParam0, int iParam1)
{
	return (func_267(iParam0) && ((*Global_1900838)[iParam0]->f_1 && iParam1) != 0);
}

void func_421(int iParam0)
{
	Global_1139381->f_4912[iParam0] = _unlock_is_new((*Global_1835011)[iParam0]->f_3);
	Global_1139381->f_4912[iParam0]->f_2 = _unlock_is_visible((*Global_1835011)[iParam0]->f_3);
	Global_1139381->f_4912[iParam0]->f_1 = _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3);
}

struct<2> func_422(int iParam0)
{
	if (!func_119(iParam0))
	{
		return func_114();
	}
	return (*Global_1835011)[iParam0]->f_1;
}

int func_423(int iParam0, int iParam1, int iParam2)
{
	if (func_87(32768))
	{
		return 0;
	}
	iVar0 = func_50();
	if (func_536(&((*Global_1835011)[iParam0]->f_30), 512) && !func_536(&((*Global_1835011)[iParam0]->f_30), 1024))
	{
		if (func_537())
		{
			return 0;
		}
	}
	if ((*Global_1835011)[iParam0]->f_67)
	{
		return 0;
	}
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_28))
	{
		bVar3 = (*Global_1835011)[iParam0]->f_66;
		if (func_538(iParam0, iVar0))
		{
			vVar4 = { func_539(iParam0) };
			(*Global_1835011)[iParam0]->f_65 = _create_volume_sphere(vVar4, 0f, 0f, 0f, 19f, 19f, 19f);
			if (_does_volume_exist((*Global_1835011)[iParam0]->f_65))
			{
				(*Global_1835011)[iParam0]->f_28 = _0xa6ef0c54a3443e70(1673015813, (*Global_1835011)[iParam0]->f_65);
			}
		}
		else if (bVar3)
		{
			(*Global_1835011)[iParam0]->f_28 = _blip_add_for_coord(1673015813, func_540(iParam0));
		}
		else
		{
			(*Global_1835011)[iParam0]->f_28 = _blip_add_for_coord(1673015813, func_541(iParam0));
		}
		(*Global_1835011)[iParam0]->f_29 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2)
			{
				func_542(iParam2, 4194304);
			}
			else
			{
				func_424(iParam2, 4194304);
			}
		}
		set_blip_flash_timer((*Global_1835011)[iParam0]->f_28, 71, (*Global_1835011)[iParam0]->f_3);
	}
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_28))
	{
		return 0;
	}
	func_543(iParam0);
	if (bVar1)
	{
		set_blip_sprite((*Global_1835011)[iParam0]->f_28, (*Global_1835011)[iParam0]->f_27, true);
		if (iVar0 != -1)
		{
			_set_blip_name_from_player_string((*Global_1835011)[iParam0]->f_28, &((*Global_1835011)[iParam0]->f_42));
		}
		if (!func_536(&((*Global_1835011)[iParam0]->f_30), 1024))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_28, 580546400);
			func_544(&((*Global_1835011)[iParam0]->f_30), 1024);
		}
		if (func_536(&((*Global_1835011)[iParam0]->f_30), 524288))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_28, -401963276);
		}
		if (func_536(&((*Global_1835011)[iParam0]->f_30), 1048576))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_28, -1878373110);
			_blip_set_modifier((*Global_1835011)[iParam0]->f_28, 231194138);
		}
	}
	return 1;
}

void func_424(int iParam0, int iParam1)
{
	if (!func_267(iParam0))
	{
		return;
	}
	(*Global_1900838)[iParam0]->f_1 = ((*Global_1900838)[iParam0]->f_1 - ((*Global_1900838)[iParam0]->f_1 && iParam1));
}

bool func_425()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

int func_426(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

bool func_427(int iParam0, var uParam1)
{
	iVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_545(uParam1->f_8, iParam0, iVar0, 2048) || func_545(uParam1->f_8, iParam0, iVar0, 32768)) || func_545(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_545(uParam1->f_8, iParam0, iVar0, 4) || func_545(uParam1->f_8, iParam0, iVar0, 256)) || func_545(uParam1->f_8, iParam0, iVar0, 65536)) || func_545(uParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_545(uParam1->f_8, iParam0, iVar0, 1) || func_545(uParam1->f_8, iParam0, iVar0, 8)) || func_545(uParam1->f_8, iParam0, iVar0, 65536)) || func_545(uParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_545(uParam1->f_8, iParam0, iVar0, 1) || func_545(uParam1->f_8, iParam0, iVar0, 16)) || func_545(uParam1->f_8, iParam0, iVar0, 2)) || func_545(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_545(uParam1->f_8, iParam0, iVar0, 8) || func_545(uParam1->f_8, iParam0, iVar0, 4096)) || func_545(uParam1->f_8, iParam0, iVar0, 256)) || func_545(uParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_428(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_429(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_546(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_546(iParam1, 2, 0, 0);
	return -1;
}

int func_430(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_546(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

struct<28> func_431(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_150(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_281(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_432(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_427(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_429(func_547(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_430(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_433(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_150(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_281(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_434(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_429(func_548(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_430(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_435(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_150(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_281(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_436(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_427(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_429(func_549(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_430(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

void func_437(var uParam0, int iParam1)
{
	func_550(uParam0, iParam1);
}

char* func_438()
{
	return "UNNAMED_HORSE";
}

int func_439(int iParam0)
{
	if (!&Global_1048577)
	{
		return 3;
	}
	iVar0 = (*Global_263042)[iParam0]->f_1.f_21.f_2;
	iVar1 = func_551(iVar0);
	iVar2 = func_552(iVar0, iVar1);
	return iVar2;
}

bool func_440(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return is_bit_set(uParam0[iVar0], iVar1);
}

bool func_441(struct<2> Param0, var uParam2)
{
	if (!func_148(Param0))
	{
		return false;
	}
	func_553(uParam2);
	switch (Param0)
	{
		case 2:
			_copy_memory(uParam2, Global_1071686->f_636[Param0.f_1], 3);
			return true;
		case 3:
			_copy_memory(uParam2, Global_1071686->f_636.f_602[Param0.f_1], 3);
			return true;
		case 4:
			_copy_memory(uParam2, Global_1071686->f_636.f_2104[Param0.f_1], 3);
			return true;
		case 5:
			_copy_memory(uParam2, Global_1071686->f_636.f_12606[Param0.f_1], 3);
			return true;
		case 6:
			_copy_memory(uParam2, Global_1071686->f_636.f_12908[Param0.f_1], 3);
			return true;
		case 7:
			_copy_memory(uParam2, Global_1071686->f_636.f_15910[Param0.f_1], 3);
			return true;
		case 8:
			_copy_memory(uParam2, Global_1071686->f_636.f_16512[Param0.f_1], 3);
			return true;
		default:
			break;
	}
	return false;
}

bool func_442(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

void func_443()
{
}

var func_444()
{
	Global_1293346->f_458.f_1552++;
	if (Global_1293346->f_458.f_1552 >= 2147483646)
	{
		Global_1293346->f_458.f_1552 = 0;
	}
	return Global_1293346->f_458.f_1552;
}

void func_445(struct<30> Param0, int iParam30)
{
	switch (iParam30)
	{
		case 0:
			*Global_1293346->f_458.f_44[func_554()] = { Param0 };
			func_555((func_554() + 1 % 40));
			Global_1293346->f_458.f_1546++;
			break;
		case 1:
			*Global_1293346->f_458.f_1245[func_556()] = { Param0 };
			func_557((func_556() + 1 % 10));
			Global_1293346->f_458.f_1547++;
			break;
	}
}

int func_446(int iParam0, int iParam1)
{
	Var1 = { func_558(iParam0, iParam1) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

bool func_447(int iParam0)
{
	return iParam0 != 0;
}

bool func_448(int iParam0)
{
	if (!func_447(iParam0))
	{
		return false;
	}
	if (_0xfbe782b3165ac8ec(iParam0))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_2011)
	{
		if (Global_1293346->f_2011.f_1[iVar0]->f_4 == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_449(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_559(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

int func_450(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
		default:
			return 0;
			*uParam1 = { -870.1846f, -1276.62f, 42.2367f };
			uParam1->f_3 = -1478891674;
			StringCopy(&(uParam1->f_4), "FM_FLOW_GVO_CUTS_INTRO_BLIP_0", 32);
			uParam1->f_8 = 100;
			return 1;
		case 2:
			*uParam1 = { -870.1846f, -1276.62f, 42.2367f };
			uParam1->f_3 = -1478891674;
			StringCopy(&(uParam1->f_4), "FM_FLOW_GVO_CUTS_INTRO_BLIP_0", 32);
			uParam1->f_8 = 100;
			return 1;
		case 3:
			*uParam1 = { 1352.95f, -1306.359f, 75.9113f };
			uParam1->f_3 = 1047294027;
			StringCopy(&(uParam1->f_4), "FM_FLOW_ROLE_BH_INTRO_BLIP_0", 32);
			uParam1->f_8 = 100;
			return 1;
		case 4:
			*uParam1 = { 0f, 0f, 0f };
			uParam1->f_3 = -924533810;
			StringCopy(&(uParam1->f_4), "FM_FLOW_ROLE_T_INTRO_BLIP_0", 32);
			uParam1->f_8 = 100;
			set_bit(&(uParam1->f_9), 9);
			return 1;
		case 5:
			*uParam1 = { 0f, 0f, 0f };
			uParam1->f_3 = -1546805641;
			StringCopy(&(uParam1->f_4), "FM_FLOW_ROLE_C_INTRO_BLIP_0", 32);
			uParam1->f_8 = 100;
			set_bit(&(uParam1->f_9), 9);
			return 1;
		case 6:
			*uParam1 = { 1447.94f, 375.2851f, 88.89412f };
			uParam1->f_3 = -2029148647;
			StringCopy(&(uParam1->f_4), "FM_FLOW_ROLE_M_INTRO_BLIP_0", 32);
			uParam1->f_8 = 100;
			return 1;
		case 7:
			*uParam1 = { -1810.2f, -370.5f, 162.9f };
			uParam1->f_3 = -1017650267;
			StringCopy(&(uParam1->f_4), "FM_FLOW_ROLE_N_INTRO_BLIP_0", 32);
			uParam1->f_8 = 100;
			return 1;
		case 8:
			*uParam1 = { 0f, 0f, 0f };
			uParam1->f_3 = -1017650267;
			StringCopy(&(uParam1->f_4), "FM_FLOW_AC_INTRO_BLIP_0", 32);
			uParam1->f_8 = 100;
			set_bit(&(uParam1->f_9), 9);
			return 1;
	}
}

bool func_451(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam2 = { func_456() };
	fVar2 = 0f;
	switch (iParam0)
	{
		case 4:
		default:
			return false;
			*uParam1 = { 0f, 0f, 0f };
			vVar3 = { func_560(&Global_1296859) };
			switch (vVar3.y)
			{
				case -987049424:
				case -682748:
				case 1538293636:
				case 1581179681:
				default:
					return false;
					*uParam1 = { -319.3981f, 792.6552f, 116.3929f };
					*uParam2 = { 0f, 0f, -60f };
				case -1992167326:
				case -1884014371:
				case -1554232707:
				case -724534761:
				case -215258135:
				case 892234183:
					*uParam1 = { -3677.246f, -2618.845f, -14.8654f };
					*uParam2 = { 0f, 0f, -119.15f };
					break;
				case -1871413878:
				case 1357161730:
				case 1483778247:
					*uParam1 = { 2820.121f, -1310.931f, 45.7346f };
					*uParam2 = { 0f, 0f, -72.1f };
					break;
			}
			return true;
		case 5:
			iVar0 = func_561();
			if (iVar0 == -1)
			{
				return false;
			}
			if (!func_562(iVar0, uParam1, uParam2))
			{
				return false;
			}
			if (!bParam3)
			{
				return true;
			}
			iVar1 = func_563(1463940690, *uParam1, 5f);
			if (!does_entity_exist(iVar1))
			{
				*uParam1 = { 0f, 0f, 0f };
				*uParam2 = { 0f, 0f, 0f };
				return false;
			}
			*uParam1 = { get_entity_coords(iVar1, true, false) };
			*uParam2 = { get_entity_rotation(iVar1, 2) };
			return true;
		case 8:
			*uParam1 = { Global_1051439->f_3745[39]->f_1 };
			iVar0 = &Global_1051439->f_3745[39];
			if (!bParam3)
			{
				return true;
			}
			if (150 == iVar0)
			{
				*uParam1 = { -1576.556f, 488.0926f, 113.9523f };
				fVar2 = 139.99f;
			}
			else if (151 == iVar0)
			{
				*uParam1 = { 1964.966f, -529.8469f, 40.9596f };
				fVar2 = (139.99f + 90f);
			}
			else
			{
				*uParam1 = { -2182.447f, -2132.664f, 73.1032f };
				fVar2 = 0f;
			}
			*uParam2 = { 0f, 0f, fVar2 };
			return true;
	}
}

void func_452(var uParam0, vector3 vParam1)
{
	uParam0->f_8 = { vParam1 };
}

float func_453(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 10f;
		case 3:
			return 5f;
		case 6:
			return 9f;
		case 7:
			return 8f;
		default:
			break;
	}
	return 15f;
}

bool func_454(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = -1519264107;
			return true;
		case 2:
			*uParam1 = -1349160228;
			return true;
		case 3:
			*uParam1 = 1531783960;
			return true;
		case 4:
			*uParam1 = 271960855;
			return true;
		case 5:
			*uParam1 = 1138012776;
			return true;
		case 6:
			*uParam1 = 650135692;
			return true;
		case 7:
			*uParam1 = 672365282;
			return true;
		case 8:
			*uParam1 = 2111135919;
			return true;
		default:
			break;
	}
	return false;
}

bool func_455(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 5:
		default:
			return false;
			*uParam1 = func_561();
			return true;
		case 8:
			*uParam1 = &Global_1051439->f_3745[39];
			return true;
	}
}

Vector3 func_456()
{
	return 0f, 0f, 0f;
}

bool func_457(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_458()
{
	return Global_1915715->f_20241;
}

void func_459()
{
	if (func_564())
	{
		return;
	}
	Global_1211286->f_26 = 1;
}

int func_460()
{
	return Global_1293332->f_10;
}

bool func_461()
{
	return func_529(1, 255);
}

bool func_462()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) <= 4);
}

bool func_463(int iParam0)
{
	if (!func_206(iParam0))
	{
		return false;
	}
	return Global_1293165->f_120[iParam0]->f_4;
}

bool func_464(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_465(int iParam0, int iParam1)
{
	if (!func_279(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_345(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_565(iParam0, 1399091007))
	{
		func_566(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_466(int iParam0)
{
	if (!func_279(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_467(int iParam0)
{
	switch (iParam0)
	{
		case -577270367:
			return 241235545;
		case 194818087:
			return 1827902148;
		case -845885815:
			return 1301555144;
		case -1869018428:
			return -2056583192;
		case 1710247623:
			return 1015239729;
		case 1964684696:
			return -340627321;
		case -2087489409:
			return -875805376;
		case -860557048:
			return -768760704;
		case -28107610:
			return -2118203104;
		case -896045342:
			return 1285634184;
		case -643819742:
			return -559080197;
		case -1504407916:
			return -1180698265;
		case -1386156083:
			return -487028314;
		case 1687431937:
			return -1811760631;
		case 1613216286:
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_468(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((*uParam0)[iVar0]->f_1 == -1)
		{
		}
		else
		{
			if ((*uParam0)[iVar0]->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_469(int iParam0)
{
	iVar0 = func_466(iParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		default:
			break;
	}
	return 0;
}

int func_470(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_154(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_155(&Var0, func_567(0));
	}
	if (!func_156(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_158(iVar14);
	return uVar15;
}

struct<4> func_471(int iParam0, bool bParam1)
{
	Var0 = { func_568(iParam0, bParam1, 0) };
	return func_152(iParam0, Var0, Var0.f_4, bParam1);
}

void func_472(bool bParam0)
{
	if (!bParam0)
	{
		func_530(14);
	}
	else
	{
		func_531(14);
	}
}

void func_473()
{
	func_569(1);
	func_569(2);
	func_569(4);
	func_569(8);
	func_569(16);
	func_569(32);
	func_569(64);
	func_569(128);
	func_569(256);
	func_569(512);
	func_569(1024);
	func_569(2048);
	func_569(4096);
	func_569(8192);
	func_570();
	func_571();
}

int func_474(struct<2> Param0)
{
	if (!func_148(Param0))
	{
		return -1;
	}
	iVar0 = func_572(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

int func_475(struct<2> Param0)
{
	return func_573(Param0);
}

int func_476(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_574())
	{
		return 0;
	}
	if (!func_425())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_575(&Global_0, 8);
	}
	func_575(&Global_0, 1);
	return 1;
}

void func_477(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_576(func_149(Param0));
	iVar1 = func_475(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_50() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_577(Param0, &Var2);
	}
	if (network_is_player_active(iParam4))
	{
		Var2.f_4 = iParam4;
		Var2.f_3 = iParam5;
	}
	else
	{
		Var2.f_4 = 255;
		Var2.f_3 = 0;
	}
	_0xd5910ecf81a2278c(iVar0, iVar1, iParam2, &Var2);
}

void func_478(struct<2> Param0, int iParam2)
{
	if (!func_148(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_578(Param0);
	}
	else
	{
		func_579(Param0, iParam2);
	}
	func_580();
}

void func_479(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_581(Global_1940258, 8388608);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_582(Global_1940258, 8388608);
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

void func_480(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_583(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_584(cVar2);
			}
			else
			{
				func_585();
			}
			_0xf611de44aeb36a1d(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_481(bool bParam0)
{
	if (!bParam0 && func_586(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_482(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_483(struct<2> Param0)
{
	return func_588(func_587(Param0));
}

void func_484(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_485(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = -504335712;
	uParam0->f_3 = 0;
	uParam0->f_4 = 3;
}

void func_486(var uParam0)
{
	iVar1 = 1;
	_copy_memory(uParam0, &uVar0, iVar1);
}

void func_487(var uParam0)
{
	iVar1 = 1;
	_copy_memory(uParam0, &uVar0, iVar1);
}

void func_488(var uParam0)
{
	iVar1 = 1;
	_copy_memory(uParam0, &uVar0, iVar1);
}

void func_489(var uParam0)
{
	iVar1 = 1;
	_copy_memory(uParam0, &uVar0, iVar1);
}

void func_490(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	StringCopy(&(uParam0->f_4), "", 64);
	StringCopy(&(uParam0->f_12), "", 64);
	StringCopy(&(uParam0->f_20), "", 64);
}

void func_491(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_492(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = -1;
	uParam0->f_4 = 0;
}

bool func_493(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam2)
	{
		case 0:
			return true;
		case 1:
			if (iParam1 <= 0)
			{
				return true;
			}
			break;
		case 2:
			return false;
		case 3:
			if (iParam1 <= 0)
			{
				return true;
			}
			break;
		case 4:
			return false;
		case 5:
			if ((iParam3 != -1 && iParam4 != 0) && iParam0 != -1)
			{
				if (func_589(iParam4, iParam3) == iParam0)
				{
					return true;
				}
			}
			break;
	}
	return false;
}

int func_494(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1957416901:
			return 7;
		case -1185533313:
			return 10;
		case -784189810:
			return 0;
		case -79999383:
			return 6;
		case -63669280:
			return 2;
		case 218185167:
			return 8;
		case 851921060:
			return 3;
		case 1457860192:
			return 5;
		case 1579717899:
			return 1;
		case 1744858848:
			return 9;
		case 2028478397:
			return 4;
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

int func_495(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1918441640:
			return 2;
		case -1581094459:
			return 8;
		case -1437925683:
			return 12;
		case -725256130:
			return 17;
		case -632356431:
			return 14;
		case -559809431:
			return 10;
		case -548018579:
			return 13;
		case -533426613:
			return 1;
		case -457802746:
			return 3;
		case -222655798:
			return 16;
		case 10577687:
			return 15;
		case 424482930:
			return 6;
		case 1153715636:
			return 5;
		case 1175500245:
			return 11;
		case 1272390114:
			return 7;
		case 1788958412:
			return 4;
		case 1816768801:
			return 0;
		case 1842544025:
			return 9;
		case 1943481570:
			return 18;
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

int func_496(int iParam0)
{
	if (!func_119(iParam0))
	{
		return 0;
	}
	if (func_50() == -1)
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_51;
}

bool func_497(var uParam0)
{
	uVar0 = Global_1071686->f_28448[29]->f_3;
	if (!_0x7907969497ea92f5(uVar0))
	{
		return false;
	}
	if (!_0x603ac35fd4602c76(uVar0))
	{
		return false;
	}
	_copy_memory(uParam0, &uVar1, 5);
	*uParam0 = uVar0;
	return true;
}

bool func_498(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uVar0 = uParam0->f_1;
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		uParam0->f_1 = uVar0;
		return false;
	}
	return true;
}

int func_499(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	return _datafile_get_num_nodes(uParam0);
}

int func_500(int iParam0)
{
	return (*Global_1297047)[iParam0]->f_9;
}

struct<2> func_501(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	_copy_memory(&Var0, &((*Global_1297047)[iParam0]->f_6), 2);
	return Var0;
}

int func_502(var uParam0)
{
	return func_590(uParam0, 60, 1);
}

bool func_503(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = Global_1139381->f_7;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = func_591(iParam1);
	uParam0->f_4 = iParam2;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

void func_504(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_592(iParam0, uParam2->f_1);
	uParam1->f_2 = -2140901307;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_2 = iVar0;
	uParam1->f_2 = -2140901307;
	_datafile_get_string(&(uParam2->f_9), uParam1);
	uParam1->f_2 = 1292053410;
	_datafile_get_string(&(uParam2->f_17), uParam1);
	if (*uParam2 == 3)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_593(iVar0);
		}
	}
	else if (*uParam2 == 4)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = iVar0;
		}
	}
	else if (*uParam2 == 5)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_594(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_595(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_596(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_597(iVar0);
	uParam1->f_2 = 1060782978;
	_datafile_get_hash(&(uParam2->f_8), uParam1);
	uParam1->f_2 = 162343104;
	_datafile_get_int(&(uParam2->f_6), uParam1);
	uParam1->f_2 = -733480474;
	_datafile_get_int(&(uParam2->f_25), uParam1);
	uParam1->f_2 = 492825771;
	_datafile_get_int(&(uParam2->f_26), uParam1);
	uParam1->f_2 = -839279581;
	_datafile_get_int(&(uParam2->f_27), uParam1);
	uParam1->f_2 = -640941103;
	_datafile_get_int(&(uParam2->f_28), uParam1);
	iVar0 = 0;
	uParam1->f_2 = -2025968302;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_29 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1829781569;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_30 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1999176766;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_31 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -739728609;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_32 = iVar0;
}

struct<2> func_505(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_598(iParam0, &(Global_1071686->f_636), func_278(iParam1));
			break;
		case 3:
			Var0.f_1 = func_598(iParam0, &(Global_1071686->f_636.f_602), func_278(iParam1));
			break;
		case 4:
			Var0.f_1 = func_598(iParam0, &(Global_1071686->f_636.f_2104), func_278(iParam1));
			break;
		case 5:
			Var0.f_1 = func_598(iParam0, &(Global_1071686->f_636.f_12606), func_278(iParam1));
			break;
		case 6:
			Var0.f_1 = func_598(iParam0, &(Global_1071686->f_636.f_12908), func_278(iParam1));
			break;
		case 7:
			Var0.f_1 = func_598(iParam0, &(Global_1071686->f_636.f_15910), func_278(iParam1));
			break;
		case 8:
			Var0.f_1 = func_598(iParam0, &(Global_1071686->f_636.f_16512), func_278(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_114();
	}
	return Var0;
}

void func_506()
{
	func_599(&(Global_265377->f_124517.f_147));
}

bool func_507(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		iParam0 = player_id();
	}
	iVar0 = iParam0;
	if (func_246(iParam0) > 2)
	{
		return true;
	}
	if ((*Global_263042)[iVar0]->f_1.f_16 != 0)
	{
		return true;
	}
	if ((*Global_263042)[iVar0]->f_1 != 255)
	{
		return true;
	}
	if ((*Global_263042)[iVar0]->f_1.f_18 != 2147483647)
	{
		return true;
	}
	return false;
}

var func_508(int iParam0, int iParam1)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (iParam0 == 2147483647)
	{
		return uVar0;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (&Global_262155->f_1[iVar1] == iParam0 && (iParam1 == 0 || Global_262155->f_1[iVar1]->f_1 == iParam1))
		{
			return Global_262155->f_1[iVar1]->f_2;
		}
		iVar1++;
	}
	return uVar0;
}

int func_509()
{
	return Global_1102219->f_3673;
}

int func_510(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 255;
	}
	return &(Global_1102219->f_3675[iParam0]);
}

int func_511(int iParam0)
{
	return func_600(iParam0);
}

int func_512(int iParam0)
{
	if (!func_497(&Var0))
	{
		return -1;
	}
	if (!func_498(&Var0, 13, 0, 0, 1))
	{
		return -1;
	}
	if (!func_498(&Var0, 17, 0, 0, 1))
	{
		return -1;
	}
	iVar5 = func_499(&Var0, 0);
	if (!func_498(&Var0, 18, iParam0, 0, 1))
	{
		return -1;
	}
	iVar6 = _0xe13634bb6baf0734(Var0, Var0.f_1);
	return ((iVar5 - iVar6) - 1);
}

int func_513(int iParam0, int iParam1)
{
	if (!func_497(&Var0))
	{
		return -1;
	}
	if (!func_498(&Var0, 13, 0, 0, 1))
	{
		return -1;
	}
	if (!func_498(&Var0, 17, 0, 0, 1))
	{
		return -1;
	}
	if (!func_498(&Var0, 18, iParam0, 0, 1))
	{
		return -1;
	}
	if (!func_498(&Var0, 20, 0, 0, 1))
	{
		return -1;
	}
	iVar5 = func_499(&Var0, 1);
	if (!func_498(&Var0, 21, iParam1, 0, 1))
	{
		return -1;
	}
	iVar6 = _0xe13634bb6baf0734(Var0, Var0.f_1);
	return ((iVar5 - iVar6) - 1);
}

var func_514(int iParam0, int iParam1)
{
	if (!func_497(&uVar0))
	{
		return 0;
	}
	if (!func_498(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_498(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_498(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_498(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_498(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	return func_601(&uVar0);
}

int func_515(int iParam0, int iParam1)
{
	if (!func_497(&Var0))
	{
		return -1;
	}
	if (!func_498(&Var0, 13, 0, 0, 1))
	{
		return -1;
	}
	if (!func_498(&Var0, 17, 0, 0, 1))
	{
		return -1;
	}
	if (!func_498(&Var0, 18, iParam0, 0, 1))
	{
		return -1;
	}
	if (!func_498(&Var0, 20, 0, 0, 1))
	{
		return -1;
	}
	if (!func_498(&Var0, 21, iParam1, 0, 1))
	{
		return -1;
	}
	if (!func_498(&Var0, 24, 0, 0, 0))
	{
		return -1;
	}
	iVar6 = func_499(&Var0, 2);
	uVar7 = Var0.f_1;
	iVar5 = (iVar6 - 1);
	while (iVar5 >= 0)
	{
		Var0.f_1 = uVar7;
		if (!func_498(&Var0, 25, iVar5, 0, 1))
		{
		}
		else
		{
			Var8 = { func_602(Var0) };
			if (!func_603(&Var8, 1))
			{
			}
			else
			{
				return iVar5;
			}
		}
		iVar5 = (iVar5 + -1);
	}
	return -1;
}

int func_516(int iParam0, int iParam1)
{
	if (!func_497(&Var0))
	{
		return -1;
	}
	if (!func_498(&Var0, 13, 0, 0, 1))
	{
		return -1;
	}
	if (!func_498(&Var0, 17, 0, 0, 1))
	{
		return -1;
	}
	if (!func_498(&Var0, 18, iParam0, 0, 1))
	{
		return -1;
	}
	if (!func_498(&Var0, 26, 0, 0, 1))
	{
		return -1;
	}
	iVar5 = func_499(&Var0, 3);
	if (!func_498(&Var0, 28, iParam1, 0, 1))
	{
		return -1;
	}
	iVar6 = _0xe13634bb6baf0734(Var0, Var0.f_1);
	return ((iVar5 - iVar6) - 1);
}

int func_517(int iParam0, int iParam1, int iParam2)
{
	if (!func_497(&Var0))
	{
		return 0;
	}
	if (!func_498(&Var0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_498(&Var0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_498(&Var0, 18, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_498(&Var0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_498(&Var0, 21, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_498(&Var0, 29, 0, 0, 1))
	{
		return 0;
	}
	if (!func_498(&Var0, 30, func_604(iParam2), 0, 1))
	{
		return 0;
	}
	func_605(Var0, &uVar5);
	return uVar5;
}

int func_518(int iParam0, int iParam1, int iParam2)
{
	if (!func_497(&uVar0))
	{
		return 0;
	}
	if (!func_498(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_498(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_498(&uVar0, 18, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_498(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_498(&uVar0, 21, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_498(&uVar0, 29, 0, 0, 1))
	{
		return 0;
	}
	if (!func_498(&uVar0, 30, func_604(iParam2), 0, 1))
	{
		return 0;
	}
	return func_606(&uVar0);
}

int func_519(int iParam0, int iParam1, int iParam2)
{
	if (!func_497(&uVar0))
	{
		return 0;
	}
	if (!func_498(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_498(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_498(&uVar0, 18, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_498(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_498(&uVar0, 21, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_498(&uVar0, 29, 0, 0, 1))
	{
		return 0;
	}
	if (!func_498(&uVar0, 30, func_604(iParam2), 0, 1))
	{
		return 0;
	}
	return func_607(&uVar0);
}

int func_520(var uParam0)
{
	iVar0 = (5 - 1);
	while (iVar0 >= 0)
	{
		iVar3 = iVar0;
		iVar2 = func_608(iVar3, 1);
		if (iVar2 == -1)
		{
		}
		else
		{
			if (iVar0 != (5 - 1))
			{
				iVar1 = shift_left(iVar1, iVar2);
			}
			iVar1 = (iVar1 || func_609(iVar3, uParam0));
		}
		iVar0 = (iVar0 + -1);
	}
	return iVar1;
}

void func_521(int iParam0)
{
	Global_1572887->f_106.f_14 = iParam0;
}

void func_522(struct<34> Param0, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, struct<2> Param64, int iParam66, int iParam67, int iParam68)
{
	func_610(iParam67, Param0.f_33, 2, Param0.f_17, Param64, iParam66, -1, 0, 0, iParam68);
}

int func_523(int iParam0)
{
	if (!func_119(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_70;
}

void func_524(int iParam0, int iParam1)
{
	if (!func_119(iParam0))
	{
		return;
	}
	if ((*Global_1835011)[iParam0]->f_70 == iParam1)
	{
		return;
	}
	(*Global_1835011)[iParam0]->f_70 = iParam1;
}

bool func_525(int iParam0)
{
	switch (iParam0)
	{
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return true;
		default:
			break;
	}
	return false;
}

bool func_526(int iParam0)
{
	return _0xf6a8a652a6b186cd(func_611(iParam0));
}

int func_527(int iParam0)
{
	if (!func_119(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_69;
}

void func_528(int iParam0, int iParam1)
{
	if (!func_119(iParam0))
	{
		return;
	}
	if ((*Global_1835011)[iParam0]->f_69 == iParam1)
	{
		return;
	}
	(*Global_1835011)[iParam0]->f_69 = iParam1;
}

bool func_529(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_464(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_612())
	{
		return func_464(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_464(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

int func_530(int iParam0)
{
	if (func_613(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_531(int iParam0)
{
	if (func_614(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_532(vector3 vParam0, float fParam3)
{
	if (func_187(vParam0))
	{
		return false;
	}
	if (func_615(255) == 4)
	{
		return false;
	}
	if (func_529(4, 255))
	{
	}
	func_531(4);
	func_616(&(Global_1102219->f_3879));
	Global_1102219->f_3879.f_6 = { vParam0 };
	Global_1102219->f_3879 = fParam3;
	Global_1102219->f_3879.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_617(Global_1102219->f_3879, 36);
	return true;
}

void func_533(bool bParam0, bool bParam1)
{
	if (func_615(255) == 4)
	{
		return;
	}
	if (func_187(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_530(0);
	}
	else
	{
		if (bParam1)
		{
			func_618(0, 0, 0, 1);
		}
		func_531(0);
		func_619(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_620(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_621(Global_1102219->f_3849, 36);
	func_622(Global_1102219->f_3888, 36);
}

bool func_534(vector3 vParam0, var uParam3, float fParam4)
{
	uVar0 = &Global_1071686->f_23887.f_366[func_623(vParam0)];
	iVar1 = func_624(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = get_random_int_in_range(0, iVar1);
		if (func_625(uVar0, iVar2, uParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_535(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_615(255) == 4)
	{
		return;
	}
	if (func_187(vParam0))
	{
		return;
	}
	if (fParam8 < 0f && fParam9 < 0f)
	{
		fParam8 = Global_1901947->f_50;
		fParam9 = Global_1901947->f_50.f_1;
	}
	if (fParam8 == 0f && fParam9 == 0f)
	{
		fParam8 = Global_1901947->f_50;
		fParam9 = Global_1901947->f_50.f_1;
	}
	if (fParam9 < fParam8)
	{
		fParam8 = Global_1901947->f_50;
		fParam9 = Global_1901947->f_50.f_1;
	}
	if (bParam10)
	{
		func_618(0, 0, 0, 1);
	}
	func_531(0);
	func_531(3);
	Global_1102219->f_3919 = iParam11;
	Global_1102219->f_3920 = fParam12;
	Global_1102219->f_3921 = iParam13;
	func_619(&(Global_1102219->f_3849));
	Global_1102219->f_3849 = fParam3;
	Global_1102219->f_3849.f_5 = 1;
	Global_1102219->f_3849.f_17.f_6 = { vParam0 };
	Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
	Global_1102219->f_3849.f_17 = { fParam9, fParam9, fParam9 };
	Global_1102219->f_3849.f_17.f_9 = -432403087;
	if (fParam8 > 1f)
	{
		Global_1102219->f_3849.f_16 = 1;
		Global_1102219->f_3849.f_6.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3849.f_6.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_6 = { fParam8, fParam8, fParam8 };
		Global_1102219->f_3849.f_6.f_9 = -432403087;
	}
	func_620(&(Global_1102219->f_3888));
	Global_1102219->f_3888.f_6 = { vParam4 };
	Global_1102219->f_3888 = fParam7;
	Global_1102219->f_3888.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_621(Global_1102219->f_3849, 36);
	func_622(Global_1102219->f_3888, 36);
}

bool func_536(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_537()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

bool func_538(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (iParam0 >= 9 && iParam0 <= 25)
			{
				return true;
			}
			break;
	}
	return false;
}

Vector3 func_539(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_19;
}

Vector3 func_540(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_19;
}

Vector3 func_541(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_19;
}

void func_542(int iParam0, int iParam1)
{
	if (!func_267(iParam0))
	{
		return;
	}
	(*Global_1900838)[iParam0]->f_1 = ((*Global_1900838)[iParam0]->f_1 || iParam1);
}

void func_543(int iParam0)
{
	if (func_50() == -1)
	{
		return;
	}
	if ((*Global_1835011)[iParam0]->f_3 != 0 && _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3))
	{
		_unlock_set_new((*Global_1835011)[iParam0]->f_3, false);
	}
	func_421(iParam0);
}

void func_544(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_545(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_173(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_546(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			if (Global_1293346->f_20.f_1[iVar0]->f_1 == iParam1)
			{
			}
			else
			{
				Global_1293346->f_20.f_1[iVar0]->f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1293346->f_20.f_1[iVar0]->f_2 = iParam2;
				Global_1293346->f_20.f_1[iVar0]->f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_626(iParam0, iParam1, iParam2, iParam3);
}

bool func_547(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 28, uParam2, 0);
}

bool func_548(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 25, uParam2, 0);
}

bool func_549(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

void func_550(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_551(int iParam0)
{
	if (iParam0 == 395262693 || iParam0 == -933924539)
	{
		return 482206342;
	}
	return Global_524288->f_40400;
}

int func_552(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -504335712:
			if (func_627(iParam1))
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 2;
			}
			break;
		case 395262693:
			iVar0 = 2;
			break;
		case -933924539:
			iVar0 = 0;
			break;
		default:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

void func_553(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_554()
{
	if (Global_1293346->f_458.f_1548 >= 40 || Global_1293346->f_458.f_1548 < 0)
	{
		Global_1293346->f_458.f_1548 = 0;
	}
	return Global_1293346->f_458.f_1548;
}

void func_555(int iParam0)
{
	if (iParam0 >= 40 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346->f_458.f_1548 = iParam0;
}

int func_556()
{
	if (Global_1293346->f_458.f_1549 >= 10 || Global_1293346->f_458.f_1549 < 0)
	{
		Global_1293346->f_458.f_1549 = 0;
	}
	return Global_1293346->f_458.f_1549;
}

void func_557(int iParam0)
{
	if (iParam0 >= 10 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346->f_458.f_1549 = iParam0;
}

struct<2> func_558(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_559(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	if (_0xfbe782b3165ac8ec(iParam0))
	{
		return 1;
	}
	if (bParam7)
	{
		bVar0 = (_0xd6f6acf4392187fb(_0x901e0dc25080c8b9(player_id())) && _0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())));
		bParam7 = bVar0;
	}
	_0xc08aff658b2e51da(&iVar1);
	if (iVar1 != 0)
	{
		func_628(iParam2, -372840566);
	}
	if (!bParam7)
	{
		if (!_0x64a36ba85ce01a81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), uParam1))
		{
			return 0;
		}
	}
	else if (!_0x7a8e8df782b47eb0(&uVar2, &(iParam2->f_1), uParam1))
	{
		return 0;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_629(uParam1, iParam0, Var3);
	return 1;
}

Vector3 func_560(int iParam0)
{
	if (iParam0 == 255)
	{
		return (*Global_1134390)[func_612()]->f_38;
	}
	return (*Global_1134390)[iParam0]->f_38;
}

int func_561()
{
	if (_0x3aeabae3f3c7600c() && _0xa2e2bea4e83f6270(-92244418) > 0)
	{
		_0xb5e2eda2135e0fa1(-92244418, 0, &iVar0);
	}
	else
	{
		return -1;
	}
	if (iVar0 == 0)
	{
		return -1;
	}
	iVar5 = func_630(iVar0);
	if (iVar5 < 0 || iVar5 >= 12)
	{
		return -1;
	}
	return (135 + iVar5);
}

bool func_562(int iParam0, var uParam1, var uParam2)
{
	Var0 = Global_1071686->f_28448[48]->f_3;
	Var0.f_2 = -738708473;
	Var0.f_3 = func_631(iParam0);
	if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return false;
	}
	Var0.f_2 = -99852754;
	Var0.f_3 = get_hash_key("vPropPos");
	_datafile_get_vector(uParam1, &Var0);
	fVar5 = 0f;
	Var0.f_2 = 1059891245;
	Var0.f_3 = get_hash_key("fPropHead");
	_datafile_get_float(&fVar5, &Var0);
	uParam2->f_2 = fVar5;
	return true;
}

int func_563(int iParam0, vector3 vParam1, float fParam4)
{
	iVar0 = create_itemset(true);
	iVar5 = _0x59b57c4b06531e1e(vParam1, fParam4, iVar0, 3);
	iVar4 = 0;
	while (iVar4 <= (iVar5 - 1))
	{
		uVar1 = get_indexed_item_in_itemset(iVar4, iVar0);
		iVar2 = _0x18013392501ce5dc(uVar1);
		if (!does_entity_exist(iVar2))
		{
		}
		else if (!is_entity_visible(iVar2))
		{
		}
		else if (iParam0 != get_entity_model(iVar2))
		{
		}
		else
		{
			iVar3 = iVar2;
		}
		else
		{
			iVar4++;
		}
	}
	destroy_itemset(iVar0);
	return iVar3;
}

bool func_564()
{
	return Global_1211286->f_26;
}

int func_565(int iParam0, int iParam1)
{
	if (!func_279(iParam0, 0))
	{
		return func_633(func_632(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

void func_566(int iParam0, var uParam1, var uParam2)
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

struct<4> func_567(bool bParam0)
{
	iVar0 = func_150(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_152(923904168, func_55(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_152(923904168, func_55(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_152(923904168, func_55(bParam0), -740156546, 0);
}

struct<5> func_568(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_55(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_345(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_152(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_567(bParam1) };
			if (bParam2 && func_634(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_635(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_635(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_636(iParam0, &Var6, 1728382685))
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
		case -2072933068:
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -1591664384;
			Var0 = { func_637(bParam1) };
			switch (func_466(iParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				case -1057349201:
					Var0.f_4 = 1473261684;
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
		case -1962314949:
			if (func_638(iParam0, -1823706425))
			{
				Var0 = { func_152(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_638(iParam0, -1483207246))
			{
				Var0 = { func_152(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_152(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_638(iParam0, -1653629781))
			{
				Var0 = { func_152(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1384535894);
			}
			break;
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
				Var28.f_9 = -1591664384;
				if (!func_161(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (_inventory_fits_slot_id(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_638(iParam0, -1653629781))
			{
				Var0 = { func_152(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1384535894);
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

void func_569(int iParam0)
{
	if (!Global_1071686->f_3)
	{
		return;
	}
	if (!network_is_in_session())
	{
		return;
	}
	if (func_92(Global_1197355[network_player_id_to_int()], iParam0))
	{
		func_93((*Global_1197355)[network_player_id_to_int()], iParam0);
		Global_1051252->f_45.f_1 = 1;
	}
}

void func_570()
{
	enable_script_brain_set(4);
}

void func_571()
{
	enable_script_brain_set(1);
}

int func_572(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_441(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_441(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
		if (vVar3.x > vVar0.x)
		{
			iVar7 = (iVar8 - 1);
		}
		else if (vVar3.x < vVar0.x)
		{
			iVar6 = iVar8 + 1;
		}
		else
		{
			return iVar8;
		}
	}
	return -1;
}

int func_573(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_441(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_574()
{
	return !Global_1572887->f_9;
}

void func_575(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_576(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1690863991;
		case 3:
			return 1286170048;
		case 4:
			return -342492333;
		case 5:
			return 1140089012;
		case 8:
			return 634321112;
		case 7:
			return -2079273178;
		case 6:
			return -147846054;
		default:
			break;
	}
	return 0;
}

void func_577(struct<2> Param0, var uParam2)
{
	if (!network_is_game_in_progress())
	{
		return;
	}
	iVar2 = -1;
	iVar3 = _0x901e0dc25080c8b9(player_id());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_149(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_639(func_308(Param0));
			iVar5 = func_640(iVar4);
			if (!func_641(iVar5, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (&Global_1107216->f_33[iVar1] == iVar3)
		{
			iVar2 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 == -1)
	{
		return;
	}
	iVar0 = Global_1107216->f_33[iVar2]->f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	uParam2->f_2 = Global_1116202[iVar0];
}

int func_578(struct<2> Param0)
{
	iVar0 = func_572(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_642(iVar0);
}

int func_579(struct<2> Param0, int iParam2)
{
	if (Global_1071686->f_19550 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_441(Param0, &vVar0))
	{
		return -1;
	}
	vVar6 = -1;
	vVar6.f_1 = -1;
	vVar6 = { Param0 };
	vVar6.f_2 = iParam2;
	if (Global_1071686->f_19550 == 0)
	{
		*Global_1071686->f_19550.f_1[Global_1071686->f_19550] = { vVar6 };
		Global_1071686->f_19550++;
		return 0;
	}
	iVar9 = 0;
	while (iVar9 < Global_1071686->f_19550)
	{
		func_441(*Global_1071686->f_19550.f_1[iVar9], &vVar3);
		if (vVar0.x == vVar3.x)
		{
			*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
			return iVar9;
		}
		else if (vVar0.x > vVar3.x)
		{
			iVar9++;
		}
		else if (vVar0.x < vVar3.x)
		{
			func_643(iVar9);
			*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
			return iVar9;
		}
	}
	if (Global_1071686->f_19550 < 31)
	{
		iVar9 = Global_1071686->f_19550;
		*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
		Global_1071686->f_19550++;
		if (Global_1071686->f_19550 > 32)
		{
			Global_1071686->f_19550 = 32;
		}
		return iVar9;
	}
	return -1;
}

void func_580()
{
	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (func_441(*Global_1071686->f_19550.f_1[iVar0], &vVar1))
		{
		}
		iVar0++;
	}
}

void func_581(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_582(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_583(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1746095559;
		case 1:
			return 195938434;
		case 2:
			return 416962030;
		case 3:
			return 1314857970;
		case 4:
			return -999071359;
		case 5:
			return -683250308;
		case 6:
			return -857617219;
		case 7:
			return 1780145725;
		case 8:
			return -1521715232;
		case 9:
			return -1560342203;
		case 10:
			return 1343354387;
		case 11:
			return 1052408375;
		case 12:
			return -1759599185;
		case 13:
			return 1481148278;
		case 14:
			return -16106300;
		case 15:
			return 105387183;
		case 16:
			return -2095449173;
		case 17:
			return -2097683294;
		case 18:
			return 1805131596;
		case 19:
			return 314693001;
		case 20:
			return -1728509733;
		case 21:
			return -42817558;
		case 22:
			return 1458462042;
		case 23:
			return 481893872;
		case 24:
			return 1714017012;
		case 25:
			return 1437412331;
		case 26:
			return -493957506;
		case 27:
			return 1224055398;
		case 28:
			return -953803399;
		case 29:
			return 2006449383;
		case 30:
			return -1788230330;
		case 31:
			return 1396375613;
		case 32:
			return -547914843;
		case 33:
			return -1547772340;
		case 34:
			return -59535775;
		case 35:
			return -1701536647;
		case 36:
			return 1923998736;
		case 37:
			return -1103472584;
		case 38:
			return -2051405571;
		case 39:
			return 1135209633;
		case 40:
			return -1810065318;
		case 41:
			return 2140177766;
		case 42:
			return 1685924442;
		case 43:
			return 1171995096;
		case 44:
			return -267442581;
		case 45:
			return -1361146315;
		case 46:
			return 1352191066;
		case 47:
			return -2130852007;
		case 48:
			return -102241052;
		case 49:
			return 1420320220;
		case 50:
			return -1715130379;
		case 51:
			return -661550833;
		case 52:
			return -1358475411;
		case 53:
			return -1848598303;
		case 54:
			return -173287735;
		case 55:
			return -715363719;
		case 56:
			return -1117123933;
		case 57:
			return 1972833301;
		case 58:
			return 0;
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

void func_584(char[12] cParam0)
{
	Global_1939161->f_75.f_67 = { cParam0 };
}

void func_585()
{
	StringCopy(&(Global_1939161->f_75.f_67), "", 24);
}

bool func_586(int iParam0)
{
	iVar0 = func_644(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_645(iVar1))
	{
		if (Global_1071686->f_19648.f_24 && !func_646(iParam0))
		{
			return false;
		}
		return (is_bit_set(&(Global_1071686->f_19648[iVar1]), iVar2) || is_bit_set(&(Global_39.f_110[iVar1]), iVar2));
	}
	return is_bit_set(&(Global_39.f_110[iVar1]), iVar2);
}

int func_587(struct<2> Param0)
{
	if (!func_148(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_235(*Global_1900736->f_1[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_588(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1900736->f_66 == 0)
	{
		return 0;
	}
	if (Global_1900736->f_66 == 1)
	{
		Global_1900736->f_66 = 0;
		func_484(Global_1900736->f_1[0]);
		return 1;
	}
	func_484(Global_1900736->f_1[iParam0]);
	Global_1900736->f_66 = (Global_1900736->f_66 - 1);
	func_647(iParam0, Global_1900736->f_66);
	return 1;
}

int func_589(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -532393368:
			return Global_524288->f_87689[iParam1]->f_74;
		default:
			break;
	}
	return -1;
}

int func_590(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (_datafile_get_hash(&uVar0, uParam0))
	{
	}
	return uVar0;
}

int func_591(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1649591222;
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = -1841318328;
			break;
		case -2:
			iVar0 = 1293082345;
			break;
		case 2:
			iVar0 = -1599460565;
			break;
		case 3:
			iVar0 = 1610555441;
			break;
		case 4:
			iVar0 = 2080488347;
			break;
		case 5:
			iVar0 = 1107336882;
			break;
		case 6:
			iVar0 = -1307562954;
			break;
		case 7:
			iVar0 = 1198585370;
			break;
		case 8:
			iVar0 = 1753821005;
			break;
		case 9:
			iVar0 = -1480791665;
			break;
		case 10:
			iVar0 = 1894568478;
			break;
		case 11:
			iVar0 = 1923799069;
			break;
		case 12:
			iVar0 = -605765767;
			break;
		case 13:
			iVar0 = 1252941330;
			break;
		case 14:
			iVar0 = -1930354636;
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = 1859328971;
			break;
		case 18:
			iVar0 = 1151893103;
			break;
		case 19:
			iVar0 = -312924468;
			break;
	}
	return iVar0;
}

int func_592(int iParam0, var uParam1)
{
	if (func_648(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_593(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case -66250361:
			return 2;
		case 1443764480:
			return 3;
		case -668110249:
			return 4;
		case -1381389849:
			return 5;
		case 536699577:
			return 6;
		case 541147288:
			return 7;
		case 377122918:
			return 8;
		case 1158195437:
			return 9;
		case -1261475678:
			return 10;
		case -621956193:
			return 11;
		case 1081776803:
			return 12;
		case -218697175:
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case 1724417419:
			return 16;
		case -728200180:
			return 17;
		case 1404415665:
			return 18;
		case 339077182:
			return 20;
		case 650120418:
			return 21;
		case 1695693301:
			return 28;
		case -1809176396:
			return 19;
		case 349772825:
			return 22;
		case 1657045547:
			return 23;
		case -590482787:
			return 24;
		case -1711308722:
			return 25;
		case -409129282:
			return 26;
		case -1790985606:
			return 27;
		case 1518877519:
			return 30;
		default:
			break;
	}
	return -1;
}

int func_594(int iParam0)
{
	switch (iParam0)
	{
		case -747096482:
			return 0;
		case 390152599:
			return 1;
		case 348001928:
			return 2;
		case 687137831:
			return 3;
		case 1221273613:
			return 4;
		case -669486032:
			return 5;
		case -1044132584:
			return 6;
		default:
			break;
	}
	return -1;
}

int func_595(int iParam0)
{
	switch (iParam0)
	{
		case 1697883736:
			return 0;
		case 1927192818:
			return 1;
		case -1363591469:
			return 2;
		case 1635448909:
			return 3;
		case -604494871:
			return 4;
		case -993281498:
			return 5;
		case -1871525158:
			return 6;
		case -596286663:
			return 15;
		case 923956646:
			return 16;
		case 1459450644:
			return 17;
		case -2071675432:
			return 18;
		case -552339597:
			return 8;
		case 2144670272:
			return 10;
		case 996459079:
			return 9;
		case 1996177174:
			return 11;
		case -1702168032:
			return 12;
		case -27117790:
			return 13;
		case 1653867545:
			return 14;
		case -142235487:
			return 7;
		default:
			break;
	}
	return -1;
}

int func_596(int iParam0)
{
	switch (iParam0)
	{
		case 2049341823:
			return 0;
		case 1655635003:
			return 1;
		case -435635781:
			return 2;
		case 2006131499:
			return 3;
		case -1641798436:
			return 4;
		case 352400957:
			return 5;
		case 1211286129:
			return 6;
		case 787592898:
			return 7;
		case -568832219:
			return 8;
		case -1103026985:
			return 9;
		case 1039801657:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_597(int iParam0)
{
	switch (iParam0)
	{
		case 987444055:
			return -1;
		case 1330140418:
			return 0;
		case -640677282:
			return 1;
		case -1950303839:
			return 2;
		case 1322114923:
			return 3;
		case -525004462:
			return 4;
		case 1419735597:
			return 5;
		case 1004744465:
			return 6;
		case 672178273:
			return 7;
		case 1777227915:
			return 8;
		case 408825843:
			return 9;
		case -42959138:
			return 10;
		case 64621749:
			return 11;
		case -1346830927:
			return 12;
		case -218234180:
			return 13;
		case 751663875:
			return 14;
		case 1766283257:
			return 15;
		case -269943670:
			return 16;
		case 522313648:
			return 17;
		case 1976336482:
			return 18;
		case -713504854:
			return 19;
		case 753957709:
			return 20;
		case 1054483531:
			return 21;
		case 547199896:
			return 22;
		default:
			break;
	}
	return -1;
}

int func_598(int iParam0, var uParam1, int iParam2)
{
	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (uParam1[iVar2] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (uParam1[iVar2] < iParam0)
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

void func_599(var uParam0)
{
	func_649(uParam0, 0);
}

int func_600(int iParam0)
{
	if (!func_650(7, iParam0, &vVar0))
	{
		return 0;
	}
	vVar0.f_2 = 1636457257;
	if (!_datafile_get_hash(&uVar5, &vVar0))
	{
		return 0;
	}
	return uVar5;
}

var func_601(var uParam0)
{
	return func_590(uParam0, 68, 1);
}

struct<4> func_602(struct<5> Param0)
{
	Var0 = func_651(&Param0);
	Var0.f_1 = func_652(&Param0);
	switch (Var0)
	{
		case 581657549:
			Var0.f_2 = func_653(&Param0);
			break;
		case -1732594287:
			Var0.f_2 = func_654(&Param0);
			break;
		case 914197110:
			Var0.f_2 = func_654(&Param0);
			break;
		default:
			break;
	}
	func_655(Param0, &Var0);
	return Var0;
}

bool func_603(var uParam0, int iParam1)
{
	if (!func_656(iParam1, uParam0->f_3))
	{
		return true;
	}
	switch (*uParam0)
	{
		case -1732594287:
			iVar0 = uParam0->f_1;
			return func_657(iVar0, uParam0->f_2);
		case 581657549:
			if (!_0x85e4d7b225a30ed1(uParam0->f_1, &Var2))
			{
				return false;
			}
			return Var2.f_1 >= uParam0->f_2;
		case 914197110:
			iVar1 = uParam0->f_1;
			return func_658(iVar1, uParam0->f_2);
		default:
			break;
	}
	return false;
}

int func_604(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1928985868;
		case 1:
			return -1444170561;
		default:
			break;
	}
	return 0;
}

void func_605(struct<5> Param0, var uParam5)
{
	uVar4 = Param0.f_1;
	iVar1 = func_499(&Param0, 4);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		Param0.f_1 = uVar4;
		if (!func_498(&Param0, 31, iVar0, 0, 1))
		{
			return;
		}
		iVar2 = func_659(Param0, &iVar3);
		switch (iVar3)
		{
			case 356437857:
				*uParam5 = iVar2;
				break;
			default:
				break;
		}
		iVar0++;
	}
}

int func_606(var uParam0)
{
	return func_660(func_590(uParam0, 66, 1));
}

int func_607(var uParam0)
{
	return func_661(func_590(uParam0, 67, 1));
}

int func_608(int iParam0, bool bParam1)
{
	iVar0 = func_662(bParam1, 1, 0);
	iVar1 = func_663(iParam0);
	return (floor(func_664(2f, to_float((iVar1 - 1)))) + iVar0) + 1;
}

var func_609(int iParam0, var uParam1)
{
	iVar0 = (func_608(iParam0, 1) - 1);
	iVar3 = func_665(iParam0);
	iVar1 = func_666(iParam0, uParam1);
	if (iVar1 == -1 || iVar1 > iVar3)
	{
		iVar1 = 0;
		iVar2 = 0;
	}
	else
	{
		iVar2 = floor(pow(2f, to_float(iVar0)));
	}
	return (iVar1 || iVar2);
}

int func_610(int iParam0, var uParam1, int iParam2, int iParam3, struct<2> Param4, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10)
{
	if (!func_667(iParam2, iParam3))
	{
		return 0;
	}
	if (func_200() && Global_1572887->f_106.f_75 != 9)
	{
		return 0;
	}
	if (!func_668(Global_1296859->f_10))
	{
		return 0;
	}
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_5 = 1;
	Var0.f_6 = 7;
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	Var0.f_2 = 1;
	Var0.f_3 = { Param4 };
	func_669(&Var0);
	func_670(iParam2, iParam3, iParam7, 1);
	func_671(Param4, 1);
	func_672(iParam6);
	func_673(iParam9);
	func_674(iParam10, 1);
	if ((func_148(Param4) && !func_675()) && &Global_1211325 == -1)
	{
		func_676(Param4);
	}
	_0x0ae241a4a9adeeec(1);
	if (iParam2 != 2)
	{
		func_677();
	}
	if (func_675())
	{
		func_678(Param4);
	}
	else if (iParam2 == 3)
	{
		if (!func_679(268435456))
		{
			if (!_is_app_active(1433015236))
			{
				func_680(1, 0);
			}
		}
	}
	else
	{
		if (iParam2 == 2)
		{
			Var65 = 255;
			Var65.f_18 = 2147483647;
			Var65.f_21.f_2 = -504335712;
			Var65.f_21.f_4 = 3;
			Var65.f_26 = -1;
			Var65.f_30 = 1;
			Var65.f_31 = 1;
			Var65.f_32 = 1;
			Var65.f_33 = 32;
			Var65.f_34 = 1;
			Var65.f_35 = -2;
			Var65.f_47.f_5 = -1;
			Var65.f_53 = -1;
			Var65.f_53.f_1 = -1;
			Var65.f_55.f_3 = -1;
			func_256(&Var65, iParam3, -1, -1, 3);
			StringCopy(&cVar57, func_681(&(Var65.f_37), 109029619), 64);
		}
		else if (iParam2 == 1)
		{
			StringCopy(&cVar57, _create_var_string(2, func_682(iParam3)), 64);
		}
		else
		{
			StringCopy(&cVar57, _create_var_string(2, func_684(func_683(), iParam3)), 64);
		}
		_databinding_write_data_string(Global_1572887->f_106.f_151, &cVar57);
		_databinding_write_data_string(Global_1572887->f_106.f_153, _create_var_string(2, "NM_PLAYLIST_MATCHMADE_PLAYERS", 1));
		_databinding_remove_data_entry(Global_1572887->f_106.f_154);
		_databinding_remove_data_entry(Global_1572887->f_106.f_155);
		_databinding_remove_data_entry(Global_1572887->f_106.f_156);
		_databinding_remove_data_entry(Global_1572887->f_106.f_157);
		_databinding_remove_data_entry(Global_1572887->f_106.f_158);
		_databinding_remove_data_entry(Global_1572887->f_106.f_159);
	}
	if ((!_0x424b17a7dc5c90bc(player_id()) && func_685(255, 0)) && !bParam8)
	{
		func_686("NM_MATCHMAKING_WARNING");
	}
	func_687(10);
	return 1;
}

int func_611(int iParam0)
{
	if (!func_119(iParam0))
	{
		return -1;
	}
	return &(Global_1211206->f_1[iParam0]);
}

int func_612()
{
	return Global_1102219->f_3672;
}

bool func_613(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_614(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

int func_615(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1296859->f_22[iParam0])
	{
		return (*Global_1100469)[iParam0]->f_1;
	}
	return 26;
}

void func_616(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_617(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

void func_618(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_688(iParam0);
	if (!func_689(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_690(128) && !func_691(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_692() == 4)
	{
		func_530(18);
	}
	func_693(1024);
}

void func_619(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_620(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_621(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (does_entity_exist(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (_does_volume_exist(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_622(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

int func_623(vector3 vParam0)
{
	iVar0 = 0;
	iVar1 = -1;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		fVar3 = vdist(vParam0, Global_1071686->f_23887.f_366[iVar0]->f_2);
		if (fVar3 < fVar2 || iVar1 == -1)
		{
			iVar1 = iVar0;
			fVar2 = fVar3;
		}
		iVar0++;
	}
	return iVar1;
}

int func_624(var uParam0)
{
	Var0 = Global_1071686->f_23887.f_366.f_4085;
	Var0.f_2 = 1593794963;
	Var0.f_3 = uParam0;
	return _datafile_get_num_nodes(&Var0);
}

bool func_625(var uParam0, int iParam1, var uParam2, float fParam3)
{
	Var0 = Global_1071686->f_23887.f_366.f_4085;
	Var0.f_2 = 160165798;
	Var0.f_3 = uParam0;
	Var0.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1576253240;
		_datafile_get_vector(uParam2, &Var0);
		Var0.f_2 = -55481687;
		_datafile_get_float(fParam3, &Var0);
		return true;
	}
	return false;
}

void func_626(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1293346->f_20 < 20)
	{
		Global_1293346->f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1293346->f_20.f_1[iVar0] = { *(Global_1293346->f_20.f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	func_694(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

bool func_627(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

void func_628(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_LOCAL_LOAD_S >= 11)
	{
		return;
	}
}

void func_629(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_695(uParam0))
	{
		return;
	}
	if (Global_1293346->f_2011 < 20)
	{
		Global_1293346->f_2011++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1293346->f_2011.f_1[iVar0] = { *(Global_1293346->f_2011.f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	*(Global_1293346->f_2011.f_1[(Global_1293346->f_2011 - 1)]) = { Var1 };
}

int func_630(int iParam0)
{
	switch (iParam0)
	{
		case 1056359525:
			return 0;
		case 89248012:
			return 1;
		case -100681112:
			return 2;
		case -1087814448:
			return 3;
		case -1265422428:
			return 4;
		case 2053061437:
			return 5;
		case -804198753:
			return 6;
		case 97833510:
			return 7;
		case -74793582:
			return 8;
		case -1585936017:
			return 9;
		case 792472748:
			return 10;
		case 140861179:
			return 11;
		default:
			break;
	}
	return 0;
}

int func_631(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return -809040070;
		case 6:
			return 443958153;
		case 7:
			return 1035357148;
		case 8:
			return -990591911;
		case 19:
			return 1434435999;
		case 13:
			return 914613127;
		case 14:
			return 277114628;
		case 15:
			return -441298053;
		case 12:
			return -2008988392;
		case 122:
			return 1866591384;
		case 123:
			return -810797676;
		case 5:
			return 1591504033;
		case 9:
			return -1481022983;
		case 10:
			return -200160067;
		case 11:
			return -906556724;
		case 16:
			return 882729775;
		case 17:
			return 1957450109;
		case 18:
			return 1826386989;
		case 23:
			return 213861089;
		case 24:
			return 187124199;
		case 25:
			return -1639286351;
		case 22:
			return 1244472740;
		case 26:
			return -184950877;
		case 45:
			return -922179383;
		case 48:
			return 877339314;
		case 46:
			return 327042733;
		case 49:
			return -1159824322;
		case 42:
			return 187784199;
		case 43:
			return 156869848;
		case 44:
			return 959980967;
		case 50:
			return -605457855;
		case 51:
			return -967272484;
		case 52:
			return 253446434;
		case 53:
			return -24930371;
		case 63:
			return -491616406;
		case 56:
			return 1428271505;
		case 57:
			return -404449802;
		case 60:
			return -2132681852;
		case 124:
			return 1479356600;
		case 125:
			return -1608228131;
		case 54:
			return 1700741106;
		case 55:
			return 509242725;
		case 59:
			return -1243693278;
		case 58:
			return 106026254;
		case 61:
			return -1340467914;
		case 62:
			return -2128099513;
		case 27:
			return -768596287;
		case 28:
			return -1789795772;
		case 33:
			return 986912071;
		case 31:
			return 312948291;
		case 34:
			return 770563571;
		case 35:
			return 288839560;
		case 30:
			return 399352507;
		case 39:
			return -1241147617;
		case 126:
			return 1576805996;
		case 29:
			return -1427623397;
		case 36:
			return 305555540;
		case 37:
			return -697751457;
		case 38:
			return -994915577;
		case 68:
			return 2080716288;
		case 69:
			return 922959422;
		case 70:
			return 1948709075;
		case 71:
			return 599204508;
		case 74:
			return -362796541;
		case 127:
			return -176953214;
		case 75:
			return -1992095599;
		case 72:
			return -553046416;
		case 73:
			return 1410537143;
		case 83:
			return 646741747;
		case 84:
			return -773037432;
		case 85:
			return 1444751354;
		case 78:
			return 709943351;
		case 87:
			return 731746260;
		case 86:
			return 405856312;
		case 82:
			return -1749578899;
		case 88:
			return 1581089825;
		case 81:
			return 1124822890;
		case 91:
			return 1618521465;
		case 90:
			return -442258411;
		case 120:
			return 1665083003;
		case 121:
			return 810431028;
		case 77:
			return 1161446575;
		case 79:
			return -406930559;
		case 80:
			return -1850308061;
		case 89:
			return 787686374;
		case 41:
			return 1523596125;
		case 98:
			return -372049939;
		case 97:
			return 226213668;
		case 93:
			return 1437804895;
		case 96:
			return -1254552445;
		case 94:
			return 1526480524;
		case 95:
			return 470861506;
		case 128:
			return 644508980;
		case 129:
			return -1985767496;
		case 0:
			return 1117878254;
		case 1:
			return 622553269;
		case 2:
			return -1934358691;
		case 101:
			return 94750187;
		case 99:
			return 545745902;
		case 100:
			return 1875117241;
		case 119:
			return -1861588330;
		case 133:
			return -1079912632;
		case 152:
			return -1624899219;
		case 176:
			return 1712034773;
		case 177:
			return 1084233913;
		case 178:
			return -1628307596;
		case 153:
			return 1109728466;
		case 154:
			return 151142181;
		case 147:
			return 191185611;
		case 135:
			return 1689047337;
		case 136:
			return 631237697;
		case 137:
			return 1309294228;
		case 138:
			return -1862366064;
		case 139:
			return -708893514;
		case 140:
			return -61253253;
		case 141:
			return -1674694281;
		case 142:
			return 14391281;
		case 143:
			return -869603674;
		case 144:
			return 2081857521;
		case 145:
			return 526646992;
		case 146:
			return 1672297313;
		case 47:
			return 1025033373;
		case 32:
			return 1025033373;
		case 21:
			return 1025033373;
		case 115:
			return 1025033373;
		case 92:
			return 1025033373;
		case 131:
			return 1025033373;
		case 20:
			return 1025033373;
		case 134:
			return -765151559;
		case 179:
			return 1244193358;
		case 155:
			return -268420964;
		case 156:
			return -283845926;
		case 157:
			return 76731659;
		case 158:
			return 2141489518;
		case 67:
			return 1529797091;
		case 159:
			return 1120323763;
		case 160:
			return -1951530479;
		case 161:
			return 2034257465;
		case 162:
			return 278587369;
		case 65:
			return 1388932648;
		case 164:
			return 1467401843;
		case 165:
			return -1049737591;
		case 166:
			return 1175719437;
		case 167:
			return 2115547696;
		case 64:
			return 878376253;
		case 168:
			return -508879537;
		case 169:
			return -654369397;
		case 170:
			return 1573058547;
		case 171:
			return 1753151614;
		case 172:
			return -2113647360;
		case 173:
			return 1337275619;
		case 174:
			return -237650722;
		case 175:
			return 283754781;
		case 66:
			return -2076086367;
		case 163:
			return -487054121;
		case 108:
			return -1769964380;
		case 110:
			return -1464928880;
		case 109:
			return -812483303;
		case 111:
			return 1315212395;
		case 112:
			return 450843655;
		case 113:
			return -1477315484;
		case 114:
			return -1132316597;
		case 102:
			return -1495157302;
		case 105:
			return -2140031237;
		case 106:
			return -375350;
		case 103:
			return -1829807698;
		case 104:
			return 186603357;
		case 107:
			return -1575817877;
		case 116:
			return 1087483310;
		case 130:
			return -552506176;
		case 117:
			return 441769767;
		case 118:
			return 1318049946;
		case 3:
			return 548657065;
		case 4:
			return 243086140;
		case 40:
			return -305029900;
		case 76:
			return 1008537949;
		case 148:
			return 1239556700;
		case 149:
			return 1968750441;
		case 150:
			return 317019665;
		case 151:
			return 1421441577;
		default:
			break;
	}
	return 0;
}

int func_632(int iParam0)
{
	return iParam0;
}

int func_633(int iParam0, int iParam1)
{
	if (!func_696(iParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_0x99c6ea66dfe73757(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

bool func_634(int iParam0, bool bParam1)
{
	if (func_466(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_697();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_635(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_280(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_636(int iParam0, var uParam1, int iParam2)
{
	if (func_698(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_637(bool bParam0)
{
	iVar0 = func_150(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_152(271701509, func_55(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_152(271701509, func_55(bParam0), 12999093, 0);
}

bool func_638(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_466(iParam0);
	if (iVar1 == -1015256479)
	{
		return false;
	}
	iVar3 = _item_database_get_fits_slot_count(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (_item_database_get_fits_slot_info(iVar1, iVar2, &iVar0))
		{
			if (func_699(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_639(int iParam0)
{
	iVar0 = -1;
	if (func_700(&Var1, iParam0))
	{
		iVar0 = ((func_701() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_640(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_641(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1777724963:
		case -1165569262:
		case -697789102:
		case -260420884:
		case -232478158:
		case 78055447:
		case 195932838:
		case 850213441:
		case 974227447:
		case 1532822440:
		case 1918154385:
			return true;
		case 1539023636:
			return iParam1;
		default:
			break;
	}
	return false;
}

int func_642(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (iVar0 + 1 < 32)
		{
			*Global_1071686->f_19550.f_1[iVar0] = { *(Global_1071686->f_19550.f_1[iVar0 + 1]) };
		}
		iVar0++;
	}
	vVar1 = -1;
	vVar1.f_1 = -1;
	if (Global_1071686->f_19550 < 32)
	{
		*Global_1071686->f_19550.f_1[Global_1071686->f_19550] = { vVar1 };
	}
	Global_1071686->f_19550 = (Global_1071686->f_19550 - 1);
	if (Global_1071686->f_19550 < 0)
	{
		Global_1071686->f_19550 = 0;
	}
	return 1;
}

int func_643(int iParam0)
{
	iVar0 = (Global_1071686->f_19550 - 1);
	vVar1 = -1;
	vVar1.f_1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1071686->f_19550.f_1[iVar0 + 1]) = { *Global_1071686->f_19550.f_1[iVar0] };
		}
		iVar0 = (iVar0 - 1);
	}
	*Global_1071686->f_19550.f_1[iParam0] = { vVar1 };
	Global_1071686->f_19550++;
	if (Global_1071686->f_19550 > 32)
	{
		Global_1071686->f_19550 = 32;
	}
	return 1;
}

int func_644(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2142074819:
			return 521;
		case -2141419899:
			return 404;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case -2100409704:
			return 470;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case -2066272360:
			return 394;
		case -2058120606:
			return 194;
		case -2056579774:
			return 464;
		case -2043909922:
			return 338;
		case -2038424081:
			return 49;
		case -2034257789:
			return 90;
		case -2022369555:
			return 251;
		case -2021582629:
			return 110;
		case -2020023971:
			return 263;
		case -1957523409:
			return 205;
		case -1952856164:
			return 163;
		case -1949204933:
			return 261;
		case -1943367752:
			return 387;
		case -1939389836:
			return 416;
		case -1932919229:
			return 428;
		case -1925798111:
			return 41;
		case -1914141706:
			return 439;
		case -1906892166:
			return 403;
		case -1882707460:
			return 463;
		case -1861414976:
			return 380;
		case -1852605133:
			return 10;
		case -1848799275:
			return 409;
		case -1847672446:
			return 312;
		case -1842033327:
			return 504;
		case -1840704908:
			return 274;
		case -1838712533:
			return 26;
		case -1838352012:
			return 55;
		case -1835851517:
			return 54;
		case -1831552326:
			return 121;
		case -1827602683:
			return 446;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 411;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 398;
		case -1749433374:
			return 479;
		case -1749043433:
			return 524;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case -1719055206:
			return 519;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case -1705799799:
			return 421;
		case -1700452710:
			return 317;
		case -1684974589:
			return 466;
		case -1674179981:
			return 53;
		case -1673998598:
			return 527;
		case -1666278201:
			return 33;
		case -1664435783:
			return 486;
		case -1624627591:
			return 438;
		case -1612662716:
			return 198;
		case -1610966108:
			return 354;
		case -1608141409:
			return 538;
		case -1585840296:
			return 336;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case -1578292898:
			return 434;
		case -1573753524:
			return 503;
		case -1558439474:
			return 286;
		case -1556041029:
			return 410;
		case -1547280108:
			return 518;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case -1502194556:
			return 523;
		case -1462313959:
			return 462;
		case -1455998786:
			return 370;
		case -1447311849:
			return 321;
		case -1445041595:
			return 528;
		case -1442844448:
			return 465;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1422877860:
			return 472;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case -1395855864:
			return 478;
		case -1387772214:
			return 407;
		case -1378911044:
			return 475;
		case -1369678628:
			return 487;
		case -1344601768:
			return 347;
		case -1341750998:
			return 476;
		case -1340339190:
			return 362;
		case -1339871203:
			return 532;
		case -1329135070:
			return 138;
		case -1319875891:
			return 437;
		case -1311865656:
			return 37;
		case -1296807958:
			return 352;
		case -1290997627:
			return 461;
		case -1287894233:
			return 426;
		case -1283202000:
			return 353;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case -1262828457:
			return 423;
		case -1257057567:
			return 21;
		case -1241340344:
			return 285;
		case -1236261996:
			return 222;
		case -1232809834:
			return 111;
		case -1230112817:
			return 168;
		case -1223121209:
			return 124;
		case -1215445344:
			return 129;
		case -1209597203:
			return 365;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 400;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case -1161687045:
			return 391;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case -1145153057:
			return 339;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case -1120447016:
			return 443;
		case -1095341658:
			return 408;
		case -1080627546:
			return 314;
		case -1077783786:
			return 191;
		case -1063147448:
			return 149;
		case -1062490780:
			return 77;
		case -1060078174:
			return 226;
		case -1056767524:
			return 174;
		case -1053549743:
			return 56;
		case -1042021329:
			return 382;
		case -1029225159:
			return 104;
		case -1023919011:
			return 431;
		case -1014145132:
			return 273;
		case -1004266677:
			return 460;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 399;
		case -941648233:
			return 511;
		case -939420910:
			return 44;
		case -931337253:
			return 424;
		case -925071604:
			return 541;
		case -919512195:
			return 40;
		case -911126844:
			return 368;
		case -897750037:
			return 366;
		case -895307590:
			return 500;
		case -895073533:
			return 393;
		case -889906510:
			return 389;
		case -888632790:
			return 505;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case -852602679:
			return 432;
		case -851626677:
			return 371;
		case -839820438:
			return 419;
		case -828139293:
			return 246;
		case -812641169:
			return 534;
		case -811637947:
			return 232;
		case -800891377:
			return 493;
		case -797689456:
			return 514;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case -781631220:
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case -734416508:
			return 372;
		case -729679654:
			return 530;
		case -699277634:
			return 4;
		case -693828600:
			return 355;
		case -683458244:
			return 78;
		case -677920206:
			return 458;
		case -666014935:
			return 155;
		case -664512648:
			return 65;
		case -664252410:
			return 188;
		case -644722288:
			return 247;
		case -640663440:
			return 320;
		case -639037538:
			return 183;
		case -635323621:
			return 512;
		case -632127260:
			return 342;
		case -630295963:
			return 494;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case -604603161:
			return 471;
		case -591815673:
			return 383;
		case -583127403:
			return 506;
		case -574190021:
			return 492;
		case -554519756:
			return 535;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case -524787708:
			return 379;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case -510945576:
			return 337;
		case -503955743:
			return 235;
		case -502473159:
			return 326;
		case -502324015:
			return 8;
		case -500245243:
			return 515;
		case -492731190:
			return 418;
		case -491981251:
			return 184;
		case -489737721:
			return 401;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 349;
		case -448554447:
			return 531;
		case -441204543:
			return 533;
		case -434590080:
			return 212;
		case -414883443:
			return 459;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 373;
		case -389056691:
			return 257;
		case -381925743:
			return 507;
		case -371827125:
			return 388;
		case -364475655:
			return 429;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case -355531636:
			return 369;
		case -350863510:
			return 160;
		case -349064220:
			return 298;
		case -334729750:
			return 67;
		case -333135263:
			return 334;
		case -330120947:
			return 333;
		case -329176208:
			return 491;
		case -311373772:
			return 539;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case -297483764:
			return 433;
		case -279765076:
			return 345;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case -243260793:
			return 417;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case -226366310:
			return 522;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case -211583122:
			return 516;
		case -209894800:
			return 344;
		case -207792846:
			return 482;
		case -191424539:
			return 147;
		case -182889087:
			return 175;
		case -154581735:
			return 294;
		case -150493654:
			return 95;
		case -129643890:
			return 11;
		case -110352060:
			return 430;
		case -108780030:
			return 350;
		case -108307814:
			return 28;
		case -102827640:
			return 402;
		case -101740709:
			return 498;
		case -99303535:
			return 165;
		case -90486812:
			return 490;
		case -89829333:
			return 422;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case -75928821:
			return 508;
		case -75024673:
			return 244;
		case -74031276:
			return 440;
		case -70727482:
			return 452;
		case -63926460:
			return 87;
		case -61411516:
			return 357;
		case -38135693:
			return 467;
		case -35658630:
			return 24;
		case -25901845:
			return 275;
		case -9438024:
			return 127;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 151;
		case 8924991:
			return 282;
		case 16844748:
			return 405;
		case 26054262:
			return 323;
		case 26245360:
			return 224;
		case 38162571:
			return 72;
		case 52706132:
			return 230;
		case 54073871:
			return 74;
		case 61537448:
			return 540;
		case 64896505:
			return 390;
		case 74872959:
			return 331;
		case 84709454:
			return 453;
		case 93964309:
			return 395;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case 148595040:
			return 529;
		case 153152452:
			return 84;
		case 168171957:
			return 181;
		case 171499483:
			return 268;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 228;
		case 210001842:
			return 60;
		case 215903338:
			return 489;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case 229371495:
			return 327;
		case 235928616:
			return 271;
		case 237155783:
			return 517;
		case 249726958:
			return 162;
		case 269047710:
			return 52;
		case 273461605:
			return 79;
		case 280705402:
			return 93;
		case 282809459:
			return 117;
		case 299694527:
			return 260;
		case 300221584:
			return 136;
		case 302205488:
			return 322;
		case 311708813:
			return 195;
		case 320943355:
			return 131;
		case 321629486:
			return 509;
		case 330026330:
			return 64;
		case 345808947:
			return 272;
		case 356365161:
			return 47;
		case 371850993:
			return 266;
		case 373691918:
			return 186;
		case 374115931:
			return 88;
		case 404823609:
			return 484;
		case 405586984:
			return 34;
		case 407136781:
			return 171;
		case 409602249:
			return 278;
		case 417081698:
			return 17;
		case 417525590:
			return 288;
		case 420709909:
			return 42;
		case 424920933:
			return 544;
		case 426191476:
			return 15;
		case 434558613:
			return 196;
		case 439465264:
			return 106;
		case 440043364:
			return 31;
		case 442317566:
			return 287;
		case 449774763:
			return 214;
		case 459290420:
			return 316;
		case 468797819:
			return 341;
		case 469053995:
			return 218;
		case 473295046:
			return 2;
		case 476714362:
			return 219;
		case 478884033:
			return 146;
		case 479419429:
			return 290;
		case 509781469:
			return 377;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 392;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case 560154875:
			return 455;
		case 565812320:
			return 447;
		case 582380806:
			return 358;
		case 588987611:
			return 177;
		case 589380360:
			return 340;
		case 618699440:
			return 75;
		case 619839857:
			return 375;
		case 630808005:
			return 126;
		case 640520536:
			return 469;
		case 642824856:
			return 481;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case 673606600:
			return 499;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case 715735881:
			return 483;
		case 723021499:
			return 250;
		case 730069127:
			return 474;
		case 747514327:
			return 381;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case 784360470:
			return 361;
		case 791041526:
			return 18;
		case 799106423:
			return 454;
		case 803929300:
			return 468;
		case 804063423:
			return 502;
		case 817925178:
			return 227;
		case 826868753:
			return 473;
		case 831940854:
			return 406;
		case 846837291:
			return 450;
		case 865557632:
			return 536;
		case 868326136:
			return 270;
		case 883901517:
			return 384;
		case 885203519:
			return 315;
		case 885378256:
			return 378;
		case 885777893:
			return 374;
		case 896725436:
			return 510;
		case 929582877:
			return 367;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 415;
		case 945612176:
			return 234;
		case 965467037:
			return 343;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case 982765715:
			return 442;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case 1028084603:
			return 445;
		case 1032791043:
			return 501;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 537;
		case 1126565489:
			return 485;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case 1153686207:
			return 451;
		case 1157309080:
			return 513;
		case 1159471771:
			return 360;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case 1166612791:
			return 330;
		case 1167397384:
			return 292;
		case 1177464213:
			return 38;
		case 1186594126:
			return 217;
		case 1193080109:
			return 182;
		case 1195508693:
			return 542;
		case 1203043430:
			return 259;
		case 1205826474:
			return 83;
		case 1207048789:
			return 167;
		case 1213993593:
			return 158;
		case 1221801385:
			return 310;
		case 1232840551:
			return 480;
		case 1238086793:
			return 346;
		case 1248935549:
			return 414;
		case 1250636944:
			return 245;
		case 1279586666:
			return 448;
		case 1280406542:
			return 441;
		case 1287917122:
			return 386;
		case 1302228510:
			return 348;
		case 1306158345:
			return 199;
		case 1321892118:
			return 356;
		case 1325325699:
			return 420;
		case 1341699707:
			return 525;
		case 1350371763:
			return 20;
		case 1350391819:
			return 73;
		case 1352699670:
			return 256;
		case 1358491857:
			return 249;
		case 1360745816:
			return 80;
		case 1362354162:
			return 496;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 413;
		case 1433244935:
			return 164;
		case 1441416901:
			return 208;
		case 1453909576:
			return 123;
		case 1466547629:
			return 118;
		case 1478132521:
			return 303;
		case 1480425906:
			return 449;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case 1494062795:
			return 425;
		case 1497516462:
			return 5;
		case 1500064347:
			return 70;
		case 1509509592:
			return 35;
		case 1512816328:
			return 166;
		case 1517904467:
			return 203;
		case 1517951665:
			return 435;
		case 1521272922:
			return 457;
		case 1522511407:
			return 265;
		case 1549124796:
			return 325;
		case 1557082963:
			return 161;
		case 1561093093:
			return 385;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case 1601722481:
			return 520;
		case 1607768502:
			return 9;
		case 1609506757:
			return 105;
		case 1626481264:
			return 116;
		case 1643531967:
			return 125;
		case 1649996811:
			return 179;
		case 1660024373:
			return 148;
		case 1665756137:
			return 91;
		case 1666964801:
			return 526;
		case 1691618738:
			return 66;
		case 1698972798:
			return 351;
		case 1703398561:
			return 364;
		case 1703426636:
			return 43;
		case 1708045337:
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case 1744443559:
			return 376;
		case 1766284049:
			return 92;
		case 1774060092:
			return 543;
		case 1776302352:
			return 299;
		case 1788424349:
			return 444;
		case 1812677765:
			return 397;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case 1866434585:
			return 412;
		case 1867912207:
			return 68;
		case 1881028477:
			return 363;
		case 1884271742:
			return 51;
		case 1891256113:
			return 436;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case 1932172605:
			return 359;
		case 1944170089:
			return 159;
		case 1947931439:
			return 216;
		case 1952610440:
			return 200;
		case 1954026328:
			return 307;
		case 1982676972:
			return 89;
		case 2008888900:
			return 178;
		case 2013720626:
			return 488;
		case 2016141805:
			return 6;
		case 2019386373:
			return 187;
		case 2024121624:
			return 190;
		case 2024383613:
			return 305;
		case 2024769126:
			return 293;
		case 2037589949:
			return 61;
		case 2048790450:
			return 497;
		case 2051822093:
			return 284;
		case 2068208444:
			return 427;
		case 2068253437:
			return 477;
		case 2077022393:
			return 291;
		case 2079292950:
			return 456;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case 2103908624:
			return 396;
		case 2109952320:
			return 189;
		case 2113625508:
			return 324;
		case 2127412005:
			return 495;
		case 2127577956:
			return 241;
		case 2136753624:
			return 85;
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

bool func_645(int iParam0)
{
	iVar0 = func_702(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_646(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return true;
	}
	return false;
}

void func_647(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_703((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_703(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_148(*Global_1900736->f_1[0]))
	{
		func_478(*Global_1900736->f_1[0], 3);
	}
}

bool func_648(int iParam0, var uParam1, var uParam2)
{
	if (func_704(iParam0, uParam1, &uVar0))
	{
		func_705(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_649(var uParam0, int iParam1)
{
	uParam0->f_1 = (func_706() - iParam1);
	func_361(uParam0, 1);
	func_707(uParam0, 2);
	uParam0->f_2 = 0;
}

bool func_650(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_591(iParam0);
	uParam2->f_4 = iParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

var func_651(var uParam0)
{
	return func_590(uParam0, 63, 1);
}

var func_652(var uParam0)
{
	return func_590(uParam0, 64, 1);
}

var func_653(var uParam0)
{
	return func_708(uParam0, 62, 1);
}

var func_654(var uParam0)
{
	return func_590(uParam0, 62, 1);
}

void func_655(struct<5> Param0, var uParam5)
{
	uVar4 = Param0.f_1;
	iVar1 = func_499(&Param0, 4);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		Param0.f_1 = uVar4;
		if (!func_498(&Param0, 31, iVar0, 0, 1))
		{
			return;
		}
		iVar2 = func_659(Param0, &iVar3);
		switch (iVar3)
		{
			case -646838152:
				uParam5->f_3 = iVar2;
				break;
			default:
				break;
		}
		iVar0++;
	}
}

bool func_656(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return iParam1 & 2 == 0;
		case 3:
			return iParam1 & 1 == 0;
		default:
			break;
	}
	return true;
}

bool func_657(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 127786994:
			return (!_unlock_is_unlocked(iParam0) && !_unlock_is_visible(iParam0));
		case 105823627:
			return (_unlock_is_unlocked(iParam0) && !_unlock_is_visible(iParam0));
		case 848504716:
			return (!_unlock_is_unlocked(iParam0) && _unlock_is_visible(iParam0));
		case 2078976555:
			return (_unlock_is_unlocked(iParam0) && _unlock_is_visible(iParam0));
		case 1605840866:
			return (!_unlock_is_unlocked(iParam0) || !_unlock_is_visible(iParam0));
		case -1989751792:
			return (_unlock_is_unlocked(iParam0) || !_unlock_is_visible(iParam0));
		case 1699110072:
			return (!_unlock_is_unlocked(iParam0) || _unlock_is_visible(iParam0));
		case 1916788071:
			return (_unlock_is_unlocked(iParam0) || _unlock_is_visible(iParam0));
		case 427136516:
			return _unlock_is_unlocked(iParam0);
		case -1765302991:
			return _unlock_is_visible(iParam0);
		case -1846747855:
			return !_unlock_is_unlocked(iParam0);
		case 1280145277:
			return !_unlock_is_visible(iParam0);
		default:
			break;
	}
	return false;
}

bool func_658(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1656249757:
			return _0xfbe782b3165ac8ec(iParam0);
		case -1895052883:
			return !_0xfbe782b3165ac8ec(iParam0);
		default:
			break;
	}
	return false;
}

int func_659(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5)
{
	uVar5 = Param0.f_1;
	*uParam5 = func_709(&Param0);
	iVar1 = func_499(&Param0, 5);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar5;
		if (!func_498(&Param0, 33, iVar0, 0, 1))
		{
		}
		else
		{
			iVar4 = func_590(&Param0, 60, 1);
			switch (*uParam5)
			{
				case 914197110:
					iVar2 = func_710(iVar4);
					break;
				case 253781561:
					iVar2 = func_711(iVar4);
					break;
				case -646838152:
					iVar2 = func_712(iVar4);
					break;
				case 356437857:
					iVar2 = func_713(iVar4);
					break;
				case -1649591222:
					iVar2 = func_714(iVar4);
					break;
				case -1444170561:
					iVar2 = func_715(iVar4);
					break;
				default:
					break;
			}
			uVar3 = (uVar3 || iVar2);
		}
		iVar0++;
	}
	return uVar3;
}

int func_660(int iParam0)
{
	switch (iParam0)
	{
		case 1435056310:
			return 14;
		case -2031657153:
			return 15;
		case 1298976737:
			return 16;
		case 2019303599:
			return 17;
		default:
			break;
	}
	return 0;
}

int func_661(int iParam0)
{
	switch (iParam0)
	{
		case 772646387:
			return 1;
		case 1495295997:
			return 2;
		case -1666944573:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_662(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_663(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 13;
		case 2:
			return 2;
		case 3:
			return 15;
		case 4:
			return 2;
		default:
			break;
	}
	return 0;
}

float func_664(float fParam0, float fParam1)
{
	return (_log10(fParam1) / _log10(fParam0));
}

int func_665(int iParam0)
{
	iVar0 = func_608(iParam0, 0);
	return (floor(pow(2f, to_float(iVar0))) - 1);
}

int func_666(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return uParam1->f_2;
		case 1:
			return uParam1->f_3;
		case 2:
			return uParam1->f_4;
		case 3:
			return uParam1->f_1;
		case 4:
			return *uParam1;
		default:
			break;
	}
	return -1;
}

bool func_667(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam0 == 3)
	{
		return iParam1 != -1;
	}
	return iParam1 != 0;
}

bool func_668(int iParam0)
{
	iVar0 = _0x901e0dc25080c8b9(iParam0);
	if (_0x0f99f6436528a089(iVar0) && !_0x424b17a7dc5c90bc(iParam0))
	{
		return false;
	}
	return true;
}

void func_669(var uParam0)
{
	_copy_memory(&(Global_1572887->f_106.f_17), uParam0, 57);
}

void func_670(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_1572887->f_106 = iParam0;
	Global_1572887->f_106.f_9 = iParam1;
	Global_1572887->f_106.f_10 = iParam2;
	if (bParam3)
	{
		func_716();
	}
}

void func_671(struct<2> Param0, bool bParam2)
{
	Global_1572887->f_106.f_11 = { Param0 };
	if (bParam2)
	{
		func_716();
	}
}

void func_672(int iParam0)
{
	Global_1572887->f_106.f_15 = iParam0;
}

void func_673(int iParam0)
{
	Global_1572887->f_106.f_13 = iParam0;
}

void func_674(int iParam0, bool bParam1)
{
	Global_1572887->f_106.f_74 = iParam0;
	if (bParam1)
	{
		func_716();
	}
}

bool func_675()
{
	if (func_683() != 0)
	{
		return false;
	}
	if (Global_1572887->f_106.f_9 >= 5 && Global_1572887->f_106.f_9 <= 8)
	{
		return false;
	}
	return true;
}

int func_676(struct<2> Param0)
{
	if (func_717())
	{
		return 0;
	}
	if (!func_148(Param0))
	{
		return 0;
	}
	*Global_1051213 = { Param0 };
	return 1;
}

void func_677()
{
	(*Global_1056141)[network_player_id_to_int()]->f_15.f_11 = 0;
}

void func_678(struct<2> Param0)
{
	_databinding_remove_data_entry(Global_1572887->f_106.f_153);
	_databinding_remove_data_entry(Global_1572887->f_106.f_154);
	_databinding_remove_data_entry(Global_1572887->f_106.f_155);
	_databinding_remove_data_entry(Global_1572887->f_106.f_156);
	_databinding_remove_data_entry(Global_1572887->f_106.f_157);
	_databinding_remove_data_entry(Global_1572887->f_106.f_158);
	_databinding_remove_data_entry(Global_1572887->f_106.f_159);
	iVar0 = func_718(Param0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = func_719(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	uVar2 = func_720(iVar0);
	Var3 = { func_721(iVar1, uVar2) };
	_databinding_write_data_string(Global_1572887->f_106.f_151, _create_var_string(2, &Var3));
}

bool func_679(int iParam0)
{
	return (Global_1572887->f_106.f_15 && iParam0) != 0;
}

int func_680(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_722();
	}
	if (!func_723(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_724(iParam0);
	Global_1896738->f_386 = 1;
	Global_1896738->f_387 = bParam1;
	return 1;
}

char* func_681(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_725(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_682(int iParam0)
{
	iVar0 = func_726(iParam0);
	if (iVar0 == &Global_265354->f_1[0])
	{
		return "NM_BUCKET_RACE";
	}
	if (iVar0 == &Global_265354->f_1[1])
	{
		return "NET_PLAYLIST_FEATURED_SERIES_001";
	}
	if (iVar0 == &Global_265354->f_1[5])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_1";
	}
	if (iVar0 == &Global_265354->f_1[6])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_2";
	}
	if (iVar0 == &Global_265354->f_1[7])
	{
		return "NET_PLAYLIST_ELIMINATION_SMALL";
	}
	if (iVar0 == &Global_265354->f_1[8])
	{
		return "NET_PLAYLIST_ELIMINATION_MEDIUM";
	}
	if (iVar0 == &Global_265354->f_1[9])
	{
		return "NET_PLAYLIST_ELIMINATION_LARGE";
	}
	if (iVar0 == &Global_265354->f_1[2])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_SMALL";
	}
	if (iVar0 == &Global_265354->f_1[3])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_MEDIUM";
	}
	if (iVar0 == &Global_265354->f_1[4])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_LARGE";
	}
	if (iVar0 == &Global_265354->f_1[15])
	{
		return "NM_BUCKET_ORBIS_SERIES_1";
	}
	if (iVar0 == &Global_265354->f_1[16])
	{
		return "NM_BUCKET_ORBIS_SERIES_2";
	}
	if (iVar0 == &Global_265354->f_1[17])
	{
		return "NM_BUCKET_ORBIS_SERIES_3";
	}
	if (iVar0 == &Global_265354->f_1[19])
	{
		return "NET_PLAYLIST_CAPTURE";
	}
	if (iVar0 == &Global_265354->f_1[18])
	{
		return "NET_PLAYLIST_SHOOTOUT";
	}
	return "Unmapped bucket hash";
}

int func_683()
{
	return Global_1572887->f_106;
}

char* func_684(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "NM_BUCKET_EIGHT_PLAYER";
				case 1:
					return "NM_BUCKET_RACE";
				case 2:
					return "NM_BUCKET_TWELVE_PLAYER";
				case 3:
					return "NM_BUCKET_ADVERSARIAL";
				case 6:
					return "NM_BUCKET_NOMINATED_SERIES";
				case 5:
					return "NM_BUCKET_NOMINATED_SERIES_SMALL";
				case 7:
					return "NM_BUCKET_NOMINATED_SERIES_MEDIUM";
				case 8:
					return "NM_BUCKET_NOMINATED_SERIES_LARGE";
				case 23:
					return "NM_BUCKET_MISSION_2_PLAYER";
				case 24:
					return "NM_BUCKET_FOUR_PLAYER";
				case 25:
					return "NM_BUCKET_EIGHT_PLAYER";
				case 26:
					return "NM_BUCKET_MISSION_10_PLAYER";
				case 27:
					return "NM_BUCKET_TWELVE_PLAYER";
				case 28:
					return "NM_BUCKET_ADVERSARIAL";
				default:
					break;
			}
			break;
	}
	return "Invalid Net Matchmaking Bucket";
}

bool func_685(int iParam0, bool bParam1)
{
	bVar0 = false;
	if (iParam0 == 255)
	{
		bVar0 = true;
		iParam0 = func_612();
	}
	else if (iParam0 == func_612())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam1)
		{
			return Global_1296859->f_14;
		}
	}
	if (!bVar0)
	{
		if (!&Global_1296859->f_22[iParam0])
		{
			return false;
		}
		if (!_network_is_player_index_valid(&(Global_1296859->f_154[iParam0])))
		{
			return false;
		}
	}
	if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(&(Global_1296859->f_154[iParam0]))) <= 1)
	{
		return false;
	}
	return true;
}

var func_686(char* sParam0)
{
	sVar0 = _create_var_string(2, sParam0);
	uVar1 = func_727(sVar0, -2, 0, 0, 0, 1);
	return uVar1;
}

void func_687(int iParam0)
{
	Global_1572887->f_106.f_75 = iParam0;
}

void func_688(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

bool func_689(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_690(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_691(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

int func_692()
{
	if (&Global_1102219 <= 5)
	{
		return &Global_1102219;
	}
	if (&Global_1102219 <= 22)
	{
		return 4;
	}
	if (&Global_1102219 <= 25)
	{
		return 3;
	}
	return 26;
}

void func_693(int iParam0)
{
	if (func_728(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

void func_694(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_729(&(uParam0->f_4));
}

bool func_695(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_696(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

bool func_697()
{
	return (func_730(-1185145312, 0, 0, 0) > 0 && func_731(func_152(889965687, func_55(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_698(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_150(0);
	*uParam1 = { func_152(iParam0, func_567(0), iParam3, 0) };
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

bool func_699(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (_0xaa29a5f13b2c20b2(iParam1, -455129387) == -1925887917)
		{
			return false;
		}
	}
	return _item_database_can_equip_item_on_category(iParam0, iParam1, iParam2);
}

bool func_700(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

int func_701()
{
	iVar0 = 0;
	vVar1.x = Global_1257541->f_8863;
	vVar1.f_2 = -1041770777;
	if (_datafile_get_data_node_index(&(vVar1.f_1), &vVar1))
	{
		iVar0 = _datafile_get_num_children(vVar1.x, vVar1.y);
	}
	return iVar0;
}

int func_702(int iParam0)
{
	return func_732(iParam0) + 30;
}

void func_703(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { *Global_1900736->f_1[iParam0] };
	*Global_1900736->f_1[iParam0] = { *Global_1900736->f_1[iParam1] };
	*Global_1900736->f_1[iParam1] = { Var0 };
}

bool func_704(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_591(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_705(var uParam0, int iParam1, var uParam2)
{
	*uParam2 = iParam1;
	uParam0->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam0);
	uParam0->f_2 = -2140901307;
	if (_datafile_get_hash(&uVar0, uParam0))
	{
		uParam2->f_2 = uVar0;
	}
	uParam0->f_2 = -2140901307;
	_datafile_get_string(&(uParam2->f_11), uParam0);
	uParam0->f_2 = 1292053410;
	_datafile_get_string(&(uParam2->f_19), uParam0);
	uParam0->f_2 = 1234058424;
	_datafile_get_string(&(uParam2->f_3), uParam0);
}

int func_706()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_707(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

var func_708(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (!_datafile_get_int(&uVar0, uParam0))
	{
	}
	return uVar0;
}

var func_709(var uParam0)
{
	return func_590(uParam0, 60, 1);
}

int func_710(int iParam0)
{
	switch (iParam0)
	{
		case 1932616531:
			return 1;
		case 724666844:
			return 2;
		case 1943935584:
			return 4;
		case 1807760880:
			return 8;
		default:
			break;
	}
	return 0;
}

int func_711(int iParam0)
{
	switch (iParam0)
	{
		case -243414166:
			return 2;
		case -369122880:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_712(int iParam0)
{
	switch (iParam0)
	{
		case -752379276:
			return 1;
		case -1151403749:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_713(int iParam0)
{
	switch (iParam0)
	{
		case 1586601790:
			return 1;
		case 236229850:
			return 2;
		case 880275082:
			return 4;
		case -389588894:
			return 1024;
		case 1355384174:
			return 268435456;
		case 1398901851:
			return 536870912;
		default:
			break;
	}
	return 0;
}

int func_714(int iParam0)
{
	switch (iParam0)
	{
		case 1943935584:
			return 1;
		case 1807760880:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_715(int iParam0)
{
	switch (iParam0)
	{
		case 1943935584:
			return 1;
		case -1368721330:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_716()
{
	if (func_50() == -1)
	{
		return;
	}
	iVar0 = &Global_1296859;
	if (func_92(Global_1572887->f_7, 1))
	{
		func_96(&((*Global_1056141)[iVar0]->f_187.f_10), 4);
	}
	else
	{
		func_93(&((*Global_1056141)[iVar0]->f_187.f_10), 4);
	}
	(*Global_1056141)[iVar0]->f_187 = Global_1572887->f_106;
	(*Global_1056141)[iVar0]->f_187.f_1 = Global_1572887->f_106.f_9;
	(*Global_1056141)[iVar0]->f_187.f_2 = Global_1572887->f_106.f_10;
	(*Global_1056141)[iVar0]->f_187.f_3 = { Global_1572887->f_106.f_11 };
	(*Global_1056141)[iVar0]->f_187.f_8 = Global_1572887->f_106.f_13;
	(*Global_1056141)[iVar0]->f_187.f_5 = { Global_1572887->f_360 };
	(*Global_1056141)[iVar0]->f_187.f_9 = Global_1572887->f_106.f_74;
	if (func_679(1024))
	{
		func_96(&((*Global_1056141)[iVar0]->f_187.f_10), 2);
	}
	else
	{
		func_93(&((*Global_1056141)[iVar0]->f_187.f_10), 2);
	}
}

bool func_717()
{
	return func_148(*Global_1051213);
}

int func_718(struct<2> Param0)
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_235(Global_1196898->f_78[iVar0]->f_7, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_719(int iParam0)
{
	return Global_1196898->f_78[iParam0]->f_3;
}

var func_720(int iParam0)
{
	return Global_1196339->f_1[iParam0]->f_3;
}

struct<8> func_721(int iParam0, var uParam1)
{
	if (((func_733(&Var8, iParam0) && func_734(&Var8)) && func_735(&Var8, uParam1)) && func_736(&Var8))
	{
		func_737(Var8, 37194763, &Var0, 1);
	}
	return Var0;
}

void func_722()
{
	if (!_is_any_app_running())
	{
		return;
	}
	_close_all_apps();
}

bool func_723(bool bParam0, bool bParam1, bool bParam2)
{
	bVar0 = func_739(bParam2, func_738(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_724(int iParam0)
{
	Global_1896738->f_390 = iParam0;
}

char* func_725(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_726(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&Global_265377->f_117359.f_6758[iVar0] == iParam0)
		{
			return &(Global_265377->f_117359.f_6725[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

var func_727(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar17 = _show_simple_right_text(&Var0, &Var13, iParam5);
	return uVar17;
}

bool func_728(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

void func_729(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

int func_730(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_740(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_150(bParam1), iParam0, iParam3);
}

int func_731(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_741(&uParam0, iParam4, bParam5, iParam6);
}

int func_732(int iParam0)
{
	return iParam0 * 31;
}

bool func_733(var uParam0, int iParam1)
{
	if (!_0x7907969497ea92f5(Global_1196898->f_455))
	{
		return false;
	}
	*uParam0 = Global_1196898->f_455;
	uParam0->f_2 = -1093317127;
	uParam0->f_3 = func_742(iParam1);
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_734(var uParam0)
{
	uParam0->f_2 = -310067910;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_735(var uParam0, var uParam1)
{
	uParam0->f_2 = -1739269194;
	uParam0->f_3 = uParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_736(var uParam0)
{
	uParam0->f_2 = 1701407264;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_737(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_string(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_738()
{
	return Global_1915715->f_20643;
}

int func_739(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!bParam7 && _is_any_app_running())
	{
		return 0;
	}
	iVar0 = &Global_1296859->f_154[&Global_1296859];
	iVar1 = Global_1296859->f_8;
	bVar2 = is_entity_dead(iVar1);
	bVar3 = _0xb655db7582aec805(iVar1);
	if (bVar2 || bVar3)
	{
		if (!bParam5)
		{
			return 0;
		}
	}
	else
	{
		if (!bParam4)
		{
			if (_0xec7e480ff8bd0bed(Global_34))
			{
				return 0;
			}
			if (_0x4912dfe492db98cd(Global_34, "inInspectionMode"))
			{
				return 0;
			}
		}
		if (bParam0 && !is_player_control_on(iVar0))
		{
			if (bParam6 && Global_1102219->f_3 & 32 != 0)
			{
			}
			else if (decor_exist_on(iVar1, "iMinigameSeat"))
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915715->f_20638 || Global_1915715->f_22504.f_1)
		{
			return 0;
		}
		if (_0xd04241bbf6d03a5e(Global_34) != 0)
		{
			return 0;
		}
	}
	if (func_743())
	{
		return 0;
	}
	if (Global_15)
	{
		return 0;
	}
	if (!bParam2 && (((Global_1940144->f_10 || Global_1940144->f_11) || Global_1940144->f_12) || Global_1940144->f_13))
	{
		return 0;
	}
	if (!bParam3)
	{
		iVar4 = network_player_id_to_int();
		if (Global_1248240->f_9297 != -1)
		{
			return 0;
		}
		if ((*Global_1128574)[iVar4]->f_34 & 1 != 0 && (*Global_1128574)[iVar4]->f_34 & 2 == 0)
		{
			return 0;
		}
		if (Global_1130634->f_293)
		{
			return 0;
		}
		if (Global_1572887->f_106.f_75 > 11 && Global_1572887->f_106.f_75 < 15)
		{
			return 0;
		}
		else if (Global_1572887->f_106.f_75 > 15)
		{
			return 0;
		}
	}
	if (!bParam8)
	{
		if ((_get_global_block_can_be_accessed(2) && _get_global_block_can_be_accessed(8)) && _get_global_block_can_be_accessed(9))
		{
			if ((Global_1048576 || Global_2883584) // PointerArith)
			{
				return 0;
			}
			if (&Global_1048581)
			{
				return 0;
			}
			if (&Global_1048585)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_740(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_741(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_744(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_742(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1697883736;
		case 1:
			return 1927192818;
		case 2:
			return -1363591469;
		case 3:
			return 1635448909;
		case 4:
			return -604494871;
		case 5:
			return -993281498;
		case 6:
			return -1871525158;
		case 15:
			return -596286663;
		case 16:
			return 923956646;
		case 17:
			return 1459450644;
		case 18:
			return -2071675432;
		case 8:
			return -552339597;
		case 10:
			return 2144670272;
		case 9:
			return 996459079;
		case 11:
			return 1996177174;
		case 12:
			return -1702168032;
		case 13:
			return -27117790;
		case 14:
			return 1653867545;
		case 7:
			return -142235487;
		default:
			break;
	}
	return 0;
}

bool func_743()
{
	return (_does_anim_scene_exist(Global_26538) && _is_anim_scene_started(Global_26538, false));
}

bool func_744(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_150(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_283(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

