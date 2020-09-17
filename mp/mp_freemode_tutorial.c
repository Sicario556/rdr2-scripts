void __EntryFunction__()
{
	fLocal_16 = 1f;
	fLocal_17 = 1f;
	sLocal_24 = "props_misc@campfires@5_logs";
	sLocal_25 = "Script_PropCampfire";
	func_1(&Local_109);
	func_2(&uScriptParam_0);
	while (!func_3(&Local_63, &Local_109))
	{
		Local_109.f_112 = participant_id();
		Local_109.f_112.f_2 = player_id();
		Local_109.f_112.f_3 = network_player_id_to_int();
		Local_109.f_112.f_4 = player_ped_id();
		if (does_entity_exist(Local_109.f_112.f_4))
		{
			Local_109.f_112.f_5 = { get_entity_coords(Local_109.f_112.f_4, true, false) };
		}
		iVar0 = get_network_time_accurate();
		Local_109.f_112.f_15 = get_time_difference(Local_109.f_112.f_14, iVar0);
		if (Local_109.f_112.f_15 < 0)
		{
			Local_109.f_112.f_15 = (Local_109.f_112.f_15 * -1);
		}
		Local_109.f_112.f_14 = iVar0;
		Local_109.f_112.f_16++;
		Local_109.f_112.f_16 = (Local_109.f_112.f_16 % 4);
		if (network_is_host_of_this_script())
		{
			func_4(&uLocal_26, &Local_63, &Local_109, &uScriptParam_0);
		}
		func_5(&uLocal_26, &Local_63, &Local_109);
		func_6(&Local_109);
		wait(0);
	}
	func_7(&uLocal_26, &Local_63, &Local_109);
	while (!_0x380ffa15b72408fb(1440))
	{
		wait(0);
	}
	func_8();
}

void func_1(var uParam0)
{
	func_9(12);
	func_18(uParam0, 1859, 1868, 1903, 1994, 1859, 3570, 4884, 4892, 5207, 7, 40);
	func_20(uParam0, 0, 4884, 5384, 0);
	func_20(uParam0, 1, 4884, 5782, 0);
	func_20(uParam0, 2, 4884, 6458, 0);
	func_20(uParam0, 3, 4884, 7301, 0);
	func_20(uParam0, 4, 4884, 8249, 0);
	func_20(uParam0, 5, 4884, 8698, 0);
	func_26(&(uParam0->f_112), 64);
}

void func_2(var uParam0)
{
	Local_109.f_16 = get_hash_of_this_script_name();
	Local_109.f_112.f_8 = *uParam0;
	Local_109.f_112.f_9 = { func_27(Local_109.f_112.f_8) };
	func_28(4, -1);
	func_29();
	if (func_30())
	{
		func_8();
	}
	network_register_host_broadcast_variables(&uLocal_26, 37, 56);
	func_31(_0xba24095ea96dfe17(&uLocal_26), 37, "m_NSMFrameworkHostData");
	network_register_player_broadcast_variables(&Local_63, 21, 57);
	func_32(_0x690806bc83bc8ca2(Local_63[0]), 21, "m_NSMFrameworkClientData.sRuntimeData");
	network_register_player_broadcast_variables(&(Local_63.f_21), 25, 58);
	func_32(_0x690806bc83bc8ca2(Local_63.f_21[0]), 25, "m_NSMFrameworkClientData.sMissionData");
	func_34(func_33(&(Local_109.f_112), 64));
	set_this_script_can_remove_blips_created_by_any_script(true);
	set_this_script_can_be_paused(false);
	register_script_with_audio(1);
	if (func_35(16, 255))
	{
		func_36(&uLocal_26, 4);
	}
}

bool func_3(var uParam0, var uParam1)
{
	if (func_37(0, 0))
	{
		return true;
	}
	uParam1->f_112.f_1 = participant_id_to_int();
	if (uParam0[uParam1->f_112.f_1] >= 7)
	{
		return true;
	}
	if (uParam1->f_112.f_374 & 1 != 0)
	{
		return true;
	}
	if (uParam1->f_112.f_374 & 128 != 0)
	{
		return true;
	}
	return false;
}

void func_4(var uParam0, var uParam1, var uParam2, var uParam3)
{
	uParam2->f_112.f_11 = uParam0->f_2;
	switch (*uParam0)
	{
		case 0:
			func_38(uParam0, uParam1, uParam2, uParam3);
			break;
		case 1:
			func_39(uParam0, uParam1, uParam2);
			break;
		case 2:
			func_40(uParam0, uParam1, uParam2);
			break;
		case 3:
			func_41(uParam0, uParam1, uParam2);
			break;
		case 4:
			func_42(uParam0, uParam1);
			break;
		case 5:
			func_43(uParam0, uParam1, uParam2);
			break;
		case 6:
			func_44(uParam0, uParam1, uParam2);
			break;
		case 7:
			break;
		default:
			func_45(uParam0, 0);
			break;
	}
}

void func_5(var uParam0, var uParam1, var uParam2)
{
	uParam2->f_112.f_11 = uParam0->f_2;
	switch (uParam1[uParam2->f_112.f_1])
	{
		case 0:
			func_46(uParam0, uParam1, uParam2);
			break;
		case 1:
			func_47(uParam0, uParam1, uParam2);
			break;
		case 2:
			func_48(uParam0, uParam1, uParam2);
			break;
		case 3:
			func_49(uParam0, uParam1, uParam2);
			break;
		case 4:
			func_50(uParam0, uParam1, uParam2);
			break;
		case 5:
			func_51(uParam0, uParam1, uParam2);
			break;
		case 6:
			func_52(uParam0, uParam1, uParam2);
			break;
		case 7:
			break;
		default:
			func_53(uParam1, uParam2, 0);
			break;
	}
	if (uParam2->f_112.f_374 & 64 != 0)
	{
		_0x236905c700fdb54d();
	}
	uParam2->f_112.f_374 = (uParam2->f_112.f_374 - uParam2->f_112.f_374 & 8);
	uParam2->f_112.f_374 = (uParam2->f_112.f_374 - uParam2->f_112.f_374 & 16);
}

void func_6(var uParam0)
{
	switch (uParam0->f_71)
	{
		case 0:
			func_54(uParam0, 1);
			break;
		case 1:
			if (!func_33(&(uParam0->f_112), 4))
			{
				return;
			}
			if (_0x3cf46f55c6585590())
			{
				return;
			}
			if (!_0x1840f3b30ed0105f(uParam0->f_112.f_428))
			{
				return;
			}
			func_54(uParam0, 2);
			break;
		case 2:
			if (_0x3cf46f55c6585590())
			{
				if (!_0x1431540bca1a1bd2())
				{
					return;
				}
			}
			func_55(&(uParam0->f_112), 4);
			func_54(uParam0, 1);
			break;
	}
}

void func_7(var uParam0, var uParam1, var uParam2)
{
	func_56(&(uParam0->f_7), &(uParam1->f_21), &(uParam2->f_112));
	func_57(&(uParam1->f_21), uParam2, 1);
	func_58(&(uParam2->f_112), 1);
	func_59(uParam2, 0);
	func_60(1, 2);
	set_everyone_ignore_player(uParam2->f_112.f_2, false);
	if (func_61(uParam2, 4))
	{
		_0x9428447ded71fc7e("RDRO_Death_Fail_Respawn_Scenes");
	}
	if (uParam2->f_63 != 0)
	{
		_0x00a15b94cba4f76f(uParam2->f_63);
		uParam2->f_63 = 0;
	}
	func_62();
	func_63(&(uParam2->f_112));
	func_64(&(uParam2->f_112));
	func_65(&(uParam2->f_112));
	func_66(&(uParam2->f_112));
	func_67(&(uParam2->f_19));
	_text_database_delete("UIC");
	if (_uiflowblock_is_loaded(uParam2->f_66))
	{
		_uiflowblock_release(&(uParam2->f_66));
	}
	if (uParam2->f_69 != -1)
	{
		release_sound_id(uParam2->f_69);
	}
	_0x531a78d6bf27014b(func_68());
	bVar1 = false;
	while (!bVar1)
	{
		bVar1 = true;
		if (iVar0 < 1)
		{
			bVar1 = false;
			func_69(&(uParam2->f_112), iVar0);
		}
		if (iVar0 < 1)
		{
			bVar1 = false;
			func_70(&(uParam2->f_112), iVar0);
		}
		if (iVar0 < 5)
		{
			bVar1 = false;
			func_71(&(uParam2->f_112), iVar0, 1);
		}
		if (iVar0 < 1)
		{
			bVar1 = false;
			func_72(&(uParam2->f_112), iVar0);
		}
		if (iVar0 < 1)
		{
			bVar1 = false;
			func_73(&(uParam2->f_112), iVar0);
		}
		if (iVar0 < 3)
		{
			bVar1 = false;
			func_74(&(uParam0->f_7), &(uParam2->f_112), iVar0);
		}
		if (iVar0 < 2)
		{
			bVar1 = false;
			func_75(&(uParam2->f_112), iVar0);
		}
		iVar0++;
	}
	func_76(16);
	func_77(0);
	func_78(0);
	if (func_79(uParam0, 32))
	{
		func_80(uParam2->f_18, uParam0->f_6);
	}
	else if (func_33(&(uParam2->f_112), 1))
	{
		if (func_33(&(uParam2->f_112), 2))
		{
			func_80(0, -1);
		}
		else if (uParam2->f_112.f_429 != -1)
		{
			func_80(uParam2->f_112.f_429, uParam2->f_112.f_430);
		}
		else
		{
			func_80(uParam2->f_18, uParam2->f_112.f_430);
		}
	}
}

void func_8()
{
	terminate_this_thread();
}

void func_9(int iParam0)
{
	iVar0 = 0;
	if (func_81() != -1)
	{
		iVar0 = 1;
	}
	Global_1900688->f_1 = 2;
	Global_1900688->f_2 = 0;
	Global_1900688->f_3 = iParam0;
	Global_1900688->f_7 = iVar0;
	func_82(Global_1900688->f_7, Global_1900688->f_3);
}

int func_10(var uParam0, var uParam1, var uParam2)
{
	return 1;
}

int func_11(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_83(uParam2, iVar0);
		iVar0++;
	}
	return 1;
}

int func_12(var uParam0, var uParam1, var uParam2)
{
	if (uParam0->f_2 == -1)
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 < 6)
		{
			iVar0 = iVar1;
			if (!_0xfbe782b3165ac8ec(func_84(iVar1)))
			{
			}
			else
			{
				iVar1++;
			}
		}
		if (iVar0 >= 5)
		{
			iVar0 = 4;
		}
		func_85(uParam0, iVar0);
		if (iVar0 == 0)
		{
			func_86(&(uParam0->f_7), 4);
		}
	}
	return 1;
}

int func_13(var uParam0, var uParam1, var uParam2)
{
	bVar1 = true;
	Var2.f_9 = -1591664384;
	switch (uParam1[uParam2->f_1])
	{
		case 0:
			func_87(9, 128);
			func_88(-2101264851);
			if (!_text_database_has_loaded("MPFT"))
			{
				if (!_0x3cf96e16265b7dc8("MPFT"))
				{
					_text_database_request("MPFT");
				}
			}
			uParam2->f_584 = func_89(uParam2->f_8);
			if (uParam2->f_584 == -1)
			{
				func_90(uParam2, 4002, -1);
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 1)
			{
				if (!func_92(uParam2, iVar0, func_91(uParam2->f_584, iVar0)))
				{
					bVar1 = false;
				}
				iVar0++;
			}
			func_93(&(uParam2->f_432.f_94), uParam2->f_2);
			func_94(uParam1, uParam2, 1);
			break;
		case 1:
			uParam2->f_584.f_1 = Global_1071686->f_28341.f_3;
			if (uParam2->f_584.f_1 == 0)
			{
				func_90(uParam2, 5002, -1);
				return 0;
			}
			uParam2->f_432.f_2 = { func_95(1, 0, 1, -1) };
			if (_0xb881ca836cc4b6d4(&(uParam2->f_432.f_2)))
			{
				func_94(uParam1, uParam2, 3);
			}
			else
			{
				func_94(uParam1, uParam2, 2);
			}
			break;
		case 2:
			if (!_0xb881ca836cc4b6d4(&(uParam2->f_432.f_2)))
			{
				if (!func_97(func_96(), &iVar17, &iVar18, -1591664384, 1))
				{
					func_90(uParam2, 5003, -1);
					return 0;
				}
				iVar16 = 0;
				while (iVar16 < iVar18)
				{
					if (!func_98(&Var2, iVar16, iVar17, iVar18))
					{
					}
					else if (!func_99(&Var2, 0))
					{
					}
					else
					{
						uParam2->f_432.f_2 = { Var2 };
					}
					else
					{
						iVar16++;
					}
				}
				if (!_0xb881ca836cc4b6d4(&(uParam2->f_432.f_2)))
				{
					func_100(get_hash_key("AWARD_HORSE_FAILSAFE"), 1, 255, 0, 0);
					func_90(uParam2, 5004, -1);
				}
				func_101(iVar17);
				return 0;
			}
			func_94(uParam1, uParam2, 3);
			break;
		case 3:
			iVar0 = 0;
			while (iVar0 < 1)
			{
				if (!func_92(uParam2, iVar0, func_91(uParam2->f_584, iVar0)))
				{
					bVar1 = false;
				}
				iVar0++;
			}
			if (bVar1)
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < 1)
				{
					func_102(uParam2, iVar0);
					iVar0++;
				}
				func_94(uParam1, uParam2, 4);
			}
			break;
		case 4:
			func_103(uParam2, 0);
			if (!func_104((*uParam1)[uParam2->f_1], 2))
			{
				uParam2->f_864 = { func_105(uParam2, 571023991, 0, 0) };
				uParam2->f_864.f_3 = func_106(uParam2, 159907910, 0, 0);
				uParam2->f_864.f_4 = { func_105(uParam2, -1507229176, 0, 0) };
				uParam2->f_864.f_7 = func_106(uParam2, -914908343, 0, 0);
			}
			if (!func_107(uParam2, -419233347, 0, 0))
			{
				func_90(uParam2, 5005, -1);
				return 0;
			}
			if (uParam2->f_431 == 0)
			{
				iVar20 = 0;
				while (iVar20 < 6)
				{
					if (!func_109(uParam2, func_108(iVar20)))
					{
						func_90(uParam2, func_110(iVar20), -1);
						return 0;
					}
					iVar20++;
				}
				iVar21 = 0;
				while (iVar21 < func_111(uParam2, -643640105, 0, 0))
				{
					if (uParam2->f_864.f_11 < 2)
					{
						uParam2->f_864.f_8[uParam2->f_864.f_11] = func_112(uParam2, 1819113895, iVar21, 0);
						if (&uParam2->f_864.f_8[uParam2->f_864.f_11] != 0)
						{
							uParam2->f_864.f_11++;
						}
					}
					iVar21++;
				}
			}
			if (uParam2->f_864.f_12 == 0)
			{
				bVar1 = false;
				uParam2->f_864.f_12 = func_113(uParam2->f_584.f_1);
				if (uParam2->f_864.f_12 == 0)
				{
					func_90(uParam2, func_114(uParam2->f_584.f_1), -1);
					return 0;
				}
				uParam2->f_864.f_13 = func_115(uParam2->f_864.f_12);
				if (uParam2->f_864.f_13 == 0)
				{
					func_90(uParam2, func_116(uParam2->f_864.f_12), -1);
					return 0;
				}
				uParam2->f_864.f_14 = func_112(uParam2, -87714106, uParam2->f_864.f_12, 0);
				if (uParam2->f_864.f_14 == 0)
				{
					func_90(uParam2, func_117(uParam2->f_864.f_12), -1);
					return 0;
				}
				iVar19 = func_112(uParam2, -1942696110, uParam2->f_864.f_12, 0);
				if (iVar19 == 0)
				{
					func_90(uParam2, func_118(uParam2->f_864.f_12), -1);
					return 0;
				}
				uParam2->f_864.f_15 = iVar19;
				uParam2->f_864.f_16 = { func_105(uParam2, -884101242, uParam2->f_864.f_12, 0) };
				if (func_119(uParam2->f_864.f_16))
				{
					func_90(uParam2, func_120(uParam2->f_864.f_12), -1);
					return 0;
				}
			}
			if (bVar1)
			{
				uParam2->f_432.f_67 = { func_121(uParam2->f_864.f_13) };
				if (uParam2->f_432.f_67.f_2 == 0)
				{
					func_90(uParam2, func_122(uParam2->f_864.f_12), -1);
					bVar1 = false;
				}
			}
			func_123(uParam1, uParam2, 2);
			uParam2->f_431++;
			if (bVar1)
			{
				if (func_124(uParam2->f_2, 0))
				{
					func_125();
				}
				func_94(uParam1, uParam2, 5);
			}
			break;
		case 5:
			if (!_text_database_has_loaded("MPFT"))
			{
				if (!_0x3cf96e16265b7dc8("MPFT"))
				{
					_text_database_request("MPFT");
				}
				return 0;
			}
			func_94(uParam1, uParam2, 6);
			break;
		case 6:
			if (func_124(uParam2->f_2, 0))
			{
				return 0;
			}
			if (_get_number_of_references_of_script_with_name_hash(226305067) > 0)
			{
				return 0;
			}
			func_126();
			func_127();
			func_128();
			func_129(0, uParam2->f_432.f_67);
			if (!func_130(uParam2->f_432.f_67, 0))
			{
				return 0;
			}
			func_94(uParam1, uParam2, 7);
			break;
		case 7:
			if (!func_131(uParam0, 4))
			{
				if (!func_124(uParam2->f_2, 0))
				{
				}
				else
				{
					func_132();
					uParam2->f_432.f_70 = { func_133() };
					uParam2->f_432.f_73 = func_134(_0x901e0dc25080c8b9(player_id()));
					func_135(uParam2->f_432.f_73);
					func_136(uParam2);
					func_94(uParam1, uParam2, 8);
					Jump @1572; //curOff = 1565
					return 1;
				}
				return 0;
			}
			default:
				break;
	}
}

int func_14(var uParam0, var uParam1, var uParam2)
{
	bVar0 = true;
	switch (uParam1[uParam2->f_1])
	{
		case 0:
			func_137(uParam2->f_5, 100f);
			func_138();
			func_132();
			func_66(uParam2);
			render_script_cams(false, false, 3000, true, false, 0);
			func_139(uParam2, 0);
			func_139(uParam2, 1);
			func_139(uParam2, 2);
			func_139(uParam2, 3);
			Var3.f_9 = 1;
			Var3.f_11 = -1591664384;
			func_140(&(uParam2->f_432.f_6));
			uParam2->f_432.f_16 = { Var3 };
			func_140(&(uParam2->f_432.f_32));
			uParam2->f_432.f_42 = { Var3 };
			func_87(9, 128);
			func_141(&(uParam2->f_432.f_58));
			func_142(0);
			func_143(0);
			func_139(uParam2, 4);
			func_123(uParam1, uParam2, 2);
			func_139(uParam2, 5);
			func_139(uParam2, 6);
			func_139(uParam2, 7);
			func_144(&(uParam2->f_432.f_94), uParam2->f_2);
			func_145();
			func_58(uParam2, 0);
			uParam2->f_432.f_86 = 0;
			func_94(uParam1, uParam2, 9);
			break;
		case 9:
			iVar2 = uParam2->f_431;
			if (iVar2 < uParam2->f_12)
			{
				bVar0 = false;
				if (func_146(uParam2, iVar2))
				{
					uParam2->f_431++;
				}
			}
			if (bVar0)
			{
				func_94(uParam1, uParam2, 10);
			}
			break;
		case 10:
			iVar19 = 0;
			while (iVar19 < 15)
			{
				bVar0 = true;
				if (uParam2->f_431 < 1)
				{
					bVar0 = false;
					func_147(uParam0, uParam2->f_431, 1);
				}
				if (uParam2->f_431 < 1)
				{
					bVar0 = false;
					func_148(uParam0, uParam2->f_431, 1);
				}
				if (uParam2->f_431 < 2)
				{
					bVar0 = false;
					func_149(uParam0, uParam2->f_431, 1);
				}
				if (uParam2->f_431 < 1)
				{
					bVar0 = false;
					func_150(uParam0, uParam2->f_431, 1);
				}
				if (uParam2->f_431 < 5)
				{
					bVar0 = false;
					func_71(uParam2, uParam2->f_431, 1);
				}
				if (uParam2->f_431 < 1)
				{
					bVar0 = false;
					func_72(uParam2, uParam2->f_431);
				}
				if (uParam2->f_431 < 1)
				{
					bVar0 = false;
					func_73(uParam2, uParam2->f_431);
				}
				if (uParam2->f_431 < 3)
				{
					bVar0 = false;
					func_151(uParam1, uParam2, uParam2->f_431);
					func_74(uParam0, uParam2, uParam2->f_431);
				}
				if (uParam2->f_431 < 1)
				{
					bVar0 = false;
					func_152(uParam0, uParam2->f_431);
				}
				uParam2->f_431++;
				if (bVar0)
				{
					func_94(uParam1, uParam2, 11);
				}
				else
				{
					iVar19++;
				}
			}
			break;
		case 11:
			if (does_entity_exist(uParam2->f_4))
			{
				func_153(uParam2->f_4);
				iVar1 = _0x1f714e7a9dadfc42(uParam2->f_4);
				if (does_entity_exist(iVar1))
				{
					if (!is_entity_a_mission_entity(iVar1))
					{
						set_entity_as_mission_entity(iVar1, true, false);
					}
					delete_entity(&iVar1);
				}
			}
			if (uParam2->f_12 <= 0)
			{
				uParam2->f_432.f_58.f_5 = { uParam2->f_864 };
				uParam2->f_432.f_58.f_8 = uParam2->f_864.f_3;
			}
			else if (uParam2->f_12 <= 1)
			{
				uParam2->f_432.f_58.f_5 = { uParam2->f_864.f_4 };
				uParam2->f_432.f_58.f_8 = uParam2->f_864.f_7;
				func_154(1, 0);
			}
			else
			{
				uParam2->f_432.f_58.f_5 = { uParam2->f_432.f_70 + Vector(0f, 1f, 1f) };
			}
			func_155(1);
			func_156(1);
			func_157();
			if (func_158(255))
			{
				if (func_159(255))
				{
					func_160(0, 0, 0, 0);
				}
				func_94(uParam1, uParam2, 12);
			}
			else
			{
				func_161(uParam2->f_432.f_58.f_5, uParam2->f_432.f_58.f_8, 1);
				func_94(uParam1, uParam2, 13);
			}
			break;
		case 12:
			if (func_158(255))
			{
				if (!func_162(uParam2->f_3))
				{
					return 0;
				}
			}
			else if (!func_162(uParam2->f_3))
			{
				func_163(48);
			}
			if (!func_164(uParam2->f_432.f_58.f_5, uParam2->f_432.f_58.f_8, 0f, 0f, 0f, 0))
			{
				return 0;
			}
			func_94(uParam1, uParam2, 13);
			break;
		case 13:
			if (uParam2->f_12 != 0 || vdist(uParam2->f_432.f_58.f_5, Global_35) > 20f)
			{
				if (func_158(255))
				{
					return 0;
				}
				else if (vdist(uParam2->f_432.f_58.f_5, Global_35) > 20f)
				{
					func_94(uParam1, uParam2, 11);
					return 0;
				}
			}
			func_94(uParam1, uParam2, 14);
			break;
		case 14:
			if (uParam2->f_12 >= 2)
			{
				if (!func_165(uParam2->f_2))
				{
					return 0;
				}
			}
			func_94(uParam1, uParam2, 15);
			break;
		case 15:
			if (!func_104((*uParam1)[uParam2->f_1], 2))
			{
				_0x4759cc730f947c81();
				_0x1ff00db43026b12f();
				func_136(uParam2);
				func_123(uParam1, uParam2, 2);
			}
			if (uParam2->f_12 != 0)
			{
				if (!_0x2701d01d5e18fc31())
				{
					bVar0 = false;
				}
				if (!_0x0ee3f0d7feccc54f())
				{
					bVar0 = false;
				}
			}
			if (bVar0)
			{
				func_94(uParam1, uParam2, 16);
			}
			break;
		case 16:
			func_166(&(uParam2->f_432.f_94), uParam2->f_2);
			return 1;
	}
	return 0;
}

void func_15(var uParam0, var uParam1, var uParam2)
{
}

void func_16(var uParam0, var uParam1, var uParam2)
{
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	func_167(uParam2, &(uParam2->f_584.f_2));
	if (uParam2->f_12 == 1)
	{
		if (((func_168(uParam2->f_432.f_92) || !uParam2->f_17) || func_169(uParam2)) || func_168(uParam2->f_432.f_94.f_43))
		{
			uParam2->f_432.f_93 = uParam2->f_14;
		}
		else if (func_170(uParam2, 12))
		{
			uParam2->f_432.f_92 = func_171("MPFT_HELP_HORSE_DEAD_RESPAWN", 10000, 0, 0, 0, 1);
			func_139(uParam2, 12);
			return;
		}
		else if (_network_is_player_index_valid(uParam2->f_2) && !does_entity_exist(_0xf49f14462f0ae27c(uParam2->f_2)))
		{
			if (absi(get_time_difference(uParam2->f_432.f_93, uParam2->f_14)) >= 30000)
			{
				uParam2->f_432.f_92 = func_171("MPFT_HELP_HORSE_WHISTLE_RESPAWN", 10000, 0, 0, 0, 1);
				return;
			}
		}
		else
		{
			uParam2->f_432.f_93 = uParam2->f_14;
		}
	}
	if (uParam2->f_17)
	{
		if (func_172(&(uParam2->f_432.f_94), uParam2->f_2, uParam2->f_4))
		{
			func_173(uParam2);
		}
		if (func_168(uParam2->f_432.f_94.f_43))
		{
			func_174(uParam2);
		}
	}
	else
	{
		func_87(9, 128);
	}
}

int func_17(var uParam0, var uParam1, var uParam2)
{
	if (uParam2->f_375 == -940387254)
	{
		if (is_entity_dead(uParam2->f_4))
		{
			return 0;
		}
	}
	else if (func_104((*uParam1)[uParam2->f_1], 8))
	{
		return 1;
	}
	else if (func_170(uParam2, 4))
	{
		if (absi(get_time_difference(uParam2->f_432.f_90, uParam2->f_14)) > 3000)
		{
			return 2;
		}
	}
	return -1;
}

void func_18(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	uParam0->f_72 = iParam1;
	uParam0->f_73 = iParam2;
	uParam0->f_74 = iParam3;
	uParam0->f_75 = iParam4;
	uParam0->f_76 = iParam5;
	uParam0->f_77 = iParam6;
	uParam0->f_78 = iParam7;
	uParam0->f_79 = iParam8;
	uParam0->f_80 = iParam9;
	uParam0->f_17 = iParam10;
	uParam0->f_18 = iParam11;
}

int func_19(var uParam0, var uParam1, var uParam2)
{
	switch (uParam1[uParam2->f_1])
	{
		case 0:
			func_175(9, 128);
			if (!func_124(uParam2->f_2, 0))
			{
				return 0;
			}
			func_132();
			uParam2->f_432.f_70 = { func_133() };
			uParam2->f_432.f_73 = func_134(_0x901e0dc25080c8b9(player_id()));
			func_135(uParam2->f_432.f_73);
			func_136(uParam2);
			func_144(&(uParam2->f_432.f_94), uParam2->f_2);
			iVar0 = 0;
			while (iVar0 < uParam2->f_864.f_11)
			{
				if (door_system_get_door_state(&(uParam2->f_864.f_8[iVar0])) == 0)
				{
				}
				else
				{
					door_system_set_door_state(&(uParam2->f_864.f_8[iVar0]), 0);
				}
				iVar0++;
			}
			shutdown_loading_screen();
			func_94(uParam1, uParam2, 17);
			break;
		case 17:
			if (func_158(255))
			{
				return 0;
			}
			if (!func_176())
			{
				return 0;
			}
			if (!is_screen_faded_in())
			{
				return 0;
			}
			func_94(uParam1, uParam2, 18);
			break;
		case 18:
			if (!func_177(9))
			{
				func_87(9, 128);
				return func_178(&(uParam2->f_584.f_2), 0, 0);
			}
			break;
	}
	return 0;
}

void func_20(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam1 <= -1 || iParam1 >= 6)
	{
		return;
	}
	uParam0->f_81[iParam1] = func_179(0, (iParam1 - 1));
	uParam0->f_81[iParam1]->f_1 = func_180(6, iParam1 + 1);
	uParam0->f_81[iParam1]->f_2 = iParam2;
	uParam0->f_81[iParam1]->f_3 = iParam3;
	uParam0->f_81[iParam1]->f_4 = iParam4;
}

int func_21(var uParam0, var uParam1, var uParam2)
{
	func_181(uParam0, uParam1, uParam2);
	switch (uParam1[uParam2->f_1])
	{
		case 0:
			if (!func_104((*uParam1)[uParam2->f_1], 2))
			{
				Var0.f_6 = { uParam2->f_864.f_4 };
				Var0 = uParam2->f_864.f_7;
				func_182(uParam2, &Var0, 5);
				func_63(uParam2);
				func_72(uParam2, 0);
				func_58(uParam2, 1);
				func_183(uParam2, 0, uParam2->f_864.f_14);
				func_184(uParam2, &(uParam2->f_113[0]), -1538856553, 0, 1);
				func_166(&(uParam2->f_432.f_94), uParam2->f_2);
				func_123(uParam1, uParam2, 2);
			}
			if (func_185(uParam1, uParam2, 19, 0))
			{
				func_186(uParam2);
			}
			break;
		case 19:
			func_187(uParam0, uParam1, uParam2);
			func_188(uParam0, uParam2);
			func_189(uParam2, -1571873137, -1, 0, 0);
			if (!func_170(uParam2, 5))
			{
				func_190(uParam2, 192763213, 10000, 0, 0);
				func_191(uParam2, 5);
			}
			else if (!func_170(uParam2, 6))
			{
				if (!func_192(uParam2, 192763213))
				{
					func_190(uParam2, -1512686022, 10000, 0, 0);
					func_191(uParam2, 6);
				}
			}
			else if (!func_170(uParam2, 7))
			{
				if (func_192(uParam2, -1512686022))
				{
					uParam2->f_432.f_91 = uParam2->f_14;
				}
				else if (absi(get_time_difference(uParam2->f_432.f_91, uParam2->f_14)) > 5000)
				{
					func_190(uParam2, 1253851150, 10000, 0, 0);
					func_191(uParam2, 7);
				}
			}
			else if (func_170(uParam2, 7) && !func_170(uParam2, 8))
			{
				if (func_192(uParam2, 1253851150))
				{
					uParam2->f_432.f_91 = uParam2->f_14;
				}
				else if (absi(get_time_difference(uParam2->f_432.f_91, uParam2->f_14)) > 5000)
				{
					func_190(uParam2, -308865274, 10000, 0, 0);
					func_191(uParam2, 8);
				}
			}
			else if (func_170(uParam2, 8) && !func_170(uParam2, 9))
			{
				if (func_192(uParam2, -308865274))
				{
					uParam2->f_432.f_91 = uParam2->f_14;
				}
				else if (absi(get_time_difference(uParam2->f_432.f_91, uParam2->f_14)) > 5000)
				{
					func_190(uParam2, 789742911, 10000, 0, 0);
					func_191(uParam2, 9);
				}
			}
			if (func_193(uParam2->f_5, uParam2->f_432.f_70) < 4f)
			{
				func_64(uParam2);
				func_69(uParam2, 0);
				return func_178(&(uParam2->f_584.f_2), 1, 0);
			}
			break;
	}
	return 0;
}

bool func_22(var uParam0, var uParam1, var uParam2)
{
	func_194(1, 0, 1);
	switch (uParam1[uParam2->f_1])
	{
		case 0:
			func_195(uParam2);
			if (func_188(uParam0, uParam2))
			{
				if (_is_loading_screen_active())
				{
					shutdown_loading_screen();
					return false;
				}
				func_196(uParam2->f_432.f_67, &fVar0);
				vVar1 = { func_198(func_197(fVar0)) };
				func_199(uParam0, uParam2, 1, uParam2->f_432.f_70, vVar1, 2);
				iVar4 = func_200(uParam0, 0);
				func_201(uParam0, uParam2, 1, "p_stoolfolding01x", iVar4, 0);
				iVar4 = func_200(uParam0, 1);
				func_201(uParam0, uParam2, 1, "p_harmonica01x", iVar4, 0);
				if (is_ped_male(uParam2->f_4))
				{
					func_201(uParam0, uParam2, 1, "mp_player_m_1", uParam2->f_4, 0);
				}
				else
				{
					func_201(uParam0, uParam2, 1, "mp_player_f_1", uParam2->f_4, 0);
				}
				func_201(uParam0, uParam2, 1, "JB_Cripps", uParam2->f_432.f_74, 0);
				if (func_202(uParam2->f_4, get_mount(uParam2->f_4), 1080033280))
				{
					iVar5 = _0xf49f14462f0ae27c(uParam2->f_2);
					if (func_203(iVar5, 0))
					{
						uParam2->f_432.f_82 = { get_entity_coords(iVar5, true, false) };
						uParam2->f_432.f_82.f_3 = get_entity_heading(iVar5);
					}
					else
					{
						uParam2->f_432.f_82.f_3 = 0f;
						uParam2->f_432.f_82 = { 0f, 0f, 0f };
					}
					func_153(uParam2->f_4);
					if (func_204(uParam0, uParam1, uParam2, 1, 1))
					{
						func_205(uParam2->f_4, 0);
						func_74(uParam0, uParam2, 0);
						func_144(&(uParam2->f_432.f_94), uParam2->f_2);
						func_206(get_entity_coords(uParam2->f_4, true, false), 30f, 0);
						func_94(uParam1, uParam2, 20);
					}
				}
			}
			break;
		case 20:
			func_207(uParam2, -1, -1, 0, 17, 1, 1);
			_0xc9caeaeec1256e54(724769646);
			_0x2804658eb7d8a50b(4, 621422181);
			if (!func_104((*uParam1)[uParam2->f_1], 2))
			{
				set_current_ped_weapon(uParam2->f_432.f_74, -1569615261, false, 0, false, false);
				_0x67e21acc5c0c970c(uParam2->f_432.f_74, 16, 0);
				_0x67e21acc5c0c970c(uParam2->f_432.f_74, 9, 0);
				_0x67e21acc5c0c970c(uParam2->f_432.f_74, 18, 0);
				_0x67e21acc5c0c970c(uParam2->f_432.f_74, 10, 0);
				func_123(uParam1, uParam2, 2);
			}
			if (absi(get_time_difference(uParam2->f_13, uParam2->f_14)) >= 500)
			{
				func_208(uParam2, 1);
			}
			if (func_203(_0xf49f14462f0ae27c(uParam2->f_2), 0))
			{
				set_entity_visible(_0xf49f14462f0ae27c(uParam2->f_2), false);
				func_209(2);
			}
			func_210(2000);
			if (!func_211(uParam0, uParam2, 1, 0.975f))
			{
				return false;
			}
			if (!is_screen_fading_out())
			{
				do_screen_fade_out(2000);
			}
			func_94(uParam1, uParam2, 21);
			break;
		case 21:
			if (is_screen_faded_out())
			{
				_0x4f806a6cfed89468(uParam2->f_432.f_74, 1);
				set_current_ped_weapon(uParam2->f_432.f_74, -1569615261, false, 0, false, false);
				_0x67e21acc5c0c970c(uParam2->f_432.f_74, 16, 1);
				_0x67e21acc5c0c970c(uParam2->f_432.f_74, 9, 1);
				_0x67e21acc5c0c970c(uParam2->f_432.f_74, 18, 1);
				_0x67e21acc5c0c970c(uParam2->f_432.f_74, 10, 1);
				func_74(uParam0, uParam2, 1);
				return func_178(&(uParam2->f_584.f_2), 2, 0);
			}
			else if (!is_screen_fading_out())
			{
				do_screen_fade_out(2000);
			}
			break;
	}
	return false;
}

bool func_23(var uParam0, var uParam1, var uParam2)
{
	iVar0 = _0xf49f14462f0ae27c(uParam2->f_2);
	bVar1 = true;
	func_194(1, 0, 1);
	_0x2804658eb7d8a50b(4, 621422181);
	func_207(uParam2, -1, -1, 0, 17, 1, 0);
	switch (uParam1[uParam2->f_1])
	{
		case 0:
			func_195(uParam2);
			if (!func_212(uParam0, uParam2, 2, "script@MPSTORY@MPINTRO@FM_TUTORIAL@INTRO_BINK", 16386, "PBL_1", 0, 1, 1))
			{
				return false;
			}
			if (!func_213(uParam0, uParam2, 2))
			{
				return false;
			}
			if (is_ped_male(get_player_ped(get_player_index())))
			{
				func_201(uParam0, uParam2, 2, "mp_player_m_1", get_player_ped(get_player_index()), 0);
			}
			else
			{
				func_201(uParam0, uParam2, 2, "mp_player_f_1", get_player_ped(get_player_index()), 0);
			}
			if (_is_loading_screen_active())
			{
				shutdown_loading_screen();
				return false;
			}
			if (func_204(uParam0, uParam1, uParam2, 2, 1))
			{
				iVar4 = func_200(uParam0, 0);
				vVar8 = { get_entity_rotation(iVar4, 2) };
				vVar8.f_2 = (vVar8.z + 180f);
				set_entity_rotation(iVar4, vVar8, 2, true);
				func_144(&(uParam2->f_432.f_94), uParam2->f_2);
				func_55(uParam2, 8);
				func_94(uParam1, uParam2, 22);
			}
			break;
		case 22:
			func_214(uParam0, uParam2);
			if (!func_104((*uParam1)[uParam2->f_1], 2))
			{
				bVar1 = false;
				_0x65f040d91001ed4b(0);
				clear_override_weather();
				func_215(1);
				func_216();
				func_217();
				func_123(uParam1, uParam2, 2);
			}
			func_210(2000);
			if (!func_170(uParam2, 11))
			{
				if (!func_218(uParam2, 0, uParam2->f_864.f_15, uParam2->f_864.f_16, 1f))
				{
				}
				else if (!does_entity_exist(iVar0))
				{
					iVar0 = func_219(_get_scenario_point_coords(&(uParam2->f_37[0]), true), _get_scenario_point_heading(&(uParam2->f_37[0]), true), 0, 0, 1, 100, 0, 1);
				}
				else
				{
					clear_ped_tasks_immediately(iVar0, false, true);
					_task_use_scenario_point(iVar0, &(uParam2->f_37[0]), 0, -1, false, true, 0, false, -1f, false);
					set_ped_keep_task(iVar0, true);
					func_191(uParam2, 11);
				}
			}
			if (!_does_scenario_point_exist(iVar2))
			{
				iVar2 = _find_closest_active_scenario_point_of_type(func_220(get_player_index()), -812435375, 50f, 0, false);
			}
			if (!_does_scenario_point_exist(iVar3))
			{
				iVar3 = _find_closest_active_scenario_point_of_type(func_220(get_player_index()), 315567675, 50f, 0, false);
			}
			if (!_does_scenario_point_exist(iVar2) || !_does_scenario_point_exist(iVar3))
			{
				return false;
			}
			if (!_0x9c54041bb66bcf9e(uParam2->f_4, iVar2))
			{
				if (is_ped_male(uParam2->f_4))
				{
					_task_use_scenario_point(uParam2->f_4, iVar2, "PROP_HUMAN_SEAT_CHAIR_GENERIC_MALE_A", 0, false, true, -812435375, false, -1f, true);
				}
				else
				{
					_task_use_scenario_point(uParam2->f_4, iVar2, "PROP_HUMAN_SEAT_CHAIR_GENERIC_FEMALE_A", 0, false, true, -812435375, false, -1f, true);
				}
			}
			if (!_0x9c54041bb66bcf9e(uParam2->f_432.f_74, iVar3))
			{
				clear_ped_tasks_immediately(uParam2->f_432.f_74, false, true);
				vVar5 = { _get_scenario_point_coords(iVar3, true) + Vector(0f, -0.25f, 0f) };
				set_entity_coords(uParam2->f_432.f_74, vVar5, true, false, true, true);
				_task_use_scenario_point(uParam2->f_432.f_74, iVar3, "", 0, false, true, 0, false, -1f, false);
				set_ped_keep_task(uParam2->f_432.f_74, true);
			}
			if (!bVar1)
			{
			}
			else if (func_211(uParam0, uParam2, 2, 0.93f))
			{
				do_screen_fade_out(2000);
				if (!func_170(uParam2, 11) && does_entity_exist(iVar0))
				{
					_0x06aade17334f7a40(iVar0, uParam2->f_864.f_16);
				}
				func_63(uParam2);
				func_94(uParam1, uParam2, 23);
			}
			break;
		case 23:
			if (is_screen_faded_out())
			{
				func_74(uParam0, uParam2, 2);
				return func_178(&(uParam2->f_584.f_2), 3, 0);
			}
			else if (!is_screen_fading_out())
			{
				do_screen_fade_out(2000);
			}
			break;
	}
	return false;
}

bool func_24(var uParam0, var uParam1, var uParam2)
{
	switch (uParam1[uParam2->f_1])
	{
		case 0:
			func_221(uParam2, 4);
			func_222(uParam2->f_432.f_73);
			func_142(0);
			func_143(0);
			func_63(uParam2);
			if (!func_178(&(uParam2->f_584.f_2), 4, 1))
			{
				return false;
			}
			if (!func_178(&(uParam2->f_584.f_2), 5, 1))
			{
				return false;
			}
			if (func_185(uParam1, uParam2, 24, 0))
			{
				enable_control_action(0, -2131587435, true);
				func_126();
				clear_ped_tasks(uParam2->f_4, 1, 0);
				func_60(1, 2);
				func_190(uParam2, -139084428, 10000, 0, 0);
				func_144(&(uParam2->f_432.f_94), uParam2->f_2);
				func_186(uParam2);
				func_94(uParam1, uParam2, 24);
			}
			break;
		case 24:
			func_189(uParam2, 1878162598, -1, 0, 0);
			if (_is_app_active(1433015236))
			{
				func_94(uParam1, uParam2, 25);
			}
			else if (vdist(uParam2->f_432.f_70, uParam2->f_5) > 40f)
			{
				func_94(uParam1, uParam2, 25);
			}
			else if (absi(get_time_difference(uParam2->f_13, uParam2->f_14)) > 120000)
			{
				func_94(uParam1, uParam2, 25);
			}
			break;
		case 25:
			if (!func_104((*uParam1)[uParam2->f_1], 2))
			{
				func_64(uParam2);
				func_123(uParam1, uParam2, 2);
			}
			if (is_entity_dead(uParam2->f_4))
			{
			}
			else if (func_158(255))
			{
			}
			else
			{
				func_223(uParam0, uParam2);
				func_224(16);
				func_64(uParam2);
				func_94(uParam1, uParam2, 26);
			}
			break;
		case 26:
			func_225(2048);
			return func_178(&(uParam2->f_584.f_2), 4, 0);
	}
	return false;
}

int func_25(var uParam0, var uParam1, var uParam2)
{
	switch (uParam1[uParam2->f_1])
	{
		case 0:
			if (!func_104((*uParam1)[uParam2->f_1], 2))
			{
				clear_ped_tasks(uParam2->f_4, 1, 0);
				func_123(uParam1, uParam2, 2);
			}
			if (!func_178(&(uParam2->f_584.f_2), 5, 1))
			{
				return 0;
			}
			if (func_185(uParam1, uParam2, 27, 0))
			{
				func_144(&(uParam2->f_432.f_94), uParam2->f_2);
				func_186(uParam2);
			}
			break;
		case 27:
			if (!func_226(uParam2->f_8))
			{
				return 0;
			}
			func_227(uParam2);
			func_94(uParam1, uParam2, 28);
			break;
		case 28:
			if (_0x277865a734918ae6())
			{
			}
			else
			{
				func_228(757, 1);
				func_229(32);
				func_55(uParam2, 64);
				func_230(0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_26(var uParam0, int iParam1)
{
	if (func_33(uParam0, iParam1))
	{
		return;
	}
	uParam0->f_374 = (uParam0->f_374 || iParam1);
}

struct<2> func_27(int iParam0)
{
	if (!func_231(iParam0))
	{
		return func_232();
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_28(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_8();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_29()
{
	iVar0 = network_get_script_status();
	iVar1 = get_game_timer();
	iVar2 = network_get_timeout_time();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (get_game_timer() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((get_game_timer() - iVar1) > 300000)
		{
			func_8();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_8();
					break;
				case 2:
					func_8();
					break;
				case 4:
					func_8();
					break;
				case 3:
					func_8();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_8();
		}
		if (!network_is_game_in_progress())
		{
			func_8();
		}
		if (!network_is_signed_online())
		{
			func_8();
		}
		if (func_81() == 0)
		{
			if (func_233())
			{
				func_8();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_8();
	}
	return 1;
}

bool func_30()
{
	if (Global_1572887->f_9)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	return false;
}

int func_31(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_32(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

bool func_33(var uParam0, int iParam1)
{
	return (uParam0->f_374 && iParam1) != 0;
}

void func_34(bool bParam0)
{
	iVar0 = (_get_system_time() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			_0x236905c700fdb54d();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_8();
					break;
				case 2:
					func_8();
					break;
				case 4:
					func_8();
					break;
				case 3:
					func_8();
					break;
				default:
					break;
			}
		}
		if (!network_is_game_in_progress())
		{
			return;
		}
		if (network_is_host_of_this_script())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (_0x5d10b3795f3fc886())
		{
			return;
		}
		if (_get_system_time() >= iVar0)
		{
			func_8();
			return;
		}
		wait(0);
	}
}

bool func_35(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

void func_36(var uParam0, int iParam1)
{
	if (func_79(uParam0, iParam1))
	{
		return;
	}
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_37(bool bParam0, bool bParam1)
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

void func_38(var uParam0, var uParam1, var uParam2, var uParam3)
{
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = int_to_playerindex(iVar1);
		if (!network_is_player_connected(iVar2))
		{
		}
		else if (!network_is_player_a_participant(iVar2))
		{
			bVar0 = false;
		}
		else
		{
			iVar3 = network_get_participant_index(iVar2);
			if (!network_is_participant_active(iVar3))
			{
				bVar0 = false;
			}
			else if (!func_234((*uParam1)[iVar3], 1))
			{
				bVar0 = false;
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		return;
	}
	uParam0->f_3 = *uParam3;
	if (func_235(uParam2, 4))
	{
		_0x31010318ba9897ac(&uVar4, uParam2->f_112.f_3);
		if (func_236() == 109)
		{
			func_45(uParam0, 3);
		}
		else if (_0x277865a734918ae6() && network_get_num_connected_players() == 1)
		{
			func_45(uParam0, 3);
		}
		else if (_0xe404bff0aba23cdc(&uVar4))
		{
			func_45(uParam0, 1);
		}
		else
		{
			func_90(&(uParam2->f_112), 2001, -1);
		}
	}
	else if (_0x277865a734918ae6())
	{
		func_45(uParam0, 3);
	}
	else if (network_session_is_private())
	{
		func_45(uParam0, 3);
	}
	else
	{
		func_45(uParam0, 1);
	}
}

void func_39(var uParam0, var uParam1, var uParam2)
{
	if (!network_is_player_active(uParam0->f_4) || !network_is_player_a_participant(uParam0->f_4))
	{
		uParam0->f_4 = 255;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!func_237(iVar0, &uVar1, &uVar2))
			{
			}
			else if (func_234((*uParam1)[iVar0], 2))
			{
			}
			else
			{
				uParam0->f_4 = uVar2;
			}
			else
			{
				iVar0++;
			}
		}
		if (uParam0->f_4 == 255)
		{
			func_238(uParam0, 2000);
			func_45(uParam0, 7);
			return;
		}
	}
	iVar0 = network_get_participant_index(uParam0->f_4);
	if (func_234((*uParam1)[iVar0], 4))
	{
		if (func_235(uParam2, 4))
		{
			if (network_get_num_participants() > 1)
			{
				return;
			}
		}
		if (_0x277865a734918ae6())
		{
			func_45(uParam0, 3);
		}
		else
		{
			uParam0->f_4 = 255;
		}
	}
	else if (func_234((*uParam1)[iVar0], 2))
	{
		uParam0->f_4 = 255;
	}
}

void func_40(var uParam0, var uParam1, var uParam2)
{
	Stack.Push(&(uParam0->f_7));
	Stack.Push(&(uParam1->f_21));
	Stack.Push(&(uParam2->f_112));
	Call_Loc(uParam2->f_72);
	if (!StackVal)
	{
		return;
	}
	bVar0 = true;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (!func_237(iVar3, &uVar1, &uVar2))
		{
		}
		else
		{
			if (uParam1[iVar3] != 2)
			{
				bVar0 = false;
			}
			if (!func_234((*uParam1)[iVar3], 8))
			{
				bVar0 = false;
			}
		}
		iVar3++;
	}
	if (!bVar0)
	{
		return;
	}
	func_85(uParam0, -1);
	func_45(uParam0, 3);
}

void func_41(var uParam0, var uParam1, var uParam2)
{
	bVar0 = true;
	Stack.Push(uParam0);
	Stack.Push(&(uParam1->f_21));
	Stack.Push(&(uParam2->f_112));
	Call_Loc(uParam2->f_74);
	if (!StackVal)
	{
		return;
	}
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (!func_237(iVar3, &uVar1, &uVar2))
		{
		}
		else
		{
			if (uParam1[iVar3] != 3)
			{
				bVar0 = false;
			}
			if (!func_234((*uParam1)[iVar3], 16))
			{
				bVar0 = false;
			}
		}
		iVar3++;
	}
	if (!bVar0)
	{
		return;
	}
	if (func_235(uParam2, 1))
	{
		func_36(uParam0, 4);
	}
	if (func_79(uParam0, 64))
	{
		func_36(uParam0, 4);
	}
	if (func_79(uParam0, 4))
	{
		func_45(uParam0, 5);
	}
	else
	{
		func_45(uParam0, 6);
	}
	func_36(uParam0, 4);
}

void func_42(var uParam0, var uParam1)
{
	bVar3 = true;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (!func_237(iVar2, &uVar0, &uVar1))
		{
		}
		else
		{
			if (uParam1[iVar2] != 4)
			{
				bVar3 = false;
			}
			if ((*uParam1)[iVar2]->f_2 != 4)
			{
				bVar3 = false;
			}
			if (func_234((*uParam1)[iVar2], 256))
			{
			}
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return;
	}
	func_45(uParam0, 5);
}

void func_43(var uParam0, var uParam1, var uParam2)
{
	Stack.Push(&(uParam0->f_7));
	Stack.Push(&(uParam1->f_21));
	Stack.Push(&(uParam2->f_112));
	Call_Loc(uParam2->f_78);
	Stack.Push(&(uParam0->f_7));
	Stack.Push(&(uParam1->f_21));
	Stack.Push(&(uParam2->f_112));
	Call_Loc(uParam2->f_76);
	if (!StackVal)
	{
		return;
	}
	bVar0 = true;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (!func_237(iVar3, &uVar1, &uVar2))
		{
		}
		else
		{
			if (uParam1[iVar3] != 5)
			{
				bVar0 = false;
			}
			if (!func_234((*uParam1)[iVar3], 64))
			{
				bVar0 = false;
			}
		}
		iVar3++;
	}
	if (!bVar0)
	{
		return;
	}
	func_45(uParam0, 6);
}

void func_44(var uParam0, var uParam1, var uParam2)
{
	Stack.Push(&(uParam0->f_7));
	Stack.Push(&(uParam1->f_21));
	Stack.Push(&(uParam2->f_112));
	Call_Loc(uParam2->f_78);
	Stack.Push(&(uParam0->f_7));
	Stack.Push(&(uParam1->f_21));
	Stack.Push(&(uParam2->f_112));
	Call_Loc(uParam2->f_81[uParam0->f_2]->f_2);
	Stack.Push(&(uParam0->f_7));
	Stack.Push(&(uParam1->f_21));
	Stack.Push(&(uParam2->f_112));
	Call_Loc(uParam2->f_80);
	uParam0->f_5 = StackVal;
	if (uParam0->f_5 != -1)
	{
		func_45(uParam0, 4);
		return;
	}
	iVar4 = 255;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_237(iVar0, &uVar5, &iVar6))
		{
		}
		else
		{
			_0x1bdb5a07307f6929(&uVar1, iVar0);
			if (uParam1[iVar0] != 6)
			{
			}
			else
			{
				switch ((*uParam1)[iVar0]->f_3)
				{
					case 0:
						if ((*uParam1)[iVar0]->f_4 == uParam0->f_2)
						{
							if (func_234((*uParam1)[iVar0], 128))
							{
								_0x1bdb5a07307f6929(&uVar3, iVar0);
							}
							else if (func_234((*uParam1)[iVar0], 512))
							{
								iVar4 = iVar6;
							}
						}
						break;
					case 1:
						break;
					case 2:
						break;
					case 3:
						_0x1bdb5a07307f6929(&uVar2, iVar0);
						break;
					default:
						break;
				}
			}
		}
		iVar0++;
	}
	_0x42a429cdfed6d99d(&uVar1, &uVar2, &uVar7);
	if (!_0xa88e1d7fa1e20080(&uVar7))
	{
		func_85(uParam0, uParam2->f_81[uParam0->f_2]->f_1);
		func_45(uParam0, 5);
		return;
	}
	_0x42a429cdfed6d99d(&uVar1, &uVar3, &uVar7);
	if (!_0xa88e1d7fa1e20080(&uVar7))
	{
		if (uParam2->f_81[uParam0->f_2]->f_1 == 6)
		{
			func_45(uParam0, 7);
		}
		else
		{
			func_85(uParam0, uParam2->f_81[uParam0->f_2]->f_1);
			if (func_239(uParam2, uParam0->f_2, 1))
			{
				func_45(uParam0, 5);
			}
		}
		return;
	}
	if (iVar4 != 255)
	{
		func_85(uParam0, uParam2->f_81[uParam0->f_2]->f_1);
		func_45(uParam0, 5);
		return;
	}
}

void func_45(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_240(uParam0, 8);
	func_241(&(uParam0->f_7), 0);
}

void func_46(var uParam0, var uParam1, var uParam2)
{
	if (!func_242(uParam2->f_112.f_3))
	{
		func_243(uParam2, 16);
	}
	if (func_61(uParam2, 16))
	{
		if (func_158(255))
		{
			return;
		}
		func_244(uParam2, 16);
	}
	if (!_text_database_has_loaded("UIC"))
	{
		_text_database_request("UIC");
		return;
	}
	if (uParam2->f_66 == 0)
	{
		uParam2->f_66 = _uiflowblock_request(-1536154840);
	}
	if (!_uiflowblock_is_loaded(uParam2->f_66))
	{
		return;
	}
	func_245(uParam1, &(uParam2->f_112), 1);
	if (*uParam0 <= 0)
	{
		return;
	}
	uVar0 = _databinding_add_data_container_from_path("", "centralInfoDatastore");
	uParam2->f_67 = _databinding_add_data_bool(uVar0, "isVisible", 0);
	uVar0 = _databinding_add_data_container_from_path("", "MPCountdown");
	uParam2->f_68 = _databinding_add_data_string(uVar0, "Timer", "");
	func_53(uParam1, uParam2, 1);
}

void func_47(var uParam0, var uParam1, var uParam2)
{
	if (*uParam0 == 7)
	{
		func_53(uParam1, uParam2, 7);
		return;
	}
	else if (*uParam0 > 1)
	{
		func_53(uParam1, uParam2, 3);
		return;
	}
	if (!func_235(uParam2, 4))
	{
		if (uParam2->f_112.f_2 != uParam0->f_4)
		{
			return;
		}
	}
	switch (uParam2->f_1)
	{
		case 0:
			uParam2->f_10.f_2 = 1;
			uParam2->f_10 = -2;
			uParam2->f_10.f_4 = 4;
			if (func_235(uParam2, 4))
			{
				_0x31010318ba9897ac(&uVar0, uParam2->f_112.f_3);
				uParam2->f_10.f_1 = uVar0;
			}
			else
			{
				uParam2->f_10.f_1 = func_246(4, 8);
			}
			func_247(uParam2, 1);
			break;
		case 1:
			if (!func_248(uParam2->f_10))
			{
				return;
			}
			func_247(uParam2, 2);
			break;
		case 2:
			if (func_249())
			{
				return;
			}
			if (_0x277865a734918ae6())
			{
				func_245(uParam1, &(uParam2->f_112), 4);
				func_247(uParam2, 3);
			}
			else
			{
				uParam2->f_2++;
				if (uParam2->f_2 >= 3)
				{
					func_245(uParam1, &(uParam2->f_112), 2);
					func_247(uParam2, 3);
				}
				else
				{
					func_247(uParam2, 1);
				}
			}
			break;
		case 3:
			break;
		default:
			func_247(uParam2, 0);
			break;
	}
}

void func_48(var uParam0, var uParam1, var uParam2)
{
	Stack.Push(&(uParam0->f_7));
	Stack.Push(&(uParam1->f_21));
	Stack.Push(&(uParam2->f_112));
	Call_Loc(uParam2->f_73);
	if (!StackVal)
	{
		return;
	}
	func_245(uParam1, &(uParam2->f_112), 8);
	if (*uParam0 <= 2)
	{
		return;
	}
	func_250(uParam1, &(uParam2->f_112), 8);
	func_251(uParam1, uParam2, -1);
	uParam2->f_112.f_8 = -1;
	func_252(&(uParam2->f_112.f_9));
	func_53(uParam1, uParam2, 3);
}

void func_49(var uParam0, var uParam1, var uParam2)
{
	if (!func_234((*uParam1)[uParam2->f_112.f_1], 16))
	{
		Stack.Push(&(uParam0->f_7));
		Stack.Push(&(uParam1->f_21));
		Stack.Push(&(uParam2->f_112));
		Call_Loc(uParam2->f_75);
		if (!StackVal)
		{
			return;
		}
		func_245(uParam1, &(uParam2->f_112), 16);
	}
	if (*uParam0 <= 3)
	{
		return;
	}
	func_77(1);
	func_195(&(Local_109.f_112));
	func_250(uParam1, &(uParam2->f_112), 16);
	uParam2->f_112.f_8 = uParam0->f_3;
	uParam2->f_112.f_9 = { func_253(uParam2->f_112.f_8) };
	func_251(uParam1, uParam2, uParam0->f_2);
	if (*uParam0 == 6)
	{
		if ((*uParam1)[uParam2->f_112.f_1]->f_4 == uParam0->f_2)
		{
			func_53(uParam1, uParam2, 6);
		}
		else
		{
			func_53(uParam1, uParam2, 5);
		}
	}
	else
	{
		func_53(uParam1, uParam2, 5);
	}
}

void func_50(var uParam0, var uParam1, var uParam2)
{
	_0x55f37f5f3f2475e1();
	_set_bounty_for_player(uParam2->f_112.f_2, 0);
	set_pad_shake(0, 0, 0);
	_0x2804658eb7d8a50b(4, 197823934);
	bVar4 = false;
	if (*uParam0 == 7)
	{
		if (_network_is_player_index_valid(uParam2->f_112.f_2))
		{
			set_everyone_ignore_player(uParam2->f_112.f_2, false);
		}
		func_53(uParam1, uParam2, 7);
		return;
	}
	else if (*uParam0 > 4)
	{
		func_250(uParam1, &(uParam2->f_112), 256);
		func_254(uParam1, &(uParam2->f_112), 0);
		func_255(uParam1, &(uParam2->f_112), 0);
		if (_network_is_player_index_valid(uParam2->f_112.f_2))
		{
			set_everyone_ignore_player(uParam2->f_112.f_2, false);
		}
		func_251(uParam1, uParam2, uParam0->f_2);
		func_53(uParam1, uParam2, *uParam0);
		return;
	}
	switch ((*uParam1)[uParam2->f_112.f_1]->f_2)
	{
		case 0:
			disable_all_control_actions(0);
			_0xc9caeaeec1256e54(-365265320);
			func_256(Local_109.f_112.f_9, 1, 0, 255, 0);
			uParam2->f_43 = uParam2->f_112.f_14;
			func_257(1);
			func_258(&(uParam1->f_21), uParam2, 0);
			func_64(&(uParam2->f_112));
			func_63(&(uParam2->f_112));
			func_259(&(uParam2->f_112));
			if (_network_is_player_index_valid(uParam2->f_112.f_2))
			{
				set_everyone_ignore_player(uParam2->f_112.f_2, true);
			}
			_close_all_apps();
			func_60(0, 8);
			task_stand_still(uParam2->f_112.f_4, -1);
			if (uParam0->f_5 == 0 || is_entity_dead(uParam2->f_112.f_4))
			{
				func_254(uParam1, &(uParam2->f_112), 2);
			}
			else
			{
				func_254(uParam1, &(uParam2->f_112), 1);
			}
			break;
		case 1:
			_0xc9caeaeec1256e54(-365265320);
			_disable_first_person_cam_this_frame_2();
			if (func_260(&(uParam2->f_19), &(uParam2->f_112.f_4), 0, 0))
			{
				if (((uParam2->f_19.f_20 != -1 && !_is_anim_scene_started(uParam2->f_19.f_20, false)) && !uParam2->f_19.f_16) && !func_159(255))
				{
					start_anim_scene(uParam2->f_19.f_20);
				}
				else
				{
					func_59(uParam2, 1);
				}
				iVar5 = get_mount(uParam2->f_112.f_4);
				if (does_entity_exist(iVar5))
				{
					clear_ped_tasks(iVar5, 1, 0);
					task_stand_still(iVar5, -1);
				}
				func_254(uParam1, &(uParam2->f_112), 2);
			}
			else
			{
				uParam2->f_43 = uParam2->f_112.f_14;
			}
			break;
		case 2:
			_0xc9caeaeec1256e54(-365265320);
			_disable_first_person_cam_this_frame_2();
			if (absi(get_time_difference(uParam2->f_43, uParam2->f_112.f_14)) < 4000)
			{
				return;
			}
			if (!is_screen_faded_out())
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(2000);
				}
				return;
			}
			func_60(1, 2);
			if (_is_any_app_running())
			{
				_close_all_apps_immediate();
			}
			uParam2->f_44 = "DEATH_FAIL_RESPAWN_SOUNDS";
			uParam2->f_44.f_1 = "TITLE_SCREEN_ENTER";
			uParam2->f_44.f_3 = func_261();
			uParam2->f_44.f_3.f_3 = 1;
			if (func_235(uParam2, 2))
			{
				uParam2->f_44.f_11 = 0;
			}
			else
			{
				uParam2->f_44.f_11 = func_262();
			}
			uParam2->f_44.f_11.f_3 = 1;
			uParam2->f_44.f_15 = 0;
			uParam2->f_44.f_7.f_3 = 1;
			uParam2->f_44.f_7 = 1638299023;
			uParam2->f_63 = func_265(&(uParam2->f_44), func_263(uParam0->f_5), func_264(uParam0->f_5), 0, 1);
			if (uParam2->f_112.f_105.f_2 != 0)
			{
				func_266(&(uParam2->f_112), uParam2->f_112.f_105.f_2);
			}
			else
			{
				play_sound_frontend("TITLE_SCREEN_ENTER", "DEATH_FAIL_RESPAWN_SOUNDS", true, 0);
			}
			_0x6339c1ea3979b5f7("Title_Screen", "RDRO_Death_Fail_Respawn_Scenes");
			func_243(uParam2, 4);
			func_254(uParam1, &(uParam2->f_112), 3);
			break;
		case 3:
			if (func_267(uParam2->f_63))
			{
				func_210(0);
			}
			_uiprompt_enable_prompt_type_this_frame(0);
			while (_event_manager_is_event_pending(-1933804684))
			{
				if (func_268(uParam2, &vVar0))
				{
					switch (vVar0.z)
					{
						case 2074623703:
							func_245(uParam1, &(uParam2->f_112), 256);
							bVar4 = true;
							break;
						case 1400745903:
							func_269(&(uParam2->f_112));
							bVar4 = true;
							break;
					}
				}
				_event_manager_pop_event(-1933804684);
				if (bVar4)
				{
					_0x6035e8fbca32ac5e();
					_uiprompt_disable_prompts_this_frame();
					func_254(uParam1, &(uParam2->f_112), 4);
				}
			else
			{
				}
			}
			break;
		case 4:
			disable_all_control_actions(0);
			disable_all_control_actions(2);
			_0xc9caeaeec1256e54(-1679307491);
			_0x6035e8fbca32ac5e();
			_uiprompt_disable_prompts_this_frame();
			break;
		default:
			func_254(uParam1, &(uParam2->f_112), 0);
			break;
	}
}

void func_51(var uParam0, var uParam1, var uParam2)
{
	disable_all_control_actions(0);
	disable_all_control_actions(2);
	_uiprompt_disable_prompts_this_frame();
	func_270(uParam0, uParam1, uParam2);
	Stack.Push(&(uParam0->f_7));
	Stack.Push(&(uParam1->f_21));
	Stack.Push(&(uParam2->f_112));
	Call_Loc(uParam2->f_79);
	if (!is_screen_faded_out())
	{
		if (is_entity_dead(uParam2->f_112.f_4) && func_159(255))
		{
		}
		else if (func_158(255))
		{
			func_155(1);
			return;
		}
		if (!is_screen_fading_out())
		{
			do_screen_fade_out(2000);
		}
		return;
	}
	if (!func_61(uParam2, 2))
	{
		render_script_cams(false, false, 3000, true, false, 0);
		func_59(uParam2, 0);
		func_62();
		if (uParam2->f_63 != 0)
		{
			_0x00a15b94cba4f76f(uParam2->f_63);
			uParam2->f_63 = 0;
		}
		_0x9428447ded71fc7e("Title_Screen");
		func_63(&(uParam2->f_112));
		func_64(&(uParam2->f_112));
		func_65(&(uParam2->f_112));
		func_258(&(uParam1->f_21), uParam2, 1);
		bVar1 = false;
		while (!bVar1)
		{
			bVar1 = true;
			if (iVar0 < 1)
			{
				bVar1 = false;
				func_69(&(uParam2->f_112), iVar0);
			}
			if (iVar0 < 1)
			{
				bVar1 = false;
				func_70(&(uParam2->f_112), iVar0);
			}
			iVar0++;
		}
		func_67(&(uParam2->f_19));
		func_243(uParam2, 2);
	}
	if ((*uParam1)[uParam2->f_112.f_1]->f_4 != uParam0->f_2)
	{
		func_251(uParam1, uParam2, uParam0->f_2);
	}
	Stack.Push(&(uParam0->f_7));
	Stack.Push(&(uParam1->f_21));
	Stack.Push(&(uParam2->f_112));
	Call_Loc(uParam2->f_77);
	if (!StackVal)
	{
		return;
	}
	func_245(uParam1, &(uParam2->f_112), 64);
	if (*uParam0 <= 5)
	{
		return;
	}
	func_250(uParam1, &(uParam2->f_112), 64);
	func_250(uParam1, &(uParam2->f_112), 512);
	func_244(uParam2, 2);
	if (func_61(uParam2, 4))
	{
		_0x9428447ded71fc7e("RDRO_Death_Fail_Respawn_Scenes");
		func_244(uParam2, 4);
	}
	func_26(&(uParam2->f_112), 256);
	func_255(uParam1, &(uParam2->f_112), 0);
	func_53(uParam1, uParam2, 6);
}

void func_52(var uParam0, var uParam1, var uParam2)
{
	if (*uParam0 == 7)
	{
		func_138();
		func_53(uParam1, uParam2, 7);
		return;
	}
	else if (*uParam0 < 6)
	{
		func_138();
		func_251(uParam1, uParam2, uParam0->f_2);
		func_53(uParam1, uParam2, *uParam0);
		return;
	}
	func_270(uParam0, uParam1, uParam2);
	Stack.Push(&(uParam0->f_7));
	Stack.Push(&(uParam1->f_21));
	Stack.Push(&(uParam2->f_112));
	Call_Loc(uParam2->f_79);
	switch ((*uParam1)[uParam2->f_112.f_1]->f_3)
	{
		case 0:
			if (func_271(255))
			{
				func_250(uParam1, &(uParam2->f_112), 128);
				func_255(uParam1, &(uParam2->f_112), 1);
				return;
			}
			func_272(&(uParam1->f_21), uParam2);
			if (func_162(uParam2->f_112.f_3))
			{
				func_273(uParam2);
			}
			if (uParam0->f_2 != (*uParam1)[uParam2->f_112.f_1]->f_4)
			{
				func_138();
				func_251(uParam1, uParam2, uParam0->f_2);
			}
			Stack.Push(&(uParam0->f_7));
			Stack.Push(&(uParam1->f_21));
			Stack.Push(&(uParam2->f_112));
			Call_Loc(uParam2->f_81[(*uParam1)[uParam2->f_112.f_1]->f_4]->f_3);
			if (StackVal)
			{
				func_245(uParam1, &(uParam2->f_112), 128);
				func_62();
			}
			else if (!func_234((*uParam1)[uParam2->f_112.f_1], 512) && func_239(uParam2, (*uParam1)[uParam2->f_112.f_1]->f_4, 2))
			{
				if (!is_screen_faded_out() && !is_screen_fading_out())
				{
					_uiprompt_enable_prompt_type_this_frame(6);
					enable_control_action(0, -842734359, true);
				}
				if (func_274(1, 0))
				{
					func_245(uParam1, &(uParam2->f_112), 512);
				}
			}
			else
			{
				func_62();
			}
			break;
		case 1:
			func_275();
			func_255(uParam1, &(uParam2->f_112), 2);
			break;
		case 2:
			if (func_276(255))
			{
				return;
			}
			func_255(uParam1, &(uParam2->f_112), 3);
			break;
		case 3:
			if (*uParam0 == 5)
			{
				func_251(uParam1, uParam2, uParam0->f_2);
				func_53(uParam1, uParam2, *uParam0);
			}
			break;
		default:
			break;
	}
}

void func_53(var uParam0, var uParam1, int iParam2)
{
	(*uParam0)[uParam1->f_112.f_1] = iParam2;
	if (uParam0[uParam1->f_112.f_1] == 6)
	{
		uParam1->f_112.f_17 = 1;
	}
	else
	{
		uParam1->f_112.f_17 = 0;
	}
	func_94(&(uParam0->f_21), &(uParam1->f_112), 0);
}

void func_54(var uParam0, int iParam1)
{
	uParam0->f_71 = iParam1;
}

void func_55(var uParam0, int iParam1)
{
	if (!func_33(uParam0, iParam1))
	{
		return;
	}
	uParam0->f_374 = (uParam0->f_374 - (uParam0->f_374 && iParam1));
}

void func_56(var uParam0, var uParam1, var uParam2)
{
	if (_text_database_has_loaded("MPFT"))
	{
		_text_database_delete("MPFT");
	}
	func_277();
	func_175(9, 128);
	func_278(9, 1073741824);
	func_279(-2101264851);
	func_223(uParam0, uParam2);
	func_222(uParam2->f_432.f_73);
	func_280();
	func_128();
	func_126();
	func_142(0);
	func_143(0);
	func_145();
	func_175(9, 128);
	_0x65f040d91001ed4b(0);
	clear_override_weather();
	func_227(uParam2);
	func_230(0);
}

void func_57(var uParam0, var uParam1, bool bParam2)
{
	func_281(uParam0, &(uParam1->f_112), 4);
	func_281(uParam0, &(uParam1->f_112), 8);
	if (bParam2)
	{
		if (animpostfx_is_running(func_282()))
		{
			_0xc5cb91d65852ed7e(func_282());
		}
	}
	if (does_blip_exist(uParam1->f_65))
	{
		remove_blip(&(uParam1->f_65));
	}
	uParam1->f_70 = 0;
	if (uParam1->f_112.f_39.f_9 != 0)
	{
		_0x2f901291ef177b02(uParam1->f_112.f_39.f_9, 0);
		uParam1->f_112.f_39.f_9 = 0;
	}
	func_283(uParam1);
	func_284(4);
	if (func_61(uParam1, 32))
	{
		func_285();
		_0x9428447ded71fc7e("out_of_bounds_scenes");
		if (uParam1->f_69 != -1)
		{
			_0x3210bcb36af7621b(uParam1->f_69);
		}
		func_244(uParam1, 32);
	}
}

void func_58(var uParam0, bool bParam1)
{
	if (!_does_volume_exist(uParam0->f_425))
	{
		return;
	}
	_0x869a7015bd4606e9(uParam0->f_425);
	if (bParam1)
	{
		func_286(uParam0->f_425);
	}
	uParam0->f_425 = 0;
	func_287(&(uParam0->f_425));
}

void func_59(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_61(uParam0, 8))
		{
			toggle_paused_renderphases(false);
			func_243(uParam0, 8);
		}
	}
	else if (func_61(uParam0, 8))
	{
		toggle_paused_renderphases(true);
		func_244(uParam0, 8);
	}
}

void func_60(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_288(iParam1);
		return;
	}
	if (iParam1 == 2)
	{
		iParam1 = 56;
	}
	iVar0 = iParam1;
	bVar1 = !iVar0 & 4 != false;
	bVar2 = iVar0 & 8 != false;
	bVar3 = iVar0 & 16 != false;
	bVar4 = iVar0 & 32 != false;
	bVar5 = iVar0 & 1024 != false;
	bVar6 = iVar0 & 64 != false;
	func_289(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

bool func_61(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_62()
{
	if (func_290(Global_26539))
	{
		func_291(&Global_26539, 0, 0);
	}
}

void func_63(var uParam0)
{
	if (uParam0->f_39.f_1 == 0)
	{
		return;
	}
	if (func_168(uParam0->f_39.f_1))
	{
		_0x2f901291ef177b02(uParam0->f_39.f_1, 0);
	}
	if (does_blip_exist(uParam0->f_39.f_3))
	{
		remove_blip(&(uParam0->f_39.f_3));
	}
	uParam0->f_39 = 0;
	uParam0->f_39.f_1 = 0;
}

void func_64(var uParam0)
{
	if (uParam0->f_39.f_4 == 0)
	{
		return;
	}
	if (func_168(uParam0->f_39.f_5))
	{
		_0x2f901291ef177b02(uParam0->f_39.f_5, 0);
	}
	uParam0->f_39.f_7 = 0;
	uParam0->f_39.f_8 = -1;
	func_292();
	uParam0->f_39.f_4 = 0;
	uParam0->f_39.f_5 = 0;
}

void func_65(var uParam0)
{
	func_293(uParam0, 0);
}

void func_66(var uParam0)
{
	if (uParam0->f_120.f_227.f_15)
	{
		_0x7c907e8a725e5fd2(false);
		end_srl();
	}
	func_294(uParam0);
	func_295(uParam0);
	func_296(&(uParam0->f_120.f_227));
}

void func_67(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (does_cam_exist(uParam0[iVar0]))
		{
			destroy_cam(uParam0[iVar0], false);
		}
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
	if (uParam0->f_20 != -1)
	{
		if (_0x23e33cb9f4a3f547(uParam0->f_20, "LIVE"))
		{
			_0xae6ada8fe7e84acc(uParam0->f_20, "LIVE");
		}
		if (_is_anim_scene_started(uParam0->f_20, false))
		{
			abort_anim_scene(uParam0->f_20, false);
		}
		reset_anim_scene(uParam0->f_20, 0);
		_delete_anim_scene(uParam0->f_20);
	}
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_12 = -1;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_17 = 0;
	uParam0->f_16 = 0;
	func_297(&(uParam0->f_18));
	uParam0->f_20 = -1;
	uParam0->f_21 = -1;
	uParam0->f_22 = 0;
	func_297(&uLocal_19);
}

char* func_68()
{
	return "RDRO_Countdown_Sounds";
}

void func_69(var uParam0, int iParam1)
{
	if (iParam1 <= -1 || iParam1 >= 1)
	{
		return;
	}
	if (!does_blip_exist(&(uParam0->f_39.f_11[iParam1])))
	{
		return;
	}
	if (uParam0->f_39.f_13 == iParam1)
	{
		clear_gps_multi_route();
		uParam0->f_39.f_13 = -1;
		iVar0 = 0;
		while (iVar0 < uParam0->f_39.f_55)
		{
			_0x4bdebea5702b97a9(*uParam0->f_39.f_14[uParam0->f_39.f_55], uParam0->f_39.f_14[uParam0->f_39.f_55]->f_3, 1, 1);
			iVar0++;
		}
		uParam0->f_39.f_55 = 0;
		clear_gps_flags();
	}
	remove_blip(uParam0->f_39.f_11[iParam1]);
}

void func_70(var uParam0, int iParam1)
{
	if (iParam1 <= -1 || iParam1 >= 1)
	{
		return;
	}
	func_291(uParam0->f_39.f_56[iParam1], 1, 1);
}

void func_71(var uParam0, int iParam1, int iParam2)
{
	if (func_298(uParam0->f_31[iParam1]))
	{
		_0x9cf1836c03fb67a2(uParam0->f_31[iParam1], iParam2);
	}
	uParam0->f_31[iParam1] = -1;
}

void func_72(var uParam0, int iParam1)
{
	if (iParam1 <= -1 || iParam1 >= 1)
	{
		return;
	}
	if (_does_volume_exist(&(uParam0->f_113[iParam1])))
	{
		if (uParam0->f_113[iParam1]->f_2)
		{
			_0x74c2b3dc0b294102(&(uParam0->f_113[iParam1]));
		}
		if (uParam0->f_113[iParam1]->f_3)
		{
			_0xa1cfb35069d23c23(&(uParam0->f_113[iParam1]));
		}
		if (_0x91a5f9cbebb9d936(uParam0->f_113[iParam1]->f_4))
		{
			remove_scenario_blocking_area(uParam0->f_113[iParam1]->f_4, false);
		}
		if (uParam0->f_113[iParam1]->f_1 == -372365539)
		{
			func_299(&(uParam0->f_113[iParam1]), &(uParam0->f_113[iParam1]->f_5));
		}
		_delete_volume(&(uParam0->f_113[iParam1]));
		func_300(uParam0->f_113[iParam1]);
	}
}

void func_73(var uParam0, int iParam1)
{
	if (iParam1 <= -1 || iParam1 >= 1)
	{
		return;
	}
	if (_does_scenario_point_exist(&(uParam0->f_37[iParam1])))
	{
		_delete_scenario_point(&(uParam0->f_37[iParam1]));
	}
}

void func_74(var uParam0, var uParam1, int iParam2)
{
	if (!func_301(uParam0, uParam1, iParam2, &iVar0, &uVar1))
	{
		return;
	}
	if (network_does_network_id_exist(&(uParam0->f_23[iParam2])) && !network_has_control_of_network_id(&(uParam0->f_23[iParam2])))
	{
		return;
	}
	if (!_does_anim_scene_exist(iVar0))
	{
		return;
	}
	_delete_anim_scene(iVar0);
}

void func_75(var uParam0, int iParam1)
{
	if (iParam1 <= 0 || iParam1 >= 2)
	{
		return;
	}
	func_208(uParam0, iParam1);
	func_302(uParam0->f_105.f_3[iParam1]);
}

void func_76(int iParam0)
{
	Global_1102219->f_3 = (Global_1102219->f_3 - (Global_1102219->f_3 && iParam0));
}

void func_77(bool bParam0)
{
	if (bParam0)
	{
		func_163(49);
	}
	else
	{
		func_303(49);
	}
}

void func_78(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

bool func_79(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_80(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		func_304(iParam0, iParam1);
	}
	func_305(4);
	func_306();
	func_307(1);
}

int func_81()
{
	return Global_1572887->f_13;
}

void func_82(var uParam0, var uParam1)
{
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(2, &Var0, 2, 2);
}

void func_83(var uParam0, int iParam1)
{
	if (!_0x7907969497ea92f5(&(uParam0->f_24.f_5[iParam1])))
	{
		return;
	}
	if (!_0x603ac35fd4602c76(&(uParam0->f_24.f_5[iParam1])))
	{
		return;
	}
	_datafile_unload(&(uParam0->f_24.f_5[iParam1]));
}

int func_84(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1548775415;
		case 1:
			return 1234815626;
		case 2:
			return -1112755538;
		case 3:
			return -1393618637;
		case 4:
			return 590675393;
		case 5:
			return -517048703;
		default:
			break;
	}
	return 0;
}

void func_85(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	func_308(&(uParam0->f_7), 1);
	func_308(&(uParam0->f_7), 4);
	func_241(&(uParam0->f_7), 0);
}

void func_86(var uParam0, int iParam1)
{
	if (func_131(uParam0, iParam1))
	{
		return;
	}
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_87(int iParam0, int iParam1)
{
	if (!func_309(iParam0, iParam1))
	{
	}
	Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 || iParam1);
}

void func_88(int iParam0)
{
	iVar0 = func_310(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	clear_bit(Global_39.f_110[iVar1], iVar2);
	Global_1939655 = 0;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1071686->f_28341.f_2;
		case 1:
		case 5:
		case 9:
			return 0;
		case 2:
		case 6:
		case 10:
			return 1;
		case 3:
		case 7:
		case 11:
			return 2;
		case 4:
		case 8:
		case 12:
			return 3;
		default:
			break;
	}
	return -1;
}

void func_90(var uParam0, int iParam1, int iParam2)
{
	if (func_33(uParam0, 1))
	{
		return;
	}
	func_26(uParam0, 1);
	uParam0->f_429 = iParam2;
	uParam0->f_430 = iParam1;
}

int func_91(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1477077641;
				case 1:
					return 389539898;
				case 2:
					return 770495107;
				case 3:
					return -1519408636;
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_92(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 <= -1 || iParam1 >= 1)
	{
		return false;
	}
	if (iParam2 == 0)
	{
		return false;
	}
	if (!_0x7907969497ea92f5(&(uParam0->f_24.f_5[iParam1])))
	{
		uParam0->f_24.f_5[iParam1] = _0xd97d8d905f1562f2(iParam2);
	}
	if (!_0x603ac35fd4602c76(&(uParam0->f_24.f_5[iParam1])))
	{
		return false;
	}
	return true;
}

void func_93(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_311((*uParam0)[iVar0]);
		(*uParam0)[iVar0] = func_312(iVar0);
		(*uParam0)[iVar0]->f_1 = func_313(iVar0);
		iVar0++;
	}
	if (func_168(uParam0->f_43))
	{
		_0x2f901291ef177b02(uParam0->f_43, 0);
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 0;
	_0x062b4a4a3396351d(uParam1);
	_0xbcc6dc59e32a2bdc(uParam1);
}

void func_94(var uParam0, var uParam1, int iParam2)
{
	(*uParam0)[uParam1->f_1] = iParam2;
	uParam1->f_431 = 0;
	func_281(uParam0, uParam1, 2);
	uParam1->f_13 = uParam1->f_14;
}

struct<4> func_95(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (!func_314(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var29 = { func_315() };
		if (func_316() && _0xb881ca836cc4b6d4(&Var29))
		{
			Var0 = { Var29 };
		}
		else if (!_0x4c543d5dfcd2dafd(&Var29, &Var0))
		{
			func_317(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_318(player_id());
	}
	bVar33 = func_319(75);
	if (bVar33)
	{
		iParam3 = 3;
	}
	iVar34 = func_320(iParam3, 0);
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
			return func_321();
		}
		if (!func_322(&Var0, 0))
		{
			Var35 = { func_323(bParam0) };
		}
		else
		{
			Var35 = { Var0 };
		}
		return Var35;
	}
	return Var0;
}

char* func_96()
{
	return "ALL HORSES";
}

bool func_97(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_324(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_98(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_99(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_325(*uParam0, &Var0, bParam1, 0, -1))
	{
		return false;
	}
	func_326(uParam0);
	if (func_327(uParam0, bParam1))
	{
		func_317(uParam0, 0);
		return true;
	}
	Var14 = { func_95(bParam1, 0, 1, 3) };
	if (_0x4c543d5dfcd2dafd(&Var14, uParam0))
	{
		func_317(uParam0, 0);
		return true;
	}
	if (!func_328(uParam0, 1, bParam1))
	{
		return false;
	}
	func_317(uParam0, 1);
	return true;
}

bool func_100(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_329(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

int func_101(int iParam0)
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

void func_102(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -419233347, "MPFT_LOCATION_DATA");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -1808792867, "MPFT_LOCATION_DATA/HORSE_SHOP:id");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 571023991, "MPFT_LOCATION_DATA/HORSE_SHOP/SHOP_LOCATION:position");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 159907910, "MPFT_LOCATION_DATA/HORSE_SHOP/SHOP_LOCATION:heading");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -1507229176, "MPFT_LOCATION_DATA/HORSE_SHOP/SHOP_WALKOUT:position");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -914908343, "MPFT_LOCATION_DATA/HORSE_SHOP/SHOP_WALKOUT:heading");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -643640105, "HORSE_SHOP/SHOP_DOORS/DOOR(%i)");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 1819113895, "HORSE_SHOP/SHOP_DOORS/DOOR(%i):id");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -87714106, "CAMP_DATA/CAMP(id=%x):boundary");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -1942696110, "CAMP_DATA/CAMP(id=%x)/HITCHING_POST:name");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -884101242, "CAMP_DATA/CAMP(id=%x)/HITCHING_POST:position");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 401397137, "MPFT_LOCATION_DATA/CAMP_DATA/CAMP(id=%x)/GPS_POINT_DATA/GPS_POINT(%i)");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -2052354998, "MPFT_LOCATION_DATA/CAMP_DATA/CAMP(id=%x)/GPS_POINT_DATA/GPS_POINT(%i):position");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -1298475390, "MPFT_LOCATION_DATA/CAMP_DATA/CAMP(id=%x)/GPS_POINT_DATA/GPS_POINT(%i):straight_line");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -2113418538, "MPFT_LOCATION_DATA/CAMP_DATA/CAMP(id=%x)/VEG_MOD_DATA/VEG_MOD(%i)");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -1559707119, "MPFT_LOCATION_DATA/CAMP_DATA/CAMP(id=%x)/VEG_MOD_DATA/VEG_MOD(%i):volume");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -1138435469, "MPFT_LOCATION_DATA/CAMP_DATA/CAMP(id=%x)/VEG_MOD_DATA/VEG_MOD(%i):center");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 1396363389, "MPFT_LOCATION_DATA/CAMP_DATA/CAMP(id=%x)/VEG_MOD_DATA/VEG_MOD(%i):radius");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -1538437131, "MPFT_LOCATION_DATA/CAMP_DATA/CAMP(id=%x)/VEG_MOD_DATA/VEG_MOD(%i):type");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -951954154, "MPFT_LOCATION_DATA/CAMP_DATA/CAMP(id=%x)/VEG_MOD_DATA/VEG_MOD(%i):debris");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -1882457911, "MPFT_LOCATION_DATA/CAMP_DATA/CAMP(id=%x)/VEG_MOD_DATA/VEG_MOD(%i):grass");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -738108042, "MPFT_LOCATION_DATA/CAMP_DATA/CAMP(id=%x)/VEG_MOD_DATA/VEG_MOD(%i):bushes");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -1117564730, "MPFT_LOCATION_DATA/CAMP_DATA/CAMP(id=%x)/VEG_MOD_DATA/VEG_MOD(%i):weeds");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 1835863260, "MPFT_LOCATION_DATA/CAMP_DATA/CAMP(id=%x)/VEG_MOD_DATA/VEG_MOD(%i):flowers");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -1636181930, "MPFT_LOCATION_DATA/CAMP_DATA/CAMP(id=%x)/VEG_MOD_DATA/VEG_MOD(%i):saplings");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 1782092333, "MPFT_LOCATION_DATA/CAMP_DATA/CAMP(id=%x)/VEG_MOD_DATA/VEG_MOD(%i):long_grass");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 1654892638, "CAMERA_SHOT_DATA/CAMERA_SHOT(%i)");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -520956755, "CAMERA_SHOT_DATA/CAMERA_SHOT(%i):id");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 1078444647, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x):length");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 1296834917, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x):help");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 766334116, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x):help_blip_sprite");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -761400849, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x):help_blip_style");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 325074714, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x)/CAM_POSITION:start");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -2106232268, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x)/CAM_POSITION:end");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 1468587349, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x)/CAM_POSITION:graph");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 304967024, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x)/CAM_ROTATION:start");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 2136935544, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x)/CAM_ROTATION:end");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 252424549, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x)/CAM_ROTATION:graph");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -509983768, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x)/CAM_FOV:start");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 1470394715, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x)/CAM_FOV:end");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -591959119, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x)/LOAD_SCENE:position");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 1020001039, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x)/LOAD_SCENE:radius");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 989924726, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x)/LOAD_SCENE:interior");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 215309101, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x)/PROP:model");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 207939343, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x)/PROP:position");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 486353229, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x)/PROP:rotation");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 824391753, "MPFT_LOCATION_DATA/CAMERA_SHOT_SEQUENCE_DATA/CAMERA_SHOT_SEQUENCE(id=%x)");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -1770790531, ":streaming_request_list");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -1476235466, "CAMERA_SHOT(%i)");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -1432676120, "CAMERA_SHOT(%i):id");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -928496371, "MPFT_LOCATION_DATA/VOLUME_DATA/VOLUME(id=%x)");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 902471454, ":category");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -276769805, ":ambient_avoidance");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 2125472716, ":ambient_no_spawn");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -1227169020, ":scenario_block_player");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 218761186, ":scenario_block_ped");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 786289686, "COMPONENT(%i)");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 136526858, "COMPONENT(%i):type");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -619192215, "COMPONENT(%i):position");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 457202110, "COMPONENT(%i):rotation");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 592846328, "COMPONENT(%i):scale");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), 2034260151, ":anti_grief_blocks_player");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -153769467, ":anti_grief_blocks_horse");
			_datafile_register_query(&(uParam0->f_24.f_5[iParam1]), -216759738, ":wnt_focus");
			break;
	}
}

void func_103(var uParam0, int iParam1)
{
	uParam0->f_24 = &uParam0->f_24.f_5[iParam1];
	uParam0->f_24.f_1 = 0;
	uParam0->f_24.f_2 = 0;
	uParam0->f_24.f_3 = 0;
	uParam0->f_24.f_4 = 0;
}

bool func_104(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

Vector3 func_105(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_24.f_2 = iParam1;
	uParam0->f_24.f_3 = iParam2;
	uParam0->f_24.f_4 = iParam3;
	if (!_datafile_get_vector(&vVar0, &(uParam0->f_24)))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

float func_106(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_24.f_2 = iParam1;
	uParam0->f_24.f_3 = iParam2;
	uParam0->f_24.f_4 = iParam3;
	if (!_datafile_get_float(&uVar0, &(uParam0->f_24)))
	{
		return 0f;
	}
	return uVar0;
}

bool func_107(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_24.f_2 = iParam1;
	uParam0->f_24.f_3 = iParam2;
	uParam0->f_24.f_4 = iParam3;
	return _datafile_get_data_node_index(&(uParam0->f_24.f_1), &(uParam0->f_24));
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1483188924;
		case 1:
			return 1727383512;
		case 2:
			return -1124666407;
		case 3:
			return 1243155999;
		case 4:
			return 758174799;
		case 5:
			return 997355730;
		default:
			break;
	}
	return 0;
}

bool func_109(var uParam0, int iParam1)
{
	iVar0 = func_330(iParam1);
	if (iVar0 <= -1 || iVar0 >= 6)
	{
		return false;
	}
	uParam0->f_120.f_4[iVar0]->f_31 = func_331(uParam0, 1078444647, iParam1, 0);
	uParam0->f_120.f_4[iVar0]->f_34 = func_112(uParam0, 1296834917, iParam1, 0);
	uParam0->f_120.f_4[iVar0]->f_35 = func_112(uParam0, 766334116, iParam1, 0);
	uParam0->f_120.f_4[iVar0]->f_36 = func_112(uParam0, -761400849, iParam1, 0);
	*uParam0->f_120.f_4[iVar0] = { func_105(uParam0, 325074714, iParam1, 0) };
	uParam0->f_120.f_4[iVar0]->f_7 = { func_105(uParam0, -2106232268, iParam1, 0) };
	uParam0->f_120.f_4[iVar0]->f_32 = func_332(func_112(uParam0, 1468587349, iParam1, 0));
	uParam0->f_120.f_4[iVar0]->f_3 = { func_105(uParam0, 304967024, iParam1, 0) };
	uParam0->f_120.f_4[iVar0]->f_10 = { func_105(uParam0, 2136935544, iParam1, 0) };
	uParam0->f_120.f_4[iVar0]->f_33 = func_332(func_112(uParam0, 252424549, iParam1, 0));
	uParam0->f_120.f_4[iVar0]->f_6 = func_106(uParam0, -509983768, iParam1, 0);
	uParam0->f_120.f_4[iVar0]->f_13 = func_106(uParam0, 1470394715, iParam1, 0);
	uParam0->f_120.f_4[iVar0]->f_24 = func_331(uParam0, 215309101, iParam1, 0);
	uParam0->f_120.f_4[iVar0]->f_25 = { func_105(uParam0, 207939343, iParam1, 0) };
	uParam0->f_120.f_4[iVar0]->f_28 = { func_105(uParam0, 486353229, iParam1, 0) };
	uParam0->f_120.f_4[iVar0]->f_14 = { func_105(uParam0, -591959119, iParam1, 0) };
	uParam0->f_120.f_4[iVar0]->f_17 = func_106(uParam0, 1020001039, iParam1, 0);
	uParam0->f_120.f_4[iVar0]->f_18 = func_333(uParam0, 989924726, iParam1, 0);
	return true;
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5007;
		case 1:
			return 5008;
		case 2:
			return 5009;
		case 3:
			return 5010;
		case 4:
			return 5011;
		case 5:
			return 5012;
		default:
			break;
	}
	return 5006;
}

int func_111(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_24.f_2 = iParam1;
	uParam0->f_24.f_3 = iParam2;
	uParam0->f_24.f_4 = iParam3;
	return _datafile_get_num_nodes(&(uParam0->f_24));
}

int func_112(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_24.f_2 = iParam1;
	uParam0->f_24.f_3 = iParam2;
	uParam0->f_24.f_4 = iParam3;
	if (!_datafile_get_hash(&uVar0, &(uParam0->f_24)))
	{
		return 0;
	}
	return uVar0;
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case 451529179:
			return -897763770;
		case -934992753:
			return 338217376;
		case -841961450:
			return 105786859;
		case 612720002:
			return 1316044336;
		case 847313273:
			return 950014606;
		case -737921038:
			return 1760058211;
		case -1069379473:
			return 2048851408;
		case -148898263:
			return 56102980;
		case -447391084:
			return -1601090892;
		case -1640936415:
			return -1345066695;
		case -862160776:
			return 1639999212;
		case -1100096485:
			return 1332920913;
		case -863930314:
			return 2131468674;
		case -1094001463:
			return 59943546;
		case -1577213137:
			return 701691642;
		case 640288085:
			return -186280544;
		case -1809751726:
			return 111917356;
		case 1236716654:
			return 1483332779;
		case 931276805:
			return 820514216;
		case 1855821387:
			return 1118581040;
		default:
			break;
	}
	return 0;
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 451529179:
			return 5014;
		case -934992753:
			return 5015;
		case -841961450:
			return 5016;
		case 612720002:
			return 5017;
		case 847313273:
			return 5018;
		case -737921038:
			return 5019;
		case -1069379473:
			return 5020;
		case -148898263:
			return 5021;
		case -447391084:
			return 5022;
		case -1640936415:
			return 5022;
		case -862160776:
			return 5024;
		case -1100096485:
			return 5025;
		case -863930314:
			return 5026;
		case -1094001463:
			return 5027;
		case -1577213137:
			return 5028;
		case 640288085:
			return 5029;
		case -1809751726:
			return 5030;
		case 1236716654:
			return 5031;
		case 931276805:
			return 5032;
		case 1855821387:
			return 5033;
		default:
			break;
	}
	return 5013;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case -897763770:
			return -77467964;
		case 338217376:
			return -347456896;
		case 105786859:
			return 1714368580;
		case 1316044336:
			return -77467964;
		case 950014606:
			return -1937764094;
		case 1760058211:
			return -561662774;
		case 2048851408:
			return -1066371548;
		case 56102980:
			return 292264021;
		case -1601090892:
			return -561662774;
		case -1345066695:
			return -561662774;
		case 1639999212:
			return 492784758;
		case 1332920913:
			return 2103020653;
		case 2131468674:
			return -264965602;
		case 59943546:
			return 1458683810;
		case 701691642:
			return 683467233;
		case -186280544:
			return -1293037363;
		case 111917356:
			return 393648601;
		case 1483332779:
			return 1160836429;
		case 820514216:
			return 681917494;
		case 1118581040:
			return -1293037363;
		default:
			break;
	}
	return 0;
}

int func_116(int iParam0)
{
	switch (iParam0)
	{
		case -897763770:
			return 5035;
		case 338217376:
			return 5036;
		case 105786859:
			return 5037;
		case 1316044336:
			return 5038;
		case 950014606:
			return 5039;
		case 1760058211:
			return 5040;
		case 2048851408:
			return 5041;
		case 56102980:
			return 5042;
		case -1601090892:
			return 5043;
		case -1345066695:
			return 5043;
		case 1639999212:
			return 5045;
		case 1332920913:
			return 5046;
		case 2131468674:
			return 5047;
		case 59943546:
			return 5048;
		case 701691642:
			return 5049;
		case -186280544:
			return 5050;
		case 111917356:
			return 5051;
		case 1483332779:
			return 5052;
		case 820514216:
			return 5053;
		case 1118581040:
			return 5054;
		default:
			break;
	}
	return 5034;
}

int func_117(int iParam0)
{
	switch (iParam0)
	{
		case -897763770:
			return 5056;
		case 338217376:
			return 5057;
		case 105786859:
			return 5058;
		case 1316044336:
			return 5059;
		case 950014606:
			return 5060;
		case 1760058211:
			return 5061;
		case 2048851408:
			return 5062;
		case 56102980:
			return 5063;
		case -1601090892:
			return 5064;
		case -1345066695:
			return 5064;
		case 1639999212:
			return 5066;
		case 1332920913:
			return 5067;
		case 2131468674:
			return 5068;
		case 59943546:
			return 5069;
		case 701691642:
			return 5070;
		case -186280544:
			return 5071;
		case 111917356:
			return 5072;
		case 1483332779:
			return 5073;
		case 820514216:
			return 5074;
		case 1118581040:
			return 5075;
		default:
			break;
	}
	return 5055;
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case -897763770:
			return 5077;
		case 338217376:
			return 5078;
		case 105786859:
			return 5079;
		case 1316044336:
			return 5080;
		case 950014606:
			return 5081;
		case 1760058211:
			return 5082;
		case 2048851408:
			return 5083;
		case 56102980:
			return 5084;
		case -1601090892:
			return 5085;
		case -1345066695:
			return 5085;
		case 1639999212:
			return 5087;
		case 1332920913:
			return 5088;
		case 2131468674:
			return 5089;
		case 59943546:
			return 5090;
		case 701691642:
			return 5091;
		case -186280544:
			return 5092;
		case 111917356:
			return 5093;
		case 1483332779:
			return 5094;
		case 820514216:
			return 5095;
		case 1118581040:
			return 5096;
		default:
			break;
	}
	return 5076;
}

bool func_119(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case -897763770:
			return 5098;
		case 338217376:
			return 5099;
		case 105786859:
			return 5100;
		case 1316044336:
			return 5101;
		case 950014606:
			return 5102;
		case 1760058211:
			return 5103;
		case 2048851408:
			return 5104;
		case 56102980:
			return 5105;
		case -1601090892:
			return 5106;
		case -1345066695:
			return 5106;
		case 1639999212:
			return 5108;
		case 1332920913:
			return 5109;
		case 2131468674:
			return 5110;
		case 59943546:
			return 5112;
		case 701691642:
			return 5113;
		case -186280544:
			return 5114;
		case 111917356:
			return 5115;
		case 1483332779:
			return 5116;
		case 820514216:
			return 5117;
		case 1118581040:
			return 5118;
		default:
			break;
	}
	return 5097;
}

Vector3 func_121(var uParam0)
{
	iVar4 = 0;
	while (iVar4 <= 12)
	{
		iVar3 = func_334(iVar4, 1);
		if (!func_335(iVar3))
		{
		}
		else
		{
			vVar0.f_1 = iVar3;
			if (func_336(iVar3, uParam0))
			{
				vVar0.f_2 = func_337(uParam0, vVar0);
				return vVar0;
			}
		}
		iVar4++;
	}
	vVar0.f_2 = 0;
	return vVar0;
}

int func_122(int iParam0)
{
	switch (iParam0)
	{
		case -897763770:
			return 5120;
		case 338217376:
			return 5122;
		case 105786859:
			return 5122;
		case 1316044336:
			return 5123;
		case 950014606:
			return 5124;
		case 1760058211:
			return 5125;
		case 2048851408:
			return 5126;
		case 56102980:
			return 5127;
		case -1601090892:
			return 5128;
		case -1345066695:
			return 5128;
		case 1639999212:
			return 5130;
		case 1332920913:
			return 5131;
		case 2131468674:
			return 5132;
		case 59943546:
			return 5133;
		case 701691642:
			return 5134;
		case -186280544:
			return 5135;
		case 111917356:
			return 5136;
		case 1483332779:
			return 5137;
		case 820514216:
			return 5138;
		case 1118581040:
			return 5139;
		default:
			break;
	}
	return 5119;
}

void func_123(var uParam0, var uParam1, int iParam2)
{
	if (func_104((*uParam0)[uParam1->f_1], iParam2))
	{
		return;
	}
	(*uParam0)[uParam1->f_1]->f_1 = ((*uParam0)[uParam1->f_1]->f_1 || iParam2);
}

bool func_124(int iParam0, bool bParam1)
{
	if (!network_is_game_in_progress() || !network_is_in_session())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Global_1137047->f_9[iVar0]->f_4.f_2 != 0 && Global_1137047->f_9[iVar0]->f_2 == iParam0)
			{
				return true;
			}
			iVar0++;
		}
		if (bParam1)
		{
			func_171("GC_H_PLACE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	iVar1 = _0x901e0dc25080c8b9(iParam0);
	if (func_338(func_134(iVar1)))
	{
		return true;
	}
	if (bParam1)
	{
		func_171("GC_H_PLACE", 10000, 0, 0, 0, 1);
	}
	return false;
}

int func_125()
{
	if (!_0x424b17a7dc5c90bc(player_id()))
	{
		return 0;
	}
	func_339(2);
	(*Global_1134390)[network_player_id_to_int()]->f_33.f_2 = 0;
	(*Global_1134390)[network_player_id_to_int()]->f_33.f_3 = get_random_int_in_range(0, 65536);
	func_340();
	func_341(vVar0);
	return 1;
}

void func_126()
{
	if (func_342(2))
	{
		func_343(2);
	}
}

void func_127()
{
	if (!func_342(32))
	{
		func_225(32);
	}
}

void func_128()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_344(iVar0);
		iVar0++;
	}
}

int func_129(int iParam0, vector3 vParam1)
{
	if (iParam0 < 0 || iParam0 >= 6)
	{
		return 0;
	}
	if (vParam1.z == 0)
	{
		return 0;
	}
	if (func_345(iParam0) != vParam1.z)
	{
		Global_1132288->f_2020[iParam0] = vParam1.z;
	}
	return 1;
}

bool func_130(vector3 vParam0, int iParam3)
{
	if (vParam0.x < 4)
	{
		vParam0.x = 4;
	}
	if (!func_346(0, 1))
	{
		return false;
	}
	(*Global_1134390)[network_player_id_to_int()]->f_33 = { vParam0 };
	(*Global_1134390)[network_player_id_to_int()]->f_33.f_3 = get_random_int_in_range(0, 65536);
	func_340();
	if (iParam3 == 1)
	{
		func_347(2);
	}
	else
	{
		Global_1137047->f_330.f_6 = 1;
		func_348(2);
	}
	if (!func_349(network_player_id_to_int()))
	{
		func_348(8);
		func_350();
	}
	if (!func_351(4) && (func_351(8) || func_351(16)))
	{
		func_347(4);
	}
	else
	{
		func_348(4);
	}
	if (func_352(Global_1137047->f_8, 1))
	{
		func_347(1);
	}
	else
	{
		func_348(1);
	}
	func_339(6);
	return true;
}

bool func_131(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_132()
{
	if (!func_342(2))
	{
		func_225(2);
	}
}

Vector3 func_133()
{
	iVar0 = func_134(_0x901e0dc25080c8b9(player_id()));
	return func_353(iVar0);
}

int func_134(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return -1;
	}
	if (iParam0 == _0x901e0dc25080c8b9(player_id()))
	{
		return func_354(player_id());
	}
	return func_355(_0x4be6c13a45cca8ec(iParam0));
}

void func_135(int iParam0)
{
	if (!func_338(iParam0))
	{
		return;
	}
	if (!func_356(iParam0, 8))
	{
		func_357(iParam0, 8);
	}
}

void func_136(var uParam0)
{
	func_103(uParam0, 0);
	iVar0 = func_111(uParam0, -2113418538, uParam0->f_864.f_12, 0);
	if (iVar0 > 5)
	{
		iVar0 = 5;
	}
	iVar12 = 0;
	while (iVar12 < iVar0)
	{
		func_103(uParam0, 0);
		iVar3 = (0 + iVar12);
		func_358(&Var4);
		iVar1 = func_112(uParam0, -1559707119, uParam0->f_864.f_12, iVar12);
		iVar2 = func_359(iVar1);
		if (iVar2 > -1 && iVar2 < 1)
		{
			if (!func_183(uParam0, iVar2, iVar1))
			{
			}
			else
			{
				func_103(uParam0, 0);
				Jump @210; //curOff = 141
				Var4.f_1 = { func_105(uParam0, -1138435469, uParam0->f_864.f_12, iVar12) };
				if (func_119(Var4.f_1))
				{
				}
				else
				{
					Var4.f_5 = func_106(uParam0, 1396363389, uParam0->f_864.f_12, iVar12);
					switch (func_112(uParam0, -1538437131, uParam0->f_864.f_12, iVar12))
					{
						case -907098195:
							Var4.f_6 = 1;
							break;
						case -1453140709:
							Var4.f_6 = 2;
							break;
						case 331632914:
							Var4.f_6 = 4;
							break;
						case 1152024837:
							Var4.f_6 = 8;
							break;
						case 1960114521:
							Var4.f_6 = 16;
							break;
						case -259577388:
							Var4.f_6 = 32;
							break;
						default:
							Jump @581; //curOff = 323
							if (func_333(uParam0, -951954154, uParam0->f_864.f_12, iVar12))
							{
								Var4.f_7 |= 1;
							}
							if (func_333(uParam0, -1882457911, uParam0->f_864.f_12, iVar12))
							{
								Var4.f_7 |= 2;
							}
							if (func_333(uParam0, -738108042, uParam0->f_864.f_12, iVar12))
							{
								Var4.f_7 |= 4;
							}
							if (func_333(uParam0, -1117564730, uParam0->f_864.f_12, iVar12))
							{
								Var4.f_7 |= 8;
							}
							if (func_333(uParam0, 1835863260, uParam0->f_864.f_12, iVar12))
							{
								Var4.f_7 |= 16;
							}
							if (func_333(uParam0, -1636181930, uParam0->f_864.f_12, iVar12))
							{
								Var4.f_7 |= 32;
							}
							if (func_333(uParam0, 1782092333, uParam0->f_864.f_12, iVar12))
							{
								Var4.f_7 |= 256;
							}
							if (func_360(uParam0, iVar3, &Var4))
							{
							}
						}
					}
					iVar12++;
				}
			}
		}

void func_137(vector3 vParam0, float fParam3)
{
	if (func_119(vParam0))
	{
		return;
	}
	clear_area(vParam0, fParam3, 2212363);
}

void func_138()
{
	func_361(1);
	func_361(4);
}

void func_139(var uParam0, int iParam1)
{
	_0xb909149f2bb5f6da(&(uParam0->f_432), iParam1);
}

void func_140(var uParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	_copy_memory(uParam0, &Var0, 10);
}

void func_141(var uParam0)
{
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	_copy_memory(uParam0, &Var0, 9);
}

void func_142(bool bParam0)
{
	if (!bParam0)
	{
		func_303(13);
	}
	else
	{
		func_163(13);
	}
}

void func_143(bool bParam0)
{
	if (bParam0)
	{
		func_163(38);
	}
	else
	{
		func_303(38);
	}
}

void func_144(var uParam0, var uParam1)
{
	if (!uParam0->f_47)
	{
		return;
	}
	func_93(uParam0, uParam1);
	func_362(0);
	uParam0->f_47 = 0;
}

void func_145()
{
	_uitutorial_set_rpg_icon_visibility(0, 0);
	_uitutorial_set_rpg_icon_visibility(1, 0);
	_uitutorial_set_rpg_icon_visibility(2, 0);
	_uitutorial_set_rpg_icon_visibility(3, 0);
	_uitutorial_set_rpg_icon_visibility(4, 0);
	_uitutorial_set_rpg_icon_visibility(5, 0);
	_uitutorial_set_rpg_icon_visibility(6, 0);
	_uitutorial_set_rpg_icon_visibility(7, 0);
	_uitutorial_set_rpg_icon_visibility(8, 0);
	_uitutorial_set_rpg_icon_visibility(9, 0);
	_uitutorial_set_rpg_icon_visibility(10, 0);
	_uitutorial_set_rpg_icon_visibility(11, 0);
}

bool func_146(var uParam0, int iParam1)
{
	bVar0 = true;
	Var1 = { func_363(&(uParam0->f_432.f_2), 0) };
	Var25 = { func_364(0) };
	func_365(&(uParam0->f_432.f_2), &Var29, 1);
	switch (iParam1)
	{
		case 0:
			if (compare_strings(&(Var1.f_12), func_366(), false, -1) == 0)
			{
				bVar0 = false;
				if (func_170(uParam0, 0))
				{
				}
				else if (func_367(&(uParam0->f_432.f_2), 0, "Skippy"))
				{
					func_191(uParam0, 0);
				}
			}
			if (!func_368(&(uParam0->f_432.f_2), 692350163))
			{
				bVar0 = false;
				if (func_170(uParam0, 1))
				{
				}
				else if (func_369(&(uParam0->f_432.f_6), 692350163, uParam0->f_432.f_2, -1585141069, 1, &(uParam0->f_432.f_16), 1, 205718222, -1, 1))
				{
					func_191(uParam0, 1);
				}
			}
			if (!_0xb881ca836cc4b6d4(&Var29))
			{
				bVar0 = false;
				if (func_370(1) <= 0)
				{
					if (func_170(uParam0, 2))
					{
					}
					else if (func_371(-1118096539, 0, 1, 0) <= 0)
					{
						bVar0 = true;
					}
					else if (func_369(&(uParam0->f_432.f_32), 2082043658, Var25, 1221327846, 1, &(uParam0->f_432.f_42), 1, 205718222, -1, 1))
					{
						func_191(uParam0, 2);
					}
				}
				else if (!func_170(uParam0, 3))
				{
					Var29 = { func_372(1) };
					if (!_0xb881ca836cc4b6d4(&Var29))
					{
					}
					else if (func_373(&Var29, &(uParam0->f_432.f_2), 1))
					{
						func_191(uParam0, 3);
					}
				}
			}
			break;
	}
	if (!bVar0)
	{
		return false;
	}
	return func_178(&(uParam0->f_584.f_2), iParam1, 1);
}

void func_147(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 <= -1 || iParam1 >= 1)
	{
		return;
	}
	if (network_does_network_id_exist(&(uParam0->f_3[iParam1])))
	{
		iVar0 = net_to_ped(&(uParam0->f_3[iParam1]));
		if (does_entity_belong_to_this_script(iVar0, true))
		{
			if (bParam2)
			{
				if (is_ped_on_mount(iVar0))
				{
					_remove_ped_from_mount(iVar0, true, false);
				}
				iVar1 = _get_rider_of_mount(iVar0, false);
				if (does_entity_exist(iVar1))
				{
					_remove_ped_from_mount(iVar1, true, false);
				}
				delete_ped(&iVar0);
			}
			else
			{
				_0x39a2fc5af55a52b1(iVar0, -1);
				set_ped_as_no_longer_needed(&iVar0);
			}
		}
	}
	uParam0->f_3[iParam1] = 0;
	func_374(uParam0, iParam1, 0);
}

void func_148(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 <= -1 || iParam1 >= 1)
	{
		return;
	}
	if (network_does_network_id_exist(&(uParam0->f_8[iParam1])))
	{
		iVar0 = net_to_veh(&(uParam0->f_8[iParam1]));
		if (does_entity_belong_to_this_script(iVar0, true))
		{
			if (bParam2)
			{
				func_375(&iVar0);
				delete_vehicle(&iVar0);
			}
			else
			{
				set_vehicle_as_no_longer_needed(&iVar0);
			}
		}
	}
	uParam0->f_8[iParam1] = 0;
	func_376(uParam0, iParam1, 0);
}

void func_149(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 <= -1 || iParam1 >= 2)
	{
		return;
	}
	if (network_does_network_id_exist(&(uParam0->f_13[iParam1])))
	{
		iVar0 = net_to_ent(&(uParam0->f_13[iParam1]));
		if (does_entity_belong_to_this_script(iVar0, true))
		{
			if (is_entity_attached_to_any_object(iVar0))
			{
				detach_entity(iVar0, false, true);
			}
			if (bParam2)
			{
				delete_entity(&iVar0);
			}
			else
			{
				set_entity_as_no_longer_needed(&iVar0);
			}
		}
	}
	uParam0->f_13[iParam1] = 0;
	func_377(uParam0, iParam1, 0);
}

void func_150(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 <= -1 || iParam1 >= 1)
	{
		return;
	}
	if (network_does_network_id_exist(&(uParam0->f_19[iParam1])))
	{
		iVar0 = _0xd08066e00d26c448(&(uParam0->f_19[iParam1]));
		if (_does_propset_exist(iVar0))
		{
			if (bParam2)
			{
				_delete_propset(iVar0, true, true);
			}
			else
			{
				_set_propset_as_no_longer_needed(iVar0);
			}
		}
	}
	uParam0->f_19[iParam1] = 0;
}

void func_151(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 <= -1 || iParam2 >= 3)
	{
		return;
	}
	(*uParam0)[uParam1->f_1]->f_2[iParam2] = 0;
}

void func_152(var uParam0, int iParam1)
{
	if (iParam1 <= -1 || iParam1 >= 1)
	{
		return;
	}
	if (!_0x8f4f050054005c27(&(uParam0->f_21), iParam1))
	{
		return;
	}
	_0xb909149f2bb5f6da(&(uParam0->f_21), iParam1);
}

void func_153(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_on_mount(iParam0))
		{
			_remove_ped_from_mount(iParam0, true, false);
		}
	}
}

void func_154(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_163(66);
		if (bParam1)
		{
			func_163(69);
		}
	}
	else
	{
		func_303(66);
		func_303(69);
	}
}

void func_155(bool bParam0)
{
	if (!bParam0)
	{
		func_303(18);
	}
	else
	{
		func_163(18);
	}
}

void func_156(bool bParam0)
{
	if (!bParam0)
	{
		func_303(20);
	}
	else
	{
		func_163(20);
	}
}

void func_157()
{
	func_378(0, 0, 0);
	func_378(1, 0, 0);
	func_378(2, 0, 0);
}

bool func_158(int iParam0)
{
	return func_379(1, iParam0);
}

bool func_159(int iParam0)
{
	if (iParam0 == 255)
	{
		return func_380();
	}
	return func_35(64, iParam0);
}

void func_160(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_78(iParam0);
	if (!func_381(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_382(128) && !func_383(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_384() == 4)
	{
		func_303(18);
	}
	func_385(1024);
}

void func_161(vector3 vParam0, var uParam3, bool bParam4)
{
	if (func_386(vParam0, uParam3))
	{
		func_387(1, bParam4);
	}
}

bool func_162(int iParam0)
{
	return func_379(48, iParam0);
}

int func_163(int iParam0)
{
	if (func_388(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_164(vector3 vParam0, float fParam3, vector3 vParam4, int iParam7)
{
	if (func_162(255))
	{
		func_389(&(Global_1102219->f_3879));
		Global_1102219->f_3879.f_6 = { vParam0 };
		if (does_entity_exist(iParam7))
		{
			Global_1102219->f_3879.f_4 = iParam7;
			Global_1102219->f_3879.f_5 = 3;
		}
		else if (!func_119(vParam4))
		{
			Global_1102219->f_3879.f_1 = { vParam4 };
			Global_1102219->f_3879.f_5 = 2;
		}
		else
		{
			Global_1102219->f_3879 = fParam3;
			Global_1102219->f_3879.f_5 = 1;
		}
		func_390(Global_1102219->f_3879, 36);
		func_163(4);
		func_303(48);
		return true;
	}
	return false;
}

bool func_165(int iParam0)
{
	return func_391(func_354(iParam0), 4);
}

void func_166(var uParam0, var uParam1)
{
	if (uParam0->f_47)
	{
		return;
	}
	func_93(uParam0, uParam1);
	func_362(1);
	uParam0->f_47 = 1;
}

void func_167(var uParam0, var uParam1)
{
	if (uParam1->f_277 >= 6)
	{
		return;
	}
	if (!(*uParam1)[uParam1->f_277]->f_44)
	{
		return;
	}
	if (func_392(4))
	{
		return;
	}
	iVar0 = func_84(uParam1->f_277);
	if (iVar0 == 0)
	{
		uParam1->f_277++;
		return;
	}
	iVar1 = func_394(-55206167, func_393(1), -1990194462, 1, 0, 0);
	iVar2 = func_395(uParam1->f_277);
	switch (func_397((*uParam1)[uParam1->f_277], iVar0, 1, 255, func_396(uParam1->f_277)))
	{
		case 1:
			break;
		case 2:
			if (iVar1 >= iVar2)
			{
			}
			(*uParam1)[uParam1->f_277]->f_45 = 1;
			uParam1->f_277++;
			break;
		case 3:
			func_90(uParam0, func_398(uParam1->f_277), -1);
			break;
		default:
			break;
	}
}

bool func_168(int iParam0)
{
	iVar0 = 6;
	if (func_399(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
	}
	return iVar0 != 6;
}

bool func_169(var uParam0)
{
	return func_168(uParam0->f_39.f_1);
}

bool func_170(var uParam0, int iParam1)
{
	return _0x8f4f050054005c27(&(uParam0->f_432), iParam1);
}

var func_171(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_172(var uParam0, int iParam1, int iParam2)
{
	if (!uParam0->f_47)
	{
		return false;
	}
	iVar0 = 0;
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 < 14)
	{
		if (uParam0[iVar2] == 0)
		{
		}
		else
		{
			_0x785177e4d57d7389(iParam1, uParam0[iVar2], (*uParam0)[iVar2]->f_1, 0, -1);
			iVar0 = _0xc08e804c91f47c80(iParam1, uParam0[iVar2]);
			if (iVar0 > (*uParam0)[iVar2]->f_2)
			{
				uParam0->f_44 = (uParam0->f_44 + (iVar0 - (*uParam0)[iVar2]->f_2));
				(*uParam0)[iVar2]->f_2 = iVar0;
			}
			if ((*uParam0)[iVar2]->f_2 >= (*uParam0)[iVar2]->f_1)
			{
			}
		}
		iVar2++;
	}
	if (does_entity_exist(uParam0->f_46))
	{
		if (!_is_ped_hogtying(iParam2))
		{
			uParam0->f_46 = 0;
			uParam0->f_44++;
			uParam0->f_45++;
		}
	}
	else if (_is_ped_hogtying(iParam2))
	{
		uParam0->f_46 = func_400(iParam2, 0);
		if (does_entity_exist(uParam0->f_46) && !is_entity_dead(uParam0->f_46))
		{
		}
		else
		{
			uParam0->f_46 = 0;
		}
	}
	if (uParam0->f_45 >= 4)
	{
		bVar1 = true;
	}
	if (uParam0->f_43 == 0 && uParam0->f_44 > 0)
	{
		uParam0->f_43 = func_171("STORY_COOP_FAIL_LAW_WARN", 10000, 0, 0, 0, 1);
	}
	if (uParam0->f_44 > 8)
	{
		bVar1 = true;
	}
	if (func_401(iParam1, 1, 0, 1))
	{
		return true;
	}
	if (bVar1)
	{
		return true;
	}
	return false;
}

void func_173(var uParam0)
{
	if (func_170(uParam0, 4))
	{
		return;
	}
	uParam0->f_432.f_90 = uParam0->f_14;
	func_191(uParam0, 4);
}

void func_174(var uParam0)
{
	func_63(uParam0);
	func_26(uParam0, 8);
}

void func_175(int iParam0, int iParam1)
{
	if (func_309(iParam0, iParam1))
	{
	}
	Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 - (Global_1051439->f_72[iParam0]->f_1 && iParam1));
}

bool func_176()
{
	return (Global_1915715->f_20637 || Global_1915715->f_22504.f_1);
}

bool func_177(int iParam0)
{
	if (func_176())
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_178(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 <= -1 || iParam1 >= 6)
	{
		return false;
	}
	if (!(*uParam0)[iParam1]->f_44)
	{
		(*uParam0)[iParam1]->f_44 = 1;
	}
	if (bParam2)
	{
		if (!(*uParam0)[iParam1]->f_45)
		{
			return false;
		}
	}
	return true;
}

int func_179(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_180(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_181(var uParam0, var uParam1, var uParam2)
{
	func_402(uParam2);
	switch (uParam2->f_574)
	{
		case 0:
			if (!func_212(uParam0, uParam2, 0, "script@MPSTORY@MPINTRO@LEADIN@MCS4@Leadin", 0, "pl_idle", 0, 1, 1))
			{
				return;
			}
			if (!func_403(uParam0, 0, 1600083684, 1f, 1f, 1f, 0f, 0f, 0f, 0, 1))
			{
				return;
			}
			if (!func_403(uParam0, 1, 13672415, 1f, 1f, 1f, 0f, 0f, 0f, 0, 1))
			{
				return;
			}
			if (!func_404(uParam0, uParam2))
			{
				return;
			}
			if (func_405(uParam0, uParam1, uParam2))
			{
				func_406(uParam2, 1);
			}
			break;
		case 1:
			func_407(uParam2, &(uParam2->f_432.f_74), 1);
			if (uParam2->f_432.f_86)
			{
				return;
			}
			if (func_193(uParam2->f_5, uParam2->f_432.f_70) >= 15f)
			{
				return;
			}
			iVar0 = func_200(uParam0, 0);
			vVar1 = { uParam2->f_5 - get_entity_coords(iVar0, true, false) };
			fVar4 = func_408(get_entity_forward_vector(iVar0), vVar1);
			fVar5 = func_408(_0x935a30aa88fb1014(iVar0), vVar1);
			if (fVar4 < 0f)
			{
				if (fVar5 > 0f)
				{
					StringCopy(&(uParam2->f_574.f_1), "pl_greet_l", 64);
				}
				else
				{
					StringCopy(&(uParam2->f_574.f_1), "pl_greet_r", 64);
				}
			}
			else if (fVar5 > 0f)
			{
				StringCopy(&(uParam2->f_574.f_1), "pl_greet_l_b", 64);
			}
			else
			{
				StringCopy(&(uParam2->f_574.f_1), "pl_greet_r_b", 64);
			}
			func_409(uParam0, uParam2, 0, &(uParam2->f_574.f_1));
			uParam2->f_574.f_9 = uParam2->f_14;
			func_406(uParam2, 2);
			break;
		case 2:
			if (!func_410(uParam0, uParam2, 0, &(uParam2->f_574.f_1)))
			{
				func_208(uParam2, 1);
				if (!func_411(uParam0, uParam2, 0, &(uParam2->f_574.f_1), 1))
				{
					return;
				}
				if (!func_412(uParam0, uParam2, 0, 0))
				{
					func_411(uParam0, uParam2, 0, "pl_idle", 1);
					return;
				}
				uParam2->f_432.f_86 = 1;
			}
			if (!func_413(uParam0, uParam2, 0, "s_idle"))
			{
				return;
			}
			if (func_411(uParam0, uParam2, 0, "pl_idle", 1))
			{
				func_414(uParam0, uParam2, 0, &(uParam2->f_574.f_1));
				func_406(uParam2, 1);
			}
			break;
		default:
			func_406(uParam2, 0);
			break;
	}
}

void func_182(var uParam0, var uParam1, int iParam2)
{
	func_415(uParam0, 293773700);
	uParam0->f_375.f_2 = { *uParam1 };
	func_78(1);
	uParam0->f_375.f_1 = iParam2;
}

bool func_183(var uParam0, int iParam1, int iParam2)
{
	if (_does_volume_exist(&(uParam0->f_113[iParam1])))
	{
		return true;
	}
	func_103(uParam0, 0);
	if (!func_107(uParam0, -928496371, iParam2, 0))
	{
		return false;
	}
	iVar0 = func_111(uParam0, 786289686, 0, 0);
	Var1 = -1612834106;
	Var1.f_1 = -1;
	Var1.f_12 = 1;
	Var1.f_13 = 1;
	Var1.f_17 = 1;
	Var1.f_18 = 1;
	Var1.f_19 = 10208;
	Var1.f_22 = -1;
	Var1.f_23 = -1;
	Var1.f_27 = 15;
	iVar29 = 0;
	while (iVar29 < iVar0)
	{
		if (!func_416(uParam0, iVar29, &Var1))
		{
			func_90(uParam0, func_417(iParam1), -1);
			return false;
		}
		Var1.f_11 = iVar0 > 1;
		if (!func_418(uParam0, iParam1, &Var1))
		{
			func_90(uParam0, func_419(iParam1), -1);
			return false;
		}
		iVar29++;
	}
	return true;
}

void func_184(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (uParam0->f_425 == iParam1)
	{
		return;
	}
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	func_58(uParam0, 1);
	uParam0->f_425 = iParam1;
	func_420(uParam0, iParam2);
	uParam0->f_425.f_1 = iParam3;
	if (iParam4 == 1)
	{
		_0x264e9a5cd78c338f(uParam0->f_425);
	}
}

bool func_185(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_210(iParam3))
	{
		return false;
	}
	func_94(uParam0, uParam1, iParam2);
	return true;
}

void func_186(var uParam0)
{
	if (func_33(uParam0, 256))
	{
		_0x3a9a281ff71249e9("RespawnPulseMP01", 500);
	}
}

void func_187(var uParam0, var uParam1, var uParam2)
{
	if (does_blip_exist(&(uParam2->f_39.f_11[0])))
	{
		return;
	}
	func_421(uParam0, uParam1, uParam2, 0, 1, 1);
	func_422(uParam2, 0, -1878373110, 1);
	func_422(uParam2, 0, 231194138, 1);
	func_422(uParam2, 0, -521680853, 1);
	func_103(uParam2, 0);
	iVar0 = func_111(uParam2, 401397137, uParam2->f_864.f_12, 0);
	if (iVar0 <= 0)
	{
		return;
	}
	func_423(uParam2, 0, 1341618894, 1, 1);
	iVar4 = 0;
	while (iVar4 < iVar0)
	{
		vVar1 = { func_105(uParam2, -2052354998, uParam2->f_864.f_12, iVar4) };
		if (func_119(vVar1))
		{
		}
		else
		{
			add_point_to_gps_multi_route(vVar1, func_333(uParam2, -1298475390, uParam2->f_864.f_12, iVar4));
		}
		iVar4++;
	}
	set_gps_multi_route_render(true);
	set_gps_flags(128, 0f);
}

bool func_188(var uParam0, var uParam1)
{
	iVar0 = 1;
	if (!func_212(uParam0, uParam1, 1, "cutscene@MPINTRO_MCS4", 0, "MultiStart", 0, 1, 1))
	{
		iVar0 = 0;
	}
	if (!func_213(uParam0, uParam1, 1))
	{
		iVar0 = 0;
	}
	if (!func_404(uParam0, uParam1))
	{
		iVar0 = 0;
	}
	if (!func_403(uParam0, 0, 1600083684, 1f, 1f, 1f, 0f, 0f, 0f, 0, 1))
	{
		iVar0 = 0;
	}
	if (!func_403(uParam0, 1, 13672415, 1f, 1f, 1f, 0f, 0f, 0f, 0, 1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_189(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	if (uParam0->f_39.f_9 != 0)
	{
		return;
	}
	if (func_33(uParam0, 16))
	{
		return;
	}
	if (uParam0->f_39.f_4 == iParam1)
	{
		if (func_168(uParam0->f_39.f_5))
		{
			return;
		}
	}
	if (iParam3 > 0)
	{
		if (uParam0->f_39.f_7 != iParam3)
		{
			uParam0->f_39.f_7 = iParam3;
			func_424(uParam0->f_39.f_7);
		}
		if (uParam0->f_39.f_8 != iParam2)
		{
			uParam0->f_39.f_8 = iParam2;
			func_425(iParam2);
		}
	}
	else if (uParam0->f_39.f_7 > 0)
	{
		uParam0->f_39.f_7 = 0;
		uParam0->f_39.f_8 = -1;
		func_292();
	}
	uParam0->f_39.f_4 = iParam1;
	if (is_string_null_or_empty(sParam4))
	{
		uParam0->f_39.f_5 = func_426(_create_var_string(0, uParam0->f_39.f_4), -1, 0, 0, 1);
	}
	else
	{
		uParam0->f_39.f_5 = func_426(sParam4, -1, 0, 0, 1);
	}
	uParam0->f_39.f_6 = uParam0->f_14;
}

int func_190(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_33(uParam0, 8))
	{
		return 0;
	}
	if (iParam1 == uParam0->f_39)
	{
		if (func_169(uParam0))
		{
			return 1;
		}
		if (iParam2 != -1)
		{
			return 1;
		}
	}
	uParam0->f_39 = iParam1;
	uParam0->f_39.f_2 = uParam0->f_14;
	if (iParam3 != 0 && iParam4 != 0)
	{
		uParam0->f_39.f_3 = _0x3e593df9c2962ec6(iParam4);
		set_blip_sprite(uParam0->f_39.f_3, iParam3, true);
		uParam0->f_39.f_1 = func_171(_create_var_string(0, uParam0->f_39, uParam0->f_39.f_3), iParam2, 0, 0, 0, 1);
	}
	else
	{
		uParam0->f_39.f_1 = func_171(_create_var_string(0, uParam0->f_39), iParam2, 0, 0, 0, 1);
	}
	return 1;
}

void func_191(var uParam0, int iParam1)
{
	_0xe84aac1b22a73e99(&(uParam0->f_432), iParam1);
}

bool func_192(var uParam0, int iParam1)
{
	if (!func_169(uParam0))
	{
		return false;
	}
	return uParam0->f_39 == iParam1;
}

float func_193(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

void func_194(bool bParam0, bool bParam1, bool bParam2)
{
	Global_1071686->f_7 = 1;
	if ((Global_1296859->f_21 - Global_1071686->f_9) > 2)
	{
		if (bParam2)
		{
			func_427(20f);
		}
	}
	Global_1071686->f_9 = Global_1296859->f_21;
	if (bParam0)
	{
		_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = int_to_playerindex(iVar2);
		if (!_network_is_player_index_valid(iVar0))
		{
		}
		else if (!network_is_player_active(iVar0))
		{
		}
		else
		{
			iVar1 = get_player_ped(iVar0);
			if (!does_entity_exist(iVar1))
			{
			}
			else if (network_has_control_of_entity(iVar1))
			{
				set_ped_reset_flag(iVar1, 96, true);
			}
		}
		iVar2++;
	}
	if (func_428())
	{
		_0x236905c700fdb54d();
	}
	set_ped_reset_flag(player_ped_id(), 25, true);
	_0x3c8f74e8fe751614();
	_0x634f4a0562cf19b8();
	func_429(250);
	if (bParam1)
	{
		_0x5651516d947abc53();
	}
}

void func_195(var uParam0)
{
	func_415(uParam0, -940387254);
	func_78(3);
	uParam0->f_375.f_1 = 0;
}

bool func_196(vector3 vParam0, float fParam3)
{
	if (!func_430(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = 1886596441;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1073571568;
		_datafile_get_float(fParam3, &Var0);
		return true;
	}
	return false;
}

Vector3 func_197(float fParam0)
{
	return -sin(fParam0), cos(fParam0), 0f;
}

Vector3 func_198(vector3 vParam0)
{
	vVar0 = { func_431(vParam0) };
	fVar3 = atan2(vVar0.y, vVar0.x);
	fVar4 = -atan2(vVar0.z, sqrt(((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y))));
	return 0f, fVar4, fVar3;
}

void func_199(var uParam0, var uParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9)
{
	if (!func_301(uParam0, uParam1, iParam2, &iVar0, &uVar1))
	{
		return;
	}
	if (!_does_anim_scene_exist(iVar0))
	{
		return;
	}
	set_anim_scene_origin(iVar0, vParam3, vParam6, iParam9);
}

int func_200(var uParam0, int iParam1)
{
	if (!network_does_network_id_exist(&(uParam0->f_13[iParam1])))
	{
		return 0;
	}
	return net_to_ent(&(uParam0->f_13[iParam1]));
}

void func_201(var uParam0, var uParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (!does_entity_exist(iParam4))
	{
		return;
	}
	if (!func_301(uParam0, uParam1, iParam2, &iVar0, &uVar1))
	{
		return;
	}
	if (!_does_anim_scene_exist(iVar0))
	{
		return;
	}
	set_anim_scene_entity(iVar0, sParam3, iParam4, iParam5);
}

bool func_202(int iParam0, int iParam1, float fParam2)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	func_432(0);
	if (is_ped_on_mount(iParam0) && !func_433(iParam0, 501393341))
	{
		task_dismount_animal(iParam0, 0, 0, 0, 0, 0);
	}
	else if (!is_ped_on_mount(iParam0))
	{
		if ((func_203(iParam1, 0) && func_434(iParam0, iParam1, fParam2, 1, 1)) && !func_433(iParam1, 518218985))
		{
			clear_ped_tasks(iParam1, 1, 0);
			task_smart_flee_coord(iParam1, get_entity_coords(iParam0, true, false), fParam2, -1, 256, 0.101f);
			_0x2208438012482a1a(iParam1, false, false);
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_203(int iParam0, int iParam1)
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
	if (func_352(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_352(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_352(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_352(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_352(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_352(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_352(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_352(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_204(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (!func_301(uParam0, uParam2, iParam3, &iVar0, &uVar1))
	{
		return false;
	}
	if (!_does_anim_scene_exist(iVar0))
	{
		return false;
	}
	if (_is_anim_scene_started(iVar0, false))
	{
		return true;
	}
	if (network_does_network_id_exist(&(uParam0->f_23[iParam3])))
	{
		if (!_is_anim_scene_loaded(iVar0, true, false))
		{
			return false;
		}
		bVar2 = false;
		iVar3 = 0;
		while (iVar3 < 4)
		{
			if ((*uParam1)[iVar3]->f_2[iParam3] & 1 != 0)
			{
				bVar2 = true;
			}
			else
			{
				iVar3++;
			}
		}
		if (!bVar2)
		{
			return false;
		}
	}
	else if (!_is_anim_scene_loaded(iVar0, false, false))
	{
		return false;
	}
	start_anim_scene(iVar0);
	if (bParam4)
	{
		if (func_435())
		{
			func_436();
		}
		if (func_437())
		{
			func_438();
		}
		if (_is_any_app_active())
		{
			_close_all_apps();
		}
		if (is_pause_menu_active())
		{
			set_frontend_active(false);
		}
	}
	return true;
}

void func_205(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		set_current_ped_weapon(iParam0, -1569615261, true, 0, false, false);
		set_current_ped_weapon(iParam0, -1569615261, true, 1, false, false);
		if (is_ped_a_player(iParam0) && iParam1 == 1)
		{
			if (is_player_playing(player_id()))
			{
				_0xcffc3eccd7a5cceb(player_id(), -1569615261, 0);
			}
		}
	}
}

void func_206(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_207(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	_0xe296208c273bd7f0(iParam1, iParam2, iParam3, iParam4, iParam5, 0);
	func_64(uParam0);
	if (bParam6)
	{
		func_63(uParam0);
		func_26(uParam0, 24);
	}
}

void func_208(var uParam0, int iParam1)
{
	if (iParam1 <= 0 || iParam1 >= 2)
	{
		return;
	}
	if (&uParam0->f_105.f_3[iParam1] == -1)
	{
		return;
	}
	if (!is_stream_playing(&(uParam0->f_105.f_3[iParam1])))
	{
		stop_stream(&(uParam0->f_105.f_3[iParam1]));
		uParam0->f_105.f_3[iParam1] = -1;
		return;
	}
	stop_stream(&(uParam0->f_105.f_3[iParam1]));
	uParam0->f_105.f_3[iParam1] = -1;
}

void func_209(int iParam0)
{
	func_439(2, iParam0);
}

bool func_210(int iParam0)
{
	if (!_0xf9e7dbb39080640b())
	{
		return false;
	}
	if (_is_loading_screen_active())
	{
		shutdown_loading_screen();
		return false;
	}
	else if (!is_screen_faded_in())
	{
		if (!is_screen_fading_in())
		{
			func_440();
			do_screen_fade_in(iParam0);
		}
		return false;
	}
	return true;
}

bool func_211(var uParam0, var uParam1, int iParam2, float fParam3)
{
	if (!func_301(uParam0, uParam1, iParam2, &iVar0, &iVar1))
	{
		return false;
	}
	if (!_does_anim_scene_exist(iVar0))
	{
		return false;
	}
	if (fParam3 > 0f && _get_anim_scene_progress(iVar0) >= fParam3)
	{
		return true;
	}
	if (iVar1 & 2 != 0)
	{
		if (_get_anim_scene_progress(iVar0) <= 0.99f)
		{
			return false;
		}
	}
	else if (!_is_anim_scene_finished(iVar0, false))
	{
		return false;
	}
	return true;
}

bool func_212(var uParam0, var uParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!func_301(uParam0, uParam1, iParam2, &iVar0, &uVar1))
	{
		return false;
	}
	if (!_does_anim_scene_exist(iVar0))
	{
		iParam4 |= 256;
		uParam1->f_120.f_247[iParam2] = _create_anim_scene(sParam3, iParam4, sParam5, bParam6, bParam7);
		if (!_does_anim_scene_exist(&(uParam1->f_120.f_247[iParam2])))
		{
			return false;
		}
		if (bParam8)
		{
			load_anim_scene(&(uParam1->f_120.f_247[iParam2]));
		}
		uParam1->f_120.f_247[iParam2]->f_1 = iParam4;
	}
	return true;
}

bool func_213(var uParam0, var uParam1, int iParam2)
{
	if (!func_301(uParam0, uParam1, iParam2, &iVar0, &uVar1))
	{
		return false;
	}
	if (!_is_anim_scene_loaded(iVar0, true, false))
	{
		if (_0xf8d1d2dab6007eef(iVar0, 1))
		{
		}
		return false;
	}
	if (!_is_anim_scene_metadata_loaded(iVar0, false))
	{
		return false;
	}
	return true;
}

void func_214(var uParam0, var uParam1)
{
	if (func_170(uParam1, 24))
	{
		return;
	}
	if (!func_170(uParam1, 13))
	{
		iVar0 = func_441(13);
		if (func_442(uParam0, uParam1, 2, get_player_ped(get_player_index()), iVar0))
		{
			func_190(uParam1, 292620101, 10000, 0, 0);
		}
		if (func_192(uParam1, 292620101))
		{
			func_191(uParam1, 13);
		}
		return;
	}
	if (!func_170(uParam1, 14))
	{
		iVar0 = func_441(14);
		if (func_442(uParam0, uParam1, 2, get_player_ped(get_player_index()), iVar0))
		{
			func_63(uParam1);
			func_191(uParam1, 14);
		}
		return;
	}
	if (!func_170(uParam1, 15))
	{
		iVar0 = func_441(15);
		if (func_442(uParam0, uParam1, 2, get_player_ped(get_player_index()), iVar0))
		{
			func_190(uParam1, 377888522, 10000, 0, 0);
		}
		if (func_192(uParam1, 377888522))
		{
			func_191(uParam1, 15);
		}
		return;
	}
	if (!func_170(uParam1, 16))
	{
		iVar0 = func_441(16);
		if (func_442(uParam0, uParam1, 2, get_player_ped(get_player_index()), iVar0))
		{
			func_63(uParam1);
			func_191(uParam1, 16);
		}
		return;
	}
	if (!func_170(uParam1, 17))
	{
		iVar0 = func_441(17);
		if (func_442(uParam0, uParam1, 2, get_player_ped(get_player_index()), iVar0))
		{
			func_190(uParam1, 1852588690, 10000, -1906191545, 1699087565);
		}
		if (func_192(uParam1, 1852588690))
		{
			func_191(uParam1, 17);
		}
		return;
	}
	if (!func_170(uParam1, 18))
	{
		iVar0 = func_441(18);
		if (func_442(uParam0, uParam1, 2, get_player_ped(get_player_index()), iVar0))
		{
			func_63(uParam1);
			func_191(uParam1, 18);
		}
		return;
	}
	if (!func_170(uParam1, 19))
	{
		iVar0 = func_441(19);
		if (func_442(uParam0, uParam1, 2, get_player_ped(get_player_index()), iVar0))
		{
			func_190(uParam1, -111504592, 10000, 0, 0);
		}
		if (func_192(uParam1, -111504592))
		{
			func_191(uParam1, 19);
		}
		return;
	}
	if (!func_170(uParam1, 20))
	{
		iVar0 = func_441(20);
		if (func_442(uParam0, uParam1, 2, get_player_ped(get_player_index()), iVar0))
		{
			func_63(uParam1);
			func_191(uParam1, 20);
		}
		return;
	}
	if (!func_170(uParam1, 21))
	{
		iVar0 = func_441(21);
		if (func_442(uParam0, uParam1, 2, get_player_ped(get_player_index()), iVar0))
		{
			func_190(uParam1, -1576091782, 10000, -180188163, 1476777140);
		}
		if (func_192(uParam1, -1576091782))
		{
			func_191(uParam1, 21);
		}
		return;
	}
	if (!func_170(uParam1, 22))
	{
		iVar0 = func_441(22);
		if (func_442(uParam0, uParam1, 2, get_player_ped(get_player_index()), iVar0))
		{
			func_63(uParam1);
			func_191(uParam1, 22);
		}
		return;
	}
	if (!func_170(uParam1, 23))
	{
		iVar0 = func_441(23);
		if (func_442(uParam0, uParam1, 2, get_player_ped(get_player_index()), iVar0))
		{
			func_190(uParam1, 910507549, 10000, 0, 0);
		}
		if (func_192(uParam1, 910507549))
		{
			func_191(uParam1, 23);
		}
		return;
	}
	if (!func_170(uParam1, 24))
	{
		iVar0 = func_441(24);
		if (func_442(uParam0, uParam1, 2, get_player_ped(get_player_index()), iVar0))
		{
			func_63(uParam1);
			func_191(uParam1, 24);
		}
		return;
	}
}

void func_215(bool bParam0)
{
	if (func_443())
	{
		if ((!Global_1051252->f_15 || ((Global_1048577 || Global_1048581) // PointerArith && !&Global_1049271)) && func_428())
		{
			func_444();
			func_445(bParam0);
			func_446(16);
		}
		else if (&Global_1049271)
		{
			if (func_447(15))
			{
				func_446(15);
				func_448(16);
			}
		}
	}
	else
	{
		func_450((func_449() && func_447(16)));
		if (func_447(16))
		{
			func_446(16);
		}
	}
}

void func_216()
{
	if (!Global_1572887->f_6)
	{
		Global_1572887->f_6 = 1;
		_0xe9f24081d84931b8();
	}
}

void func_217()
{
	if (!Global_1102219->f_3977)
	{
		Global_1102219->f_3977 = 1;
	}
}

bool func_218(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6)
{
	if (iParam1 <= -1 || iParam1 >= 1)
	{
		return false;
	}
	if (_does_scenario_point_exist(&(uParam0->f_37[iParam1])))
	{
		return true;
	}
	iVar0 = _find_closest_active_scenario_point_of_type(vParam3, iParam2, fParam6, 0, false);
	if (!_does_scenario_point_exist(iVar0))
	{
		return false;
	}
	uParam0->f_37[iParam1] = iVar0;
	return true;
}

int func_219(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)
{
	iVar0 = get_id_of_this_thread();
	if (func_451(72))
	{
		func_452(&(Global_1291734->f_11.f_119));
		return 0;
	}
	iVar1 = player_id();
	if (Global_1291734->f_581 != 0)
	{
		if (_network_is_player_index_valid(iVar1))
		{
			iVar2 = _0xb9050a97594c8832(iVar1);
			if (Global_1291734->f_581 == 1)
			{
				if (does_entity_exist(iVar2))
				{
					if (iParam8 == 0)
					{
						return 0;
					}
					else if (bParam9)
					{
						if (!func_453(1))
						{
							return 0;
						}
					}
					else if (!func_454(1))
					{
						return 0;
					}
				}
			}
			else
			{
				func_455(1);
				return 0;
			}
		}
	}
	if (func_451(70))
	{
		if (!func_456(&(Global_1291734->f_11.f_119)))
		{
			func_457(&(Global_1291734->f_11.f_119), 0);
		}
		fVar3 = func_458(&(Global_1291734->f_11.f_119));
		if (fVar3 > 10f)
		{
			func_459(1);
			Global_1291734->f_11.f_104 = iVar0;
			return 0;
		}
		if (Global_1291734->f_11.f_70 != 0)
		{
			if (!is_thread_active(Global_1291734->f_11.f_70, false))
			{
				func_459(1);
				return 0;
			}
			if (Global_1291734->f_11.f_70 != iVar0)
			{
				Global_1291734->f_11.f_104 = 0;
				func_452(&(Global_1291734->f_11.f_119));
				return 0;
			}
		}
		if (Global_1291734->f_11 != 11)
		{
			return 0;
		}
		iVar4 = _0xf49f14462f0ae27c(iVar1);
		if (!does_entity_exist(iVar4))
		{
			return 0;
		}
		Global_1291734->f_11.f_104 = 0;
		func_452(&(Global_1291734->f_11.f_119));
		func_460(71);
		return iVar4;
	}
	if (Global_1291734->f_11 != 1)
	{
		return 0;
	}
	if (is_thread_active(Global_1291734->f_11.f_71, false) && Global_1291734->f_11.f_71 != iVar0)
	{
		return 0;
	}
	if (func_461(255) && func_462(2, 255))
	{
		return 0;
	}
	Global_1291734->f_11.f_70 = iVar0;
	Global_1291734->f_11.f_73 = { vParam0 };
	Global_1291734->f_11.f_77 = iParam3;
	Global_1291734->f_11.f_72 = iParam5;
	Global_1291734->f_11.f_76 = iParam7;
	if (bParam4)
	{
		func_460(73);
	}
	else
	{
		func_463(73);
	}
	if (bParam6)
	{
		func_460(76);
	}
	else
	{
		func_463(76);
	}
	func_460(70);
	func_464(&(Global_1291734->f_11.f_119));
	return 0;
}

Vector3 func_220(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

void func_221(var uParam0, int iParam1)
{
	func_415(uParam0, 389920711);
	func_78(1);
	uParam0->f_375.f_1 = iParam1;
}

void func_222(int iParam0)
{
	if (!func_338(iParam0))
	{
		return;
	}
	if (func_356(iParam0, 8))
	{
		func_465(iParam0, 8);
	}
}

void func_223(var uParam0, var uParam1)
{
	if (!does_entity_exist(uParam1->f_432.f_74))
	{
		return;
	}
	if (func_170(uParam1, 25))
	{
		func_139(uParam1, 25);
	}
	_0x4f806a6cfed89468(uParam1->f_432.f_74, 1);
	set_current_ped_weapon(uParam1->f_432.f_74, -1569615261, false, 0, false, false);
	_0x67e21acc5c0c970c(uParam1->f_432.f_74, 16, 1);
	_0x67e21acc5c0c970c(uParam1->f_432.f_74, 9, 1);
	_0x67e21acc5c0c970c(uParam1->f_432.f_74, 18, 1);
	_0x67e21acc5c0c970c(uParam1->f_432.f_74, 10, 1);
	func_467(func_466(uParam1->f_2));
	uParam1->f_432.f_74 = 0;
}

void func_224(int iParam0)
{
	func_468(&(Global_1940311->f_1433.f_54), iParam0);
}

void func_225(int iParam0)
{
	if (!func_342(iParam0))
	{
		func_469(&((*Global_1134390)[network_player_id_to_int()]->f_73), iParam0);
	}
}

bool func_226(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	Var0 = { func_253(iParam0) };
	if (!func_470(Var0))
	{
		return true;
	}
	if (!func_471(iParam0))
	{
		if (Global_1900736->f_69 <= 0)
		{
			Global_1900736->f_69 = absi(get_cloud_time_as_int());
		}
		else if (absi((Global_1900736->f_69 - get_cloud_time_as_int())) >= Global_1901947->f_677.f_1)
		{
			func_80(22, -1);
		}
		return false;
	}
	else if (Global_1900736->f_69 != 0)
	{
		Global_1900736->f_69 = 0;
	}
	func_472(get_cloud_time_as_int());
	func_473(iParam0, 1);
	if (func_474(iParam0, &uVar2))
	{
		func_476(func_475(-1892463704, uVar2), 1);
		Var3 = { func_475(1671659657, uVar2) };
		stat_id_set_to_posse_id(&Var3);
		iVar5 = 0;
		Var6 = { func_477(-1048906573) };
		if (_0x302e71c1d9ee75b9(&Var6, func_478(Var0), &iVar5) && iVar5 == 0)
		{
			func_476(func_475(909949304, uVar2), 1);
		}
	}
	if (!func_479(iParam0))
	{
		func_480(0);
	}
	func_277();
	func_481(iParam0);
	func_482(iParam0);
	func_483(0);
	func_485(func_484(iParam0));
	func_486(Var0, 1, 1, 0, 1);
	if ((*Global_1835011)[iParam0]->f_32 != -1)
	{
		(*Global_1835011)[iParam0]->f_32 = -1;
	}
	return true;
}

void func_227(var uParam0)
{
	if (func_170(uParam0, 10))
	{
		return;
	}
	_0x78335e12db0bf961(64);
	_0x78335e12db0bf961(128);
	if (_0x277865a734918ae6())
	{
		_0xbb51299166b844f3();
	}
	func_60(1, 2);
	func_191(uParam0, 10);
}

void func_228(int iParam0, bool bParam1)
{
	func_487(iParam0, &iVar0, &iVar1);
	if (!func_488(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_489(iVar0, iVar1);
}

void func_229(int iParam0)
{
	func_490(iParam0);
}

void func_230(bool bParam0)
{
	if (Global_1900688->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_81() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900688->f_2 == 4 && Global_1900688->f_12 != Global_1900688->f_13) && !bParam0)
	{
		Global_1900688->f_1 = Global_1900688->f_2;
		Global_1900688->f_12 = Global_1900688->f_13;
		func_491(iVar0, Global_1900688->f_12);
	}
	else
	{
		Global_1900688->f_1 = 0;
		Global_1900688->f_7 = iVar0;
		Global_1900688->f_8 = func_492();
		Global_1900688->f_9 = func_493(Global_1893587->f_2);
		Global_1900688->f_11 = func_494(Global_1896622->f_41);
		if (Global_1900688->f_9 != -1 && Global_1900688->f_9 != 0)
		{
			func_495(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
		else if (Global_1900688->f_11 != -1)
		{
			func_495(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_11);
		}
		else
		{
			func_495(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
	}
	Global_1900688->f_2 = 0;
}

bool func_231(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

struct<2> func_232()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_233()
{
	return Global_1051252->f_8;
}

bool func_234(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

bool func_235(var uParam0, int iParam1)
{
	return (uParam0->f_17 && iParam1) != 0;
}

int func_236()
{
	if (!func_496())
	{
		return -1;
	}
	return Global_1572887->f_106.f_9;
}

bool func_237(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = int_to_participantindex(iParam0);
	*iParam2 = 255;
	if (!network_is_participant_active(*uParam1))
	{
		return false;
	}
	*iParam2 = network_get_player_index(*uParam1);
	if (!_network_is_player_index_valid(*iParam2))
	{
		return false;
	}
	if (!network_is_player_active(*iParam2))
	{
		return false;
	}
	return true;
}

void func_238(var uParam0, int iParam1)
{
	uParam0->f_6 = iParam1;
	func_36(uParam0, 32);
}

bool func_239(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 <= -1 || iParam1 >= 6)
	{
		return false;
	}
	return (uParam0->f_81[iParam1]->f_4 && iParam2) != 0;
}

void func_240(var uParam0, int iParam1)
{
	if (!func_79(uParam0, iParam1))
	{
		return;
	}
	uParam0->f_1 = (uParam0->f_1 - (uParam0->f_1 && iParam1));
}

void func_241(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	uParam0->f_2 = 0;
	func_308(uParam0, 2);
}

bool func_242(int iParam0)
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

void func_243(var uParam0, int iParam1)
{
	if (func_61(uParam0, iParam1))
	{
		return;
	}
	*uParam0 = (*uParam0 || iParam1);
}

void func_244(var uParam0, int iParam1)
{
	if (!func_61(uParam0, iParam1))
	{
		return;
	}
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_245(var uParam0, var uParam1, int iParam2)
{
	if (func_234((*uParam0)[uParam1->f_1], iParam2))
	{
		return;
	}
	(*uParam0)[uParam1->f_1]->f_1 = ((*uParam0)[uParam1->f_1]->f_1 || iParam2);
}

var func_246(int iParam0, int iParam1)
{
	return func_497(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_247(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

bool func_248(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (get_number_of_free_stacks_of_this_size(1024) <= 0)
	{
		return false;
	}
	request_script("net_session_split");
	if (has_script_loaded("net_session_split"))
	{
		Global_1071686->f_28340 = start_new_script_with_args("net_session_split", &uParam0, 5, 1024);
		set_script_as_no_longer_needed("net_session_split");
		return true;
	}
	return false;
}

bool func_249()
{
	if (!does_script_with_name_hash_exist(889764242))
	{
		return false;
	}
	return _get_number_of_references_of_script_with_name_hash(889764242) > 0;
}

void func_250(var uParam0, var uParam1, int iParam2)
{
	if (!func_234((*uParam0)[uParam1->f_1], iParam2))
	{
		return;
	}
	(*uParam0)[uParam1->f_1]->f_1 = ((*uParam0)[uParam1->f_1]->f_1 - ((*uParam0)[uParam1->f_1]->f_1 && iParam2));
}

void func_251(var uParam0, var uParam1, int iParam2)
{
	(*uParam0)[uParam1->f_112.f_1]->f_4 = iParam2;
	uParam1->f_112.f_12 = (*uParam0)[uParam1->f_112.f_1]->f_4;
	func_281(&(uParam0->f_21), &(uParam1->f_112), 1);
	func_55(&(uParam1->f_112), 256);
	func_250(uParam0, &(uParam1->f_112), 128);
	func_94(&(uParam0->f_21), &(uParam1->f_112), 0);
	func_498(&(uParam1->f_112), 0);
}

void func_252(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

struct<2> func_253(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 100)
	{
		return func_232();
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_254(var uParam0, var uParam1, int iParam2)
{
	(*uParam0)[uParam1->f_1]->f_2 = iParam2;
}

void func_255(var uParam0, var uParam1, int iParam2)
{
	(*uParam0)[uParam1->f_1]->f_3 = iParam2;
}

void func_256(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_500(func_499(Param0));
	iVar1 = func_478(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_81() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_501(Param0, &Var2);
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

void func_257(bool bParam0)
{
	_0xc505036a35afd01b(false);
	iVar0 = player_id();
	iVar1 = _0x901e0dc25080c8b9(iVar0);
	if (_0x4be6c13a45cca8ec(iVar1) == iVar0)
	{
		uVar2 = func_502(iVar1);
		_0xd426e2e3288469d6(&uVar2, &Global_1296859);
		func_503(uVar2);
	}
	func_504(10, bParam0, 0, 0);
}

void func_258(var uParam0, var uParam1, bool bParam2)
{
	func_57(uParam0, uParam1, bParam2);
	func_505(uParam1, 0);
}

void func_259(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (does_blip_exist(&(uParam0->f_39.f_11[iVar0])))
		{
			remove_blip(uParam0->f_39.f_11[iVar0]);
		}
		iVar0++;
	}
	if (uParam0->f_39.f_13 != -1)
	{
		clear_gps_multi_route();
		uParam0->f_39.f_13 = -1;
		iVar1 = 0;
		while (iVar1 < uParam0->f_39.f_55)
		{
			_0x4bdebea5702b97a9(*uParam0->f_39.f_14[uParam0->f_39.f_55], uParam0->f_39.f_14[uParam0->f_39.f_55]->f_3, 1, 1);
			iVar1++;
		}
		uParam0->f_39.f_55 = 0;
		clear_gps_flags();
	}
}

bool func_260(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (func_506(uParam0, uParam1))
	{
		switch (uParam0->f_22)
		{
			case 0:
				if (uParam0->f_20 == -1)
				{
					if (func_507(uParam1))
					{
						if (is_ped_male(*uParam1))
						{
							uParam0->f_20 = _create_anim_scene("script@mp@trans@ReverseAngleCam_GatGun_M", 129, 0, false, true);
						}
						else
						{
							uParam0->f_20 = _create_anim_scene("script@mp@trans@ReverseAngleCam_GatGun_F", 129, 0, false, true);
						}
						bVar0 = true;
					}
					else if (is_ped_on_mount(*uParam1))
					{
						if (is_ped_male(*uParam1))
						{
							uParam0->f_20 = _create_anim_scene("script@mp@trans@ReverseAngleCam_OnHorse_M", 129, 0, false, true);
						}
						else
						{
							uParam0->f_20 = _create_anim_scene("script@mp@trans@ReverseAngleCam_OnHorse_F", 129, 0, false, true);
						}
					}
					else if (is_ped_male(*uParam1))
					{
						uParam0->f_20 = _create_anim_scene("script@mp@trans@ReverseAngleCam_M", 129, 0, false, true);
					}
					else
					{
						uParam0->f_20 = _create_anim_scene("script@mp@trans@ReverseAngleCam_F", 129, 0, false, true);
					}
					vVar1 = { get_entity_coords(*uParam1, true, true) };
					if (bVar0)
					{
						vVar1.f_2 = (vVar1.z + 1f);
					}
					set_anim_scene_origin(uParam0->f_20, vVar1, get_entity_rotation(*uParam1, 2), 2);
					load_anim_scene(uParam0->f_20);
					_0xdf7b5144e25cd3fe(uParam0->f_20, "LIVE");
					func_508(&(uParam0->f_22), 1);
				}
				break;
			case 1:
				iVar4 = func_509(uParam0, uParam1, bParam2, 0, uParam0->f_12);
				if (func_507(uParam1))
				{
					iVar4 = 1;
					uParam0->f_17 = 1;
				}
				if (uParam0->f_9 == 0)
				{
					if (iVar4 == 2)
					{
						uParam0->f_12 = -1;
						uParam0->f_9 = 1;
						if (func_510(uParam1))
						{
							uParam0->f_9 = 2;
						}
					}
					else if (iVar4 == 1)
					{
						func_508(&(uParam0->f_22), 2);
					}
				}
				else if (iVar4 == 1)
				{
					func_508(&(uParam0->f_22), 2);
				}
				else if (iVar4 == 2 || uParam0->f_9 > 1)
				{
					uParam0->f_9++;
					if (uParam0->f_9 > 3)
					{
						if (!does_cam_exist(uParam0[0]))
						{
							(*uParam0)[0] = create_camera(26379945, true);
						}
						func_511((*uParam0)[0]);
						uParam0->f_16 = 1;
						return true;
					}
				}
				break;
			case 2:
				if (_is_anim_scene_loaded(uParam0->f_20, true, false) && _0x23e33cb9f4a3f547(uParam0->f_20, "LIVE"))
				{
					if (uParam0->f_21 == -1)
					{
						uParam0->f_21 = uParam0->f_12;
						func_512(uParam0->f_21, 0, 5);
						set_anim_scene_int(uParam0->f_20, "CameraIndex", uParam0->f_21, false);
						_set_anim_scene_playback_list_bool(uParam0->f_20, "LIVE", true);
						func_513(&(uParam0->f_18), 0, 0);
						func_508(&(uParam0->f_22), 3);
					}
				}
				break;
			case 3:
				if (bParam3)
				{
					if (is_ped_on_mount(*uParam1))
					{
						set_ped_max_move_blend_ratio(*uParam1, 0f);
						if (!is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(*uParam1)))
						{
							return false;
						}
						if (!_is_ped_getting_into_a_mount_seat(*uParam1, true))
						{
							return false;
						}
					}
				}
				if (get_entity_speed(*uParam1) > 0.01f)
				{
					if (func_514(&(uParam0->f_18)) && func_515(&(uParam0->f_18), 0, 0) < 3000)
					{
						return false;
					}
				}
				vVar5 = { get_entity_coords(*uParam1, true, true) };
				set_anim_scene_origin(uParam0->f_20, vVar5, get_entity_rotation(*uParam1, 2), 2);
				func_297(&(uParam0->f_18));
				func_508(&(uParam0->f_22), 4);
				break;
			case 4:
				if (uParam0->f_17)
				{
					if (bParam2)
					{
						func_516(uParam1, uParam0);
					}
					_freeze_ped_camera_rotation(*uParam1);
					func_508(&(uParam0->f_22), 5);
					return true;
				}
				break;
			case 5:
				return true;
		}
	}
	else
	{
		uParam0->f_16 = 1;
		return true;
	}
	return false;
}

int func_261()
{
	return -1904156936;
}

int func_262()
{
	return 2015838421;
}

char[] func_263(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "STORY_COOP_RTIT_DEAD";
		case 1:
			return "STORY_COOP_RTIT_FAILED";
		case 2:
			return "STORY_COOP_RTIT_FAILED";
		default:
			break;
	}
	return "";
}

char* func_264(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "";
		case 1:
			return "STORY_COOP_RBOD_LEFT_STAGE_BOUNDS";
		case 2:
			return "STORY_COOP_RBOD_FAILED_LAW";
		default:
			break;
	}
	return "";
}

var func_265(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = sParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

int func_266(var uParam0, int iParam1)
{
	if (uParam0->f_105 == iParam1)
	{
		return 1;
	}
	if ((uParam0->f_105.f_1 && iParam1) != 0)
	{
		iVar0 = func_517(iParam1);
	}
	else
	{
		iVar0 = func_518(iParam1);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (_0x05d6195fb4d428f4(iVar0))
	{
		uParam0->f_105 = iParam1;
		uParam0->f_105.f_1 = (uParam0->f_105.f_1 || iParam1);
		return 1;
	}
	return 0;
}

bool func_267(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x59fa676177dbe4c9(iParam0) == 4;
}

bool func_268(var uParam0, var uParam1)
{
	if (!_event_manager_peek_event(-1933804684, uParam1))
	{
		return false;
	}
	if (*uParam1 != -1203660660)
	{
		return false;
	}
	if (uParam1->f_1 != uParam0->f_63)
	{
		return false;
	}
	return true;
}

void func_269(var uParam0)
{
	func_26(uParam0, 1);
	func_26(uParam0, 2);
}

void func_270(var uParam0, var uParam1, var uParam2)
{
	Var35.f_3 = 255;
	Var35.f_4 = -1;
	Var35.f_5 = 623901053;
	Var35.f_6.f_3 = 255;
	Var35.f_6.f_4 = -1;
	Var35.f_6.f_5 = 623901053;
	Var35.f_12.f_3 = 255;
	Var35.f_12.f_4 = -1;
	Var35.f_12.f_5 = 623901053;
	Var35.f_18.f_3 = 255;
	Var35.f_18.f_4 = -1;
	Var35.f_18.f_5 = 623901053;
	Var35.f_24.f_3 = 255;
	Var35.f_24.f_4 = -1;
	Var35.f_24.f_5 = 623901053;
	iVar2 = get_number_of_events(1);
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case -1315570756:
				if (get_event_data(1, iVar0, &uVar3, 32))
				{
					func_519(&uVar3, &Var35);
					func_520(&Var35, 87, 6);
					func_521(&(uParam0->f_7), &(uParam1->f_21), &(uParam2->f_112), &Var35);
				}
				break;
			default:
				func_522(&(uParam0->f_7), &(uParam1->f_21), &(uParam2->f_112), iVar1, iVar0);
				break;
		}
		iVar0++;
	}
}

bool func_271(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = network_player_id_to_int();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (func_523(2, iParam0))
	{
		return false;
	}
	if (!func_523(8, iParam0))
	{
		return false;
	}
	return true;
}

void func_272(var uParam0, var uParam1)
{
	iVar0 = 10;
	switch (uParam1->f_64)
	{
		case 0:
			if (!_does_volume_exist(uParam1->f_112.f_425))
			{
				return;
			}
			if (!_0xd9130842d7226045(func_524(), 0))
			{
				return;
			}
			func_505(uParam1, 1);
			break;
		case 1:
			func_57(uParam0, uParam1, 1);
			if (!_does_volume_exist(uParam1->f_112.f_425))
			{
				return;
			}
			if (!does_entity_exist(uParam1->f_112.f_4) || is_entity_dead(uParam1->f_112.f_4))
			{
				return;
			}
			if (!is_screen_faded_in())
			{
				return;
			}
			if (is_entity_in_volume(uParam1->f_112.f_4, uParam1->f_112.f_425, false, 0))
			{
				return;
			}
			uParam1->f_65 = _0xa6ef0c54a3443e70(-569474439, uParam1->f_112.f_425);
			func_257(1);
			animpostfx_play(func_282());
			uParam1->f_112.f_39.f_9 = func_426(_create_var_string(0, uParam1->f_112.f_425.f_2), -1, 0, 0, 1);
			func_505(uParam1, 2);
			break;
		case 2:
			if (!_does_volume_exist(uParam1->f_112.f_425))
			{
				func_505(uParam1, 1);
				return;
			}
			if (!does_entity_exist(uParam1->f_112.f_4) || is_entity_dead(uParam1->f_112.f_4))
			{
				func_505(uParam1, 1);
				return;
			}
			func_123(uParam0, &(uParam1->f_112), 4);
			iVar0 = func_512(((10000 - uParam1->f_70) / 1000) + 1, 1, 10);
			_0xc9caeaeec1256e54(-2124237476);
			_0x8910c24b7e0046ec();
			if (!animpostfx_is_running(func_282()))
			{
				animpostfx_play(func_282());
			}
			if ((_is_any_app_running() || func_525()) || func_526())
			{
				func_283(uParam1);
			}
			else if (!_uistatemachine_exists(190275865))
			{
				if (_uiflowblock_enter(uParam1->f_66, -301617666) && _uistatemachine_create(190275865, uParam1->f_66))
				{
				}
			}
			else if (_text_database_has_loaded("UIC"))
			{
				func_527(4);
				_databinding_write_data_bool(uParam1->f_67, true);
				_databinding_write_data_string(uParam1->f_68, _create_var_string(2, "UI_L_ONEPAR", iVar0));
				if (iVar0 < 30)
				{
					_0xf972f0ab16dc5260("MP_OutofArea", 1, (to_float(iVar0) / 30f));
				}
			}
			else
			{
				_text_database_request("UIC");
			}
			if (!func_61(uParam1, 32))
			{
				_0x6339c1ea3979b5f7("default", "out_of_bounds_scenes");
				func_528();
				if (uParam1->f_69 == -1)
				{
					uParam1->f_69 = get_sound_id();
				}
				if (uParam1->f_69 != -1)
				{
					_0xce5d0ffe83939af1(uParam1->f_69, "Out_of_Bounds", func_68(), 1);
					func_243(uParam1, 32);
				}
			}
			if (func_61(uParam1, 32))
			{
				if (uParam1->f_69 != -1)
				{
					_0x503703ec1781b7d6(uParam1->f_69, "Time", to_float(iVar0));
				}
			}
			if (!func_168(uParam1->f_112.f_39.f_9))
			{
				uParam1->f_112.f_39.f_9 = func_426(_create_var_string(0, uParam1->f_112.f_425.f_2), -1, 0, 0, 1);
			}
			if (is_entity_in_volume(uParam1->f_112.f_4, uParam1->f_112.f_425, false, 0))
			{
				func_505(uParam1, 1);
			}
			else if (uParam1->f_70 >= 10000)
			{
				func_123(uParam0, &(uParam1->f_112), 8);
				func_505(uParam1, 3);
			}
			if (!_is_any_app_running())
			{
				uParam1->f_70 = (uParam1->f_70 + uParam1->f_112.f_15);
			}
			break;
		case 3:
			break;
		default:
			break;
	}
}

void func_273(var uParam0)
{
	if (_does_volume_exist(uParam0->f_112.f_425))
	{
		_0x405ddefb1f531b18(uParam0->f_112.f_425, 1, 0, 0);
	}
	if (func_529(&(uParam0->f_112), 1))
	{
		func_163(66);
	}
	if (func_529(&(uParam0->f_112), 2))
	{
		func_163(62);
	}
	if (func_529(&(uParam0->f_112), 4))
	{
		func_157();
	}
	switch (uParam0->f_112.f_375)
	{
		case 293773700:
			if (func_164(uParam0->f_112.f_375.f_2.f_6, uParam0->f_112.f_375.f_2, uParam0->f_112.f_375.f_2.f_1, uParam0->f_112.f_375.f_2.f_4))
			{
			}
			break;
		case 23117795:
			if (func_530(uParam0->f_112.f_375.f_11, uParam0->f_112.f_375.f_41, 1, 1, 1))
			{
			}
			break;
		case 389920711:
			func_531(uParam0->f_112.f_5, &(uParam0->f_112.f_375.f_11));
			uParam0->f_112.f_375.f_41.f_6 = { uParam0->f_112.f_5 };
			uParam0->f_112.f_375.f_41 = { uParam0->f_112.f_375.f_11 };
			if (func_530(uParam0->f_112.f_375.f_11, uParam0->f_112.f_375.f_41, 1, 1, 1))
			{
			}
			break;
		default:
			break;
	}
}

bool func_274(bool bParam0, bool bParam1)
{
	if (!func_290(Global_26539))
	{
		Global_26539 = func_532("CUTSCENE_SKIP", -842734359, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -2018976333, 0);
		(*Global_1951255)[Global_26539]->f_16 = &Global_20[3];
		func_533(Global_26539, 0, 1);
		func_534(Global_26539, 6, 1);
		if (bParam1)
		{
			func_534(Global_26539, 14, 1);
		}
	}
	else
	{
		if (!func_535(Global_26539, 0))
		{
			func_536(Global_26539, 1, 1, 1);
		}
		if (func_537(Global_26539, 1) != 0f && bParam0)
		{
			func_533(Global_26539, 1, 1);
		}
		else
		{
			func_533(Global_26539, 0, 1);
		}
		return func_538(Global_26539, 1);
	}
	return false;
}

void func_275()
{
	func_539(4);
}

bool func_276(int iParam0)
{
	if (Global_1296473->f_1 >= 3)
	{
		return true;
	}
	if (iParam0 == 255)
	{
		iParam0 = network_player_id_to_int();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (iParam0 == 255)
	{
		return true;
	}
	if (func_523(29, iParam0))
	{
		return true;
	}
	if (func_540(iParam0))
	{
		return true;
	}
	return false;
}

void func_277()
{
	func_541(1);
	func_541(2);
	func_541(4);
	func_541(8);
	func_541(16);
	func_541(32);
	func_541(64);
	func_541(128);
	func_541(256);
	func_541(512);
	func_541(1024);
	func_541(2048);
	func_541(4096);
	func_541(8192);
	func_542();
	func_543();
}

void func_278(int iParam0, int iParam1)
{
	if (!func_544(iParam0))
	{
		return;
	}
	if (func_81() == -1)
	{
		Global_1915715->f_3[iParam0]->f_6 = (Global_1915715->f_3[iParam0]->f_6 - (Global_1915715->f_3[iParam0]->f_6 && iParam1));
	}
	else
	{
		Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 - (Global_1051439->f_72[iParam0]->f_1 && iParam1));
	}
}

void func_279(int iParam0)
{
	iVar0 = func_310(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_39.f_110[iVar1], iVar2);
	Global_1939655 = 0;
}

void func_280()
{
	if (func_342(32))
	{
		func_343(32);
	}
}

void func_281(var uParam0, var uParam1, int iParam2)
{
	if (!func_104((*uParam0)[uParam1->f_1], iParam2))
	{
		return;
	}
	(*uParam0)[uParam1->f_1]->f_1 = ((*uParam0)[uParam1->f_1]->f_1 - ((*uParam0)[uParam1->f_1]->f_1 && iParam2));
}

char* func_282()
{
	return "MP_OutofArea";
}

void func_283(var uParam0)
{
	_databinding_write_data_bool(uParam0->f_67, false);
	if (_uistatemachine_exists(190275865))
	{
		_uistatemachine_destroy(190275865);
	}
}

void func_284(int iParam0)
{
	if (func_545(&Global_1903131, iParam0))
	{
		func_546(Global_1903131, iParam0);
	}
}

void func_285()
{
	play_sound_frontend("OOB_return", func_524(), true, 0);
}

void func_286(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_287(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_288(int iParam0)
{
	iVar0 = player_id();
	iVar1 = player_ped_id();
	set_entity_visible(iVar1, true);
	_0x18ff3110cf47115d(iVar1, 2, true);
	_0x18ff3110cf47115d(iVar1, 3, true);
	_0x18ff3110cf47115d(iVar1, 11, true);
	_0x18ff3110cf47115d(iVar1, 12, true);
	_0x18ff3110cf47115d(iVar1, 1, true);
	_0x18ff3110cf47115d(iVar1, 0, true);
	set_ped_can_ragdoll(iVar1, true);
	bVar2 = iParam0 & 256 != false;
	if (bVar2)
	{
		set_player_control(iVar0, true, 0, false);
	}
	else
	{
		set_player_control(iVar0, true, 4, false);
	}
	freeze_entity_position(iVar1, false);
	if (iParam0 & 512 != 0)
	{
	}
	else
	{
		func_547();
	}
	set_player_invincible(iVar0, false);
	if (!is_ped_in_any_vehicle(iVar1, false))
	{
		set_entity_collision(iVar1, true, false);
		set_entity_completely_disable_collision(iVar1, true, false);
	}
}

void func_289(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!bParam0)
	{
	}
	if (bParam1)
	{
	}
	if (bParam2)
	{
	}
	if (bParam3)
	{
	}
	if (bParam6)
	{
	}
	if (bParam4)
	{
	}
	if (bParam5)
	{
	}
	iVar0 = player_id();
	iVar1 = player_ped_id();
	iVar2 = 0;
	if (bParam3 && !is_ped_fatally_injured(iVar1))
	{
		iVar2 = 4;
	}
	if (bParam4)
	{
		iVar2 |= 256;
	}
	if (bParam5)
	{
		iVar2 |= 2048;
	}
	set_player_control(iVar0, false, iVar2, false);
	set_entity_visible(iVar1, bParam0);
	_0x18ff3110cf47115d(iVar1, 2, bParam0);
	_0x18ff3110cf47115d(iVar1, 3, bParam0);
	_0x18ff3110cf47115d(iVar1, 11, bParam0);
	_0x18ff3110cf47115d(iVar1, 12, bParam0);
	_0x18ff3110cf47115d(iVar1, 1, bParam0);
	_0x18ff3110cf47115d(iVar1, 0, bParam0);
	if (bParam1)
	{
		set_player_invincible(iVar0, true);
	}
	if ((!is_ped_in_any_vehicle(iVar1, true) && !is_entity_attached_to_any_object(iVar1)) && !is_entity_attached_to_any_ped(iVar1))
	{
		if (bParam2)
		{
			set_entity_collision(iVar1, false, false);
			set_entity_completely_disable_collision(iVar1, false, false);
			freeze_entity_position(iVar1, true);
		}
	}
	if (bParam3 && !is_ped_fatally_injured(iVar1))
	{
		if (_0x9ff5f9b24e870748(iVar1))
		{
			clear_ped_tasks_immediately(iVar1, false, !bParam6);
		}
	}
}

bool func_290(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if ((*Global_1951255)[iParam0]->f_1 & 2 == 0)
	{
		return false;
	}
	return _uiprompt_is_valid((*Global_1951255)[iParam0]->f_3);
}

void func_291(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_290(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_548(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_549(iVar0);
	*uParam0 = 0;
}

void func_292()
{
	_databinding_write_data_bool(Global_1913373->f_3, false);
	iVar0 = 0;
	while (iVar0 < &Global_1913373)
	{
		_databinding_remove_data_entry(&(Global_1913373->f_5[iVar0]));
		iVar0++;
	}
	_databinding_clear_binding_array(Global_1913373->f_4);
	Global_1913373 = 0;
	Global_1913373->f_1 = 0;
}

void func_293(var uParam0, int iParam1)
{
	if (uParam0->f_39.f_10 == iParam1)
	{
		return;
	}
	if (uParam0->f_39.f_10 != 0)
	{
		_display_hud_component(uParam0->f_39.f_10);
	}
	uParam0->f_39.f_10 = iParam1;
	if (uParam0->f_39.f_10 != 0)
	{
		_hide_hud_component(uParam0->f_39.f_10);
	}
}

int func_294(var uParam0)
{
	if (!uParam0->f_120.f_246)
	{
		return 1;
	}
	if (!_0xcf45df50c7775f2a())
	{
		uParam0->f_120.f_246 = 0;
		return 1;
	}
	_0x5a8b01199c3e79c3();
	uParam0->f_120.f_246 = 0;
	return 1;
}

void func_295(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_120.f_227.f_11 - 1))
	{
		if (does_entity_exist(uParam0->f_120.f_4[iVar0]->f_23))
		{
			delete_object(&(uParam0->f_120.f_4[iVar0]->f_23));
		}
		iVar0++;
	}
}

void func_296(var uParam0)
{
	Var0 = 10;
	*uParam0 = { Var0 };
}

void func_297(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_298(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

void func_299(int iParam0, var uParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	iVar0 = _0xf49f14462f0ae27c(player_id());
	if (does_entity_exist(iVar0))
	{
		if (*uParam1 & 1 != 0)
		{
			func_550(iVar0, iParam0);
		}
	}
	*uParam1 = 0;
}

void func_300(var uParam0)
{
	Var0.f_1 = -1;
	*uParam0 = { Var0 };
}

bool func_301(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4)
{
	*iParam3 = -1;
	*uParam4 = 0;
	if (iParam2 <= -1 || iParam2 >= 3)
	{
		return false;
	}
	if (network_does_network_id_exist(&(uParam0->f_23[iParam2])))
	{
		*iParam3 = _net_to_anim_scene(&(uParam0->f_23[iParam2]));
		*uParam4 = uParam0->f_23[iParam2]->f_1;
	}
	else
	{
		*iParam3 = &uParam1->f_120.f_247[iParam2];
		*uParam4 = uParam1->f_120.f_247[iParam2]->f_1;
	}
	return true;
}

void func_302(var uParam0)
{
	uVar0 = -1;
	_copy_memory(uParam0, &uVar0, 2);
}

int func_303(int iParam0)
{
	if (func_551(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_304(int iParam0, int iParam1)
{
	if (Global_1572864->f_17 != 0)
	{
		return;
	}
	Global_1572864->f_17 = iParam0;
	Global_1572864->f_18 = iParam1;
}

void func_305(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_306()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1572887->f_405.f_1[iVar0] = 0;
		iVar0++;
	}
}

void func_307(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864->f_1 = iParam0;
}

void func_308(var uParam0, int iParam1)
{
	if (!func_131(uParam0, iParam1))
	{
		return;
	}
	uParam0->f_1 = (uParam0->f_1 - (uParam0->f_1 && iParam1));
}

bool func_309(int iParam0, int iParam1)
{
	return (Global_1051439->f_72[iParam0]->f_1 && iParam1) != 0;
}

int func_310(int iParam0, int iParam1)
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

void func_311(var uParam0)
{
	Var0.f_1 = 4;
	_copy_memory(uParam0, &Var0, 3);
}

int func_312(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 195938434;
		case 1:
			return -683250308;
		case 2:
			return -16106300;
		case 3:
			return 105387183;
		case 4:
			return -2097683294;
		case 5:
			return 1805131596;
		case 6:
			return 481893872;
		case 7:
			return -493957506;
		case 8:
			return 1224055398;
		case 9:
			return -953803399;
		case 10:
			return 1171995096;
		case 11:
			return -267442581;
		case 12:
			return -1810065318;
		case 13:
			return 2140177766;
		default:
			break;
	}
	return 0;
}

int func_313(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 4;
		case 2:
			return 4;
		case 3:
			return 4;
		case 4:
			return 4;
		case 5:
			return 4;
		case 6:
			return 4;
		case 7:
			return 4;
		case 8:
			return 4;
		case 9:
			return 4;
		case 10:
			return 4;
		case 11:
			return 4;
		case 12:
			return 4;
		case 13:
			return 4;
		default:
			break;
	}
	return 4;
}

bool func_314(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	Var29 = { func_552(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_553(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_98(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_554(&Var45, &Var0, 0))
				{
					if (func_555(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_101(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_101(iVar43);
	}
	return false;
}

struct<4> func_315()
{
	return Global_1291734->f_11.f_310;
}

bool func_316()
{
	return Global_1291734->f_11.f_318 > Global_1296859->f_21;
}

void func_317(var uParam0, bool bParam1)
{
	Global_1291734->f_11.f_310 = { *uParam0 };
	if (bParam1)
	{
		Global_1291734->f_11.f_318 = Global_1296859->f_21 + 10;
	}
}

int func_318(int iParam0)
{
	iVar0 = func_556(iParam0);
	bVar1 = func_557(func_232(), 0, 0);
	if (!bVar1)
	{
		return 3;
	}
	return iVar0;
}

bool func_319(int iParam0)
{
	return func_558(&(Global_3145858->f_6), iParam0);
}

int func_320(int iParam0, int iParam1)
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

struct<4> func_321()
{
	return Var0;
}

bool func_322(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	Var29 = { func_552(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_553(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_98(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_554(&Var45, &Var0, 0))
				{
					if (func_555(&(Var0.f_24), 32))
					{
						*uParam0 = { Var0 };
						func_101(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_101(iVar43);
	}
	return false;
}

struct<4> func_323(bool bParam0)
{
	Var2.f_9 = -1591664384;
	if (!func_97("ALL HORSES", &iVar0, &iVar1, -1591664384, bParam0))
	{
		return Var2;
	}
	iVar16 = 0;
	while (iVar16 < iVar1)
	{
		if (!func_98(&Var2, iVar16, iVar0, iVar1))
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
	func_101(iVar0);
	return Var2;
}

int func_324(bool bParam0)
{
	if (func_81() == -1)
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

bool func_325(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_559(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

void func_326(var uParam0)
{
	Var3.f_9 = -1591664384;
	if (!func_97("ALL HORSES", &iVar0, &iVar1, -1591664384, 0))
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
		if (!func_560(&Var3, iVar2, iVar0, iVar1, 0))
		{
		}
		else if (_0x4c543d5dfcd2dafd(&Var3, uParam0))
		{
		}
		else if (func_555(&(Var3.f_24), 16))
		{
			func_561(&(Var3.f_24), 16);
			func_562(&Var3, 1, 1);
		}
		iVar2++;
	}
	func_101(iVar0);
}

bool func_327(var uParam0, bool bParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (func_554(uParam0, &Var0, bParam1))
	{
		if (func_555(&(Var0.f_24), 16))
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_328(var uParam0, bool bParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (func_554(uParam0, &Var0, bParam2))
	{
		bVar29 = func_555(&(Var0.f_24), 16);
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
				if (!bVar29 && func_314(&Var30, 0))
				{
					if (func_322(&Var59, bParam2))
					{
						func_561(&(Var59.f_24), 32);
						func_562(&Var59, 1, bParam2);
					}
					func_563(&(Var30.f_24), 32);
					func_328(&Var30, 0, bParam2);
				}
				func_563(&(Var0.f_24), 16);
				Var0.f_10 = 1;
			}
			else
			{
				if (bVar29 && func_322(&Var59, bParam2))
				{
					func_561(&(Var59.f_24), 32);
					func_562(&Var59, 1, bParam2);
				}
				func_563(&(Var0.f_24), 32);
				func_561(&(Var0.f_24), 16);
				Var0.f_10 = 0;
			}
		}
		if (func_562(&Var0, 1, bParam2))
		{
			return true;
		}
	}
	return false;
}

bool func_329(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!_cashinventory_is_session_ready())
	{
		return false;
	}
	if (_0xfbe782b3165ac8ec(iParam0))
	{
		return true;
	}
	if (bParam7)
	{
		bVar0 = (_0xd6f6acf4392187fb(_0x901e0dc25080c8b9(player_id())) && _0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())));
		bParam7 = bVar0;
	}
	_0xc08aff658b2e51da(&iVar1);
	if (iVar1 != 0)
	{
		func_564(iParam2, -372840566);
	}
	if (!bParam7)
	{
		if (!_0x64a36ba85ce01a81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), uParam1))
		{
			return false;
		}
	}
	else if (!_0x7a8e8df782b47eb0(&uVar2, &(iParam2->f_1), uParam1))
	{
		return false;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_565(uParam1, iParam0, Var3);
	return true;
}

int func_330(int iParam0)
{
	switch (iParam0)
	{
		case 1483188924:
			return 0;
		case 1727383512:
			return 1;
		case -1124666407:
			return 2;
		case 1243155999:
			return 3;
		case 758174799:
			return 4;
		case 997355730:
			return 5;
		default:
			break;
	}
	return -1;
}

int func_331(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_24.f_2 = iParam1;
	uParam0->f_24.f_3 = iParam2;
	uParam0->f_24.f_4 = iParam3;
	if (!_datafile_get_int(&uVar0, &(uParam0->f_24)))
	{
		return 0;
	}
	return uVar0;
}

int func_332(int iParam0)
{
	switch (iParam0)
	{
		case -342555755:
			return 0;
		case -1682644312:
			return 1;
		case 465628107:
			return 2;
		case 1345573984:
			return 3;
		case 1154612695:
			return 4;
		case 1706697578:
			return 5;
		case -1179661744:
			return 6;
		case 1085947101:
			return 7;
		case 250288693:
			return 8;
		case -732183745:
			return 9;
		case 505189833:
			return 10;
		case 580482833:
			return 11;
		case -2049540856:
			return 12;
		case -682039335:
			return 13;
		case -1761505125:
			return 14;
		case 825296063:
			return 15;
		case -1176944231:
			return 16;
		case 1444400552:
			return 17;
		case 1651545386:
			return 18;
		case -2020208627:
			return 19;
		case -851486237:
			return 20;
		case -1905474476:
			return 21;
		case -868335462:
			return 22;
		case -1829954073:
			return 23;
		case -454527521:
			return 24;
		case 158877175:
			return 25;
		case 1665626043:
			return 26;
		case 1662592038:
			return 27;
		case -537525572:
			return 28;
		default:
			break;
	}
	return 0;
}

bool func_333(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_24.f_2 = iParam1;
	uParam0->f_24.f_3 = iParam2;
	uParam0->f_24.f_4 = iParam3;
	if (!_datafile_get_bool(&uVar0, &(uParam0->f_24)))
	{
		return false;
	}
	return uVar0;
}

int func_334(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -682748;
		case 1:
			return 1357161730;
		case 2:
			return 1581179681;
		case 3:
			return -215258135;
		case 4:
			return -987049424;
		case 5:
			return 892234183;
		case 6:
			return -1554232707;
		case 7:
			return 1538293636;
		case 8:
			return -1992167326;
		case 9:
			return -1884014371;
		case 10:
			return -1871413878;
		case 11:
			return 1483778247;
		case 12:
			return -724534761;
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

bool func_335(int iParam0)
{
	iVar0 = func_566(iParam0, 1);
	if (!_0x7907969497ea92f5(&(Global_1137047->f_361[iVar0])) || !_0x603ac35fd4602c76(&(Global_1137047->f_361[iVar0])))
	{
		return false;
	}
	return true;
}

bool func_336(int iParam0, var uParam1)
{
	vVar0.f_1 = iParam0;
	if (!func_430(&Var3, vVar0))
	{
		return false;
	}
	Var3.f_2 = -120251408;
	Var3.f_3 = uParam1;
	return _datafile_get_data_node_index(&(Var3.f_1), &Var3);
}

int func_337(var uParam0, vector3 vParam1)
{
	iVar0 = 0;
	if (!func_430(&Var2, vParam1))
	{
		return 0;
	}
	Var2.f_2 = -120251408;
	Var2.f_3 = uParam0;
	if (_datafile_get_data_node_index(&(Var2.f_1), &Var2))
	{
		Var2.f_2 = 536676462;
		if (_datafile_get_int(&iVar1, &Var2))
		{
			iVar0 = iVar1;
		}
	}
	if (iVar0 == 0)
	{
	}
	return iVar0;
}

bool func_338(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

void func_339(int iParam0)
{
	Global_1132288->f_2019 = iParam0;
}

void func_340()
{
	(*Global_1134390)[network_player_id_to_int()]->f_33.f_4 = 0;
}

void func_341(vector3 vParam0)
{
	Global_17411.f_55.f_4 = vParam0.x;
	Global_17411.f_55.f_4.f_1 = vParam0.y;
	Global_17411.f_55.f_4.f_2 = vParam0.z;
	if (!func_567(-1838434463, 1))
	{
		return;
	}
	if (vParam0.z != 0 && vParam0.x > 0)
	{
		vVar0 = { func_568() };
		if ((vVar0.z == vParam0.z && vVar0.y == vParam0.y) && vVar0.x == vParam0.x)
		{
			return;
		}
		if (func_569(vParam0, 1) == -1)
		{
		}
	}
}

bool func_342(int iParam0)
{
	return func_352((*Global_1134390)[network_player_id_to_int()]->f_73, iParam0);
}

void func_343(int iParam0)
{
	if (func_342(iParam0))
	{
		func_468(&((*Global_1134390)[network_player_id_to_int()]->f_73), iParam0);
	}
}

void func_344(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 6)
	{
		return;
	}
	if (func_345(iParam0) != 0)
	{
		Global_1132288->f_2020[iParam0] = 0;
	}
}

int func_345(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 6)
	{
		return 0;
	}
	return &(Global_1132288->f_2020[iParam0]);
}

bool func_346(int iParam0, int iParam1)
{
	if ((!func_570() || !network_is_game_in_progress()) || !network_is_session_active())
	{
		return false;
	}
	if (!func_342(16))
	{
		return false;
	}
	if (func_428())
	{
		if (!_unlock_is_unlocked(-75008140))
		{
			return false;
		}
	}
	if (!func_571())
	{
		return false;
	}
	if (func_572(16))
	{
		return false;
	}
	iVar0 = _0x901e0dc25080c8b9(player_id());
	if (iParam1 == 1 && (!_0xd6f6acf4392187fb(iVar0) || !_0x424b17a7dc5c90bc(player_id())))
	{
		return false;
	}
	if (iParam0 == 1 && func_352(Global_1137047->f_8, 1))
	{
		return false;
	}
	if (func_573())
	{
		return false;
	}
	return true;
}

void func_347(int iParam0)
{
	func_469(&((*Global_1134390)[network_player_id_to_int()]->f_33.f_4), iParam0);
}

void func_348(int iParam0)
{
	func_468(&((*Global_1134390)[network_player_id_to_int()]->f_33.f_4), iParam0);
}

bool func_349(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	iVar0 = int_to_playerindex(iParam0);
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if ((*Global_1131196)[iVar1]->f_9 == iVar0)
		{
			return (*Global_1131196)[iVar1]->f_1.f_1 == (*Global_1134390)[iParam0]->f_33.f_1;
		}
		iVar1++;
	}
	return false;
}

void func_350()
{
	iVar0 = player_id();
	if (_0xf6a8a652a6b186cd((*Global_1134390)[iVar0]->f_38.f_23.f_1))
	{
		_0xfdfecc6ee4491e11((*Global_1134390)[iVar0]->f_38.f_23.f_1);
	}
	if (_0xf6a8a652a6b186cd((*Global_1134390)[iVar0]->f_38.f_23))
	{
		_0xfdfecc6ee4491e11((*Global_1134390)[iVar0]->f_38.f_23);
	}
	(*Global_1134390)[iVar0]->f_38.f_23.f_1 = uVar1;
	(*Global_1134390)[iVar0]->f_38.f_23 = uVar1;
}

bool func_351(int iParam0)
{
	return func_352(Global_1137047->f_8, iParam0);
}

bool func_352(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

Vector3 func_353(int iParam0)
{
	if (!func_338(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return (*Global_1131196)[iParam0]->f_20;
}

int func_354(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

int func_355(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		return -1;
	}
	if (!_0x72b2e00c9bac6789(&(Global_1131196->f_1091), iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if ((*Global_1131196)[iVar0]->f_9 == iParam0 && Global_1131196[iVar0] != 3)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_356(int iParam0, int iParam1)
{
	if (!func_338(iParam0))
	{
		return false;
	}
	return func_352((*Global_1134390)[network_player_id_to_int()][iParam0], iParam1);
}

void func_357(int iParam0, int iParam1)
{
	if (!func_338(iParam0))
	{
		return;
	}
	if (!func_356(iParam0, iParam1))
	{
		func_469((*(*Global_1134390)[network_player_id_to_int()])[iParam0], iParam1);
	}
}

void func_358(var uParam0)
{
	_copy_memory(uParam0, &uVar0, 8);
}

int func_359(int iParam0)
{
	return -1;
}

bool func_360(var uParam0, int iParam1, var uParam2)
{
	if (iParam1 <= -1 || iParam1 >= 5)
	{
		return false;
	}
	if (func_298(uParam0->f_31[iParam1]))
	{
		return true;
	}
	if (_does_volume_exist(*uParam2))
	{
		uParam0->f_31[iParam1] = _0xbd3324281e8b9933(*uParam2, uParam2->f_6, uParam2->f_7, uParam2->f_4);
	}
	else
	{
		uParam0->f_31[iParam1] = _0xfa50f79257745e74(uParam2->f_1, uParam2->f_5, uParam2->f_6, uParam2->f_7, uParam2->f_4);
	}
	return true;
}

void func_361(int iParam0)
{
	iVar0 = network_player_id_to_int();
	if (iVar0 == 255)
	{
		return;
	}
	(*Global_1296406)[iVar0] = (Global_1296406[iVar0] - (Global_1296406[iVar0] && iParam0));
}

void func_362(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_574(Global_1940258, 8388608);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_575(Global_1940258, 8388608);
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

struct<24> func_363(var uParam0, int iParam1)
{
	Var0.f_10 = -1;
	func_576(uParam0, iParam1, &Var0);
	return Var0;
}

struct<4> func_364(bool bParam0)
{
	return func_577(318222581, func_393(bParam0), 1591329969, bParam0);
}

int func_365(var uParam0, var uParam1, int iParam2)
{
	Var0.f_9 = -1591664384;
	if (!func_578(*uParam0, -415648720, &Var0, iParam2, -1))
	{
		return 0;
	}
	*uParam1 = { Var0 };
	return 1;
}

char* func_366()
{
	return "UNNAMED_HORSE";
}

bool func_367(var uParam0, int iParam1, char* sParam2)
{
	Var0 = { func_363(uParam0, iParam1) };
	if (!func_579(&Var0))
	{
		return false;
	}
	StringCopy(&(Var0.f_12), sParam2, 64);
	if (!func_580(&Var0))
	{
		return false;
	}
	func_581();
	func_582(uParam0, sParam2);
	return true;
}

bool func_368(var uParam0, int iParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	return _0x88b58b83a43a8cab(func_324(0), uParam0, iParam1);
}

bool func_369(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	if (!func_583(iParam0, 0))
	{
		return false;
	}
	if (iParam10 == 0)
	{
		iParam10 = func_584(iParam1, iParam10, 1, iParam11, 1);
	}
	if (!func_585(iParam0, iParam1, Param2, iParam6, iParam10, iParam7, iParam11, iParam12))
	{
		return false;
	}
	Var0 = { func_586(iParam1, Param2, iParam6, iParam7, iParam12) };
	Var0.f_13 = iParam10;
	Var0.f_12 = 1248274121;
	*iParam8 = { Var0 };
	if (func_587(iParam1) == -1037537535)
	{
		Var16.f_9 = 1;
		Var16.f_11 = -1591664384;
		Var16 = { Var0 };
		if (!func_588(iParam0, Var16, 2113164098, iParam9, -1))
		{
			return false;
		}
	}
	else if (!func_589(iParam0, Var0, 2113164098, iParam9, iParam11))
	{
		return false;
	}
	return true;
}

int func_370(bool bParam0)
{
	Var0 = { func_364(0) };
	Var4.f_9 = -1591664384;
	if (!func_325(Var0, &Var4, bParam0, 0, -1))
	{
		return 0;
	}
	iVar18 = 0;
	iVar19 = func_590(Var4.f_4);
	iVar20 = 0;
	while (iVar20 < iVar19)
	{
		iVar21 = func_591(Var4.f_4, iVar20);
		if (iVar21 != 0)
		{
			iVar18 = (iVar18 + func_592(&Var0, iVar21, 0));
		}
		iVar20++;
	}
	return iVar18;
}

int func_371(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_593(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_587(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_594(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_595(iParam0, 0);
	}
	if (func_596(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_324(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_597(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_324(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

struct<4> func_372(bool bParam0)
{
	Var4 = { func_364(0) };
	Var8.f_9 = -1591664384;
	if (!func_325(Var4, &Var8, bParam0, 0, -1))
	{
		return Var0;
	}
	iVar22 = func_590(Var8.f_4);
	Var24.f_9 = -1591664384;
	iVar38 = 0;
	while (iVar38 < iVar22)
	{
		iVar23 = func_591(Var8.f_4, iVar38);
		if (iVar23 == 0)
		{
		}
		else if (!func_598(Var4, iVar23, &Var24, 0, bParam0))
		{
		}
		else
		{
			Var0 = { Var24 };
		}
		else
		{
			iVar38++;
		}
	}
	return Var0;
}

bool func_373(var uParam0, var uParam1, int iParam2)
{
	if (func_599(uParam0, 0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (func_578(*uParam1, -415648720, &Var0, iParam2, -1))
	{
		if (!func_600(*uParam0, Var0, 1, iParam2))
		{
			return false;
		}
	}
	else if (!func_601(*uParam0, *uParam1, -415648720, 1, iParam2))
	{
		return false;
	}
	return true;
}

void func_374(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!_0x8f4f050054005c27(&(uParam0->f_3.f_2), iParam1))
		{
			func_602(uParam0, 1);
			_0xe84aac1b22a73e99(&(uParam0->f_3.f_2), iParam1);
		}
	}
	else if (_0x8f4f050054005c27(&(uParam0->f_3.f_2), iParam1))
	{
		func_603(uParam0, 1);
		_0xb909149f2bb5f6da(&(uParam0->f_3.f_2), iParam1);
	}
}

void func_375(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar11 = (-1 + iVar0);
		iVar12 = iVar11;
		if (is_vehicle_driveable(*iParam0, false, false))
		{
			if (!is_vehicle_seat_free(*iParam0, iVar12))
			{
				iVar1[iVar0] = get_ped_in_vehicle_seat(*iParam0, iVar12);
				if (!is_entity_dead(&(iVar1[iVar0])))
				{
					_0xf9acf4a08098ea25(&(iVar1[iVar0]), true);
					func_604(&(iVar1[iVar0]), get_offset_from_entity_in_world_coords(*iParam0, 3f, 3f, 0f), get_entity_heading(*iParam0), 2, 1073741824);
				}
			}
		}
		iVar0++;
	}
}

void func_376(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!_0x8f4f050054005c27(&(uParam0->f_8.f_2), iParam1))
		{
			func_605(uParam0, 1);
			_0xe84aac1b22a73e99(&(uParam0->f_8.f_2), iParam1);
		}
	}
	else if (_0x8f4f050054005c27(&(uParam0->f_8.f_2), iParam1))
	{
		func_606(uParam0, 1);
		_0xb909149f2bb5f6da(&(uParam0->f_8.f_2), iParam1);
	}
}

void func_377(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!_0x8f4f050054005c27(&(uParam0->f_13.f_3), iParam1))
		{
			func_607(uParam0, 1);
			_0xe84aac1b22a73e99(&(uParam0->f_13.f_3), iParam1);
		}
	}
	else if (_0x8f4f050054005c27(&(uParam0->f_13.f_3), iParam1))
	{
		func_608(uParam0, 1);
		_0xb909149f2bb5f6da(&(uParam0->f_13.f_3), iParam1);
	}
}

void func_378(int iParam0, bool bParam1, bool bParam2)
{
	func_609(iParam0, 100f, bParam1, bParam2, 1, 2);
}

bool func_379(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_610(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_611())
	{
		return func_610(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_610(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

int func_380()
{
	if (Global_1102219->f_26.f_3337 == 9)
	{
		return 0;
	}
	if (Global_1102219->f_26.f_3337 == 10)
	{
		return 0;
	}
	if (Global_1102219->f_26.f_3337 == 11)
	{
		return 0;
	}
	if (func_382(2048))
	{
		return 1;
	}
	if (func_381(1))
	{
		return 1;
	}
	if (Global_1102219->f_26.f_3337 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_381(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_382(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_383(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

int func_384()
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

void func_385(int iParam0)
{
	if (func_612(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

bool func_386(vector3 vParam0, var uParam3)
{
	if (func_119(vParam0))
	{
		return false;
	}
	if (func_613(255) == 4)
	{
		return false;
	}
	if (func_379(4, 255))
	{
	}
	func_163(4);
	func_389(&(Global_1102219->f_3879));
	Global_1102219->f_3879.f_6 = { vParam0 };
	Global_1102219->f_3879 = uParam3;
	Global_1102219->f_3879.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_390(Global_1102219->f_3879, 36);
	return true;
}

void func_387(bool bParam0, bool bParam1)
{
	if (func_613(255) == 4)
	{
		return;
	}
	if (func_119(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_303(0);
	}
	else
	{
		if (bParam1)
		{
			func_160(0, 0, 0, 1);
		}
		func_163(0);
		func_614(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_615(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_616(Global_1102219->f_3849, 36);
	func_617(Global_1102219->f_3888, 36);
}

bool func_388(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

void func_389(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_390(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

bool func_391(int iParam0, int iParam1)
{
	if (!func_338(iParam0))
	{
		return false;
	}
	return func_352((*Global_1131196)[iParam0]->f_7, iParam1);
}

bool func_392(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

struct<4> func_393(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_324(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_577(1328661203, func_321(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_577(1328661203, func_321(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_577(1328661203, func_321(), -1591664384, bParam0);
}

int func_394(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_593(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_596(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_577(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_324(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_324(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_395(int iParam0)
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
		case 5:
			return 20;
		default:
			break;
	}
	return -1;
}

int func_396(var uParam0)
{
	return 0;
}

int func_397(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_618(iParam1))
	{
		return 3;
	}
	if (uParam0->f_42)
	{
		return 2;
	}
	if (!_0xe10f2d7715ababec(uParam0) && _0xfbe782b3165ac8ec(iParam1))
	{
		uParam0->f_42 = 1;
		return 2;
	}
	if (func_619(&(uParam0->f_30), *uParam0, iParam1))
	{
		uParam0->f_42 = 1;
		return 2;
	}
	func_620(0);
	if (!_cashinventory_is_session_ready())
	{
		return 1;
	}
	iVar0 = get_cloud_time_as_int();
	if (!_0xe10f2d7715ababec(uParam0))
	{
		if (uParam0->f_4 >= Global_1901947->f_677)
		{
			return 3;
		}
		if (func_329(iParam1, uParam0, &(uParam0->f_5), &(uParam0->f_18), iParam2, iParam3, iParam4, 0))
		{
			if (!_0xe10f2d7715ababec(uParam0))
			{
			}
		}
		if (uParam0->f_4 <= 0)
		{
			uParam0->f_43 = iVar0;
		}
		uParam0->f_4++;
	}
	if (absi((iVar0 - uParam0->f_43)) > Global_1901947->f_677.f_1)
	{
		return 3;
	}
	return 1;
}

int func_398(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5145;
		case 1:
			return 5146;
		case 2:
			return 5147;
		case 3:
			return 5148;
		case 4:
			return 5149;
		case 5:
			return 5150;
		default:
			break;
	}
	return 5144;
}

bool func_399(int iParam0)
{
	return iParam0 != 0;
}

int func_400(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	iVar4 = _0x4642182a298187d0(iParam0, iParam1, &uVar0, 4, 0);
	if (iVar4 != 0)
	{
		return uVar0;
	}
	return 0;
}

bool func_401(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_621(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_13 != -1)
	{
		if (iParam0 == Global_1296859->f_10)
		{
			if (!Global_1296859->f_11)
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

void func_402(var uParam0)
{
	if (func_158(255) || is_entity_dead(uParam0->f_4))
	{
		func_452(&(uParam0->f_432.f_75));
		return;
	}
	fVar0 = func_193(uParam0->f_5, uParam0->f_432.f_70);
	func_622(uParam0->f_4, uParam0->f_432.f_70, &(uParam0->f_432.f_75), 30f, 25f, 20f, 15f, 0.5f, 0, 0, 1, 1, 1);
	if (fVar0 <= 7f)
	{
		disable_all_control_actions(0);
		enable_control_action(0, -668070958, true);
		if (does_entity_exist(uParam0->f_432.f_74))
		{
			set_gameplay_entity_hint(uParam0->f_432.f_74, 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
		}
		if (is_ped_on_mount(uParam0->f_4))
		{
			func_202(uParam0->f_4, get_mount(uParam0->f_4), 1080033280);
		}
		else if (_get_ped_crouch_movement(uParam0->f_4))
		{
			_set_ped_crouch_movement(uParam0->f_4, false, 0, false);
		}
		else if (func_624(func_623(uParam0->f_4, 0, 1, 0)) || func_624(func_623(uParam0->f_4, 1, 1, 0)))
		{
			_0x94a3c1b804d291ec(uParam0->f_4, 1, 0, 1, 0);
		}
		else if (_is_ped_carrying(uParam0->f_4))
		{
			if (!func_625(uParam0->f_4, -208384378))
			{
				task_place_carried_entity_at_coord(uParam0->f_4, _get_first_entity_ped_is_carrying(uParam0->f_4), func_220(uParam0->f_2), 1f, 8);
			}
		}
		else if (does_entity_exist(uParam0->f_432.f_74))
		{
			func_207(uParam0, -1, -1, 0, 17, 1, 1);
			if (!func_625(uParam0->f_4, 713668775))
			{
				vVar1 = { get_entity_coords(uParam0->f_432.f_74, true, false) };
				vVar4 = { func_431(uParam0->f_5 - vVar1) + vVar1 };
				task_follow_nav_mesh_to_coord(uParam0->f_4, vVar4, 1f, 20000, 0.25f, 0, 40000f);
			}
		}
	}
}

bool func_403(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, bool bParam9, bool bParam10)
{
	if (iParam1 <= -1 || iParam1 >= 2)
	{
		return false;
	}
	if (network_does_network_id_exist(&(uParam0->f_13[iParam1])))
	{
		return true;
	}
	func_377(uParam0, iParam1, 1);
	if (!func_626(uParam0->f_13[iParam1], iParam2, vParam3, 1, 0))
	{
		return false;
	}
	iVar0 = net_to_ent(&(uParam0->f_13[iParam1]));
	set_entity_rotation(iVar0, vParam6, 2, true);
	if (bParam9)
	{
		_0x9587913b9e772d29(iVar0, 0);
	}
	func_627(uParam0, iParam1);
	if (bParam10)
	{
		set_model_as_no_longer_needed(iParam2);
	}
	return true;
}

bool func_404(var uParam0, var uParam1)
{
	if (!does_entity_exist(uParam1->f_432.f_74))
	{
		if (!func_170(uParam1, 25))
		{
			func_602(uParam0, 1);
			func_191(uParam1, 25);
		}
		if (!func_628(func_466(uParam1->f_2), &iVar0, 1))
		{
			return false;
		}
		if (!is_entity_a_ped(net_to_ent(iVar0)))
		{
			return false;
		}
		uParam1->f_432.f_74 = net_to_ped(iVar0);
		clear_ped_tasks_immediately(uParam1->f_432.f_74, false, true);
	}
	return true;
}

bool func_405(var uParam0, var uParam1, var uParam2)
{
	if (!func_411(uParam0, uParam2, 0, "pl_idle", 1))
	{
		return false;
	}
	if (!func_196(uParam2->f_432.f_67, &fVar0))
	{
		return false;
	}
	vVar1 = { func_198(func_197(fVar0)) };
	func_199(uParam0, uParam2, 0, uParam2->f_432.f_70, vVar1, 2);
	iVar4 = func_200(uParam0, 0);
	func_201(uParam0, uParam2, 0, "p_stoolfolding01x", iVar4, 0);
	iVar4 = func_200(uParam0, 1);
	func_201(uParam0, uParam2, 0, "p_harmonica01x", iVar4, 0);
	func_201(uParam0, uParam2, 0, "CS_MP_CRIPPS", uParam2->f_432.f_74, 0);
	return func_204(uParam0, uParam1, uParam2, 0, 0);
}

void func_406(var uParam0, int iParam1)
{
	uParam0->f_574 = iParam1;
}

void func_407(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 <= 0 || iParam2 >= 2)
	{
		return;
	}
	if (!func_629(uParam0, iParam2))
	{
		return;
	}
	uParam0->f_105.f_3[iParam2] = func_630(uParam0, iParam2);
	if (&uParam0->f_105.f_3[iParam2] == -1)
	{
		return;
	}
	if (is_stream_playing(&(uParam0->f_105.f_3[iParam2])))
	{
		return;
	}
	else if (uParam0->f_105.f_3[iParam2]->f_1)
	{
		stop_stream(&(uParam0->f_105.f_3[iParam2]));
		uParam0->f_105.f_3[iParam2] = -1;
		uParam0->f_105.f_3[iParam2]->f_1 = 0;
		return;
	}
	if (!does_entity_exist(*uParam1))
	{
		return;
	}
	if (func_631(*uParam1, 0))
	{
		return;
	}
	play_stream_from_ped(*uParam1, &(uParam0->f_105.f_3[iParam2]));
	uParam0->f_105.f_3[iParam2]->f_1 = 1;
}

float func_408(vector3 vParam0, vector3 vParam3)
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

bool func_409(var uParam0, var uParam1, int iParam2, char* sParam3)
{
	if (!func_301(uParam0, uParam1, iParam2, &iVar0, &uVar1))
	{
		return false;
	}
	if (!_does_anim_scene_exist(iVar0))
	{
		return false;
	}
	_0xdf7b5144e25cd3fe(iVar0, sParam3);
	if (_0x23e33cb9f4a3f547(iVar0, sParam3))
	{
		return true;
	}
	if (_0x0df57f86fe71dbe5(iVar0, sParam3))
	{
		return false;
	}
	return true;
}

bool func_410(var uParam0, var uParam1, int iParam2, var uParam3)
{
	if (!func_301(uParam0, uParam1, iParam2, &iVar0, &uVar1))
	{
		return false;
	}
	if (!_does_anim_scene_exist(iVar0) || !_is_anim_scene_started(iVar0, false))
	{
		return false;
	}
	return _0x1f0e401031e20146(iVar0, uParam3);
}

bool func_411(var uParam0, var uParam1, int iParam2, char* sParam3, bool bParam4)
{
	if (!func_301(uParam0, uParam1, iParam2, &iVar0, &uVar1))
	{
		return false;
	}
	if (!_does_anim_scene_exist(iVar0))
	{
		return false;
	}
	if (!_0x23e33cb9f4a3f547(iVar0, sParam3) && !func_409(uParam0, uParam1, iParam2, sParam3))
	{
		return false;
	}
	_set_anim_scene_playback_list_bool(iVar0, sParam3, bParam4);
	return true;
}

bool func_412(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 <= -1 || iParam2 >= 1)
	{
		return false;
	}
	if (_0x8f4f050054005c27(&(uParam0->f_21), iParam2))
	{
		return true;
	}
	StringCopy(&cVar0, func_632(iParam2), 24);
	if (is_string_null_or_empty(&cVar0))
	{
		return false;
	}
	uVar3 = 24;
	iVar101 = 0;
	iVar102 = -1;
	if (!func_633(uParam0, uParam1, iParam2, &uVar3, &iVar101, &iVar102))
	{
		return false;
	}
	if (!func_634(&uVar3, cVar0, iVar101, iVar102, 0, 0))
	{
		return false;
	}
	if (bParam3)
	{
		_0xe84aac1b22a73e99(&(uParam0->f_21), iParam2);
	}
	return true;
}

bool func_413(var uParam0, var uParam1, int iParam2, char* sParam3)
{
	if (!func_301(uParam0, uParam1, iParam2, &iVar0, &uVar1))
	{
		return false;
	}
	if (!_does_anim_scene_exist(iVar0) || !_is_anim_scene_started(iVar0, false))
	{
		return false;
	}
	return _0x8d81e7824b7753f7(iVar0, sParam3, 1);
}

void func_414(var uParam0, var uParam1, int iParam2, char* sParam3)
{
	if (!func_301(uParam0, uParam1, iParam2, &iVar0, &uVar1))
	{
		return;
	}
	if (!_does_anim_scene_exist(iVar0) || !_0x23e33cb9f4a3f547(iVar0, sParam3))
	{
		return;
	}
	_0xae6ada8fe7e84acc(iVar0, sParam3);
}

void func_415(var uParam0, int iParam1)
{
	uParam0->f_375 = iParam1;
}

bool func_416(var uParam0, int iParam1, var uParam2)
{
	uParam2->f_1 = func_112(uParam0, 902471454, 0, 0);
	switch (uParam2->f_1)
	{
		case -1125105727:
			break;
		case -372365539:
			uParam2->f_12 = func_333(uParam0, -153769467, 0, 0);
			uParam2->f_13 = func_333(uParam0, 2034260151, 0, 0);
			break;
		case 454885399:
			uParam2->f_14 = { func_105(uParam0, -216759738, 0, 0) };
			break;
		default:
			return false;
	}
	*uParam2 = func_112(uParam0, 136526858, iParam1, 0);
	uParam2->f_2 = { func_105(uParam0, -619192215, iParam1, 0) };
	uParam2->f_5 = { func_105(uParam0, 457202110, iParam1, 0) };
	uParam2->f_8 = { func_105(uParam0, 592846328, iParam1, 0) };
	uParam2->f_17 = func_333(uParam0, -276769805, 0, 0);
	uParam2->f_18 = func_333(uParam0, 2125472716, 0, 0);
	if (func_333(uParam0, -1227169020, 0, 0))
	{
		uParam2->f_25 = 1;
		uParam2->f_27 |= 2 | 16;
	}
	if (func_333(uParam0, 218761186, 0, 0))
	{
		uParam2->f_25 = 1;
		uParam2->f_27 |= 6;
	}
	return true;
}

int func_417(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5141;
		default:
			break;
	}
	return 5140;
}

bool func_418(var uParam0, int iParam1, var uParam2)
{
	if (iParam1 <= -1 || iParam1 >= 1)
	{
		return false;
	}
	if (!uParam2->f_11)
	{
		if (_does_volume_exist(&(uParam0->f_113[iParam1])))
		{
			return true;
		}
	}
	switch (uParam2->f_1)
	{
		case -1125105727:
			iVar0 = _create_volume_by_hash(*uParam2, uParam2->f_2, uParam2->f_5, uParam2->f_8);
			break;
		case -372365539:
			uParam2->f_11 = 0;
			iVar0 = _0x0eb78c2b156635b1(*uParam2, uParam2->f_2, uParam2->f_5, uParam2->f_8);
			_0xbe551c2cc421185d(iVar0, uParam2->f_12);
			_0x5b23dff8e0948bb2(iVar0, uParam2->f_13);
			break;
		case 454885399:
			iVar0 = _create_walk_and_talk_volume(*uParam2, uParam2->f_2, uParam2->f_5, uParam2->f_8, uParam2->f_14);
			break;
		default:
			break;
	}
	if (!_does_volume_exist(iVar0))
	{
		return false;
	}
	uParam0->f_113[iParam1]->f_1 = uParam2->f_1;
	if (uParam2->f_11)
	{
		if (!_does_volume_exist(&(uParam0->f_113[iParam1])))
		{
			uParam0->f_113[iParam1] = _create_volume_aggregate();
		}
		_0x6e0d3c3f828da773(&(uParam0->f_113[iParam1]), iVar0);
	}
	else
	{
		uParam0->f_113[iParam1] = iVar0;
	}
	if (uParam2->f_25)
	{
		if (!_0x91a5f9cbebb9d936(uParam0->f_113[iParam1]->f_4))
		{
			uParam0->f_113[iParam1]->f_4 = _0x4c39c95ae5db1329(&(uParam0->f_113[iParam1]), uParam2->f_26, uParam2->f_27);
		}
	}
	if (uParam2->f_17)
	{
		if (!uParam0->f_113[iParam1]->f_2)
		{
			_0xb56d41a694e42e86(&(uParam0->f_113[iParam1]), uParam2->f_19, uParam2->f_20, uParam2->f_21, uParam2->f_22, uParam2->f_23, uParam2->f_24);
			uParam0->f_113[iParam1]->f_2 = 1;
		}
	}
	if (uParam2->f_18)
	{
		if (!uParam0->f_113[iParam1]->f_3)
		{
			_0x18262cafebb5fbe1(&(uParam0->f_113[iParam1]), uParam2->f_19, uParam2->f_20, uParam2->f_21, uParam2->f_22, uParam2->f_23, uParam2->f_24);
			uParam0->f_113[iParam1]->f_3 = 1;
		}
	}
	return true;
}

int func_419(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5143;
		default:
			break;
	}
	return 5142;
}

void func_420(var uParam0, int iParam1)
{
	if (uParam0->f_425.f_2 == iParam1)
	{
		return;
	}
	uParam0->f_425.f_2 = iParam1;
}

void func_421(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 <= -1 || iParam3 >= 1)
	{
		return;
	}
	if (does_blip_exist(&(uParam2->f_39.f_11[iParam3])))
	{
		return;
	}
	uParam2->f_39.f_11[iParam3] = func_635(uParam0, uParam1, uParam2, iParam3);
	if (!does_blip_exist(&(uParam2->f_39.f_11[iParam3])))
	{
		return;
	}
	if (bParam4)
	{
		func_422(uParam2, iParam3, 580546400, 1);
	}
	if (bParam5)
	{
		func_636(uParam2, iParam3, 1);
	}
}

void func_422(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 <= -1 || iParam1 >= 1)
	{
		return;
	}
	if (!does_blip_exist(&(uParam0->f_39.f_11[iParam1])))
	{
		return;
	}
	if (bParam3)
	{
		if (_blip_set_modifier(&(uParam0->f_39.f_11[iParam1]), iParam2))
		{
		}
	}
	else if (_set_blip_flash_style(&(uParam0->f_39.f_11[iParam1]), iParam2))
	{
	}
}

void func_423(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (uParam0->f_39.f_13 == iParam1)
	{
		return;
	}
	uParam0->f_39.f_13 = iParam1;
	start_gps_multi_route(iParam2, bParam3, bParam4);
}

void func_424(int iParam0)
{
	if (iParam0 > 6)
	{
		return;
	}
	if (&Global_1913373 != 0)
	{
		func_292();
	}
	_databinding_write_data_bool(Global_1913373->f_3, true);
	Global_1913373 = iParam0;
	Global_1913373->f_1 = 0;
	iVar5 = 0;
	while (iVar5 < iParam0)
	{
		StringCopy(&cVar1, "Objective", 32);
		StringIntConCat(&cVar1, iVar5, 32);
		uVar0 = _databinding_add_data_container(Global_1913373->f_2, &cVar1);
		Global_1913373->f_5[iVar5] = uVar0;
		Global_1913373->f_5[iVar5]->f_1 = _databinding_add_data_bool(uVar0, "IsCurrent", 0);
		Global_1913373->f_5[iVar5]->f_2 = _databinding_add_data_bool(uVar0, "Failed", 0);
		_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1913373->f_4, iVar5, "objective_breadcrumb", uVar0);
		iVar5++;
	}
}

void func_425(int iParam0)
{
	if (iParam0 >= &Global_1913373 || iParam0 < 0)
	{
		return;
	}
	_databinding_write_data_bool(Global_1913373->f_5[Global_1913373->f_1]->f_2, false);
	_databinding_write_data_bool(Global_1913373->f_5[Global_1913373->f_1]->f_1, false);
	bVar0 = iParam0 < Global_1913373->f_1;
	Global_1913373->f_1 = iParam0;
	_databinding_write_data_bool(Global_1913373->f_5[Global_1913373->f_1]->f_1, true);
	_databinding_write_data_bool(Global_1913373->f_5[Global_1913373->f_1]->f_2, bVar0);
}

var func_426(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	_0xdd1232b332cbb9e7(3, 1, 0);
	return func_637(sParam0, iParam1, iParam2, iParam3, 0, iParam4);
}

void func_427(float fParam0)
{
	iVar0 = player_ped_id();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	vVar1 = { get_entity_coords(iVar0, true, false) };
	clear_area(vVar1, fParam0, 65536);
	remove_particle_fx_in_range(vVar1, fParam0);
}

bool func_428()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

void func_429(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738->f_3948 = get_game_timer();
	Global_1896738->f_3948.f_1 = iParam0;
}

bool func_430(var uParam0, struct<2> Param1, var uParam3)
{
	if (Param1.f_1 == 0)
	{
		return false;
	}
	uVar0 = func_638(Param1.f_1);
	if (!_0x7907969497ea92f5(uVar0) || !_0x603ac35fd4602c76(uVar0))
	{
		return false;
	}
	*uParam0 = uVar0;
	uParam0->f_2 = -80782076;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	return true;
}

Vector3 func_431(vector3 vParam0)
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

void func_432(bool bParam0)
{
	if (bParam0)
	{
		func_639(4);
	}
	func_639(2);
	set_bit(&(Global_1957959->f_1), 0);
}

bool func_433(int iParam0, int iParam1)
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

bool func_434(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (bParam4)
	{
		if (vdist2(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
		{
			return true;
		}
	}
	else if (func_640(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

bool func_435()
{
	return Global_1940311->f_1;
}

void func_436()
{
	if (_get_number_of_references_of_script_with_name_hash(-4058091) > 0)
	{
		Global_1940311->f_12 = 1;
	}
}

bool func_437()
{
	return Global_1896738->f_382;
}

void func_438()
{
	func_641(0);
}

void func_439(int iParam0, int iParam1)
{
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0 = 47;
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	Var0.f_4 = iParam0;
	Var0.f_5 = iParam1;
	if (!_network_is_player_index_valid(Var0.f_1))
	{
		return;
	}
	if (((((((((((Var0.f_4 == 2 || Var0.f_4 == 3) || Var0.f_4 == 6) || Var0.f_4 == 7) || Var0.f_4 == 8) || Var0.f_4 == 9) || Var0.f_4 == 10) || Var0.f_4 == 11) || Var0.f_4 == 12) || Var0.f_4 == 13) || Var0.f_4 == 14) || Var0.f_4 == 15)
	{
		iVar8 = 0;
		while (iVar8 < 32)
		{
			iVar7 = int_to_playerindex(iVar8);
			if (!network_is_player_active(iVar7))
			{
			}
			else
			{
				_0x31010318ba9897ac(&uVar6, iVar8);
			}
			iVar8++;
		}
	}
	else
	{
		_0x31010318ba9897ac(&uVar6, network_player_id_to_int());
	}
	trigger_script_event(1, &Var0, 6, 0, &uVar6);
}

void func_440()
{
	Global_1940144->f_105 = -1;
	Global_1940144->f_105.f_1 = 0;
}

int func_441(int iParam0)
{
	switch (iParam0)
	{
		case 13:
			return -1676593554;
		case 14:
			return 1553404574;
		case 15:
			return -1497412662;
		case 16:
			return 1926315794;
		case 17:
			return 2036068612;
		case 18:
			return -1453052873;
		case 19:
			return -1977249129;
		case 20:
			return -821332091;
		case 21:
			return 1563900091;
		case 22:
			return 1938440312;
		case 23:
			return 1875369436;
		case 24:
			return -1983877916;
		default:
			break;
	}
	return -1;
	return uVar0;
}

bool func_442(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_301(uParam0, uParam1, iParam2, &uVar0, &uVar1))
	{
		return false;
	}
	if (has_anim_event_fired(iParam3, iParam4))
	{
		return true;
	}
	return false;
}

bool func_443()
{
	if (Global_1901947->f_44.f_2 == 1788394582)
	{
		iVar0 = Global_1296859->f_21;
		if (iVar0 > Global_1901947->f_44.f_3 && iVar0 < Global_1901947->f_44.f_4)
		{
			return true;
		}
	}
	return false;
}

void func_444()
{
	if (!func_447(1))
	{
		return;
	}
	_0xdd560abef5d3784c(&iVar0, &iVar1);
	if (iVar0 != 0 || iVar1 != 0)
	{
		if ((Global_1296859->f_21 % 239) != 0)
		{
			return;
		}
	}
	func_643(func_642(), func_449());
}

void func_445(bool bParam0)
{
	if (!func_443())
	{
		return;
	}
	if (func_644() || func_645())
	{
		if (!func_447(1) || bParam0)
		{
			iVar0 = 603685163;
			if (func_644())
			{
				iVar0 = -273223690;
			}
			func_643(iVar0, func_449());
			set_ambient_zone_list_state("AZL_RDRO_X18", true, true);
			_0xec116edb683ad479(1);
			set_timecycle_modifier("MP_reduceGlobalTemperature");
			func_448(1);
		}
		if (func_449() || bParam0)
		{
			if (func_644())
			{
				if (!func_447(4))
				{
					_set_snow_coverage_type(3);
					func_448(4);
					func_446(2);
				}
			}
			else if (!func_447(2))
			{
				_set_snow_coverage_type(2);
				func_448(2);
				func_446(4);
			}
		}
	}
	if (func_646())
	{
		if (((!func_447(8) && !_0xcf45df50c7775f2a()) && !func_647(-1562607865)) || bParam0)
		{
			func_648(-1562607865);
			func_448(8);
		}
	}
}

void func_446(int iParam0)
{
	Global_1939655->f_84 = (Global_1939655->f_84 - (Global_1939655->f_84 && iParam0));
}

bool func_447(int iParam0)
{
	return (Global_1939655->f_84 && iParam0) != 0;
}

void func_448(int iParam0)
{
	Global_1939655->f_84 = (Global_1939655->f_84 || iParam0);
}

bool func_449()
{
	return (_is_loading_screen_active() || is_screen_faded_out());
}

void func_450(bool bParam0)
{
	if (func_447(1) || bParam0)
	{
		clear_weather_type_persist();
		clear_ambient_zone_list_state("AZL_RDRO_X18", true);
		_0xec116edb683ad479(0);
		clear_timecycle_modifier();
		func_446(1);
	}
	if ((func_447(6) && func_449()) || bParam0)
	{
		_set_snow_coverage_type(0);
		func_446(2);
		func_446(4);
	}
	if (((func_447(8) && !_0xcf45df50c7775f2a()) && !func_647(-1562607865)) || bParam0)
	{
		func_649(-1562607865);
		func_446(8);
	}
}

bool func_451(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return is_bit_set(&(Global_1904087->f_496[iVar0]), iVar1);
}

void func_452(float fParam0)
{
	fParam0->f_1 = 0f;
	fParam0->f_2 = 0f;
	*fParam0 = 0;
}

bool func_453(bool bParam0)
{
	iVar0 = _0xb9050a97594c8832(player_id());
	if (!does_entity_exist(iVar0))
	{
		return true;
	}
	if (!bParam0)
	{
		if (!func_650(iVar0))
		{
			return false;
		}
	}
	func_651();
	return true;
}

bool func_454(bool bParam0)
{
	iVar0 = _0xb9050a97594c8832(player_id());
	if (!does_entity_exist(iVar0))
	{
		return true;
	}
	if (!bParam0)
	{
		if (!func_650(iVar0))
		{
			return false;
		}
	}
	func_652();
	return true;
}

void func_455(bool bParam0)
{
	if (!func_451(101))
	{
		return;
	}
	if (func_451(102))
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	if (Global_1291734->f_581.f_63 != iVar0)
	{
		if (!bParam0)
		{
			return;
		}
	}
	func_460(102);
}

bool func_456(float fParam0)
{
	return func_653(*fParam0, 1);
}

void func_457(float fParam0, bool bParam1)
{
	if (bParam1 || !func_456(fParam0))
	{
		func_464(fParam0);
	}
}

float func_458(float fParam0)
{
	if (!func_456(fParam0))
	{
		return fParam0->f_1;
	}
	if (func_654(fParam0))
	{
		return fParam0->f_2;
	}
	return (func_655() - fParam0->f_1);
}

void func_459(bool bParam0)
{
	if (!func_451(70))
	{
		return;
	}
	if (func_451(72))
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	if (Global_1291734->f_11.f_70 != iVar0)
	{
		if (!bParam0)
		{
			return;
		}
	}
	func_460(72);
}

void func_460(int iParam0)
{
	if (!func_656(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	set_bit(Global_1904087->f_496[iVar0], iVar1);
}

bool func_461(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = player_id();
	}
	iVar0 = _0xf49f14462f0ae27c(iParam0);
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

bool func_462(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return ((*Global_1291106)[iParam1]->f_1 && iParam0) != 0;
}

void func_463(int iParam0)
{
	if (!func_656(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	clear_bit(Global_1904087->f_496[iVar0], iVar1);
}

void func_464(float fParam0)
{
	func_657(fParam0, 0f);
}

void func_465(int iParam0, int iParam1)
{
	if (!func_338(iParam0))
	{
		return;
	}
	if (func_356(iParam0, iParam1))
	{
		func_468((*(*Global_1134390)[network_player_id_to_int()])[iParam0], iParam1);
	}
}

int func_466(int iParam0)
{
	if (!network_is_game_in_progress())
	{
		return -1;
	}
	if (!func_658())
	{
		return -1;
	}
	if (iParam0 == 255 || !network_is_player_active(iParam0))
	{
		return -1;
	}
	if (!_0x424b17a7dc5c90bc(iParam0))
	{
		iParam0 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(iParam0));
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((*Global_1131196)[iVar0]->f_9 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_467(int iParam0)
{
	if (!func_338(iParam0))
	{
		return 0;
	}
	func_659(iParam0);
	return 1;
}

void func_468(var uParam0, int iParam1)
{
	func_660(uParam0, iParam1);
}

void func_469(var uParam0, int iParam1)
{
	func_661(uParam0, iParam1);
}

bool func_470(struct<2> Param0)
{
	iVar0 = func_662(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_471(int iParam0)
{
	if (!func_663(iParam0))
	{
		if (_unlock_is_visible((*Global_1835011)[iParam0]->f_3) && _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3))
		{
			iVar0 = func_664(4, iParam0);
			if (iVar0 != 0)
			{
				func_665(iVar0, 0);
			}
		}
		return true;
	}
	iVar1 = func_664(2, iParam0);
	if (iVar1 == 0)
	{
		return false;
	}
	if (_0xfbe782b3165ac8ec(iVar1))
	{
		iVar1 = func_664(3, iParam0);
	}
	if (!func_666((*Global_1835011)[iParam0]->f_32) && iVar1 == 0)
	{
		return true;
	}
	if ((_unlock_is_visible((*Global_1835011)[iParam0]->f_3) && _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3)) || !_0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
	{
		if (!func_667((*Global_1835011)[iParam0]->f_32))
		{
			(*Global_1835011)[iParam0]->f_32 = func_665(iVar1, 0);
		}
		else
		{
			switch (func_668((*Global_1835011)[iParam0]->f_32, 0))
			{
				case 0:
					break;
				case 2:
					if (!_0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
					{
						return true;
					}
					break;
			}
		}
		return false;
	}
	return true;
}

void func_472(int iParam0)
{
	Global_1878407->f_6 = iParam0;
}

void func_473(int iParam0, bool bParam1)
{
	if (!func_663(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 13:
			if (bParam1)
			{
				if (!_0x354f689c4ffaab37(_0x8e84119a23c16623(682499315, 0, 0)))
				{
					_0x7c32191d9fb2bdea(_0x8e84119a23c16623(682499315, 0, 0));
				}
			}
			break;
		case 16:
			if (!_0x354f689c4ffaab37(_0x8e84119a23c16623(-413671895, 0, 0)))
			{
				_0x7c32191d9fb2bdea(_0x8e84119a23c16623(-413671895, 0, 0));
			}
			break;
	}
}

bool func_474(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 13:
			*uParam1 = 622326403;
			return true;
		case 14:
			*uParam1 = 384587308;
			return true;
		case 15:
			*uParam1 = 968661964;
			return true;
		case 16:
			*uParam1 = 49496744;
			return true;
		case 17:
			*uParam1 = 1495592714;
			return true;
		case 18:
			*uParam1 = 2125588482;
			return true;
		case 19:
			*uParam1 = 1866942769;
			return true;
		case 21:
			*uParam1 = 661064591;
			return true;
		case 22:
			*uParam1 = 1311562014;
			return true;
		case 23:
			*uParam1 = 1435506115;
			return true;
		case 24:
			*uParam1 = 1709487724;
			return true;
		case 20:
			*uParam1 = 757099750;
			return true;
		case 25:
			*uParam1 = 392315242;
			return true;
		default:
			break;
	}
	return false;
}

struct<2> func_475(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	return Var0;
}

void func_476(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

struct<2> func_477(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_478(struct<2> Param0)
{
	return func_669(Param0);
}

bool func_479(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

void func_480(bool bParam0)
{
	if (!bParam0)
	{
		func_303(14);
	}
	else
	{
		func_163(14);
	}
}

void func_481(int iParam0)
{
	if (!func_670(iParam0))
	{
		return;
	}
	iVar0 = get_player_index();
	if (!_network_is_player_index_valid(iVar0) || !network_is_player_connected(iVar0))
	{
		return;
	}
	if (!func_671(iParam0, iVar0))
	{
		return;
	}
	_0xb909149f2bb5f6da(&((*Global_1056141)[iVar0]->f_15.f_20), iParam0);
}

void func_482(int iParam0)
{
	Global_1139381->f_4912[iParam0] = _unlock_is_new((*Global_1835011)[iParam0]->f_3);
	Global_1139381->f_4912[iParam0]->f_2 = _unlock_is_visible((*Global_1835011)[iParam0]->f_3);
	Global_1139381->f_4912[iParam0]->f_1 = _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3);
}

void func_483(int iParam0)
{
	if (&Global_1211315 == iParam0)
	{
		return;
	}
	Global_1211315 = iParam0;
}

int func_484(int iParam0)
{
	switch (func_672(iParam0))
	{
		case 6:
		case 7:
		case 8:
		case 9:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_485(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	Global_1878407->f_7 = 0f;
	func_673(iParam0);
}

void func_486(struct<2> Param0, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	if (!func_674(Param0))
	{
		return;
	}
	if (!func_470(Param0) && !func_675(Param0))
	{
		return;
	}
	if (bParam2)
	{
		*Global_1900869 = { Param0 };
		Global_1900871 = get_game_timer();
	}
	if (func_662(Param0) == 4)
	{
		if (!func_662(Param0) == 5 && !func_662(Param0) == 6)
		{
			func_676(Param0, 5);
			func_677(Param0);
		}
		return;
	}
	if (func_662(Param0) == 3)
	{
		func_678(1, -1706799532);
	}
	else if (func_662(Param0) == 4)
	{
		func_678(0, -1706799532);
	}
	if (!func_662(Param0) == 0)
	{
		if (_0x01f4d242765c6b24(func_478(Param0)))
		{
			iVar0 = 0;
			func_256(Param0, iVar0, 0, 255, 0);
		}
	}
	if (func_680(func_679(0), Param0))
	{
		func_362(1);
		func_681(0);
		func_682(1);
	}
	func_676(Param0, 0);
	func_677(Param0);
	func_682(1);
	Global_1051252->f_45.f_1 = 1;
	iVar1 = func_499(Param0);
	if (iVar1 != 2 && iVar1 != 7)
	{
		_0x1096603b519c905f("");
	}
}

void func_487(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_488(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_683(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_684(iParam0))
	{
		return false;
	}
	if (func_685(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_686(iParam0, 1)) || func_392(32768))
	{
		if (!func_686(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_687())
	{
		return false;
	}
	return true;
}

void func_489(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

void func_490(int iParam0)
{
	Global_1109804->f_260.f_5462 = (Global_1109804->f_260.f_5462 || iParam0);
}

void func_491(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_492()
{
	fVar0 = get_random_float_in_range(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_493(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 30:
			return 27;
		case 52:
			return 28;
		case 31:
			return 29;
		case 32:
			return 30;
		case 33:
			return 31;
		case 127:
			return 32;
		case 131:
			return 33;
		case 132:
			return 34;
		case 35:
			return 35;
		case 88:
			return 40;
		case 37:
			return 42;
		case 38:
			return 43;
		case 94:
			return 44;
		case 121:
			return 46;
		case 39:
			return 47;
		case 40:
			return 48;
		case 41:
			return 49;
		case 42:
			return 50;
		case 53:
			return 51;
		case 44:
			return 52;
		case 55:
			return 53;
		case 45:
			return 54;
		case 47:
			return 57;
		case 51:
			return 61;
		case 60:
			return 63;
		case 62:
			return 64;
		case 63:
			return 65;
		case 64:
			return 66;
		case 65:
			return 67;
		case 66:
			return 68;
		case 135:
			return 69;
		case 136:
			return 70;
		case 67:
			return 71;
		case 82:
			return 72;
		case 69:
			return 73;
		case 70:
			return 74;
		case 72:
			return 76;
		case 73:
			return 78;
		case 74:
			return 79;
		case 75:
			return 80;
		case 76:
			return 81;
		case 77:
			return 82;
		case 80:
			return 84;
		case 81:
			return 85;
		case 123:
			return 86;
		case 83:
			return 87;
		case 84:
			return 88;
		case 85:
			return 90;
		case 86:
			return 91;
		case 87:
			return 92;
		case 92:
			return 96;
		case 93:
			return 97;
		case 98:
			return 99;
		case 99:
			return 100;
		case 100:
			return 101;
		case 101:
			return 102;
		case 102:
			return 103;
		case 103:
			return 104;
		case 104:
			return 105;
		case 105:
			return 106;
		case 106:
			return 107;
		case 110:
			return 114;
		case 111:
			return 115;
		case 113:
			return 118;
		case 115:
			return 119;
		case 116:
			return 120;
		case 117:
			return 121;
		case 118:
			return 122;
		case 139:
			return 123;
		default:
			break;
	}
	return 0;
}

int func_494(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 170;
		case 1:
			return 171;
		case 2:
			return 172;
		case 3:
			return 173;
		case 4:
			return 174;
		case 5:
			return 175;
		case 6:
			return 175;
		case 7:
			return 175;
		case 8:
			return 176;
		case 9:
			return 177;
		case 10:
			return 178;
		case 11:
			return 179;
		case 12:
			return 180;
		case 13:
			return 181;
		case 14:
			return 182;
		case 15:
			return 183;
		case 16:
			return 184;
		default:
			break;
	}
	return -1;
}

void func_495(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

bool func_496()
{
	return func_545(Global_1572887->f_7, 1);
}

var func_497(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_688() != 0)
	{
		iVar1 = player_id();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			_0x31010318ba9897ac(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1296859->f_10;
	iVar6 = Global_1296859->f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (vmag2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case 665633627:
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_689());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_689());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_689());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_690(get_player_team(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!network_get_this_script_is_network_script())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (network_is_player_active(&(Global_1296859->f_154[iVar2])))
		{
			iVar10 = &Global_1296859->f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_691(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = get_player_ped(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!does_entity_exist(iVar11))
					{
						bVar3 = true;
					}
					else if (&Global_1296859->f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_613(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && _0xb655db7582aec805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !network_is_player_a_participant(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (get_player_team(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (_0x901e0dc25080c8b9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_692(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!_0xf256a75210c5c0eb(iVar8, get_entity_coords(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				_0x31010318ba9897ac(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		_delete_volume(iVar8);
	}
	return uVar0;
}

void func_498(var uParam0, int iParam1)
{
	uParam0->f_39.f_58 = iParam1;
	func_693(uParam0);
}

int func_499(var uParam0, var uParam1)
{
	return uParam0;
}

int func_500(int iParam0)
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

void func_501(struct<2> Param0, var uParam2)
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
	switch (func_499(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_695(func_694(Param0));
			iVar5 = func_696(iVar4);
			if (!func_697(iVar5, 0))
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

var func_502(int iParam0)
{
	iVar51 = _0xd1bf325c8252a982(iParam0, &Var0);
	if (iVar51 == 0)
	{
		return uVar50;
	}
	iVar52 = 0;
	iVar52 = 0;
	while (iVar52 <= (iVar51 - 1))
	{
		iVar53 = network_get_player_from_gamer_handle(Var0[iVar52]);
		if (network_is_player_active(iVar53))
		{
			_0x31010318ba9897ac(&uVar50, iVar53);
		}
		iVar52++;
	}
	return uVar50;
}

void func_503(var uParam0)
{
	if (!_0x179a6f0ee2e79026(&uParam0))
	{
		return;
	}
	Var0.f_16.f_1 = -1;
	Var0.f_16.f_2 = -1;
	Var0.f_16.f_3 = -1;
	Var0.f_16.f_3.f_1 = -1;
	Var0 = 51;
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	Var0.f_4 = 3;
	trigger_script_event(1, &Var0, 27, 30, &uParam0);
}

int func_504(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_698() && !bParam3)
	{
		return 0;
	}
	if (!bParam2)
	{
		func_699(0);
	}
	func_700();
	if (func_701(255, 0))
	{
		if (_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())) != player_id())
		{
			if (!bParam2 && bParam1)
			{
				func_702(1);
			}
		}
	}
	if (network_is_session_active())
	{
		_0x0ae241a4a9adeeec(0);
	}
	func_703();
	func_704(21);
	Global_1572887->f_106.f_91.f_1 = Global_1572887->f_106.f_9;
	Global_1572887->f_106.f_91.f_2 = iParam0;
	Global_1572887->f_106.f_91.f_4 = (get_game_timer() - Global_1572887->f_106.f_76);
	func_705();
	return 1;
}

void func_505(var uParam0, int iParam1)
{
	uParam0->f_64 = iParam1;
}

bool func_506(var uParam0, var uParam1)
{
	if (is_entity_in_water(*uParam1))
	{
		get_water_height_no_waves(get_entity_coords(*uParam1, true, false), &fVar0);
	}
	if (is_ped_falling(*uParam1))
	{
		return false;
	}
	else if (!is_entity_visible(*uParam1))
	{
		return false;
	}
	else if (is_entity_in_air(*uParam1, 1))
	{
		return false;
	}
	else if (fVar0 > 0.25f)
	{
		return false;
	}
	else if (is_ped_ragdoll(*uParam1))
	{
		return false;
	}
	else if (is_ped_climbing(*uParam1))
	{
		return false;
	}
	else if (_0x84d0bf2b21862059(*uParam1))
	{
		return false;
	}
	else if (is_ped_getting_up(*uParam1))
	{
		return false;
	}
	else if (_get_ped_crouch_movement(*uParam1))
	{
		return false;
	}
	else if (Global_1913694->f_1582 || Global_1913694->f_1581)
	{
		return false;
	}
	else if (is_ped_in_cover(*uParam1, 0, 0))
	{
		return false;
	}
	else if (func_706(uParam1))
	{
		return false;
	}
	else if (is_ped_going_into_cover(*uParam1))
	{
		return false;
	}
	else if (is_ped_aiming_from_cover(*uParam1))
	{
		return false;
	}
	else if (is_ped_in_any_vehicle(*uParam1, false) && !func_507(uParam1))
	{
		return false;
	}
	else if (_0x2311f15d971aa680(*uParam1) != -1)
	{
		return false;
	}
	else if (func_707(uParam1))
	{
		return false;
	}
	else if (_0xa24c1d341c6e0d53(1, 0, 0) && !is_bit_set(uParam0->f_8, 18))
	{
		return false;
	}
	else if (_is_ped_hogtying(*uParam1))
	{
		return false;
	}
	else if (_is_ped_hogtied(*uParam1))
	{
		return false;
	}
	else if (is_ped_on_vehicle(*uParam1, false))
	{
		return false;
	}
	else if (!is_entity_on_screen(*uParam1))
	{
		return false;
	}
	else if (Global_1102219->f_26.f_3337 != 0)
	{
		return false;
	}
	else if (func_610(&(Global_1102219->f_4), 1, 5))
	{
		return false;
	}
	return true;
}

bool func_507(var uParam0)
{
	if (is_ped_in_any_vehicle(*uParam0, false) || is_ped_on_vehicle(*uParam0, false))
	{
		iVar0 = get_vehicle_ped_is_using(*uParam0);
		iVar1 = get_entity_model(iVar0);
		if (iVar1 == 742064790)
		{
			iLocal_23 = func_708();
			return true;
		}
	}
	return false;
}

void func_508(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_509(var uParam0, var uParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (uParam0->f_12 == -1)
	{
		if (bParam3)
		{
			uParam0->f_12 = (get_game_timer() % 2);
		}
		else if (!bParam2 || !_0xcb690f680a3ea971(*uParam1, 6))
		{
			if (get_random_int_in_range(0, 10) < 5)
			{
				uParam0->f_12 = 0;
			}
			else
			{
				uParam0->f_12 = 2;
			}
		}
		else
		{
			uParam0->f_12 = (get_game_timer() % 4);
		}
		if (func_510(uParam1))
		{
			uParam0->f_12 = 0;
		}
		if (iParam4 >= 0)
		{
			uParam0->f_12 = iParam4;
		}
	}
	bVar10 = false;
	if (!bParam2)
	{
		bVar10 = true;
	}
	else if (!_0xcb690f680a3ea971(*uParam1, 6))
	{
		bVar10 = true;
	}
	func_709(uParam0->f_12, &vVar0, &vVar3, &vVar6, &uVar9, _0xdc44f405a6b98d03(*uParam1, 0), is_ped_male(*uParam1), bVar10, bParam3);
	vVar11 = { get_offset_from_entity_in_world_coords(*uParam1, vVar0) };
	iVar14 = func_710(uParam0, uParam1, vVar11, get_entity_coords(*uParam1, true, false));
	if (iVar14 == 1)
	{
		func_711(uParam0, uParam1, vVar0, vVar3, vVar6, uVar9);
	}
	else
	{
		uParam0->f_12 = -1;
	}
	return iVar14;
}

bool func_510(var uParam0)
{
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	if (get_current_ped_weapon(*uParam0, &iVar0, true, 0, false))
	{
		return (_is_weapon_pistol(iVar0) || _is_weapon_revolver(iVar0));
	}
	return false;
}

void func_511(var uParam0)
{
	set_cam_coord(*uParam0, get_gameplay_cam_coord());
	set_cam_rot(*uParam0, get_gameplay_cam_rot(2), 2);
	set_cam_fov(*uParam0, get_gameplay_cam_fov());
}

int func_512(int iParam0, int iParam1, int iParam2)
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

void func_513(var uParam0, bool bParam1, bool bParam2)
{
	if (network_is_game_in_progress() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = get_network_time();
		}
		else
		{
			*uParam0 = get_network_time_accurate();
		}
	}
	else
	{
		*uParam0 = get_game_timer();
	}
	uParam0->f_1 = 1;
}

bool func_514(var uParam0)
{
	return uParam0->f_1;
}

int func_515(var uParam0, bool bParam1, bool bParam2)
{
	if (network_is_game_in_progress() && !bParam1)
	{
		if (!bParam2)
		{
			return get_time_difference(*uParam0, get_network_time());
		}
		else
		{
			return get_time_difference(*uParam0, get_network_time_accurate());
		}
	}
	return get_time_difference(*uParam0, get_game_timer());
}

void func_516(var uParam0, var uParam1)
{
	if (!_0xcb690f680a3ea971(*uParam0, 6))
	{
		return;
	}
	if (_is_ped_hogtying(*uParam0) || _is_ped_hogtied(*uParam0))
	{
		return;
	}
	clear_ped_tasks_immediately(*uParam0, false, true);
	StringCopy(&cVar29, "Camera", 16);
	if (uParam1->f_12 > 0)
	{
		StringConCat(&cVar29, "_", 16);
		StringIntConCat(&cVar29, uParam1->f_12, 16);
	}
	_get_anim_scene_entity_matrix(uParam1->f_20, &cVar29, &Var17, false, "LIVE", 2);
	uParam1->f_13.f_1 = (uParam1->f_13.f_1 + 0.165f);
	Var0.f_1 = { func_712(Var17, Var17.f_3, uParam1->f_13) };
	Var0.f_4 = 10000;
	Var0.f_6 = 1;
	Var0.f_7 = 1;
	task_shoot_with_weapon(*uParam0, &Var0);
}

int func_517(int iParam0)
{
	return 0;
}

int func_518(int iParam0)
{
	return 0;
}

void func_519(var uParam0, var uParam1)
{
	if (func_713(uParam0, uParam1))
	{
		uParam1->f_63 = func_714(uParam1);
	}
}

void func_520(var uParam0, int iParam1, int iParam2)
{
	func_715(uParam0, "Local Player", iParam1, iParam2);
	func_715(&(uParam0->f_6), "Perpetrator", iParam1, iParam2);
	if (uParam0->f_12 != 0)
	{
		func_715(&(uParam0->f_12), "Perpetrator's Rider", iParam1, iParam2);
	}
	func_715(&(uParam0->f_18), "Victim", iParam1, iParam2);
	if (uParam0->f_24 != 0)
	{
		func_715(&(uParam0->f_24), "Victim's Rider", iParam1, iParam2);
	}
	is_entity_dead(uParam0->f_30);
	is_entity_dead(uParam0->f_30.f_1);
	if (does_entity_exist(uParam0->f_30))
	{
		vVar0 = { get_entity_coords(uParam0->f_30, true, false) };
	}
	if (does_entity_exist(uParam0->f_30.f_1))
	{
		vVar3 = { get_entity_coords(uParam0->f_30.f_1, true, false) };
	}
	if (!func_119(vVar0) && !func_119(vVar3))
	{
		StringCopy(&cVar6, "", 64);
		StringIntConCat(&cVar6, floor(vdist(vVar0, vVar3)), 64);
		StringConCat(&cVar6, "m ", 64);
		vVar14 = { vVar3 - vVar0 };
		fVar17 = get_heading_from_vector_2d(vVar14.x, vVar14.y);
		if (fVar17 == 360f)
		{
			fVar17 = 0f;
		}
		StringConCat(&cVar6, _0x2b6846401d68e563(fVar17, 0), 64);
		if (fVar17 > 22.5f && fVar17 <= 67.5f)
		{
			StringConCat(&cVar6, "NW", 64);
		}
		else if (fVar17 > 67.5f && fVar17 <= 112.5f)
		{
			StringConCat(&cVar6, "W", 64);
		}
		else if (fVar17 > 112.5f && fVar17 <= 157.5f)
		{
			StringConCat(&cVar6, "SW", 64);
		}
		else if (fVar17 > 157.5f && fVar17 <= 202.5f)
		{
			StringConCat(&cVar6, "S", 64);
		}
		else if (fVar17 > 202.5f && fVar17 <= 247.5f)
		{
			StringConCat(&cVar6, "SE", 64);
		}
		else if (fVar17 > 247.5f && fVar17 <= 292.5f)
		{
			StringConCat(&cVar6, "E", 64);
		}
		else if (fVar17 > 292.5f && fVar17 <= 337.5f)
		{
			StringConCat(&cVar6, "NE", 64);
		}
		else if (fVar17 > 337.5f && fVar17 <= 360f)
		{
			StringConCat(&cVar6, "N", 64);
		}
		else if (fVar17 >= 0f && fVar17 <= 22.5f)
		{
			StringConCat(&cVar6, "N", 64);
		}
	}
}

void func_521(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (uParam3->f_63)
	{
		case 10:
			break;
		case 19:
			break;
		case 18:
			break;
		case 13:
			break;
	}
}

void func_522(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (iParam3)
	{
		case -507840394:
			func_716(uParam2, iParam4);
			break;
	}
}

bool func_523(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (Global_1296406[iParam1] && iParam0) != 0;
}

char* func_524()
{
	return "RDRO_Out_Of_Bounds_Sounds";
}

bool func_525()
{
	return Global_1940144->f_10;
}

bool func_526()
{
	return Global_1940144->f_11;
}

void func_527(int iParam0)
{
	if (!func_545(&Global_1903131, iParam0))
	{
		func_717(Global_1903131, iParam0);
	}
}

void func_528()
{
	play_sound_frontend("OOB_start", func_524(), true, 0);
}

bool func_529(var uParam0, int iParam1)
{
	return (uParam0->f_375.f_1 && iParam1) != 0;
}

bool func_530(struct<30> Param0, struct<9> Param30, int iParam39, int iParam40, int iParam41)
{
	if (func_162(255))
	{
		if ((Param0.f_17.f_9 != -1612834106 && Param0.f_17.f_9 != -432403087) && Param0.f_17.f_9 != 665633627)
		{
			Param0.f_17.f_9 = -432403087;
		}
		if (Param0.f_16)
		{
			if ((Param0.f_6.f_9 != -1612834106 && Param0.f_6.f_9 != -432403087) && Param0.f_6.f_9 != 665633627)
			{
				Param0.f_6.f_9 = -432403087;
			}
		}
		func_614(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = { Param0 };
		func_615(&(Global_1102219->f_3888));
		Global_1102219->f_3888 = { Param30 };
		Global_1102219->f_3919 = iParam39;
		Global_1102219->f_3920 = iParam40;
		Global_1102219->f_3921 = iParam41;
		func_616(Global_1102219->f_3849, 36);
		func_617(Global_1102219->f_3888, 36);
		func_303(48);
		return true;
	}
	return false;
}

void func_531(vector3 vParam0, var uParam3)
{
	uParam3->f_17.f_6 = { vParam0 };
	uParam3->f_17.f_3 = { 0f, 0f, 0f };
	uParam3->f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
	uParam3->f_17.f_9 = -432403087;
	uParam3->f_16 = 1;
	uParam3->f_6.f_6 = { vParam0 };
	uParam3->f_6.f_3 = { 0f, 0f, 0f };
	uParam3->f_6 = { Global_1901947->f_50, Global_1901947->f_50, Global_1901947->f_50 };
	uParam3->f_6.f_9 = -432403087;
	if (Global_1572887->f_6)
	{
		func_718(uParam3);
	}
}

int func_532(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_719(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_720(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_533(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_290(iParam0))
	{
		return;
	}
	iVar0 = func_548(iParam0);
	func_721(iVar0, bParam1);
}

void func_534(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_290(iParam0))
	{
		return;
	}
	iVar0 = func_548(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_0xf4a5c4509bf923b1((*Global_1951255)[iVar0]->f_3, iParam1);
}

bool func_535(int iParam0, bool bParam1)
{
	if (bParam1 && !func_290(iParam0))
	{
		return false;
	}
	return !func_719(iParam0, 4);
}

void func_536(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_290(iParam0))
	{
		return;
	}
	iVar0 = func_548(iParam0);
	if (bParam1)
	{
		func_722(iParam0, 4);
		if (bParam3)
		{
			func_721(iVar0, 1);
		}
		func_723(iVar0, 1);
	}
	else
	{
		func_724(iParam0, 4);
		func_723(iVar0, 0);
	}
}

float func_537(int iParam0, bool bParam1)
{
	if (bParam1 && !func_290(iParam0))
	{
		return 0f;
	}
	iVar0 = func_548(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1951255)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1951255)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1951255)[iVar0]->f_3);
}

bool func_538(int iParam0, bool bParam1)
{
	if (bParam1 && !func_290(iParam0))
	{
		return false;
	}
	iVar0 = func_548(iParam0);
	if (_uiprompt_has_hold_auto_fill_mode((*Global_1951255)[iVar0]->f_3))
	{
		if ((*Global_1951255)[iVar0]->f_20)
		{
			iVar1 = get_game_timer();
		}
		else
		{
			iVar1 = _get_system_time();
		}
		uVar2 = _0x81801291806dbc50((*Global_1951255)[iVar0]->f_3);
		if (!_uiprompt_is_active((*Global_1951255)[iVar0]->f_3))
		{
			iVar3 = (iVar1 - (*Global_1951255)[iVar0]->f_21);
			iVar4 = floor((IntToFloat((*Global_1951255)[iVar0]->f_18) * (1f - (*Global_1951255)[iVar0]->f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			(*Global_1951255)[iVar0]->f_21 = iVar1;
			(*Global_1951255)[iVar0]->f_22 = uVar2;
		}
	}
	if (_uiprompt_has_mash_mode((*Global_1951255)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1951255)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1951255)[iVar0]->f_3);
}

void func_539(int iParam0)
{
	iVar0 = network_player_id_to_int();
	if (iVar0 == 255)
	{
		return;
	}
	(*Global_1296406)[iVar0] = (Global_1296406[iVar0] || iParam0);
}

bool func_540(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = network_player_id_to_int();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (_0x72b2e00c9bac6789(&(Global_1296379->f_2), iParam0))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (_0x72b2e00c9bac6789(Global_1296379->f_23[iVar0], iParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_541(int iParam0)
{
	if (!Global_1071686->f_3)
	{
		return;
	}
	if (!network_is_in_session())
	{
		return;
	}
	if (func_545(Global_1197355[network_player_id_to_int()], iParam0))
	{
		func_546((*Global_1197355)[network_player_id_to_int()], iParam0);
		Global_1051252->f_45.f_1 = 1;
	}
}

void func_542()
{
	enable_script_brain_set(4);
}

void func_543()
{
	enable_script_brain_set(1);
}

bool func_544(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

bool func_545(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_546(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_547()
{
	if (!Global_1102219->f_16)
	{
		return;
	}
	Global_1071686->f_28662.f_5 = 1;
	_0x531a78d6bf27014b("rdro_gamemode_transition_sounds");
	_0x531a78d6bf27014b("rdro_gamemode_generic_sounds");
}

int func_548(int iParam0)
{
	return iParam0;
}

void func_549(int iParam0)
{
	if (!func_725(iParam0))
	{
		return;
	}
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_delete((*Global_1951255)[iParam0]->f_3);
	}
	(*Global_1951255)[iParam0]->f_4 = 0;
	(*Global_1951255)[iParam0] = 1;
	(*Global_1951255)[iParam0]->f_16 = 0;
	(*Global_1951255)[iParam0]->f_1 = 0;
	(*Global_1951255)[iParam0]->f_6 = { 0f, 0f, 0f };
	(*Global_1951255)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1951255)[iParam0]->f_9 = 0f;
	(*Global_1951255)[iParam0]->f_10 = 0;
	(*Global_1951255)[iParam0]->f_11 = 0;
	(*Global_1951255)[iParam0]->f_2 = 1;
	(*Global_1951255)[iParam0]->f_15 = -1f;
}

int func_550(int iParam0, int iParam1)
{
	if (!_does_volume_exist(iParam1))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (_0xde0ea444735c1368(iParam1))
	{
		_0x2c87c3e1c7b96ee2(iParam1);
	}
	if (_0x0cab404cd2db41f5(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

bool func_551(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

struct<14> func_552(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

bool func_553(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_324(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_554(var uParam0, var uParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	iVar0 = func_324(bParam2);
	if (!_0x025a1b1fb03fbf61(iVar0, uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_555(var uParam0, int iParam1)
{
	return func_352(*uParam0, iParam1);
}

int func_556(int iParam0)
{
	if (!&Global_1048577)
	{
		return 3;
	}
	iVar0 = (*Global_263042)[iParam0]->f_1.f_21.f_2;
	iVar1 = func_726(iVar0);
	iVar2 = func_727(iVar0, iVar1);
	return iVar2;
}

int func_557(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return 1;
	}
	if (func_674(*Global_1051213) && !func_680(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_572(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_728(iParam3, 255))
	{
		Global_1071686->f_28351 = 4;
		return 1;
	}
	if (Global_263042[&Global_1296859] > 2)
	{
		Global_1071686->f_28351 = 5;
		return 1;
	}
	if (&Global_262155 >= 1)
	{
		Global_1071686->f_28351 = 6;
		return 1;
	}
	if (func_729())
	{
		Global_1071686->f_28351 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_674(*Global_1051213))
		{
			Global_1071686->f_28351 = 8;
			return 1;
		}
	}
	if (Global_265377->f_124675 != 0 && _does_thread_exist(Global_265377->f_124675))
	{
		Global_1071686->f_28351 = 9;
		return 1;
	}
	Global_1071686->f_28351 = 0;
	return 0;
}

bool func_558(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return is_bit_set(uParam0[iVar0], iVar1);
}

bool func_559(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_324(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_560(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!func_98(uParam0, iParam1, iParam2, iParam3))
	{
		return false;
	}
	if (uParam0->f_9 == 1782082944)
	{
		return false;
	}
	if (func_554(uParam0, uParam0, bParam4))
	{
		return true;
	}
	return false;
}

void func_561(var uParam0, int iParam1)
{
	if (!func_555(uParam0, iParam1))
	{
		return;
	}
	func_468(uParam0, iParam1);
}

bool func_562(var uParam0, bool bParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (_0x375f5870a7b8bec1(&(uParam0->f_16)))
	{
		StringCopy(&(uParam0->f_16), func_366(), 64);
	}
	if (func_730(bParam2))
	{
		if (!_0xd80a8854db5cfba5(func_324(bParam2), uParam0, uParam0, 29))
		{
			return false;
		}
	}
	else
	{
		Var0.f_9 = 1;
		Var0.f_11 = -1591664384;
		Var0 = { func_731(uParam0, 0) };
		Var0.f_16 = { uParam0->f_16 };
		Var0.f_25 = uParam0->f_27;
		Var0.f_26 = uParam0->f_28;
		Var0.f_24 = uParam0->f_25;
		Var0.f_27 = uParam0->f_24;
		if (func_732(-1230526146, &Var0, bParam1) == -1)
		{
			return false;
		}
	}
	return true;
}

void func_563(var uParam0, int iParam1)
{
	if (func_555(uParam0, iParam1))
	{
		return;
	}
	func_469(uParam0, iParam1);
}

void func_564(int iParam0, int iParam1)
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

void func_565(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_733(uParam0))
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

int func_566(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1992167326:
			return 8;
		case -1884014371:
			return 9;
		case -1871413878:
			return 10;
		case -1554232707:
			return 6;
		case -987049424:
			return 4;
		case -724534761:
			return 12;
		case -215258135:
			return 3;
		case -682748:
			return 0;
		case 892234183:
			return 5;
		case 1357161730:
			return 1;
		case 1483778247:
			return 11;
		case 1538293636:
			return 7;
		case 1581179681:
			return 2;
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

bool func_567(int iParam0, int iParam1)
{
	if (!func_593(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_587(iParam0);
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
			if (!func_734(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_735(iParam0))
			{
				return true;
			}
			break;
	}
	return func_371(iParam0, 0, 0, 0) >= iParam1;
}

Vector3 func_568()
{
	Var3 = { func_736(0) };
	if (Var3.f_8 != -1838434463)
	{
	}
	if (((Var3.f_16 == 0 && Var3.f_18 == 0) && Global_17411.f_55.f_4.f_2 != 0) && Global_17411.f_55.f_4 >= 4)
	{
		vVar0 = { Global_17411.f_55.f_4 };
	}
	else
	{
		vVar0.x = Var3.f_16;
		vVar0.f_1 = Var3.f_17;
		vVar0.f_2 = Var3.f_18;
	}
	return vVar0;
}

int func_569(vector3 vParam0, bool bParam3)
{
	iVar0 = -1;
	Var1 = { func_736(0) };
	Var1.f_17 = vParam0.y;
	Var1.f_18 = vParam0.z;
	Var1.f_16 = vParam0.x;
	iVar0 = func_737(-1230526146, &Var1, bParam3);
	if (iVar0 == -1)
	{
	}
	return iVar0;
}

bool func_570()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_3;
}

bool func_571()
{
	return !func_342(2);
}

bool func_572(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_573()
{
	iVar0 = func_354(player_id());
	if (iVar0 != -1)
	{
		if ((*Global_1131196)[iVar0]->f_18.f_1 != 0 && func_352((*Global_1131196)[iVar0]->f_18, 1))
		{
			return true;
		}
	}
	return false;
}

void func_574(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_575(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_576(var uParam0, int iParam1, var uParam2)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	func_738(uParam2);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_739(uParam0, uParam2))
			{
				return 0;
			}
			break;
		case 2:
			if (!func_740(uParam0, uParam2))
			{
				return 0;
			}
			break;
	}
	return 1;
}

struct<4> func_577(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_593(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_324(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_578(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	return func_741(&uParam0, iParam4, uParam5, bParam6, iParam7);
}

bool func_579(var uParam0)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (uParam0->f_10 == -1)
	{
		return false;
	}
	return true;
}

bool func_580(var uParam0)
{
	if (!func_579(uParam0))
	{
		return false;
	}
	switch (uParam0->f_10)
	{
		case 0:
		case 1:
			if (!func_742(uParam0))
			{
				return false;
			}
			break;
		case 2:
			if (!func_743(uParam0))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_581()
{
	func_744(&(Global_1291734->f_938));
	func_745(0);
	func_745(2);
}

void func_582(var uParam0, char* sParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!_0x4c543d5dfcd2dafd(Global_1291734->f_938[iVar0], uParam0))
		{
		}
		else
		{
			StringCopy(&(Global_1291734->f_938[iVar0]->f_7), sParam1, 64);
			StringCopy(&(Global_1291734->f_938[iVar0]->f_15), sParam1, 64);
			Global_1291734->f_938[iVar0]->f_23 = Global_1296859->f_21 + 10;
		}
		else
		{
			iVar0++;
		}
	}
}

bool func_583(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_746(iParam0))
		{
			return false;
		}
	}
	if (func_733(&(iParam0->f_6)))
	{
		if (_0xe10f2d7715ababec(&(iParam0->f_6)))
		{
			return false;
		}
	}
	if (!_0xce54c9abe6fbc6db(2113164098))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(-1318406457))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(-1230526146))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(1702063850))
	{
		return false;
	}
	if (!_cashinventory_is_session_ready())
	{
		return false;
	}
	if (_cashinventory_is_connection_faulted())
	{
		return false;
	}
	if (_cashinventory_init_session_is_faulted())
	{
		return false;
	}
	return true;
}

int func_584(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_593(iParam0, 0))
	{
		return 0;
	}
	if (func_747(iParam0))
	{
		return func_750(func_748(iParam0, 0), iParam1, bParam2, iParam3, func_749(iParam0));
	}
	if (func_751(iParam0, bParam4) || func_752(iParam0))
	{
		iParam1 = 997808187;
	}
	else if (func_749(iParam0) && (func_753(iParam0, &iVar0) || func_754(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else
	{
		bVar1 = func_755(iParam0, -570078785);
		bVar2 = func_755(iParam0, -915411861);
		if (bVar1 && !bVar2)
		{
			iParam1 = -570078785;
		}
		else if (bVar2 && bVar1)
		{
			if (func_756())
			{
				iParam1 = -570078785;
			}
			else
			{
				iParam1 = -915411861;
			}
		}
		else if (bVar2)
		{
			iParam1 = -915411861;
		}
		else if (func_757(15) && func_755(iParam0, 369710026))
		{
			iParam1 = 369710026;
		}
		else
		{
			iParam1 = 0;
		}
	}
	if (iParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return iParam1;
}

int func_585(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	if (func_545(iParam9, 32))
	{
		if (!_0xb881ca836cc4b6d4(&Param2))
		{
			return 0;
		}
		Var0.f_9 = -1591664384;
		if (!func_325(Param2, &Var0, 1, 0, -1))
		{
			return 0;
		}
		if (!func_759(iParam1, func_758(Var0.f_4), iParam6))
		{
			return 0;
		}
	}
	if (func_545(iParam9, 1))
	{
		if (!func_760(iParam1))
		{
			return 0;
		}
	}
	if (func_545(iParam9, 2))
	{
		if (func_761(iParam1, iParam7, 1))
		{
			return 0;
		}
	}
	if (func_545(iParam9, 4))
	{
		if (!bParam10 && !_0xb881ca836cc4b6d4(&Param2))
		{
			return 0;
		}
		Var14.f_4 = iParam6;
		Var14 = { Param2 };
		iVar19 = func_394(iParam1, Param2, iParam6, 1, !bParam10, 0);
		iVar20 = func_762(iParam1, &Var14, !bParam10, 1);
		iVar21 = 1;
		if (func_763(iParam1, iParam7, &iVar21, 0))
		{
		}
		iVar22 = (func_764(iParam0, iParam1) * iVar21);
		if (iVar22 > 0)
		{
		}
		if (iVar20 >= 0)
		{
			iVar23 = (iVar20 - (iVar19 + iVar22));
			iVar24 = (iParam8 * iVar21);
			if (iVar24 > iVar20)
			{
				iVar24 = iVar20;
			}
			if (iVar23 <= 0)
			{
				return 0;
			}
			else if ((iVar24 - iVar23) >= iVar21)
			{
				return 0;
			}
		}
	}
	if (func_545(iParam9, 8))
	{
		return func_765(iParam0, iParam1, iParam7, iParam8);
	}
	return 1;
}

struct<16> func_586(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_577(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_596(iParam0, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_321() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_587(int iParam0)
{
	if (!func_593(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_588(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, int iParam18, bool bParam19, int iParam20)
{
	if ((iParam18 != 2113164098 && iParam18 != -1318406457) && iParam18 != -1230526146)
	{
		return false;
	}
	if (!func_766(iParam18, &uParam1, iParam20))
	{
		return false;
	}
	if (!func_767(iParam0, iParam18))
	{
		return false;
	}
	if (func_768(*iParam0, iParam18, &uParam1))
	{
	}
	else
	{
		return false;
	}
	return func_769(iParam0, bParam19);
}

bool func_589(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17, bool bParam18, int iParam19)
{
	if ((((iParam17 != 2113164098 && iParam17 != -1318406457) && iParam17 != -1230526146) && iParam17 != 1702063850) && iParam17 != -1406934746)
	{
		return false;
	}
	if (!func_766(iParam17, &uParam1, iParam19))
	{
		return false;
	}
	if (!func_767(iParam0, iParam17))
	{
		return false;
	}
	if (func_770(*iParam0, iParam17, &uParam1))
	{
	}
	else
	{
		return false;
	}
	return func_769(iParam0, bParam18);
}

int func_590(int iParam0)
{
	if (!func_593(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_758(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

int func_591(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar0 = func_758(iParam0);
		if (iVar0 != 0)
		{
			if (iParam1 >= 0 && iParam1 < func_590(iParam0))
			{
				if (_item_database_get_has_slot_info(iVar0, iParam1, &uVar1))
				{
					return uVar1;
				}
			}
		}
	}
	return 0;
}

int func_592(var uParam0, bool bParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_324(bParam2), uParam0, bParam1);
}

bool func_593(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_594(int iParam0, int iParam1)
{
	if (!func_593(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_587(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_771(iParam0, 1399091007))
	{
		func_772(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_595(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_552(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_774(&Var0, func_773(0));
	}
	if (!func_553(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_101(iVar14);
	return uVar15;
}

int func_596(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

struct<4> func_597(int iParam0, bool bParam1)
{
	Var0 = { func_775(iParam0, bParam1, 0) };
	return func_577(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_598(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_324(bParam7);
	if (_0x033ee4b89f3ac545(iVar0, &uParam0, bParam4) <= iParam6)
	{
		return false;
	}
	if (!_0xbe012571b25f5aca(iVar0, &uParam0, bParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

bool func_599(var uParam0, bool bParam1)
{
	Var0 = { func_364(0) };
	iVar5 = func_776(bParam1);
	Var6.f_9 = -1591664384;
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (func_777(iVar4, &Var6, bParam1))
		{
			if (_0x4c543d5dfcd2dafd(&Var0, uParam0))
			{
				return true;
			}
		}
		iVar4++;
	}
	return false;
}

bool func_600(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!func_730(bParam9))
	{
		return func_778(Param0, Param4, iParam8, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	if (func_779(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_325(Param0, &Var0, 1, 0, -1) || !func_325(Param4, &Var14, 1, 0, -1))
	{
		return false;
	}
	if (func_779(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_324(0);
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

bool func_601(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	if (!func_730(bParam10))
	{
		return func_780(Param0, Param4, iParam8, 1, bParam9, 1, -1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_325(Param0, &Var0, 0, 0, -1))
	{
		return false;
	}
	if (func_779(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!_0xdccaa7c3bfd88862(func_324(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_781(Var14, 1, 0))
		{
		}
	}
	return true;
}

void func_602(var uParam0, int iParam1)
{
	uParam0->f_3.f_4 = (uParam0->f_3.f_4 + iParam1);
	reserve_network_mission_peds(uParam0->f_3.f_4);
}

void func_603(var uParam0, int iParam1)
{
	uParam0->f_3.f_4 = (uParam0->f_3.f_4 - iParam1);
	reserve_network_mission_peds(uParam0->f_3.f_4);
}

void func_604(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6)
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
	if (iParam0 == func_782(Global_34) && is_player_teleport_active())
	{
	}
	if (func_783(iParam0))
	{
		if (func_784(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_352(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_604(iVar0, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_604(iVar2, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
	}
	if (!func_352(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_352(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_352(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_352(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_352(iParam5, 129))
	{
		if (func_352(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		_set_entity_coords_and_heading_no_offset(iParam0, vParam1, fParam4, func_352(iParam5, 32), true);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_352(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_352(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_783(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_352(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_34 && !func_352(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

void func_605(var uParam0, int iParam1)
{
	uParam0->f_8.f_4 = (uParam0->f_8.f_4 + iParam1);
	reserve_network_mission_vehicles(uParam0->f_8.f_4);
}

void func_606(var uParam0, int iParam1)
{
	uParam0->f_8.f_4 = (uParam0->f_8.f_4 - iParam1);
	reserve_network_mission_vehicles(uParam0->f_8.f_4);
}

void func_607(var uParam0, int iParam1)
{
	uParam0->f_13.f_5 = (uParam0->f_13.f_5 + iParam1);
	reserve_network_mission_objects(uParam0->f_13.f_5);
}

void func_608(var uParam0, int iParam1)
{
	uParam0->f_13.f_5 = (uParam0->f_13.f_5 - iParam1);
	reserve_network_mission_objects(uParam0->f_13.f_5);
}

int func_609(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (iParam5 == 2)
	{
		iParam5 = func_785(2);
	}
	iVar0 = player_ped_id();
	if (func_786(iVar0, iParam0, fParam1))
	{
		if (bParam2)
		{
			if (fParam1 >= 100f)
			{
				play_sound_frontend("Core_Full", "Consumption_Sounds", true, 0);
			}
			else
			{
				play_sound_frontend("Core_Fill_Up", "Consumption_Sounds", true, 0);
			}
		}
		if (bParam3)
		{
			func_787(iParam0, 7000, iParam5);
		}
		func_788(iVar0, iParam0, fParam1);
		func_789(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

bool func_610(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_611()
{
	return Global_1102219->f_3672;
}

bool func_612(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

int func_613(int iParam0)
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

void func_614(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_615(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_616(struct<29> Param0, var uParam29, int iParam30)
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

bool func_618(int iParam0)
{
	return iParam0 != 0;
}

bool func_619(int* iParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	if (func_790(&uParam1) == 2)
	{
		return true;
	}
	iVar0 = get_number_of_events(1);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = get_event_at_index(1, iVar2);
		if (iVar1 != 1741908893)
		{
		}
		else if (!get_event_data(1, iVar2, iParam0, 12))
		{
		}
		else if (iParam0->f_5 != iParam5)
		{
		}
		else
		{
			if (iParam0->f_4 == 1)
			{
				return true;
			}
			if (!func_791(&uParam1, iParam0))
			{
			}
			else if (iParam0->f_4 == 0)
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

void func_620(int iParam0)
{
	if (Global_1940144->f_105.f_2 >= iParam0)
	{
		return;
	}
	Global_1940144->f_105.f_2 = iParam0;
}

int func_621(bool bParam0, bool bParam1, bool bParam2)
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

int func_622(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, float fParam11, float fParam12, bool bParam13, int iParam14)
{
	func_792(iParam0, vParam1, 0, fParam5, bParam6, fParam7, bParam8, fParam12, bParam13, iParam14, 0);
	return func_793(iParam0, vParam1, fParam4, bParam8, fParam9, bParam10, fParam11, bParam13, iParam14);
}

int func_623(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_624(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_625(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_626(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_794(iParam1))
	{
		return false;
	}
	*uParam0 = obj_to_net(create_object(iParam1, vParam2, true, bParam5, false, false, true));
	if (network_does_network_id_exist(*uParam0))
	{
		if (bParam5)
		{
			set_network_id_exists_on_all_machines(*uParam0, true);
		}
		return true;
	}
	return false;
}

void func_627(var uParam0, int iParam1)
{
}

bool func_628(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_795(1))
	{
		return false;
	}
	if (!func_338(iParam0))
	{
		return false;
	}
	if (!func_796(iParam0, &iVar0))
	{
		return false;
	}
	if (func_391(iParam0, 128))
	{
		return false;
	}
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (!_0xb07d3185e11657a5(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = _0xf260af6f43953316(iVar0);
	if (network_does_network_id_exist(iVar1))
	{
		*iParam1 = iVar1;
	}
	else
	{
		return false;
	}
	if (bParam2)
	{
		func_797(iParam0);
	}
	return true;
}

bool func_629(var uParam0, int iParam1)
{
	if (iParam1 <= 0 || iParam1 >= 2)
	{
		return false;
	}
	if (&uParam0->f_105.f_3[iParam1] != -1)
	{
		return true;
	}
	if (!is_string_null_or_empty(func_798(iParam1)))
	{
		sVar1 = func_798(iParam1);
	}
	if (!is_string_null_or_empty(func_799(iParam1)))
	{
		sVar0 = func_799(iParam1);
	}
	if (load_stream(sVar0, sVar1))
	{
		return true;
	}
	return false;
}

int func_630(var uParam0, int iParam1)
{
	if (iParam1 <= 0 || iParam1 >= 2)
	{
		return -1;
	}
	if (&uParam0->f_105.f_3[iParam1] == -1)
	{
		if (!is_string_null_or_empty(func_798(iParam1)))
		{
			sVar1 = func_798(iParam1);
		}
		else
		{
			return -1;
		}
		if (!is_string_null_or_empty(func_799(iParam1)))
		{
			sVar0 = func_799(iParam1);
		}
		else
		{
			return -1;
		}
		uParam0->f_105.f_3[iParam1] = _0x0556c784fa056628(sVar0, sVar1);
	}
	return &(uParam0->f_105.f_3[iParam1]);
}

bool func_631(int iParam0, bool bParam1)
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

char* func_632(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MPINT_MCS4_LI";
		default:
			break;
	}
	return "";
}

bool func_633(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	switch (iParam2)
	{
		case 0:
			if (!func_800(uParam3, uParam1->f_432.f_74, "CRIPPS", 0))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_634(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!_0xd89504d9d7d5057d(&cParam1))
	{
		bVar0 = create_new_scripted_conversation(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_801(cParam1, cParam0);
		if (bParam6)
		{
			preload_script_conversation(&cParam1, true, true, bParam7);
		}
		else
		{
			start_script_conversation(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			_0x40ca665ab9d8d505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

int func_635(var uParam0, var uParam1, var uParam2, int iParam3)
{
	switch (iParam3)
	{
		case 0:
		default:
			break;
			if (func_119(uParam2->f_432.f_70))
			{
			}
			else
			{
				iVar0 = _blip_add_for_coord(1560611276, uParam2->f_432.f_70);
				if (does_blip_exist(iVar0))
				{
					set_blip_name_from_text_file(iVar0, "MPFT_BLIP_PLAYER_CAMP");
					_blip_set_modifier(iVar0, 231194138);
					_blip_set_modifier(iVar0, -401963276);
					_blip_set_modifier(iVar0, -1878373110);
				}
			}
	}
	return iVar0;
}

void func_636(var uParam0, int iParam1, bool bParam2)
{
	func_422(uParam0, iParam1, -401963276, bParam2);
	func_422(uParam0, iParam1, 231194138, bParam2);
}

var func_637(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

var func_638(int iParam0)
{
	switch (iParam0)
	{
		case -1992167326:
		case -1884014371:
		case -1871413878:
		case -1554232707:
		case -987049424:
		case -724534761:
		case -215258135:
		case -682748:
		case 892234183:
		case 1357161730:
		case 1483778247:
		case 1538293636:
		case 1581179681:
			iVar0 = func_566(iParam0, 1);
			return &(Global_1137047->f_361[iVar0]);
		default:
			break;
	}
	return uVar1;
}

void func_639(int iParam0)
{
	Global_1903136->f_302 = (Global_1903136->f_302 || iParam0);
}

float func_640(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_641(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1896738->f_382)
		{
			Global_1896738->f_382 = bParam0;
		}
	}
	else if (Global_1896738->f_382)
	{
		Global_1896738->f_382 = bParam0;
	}
}

int func_642()
{
	if (Global_1296859->f_21 < 79)
	{
		return 603685163;
	}
	iVar0 = ((Global_1296859->f_21 % 79) * 100 / 79);
	if (func_644())
	{
		switch (Global_1939655->f_85)
		{
			case 725623432:
				if (iVar0 < 10)
				{
					return 725623432;
				}
				else
				{
					return 669657108;
				}
				break;
			case 669657108:
				if (iVar0 < 5)
				{
					return 725623432;
				}
				else if (iVar0 < 25)
				{
					return 669657108;
				}
				else
				{
					return -273223690;
				}
				break;
			case -273223690:
				if (iVar0 < 10)
				{
					return 669657108;
				}
				else if (iVar0 < 55)
				{
					return -273223690;
				}
				else
				{
					return 603685163;
				}
				break;
			case 603685163:
				if (iVar0 < 50)
				{
					return -273223690;
				}
				else
				{
					return 603685163;
				}
				break;
		}
	}
	else
	{
		switch (Global_1939655->f_85)
		{
			case 725623432:
				if (iVar0 < 10)
				{
					return 725623432;
				}
				else
				{
					return 669657108;
				}
				break;
			case 669657108:
				if (iVar0 < 2)
				{
					return 725623432;
				}
				else if (iVar0 < 25)
				{
					return 669657108;
				}
				else
				{
					return -273223690;
				}
				break;
			case -273223690:
				if (iVar0 < 3)
				{
					return 669657108;
				}
				else if (iVar0 < 55)
				{
					return -273223690;
				}
				else
				{
					return 603685163;
				}
				break;
			case 603685163:
				if (iVar0 < 22)
				{
					return 603685163;
				}
				else if (iVar0 < 44)
				{
					return -273223690;
				}
				else
				{
					return 821931868;
				}
				break;
			case -702816767:
			case -173507739:
			case 821931868:
			case 1500834021:
			case 1632247697:
				if (iVar0 < 25)
				{
					return 603685163;
				}
				else if (iVar0 < 39)
				{
					return 1500834021;
				}
				else if (iVar0 < 45)
				{
					return -702816767;
				}
				else if (iVar0 < 53)
				{
					return -173507739;
				}
				else if (iVar0 < 75)
				{
					return 1632247697;
				}
				else
				{
					return 821931868;
				}
				break;
		}
	}
	return 603685163;
}

void func_643(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		_set_weather_type(iParam0, true, true, false, 0f, false);
	}
	else
	{
		clear_weather_type_persist();
		_set_weather_type(iParam0, true, true, true, 119f, false);
	}
	Global_1939655->f_85 = iParam0;
}

bool func_644()
{
	if (!func_443())
	{
		return false;
	}
	return func_352(Global_1901947->f_44.f_5, 32);
}

bool func_645()
{
	if (!func_443())
	{
		return false;
	}
	return func_352(Global_1901947->f_44.f_5, 2);
}

bool func_646()
{
	if (!func_443())
	{
		return false;
	}
	return func_352(Global_1901947->f_44.f_5, 64);
}

bool func_647(int iParam0)
{
	if (is_screen_faded_out())
	{
		return false;
	}
	return _is_position_inside_imap_streaming_extents(iParam0, Global_35);
}

void func_648(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		func_802(iParam0);
	}
}

void func_649(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		func_803(iParam0);
	}
}

bool func_650(int iParam0)
{
	if (!is_entity_visible(iParam0))
	{
		return true;
	}
	vVar10 = { get_entity_coords(iParam0, true, false) };
	get_model_dimensions(get_entity_model(iParam0), &vVar0, &vVar3);
	vVar6 = { absf(((vVar3.x - vVar0.x) / 2f)), absf(((vVar3.y - vVar0.y) / 2f)), absf(((vVar3.z - vVar0.z) / 2f)) };
	fVar9 = vVar6.x;
	if (fVar9 < vVar6.y)
	{
		fVar9 = vVar6.y;
	}
	if (fVar9 < vVar6.z)
	{
		fVar9 = vVar6.z;
	}
	if (is_sphere_visible(vVar10, fVar9) || is_sphere_visible_to_another_machine(get_entity_coords(iParam0, true, false), fVar9, 1120403456))
	{
		return false;
	}
	return true;
}

void func_651()
{
	if (func_804(8, 255))
	{
		return;
	}
	func_805(3);
}

void func_652()
{
	if (func_804(8, 255))
	{
		return;
	}
	func_806(3);
}

bool func_653(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_654(float fParam0)
{
	return func_653(*fParam0, 2);
}

float func_655()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_656(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

void func_657(float fParam0, float fParam1)
{
	fParam0->f_1 = (func_655() - fParam1);
	func_807(fParam0, 1);
	func_808(fParam0, 2);
	fParam0->f_2 = 0f;
}

bool func_658()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_4;
}

void func_659(int iParam0)
{
	Var0.f_8 = iParam0;
	func_809(2, Var0, func_246(0, 8));
}

void func_660(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_661(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_662(struct<2> Param0)
{
	if (!func_674(Param0))
	{
		return -1;
	}
	iVar0 = func_810(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

bool func_663(int iParam0)
{
	switch (iParam0)
	{
		case 16:
			if ((!func_811(13) || !func_811(14)) || !func_811(15))
			{
				return false;
			}
			break;
		case 17:
			if ((!func_811(13) || !func_811(14)) || !func_811(15))
			{
				return false;
			}
			if (!func_811(16))
			{
				return false;
			}
			break;
		case 18:
			if ((!func_811(13) || !func_811(14)) || !func_811(15))
			{
				return false;
			}
			break;
		case 19:
			if ((!func_811(13) || !func_811(14)) || !func_811(15))
			{
				return false;
			}
			if (!func_811(18))
			{
				return false;
			}
			break;
		case 20:
			if ((!func_811(13) || !func_811(14)) || !func_811(15))
			{
				return false;
			}
			if (!func_811(16) && !func_811(18))
			{
				return false;
			}
			if (!func_811(17) && !func_811(19))
			{
				return false;
			}
			break;
		case 21:
			if ((!func_811(13) || !func_811(14)) || !func_811(15))
			{
				return false;
			}
			if (!func_811(16))
			{
				return false;
			}
			if (!func_811(17))
			{
				return false;
			}
			break;
		case 22:
			if ((!func_811(13) || !func_811(14)) || !func_811(15))
			{
				return false;
			}
			if (!func_811(16))
			{
				return false;
			}
			if (!func_811(17))
			{
				return false;
			}
			if (!func_811(21))
			{
				return false;
			}
			break;
		case 23:
			if ((!func_811(13) || !func_811(14)) || !func_811(15))
			{
				return false;
			}
			if (!func_811(18))
			{
				return false;
			}
			if (!func_811(19))
			{
				return false;
			}
			break;
		case 24:
			if ((!func_811(13) || !func_811(14)) || !func_811(15))
			{
				return false;
			}
			if (!func_811(18))
			{
				return false;
			}
			if (!func_811(19))
			{
				return false;
			}
			if (!func_811(23))
			{
				return false;
			}
			break;
		case 25:
			if ((!func_811(13) || !func_811(14)) || !func_811(15))
			{
				return false;
			}
			if (!func_811(16) && !func_811(18))
			{
				return false;
			}
			if (!func_811(17) && !func_811(19))
			{
				return false;
			}
			if (!func_811(21) && !func_811(24))
			{
				return false;
			}
			if (!func_811(22) && !func_811(24))
			{
				return false;
			}
			if (!func_811(20))
			{
				return false;
			}
			break;
	}
	return true;
}

int func_664(int iParam0, int iParam1)
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

int func_665(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (Global_1293346->f_458.f_1546 >= 40)
	{
		func_812();
		return -1;
	}
	Var0 = -1;
	Var0.f_5.f_1 = 11;
	Var0.f_18.f_1 = 10;
	Var0.f_4 = iParam0;
	Var0 = func_813();
	Var0.f_3 = iParam1;
	func_814(Var0, 0);
	return Var0;
}

bool func_666(int iParam0)
{
	if (!func_667(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (&Global_1293346->f_458.f_44[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_667(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 2147483647)
	{
		return false;
	}
	return true;
}

int func_668(int iParam0, bool bParam1)
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

int func_669(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_815(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_670(var uParam0)
{
	iVar0 = uParam0;
	return (iVar0 >= 0 && iVar0 < 64);
}

bool func_671(int iParam0, int iParam1)
{
	if (!func_670(iParam0))
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam1) || !network_is_player_connected(iParam1))
	{
		return false;
	}
	return _0x8f4f050054005c27(&((*Global_1056141)[iParam1]->f_15.f_20), iParam0);
}

int func_672(int iParam0)
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
		case 4:
			return 4;
		case 5:
			return 1;
		case 6:
			return 2;
		case 7:
			return 3;
		case 8:
			return 4;
		case 9:
			return 1;
		case 10:
			return 2;
		case 11:
			return 3;
		case 12:
			return 4;
		case 13:
			return 6;
		case 14:
			return 6;
		case 15:
			return 6;
		case 16:
			return 7;
		case 17:
			return 7;
		case 18:
			return 8;
		case 19:
			return 8;
		case 20:
			return 9;
		case 21:
			return 7;
		case 22:
			return 7;
		case 23:
			return 8;
		case 24:
			return 8;
		case 25:
			return 9;
		default:
			break;
	}
	return -1;
}

float func_673(int iParam0)
{
	if (Global_1878407->f_7 > 0f)
	{
		return Global_1878407->f_7;
	}
	switch (iParam0)
	{
		case 1:
			iVar0 = 13;
			while (iVar0 <= 25)
			{
				iVar1 = func_816(iVar0);
				switch (iVar1)
				{
					case 5:
						fVar2 = (fVar2 + 100f);
						break;
					case 4:
						fVar2 = (fVar2 + 80f);
						break;
					case 3:
						fVar2 = (fVar2 + 65f);
						break;
					case 2:
						fVar2 = (fVar2 + 50f);
						break;
					default:
						fVar2 = (fVar2 + 0f);
						break;
				}
				fVar3 = (fVar3 + 100f);
				iVar0++;
			}
			fVar4 = ((fVar2 / fVar3) * 100f);
			Global_1878407->f_7 = fVar4;
			return Global_1878407->f_7;
		default:
			break;
	}
	return 0f;
}

bool func_674(struct<2> Param0)
{
	if (!func_817(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_818(Param0))
	{
		return false;
	}
	return true;
}

bool func_675(struct<2> Param0)
{
	iVar0 = func_662(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

void func_676(struct<2> Param0, int iParam2)
{
	if (!func_674(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_819(Param0);
	}
	else
	{
		func_820(Param0, iParam2);
	}
	func_821();
}

int func_677(struct<2> Param0)
{
	return func_823(func_822(Param0));
}

int func_678(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_824())
	{
		return 0;
	}
	if (!func_428())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_825(&Global_0, 8);
	}
	func_825(&Global_0, 1);
	return 1;
}

struct<2> func_679(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_680(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

int func_681(bool bParam0)
{
	if (!bParam0 && func_826(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_682(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

bool func_683(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_684(int iParam0)
{
	if (func_686(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_685(int iParam0)
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

bool func_686(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_687()
{
	if (!func_428())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

int func_688()
{
	return Global_1051252->f_12;
}

char* func_689()
{
	return "unnamed";
}

int func_690(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

bool func_691(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_379(36, iParam0);
}

bool func_692(int iParam0)
{
	if (func_827(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_828(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

void func_693(var uParam0)
{
	func_457(&(uParam0->f_39.f_59), 1);
}

int func_694(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_815(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_695(int iParam0)
{
	iVar0 = -1;
	if (func_829(&Var1, iParam0))
	{
		iVar0 = ((func_830() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_696(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_697(int iParam0, int iParam1)
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

bool func_698()
{
	return func_831() > 11;
}

void func_699(bool bParam0)
{
	iVar0 = player_id();
	bVar1 = false;
	if (network_is_game_in_progress())
	{
		bVar1 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(iVar0)) == iVar0;
	}
	if (_0x8fb7c254cfcbf78e(&(Global_1572887->f_360)) && (bParam0 || bVar1))
	{
		_0xe72e5c1289bd1f40(&(Global_1572887->f_360));
	}
	Var2.f_5 = 2;
	Var2.f_22 = -1;
	Var2.f_23 = -1;
	Var2.f_24 = -1;
	Var2.f_29 = -1;
	Global_1572887->f_360 = { Var2 };
}

void func_700()
{
	if (_is_app_active(1433015236))
	{
		_close_app_by_hash(1433015236);
	}
}

bool func_701(int iParam0, bool bParam1)
{
	bVar0 = false;
	if (iParam0 == 255)
	{
		bVar0 = true;
		iParam0 = func_611();
	}
	else if (iParam0 == func_611())
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

void func_702(int iParam0)
{
	_0xc08aff658b2e51da(&iVar0);
	if (iVar0 != 0)
	{
		func_717(&(Global_1194053->f_3), 32);
		func_717(&(Global_1194053->f_4), 12);
		Global_1194053->f_498 = iVar0;
		if (network_is_player_active(player_id()) && _0x424b17a7dc5c90bc(player_id()))
		{
			func_717(&(Global_1194053->f_4), 2);
		}
		_0xc08bff658b2e51da(0);
		Global_1194053->f_5[5] = 0;
		func_717(Global_1194053->f_5[5], 1);
	}
	Global_1194053->f_5[3] = 0;
	func_717(Global_1194053->f_5[3], 1);
	iVar1 = _0x901e0dc25080c8b9(player_id());
	if (!_0xd6f6acf4392187fb(iVar1))
	{
		func_717(Global_1194053->f_5[3], 6);
		return;
	}
	if (!_0x0f99f6436528a089(iVar1))
	{
		func_717(Global_1194053->f_5[3], 6);
		return;
	}
	_0x0a04a07bc3074edb(iParam0);
}

void func_703()
{
	Global_1956200->f_1431.f_108 = 0;
	Global_1956200->f_1431.f_108.f_1 = 0f;
	Global_1956200->f_1431.f_108.f_3 = 0f;
	Global_1956200->f_1431.f_108.f_2 = 0f;
	Global_1956200->f_1431.f_108.f_4 = 0f;
	Global_1956200->f_1431.f_108.f_6 = 0f;
	Global_1956200->f_1431.f_108.f_5 = 0f;
}

void func_704(int iParam0)
{
	Global_1572887->f_106.f_75 = iParam0;
}

void func_705()
{
	if (Global_1572887->f_106.f_91)
	{
		return;
	}
	Global_1572887->f_106.f_91 = 1;
	_0x4c08d2b6d8be17e4(Global_1572887->f_106.f_91.f_1, Global_1572887->f_106.f_91.f_2, Global_1572887->f_106.f_91.f_3, Global_1572887->f_106.f_91.f_4, Global_1572887->f_106.f_91.f_5, &(Global_1572887->f_106.f_91.f_6));
}

bool func_706(var uParam0)
{
	if ((!is_ped_dead_or_dying(*uParam0, true) && !is_ped_injured(*uParam0)) && !_0xb655db7582aec805(*uParam0))
	{
		return false;
	}
	return true;
}

bool func_707(var uParam0)
{
	if (is_ped_in_any_vehicle(*uParam0, false) || is_ped_on_vehicle(*uParam0, false))
	{
		iVar0 = get_vehicle_ped_is_using(*uParam0);
		iVar1 = get_entity_model(iVar0);
		if (iVar1 == 749266870 || iVar1 == -1552059402)
		{
			return true;
		}
	}
	return false;
}

int func_708()
{
	iVar0 = get_random_int_in_range(0, 100);
	if (iVar0 < 33)
	{
		return 320243264;
	}
	else if (iVar0 < 66)
	{
		return -1561793977;
	}
	return 137506481;
}

void func_709(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (bParam6)
	{
		if (bParam7)
		{
			if (!bParam8)
			{
				*uParam1 = { -0.0861f, 0.9336f, 0.5056f };
				*uParam2 = { 0.7282f, -1.9538f, 0.4905f };
				*uParam4 = 36.9924f;
			}
			else
			{
				*uParam1 = { -0.0238f, 0.5454f, 0.5883f };
				*uParam2 = { 0.755f, -2.3332f, 0.2612f };
				*uParam4 = 51.282f;
			}
		}
		else if (!bParam8)
		{
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -1.0378f, 0.7922f, 0.4744f };
					*uParam2 = { 1.7461f, -0.3213f, 0.3705f };
					*uParam3 = { -0.38f, 0f, -0.03f };
					*uParam4 = 37.0064f;
					break;
				case 1:
					*uParam1 = { -1.1623f, -0.1462f, 0.4814f };
					*uParam2 = { 1.4643f, 1.2992f, 0.3775f };
					*uParam3 = { -1f, 0.58f, -0.06f };
					*uParam4 = 37.0064f;
					break;
				case 2:
					*uParam1 = { -0.4398f, 1.287f, 0.4791f };
					*uParam2 = { 0.1169f, -1.6592f, 0.3818f };
					*uParam3 = { 0.44f, 0.14f, -0.02f };
					*uParam4 = 37.0064f;
					break;
				default:
					*uParam1 = { 0.4476f, 1.2324f, 0.4858f };
					*uParam2 = { -1.2264f, -1.255f, 0.3854f };
					*uParam3 = { 0.56f, 0.9f, -0.04f };
					*uParam4 = 37.0064f;
					break;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -0.5886f, 0.4554f, 0.6384f };
					*uParam2 = { 2.2954f, -0.1135f, 0.0391f };
					*uParam3 = { -0.22f, 0.03f, -0.05f };
					*uParam4 = 51.1841f;
					break;
				default:
					*uParam1 = { -0.1795f, 0.7041f, 0.6043f };
					*uParam2 = { 0.0136f, -2.2759f, 0.3181f };
					*uParam3 = { 0.28f, -0.03f, -0.055f };
					*uParam4 = 51.1841f;
					break;
			}
		}
	}
	else if (bParam7)
	{
		if (!bParam8)
		{
			*uParam1 = { -0.2081f, 0.9637f, 0.3846f };
			*uParam2 = { 0.8601f, -1.8387f, 0.3133f };
			*uParam4 = 36.9709f;
		}
		else
		{
			*uParam1 = { -0.098f, 0.5713f, 0.4475f };
			*uParam2 = { 1.0332f, -2.1964f, 0.2015f };
			*uParam4 = 51.1874f;
		}
	}
	else if (!bParam8)
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { -0.9423f, 0.8115f, 0.3073f };
				*uParam2 = { 1.7998f, -0.4052f, 0.3282f };
				*uParam3 = { -0.95f, -1.64f, -0.284f };
				*uParam4 = 37f;
				break;
			case 1:
				*uParam1 = { -1.1357f, -0.0544f, 0.3064f };
				*uParam2 = { 1.5686f, 1.2432f, 0.3634f };
				*uParam3 = { -0.75f, 0.75f, 0.03f };
				*uParam4 = 37f;
				break;
			case 2:
				*uParam1 = { -0.3074f, 1.2852f, 0.4028f };
				*uParam2 = { -0.2246f, -1.7076f, 0.2109f };
				*uParam3 = { 0.78f, 0f, -0.05f };
				*uParam4 = 37f;
				break;
			default:
				*uParam1 = { 0.4682f, 1.2259f, 0.4098f };
				*uParam2 = { -1.3971f, -1.1144f, 0.1998f };
				*uParam3 = { 0.76f, 0.86f, -0.05f };
				*uParam4 = 37f;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { -0.517f, 0.4743f, 0.4414f };
				*uParam2 = { 2.3308f, -0.4514f, 0.2602f };
				*uParam3 = { -0.25f, 0.03f, -0.02f };
				*uParam4 = 52f;
				break;
			default:
				*uParam1 = { -0.1382f, 0.6743f, 0.4704f };
				*uParam2 = { -0.167f, -2.3107f, 0.1718f };
				*uParam3 = { 0.16f, 0.03f, -0.03f };
				*uParam4 = 52f;
				break;
		}
	}
	if (bParam5)
	{
		uParam1->f_1 = 3.2f;
	}
}

int func_710(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5)
{
	if (uParam0->f_7 == 0)
	{
		func_832(uParam0, vParam2, vParam5, uParam1, 0.3f, 1, 0);
	}
	else
	{
		iVar8 = get_shape_test_result(uParam0->f_7, &iVar0, &uVar1, &uVar4, &uVar7);
		switch (iVar8)
		{
			case 2:
				uParam0->f_7 = 0;
				if (iVar0 == 0)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			case 0:
				uParam0->f_7 = 0;
				break;
		}
	}
	return 0;
}

void func_711(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, float fParam11)
{
	uParam0->f_7 = 0;
	if (!does_cam_exist(uParam0[0]))
	{
		(*uParam0)[0] = create_camera(26379945, false);
	}
	set_cam_affects_aiming(uParam0[0], false);
	stop_cam_pointing(uParam0[0]);
	set_cam_coord(uParam0[0], get_offset_from_entity_in_world_coords(*uParam1, vParam2));
	point_cam_at_coord(uParam0[0], get_offset_from_entity_in_world_coords(*uParam1, vParam5));
	set_cam_fov(uParam0[0], fParam11);
	shake_cam(uParam0[0], func_833(3), 0.45f);
	set_cam_near_clip(uParam0[0], 0.15f);
	_0x9b1fc259187c97c0("player_outro");
	uParam0->f_13 = { vParam8 };
	uParam0->f_17 = 1;
}

Vector3 func_712(vector3 vParam0, vector3 vParam3, vector3 vParam6)
{
	func_834(&vParam6, vParam3);
	return vParam0 + vParam6;
}

bool func_713(var uParam0, var uParam1)
{
	func_835(uParam1);
	uParam1->f_30 = { *uParam0 };
	uParam1->f_62 = uParam0->f_5;
	bVar0 = true;
	func_836(uParam1);
	if (!func_837(*uParam0, &(uParam1->f_18)))
	{
		bVar0 = false;
	}
	else if (!func_838(&(uParam1->f_18), &(uParam1->f_24)))
	{
	}
	if (uParam0->f_5 == -842959696)
	{
		if ((*uParam0 != uParam0->f_1 && does_entity_exist(uParam0->f_1)) && is_entity_a_ped(uParam0->f_1))
		{
		}
		else
		{
			return true;
		}
	}
	if (uParam0->f_5 == -10959621)
	{
		if ((*uParam0 != uParam0->f_1 && does_entity_exist(uParam0->f_1)) && is_entity_a_ped(uParam0->f_1))
		{
		}
		else
		{
			return true;
		}
	}
	if (uParam0->f_5 == 1936677264)
	{
		return true;
	}
	if (!func_837(uParam0->f_1, &(uParam1->f_6)))
	{
		bVar0 = false;
	}
	else if (!func_838(&(uParam1->f_6), &(uParam1->f_12)))
	{
	}
	if (bVar0)
	{
	}
	else
	{
		return true;
	}
	return bVar0;
}

int func_714(var uParam0)
{
	if (uParam0->f_18 == 6)
	{
		return 0;
	}
	if (uParam0->f_30.f_31)
	{
		return 2;
	}
	if (uParam0->f_30.f_5 == -842959696 && uParam0->f_18 == 1)
	{
		if (uParam0->f_6 == 1 || uParam0->f_12 == 1)
		{
		}
		else
		{
			return 2;
		}
	}
	if ((uParam0->f_30.f_5 == -10959621 || uParam0->f_30.f_5 == 1936677264) && uParam0->f_18 == 1)
	{
		if (uParam0->f_6 == 1 || uParam0->f_12 == 1)
		{
		}
		else
		{
			return 1;
		}
	}
	if (uParam0->f_30.f_5 == 357427886)
	{
		if (Global_1940085->f_28.f_1 == 1)
		{
			return 28;
		}
		if ((uParam0->f_18 == 1 && (uParam0->f_6 == 1 || uParam0->f_12 == 1)) && (uParam0->f_6.f_3 == uParam0->f_18.f_3 || uParam0->f_12.f_3 == uParam0->f_18.f_3))
		{
			return 2;
		}
	}
	iVar0 = func_839(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_840(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_841(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	if (uParam0->f_18 == 1)
	{
		return 1;
	}
	return 1;
}

void func_715(var uParam0, char* sParam1, int iParam2, int iParam3)
{
}

void func_716(var uParam0, int iParam1)
{
	if (!get_event_data(1, iParam1, &Var0, 10))
	{
		return;
	}
	if (Var0 != 46)
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 5:
			func_191(uParam0, 12);
			break;
	}
}

void func_717(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_718(var uParam0)
{
	iVar0 = func_842(&(Global_1296859->f_154[&Global_1296859]), 1);
	switch (iVar0)
	{
		case 0:
			break;
		case 1:
			uParam0->f_17 = (uParam0->f_17 + Global_1901947->f_716.f_22);
			uParam0->f_17.f_1 = (uParam0->f_17.f_1 + Global_1901947->f_716.f_22);
			uParam0->f_17.f_2 = (uParam0->f_17.f_2 + Global_1901947->f_716.f_22);
			uParam0->f_6 = (uParam0->f_6 + Global_1901947->f_716.f_22);
			uParam0->f_6.f_1 = (uParam0->f_6.f_1 + Global_1901947->f_716.f_22);
			uParam0->f_6.f_2 = (uParam0->f_6.f_2 + Global_1901947->f_716.f_22);
			break;
		case 2:
			uParam0->f_17 = (uParam0->f_17 + Global_1901947->f_716.f_23);
			uParam0->f_17.f_1 = (uParam0->f_17.f_1 + Global_1901947->f_716.f_23);
			uParam0->f_17.f_2 = (uParam0->f_17.f_2 + Global_1901947->f_716.f_23);
			uParam0->f_6 = (uParam0->f_6 + Global_1901947->f_716.f_23);
			uParam0->f_6.f_1 = (uParam0->f_6.f_1 + Global_1901947->f_716.f_23);
			uParam0->f_6.f_2 = (uParam0->f_6.f_2 + Global_1901947->f_716.f_23);
			break;
		case 3:
			uParam0->f_17 = (uParam0->f_17 + Global_1901947->f_716.f_24);
			uParam0->f_17.f_1 = (uParam0->f_17.f_1 + Global_1901947->f_716.f_24);
			uParam0->f_17.f_2 = (uParam0->f_17.f_2 + Global_1901947->f_716.f_24);
			uParam0->f_6 = (uParam0->f_6 + Global_1901947->f_716.f_24);
			uParam0->f_6.f_1 = (uParam0->f_6.f_1 + Global_1901947->f_716.f_24);
			uParam0->f_6.f_2 = (uParam0->f_6.f_2 + Global_1901947->f_716.f_24);
			break;
		case 4:
			uParam0->f_17 = (uParam0->f_17 + Global_1901947->f_716.f_25);
			uParam0->f_17.f_1 = (uParam0->f_17.f_1 + Global_1901947->f_716.f_25);
			uParam0->f_17.f_2 = (uParam0->f_17.f_2 + Global_1901947->f_716.f_25);
			uParam0->f_6 = (uParam0->f_6 + Global_1901947->f_716.f_25);
			uParam0->f_6.f_1 = (uParam0->f_6.f_1 + Global_1901947->f_716.f_25);
			uParam0->f_6.f_2 = (uParam0->f_6.f_2 + Global_1901947->f_716.f_25);
			break;
		case 5:
			uParam0->f_17 = (uParam0->f_17 + Global_1901947->f_716.f_26);
			uParam0->f_17.f_1 = (uParam0->f_17.f_1 + Global_1901947->f_716.f_26);
			uParam0->f_17.f_2 = (uParam0->f_17.f_2 + Global_1901947->f_716.f_26);
			uParam0->f_6 = (uParam0->f_6 + Global_1901947->f_716.f_26);
			uParam0->f_6.f_1 = (uParam0->f_6.f_1 + Global_1901947->f_716.f_26);
			uParam0->f_6.f_2 = (uParam0->f_6.f_2 + Global_1901947->f_716.f_26);
			break;
		case 6:
			break;
	}
}

bool func_719(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_720(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	(*Global_1951255)[iParam0]->f_4 = iParam1;
	(*Global_1951255)[iParam0] = iParam4;
	(*Global_1951255)[iParam0]->f_16 = get_id_of_this_thread();
	(*Global_1951255)[iParam0]->f_2 = iParam5;
	(*Global_1951255)[iParam0]->f_6 = { vParam6 };
	(*Global_1951255)[iParam0]->f_9 = fParam9;
	(*Global_1951255)[iParam0]->f_10 = iParam10;
	(*Global_1951255)[iParam0]->f_11 = iParam11;
	(*Global_1951255)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1951255)[iParam0]->f_5 = iParam12;
	(*Global_1951255)[iParam0]->f_1 = 2;
	(*Global_1951255)[iParam0]->f_17 = -1;
	(*Global_1951255)[iParam0]->f_18 = iParam16;
	(*Global_1951255)[iParam0]->f_19 = iParam15;
	(*Global_1951255)[iParam0]->f_20 = bParam25;
	(*Global_1951255)[iParam0]->f_22 = 0f;
	if (bParam25)
	{
		(*Global_1951255)[iParam0]->f_21 = get_game_timer();
	}
	else
	{
		(*Global_1951255)[iParam0]->f_21 = _get_system_time();
	}
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
			_0xa3f2149aa24f3d8e(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				_uiprompt_set_attribute(iVar0, 24, 1);
			}
			break;
		case 8:
			_uiprompt_set_mash_mode(iVar0, iParam17);
			break;
		case 9:
			_uiprompt_set_mash_auto_fill_mode(iVar0, iParam16, iParam17);
			break;
		case 14:
			_uiprompt_set_mash_indefinitely_mode(iVar0);
			break;
		case 16:
			_uiprompt_set_target_mode(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			_uiprompt_set_mash_with_resistance_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			_uiprompt_set_standardized_hold_mode(iVar0, iParam24);
			break;
		case 11:
			_uiprompt_set_mash_with_resistance_can_fail_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 12:
			_uiprompt_set_mash_manual_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 13:
			_uiprompt_set_mash_manual_can_fail_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 15:
			_uiprompt_set_rotate_mode(iVar0, iParam20, iParam21);
			_uiprompt_set_attribute(iVar0, 10, 1);
			break;
	}
	_uiprompt_register_end(iVar0);
	(*Global_1951255)[iParam0]->f_3 = iVar0;
	func_721(iParam0, 1);
	func_723(iParam0, 1);
	func_724(iParam0, 128);
}

void func_721(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_719(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_722(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_723(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_724(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

bool func_725(int iParam0)
{
	return func_719(iParam0, 2);
}

int func_726(int iParam0)
{
	if (iParam0 == 395262693 || iParam0 == -933924539)
	{
		return 482206342;
	}
	return Global_524288->f_40400;
}

int func_727(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -504335712:
			if (func_843(iParam1))
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

bool func_728(int iParam0, int iParam1)
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

bool func_729()
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
	if (!func_674(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_730(bool bParam0)
{
	if (func_81() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_324(bParam0));
}

struct<16> func_731(var uParam0, bool bParam1)
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
		Var0.f_15 = func_596(uParam0->f_4, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_321() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_732(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_844(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_846(func_845(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_847(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

bool func_733(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_734(int iParam0, int iParam1)
{
	if (!func_593(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_594(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_97("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_98(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_624(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_101(iVar1);
				return true;
			}
			iVar3++;
		}
		func_101(iVar1);
	}
	return false;
}

bool func_735(int iParam0)
{
	if (!func_593(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_758(iParam0);
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
	iVar1 = func_848(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_849(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_850(iParam0);
	iVar2 = func_849(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

struct<19> func_736(bool bParam0)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var19 = { func_577(-1838434463, func_393(1), 1084182731, 1) };
	if (!_0xb881ca836cc4b6d4(&Var19))
	{
		return Var0;
	}
	Var23.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_324(1), &Var19, &Var23, 17, 1))
	{
		return Var0;
	}
	Var0 = { func_731(&Var23, bParam0) };
	Var0.f_17 = Var23.f_15;
	Var0.f_18 = Var23.f_16;
	Var0.f_16 = Var23.f_14;
	return Var0;
}

int func_737(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 != -1230526146)
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_846(func_851(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_847(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 19), iVar0, uParam1);
	}
	return -1;
}

void func_738(var uParam0)
{
	func_852(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_321() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
}

bool func_739(var uParam0, var uParam1)
{
	func_853(&(Global_1904087->f_24));
	if (!func_854(uParam0, uParam1, &(Global_1904087->f_24), 0))
	{
		return false;
	}
	return true;
}

bool func_740(var uParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_855(uParam0, uParam1, &Var0, 0))
	{
		return false;
	}
	return true;
}

bool func_741(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_324(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_559(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_742(var uParam0)
{
	func_853(&(Global_1904087->f_24));
	if (!func_325(*uParam0, &(Global_1904087->f_24), 1, 0, -1))
	{
		return false;
	}
	Global_1904087->f_24.f_14 = uParam0->f_11;
	Global_1904087->f_24.f_15 = uParam0->f_22;
	Global_1904087->f_24.f_16 = { uParam0->f_12 };
	Global_1904087->f_24.f_25 = uParam0->f_23;
	Global_1904087->f_24.f_24 = uParam0->f_20;
	func_856(uParam0, &(Global_1904087->f_24.f_24));
	if (!func_562(&(Global_1904087->f_24), 0, 1))
	{
		return false;
	}
	return true;
}

bool func_743(var uParam0)
{
	Var0.f_9 = -1591664384;
	if (!func_325(*uParam0, &Var0, 0, 0, -1))
	{
		return false;
	}
	Var0.f_14 = uParam0->f_11;
	Var0.f_15 = { uParam0->f_12 };
	func_856(uParam0, &(Var0.f_23));
	return func_857(&Var0, 0, 0);
}

void func_744(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_858((*uParam0)[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_858(uParam0->f_271[iVar0]);
		iVar0++;
	}
}

void func_745(int iParam0)
{
	if (iParam0 == 0)
	{
		if (!func_97("ALL HORSES", &iVar0, &iVar1, -1591664384, 0))
		{
			return;
		}
	}
	else if (iParam0 == 2)
	{
		Var2 = { func_552(0, -1591664384, -1591664384, -1591664384, 0, 0, -2072933068) };
		if (!func_553(&Var2, &iVar0, &iVar1, 0))
		{
			return;
		}
	}
	if (iVar1 > 10)
	{
		iVar1 = 10;
	}
	Var16.f_9 = -1591664384;
	Var45.f_9 = -1591664384;
	Var69.f_9 = -1591664384;
	iVar107 = 0;
	while (iVar107 < iVar1)
	{
		if (!_0x82fa24c3d3fcd9b7(iVar0, iVar107, &Var69))
		{
		}
		else if (!func_859(&Var69, iParam0, 0))
		{
		}
		else
		{
			iVar108 = Global_1904087->f_10;
			switch (iVar108)
			{
				case 0:
				case 1:
					if (_0x375f5870a7b8bec1(&(Global_1904087->f_12)))
					{
						if (func_554(&Var69, &Var16, 1))
						{
							if (func_562(&Var16, 0, 1))
							{
								Global_1904087->f_12 = { Var16.f_16 };
							}
						}
					}
					break;
				case 2:
					if (_0x375f5870a7b8bec1(&(Global_1904087->f_12)))
					{
						if (func_860(&Var69, &Var45, 1))
						{
							if (func_857(&Var45, 0, 1))
							{
								Global_1904087->f_12 = { Var45.f_15 };
							}
						}
					}
					break;
			}
			Var83 = { Var69 };
			Var83.f_4 = Global_1904087->f_11;
			Var83.f_6 = func_861(Global_1904087, 2);
			Var83.f_7 = { Global_1904087->f_12 };
			if (iVar108 == 0 || iVar108 == 1)
			{
				Var83.f_15 = { Global_1291734->f_938[iVar107]->f_15 };
				Var83.f_23 = Global_1291734->f_938[iVar107]->f_23;
				*Global_1291734->f_938[iVar107] = { Var83 };
			}
			else if (iVar108 == 2)
			{
				Var83.f_15 = { Global_1291734->f_938.f_271[iVar107]->f_15 };
				Var83.f_23 = Global_1291734->f_938.f_271[iVar107]->f_23;
				*Global_1291734->f_938.f_271[iVar107] = { Var83 };
			}
		}
		iVar107++;
	}
	func_101(iVar0);
}

bool func_746(int* iParam0)
{
	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_862(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_747(int iParam0)
{
	if (func_771(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_748(int iParam0, bool bParam1)
{
	if (!func_593(iParam0, 0))
	{
		return func_864(func_863(iParam0), bParam1);
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (bParam1 && _0xfbe782b3165ac8ec(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

bool func_749(int iParam0)
{
	if (!func_428() && func_865())
	{
		return true;
	}
	return func_771(iParam0, 1435272033);
}

int func_750(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_866(iParam0))
	{
		return 0;
	}
	bVar1 = func_545(iParam3, 2);
	bVar2 = func_867(iParam0, -570078785, bVar1);
	bVar3 = func_867(iParam0, -915411861, bVar1);
	if (func_867(iParam0, 997808187, bVar1))
	{
		iParam1 = 997808187;
	}
	else if (bParam4 && (func_868(iParam0, &iVar0) || func_869(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_756())
		{
			iParam1 = -570078785;
		}
		else
		{
			iParam1 = -915411861;
		}
	}
	else if (bVar3)
	{
		iParam1 = -915411861;
	}
	else if (func_757(15) && func_867(iParam0, 369710026, bVar1))
	{
		iParam1 = 369710026;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return iParam1;
}

bool func_751(int iParam0, bool bParam1)
{
	return (func_755(iParam0, 997808187) && !func_761(iParam0, 997808187, bParam1));
}

bool func_752(int iParam0)
{
	iVar0 = func_748(iParam0, 1);
	if (iVar0 != 0 && func_867(iVar0, 997808187, 0))
	{
		if (_unlock_is_unlocked(-1831140953))
		{
			return true;
		}
	}
	return false;
}

bool func_753(int iParam0, int iParam1)
{
	*iParam1 = func_870(iParam0, 1);
	return *iParam1 != 0;
}

bool func_754(int iParam0, int iParam1)
{
	*iParam1 = func_871(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_755(int iParam0, int iParam1)
{
	if (!func_593(iParam0, 0))
	{
		return false;
	}
	if (func_747(iParam0))
	{
		return func_867(func_748(iParam0, 0), iParam1, 0);
	}
	return _0xdee7b3c76ed664be(iParam0, iParam1) > 0;
}

bool func_756()
{
	return Global_1915715->f_22477;
}

bool func_757(int iParam0)
{
	if (iParam0 == 34 && Global_1915715->f_22504.f_1)
	{
		return true;
	}
	if (func_872(1))
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_758(int iParam0)
{
	if (!func_593(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_759(int iParam0, int iParam1, int iParam2)
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

bool func_760(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_81() == -1)
	{
		if (func_873(iParam0))
		{
			iVar1 = _get_weapon_unlock(iParam0);
			bVar0 = _unlock_is_visible(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = _unlock_is_visible(iParam0);
	}
	return bVar0;
}

bool func_761(int iParam0, int iParam1, bool bParam2)
{
	if (!func_593(iParam0, 0))
	{
		return func_874(func_863(iParam0), iParam1, bParam2);
	}
	if (func_747(iParam0))
	{
		return func_875(func_748(iParam0, 1), iParam1);
	}
	if ((bParam2 && func_81() == 0) && !_unlock_is_visible(iParam0))
	{
		return true;
	}
	if (!func_876(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!_unlock_is_unlocked(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

int func_762(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_593(iParam0, 0) && !func_877(func_863(iParam0), 2))
	{
		return 0;
	}
	if (func_587(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_596(iParam0, -455129387) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_324(bParam3), iParam0);
}

bool func_763(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_593(iParam0, 0) && !func_877(func_863(iParam0), 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return false;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return true;
}

int func_764(int* iParam0, int iParam1)
{
	if (_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		iVar2 = _cashinventory_transaction_get_num_of_items(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!_cashinventory_transaction_get_item_info(*iParam0, iVar1, &Var3))
			{
			}
			else if (Var3.f_8 != iParam1)
			{
			}
			else
			{
				iVar0 = (iVar0 + Var3.f_9);
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_765(int* iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_878(iParam1, 1) && !func_879(iParam1, 1))
	{
		if (Global_1915715->f_20644)
		{
			func_880(_create_var_string(2, "SHOP_H_TOO_POOR_TOKEN"));
		}
		return 0;
	}
	if (iParam2 == -570078785)
	{
		iVar0 = func_881(iParam1, -570078785, 1, 0, 1, 0);
		if (iVar0 == 0)
		{
		}
		iVar1 = (iVar0 * iParam3);
		if (!func_883((iVar1 + func_882(iParam0, iParam2))))
		{
			if (Global_1915715->f_20644)
			{
				func_880(_create_var_string(2, "SHOP_H_TOO_POOR_GOLD", (iVar1 / 100)));
			}
			return 0;
		}
	}
	else if (iParam2 == -915411861)
	{
		iVar2 = func_881(iParam1, -915411861, 1, 0, 1, 0);
		if (iVar2 == 0)
		{
		}
		iVar3 = (iVar2 * iParam3);
		if (!func_884((iVar3 + func_882(iParam0, iParam2))))
		{
			if (Global_1915715->f_20644)
			{
				func_880("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam2 == 997808187)
	{
		return 1;
	}
	if (func_877(func_863(iParam1), 2))
	{
		if (!func_885(func_863(iParam1), iParam3, iParam2, &uVar4, 1))
		{
			return 0;
		}
	}
	else if (func_593(iParam1, 0))
	{
		if (!func_886(iParam1, iParam3, iParam2, &uVar4, &uVar6, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_766(int iParam0, var uParam1, int iParam2)
{
	if (uParam1->f_9 < 1)
	{
		return false;
	}
	if (!func_593(uParam1->f_8, 0) && !func_877(func_863(uParam1->f_8), 2))
	{
		return false;
	}
	if (func_545(iParam2, 128))
	{
		if (func_758(uParam1->f_8) == 0)
		{
			return false;
		}
	}
	if (func_545(iParam2, 16))
	{
		if (!func_844(iParam0, uParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_767(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		if (!func_887(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = _cashinventory_transaction_get_action(*iParam0);
	if (iVar0 != iParam1 || _cashinventory_transaction_get_num_of_items(*iParam0) >= 50)
	{
		if (!func_888(iParam0))
		{
			return false;
		}
		if (!func_887(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_768(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

bool func_769(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_888(iParam0);
	}
	return true;
}

bool func_770(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

bool func_771(int iParam0, int iParam1)
{
	if (!func_593(iParam0, 0))
	{
		return func_889(func_863(iParam0), iParam1);
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

void func_772(int iParam0, var uParam1, var uParam2)
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

struct<4> func_773(bool bParam0)
{
	iVar0 = func_324(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_577(923904168, func_393(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_577(923904168, func_393(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_577(923904168, func_393(bParam0), -740156546, 0);
}

void func_774(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

struct<5> func_775(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_393(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_587(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_577(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_773(bParam1) };
			if (bParam2 && func_890(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_891(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_891(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_892(iParam0, &Var6, 1728382685))
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
			Var0 = { func_893(bParam1) };
			switch (func_758(iParam0))
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
			if (func_894(iParam0, -1823706425))
			{
				Var0 = { func_577(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_894(iParam0, -1483207246))
			{
				Var0 = { func_577(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_577(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_894(iParam0, -1653629781))
			{
				Var0 = { func_577(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_325(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_894(iParam0, -1653629781))
			{
				Var0 = { func_577(1384535894, Var0, 1784584921, bParam1) };
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

int func_776(bool bParam0)
{
	Var0 = { func_364(0) };
	Var4.f_9 = -1591664384;
	func_325(Var0, &Var4, bParam0, 0, -1);
	return func_590(Var4.f_4);
}

bool func_777(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 < 0)
	{
		return false;
	}
	Var0 = { func_364(0) };
	Var4.f_9 = -1591664384;
	func_325(Var0, &Var4, bParam2, 0, -1);
	if (iParam0 >= func_590(Var4.f_4))
	{
		return false;
	}
	iVar18 = func_591(Var4.f_4, iParam0);
	if (iVar18 == 0)
	{
		return false;
	}
	if (!func_598(Var0, iVar18, uParam1, 0, bParam2))
	{
		return false;
	}
	return true;
}

int func_778(struct<4> Param0, struct<4> Param4, int iParam8, int iParam9)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	if (func_779(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_325(Param0, &Var0, 1, 0, -1) || !func_325(Param4, &Var14, 1, 0, -1))
	{
		return -1;
	}
	if (func_779(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_731(&Var0, 0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var44 = { func_731(&Var14, 0) };
	Var44.f_4 = { Var0.f_5 };
	Var44.f_11 = Var0.f_9;
	Var44.f_10 = (Var0.f_10 || iParam8);
	iVar60 = -1;
	if (_cashinventory_transaction_start(&iVar60, 712853601, 1168099063))
	{
		if (func_770(iVar60, 1168099063, &Var28) && func_770(iVar60, 1168099063, &Var44))
		{
			if (func_895(iVar60) && _cashinventory_transaction_checkout(iVar60))
			{
				func_896(iVar60, 1, 0, 0);
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
	return iVar60;
}

bool func_779(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_780(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_325(Param0, &Var0, 1, 0, -1))
	{
		return -1;
	}
	if (func_779(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return -1;
	}
	Var14 = { func_577(Var0.f_4, Param4, iParam8, 1) };
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
	iVar18 = func_394(Var0.f_4, Param4, iParam8, 1, 1, 0);
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
	Var20 = { func_731(&Var0, 0) };
	Var20.f_4 = { Param4 };
	Var20.f_11 = iParam8;
	Var20.f_10 = bParam10;
	iVar36 = func_897(1168099063, &Var20, bParam9);
	if (iVar36 == -1)
	{
		return -1;
	}
	return iVar36;
}

bool func_781(struct<4> Param0, int iParam4, bool bParam5)
{
	if (!func_730(0))
	{
		return func_898(&Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_325(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_324(bParam5), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

int func_782(var uParam0)
{
	return uParam0;
}

bool func_783(int iParam0)
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

bool func_784(int iParam0)
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

int func_785(int iParam0)
{
	return func_900(func_899(iParam0));
}

bool func_786(int iParam0, int iParam1, float fParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (fParam2 > 100f)
	{
		fParam2 = 100f;
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	_set_attribute_core_value(iParam0, func_901(iParam1), ceil(fParam2));
	return true;
}

void func_787(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_785(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + get_game_timer());
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_16[iParam0] = iParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_16[iParam0] = iParam1;
			break;
		default:
			break;
	}
}

void func_788(int iParam0, int iParam1, float fParam2)
{
	sVar0 = func_902(iParam1);
	if (!is_string_null_or_empty(sVar0))
	{
		_0x437c08db4febe2bd(iParam0, func_903(iParam1), fParam2, -1);
	}
}

void func_789(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (iParam3 == 2)
	{
		iParam3 = func_785(2);
	}
	uVar0 = Global_1296859->f_21;
	func_904(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_905(iParam0, uVar0, iParam3);
	}
}

int func_790(int* iParam0)
{
	if (!func_733(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_2011)
	{
		if (func_791(Global_1293346->f_2011.f_1[iVar0], iParam0))
		{
			return Global_1293346->f_2011.f_1[iVar0]->f_6;
		}
		iVar0++;
	}
	return 0;
}

bool func_791(var uParam0, int* iParam1)
{
	if (((*uParam0 == *iParam1 && uParam0->f_1 == iParam1->f_1) && uParam0->f_2 == iParam1->f_2) && uParam0->f_3 == iParam1->f_3)
	{
		return true;
	}
	return false;
}

void func_792(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, int iParam12)
{
	if (bParam4)
	{
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (!is_ped_human(iParam0))
	{
		return;
	}
	if (func_906(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((bParam5 < 0f || bParam6 < 0f) || bParam7 < 0f) || bParam8 < 0f)
	{
		return;
	}
	if (((((!bParam5 > bParam6 || !bParam5 > bParam7) || !bParam5 > bParam8) || !bParam6 > bParam7) || !bParam6 > bParam8) || !bParam7 > bParam8)
	{
		return;
	}
	iVar0 = get_mount(iParam0);
	if (is_ped_in_any_vehicle(iParam0, false))
	{
		iVar1 = get_vehicle_ped_is_in(iParam0, false);
	}
	bVar3 = func_907(iParam0, vParam1, 1);
	if ((bVar3 <= bParam5 && bVar3 > bParam6) && bVar3 > bParam7)
	{
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.75f);
		}
		if (!is_entity_dead(iVar1) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1.75f);
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (bVar3 <= bParam6 && bVar3 > bParam7)
	{
		if (bParam11)
		{
			set_ped_max_move_blend_ratio(iParam0, 1.5f);
		}
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.25f);
		}
		if (!is_entity_dead(iVar1) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1.25f);
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (bVar3 <= bParam7)
	{
		if (bParam11)
		{
			set_ped_max_move_blend_ratio(iParam0, 1f);
		}
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1f);
			if (iParam9 == 1)
			{
				if (_0x33fa048675821da7(iVar0, 3))
				{
					_0x06d26a96ca1bca75(iVar0, 3, 0f, 0);
				}
			}
		}
		if (!is_entity_dead(iVar1) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1f);
					if (iParam9 == 1)
					{
						if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
						{
							if (_0x33fa048675821da7(iVar0, 3))
							{
								_0x06d26a96ca1bca75(iVar2, 3, 0f, 0);
							}
						}
					}
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (bVar3 <= bParam8)
		{
			if (iParam0 == Global_34)
			{
				set_player_may_not_enter_any_vehicle(player_id());
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			if (!is_entity_dead(iVar0) && !func_625(iParam0, 501393341))
			{
				task_dismount_animal(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!is_entity_dead(iVar1) && !func_625(iParam0, -828834893))
			{
				task_leave_any_vehicle(iParam0, 0, iParam12);
			}
		}
	}
}

int func_793(int iParam0, vector3 vParam1, float fParam4, bool bParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	iVar1 = get_mount(iParam0);
	if (is_ped_in_any_vehicle(iParam0, false))
	{
		iVar2 = get_vehicle_ped_is_in(iParam0, false);
	}
	bVar4 = func_907(iParam0, vParam1, 1);
	if (!func_456(fParam4))
	{
		if (bVar4 <= bParam5)
		{
			if (does_entity_exist(iVar1) || does_entity_exist(iVar2))
			{
				func_457(fParam4, 0);
			}
		}
	}
	else if (bParam7 && bVar4 > bParam5)
	{
		func_452(fParam4);
	}
	if (func_456(fParam4))
	{
		if (bParam10)
		{
			set_ped_max_move_blend_ratio(iParam0, 1f);
		}
		if (!is_entity_dead(iVar1))
		{
			set_ped_max_move_blend_ratio(iVar1, 1f);
		}
		if (!is_entity_dead(iVar2) && _is_draft_vehicle(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar3 = _get_ped_in_draft_seat(iVar2, iVar0);
				if (!is_entity_dead(iVar3))
				{
					set_ped_max_move_blend_ratio(iVar3, 1f);
					_0x0c3f0f7f92ca847c(iVar2, _0x46bf2a810679d6e6(iVar3, 1f));
				}
				iVar0++;
			}
		}
		if (func_458(fParam4) >= fParam6)
		{
			if (iParam0 == Global_34)
			{
				set_player_may_not_enter_any_vehicle(player_id());
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			if (!is_entity_dead(iVar1) && !func_625(iParam0, 501393341))
			{
				if (is_ped_on_mount(iParam0))
				{
					task_dismount_animal(iParam0, 0, 0, 0, 0, 0);
					return 1;
				}
			}
			if (!is_entity_dead(iVar2) && !func_625(iParam0, -828834893))
			{
				if (is_ped_in_any_vehicle(iParam0, false))
				{
					task_leave_any_vehicle(iParam0, 0, 0);
					return 1;
				}
			}
		}
		if (iParam0 == Global_34 && iParam8 == 0)
		{
			if (get_is_task_active(iParam0, 8))
			{
				clear_ped_tasks(iParam0, 1, 0);
			}
			set_ped_reset_flag(iParam0, 175, true);
		}
	}
	return 0;
}

bool func_794(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

bool func_795(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1132288->f_2050 == 0 || (_get_system_time() - Global_1132288->f_2050) >= 1000)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (Global_1132288->f_2050 == 0)
	{
		Global_1132288->f_2050 = _get_system_time();
	}
	else if ((_get_system_time() - Global_1132288->f_2050) >= 1000)
	{
		Global_1132288->f_2050 = _get_system_time();
	}
	else
	{
		return false;
	}
	return true;
}

bool func_796(int iParam0, int iParam1)
{
	if (!func_338(iParam0))
	{
		return false;
	}
	vVar0 = { func_353(iParam0) };
	iVar3 = _create_volume_sphere(vVar0, 0f, 0f, 0f, 100f, 100f, 100f);
	iVar4 = create_itemset(false);
	iVar5 = _0x84ccf9a12942c83d(iVar3, iVar4, 1, 1, 0, "iCampFollowerCamp");
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 <= (iVar5 - 1))
	{
		iVar6 = _get_entity_from_item(get_indexed_item_in_itemset(iVar7, iVar4));
		if (does_entity_exist(iVar6) && decor_get_int(iVar6, "iCampFollowerCamp") == iParam0)
		{
			*iParam1 = iVar6;
		}
		else
		{
			iVar7++;
		}
	}
	_delete_volume(iVar3);
	destroy_itemset(iVar4);
	if (!does_entity_exist(*iParam1))
	{
		return false;
	}
	return true;
}

void func_797(int iParam0)
{
	Var0.f_8 = iParam0;
	func_809(1, Var0, func_246(0, 8));
}

char* func_798(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "inworld_music_harmonica_downbeat";
		default:
			break;
	}
	return "";
}

char* func_799(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "1";
		default:
			break;
	}
	return "";
}

bool func_800(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (is_entity_dead(iParam1))
	{
		return false;
	}
	if (is_string_null_or_empty(sParam2))
	{
		return false;
	}
	func_908(uParam0, iParam1, sParam2, bParam3);
	return true;
}

void func_801(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	iVar0 = 0;
	while (iVar0 < cParam3->f_97)
	{
		if (does_entity_exist(cParam3[iVar0]))
		{
			if (!is_entity_dead(cParam3[iVar0]))
			{
				if (!is_ped_in_current_conversation(&cParam0, cParam3[iVar0], 0))
				{
					add_ped_to_conversation(&cParam0, cParam3[iVar0], &((*cParam3)[iVar0]->f_1));
				}
			}
		}
		iVar0++;
	}
}

int func_802(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		return 1;
	}
	if (func_909())
	{
		return 0;
	}
	_request_imap(iParam0);
	return 0;
}

int func_803(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		return 1;
	}
	if (func_909())
	{
		return 0;
	}
	_remove_imap(iParam0);
	return 0;
}

bool func_804(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return ((*Global_1291106)[iParam1]->f_2 && iParam0) != 0;
}

void func_805(int iParam0)
{
	func_439(3, iParam0);
}

void func_806(int iParam0)
{
	func_439(2, iParam0);
}

void func_807(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 || iParam1);
}

void func_808(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 - (*fParam0 && iParam1));
}

void func_809(int iParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	if (!_0x179a6f0ee2e79026(&uParam15))
	{
		return;
	}
	if (!func_795(0))
	{
		return;
	}
	Param1 = 10;
	Param1.f_1 = player_id();
	Param1.f_2 = get_network_time_accurate();
	Param1.f_4 = iParam0;
	trigger_script_event(1, &Param1, 14, 14, &uParam15);
}

int func_810(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_815(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_815(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
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

bool func_811(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	iVar0 = func_664(2, iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	return _0xfbe782b3165ac8ec(iVar0);
}

void func_812()
{
}

var func_813()
{
	Global_1293346->f_458.f_1552++;
	if (Global_1293346->f_458.f_1552 >= 2147483646)
	{
		Global_1293346->f_458.f_1552 = 0;
	}
	return Global_1293346->f_458.f_1552;
}

void func_814(struct<30> Param0, int iParam30)
{
	switch (iParam30)
	{
		case 0:
			*Global_1293346->f_458.f_44[func_910()] = { Param0 };
			func_911((func_910() + 1 % 40));
			Global_1293346->f_458.f_1546++;
			break;
		case 1:
			*Global_1293346->f_458.f_1245[func_912()] = { Param0 };
			func_913((func_912() + 1 % 10));
			Global_1293346->f_458.f_1547++;
			break;
	}
}

bool func_815(struct<2> Param0, var uParam2)
{
	if (!func_674(Param0))
	{
		return false;
	}
	func_914(uParam2);
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

int func_816(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_811(iParam0))
	{
		return 0;
	}
	iVar0 = func_915(iParam0, 5);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (_0xfbe782b3165ac8ec(iVar0))
	{
		return 5;
	}
	iVar0 = func_915(iParam0, 4);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (_0xfbe782b3165ac8ec(iVar0))
	{
		return 4;
	}
	iVar0 = func_915(iParam0, 3);
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

bool func_817(int iParam0)
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

int func_818(int iParam0)
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

int func_819(struct<2> Param0)
{
	iVar0 = func_810(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_916(iVar0);
}

int func_820(struct<2> Param0, int iParam2)
{
	if (Global_1071686->f_19550 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_815(Param0, &vVar0))
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
		func_815(*Global_1071686->f_19550.f_1[iVar9], &vVar3);
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
			func_917(iVar9);
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

void func_821()
{
	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (func_815(*Global_1071686->f_19550.f_1[iVar0], &vVar1))
		{
		}
		iVar0++;
	}
}

int func_822(struct<2> Param0)
{
	if (!func_674(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_680(*Global_1900736->f_1[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_823(int iParam0)
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
		func_252(Global_1900736->f_1[0]);
		return 1;
	}
	func_252(Global_1900736->f_1[iParam0]);
	Global_1900736->f_66 = (Global_1900736->f_66 - 1);
	func_918(iParam0, Global_1900736->f_66);
	return 1;
}

bool func_824()
{
	return !Global_1572887->f_9;
}

void func_825(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_826(int iParam0)
{
	iVar0 = func_310(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_919(iVar1))
	{
		if (Global_1071686->f_19648.f_24 && !func_920(iParam0))
		{
			return false;
		}
		return (is_bit_set(&(Global_1071686->f_19648[iVar1]), iVar2) || is_bit_set(&(Global_39.f_110[iVar1]), iVar2));
	}
	return is_bit_set(&(Global_39.f_110[iVar1]), iVar2);
}

bool func_827(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_828(int iParam0)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!&Global_1296859->f_22[iVar0])
	{
		func_921(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_922(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

bool func_829(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

int func_830()
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

int func_831()
{
	return Global_1572887->f_106.f_75;
}

void func_832(var uParam0, vector3 vParam1, vector3 vParam4, var uParam7, float fParam8, bool bParam9, bool bParam10)
{
	iVar0 = 83;
	if (bParam9)
	{
		uParam0->f_7 = start_shape_test_capsule(vParam1, vParam4, fParam8, iVar0, *uParam7, 4);
	}
	else if (bParam10)
	{
		uParam0->f_7 = start_shape_test_los_probe(vParam1, vParam4, iVar0, *uParam7, 7);
	}
	else
	{
		uParam0->f_7 = start_shape_test_swept_sphere(vParam1, vParam4, fParam8, iVar0, *uParam7, 4);
	}
}

char* func_833(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "NONE";
		case 0:
			return "SMALL_EXPLOSION_SHAKE";
		case 1:
			return "MEDIUM_EXPLOSION_SHAKE";
		case 2:
			return "LARGE_EXPLOSION_SHAKE";
		case 3:
			return "HAND_SHAKE";
		case 4:
			return "JOLT_SHAKE";
		case 5:
			return "VIBRATE_SHAKE";
		case 6:
			return "WOBBLY_SHAKE";
		case 7:
			return "DRUNK_SHAKE";
		default:
			break;
	}
	return "";
}

void func_834(var uParam0, vector3 vParam1)
{
	fVar0 = cos(vParam1.x);
	fVar1 = sin(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = cos(vParam1.y);
	fVar1 = sin(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.f_1 = uParam0->f_1;
	vVar2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = cos(vParam1.z);
	fVar1 = sin(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.f_2 = uParam0->f_2;
	*uParam0 = { vVar2 };
}

void func_835(var uParam0)
{
	func_923(uParam0);
	func_923(&(uParam0->f_6));
	func_923(&(uParam0->f_12));
	func_923(&(uParam0->f_18));
	func_923(&(uParam0->f_24));
	uParam0->f_30 = { Var0 };
	uParam0->f_63 = 0;
}

int func_836(var uParam0)
{
	*uParam0 = 1;
	uParam0->f_3 = player_id();
	uParam0->f_2 = get_player_ped(uParam0->f_3);
	uParam0->f_1 = func_782(uParam0->f_2);
	uParam0->f_4 = get_player_team(uParam0->f_3);
	uParam0->f_5 = get_ped_relationship_group_hash(uParam0->f_2);
	return 1;
}

bool func_837(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		*uParam1 = 6;
		uParam1->f_1 = iParam0;
		uParam1->f_2 = 0;
		uParam1->f_3 = 255;
		uParam1->f_4 = -1;
		uParam1->f_5 = 623901053;
		return false;
	}
	if (is_entity_a_ped(iParam0))
	{
		iVar0 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_a_player(iVar0))
		{
			*uParam1 = 1;
		}
		else if (_is_this_model_a_horse(get_entity_model(iParam0)))
		{
			*uParam1 = 3;
		}
		else if (is_ped_human(iVar0))
		{
			*uParam1 = 2;
		}
		else
		{
			*uParam1 = 5;
		}
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		*uParam1 = 4;
	}
	else if (is_entity_an_object(iParam0))
	{
		*uParam1 = 6;
	}
	else
	{
		return false;
	}
	switch (*uParam1)
	{
		case 1:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = network_get_player_index_from_ped(uParam1->f_2);
			uParam1->f_4 = get_player_team(uParam1->f_3);
			uParam1->f_5 = get_ped_relationship_group_hash(uParam1->f_2);
			break;
		case 5:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = get_ped_relationship_group_hash(uParam1->f_2);
			break;
		case 2:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = get_ped_relationship_group_hash(uParam1->f_2);
			break;
		case 3:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = get_ped_relationship_group_hash(uParam1->f_2);
			break;
		case 4:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = 0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = 623901053;
			break;
		case 6:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = 0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = 623901053;
			break;
	}
	return true;
}

bool func_838(var uParam0, var uParam1)
{
	switch (*uParam0)
	{
		case 3:
			return func_837(_get_rider_of_mount(uParam0->f_2, false), uParam1);
		case 4:
			return func_837(get_ped_in_vehicle_seat(uParam0->f_1, -1), uParam1);
		default:
			break;
	}
	return false;
}

int func_839(var uParam0)
{
	if (uParam0->f_18 != 1)
	{
		return 0;
	}
	if (uParam0->f_6 == 2)
	{
		return 0;
	}
	bVar0 = false;
	if (uParam0->f_6 == 1)
	{
		bVar0 = true;
		iVar1 = uParam0->f_6.f_4;
		iVar2 = uParam0->f_18.f_4;
		iVar3 = get_relationship_between_peds(uParam0->f_6.f_2, uParam0->f_18.f_2);
	}
	else if (uParam0->f_12 == 1 && (uParam0->f_6 == 3 || uParam0->f_6 == 4))
	{
		bVar0 = true;
		iVar1 = uParam0->f_12.f_4;
		iVar2 = uParam0->f_18.f_4;
		iVar3 = get_relationship_between_peds(uParam0->f_12.f_2, uParam0->f_18.f_2);
	}
	if (!bVar0)
	{
		return 0;
	}
	if (uParam0->f_6.f_3 == uParam0->f_18.f_3 || uParam0->f_12.f_3 == uParam0->f_18.f_3)
	{
		return 2;
	}
	else if (iVar1 == 8 && iVar2 == 8)
	{
		return 8;
	}
	else if (iVar1 == 8 && iVar2 != 8)
	{
		return 5;
	}
	else if (iVar1 != 8 && iVar2 == 8)
	{
		return 6;
	}
	else if ((iVar1 == -1 && iVar2 == -1) && _0xfe53b1f8d43f19bf(uParam0->f_6.f_3, uParam0->f_18.f_3) != 1)
	{
		return 7;
	}
	else if (iVar1 == iVar2 || _0xfe53b1f8d43f19bf(uParam0->f_6.f_3, uParam0->f_18.f_3) == 1)
	{
		return 9;
	}
	else if (iVar1 != iVar2)
	{
		return 7;
	}
	else
	{
		switch (iVar3)
		{
			case 1:
				return 9;
			case 2:
				return 9;
			case 3:
				return 9;
			case 4:
				return 7;
			case 6:
				return 7;
			case 5:
				return 4;
			case 7:
				return 4;
			case 0:
				return 4;
			default:
				break;
		}
		return 4;
	}
	return 0;
}

int func_840(var uParam0)
{
	if (uParam0->f_6 == 2)
	{
		return 0;
	}
	if (uParam0->f_18 == 1)
	{
		return 0;
	}
	if (uParam0->f_18 == 4)
	{
		return 18;
	}
	if (uParam0->f_18 == 6)
	{
		return 17;
	}
	bVar0 = false;
	if (uParam0->f_6 == 1)
	{
		bVar0 = true;
		iVar1 = get_relationship_between_groups(uParam0->f_6.f_5, uParam0->f_18.f_5);
	}
	else if (uParam0->f_12 == 1 && (uParam0->f_6 == 3 || uParam0->f_6 == 4))
	{
		bVar0 = true;
		iVar1 = get_relationship_between_groups(uParam0->f_12.f_5, uParam0->f_18.f_5);
	}
	if (!bVar0)
	{
		return 0;
	}
	if (does_entity_exist(uParam0->f_18.f_1))
	{
		if (_is_this_model_a_horse(get_entity_model(uParam0->f_18.f_1)))
		{
			return 19;
		}
	}
	if (_0x40851bcc33acd9ab(uParam0->f_18.f_2))
	{
		return 11;
	}
	if (((!is_ped_human(uParam0->f_18.f_2) && !_is_this_model_a_horse(get_entity_model(uParam0->f_18.f_1))) && _0xf8b48a361dc388ae(uParam0->f_18.f_2) == 2) && _0x3b005ff0538ed2a9(uParam0->f_18.f_2) == 1)
	{
		return 16;
	}
	switch (uParam0->f_18.f_5)
	{
		case -1976316465:
			return 10;
		case 841021282:
			return 10;
		case -350651841:
			return 10;
		case -1683752762:
			if (_0x3b005ff0538ed2a9(uParam0->f_18.f_2) == 1)
			{
				return 14;
			}
			return 10;
		case -1329647920:
			return 10;
		case 707888648:
			return 11;
		case 106566339:
			return 11;
		case -50399569:
			return 11;
		case -767591988:
			return 14;
		case 1986610512:
			return 14;
		case -989642646:
			return 15;
		case 889541022:
			return 15;
		case -319516747:
			return 15;
		case 1269650476:
			return 12;
		case 1222652248:
			return 12;
		case -350226955:
			return 12;
		case 1030835986:
			return 12;
		case -1448293989:
			return 12;
		case 266218800:
			return 12;
		case 555364152:
			return 12;
		case -1663301869:
			return 12;
		case -1996978098:
			return 12;
		case 1078461828:
			return 12;
		case 1733741057:
			return 20;
		case -2003007004:
			return 20;
		case 1965820175:
			return 20;
		case -1164995627:
			return 20;
		case -1406404850:
			return 20;
		case 892340488:
			return 20;
		case 570352286:
			return 20;
		case 1809249877:
			return 20;
		case 1185197041:
			return 20;
		case -1901478918:
			return 20;
		case 2097877918:
			return 20;
		case -1158905413:
			return 20;
		case 358397622:
			return 20;
		case 65999835:
			return 20;
		case 814443795:
			return 20;
		case 519621102:
			return 20;
		case -1628223003:
			return 20;
		case 1278256225:
			return 20;
		case 2038628101:
			return 20;
		case 1742494648:
			return 20;
		case -1010166918:
			return 20;
		case 660170868:
			return 20;
		case -1278312096:
			return 20;
		case -509158128:
			return 20;
		case -226656579:
			return 20;
		case 2115868159:
			return 20;
		case 1495813101:
			return 20;
		case 1197385818:
			return 20;
		case 1015780020:
			return 20;
		case -1286733825:
			return 20;
		case -1670393277:
			return 20;
		case -415733461:
			return 20;
		case -1207924036:
			return 20;
		case 497702414:
			return 20;
		case 719188085:
			return 20;
		case 43753457:
			return 20;
		case 771290791:
			return 20;
		case 20356387:
			return 20;
		case 309149584:
			return 20;
		case 1613781781:
			return 20;
		case 1693607065:
			return 20;
		case 1132176120:
			return 20;
		case 869270437:
			return 20;
		default:
			break;
	}
	switch (iVar1)
	{
		case 1:
			return 10;
		case 2:
			return 10;
		case 3:
			return 10;
		case 4:
			return 12;
		case 6:
			return 12;
		case 5:
			return 13;
		case 7:
			return 13;
		case 0:
			return 13;
		default:
			break;
	}
	return 13;
	return 0;
}

int func_841(var uParam0)
{
	if (uParam0->f_6 == 1)
	{
		return 0;
	}
	if (uParam0->f_18 != 1)
	{
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	if (uParam0->f_12 == 2 && (uParam0->f_6 == 3 || uParam0->f_6 == 4))
	{
		bVar0 = true;
		iVar3 = uParam0->f_12.f_5;
		iVar2 = get_relationship_between_groups(iVar3, uParam0->f_18.f_5);
		if (does_entity_exist(uParam0->f_12.f_2) && _0x40851bcc33acd9ab(uParam0->f_12.f_2))
		{
			bVar1 = true;
		}
	}
	else if (uParam0->f_6 != 1 && uParam0->f_6 != 0)
	{
		bVar0 = true;
		iVar3 = uParam0->f_6.f_5;
		iVar2 = get_relationship_between_groups(iVar3, uParam0->f_18.f_5);
		if (does_entity_exist(uParam0->f_6.f_2) && _0x40851bcc33acd9ab(uParam0->f_6.f_2))
		{
			bVar1 = true;
		}
	}
	if (!bVar0)
	{
		return 0;
	}
	if (bVar1)
	{
		return 22;
	}
	switch (iVar3)
	{
		case -1976316465:
			return 21;
		case 841021282:
			return 21;
		case -350651841:
			return 21;
		case -1683752762:
			return 21;
		case -1329647920:
			return 21;
		case 707888648:
			return 22;
		case 106566339:
			return 22;
		case -50399569:
			return 22;
		case -767591988:
			return 25;
		case 1986610512:
			return 25;
		case -989642646:
			return 26;
		case 889541022:
			return 26;
		case -319516747:
			return 26;
		case 1269650476:
			return 23;
		case 1222652248:
			return 23;
		case -350226955:
			return 23;
		case 1030835986:
			return 23;
		case -1448293989:
			return 23;
		case 266218800:
			return 23;
		case 555364152:
			return 23;
		case -1663301869:
			return 23;
		case -1996978098:
			return 23;
		case 1078461828:
			return 23;
		case 1733741057:
			return 27;
		case -2003007004:
			return 27;
		case 1965820175:
			return 27;
		case -1164995627:
			return 27;
		case -1406404850:
			return 27;
		case 892340488:
			return 27;
		case 570352286:
			return 27;
		case 1809249877:
			return 27;
		case 1185197041:
			return 27;
		case -1901478918:
			return 27;
		case 2097877918:
			return 27;
		case -1158905413:
			return 27;
		case 358397622:
			return 27;
		case 65999835:
			return 27;
		case 814443795:
			return 27;
		case 519621102:
			return 27;
		case -1628223003:
			return 27;
		case 1278256225:
			return 27;
		case 2038628101:
			return 27;
		case 1742494648:
			return 27;
		case -1010166918:
			return 27;
		case 660170868:
			return 27;
		case -1278312096:
			return 27;
		case -509158128:
			return 27;
		case -226656579:
			return 27;
		case 2115868159:
			return 27;
		case 1495813101:
			return 27;
		case 1197385818:
			return 27;
		case 1015780020:
			return 27;
		case -1286733825:
			return 27;
		case -1670393277:
			return 27;
		case -415733461:
			return 27;
		case -1207924036:
			return 27;
		case 497702414:
			return 27;
		case 719188085:
			return 27;
		case 43753457:
			return 27;
		case 771290791:
			return 27;
		case 20356387:
			return 27;
		case 309149584:
			return 27;
		case 1613781781:
			return 27;
		case 1693607065:
			return 27;
		case 1132176120:
			return 27;
		case 869270437:
			return 27;
		default:
			break;
	}
	switch (iVar2)
	{
		case 1:
			return 21;
		case 2:
			return 21;
		case 3:
			return 21;
		case 4:
			return 23;
		case 6:
			return 23;
		case 5:
			return 24;
		case 7:
			return 24;
		case 0:
			return 24;
		default:
			break;
	}
	return 24;
	return 0;
}

int func_842(int iParam0, bool bParam1)
{
	iVar0 = floor(func_924(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = floor((*Global_1100469)[iVar3]->f_18);
		}
		if (iVar2 > iVar0)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = iVar0;
		}
	}
	else
	{
		iVar1 = iVar0;
	}
	if (iVar1 < Global_1901947->f_716.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901947->f_716.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901947->f_716.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901947->f_716.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901947->f_716.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901947->f_716.f_36)
	{
		return 5;
	}
	return 6;
}

bool func_843(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

bool func_844(int iParam0, var uParam1)
{
	iVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_925(uParam1->f_8, iParam0, iVar0, 2048) || func_925(uParam1->f_8, iParam0, iVar0, 32768)) || func_925(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_925(uParam1->f_8, iParam0, iVar0, 4) || func_925(uParam1->f_8, iParam0, iVar0, 256)) || func_925(uParam1->f_8, iParam0, iVar0, 65536)) || func_925(uParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_925(uParam1->f_8, iParam0, iVar0, 1) || func_925(uParam1->f_8, iParam0, iVar0, 8)) || func_925(uParam1->f_8, iParam0, iVar0, 65536)) || func_925(uParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_925(uParam1->f_8, iParam0, iVar0, 1) || func_925(uParam1->f_8, iParam0, iVar0, 16)) || func_925(uParam1->f_8, iParam0, iVar0, 2)) || func_925(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_925(uParam1->f_8, iParam0, iVar0, 8) || func_925(uParam1->f_8, iParam0, iVar0, 4096)) || func_925(uParam1->f_8, iParam0, iVar0, 256)) || func_925(uParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_845(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 28, uParam2, 0);
}

int func_846(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_896(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_896(iParam1, 2, 0, 0);
	return -1;
}

int func_847(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_896(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_848(int iParam0)
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

int func_849(var uParam0, int iParam1)
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

int func_850(int iParam0)
{
	iVar0 = func_758(iParam0);
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

bool func_851(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 19, uParam2, 0);
}

void func_852(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_853(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_5.f_1 = 0;
	uParam0->f_5.f_2 = 0;
	uParam0->f_5.f_3 = 0;
	uParam0->f_9 = -1591664384;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	StringCopy(&(uParam0->f_16), "", 64);
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
}

bool func_854(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_554(uParam0, uParam2, bParam3))
	{
		return false;
	}
	if (!func_926(uParam1, uParam2))
	{
		return false;
	}
	return true;
}

bool func_855(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_860(uParam0, uParam2, bParam3))
	{
		return false;
	}
	if (!func_927(uParam1, uParam2))
	{
		return false;
	}
	return true;
}

void func_856(var uParam0, var uParam1)
{
	if (func_861(uParam0, 4))
	{
		func_563(uParam1, 4);
	}
	if (func_861(uParam0, 2))
	{
		func_563(uParam1, 2);
	}
}

bool func_857(var uParam0, bool bParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (func_730(bParam2))
	{
		if (!_0xd80a8854db5cfba5(func_324(bParam2), uParam0, uParam0, 24))
		{
			return false;
		}
	}
	else
	{
		Var0.f_9 = 1;
		Var0.f_11 = -1591664384;
		Var0 = { func_731(uParam0, 0) };
		Var0.f_16 = { uParam0->f_15 };
		Var0.f_24 = uParam0->f_23;
		if (func_928(-1230526146, &Var0, bParam1) == -1)
		{
			return false;
		}
	}
	return true;
}

void func_858(var uParam0)
{
	*uParam0 = { func_321() };
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
}

bool func_859(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	func_738(Global_1904087);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_854(uParam0, Global_1904087, &(Global_1904087->f_53), bParam2))
			{
				return false;
			}
			break;
		case 2:
			if (!func_855(uParam0, Global_1904087, &(Global_1904087->f_82), bParam2))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_860(var uParam0, var uParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	iVar0 = func_324(bParam2);
	if (!_0x025a1b1fb03fbf61(iVar0, uParam0, uParam1, 24, 1))
	{
		return false;
	}
	return true;
}

bool func_861(var uParam0, int iParam1)
{
	return func_555(&(uParam0->f_20), iParam1);
}

int func_862(int* iParam0)
{
	return func_929(iParam0->f_1);
}

int func_863(int iParam0)
{
	return iParam0;
}

int func_864(int iParam0, bool bParam1)
{
	if (!func_877(iParam0, 2))
	{
		return 0;
	}
	iVar0 = 0;
	if ((iVar0 != 0 && bParam1) && _0xfbe782b3165ac8ec(iVar0))
	{
		return 0;
	}
	return iVar0;
}

bool func_865()
{
	return func_930(func_679(0));
}

bool func_866(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

bool func_867(int iParam0, int iParam1, bool bParam2)
{
	if (!func_866(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_875(iParam0, iParam1);
	}
	return true;
}

bool func_868(int iParam0, int iParam1)
{
	*iParam1 = func_931(iParam0, 1);
	return *iParam1 != 0;
}

bool func_869(int iParam0, int iParam1)
{
	*iParam1 = func_932(iParam0, 1, 0);
	return *iParam1 != 0;
}

int func_870(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_933(iVar0, 1, 0);
		if (!func_934(iParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_935(&(Var2[iVar34])))
				{
					if (!bParam1 || func_371(&(Var2[iVar34]), 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_871(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_933(iVar0, 0, 1);
		if (!func_934(iParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_936(&(Var9[iVar41])))
				{
					if (!bParam1 || func_371(&(Var9[iVar41]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41] == 2084597891 || &Var9[iVar41] == 773203532)
				{
					if ((bParam2 && &Var9[iVar41] == 2084597891) || (!bParam2 && &Var9[iVar41] == 773203532))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41]->f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41]->f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41]->f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41]->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

bool func_872(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

bool func_873(int iParam0)
{
	return func_587(iParam0) == -427144552;
}

int func_874(int iParam0, int iParam1, bool bParam2)
{
	if (!func_877(iParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_81() == 0) && !_unlock_is_visible(iParam0))
	{
		return 1;
	}
	if (!func_937(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!_unlock_is_unlocked(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

bool func_875(int iParam0, int iParam1)
{
	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!_item_database_fillout_buy_award_acquire_costs(iParam0, &Var0, &uVar471, 10) || iLocal_475 == 0)
	{
		return false;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iLocal_478 < iLocal_475)
	{
		if (&Var0[iLocal_478] == iParam1)
		{
			iVar473 = Var0[iLocal_478]->f_35;
			iVar475 = 0;
			while (iLocal_479 < iLocal_477)
			{
				uVar472 = &Var0[iLocal_478]->f_36[iLocal_479];
				if (iLocal_476 == 0)
				{
				}
				else if (!_unlock_is_unlocked(iLocal_476))
				{
					return true;
				}
				iVar475 = iLocal_479 + 1;
			}
		}
		iVar474 = iLocal_478 + 1;
	}
	return false;
}

bool func_876(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_593(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

bool func_877(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

bool func_878(int iParam0, bool bParam1)
{
	if (!func_771(iParam0, 947377998))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_771(iParam0, -1090933859))
		{
			return func_748(iParam0, 1) != 0;
		}
		if ((func_761(iParam0, -915411861, 0) || func_761(iParam0, 600942249, 0)) || func_761(iParam0, -570078785, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_879(int iParam0, bool bParam1)
{
	iVar0 = func_938(iParam0, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_875(iVar0, -2141192156))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_939(iVar0, -2141192156, &uVar1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_880(char* sParam0)
{
	Global_1915715->f_22470 = func_171(sParam0, 10000, 0, 0, 0, 1);
}

int func_881(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && iParam1 == -915411861) && func_755(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_747(iParam0))
	{
		return func_940(func_748(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_934(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == 2084597891 || &Var0[iVar32] == 773203532)
		{
			if (iParam5 != 0 && &Var0[iVar32] != iParam5)
			{
			}
			else
			{
				return Var0[iVar32]->f_1;
				Jump @204; //curOff = 188
				if (&Var0[iVar32] == 0)
				{
				}
				else
				{
					iVar32++;
				}
				if (!bParam3)
				{
				}
				return 0;
			}
		}
	}
}

int func_882(int* iParam0, int iParam1)
{
	if (_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		iVar2 = _cashinventory_transaction_get_num_of_items(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!_cashinventory_transaction_get_item_info(*iParam0, iVar1, &Var3))
			{
			}
			else if (iParam1 != Var3.f_13)
			{
			}
			else
			{
				iVar0 = (iVar0 + (func_881(Var3.f_8, iParam1, 1, 0, 1, 0) * Var3.f_9));
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_883(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return _network_is_money_balance_not_less_than(0, iParam0);
}

bool func_884(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_81() == 0)
	{
		return func_941(iParam0);
	}
	return iParam0 <= func_942();
}

bool func_885(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	if (!func_943(iParam0, iParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam4 && func_730(0)) && !func_944());
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34] == 0 || &Var0[iVar34] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34]->f_1 * iParam1);
			if (&Var0[iVar34] == 2084597891 && func_884(iVar32))
			{
				Jump @217; //curOff = 139
			}
			else if (&Var0[iVar34] == 773203532 && func_883(iVar32))
			{
			}
			else
			{
				iVar33 = func_371(&(Var0[iVar34]), 0, !bVar35, 0);
				if (iVar33 >= iVar32)
				{
				}
				else
				{
					*uParam3 = { *Var0[iVar34] };
					return false;
				}
			}
			iVar34++;
		}
	}
	return true;
}

bool func_886(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (func_747(iParam0))
	{
		return func_939(func_748(iParam0, 1), iParam2, uParam3, 1, 0);
	}
	if (!func_934(iParam0, iParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam6 && func_730(0)) && !func_944());
	iVar37 = -1;
	if (Global_1915715->f_20638)
	{
		iVar37 = Global_1915715->f_20241;
	}
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34] == 0 || &Var0[iVar34] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34]->f_1 * iParam1);
			if (&Var0[iVar34] == 2084597891 && (bParam7 || func_884(iVar32)))
			{
				Jump @482; //curOff = 198
			}
			else if (&Var0[iVar34] == 773203532 && (bParam7 || func_883(iVar32)))
			{
			}
			else
			{
				iVar36 = func_945(iVar37, &(Var0[iVar34]));
				if (iVar36 != 0)
				{
					bParam5 = false;
					iVar33 = func_946(&(Var0[iVar34]), iVar36);
				}
				else
				{
					iVar33 = func_371(&(Var0[iVar34]), 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_947(&(Var0[iVar34])) || func_948(&(Var0[iVar34])))
					{
						iVar38 = 0;
						if (bParam5)
						{
							iVar39 = func_949(7, &(Var0[iVar34]), &iVar38);
						}
						iVar40 = func_950(&(Var0[iVar34]), iVar36);
						if (((iVar33 + iVar39) + iVar40) >= iVar32)
						{
							if ((iVar33 + iVar40) < iVar32 && does_entity_exist(iVar38))
							{
								*uParam4 = iVar38;
							}
						}
						else
						{
							Jump @466; //curOff = 422
							if (bParam5 && ((iVar33 + func_951(7, &(Var0[iVar34]))) + func_952(&(Var0[iVar34]))) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { *Var0[iVar34] };
								return false;
							}
						}
						iVar34++;
						return true;
					}
				}
			}
		}
	}
}

bool func_887(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_start(iParam0, 712853601, iParam1))
	{
		return false;
	}
	return true;
}

bool func_888(int* iParam0)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		func_896(*iParam0, 0, 0, 0);
		return true;
	}
	if (_cashinventory_transaction_get_num_of_items(*iParam0) == 0)
	{
		_cashinventory_transaction_delete(*iParam0);
		func_896(*iParam0, 4, 0, 0);
		return true;
	}
	if (!_cashinventory_transaction_checkout(*iParam0))
	{
		func_896(*iParam0, 2, 0, 0);
		return false;
	}
	func_896(*iParam0, 1, 0, 0);
	iVar0 = _cashinventory_transaction_get_action(*iParam0);
	if (iVar0 == 2113164098 || iVar0 == 541670136)
	{
		iParam0->f_3 = 1;
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
	return true;
}

int func_889(int iParam0, int iParam1)
{
	if (!func_877(iParam0, 2))
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

bool func_890(int iParam0, bool bParam1)
{
	if (func_758(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_953();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_891(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_394(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_892(int iParam0, var uParam1, int iParam2)
{
	if (func_954(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_893(bool bParam0)
{
	iVar0 = func_324(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_577(271701509, func_393(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_577(271701509, func_393(bParam0), 12999093, 0);
}

bool func_894(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_758(iParam0);
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
			if (func_759(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_895(int iParam0)
{
	iVar0 = _0x38640a8c2def011b(iParam0);
	iVar1 = _cashinventory_transaction_get_action(iParam0);
	if (iVar0 == 0)
	{
		return true;
	}
	if (iVar1 == 1168099063)
	{
		if (((func_925(0, iVar1, iVar0, 4) || func_925(0, iVar1, iVar0, 256)) || func_925(0, iVar1, iVar0, 65536)) || func_925(0, iVar1, iVar0, 131072))
		{
			return false;
		}
	}
	else if ((func_925(0, iVar1, iVar0, 8) || func_925(0, iVar1, iVar0, 16)) || func_925(0, iVar1, iVar0, 65536))
	{
		return false;
	}
	return true;
}

void func_896(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_955(iParam0, iParam1, iParam2, iParam3);
}

int func_897(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_844(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_846(func_770(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_847(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

int func_898(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_325(*uParam0, &Var1, 1, 0, -1))
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
	iVar15 = func_587(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_956(*uParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_732(-1230526146, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2072933068)
	{
		Var44 = { func_957(*uParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_928(-1230526146, &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var69 = { func_958(*uParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_959(-1230526146, &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_731(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_897(-1230526146, &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_899(int iParam0)
{
	return func_610(&(Global_1956200->f_1565), iParam0, 1);
}

int func_900(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_901(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

char* func_902(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

char* func_903(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_904(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_785(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_6[iParam0] = fParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_6[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

void func_905(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_785(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_16[iParam0]->f_2 = uParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_16[iParam0]->f_2 = uParam1;
			break;
		default:
			break;
	}
}

bool func_906(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

float func_907(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_908(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_960(uParam0, iParam1, sParam2))
	{
		if (!is_ped_injured(iParam1))
		{
			if (!network_is_game_in_progress() || (network_is_game_in_progress() && network_has_control_of_entity(iParam1)))
			{
				set_ped_can_play_ambient_anims(iParam1, bParam3);
			}
		}
	}
}

bool func_909()
{
	return func_384() == 4;
}

int func_910()
{
	if (Global_1293346->f_458.f_1548 >= 40 || Global_1293346->f_458.f_1548 < 0)
	{
		Global_1293346->f_458.f_1548 = 0;
	}
	return Global_1293346->f_458.f_1548;
}

void func_911(int iParam0)
{
	if (iParam0 >= 40 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346->f_458.f_1548 = iParam0;
}

int func_912()
{
	if (Global_1293346->f_458.f_1549 >= 10 || Global_1293346->f_458.f_1549 < 0)
	{
		Global_1293346->f_458.f_1549 = 0;
	}
	return Global_1293346->f_458.f_1549;
}

void func_913(int iParam0)
{
	if (iParam0 >= 10 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346->f_458.f_1549 = iParam0;
}

void func_914(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_915(int iParam0, int iParam1)
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

int func_916(int iParam0)
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

int func_917(int iParam0)
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

void func_918(int iParam0, int iParam1)
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
			func_961((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_961(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_674(*Global_1900736->f_1[0]))
	{
		func_676(*Global_1900736->f_1[0], 3);
	}
}

bool func_919(int iParam0)
{
	iVar0 = func_962(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_920(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return true;
	}
	return false;
}

void func_921(int iParam0)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 0)
	{
		return;
	}
	func_922(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_922(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

void func_923(var uParam0)
{
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = 623901053;
	*uParam0 = { Var0 };
}

float func_924(int iParam0, bool bParam1)
{
	if (!Global_1139381->f_5560)
	{
		return 0f;
	}
	if (iParam0 == &Global_1296859->f_154[&Global_1296859])
	{
		return Global_17411.f_2621;
	}
	if (!network_is_player_active(iParam0))
	{
		return 0f;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0f;
	}
	if ((_0x149a2751ab66ac02(_0x901e0dc25080c8b9(iParam0)) > 1 && bParam1) && (*Global_1100469)[iVar0]->f_18 >= (*Global_1100469)[iVar0]->f_45)
	{
		return (*Global_1100469)[iVar0]->f_18;
	}
	return (*Global_1100469)[iVar0]->f_45;
}

int func_925(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_352(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

bool func_926(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!is_model_valid(uParam0->f_11))
	{
		return false;
	}
	uParam0->f_22 = func_963(uParam0->f_11);
	if (uParam0->f_22 == 0)
	{
		return false;
	}
	uParam0->f_12 = { uParam1->f_16 };
	uParam0->f_23 = uParam1->f_25;
	uParam0->f_20 = uParam1->f_24;
	uParam0->f_10 = 0;
	return true;
}

bool func_927(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!is_model_valid(uParam0->f_11))
	{
		return false;
	}
	uParam0->f_22 = 0;
	uParam0->f_12 = { uParam1->f_15 };
	uParam0->f_20 = uParam1->f_23;
	uParam0->f_10 = 2;
	return true;
}

int func_928(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_846(func_964(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_847(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

int func_929(int iParam0)
{
	iVar0 = func_965(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (_cashinventory_transaction_checkout_status(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_896(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_896(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

bool func_930(struct<2> Param0)
{
	return func_966(Param0, 5, 8);
}

int func_931(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_933(iVar0, 1, 0);
		if (!func_967(iParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_935(&(Var2[iVar34])))
				{
					if (!bParam1 || func_371(&(Var2[iVar34]), 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_932(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_933(iVar0, 0, 1);
		if (!func_967(iParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_936(&(Var9[iVar41])))
				{
					if (!bParam1 || func_371(&(Var9[iVar41]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41] == 2084597891 || &Var9[iVar41] == 773203532)
				{
					if ((bParam2 && &Var9[iVar41] == 2084597891) || (!bParam2 && &Var9[iVar41] == 773203532))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41]->f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41]->f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41]->f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41]->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

int func_933(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
			case 1:
				return 866168015;
			case 2:
				return -1103707655;
			default:
				break;
		}
		iVar0 = 3;
	}
	if (bParam2)
	{
		switch ((iParam0 - iVar0))
		{
			case 0:
				return 75922725;
			case 1:
				return 1070046552;
			case 2:
				return -1843707398;
			case 3:
				return -1571233163;
			case 4:
				return -1197011183;
			default:
				break;
		}
	}
	return 0;
}

bool func_934(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_593(iParam0, 0))
	{
		return false;
	}
	*iParam3 = _0xdee7b3c76ed664be(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!_0xad73b614df26cf8a(iParam0, iParam1, iVar0, (*uParam2)[iVar0]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_968(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_935(int iParam0)
{
	return func_758(iParam0) == 1946043663;
}

bool func_936(int iParam0)
{
	return func_758(iParam0) == -126813555;
}

bool func_937(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_877(iParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_969(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

int func_938(int iParam0, bool bParam1)
{
	if (!func_878(iParam0, bParam1))
	{
		return 0;
	}
	if (iParam0 == 1949608568)
	{
		return func_748(1657716792, 1);
	}
	else if (iParam0 == 20024186)
	{
		return func_748(963726415, 1);
	}
	else if (iParam0 == 318000298)
	{
		return func_748(-1939515319, 1);
	}
	else if (iParam0 == -1771777013)
	{
		return func_748(-1903059161, 1);
	}
	else if (iParam0 == 375366730)
	{
		return func_748(-252071901, 1);
	}
	else if (iParam0 == -1309887827)
	{
		return func_748(-611782825, 1);
	}
	return func_748(iParam0, 1);
}

bool func_939(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (!func_967(iParam0, iParam1, &Var0, &iVar31, 0, 1))
	{
		return false;
	}
	iVar34 = -1;
	if (Global_1915715->f_20638)
	{
		iVar34 = Global_1915715->f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == 0)
		{
		}
		else
		{
			if (&Var0[iVar32] == 2084597891)
			{
				if (!bParam4 && !func_884(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else if (&Var0[iVar32] == 773203532)
			{
				if (!bParam4 && !func_883(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_945(iVar34, &(Var0[iVar32]));
				if (iVar33 != 0)
				{
					iVar35 = func_946(&(Var0[iVar32]), iVar33);
				}
				else
				{
					iVar35 = func_371(&(Var0[iVar32]), 0, bParam3, 1);
				}
				if (iVar35 < Var0[iVar32]->f_1)
				{
					*uParam2 = { *Var0[iVar32] };
					return false;
				}
			}
			iVar32++;
		}
	}
	return true;
}

int func_940(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_967(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((&Var0[iVar32] == 2084597891 || &Var0[iVar32] == 773203532) || &Var0[iVar32] == -1295114026)
		{
			return Var0[iVar32]->f_1;
		}
		else if (&Var0[iVar32] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

bool func_941(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return _network_is_money_balance_not_less_than(iParam0, 0);
}

int func_942()
{
	if (func_81() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

bool func_943(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_877(iParam0, 2))
	{
		return false;
	}
	*iParam3 = _0x388088bff3681189(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!_0xb542632693d53408(iParam0, iParam1, iVar0, (*uParam2)[iVar0]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_970(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_944()
{
	if (_inventory_get_ped_inventory_id(player_ped_id()) != 3)
	{
		return false;
	}
	return _0xfc7563f482781a3d();
}

int func_945(int iParam0, int iParam1)
{
	if (iParam0 == 15 && func_771(iParam1, -2051813666))
	{
		return 1;
	}
	return 0;
}

int func_946(int iParam0, int iParam1)
{
	if (!func_593(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_393(0) };
	Var0.f_4 = func_971(iParam1);
	Var5 = { func_577(iParam0, Var0, Var0.f_4, 0) };
	if (!_0xb881ca836cc4b6d4(&Var5))
	{
		return 0;
	}
	iVar9 = _0xc97e0d2302382211(func_324(0), &Var5, 0);
	return iVar9;
}

bool func_947(int iParam0)
{
	if (!func_593(iParam0, 0))
	{
		return false;
	}
	if (func_771(iParam0, -887064662))
	{
		return true;
	}
	return func_948(iParam0);
}

bool func_948(int iParam0)
{
	if (!func_593(iParam0, 0))
	{
		return false;
	}
	if (func_771(iParam0, -839724752))
	{
		return true;
	}
	return false;
}

int func_949(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_972(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_593(iParam1, 0))
	{
		return 0;
	}
	if (!func_973(iParam0))
	{
		return 0;
	}
	iVar0 = func_974(iParam0);
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iVar0, iVar1);
	iVar2 = get_itemset_size(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		iVar28 = _get_entity_from_item(get_indexed_item_in_itemset(iVar27, iVar1));
		if (!func_975(iVar28))
		{
		}
		else
		{
			_0x48e4d50f87a96aa5(get_ped_index_from_entity_index(iVar28), 1, 1, get_entity_model(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = &Var3.f_1[iVar29];
				if (iVar30 == iParam1)
				{
					if (!does_entity_exist(*iParam2))
					{
						*iParam2 = get_ped_index_from_entity_index(iVar28);
					}
					iVar26++;
				}
				iVar29++;
			}
		}
		iVar27++;
	}
	if (is_itemset_valid(iVar1))
	{
		destroy_itemset(iVar1);
	}
	return iVar26;
}

int func_950(int iParam0, int iParam1)
{
	if (!func_593(iParam0, 0))
	{
		return 0;
	}
	if (!func_947(iParam0) && !func_948(iParam0))
	{
		return 0;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	iVar13 = func_976(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_977(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_978(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = func_979(iVar15, iVar1);
			if (func_593(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = func_980(iVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_946(iVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_982(iVar16, func_981(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		func_983(iVar1);
	}
	return iVar0;
}

int func_951(int iParam0, int iParam1)
{
	iParam0 = func_972(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_593(iParam1, 0))
	{
		return 0;
	}
	if (!func_973(iParam0))
	{
		return 0;
	}
	iVar0 = func_974(iParam0);
	iVar1 = iParam1;
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (_0x0ceeb6f4780b1f2f(iVar0, iVar3) != iVar1)
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_952(int iParam0)
{
	if (!func_593(iParam0, 0))
	{
		return 0;
	}
	if (_is_ped_carrying(Global_34))
	{
		iVar1 = _get_first_entity_ped_is_carrying(Global_34);
		if (does_entity_exist(iVar1) && !is_entity_a_ped(iVar1))
		{
			if (iParam0 == _0x31fef6a20f00b963(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

bool func_953()
{
	return (func_984(-1185145312, 0, 0, 0) > 0 && func_985(func_577(889965687, func_393(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_954(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_324(0);
	*uParam1 = { func_577(iParam0, func_773(0), iParam3, 0) };
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

void func_955(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_986(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

struct<28> func_956(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_324(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_731(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

struct<25> func_957(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_324(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_731(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

struct<17> func_958(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_324(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_731(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_959(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_844(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_846(func_768(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_847(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

bool func_960(var uParam0, int iParam1, char* sParam2)
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (are_strings_equal(sParam2, &((*uParam0)[iVar1]->f_1)))
		{
			(*uParam0)[iVar1] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97] = iParam1;
			StringCopy(&((*uParam0)[uParam0->f_97]->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

void func_961(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { *Global_1900736->f_1[iParam0] };
	*Global_1900736->f_1[iParam0] = { *Global_1900736->f_1[iParam1] };
	*Global_1900736->f_1[iParam1] = { Var0 };
}

int func_962(int iParam0)
{
	return func_987(iParam0) + 30;
}

int func_963(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return -364764277;
	}
	switch (iParam0)
	{
		case -450053710:
			return -974145463;
		case -1679658797:
			return 1432602132;
		case 1792770814:
			return 92296905;
		case -1963397600:
			return -842044823;
		case -1250098797:
			return 1371398552;
		case -318278790:
			return -745453539;
		case 55096099:
			return 1583029039;
		case -458397856:
			return -783061276;
		case -444610976:
			return -1322521536;
		case 746627200:
			return 728055838;
		case 705691988:
			return 1100711204;
		case 2130094044:
			return -1782334639;
		case -1554827654:
			return -1181052732;
		case -1029277326:
			return -179102320;
		case -1140650619:
			return -1266863668;
		case -1999198818:
			return -2078767648;
		case -403470324:
			return -852553462;
		case -925223936:
			return -80004868;
		case -1547438906:
			return 1813208211;
		case -635239558:
			return 836323303;
		case -2026265047:
			return 153881023;
		case -586898625:
			return -1256798240;
		case 937246805:
			return 2118089359;
		case 1593035738:
			return -1537586382;
		case 861505058:
			return 1440692746;
		case 687445866:
			return 697143532;
		case 1705182311:
			return 281128160;
		case -78273782:
			return 1854519167;
		case -819697512:
			return -1376299681;
		case -247265944:
			return -1955947684;
		case -1265030920:
			return 1361788230;
		case 2024948086:
			return 1974379573;
		case 1696286663:
			return 545109431;
		case -1342159303:
			return 1275638003;
		case -1154406788:
			return 2083573823;
		case 2030804811:
			return 1235275977;
		case 1230359523:
			return 892601357;
		case -1038436471:
			return 1224695367;
		case 96930969:
			return 648301150;
		case -1180427609:
			return -1597490733;
		case 2119038574:
			return 2000205872;
		case 43825738:
			return -1428527735;
		case 2145697477:
			return 170010697;
		case -1261814606:
			return -742726637;
		case 107013696:
			return -1714171692;
		case 1066034872:
			return -103101636;
		case 36009259:
			return -1999094324;
		case -1599683008:
			return 1724200240;
		case -1693870200:
			return 237935328;
		case 1072019803:
			return 120848852;
		case 1074477367:
			return -868094182;
		case -85890205:
			return -887362763;
		case -727455979:
			return -847714194;
		case -1667789645:
			return 1756765331;
		case -1924405794:
			return -813071670;
		case 1861665605:
			return -1900569233;
		case -526169133:
			return 1688250187;
		case 2120708491:
			return -1262715164;
		case 900144280:
			return 2010625508;
		case 1133837220:
			return -136225010;
		case 1702024301:
			return -225011104;
		case -1604180548:
			return -1882436593;
		case -683592019:
			return -757978903;
		case 337109765:
			return 1909854428;
		case -619132373:
			return 1592694494;
		case 1544366970:
			return 981469777;
		case -1441144351:
			return 1064693514;
		case -1717674545:
			return -1365665739;
		case 1825358734:
			return 1577022605;
		case 1138427579:
			return 381495209;
		case -1720251851:
			return 3032834;
		case 506887890:
			return -1722101672;
		case 766293155:
			return -189605757;
		case 2147082926:
			return 863391233;
		case -390136947:
			return -952011226;
		case 1104566530:
			return -356470463;
		case -1142861801:
			return -1750687713;
		case -417416199:
			return -272192064;
		case -1460773772:
			return 1935859332;
		case 1476007840:
			return -1898310680;
		case -1616287563:
			return 885568364;
		case -127412252:
			return -1540355548;
		case -1881155818:
			return -601560591;
		case -955237712:
			return -370362766;
		case -647020346:
			return -1698261864;
		case -1846319726:
			return -670301166;
		case 1007570567:
			return -302057902;
		case 1029339151:
			return 1257620801;
		case -1424767799:
			return 821735821;
		case -217135948:
			return -769035812;
		case -156439156:
			return -1824684932;
		case 1344011125:
			return 1589592948;
		case 1772321403:
			return -1331210307;
		case -1230516683:
			return 122449722;
		case 594040097:
			return -1784502482;
		case 1883159941:
			return -1943445834;
		case -1028075925:
			return -635244104;
		case 84224102:
			return -1427377767;
		case 1496579364:
			return -2055655009;
		case -1896838685:
			return -1293672675;
		case -420599285:
			return -1179079660;
		case 478986344:
			return 805526368;
		case 917402668:
			return -235714362;
		case -914712122:
			return -1678164;
		case -598917269:
			return -977833913;
		default:
			break;
	}
	return 0;
}

bool func_964(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 25, uParam2, 0);
}

int func_965(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			return Global_1293346->f_20.f_1[iVar0]->f_1;
		}
		iVar0++;
	}
	return 0;
}

bool func_966(struct<2> Param0, int iParam2, int iParam3)
{
	if (!func_674(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_988(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_967(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_866(iParam0))
	{
		return false;
	}
	*iParam3 = _0xf540239f9937033b(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return false;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!_0xf27f01bbf5acd3f3(iParam0, iParam1, iVar0, (*uParam2)[iVar0]))
		{
			Jump @112; //curOff = 100
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_989(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

void func_968(int iParam0, int iParam1, var uParam2, int iParam3)
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
		fVar21[iVar0] = 1f;
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
							if (uParam2[iVar0] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
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
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f && (*uParam2)[iVar0]->f_1 > 0)
		{
			if (uParam2[iVar0] == 773203532)
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 10000);
			}
			if ((*uParam2)[iVar0]->f_1 == 0 && func_758(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_969(int iParam0, int iParam1, var uParam2)
{
	iVar1 = _0x7a35a72a692be9db(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (_0x3a0b667abff87f6e(iParam0, iVar0, uParam2) && *uParam2 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_970(int iParam0, int iParam1, var uParam2, int iParam3)
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
	if (!_0xa97ee5e4589fcf5a(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
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
							if (uParam2[iVar0] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
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
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f && (*uParam2)[iVar0]->f_1 > 0)
		{
			if (uParam2[iVar0] == 773203532)
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 10000);
			}
			if ((*uParam2)[iVar0]->f_1 == 0 && func_758(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_971(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		default:
			break;
	}
	return 1084182731;
}

int func_972(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_281;
	}
	return iParam0;
}

bool func_973(int iParam0)
{
	iParam0 = func_972(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (does_entity_exist(Global_1903136[iParam0]))
	{
		return true;
	}
	return false;
}

int func_974(int iParam0)
{
	iParam0 = func_972(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1903136[iParam0];
}

bool func_975(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return false;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (!_0x9a100f1cf4546629(iVar0))
	{
		return false;
	}
	if (_0xf8b48a361dc388ae(iVar0) == 2)
	{
		return false;
	}
	if (_0x8de41e9902e85756(iParam0))
	{
		return false;
	}
	if (_0xcdc25355c0d65963(iParam0))
	{
		return false;
	}
	return true;
}

int func_976(int iParam0, int iParam1)
{
	if (_item_database_fillout_tag_data(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42]->f_1 == iParam1)
			{
				return &(Var0[iVar42]);
			}
			iVar42++;
		}
	}
	return 0;
}

struct<10> func_977(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_978(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_979(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= _0xd389a2549c4efb30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!_0x8750f69a720c2e41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_980(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -151356522:
		case 1006434513:
			iVar0 = -2116748615;
			break;
		case 306916738:
		case 1481288777:
			iVar0 = 1493541632;
			break;
		case -1824685471:
		case 724563284:
			iVar0 = 264156159;
			break;
		case 803930024:
		case 1917027383:
			iVar0 = 1538187374;
			break;
		case -855052577:
		case 1111663869:
			iVar0 = -300867788;
			break;
		case -5376850:
		case 1425358430:
			iVar0 = 122748261;
			break;
		case 1297433586:
		case 1338219162:
			iVar0 = -711779521;
			break;
		case -1538397860:
		case -293259613:
			iVar0 = -1553593715;
			break;
		case 193037129:
		case 588902637:
			iVar0 = 697075200;
			break;
		case -861419347:
		case 1416872916:
			iVar0 = 706485280;
			break;
		case 357567274:
		case 1500919793:
			iVar0 = 513249462;
			break;
		case 683583793:
		case 1042542561:
			iVar0 = 1520661;
			break;
		case -1202625002:
		case 56657913:
			iVar0 = 1860580756;
			break;
		case 485620834:
		case 1570826681:
			iVar0 = 41707457;
			break;
		case 727522818:
		case 785407605:
			iVar0 = 490159652;
			break;
		case -1457420231:
		case 563848610:
		case 1432949803:
			iVar0 = 674267496;
			break;
		case -2120099592:
		case -983831788:
		case 1848456619:
			iVar0 = 1582986780;
			break;
		case -1882344824:
		case -1640704323:
		case -1134447619:
			iVar0 = -930822792;
			break;
		case -1969404854:
		case 183958842:
		case 1948158930:
			iVar0 = 1784941179;
			break;
		case -1323780599:
		case -532099639:
		case 905173572:
			iVar0 = -292997097;
			break;
		case -1586332975:
		case -832850511:
		case 1857501916:
			iVar0 = -1550768676;
			break;
		case -1888757291:
		case 894877715:
		case 995863399:
			iVar0 = -2037578922;
			break;
		case -1905834457:
		case -110353515:
		case 59384454:
			iVar0 = 98537260;
			break;
		case -1464585113:
		case -610456424:
		case -284151822:
			iVar0 = -1302821723;
			break;
		case -1956973834:
		case -738999731:
		case 566023444:
			iVar0 = 1746830155;
			break;
		case -1999212658:
		case -593435395:
		case -245335326:
			iVar0 = 111281960;
			break;
		case -1726572562:
		case -1017987135:
		case 2058475216:
			iVar0 = 2105463796;
			break;
		case -1909348309:
		case -1788506246:
		case 1761263432:
			iVar0 = 989669666;
			break;
		case -1290897778:
		case -350704687:
		case 765892430:
			iVar0 = -1210546580;
			break;
		case -318217782:
		case -100913452:
		case 72307351:
			iVar0 = -1910795227;
			break;
		case -1867587109:
		case 182158309:
		case 313332607:
			iVar0 = -1028170431;
			break;
		case 444160793:
		case 1205453831:
		case 1815539745:
			iVar0 = 1465438313;
			break;
		case -2123600216:
		case -146690338:
		case -124539232:
			iVar0 = 1502581273;
			break;
		case -1403731492:
		case -843795569:
		case 1496267371:
			iVar0 = 510312109;
			break;
	}
	return iVar0;
}

int func_981(int iParam0)
{
	if (func_771(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_771(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_771(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_982(int iParam0, int iParam1, int iParam2)
{
	_0xb29c553ba582d09e(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_593(&(uVar0[iVar17]), 0) && iParam2 == &uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

int func_983(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!_0xcbb7b6edfa933ade(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_984(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_990(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_324(bParam1), iParam0, iParam3);
}

int func_985(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_991(&uParam0, iParam4, bParam5, iParam6);
}

void func_986(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_992(&(uParam0->f_4));
}

int func_987(int iParam0)
{
	return iParam0 * 31;
}

int func_988(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_694(Param0);
	}
	return -1;
}

void func_989(int iParam0, int iParam1, var uParam2, int iParam3)
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
	if (!_0xe81d0378a384e755(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
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
							if (uParam2[iVar0] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
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
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f && (*uParam2)[iVar0]->f_1 > 0)
		{
			if (uParam2[iVar0] == 773203532)
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 10000);
			}
			if ((*uParam2)[iVar0]->f_1 == 0 && func_758(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_990(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_991(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_741(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_992(var uParam0)
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

