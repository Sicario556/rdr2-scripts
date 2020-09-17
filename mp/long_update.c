void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	iLocal_24 = 401817002;
	sLocal_25 = "props_misc@campfires@5_logs";
	sLocal_26 = "Script_PropCampfire";
	network_set_script_is_safe_for_network_game();
	func_1(8);
	set_this_script_can_remove_blips_created_by_any_script(true);
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
	while (!func_18(256))
	{
		wait(0);
	}
	while (!func_18(128))
	{
		wait(0);
	}
	while (!func_18(256) && Global_39)
	{
		wait(0);
	}
	iVar113 = 0;
	while (iVar113 < Var0)
	{
		Call_Loc(&Var0[iVar113]);
		func_19(&(Var0[iVar113]->f_6), 1);
		iVar113++;
	}
	func_20(8);
	while (Global_1572887->f_9)
	{
		wait(0);
	}
	while (!func_18(256))
	{
		wait(0);
	}
	func_20(1);
	iVar114 = 16;
	iVar115 = 0;
	iVar116 = 0;
	iVar113 = 0;
	while (!_0x9e4ef615e307fbbe())
	{
		fVar117 = func_21();
		if (fVar117 <= 0f)
		{
			fVar117 = 24f;
		}
		iVar115 = round((IntToFloat(iVar114) / fVar117));
		if (iVar115 <= 0)
		{
			iVar115 = 1;
		}
		iVar116 = 0;
		iVar116 = 0;
		while (iVar116 < iVar115)
		{
			Call_Loc(Var0[iVar113]->f_1);
			iVar113++;
			if (iVar113 >= iVar114)
			{
				iVar113 = 0;
			}
			iVar116++;
		}
		if (func_22(4))
		{
			func_23();
			func_24();
			iVar118 = func_25();
			if (func_26(iVar118))
			{
				func_27(iVar118, iVar118, 0);
			}
			func_28(4);
		}
		wait(0);
	}
	func_29(&Var0);
	while (!_0x380ffa15b72408fb(1440))
	{
		wait(0);
	}
	terminate_this_thread();
}

void func_1(int iParam0)
{
	Global_18 = (Global_18 - (Global_18 && iParam0));
}

void func_2(var uParam0)
{
	*uParam0 = 2432;
	uParam0->f_1 = 2440;
	uParam0->f_2 = 2432;
	StringCopy(&(uParam0->f_3), "PLAYER(L)", 24);
	uParam0->f_6 = 6;
}

void func_3(var uParam0)
{
	*uParam0 = 2432;
	uParam0->f_1 = 2575;
	uParam0->f_2 = 2432;
	StringCopy(&(uParam0->f_3), "LAW(L)", 24);
	uParam0->f_6 = 6;
}

void func_4(var uParam0)
{
	*uParam0 = 2432;
	uParam0->f_1 = 1390;
	uParam0->f_2 = 2609;
	StringCopy(&(uParam0->f_3), "UID MANAGER", 24);
	uParam0->f_6 = 6;
}

void func_5(var uParam0)
{
	*uParam0 = 2432;
	uParam0->f_1 = 2769;
	uParam0->f_2 = 2432;
	StringCopy(&(uParam0->f_3), "TUTORIAL", 24);
	uParam0->f_6 = 6;
}

void func_6(var uParam0)
{
	*uParam0 = 2432;
	uParam0->f_1 = 3297;
	uParam0->f_2 = 3320;
	StringCopy(&(uParam0->f_3), "USE CONTEXT", 24);
	uParam0->f_6 = 6;
}

void func_7(var uParam0)
{
	*uParam0 = 2432;
	uParam0->f_1 = 3524;
	uParam0->f_2 = 2432;
	StringCopy(&(uParam0->f_3), "SATCHEL ITEMS", 24);
	uParam0->f_6 = 6;
}

void func_8(var uParam0)
{
	*uParam0 = 3536;
	uParam0->f_1 = 3544;
	uParam0->f_2 = 2432;
	StringCopy(&(uParam0->f_3), "Drunk Manager", 24);
	uParam0->f_6 = 6;
}

void func_9(var uParam0)
{
	*uParam0 = 3885;
	uParam0->f_1 = 3926;
	uParam0->f_2 = 2432;
	StringCopy(&(uParam0->f_3), "WS Manager", 24);
	uParam0->f_6 = 6;
}

void func_10(var uParam0)
{
	*uParam0 = 2432;
	uParam0->f_1 = 4051;
	uParam0->f_2 = 2432;
	StringCopy(&(uParam0->f_3), "MC VS Update", 24);
	uParam0->f_6 = 4;
}

void func_11(var uParam0)
{
	*uParam0 = 2432;
	uParam0->f_1 = 4362;
	uParam0->f_2 = 2432;
	StringCopy(&(uParam0->f_3), "NET BLIP MANAGER LONG", 24);
	uParam0->f_6 = 4;
}

void func_12(var uParam0)
{
	*uParam0 = 2432;
	uParam0->f_1 = 4382;
	uParam0->f_2 = 2432;
	StringCopy(&(uParam0->f_3), "NET_SHOPS LONG", 24);
	uParam0->f_6 = 4;
}

void func_13(var uParam0)
{
	*uParam0 = 2432;
	uParam0->f_1 = 4465;
	uParam0->f_2 = 2432;
	StringCopy(&(uParam0->f_3), "PARLEY_LONG", 24);
	uParam0->f_6 = 4;
}

void func_14(var uParam0)
{
	*uParam0 = 4524;
	uParam0->f_1 = 4587;
	uParam0->f_2 = 4623;
	StringCopy(&(uParam0->f_3), "FishingAmbient", 24);
	uParam0->f_6 = 6;
}

void func_15(var uParam0)
{
	*uParam0 = 2432;
	uParam0->f_1 = 4661;
	uParam0->f_2 = 4720;
	StringCopy(&(uParam0->f_3), "RichPresenceMgr", 24);
	uParam0->f_6 = 6;
}

void func_16(var uParam0)
{
	*uParam0 = 2432;
	uParam0->f_1 = 4737;
	uParam0->f_2 = 2432;
	StringCopy(&(uParam0->f_3), "AUTOSAVE", 24);
	uParam0->f_6 = 6;
}

void func_17(var uParam0)
{
	*uParam0 = 2432;
	uParam0->f_1 = 4798;
	uParam0->f_2 = 2432;
	StringCopy(&(uParam0->f_3), "NET STORY MISSION LOG", 24);
	uParam0->f_6 = 4;
}

bool func_18(int iParam0)
{
	return (Global_18 && iParam0) != 0;
}

void func_19(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_20(int iParam0)
{
	Global_18 = (Global_18 || iParam0);
}

float func_21()
{
	return Global_1956196->f_3;
}

bool func_22(int iParam0)
{
	return (Global_1900736 && iParam0) != 0;
}

void func_23()
{
	Global_1900736->f_67 = func_53(0, 0, 0);
}

void func_24()
{
	iVar0 = func_54();
	if (iVar0 != -1 && iVar0 != 0)
	{
		return;
	}
	bVar3 = is_entity_dead(Global_34);
	iVar1 = 0;
	while (iVar1 < &Global_1900806)
	{
		if (!func_55(*(*Global_1900807)[iVar1]))
		{
		}
		else
		{
			iVar4 = func_56(*(*Global_1900807)[iVar1]);
			if (iVar4 == 3 || iVar4 == 4)
			{
			}
			else if (iVar4 != 1 && iVar4 != 2)
			{
				func_57(*(*Global_1900807)[iVar1]);
			}
			else
			{
				switch (Global_1900807[iVar1])
				{
					case 2:
						iVar5 = func_58(*(*Global_1900807)[iVar1]);
						if (func_59(iVar5))
						{
							func_60(iVar5, iVar1, 0, iVar0, 0, bVar3);
						}
						break;
					case 5:
						break;
					case 3:
						iVar2 = func_58(*(*Global_1900807)[iVar1]);
						switch (iVar2)
						{
							case 13:
								func_61(iVar1);
								break;
							case 17:
							case 18:
							case 19:
							case 20:
							case 21:
							case 28:
								func_62(iVar2, iVar1);
								break;
						}
						break;
					case 4:
						break;
					case 7:
						break;
					case 6:
						break;
					default:
						break;
				}
			}
		}
		iVar1++;
	}
}

int func_25()
{
	return Global_1893587->f_2;
}

bool func_26(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_27(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = (*Global_1887339)[iParam0]->f_21;
	bVar1 = func_63(iParam0, 32);
	if (iVar0 == 8)
	{
		return;
	}
	if ((!bVar1 && iVar0 != 3) && iVar0 != 4)
	{
		return;
	}
	if (Global_1572887->f_13 != -1)
	{
		if (func_64(iParam0, 4))
		{
			return;
		}
	}
	bVar2 = false;
	switch ((*Global_1887339)[iParam0]->f_21)
	{
		case 3:
			bVar2 = false;
			break;
		case 4:
			if ((*Global_1887339)[iParam0]->f_14 != -1)
			{
				func_65(iParam0, (*Global_1887339)[iParam0]->f_15, (*Global_1887339)[iParam0]->f_16, 1);
				(*Global_1887339)[iParam0]->f_14 = -1;
			}
			break;
		case 6:
			break;
	}
	if (bVar2)
	{
		if (Global_1572887->f_13 != -1)
		{
			if (func_66())
			{
				bVar2 = false;
			}
			else if (func_67())
			{
				bVar2 = false;
			}
		}
	}
	if (bVar2 && !bParam2)
	{
		if ((*Global_1887339)[iParam0]->f_14 == -1)
		{
			(*Global_1887339)[iParam0]->f_15 = iVar3;
			(*Global_1887339)[iParam0]->f_14 = func_68(iParam0, iVar3, (*Global_1887339)[iParam0]->f_16, -1);
			func_69(iParam0, iVar3, (*Global_1887339)[iParam0]->f_16, &((*Global_1887339)[iParam0]->f_23));
		}
		else if ((*Global_1887339)[iParam0]->f_15 != iVar3 || (*Global_1887339)[iParam0]->f_19)
		{
			func_65(iParam0, (*Global_1887339)[iParam0]->f_15, (*Global_1887339)[iParam0]->f_16, 1);
			(*Global_1887339)[iParam0]->f_14 = -1;
			func_70(iParam0, 1024);
			(*Global_1887339)[iParam0]->f_19 = 0;
		}
	}
	else if ((*Global_1887339)[iParam0]->f_14 != -1)
	{
		func_65(iParam0, (*Global_1887339)[iParam0]->f_15, (*Global_1887339)[iParam0]->f_16, 1);
		(*Global_1887339)[iParam0]->f_14 = -1;
		func_70(iParam0, 1024);
	}
	if (func_63(iParam0, 64))
	{
		func_70(iParam0, 64);
		func_71(iParam0);
	}
	if (bVar4)
	{
		if (!func_63(iParam0, 1024))
		{
			if (func_72(iParam0, iVar3, -1726569132))
			{
				func_73(iParam0, 1024);
			}
		}
	}
	else if (func_63(iParam0, 1024))
	{
		if (func_74(iParam0, iVar3, -1726569132))
		{
			func_70(iParam0, 1024);
		}
	}
}

void func_28(int iParam0)
{
	Global_1900736 = (&Global_1900736 - (Global_1900736 && iParam0));
}

void func_29(int iParam0)
{
	if (func_54() == -1)
	{
		func_75(1);
	}
	func_76(iParam0);
	clear_timecycle_modifier();
}

void func_30()
{
}

void func_31()
{
	if (!Global_1940258->f_6)
	{
		func_77();
		func_78();
		func_79();
		func_80();
		if (Global_1940258->f_41)
		{
			func_81();
			Global_1940258->f_41 = 0;
		}
		func_82();
		func_83();
		func_84();
		func_85();
		func_86();
		func_87();
		func_88();
		func_89();
		func_90();
		if ((!is_player_control_on(get_player_index()) && is_screen_faded_in()) && !is_gameplay_cam_rendering())
		{
			set_minimap_fow_reveal_coordinate(Global_35, 911509858);
		}
	}
}

void func_32()
{
	if (!Global_1939161->f_60 == 1)
	{
		func_92(func_91(player_id(), 1, 0, 1));
	}
}

void func_33()
{
	iVar0 = 0;
	while (iVar0 < &Global_1900806)
	{
		if (!func_55(*(*Global_1900807)[iVar0]))
		{
		}
		else
		{
			iVar1 = func_56(*(*Global_1900807)[iVar0]);
			if (iVar1 == 3 || iVar1 == 4)
			{
			}
			else if (iVar1 != 1 && iVar1 != 2)
			{
				func_57(*(*Global_1900807)[iVar0]);
			}
			else
			{
				switch (Global_1900807[iVar0])
				{
					case 2:
						func_93(func_58(*(*Global_1900807)[iVar0]));
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_34()
{
	bVar0 = Global_1904651->f_8686;
	Global_1904651->f_8686 = 0;
	func_94();
	if (func_95(32768))
	{
		return;
	}
	if (!func_96(0))
	{
		return;
	}
	func_97(&iVar1, &iVar2, 0, 1);
	if (iVar1 == -1 || iVar2 == -1)
	{
		return;
	}
	iVar3 = func_98(iVar1, iVar2);
	bVar4 = true;
	if (!func_99(iVar3, &bVar4, bVar0))
	{
		if (!func_100(iVar3, 64) || !bVar4)
		{
			func_101(iVar1, iVar2);
			func_102();
		}
		else
		{
			iVar5 = func_103(iVar3);
			func_97(&iVar1, &iVar2, iVar5 + 1, 0);
			if (iVar1 != -1 && iVar2 != -1)
			{
				func_104(func_98(iVar1, iVar2));
			}
		}
		return;
	}
	if (func_100(iVar3, 8))
	{
		func_105(iVar3);
	}
	bVar6 = func_100(iVar3, 1024);
	iVar7 = &Global_1904651->f_33[iVar3];
	iVar9 = func_106(iVar3);
	if (iVar9 == 0)
	{
		iVar9 = -2;
	}
	if (iVar7 != 0)
	{
		if (func_107(iVar3))
		{
			Global_1904651->f_33[iVar3]->f_1 = func_110(_create_var_string(8, iVar7, func_109(get_player_name(Global_1904651->f_8689), func_108(Global_1904651->f_8689, 1, -1, 0))), iVar9, 0, 0, uVar8, 1);
		}
		else if (func_111(iVar3))
		{
			Global_1904651->f_33[iVar3]->f_1 = func_112(iVar7, iVar3, iVar9, uVar8);
		}
		else if (bVar6)
		{
			Global_1904651->f_33[iVar3]->f_1 = func_113(iVar7, iVar3, iVar9, uVar8);
		}
		else
		{
			Global_1904651->f_33[iVar3]->f_1 = func_110(_create_var_string(0, iVar7), iVar9, 0, 0, uVar8, 1);
		}
		func_102();
		if (func_114(iVar3))
		{
			func_104(func_115(iVar3));
		}
	}
	if (!func_116(iVar3))
	{
		func_101(iVar1, iVar2);
	}
	if (bVar6 && Global_1904651->f_33[iVar3]->f_1 == 0)
	{
		return;
	}
	func_117(&iVar1, &iVar2);
	func_118(iVar3, 1073741824);
}

void func_35()
{
	if (!func_119())
	{
		return;
	}
	func_120();
}

void func_36()
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
		{
			_uiprompt_delete((*Global_1951255)[iVar0]->f_3);
		}
		(*Global_1951255)[iVar0]->f_3 = 0;
		(*Global_1951255)[iVar0]->f_4 = 0;
		(*Global_1951255)[iVar0] = 1;
		(*Global_1951255)[iVar0]->f_16 = 0;
		(*Global_1951255)[iVar0]->f_1 = 0;
		(*Global_1951255)[iVar0]->f_6 = { 0f, 0f, 0f };
		(*Global_1951255)[iVar0]->f_9 = 0f;
		(*Global_1951255)[iVar0]->f_10 = 0;
		(*Global_1951255)[iVar0]->f_11 = 0;
		(*Global_1951255)[iVar0]->f_5 = -1;
		(*Global_1951255)[iVar0]->f_2 = 1;
		(*Global_1951255)[iVar0]->f_12 = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1951255->f_1381 = 0;
}

void func_37()
{
	func_121();
}

void func_38()
{
}

void func_39()
{
	Global_1940085->f_10 = 0;
	if (Global_1940085->f_1 != -1)
	{
	}
	if (&Global_1940085 >= 1)
	{
		if (func_122())
		{
			func_123(1);
		}
	}
	if (&Global_1940085 == Global_1940085->f_1)
	{
		Global_1940085->f_1 = -1;
	}
	switch (&Global_1940085)
	{
		case 0:
			Global_1940085->f_11 = 0;
			if (Global_1940085->f_9 >= func_124())
			{
				Global_1940085 = 1;
				func_125();
				func_126();
			}
			break;
		case 1:
			if (!Global_1940085->f_11)
			{
				chal_add_goal_progress_int(-1823988672, 510866006, 1);
				Global_1940085->f_11 = 1;
			}
			if (Global_1940085->f_9 >= func_127())
			{
				Global_1940085 = 2;
				func_125();
				func_126();
			}
			else if (Global_1940085->f_9 < func_124() && Global_1940085->f_15.f_1 == 0f)
			{
				func_123(0);
				Global_1940085 = 0;
			}
			break;
		case 2:
			if ((func_128(Global_34) || is_ped_in_any_vehicle(Global_34, false)) || !func_129())
			{
				func_130(1);
			}
			if (Global_1940085->f_9 < func_127())
			{
				if (Global_1940085->f_14)
				{
					func_126();
				}
				Global_1940085 = 1;
			}
			break;
	}
	if (&Global_1940085 >= 1)
	{
		func_131();
	}
	if (func_132() && func_133())
	{
		func_134();
	}
}

void func_40()
{
	Global_1939655->f_27 = 0;
	Global_1939655 = 0;
	while (!func_135(1))
	{
	}
	func_136();
	Global_1939655 = 0;
}

void func_41()
{
	if (func_137())
	{
		return;
	}
	if (Global_1939655->f_290)
	{
		return;
	}
	if (func_138())
	{
		return;
	}
	iVar0 = func_25();
	if (func_26(iVar0))
	{
	}
	func_139();
	bVar1 = func_140();
	if (Global_1939655->f_289)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (func_135(0))
		{
			func_136();
			Global_1939655->f_289 = 0;
			Global_1939655 = 0;
		}
	}
	func_141();
	func_142();
	func_143();
	func_144();
}

void func_42()
{
	if (!network_is_in_session())
	{
		return;
	}
	iVar0 = network_player_id_to_int();
	bVar1 = network_is_script_active("net_mc_vs_mission_intro", (*Global_263042)[iVar0]->f_1.f_18, true, 0);
	if (!bVar1)
	{
		if (func_145(player_id(), 16384))
		{
			func_146(16384);
		}
	}
	if ((*Global_263042)[iVar0]->f_1.f_18 == 2147483647)
	{
		return;
	}
	if (func_55((*Global_263042)[iVar0]->f_1.f_53))
	{
		if ((*Global_263042)[iVar0]->f_1.f_53 == 2 && !func_147(&((*Global_263042)[iVar0]->f_1), 16384))
		{
			return;
		}
	}
	if (func_147(&((*Global_263042)[iVar0]->f_1), 1))
	{
		return;
	}
	if (func_148(255))
	{
		return;
	}
	if (func_147(&((*Global_263042)[iVar0]->f_1), 16))
	{
		return;
	}
	if (func_149(32768))
	{
		return;
	}
	if (!bVar1)
	{
		request_script("net_mc_vs_mission_intro");
		if (has_script_loaded("net_mc_vs_mission_intro"))
		{
			Var2 = { (*Global_263042)[iVar0]->f_1 };
			Global_265377->f_124745 = start_new_script_with_args("net_mc_vs_mission_intro", &Var2, 64, 10001);
			set_script_as_no_longer_needed("net_mc_vs_mission_intro");
		}
	}
}

void func_43()
{
	func_150();
	func_151();
	func_152();
}

void func_44()
{
	if (Global_1572887->f_9 || func_153(0, 0))
	{
		return;
	}
	if (func_137())
	{
		return;
	}
	func_154();
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (iVar0 != -1)
		{
			func_155(iVar0);
			func_156(iVar0);
		}
		iVar0++;
	}
}

void func_45()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_157(iVar0);
		iVar0++;
	}
	if (func_158(&(Global_1108365->f_34.f_773), 128))
	{
		func_159();
	}
	func_160();
}

void func_46()
{
	request_ptfx_asset();
	Local_242.f_12 = "MGFSH_Insect_Sounds";
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Local_242.f_13[iVar0]->f_8 = get_sound_id();
		iVar0++;
	}
	func_161(&(Local_242.f_32));
}

void func_47()
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	func_162(&(Local_242.f_32));
	func_163(&Local_242);
}

void func_48()
{
	func_164(&Local_242);
	remove_ptfx_asset();
	if (!is_string_null_or_empty(Local_242.f_12))
	{
		_0x531a78d6bf27014b(Local_242.f_12);
	}
}

void func_49()
{
	switch (Global_1900688->f_1)
	{
		case 0:
			func_165();
			break;
		case 3:
			func_165();
			break;
		case 4:
			func_165();
			break;
	}
}

void func_50()
{
	func_166(1);
	func_167();
}

void func_51()
{
	if (!func_168())
	{
		func_169(&Global_0);
		return;
	}
	if (func_170(&Global_0, 3))
	{
		func_171();
	}
	else if (func_170(&Global_0, 8))
	{
		func_172();
	}
}

void func_52()
{
	switch (&Global_1878314)
	{
		case 0:
			break;
		case 1:
			if (!func_173())
			{
			}
			else
			{
				func_174(2);
				Jump @246; //curOff = 88
				Jump @246; //curOff = 91
				func_175(1);
				func_174(4);
				Jump @246; //curOff = 104
				Jump @246; //curOff = 107
				func_175(0);
				func_174(6);
				Jump @246; //curOff = 120
				if (!func_176())
				{
				}
				else
				{
					func_177();
					func_174(7);
					Jump @246; //curOff = 143
					if (get_game_timer() < Global_1878314->f_85 + 3000)
					{
					}
					else
					{
						if (_is_app_active(1433015236))
						{
							func_174(8);
						}
						if (!func_178(Global_1878314->f_84))
						{
							func_174(8);
						}
						if (get_game_timer() >= Global_1878314->f_85 + 30000)
						{
							func_174(8);
						}
						Jump @246; //curOff = 225
						if (func_179())
						{
							func_174(0);
						}
					}
				}
			}
			func_180();
			default:
				break;
	}
}

bool func_53(int iParam0, bool bParam1, bool bParam2)
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
		if (func_66())
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
	if (iParam0 == 0 && func_55(func_181(0)))
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
	switch (func_182(func_181(0)))
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

int func_54()
{
	return Global_1572887->f_13;
}

bool func_55(struct<2> Param0)
{
	if (!func_183(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_184(Param0))
	{
		return false;
	}
	return true;
}

int func_56(struct<2> Param0)
{
	if (!func_55(Param0))
	{
		return -1;
	}
	iVar0 = func_185(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

void func_57(struct<2> Param0)
{
	if (&Global_1900806 <= 0)
	{
		return;
	}
	if (!func_55(Param0))
	{
		return;
	}
	if (func_186(Param0))
	{
		func_187(Param0, 0, -1, 0, 0);
	}
	iVar0 = func_188(Param0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1900806 > 1)
	{
		*(*Global_1900807)[iVar1] = { *((*Global_1900807)[(&Global_1900806 - 1)]) };
		*(*Global_1900838)[iVar1] = { *((*Global_1900838)[(&Global_1900806 - 1)]) };
		func_189((*Global_1900807)[(&Global_1900806 - 1)]);
		*((*Global_1900838)[(&Global_1900806 - 1)]) = { Var2 };
	}
	else
	{
		func_189((*Global_1900807)[iVar1]);
		*(*Global_1900838)[iVar1] = { Var2 };
	}
	Global_1900806 = (&Global_1900806 - 1);
	if (&Global_1900806 < 0)
	{
		Global_1900806 = 0;
	}
}

int func_58(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_190(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

bool func_59(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_60(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!func_191())
	{
		return;
	}
	if (func_192(iParam0))
	{
		if (!func_193(iParam0))
		{
			if (func_194(iParam0) != 0)
			{
				func_195(iParam0);
			}
			return;
		}
	}
	if (!(*Global_1835011)[iParam0]->f_67)
	{
		if ((*Global_1900838)[iParam1]->f_1 & 2097152 != 0)
		{
			func_196(iParam1, 2097152);
			func_197(iParam0, -1, 0, 1, 0, 0, 0);
			return;
		}
	}
	else if (!bParam4 && !Global_13)
	{
		(*Global_1835011)[iParam0]->f_67 = 0;
		func_199(iParam0, vdist2(func_198(iParam0), Global_35), iParam1);
	}
	func_200(iParam0, iParam1, iParam3, bParam5);
	if (iParam0 >= 0 && iParam0 <= 12)
	{
		func_201(iParam0);
	}
}

int func_61(int iParam0)
{
	sVar0 = func_202();
	if (is_thread_active(Global_1108365->f_814, true))
	{
		return 0;
	}
	if (_0x424b17a7dc5c90bc(player_id()) && func_203(Global_1108365->f_935.f_24))
	{
		return 0;
	}
	request_script(sVar0);
	if (has_script_loaded(sVar0))
	{
		Var1.f_7 = -1;
		Var1.f_7.f_1 = -1;
		Var1.f_9 = 255;
		Var1 = Global_1108365->f_935.f_17;
		Var1.f_7 = { *(*Global_1900807)[iParam0] };
		Var1.f_1 = { Global_1108365->f_935.f_24 };
		Global_1108365->f_814 = start_new_script_with_args(sVar0, &Var1, 10, 6005);
		set_script_as_no_longer_needed(sVar0);
		func_204(sVar0, -1);
		return 1;
	}
	return 0;
}

int func_62(int iParam0, int iParam1)
{
	sVar0 = func_205();
	if (is_thread_active(Global_1108365->f_814, true))
	{
		return 0;
	}
	request_script(sVar0);
	if (has_script_loaded(sVar0))
	{
		Var1.f_7 = -1;
		Var1.f_7.f_1 = -1;
		Var1.f_9 = 255;
		Var1 = Global_1108365->f_935.f_17;
		Var1.f_1 = { 0f, 0f, 0f };
		Var1.f_7 = { *(*Global_1900807)[iParam1] };
		Global_1108365->f_814 = start_new_script_with_args(sVar0, &Var1, 10, 6005);
		set_script_as_no_longer_needed(sVar0);
		func_204(sVar0, -1);
		return 1;
	}
	return 0;
}

bool func_63(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_8123[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_19674[iParam0] && iParam1) != 0;
}

bool func_64(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return ((*Global_1887339)[iParam0]->f_22 && iParam1) != 0;
}

void func_65(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, bool bParam5)
{
	iVar0 = 0;
	while (iVar0 < Global_17081)
	{
		if (func_206(iVar0) == iParam0 && func_207(iVar0) == iParam1)
		{
			func_208(iVar0, -1);
			func_209(iVar0, 0);
			func_210(iVar0, 0);
			if (does_blip_exist(&(Global_17081[iVar0])))
			{
				if (bParam5)
				{
					set_radar_zoom(&(Global_17081[iVar0]));
				}
				remove_blip(Global_17081[iVar0]);
			}
			return;
		}
		iVar0++;
	}
}

bool func_66()
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
	if (!func_55(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_67()
{
	return func_55(*Global_1051213);
}

int func_68(int iParam0, int iParam1, vector3 vParam2, int iParam5)
{
	if (iParam1 == 0)
	{
		return -1;
	}
	if (func_203(vParam2))
	{
		return -1;
	}
	iVar1 = -1;
	iVar2 = func_211(vParam2);
	iVar0 = 0;
	while (iVar0 < Global_17081)
	{
		if (func_207(iVar0) == 0 && iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		else if ((func_207(iVar0) == iParam1 && func_206(iVar0) == iParam0) && iVar2 == func_212(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 250)
	{
		func_208(iVar1, iParam0);
		func_209(iVar1, iParam1);
		func_210(iVar1, iVar2);
		func_213(iVar1, iParam5);
		func_214(iVar1);
		set_blip_flash_timer(&(Global_17081[iVar1]), iParam1, func_215(iParam0, 0));
		return iVar1;
	}
	return -1;
}

void func_69(int iParam0, int iParam1, vector3 vParam2, char* sParam5)
{
	iVar0 = func_211(vParam2);
	iVar1 = 0;
	while (iVar1 < Global_17081)
	{
		if ((func_206(iVar1) == iParam0 && func_207(iVar1) == iParam1) && func_212(iVar1) == iVar0)
		{
			if (does_blip_exist(&(Global_17081[iVar1])))
			{
				set_blip_name_from_text_file(&(Global_17081[iVar1]), sParam5);
			}
			return;
		}
		iVar1++;
	}
}

void func_70(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0] = (&Global_8123[iParam0] - (Global_8123[iParam0] && iParam1));
		return;
	}
	Global_1071686->f_19674[iParam0] = (&Global_1071686->f_19674[iParam0] - (Global_1071686->f_19674[iParam0] && iParam1));
}

void func_71(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_17081)
	{
		if (func_206(iVar0) == iParam0)
		{
			if (does_blip_exist(&(Global_17081[iVar0])))
			{
				_blip_set_modifier(&(Global_17081[iVar0]), 580546400);
			}
			return;
		}
		iVar0++;
	}
}

bool func_72(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < Global_17081)
	{
		if (func_206(iVar0) == iParam0 && func_207(iVar0) == iParam1)
		{
			if (does_blip_exist(&(Global_17081[iVar0])))
			{
				return _blip_set_modifier(&(Global_17081[iVar0]), iParam2);
			}
			return false;
		}
		iVar0++;
	}
	return false;
}

void func_73(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0] = (Global_8123[iParam0] || iParam1);
	}
	else
	{
		Global_1071686->f_19674[iParam0] = (Global_1071686->f_19674[iParam0] || iParam1);
	}
}

bool func_74(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < Global_17081)
	{
		if (func_206(iVar0) == iParam0 && func_207(iVar0) == iParam1)
		{
			if (does_blip_exist(&(Global_17081[iVar0])))
			{
				return _set_blip_flash_style(&(Global_17081[iVar0]), iParam2);
			}
			return false;
		}
		iVar0++;
	}
	return false;
}

void func_75(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1071686->f_19550 - 1))
	{
		if (Global_1071686->f_19550.f_1[iVar0]->f_2 != 0)
		{
			func_187(*Global_1071686->f_19550.f_1[iVar0], iParam0, -1, 0, 0);
		}
		iVar0++;
	}
}

void func_76(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		Call_Loc((*iParam0)[iVar0]->f_2);
		iVar0++;
	}
}

void func_77()
{
	if (!_0xfbe782b3165ac8ec(-496459706))
	{
		return;
	}
	if (!func_216(255))
	{
		return;
	}
	if (func_217(255))
	{
		return;
	}
	iVar0 = _get_metaped_type(get_player_ped(player_id()));
	if (iVar0 == 3)
	{
		if (!func_218())
		{
			if (!func_219(33554432))
			{
				Global_1952637->f_3291 = get_game_timer();
				func_220(33554432);
				return;
			}
			if ((get_game_timer() - Global_1952637->f_3291) > Global_1901947->f_308.f_273)
			{
				if (func_221(255))
				{
					Var31.f_6 = { func_222(player_id()) };
					func_223(Var31.f_6, &Var1);
					if (!func_224(Var1, Var31, 1, 1, 1))
					{
						func_225(Var31.f_6, 0f, 0f, 0f, 0f, 0);
					}
				}
				else
				{
					func_226(1, 1);
				}
				func_227(33554432);
				func_220(8388608);
			}
			if (func_228(1, 255))
			{
				func_229(1);
			}
		}
		else
		{
			if (!func_228(1, 255))
			{
				func_230(1);
			}
			if (func_219(33554432))
			{
				func_227(33554432);
			}
		}
	}
}

void func_78()
{
	if (!does_entity_exist(Global_34) || Global_1940258->f_6)
	{
		return;
	}
	func_231("player_newWeaponType", "player_newWeaponTime");
	func_231("player_newPistolWeaponType", "player_newPistolWeaponTime");
	func_231("player_newRevolverWeaponType", "player_newRevolverWeaponTime");
	func_231("player_newRifleWeaponType", "player_newRifleWeaponTime");
	func_231("player_newShotgunWeaponType", "player_newShotgunWeaponTime");
}

void func_79()
{
	iVar0 = func_232(Global_35);
	if (iVar0 != -1)
	{
		iVar1 = (*Global_1887339)[iVar0]->f_5;
		if (_does_volume_exist(iVar1))
		{
			_0xefb5f34cc0953b27(iVar1);
		}
	}
}

void func_80()
{
	if (!is_ped_injured(Global_34))
	{
		if ((_0x45ab66d02b601fa7(player_id()) && !_0xfe691e89c08937b6(get_player_index(), 57)) && !(_is_weapon_binoculars(Global_1940258->f_38) && get_ped_reset_flag(Global_34, 0)))
		{
			func_233(225, 0);
		}
		else
		{
			func_234(225);
		}
		if (is_player_control_on(player_id()))
		{
			if ((func_235(255) && func_236()) && !func_237())
			{
				if (Global_1940258->f_48 == 0)
				{
					Global_1940258->f_48 = _get_system_time();
					func_233(757, 0);
				}
				if (Global_1940258->f_48 + 60000) < _get_system_time()
				{
					if (!func_100(588, 1073741824))
					{
						func_233(588, 1);
					}
					if (!func_100(589, 1073741824))
					{
						if (func_238(1, 1) && !func_239())
						{
							func_233(589, 1);
						}
					}
					if (!func_100(918, 1073741824))
					{
						if (!func_240(-570967010, 1728382685, 0) && func_241(273608212, 1))
						{
							func_233(918, 1);
						}
					}
				}
				if (_unlock_is_unlocked(-1831140953))
				{
					if (!func_242(735))
					{
						func_233(735, 0);
					}
				}
				else if (!(is_pc_version() || _is_stadia_version()))
				{
					if (_unlock_is_unlocked(-182077036))
					{
						if (!func_242(734))
						{
							func_233(734, 0);
						}
					}
					else if (_unlock_is_unlocked(-1387714323))
					{
						if (!func_242(733))
						{
							func_233(733, 0);
						}
					}
				}
				func_243(862, 12, 1496793673, 0);
				func_243(863, 12, 1496793673, -1);
				func_243(864, 12, -789660453, -1);
				if (_unlock_is_visible(-1387714323))
				{
					func_243(950, 18, -152531218, -1);
					func_243(949, 18, 1698900121, -1);
				}
			}
			if (!func_242(689))
			{
				if ((is_radar_preference_switched_on() && !is_radar_hidden()) && !_uitutorial_get_is_threat_indicator_capable_radar_shown())
				{
					func_233(689, 0);
				}
			}
			if (!func_244(2) && !func_242(690))
			{
				if (!is_radar_preference_switched_on())
				{
					func_233(690, 0);
				}
			}
			if (!func_242(765))
			{
				if (1529685685 == Global_1940258->f_38 && func_245())
				{
					func_233(765, 0);
				}
			}
			if (!func_242(896))
			{
				if (1698907612 == Global_1940258->f_38)
				{
					func_233(896, 0);
				}
			}
			if (!func_246(7))
			{
				func_233(910, 0);
			}
			if (_unlock_is_visible(-1820411463))
			{
				if (!_unlock_is_new(-1820411463))
				{
					func_247();
					_unlock_set_new(-1820411463, true);
				}
			}
		}
	}
}

void func_81()
{
}

void func_82()
{
	if (!is_entity_dead(Global_34))
	{
		iVar0 = get_interior_from_entity(Global_34);
		if (is_valid_interior(iVar0))
		{
			if (iVar0 != Global_1940258->f_4)
			{
				Global_1940258->f_4 = iVar0;
			}
			if (func_248(iVar0) || func_249(iVar0))
			{
				Global_1940258->f_5 = 0;
			}
			else
			{
				Global_1940258->f_5 = 1;
			}
		}
		else
		{
			Global_1940258->f_5 = 0;
			if (is_valid_interior(Global_1940258->f_4))
			{
				Global_1940258->f_4 = 0;
			}
		}
	}
	func_250(0);
}

void func_83()
{
	if (func_54() != -1)
	{
		return;
	}
}

void func_84()
{
	if (func_54() == 0)
	{
		return;
	}
}

void func_85()
{
	if (func_137())
	{
		return;
	}
	if (Global_1572887->f_9)
	{
		return;
	}
	if (Global_1940258->f_6)
	{
		return;
	}
	switch (func_25())
	{
		case 3:
		case 66:
		case 87:
			_0xde2c3b74d2b3705c(941360887, 1500);
			break;
		case 5:
		case 40:
			_0xde2c3b74d2b3705c(-726720231, 1500);
			break;
		case 102:
			_0xde2c3b74d2b3705c(-1587972087, 1500);
			break;
	}
	switch (func_251())
	{
		case 9:
			_0xde2c3b74d2b3705c(-926872670, 1500);
			break;
		case 11:
			_0xde2c3b74d2b3705c(-390940855, 1500);
			break;
		case 1:
			_0xde2c3b74d2b3705c(1849496052, 1500);
			break;
		case 15:
			_0xde2c3b74d2b3705c(48057020, 1500);
			break;
		case 3:
			_0xde2c3b74d2b3705c(534967049, 1500);
			break;
		case 0:
			_0xde2c3b74d2b3705c(-348060143, 1500);
			break;
		case 4:
			_0xde2c3b74d2b3705c(266258326, 1500);
			break;
		case 6:
			_0xde2c3b74d2b3705c(-2140953922, 1500);
			break;
		case 7:
			_0xde2c3b74d2b3705c(-1133754213, 1500);
			break;
		case 10:
			_0xde2c3b74d2b3705c(2136295965, 1500);
			break;
		case 12:
			_0xde2c3b74d2b3705c(379294814, 1500);
			break;
	}
}

void func_86()
{
	if (func_54() != -1)
	{
		return;
	}
}

void func_87()
{
}

void func_88()
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (is_entity_dead(Global_34))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_252(iVar0))
		{
			if (is_entity_in_volume(Global_34, &(Global_26642[iVar0]), true, 0))
			{
				iVar1 = iVar0;
			}
			else
			{
				iVar0++;
			}
			if (iVar1 != -1)
			{
				if (Global_26642.f_12 == -1)
				{
					Global_26642.f_12 = iVar1;
				}
			}
			else if (Global_26642.f_12 != -1)
			{
				Global_26642.f_12 = -1;
			}
		}
	}
}

void func_89()
{
	if (!is_ped_injured(Global_34))
	{
		if ((is_entity_in_area(Global_34, -6726.518f, -3810.308f, -11.33721f, -6684.747f, -3794.389f, -6.22488f, false, true, 0) && is_screen_faded_in()) && is_player_control_on(player_id()))
		{
			func_253(Global_34, 0, 0);
		}
	}
}

void func_90()
{
	Global_1139381->f_4778 = (1f + func_254());
}

bool func_91(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_255(bParam1, bParam2, bParam3);
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

void func_92(bool bParam0)
{
	if (func_251() != 8)
	{
		if (!func_242(638))
		{
			if (!func_256(func_25()) && func_257(func_25()))
			{
				func_233(638, 0);
			}
		}
		else if (!func_242(639) && func_257(func_25()))
		{
			func_233(639, 0);
		}
	}
	if (!bParam0)
	{
		if (!func_258(1))
		{
			return;
		}
		if (func_54() == -1)
		{
			if (!func_259(27))
			{
				func_260(27);
			}
		}
		if (!func_242(312))
		{
			if (!func_261() && !func_262())
			{
				iVar0 = (get_game_timer() - _0x7fc667f6ddfbcdcc(player_id()));
				if (iVar0 > 2000 && iVar0 < 10000)
				{
					func_233(312, 0);
				}
			}
		}
		else if (!func_242(313))
		{
			if (func_264(func_263(), 4))
			{
				func_233(313, 0);
			}
		}
		else if (!func_242(311))
		{
			func_233(311, 0);
		}
		return;
	}
	else
	{
		if (!Global_1940258->f_7)
		{
			if (!func_242(293))
			{
				if (((Global_1940258->f_11 > 0 && !Global_1940258->f_10) && !func_261()) && !func_262())
				{
					if (func_251() == 8)
					{
						func_233(295, 0);
					}
					else
					{
						func_233(293, 0);
					}
					return;
				}
			}
			else if (!func_242(294))
			{
				if (_0x7fc667f6ddfbcdcc(player_id()) > 30000)
				{
					if (func_251() == 8)
					{
						func_233(296, 0);
					}
					else
					{
						func_233(294, 0);
					}
				}
			}
		}
		if (!func_242(299))
		{
			if (Global_1940258->f_14 == 0)
			{
				if (!func_261() && !func_262())
				{
					_0x6abc50979655bee7(player_id(), &iVar1, 1);
					if (iVar1 == 1714017012)
					{
						func_233(299, 0);
					}
				}
			}
		}
		if (Global_1940258->f_9 == 2118174520 || Global_1940258->f_9 == -251921849)
		{
			if (_0x9945a3e2528a02e8(get_player_index()))
			{
				if (!func_242(303))
				{
					func_233(303, 0);
				}
			}
		}
		if (!func_242(298))
		{
			if (!func_261() && !func_262())
			{
				if (_0xb15cd2f9932c9ab5(player_id()) > 0)
				{
					func_233(298, 0);
				}
			}
		}
		else if (func_265(298))
		{
			if (_0xb15cd2f9932c9ab5(player_id()) <= 0)
			{
				func_234(298);
			}
		}
	}
}

void func_93(int iParam0)
{
	if (!func_59(iParam0))
	{
		return;
	}
	func_197(iParam0, func_188((*Global_1835011)[iParam0]->f_1), 0, 1, 0, 0, 0);
	func_57((*Global_1835011)[iParam0]->f_1);
}

void func_94()
{
	iVar1 = Global_1904651->f_8687;
	iVar2 = iVar1 + 9;
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (iVar0 >= 961)
		{
			Global_1904651->f_8687 = 0;
			return;
		}
		Global_1904651->f_8687++;
		iVar3 = iVar0;
		if (iVar3 == -1 || iVar3 == 961)
		{
		}
		else if (Global_1904651->f_33[iVar3]->f_3[0]->f_1 != 3)
		{
		}
		else if (func_265(iVar3))
		{
		}
		else if (func_266(iVar3))
		{
		}
		else if (!func_100(iVar3, 16384))
		{
		}
		else
		{
			iVar4 = &Global_1904651->f_33[iVar3]->f_3[0];
			if (does_blip_exist(iVar4))
			{
				set_this_script_can_remove_blips_created_by_any_script(true);
				remove_blip(&iVar4);
			}
		}
		iVar0++;
	}
}

bool func_95(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_96(bool bParam0)
{
	if (func_267())
	{
		return false;
	}
	if ((!is_screen_faded_in() || is_screen_fading_in()) || is_screen_fading_out())
	{
		return false;
	}
	if (func_268(&(Global_1102219->f_4), 1, 5))
	{
		return false;
	}
	if (!bParam0)
	{
		if (!func_261())
		{
			return false;
		}
	}
	if ((Global_13 || Global_1048584) // PointerArith || func_269())
	{
		return false;
	}
	if (!func_270())
	{
		return false;
	}
	if (func_271())
	{
		return false;
	}
	if (_0xf236c84c6adfcb2f())
	{
		return false;
	}
	if (is_pause_menu_active())
	{
		return false;
	}
	if ((Global_1915715->f_20638 && Global_1915715->f_20241.f_43 == 2) && Global_1940311->f_1)
	{
		return false;
	}
	if (func_272())
	{
		return false;
	}
	return true;
}

void func_97(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_273() && bParam3)
	{
		func_274(Global_1904651->f_8683, iParam0, iParam1);
		return;
	}
	*iParam0 = 0;
	while (*iParam0 < 32)
	{
		*iParam1 = 0;
		while (*iParam1 < 31)
		{
			if (is_bit_set(Global_1904651[*iParam0], *iParam1))
			{
				if (iVar0 == iParam2)
				{
					return;
				}
				iVar0++;
			}
			*iParam1++;
		}
		*iParam0++;
	}
	*iParam0 = -1;
	*iParam1 = -1;
}

int func_98(int iParam0, int iParam1)
{
	iVar0 = iParam0 * 31;
	iVar0 = (iVar0 + iParam1);
	return iVar0;
}

bool func_99(int iParam0, int iParam1, bool bParam2)
{
	if (!is_ped_injured(Global_34))
	{
		if (_0x5407b7288d0478b7(Global_34, 0) > 0 && !func_100(iParam0, 512))
		{
			return false;
		}
	}
	if (!func_275(iParam0))
	{
		return false;
	}
	if (!func_100(iParam0, 1) && func_53(0, 0, 1))
	{
		if (!func_100(iParam0, 262144) || !bParam2)
		{
			return false;
		}
	}
	if (func_100(iParam0, 2097152))
	{
		if (!is_player_control_on(player_id()))
		{
			return false;
		}
	}
	if (!func_100(iParam0, 256))
	{
		if (func_276())
		{
			return false;
		}
	}
	if (func_100(iParam0, 32) && func_277())
	{
		return false;
	}
	if (func_100(iParam0, 16))
	{
		if (!func_278(iParam0))
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iVar1 = Global_1904651->f_33[iParam0]->f_3[iVar0]->f_1;
		if (iVar1 == 3)
		{
			if (!does_blip_exist(&(Global_1904651->f_33[iParam0]->f_3[iVar0])))
			{
				*iParam1 = 0;
				return false;
			}
		}
		iVar0++;
	}
	if (func_239() && !func_279(Global_1915715->f_20241.f_1))
	{
		if (!func_100(iParam0, 128))
		{
			return false;
		}
	}
	if (func_100(iParam0, 98304))
	{
		bVar2 = func_280(iParam0);
		if (!bVar2)
		{
			*iParam1 = 0;
			return false;
		}
	}
	return true;
}

bool func_100(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

void func_101(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

void func_102()
{
	Global_1904651->f_8683 = -1;
}

int func_103(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = 0;
		while (iVar2 < 31)
		{
			if (is_bit_set(Global_1904651[iVar1], iVar2))
			{
				if (func_98(iVar1, iVar2) == iParam0)
				{
					return iVar0;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	return -1;
}

void func_104(int iParam0)
{
	Global_1904651->f_8683 = iParam0;
}

void func_105(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 961)
	{
		return;
	}
	if (func_100(iParam0, 8))
	{
		sVar0 = "JOURNAL_WRITE";
		sVar1 = "HUD_FRONTEND_DEFAULT_SOUNDSET";
	}
	if (is_string_null_or_empty(sVar0) || is_string_null_or_empty(sVar1))
	{
		return;
	}
	play_sound_frontend(sVar0, sVar1, true, 0);
}

int func_106(int iParam0)
{
	if (func_100(iParam0, 8192))
	{
		return 10000;
	}
	else if (func_100(iParam0, 4096))
	{
		return 7000;
	}
	else if (func_100(iParam0, 2048))
	{
		return 5000;
	}
	return 0;
}

bool func_107(int iParam0)
{
	if (!_get_global_block_can_be_accessed(4))
	{
		return false;
	}
	if (!func_100(iParam0, 1048576))
	{
		return false;
	}
	if (!network_is_player_active(Global_1904651->f_8689))
	{
		return false;
	}
	return true;
}

int func_108(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		if (iParam2 == -1)
		{
			return 1475463663;
		}
		else
		{
			return 636925055;
		}
	}
	if (!network_is_game_in_progress())
	{
		return 636925055;
	}
	iVar2 = iParam0;
	if (func_281(func_181(0)) && func_182(func_181(0)) == 7)
	{
		bVar0 = true;
		iVar3 = 11;
		iVar4 = (iVar3 / 32);
		iVar5 = (iVar3 - iVar4 * 32);
		bVar1 = is_bit_set(&(Global_3145858->f_6[iVar4]), iVar5);
	}
	if (Global_1071686->f_21416.f_1[iVar2]->f_5 != 0)
	{
		return Global_1071686->f_21416.f_1[iVar2]->f_5;
	}
	if (bParam3 && Global_1071686->f_21416.f_1[iVar2]->f_6 != 0)
	{
		return Global_1071686->f_21416.f_1[iVar2]->f_6;
	}
	if (iParam0 == player_id())
	{
		if (bVar0 && bVar1)
		{
			iVar6 = func_282(iParam0);
			if (iVar6 == -1031763995 && _network_is_player_in_spectator_mode(iParam0))
			{
				return 1105014447;
			}
			else
			{
				return iVar6;
			}
		}
		else
		{
			return func_283(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_284(Global_1071686->f_21416.f_1[iVar2]->f_7, 1024))
	{
		return -508184943;
	}
	iVar7 = func_285(iParam0, 1);
	if (!bVar0)
	{
		if (func_286(iParam0, bParam1))
		{
			return func_283(iParam0);
		}
		else if (func_287(iParam0, bParam1))
		{
			if (func_288(iParam0, bParam1))
			{
				return 1891514641;
			}
			else
			{
				if (iVar7 > 5)
				{
					return -437407570;
				}
				else if (iVar7 > 3)
				{
					return -437407570;
				}
				else if (iVar7 > 1)
				{
					return 1201428499;
				}
				return 63157909;
			}
		}
	}
	else if (bVar1)
	{
		return func_282(iParam0);
	}
	else if (func_286(iParam0, bParam1))
	{
		if (player_id() == iParam0)
		{
			return 1105014447;
		}
		else if (func_289(func_58(func_181(0)), 1) == 395262693)
		{
			return func_283(iParam0);
		}
		else
		{
			return func_283(iParam0);
		}
	}
	else if (func_287(iParam0, bParam1))
	{
		return 1891514641;
	}
	return 830499243;
}

char* func_109(char* sParam0, int iParam1)
{
	sParam0 = _format_player_name_string(sParam0);
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_290(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

var func_110(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_111(int iParam0)
{
	if (!_get_global_block_can_be_accessed(4))
	{
		return false;
	}
	if (!func_100(iParam0, 4194304))
	{
		return false;
	}
	if (!network_is_player_active(Global_1904651->f_8690))
	{
		return false;
	}
	return true;
}

int func_112(char* sParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_291(Global_1904651->f_8690, &uVar0))
	{
		if (!func_100(iParam1, 1024))
		{
			return func_110(_create_var_string(8, sParam0, &uVar0), iParam2, 0, 0, uParam3, 1);
		}
		else
		{
			sVar8 = &Global_1904651->f_33[iParam1]->f_3[0];
			iVar9 = Global_1904651->f_33[iParam1]->f_3[0]->f_1;
			switch (iVar9)
			{
				case 1:
					return func_110(_create_var_string(8, sParam0, &uVar0, sVar8), iParam2, 0, 0, uParam3, 1);
				case 2:
					return func_110(_create_var_string(40, sParam0, &uVar0, _create_var_string(0, sVar8)), iParam2, 0, 0, uParam3, 1);
				case 3:
					if (does_blip_exist(sVar8))
					{
						Global_1904651->f_8688 = sVar8;
						return func_110(_create_var_string(8, sParam0, &uVar0, sVar8), iParam2, 0, 0, uParam3, 1);
					}
					break;
			}
		}
	}
	return 0;
}

int func_113(char* sParam0, int iParam1, int iParam2, var uParam3)
{
	iVar0 = &Global_1904651->f_33[iParam1]->f_3[0];
	sVar1 = &Global_1904651->f_33[iParam1]->f_3[1];
	iVar2 = Global_1904651->f_33[iParam1]->f_3[0]->f_1;
	iVar3 = Global_1904651->f_33[iParam1]->f_3[1]->f_1;
	if (6 == iVar2)
	{
		iVar0 = func_292(1);
		iVar2 = 2;
	}
	if (iVar3 != 0)
	{
		switch (iVar3)
		{
			case 1:
			case 3:
				switch (iVar2)
				{
					case 1:
						return func_110(_create_var_string(0, sParam0, iVar0, sVar1), iParam2, 0, 0, uParam3, 1);
					case 3:
						if (does_blip_exist(iVar0))
						{
							Global_1904651->f_8688 = iVar0;
							return func_110(_create_var_string(0, sParam0, iVar0, sVar1), iParam2, 0, 0, uParam3, 1);
						}
						break;
					case 2:
						return func_110(_create_var_string(8, sParam0, _create_var_string(0, iVar0), sVar1), iParam2, 0, 0, uParam3, 1);
				}
				break;
			case 2:
				switch (iVar2)
				{
					case 1:
						return func_110(_create_var_string(32, sParam0, iVar0, _create_var_string(0, sVar1)), iParam2, 0, 0, uParam3, 1);
					case 3:
						if (does_blip_exist(iVar0))
						{
							Global_1904651->f_8688 = iVar0;
							return func_110(_create_var_string(32, sParam0, iVar0, _create_var_string(0, sVar1)), iParam2, 0, 0, uParam3, 1);
						}
						break;
					case 2:
						return func_110(_create_var_string(40, sParam0, _create_var_string(0, iVar0), _create_var_string(0, sVar1)), iParam2, 0, 0, uParam3, 1);
				}
				break;
			case 4:
				return func_110(_create_var_string(0, sParam0), iParam2, 0, 0, uParam3, 1);
		}
	}
	else
	{
		switch (iVar2)
		{
			case 1:
				return func_110(_create_var_string(0, sParam0, iVar0), iParam2, 0, 0, uParam3, 1);
			case 5:
				return func_110(_create_var_string(0, iVar0), iParam2, 0, 0, uParam3, 1);
			case 2:
				return func_110(_create_var_string(8, sParam0, _create_var_string(0, iVar0)), iParam2, 0, 0, uParam3, 1);
			case 3:
				if (does_blip_exist(iVar0))
				{
					Global_1904651->f_8688 = iVar0;
					return func_110(_create_var_string(0, sParam0, iVar0), iParam2, 0, 0, uParam3, 1);
				}
				break;
		}
	}
	return 0;
}

bool func_114(int iParam0)
{
	return Global_1904651->f_33[iParam0]->f_8 != -1;
}

int func_115(int iParam0)
{
	return Global_1904651->f_33[iParam0]->f_8;
}

bool func_116(int iParam0)
{
	iVar0 = Global_1904651->f_33[iParam0]->f_3[0]->f_1;
	if (6 == iVar0)
	{
		return func_292(0) != 0;
	}
	return false;
}

void func_117(int iParam0, int iParam1)
{
	uVar0 = &Global_17411.f_2565[*iParam0];
	set_bit(&uVar0, *iParam1);
	Global_17411.f_2565[*iParam0] = uVar0;
}

void func_118(int iParam0, int iParam1)
{
	Global_1904651->f_33[iParam0]->f_2 = (Global_1904651->f_33[iParam0]->f_2 || iParam1);
}

bool func_119()
{
	if (Global_1951255->f_1381 & 2 != 0)
	{
		return false;
	}
	if (Global_13)
	{
		return false;
	}
	if (network_is_in_session())
	{
		if (!func_235(255))
		{
			return false;
		}
		if (network_is_in_mp_cutscene())
		{
			return false;
		}
	}
	else
	{
		if (!does_entity_exist(Global_34))
		{
			return false;
		}
		if (Global_1940258->f_6)
		{
			return false;
		}
	}
	return true;
}

void func_120()
{
	iVar0 = 0;
	while (iVar0 < &Global_1951255)
	{
		fVar1 = 0f;
		vVar2 = { 0f, 0f, 0f };
		if (func_293(iVar0))
		{
			if (func_294(iVar0, &fVar1, &vVar2))
			{
				func_295(iVar0);
			}
		}
		iVar0++;
	}
}

void func_121()
{
	if (Global_1915692->f_21 == 0)
	{
		return;
	}
	if (Global_1940311->f_1 || Global_1915715->f_20637)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Global_1915692[iVar1] != 0)
		{
			iVar2 = func_296(Global_1915692[iVar1]);
			if ((func_298(func_297(Global_1915692[iVar1])) && func_299(Global_1915692[iVar1], -306684263)) && iVar2 != 0)
			{
				iVar2 = func_300(Global_1915692[iVar1]);
			}
			if ((*Global_1915692)[iVar1]->f_1 > 0)
			{
				if ((*Global_1915692)[iVar1]->f_1 > 1)
				{
					func_301(_create_var_string(2, "ITEM_GET_MULT", iVar2, (*Global_1915692)[iVar1]->f_1), -2, 0, 0, 0, 1);
				}
				else
				{
					func_301(_create_var_string(10, "ITEM_GET", _create_var_string(0, iVar2)), -2, 0, 0, 0, 1);
				}
				if (!bVar0)
				{
					play_sound_frontend("ITEM_TICKER_GENERIC", "HUD_REWARD_SOUNDSET", true, 0);
					bVar0 = true;
				}
			}
			else
			{
				if ((*Global_1915692)[iVar1]->f_3)
				{
					StringCopy(&cVar3, "ITEM_SELL", 32);
				}
				else if ((*Global_1915692)[iVar1]->f_4)
				{
					StringCopy(&cVar3, "ITEM_GIVEN", 32);
				}
				else if (func_302(Global_1915692[iVar1], 2097152))
				{
					StringCopy(&cVar3, func_303((*Global_1915692)[iVar1]->f_2, "ITEM_READ", "ITEM_LOST"), 32);
				}
				else
				{
					StringCopy(&cVar3, func_303((*Global_1915692)[iVar1]->f_2, "ITEM_USED", "ITEM_LOST"), 32);
				}
				if ((*Global_1915692)[iVar1]->f_1 < -1)
				{
					StringConCat(&cVar3, "_MULT", 32);
					func_301(_create_var_string(10, &cVar3, _create_var_string(0, iVar2), absi((*Global_1915692)[iVar1]->f_1)), -2, 0, 0, 0, 1);
				}
				else
				{
					func_301(_create_var_string(10, &cVar3, _create_var_string(0, iVar2)), -2, 0, 0, 0, 1);
				}
			}
			(*Global_1915692)[iVar1] = 0;
			(*Global_1915692)[iVar1]->f_1 = 0;
			(*Global_1915692)[iVar1]->f_2 = 0;
			Global_1915692->f_21 = (Global_1915692->f_21 - 1);
			return;
		}
		iVar1++;
	}
}

bool func_122()
{
	if ((((!does_entity_exist(Global_34) || func_304(Global_34, 0)) || (func_305(Global_34) && is_ped_active_in_scenario(Global_34, 0))) || (_is_ped_using_scenario_hash(Global_34, -1054012177) && is_ped_active_in_scenario(Global_34, 0))) || !func_132())
	{
		return true;
	}
	return false;
}

void func_123(bool bParam0)
{
	if (bParam0)
	{
		Global_1940085->f_9 = 0f;
	}
	Global_1940085->f_8 = 0f;
	Global_1940085->f_15.f_1 = 0f;
	Global_1940085->f_15 = 0f;
	Global_1940085->f_15.f_9 = 0f;
	Global_1940085->f_15.f_8 = 0f;
	Global_1940085->f_15.f_10 = 0;
	if (does_entity_exist(Global_34))
	{
		_0x06d26a96ca1bca75(Global_34, 10, 0f, 0);
		set_ped_is_drunk(Global_34, false);
		_0x406ccf555b04fad3(Global_34, 0, 0f);
	}
	func_306(0f);
	if (does_entity_exist(Global_34))
	{
		set_ped_config_flag(Global_34, 26, false);
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_307();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

float func_124()
{
	return 0.5f;
}

void func_125()
{
	if (Global_1940085->f_14)
	{
		sVar0 = func_308(0);
		if (!animpostfx_is_running(sVar0))
		{
			animpostfx_play(sVar0);
		}
	}
}

void func_126()
{
	if (Global_1940085->f_14)
	{
		Global_1940085->f_4 = (get_game_timer() + 180000);
	}
	else
	{
		Global_1940085->f_4 = (get_game_timer() + 90000);
	}
}

float func_127()
{
	return 0.75f;
}

bool func_128(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return _is_ped_getting_into_a_mount_seat(iParam0, true);
	}
	return false;
}

bool func_129()
{
	if (((is_ped_in_any_vehicle(Global_34, true) || func_309(Global_34)) || Global_1940085->f_28.f_2) || func_311(func_310(), 0, 0))
	{
		return false;
	}
	return true;
}

void func_130(int iParam0)
{
	if (iParam0 >= &Global_1940085)
	{
		return;
	}
	Global_1940085->f_1 = iParam0;
}

void func_131()
{
	if (func_54() == 0 && !_0x50f124e6ef188b22(Global_34))
	{
		set_ped_is_drunk(Global_34, true);
	}
	fVar0 = ((Global_1940085->f_15.f_1 * 200f) - 100f);
	func_306(fVar0);
	if (!Global_1940085->f_15.f_10)
	{
		if (&Global_1940085 == 2)
		{
			Global_1940085->f_15.f_10 = 1;
		}
	}
	else if (&Global_1940085 != 2)
	{
		Global_1940085->f_15.f_10 = 0;
	}
}

bool func_132()
{
	if (func_312())
	{
		return false;
	}
	return true;
}

bool func_133()
{
	if (Global_1940085->f_14)
	{
		return false;
	}
	if (Global_1940085->f_28.f_1)
	{
		return true;
	}
	if (Global_1940085->f_9 >= 1f && func_129())
	{
		func_313();
		return true;
	}
	return false;
}

void func_134()
{
	if (!does_entity_exist(Global_34) || is_entity_dead(Global_34))
	{
		func_123(1);
		func_314();
	}
	vVar2 = { 1f, 1f, 1f };
	switch (Global_1940085->f_28.f_8)
	{
		case 0:
			set_ped_config_flag(Global_34, 26, true);
			func_315(1);
			Global_1940085->f_28.f_3 = 0;
			break;
		case 1:
			if (!Global_1940085->f_28.f_3)
			{
				request_anim_dict(func_316());
				Global_1940085->f_28.f_3 = 1;
			}
			if (has_anim_dict_loaded(func_316()))
			{
				func_315(2);
			}
			break;
		case 2:
			do_screen_fade_out(5000);
			Global_1940085->f_28.f_4 = get_game_timer();
			if (_is_ped_carrying(Global_34))
			{
				func_315(3);
			}
			else
			{
				func_315(4);
			}
			break;
		case 3:
			if (is_screen_faded_out())
			{
				iVar1 = _get_first_entity_ped_is_carrying(Global_34);
				task_place_carried_entity_at_coord(Global_34, iVar1, Global_35 + vVar2, 2f, 0);
				func_315(5);
			}
			break;
		case 4:
			if (is_ped_walking(Global_34) || is_ped_running(Global_34))
			{
				bVar0 = true;
			}
			if (func_317(Global_34))
			{
				bVar0 = false;
			}
			if (is_ped_using_any_scenario(Global_34) && _get_scenario_point_type_ped_is_using(Global_34) == -1241981548)
			{
				bVar0 = false;
			}
			if (Global_1940085->f_28.f_4 > 8000)
			{
				if (bVar0 && !Global_1940085->f_28)
				{
					task_play_anim(Global_34, func_316(), func_318(), 4f, -2f, 5000, 0, 0f, false, 0, false, 0, false);
					Global_1940085->f_28 = 1;
				}
				if (Global_1940085->f_28.f_3)
				{
					remove_anim_dict(func_316());
					Global_1940085->f_28.f_3 = 0;
				}
				func_315(5);
			}
			break;
		case 5:
			if (is_screen_faded_out() && !_is_ped_carrying(Global_34))
			{
				clear_ped_tasks_immediately(Global_34, false, true);
				_0x94a3c1b804d291ec(Global_34, 0, 0, 0, 1);
				set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
				_0x9587913b9e772d29(Global_34, 0);
				if (!is_entity_dead(Global_34))
				{
					func_319(Global_34, 357427886, 1, 1);
				}
			}
			break;
		case 6:
			if (!is_screen_fading_in())
			{
				do_screen_fade_in(5000);
			}
			func_123(1);
			func_314();
			break;
	}
}

bool func_135(bool bParam0)
{
	if (!bParam0)
	{
		if (_0xcf45df50c7775f2a())
		{
			return false;
		}
		if (func_320())
		{
			return false;
		}
	}
	switch (&Global_1939655)
	{
		case 0:
			func_321(666617953);
			func_321(1733948592);
			func_321(1700234797);
			func_321(1305074360);
			func_321(-436566493);
			func_321(-1995815064);
			func_321(-483649675);
			func_321(212587871);
			func_321(2029194243);
			func_321(1190076410);
			func_321(-688011628);
			func_321(-787042507);
			func_321(-15009406);
			func_321(1191283411);
			func_321(507232138);
			func_321(-604091710);
			func_321(-753454183);
			func_321(495423143);
			func_321(-2131576785);
			func_321(-2137016051);
			func_321(1193151399);
			func_321(-1353871107);
			func_321(2026630914);
			func_321(-225844616);
			func_322(228);
			_0x6c3f12eceb6d2e2a(-1176.011f, -32.44423f, 38f, -1186.829f, -18.19722f, 45f, 6, 1);
			_0x6c3f12eceb6d2e2a(-1177.246f, -19.60884f, 38f, -1170.786f, -12.71267f, 42f, 6, 1);
			_0x6c3f12eceb6d2e2a(-1174.544f, -4.74933f, 38f, -1163.424f, -13.43965f, 42f, 6, 1);
			func_323();
			func_324();
			func_325();
			return false;
		case 1:
			func_326();
			func_325();
			return false;
		case 2:
			func_327();
			func_325();
			return false;
		case 3:
			break;
	}
	if (!func_328(514932331))
	{
		func_321(1892122519);
	}
	if (_unlock_is_unlocked(-1513415814))
	{
		func_321(2107567819);
		func_321(1108015391);
		func_321(-1202265833);
		func_321(-1852256117);
	}
	if (func_329(Global_1939655->f_27, 1))
	{
		func_330(5, 2);
		func_330(1, 2);
		func_331(&(Global_1939655->f_27), 1);
	}
	if (func_328(269047710))
	{
		func_332(382484708);
		func_321(-910880980);
	}
	else
	{
		func_332(-910880980);
		func_321(382484708);
	}
	set_scenario_group_enabled("TAX_NOTICE", false);
	set_scenario_group_enabled("TAX_MARITAL", false);
	set_scenario_group_enabled("RARE_ORCHIDS_APPLESEED", false);
	func_333(203);
	func_322(202);
	func_334(273461605, 84, 2, 4096);
	func_334(-868076593, 9, 32, 4096);
	func_334(1205826474, 38, 64, 4096);
	if (func_328(373691918) && func_251() == 8)
	{
		if (_get_world_water_type() != 1)
		{
			_set_world_water_type(1);
		}
		if (!Global_26640)
		{
			_set_guarma_worldhorizon_active(true);
			_0xa657ec9dbc6cc900(1935063277);
			set_minimap_hide_fow(true);
			_set_fow_update_player_override(false, 0);
		}
		Global_26640 = 1;
	}
	else
	{
		if (_get_world_water_type() != 0)
		{
			_set_world_water_type(0);
		}
		if (Global_26640)
		{
			_set_guarma_worldhorizon_active(false);
			_0xa657ec9dbc6cc900(-1868977180);
			set_minimap_hide_fow(false);
			_set_fow_update_player_override(true, 0);
		}
		Global_26640 = 0;
	}
	func_332(-1786365097);
	func_333(176);
	if (!func_328(1399676951))
	{
		func_332(1934919499);
		func_332(993595204);
		func_332(-515396642);
		func_332(1291083725);
		func_332(2137790641);
		func_321(2137790641);
		func_322(192);
	}
	func_322(197);
	func_321(376665102);
	if (func_54() == -1)
	{
		func_335(794, 32);
		func_336(794, 0);
	}
	func_337();
	func_321(1149195254);
	func_321(2016081133);
	func_321(363257921);
	func_321(58066174);
	func_321(-1521525254);
	func_321(-761186147);
	func_321(-1872939092);
	func_321(-964156415);
	func_338(0);
	set_scenario_group_enabled("BRA_MANOR_UNTIL_BRAITHWAITES_3", true);
	_set_scenario_group_enabled_hash(-842138123, false);
	_set_scenario_group_enabled_hash(-1230241088, true);
	set_ambient_zone_state_persistent("AZ_braithwaite_manor_burnt", false, true);
	func_339(-434746250, 1);
	if (func_328(-699277634))
	{
		func_321(-2137633069);
		func_322(119);
		func_322(121);
		func_322(123);
		if (func_54() == -1)
		{
			func_73(99, 16);
			func_340(99);
		}
		if (!_0x91a5f9cbebb9d936(Global_1939655->f_1))
		{
			Global_1939655->f_1 = add_scenario_blocking_area(989.8797f, -1787.977f, 44.5697f, 1034.25f, -1752.225f, 59.7424f, 0, 15);
		}
	}
	else
	{
		func_321(1944013855);
		func_322(118);
		func_322(120);
		func_322(122);
		func_70(99, 16);
		if (_0x91a5f9cbebb9d936(Global_1939655->f_1))
		{
			remove_scenario_blocking_area(Global_1939655->f_1, false);
			Global_1939655->f_1 = 0;
		}
	}
	func_321(1355914142);
	if (!_does_volume_exist(Global_1939655->f_23))
	{
		Global_1939655->f_23 = _create_volume_cylinder(2846.517f, -1300.918f, 45.457f, 0f, 0f, -42f, 4.584f, 3.041f, 10.079f);
		_0x19c7567d2f2287d6(Global_1939655->f_23, 7);
	}
	func_332(706203603);
	func_321(937192284);
	func_332(-1052023588);
	func_332(-745087561);
	func_341("old_nav_wall_hole");
	func_341("old_nav_nts3_start");
	func_341("old_nav_nts3_end");
	func_321(944314155);
	func_342("old_nav_wall_fill");
	func_332(-1081335485);
	func_332(-920505696);
	func_332(281772765);
	func_333(133);
	func_333(134);
	func_333(135);
	func_333(136);
	func_341("nav_std_bank_start");
	func_341("nav_std_bank_shootout");
	func_341("nav_std_bank_dest");
	func_322(132);
	func_321(1017355491);
	if (func_328(1908151693))
	{
		func_322(138);
		func_322(137);
	}
	else if (func_328(-764163380))
	{
		func_333(138);
		func_322(137);
	}
	else
	{
		func_333(137);
		func_322(138);
	}
	func_332(140744122);
	func_332(-1795618779);
	func_341("hso_post_caravan");
	func_332(1691578074);
	func_332(-1936937394);
	func_341("dewclm_post_caravan");
	func_332(-1130111983);
	func_332(-1015786727);
	func_332(560821199);
	func_332(-313831898);
	func_332(634920011);
	func_321(1694736240);
	func_321(2035758463);
	func_332(419559004);
	func_332(1786931635);
	func_332(557212279);
	func_332(1426715569);
	func_332(2097480406);
	func_341("cal_nav_tabacco_burnt");
	func_341("cal_nav_tabacco_burning");
	func_341("cal_nav_tabacco_mission");
	func_321(702350293);
	func_321(-677977650);
	func_321(26815048);
	func_321(-1229109520);
	func_342("cal_nav_tabacco_clean");
	func_321(474287981);
	func_321(-338553155);
	func_321(-1636879249);
	func_321(205214733);
	func_332(-1019727725);
	func_322(185);
	set_mapdatacullbox_enabled("Main_World", true);
	set_scenario_group_enabled("ADL_LEVDES", true);
	func_342("col_nav_adler_house");
	func_343(-1170496998);
	set_mapdatacullbox_enabled("Win_Intro", false);
	func_332(-1306375743);
	func_332(-743781837);
	func_332(2114706334);
	if (_does_volume_exist(Global_1939655->f_22))
	{
		_0x2c87c3e1c7b96ee2(Global_1939655->f_22);
		_delete_volume(Global_1939655->f_22);
	}
	func_333(147);
	func_333(148);
	func_333(149);
	func_333(150);
	func_344();
	func_332(-1055748784);
	func_333(145);
	func_322(146);
	if (does_scenario_group_exist("BVH_GANG_hideout"))
	{
		set_scenario_group_enabled("BVH_GANG_hideout", true);
	}
	func_321(-2014929982);
	func_332(-1070054959);
	func_321(809554858);
	func_321(1810083187);
	func_332(159921796);
	func_332(-1739900853);
	func_321(2113454609);
	func_321(-520163372);
	func_332(-90228526);
	func_333(15);
	func_333(2);
	func_333(4);
	func_322(1);
	func_322(5);
	func_345(931206119, 1, 0, 0, 0, 0, 0, 0);
	func_345(1783003505, 1, 0, 0, 0, 0, 0, 0);
	func_341("shb_nav_camp_running");
	func_341("shb_nav_camp_teardown");
	if (func_328(1466547629))
	{
		func_321(1265596420);
		func_341("shb_nav_camp_00");
		func_342("shb_nav_camp_01");
	}
	else
	{
		func_332(1265596420);
		func_341("shb_nav_camp_01");
		func_342("shb_nav_camp_00");
	}
	if (does_scenario_group_exist("SHB_HIDEOUT_CONFEDERATES"))
	{
		set_scenario_group_enabled("SHB_HIDEOUT_CONFEDERATES", true);
	}
	if (does_scenario_group_exist("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT"))
	{
		set_scenario_group_enabled("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT", false);
	}
	func_332(-833857740);
	func_332(-825836321);
	func_332(-1718055184);
	func_341("han_nav_endless_summer");
	func_341("han_nav_endless_summer_marston4");
	func_321(1929440211);
	if (func_328(-1344601768))
	{
		func_321(728379187);
		func_333(177);
		func_342("MS_HIDOUT_HANGINGDOG");
	}
	else
	{
		func_332(728379187);
		func_322(177);
		func_341("MS_HIDOUT_HANGINGDOG");
	}
	func_333(162);
	func_341("bvh_nav_endless_summer");
	func_333(18);
	func_346(1817635528);
	func_333(19);
	func_333(21);
	func_322(20);
	func_322(22);
	if (func_328(-1014145132))
	{
		func_322(199);
	}
	else
	{
		func_333(199);
	}
	func_333(200);
	func_347();
	func_321(1343484786);
	func_321(-1671953459);
	func_321(1871051363);
	func_321(-2144587490);
	if (!does_navmesh_blocking_object_exist(Global_1939655->f_18))
	{
		Global_1939655->f_18 = add_navmesh_blocking_object(1348.215f, -1373.448f, 79.697f, 0.8f, 0.9f, 2f, func_348(35f), false, 7);
	}
	func_332(1882605165);
	func_321(869642051);
	func_321(-184821200);
	func_332(-490818122);
	func_332(1412515639);
	func_332(-1377139506);
	func_333(129);
	func_322(128);
	if (does_navmesh_blocking_object_exist(Global_1939655->f_17))
	{
		remove_navmesh_blocking_object(&(Global_1939655->f_17));
	}
	func_333(131);
	func_322(130);
	func_332(1603294144);
	func_321(349486662);
	func_333(142);
	func_322(141);
	func_332(897455211);
	func_332(774477221);
	func_321(1136898294);
	func_321(1097534152);
	func_333(144);
	func_322(143);
	if (func_328(-1799960545))
	{
		func_333(168);
		func_322(167);
	}
	else
	{
		func_333(167);
		func_322(168);
	}
	if (func_328(-628542779))
	{
		func_322(179);
	}
	else
	{
		func_333(179);
	}
	func_321(724436573);
	func_332(-1475403379);
	if (func_328(-1741667789))
	{
		func_333(178);
	}
	else
	{
		func_322(178);
	}
	if (func_328(-334729750))
	{
		func_321(1138093977);
		func_342("wat_nav_grave");
	}
	else
	{
		func_332(1138093977);
		func_341("wat_nav_grave");
	}
	func_332(1849913721);
	func_332(573576705);
	func_332(-848315456);
	func_332(105426297);
	func_332(2095421392);
	func_332(-1614141377);
	func_332(45121961);
	func_332(-7594117);
	func_332(1388161943);
	func_321(-642132908);
	_0xafe2ae66f6251c66(-1177.246f, -19.60884f, 38f, -1170.786f, -12.71267f, 42f, 6, 0);
	if (does_navmesh_blocking_object_exist(&(Global_1939655->f_5[0])))
	{
		remove_navmesh_blocking_object(Global_1939655->f_5[0]);
	}
	if (!does_navmesh_blocking_object_exist(&(Global_1939655->f_5[0])))
	{
		Global_1939655->f_5[0] = add_navmesh_blocking_object(-1182.66f, -30.405f, 44.453f, 1f, 1f, 6f, 0f, false, 7);
	}
	if (does_navmesh_blocking_object_exist(&(Global_1939655->f_5[1])))
	{
		remove_navmesh_blocking_object(Global_1939655->f_5[1]);
	}
	if (does_navmesh_blocking_object_exist(&(Global_1939655->f_5[2])))
	{
		remove_navmesh_blocking_object(Global_1939655->f_5[2]);
	}
	if (does_navmesh_blocking_object_exist(&(Global_1939655->f_5[3])))
	{
		remove_navmesh_blocking_object(Global_1939655->f_5[3]);
	}
	func_341("utp2_nav_tree_fallen");
	func_332(23211744);
	func_332(604668055);
	func_332(1708195603);
	func_321(1324480450);
	func_321(1672215059);
	func_321(-1177027698);
	func_341("nts2_fallen_tree_ridge");
	func_332(1924458218);
	func_341("utp1_bridge_cover");
	func_332(1299817544);
	func_332(1204787444);
	func_332(66523468);
	func_332(2040259178);
	func_341("str_nav_construction_stage_1");
	func_341("str_nav_construction_stage_2");
	func_341("str_nav_construction_stage_3");
	func_321(-1403908542);
	func_321(1598834669);
	func_342("str_nav_construction_stage_0");
	if (func_54() == -1)
	{
		_0x187d65f3aec5d679(-1066735787, "Strawberry/Str_Wood_Chop_Wife");
	}
	set_scenario_group_enabled("STR_CONSTRUCTION_HOUSE_INACTIVE", true);
	set_scenario_group_enabled("STR_CONSTRUCTION_HOUSE_ACTIVE", false);
	func_332(73781828);
	func_332(1139876579);
	func_321(-391567710);
	func_322(166);
	func_321(-1473336090);
	func_321(-1013403664);
	func_332(-205116461);
	func_332(-1490034522);
	func_333(152);
	func_333(153);
	func_333(155);
	func_333(154);
	func_333(157);
	func_322(156);
	if (!does_navmesh_blocking_object_exist(Global_1939655->f_20))
	{
		Global_1939655->f_20 = add_navmesh_blocking_object(2698.198f, -1187.154f, 51.26f, 3.878f, 0.326f, 3.352f, func_348(-179f), false, 7);
	}
	func_332(204868257);
	func_321(432272547);
	func_341("nav_sdn_fundraiser");
	func_332(-1225383143);
	func_321(206289712);
	func_332(-836433697);
	func_332(619024057);
	func_321(-473077489);
	func_349(586229709, 1);
	func_332(-704461521);
	func_321(1821956151);
	if (func_328(26054262))
	{
		func_322(164);
	}
	else
	{
		func_333(164);
	}
	func_333(165);
	if (func_328(945612176))
	{
		func_322(159);
		func_322(161);
		func_333(158);
		func_333(160);
	}
	else
	{
		func_322(158);
		func_322(160);
		func_333(159);
		func_333(161);
	}
	func_333(139);
	func_333(140);
	func_332(-1499162505);
	func_332(1916362667);
	func_332(-1832103801);
	func_333(229);
	func_341("fin2_micah_hideout");
	func_341("fin2_micah_hideout_abandon");
	func_332(-1436188587);
	func_333(190);
	func_321(-468702164);
	func_322(191);
	if (func_328(-75024673))
	{
		func_321(1573766063);
	}
	else
	{
		func_332(1573766063);
	}
	if (func_328(1250636944))
	{
		func_321(-892659042);
	}
	else
	{
		func_332(-892659042);
	}
	if (func_328(-1831552326))
	{
		func_322(193);
		func_333(194);
	}
	else
	{
		func_322(194);
		func_333(193);
	}
	if (func_328(-1151084372))
	{
		func_322(195);
	}
	else
	{
		func_333(195);
	}
	func_322(16);
	func_333(17);
	func_333(174);
	func_333(175);
	func_332(943998860);
	func_332(1949854427);
	func_332(580700069);
	func_332(1347068672);
	func_341("HKK_Trashed_Wagons");
	func_341("HKK_Part_Fixed");
	func_341("HKK_Camp_Only");
	_0xdd0bc0edcb2162f6(1949854427);
	func_332(2015532863);
	func_332(-741366935);
	func_321(-800942395);
	func_332(-1579403437);
	if (does_navmesh_blocking_object_exist(Global_1939655->f_10))
	{
		remove_navmesh_blocking_object(&(Global_1939655->f_10));
	}
	if (func_328(1607768502))
	{
		func_321(808576710);
		func_332(-775951892);
		func_332(1547403545);
		func_332(1431947993);
		func_332(137316925);
		func_332(-660075384);
	}
	else if (func_328(-1852605133))
	{
		func_321(1547403545);
		func_332(-775951892);
		func_332(808576710);
		func_332(1431947993);
		func_332(137316925);
		func_332(-660075384);
	}
	else if (func_328(-129643890))
	{
		func_321(-660075384);
		func_332(-775951892);
		func_332(1547403545);
		func_332(808576710);
		func_332(1431947993);
		func_332(137316925);
	}
	else if (func_328(-1433686245))
	{
		func_321(137316925);
		func_332(-775951892);
		func_332(1547403545);
		func_332(808576710);
		func_332(1431947993);
		func_332(-660075384);
	}
	else
	{
		func_321(-775951892);
		func_332(1547403545);
		func_332(808576710);
		func_332(1431947993);
		func_332(137316925);
		func_332(-660075384);
	}
	if (func_328(192515737))
	{
		func_321(1104143966);
		func_332(-2142987163);
		func_332(1027093524);
		func_332(1879779330);
		func_332(-1617847332);
		func_332(317070801);
	}
	else if (func_328(426191476))
	{
		func_321(-2142987163);
		func_332(1104143966);
		func_332(1027093524);
		func_332(1879779330);
		func_332(-1617847332);
		func_332(317070801);
	}
	else if (func_328(187862543))
	{
		func_321(1027093524);
		func_332(1104143966);
		func_332(-2142987163);
		func_332(1879779330);
		func_332(-1617847332);
		func_332(317070801);
	}
	else if (func_328(417081698))
	{
		func_321(1879779330);
		func_332(1104143966);
		func_332(-2142987163);
		func_332(1027093524);
		func_332(-1617847332);
		func_332(317070801);
	}
	else if (func_328(791041526))
	{
		func_321(-1617847332);
		func_332(1104143966);
		func_332(-2142987163);
		func_332(1027093524);
		func_332(1879779330);
		func_332(317070801);
	}
	else
	{
		func_321(317070801);
		func_332(1104143966);
		func_332(-2142987163);
		func_332(1027093524);
		func_332(1879779330);
		func_332(-1617847332);
	}
	if (func_328(-1257057567))
	{
		func_321(1088045886);
		func_332(-1678761663);
		func_332(1724413302);
		func_332(-626641013);
		func_332(535384482);
		func_332(-771786794);
		func_332(-1267247536);
		func_332(-468635897);
	}
	else if (func_328(-1419919497))
	{
		func_321(-1678761663);
		func_332(1724413302);
		func_332(-626641013);
		func_332(535384482);
		func_332(1088045886);
		func_332(-771786794);
		func_332(-1267247536);
		func_332(-468635897);
	}
	else if (func_328(-1718674470))
	{
		func_321(1724413302);
		func_332(-626641013);
		func_332(535384482);
		func_332(1088045886);
		func_332(-1678761663);
		func_332(-771786794);
		func_332(-1267247536);
		func_332(-468635897);
	}
	else if (func_328(-35658630))
	{
		func_321(-626641013);
		func_332(535384482);
		func_332(1088045886);
		func_332(-1678761663);
		func_332(1724413302);
		func_332(-771786794);
		func_332(-1267247536);
		func_332(-468635897);
	}
	else
	{
		func_321(535384482);
		func_332(1088045886);
		func_332(-1678761663);
		func_332(1724413302);
		func_332(-626641013);
		func_332(-771786794);
		func_332(-1267247536);
		func_332(-468635897);
	}
	func_332(-531198053);
	func_332(874022542);
	func_332(552030279);
	func_332(-2105071972);
	func_332(-1121783372);
	func_332(1527084472);
	func_332(1635537886);
	func_332(-205505701);
	func_332(-51262018);
	func_342("disco_nav_alchemist_house_off");
	func_332(-791673850);
	func_332(-395621323);
	func_332(-1799943886);
	func_332(-1436313374);
	func_332(1473078398);
	func_332(-953275122);
	func_332(-893624314);
	func_321(-2116659774);
	func_332(1193359531);
	func_332(1145227353);
	func_332(1915867459);
	func_332(98482444);
	func_332(26932594);
	func_332(-1930879809);
	func_332(46370274);
	func_332(-1279036865);
	func_332(781058494);
	func_332(1467466015);
	func_332(-363626454);
	func_332(-531198053);
	func_332(-1314125880);
	func_332(1763246099);
	func_332(-340622004);
	func_332(510716616);
	func_332(1464851585);
	func_321(-340622004);
	func_332(510716616);
	func_332(1464851585);
	func_332(1763246099);
	func_332(-593457329);
	func_332(274045919);
	func_332(-1047394327);
	func_332(-1535282356);
	func_332(-1816233372);
	func_332(-551038153);
	func_332(-1022426685);
	func_332(-262759679);
	func_332(976641588);
	func_332(1601053042);
	func_332(-1233192626);
	func_321(453346329);
	func_332(1262164851);
	func_321(375693548);
	func_332(-755250900);
	func_332(658964321);
	if (does_navmesh_blocking_object_exist(Global_1939655->f_19))
	{
		remove_navmesh_blocking_object(&(Global_1939655->f_19));
	}
	func_333(201);
	if (func_328(1015669983))
	{
		func_332(317070801);
		func_321(-763477089);
	}
	else
	{
		func_332(-763477089);
		func_321(317070801);
	}
	func_333(172);
	func_322(173);
	func_322(196);
	func_322(171);
	func_333(169);
	func_333(170);
	func_332(-1280884206);
	func_332(-1640200357);
	func_321(1886602884);
	func_332(-1902184438);
	func_332(-451832572);
	func_332(1236921921);
	func_332(325677491);
	func_332(740012805);
	func_332(-1349539327);
	func_321(-2127665186);
	func_321(-689352221);
	func_321(1854980771);
	func_321(-391187090);
	func_321(1513363974);
	func_321(1963724330);
	func_332(-960136064);
	func_321(-1366431554);
	func_332(-518004776);
	func_321(-2122914678);
	func_332(1210820782);
	if (does_navmesh_blocking_object_exist(Global_1939655->f_3))
	{
		remove_navmesh_blocking_object(&(Global_1939655->f_3));
	}
	func_332(-520400509);
	if (does_navmesh_blocking_object_exist(Global_1939655->f_4))
	{
		remove_navmesh_blocking_object(&(Global_1939655->f_4));
	}
	func_332(-1132206051);
	_0xdd0bc0edcb2162f6(-1132206051);
	func_332(1423681694);
	func_332(-602816690);
	func_332(1271713904);
	func_332(1031662866);
	func_332(-1041976064);
	func_332(1983816160);
	func_332(1221694281);
	func_332(-436084091);
	func_332(-285245562);
	func_332(-262959893);
	func_332(-1042390616);
	func_332(-118700196);
	func_332(-735136865);
	func_332(636278554);
	func_332(2038589758);
	func_332(775893260);
	func_341("pro_fence_broken_nav");
	func_341("pro_fence_fixed_nav");
	func_341("pro_burned_nav");
	func_321(-1552951782);
	func_321(-1142569437);
	func_321(474113610);
	func_321(-297340751);
	func_321(-868830916);
	func_321(1802934313);
	func_321(2108112010);
	func_321(1208537422);
	func_321(361734047);
	func_321(446554495);
	if (func_54() == -1)
	{
		func_73(22, 16);
		func_350(22);
	}
	if (!_0x91a5f9cbebb9d936(Global_1939655->f_2))
	{
		if (_does_volume_exist((*Global_1887339)[22]->f_4))
		{
			Global_1939655->f_2 = _0x4c39c95ae5db1329((*Global_1887339)[22]->f_5, 0, 15);
		}
	}
	func_332(-217646849);
	func_332(-694809996);
	func_332(-2053475031);
	func_321(-279703229);
	func_321(-623091266);
	set_scenario_group_enabled("GUA_GUARD_CHAINS", true);
	func_332(-1569624057);
	func_321(-961488528);
	if (func_328(-299522880))
	{
		func_321(131323483);
		func_332(-134556459);
	}
	else
	{
		func_332(131323483);
		func_321(-134556459);
	}
	func_332(1638937672);
	func_332(661576070);
	func_332(795060201);
	func_332(1003623269);
	func_332(-395621323);
	func_332(-924329535);
	func_321(-243627670);
	func_321(-198004806);
	func_342("nav_wapiti_es");
	func_321(1489268640);
	func_351();
	if (func_328(1221801385))
	{
		if (!Global_1939655->f_309)
		{
			_0x1392105da88bbffb(-1318786989, 2300f, -330f, 0, 0);
			Global_1939655->f_309 = 1;
		}
	}
	else if (Global_1939655->f_309)
	{
		_0xe057fea9a22eb3ee(-1318786989);
		Global_1939655->f_309 = 0;
	}
	if (func_328(-306246697))
	{
		if (!Global_1939655->f_310)
		{
			_0x1392105da88bbffb(-1749581410, 3012.5f, 507.5f, 0, 0);
			Global_1939655->f_310 = 1;
		}
	}
	else if (Global_1939655->f_310)
	{
		_0xe057fea9a22eb3ee(-1749581410);
		Global_1939655->f_310 = 0;
	}
	if (func_328(-1847672446))
	{
		if (!Global_1939655->f_311)
		{
			_0x1392105da88bbffb(1467785875, 2700f, -1600f, 0, 0);
			Global_1939655->f_311 = 1;
		}
	}
	else if (Global_1939655->f_311)
	{
		_0xe057fea9a22eb3ee(1467785875);
		Global_1939655->f_311 = 0;
	}
	func_321(-614421509);
	func_321(604920544);
	func_321(1382135686);
	if (func_328(-2022369555))
	{
		func_321(-1716205818);
		func_332(-276259505);
	}
	else
	{
		func_321(-276259505);
		func_332(-1716205818);
	}
	if (!Global_1939655->f_307)
	{
		_0x1392105da88bbffb(1807082723, 3290f, -1310f, 0, 0);
		Global_1939655->f_307 = 1;
		_0xd8c7162ab2e2af45(1944800674);
	}
	func_332(1056170594);
	func_332(-873881483);
	func_332(881979872);
	func_332(1157695860);
	func_332(146172383);
	if (Global_1939655->f_306)
	{
		_0xe057fea9a22eb3ee(1157868460);
		Global_1939655->f_306 = 0;
		_map_discovery_set_enabled(-296815465);
	}
	func_352();
	StringCopy(&cVar0, "nav_sdn_docks_", 64);
	if (func_328(1358491857))
	{
		StringConCat(&cVar0, "korrigan_", 64);
	}
	StringConCat(&cVar0, "antenor_", 64);
	func_321(-445068262);
	func_321(-1688366042);
	if (_is_scenario_group_enabled_hash(-2024308038))
	{
		_set_scenario_group_enabled_hash(-2024308038, false);
	}
	if (func_328(522677506))
	{
		func_321(1048677741);
		func_321(-2035101386);
		func_321(1284188544);
		func_321(1520435387);
		func_321(876228895);
		StringConCat(&cVar0, "trains_", 64);
	}
	else
	{
		func_332(1048677741);
		func_332(-2035101386);
		func_332(1284188544);
		func_332(1520435387);
		func_332(876228895);
	}
	func_332(-274080837);
	func_332(-1036688493);
	func_332(-1512794226);
	func_332(913995529);
	func_321(481139295);
	func_321(165972019);
	func_321(1679182807);
	func_321(-1986089134);
	StringConCat(&cVar0, "pre_es", 64);
	func_342(&cVar0);
	func_332(-1758697759);
	func_321(-890900091);
	func_332(-886310806);
	func_341("nav_crn1_barn_burnt");
	func_321(-750963311);
	func_321(1926336063);
	func_321(-800534102);
	func_342("nav_crn1_barn");
	func_333(188);
	func_322(189);
	if (func_328(1167397384))
	{
		func_332(1736386364);
	}
	else
	{
		func_321(1736386364);
	}
	if (func_328(2024769126))
	{
		func_332(516817794);
	}
	else
	{
		func_321(516817794);
	}
	if (func_328(-154581735))
	{
		func_332(-262371610);
	}
	else
	{
		func_321(-262371610);
	}
	if (func_328(-1530132748))
	{
		func_332(-389510791);
	}
	else
	{
		func_321(-389510791);
	}
	if (func_328(976539083))
	{
		func_332(71064384);
	}
	else
	{
		func_321(71064384);
	}
	func_332(677191274);
	func_332(1989203268);
	func_332(516308968);
	func_332(1308321372);
	func_332(-449454773);
	func_332(-1754541271);
	func_332(-1363999915);
	func_332(-1116430120);
	func_332(-163883900);
	func_332(-1010679388);
	func_332(1033367448);
	func_332(391022529);
	func_332(-1560636071);
	func_332(1870870569);
	func_332(-904833761);
	func_332(1713084298);
	func_332(928528900);
	func_321(-2118853492);
	func_321(-597126658);
	func_353(-1947843638);
	func_342("nav_moonshine_on_map_bayou");
	func_353(2037986663);
	func_342("nav_moonshine_on_map_griz");
	func_353(1171027246);
	func_342("nav_moonshine_on_map_henn");
	func_353(734740942);
	func_342("nav_moonshine_on_map_heart");
	func_353(-1363817710);
	func_342("nav_moonshine_on_map_tall");
	func_332(-1950049852);
	func_321(-724913398);
	if (func_54() != -1)
	{
		func_321(1325716092);
		func_321(-1049500949);
		func_321(-1781246069);
		func_321(-1158072415);
		func_321(135886022);
		func_321(-1892595931);
		func_321(-661560211);
		func_321(-1588793465);
		func_321(924412185);
		func_321(-1933617196);
		if (func_328(-640663440))
		{
			func_332(1749008611);
			func_332(-1466172032);
			func_332(2111695903);
			func_332(-981873755);
			func_332(-1947695052);
			func_332(2013143748);
			func_332(-1559513478);
			func_332(-1321905459);
			func_332(42081460);
			func_332(870580095);
			func_332(504746979);
			func_332(138913863);
			func_332(-90108678);
			func_332(-926795318);
			func_332(57105576);
			func_332(991016631);
			func_321(-1340001373);
			func_321(-2116397290);
			func_321(-922917541);
			func_321(-125588314);
			func_332(1524580507);
			func_332(204481342);
			func_332(174727090);
			func_332(767505137);
			func_332(588062093);
			func_332(471934509);
			func_332(995675696);
			func_332(706423733);
			func_332(758066107);
			func_332(1202346365);
			func_332(-1995054197);
			func_332(898257133);
			func_332(-1623126047);
			func_332(1943484686);
			func_332(2056603274);
			func_332(823583740);
			func_332(-826466486);
			func_332(-593183975);
			func_332(-362883443);
			func_332(-1560816708);
			func_332(1739101350);
			func_332(1433203214);
			func_332(281153830);
			func_332(-380287375);
			func_332(-2139410267);
			func_332(-634291786);
			func_332(-1047158045);
			func_332(1008375999);
			func_332(117485200);
			func_332(-188216801);
			func_332(-630275010);
			func_332(-164693058);
			func_332(118201723);
			func_332(458453080);
			func_332(-1385360243);
			func_332(-1288790000);
			func_342("logging_stage0");
			func_332(-590227673);
			func_332(-1593160175);
			func_332(872406077);
			func_332(1471226731);
			func_332(-1149736196);
			func_332(-1926787493);
			func_332(427220750);
			func_332(1987335384);
			func_332(1840600379);
			func_332(-1859373348);
			func_332(1251358153);
			func_332(-1877706739);
			func_332(-1035166057);
			func_332(-821741560);
			func_332(-574138996);
			func_321(-1680050035);
			func_321(437660121);
			func_321(-1325803862);
			func_321(980904027);
			func_332(-1680050035);
			func_332(905216692);
			func_321(-1299414622);
			func_341("nav_sean1_camp");
			if (func_328(-693828600))
			{
				func_341("reservation_abandoned");
				func_321(1502951187);
				func_342("MS_HIDOUT_FORTRIGGS");
				func_354(1502951187);
			}
			else
			{
				func_332(1502951187);
				func_341("MS_HIDOUT_FORTRIGGS");
				func_355(1502951187);
				func_342("reservation_abandoned");
			}
			func_321(-636161219);
			func_321(1490756544);
			func_342("blackwater_mp_nav_full");
			func_321(-1393565861);
			func_321(992700940);
			func_321(-2045964586);
			func_321(341106871);
			func_321(-1324099905);
			func_321(1589293578);
			func_321(1435082664);
			func_321(-2091615427);
			func_321(-1997605640);
			func_321(2066602358);
			func_321(-1374896333);
			func_321(-869788001);
			func_321(-691393565);
			func_321(-1448947307);
			func_321(-1171033418);
			func_321(-1407773372);
			func_332(593772301);
			func_332(1587857798);
			func_332(-455342387);
			func_332(2096286828);
			func_332(998966461);
			func_332(-586415580);
			func_332(1251859782);
			func_332(994786977);
			func_332(2077623691);
			func_332(-1926989471);
			func_332(-142900294);
			func_332(691955519);
			func_332(-1022518533);
			func_332(-196117122);
			func_332(499044444);
			func_332(-805522215);
			func_332(2080640229);
			func_332(-1386614896);
			func_332(-693812694);
			func_332(-555736180);
			func_342("railroad_stage_MP_Update");
		}
		if (func_328(-441204543))
		{
			func_321(1636184722);
		}
		else
		{
			func_332(1636184722);
		}
		func_356(-1585840296);
		func_356(-2043909922);
		func_356(589380360);
		func_356(-632127260);
		func_356(-209894800);
		func_356(1238086793);
		func_356(-1344601768);
		func_356(1302228510);
		func_356(-460024530);
		func_356(-108780030);
		func_356(1698972798);
		func_356(-1296807958);
		func_356(-1283202000);
		func_356(-1610966108);
		func_356(-693828600);
		func_356(1321892118);
		func_356(-61411516);
		func_356(582380806);
		func_356(1932172605);
		func_356(1159471771);
		func_356(784360470);
		func_356(-1340339190);
		func_356(1881028477);
		func_356(1703398561);
		func_356(-1209597203);
		func_356(-897750037);
		func_356(929582877);
		func_356(-911126844);
		func_356(-355531636);
		func_356(-1455998786);
		func_356(-851626677);
		func_356(-734416508);
		func_356(-396624371);
		func_356(885777893);
		func_356(619839857);
		func_356(2113625508);
		func_356(1549124796);
		func_356(-502473159);
		func_356(229371495);
		func_356(-781631220);
		func_356(1708045337);
		func_356(1166612791);
		func_356(74872959);
		func_356(1744443559);
		func_356(509781469);
		func_356(885378256);
		func_356(-524787708);
		func_356(-1861414976);
		func_356(747514327);
		func_356(-1042021329);
		func_356(-591815673);
		func_356(883901517);
		func_356(1561093093);
		func_356(1287917122);
		func_356(-1943367752);
		func_356(-371827125);
		func_356(-889906510);
		func_356(64896505);
		func_356(-1161687045);
		func_356(526003171);
		func_356(-895073533);
		func_356(-2066272360);
		func_356(93964309);
		func_356(2103908624);
		func_357(1812677765);
		func_357(-1753769127);
		func_357(-947815572);
		func_357(-1181950077);
		func_357(-489737721);
		func_357(-102827640);
		func_357(-1906892166);
		func_357(-2141419899);
		func_357(16844748);
		func_357(831940854);
		func_357(-1387772214);
		func_357(-1095341658);
		func_357(-1848799275);
		func_357(-1556041029);
		func_357(-1808329564);
		func_357(1866434585);
		func_357(1421300489);
		func_357(1248935549);
		func_357(943561238);
		func_357(-1939389836);
		func_357(-243260793);
		func_357(-492731190);
		func_357(-839820438);
		func_357(1325325699);
		func_357(-1705799799);
		func_357(-89829333);
		func_357(-1262828457);
		func_357(-931337253);
		func_357(1494062795);
		func_357(-1287894233);
		func_357(2068208444);
		func_357(-1932919229);
		func_357(-364475655);
		func_357(-110352060);
		func_357(-1023919011);
		func_357(-852602679);
		func_357(-297483764);
		func_357(-1578292898);
		func_357(1517951665);
		func_357(1891256113);
		func_357(-1319875891);
		func_357(-1624627591);
		func_357(-1914141706);
		func_357(-74031276);
		func_357(1280406542);
		func_357(982765715);
		func_357(-1120447016);
		func_357(1788424349);
		func_357(1028084603);
		func_357(-1827602683);
		func_357(565812320);
		func_357(1279586666);
		func_357(1480425906);
		func_357(846837291);
		func_357(1153686207);
		func_357(-70727482);
		func_357(84709454);
		func_357(799106423);
		func_357(560154875);
		func_357(2079292950);
		func_357(1521272922);
		func_357(-677920206);
		func_357(-414883443);
		func_357(-1004266677);
		func_357(-1290997627);
		func_357(-1462313959);
		func_357(-1882707460);
		func_357(-2056579774);
		func_357(-1442844448);
		func_357(-1684974589);
		func_357(-38135693);
		func_357(803929300);
		func_357(640520536);
		func_357(-2100409704);
		func_357(-604603161);
		func_357(-1422877860);
		func_357(826868753);
		func_357(730069127);
		func_357(-1378911044);
		func_357(-1341750998);
		func_357(2068253437);
		func_357(-1395855864);
		func_357(-1749433374);
		func_357(1232840551);
		func_357(642824856);
		func_357(-207792846);
		func_357(715735881);
		func_357(404823609);
		func_357(1126565489);
		func_357(-1664435783);
		func_357(-1369678628);
		func_357(2013720626);
		func_357(215903338);
		func_357(-90486812);
		func_357(-329176208);
		func_357(-574190021);
		func_357(-800891377);
		func_357(-630295963);
		func_357(2127412005);
		func_357(1362354162);
		func_357(2048790450);
		func_357(-101740709);
		func_357(673606600);
		func_357(-895307590);
		func_357(1032791043);
		func_357(804063423);
		func_357(-1573753524);
		func_357(-1842033327);
		func_357(-888632790);
		func_357(-583127403);
		func_357(-381925743);
		func_357(-75928821);
		func_357(321629486);
		func_357(896725436);
		func_357(-941648233);
		func_357(-635323621);
		func_357(1157309080);
		func_357(-797689456);
		func_357(-500245243);
		func_357(-211583122);
		func_357(237155783);
		func_357(-1547280108);
		func_357(-1719055206);
		func_357(1601722481);
		func_357(-2142074819);
		func_357(-226366310);
		func_357(-1502194556);
		func_357(-1749043433);
		func_357(1341699707);
		func_357(1666964801);
		func_357(-1673998598);
		func_357(-1445041595);
		func_357(148595040);
		func_357(-729679654);
		func_357(-448554447);
		func_357(-1339871203);
		func_356(-812641169);
		func_356(-554519756);
		func_356(865557632);
		func_356(1112996351);
		func_356(-1608141409);
		func_356(-311373772);
		func_356(61537448);
		func_356(-925071604);
		func_356(1195508693);
	}
	else
	{
		func_332(-1393565861);
		func_332(992700940);
		func_341("railroad_stage_MP_Update");
	}
	if (func_328(-2101264851))
	{
		func_321(1858796535);
		func_321(945532872);
		func_321(-2043326480);
		func_321(992791293);
		func_321(-1815023148);
		func_321(731209239);
		func_321(-952533419);
		func_321(582879672);
		func_321(1750312025);
		func_321(-759698431);
		func_321(59954835);
		func_321(-1461922204);
		func_321(2079207010);
		func_321(-1360840312);
		func_321(-816857367);
	}
	else
	{
		func_332(1858796535);
		func_332(945532872);
		func_332(-2043326480);
		func_332(992791293);
		func_332(-1815023148);
		func_332(731209239);
		func_332(-952533419);
		func_332(582879672);
		func_332(1750312025);
		func_332(-759698431);
		func_332(59954835);
		func_332(-1461922204);
		func_332(2079207010);
		func_332(-1360840312);
		func_332(-816857367);
	}
	func_321(-1387511711);
	func_321(1901132483);
	func_332(-2082345587);
	func_332(-715865581);
	set_scenario_group_enabled("TAN_BIRDS", false);
	func_341("rmllr_cabin_burnt");
	func_342("rmllr_cabin_normal");
	func_332(-1382351182);
	func_332(1263244828);
	func_332(-1773409329);
	func_321(1082980257);
	func_321(-1725465949);
	func_332(1628286919);
	func_332(-98843293);
	func_321(1928252407);
	func_332(-1453850836);
	func_332(2006850489);
	func_341("mud4_saloon_fight_start");
	func_341("mud4_saloon_fight");
	func_332(517553365);
	func_332(-2083943324);
	func_321(30201771);
	func_332(882236853);
	func_332(-833696851);
	func_358(&(Global_1939655->f_24), 1);
	func_358(&(Global_1939655->f_25), 1);
	func_358(&(Global_1939655->f_26), 1);
	func_321(-1417469821);
	func_332(146172383);
	func_332(765343099);
	func_332(-909306169);
	func_321(-879315604);
	func_332(-1758697759);
	func_332(591001924);
	func_321(-890900091);
	func_332(-2092712551);
	func_332(-1307469679);
	func_359(1512816328, 1590446437);
	func_359(1207048789, -1789074439);
	func_359(-1230112817, 499096137);
	func_359(-1278074582, 1466088082);
	func_359(-1436021162, -1852056457);
	func_359(407136781, 556704039);
	func_321(1111220101);
	func_321(1372565859);
	func_342("TLHideoutMP");
	if (!Global_1939655->f_308)
	{
		_0x1392105da88bbffb(-361257171, -1350f, -2300f, 0, 0);
		Global_1939655->f_308 = 1;
	}
	if (func_328(559573222))
	{
		func_332(1137646647);
		func_321(-898081380);
	}
	else
	{
		func_332(-898081380);
		func_321(1137646647);
	}
	if (func_328(-792853067))
	{
		func_332(-1828030290);
		func_321(827269092);
	}
	else
	{
		func_321(-1828030290);
		func_332(827269092);
	}
	func_322(163);
	func_332(-794503195);
	func_321(1364392658);
	func_341("nts3_no_bridge");
	if (Global_1939655->f_305)
	{
		_0xe057fea9a22eb3ee(742204852);
		Global_1939655->f_305 = 0;
	}
	func_332(-65072454);
	func_321(-1192199739);
	func_332(1692451176);
	func_332(-102951407);
	func_332(1833824812);
	func_332(1453569688);
	func_332(1948051928);
	func_332(-1123141803);
	_0xdd0bc0edcb2162f6(get_hash_key("mission_sean_1"));
	_0x4bdebea5702b97a9(-1504.838f, -891.84f, 87.9485f, 25f, 1, 1);
	func_332(398639187);
	func_321(1759143160);
	func_321(1136457806);
	func_332(1255880931);
	func_342("nav_remove_native1");
	func_332(746475990);
	func_341("ntv1_armycamp");
	func_321(-1835067413);
	func_332(-1392150519);
	func_322(225);
	if (func_328(1582370975))
	{
		func_321(-1901860833);
		func_342("MS_NEW_GAR_BRON_MPCOVER_0");
	}
	else
	{
		func_332(-1901860833);
		func_341("MS_NEW_GAR_BRON_MPCOVER_0");
	}
	if (func_328(-330120947))
	{
		func_321(1953646620);
	}
	else
	{
		func_332(1953646620);
	}
	func_332(1578454569);
	func_321(-276524767);
	func_332(-1085363933);
	func_332(-537740003);
	func_341("trn1_nav_ann_shootout_00");
	if (func_328(-333135263))
	{
		func_321(728046625);
	}
	else
	{
		func_332(728046625);
	}
	if (func_328(885203519))
	{
		func_322(227);
	}
	else
	{
		func_333(227);
	}
	if (func_328(-1080627546))
	{
		func_322(226);
	}
	else
	{
		func_333(226);
	}
	func_332(1525054056);
	func_332(749968899);
	func_332(-186143124);
	func_321(-1986209836);
	func_321(-929277449);
	func_321(-723094901);
	func_321(-801609437);
	if (func_328(1774060092))
	{
		func_321(-1682173664);
	}
	else
	{
		func_332(-1682173664);
	}
	if (func_328(424920933))
	{
		func_321(1480174383);
		func_342("nav_mp005_armadillo_alley_debris");
	}
	else
	{
		func_332(1480174383);
		func_341("nav_mp005_armadillo_alley_debris");
	}
	return true;
}

void func_136()
{
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (!func_360(iVar0))
		{
			Global_1939655->f_46[iVar0] = &Global_39.f_110[iVar0];
		}
		else
		{
			Global_1939655->f_46[iVar0] = &Global_1071686->f_19648[iVar0];
		}
		iVar0++;
	}
}

bool func_137()
{
	return false;
}

bool func_138()
{
	return func_361() == 4;
}

void func_139()
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = func_362(iVar0);
		if (iVar1 == -1)
		{
			return;
		}
		if (func_363(iVar1))
		{
			if (func_364(iVar1))
			{
				func_343(iVar1);
				func_365(iVar0);
			}
		}
		iVar0++;
	}
}

int func_140()
{
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (!func_360(iVar0))
		{
			if (&Global_1939655->f_46[iVar0] != &Global_39.f_110[iVar0])
			{
				return 1;
			}
		}
		else if (&Global_1939655->f_46[iVar0] != &Global_1071686->f_19648[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_141()
{
}

void func_142()
{
}

void func_143()
{
	func_366(0);
}

void func_144()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1939655->f_291[iVar0]->f_1 > 0 && !is_thread_active(&(Global_1939655->f_291[iVar0]), false))
		{
			Global_1939655->f_302 = (Global_1939655->f_302 + Global_1939655->f_291[iVar0]->f_1);
			Global_1939655->f_291[iVar0]->f_1 = 0;
			bVar1 = true;
		}
		iVar0++;
	}
	if (!bVar1)
	{
		if (_0x8a3945405b31048f() != func_367())
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		func_368();
	}
}

bool func_145(int iParam0, int iParam1)
{
	return ((*Global_263042)[iParam0]->f_68 && iParam1) != 0;
}

void func_146(int iParam0)
{
	(*Global_263042)[&Global_1296859]->f_68 = ((*Global_263042)[&Global_1296859]->f_68 - ((*Global_263042)[&Global_1296859]->f_68 && iParam0));
}

bool func_147(var uParam0, int iParam1)
{
	return (uParam0->f_20 && iParam1) != 0;
}

bool func_148(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_263042[&Global_1296859] > 2;
	}
	return Global_263042[iParam0] > 2;
}

bool func_149(int iParam0)
{
	return (Global_265377->f_124517.f_135 && iParam0) != 0;
}

void func_150()
{
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 11)
	{
		iVar0 = func_369(iVar1);
		if (!func_370(iVar1, iVar0))
		{
		}
		iVar1++;
	}
}

void func_151()
{
	iVar2 = 2;
	Global_1939084->f_71 = 0;
	iVar10 = Global_1939084->f_75;
	while (iVar10 <= (9 - 1))
	{
		if (Global_1939084->f_71 >= iVar2)
		{
		}
		else
		{
			iVar0 = iVar10;
			if (iVar0 == -1)
			{
			}
			else
			{
				iVar11 = func_371(iVar0);
				vVar7 = { 0f, 0f, 0f };
				if (func_372(iVar11, &uVar6, &uVar5, &vVar7))
				{
					if (func_203(vVar7))
					{
					}
					else
					{
						Jump @109; //curOff = 103
						Jump @547; //curOff = 106
						iVar1 = func_373(iVar11);
						if ((!func_374(&(Global_1939084->f_23[iVar10])) && Global_1939084->f_55[iVar10]) // PointerArith)
						{
							Global_1939084->f_55[iVar10] = 0;
						}
						if (!&Global_1939084->f_55[iVar10])
						{
							Global_1939084->f_23[iVar10] = func_68(func_25(), 27, vVar7, -1);
							func_375(&(Global_1939084->f_23[iVar10]), 168093330);
							func_376(&(Global_1939084->f_23[iVar10]), 1879260108);
							set_blip_flash_timer(&(Global_17081[&Global_1939084->f_23[iVar10]]), func_378(func_377(iVar11)), func_379(iVar11));
							func_380(&(Global_1939084->f_23[iVar10]), iVar1);
							Global_1939084->f_55[iVar10] = 1;
						}
						else
						{
							bVar3 = true;
							bVar4 = false;
							iVar12 = func_379(iVar11);
							if (func_381(iVar11) || func_382(iVar11))
							{
								bVar3 = false;
							}
							else if (func_383(30))
							{
								bVar3 = false;
							}
							else if (func_384(iVar11) == 1)
							{
								bVar3 = false;
							}
							else if (!_unlock_is_visible(iVar12))
							{
								bVar3 = false;
							}
							else if (func_385(iVar1, 255))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								func_386(&(Global_1939084->f_23[iVar10]), -1186550032);
								if ((func_387(iVar0) || func_388()) || !_unlock_is_unlocked(iVar12))
								{
									bVar4 = true;
								}
								if (bVar4)
								{
									func_389(&(Global_1939084->f_23[iVar10]), 724623647);
								}
								else
								{
									func_386(&(Global_1939084->f_23[iVar10]), 724623647);
								}
							}
							else
							{
								func_389(&(Global_1939084->f_23[iVar10]), -1186550032);
							}
						}
						Global_1939084->f_71++;
					}
					iVar10++;
					Global_1939084->f_75 = iVar10;
					if (Global_1939084->f_75 >= 9)
					{
						Global_1939084->f_75 = 0;
					}
				}
			}
		}
	}
}

void func_152()
{
	iVar0 = 3;
	Global_1939084->f_71 = 0;
	iVar1 = Global_1939084->f_73;
	while (iVar1 <= (5 - 1))
	{
		if (Global_1939084->f_71 >= iVar0)
		{
		}
		else
		{
			iVar2 = iVar1;
			if (iVar2 == -1)
			{
			}
			else
			{
				if (does_blip_exist(Global_1138962->f_1[iVar2]->f_22))
				{
					if (Global_1138962->f_1[iVar2]->f_2 != -1)
					{
						func_390(Global_1138962->f_1[iVar2]->f_22, Global_1138962->f_1[iVar2]->f_2);
					}
					bVar3 = (func_91(player_id(), 1, 0, 1) && Global_1138962->f_1[iVar2]->f_2 == func_25());
					if (bVar3)
					{
						_blip_set_modifier(Global_1138962->f_1[iVar2]->f_22, 724623647);
					}
					else
					{
						_set_blip_flash_style(Global_1138962->f_1[iVar2]->f_22, 724623647);
					}
				}
				Global_1939084->f_71++;
			}
			iVar1++;
		}
	}
	Global_1939084->f_73 = iVar1;
	if (Global_1939084->f_73 >= 5)
	{
		Global_1939084->f_73 = 0;
	}
}

int func_153(bool bParam0, bool bParam1)
{
	if (Global_1572887->f_12)
	{
		return 0;
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
			return 1;
		}
	}
	if (!network_is_signed_online())
	{
		return 1;
	}
	if (_0x9e4ef615e307fbbe())
	{
		switch (_0x54ae4fdeefeab77e())
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 2:
				if (!bParam0)
				{
					return 1;
				}
				break;
			case 4:
				return 1;
			case 3:
				return 1;
			default:
				return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		if (get_event_at_index(1, iVar0) == 1976253964)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_154()
{
	if (!func_235(255))
	{
		return;
	}
	if (func_53(0, 0, 1))
	{
		return;
	}
	if (func_391())
	{
		return;
	}
	if (func_392(315581806))
	{
		func_393();
		return;
	}
	if (!func_394())
	{
		return;
	}
	if (func_395(315581806, 0, 255, 0, 0))
	{
		func_393();
	}
}

void func_155(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			func_396();
			break;
		case 27:
			func_397();
			break;
		case 28:
			func_398();
			break;
		case 38:
			func_399();
			break;
		case 33:
			break;
		case 37:
			break;
	}
}

void func_156(int iParam0)
{
}

void func_157(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (&Global_1108365->f_34.f_353[iParam0])
	{
		func_400(iParam0);
	}
	if (!Global_1108365->f_34[iParam0]->f_6)
	{
		return;
	}
	if (!_network_is_player_index_valid(iVar0))
	{
		func_401(iParam0);
		return;
	}
	if (!network_is_player_active(iVar0))
	{
		func_401(iParam0);
		return;
	}
	if (network_get_player_from_gamer_handle(Global_1108365->f_34.f_546[iParam0]) != iVar0)
	{
		func_401(iParam0);
		return;
	}
	if (_0x81fb74c83c2ed69f(iVar0))
	{
		func_402(iVar0, 0);
		return;
	}
	if ((*Global_1288736)[network_player_id_to_int()]->f_66)
	{
		func_402(iVar0, 0);
		return;
	}
	if ((*Global_1288736)[iParam0]->f_66)
	{
		func_402(iVar0, 0);
		return;
	}
	if (func_403(iParam0))
	{
		func_402(iVar0, 0);
		return;
	}
	if (get_time_difference(Global_1108365->f_34[iParam0]->f_7, get_network_time_accurate()) >= 600000)
	{
		func_402(iVar0, 0);
		return;
	}
}

bool func_158(var uParam0, int iParam1)
{
	return func_284(*uParam0, iParam1);
}

void func_159()
{
	func_404(&(Global_1108365->f_34.f_773), 128);
	iVar0 = _0x4be6c13a45cca8ec(Global_1296859->f_15);
	if (!_network_is_player_index_valid(iVar0) || !network_is_player_active(iVar0))
	{
		func_405(&(Global_1108365->f_34.f_773), 128);
		return;
	}
	iVar1 = iVar0;
	iVar3 = 0;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		if (*Global_1288736)[iVar1][iVar2] == player_id()
		{
		}
		else if (_network_is_player_index_valid((*Global_1288736)[iVar1][iVar2]) && network_is_player_active((*Global_1288736)[iVar1][iVar2]))
		{
			iVar3++;
			func_406((*Global_1288736)[iVar1][iVar2], (*(*Global_1288736)[iVar1])[iVar2]->f_1, is_bit_set((*Global_1288736)[iVar1]->f_65, iVar2));
		}
		iVar2++;
	}
	if (iVar3 > 0)
	{
		func_405(&(Global_1108365->f_34.f_773), 16);
	}
}

void func_160()
{
	if (func_407() || func_262())
	{
		return;
	}
	if (func_158(&(Global_1108365->f_34.f_773), 4))
	{
		func_404(&(Global_1108365->f_34.f_773), 4);
		if (!network_is_player_connected(Global_1108365->f_34.f_776) || !network_is_player_active(Global_1108365->f_34.f_776))
		{
			Global_1108365->f_34.f_777 = 255;
			return;
		}
		if (_0x424b17a7dc5c90bc(player_id()))
		{
			if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(Global_1108365->f_34.f_776)) > 1)
			{
				func_110(_create_var_string(10, "PARLEY_HELP_GANG_LEADER_INFO", func_109(get_player_name(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(Global_1108365->f_34.f_776))), 109029619)), 10000, 0, 0, 0, 1);
			}
			else
			{
				func_110(_create_var_string(10, "PARLEY_HELP_ACCEPTED", func_109(get_player_name(Global_1108365->f_34.f_776), 109029619)), 10000, 0, 0, 0, 1);
			}
		}
		else
		{
			func_110(_create_var_string(10, "PARLEY_HELP_GANG_INFO", func_109(get_player_name(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(Global_1108365->f_34.f_776))), 109029619)), 10000, 0, 0, 0, 1);
		}
		Global_1108365->f_34.f_776 = 255;
		return;
	}
	if (func_158(&(Global_1108365->f_34.f_773), 8))
	{
		func_404(&(Global_1108365->f_34.f_773), 8);
		if (!network_is_player_connected(Global_1108365->f_34.f_777) || !network_is_player_active(Global_1108365->f_34.f_777))
		{
			Global_1108365->f_34.f_776 = 255;
			return;
		}
		if (_0x149a2751ab66ac02(Global_1296859->f_15) > 1)
		{
			if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(Global_1108365->f_34.f_777)) == 1)
			{
				func_110(_create_var_string(10, "PARLEY_HELP_RIVAL_GANG_INFO_SOLO_RIVAL", func_109(get_player_name(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(Global_1108365->f_34.f_777))), 109029619)), 10000, 0, 0, 0, 1);
			}
			else
			{
				func_110(_create_var_string(10, "PARLEY_HELP_RIVAL_GANG_INFO", func_109(get_player_name(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(Global_1108365->f_34.f_777))), 109029619)), 10000, 0, 0, 0, 1);
			}
		}
		else if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(Global_1108365->f_34.f_777)) == 1)
		{
			func_110(_create_var_string(10, "PARLEY_HELP_RIVAL_GANG_SOLO_INFO_SOLO_RIVAL", func_109(get_player_name(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(Global_1108365->f_34.f_777))), 109029619)), 10000, 0, 0, 0, 1);
		}
		else
		{
			func_110(_create_var_string(10, "PARLEY_HELP_RIVAL_GANG_SOLO_INFO", func_109(get_player_name(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(Global_1108365->f_34.f_777))), 109029619)), 10000, 0, 0, 0, 1);
		}
		Global_1108365->f_34.f_777 = 255;
		return;
	}
	if (func_158(&(Global_1108365->f_34.f_773), 16))
	{
		func_404(&(Global_1108365->f_34.f_773), 16);
		func_110(_create_var_string(2, "PARLEY_HELP_JOINED_INFO"), 10000, 0, 0, 0, 1);
		return;
	}
	if (func_158(&(Global_1108365->f_34.f_773), 64) && func_158(&(Global_1108365->f_34.f_773), 32))
	{
		func_404(&(Global_1108365->f_34.f_773), 32);
		Global_1108365->f_34.f_778 = 255;
	}
	if (func_158(&(Global_1108365->f_34.f_773), 32) && func_408(Global_1108365->f_34.f_774) > 2)
	{
		func_404(&(Global_1108365->f_34.f_773), 32);
		func_404(&(Global_1108365->f_34.f_773), 64);
		if (!network_is_player_connected(Global_1108365->f_34.f_778) || !network_is_player_active(Global_1108365->f_34.f_778))
		{
			Global_1108365->f_34.f_778 = 255;
			return;
		}
		if (_0x901e0dc25080c8b9(Global_1108365->f_34.f_778) == Global_1296859->f_15)
		{
			func_110(_create_var_string(10, "PARLEY_HELP_END_GANG", func_109(get_player_name(Global_1108365->f_34.f_778), 109029619)), 10000, 0, 0, 0, 1);
		}
		else
		{
			func_110(_create_var_string(10, "PARLEY_HELP_END", func_109(get_player_name(Global_1108365->f_34.f_778), 109029619)), 10000, 0, 0, 0, 1);
		}
		Global_1108365->f_34.f_778 = 255;
		return;
	}
	if (func_158(&(Global_1108365->f_34.f_773), 64) && func_408(Global_1108365->f_34.f_774) > 2)
	{
		func_404(&(Global_1108365->f_34.f_773), 32);
		func_404(&(Global_1108365->f_34.f_773), 64);
		func_110("PARLEY_HELP_END_MULTIPLE", 10000, 0, 0, 0, 1);
		return;
	}
}

void func_161(var uParam0)
{
	uParam0->f_1 = _0xe1c105e6bba48270();
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_10 = 0;
	*uParam0 = 0;
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_2 = 0;
}

void func_162(var uParam0)
{
	func_409();
	if (!has_ped_got_weapon(Global_34, -1415022764, 0, false))
	{
		return;
	}
	func_410(uParam0);
	iVar0 = func_411(0);
	if (Global_1903071->f_3 == 1)
	{
		if (_0x3d10d7179d7034af(iVar0, -1415022764, 0))
		{
			_0x6a564540fac12211(iVar0, -1415022764);
		}
	}
	else if (!_0x3d10d7179d7034af(iVar0, -1415022764, 0))
	{
		_0x766315a564594401(iVar0, -1415022764, -1323131777);
	}
}

void func_163(var uParam0)
{
	if (((((Global_1903071->f_3 == 0 || func_412()) || func_277()) || func_413()) || !is_screen_faded_in()) || !has_ptfx_asset_loaded())
	{
		func_164(uParam0);
		return;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_203(uParam0->f_13[iVar0]->f_1))
		{
			if (func_414(&(uParam0->f_13[iVar0]->f_5)) > IntToFloat(uParam0->f_13[iVar0]->f_4) || func_415(Global_35, uParam0->f_13[iVar0]->f_1) > uParam0->f_3)
			{
				func_416(uParam0->f_13[iVar0]);
			}
		}
		iVar0++;
	}
	*uParam0 = func_417(uParam0);
	if (*uParam0 == -1)
	{
		return;
	}
	if (!_0xd9130842d7226045(uParam0->f_12, 1))
	{
		return;
	}
	vVar1 = { func_418(uParam0) };
	if (func_203(vVar1))
	{
		return;
	}
	vVar1 = { func_419(vVar1) };
	if (func_203(vVar1))
	{
		return;
	}
	vVar1.f_2 = (vVar1.z + uParam0->f_5);
	func_420(uParam0, vVar1);
}

void func_164(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_416(uParam0->f_13[iVar0]);
		iVar0++;
	}
	*uParam0 = 0;
}

void func_165()
{
	iVar0 = func_421(Global_1896622->f_41);
	iVar1 = func_422(Global_1893587->f_2);
	iVar2 = func_423(Global_1893587->f_3);
	if (func_424(Global_1893587->f_3) && !func_259(44))
	{
		iVar2 = -1;
	}
	iVar3 = 0;
	if (func_54() != -1)
	{
		iVar3 = 1;
	}
	if ((((iVar1 == Global_1900688->f_9 && iVar2 == Global_1900688->f_10) && iVar0 == Global_1900688->f_11) && iVar3 == Global_1900688->f_7) && !&Global_1900688)
	{
		return;
	}
	Global_1900688->f_11 = iVar0;
	Global_1900688->f_10 = iVar2;
	Global_1900688->f_9 = iVar1;
	Global_1900688->f_7 = iVar3;
	Global_1900688 = 0;
	if (Global_1900688->f_1 == 4)
	{
		func_425(Global_1900688->f_7, Global_1900688->f_12);
	}
	else if (Global_1900688->f_1 == 2)
	{
		func_426(Global_1900688->f_7, Global_1900688->f_3);
	}
	else if (Global_1900688->f_1 == 1)
	{
		func_427(Global_1900688->f_6);
	}
	else if (Global_1900688->f_1 == 5)
	{
		func_428(Global_1900688->f_7, Global_1900688->f_4);
	}
	else if (Global_1900688->f_10 != -1)
	{
		func_429(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_10);
	}
	else if (Global_1900688->f_9 != -1 && iVar1 != 0)
	{
		func_429(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
	}
	else if (Global_1900688->f_11 != -1)
	{
		func_429(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_11);
	}
}

void func_166(bool bParam0)
{
	if (Global_1900688->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_54() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900688->f_2 == 4 && Global_1900688->f_12 != Global_1900688->f_13) && !bParam0)
	{
		Global_1900688->f_1 = Global_1900688->f_2;
		Global_1900688->f_12 = Global_1900688->f_13;
		func_425(iVar0, Global_1900688->f_12);
	}
	else
	{
		Global_1900688->f_1 = 0;
		Global_1900688->f_7 = iVar0;
		Global_1900688->f_8 = func_430();
		Global_1900688->f_9 = func_422(Global_1893587->f_2);
		Global_1900688->f_11 = func_421(Global_1896622->f_41);
		if (Global_1900688->f_9 != -1 && Global_1900688->f_9 != 0)
		{
			func_429(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
		else if (Global_1900688->f_11 != -1)
		{
			func_429(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_11);
		}
		else
		{
			func_429(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
	}
	Global_1900688->f_2 = 0;
}

void func_167()
{
	network_set_rich_presence(0, &uVar0, 1, 0);
}

bool func_168()
{
	if (!Global_18 & 64 != 0)
	{
		return false;
	}
	if (func_95(32770))
	{
		return false;
	}
	if (func_170(&Global_0, 2))
	{
		return true;
	}
	if (func_53(0, 1, 1) && !func_431(Global_0))
	{
		return false;
	}
	if (func_91(player_id(), 1, 0, 0))
	{
		return false;
	}
	if (get_is_loading_screen_active())
	{
		return false;
	}
	if (_0x1b065a2bf7953815(0) == 1)
	{
		return false;
	}
	if (!is_player_playing(player_id()))
	{
		return false;
	}
	if (_0xc5c395c60b542a3c(1))
	{
		return false;
	}
	if (func_432() != 2 && func_432() != 3)
	{
		return false;
	}
	return true;
}

void func_169(var uParam0)
{
	uParam0->f_2 = 0;
}

bool func_170(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

int func_171()
{
	return func_433();
}

void func_172()
{
	if (audio_is_scripted_music_playing())
	{
		Global_0.f_1 = -1;
		return;
	}
	func_434(&Global_0, 8);
	Global_0.f_1 = -1;
}

bool func_173()
{
	if (!func_59(func_435()))
	{
		return false;
	}
	iVar0 = func_435();
	if (!func_436(iVar0, &iVar1, &iVar2))
	{
		return false;
	}
	if (!func_437(iVar0, &iVar3, &iVar4))
	{
		return false;
	}
	sVar5 = "";
	if (!Global_1878314->f_92 && (*Global_1835011)[iVar0]->f_50 != 0)
	{
		sVar5 = func_438((*Global_1835011)[iVar0]->f_50, &iVar6);
		switch (iVar6)
		{
			case 1:
				return false;
			case 0:
			case 3:
			case 4:
				func_439();
				return false;
			case 5:
				if (Global_1878314->f_91 <= 0)
				{
					Global_1878314->f_91 = absi(get_cloud_time_as_int());
				}
				else if (absi((get_cloud_time_as_int() - Global_1878314->f_91)) >= 10)
				{
					func_439();
					Global_1878314->f_91 = 0;
				}
				return false;
			case 2:
				Global_1878314->f_92 = 1;
				break;
		}
	}
	if (!Global_1878314->f_92)
	{
		return false;
	}
	_set_mission_name_2(true, &((*Global_1835011)[iVar0]->f_42));
	_0xce0d2f5586627cce(1, sVar5, 0, 0, 0);
	_0x49c63fdf69744a27(10, get_hash_key(&((*Global_1835011)[iVar0]->f_42)), (*Global_1835011)[iVar0]->f_19, _create_var_string(2, func_440(iVar0)), &((*Global_1835011)[iVar0]->f_42), sVar5);
	_uilog_set_entry_icon_texture(10, get_hash_key(&((*Global_1835011)[iVar0]->f_42)), iVar4, iVar3);
	_uilog_set_entry_brief_texture(10, get_hash_key(&((*Global_1835011)[iVar0]->f_42)), iVar2, iVar1);
	return true;
}

void func_174(int iParam0)
{
	Global_1878314 = iParam0;
}

void func_175(bool bParam0)
{
	iVar0 = func_435();
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (_0x375f5870a7b8bec1(Global_1878314->f_1[iVar1]))
		{
		}
		else
		{
			StringCopy(&cVar2, "", 32);
			if (!bParam0 && Global_1878314->f_1[iVar1]->f_8 >= 0)
			{
				IntToString(&cVar2, Global_1878314->f_1[iVar1]->f_8, 32);
				StringConCat(&cVar2, "%", 32);
			}
			uVar6 = func_441(&cVar2);
			_0xa20398536b7f1134(10, get_hash_key(&((*Global_1835011)[iVar0]->f_42)), iVar1, Global_1878314->f_1[iVar1], uVar6, 1);
		}
		iVar1++;
	}
	_uilog_set_pending_details_id(1, get_hash_key(&((*Global_1835011)[iVar0]->f_42)));
	if (bParam0)
	{
		return;
	}
	IntToString(&cVar2, Global_1878314->f_1.f_73, 32);
	uVar6 = func_441(&cVar2);
	_0xa49d6d503e3ea847(10, get_hash_key(&((*Global_1835011)[iVar0]->f_42)), Global_1878314->f_1.f_74, "", uVar6);
	_0xa31013798fadcadc(10, get_hash_key(&((*Global_1835011)[iVar0]->f_42)), 1);
	func_442(iVar0, Global_1878314->f_1.f_74);
	missiondata_set_high_score((*Global_1835011)[iVar0]->f_51, Global_1878314->f_1.f_73);
	missiondata_set_rating_scores((*Global_1835011)[iVar0]->f_51, &(Global_1878314->f_1.f_75[3]), &(Global_1878314->f_1.f_75[4]), &(Global_1878314->f_1.f_75[5]));
}

bool func_176()
{
	if (!func_59(func_435()))
	{
		return false;
	}
	if (get_is_loading_screen_active())
	{
		return false;
	}
	if (func_95(32768))
	{
		return false;
	}
	if (!func_18(64))
	{
		return false;
	}
	if ((is_screen_faded_out() || is_screen_fading_out()) || is_screen_fading_in())
	{
		return false;
	}
	if (_0x7ec0d68233e391ac(10) == 2 || _0x7ec0d68233e391ac(10) == 4)
	{
		return false;
	}
	if (func_443() || func_217(&Global_1296859))
	{
		return false;
	}
	if (func_444(_0xc17f69e1418cd11f(6)))
	{
		return false;
	}
	return true;
}

void func_177()
{
	iVar0 = func_435();
	Global_1878314->f_84 = func_446("MISSION_COMPLETE", &((*Global_1835011)[iVar0]->f_42), 908516622, func_445(Global_1878314->f_1.f_74), 1433015236, "MISSION_COMPLETE_DETAILS", 1808281178, 10000, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 0);
	Global_1878314->f_85 = get_game_timer();
}

bool func_178(int iParam0)
{
	if (func_444(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

bool func_179()
{
	if (Global_1878314->f_84 != 0 && _0x59fa676177dbe4c9(Global_1878314->f_84) != 6)
	{
		_0xdd1232b332cbb9e7(6, 1, 0);
	}
	set_script_gfx_draw_order(4);
	Var0.f_1 = 8;
	Var0.f_1.f_75 = 6;
	Var0.f_83 = -1;
	Var0.f_90 = -1;
	Var0 = &Global_1878314;
	_copy_memory(Global_1878314, &Var0, 93);
	return true;
}

void func_180()
{
	if (!func_447(Global_1878314->f_90))
	{
		return;
	}
	iVar0 = func_448(Global_1878314->f_90, 0);
	switch (iVar0)
	{
		case 1:
			break;
		case 2:
			Global_1878314->f_90 = -1;
			break;
		case 3:
			Global_1878314->f_90 = -1;
			break;
	}
}

struct<2> func_181(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

int func_182(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_183(int iParam0)
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

int func_184(int iParam0)
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

int func_185(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_190(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_190(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
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

bool func_186(struct<2> Param0)
{
	iVar0 = func_56(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

void func_187(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_55(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_281(Param0) && !func_186(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_449(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_56(Param0) == 3)
		{
			func_450(1, -1706799532);
		}
		else if (func_56(Param0) == 4)
		{
			func_450(0, -1706799532);
		}
	}
	if ((func_56(Param0) == 3 || func_56(Param0) == 1) || ((bParam5 && func_56(Param0) == 4) && _0x01f4d242765c6b24(func_449(Param0))))
	{
		if (iParam3 != -1)
		{
			func_451(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_451(Param0, 2, iParam4, 255, 0);
		}
	}
	func_452(Param0, 0);
	if (func_453(func_181(0), Param0))
	{
		func_454(1);
		func_455(0);
		func_456(0);
		func_457(1);
	}
	func_458(Param0);
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_182(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		_0x1096603b519c905f("");
	}
}

int func_188(struct<2> Param0)
{
	if (&Global_1900806 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1900806 - 1))
	{
		if (func_453(*(*Global_1900807)[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_189(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

bool func_190(struct<2> Param0, var uParam2)
{
	if (!func_55(Param0))
	{
		return false;
	}
	func_459(uParam2);
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

bool func_191()
{
	if (!network_is_game_in_progress())
	{
		return false;
	}
	if (_0xbaffde5f953720d9())
	{
		return false;
	}
	if (!func_460())
	{
		return false;
	}
	if (!func_461())
	{
		return false;
	}
	if (!func_462())
	{
		return false;
	}
	if (func_463())
	{
		return false;
	}
	return true;
}

bool func_192(int iParam0)
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

bool func_193(int iParam0)
{
	return _0xf6a8a652a6b186cd(func_464(iParam0));
}

int func_194(int iParam0)
{
	if (func_465())
	{
		return 2;
	}
	if (func_66())
	{
		return 2;
	}
	if (func_67())
	{
		return 2;
	}
	iVar0 = network_player_id_to_int();
	if ((*Global_263042)[iVar0]->f_1.f_16 != 0 && !func_329((*Global_263042)[iVar0]->f_1.f_20, 64))
	{
		return 2;
	}
	if ((*Global_263042)[iVar0]->f_1 != 255 && !func_329((*Global_263042)[iVar0]->f_1.f_20, 64))
	{
		return 2;
	}
	iVar1 = 0;
	if (func_281(func_181(0)))
	{
		iVar2 = func_182(func_181(0));
		if (iVar2 == 2)
		{
			if (func_58(func_181(0)) != iParam0)
			{
				return 2;
			}
		}
		else if (Global_1108365->f_935.f_28 != 6)
		{
			return 2;
		}
	}
	else if (&Global_1048577)
	{
		return 2;
	}
	return iVar1;
}

void func_195(int iParam0)
{
	iVar0 = func_188(func_466(iParam0));
	if (!func_467(iVar0))
	{
		return;
	}
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_28))
	{
		return;
	}
	if (_blip_set_modifier((*Global_1835011)[iParam0]->f_28, -1186550032))
	{
	}
}

void func_196(int iParam0, int iParam1)
{
	if (!func_467(iParam0))
	{
		return;
	}
	(*Global_1900838)[iParam0]->f_1 = ((*Global_1900838)[iParam0]->f_1 - ((*Global_1900838)[iParam0]->f_1 && iParam1));
}

void func_197(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	if (!func_467(iParam1))
	{
		iParam1 = func_188(func_466(iParam0));
		if (!func_467(iParam1))
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
		func_199(iParam0, iParam5, iParam1);
	}
	if (func_468(iParam1, 48))
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
		func_57((*Global_1835011)[iParam0]->f_1);
	}
	else
	{
		func_196(iParam1, 3831);
	}
	(*Global_1835011)[iParam0]->f_71 = 0;
}

Vector3 func_198(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_19;
}

bool func_199(int iParam0, float fParam1, int iParam2)
{
	if (func_95(32768))
	{
		return false;
	}
	iVar0 = func_54();
	if (func_469(&((*Global_1835011)[iParam0]->f_30), 512) && !func_469(&((*Global_1835011)[iParam0]->f_30), 1024))
	{
		if (func_262())
		{
			return false;
		}
	}
	if ((*Global_1835011)[iParam0]->f_67)
	{
		return false;
	}
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_28))
	{
		bVar3 = (*Global_1835011)[iParam0]->f_66;
		if (func_470(iParam0, iVar0))
		{
			vVar4 = { func_471(iParam0) };
			(*Global_1835011)[iParam0]->f_65 = _create_volume_sphere(vVar4, 0f, 0f, 0f, 19f, 19f, 19f);
			if (_does_volume_exist((*Global_1835011)[iParam0]->f_65))
			{
				(*Global_1835011)[iParam0]->f_28 = _0xa6ef0c54a3443e70(1673015813, (*Global_1835011)[iParam0]->f_65);
			}
		}
		else if (bVar3)
		{
			(*Global_1835011)[iParam0]->f_28 = _blip_add_for_coord(1673015813, func_472(iParam0));
		}
		else
		{
			(*Global_1835011)[iParam0]->f_28 = _blip_add_for_coord(1673015813, func_198(iParam0));
		}
		(*Global_1835011)[iParam0]->f_29 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2)
			{
				func_473(iParam2, 4194304);
			}
			else
			{
				func_196(iParam2, 4194304);
			}
		}
		set_blip_flash_timer((*Global_1835011)[iParam0]->f_28, 71, (*Global_1835011)[iParam0]->f_3);
	}
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_28))
	{
		return false;
	}
	func_474(iParam0);
	if (bVar1)
	{
		set_blip_sprite((*Global_1835011)[iParam0]->f_28, (*Global_1835011)[iParam0]->f_27, true);
		if (iVar0 != -1)
		{
			_set_blip_name_from_player_string((*Global_1835011)[iParam0]->f_28, &((*Global_1835011)[iParam0]->f_42));
		}
		if (!func_469(&((*Global_1835011)[iParam0]->f_30), 1024))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_28, 580546400);
			func_475(&((*Global_1835011)[iParam0]->f_30), 1024);
		}
		if (func_469(&((*Global_1835011)[iParam0]->f_30), 524288))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_28, -401963276);
		}
		if (func_469(&((*Global_1835011)[iParam0]->f_30), 1048576))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_28, -1878373110);
			_blip_set_modifier((*Global_1835011)[iParam0]->f_28, 231194138);
		}
	}
	return true;
}

void func_200(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_56((*Global_1835011)[iParam0]->f_1) == 2)
	{
		return;
	}
	bVar0 = iParam2 != -1;
	if (&Global_1296859 >= 0 && &Global_1296859 < 32)
	{
		if (func_476(iParam0, &iVar1))
		{
			if (iVar1 != (*Global_1056141)[&Global_1296859]->f_15.f_23)
			{
				(*Global_1056141)[&Global_1296859]->f_15.f_23 = iVar1;
			}
		}
	}
	if (func_477(iParam0))
	{
		func_197(iParam0, iParam1, 0, 1, 1, 0, 0);
		return;
	}
	if (func_194(iParam0) != 0)
	{
		func_195(iParam0);
		return;
	}
	func_478(iParam0);
	if ((*Global_1900838)[iParam1]->f_1 & 1 != 0)
	{
		bVar2 = true;
	}
	fVar3 = vdist2(func_198(iParam0), Global_35);
	if (!(*Global_1835011)[iParam0]->f_67)
	{
		if (!bVar2)
		{
			if (func_479(iParam0, fVar3, bVar0))
			{
				if (func_199(iParam0, fVar3, iParam1))
				{
					func_473(iParam1, 1);
				}
			}
			else if (bVar0)
			{
				if (func_469(&((*Global_1835011)[iParam0]->f_30), 2048) || func_469(&((*Global_1835011)[iParam0]->f_30), 32768))
				{
					func_473(iParam1, 1);
				}
			}
		}
	}
	else
	{
		if ((*Global_1900838)[iParam1]->f_1 & 1 == 0)
		{
			func_473(iParam1, 1);
		}
		if (does_blip_exist(Global_1900838[iParam1]))
		{
			remove_blip((*Global_1900838)[iParam1]);
		}
	}
	Var4 = { (*Global_1835011)[iParam0]->f_13 };
	func_480(iParam0);
	if (is_string_null_or_empty(&Var4))
	{
		return;
	}
	if ((*Global_1900838)[iParam1]->f_1 & 64 == 0)
	{
		if (_does_thread_exist((*Global_1835011)[iParam0]->f_17))
		{
			func_473(iParam1, 64);
		}
	}
	if (!bVar2)
	{
		return;
	}
	if ((*Global_1835011)[iParam0]->f_18)
	{
		if ((*Global_1900838)[iParam1]->f_1 & 64 != 0)
		{
			if (!_does_thread_exist((*Global_1835011)[iParam0]->f_17))
			{
				func_196(iParam1, 196);
			}
		}
		else if ((*Global_1900838)[iParam1]->f_1 & 32 != 0)
		{
			if (!has_script_loaded(&Var4))
			{
				func_196(iParam1, 32);
				return;
			}
			if (fVar3 < ((*Global_1835011)[iParam0]->f_60 * (*Global_1835011)[iParam0]->f_60) || func_469(&((*Global_1835011)[iParam0]->f_30), 32768))
			{
				iVar8 = 0;
				if (func_469(&((*Global_1835011)[iParam0]->f_30), 131072))
				{
					script_thread_iterator_reset();
					iVar8 = script_thread_iterator_get_next_thread_id();
					while (iVar8 != 0)
					{
						if (_get_hash_of_thread(iVar8) == 881353596)
						{
						}
						else
						{
							iVar8 = script_thread_iterator_get_next_thread_id();
						}
					}
				}
				if (_does_thread_exist(iVar8) && is_thread_active(iVar8, false))
				{
					(*Global_1835011)[iParam0]->f_17 = iVar8;
				}
				else if (func_469(&((*Global_1835011)[iParam0]->f_30), 65536))
				{
					if (get_number_of_free_stacks_of_this_size(45000) <= 0)
					{
						return;
					}
					iVar9 = iParam0;
					(*Global_1835011)[iParam0]->f_17 = start_new_script_with_args(&Var4, &iVar9, 2, 45000);
				}
				else
				{
					if (get_number_of_free_stacks_of_this_size(45000) <= 0)
					{
						return;
					}
					iVar11 = iParam0;
					(*Global_1835011)[iParam0]->f_17 = start_new_script_with_args(&Var4, &iVar11, 1, 6000);
				}
				set_script_as_no_longer_needed(&Var4);
				func_473(iParam1, 64);
				func_196(iParam1, 32);
			}
		}
		else
		{
			request_script(&Var4);
			func_473(iParam1, 16);
			if (has_script_loaded(&Var4))
			{
				func_473(iParam1, 32);
				func_196(iParam1, 16);
			}
		}
	}
}

void func_201(int iParam0)
{
	Var0 = { (*Global_1835011)[iParam0]->f_4 };
	if (_does_thread_exist((*Global_1835011)[iParam0]->f_8) && is_thread_active((*Global_1835011)[iParam0]->f_8, false))
	{
		iVar4 = func_188((*Global_1835011)[iParam0]->f_1);
		if (iVar4 > -1)
		{
			func_481(iParam0);
			func_93(iParam0);
		}
		return;
	}
	if (does_script_exist(&Var0))
	{
		request_script(&Var0);
	}
	else
	{
		return;
	}
	if (has_script_loaded(&Var0))
	{
		iVar5 = iParam0;
		if (func_482((*Global_1835011)[iParam0]->f_1))
		{
			func_483(&iVar5, 1);
		}
		(*Global_1835011)[iParam0]->f_8 = start_new_script_with_args(&Var0, &iVar5, 2, (*Global_1835011)[iParam0]->f_63);
		set_script_as_no_longer_needed(&Var0);
		func_481(iParam0);
		func_93(iParam0);
	}
}

char* func_202()
{
	return "net_impromptu_race_online";
}

bool func_203(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_204(char* sParam0, int iParam1)
{
	if (Global_1051252->f_80.f_101 >= 10)
	{
		return;
	}
	iVar0 = func_484(sParam0, iParam1);
	if (iVar0 != -1)
	{
		return;
	}
	StringCopy(Global_1051252->f_80[Global_1051252->f_80.f_101], sParam0, 64);
	Global_1051252->f_80[Global_1051252->f_80.f_101]->f_8 = get_hash_key(sParam0);
	Global_1051252->f_80[Global_1051252->f_80.f_101]->f_9 = iParam1;
	Global_1051252->f_80.f_101++;
	Global_1051252->f_45.f_1 = 1;
}

char* func_205()
{
	return "net_in_world_deathmatch";
}

int func_206(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return &(Global_39.f_3647[iParam0]);
	}
	return &(Global_25003[iParam0]);
}

int func_207(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return Global_39.f_3647[iParam0]->f_1;
	}
	return Global_25003[iParam0]->f_1;
}

void func_208(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_3647[iParam0] = iParam1;
		return;
	}
	Global_25003[iParam0] = iParam1;
	return;
}

void func_209(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_3647[iParam0]->f_1 = iParam1;
		return;
	}
	Global_25003[iParam0]->f_1 = iParam1;
	return;
}

void func_210(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_3647[iParam0]->f_2 = iParam1;
		return;
	}
	Global_25003[iParam0]->f_2 = iParam1;
	return;
}

int func_211(struct<2> Param0, var uParam2)
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

int func_212(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return Global_39.f_3647[iParam0]->f_2;
	}
	return Global_25003[iParam0]->f_2;
}

void func_213(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_3647[iParam0]->f_3 = iParam1;
		return;
	}
	Global_25003[iParam0]->f_3 = iParam1;
	return;
}

void func_214(int iParam0)
{
	vVar0 = { func_485(func_212(iParam0)) };
	Global_17081[iParam0] = _blip_add_for_coord(func_486(func_207(iParam0)), vVar0);
	set_blip_sprite(&(Global_17081[iParam0]), func_487(func_207(iParam0)), true);
	set_blip_flash_timer(&(Global_17081[iParam0]), func_207(iParam0), iParam0);
}

int func_215(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -4613767;
		case 1:
			return 1567162363;
		case 2:
			return 456471693;
		case 3:
			return -1772963474;
		case 4:
			return 1881496386;
		case 5:
			return 711768994;
		case 6:
			return -440834066;
		case 7:
			return -1363847832;
		case 8:
			return 967769300;
		case 9:
			return -1436873944;
		case 10:
			return -1585669139;
		case 11:
			return 16791368;
		case 12:
			return 1452922822;
		case 13:
			return 549538301;
		case 14:
			return 974698954;
		case 15:
			return 445881012;
		case 16:
			return -2043891857;
		case 17:
			return 419656993;
		case 18:
			return -1732457315;
		case 19:
			return 1794318026;
		case 20:
			return 2035159966;
		case 21:
			return 770832805;
		case 22:
			return -1109814766;
		case 24:
			return -1075550363;
		case 23:
			return -1080317735;
		case 25:
			return 2138576151;
		case 26:
			return 1180954297;
		case 27:
			return 783603394;
		case 28:
			return 1162337247;
		case 30:
			return -170458336;
		case 29:
			return 2023240596;
		case 31:
			return 1285083821;
		case 32:
			return -1840907462;
		case 33:
			return 756710130;
		case 34:
			return 1634157321;
		case 35:
			return 388370024;
		case 36:
			return 1092296123;
		case 37:
			return 467491346;
		case 38:
			return -1391584612;
		case 39:
			return -152111346;
		case 40:
			return 1447551317;
		case 41:
			return 153136092;
		case 42:
			return 1304405732;
		case 43:
			return 1074984055;
		case 53:
			return 1087476368;
		case 54:
			return -1768057340;
		case 44:
			return 1218874593;
		case 55:
			return -1438443836;
		case 45:
			return -2036340415;
		case 56:
			return -597278150;
		case 46:
			return 803939643;
		case 57:
			return -632496195;
		case 47:
			return -965943619;
		case 48:
			return 283532073;
		case 49:
			return -462827524;
		case 50:
			return -69067491;
		case 51:
			return -1864895118;
		case 58:
			return -1929806571;
		case 59:
			return -698525417;
		case 60:
			return -1149739894;
		case 52:
			return 380507325;
		case 61:
			return -875142075;
		case 62:
			return 407796241;
		case 63:
			return -152267914;
		case 64:
			return -1675443320;
		case 65:
			return 1940341639;
		case 66:
			return 1846596114;
		case 67:
			return 907708501;
		case 69:
			return 1825644981;
		case 70:
			return 2065937607;
		case 71:
			return -211317417;
		case 72:
			return 1801307910;
		case 73:
			return -4118897;
		case 74:
			return 1853610692;
		case 75:
			return -1574644415;
		case 76:
			return 2133055515;
		case 77:
			return -1413401932;
		case 78:
			return 801090761;
		case 79:
			return 2131218644;
		case 80:
			return 1708823660;
		case 81:
			return 7976942;
		case 82:
			return 2111120505;
		case 83:
			return 176893118;
		case 84:
			return 1179148161;
		case 68:
			return 602306665;
		case 85:
			return 547412068;
		case 86:
			return -1539748801;
		case 87:
			return -1605119912;
		case 88:
			return -884464063;
		case 89:
			return -1420970720;
		case 90:
			return 1017024547;
		case 91:
			return -1204497306;
		case 92:
			return -1621069480;
		case 93:
			return -458604261;
		case 94:
			return -923391614;
		case 95:
			return -689247089;
		case 97:
			return 44049568;
		case 98:
			return 1350259552;
		case 96:
			return 620414938;
		case 99:
			return -61661574;
		case 100:
			return -725338054;
		case 101:
			return -770123507;
		case 102:
			return 1322486734;
		case 103:
			return -460939553;
		case 104:
			return -1451863552;
		case 105:
			return 173833068;
		case 106:
			return -1681004136;
		case 107:
			return 713715980;
		case 108:
			return -31204969;
		case 109:
			return -1720064790;
		case 110:
			return -532172775;
		case 111:
			return -739067737;
		case 112:
			return -1203133835;
		case 113:
			return -1947411598;
		case 115:
			return -1298718762;
		case 116:
			return -595083064;
		case 117:
			return 884833917;
		case 118:
			return 2141950651;
		case 114:
			return -1049753365;
		case 119:
			return -1437650729;
		case 135:
			return 672925454;
		case 136:
			return 846062774;
		case 137:
			return 1713550306;
		case 138:
			return -1573562784;
		case 127:
			return 1369756178;
		case 128:
			return -736172423;
		case 129:
			return 1597070291;
		case 131:
			return -159501564;
		case 130:
			return -1438809608;
		case 132:
			return -102682392;
		case 133:
			return 676673543;
		case 134:
			return 1869665995;
		case 120:
			return -81068979;
		case 121:
			return 227618407;
		case 122:
			return 2106043438;
		case 123:
			return -1380256064;
		case 124:
			return -2118469183;
		case 125:
			return -558997834;
		case 126:
			return 1563120499;
		case 139:
			return 658339366;
		default:
			break;
	}
	if (bParam1)
	{
		return 1757124778;
	}
	return 0;
}

bool func_216(int iParam0)
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

bool func_217(int iParam0)
{
	return func_488(1, iParam0);
}

bool func_218()
{
	iVar0 = func_182(func_181(0));
	iVar1 = 0;
	iVar2 = get_entity_model(get_player_ped(player_id()));
	iVar3 = func_489(1, iVar2);
	if (iVar3 == -1)
	{
		return false;
	}
	iVar4 = func_490(iVar3);
	if (!_unlock_is_unlocked(iVar4) || !_unlock_is_visible(iVar4))
	{
		return false;
	}
	if ((Global_1952637->f_3291.f_1 && iVar0 == 3) && func_58(func_181(0)) == 30)
	{
		iVar1 = 1;
	}
	return iVar1;
}

bool func_219(int iParam0)
{
	return (Global_1952637 && iParam0) != 0;
}

void func_220(int iParam0)
{
	Global_1952637 = (Global_1952637 || iParam0);
}

bool func_221(int iParam0)
{
	return func_488(49, iParam0);
}

Vector3 func_222(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

void func_223(vector3 vParam0, var uParam3)
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
		func_491(uParam3);
	}
}

bool func_224(struct<30> Param0, struct<9> Param30, int iParam39, int iParam40, int iParam41)
{
	if (func_492(255))
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
		func_493(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = { Param0 };
		func_494(&(Global_1102219->f_3888));
		Global_1102219->f_3888 = { Param30 };
		Global_1102219->f_3919 = iParam39;
		Global_1102219->f_3920 = iParam40;
		Global_1102219->f_3921 = iParam41;
		func_495(Global_1102219->f_3849, 36);
		func_496(Global_1102219->f_3888, 36);
		func_497(48);
		return true;
	}
	return false;
}

int func_225(vector3 vParam0, float fParam3, vector3 vParam4, int iParam7)
{
	if (func_492(255))
	{
		func_498(&(Global_1102219->f_3879));
		Global_1102219->f_3879.f_6 = { vParam0 };
		if (does_entity_exist(iParam7))
		{
			Global_1102219->f_3879.f_4 = iParam7;
			Global_1102219->f_3879.f_5 = 3;
		}
		else if (!func_203(vParam4))
		{
			Global_1102219->f_3879.f_1 = { vParam4 };
			Global_1102219->f_3879.f_5 = 2;
		}
		else
		{
			Global_1102219->f_3879 = fParam3;
			Global_1102219->f_3879.f_5 = 1;
		}
		func_499(Global_1102219->f_3879, 36);
		func_500(4);
		func_497(48);
		return 1;
	}
	return 0;
}

void func_226(bool bParam0, bool bParam1)
{
	if (func_501(255) == 4)
	{
		return;
	}
	if (func_203(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_497(0);
	}
	else
	{
		if (bParam1)
		{
			func_502(0, 0, 0, 1);
		}
		func_500(0);
		func_493(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_494(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_495(Global_1102219->f_3849, 36);
	func_496(Global_1102219->f_3888, 36);
}

void func_227(int iParam0)
{
	Global_1952637 = (&Global_1952637 - (Global_1952637 && iParam0));
}

bool func_228(int iParam0, int iParam1)
{
	if (iParam1 != 255)
	{
		return ((*Global_1145091)[iParam1]->f_23.f_10 && iParam0) != 0;
	}
	return (Global_1139381->f_4779.f_10 && iParam0) != 0;
}

void func_229(int iParam0)
{
	Global_1139381->f_4779.f_10 = (Global_1139381->f_4779.f_10 - (Global_1139381->f_4779.f_10 && iParam0));
}

void func_230(int iParam0)
{
	Global_1139381->f_4779.f_10 = (Global_1139381->f_4779.f_10 || iParam0);
}

void func_231(char* sParam0, char* sParam1)
{
	if (decor_exist_on(Global_34, sParam0))
	{
		iVar0 = decor_get_int(Global_34, sParam0);
		if (!func_503(iVar0))
		{
			decor_remove(Global_34, sParam0);
			decor_remove(Global_34, sParam1);
			return;
		}
		if (!has_ped_got_weapon(Global_34, iVar0, 0, true))
		{
			decor_remove(Global_34, sParam0);
			decor_remove(Global_34, sParam1);
			return;
		}
		iVar1 = decor_get_int(Global_34, sParam1);
		if (func_504(iVar1))
		{
			if (func_505(iVar1, 0))
			{
				decor_remove(Global_34, sParam0);
				decor_remove(Global_34, sParam1);
			}
		}
	}
}

int func_232(vector3 vParam0)
{
	iVar0 = -1;
	fVar1 = 999999.9f;
	if (func_203(vParam0))
	{
		return -1;
	}
	iVar3 = 0;
	while (iVar3 < Global_1893587->f_161)
	{
		iVar2 = &Global_1893587->f_10[iVar3];
		fVar4 = vdist2(vParam0, (*Global_1887339)[iVar2]->f_7);
		if (fVar4 < fVar1)
		{
			iVar0 = iVar2;
			fVar1 = fVar4;
		}
		iVar3++;
	}
	if (func_26(iVar0))
	{
	}
	else
	{
		iVar0 = -1;
	}
	return iVar0;
}

void func_233(int iParam0, bool bParam1)
{
	func_274(iParam0, &iVar0, &iVar1);
	if (!func_506(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_507(iVar0, iVar1);
}

void func_234(int iParam0)
{
	if (!func_265(iParam0))
	{
		return;
	}
	func_508(1);
}

bool func_235(int iParam0)
{
	return !func_217(iParam0);
}

bool func_236()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_237()
{
	return func_329(Global_1572887->f_7, 1);
}

bool func_238(bool bParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_509(iVar0, bParam0))
		{
			if (!bParam1 || func_510(iVar0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_239()
{
	return (Global_1915715->f_20637 || Global_1915715->f_22504.f_1);
}

bool func_240(int iParam0, int iParam1, bool bParam2)
{
	Var0.f_9 = -1591664384;
	if (!func_511(iParam0, 0))
	{
		return false;
	}
	if (!func_512(iParam0, &uVar22, &Var0, iParam1))
	{
		return false;
	}
	if (!bParam2)
	{
		if (func_513(iParam0, &Var0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_241(int iParam0, int iParam1)
{
	if (!func_511(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_514(iParam0);
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
			if (!func_515(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_516(iParam0))
			{
				return true;
			}
			break;
	}
	return func_517(iParam0, 0, 0, 0) >= iParam1;
}

bool func_242(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17411.f_2565[iVar1]), iVar2);
}

void func_243(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (_0xfbe782b3165ac8ec(iParam2))
	{
		if (!func_242(iParam0))
		{
			if (iParam3 < 0)
			{
				func_233(iParam0, 0);
			}
			else if (func_518(iParam1) == iParam3)
			{
				func_233(iParam0, 0);
			}
			else if (func_518(iParam1) > iParam3)
			{
				func_274(iParam0, &uVar0, &uVar1);
				func_117(&uVar0, &uVar1);
			}
		}
	}
}

bool func_244(int iParam0)
{
	return is_bit_set(iLocal_13, iParam0);
}

bool func_245()
{
	if (func_519(4))
	{
		return Global_1940258->f_21;
	}
	return func_520();
}

bool func_246(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return false;
	}
	iVar0 = func_521(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_unlocked(iVar0))
	{
		iVar1 = func_522(1, iParam0);
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

void func_247()
{
	sVar0 = "PM_COLLECTOR_NEW_TYPE_UNLOCKED_HDR";
	sVar1 = "PM_COLLECTOR_NEW_TYPE_UNLOCKED_DESC";
	iVar5 = 773314749;
	uVar4 = weekly_collectible_get_item_set_buy_award(1332470872, 0);
	if (!func_523(uVar4, &Var6, 0, 0, 0, 0))
	{
	}
	Var6 = "MP_ROLES_COLLECTOR_TIER";
	Var6.f_1 = "pm_roles_mp_index";
	if (func_524())
	{
		iVar3 = get_hash_key(Var6);
		iVar2 = get_hash_key(Var6.f_1);
	}
	func_525(sVar0, sVar1, iVar2, iVar3, iVar5, _create_var_string(2, "RECIPE_COLLECT_VIEW"), -76766502);
}

int func_248(int iParam0)
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

int func_249(int iParam0)
{
	if (is_valid_interior(iParam0))
	{
		_get_interior_info(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case 653987431:
			case 1442115297:
			case 1911907177:
				return 1;
		}
	}
	return 0;
}

void func_250(bool bParam0)
{
	if (bParam0)
	{
		Global_1893587 |= 512;
	}
	else
	{
		Global_1893587 = (&Global_1893587 - Global_1893587 & 512);
	}
}

int func_251()
{
	return Global_1896622->f_41;
}

bool func_252(int iParam0)
{
	if (iParam0 != -1 && iParam0 < 5)
	{
		return _does_volume_exist(&(Global_26642[iParam0]));
	}
	return false;
}

void func_253(int iParam0, bool bParam1, bool bParam2)
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
		if (Global_34 == iParam0)
		{
		}
		_set_entity_health(iParam0, 0, 0);
	}
}

float func_254()
{
	return Global_1146212->f_2169[83]->f_201;
}

int func_255(bool bParam0, bool bParam1, bool bParam2)
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

bool func_256(int iParam0)
{
	if (!func_26(iParam0))
	{
		return false;
	}
	return func_63(iParam0, 16777216);
}

bool func_257(int iParam0)
{
	if (!func_26(iParam0))
	{
		return false;
	}
	return func_63(iParam0, 33554432);
}

bool func_258(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iVar0 == 6 || (iVar0 == 5 && bParam0))
		{
		}
		else if (func_526(iVar0) > 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_259(int iParam0)
{
	if (!func_527(iParam0))
	{
		return false;
	}
	return func_528(iParam0);
}

void func_260(int iParam0)
{
	if (!func_527(iParam0))
	{
		return;
	}
	func_529(iParam0);
	func_530(iParam0);
}

bool func_261()
{
	if (func_273())
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1904651[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_262()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_263()
{
	return Global_1939161->f_4;
}

bool func_264(int iParam0, int iParam1)
{
	if (!func_531(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_190[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1071686->f_21325[iParam0]->f_5 && iParam1) != 0;
}

bool func_265(int iParam0)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1904651->f_33[iParam0]->f_1;
	}
	return false;
}

bool func_266(int iParam0)
{
	func_274(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1904651[iVar0];
	return is_bit_set(iVar2, iVar1);
}

bool func_267()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) <= 4);
}

bool func_268(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

bool func_269()
{
	return Global_1071686->f_28662.f_22.f_3 != 0;
}

bool func_270()
{
	if (!func_236())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

bool func_271()
{
	return Global_1896738->f_382;
}

bool func_272()
{
	if (!func_236())
	{
		return false;
	}
	uVar0 = Global_1904651->f_8685;
	Global_1904651->f_8685 = 0;
	return uVar0;
}

bool func_273()
{
	return Global_1904651->f_8683 != -1;
}

void func_274(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_275(int iParam0)
{
	if (func_100(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_276()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

bool func_277()
{
	return (Global_1893587 & 1 != 0 && func_25() != -1);
}

bool func_278(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			if (func_532(0, 2) > 0f)
			{
				return false;
			}
			break;
		case 101:
			if (func_532(2, 2) > 0f)
			{
				return false;
			}
			break;
		case 100:
			if (func_532(1, 2) > 0f)
			{
				return false;
			}
			break;
		case 676:
			if (!func_533(&(Global_1296859->f_154[&Global_1296859])))
			{
				return false;
			}
			break;
		case 161:
			return _0x3bdfcf25b58b0415(Global_34);
		case 96:
			return func_534();
		case 97:
			return func_535();
	}
	return true;
}

bool func_279(int iParam0)
{
	if (!func_536(iParam0))
	{
		return false;
	}
	if (iParam0 == 46 || iParam0 == 93)
	{
		return false;
	}
	iVar0 = func_377(iParam0);
	if (((((((((((((iVar0 == 10 || iVar0 == 29) || iVar0 == 4) || iVar0 == 14) || iVar0 == 15) || iVar0 == 16) || iVar0 == 27) || iVar0 == 28) || iVar0 == 35) || iVar0 == 35) || iVar0 == 38) || iVar0 == 29) || iVar0 == 39) || iVar0 == 33)
	{
		return true;
	}
	return false;
}

int func_280(int iParam0)
{
	iVar1 = -1;
	iVar2 = get_cloud_time_as_int();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3534)
	{
		if (Global_39.f_3534[iVar0]->f_2 == iParam0)
		{
			iVar4 = 3;
			if (func_100(iParam0, 131072))
			{
				iVar4 = 2;
			}
			if (Global_39.f_3534[iVar0]->f_1 >= iVar4)
			{
				return 0;
			}
			iVar3 = (&Global_39.f_3534[iVar0] - iVar2);
			if (iVar3 > 1800 || !func_100(iParam0, 32768))
			{
				Global_39.f_3534[iVar0]->f_1++;
				Global_39.f_3534[iVar0] = iVar2;
				return 1;
			}
			return 0;
		}
		else if (iVar1 == -1 && Global_39.f_3534[iVar0]->f_2 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		Global_39.f_3534[iVar1]->f_2 = iParam0;
		Global_39.f_3534[iVar1] = iVar2;
		Global_39.f_3534[iVar1]->f_1++;
	}
	return 1;
}

bool func_281(struct<2> Param0)
{
	iVar0 = func_56(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_282(int iParam0)
{
	switch (get_player_team(iParam0))
	{
		case 0:
			return -275684858;
		case 1:
			return -1561147190;
		case 2:
			return -736318691;
		case 3:
			return 158864851;
		case 4:
			return 923463928;
		case 5:
			return -317694716;
		case 6:
			return 461388259;
		case 7:
			return 1811916478;
		case 8:
			return 1713937168;
		default:
			break;
	}
	return -1031763995;
}

int func_283(int iParam0)
{
	if (_0x901e0dc25080c8b9(iParam0) != Global_1296859->f_15 && !func_66())
	{
		return 636925055;
	}
	return -963477619;
}

bool func_284(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_285(int iParam0, bool bParam1)
{
	iVar0 = floor(func_537(iParam0, bParam1));
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

bool func_286(int iParam0, bool bParam1)
{
	if (iParam0 == 255)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return false;
	}
	if (iParam0 == Global_1296859->f_10)
	{
		return true;
	}
	iVar0 = iParam0;
	if (!&Global_1296859->f_22[iVar0])
	{
		return false;
	}
	if (bParam1)
	{
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28350), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28348), iVar0))
		{
			return false;
		}
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28349), iVar0))
		{
			return true;
		}
	}
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iVar0))
	{
		return true;
	}
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28347), iVar0))
	{
		return false;
	}
	iVar1 = get_player_team(Global_1296859->f_10);
	iVar2 = get_player_team(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return true;
	}
	else if (_0x81fb74c83c2ed69f(iParam0))
	{
		return true;
	}
	return false;
}

bool func_287(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if (iParam0 == player_id())
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28349), iVar0))
		{
			return false;
		}
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28350), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28348), iVar0))
		{
			return true;
		}
	}
	if (func_538(iParam0))
	{
		return true;
	}
	return !func_286(iParam0, 0);
}

bool func_288(int iParam0, bool bParam1)
{
	if (iParam0 == player_id())
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28349), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28350), iVar0))
		{
			return false;
		}
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28348), iVar0))
		{
			return true;
		}
	}
	if (func_539(iParam0))
	{
		return false;
	}
	if (func_538(iParam0))
	{
		return false;
	}
	if (func_540(iParam0))
	{
		return true;
	}
	return func_541(iParam0);
}

int func_289(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -504335712;
		case 1:
			return 395262693;
		case 2:
			return -933924539;
		case 3:
			return 371211549;
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

char* func_290(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_291(int iParam0, var uParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	*uParam1 = { (*Global_1137457)[iParam0]->f_2 };
	return true;
}

int func_292(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (&Global_1904651->f_8691[iVar0] != 0)
		{
			uVar1 = &Global_1904651->f_8691[iVar0];
			if (bParam0)
			{
				Global_1904651->f_8691[iVar0] = 0;
			}
			return uVar1;
		}
		iVar0++;
	}
	return 0;
}

bool func_293(int iParam0)
{
	return func_542(iParam0, 2);
}

bool func_294(int iParam0, float fParam1, var uParam2)
{
	if (!is_thread_active((*Global_1951255)[iParam0]->f_16, false))
	{
		return true;
	}
	switch ((*Global_1951255)[iParam0]->f_5)
	{
		case 1:
			if (!_does_volume_exist((*Global_1951255)[iParam0]->f_10))
			{
				return true;
			}
			*uParam2 = { _0xf70f00013a62f866((*Global_1951255)[iParam0]->f_10) };
			break;
		case 3:
			if (!does_entity_exist((*Global_1951255)[iParam0]->f_11))
			{
				return true;
			}
			*uParam2 = { get_offset_from_entity_in_world_coords((*Global_1951255)[iParam0]->f_11, (*Global_1951255)[iParam0]->f_12) };
			break;
		case 5:
			*uParam2 = { 0f, 0f, 0f };
			*fParam1 = 0f;
			return false;
		case 2:
			*uParam2 = { (*Global_1951255)[iParam0]->f_6 };
			break;
		case 0:
		case 4:
			return false;
	}
	*fParam1 = vdist2(Global_35, *uParam2);
	if (!func_542(iParam0, 128))
	{
		if (*fParam1 > 22500f)
		{
			return true;
		}
	}
	return false;
}

void func_295(int iParam0)
{
	if (!func_293(iParam0))
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

int func_296(int iParam0)
{
	if (!func_511(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_543(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

int func_297(int iParam0)
{
	if (!func_511(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_298(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
		default:
			break;
	}
	return true;
}

bool func_299(int iParam0, int iParam1)
{
	if (!func_511(iParam0, 0))
	{
		return func_545(func_544(iParam0), iParam1);
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

int func_300(int iParam0)
{
	if (!func_511(iParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if (Var0.f_18[iVar35]->f_1 == 14460646)
			{
				if (&Var0.f_18[iVar35] != 0)
				{
					return &(Var0.f_18[iVar35]);
				}
			}
			iVar35++;
		}
	}
	return 0;
}

var func_301(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_302(int iParam0, int iParam1)
{
	if (!func_511(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

char* func_303(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_304(int iParam0, bool bParam1)
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

bool func_305(int iParam0)
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
	if (((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864) || iVar0 == -2016812721)
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

void func_306(float fParam0)
{
}

void func_307()
{
	animpostfx_stop("PlayerDrunk01");
	Global_1940085->f_15 = 0f;
}

char* func_308(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

bool func_309(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

struct<2> func_310()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_311(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return true;
	}
	if (func_55(*Global_1051213) && !func_453(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_546(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_547(iParam3, 255))
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
	if (func_66())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_55(*Global_1051213))
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

bool func_312()
{
	return func_548(func_181(0));
}

void func_313()
{
	if (!Global_1940085->f_28.f_1)
	{
		Global_1940085->f_28.f_1 = 1;
	}
}

void func_314()
{
	Global_1940085->f_28 = 0;
	Global_1940085->f_28.f_1 = 0;
	Global_1940085->f_28.f_2 = 0;
	Global_1940085->f_28.f_3 = 0;
	Global_1940085->f_28.f_4 = 0;
	Global_1940085->f_28.f_8 = 0;
}

void func_315(int iParam0)
{
	Global_1940085->f_28.f_8 = iParam0;
}

char* func_316()
{
	return "MECH_LOCO_M@CHARACTER@ARTHUR@DRUNK@UNARMED@STUMBLE@TRANSITION@DRUNK_STUMBLE_TO_WALK_LF";
}

bool func_317(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (is_ped_sitting_in_any_vehicle(iParam0))
	{
		return true;
	}
	if (!is_ped_still(iParam0))
	{
		return false;
	}
	if (!is_entity_upright(iParam0, 90f))
	{
		return false;
	}
	if (_get_ped_crouch_movement(iParam0))
	{
		return false;
	}
	if (get_ped_stealth_movement(iParam0))
	{
		return false;
	}
	if (is_ped_jumping(iParam0))
	{
		return false;
	}
	if (is_ped_ragdoll(iParam0))
	{
		return false;
	}
	vVar10 = { get_ped_bone_coords(iParam0, 56200, 0f, 0f, 0f) };
	*vVar0[2] = { get_ped_bone_coords(iParam0, 45454, 0f, 0f, 0f) };
	if ((vVar10.z - vVar0[2]->f_2) > 0.7f)
	{
		return false;
	}
	*vVar0[0] = { get_ped_bone_coords(iParam0, 65478, 0f, 0f, 0f) };
	*vVar0[1] = { get_ped_bone_coords(iParam0, 55120, 0f, 0f, 0f) };
	fVar13 = func_549(*vVar0[2] - *vVar0[1], *vVar0[1] - *vVar0[0]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return false;
	}
	*vVar0[0] = { get_ped_bone_coords(iParam0, 6884, 0f, 0f, 0f) };
	*vVar0[1] = { get_ped_bone_coords(iParam0, 43312, 0f, 0f, 0f) };
	*vVar0[2] = { get_ped_bone_coords(iParam0, 33646, 0f, 0f, 0f) };
	fVar13 = func_549(*vVar0[2] - *vVar0[1], *vVar0[1] - *vVar0[0]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return false;
	}
	return true;
}

char* func_318()
{
	return "MOVE";
}

void func_319(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (_0x083d497d57b7400f(Global_1296859->f_8))
	{
		return;
	}
	if (!is_entity_dead(Global_1296859->f_8))
	{
		if (bParam2)
		{
			disable_ped_pain_audio(Global_1296859->f_8, true);
		}
		if (bParam3)
		{
			set_ped_config_flag(Global_1296859->f_8, 243, true);
		}
		Var0 = player_ped_id();
		Var0.f_1 = uParam0;
		Var0.f_2 = to_float(get_entity_health(player_ped_id()));
		Var0.f_3 = 1;
		Var0.f_5 = iParam1;
		Var0.f_12 = (iParam1 != 0 && _is_weapon_melee(iParam1));
		func_550(&Var0, &(Global_1102219->f_3599));
		_0x1ce875505d45338a(player_ped_id(), uParam0, iParam1);
	}
}

bool func_320()
{
	if (func_551(-524145696))
	{
		if (func_552(809554858))
		{
			return true;
		}
		func_553(-524145696);
	}
	if (func_551(-1223121209))
	{
		if (func_552(-451832572))
		{
			return true;
		}
		func_553(-1223121209);
	}
	if (func_551(-1053549743))
	{
		if (func_552(1033721560) || func_555(func_554(111), Global_35))
		{
			return true;
		}
		func_553(-1053549743);
	}
	if (func_551(1649996811))
	{
		if (func_552(197447134))
		{
			return true;
		}
		func_553(1649996811);
	}
	if (func_551(1478132521))
	{
		if (func_556(398639187, 1120403456))
		{
			return true;
		}
		func_553(1478132521);
	}
	return false;
}

void func_321(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		func_557(iParam0);
	}
}

void func_322(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_1939655->f_28[iVar1], iVar2);
}

void func_323()
{
	if (Global_1939655->f_303)
	{
		_0xe057fea9a22eb3ee(1253225952);
		_0xe057fea9a22eb3ee(1483100487);
		_0xe057fea9a22eb3ee(-1323466060);
		_0xe057fea9a22eb3ee(346317463);
		Global_1939655->f_303 = 0;
	}
	if (!Global_1939655->f_304)
	{
		_0x1392105da88bbffb(577490767, -811f, -1212.5f, 0, 0);
		Global_1939655->f_304 = 1;
	}
	func_332(-37875204);
	func_332(258104717);
	func_332(-76700394);
	func_332(1614255891);
	func_332(1861460906);
	func_332(1044079550);
	func_341("nav_shack_BA");
	func_321(-1079295176);
	func_321(894787561);
	func_332(-1276109918);
	func_332(-1386423483);
	func_332(-1405375965);
	func_332(1277540472);
	func_332(-1331593143);
	func_332(1133172356);
	func_332(-559257162);
	func_341("nav_shack_BB");
	func_321(979670262);
	func_321(418666411);
	func_321(651621232);
	func_332(-574996782);
	func_332(1169511062);
	func_332(-1266106154);
	func_332(-1377975054);
	func_332(897624424);
	func_332(-2111718052);
	func_341("nav_shack_BC");
	func_321(-165202905);
	func_321(-1327148782);
	func_321(-1965378386);
	func_332(175578406);
	func_332(-686953321);
	func_332(-1737485501);
	func_332(-739754595);
	func_332(942470447);
	func_332(-1859413313);
	func_332(489834626);
	func_321(-1667265438);
	func_321(54029413);
	func_321(-1070234238);
	func_321(-931280709);
	func_321(-1170563128);
	func_321(1394163483);
	func_341("nav_std_train_station_es");
	func_332(-5339556);
	func_332(1258244391);
	func_332(1343343014);
	func_332(-2082201137);
	func_332(1641449717);
	func_332(739412171);
	func_332(-501793326);
	func_341("nav_blackwater_endless_summer");
	func_321(1173561253);
	func_321(1470738186);
	func_321(-1632348233);
	func_332(903666582);
	func_321(1081087978);
	func_341("nav_val_es");
	func_341("nav_val_es_saloon_lockdown");
	func_341("nav_val_es_full_lockdown");
	func_332(-1509154451);
	func_321(1517736440);
	func_321(-693132475);
	func_341("nav_annesburg_es");
	func_332(158063004);
	func_341("nav_coots_graves");
	func_332(-1112373128);
	func_332(-891994084);
	func_332(-84516711);
	func_332(-657241692);
	func_321(1596089211);
	func_321(-2133417899);
	func_321(1274804496);
	func_321(1597665303);
	func_321(116162819);
	func_341("nav_cornwall_es");
	set_ambient_zone_list_state_persistent("AZL_Cornwall_K_and_T_Endless_Summer", false, true);
	set_ambient_zone_list_state_persistent("AZL_Cornwall_K_and_T_Normal", true, true);
	set_static_emitter_enabled("SE_Cornwall_Kerosene_And_Tar_Ambient_Emitter", true);
	uVar0 = func_558(2087609309);
	if (!_0x113857d66a9cabe6(uVar0))
	{
		_0xbfcb17895bb99e4e(uVar0, 1);
	}
	func_332(-1380983970);
	func_332(-1912028958);
	func_321(563944718);
	func_341("nav_bridge_to_old_world");
	if (_does_scenario_group_exist_hash(1883691509))
	{
		_set_scenario_group_enabled_hash(1883691509, false);
	}
	if (_does_scenario_group_exist_hash(-1647292773))
	{
		_set_scenario_group_enabled_hash(-1647292773, true);
	}
	if (_does_scenario_group_exist_hash(-824533183))
	{
		_set_scenario_group_enabled_hash(-824533183, true);
	}
	if (_does_scenario_group_exist_hash(-619084588))
	{
		_set_scenario_group_enabled_hash(-619084588, true);
	}
	if (_does_scenario_group_exist_hash(672230639))
	{
		_set_scenario_group_enabled_hash(672230639, true);
	}
	if (func_54() == -1)
	{
		if (func_559(60, &iVar2, &iVar3, 0, 0))
		{
			iVar1 = 0;
			while (iVar1 < (iVar3 - iVar2) + 1)
			{
				func_560((iVar2 + iVar1), 32);
				iVar1++;
			}
		}
		if (func_559(70, &iVar2, &iVar3, 0, 0))
		{
			iVar1 = 0;
			while (iVar1 < (iVar3 - iVar2) + 1)
			{
				func_560((iVar2 + iVar1), 32);
				iVar1++;
			}
		}
		if (!func_53(0, 0, 1))
		{
			func_560(938, 32);
			func_560(934, 32);
		}
		func_561(41788943);
	}
}

void func_324()
{
	func_562(60);
	func_562(111);
	func_562(101);
	func_321(481636996);
	func_345(202296518, 0, 0, 0, 1, 0, 0, 0);
	func_349(2061942857, 1);
	func_349(-1642093909, 1);
	func_349(-316061449, 1);
	func_349(-201071322, 1);
	func_349(1523300673, 1);
	func_349(815031507, 1);
	func_349(-1847993131, 1);
	func_349(779421929, 1);
	func_349(1256786197, 1);
	func_349(1423877126, 1);
	func_349(1682160693, 1);
	func_349(142240370, 1);
	func_349(1102743282, 1);
	func_345(1477864640, 1, 0, 0, 0, 0, 0, 0);
	func_322(238);
	func_333(211);
	func_333(210);
	func_333(212);
	func_333(213);
	func_333(214);
	func_333(215);
	func_333(216);
	func_333(217);
	func_333(218);
	func_333(219);
	func_333(220);
	func_333(221);
	func_333(222);
	func_333(223);
	func_333(224);
	func_332(1454866069);
	func_332(-383442850);
	func_332(531960211);
	func_332(1020450527);
	func_332(-2041779893);
	func_332(1123990218);
	func_332(1557698400);
	func_332(2116024182);
	func_332(-1141831946);
	func_332(-1111286486);
	func_332(-1017701936);
	func_332(107317036);
	func_332(1193229750);
	func_332(1492183352);
	func_332(2123010634);
	func_332(-1664053323);
	func_332(-1375030991);
	func_332(-313992757);
	func_333(204);
	func_333(205);
	func_333(206);
	func_333(207);
	func_333(208);
	func_333(209);
	func_332(-1176501741);
	func_333(24);
	if (!func_66())
	{
		func_339(1121239638, 1);
		func_339(-1677757270, 1);
		func_339(906662604, 1);
		func_339(-310410837, 1);
	}
	func_333(183);
	func_333(185);
	func_322(184);
	func_321(1260721433);
	func_332(642301973);
	func_333(231);
	func_333(233);
	func_333(235);
	func_322(230);
	func_322(232);
	func_322(234);
	func_341("hmrb_chez_abandoned");
	func_342("hmrb_chez_occupied");
	func_322(239);
	func_321(626046501);
	func_321(-1912880320);
	func_321(319165147);
	func_321(1817836578);
}

void func_325()
{
	Global_1939655 = &Global_1939655 + 1;
}

void func_326()
{
	func_563();
	if (func_54() == 0)
	{
		func_321(-1253110600);
		func_321(-1402083909);
	}
	iVar0 = -1;
	if (func_328(704802028))
	{
		func_321(-1012618146);
		func_321(-722030448);
		func_342("nav_mesh_beech_shack");
		func_321(-1253110600);
		func_321(-1402083909);
		func_321(1970695826);
		func_321(-382865315);
		func_321(-904669171);
		func_321(774601424);
		func_321(-584332967);
		func_321(-1615103170);
		func_321(1256771838);
		func_321(-1765152778);
		func_321(-2072231077);
		func_321(19217583);
	}
	else if (func_328(588987611))
	{
		func_321(-1012618146);
		func_321(-722030448);
		func_321(1757739778);
		func_342("nav_mesh_beech_shack_with_fire");
		func_321(578474998);
		func_321(-1253110600);
		func_321(-1402083909);
		func_321(1970695826);
		func_321(-382865315);
	}
	else if (func_328(2008888900))
	{
		func_321(-1012618146);
		func_321(1757739778);
		func_342("nav_mesh_beech_shack_with_fire");
		func_321(197447134);
		func_321(578474998);
		func_321(-1253110600);
		func_321(-1402083909);
		func_321(1970695826);
		func_321(-382865315);
		func_332(-722030448);
	}
	else if (func_328(1649996811))
	{
		func_321(197447134);
		func_342("nav_mesh_beech_camp_with_rubble");
		func_321(578474998);
		func_321(-1253110600);
		func_321(-1402083909);
		func_321(1970695826);
		func_321(-382865315);
		func_321(2111816145);
	}
	else if (func_328(227918160))
	{
		func_321(197447134);
		func_321(-1253110600);
		func_321(-1402083909);
		func_321(1970695826);
		func_321(-382865315);
		func_321(578474998);
		func_342("nav_mesh_beech_camp_with_supplies");
	}
	else if (func_328(168171957))
	{
		func_321(197447134);
		func_321(1681117196);
		func_321(-1667461262);
		func_321(-974480336);
		func_321(411742897);
		func_321(1344772301);
		func_321(1467774743);
		func_321(43335376);
		func_342("nav_mesh_beech_house_finished");
		func_321(-284612948);
		func_321(-1325016116);
		func_321(578474998);
		func_322(109);
		func_322(114);
		func_322(98);
		func_322(99);
	}
	else if (func_328(1193080109))
	{
		func_321(-1667461262);
		func_321(411742897);
		func_321(1344772301);
		func_321(1467774743);
		func_321(-956131204);
		func_321(578474998);
		func_321(43335376);
		func_321(1353861354);
		func_321(1205945639);
		func_342("nav_mesh_beech_barn_finished");
		func_321(-284612948);
		func_321(431365499);
		func_321(276582710);
		func_321(1191890045);
		func_321(1864768904);
		func_321(-692583342);
		func_321(-918785150);
		func_322(114);
		func_322(98);
		func_322(100);
		func_322(101);
		func_333(116);
		func_322(102);
		func_322(103);
		func_322(109);
		if (func_564(106))
		{
			func_333(105);
		}
		else
		{
			func_322(105);
		}
	}
	else if (func_328(-639037538))
	{
		func_321(-1667461262);
		func_321(411742897);
		func_321(1467774743);
		func_321(-956131204);
		func_321(1353861354);
		func_342("nav_mesh_beech_house_decor");
		func_321(578474998);
		func_321(1236917971);
		func_321(43335376);
		func_321(-284612948);
		func_321(-2090209059);
		func_321(1977031606);
		func_321(1929454697);
		func_321(938290967);
		func_321(1532009326);
		func_321(1344772301);
		func_321(-918785150);
		func_321(-692583342);
		func_321(-803019223);
		_0xdfea23ec90113657(-803019223);
		func_321(-1860722801);
		func_321(637627640);
		func_321(349494711);
		func_322(115);
		func_322(114);
		func_322(98);
		func_322(107);
		func_322(100);
		func_322(108);
		func_322(104);
		if (!func_564(117))
		{
			func_322(116);
		}
		else
		{
			func_333(116);
		}
		func_322(109);
	}
	else if (func_328(-491981251))
	{
		func_321(-1667461262);
		func_321(411742897);
		func_321(1467774743);
		func_321(-956131204);
		func_321(1353861354);
		func_342("nav_mesh_beech_house_decor");
		func_321(578474998);
		func_321(1236917971);
		func_321(43335376);
		func_321(-284612948);
		func_321(-2090209059);
		func_321(1977031606);
		func_321(1929454697);
		func_321(938290967);
		func_321(1532009326);
		func_321(1344772301);
		func_321(-918785150);
		func_321(-692583342);
		func_321(-803019223);
		_0xdfea23ec90113657(-803019223);
		func_321(-1860722801);
		func_321(637627640);
		func_321(349494711);
		func_322(115);
		func_322(114);
		func_322(98);
		func_322(107);
		func_322(100);
		func_322(108);
		if (func_564(106))
		{
			func_333(105);
		}
		else
		{
			func_322(105);
		}
		if (!func_564(117))
		{
			func_322(116);
		}
		else
		{
			func_333(116);
		}
		func_322(109);
	}
	else if (func_328(-618620429))
	{
		func_321(-1667461262);
		func_321(411742897);
		func_321(1467774743);
		func_321(-956131204);
		func_321(1353861354);
		func_342("nav_mesh_beech_house_completed");
		func_321(578474998);
		func_321(1236917971);
		func_321(43335376);
		func_321(-284612948);
		func_321(349494711);
		func_321(1965249616);
		func_321(-2021605623);
		func_321(1649902358);
		func_321(1169279648);
		func_321(1532009326);
		func_321(1344772301);
		func_321(-918785150);
		func_321(-692583342);
		func_321(-803019223);
		_0xdfea23ec90113657(-803019223);
		func_321(-1860722801);
		func_321(637627640);
		func_321(-218940381);
		if (!func_564(117))
		{
			func_322(116);
		}
		else
		{
			func_333(116);
		}
		func_322(115);
		func_322(114);
		func_322(98);
		func_322(107);
		func_322(100);
		func_322(110);
		func_322(111);
		func_322(109);
		func_322(111);
		if (func_564(113))
		{
			func_333(112);
		}
		else
		{
			func_322(112);
		}
	}
	if (Global_1939655->f_312 != iVar0)
	{
		if (Global_1939655->f_312 != -1)
		{
			_0xe057fea9a22eb3ee(-749646899);
		}
		_0x1392105da88bbffb(-749646899, -1640f, -1370f, 0, iVar0);
		Global_1939655->f_312 = iVar0;
	}
}

void func_327()
{
	if (func_328(-1215445344))
	{
		func_332(-661560211);
		func_321(-1989899190);
		func_321(-784156210);
		if (func_259(44))
		{
			func_341("nav_val_saloon_lockdown");
			func_341("nav_val_full_lockdown");
			func_341("nav_val_es_saloon_lockdown");
			func_341("nav_val_es");
			func_342("nav_val_es_full_lockdown");
		}
		else
		{
			func_341("nav_val_saloon_lockdown");
			func_341("nav_val_es_saloon_lockdown");
			func_341("nav_val_es_full_lockdown");
			func_341("nav_val_es");
			func_342("nav_val_full_lockdown");
		}
	}
	else
	{
		func_332(-1989899190);
		func_332(-784156210);
		func_321(-661560211);
		if (func_259(44))
		{
			func_341("nav_val_saloon_lockdown");
			func_341("nav_val_full_lockdown");
			func_341("nav_val_es_saloon_lockdown");
			func_341("nav_val_es_full_lockdown");
			func_342("nav_val_es");
		}
		else
		{
			func_341("nav_val_saloon_lockdown");
			func_341("nav_val_es_saloon_lockdown");
			func_341("nav_val_es_full_lockdown");
			func_341("nav_val_es");
			func_341("nav_val_full_lockdown");
		}
	}
	if (func_328(-254562075))
	{
		func_332(-1049500949);
		func_321(-981203673);
		func_321(-2009766528);
	}
	else
	{
		func_332(-981203673);
		func_332(-2009766528);
		func_321(-1049500949);
	}
	if (func_328(320943355))
	{
		func_332(135886022);
		func_321(1228600352);
		func_321(406334892);
	}
	else
	{
		func_332(1228600352);
		func_332(406334892);
		func_321(135886022);
	}
	if (func_328(689024866))
	{
		func_332(-1933617196);
		func_321(951314072);
		func_321(-1905652203);
	}
	else
	{
		func_332(951314072);
		func_332(-1905652203);
		func_321(-1933617196);
	}
	if (func_328(1160698568))
	{
		func_332(-1588793465);
		func_321(-780819048);
		func_321(1519091923);
		func_345(1879307167, 1, 0, 0, 0, 0, 0, 0);
		func_345(540459374, 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_332(-780819048);
		func_332(1519091923);
		func_321(-1588793465);
		func_345(1879307167, 0, 0, 0, 1, 0, 0, 0);
		func_345(540459374, 0, 0, 0, 1, 0, 0, 0);
	}
	if (func_328(-1179948750))
	{
		func_332(1325716092);
		func_321(-1301569116);
		func_321(-554932707);
	}
	else
	{
		func_332(-1301569116);
		func_332(-554932707);
		func_321(1325716092);
	}
	if (func_328(1713221411))
	{
		func_332(924412185);
		func_321(-52140817);
		func_321(-156313117);
	}
	else
	{
		func_332(-52140817);
		func_332(-156313117);
		func_321(924412185);
	}
	if (func_328(300221584))
	{
		func_332(-1781246069);
		func_321(282485265);
		func_321(-1744253204);
	}
	else
	{
		func_332(282485265);
		func_332(-1744253204);
		func_321(-1781246069);
	}
	if (func_328(-220282381))
	{
		func_332(-1892595931);
		func_321(56708243);
	}
	else
	{
		func_332(56708243);
		func_321(-1892595931);
	}
	if (func_328(-1329135070))
	{
		func_332(-1158072415);
		func_321(199047531);
		func_321(192173299);
	}
	else
	{
		func_332(199047531);
		func_332(192173299);
		func_321(-1158072415);
	}
	if (func_328(-1763509974))
	{
		func_321(-776975047);
		func_321(1385025009);
		if (!func_328(-1215445344))
		{
			if (func_259(44))
			{
				func_341("nav_val_saloon_lockdown");
				func_341("nav_val_full_lockdown");
				func_341("nav_val_es");
				func_341("nav_val_es_full_lockdown");
				func_342("nav_val_es_saloon_lockdown");
			}
			else
			{
				func_341("nav_val_saloon_lockdown");
				func_341("nav_val_es_saloon_lockdown");
				func_341("nav_val_full_lockdown");
				func_341("nav_val_es_full_lockdown");
				func_341("nav_val_es");
				func_342("nav_val_saloon_lockdown");
			}
		}
		func_345(-908482159, 1, 0, 0, 0, 0, 0, 0);
		func_345(-1147728628, 1, 0, 0, 0, 0, 0, 0);
		func_345(968874193, 1, 0, 0, 0, 0, 0, 0);
		func_345(1154795503, 1, 0, 0, 0, 0, 0, 0);
		func_345(583884620, 1, 0, 0, 0, 0, 0, 0);
		func_345(261929195, 1, 0, 0, 0, 0, 0, 0);
		_0x7f458b543006c8fe(-908482159, 28);
		_0x7f458b543006c8fe(-1147728628, 28);
		_0x7f458b543006c8fe(968874193, 28);
		_0x7f458b543006c8fe(1154795503, 28);
		_0x7f458b543006c8fe(583884620, 28);
		_0x7f458b543006c8fe(261929195, 28);
	}
	else
	{
		func_332(-776975047);
		func_332(1385025009);
		func_345(-908482159, 0, 0, 0, 1, 0, 0, 0);
		func_345(-1147728628, 0, 0, 0, 1, 0, 0, 0);
		func_345(968874193, 0, 0, 0, 1, 0, 0, 0);
		func_345(1154795503, 0, 0, 0, 1, 0, 0, 0);
		func_345(583884620, 0, 0, 0, 1, 0, 0, 0);
		func_345(261929195, 0, 0, 0, 1, 0, 0, 0);
		_0x0c0a373d181bf900(-908482159);
		_0x0c0a373d181bf900(-1147728628);
		_0x0c0a373d181bf900(968874193);
		_0x0c0a373d181bf900(1154795503);
		_0x0c0a373d181bf900(583884620);
		_0x0c0a373d181bf900(261929195);
		if (func_259(44))
		{
			func_341("nav_val_saloon_lockdown");
			func_341("nav_val_full_lockdown");
			func_341("nav_val_es_saloon_lockdown");
			func_341("nav_val_es_full_lockdown");
			func_342("nav_val_es");
		}
		else
		{
			func_341("nav_val_saloon_lockdown");
			func_341("nav_val_es_saloon_lockdown");
			func_341("nav_val_es_full_lockdown");
			func_341("nav_val_es");
			func_341("nav_val_full_lockdown");
		}
	}
	if (func_54() == -1)
	{
		if (func_328(-1206122982))
		{
			func_335(444, 32);
			func_335(445, 32);
			func_335(446, 32);
			func_335(447, 32);
			func_335(460, 32);
			func_335(461, 32);
			func_335(465, 32);
			func_335(458, 32);
		}
		else
		{
			func_560(444, 32);
			func_560(445, 32);
			func_560(446, 32);
			func_560(447, 32);
			func_560(460, 32);
			func_560(461, 32);
			func_560(465, 32);
			func_560(458, 32);
		}
		if (func_328(-666014935))
		{
			func_345(-1069042457, 1, 0, 0, 0, 0, 0, 0);
			func_345(244699522, 1, 0, 0, 0, 0, 0, 0);
			func_345(-590254598, 1, 0, 0, 0, 0, 0, 0);
			func_345(-1425307025, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_345(-1069042457, 0, 0, 0, 1, 0, 0, 0);
			func_345(244699522, 0, 0, 0, 1, 0, 0, 0);
			func_345(-590254598, 0, 0, 0, 1, 0, 0, 0);
			func_345(-1425307025, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_328(1074873669))
		{
			func_335(427, 32);
		}
		else
		{
			func_560(427, 32);
		}
		if (func_328(-1579419919))
		{
			func_345(551601484, 1, 0, 0, 0, 0, 0, 0);
			func_345(-1842720100, 1, 0, 0, 0, 0, 0, 0);
			func_345(-983069384, 1, 0, 0, 0, 0, 0, 0);
			func_345(-768760124, 1, 0, 0, 0, 0, 0, 0);
			func_345(-1974086289, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_345(551601484, 0, 0, 0, 1, 0, 0, 0);
			func_345(-1842720100, 0, 0, 0, 1, 0, 0, 0);
			func_345(-983069384, 0, 0, 0, 1, 0, 0, 0);
			func_345(-768760124, 0, 0, 0, 1, 0, 0, 0);
			func_345(-1974086289, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_328(478884033))
		{
			func_335(83, 32);
			func_335(84, 32);
			func_335(85, 32);
			func_335(86, 32);
			func_335(87, 32);
			func_335(79, 32);
		}
		else
		{
			func_560(83, 32);
			func_560(84, 32);
			func_560(85, 32);
			func_560(86, 32);
			func_560(87, 32);
			func_560(79, 32);
		}
		if (func_328(-191424539))
		{
			func_345(-1247339802, 1, 0, 0, 0, 0, 0, 0);
			func_345(2046695029, 1, 0, 0, 0, 0, 0, 0);
			func_345(834296435, 1, 0, 0, 0, 0, 0, 0);
			func_345(1124531468, 1, 0, 0, 0, 0, 0, 0);
			func_345(-902483455, 1, 0, 0, 0, 0, 0, 0);
			func_345(-566797819, 1, 0, 0, 0, 0, 0, 0);
			func_345(1469250492, 1, 0, 0, 0, 0, 0, 0);
			func_345(678501753, 1, 0, 0, 0, 0, 0, 0);
			func_345(-1079073283, 1, 0, 0, 0, 0, 0, 0);
			func_345(-860602360, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_345(-1247339802, 0, 0, 0, 1, 0, 0, 0);
			func_345(2046695029, 0, 0, 0, 1, 0, 0, 0);
			func_345(834296435, 0, 0, 0, 1, 0, 0, 0);
			func_345(1124531468, 0, 0, 0, 1, 0, 0, 0);
			func_345(-902483455, 0, 0, 0, 1, 0, 0, 0);
			func_345(-566797819, 0, 0, 0, 1, 0, 0, 0);
			func_345(1469250492, 0, 0, 0, 1, 0, 0, 0);
			func_345(678501753, 0, 0, 0, 1, 0, 0, 0);
			func_345(-1079073283, 0, 0, 0, 1, 0, 0, 0);
			func_345(-860602360, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_328(-397760715))
		{
			func_345(1098854605, 1, 0, 0, 0, 0, 0, 0);
			func_345(1013933832, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_345(1098854605, 0, 0, 0, 1, 0, 0, 0);
			func_345(1013933832, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_328(2639906))
		{
			func_345(-1334037078, 1, 0, 0, 0, 0, 0, 0);
			func_345(-1641377529, 1, 0, 0, 0, 0, 0, 0);
			func_345(-74215266, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_345(-1334037078, 0, 0, 0, 1, 0, 0, 0);
			func_345(-1641377529, 0, 0, 0, 1, 0, 0, 0);
			func_345(-74215266, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_328(1660024373))
		{
			func_335(314, 32);
			func_335(311, 32);
			func_335(312, 32);
			func_335(313, 32);
			func_335(244, 32);
		}
		else
		{
			func_560(314, 32);
			func_560(311, 32);
			func_560(312, 32);
			func_560(313, 32);
			func_560(244, 32);
		}
		if (func_328(-1063147448))
		{
			func_345(-399528504, 1, 0, 0, 0, 0, 0, 0);
			func_345(804086151, 1, 0, 0, 0, 0, 0, 0);
			func_345(-923901632, 1, 0, 0, 0, 0, 0, 0);
			func_345(-438789356, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_345(-399528504, 0, 0, 0, 1, 0, 0, 0);
			func_345(804086151, 0, 0, 0, 1, 0, 0, 0);
			func_345(-923901632, 0, 0, 0, 1, 0, 0, 0);
			func_345(-438789356, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_328(-80522843))
		{
			func_335(348, 32);
			func_335(361, 32);
			func_335(362, 32);
			func_335(363, 32);
			func_335(364, 32);
			func_335(365, 32);
			func_335(880, 32);
		}
		else
		{
			func_560(348, 32);
			func_560(361, 32);
			func_560(362, 32);
			func_560(86, 32);
			func_560(364, 32);
			func_560(365, 32);
			func_560(880, 32);
		}
		if (func_328(-1523910291))
		{
			func_345(2094297354, 1, 0, 0, 0, 0, 0, 0);
			func_345(1892085175, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_345(2094297354, 0, 0, 0, 1, 0, 0, 0);
			func_345(1892085175, 0, 0, 0, 1, 0, 0, 0);
		}
	}
}

bool func_328(int iParam0)
{
	iVar0 = func_565(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_360(iVar1))
	{
		if (Global_1071686->f_19648.f_24 && !func_566(iParam0))
		{
			return false;
		}
		return (is_bit_set(&(Global_1071686->f_19648[iVar1]), iVar2) || is_bit_set(&(Global_39.f_110[iVar1]), iVar2));
	}
	return is_bit_set(&(Global_39.f_110[iVar1]), iVar2);
}

bool func_329(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_330(int iParam0, int iParam1)
{
	(*Global_1896622)[iParam0] = (Global_1896622[iParam0] || iParam1);
}

void func_331(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_332(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		func_346(iParam0);
	}
}

void func_333(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	clear_bit(Global_1939655->f_28[iVar1], iVar2);
}

void func_334(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_328(iParam0))
	{
		if (func_329(Global_1939655->f_27, iParam2))
		{
			iVar0 = func_554(iParam1);
			if (_does_volume_exist(iVar0))
			{
				_0xa1cfb35069d23c23(iVar0);
				_0x74c2b3dc0b294102(iVar0);
				func_331(&(Global_1939655->f_27), iParam2);
			}
		}
	}
	else if (!func_329(Global_1939655->f_27, iParam2))
	{
		iVar1 = func_554(iParam1);
		if (_does_volume_exist(iVar1))
		{
			_0x18262cafebb5fbe1(iVar1, iParam3, 0, 0, -1, -1, 0);
			_0xb56d41a694e42e86(iVar1, iParam3, 0, 0, -1, -1, 0);
			func_567(&(Global_1939655->f_27), iParam2);
		}
	}
}

void func_335(int iParam0, int iParam1)
{
	if (func_54() != -1)
	{
		return;
	}
	if (!func_568(iParam0))
	{
		return;
	}
	Global_9892[iParam0] = (Global_9892[iParam0] || iParam1);
}

bool func_336(int iParam0, bool bParam1)
{
	if (!func_568(iParam0))
	{
		return false;
	}
	if (!func_569(iParam0, 2))
	{
		return false;
	}
	if (func_570(iParam0) == 0)
	{
		return true;
	}
	if (!_0x800df3fc913355f3(func_571(iParam0)))
	{
		return true;
	}
	if (func_569(iParam0, 1) && !bParam1)
	{
		func_335(iParam0, 128);
		return true;
	}
	func_560(iParam0, 129);
	func_572(iParam0);
	_0xfc77c5b44d5ff7c0(func_571(iParam0));
	func_573(iParam0, 0);
	return true;
}

void func_337()
{
	if (!func_328(0))
	{
		func_332(1149195254);
		func_332(2016081133);
		func_332(363257921);
		func_332(58066174);
		func_332(-1521525254);
		func_332(-761186147);
		func_332(-1872939092);
		func_332(-964156415);
	}
	func_332(-2137633069);
	func_332(1944013855);
	func_332(-1643869063);
	func_332(-1108618313);
	func_332(-787678727);
	func_332(-437251660);
	func_332(622597018);
	func_332(1649275138);
	func_333(122);
	func_333(123);
	func_333(186);
	func_333(187);
	func_333(121);
	func_333(120);
	func_333(119);
	func_333(118);
	func_341("bra_man_burned");
	func_341("bra_man_burned_bra3");
	func_341("bra_man_endsum");
}

void func_338(bool bParam0)
{
	func_574(-1452136643, bParam0);
	func_574(-744260705, bParam0);
	func_574(1424293412, bParam0);
	func_574(1060557512, bParam0);
	func_574(-362403544, bParam0);
	func_574(-592147003, bParam0);
	func_574(2056145270, bParam0);
	func_574(748826019, bParam0);
	func_574(366542865, bParam0);
	func_574(-1508467572, bParam0);
	func_574(-1220264217, bParam0);
	func_574(-990258606, bParam0);
	func_574(-1508467572, bParam0);
	func_574(-1220264217, bParam0);
	func_574(-990258606, bParam0);
	func_574(-665583358, bParam0);
	func_574(-282972514, bParam0);
	func_574(-64632667, bParam0);
	func_574(314111435, bParam0);
	func_574(24859476, bParam0);
	func_574(340621560, bParam0);
	func_574(1266707689, bParam0);
	func_574(434145706, bParam0);
	func_574(654746614, bParam0);
	func_574(1965736001, bParam0);
	func_574(1650694835, bParam0);
	func_574(1891284833, bParam0);
	func_574(1576931820, bParam0);
	func_574(1812999696, bParam0);
	func_574(-1184151355, bParam0);
	func_574(-946313953, bParam0);
	func_574(-889100155, bParam0);
	func_574(-1296418825, bParam0);
	func_574(352816221, !bParam0);
	func_574(1128622296, !bParam0);
	func_574(979982112, !bParam0);
	func_574(1756640181, !bParam0);
	func_574(1557076971, !bParam0);
	func_574(1913538153, !bParam0);
	func_574(-1603329230, !bParam0);
	func_574(-1892843345, !bParam0);
	func_574(241205019, !bParam0);
}

void func_339(int iParam0, int iParam1)
{
	func_345(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

int func_340(int iParam0)
{
	if (!func_26(iParam0))
	{
		return 0;
	}
	if (!func_559(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return 0;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		if (!func_575((iVar1 + iVar0)))
		{
			iVar3 = 0;
		}
		iVar0++;
	}
	return iVar3;
}

void func_341(char* sParam0)
{
	if (_0x5ac0944c156e5f44(sParam0))
	{
		_0x527b97c203bb8606(sParam0);
	}
}

void func_342(char* sParam0)
{
	if (!_0x5ac0944c156e5f44(sParam0))
	{
		_0x7c334ff4d9215912(sParam0);
	}
}

void func_343(int iParam0)
{
	iVar0 = func_565(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	clear_bit(Global_39.f_110[iVar1], iVar2);
	Global_1939655 = 0;
}

void func_344()
{
	if (func_328(371850993))
	{
		func_321(263152228);
		func_321(1936009597);
	}
	else
	{
		func_332(263152228);
		func_332(1936009597);
	}
}

void func_345(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_576(iParam0, 0, 0);
	if (func_577(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_578(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_579(iParam0, 1);
			}
			else
			{
				func_580(iParam0, 1);
			}
		}
		else
		{
			func_581(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_582())
	{
	}
	else if (network_is_in_session())
	{
	}
}

int func_346(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		return 1;
	}
	if (func_138())
	{
		return 0;
	}
	_remove_imap(iParam0);
	return 0;
}

void func_347()
{
	if (!func_328(-1053549743))
	{
		func_332(1033721560);
	}
	func_332(1343484786);
	func_332(1871051363);
	func_332(146746575);
	func_332(-2144587490);
	func_332(1989074279);
	func_332(-1671953459);
	func_341("rho_nav_grave_norm_gry3_off");
	func_341("rho_nav_grave_norm_gry3_on");
	func_341("rho_nav_grave_dug_gry3_off");
	func_341("rho_nav_grave_dug_gry3_on");
	func_341("rho_nav_grave_open_gry3_off");
	func_341("rho_nav_grave_open_gry3_on");
	func_341("sad3_nav_rhodes_shootout_00");
}

float func_348(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

void func_349(int iParam0, int iParam1)
{
	func_345(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

int func_350(int iParam0)
{
	if (!func_26(iParam0))
	{
		return 0;
	}
	if (!func_559(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return 0;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		if (!func_336((iVar1 + iVar0), 0))
		{
			iVar3 = 0;
		}
		iVar0++;
	}
	return iVar3;
}

void func_351()
{
	if (func_328(-2020023971))
	{
		func_332(758684739);
		func_332(-661825463);
		func_321(518127510);
		func_333(181);
		func_322(180);
	}
	else
	{
		func_332(518127510);
		func_321(758684739);
		func_321(-661825463);
		func_333(180);
		func_322(181);
	}
}

void func_352()
{
	func_341("nav_sdn_docks_pre_es");
	func_341("nav_sdn_docks_korrigan_pre_es");
	func_341("nav_sdn_docks_antenor_pre_es");
	func_341("nav_sdn_docks_trains_pre_es");
	func_341("nav_sdn_docks_korrigan_antenor_pre_es");
	func_341("nav_sdn_docks_antenor_trains_pre_es");
	func_341("nav_sdn_docks_korrigan_trains_pre_es");
	func_341("nav_sdn_docks_korrigan_antenor_trains_pre_es");
	func_341("nav_sdn_docks_es");
	func_341("nav_sdn_docks_korrigan_es");
	func_341("nav_sdn_docks_antenor_es");
	func_341("nav_sdn_docks_trains_es");
	func_341("nav_sdn_docks_korrigan_antenor_es");
	func_341("nav_sdn_docks_antenor_trains_es");
	func_341("nav_sdn_docks_korrigan_trains_es");
	func_341("nav_sdn_docks_korrigan_antenor_trains_es");
}

int func_353(int iParam0)
{
	if (_is_imap_active_2(iParam0))
	{
		return 1;
	}
	if (func_138())
	{
		return 0;
	}
	_request_imap_2(iParam0);
	return 0;
}

void func_354(int iParam0)
{
	if (!_0xde9bad3292aa6d5e(iParam0))
	{
		_0xdfea23ec90113657(iParam0);
	}
}

void func_355(int iParam0)
{
	if (_0xde9bad3292aa6d5e(iParam0))
	{
		_0xdd0bc0edcb2162f6(iParam0);
	}
}

void func_356(int iParam0)
{
	switch (iParam0)
	{
		case -2043909922:
		case -1145153057:
			if (!func_66())
			{
				if (func_328(-2043909922))
				{
					func_576(-2127191462, 1, 0);
					func_583(-2127191462, 0, 0);
					door_system_set_automatic_rate(-2127191462, 2f);
					door_system_set_open_ratio(-2127191462, 1f, 0);
				}
				else if (func_328(-1145153057))
				{
					func_576(-2127191462, 1, 0);
					func_583(-2127191462, 1, 0);
					door_system_set_open_ratio(-2127191462, 0f, 1);
					_0x7f458b543006c8fe(-2127191462, 16);
				}
				else
				{
					func_584(-2127191462);
				}
			}
			break;
		case 468797819:
		case 589380360:
			if (!func_66())
			{
				if (func_328(589380360))
				{
					func_576(-2127191462, 1, 0);
					func_583(-929446589, 0, 0);
					door_system_set_automatic_rate(-929446589, 2f);
					door_system_set_open_ratio(-929446589, 1f, 0);
				}
				else if (func_328(468797819))
				{
					func_576(-2127191462, 1, 0);
					func_583(-929446589, 1, 0);
					door_system_set_open_ratio(-929446589, 0f, 1);
					_0x7f458b543006c8fe(-929446589, 16);
				}
				else
				{
					func_584(-929446589);
				}
			}
			break;
		case -632127260:
		case 965467037:
			if (!func_66())
			{
				if (func_328(-632127260))
				{
					func_576(-2127191462, 1, 0);
					func_583(1207903970, 0, 0);
					door_system_set_automatic_rate(1207903970, 2f);
					door_system_set_open_ratio(1207903970, 1f, 0);
				}
				else if (func_328(965467037))
				{
					func_576(-2127191462, 1, 0);
					func_583(1207903970, 1, 0);
					door_system_set_open_ratio(1207903970, 0f, 1);
					_0x7f458b543006c8fe(1207903970, 16);
				}
				else
				{
					func_584(1207903970);
				}
			}
			break;
		case -279765076:
		case -209894800:
			if (!func_66())
			{
				if (func_328(-209894800))
				{
					func_576(-2127191462, 1, 0);
					func_583(193903155, 0, 0);
					door_system_set_automatic_rate(193903155, 2f);
					door_system_set_open_ratio(193903155, 1f, 0);
				}
				else if (func_328(-279765076))
				{
					func_576(-2127191462, 1, 0);
					func_583(193903155, 1, 0);
					door_system_set_open_ratio(193903155, 0f, 1);
					_0x7f458b543006c8fe(193903155, 16);
				}
				else
				{
					func_584(193903155);
				}
			}
			break;
		case -1585840296:
		case -510945576:
			if (!func_66())
			{
				if (func_328(-510945576))
				{
					func_583(385812466, 0, 0);
					func_583(-1201452352, 0, 0);
					door_system_set_open_ratio(385812466, 1f, 1);
					door_system_set_open_ratio(-1201452352, -1f, 1);
				}
				else if (func_328(-1585840296))
				{
					func_583(385812466, 0, 0);
					func_583(-1201452352, 0, 0);
				}
				else
				{
					func_583(385812466, 1, 0);
					func_583(-1201452352, 1, 0);
				}
			}
			break;
		case 1238086793:
			if (func_328(1238086793))
			{
				func_321(-414301703);
				func_321(1423912753);
				func_341("nav_lakay_mp");
				func_342("MS_HIDOUT_LAKAY");
				func_354(-414301703);
			}
			else
			{
				func_332(-414301703);
				func_321(1423912753);
				func_341("MS_HIDOUT_LAKAY");
				func_342("nav_lakay_mp");
				func_355(-414301703);
			}
			break;
		case 1302228510:
			if (func_328(1302228510))
			{
				func_321(-1809365172);
				func_342("MS_HIDOUT_BEAVERHOLLOW");
				func_354(-1809365172);
			}
			else
			{
				func_332(-1809365172);
				func_341("MS_HIDOUT_BEAVERHOLLOW");
				func_355(-1809365172);
			}
			break;
		case -460024530:
			if (func_328(-460024530))
			{
				func_321(1092530042);
				func_342("MS_HIDOUT_MILLESANICLAIM");
			}
			else
			{
				func_332(1092530042);
				func_341("MS_HIDOUT_MILLESANICLAIM");
			}
			break;
		case -108780030:
			if (func_328(-108780030))
			{
				func_321(-2051059045);
				func_342("MS_HIDOUT_FARMHOUSE");
				func_354(-2051059045);
			}
			else
			{
				func_332(-2051059045);
				func_341("MS_HIDOUT_FARMHOUSE");
				func_355(-2051059045);
			}
			break;
		case -1340339190:
			if (func_328(-1340339190))
			{
				func_321(-612173099);
				func_342("MS_HIDOUT_ROCKYSEVEN");
				func_354(-612173099);
				if (!does_navmesh_blocking_object_exist(Global_1939655->f_21))
				{
					Global_1939655->f_21 = add_navmesh_blocking_object(2986.267f, 2204.891f, 165.9559f, 2.793124f, 2.804754f, 2.088651f, 120f, false, 7);
				}
			}
			else
			{
				func_332(-612173099);
				func_341("MS_HIDOUT_ROCKYSEVEN");
				func_355(-612173099);
				if (does_navmesh_blocking_object_exist(Global_1939655->f_21))
				{
					remove_navmesh_blocking_object(&(Global_1939655->f_21));
				}
			}
			break;
		case 1698972798:
			if (func_328(1698972798))
			{
				func_321(-1408478050);
				func_342("MS_HIDOUT_MOSSYFLATS");
				func_354(-1408478050);
			}
			else
			{
				func_332(-1408478050);
				func_341("MS_HIDOUT_MOSSYFLATS");
				func_355(-1408478050);
			}
			break;
		case -1296807958:
			if (func_328(-1296807958))
			{
				func_321(-1974746920);
				func_342("MS_HIDOUT_QUAKERSCOVE");
				func_354(1392405485);
			}
			else
			{
				func_332(-1974746920);
				func_341("MS_HIDOUT_QUAKERSCOVE");
				func_355(1392405485);
			}
			break;
		case -1283202000:
			if (func_328(-1283202000))
			{
				func_321(1171226610);
				func_342("MS_HIDOUT_THELOFT");
				func_354(-1563742078);
			}
			else
			{
				func_332(1171226610);
				func_341("MS_HIDOUT_THELOFT");
				func_355(-1563742078);
			}
			break;
		case -1610966108:
			if (func_328(-1610966108))
			{
				func_321(406701199);
				func_342("MS_HIDOUT_CUMBERLANDFALLS");
				func_354(1518168193);
			}
			else
			{
				func_332(406701199);
				func_341("MS_HIDOUT_CUMBERLANDFALLS");
				func_355(1518168193);
			}
			break;
		case 1321892118:
			if (func_328(1321892118))
			{
				func_321(-1151968796);
				func_342("MS_HIDOUT_STILLWATERSTRANDS");
				func_354(-604101326);
			}
			else
			{
				func_332(-1151968796);
				func_341("MS_HIDOUT_STILLWATERSTRANDS");
				func_355(-604101326);
			}
			break;
		case -61411516:
			if (func_328(-61411516))
			{
				func_321(1975720265);
				func_342("MS_HIDOUT_COLTER");
			}
			else
			{
				func_332(1975720265);
				func_341("MS_HIDOUT_COLTER");
			}
			break;
		case 582380806:
			if (func_328(582380806))
			{
				func_321(508578717);
				func_342("MS_HIDOUT_ABANDONED_MINING_STATION");
			}
			else
			{
				func_332(508578717);
				func_341("MS_HIDOUT_ABANDONED_MINING_STATION");
			}
			break;
		case 1932172605:
			if (func_328(1932172605))
			{
				func_321(-848533860);
				func_342("MS_HIDOUT_CLEMENSCOVE");
			}
			else
			{
				if (_is_imap_active(-848533860))
				{
					func_585(791.0508f, -1244.354f, 41.5894f, 25f, 0, 0, 0, 0, 0);
				}
				func_332(-848533860);
				func_341("MS_HIDOUT_CLEMENSCOVE");
			}
			break;
		case 1159471771:
			if (func_328(1159471771))
			{
				func_321(830856441);
				func_342("MS_HIDOUT_TALLTREES");
				func_354(830856441);
			}
			else
			{
				func_332(830856441);
				func_341("MS_HIDOUT_TALLTREES");
				func_355(830856441);
			}
			break;
		case 784360470:
			if (func_328(784360470))
			{
				func_321(-522767301);
				func_342("MS_HIDOUT_SHIPROCK");
				func_354(1057818333);
			}
			else
			{
				func_332(-522767301);
				func_341("MS_HIDOUT_SHIPROCK");
				func_355(1057818333);
			}
			break;
		case 1881028477:
			if (func_328(1881028477))
			{
				func_321(-2103414139);
				func_342("MS_HIDOUT_CAMP_BACCHUS");
			}
			else
			{
				func_332(-2103414139);
				func_341("MS_HIDOUT_CAMP_BACCHUS");
			}
			break;
		case 1703398561:
			if (func_328(1703398561))
			{
				func_321(771896020);
				func_342("MS_HIDOUT_SOLOMONSFOLLY");
				func_354(2122765318);
			}
			else
			{
				func_332(771896020);
				func_341("MS_HIDOUT_SOLOMONSFOLLY");
				func_355(2122765318);
			}
			break;
		case -1209597203:
			if (func_328(-1209597203))
			{
				func_321(895825612);
				func_342("MS_HIDOUT_TWINROCKS");
				func_354(453488895);
			}
			else
			{
				func_332(895825612);
				func_341("MS_HIDOUT_TWINROCKS");
				func_355(453488895);
			}
			break;
		case -897750037:
			if (func_328(-897750037))
			{
				func_321(1256749990);
				func_342("MS_HIDOUT_CUERASECO");
				func_354(621230359);
			}
			else
			{
				func_332(1256749990);
				func_341("MS_HIDOUT_CUERASECO");
				func_355(621230359);
			}
			break;
		case 929582877:
			if (func_328(929582877))
			{
				func_321(-1934886317);
				func_342("MS_HIDOUT_MANTECAFALLS");
				func_354(-1934886317);
			}
			else
			{
				func_332(-1934886317);
				func_341("MS_HIDOUT_MANTECAFALLS");
				func_355(-1934886317);
			}
			break;
		case -911126844:
			if (func_328(-911126844))
			{
				func_321(993438435);
				func_342("MS_HIDOUT_RATTLESNAKEHOLLOW");
				func_354(993438435);
			}
			else
			{
				func_332(993438435);
				func_341("MS_HIDOUT_RATTLESNAKEHOLLOW");
				func_355(993438435);
			}
			break;
		case -355531636:
			if (func_328(-355531636))
			{
				func_321(1495728629);
				func_342("MS_HIDOUT_REPENTANCE");
				func_354(1495728629);
			}
			else
			{
				func_332(1495728629);
				func_341("MS_HIDOUT_REPENTANCE");
				func_355(1495728629);
			}
			break;
		case -1455998786:
			if (func_328(-1455998786))
			{
				func_321(967935536);
				func_342("MS_HIDOUT_SEAOFCORONADO");
				func_354(245110571);
			}
			else
			{
				func_332(967935536);
				func_341("MS_HIDOUT_SEAOFCORONADO");
				func_355(245110571);
			}
			break;
		case -851626677:
			if (func_328(-851626677))
			{
				func_321(-773956478);
				func_342("MS_HIDOUT_CHOLLASPRINGS");
			}
			else
			{
				func_332(-773956478);
				func_341("MS_HIDOUT_CHOLLASPRINGS");
			}
			break;
		case -734416508:
			if (func_328(-734416508))
			{
				func_321(-1615749463);
				func_342("MS_HIDOUT_OLDBACCHUSPLACE");
			}
			else
			{
				func_332(-1615749463);
				func_341("MS_HIDOUT_OLDBACCHUSPLACE");
			}
			break;
		case -396624371:
			if (func_328(-396624371))
			{
				func_321(-361709910);
				func_342("MS_HIDOUT_CAMP_CHOLLA");
				func_354(2123181135);
			}
			else
			{
				func_332(-361709910);
				func_341("MS_HIDOUT_CAMP_CHOLLA");
				func_355(2123181135);
			}
			break;
		case 885777893:
			if (func_328(885777893))
			{
				func_321(-1323334072);
				func_342("MS_HIDOUT_CAMP_PIKES");
				func_354(968587226);
			}
			else
			{
				func_332(-1323334072);
				func_341("MS_HIDOUT_CAMP_PIKES");
				func_355(968587226);
			}
			break;
		case 619839857:
			if (func_328(619839857))
			{
				func_321(-1521897637);
				func_342("MS_HIDOUT_GAPTOOTH");
				func_354(-1521897637);
			}
			else
			{
				func_332(-1521897637);
				func_341("MS_HIDOUT_GAPTOOTH");
				func_355(-1521897637);
			}
			break;
		case 2113625508:
			if (func_328(2113625508))
			{
				func_321(-716370751);
				func_342("mp_intro_jessica_camp_rhodes");
				func_354(-716370751);
			}
			else
			{
				func_332(-716370751);
				func_341("mp_intro_jessica_camp_rhodes");
				func_355(-716370751);
			}
			break;
		case 1549124796:
			if (func_328(1549124796))
			{
				func_321(-2053832767);
				func_342("mp_intro_jessica_camp_valentine");
				func_354(-2053832767);
			}
			else
			{
				func_332(-2053832767);
				func_341("mp_intro_jessica_camp_valentine");
				func_355(-2053832767);
			}
			break;
		case -502473159:
			if (func_328(-502473159))
			{
				func_321(372806894);
				func_342("mp_intro_jessica_camp_blackwater");
				func_354(372806894);
			}
			else
			{
				func_332(372806894);
				func_341("mp_intro_jessica_camp_blackwater");
				func_355(372806894);
			}
			break;
		case 229371495:
			if (func_328(229371495))
			{
				func_321(-1534577778);
				func_342("mp_intro_jessica_camp_tumbleweed");
				func_354(-1534577778);
			}
			else
			{
				func_332(-1534577778);
				func_341("mp_intro_jessica_camp_tumbleweed");
				func_355(-1534577778);
			}
			break;
		case -781631220:
			if (func_328(-781631220))
			{
				func_321(-2024941402);
				func_342("mp_intro_hideout_rhodes");
				func_354(-2024941402);
			}
			else
			{
				func_332(-2024941402);
				func_341("mp_intro_hideout_rhodes");
				func_355(-2024941402);
			}
			break;
		case 1708045337:
			if (func_328(1708045337))
			{
				func_321(-50297425);
				func_342("mp_intro_hideout_valentine");
				func_354(-50297425);
			}
			else
			{
				func_332(-50297425);
				func_341("mp_intro_hideout_valentine");
				func_355(-50297425);
			}
			break;
		case 1166612791:
			if (func_328(1166612791))
			{
				func_321(536714458);
				func_342("mp_intro_hideout_blackwater");
				func_354(536714458);
			}
			else
			{
				func_332(536714458);
				func_341("mp_intro_hideout_blackwater");
				func_355(536714458);
			}
			break;
		case 74872959:
			if (func_328(74872959))
			{
				func_321(2068117822);
				func_342("mp_intro_hideout_tumbleweed");
				func_354(2068117822);
			}
			else
			{
				func_332(2068117822);
				func_341("mp_intro_hideout_tumbleweed");
				func_355(2068117822);
			}
			break;
		case 1744443559:
			if (func_328(1744443559))
			{
				func_321(-576687258);
				func_342("MP_CAMP_DEFEND_HEARTLANDS_HILLTOP");
				func_354(-576687258);
			}
			else
			{
				func_332(-576687258);
				func_341("MP_CAMP_DEFEND_HEARTLANDS_HILLTOP");
				func_355(-576687258);
			}
			break;
		case 509781469:
			if (func_328(509781469))
			{
				func_321(226557169);
				func_342("MP_CAMP_DEFEND_HEARTLANDS_CIRCLE");
				func_354(226557169);
			}
			else
			{
				func_332(226557169);
				func_341("MP_CAMP_DEFEND_HEARTLANDS_CIRCLE");
				func_355(226557169);
			}
			break;
		case 885378256:
			if (func_328(885378256))
			{
				func_321(476687617);
				func_342("MP_CAMP_DEFEND_GRIZZLIES_CIRCLE");
				func_354(476687617);
			}
			else
			{
				func_332(476687617);
				func_341("MP_CAMP_DEFEND_GRIZZLIES_CIRCLE");
				func_355(476687617);
			}
			break;
		case -524787708:
			if (func_328(-524787708))
			{
				func_321(1856368424);
				func_342("MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE");
				func_354(1856368424);
			}
			else
			{
				func_332(1856368424);
				func_341("MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE");
				func_355(1856368424);
			}
			break;
		case -1861414976:
			if (func_328(-1861414976))
			{
				func_321(568096966);
				func_342("MP_CAMP_DEFEND_ROANOKE_CIRCLE");
				func_354(568096966);
			}
			else
			{
				func_332(568096966);
				func_341("MP_CAMP_DEFEND_ROANOKE_CIRCLE");
				func_355(568096966);
			}
			break;
		case 747514327:
			if (func_328(747514327))
			{
				func_321(1104817207);
				func_342("WS_MP_CAMP_DEFEND_TWO_ROCKS");
				func_354(1104817207);
			}
			else
			{
				func_332(1104817207);
				func_341("WS_MP_CAMP_DEFEND_TWO_ROCKS");
				func_355(1104817207);
			}
			break;
		case -1042021329:
			if (func_328(-1042021329))
			{
				func_321(478888800);
				func_342("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE");
				func_354(478888800);
			}
			else
			{
				func_332(478888800);
				func_341("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE");
				func_355(478888800);
			}
			break;
		case -591815673:
			if (func_328(-591815673))
			{
				func_321(1955414013);
				func_342("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH");
				func_354(1955414013);
			}
			else
			{
				func_332(1955414013);
				func_341("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH");
				func_355(1955414013);
			}
			break;
		case 883901517:
			if (func_328(883901517))
			{
				func_321(-1207218596);
				func_342("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS");
				func_354(-1207218596);
			}
			else
			{
				func_332(-1207218596);
				func_341("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS");
				func_355(-1207218596);
			}
			break;
		case 1561093093:
			if (func_328(1561093093))
			{
				func_321(-116967529);
				func_342("WS_MP_CAMP_DEFEND_RIO_BRAVO");
				func_354(-116967529);
			}
			else
			{
				func_332(-116967529);
				func_341("WS_MP_CAMP_DEFEND_RIO_BRAVO");
				func_355(-116967529);
			}
			break;
		case 1287917122:
			if (func_328(1287917122))
			{
				func_341("pro_empty_nav_tu003");
				func_321(-605808708);
				func_342("WS_MP_CAMP_DEFEND_LITTLE_CREEK_AND_PRONGHORN");
				func_354(-605808708);
			}
			else
			{
				func_332(-605808708);
				func_341("WS_MP_CAMP_DEFEND_LITTLE_CREEK");
				func_342("pro_empty_nav_tu003");
				func_355(-605808708);
			}
			break;
		case -1943367752:
			if (func_328(-1943367752))
			{
				func_321(-100150000);
				func_342("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE");
				func_354(-100150000);
			}
			else
			{
				func_332(-100150000);
				func_341("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE");
				func_355(-100150000);
			}
			break;
		case -371827125:
			if (func_328(-371827125))
			{
				func_321(-320403109);
				func_342("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD");
				func_354(-320403109);
			}
			else
			{
				func_332(-320403109);
				func_341("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD");
				func_355(-320403109);
			}
			break;
		case -889906510:
			if (func_328(-889906510))
			{
				func_321(18369533);
				func_342("WS_MP_CAMP_DEFEND_TALL_TREES");
				func_354(18369533);
			}
			else
			{
				func_332(18369533);
				func_341("WS_MP_CAMP_DEFEND_TALL_TREES");
				func_355(18369533);
			}
			break;
		case 64896505:
			if (func_328(64896505))
			{
				func_321(-331965904);
				func_342("WS_MP_CAMP_DEFEND_NEW_HANOVER");
				func_354(-331965904);
			}
			else
			{
				func_332(-331965904);
				func_341("WS_MP_CAMP_DEFEND_NEW_HANOVER");
				func_355(-331965904);
			}
			break;
		case -1161687045:
			if (func_328(-1161687045))
			{
				func_321(127191252);
				func_342("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH");
				func_354(127191252);
			}
			else
			{
				func_332(127191252);
				func_341("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH");
				func_355(127191252);
			}
			break;
		case 526003171:
			if (func_328(526003171))
			{
				func_321(-2074957003);
				func_342("MS_OTH_MAC");
			}
			else
			{
				func_332(-2074957003);
				func_341("MS_OTH_MAC");
			}
			break;
		case -895073533:
			if (func_328(-895073533))
			{
				func_321(-1226747327);
				func_321(-141795616);
				func_342("MS_OTH_SHEPHERDS_RISE");
			}
			else
			{
				func_332(-1226747327);
				func_332(-141795616);
				func_341("MS_OTH_SHEPHERDS_RISE");
			}
			break;
		case -2066272360:
			if (func_328(-2066272360))
			{
				func_321(-1973910443);
				func_342("MS_OTH_TALL_TREES");
			}
			else
			{
				func_332(-1973910443);
				func_341("MS_OTH_TALL_TREES");
			}
			break;
		case 93964309:
			if (func_328(93964309))
			{
				func_321(1707200698);
				func_342("MS_OTH_CASTORS");
			}
			else
			{
				func_332(1707200698);
				func_341("MS_OTH_CASTORS");
			}
			break;
		case 2103908624:
			if (func_328(2103908624))
			{
				func_321(1883767827);
				func_342("MS_AS_TRK_LAKE_ISABELLA");
			}
			else
			{
				func_332(1883767827);
				func_341("MS_AS_TRK_LAKE_ISABELLA");
			}
			break;
		case -812641169:
			if (func_328(-812641169))
			{
				func_321(104287396);
				func_342("gcexc_nav_scm_003");
				func_354(-1585767499);
			}
			else
			{
				func_332(104287396);
				func_341("gcexc_nav_scm_003");
				func_355(-1585767499);
			}
			break;
		case -554519756:
			if (func_328(-554519756))
			{
				func_321(715920781);
				func_342("gcexc_nav_scm_005");
				func_354(-1089087766);
			}
			else
			{
				func_332(715920781);
				func_341("gcexc_nav_scm_005");
				func_355(-1089087766);
			}
			break;
		case 865557632:
			if (func_328(865557632))
			{
				func_321(-900541220);
				func_342("gcexc_nav_scm_006");
				func_354(-1305559780);
			}
			else
			{
				func_332(-900541220);
				func_341("gcexc_nav_scm_006");
				func_355(-1305559780);
			}
			break;
		case 1112996351:
			if (func_328(1112996351))
			{
				func_321(-1199296193);
				func_342("gcexc_nav_scm_007");
				func_354(1751361927);
			}
			else
			{
				func_332(-1199296193);
				func_341("gcexc_nav_scm_007");
				func_355(1751361927);
			}
			break;
		case -1608141409:
			if (func_328(-1608141409))
			{
				func_321(546408124);
				func_342("gcexc_nav_scm_010");
				func_354(-198328307);
			}
			else
			{
				func_332(546408124);
				func_341("gcexc_nav_scm_010");
				func_355(-198328307);
			}
			break;
		case -311373772:
			if (func_328(-311373772))
			{
				func_321(-1232784731);
				func_342("gcexc_nav_scm_013");
				func_354(1092704755);
			}
			else
			{
				func_332(-1232784731);
				func_341("gcexc_nav_scm_013");
				func_355(1092704755);
			}
			break;
		case 61537448:
			if (func_328(61537448))
			{
				func_321(301558156);
				func_342("gcexc_nav_scm_015");
				func_354(473665576);
			}
			else
			{
				func_332(301558156);
				func_341("gcexc_nav_scm_015");
				func_355(473665576);
			}
			break;
		case -925071604:
			if (func_328(-925071604))
			{
				func_321(1683033662);
				func_342("gcexc_nav_scm_017");
				func_354(2037697181);
			}
			else
			{
				func_332(1683033662);
				func_341("gcexc_nav_scm_017");
				func_355(2037697181);
			}
			break;
		case 1195508693:
			if (func_328(1195508693))
			{
				func_321(-643041038);
				func_342("gcexc_nav_scm_019");
				func_354(1415118950);
			}
			else
			{
				func_332(-643041038);
				func_341("gcexc_nav_scm_019");
				func_355(1415118950);
			}
			break;
	}
}

void func_357(int iParam0)
{
	iVar0 = func_586(iParam0);
	iVar1 = func_587(iParam0);
	sVar2 = func_588(iParam0);
	if (!is_string_null_or_empty(sVar2))
	{
		if (func_328(iParam0))
		{
			func_342(sVar2);
		}
		else
		{
			func_341(sVar2);
		}
	}
	if (iVar0 != -1554566073)
	{
		iVar3 = func_589(iParam0);
		if (func_328(iParam0))
		{
			func_321(iVar0);
			if (iVar3 != -1554566073)
			{
				func_321(iVar3);
			}
		}
		else
		{
			func_332(iVar0);
			if (iVar3 != -1554566073)
			{
				func_332(iVar3);
			}
		}
	}
	else if (iVar1 != 0)
	{
		if (func_328(iParam0))
		{
			func_322(iVar1);
		}
		else
		{
			func_333(iVar1);
		}
	}
}

void func_358(var uParam0, int iParam1)
{
	if (*uParam0 != -1)
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
		*uParam0 = -1;
	}
}

void func_359(int iParam0, int iParam1)
{
	if (func_328(iParam0))
	{
		func_321(iParam1);
	}
	else
	{
		func_332(iParam1);
	}
}

bool func_360(int iParam0)
{
	iVar0 = func_590(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

int func_361()
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

int func_362(int iParam0)
{
	return &(Global_39.f_129[iParam0]);
}

bool func_363(int iParam0)
{
	if (func_591(iParam0, &iVar0))
	{
		if (func_592() > func_593(iVar0))
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

bool func_364(int iParam0)
{
	iVar0 = func_594(iParam0);
	if (iVar0 != -1554566073)
	{
		if (func_556(iVar0, 1120403456) || func_552(iVar0))
		{
			return false;
		}
	}
	return true;
}

void func_365(int iParam0)
{
	func_595(iParam0, -1);
	func_596(iParam0, -15);
}

void func_366(bool bParam0)
{
	if (func_597())
	{
		if ((!Global_1051252->f_15 || ((Global_1048577 || Global_1048581) // PointerArith && !&Global_1049271)) && func_236())
		{
			func_598();
			func_599(bParam0);
			func_600(16);
		}
		else if (&Global_1049271)
		{
			if (func_601(15))
			{
				func_600(15);
				func_602(16);
			}
		}
	}
	else
	{
		func_604((func_603() && func_601(16)));
		if (func_601(16))
		{
			func_600(16);
		}
	}
}

float func_367()
{
	return (func_605(150f, to_float(Global_1939655->f_302)) / to_float(300));
}

void func_368()
{
	if (Global_1939655->f_302 > 300)
	{
		Global_1939655->f_302 = 300;
	}
	_0x2f9ac754fe179d58(func_367());
}

int func_369(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 5;
		case 2:
			return 26;
		case 3:
			return 40;
		case 4:
			return 74;
		case 5:
			return 81;
		case 6:
			return 83;
		case 7:
			return 98;
		case 8:
			return 111;
		case 9:
			return 121;
		case 10:
			return 127;
		default:
			break;
	}
	return -1;
}

bool func_370(int iParam0, int iParam1)
{
	if (func_606(iParam0))
	{
		if (!func_374(Global_1939084[iParam0]))
		{
			vVar0 = { func_607(iParam1) };
			if (!func_203(vVar0))
			{
				(*Global_1939084)[iParam0] = func_68(iParam1, 70, vVar0, -1);
			}
			if (Global_1939084[iParam0] != -1)
			{
				if (!(*Global_1939084)[iParam0]->f_1)
				{
					func_609(Global_1939084[iParam0], func_608(iParam1));
					iVar3 = func_610(iParam1);
					if (iVar3 != 0)
					{
						func_389(Global_1939084[iParam0], iVar3);
						(*Global_1939084)[iParam0]->f_1 = 1;
					}
				}
			}
		}
	}
	return true;
}

int func_371(int iParam0)
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

bool func_372(int iParam0, var uParam1, var uParam2, var uParam3)
{
	return func_611(iParam0, "sHash", uParam1, "fHeading", uParam2, "vPos", uParam3);
}

int func_373(int iParam0)
{
	if (!func_536(iParam0))
	{
		return -1;
	}
	if (iParam0 == 40 && func_25() == 139)
	{
		return 139;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 129:
			return 83;
		case 5:
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
		case 18:
		case 19:
		case 122:
		case 123:
			return 40;
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 140:
			return 74;
		case 26:
			return 3;
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
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 124:
		case 125:
			return 5;
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 126:
			return 111;
		case 27:
		case 28:
			return 23;
		case 41:
			return 107;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 127:
			return 26;
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 120:
		case 121:
			return 81;
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 128:
			return 98;
		case 3:
			return 13;
		case 155:
		case 156:
		case 157:
		case 158:
			return 84;
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
			return 104;
		case 4:
			return 14;
		case 164:
		case 165:
		case 166:
		case 167:
			return 76;
		case 168:
		case 169:
		case 170:
		case 171:
			return 4;
		case 40:
			return 95;
		case 172:
		case 173:
		case 174:
		case 175:
			return 9;
		case 76:
			return 119;
		case 99:
		case 100:
		case 101:
			return 28;
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
			return 121;
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
			return 127;
		case 115:
		case 116:
			return 130;
		case 117:
		case 118:
			return 123;
		case 132:
			return 87;
		case 130:
		case 131:
			return 136;
		case 64:
			return 76;
		case 65:
			return 104;
		case 66:
			return 9;
		case 67:
			return 84;
		case 113:
			return 96;
		case 114:
			return 29;
		case 135:
			return 126;
		case 136:
			return 133;
		case 137:
			return 137;
		case 138:
			return 39;
		case 139:
			return 16;
		case 141:
			return 76;
		case 142:
			return 61;
		case 143:
			return 100;
		case 144:
			return 34;
		case 145:
			return 43;
		case 146:
			return 85;
		case 149:
			return 138;
		case 150:
			return 25;
		case 151:
			return 3;
		case 148:
			return 134;
		case 20:
			return -1;
		case 134:
			return -1;
		default:
			break;
	}
	return -1;
}

bool func_374(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_17081)
	{
		return does_blip_exist(&(Global_17081[iParam0]));
	}
	return false;
}

void func_375(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_17081)
	{
		_0xbd62d98799a3daf0(&(Global_17081[iParam0]), iParam1);
	}
}

void func_376(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_17081)
	{
		if (does_blip_exist(&(Global_17081[iParam0])))
		{
			set_blip_sprite(&(Global_17081[iParam0]), iParam1, true);
		}
	}
}

int func_377(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 180))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 133:
			return 27;
		case 153:
			return 28;
		case 154:
			return 29;
		case 26:
			return 14;
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
		case 134:
			return 37;
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
		case 148:
			return 15;
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
		case 45:
		case 83:
		case 155:
		case 159:
		case 164:
		case 168:
		case 172:
			return 0;
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 156:
		case 160:
		case 165:
		case 169:
		case 173:
			return 3;
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 157:
		case 161:
		case 166:
		case 170:
		case 174:
			return 6;
		case 19:
		case 53:
			return 7;
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
		case 20:
			return 33;
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
		case 8:
		case 43:
		case 78:
			return 8;
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
		case 163:
			return 5;
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
		case 70:
		case 90:
			return 17;
		case 119:
			return 11;
		case 176:
			return 19;
		case 177:
			return 20;
		case 178:
			return 21;
		case 12:
		case 60:
			return 18;
		case 152:
			return 34;
		case 158:
		case 162:
		case 167:
		case 171:
		case 175:
			return 23;
		case 179:
			return 20;
		case 109:
		case 113:
		case 114:
			return 35;
		case 61:
		case 62:
		case 89:
			return 36;
		case 149:
		case 150:
		case 151:
			return 39;
		default:
			break;
	}
	return -1;
}

int func_378(int iParam0)
{
	if (!func_612(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 3:
			iVar0 = 20;
			break;
		case 4:
			iVar0 = 21;
			break;
		case 0:
			iVar0 = 25;
			break;
		case 6:
			iVar0 = 23;
			break;
		case 7:
			iVar0 = 26;
			break;
		case 2:
			iVar0 = 33;
			break;
		case 1:
			iVar0 = 30;
			break;
		case 8:
			iVar0 = 31;
			break;
		case 9:
			iVar0 = 37;
			break;
		case 10:
			iVar0 = 32;
			break;
		case 14:
			iVar0 = 35;
			break;
		case 5:
			iVar0 = 21;
			break;
		case 30:
			iVar0 = 27;
			break;
		case 15:
			iVar0 = 36;
			break;
		case 16:
			iVar0 = 36;
			break;
		case 17:
			iVar0 = 40;
			break;
		case 12:
			iVar0 = 15;
			break;
		case 18:
			iVar0 = 41;
			break;
		case 27:
			iVar0 = 22;
			break;
		case 25:
			iVar0 = 42;
			break;
		case 28:
			iVar0 = 43;
			break;
		case 29:
			iVar0 = 44;
			break;
		case 35:
			iVar0 = 45;
			break;
		case 36:
			iVar0 = 46;
			break;
		case 38:
			iVar0 = 48;
			break;
		case 39:
			iVar0 = 51;
			break;
		case 11:
			iVar0 = func_613(Global_1915715->f_20646.f_1009);
			break;
	}
	return iVar0;
}

int func_379(int iParam0)
{
	if (!func_536(iParam0))
	{
		return 0;
	}
	if (&Global_1051439->f_4472[iParam0] == 0)
	{
		Global_1051439->f_4472[iParam0] = func_614(iParam0);
	}
	return &(Global_1051439->f_4472[iParam0]);
}

int func_380(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		iVar0 = func_615(iParam1);
		if (func_606(iVar0))
		{
			if (Global_1939084[iVar0] != -1)
			{
				iVar1 = func_616(iParam1);
				if (iVar1 != 0)
				{
					func_389(iParam0, iVar1);
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_381(int iParam0)
{
	return func_617(iParam0, 32);
}

bool func_382(int iParam0)
{
	return func_618(iParam0, 4);
}

bool func_383(int iParam0)
{
	if (iParam0 == 28 && !func_619(64))
	{
		return true;
	}
	if (iParam0 == 35)
	{
		if (!func_246(1))
		{
			return true;
		}
		if (func_53(0, 0, 1))
		{
			return true;
		}
	}
	if (func_547(4, 255))
	{
		if (Global_1051439->f_72[iParam0]->f_49 & 1073741824 != 0)
		{
		}
		else
		{
			return true;
		}
	}
	if (func_66())
	{
		if (!func_620())
		{
			return true;
		}
		if (iParam0 == 38)
		{
			return true;
		}
	}
	if (func_621(player_id()))
	{
		if (iParam0 == 39)
		{
			Var0 = -1;
			Var0.f_1 = -1;
			Var0 = { func_181(0) };
			if (func_55(Var0))
			{
				if (func_58(Var0) == -20166336)
				{
					return false;
				}
				else
				{
					return true;
				}
			}
		}
		else
		{
			return true;
		}
	}
	if (Global_1071686->f_28778)
	{
		return true;
	}
	return false;
}

int func_384(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_377(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_1051439->f_4682[iVar1]->f_2 != 0 && (&Global_1051439->f_4682[iVar1] == iParam0 || Global_1051439->f_4682[iVar1]->f_1 == iVar0))
		{
			if (Global_1051439->f_4682[iVar1]->f_3 < (get_frame_count() - 1))
			{
				if (Global_1051439->f_4682[iVar1]->f_4 > 0f)
				{
					if (iVar0 == 30 || iVar0 == 31)
					{
						iVar2 = 0;
						while (iVar2 < 4)
						{
							if (&Global_1051439->f_3634[iVar2] == -1 || ((&Global_1051439->f_4682[iVar1] != -1 && &Global_1051439->f_4682[iVar1] != &Global_1051439->f_3634[iVar2]) && &Global_1051439->f_4682[iVar1] != Global_1051439->f_3634[iVar2]->f_9))
							{
							}
							else if (vdist2(Global_35, Global_1051439->f_3634[iVar2]->f_2) > Global_1051439->f_4682[iVar1]->f_4)
							{
								Global_1051439->f_4682[iVar1]->f_2 = 0;
							}
							else
							{
								iVar2++;
							}
						}
					}
					else if (vdist2(Global_35, Global_1051439->f_72[iVar0]->f_3) > Global_1051439->f_4682[iVar1]->f_4)
					{
						Global_1051439->f_4682[iVar1]->f_2 = 0;
					}
				}
				else
				{
					Global_1051439->f_4682[iVar1]->f_2 = 0;
				}
			}
			return Global_1051439->f_4682[iVar1]->f_2;
		}
		iVar1++;
	}
	return 0;
}

bool func_385(int iParam0, int iParam1)
{
	if (func_54() == -1)
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	if (iParam1 < 0 || iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_622(&((*Global_1197355)[iParam1]->f_4), iParam0, 30, 1, 7);
	if (iVar0 == 1)
	{
		return true;
	}
	return false;
}

void func_386(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_17081)
	{
		_set_blip_flash_style(&(Global_17081[iParam0]), iParam1);
	}
}

bool func_387(int iParam0)
{
	if (func_624(func_623(iParam0)))
	{
		return true;
	}
	if (func_91(player_id(), 1, 0, 1) && func_625(iParam0) == func_25())
	{
		return true;
	}
	return false;
}

bool func_388()
{
	iVar0 = get_frame_count();
	return (Global_1051439->f_3259 == iVar0 || Global_1051439->f_3259 == (iVar0 - 1));
}

void func_389(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_17081)
	{
		_blip_set_modifier(&(Global_17081[iParam0]), iParam1);
	}
}

void func_390(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		iVar0 = func_615(iParam1);
		if (func_606(iVar0))
		{
			if (Global_1939084[iVar0] != -1)
			{
				iVar1 = func_616(iParam1);
				if (iVar1 != 0)
				{
					_blip_set_modifier(iParam0, func_616(iParam1));
				}
			}
		}
	}
}

bool func_391()
{
	if (!func_612(Global_1915715->f_20241))
	{
		return false;
	}
	return func_626(Global_1915715->f_20241);
}

bool func_392(int iParam0)
{
	if (!func_627(iParam0))
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

void func_393()
{
	if (func_242(622) && !func_265(622))
	{
		_0x531a78d6bf27014b("RDRO_Holiday_Present_Sounds");
		return;
	}
	if (func_628() && _0xd9130842d7226045("RDRO_Holiday_Present_Sounds", 0))
	{
		func_233(622, 1);
		play_sound_frontend("holiday_present_message", "RDRO_Holiday_Present_Sounds", true, 0);
	}
}

bool func_394()
{
	if (!func_597())
	{
		return false;
	}
	return func_284(Global_1901947->f_44.f_5, 16);
}

int func_395(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_629(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_396()
{
	Var0 = { func_631(-1268909760, func_630(1), 359221401, 1) };
	bVar4 = false;
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		Global_1051439->f_3730 = 0;
	}
	else
	{
		bVar5 = func_632(&Var0, 1) > 0;
		if (!func_633(128) && func_241(-1733092640, 1))
		{
			if (!_0xfc832b06127d8e99(-534000547, 0))
			{
				Global_1051439->f_3730 = 1;
				bVar4 = true;
			}
			else
			{
				func_634(128);
			}
		}
		iVar6 = 1005272;
		switch (Global_1051439->f_3742)
		{
			case 0:
				iVar6 = 1005272;
				break;
			case 1:
				iVar6 = 1583044470;
				break;
			case 2:
				iVar6 = 348853959;
				break;
			case 3:
				iVar6 = 1463321587;
				break;
			case 4:
				iVar6 = 1045621973;
				break;
		}
		if (!bVar5 && iVar6 == 1045621973)
		{
			Var7 = { func_635(0, 1045621973, -1591664384, -1591664384, 0, 0, 0) };
			bVar5 = func_636(&Var7, 1) > 0;
		}
		bVar21 = false;
		if (bVar5)
		{
			bVar5 = func_637(iVar6, &bVar21);
			if (bVar5)
			{
				func_634(32);
				Global_1051439->f_3730 = 1;
			}
			if (bVar21)
			{
				func_634(4);
			}
		}
		if (bVar5 && bVar21)
		{
			Global_1051439->f_3742 = 0;
		}
		else
		{
			Global_1051439->f_3742++;
			if (Global_1051439->f_3742 > 4)
			{
				if (!func_633(32))
				{
					Global_1051439->f_3730 = 0;
				}
				Global_1051439->f_3742 = 0;
				func_638(4);
				func_638(32);
			}
		}
	}
	if (!func_383(2) && !func_53(0, 0, 1))
	{
		if (is_screen_faded_in())
		{
			if (Global_1051439->f_3730 || bVar4)
			{
				if (Global_1051439->f_3732 == -1)
				{
					if (&Global_1051439->f_3745[2] != -1)
					{
						Global_1051439->f_3732 = &Global_1051439->f_3745[2];
						vVar22 = { func_639(255) };
						if (Global_1051439->f_3731)
						{
							if (vVar22.z != 0)
							{
								func_640(Global_1051439->f_3732, 544, 1, 40000, 1);
							}
							else if (bVar4)
							{
								func_640(Global_1051439->f_3732, 773, 1, 40000, 1);
							}
							else
							{
								func_640(Global_1051439->f_3732, 543, 1, 40000, 1);
							}
							Global_1051439->f_3731 = 0;
						}
						else
						{
							func_640(Global_1051439->f_3732, -2, 1, 40000, 1);
						}
					}
				}
				else if (Global_1051439->f_3732 != &Global_1051439->f_3745[2] && &Global_1051439->f_3745[2] != -1)
				{
					if (Global_1915715->f_18260[Global_1051439->f_3732]->f_6 != -1)
					{
						if (Global_1915715->f_18260[Global_1051439->f_3732]->f_8)
						{
							iVar25 = Global_1915715->f_18260[Global_1051439->f_3732]->f_7;
						}
						else
						{
							iVar25 = (Global_1915715->f_18260[Global_1051439->f_3732]->f_7 - get_game_timer());
						}
						func_640(&(Global_1051439->f_3745[2]), -2, 1, iVar25, 1);
					}
					if (func_633(8))
					{
						func_641(Global_1051439->f_3732, 0);
						func_641(&(Global_1051439->f_3745[2]), 1);
					}
					func_642(Global_1051439->f_3732);
					Global_1051439->f_3732 = &Global_1051439->f_3745[2];
				}
				else if (bVar4)
				{
					func_640(Global_1051439->f_3732, 773, 1, 40000, 1);
				}
				if (Global_1051439->f_3732 != -1)
				{
					if (func_633(4))
					{
						if (!func_633(8))
						{
							func_641(Global_1051439->f_3732, 1);
							func_634(8);
						}
					}
					else if (func_633(8))
					{
						func_641(Global_1051439->f_3732, 0);
						func_638(8);
					}
				}
			}
			else if (Global_1051439->f_3732 != -1)
			{
				func_642(Global_1051439->f_3732);
				if (func_633(8))
				{
					func_641(Global_1051439->f_3732, 0);
					func_638(8);
				}
				Global_1051439->f_3732 = -1;
			}
		}
	}
	else if (Global_1051439->f_3732 != -1)
	{
		func_642(Global_1051439->f_3732);
		if (func_633(8))
		{
			func_641(Global_1051439->f_3732, 0);
			func_638(8);
		}
		Global_1051439->f_3732 = -1;
	}
}

void func_397()
{
}

void func_398()
{
	if (func_633(4))
	{
		if (!func_633(16) || !func_643(153, 8))
		{
			func_641(153, 1);
			func_634(16);
		}
	}
	else if (func_633(16))
	{
		func_641(153, 0);
		func_638(16);
	}
}

void func_399()
{
	if (!network_is_in_session())
	{
		return;
	}
	if (!Global_1102219->f_16)
	{
		return;
	}
	if (!func_460())
	{
		return;
	}
	if (!func_236())
	{
		return;
	}
	iVar0 = func_644();
	if (Global_17411.f_3078.f_1 != iVar0)
	{
		Global_17411.f_3078.f_1 = iVar0;
		if (iVar0 == -1)
		{
			Global_17411.f_3078 = 0;
			Global_1051439->f_4661 = { 0f, 0f, 0f };
			Global_1051439->f_4661.f_3 = { 0f, 0f, 0f };
			Global_1051439->f_4661.f_10 = { 0f, 0f, 0f };
			return;
		}
		if (Global_1051439->f_4661.f_9 != -1 && func_203(Global_1051439->f_4661.f_10))
		{
			Global_1051439->f_4661.f_10 = { Global_1051439->f_4661.f_3 };
		}
		func_645();
		Global_17411.f_3078 = 0;
	}
	else if (Global_17411.f_3078.f_1 != -1 && func_203(Global_1051439->f_4661))
	{
		func_645();
	}
	if ((!Global_17411.f_3078 && !func_203(Global_1051439->f_4661)) && func_246(5))
	{
		if (func_646(85134332) && !func_647(85134332, 0))
		{
			func_648(1);
		}
		if (func_646(-862059856) && !func_647(-862059856, 0))
		{
			func_648(1);
		}
		if (vdist2(Global_35, Global_1051439->f_4661) < (Global_1901947->f_764 * Global_1901947->f_764))
		{
			func_648(1);
		}
	}
	if (((!func_203(Global_1051439->f_4661.f_3) && vdist2(func_649(), Global_1051439->f_4661.f_3) < (Global_1901947->f_764.f_1 * Global_1901947->f_764.f_1)) && func_203(Global_1051439->f_4661.f_10)) && !func_643(Global_17411.f_3078.f_1, 1))
	{
		set_audio_flag("AllowScriptStreamVirtualSlotFallback", true);
		if ((Global_1051439->f_4661.f_9 == -1 || !is_stream_playing(Global_1051439->f_4661.f_9)) && load_stream("danse_tzigane", "inworld_music_wax_cylinder_nazar"))
		{
			Global_1051439->f_4661.f_9 = _0x0556c784fa056628("danse_tzigane", "inworld_music_wax_cylinder_nazar");
			if (Global_1051439->f_4661.f_9 != -1)
			{
				play_stream_from_position(_get_object_offset_from_coords(Global_1051439->f_4661.f_3, Global_1051439->f_4661.f_6, -0.705f, -3.13f, 1.617f), Global_1051439->f_4661.f_9);
			}
		}
	}
	else if (Global_1051439->f_4661.f_9 != -1)
	{
		if ((func_203(Global_1051439->f_4661.f_10) || vdist2(func_649(), Global_1051439->f_4661.f_10) >= (Global_1901947->f_764.f_1 * Global_1901947->f_764.f_1)) || !does_entity_exist(Global_1051439->f_3745[38]->f_4))
		{
			stop_stream(Global_1051439->f_4661.f_9);
			Global_1051439->f_4661.f_9 = -1;
			set_audio_flag("AllowScriptStreamVirtualSlotFallback", false);
			if (!func_203(Global_1051439->f_4661.f_10))
			{
				Global_1051439->f_4661.f_10 = { 0f, 0f, 0f };
			}
		}
	}
}

void func_400(int iParam0)
{
	if (!_network_is_player_index_valid(Global_1108365->f_34.f_353[iParam0]->f_1))
	{
		return;
	}
	if (!&Global_1108365->f_34.f_353[iParam0])
	{
		return;
	}
	if (!network_is_player_active(Global_1108365->f_34.f_353[iParam0]->f_1))
	{
		func_650(iParam0);
		return;
	}
	if (Global_1108365->f_34.f_353[iParam0]->f_5 != -1)
	{
		if ((Global_1296859->f_21 - Global_1108365->f_34.f_353[iParam0]->f_4) > Global_1108365->f_34.f_353[iParam0]->f_5)
		{
			func_650(iParam0);
		}
		return;
	}
	if (func_281(Global_1108365->f_34.f_353[iParam0]->f_2))
	{
		return;
	}
	if (!func_55(Global_1108365->f_34.f_353[iParam0]->f_2))
	{
		func_650(iParam0);
		return;
	}
	if (!func_281(Global_1108365->f_34.f_353[iParam0]->f_2))
	{
		func_650(iParam0);
		return;
	}
	if (network_get_player_from_gamer_handle(Global_1108365->f_34.f_546[iParam0]) != Global_1108365->f_34.f_353[iParam0]->f_1)
	{
		func_650(iParam0);
		return;
	}
}

void func_401(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1071686->f_28346), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28350), iParam0);
	Global_1108365->f_34[iParam0]->f_6 = 0;
	Var0 = 4;
	*Global_1108365->f_34[iParam0] = { Var0 };
	func_651(iParam0);
	Var11 = 255;
	*(*(*Global_1288736)[network_player_id_to_int()])[iParam0] = { Var11 };
	if ((!func_237() || !func_652()) || Global_1572887->f_6)
	{
		func_301(_create_var_string(2, "PARLEY_TICKER_END_DC"), -2, 0, 0, 0, 1);
	}
	if (!func_158(&(Global_1108365->f_34[iParam0]->f_8), 256))
	{
		if (func_408(Global_1108365->f_34.f_774) < 2 || Global_1108365->f_34.f_778 != 255)
		{
			func_405(&(Global_1108365->f_34.f_773), 64);
		}
		else
		{
			func_405(&(Global_1108365->f_34.f_773), 32);
		}
		Global_1108365->f_34.f_774 = Global_1296859->f_21;
	}
}

void func_402(int iParam0, bool bParam1)
{
	if (!_network_is_player_index_valid(iParam0) || !network_is_player_connected(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	if (!Global_1108365->f_34[iVar0]->f_6)
	{
		return;
	}
	func_653(iParam0);
	func_654(iParam0);
	func_655(iParam0);
	func_404(&(Global_1108365->f_34[iVar0]->f_8), 2);
	func_651(iVar0);
	if (network_get_player_from_gamer_handle(Global_1108365->f_34.f_546[iVar0]) == iParam0 && !func_158(&(Global_1108365->f_34[iVar0]->f_8), 256))
	{
		if (func_408(Global_1108365->f_34.f_774) < 2 || Global_1108365->f_34.f_778 != 255)
		{
			func_405(&(Global_1108365->f_34.f_773), 64);
		}
		else
		{
			func_405(&(Global_1108365->f_34.f_773), 32);
			Global_1108365->f_34.f_778 = iParam0;
		}
		Global_1108365->f_34.f_774 = Global_1296859->f_21;
		func_301(_create_var_string(10, "PARLEY_TICKER_END", func_109(get_player_name(iParam0), func_108(iParam0, 1, -1, 0))), -2, 0, 0, 0, 1);
	}
	Var1 = 4;
	*Global_1108365->f_34[iVar0] = { Var1 };
	Var12 = 255;
	*(*(*Global_1288736)[network_player_id_to_int()])[iVar0] = { Var12 };
	if (!bParam1)
	{
		return;
	}
	_0x31010318ba9897ac(&uVar14, iVar0);
	Var15.f_5 = player_id();
	Var15.f_4 = 5;
	func_656(&Var15, &uVar14);
}

bool func_403(int iParam0)
{
	if ((*Global_1288736)[iParam0]->f_66)
	{
		return (*Global_1288736)[iParam0]->f_66;
	}
	return &(Global_1108365->f_34.f_353[iParam0]);
}

void func_404(var uParam0, int iParam1)
{
	func_657(uParam0, iParam1);
}

void func_405(var uParam0, int iParam1)
{
	if (func_158(uParam0, iParam1))
	{
		return;
	}
	func_658(uParam0, iParam1);
}

void func_406(int iParam0, var uParam1, bool bParam2)
{
	if (!_network_is_player_index_valid(iParam0) || !network_is_player_active(iParam0))
	{
		return;
	}
	iVar1 = iParam0;
	_0x31010318ba9897ac(&uVar0, iVar1);
	Var2.f_5 = player_id();
	Var2.f_7 = uParam1;
	Var2.f_4 = 4;
	Var2.f_8 = bParam2;
	func_656(&Var2, &uVar0);
	_0xf37a2149bc9a8a27(-1768832121, player_id(), iParam0, Global_1108365->f_34[iVar1]->f_9, 0);
	func_659(iParam0);
	func_660(iParam0);
	func_661(iParam0);
	Global_1108365->f_34[iVar1]->f_7 = uParam1;
	Global_1108365->f_34[iVar1]->f_6 = 1;
	*Global_1108365->f_34.f_546[iVar1] = { func_662(iParam0) };
	Global_1108365->f_34[iVar1]->f_9 = 0;
	func_663(iVar1);
	Global_1108365->f_34.f_777 = iParam0;
}

bool func_407()
{
	return func_488(1, 255);
}

int func_408(int iParam0)
{
	return (Global_1296859->f_21 - iParam0);
}

void func_409()
{
	if (!func_664(8))
	{
		func_665(8);
		Global_1903071->f_45 = _databinding_add_data_container_from_path("", "Fishing");
		Global_1903071->f_46 = _databinding_add_data_container(Global_1903071->f_45, "BaitCounter");
		Global_1903071->f_47 = _databinding_add_data_bool(Global_1903071->f_46, "isVisible", 1);
		Global_1903071->f_48 = _databinding_add_data_string(Global_1903071->f_45, "LureName", "");
		Global_1903071->f_49 = _databinding_add_data_string(Global_1903071->f_45, "LureCount", "");
		Global_1903071->f_50 = _databinding_add_data_hash(Global_1903071->f_45, "LureTexture", 0);
		Global_1903071->f_51 = _databinding_add_data_bool(Global_1903071->f_45, "put_away_fishingrod_visible", 1);
	}
}

void func_410(var uParam0)
{
	if (Global_1903071->f_4 == 1)
	{
		Global_1903071->f_3 = 0;
		func_161(uParam0);
		return;
	}
	if ((((((((!is_screen_faded_in() && !func_666()) && !func_664(1)) || is_entity_dead(Global_34)) || is_ped_on_mount(Global_34)) || is_ped_in_combat(Global_34, 0)) || is_player_riding_train(player_id())) || is_ped_in_any_train(Global_34)) || func_667())
	{
		Global_1903071->f_3 = 0;
		func_161(uParam0);
		return;
	}
	if (func_664(32))
	{
		Global_1903071->f_3 = 1;
		return;
	}
	if (vdist2(Global_35, -698.9766f, -534.6832f, 40.50001f) < (65f * 65f) && Global_35.f_2 < 50f)
	{
		Global_1903071->f_3 = 1;
		return;
	}
	if (!func_203(uParam0->f_11))
	{
		uParam0->f_15 = func_415(Global_35, uParam0->f_11);
		if (uParam0->f_15 > uParam0->f_14)
		{
			func_161(uParam0);
		}
		else
		{
			return;
		}
	}
	else
	{
		uParam0->f_15 = -1f;
	}
	if (uParam0->f_10 == 0)
	{
		_0x0e184495b27bb57d();
		uParam0->f_1 = _0x74f0209674864cbd();
		_0xe9225354fb7437a7(uParam0->f_1, 1);
		_0x19bc99c678fba139(uParam0->f_1, 77, 0);
		_0x0f4f6c4ce471259d(uParam0->f_1, uParam0->f_14);
		_0x885d19ac2b6fbff4(uParam0->f_1, 1);
		_0x2b8af29a78024bd3(uParam0->f_1);
		uParam0->f_10 = 1;
	}
	if (_0x1ac5a8ab50cfaa33(uParam0->f_1))
	{
		uParam0->f_9 = _0x0365000d8bf86531(&(uParam0->f_1));
	}
	else
	{
		func_161(uParam0);
		return;
	}
	switch (uParam0->f_9)
	{
		case 0:
			uParam0->f_10 = 0;
			break;
		case 3:
			uParam0->f_11 = { _0x865732725536ee39(&(uParam0->f_1)) };
			Global_1903071->f_3 = 1;
			break;
		case 4:
			func_161(uParam0);
			Global_1903071->f_3 = 0;
			break;
	}
}

int func_411(bool bParam0)
{
	if (func_54() == -1)
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

bool func_412()
{
	return Global_1900736->f_67;
}

bool func_413()
{
	return Global_1893587 & 2 != 0;
}

float func_414(var uParam0)
{
	if (!func_668(uParam0))
	{
		return 0f;
	}
	if (func_669(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_670() - uParam0->f_1);
}

float func_415(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

void func_416(var uParam0)
{
	if (does_particle_fx_looped_exist(*uParam0))
	{
		stop_particle_fx_looped(*uParam0, true);
	}
	if (!_0x84848e1c0fc67dbb(uParam0->f_8))
	{
		_0x3210bcb36af7621b(uParam0->f_8);
	}
	uParam0->f_1 = { 0f, 0f, 0f };
}

int func_417(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_203(uParam0->f_13[iVar0]->f_1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_418(var uParam0)
{
	iVar16 = get_ped_nearby_peds(Global_34, &uVar0, -1, -1);
	if (iVar16 > 0)
	{
		iVar17 = 0;
		while (iVar17 < iVar16)
		{
			if ((!is_entity_dead(&(uVar0[iVar17])) && !is_ped_a_player(&(uVar0[iVar17]))) && func_671(&(uVar0[iVar17])))
			{
				vVar18 = { get_entity_coords(&(uVar0[iVar17]), true, false) };
				if ((func_415(Global_35, vVar18) > uParam0->f_1 && func_415(Global_35, vVar18) < uParam0->f_2) && !func_672(uParam0, vVar18))
				{
					return vVar18;
				}
			}
			iVar17++;
		}
	}
	return 0f, 0f, 0f;
}

Vector3 func_419(vector3 vParam0)
{
	vParam0.f_2 = (vParam0.z + 10f);
	vVar0 = { 0f, 0f, 0f };
	bVar5 = test_vertical_probe_against_all_water(vParam0, 1, &fVar3);
	bVar6 = get_ground_z_for_3d_coord(vParam0, &fVar4, false);
	if ((bVar5 == 1 || bVar6 == 0) || fVar3 > fVar4)
	{
		vVar0.x = vParam0.x;
		vVar0.f_1 = vParam0.y;
		vVar0.f_2 = fVar3;
	}
	return vVar0;
}

void func_420(var uParam0, vector3 vParam1)
{
	if ((func_203(uParam0->f_13[*uParam0]->f_1) && !func_203(vParam1)) && !does_particle_fx_looped_exist(&(uParam0->f_13[*uParam0])))
	{
		uParam0->f_13[*uParam0]->f_1 = { vParam1 };
		uParam0->f_13[*uParam0] = start_particle_fx_looped_at_coord("ent_amb_insect_water_flies", uParam0->f_13[*uParam0]->f_1, 0f, 0f, 0f, 1f, false, false, false, true);
		fVar0 = get_random_float_in_range(uParam0->f_6, uParam0->f_7);
		fVar1 = get_random_float_in_range(uParam0->f_8, uParam0->f_9);
		uParam0->f_13[*uParam0]->f_4 = get_random_int_in_range(uParam0->f_10, uParam0->f_11 + 1);
		func_673(&(uParam0->f_13[*uParam0]->f_5));
		set_particle_fx_looped_evolution(&(uParam0->f_13[*uParam0]), "size", fVar0, true);
		set_particle_fx_looped_evolution(&(uParam0->f_13[*uParam0]), "density", fVar1, true);
		_0xdcf5ba95bbf0faba(uParam0->f_13[*uParam0]->f_8, "Fishing_Fly_Swarm", uParam0->f_13[*uParam0]->f_1, uParam0->f_12, 0, 0, 1);
	}
}

int func_421(int iParam0)
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

int func_422(int iParam0)
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

int func_423(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 155;
		case 1:
			return 163;
		case 2:
			return 150;
		case 3:
			return 153;
		case 4:
			return 157;
		case 5:
			return 160;
		case 6:
			return 164;
		case 7:
			return 148;
		case 8:
			return 128;
		case 9:
			return 167;
		case 10:
			return 161;
		case 11:
			return 130;
		case 12:
			return 152;
		case 13:
			return 151;
		case 14:
			return 156;
		case 15:
			return 166;
		case 16:
			return 158;
		case 17:
			return 142;
		case 18:
			return 132;
		case 19:
			return 143;
		case 20:
			return 146;
		case 21:
			return 168;
		case 22:
			return 159;
		case 23:
			return 135;
		case 24:
			return 131;
		case 25:
			return 136;
		case 26:
			return 137;
		case 27:
			return 139;
		case 28:
			return 140;
		case 29:
			return 141;
		case 30:
			return 147;
		case 31:
			return 165;
		case 32:
			return 145;
		case 33:
			return 134;
		case 34:
			return 149;
		case 35:
			return 154;
		case 36:
			return 162;
		case 37:
			return 138;
		case 38:
			return 133;
		case 39:
			return 129;
		case 40:
			return 144;
		case 50:
			return 169;
		default:
			break;
	}
	return -1;
}

bool func_424(int iParam0)
{
	switch (iParam0)
	{
		case 42:
			return true;
		default:
			break;
	}
	return false;
}

void func_425(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

void func_426(var uParam0, var uParam1)
{
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(2, &Var0, 2, 2);
}

void func_427(var uParam0)
{
	uVar0 = uParam0;
	network_set_rich_presence(1, &uVar0, 1, 1);
}

void func_428(var uParam0, var uParam1)
{
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(5, &Var0, 2, 2);
}

void func_429(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

int func_430()
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

bool func_431(int iParam0)
{
	switch (iParam0)
	{
		case -1706799532:
		case -462361264:
		case 1831048556:
			return true;
		default:
			break;
	}
	return false;
}

int func_432()
{
	return &Global_1572864;
}

int func_433()
{
	if (!func_170(&Global_0, 2))
	{
		if (func_54() == -1)
		{
			return 0;
		}
		if (Global_1572887->f_9)
		{
			return 0;
		}
		if (!does_entity_exist(player_ped_id()) || is_entity_dead(player_ped_id()))
		{
			return 0;
		}
		if (!is_player_playing(player_id()))
		{
			return 0;
		}
		if (!func_674(4096, 255))
		{
			return 0;
		}
		if (!func_675(1))
		{
			func_434(&Global_0, 3);
			return 0;
		}
		if (_0x3cf46f55c6585590())
		{
			return 0;
		}
		if (!_0x1840f3b30ed0105f(Global_0))
		{
			func_434(&Global_0, 3);
			return 0;
		}
		func_676(&Global_0, 2);
	}
	if (_0x3cf46f55c6585590())
	{
		return 0;
	}
	func_676(&Global_0, 4);
	func_434(&Global_0, 3);
	return 1;
}

void func_434(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

int func_435()
{
	return Global_1878314->f_83;
}

bool func_436(int iParam0, int iParam1, int iParam2)
{
	StringCopy(&cVar0, "", 64);
	if (!func_677(iParam0, &cVar0))
	{
		return true;
	}
	StringCopy(&cVar8, "", 64);
	if (!func_678(iParam0, &cVar8))
	{
		return true;
	}
	*iParam1 = get_hash_key(&cVar8);
	*iParam2 = get_hash_key(&cVar0);
	if (!_does_streamed_txd_exist(*iParam1))
	{
		return true;
	}
	_request_streamed_txd(*iParam1, false);
	if (!_has_streamed_txd_loaded(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_437(int iParam0, int iParam1, int iParam2)
{
	StringCopy(&cVar0, "", 64);
	if (!func_679(iParam0, &cVar0))
	{
		return true;
	}
	StringCopy(&cVar8, "", 64);
	if (!func_680(iParam0, &cVar8))
	{
		return true;
	}
	*iParam1 = get_hash_key(&cVar8);
	*iParam2 = get_hash_key(&cVar0);
	if (!_does_streamed_txd_exist(*iParam1))
	{
		return true;
	}
	_request_streamed_txd(*iParam1, false);
	if (!_has_streamed_txd_loaded(*iParam1))
	{
		return false;
	}
	return true;
}

char* func_438(int iParam0, int iParam1)
{
	if (Global_265377->f_124386.f_130 > 0 && Global_265377->f_124386.f_130 != iParam0)
	{
		*iParam1 = 5;
		return "";
	}
	switch (Global_265377->f_124386)
	{
		case 0:
			if (!_0x2d5dc831176d0114(iParam0))
			{
				func_681(1);
			}
			else
			{
				_0x68103e2247887242();
				func_681(1);
			}
			break;
		case 1:
			ugc_request_cached_description(iParam0);
			func_681(2);
			break;
		case 2:
			if (!_0xebfa8d50addc54c4(iParam0))
			{
				*iParam1 = 1;
				return "";
			}
			if (_0x162c23ca83ed0a62(iParam0))
			{
				func_681(3);
			}
			else
			{
				func_681(0);
				*iParam1 = 3;
				return "";
			}
			break;
		case 3:
			sVar0 = ugc_get_cached_description(iParam0, 512);
			_0x5a34cd9c3c5bec44(iParam0);
			func_681(0);
			*iParam1 = 2;
			return sVar0;
	}
	*iParam1 = 1;
	return "";
}

void func_439()
{
	func_681(0);
	Global_265377->f_124386.f_130 = 0;
}

char* func_440(int iParam0)
{
	switch (func_682(iParam0))
	{
		case 0:
			return "STRAND_CHAR_CREATOR";
		case 1:
			return "STRAND_INTRO_RHO";
		case 2:
			return "STRAND_INTRO_VAL";
		case 3:
			return "STRAND_INTRO_BLA";
		case 4:
			return "STRAND_INTRO_TUM";
		case 6:
		case 7:
		case 8:
		case 9:
			return "FLOW_CHAPTER_1";
		default:
			break;
	}
	return "";
}

char[] func_441(char[4] cParam0)
{
	return cParam0;
}

void func_442(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_683(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = func_684(iParam0);
	if (iParam1 <= iVar1)
	{
		return;
	}
	if (_0xfbe782b3165ac8ec(iVar0))
	{
		return;
	}
	Global_1878314->f_90 = func_685(iVar0, 0);
}

bool func_443()
{
	return func_686(&Global_1940258, 8192);
}

bool func_444(int iParam0)
{
	return iParam0 != 0;
}

int func_445(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return -715496103;
		case 4:
			return -241254413;
		case 5:
			return -1445638965;
		case 2:
			return 1249997984;
		default:
			break;
	}
	return 0;
}

var func_446(char* sParam0, var uParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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
	Var13.f_2 = uParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	Var13.f_7 = 1;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

bool func_447(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 2147483647)
	{
		return false;
	}
	return true;
}

int func_448(int iParam0, bool bParam1)
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

int func_449(struct<2> Param0)
{
	return func_687(Param0);
}

int func_450(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_460())
	{
		return 0;
	}
	if (!func_236())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_676(&Global_0, 8);
	}
	func_676(&Global_0, 1);
	return 1;
}

void func_451(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_688(func_182(Param0));
	iVar1 = func_449(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_54() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_689(Param0, &Var2);
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

void func_452(struct<2> Param0, int iParam2)
{
	if (!func_55(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_690(Param0);
	}
	else
	{
		func_691(Param0, iParam2);
	}
	func_692();
}

bool func_453(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_454(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_693(Global_1940258, 8388608);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_694(Global_1940258, 8388608);
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

void func_455(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_695(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_696(cVar2);
			}
			else
			{
				func_697();
			}
			_0xf611de44aeb36a1d(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_456(bool bParam0)
{
	if (!bParam0 && func_328(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_457(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_458(struct<2> Param0)
{
	return func_699(func_698(Param0));
}

void func_459(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_460()
{
	return !Global_1572887->f_9;
}

bool func_461()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_4;
}

bool func_462()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_5;
}

bool func_463()
{
	if (Global_1572887->f_360.f_3 > 0)
	{
		return true;
	}
	if (Global_1572887->f_360.f_4 != 0)
	{
		return true;
	}
	return false;
}

int func_464(int iParam0)
{
	if (!func_59(iParam0))
	{
		return -1;
	}
	return &(Global_1211206->f_1[iParam0]);
}

bool func_465()
{
	return Global_1572887->f_106.f_75 != 1;
}

struct<2> func_466(int iParam0)
{
	if (!func_59(iParam0))
	{
		return func_310();
	}
	return (*Global_1835011)[iParam0]->f_1;
}

bool func_467(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

bool func_468(int iParam0, int iParam1)
{
	return (func_467(iParam0) && ((*Global_1900838)[iParam0]->f_1 && iParam1) != 0);
}

bool func_469(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_470(int iParam0, int iParam1)
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

Vector3 func_471(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_19;
}

Vector3 func_472(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_19;
}

void func_473(int iParam0, int iParam1)
{
	if (!func_467(iParam0))
	{
		return;
	}
	(*Global_1900838)[iParam0]->f_1 = ((*Global_1900838)[iParam0]->f_1 || iParam1);
}

void func_474(int iParam0)
{
	if (func_54() == -1)
	{
		return;
	}
	if ((*Global_1835011)[iParam0]->f_3 != 0 && _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3))
	{
		_unlock_set_new((*Global_1835011)[iParam0]->f_3, false);
	}
	func_700(iParam0);
}

void func_475(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_476(int iParam0, int* iParam1)
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
			Var0 = { func_701(1270054266) };
			stat_id_get_int(&Var0, iParam1);
			return true;
		default:
			break;
	}
	return false;
}

bool func_477(int iParam0)
{
	if (func_54() == -1)
	{
		return false;
	}
	if (!network_is_in_session())
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return false;
	}
	if ((*Global_1835011)[iParam0]->f_3 == 0)
	{
		return true;
	}
	if (!Global_1296859->f_14 && _unlock_is_visible((*Global_1835011)[iParam0]->f_3))
	{
		return false;
	}
	iVar0 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(get_player_index()));
	if (!_network_is_player_index_valid(iVar0))
	{
		return false;
	}
	return !func_702(iParam0, iVar0);
}

void func_478(int iParam0)
{
	iVar0 = func_188(func_466(iParam0));
	if (!func_467(iVar0))
	{
		return;
	}
	if (func_469(&((*Global_1835011)[iParam0]->f_30), 2048))
	{
		return;
	}
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_28))
	{
		return;
	}
	if (_set_blip_flash_style((*Global_1835011)[iParam0]->f_28, -1186550032))
	{
	}
}

bool func_479(int iParam0, float fParam1, bool bParam2)
{
	if (func_469(&((*Global_1835011)[iParam0]->f_30), 2048))
	{
		return false;
	}
	return true;
}

void func_480(int iParam0)
{
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_28))
	{
		return;
	}
	bVar0 = false;
	if (func_703(iParam0) == 0)
	{
		if (_set_blip_flash_style((*Global_1835011)[iParam0]->f_28, 724623647))
		{
		}
		if (!bVar0)
		{
			_set_blip_flash_style((*Global_1835011)[iParam0]->f_28, -2112548416);
		}
	}
	else
	{
		if (_blip_set_modifier((*Global_1835011)[iParam0]->f_28, 724623647))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_28, -2112548416);
		}
		bVar0 = true;
	}
	if (iParam0 >= 13 && iParam0 <= 25)
	{
		if (bVar0)
		{
			_set_blip_flash_style((*Global_1835011)[iParam0]->f_28, -1986290853);
		}
		else
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_28, -1986290853);
		}
	}
}

void func_481(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_704(iParam0))
	{
		func_705(1);
	}
	func_706(iParam0, 0);
	func_707((*Global_1835011)[iParam0]->f_1, 1, func_469(&((*Global_1835011)[iParam0]->f_30), 2097152), 1);
	func_700(iParam0);
	if (func_708(iParam0, &uVar0))
	{
		func_710(func_709(1511238709, uVar0), 1);
	}
}

bool func_482(struct<2> Param0)
{
	return func_56(Param0) == 2;
}

void func_483(int iParam0, int iParam1)
{
	iParam0->f_1 = (iParam0->f_1 || iParam1);
}

int func_484(char* sParam0, int iParam1)
{
	if (Global_1051252->f_80.f_101 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = get_hash_key(sParam0);
	iVar0 = 0;
	while (iVar0 <= (Global_1051252->f_80.f_101 - 1))
	{
		if (Global_1051252->f_80[iVar0]->f_8 == iVar1 && Global_1051252->f_80[iVar0]->f_9 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_485(int iParam0)
{
	iVar3 = iParam0 & 32767;
	iVar4 = shift_right(iParam0, 15) & 32767;
	vVar0.x = to_float(iVar3);
	vVar0.f_1 = to_float(iVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1f);
	}
	if (iParam0 & -2147483648 == 0)
	{
		vVar0.f_1 = (vVar0.y * -1f);
	}
	return vVar0;
}

int func_486(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 46:
		case 57:
		case 58:
		case 59:
		case 67:
		case 68:
		case 69:
			return -678244495;
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return -936216634;
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 47:
		case 48:
		case 50:
		case 51:
		case 52:
		case 53:
		case 98:
			return 168093330;
		case 49:
			return -691985497;
		case 45:
			return -1923570663;
		case 54:
		case 55:
		case 56:
			return -972966383;
		case 60:
		case 96:
			return 1560611276;
		case 61:
		case 62:
		case 63:
		case 64:
			return -494978356;
		case 65:
			return -507182222;
		case 66:
			return -1337945352;
		case 70:
			return -383696203;
		case 100:
			return -383696203;
		case 97:
			return 776060936;
		default:
			break;
	}
	return 0;
}

int func_487(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1243830185;
		case 1:
			return 595820042;
		case 2:
			return -1650465405;
		case 4:
			return 1974815632;
		case 5:
			return 1078668923;
		case 6:
			return 552659337;
		case 7:
			return -1179229323;
		case 8:
			return -1581061148;
		case 9:
			return -48718882;
		case 10:
			return -379108622;
		case 11:
			return 1015604260;
		case 12:
			return 126262516;
		case 14:
			return -997121570;
		case 13:
			return 423351566;
		case 16:
			return -1636832113;
		case 17:
			return 1012165077;
		case 18:
			return -250506368;
		case 19:
			return 2033397166;
		case 20:
			return 1475879922;
		case 21:
			return 531267562;
		case 22:
			return 249721687;
		case 23:
			return -145868367;
		case 24:
			return -1989306548;
		case 25:
			return -1739686743;
		case 26:
			return 1195729388;
		case 28:
			return -758970771;
		case 29:
			return 1542275196;
		case 33:
			return 1861010125;
		case 34:
			return 1475382911;
		case 30:
			return 103490298;
		case 31:
			return -2090472724;
		case 32:
			return -1665418949;
		case 35:
			return -852241114;
		case 36:
			return -1406874050;
		case 51:
			return -1017650267;
		case 37:
			return 1938782895;
		case 38:
			return -1456209806;
		case 39:
			return 469827317;
		case 27:
			return 1879260108;
		case 40:
			return -211556852;
		case 41:
			return 1364029453;
		case 52:
			return 1496995379;
		case 53:
			return -73168905;
		case 54:
			return 1586273744;
		case 55:
			return -1498696713;
		case 56:
			return 1586273744;
		case 57:
			return 503049244;
		case 58:
			return 305594522;
		case 59:
			return -417940443;
		case 60:
			return -1606321000;
		case 61:
			return 1904459580;
		case 62:
			return -1989725258;
		case 63:
			return -487631996;
		case 64:
			return -1944395098;
		case 65:
			return -428972082;
		case 66:
			return 1586273744;
		case 67:
			return -1575595762;
		case 68:
			return -417940443;
		case 69:
			return -417940443;
		case 70:
			return -1258576797;
		case 42:
			return -1596758107;
		case 47:
			return 249721687;
		case 48:
			return -1546805641;
		case 43:
			return -1656531561;
		case 44:
			return 1369919445;
		case 45:
			return 1779658797;
		case 46:
			return -417940443;
		case 96:
			return 327180499;
		case 97:
			return 327180499;
		case 98:
			return 935247438;
		case 50:
			return 553094466;
		case 49:
			return 1961764827;
		case 100:
			return -1258576797;
		default:
			break;
	}
	return 0;
}

bool func_488(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_268(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_711())
	{
		return func_268(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_268(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

var func_489(int iParam0, int iParam1)
{
	iVar0 = func_712(iParam0, 0, Global_1301323->f_52.f_31, iParam1);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_713(iParam0, iVar0);
}

var func_490(int iParam0)
{
	return Global_1301323->f_52[iParam0]->f_2;
}

void func_491(var uParam0)
{
	iVar0 = func_285(&(Global_1296859->f_154[&Global_1296859]), 1);
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

bool func_492(int iParam0)
{
	return func_488(48, iParam0);
}

void func_493(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_494(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_495(struct<29> Param0, var uParam29, int iParam30)
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

void func_496(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

int func_497(int iParam0)
{
	if (func_714(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_498(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_499(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

int func_500(int iParam0)
{
	if (func_715(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_501(int iParam0)
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

void func_502(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_716(iParam0);
	if (!func_717(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_718(128) && !func_719(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_361() == 4)
	{
		func_497(18);
	}
	func_720(1024);
}

bool func_503(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_504(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_721(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_722(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_723(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_724(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_725(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_726(iParam0);
	if (iVar5 < 1 || iVar5 > func_727(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_505(int iParam0, bool bParam1)
{
	return func_728(func_592(), iParam0, bParam1);
}

bool func_506(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_729(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_275(iParam0))
	{
		return false;
	}
	if (func_730(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_100(iParam0, 1)) || func_95(32768))
	{
		if (!func_100(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_270())
	{
		return false;
	}
	return true;
}

void func_507(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

void func_508(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

bool func_509(int iParam0, bool bParam1)
{
	iVar0 = func_731(iParam0);
	Var1 = { func_630(bParam1) };
	iVar5 = func_732(&Var1, iVar0, bParam1);
	bVar6 = iVar5 == false;
	return bVar6;
}

bool func_510(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _unlock_is_unlocked(-1815917332);
		case 1:
			return _unlock_is_unlocked(446771306);
		case 2:
			return _unlock_is_unlocked(214930631);
		case 3:
			return _unlock_is_unlocked(1057421621);
		default:
			break;
	}
	return false;
}

bool func_511(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_512(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_411(0);
	*uParam1 = { func_631(iParam0, func_733(0), iParam3, 0) };
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

bool func_513(int iParam0, var uParam1, int iParam2)
{
	if (func_512(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

int func_514(int iParam0)
{
	if (!func_511(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_515(int iParam0, int iParam1)
{
	if (!func_511(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_734(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_735("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_736(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_503(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_737(iVar1);
				return true;
			}
			iVar3++;
		}
		func_737(iVar1);
	}
	return false;
}

bool func_516(int iParam0)
{
	if (!func_511(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_297(iParam0);
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
	iVar1 = func_738(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_739(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_740(iParam0);
	iVar2 = func_739(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

int func_517(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_511(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_514(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_734(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_741(iParam0, 0);
	}
	if (func_742(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_411(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_743(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_411(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_518(int iParam0)
{
	if (!func_744(iParam0))
	{
		return 0;
	}
	iVar0 = func_745(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_746(iParam0, 1);
	}
	return 0;
}

bool func_519(int iParam0)
{
	return (Global_19 && iParam0) != 0;
}

bool func_520()
{
	if (func_747())
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		if (Global_1940258->f_38 == 2055893578)
		{
			return is_control_pressed(0, 130948705);
		}
		return get_ped_reset_flag(Global_34, 311);
	}
	else
	{
		return &(Global_1956200->f_1716[3]);
	}
	return false;
}

int func_521(int iParam0)
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

int func_522(int iParam0, int iParam1)
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

bool func_523(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (_0xf8d09ef8ce61d7bf(uParam0, &Var3))
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

bool func_524()
{
	return true;
	if (Global_1572887->f_13 == 0)
	{
		return true;
	}
	return Global_39.f_1;
}

var func_525(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	Var0 = -2;
	Var0 = 8000;
	Var0.f_1 = "Mission_Complete_Sounds";
	Var0.f_2 = "Mission_Complete_Enter";
	Var0.f_3 = 0;
	Var0.f_4 = -76766502;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = 0;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	Var13.f_7 = 1;
	uVar21 = _0xaff5be9ba496ce40(&Var0, &Var13, 1, 1, iParam4);
	return uVar21;
}

int func_526(int iParam0)
{
	if (!func_531(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_13 == -1)
	{
		return &(Global_39.f_190[iParam0]);
	}
	iVar0 = 0;
	Var1 = { func_662(player_id()) };
	_0x4ef23e04a0c8ff51(&Var1, &uVar8);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1071686->f_21325[iVar0] = uVar8;
		iVar0++;
	}
	return &(Global_1071686->f_21325[iParam0]);
}

bool func_527(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_528(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_39.f_3643[iVar1]), iVar2);
}

void func_529(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_39.f_3643[iVar1];
	set_bit(&uVar3, iVar2);
	Global_39.f_3643[iVar1] = uVar3;
}

void func_530(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_748(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			_uitutorial_set_rpg_icon_visibility(5, 0);
			_uitutorial_set_rpg_icon_visibility(4, 0);
			func_749(1);
			break;
		case 18:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_749(2);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_749(3);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(7, 0);
			_uitutorial_set_rpg_icon_visibility(6, 0);
			break;
		case 21:
			_uitutorial_set_rpg_icon_visibility(9, 0);
			_uitutorial_set_rpg_icon_visibility(8, 0);
			break;
		case 30:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 31:
			break;
		case 32:
			func_750(1);
			break;
		case 33:
			func_751(1);
			break;
		case 34:
			func_752(1);
			break;
		case 35:
			break;
		case 36:
			func_753(0);
			break;
		case 37:
			func_754(0);
			break;
		case 38:
			func_755(0);
			break;
		case 39:
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 1:
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_level(get_player_index(), 1);
			break;
		case 2:
			if (func_524() && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_756("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_233(677, 0);
			break;
		case 3:
			if (func_524() && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_756("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_233(678, 0);
			break;
		case 4:
			if (func_524() && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_756("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_233(679, 0);
			break;
		case 5:
			if (func_524() && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_756("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_233(680, 0);
			break;
		case 23:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			break;
		case 47:
			if (func_54() == -1)
			{
				if (!func_241(1013902307, 1))
				{
					func_757(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_54() == -1)
			{
				if (!func_241(1013902307, 1))
				{
					func_757(1013902307, 1, 752097756);
				}
				if (!func_241(142640135, 1))
				{
					func_757(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			if (func_54() == -1)
			{
				if (!func_241(786809402, 1))
				{
					func_757(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_54() == -1)
			{
				if (!func_241(786809402, 1))
				{
					func_757(786809402, 1, 752097756);
				}
				if (!func_241(-518019409, 1))
				{
					func_757(-518019409, 1, 752097756);
				}
			}
			break;
		case 22:
			_0x5b9813ecf7633fe8(0);
			break;
		case 24:
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 43:
			break;
		case 44:
			_unlock_set_unlocked(-843169622, true);
			Global_1940258->f_41 = 1;
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Enable", true, true);
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 45:
			break;
		case 46:
			_0xa63fcad3a6fec6d2(get_player_index(), 1);
			break;
		case 51:
			_unlock_set_unlocked(-78935213, true);
			break;
		case 52:
			_unlock_set_unlocked(-384786155, true);
			break;
		case 53:
			_unlock_set_unlocked(296662302, true);
			break;
		case 54:
			_unlock_set_unlocked(-1871453000, true);
			break;
		case 55:
			_unlock_set_unlocked(1397349651, true);
			break;
	}
}

bool func_531(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

float func_532(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_758(2);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1956200->f_1431.f_6[iParam0]);
		case 1:
			return &(Global_1956200->f_1565.f_2.f_6[iParam0]);
		default:
			break;
	}
	return -1f;
}

bool func_533(var uParam0)
{
	return _0x811a748b1be231ba(uParam0) <= 0f;
}

bool func_534()
{
	if (func_276())
	{
		return false;
	}
	return Global_1956200->f_1431.f_96 == 0;
}

bool func_535()
{
	if (func_276())
	{
		return false;
	}
	return Global_1956200->f_1431.f_96 == 2;
}

bool func_536(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

float func_537(int iParam0, bool bParam1)
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

bool func_538(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28347), iParam0))
	{
		return true;
	}
	return false;
}

bool func_539(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

bool func_540(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iParam0))
	{
		return true;
	}
	return false;
}

bool func_541(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		func_759(iParam0);
		return false;
	}
	if (func_540(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 2)
		{
			func_760(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (_0x862c5040f4888741(Global_1296859->f_10, iParam0) || _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 2);
}

bool func_542(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

int func_543(int iParam0)
{
	switch (iParam0)
	{
		case -59585102:
			return get_hash_key("KIT_POUCH_REMEDIES_MP");
		case 1018123892:
			return get_hash_key("KIT_POUCH_INGREDIENTS_MP");
		case 982182330:
			return get_hash_key("KIT_POUCH_MATERIALS_MP");
		case -1406390556:
			return get_hash_key("KIT_POUCH_VALUABLES_MP");
		case -1455768246:
			return get_hash_key("KIT_POUCH_KIT_MP");
		case -921879912:
			return get_hash_key("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

int func_544(int iParam0)
{
	return iParam0;
}

int func_545(int iParam0, int iParam1)
{
	if (!func_761(iParam0, 2))
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

bool func_546(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_547(int iParam0, int iParam1)
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

bool func_548(struct<2> Param0)
{
	return func_762(Param0, 1, 4);
}

float func_549(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_550(var uParam0, var uParam1)
{
	if (func_763(uParam0, uParam1))
	{
		uParam1->f_63 = func_764(uParam1);
	}
}

bool func_551(int iParam0)
{
	iVar0 = func_565(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_1939655->f_65[iVar1]), iVar2);
}

bool func_552(int iParam0)
{
	if (is_screen_faded_out())
	{
		return false;
	}
	return _is_position_inside_imap_streaming_extents(iParam0, Global_35);
}

void func_553(int iParam0)
{
	iVar0 = func_565(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	clear_bit(Global_1939655->f_65[iVar1], iVar2);
}

int func_554(int iParam0)
{
	if (!func_26(iParam0))
	{
		return 0;
	}
	return (*Global_1887339)[iParam0]->f_4;
}

bool func_555(int iParam0, vector3 vParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(iParam0, vParam1);
}

bool func_556(int iParam0, float fParam1)
{
	if (!_is_imap_active(iParam0))
	{
		return false;
	}
	if (!_get_imap_position_and_heading(iParam0, &vVar0, &uVar3))
	{
		return false;
	}
	if (vdist(get_entity_coords(Global_34, true, false), vVar0) <= fParam1)
	{
		return true;
	}
	return false;
}

int func_557(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		return 1;
	}
	if (func_138())
	{
		return 0;
	}
	_request_imap(iParam0);
	return 0;
}

int func_558(int iParam0)
{
	return iParam0;
}

bool func_559(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = func_54() != -1;
	switch (iParam0)
	{
		case 81:
			*iParam1 = 0;
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
		case 111:
			*iParam1 = 69;
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
			*iParam1 = 137;
			*iParam2 = 318;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 66:
			*iParam1 = 374;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 374;
			}
			break;
		case 83:
			*iParam1 = 376;
			*iParam2 = 425;
			if (bVar0)
			{
				*iParam2 = 378;
			}
			break;
		case 98:
			*iParam1 = 437;
			*iParam2 = 465;
			if (bVar0)
			{
				*iParam2 = 437;
			}
			break;
		case 26:
			*iParam1 = 466;
			if (bParam3)
			{
				*iParam2 = 494;
			}
			else
			{
				*iParam2 = 496;
			}
			if (bVar0)
			{
				*iParam2 = 466;
			}
			break;
		case 40:
			*iParam1 = 502;
			*iParam2 = 547;
			if (bVar0)
			{
				*iParam2 = 503;
			}
			break;
		case 73:
			*iParam1 = 548;
			*iParam2 = 559;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 560;
			*iParam2 = 582;
			if (bVar0)
			{
				*iParam2 = 560;
			}
			break;
		case 74:
			*iParam1 = 583;
			if (bParam3)
			{
				*iParam2 = 592;
			}
			else
			{
				*iParam2 = 606;
			}
			if (bVar0)
			{
				*iParam2 = 584;
			}
			break;
		case 80:
			*iParam1 = 497;
			*iParam2 = 500;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 99:
			*iParam1 = 607;
			*iParam2 = 619;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 620;
			*iParam2 = 635;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 103:
			*iParam1 = 636;
			*iParam2 = 637;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 638;
			*iParam2 = 650;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 651;
			*iParam2 = 652;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 33:
			*iParam1 = 319;
			*iParam2 = 338;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 87:
			*iParam1 = 653;
			if (bParam3)
			{
				*iParam2 = 667;
			}
			else
			{
				*iParam2 = 684;
			}
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 37:
			*iParam1 = 685;
			*iParam2 = 694;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 60:
			*iParam1 = 695;
			*iParam2 = 702;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*iParam1 = 709;
			}
			else
			{
				*iParam1 = 703;
			}
			*iParam2 = 717;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 718;
			*iParam2 = 724;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 69:
			*iParam1 = 730;
			*iParam2 = 734;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 71:
			*iParam1 = 739;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 75:
			*iParam1 = 745;
			*iParam2 = 748;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 725;
			*iParam2 = 726;
			break;
		case 102:
			*iParam1 = 735;
			*iParam2 = 737;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 30:
			*iParam1 = 738;
			*iParam2 = 738;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 106:
			*iParam1 = 749;
			*iParam2 = 757;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 108:
			*iParam1 = 758;
			*iParam2 = 761;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 727;
			*iParam2 = 729;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 131:
			*iParam1 = 785;
			*iParam2 = 787;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 91:
			*iParam1 = 762;
			*iParam2 = 766;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 135:
			*iParam1 = 767;
			*iParam2 = 773;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 127:
			*iParam1 = 426;
			*iParam2 = 436;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 121:
			*iParam1 = 339;
			*iParam2 = 369;
			if (bVar0)
			{
				*iParam2 = 369;
			}
			break;
		case 132:
			*iParam1 = 370;
			*iParam2 = 373;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 122:
			*iParam1 = 777;
			*iParam2 = 784;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 774;
			*iParam2 = 776;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 44:
			*iParam1 = 788;
			*iParam2 = 792;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 94:
			*iParam1 = 793;
			*iParam2 = 794;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 795;
			*iParam2 = 795;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 796;
			*iParam2 = 797;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 107:
			*iParam1 = 798;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 123:
			*iParam1 = 501;
			*iParam2 = 501;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 801;
			*iParam2 = 827;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 139:
			*iParam1 = 828;
			*iParam2 = 851;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*iParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

void func_560(int iParam0, int iParam1)
{
	if (func_54() != -1)
	{
		return;
	}
	if (!func_568(iParam0))
	{
		return;
	}
	Global_9892[iParam0] = (&Global_9892[iParam0] - (Global_9892[iParam0] && iParam1));
}

void func_561(int iParam0)
{
	if (func_54() != -1)
	{
		return;
	}
	_0x2df89cd2ed1d0bde(852936895, iParam0);
	_0x2df89cd2ed1d0bde(-2043636604, iParam0);
	_0x2df89cd2ed1d0bde(-1543778692, iParam0);
	_0x2df89cd2ed1d0bde(-1472222264, iParam0);
	_0x2df89cd2ed1d0bde(-736367663, iParam0);
	_0x2df89cd2ed1d0bde(19124873, iParam0);
	_0x2df89cd2ed1d0bde(-53891762, iParam0);
	_0x2df89cd2ed1d0bde(1479005205, iParam0);
	_0x2df89cd2ed1d0bde(928225741, iParam0);
	_0x2df89cd2ed1d0bde(1653641232, iParam0);
	_0x2df89cd2ed1d0bde(-1945348028, iParam0);
	_0x2df89cd2ed1d0bde(-1086821801, iParam0);
	_0x2df89cd2ed1d0bde(212415041, iParam0);
	_0x2df89cd2ed1d0bde(-16935190, iParam0);
	_0x2df89cd2ed1d0bde(-16946315, iParam0);
	_0x2df89cd2ed1d0bde(584808788, iParam0);
	_0x2df89cd2ed1d0bde(1443812975, iParam0);
	_0x2df89cd2ed1d0bde(1908738551, iParam0);
	_0x2df89cd2ed1d0bde(-35439674, iParam0);
	_0x2df89cd2ed1d0bde(-1792832235, iParam0);
	_0x2df89cd2ed1d0bde(1317192638, iParam0);
	_0x2df89cd2ed1d0bde(1787522659, iParam0);
	_0x2df89cd2ed1d0bde(-1701317228, iParam0);
	_0x2df89cd2ed1d0bde(-934649940, iParam0);
	_0x2df89cd2ed1d0bde(785713260, iParam0);
	_0x2df89cd2ed1d0bde(-2099882877, iParam0);
	_0x2df89cd2ed1d0bde(1659593009, iParam0);
	_0x2df89cd2ed1d0bde(156473432, iParam0);
	_0x2df89cd2ed1d0bde(1198640232, iParam0);
	_0x2df89cd2ed1d0bde(2141998185, iParam0);
	_0x2df89cd2ed1d0bde(2001815635, iParam0);
	_0x2df89cd2ed1d0bde(1943609607, iParam0);
	_0x2df89cd2ed1d0bde(1330931991, iParam0);
	_0x2df89cd2ed1d0bde(135431031, iParam0);
	_0x2df89cd2ed1d0bde(1016865322, iParam0);
	_0x2df89cd2ed1d0bde(-1456173883, iParam0);
	_0x2df89cd2ed1d0bde(344419080, iParam0);
	_0x2df89cd2ed1d0bde(1057927283, iParam0);
	_0x2df89cd2ed1d0bde(1711355775, iParam0);
	_0x2df89cd2ed1d0bde(49689699, iParam0);
	_0x2df89cd2ed1d0bde(260410249, iParam0);
	_0x2df89cd2ed1d0bde(-1720522403, iParam0);
	_0x2df89cd2ed1d0bde(-1128080855, iParam0);
	_0x2df89cd2ed1d0bde(-1496211826, iParam0);
	_0x2df89cd2ed1d0bde(-359518005, iParam0);
	_0x2df89cd2ed1d0bde(2016269890, iParam0);
	_0x2df89cd2ed1d0bde(1690461416, iParam0);
	_0x2df89cd2ed1d0bde(41051113, iParam0);
	_0x2df89cd2ed1d0bde(-849398716, iParam0);
	_0x2df89cd2ed1d0bde(1677108849, iParam0);
}

void func_562(int iParam0)
{
	if (_0xe38450dbcbc70e3d(func_215(iParam0, 0), -514130076))
	{
		_0x6786d7afac3162b3(func_215(iParam0, 0));
	}
}

void func_563()
{
	if (((!func_328(168171957) && !func_328(1193080109)) && !func_328(-491981251)) && !func_328(-639037538))
	{
		func_333(98);
	}
	if (!func_328(168171957))
	{
		func_333(99);
	}
	if (((!func_328(1193080109) && !func_328(-491981251)) && !func_328(-639037538)) && !func_328(-618620429))
	{
		func_333(100);
	}
	if (!func_328(1193080109))
	{
		func_333(101);
	}
	if (!func_328(1193080109))
	{
		func_333(102);
	}
	if (!func_328(1193080109))
	{
		func_333(103);
	}
	if (!func_328(1193080109) && !func_328(-491981251))
	{
		func_333(105);
	}
	if (!func_328(-639037538))
	{
		func_333(104);
	}
	if ((!func_328(-491981251) && !func_328(-618620429)) && !func_328(-639037538))
	{
		func_333(107);
	}
	if (!func_328(-491981251) && !func_328(-639037538))
	{
		func_333(108);
	}
	if (((!func_328(168171957) && !func_328(1193080109)) && !func_328(-491981251)) && !func_328(-639037538))
	{
		func_333(109);
	}
	if (!func_328(-618620429))
	{
		func_333(110);
	}
	if (!func_328(-618620429))
	{
		func_333(111);
	}
	if (!func_328(-618620429))
	{
		func_333(112);
	}
	if (((!func_328(168171957) && !func_328(1193080109)) && !func_328(-491981251)) && !func_328(-639037538))
	{
		func_333(114);
	}
	if ((!func_328(-491981251) && !func_328(-618620429)) && !func_328(-639037538))
	{
		func_333(115);
	}
	if (((!func_328(-491981251) && !func_328(-618620429)) && !func_328(1193080109)) && !func_328(-639037538))
	{
		func_333(116);
	}
	if ((!func_328(704802028) && !func_328(588987611)) && !func_328(2008888900))
	{
		func_332(-722030448);
	}
	if (((!func_328(-491981251) && !func_328(-618620429)) && !func_328(-639037538)) && !func_328(1193080109))
	{
		func_332(-956131204);
		func_332(1353861354);
	}
	if (((((((!func_328(588987611) && !func_328(1649996811)) && !func_328(227918160)) && !func_328(168171957)) && !func_328(1193080109)) && !func_328(-491981251)) && !func_328(-639037538)) && !func_328(2008888900))
	{
		func_332(578474998);
	}
	if ((((!func_328(168171957) && !func_328(1193080109)) && !func_328(-491981251)) && !func_328(-639037538)) && !func_328(-618620429))
	{
		func_332(-1667461262);
	}
	if ((((!func_328(168171957) && !func_328(1193080109)) && !func_328(-491981251)) && !func_328(-639037538)) && !func_328(-618620429))
	{
		func_332(411742897);
		func_332(1467774743);
		func_332(1344772301);
		func_332(43335376);
		func_332(-284612948);
	}
	if (((!func_328(1193080109) && !func_328(-491981251)) && !func_328(-639037538)) && !func_328(-618620429))
	{
		func_332(-692583342);
	}
	if (((!func_328(1193080109) && !func_328(-491981251)) && !func_328(-639037538)) && !func_328(-618620429))
	{
		func_332(-918785150);
	}
	if (((!func_328(-491981251) && !func_328(-618620429)) && !func_328(-491981251)) && !func_328(-639037538))
	{
		func_332(1236917971);
	}
	if ((!func_328(-491981251) && !func_328(-639037538)) && !func_328(-618620429))
	{
		func_332(1532009326);
		func_332(-803019223);
		_0xdd0bc0edcb2162f6(-803019223);
		func_332(-1860722801);
		func_332(637627640);
	}
	if (!func_328(-618620429))
	{
		func_332(1965249616);
		func_332(-2021605623);
		func_332(1649902358);
		func_332(1169279648);
		func_332(-218940381);
	}
	if (!func_328(704802028))
	{
		func_332(-904669171);
		func_332(774601424);
		func_332(-584332967);
		func_332(-1615103170);
		func_332(1256771838);
		func_332(-1765152778);
		func_332(-2072231077);
		func_332(19217583);
	}
	if ((!func_328(-491981251) && !func_328(-639037538)) && !func_328(-618620429))
	{
		func_332(349494711);
	}
	if (!func_328(1193080109))
	{
		func_332(1205945639);
	}
	func_332(1532774697);
	if (!func_328(1193080109))
	{
		func_332(431365499);
		func_332(276582710);
		func_332(1191890045);
		func_332(1864768904);
	}
	if (!func_328(-491981251) && !func_328(-639037538))
	{
		func_332(-2090209059);
		func_332(1977031606);
		func_332(1929454697);
		func_332(938290967);
	}
	func_332(-2000794023);
	func_332(-531137142);
	if (!func_328(588987611) && !func_328(2008888900))
	{
		func_332(1757739778);
	}
	func_332(5422464);
	if (!func_328(704802028) && !func_328(588987611))
	{
		func_332(-1012618146);
	}
	if (!func_328(1649996811) && !func_328(2008888900))
	{
		func_332(2111816145);
	}
	if (!func_328(168171957))
	{
		func_332(1681117196);
	}
	if (!func_328(227918160) && !func_328(168171957))
	{
		func_332(197447134);
	}
	if (!func_328(168171957))
	{
		func_332(-974480336);
	}
	func_332(33260939);
	func_332(-270212770);
	func_332(862349416);
	func_332(2006257967);
	func_332(-2008632686);
	if (func_54() == -1)
	{
		if ((((!func_328(704802028) && !func_328(588987611)) && !func_328(1649996811)) && !func_328(227918160)) && !func_328(2008888900))
		{
			func_332(-1253110600);
			func_332(-1402083909);
			func_332(1970695826);
			func_332(-382865315);
		}
	}
	if (!func_328(168171957))
	{
		func_332(-1325016116);
	}
	func_341("nav_mesh_beech_shack");
	func_341("nav_mesh_beech_shack_with_fire");
	func_341("nav_mesh_beech_camp_with_rubble");
	func_341("nav_mesh_beech_house_finished");
	func_341("nav_mesh_beech_barn_finished");
	func_341("nav_mesh_beech_gazebo_finished");
	func_341("nav_mesh_beech_house_decor");
	func_341("nav_mesh_beech_camp_with_supplies");
}

bool func_564(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_1939655->f_28[iVar1]), iVar2);
}

int func_565(int iParam0, int iParam1)
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

bool func_566(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return true;
	}
	return false;
}

void func_567(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_568(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 948);
}

bool func_569(int iParam0, int iParam1)
{
	if (func_54() != -1)
	{
		return false;
	}
	if (!func_568(iParam0))
	{
		return false;
	}
	return (Global_9892[iParam0] && iParam1) != 0;
}

int func_570(int iParam0)
{
	if (!func_568(iParam0))
	{
		return 0;
	}
	return Global_1893775[iParam0];
}

int func_571(int iParam0)
{
	if (!func_568(iParam0))
	{
		return 0;
	}
	return (*Global_1893775)[iParam0]->f_1;
}

void func_572(int iParam0)
{
	if (!func_568(iParam0))
	{
		return;
	}
	iVar0 = func_765(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1893775)[iParam0]->f_2 = 0;
}

void func_573(int iParam0, int iParam1)
{
	if (!func_568(iParam0))
	{
		return;
	}
	(*Global_1893775)[iParam0]->f_1 = iParam1;
}

void func_574(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_321(iParam0);
	}
	else
	{
		func_332(iParam0);
	}
}

bool func_575(int iParam0)
{
	if (!func_568(iParam0))
	{
		return false;
	}
	if (!func_766(func_570(iParam0)))
	{
		return true;
	}
	if (!_0x800df3fc913355f3(func_571(iParam0)))
	{
		return false;
	}
	if (network_is_in_session())
	{
		if (!network_has_control_of_entity(_0x31c70a716cae1fee(func_571(iParam0))))
		{
			return true;
		}
	}
	iVar0 = _0x31c70a716cae1fee(func_571(iParam0));
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, true);
		}
	}
	_0x7b204f88f6c3d287(func_571(iParam0));
	return true;
}

int func_576(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_door_registered_with_system(iParam0))
	{
		if ((network_is_in_session() && _does_thread_exist(&(Global_1051252->f_16[0]))) && bParam1)
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051252->f_16[0]), 0, 0);
		}
		else
		{
			_0xd99229fe93b46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((network_is_in_session() && _does_thread_exist(&(Global_1051252->f_16[0]))) && bParam1)
	{
		if (!_0xb5ded7b65c604fdf(iParam0))
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051252->f_16[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		_0x1f1fabfe9b2a1254(iParam0, 1);
	}
	return iParam0;
}

bool func_577(int iParam0)
{
	if (func_767(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_578(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (func_577(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, fParam1, iParam3);
	}
}

void func_579(int iParam0, bool bParam1)
{
	if (func_577(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_580(int iParam0, bool bParam1)
{
	if (func_577(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_581(int iParam0, bool bParam1)
{
	if (func_577(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_582()
{
	return true;
}

void func_583(int iParam0, int iParam1, bool bParam2)
{
	func_576(iParam0, 0, 0);
	if (func_577(iParam0))
	{
		if (door_system_get_door_state(iParam0) != iParam1 || bParam2)
		{
			door_system_set_door_state(iParam0, iParam1);
		}
	}
}

void func_584(int iParam0)
{
	if (func_577(iParam0) && func_768())
	{
		remove_door_from_system(iParam0);
	}
}

void func_585(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	clear_area(vParam0, fParam3, iVar0);
}

int func_586(int iParam0)
{
	switch (iParam0)
	{
		case 1812677765:
			return 1093030199;
		case -1753769127:
			return -1423344014;
		case -947815572:
			return 1437809535;
		case -1181950077:
			return -1862782800;
		case -489737721:
			return 1748373207;
		case -102827640:
			return -736226816;
		case -1906892166:
			return 1497923922;
		case -2141419899:
			return 87946549;
		case 16844748:
			return 104172940;
		case 831940854:
			return -2054468361;
		case -1387772214:
			return 42616763;
		case -1095341658:
			return -948864541;
		case -1848799275:
			return 879263546;
		case -1556041029:
			return -751879320;
		case -1808329564:
			return -864071044;
		case 1866434585:
			return 1779169712;
		case 1421300489:
			return 1083754485;
		case 1248935549:
			return 815958096;
		case 943561238:
			return 1532789536;
		case -1939389836:
			return 1916363327;
		case -243260793:
			return -536919806;
		case -492731190:
			return -1774606389;
		case -839820438:
			return 999671710;
		case 1325325699:
			return -1051551519;
		case -1705799799:
			return 1303507358;
		case -89829333:
			return -519371139;
		case -1262828457:
			return 120604643;
		case -931337253:
			return -1819679999;
		case 1494062795:
			return -2145807603;
		case -1287894233:
			return -583431154;
		case 2068208444:
			return 1096335200;
		case -1932919229:
			return -270131786;
		case -364475655:
			return 242017654;
		case -110352060:
			return 120283199;
		case -1023919011:
			return 2127497940;
		case -852602679:
			return -1643311717;
		case -297483764:
			return -1765524972;
		case -1578292898:
			return 1364667248;
		case 1517951665:
			return -680105331;
		case 1891256113:
			return -252982535;
		case -1624627591:
			return 908136834;
		case -1914141706:
			return 1657354548;
		case -74031276:
			return -2001856298;
		case 1280406542:
			return 1108419054;
		case 982765715:
			return 1665904081;
		case -1120447016:
			return -1279448947;
		case 1788424349:
			return -2143372379;
		case 1028084603:
			return -1279389329;
		case -1827602683:
			return -1954638951;
		case 565812320:
			return 574916087;
		case 1279586666:
			return 1793712122;
		case 1480425906:
			return -847027479;
		case 846837291:
			return -946682429;
		case 1153686207:
			return 67603480;
		case -70727482:
			return 1991561012;
		case 84709454:
			return 1292550073;
		case 799106423:
			return -233702408;
		case 560154875:
			return -284530484;
		case 2079292950:
			return 1510796294;
		case 1521272922:
			return 616635225;
		case -677920206:
			return -25254585;
		case -414883443:
			return -1058872649;
		case -1004266677:
			return -1818498296;
		case -1290997627:
			return -657334314;
		case -1462313959:
			return -2144326250;
		case -1882707460:
			return -199228359;
		case -2056579774:
			return 806606916;
		case -1442844448:
			return 2137579614;
		case -1684974589:
			return -476328287;
		case -38135693:
			return -2025289364;
		case 803929300:
			return 536560689;
		case -2100409704:
			return 1106131202;
		case -604603161:
			return -1428524966;
		case -1422877860:
			return 1307857318;
		case 826868753:
			return 1117275649;
		case 730069127:
			return 1628921491;
		case -1378911044:
			return -1815797865;
		case -1341750998:
			return 1673216541;
		case 2068253437:
			return 1803637785;
		case -1395855864:
			return 1812712970;
		case -1749433374:
			return 474786474;
		case 1232840551:
			return 492662035;
		case 642824856:
			return 1951742298;
		case -207792846:
			return -313167137;
		case 715735881:
			return 1673463331;
		case 404823609:
			return 568859874;
		case 1126565489:
			return -1623539657;
		case -1664435783:
			return -1939338394;
		case -1369678628:
			return -860360254;
		case 2013720626:
			return -409479737;
		case 215903338:
			return -1353663029;
		case -90486812:
			return 11141848;
		case -329176208:
			return 405359977;
		case -574190021:
			return -1754697240;
		case -800891377:
			return 1199250380;
		case -630295963:
			return 1303859698;
		case 2127412005:
			return 131702782;
		case 1362354162:
			return -1358954864;
		case 2048790450:
			return 1425800019;
		case -101740709:
			return 1216579993;
		case 673606600:
			return -1508001532;
		case -895307590:
			return 1551178888;
		case 1032791043:
			return 743168245;
		case 804063423:
			return 1098358070;
		case -1573753524:
			return -1871896679;
		case -1842033327:
			return -590242693;
		case -888632790:
			return 30280292;
		case -583127403:
			return -1211924901;
		case -381925743:
			return 2088585697;
		case -75928821:
			return -14824697;
		case 321629486:
			return -46828581;
		case 896725436:
			return -1858229297;
		case -941648233:
			return -216811017;
		case -635323621:
			return -1431123016;
		case 1157309080:
			return -1448418975;
		case -797689456:
			return -1645569664;
		case -500245243:
			return -2122265662;
		case -211583122:
			return -510114122;
		case 237155783:
			return 1857676106;
		case -1547280108:
			return -387074757;
		case -1719055206:
			return 2001473838;
		case 1601722481:
			return 1283630779;
		case -2142074819:
			return 696753474;
		case -226366310:
			return 584821987;
		case -1502194556:
			return 54505570;
		case -1749043433:
			return -894288155;
		case 1341699707:
			return 353008762;
		case 1666964801:
			return -973153750;
		case -1673998598:
			return -394475958;
		case -1445041595:
			return 1277031798;
		case 148595040:
			return -1244697162;
		case -729679654:
			return 834697453;
		case -448554447:
			return 1419259602;
		case -1339871203:
			return -378666035;
		default:
			break;
	}
	return -1554566073;
}

int func_587(int iParam0)
{
	switch (iParam0)
	{
		case -1319875891:
			return 236;
		case 640520536:
			return 237;
		default:
			break;
	}
	return 0;
}

char* func_588(int iParam0)
{
	switch (iParam0)
	{
		case 1812677765:
			return "MS_TRE04_TUMBLEWEED01";
		case -1906892166:
			return "MS_TRE02_VALENTINE02";
		case -1848799275:
			return "MS_TRE03_RHODES03";
		case 1866434585:
			return "MS_TRE01_BLACKWATER01";
		case -243260793:
			return "MS_TRE02_BARDSCROSSING01";
		case -492731190:
			return "MS_TRE02_BARDSCROSSING02";
		case -839820438:
			return "MS_TRE02_BARDSCROSSING03";
		case 1325325699:
			return "MS_TRE02_BARDSCROSSING04";
		case -1705799799:
			return "MS_TRE04_BENEDICTPOINT01";
		case -89829333:
			return "MS_TRE04_BENEDICTPOINT02";
		case -1262828457:
			return "MS_TRE04_BENEDICTPOINT03";
		case -931337253:
			return "MS_TRE04_BENEDICTPOINT04";
		case 1494062795:
			return "MS_TRE01_BLACKBONEFOREST01";
		case -1287894233:
			return "MS_TRE01_BLACKBONEFOREST02";
		case 2068208444:
			return "MS_TRE01_BLACKBONEFOREST03";
		case -1932919229:
			return "MS_TRE01_BLACKBONEFOREST04";
		case -364475655:
			return "MS_TRE03_BLUEWATERMARSH01";
		case -110352060:
			return "MS_TRE03_BLUEWATERMARSH02";
		case -1023919011:
			return "MS_TRE03_BLUEWATERMARSH03";
		case -852602679:
			return "MS_TRE03_BLUEWATERMARSH04";
		case -297483764:
			return "MS_TRE02_BRANDYWINEDROP01";
		case -1578292898:
			return "MS_TRE02_BRANDYWINEDROP02";
		case 1517951665:
			return "MS_TRE02_BRANDYWINEDROP03";
		case 1891256113:
			return "MS_TRE02_BRANDYWINEDROP04";
		case -1624627591:
			return "MS_TRE02_BURNTTOWN02";
		case -1914141706:
			return "MS_TRE02_BURNTTOWN03";
		case -74031276:
			return "MS_TRE02_BURNTTOWN04";
		case 1280406542:
			return "MS_TRE02_CALUMETRAVINE01";
		case 982765715:
			return "MS_TRE02_CALUMETRAVINE02";
		case -1120447016:
			return "MS_TRE02_CALUMETRAVINE03";
		case 1788424349:
			return "MS_TRE02_CALUMETRAVINE04";
		case 1028084603:
			return "MS_TRE01_CATTAILPOND01";
		case -1827602683:
			return "MS_TRE01_CATTAILPOND02";
		case 565812320:
			return "MS_TRE01_CATTAILPOND03";
		case 1279586666:
			return "MS_TRE01_CATTAILPOND04";
		case 1480425906:
			return "MS_TRE02_CITADELROCK01";
		case 846837291:
			return "MS_TRE02_CITADELROCK02";
		case 1153686207:
			return "MS_TRE02_CITADELROCK03";
		case -70727482:
			return "MS_TRE02_CITADELROCK04";
		case 84709454:
			return "MS_TRE03_CIVILWARBATTLEFIELD01";
		case 799106423:
			return "MS_TRE03_CIVILWARBATTLEFIELD02";
		case 560154875:
			return "MS_TRE03_CIVILWARBATTLEFIELD03";
		case 2079292950:
			return "MS_TRE03_CIVILWARBATTLEFIELD04";
		case 1521272922:
			return "MS_TRE02_WESTCUMBERLANDFOREST01";
		case -677920206:
			return "MS_TRE02_WESTCUMBERLANDFOREST02";
		case -414883443:
			return "MS_TRE02_WESTCUMBERLANDFOREST03";
		case -1004266677:
			return "MS_TRE02_WESTCUMBERLANDFOREST04";
		case -1290997627:
			return "MS_TRE01_DAKOTARIVERBEND01";
		case -1462313959:
			return "MS_TRE01_DAKOTARIVERBEND02";
		case -1882707460:
			return "MS_TRE01_DAKOTARIVERBEND03";
		case -2056579774:
			return "MS_TRE01_DAKOTARIVERBEND04";
		case -1442844448:
			return "MS_TRE01_DIABLORIDGE01";
		case -1684974589:
			return "MS_TRE01_DIABLORIDGE02";
		case -38135693:
			return "MS_TRE01_DIABLORIDGE03";
		case 803929300:
			return "MS_TRE01_DIABLORIDGE04";
		case -2100409704:
			return "MS_TRE01_EASTWATSONS02";
		case -604603161:
			return "MS_TRE01_EASTWATSONS03";
		case -1422877860:
			return "MS_TRE01_EASTWATSONS04";
		case 826868753:
			return "MS_TRE04_GAPTOOTHBREACH01";
		case 730069127:
			return "MS_TRE04_GAPTOOTHBREACH02";
		case -1378911044:
			return "MS_TRE04_GAPTOOTHBREACH03";
		case -1341750998:
			return "MS_TRE04_GAPTOOTHBREACH04";
		case 2068253437:
			return "MS_TRE04_HANGINGROCK01";
		case -1395855864:
			return "MS_TRE04_HANGINGROCK02";
		case -1749433374:
			return "MS_TRE04_HANGINGROCK03";
		case 1232840551:
			return "MS_TRE04_HANGINGROCK04";
		case 642824856:
			return "MS_TRE01_HAWKSEYECREEK01";
		case -207792846:
			return "MS_TRE01_HAWKSEYECREEK02";
		case 715735881:
			return "MS_TRE01_HAWKSEYECREEK03";
		case 404823609:
			return "MS_TRE01_HAWKSEYECREEK04";
		case 1126565489:
			return "MS_TRE04_HENNIGANSTEAD01";
		case -1664435783:
			return "MS_TRE04_HENNIGANSTEAD02";
		case -1369678628:
			return "MS_TRE04_HENNIGANSTEAD03";
		case 2013720626:
			return "MS_TRE04_HENNIGANSTEAD04";
		case 215903338:
			return "MS_TRE02_KAMASSARIVER01";
		case -90486812:
			return "MS_TRE02_KAMASSARIVER02";
		case -329176208:
			return "MS_TRE02_KAMASSARIVER03";
		case -574190021:
			return "MS_TRE02_KAMASSARIVER04";
		case -800891377:
			return "MS_TRE01_LAKEISABELLA01";
		case -630295963:
			return "MS_TRE01_LAKEISABELLA02";
		case 2127412005:
			return "MS_TRE01_LAKEISABELLA03";
		case 1362354162:
			return "MS_TRE01_LAKEISABELLA04";
		case 2048790450:
			return "MS_TRE01_LITTLECREEK01";
		case -101740709:
			return "MS_TRE01_LITTLECREEK02";
		case 673606600:
			return "MS_TRE01_LITTLECREEK03";
		case -895307590:
			return "MS_TRE01_LITTLECREEK04";
		case 1032791043:
			return "MS_TRE02_NORTHCLINGMAN01";
		case 804063423:
			return "MS_TRE02_NORTHCLINGMAN02";
		case -1573753524:
			return "MS_TRE02_NORTHCLINGMAN03";
		case -1842033327:
			return "MS_TRE02_NORTHCLINGMAN04";
		case -888632790:
			return "MS_TRE04_NORTHMACFARLANE01";
		case -583127403:
			return "MS_TRE04_NORTHMACFARLANE02";
		case -381925743:
			return "MS_TRE04_NORTHMACFARLANE03";
		case -75928821:
			return "MS_TRE04_NORTHMACFARLANE04";
		case 321629486:
			return "MS_TRE04_NORTHRIDGEWOOD01";
		case 896725436:
			return "MS_TRE04_NORTHRIDGEWOOD02";
		case -941648233:
			return "MS_TRE04_NORTHRIDGEWOOD03";
		case -635323621:
			return "MS_TRE04_NORTHRIDGEWOOD04";
		case 1157309080:
			return "MS_TRE04_NORTHTUMBLEWEED01";
		case -797689456:
			return "MS_TRE04_NORTHTUMBLEWEED02";
		case -500245243:
			return "MS_TRE04_NORTHTUMBLEWEED03";
		case -211583122:
			return "MS_TRE04_NORTHTUMBLEWEED04";
		case 237155783:
			return "MS_TRE01_OCREAGHSRUN01";
		case -1547280108:
			return "MS_TRE01_OCREAGHSRUN02";
		case -1719055206:
			return "MS_TRE01_OCREAGHSRUN03";
		case 1601722481:
			return "MS_TRE01_OCREAGHSRUN04";
		case -2142074819:
			return "MS_TRE04_SANLUISSHORE01";
		case -226366310:
			return "MS_TRE04_SANLUISSHORE02";
		case -1502194556:
			return "MS_TRE04_SANLUISSHORE03";
		case -1749043433:
			return "MS_TRE04_SANLUISSHORE04";
		case 1341699707:
			return "MS_TRE02_SOUTHROANOKE01";
		case 1666964801:
			return "MS_TRE02_SOUTHROANOKE02";
		case -1673998598:
			return "MS_TRE02_SOUTHROANOKE03";
		case -1445041595:
			return "MS_TRE02_SOUTHROANOKE04";
		case 148595040:
			return "MS_TRE03_WESTHILLHAVEN01";
		case -729679654:
			return "MS_TRE03_WESTHILLHAVEN02";
		case -448554447:
			return "MS_TRE03_WESTHILLHAVEN03";
		case -1339871203:
			return "MS_TRE03_WESTHILLHAVEN04";
		default:
			break;
	}
	return "";
}

int func_589(int iParam0)
{
	switch (iParam0)
	{
		case 943561238:
			return -1364906332;
		case 1279586666:
			return 1251554503;
		case -1290997627:
			return -2004293616;
		case -1882707460:
			return -872975316;
		case -1442844448:
			return -724513114;
		case -1684974589:
			return -936524034;
		case 803929300:
			return -1834690693;
		case -2100409704:
			return 516107115;
		case -604603161:
			return 722896594;
		case -207792846:
			return 848190976;
		case 715735881:
			return 352739809;
		case 673606600:
			return -1389022397;
		case -895307590:
			return -588218319;
		case -243260793:
			return 295117400;
		case -492731190:
			return 1211453192;
		case 1325325699:
			return -781631997;
		case -297483764:
			return -274311999;
		case 1517951665:
			return -507080758;
		case 982765715:
			return 1508981319;
		case 846837291:
			return -333204108;
		case 1153686207:
			return 1424952082;
		case -1842033327:
			return 953570968;
		case 1521272922:
			return 503099916;
		case -414883443:
			return -1916642580;
		case -1705799799:
			return 1596889034;
		case 826868753:
			return -2134390671;
		case -1395855864:
			return 787163418;
		case -1749433374:
			return -1604164737;
		case 1232840551:
			return -1991086481;
		case -583127403:
			return 673909600;
		case -75928821:
			return 1908207721;
		default:
			break;
	}
	return -1554566073;
}

int func_590(int iParam0)
{
	return func_769(iParam0) + 30;
}

bool func_591(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (func_362(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
		else if (func_362(iVar0) == -1)
		{
			*uParam1 = iVar0;
			return false;
		}
	else
	{
		}
		iVar0++;
	}
	*uParam1 = -1;
	return false;
}

int func_592()
{
	return &Global_1902818;
}

int func_593(int iParam0)
{
	return &(Global_39.f_129[iParam0 + 30]);
}

int func_594(int iParam0)
{
	switch (iParam0)
	{
		case 1512816328:
			return 1590446437;
		case 1207048789:
			return -1789074439;
		case -1230112817:
			return 499096137;
		case -1278074582:
			return 1466088082;
		case -1436021162:
			return -1852056457;
		case 407136781:
			return 556704039;
		case -350863510:
			return 765343099;
		case 1557082963:
			return -909306169;
		case 249726958:
			return -1758697759;
		case -1952856164:
			return 591001924;
		case 1433244935:
			return -2092712551;
		case -99303535:
			return -1307469679;
		case 1186594126:
			return -1382351182;
		case 469053995:
			return 1263244828;
		case 476714362:
			return -1773409329;
		default:
			break;
	}
	return -1554566073;
}

void func_595(int iParam0, int iParam1)
{
	Global_39.f_129[iParam0] = iParam1;
}

void func_596(int iParam0, int iParam1)
{
	Global_39.f_129[iParam0 + 30] = iParam1;
}

bool func_597()
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

void func_598()
{
	if (!func_601(1))
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
	func_771(func_770(), func_603());
}

void func_599(bool bParam0)
{
	if (!func_597())
	{
		return;
	}
	if (func_772() || func_773())
	{
		if (!func_601(1) || bParam0)
		{
			iVar0 = 603685163;
			if (func_772())
			{
				iVar0 = -273223690;
			}
			func_771(iVar0, func_603());
			set_ambient_zone_list_state("AZL_RDRO_X18", true, true);
			_0xec116edb683ad479(1);
			set_timecycle_modifier("MP_reduceGlobalTemperature");
			func_602(1);
		}
		if (func_603() || bParam0)
		{
			if (func_772())
			{
				if (!func_601(4))
				{
					_set_snow_coverage_type(3);
					func_602(4);
					func_600(2);
				}
			}
			else if (!func_601(2))
			{
				_set_snow_coverage_type(2);
				func_602(2);
				func_600(4);
			}
		}
	}
	if (func_774())
	{
		if (((!func_601(8) && !_0xcf45df50c7775f2a()) && !func_552(-1562607865)) || bParam0)
		{
			func_321(-1562607865);
			func_602(8);
		}
	}
}

void func_600(int iParam0)
{
	Global_1939655->f_84 = (Global_1939655->f_84 - (Global_1939655->f_84 && iParam0));
}

bool func_601(int iParam0)
{
	return (Global_1939655->f_84 && iParam0) != 0;
}

void func_602(int iParam0)
{
	Global_1939655->f_84 = (Global_1939655->f_84 || iParam0);
}

bool func_603()
{
	return (_is_loading_screen_active() || is_screen_faded_out());
}

void func_604(bool bParam0)
{
	if (func_601(1) || bParam0)
	{
		clear_weather_type_persist();
		clear_ambient_zone_list_state("AZL_RDRO_X18", true);
		_0xec116edb683ad479(0);
		clear_timecycle_modifier();
		func_600(1);
	}
	if ((func_601(6) && func_603()) || bParam0)
	{
		_set_snow_coverage_type(0);
		func_600(2);
		func_600(4);
	}
	if (((func_601(8) && !_0xcf45df50c7775f2a()) && !func_552(-1562607865)) || bParam0)
	{
		func_332(-1562607865);
		func_600(8);
	}
}

float func_605(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

bool func_606(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 11)
	{
		return false;
	}
	return true;
}

Vector3 func_607(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2109.1f, -604f, 41.6f;
		case 5:
			return 2636.5f, -1284.3f, 52.3f;
		case 26:
			return -1801.4f, -410.9f, 152.8f;
		case 40:
			return -837.69f, -1334.25f, -146f;
		case 74:
			return 1429.2f, 332.8f, 88.5f;
		case 81:
			return -288.7f, 730.9f, 117f;
		case 83:
			return 2928.1f, 1331.7f, 44f;
		case 98:
			return 2959.2f, 525.8f, 44.6f;
		case 111:
			return 1365f, -1264.6f, 78.3f;
		case 121:
			return -5513.1f, -2936.4f, -2.1f;
		case 127:
			return -3680.5f, -2607.9f, -14f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

char* func_608(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "BLIP_TOWN_LAGRAS";
		case 5:
			return "BLIP_TOWN_SAINT_DENIS";
		case 26:
			return "BLIP_TOWN_STRAWBERRY";
		case 40:
			return "BLIP_TOWN_BLACKWATER";
		case 74:
			return "BLIP_TOWN_EMERALDRANCH";
		case 81:
			return "BLIP_TOWN_VALENTINE";
		case 83:
			return "BLIP_TOWN_ANNESBURG";
		case 98:
			return "BLIP_TOWN_VANHORNPOST";
		case 111:
			return "BLIP_TOWN_RHODES";
		case 121:
			return "BLIP_TOWN_TUMBLEWEED";
		case 127:
			return "BLIP_TOWN_ARMADILLO";
		default:
			break;
	}
	return "BLIP_TOWN";
}

void func_609(int iParam0, char* sParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_17081)
	{
		if (does_blip_exist(&(Global_17081[iParam0])))
		{
			set_blip_name_from_text_file(&(Global_17081[iParam0]), sParam1);
		}
	}
}

int func_610(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1341870286;
		case 5:
			return -1706412559;
		case 26:
			return 279909480;
		case 40:
			return -412614304;
		case 74:
			return -653335484;
		case 81:
			return 1777802794;
		case 83:
			return 1088576970;
		case 98:
			return 412321676;
		case 111:
			return 1787788681;
		case 121:
			return 1635466279;
		case 127:
			return -410502938;
		case 4:
		case 9:
		case 22:
		case 39:
		case 45:
		case 63:
		case 76:
		case 84:
		case 104:
			return 7148155;
		default:
			break;
	}
	return 0;
}

int func_611(int iParam0, char* sParam1, var uParam2, char* sParam3, var uParam4, char* sParam5, var uParam6)
{
	Var0 = func_775();
	Var0.f_2 = -738708473;
	Var0.f_3 = func_776(iParam0);
	if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return 0;
	}
	Var0.f_2 = -1407851228;
	Var0.f_3 = get_hash_key(sParam1);
	_datafile_get_hash(uParam2, &Var0);
	Var0.f_2 = 1059891245;
	Var0.f_3 = get_hash_key(sParam3);
	_datafile_get_float(uParam4, &Var0);
	Var0.f_2 = -99852754;
	Var0.f_3 = get_hash_key(sParam5);
	_datafile_get_vector(uParam6, &Var0);
	return 1;
}

bool func_612(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

int func_613(int iParam0)
{
	switch (iParam0)
	{
		case 1243830185:
			return 3;
		case 595820042:
			return 1;
		case -1179229323:
			return 7;
		case -1650465405:
			return 2;
		case -1575595762:
			return 67;
		case 1974815632:
			return 4;
		case 1078668923:
			return 5;
		case -1581061148:
			return 8;
		case -48718882:
			return 9;
		case -379108622:
			return 10;
		case 1015604260:
			return 11;
		case 126262516:
			return 12;
		case -997121570:
			return 14;
		case 423351566:
			return 13;
		case -1636832113:
			return 16;
		case 1012165077:
			return 17;
		case -250506368:
			return 18;
		case 2033397166:
			return 19;
		case 249721687:
			return 22;
		case 1475879922:
			return 20;
		case 531267562:
			return 21;
		case -145868367:
			return 23;
		case -1989306548:
			return 24;
		case -1739686743:
			return 25;
		case 1195729388:
			return 26;
		case -758970771:
			return 28;
		case 1542275196:
			return 29;
		case 1861010125:
			return 33;
		case 1475382911:
			return 34;
		case 103490298:
			return 30;
		case -2090472724:
			return 31;
		case -1665418949:
			return 32;
		case -852241114:
			return 35;
		case -1406874050:
			return 36;
		case -1017650267:
			return 51;
		case 1938782895:
			return 37;
		case -1456209806:
			return 38;
		case 469827317:
			return 39;
		case 1779658797:
			return 45;
		case 1496995379:
			return 52;
		case -1546805641:
			return 48;
		case 1961764827:
			return 49;
		case -2029148647:
			return 99;
		case 553094466:
			return 50;
		case 1364029453:
			return 41;
		case -211556852:
			return 40;
		case 1879260108:
			return 27;
		case -73168905:
			return 53;
		case 1586273744:
			return 54;
		case -1498696713:
			return 55;
		case 503049244:
			return 57;
		case 305594522:
			return 58;
		case -417940443:
			return 59;
		case -1606321000:
			return 60;
		case 1904459580:
			return 61;
		case -1989725258:
			return 62;
		case -487631996:
			return 63;
		case -1944395098:
			return 64;
		case -428972082:
			return 65;
		case -1258576797:
			return 70;
		default:
			break;
	}
	return 0;
}

int func_614(int iParam0)
{
	if (_0x603ac35fd4602c76(Global_1139381->f_7) && !func_777(12, func_776(iParam0), &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_615(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 0;
		case 5:
			return 1;
		case 26:
			return 2;
		case 40:
			return 3;
		case 74:
			return 4;
		case 81:
			return 5;
		case 83:
			return 6;
		case 98:
			return 7;
		case 111:
			return 8;
		case 121:
			return 9;
		case 127:
			return 10;
		default:
			break;
	}
	return -1;
}

int func_616(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return -160705043;
		case 5:
			return -726606177;
		case 26:
			return -49572609;
		case 40:
			return 417546980;
		case 74:
			return -117334654;
		case 81:
			return -357010019;
		case 83:
			return 719613628;
		case 98:
			return 1459616333;
		case 111:
			return 1607757565;
		case 121:
			return -161326102;
		case 127:
			return -1909997854;
		case 4:
		case 9:
		case 22:
		case 39:
		case 45:
		case 63:
		case 76:
		case 84:
		case 104:
			return -1025871137;
		default:
			break;
	}
	return 0;
}

bool func_617(int iParam0, int iParam1)
{
	if (!func_536(iParam0))
	{
		return false;
	}
	return (Global_1915715->f_17884[iParam0] && iParam1) != 0;
}

bool func_618(int iParam0, int iParam1)
{
	if (!func_536(iParam0))
	{
		return false;
	}
	return (Global_5860.f_2074[iParam0] && iParam1) != 0;
}

bool func_619(int iParam0)
{
	return func_284((*Global_1134390)[network_player_id_to_int()]->f_73, iParam0);
}

bool func_620()
{
	if (func_778(255) <= 2)
	{
		return false;
	}
	if (Global_265377->f_124517.f_71.f_21.f_2 != -504335712)
	{
		return false;
	}
	if (!func_779(Global_265377->f_124517.f_71.f_21.f_3))
	{
		return false;
	}
	return true;
}

bool func_621(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = func_780(iParam0);
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return func_781(iVar0);
}

int func_622(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = (iParam1 / iParam2);
	iVar1 = (iParam1 % iParam2);
	iVar2 = (shift_left(1, iParam3) - 1);
	iVar3 = 0;
	iVar4 = (iParam3 * iVar1);
	iVar3 = (uParam0[iVar0] && shift_left(iVar2, iVar4));
	iVar3 = shift_right(iVar3, iVar4);
	return iVar3;
}

int func_623(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 2;
		case 5:
			return 0;
		case 6:
			return 1;
		case 8:
			return 0;
		case 0:
			return 0;
		case 4:
			return 0;
		case 7:
			return 0;
		default:
			break;
	}
	return -1;
}

bool func_624(int iParam0)
{
	return func_782(iParam0, 1024);
}

int func_625(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5;
		case 2:
			return 5;
		case 3:
			return 111;
		case 5:
			return 81;
		case 6:
			return 81;
		case 8:
			return 98;
		case 0:
			return 40;
		case 4:
			return 121;
		case 7:
			return 127;
		default:
			break;
	}
	return -1;
}

bool func_626(int iParam0)
{
	if (!func_612(iParam0))
	{
		return false;
	}
	return func_783(iParam0, 8388608);
}

bool func_627(int iParam0)
{
	return iParam0 != 0;
}

bool func_628()
{
	if (!func_261() && func_96(1))
	{
		return true;
	}
	return false;
}

int func_629(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_784(iParam2, -372840566);
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
	func_785(uParam1, iParam0, Var3);
	return 1;
}

struct<4> func_630(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_411(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_631(1328661203, func_786(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_631(1328661203, func_786(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_631(1328661203, func_786(), -1591664384, bParam0);
}

struct<4> func_631(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_511(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_411(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_632(var uParam0, bool bParam1)
{
	return _0xe843d21a8e2498aa(func_411(bParam1), uParam0);
}

bool func_633(int iParam0)
{
	return func_284(Global_1051439->f_3734, iParam0);
}

void func_634(int iParam0)
{
	if (!func_284(Global_1051439->f_3734, iParam0))
	{
		func_658(&(Global_1051439->f_3734), iParam0);
	}
}

struct<14> func_635(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

int func_636(var uParam0, bool bParam1)
{
	if (!func_787(uParam0, &iVar1, &iVar0, bParam1))
	{
		iVar0 = -1;
	}
	else
	{
		func_737(iVar1);
	}
	return iVar0;
}

int func_637(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	Var18 = { func_635(0, iParam0, -1591664384, -1591664384, 0, 0, 0) };
	if (iParam0 != 1045621973)
	{
		func_788(&Var18, func_631(-1268909760, func_630(1), 359221401, 1));
	}
	if (func_787(&Var18, &iVar0, &iVar1, 1))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_736(&Var3, iVar2, iVar0, iVar1))
			{
				if (!func_647(Var3.f_4, 0))
				{
					iVar17 = 1;
					if (func_299(Var3.f_4, 1816585950))
					{
						*bParam1 = 1;
					}
					else
					{
						iVar2++;
					}
					func_737(iVar0);
					return iVar17;
				}
			}
		}
	}
}

void func_638(int iParam0)
{
	if (func_284(Global_1051439->f_3734, iParam0))
	{
		func_657(&(Global_1051439->f_3734), iParam0);
	}
}

Vector3 func_639(int iParam0)
{
	if (iParam0 == 255)
	{
		return (*Global_1134390)[func_711()]->f_38;
	}
	return (*Global_1134390)[iParam0]->f_38;
}

void func_640(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (Global_1915715->f_18260[iParam0]->f_6 == iParam1 && !Global_1915715->f_18260[iParam0]->f_8)
	{
		if (iParam3 >= 0)
		{
			Global_1915715->f_18260[iParam0]->f_7 = (get_game_timer() + iParam3);
		}
		else
		{
			Global_1915715->f_18260[iParam0]->f_7 = iParam3;
		}
		return;
	}
	if (bParam4)
	{
		iVar0 = 0;
		while (iVar0 < 180)
		{
			if (iVar0 != iParam0 && Global_1915715->f_18260[iVar0]->f_6 == iParam1)
			{
				bParam4 = false;
			}
			else
			{
				iVar0++;
			}
		}
	}
	Global_1915715->f_18260[iParam0]->f_6 = iParam1;
	Global_1915715->f_18260[iParam0]->f_7 = iParam3;
	Global_1915715->f_18260[iParam0]->f_8 = 1;
	Global_1915715->f_18260[iParam0]->f_9 = iParam2;
	Global_1915715->f_18260[iParam0]->f_10 = bParam4;
}

void func_641(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_789(iParam0, 8);
	}
	else
	{
		func_790(iParam0, 8);
	}
	func_791(iParam0);
}

void func_642(int iParam0)
{
	Global_1915715->f_18260[iParam0]->f_6 = -1;
	Global_1915715->f_18260[iParam0]->f_8 = 0;
}

bool func_643(int iParam0, int iParam1)
{
	if (!func_536(iParam0))
	{
		return false;
	}
	return (Global_1051439->f_3073[iParam0] && iParam1) != 0;
}

int func_644()
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
	iVar5 = func_792(iVar0);
	if (iVar5 < 0 || iVar5 >= 12)
	{
		return -1;
	}
	return (135 + iVar5);
}

void func_645()
{
	Var1 = func_775();
	Var1.f_2 = -738708473;
	Var1.f_3 = func_776(Global_17411.f_3078.f_1);
	if (!_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Global_17411.f_3078.f_1 = -1;
		return;
	}
	Var1.f_2 = -99852754;
	Var1.f_3 = get_hash_key("vPos");
	_datafile_get_vector(&(Global_1051439->f_4661), &Var1);
	Var1.f_2 = -99852754;
	Var1.f_3 = get_hash_key("vPropPos");
	_datafile_get_vector(&(Global_1051439->f_4661.f_3), &Var1);
	Var1.f_2 = 1059891245;
	Var1.f_3 = get_hash_key("fPropHead");
	_datafile_get_float(&(Global_1051439->f_4661.f_6), &Var1);
	Var1.f_2 = -1407851228;
	Var1.f_3 = get_hash_key("sHash");
	_datafile_get_hash(&uVar0, &Var1);
}

bool func_646(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_54() == -1)
	{
		if (func_793(iParam0))
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

bool func_647(int iParam0, bool bParam1)
{
	Var0 = { func_794(iParam0, 0, 1) };
	return func_795(iParam0, &Var0, 1, bParam1, 0, -1, 0);
}

void func_648(bool bParam0)
{
	if (Global_17411.f_3078.f_1 == -1)
	{
		return;
	}
	if (Global_17411.f_3078 == bParam0)
	{
		return;
	}
	Global_17411.f_3078 = bParam0;
	if (bParam0)
	{
		func_791(Global_17411.f_3078.f_1);
		Global_1051439->f_4661.f_7 = 1;
		func_450(1, 1017438712);
	}
}

Vector3 func_649()
{
	vVar0 = { Global_35 };
	if (func_796(255))
	{
		iVar3 = func_797();
		iVar4 = get_player_ped(iVar3);
		vVar0 = { get_entity_coords(iVar4, true, false) };
	}
	return vVar0;
}

void func_650(int iParam0)
{
	Var0.f_1 = 255;
	Var0.f_2 = -1;
	Var0.f_2.f_1 = -1;
	Var0.f_5 = -1;
	*Global_1108365->f_34.f_353[iParam0] = { Var0 };
	(*Global_1288736)[network_player_id_to_int()]->f_66 = 0;
}

void func_651(int iParam0)
{
	if (Global_1071686->f_21689[iParam0]->f_5 != 0)
	{
		if (does_blip_exist(&(Global_1071686->f_21689[iParam0])))
		{
			_set_blip_flash_style(&(Global_1071686->f_21689[iParam0]), Global_1071686->f_21689[iParam0]->f_5);
		}
		Global_1071686->f_21689[iParam0]->f_5 = 0;
		func_798(iParam0);
	}
}

bool func_652()
{
	return (Global_1572887->f_106.f_75 >= 14 && Global_1572887->f_106.f_75 < 21);
}

void func_653(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	Global_1108365->f_34[iVar0]->f_10 = 0;
}

void func_654(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		_0xd426e2e3288469d6(&(Global_1071686->f_28346), iParam0);
		if (func_799(iParam0))
		{
			func_759(iParam0);
		}
	}
}

void func_655(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1071686->f_28350), iParam0);
}

void func_656(var uParam0, var uParam1)
{
	*uParam0 = 28;
	uParam0->f_1 = player_id();
	trigger_script_event(1, uParam0, 9, 10, uParam1);
}

void func_657(var uParam0, int iParam1)
{
	func_800(uParam0, iParam1);
}

void func_658(var uParam0, int iParam1)
{
	func_801(uParam0, iParam1);
}

void func_659(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	Global_1108365->f_34[iVar0]->f_10 = _0xfe53b1f8d43f19bf(player_id(), iParam0) == 2;
}

void func_660(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1071686->f_28345), iParam0);
	_0x31010318ba9897ac(&(Global_1071686->f_28346), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28347), iParam0);
	if (!func_799(iParam0))
	{
		func_802(iParam0);
	}
}

void func_661(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1071686->f_28349), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28348), iParam0);
	_0x31010318ba9897ac(&(Global_1071686->f_28350), iParam0);
}

struct<7> func_662(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

void func_663(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		clear_bit(&(Global_1108365->f_34[iParam0]->f_5), iVar0);
		iVar0++;
	}
}

bool func_664(int iParam0)
{
	return func_284(Global_1903071->f_1, iParam0);
}

void func_665(int iParam0)
{
	if (!func_664(iParam0))
	{
		func_658(&(Global_1903071->f_1), iParam0);
	}
}

bool func_666()
{
	if (is_thread_active(&Global_1903071, false))
	{
		return true;
	}
	if (_get_number_of_references_of_script_with_name_hash(-506425016) > 0)
	{
		return true;
	}
	if (func_54() == 0 && _0x1b89bc43b6e69107(-506425016, -1, 1, 0))
	{
		return true;
	}
	return false;
}

bool func_667()
{
	if (is_ped_in_any_vehicle(Global_34, true))
	{
		return true;
	}
	if (!is_ped_ragdoll(Global_34) && is_ped_on_vehicle(Global_34, false))
	{
		return true;
	}
	return false;
}

bool func_668(var uParam0)
{
	return func_803(*uParam0, 1);
}

bool func_669(var uParam0)
{
	return func_803(*uParam0, 2);
}

float func_670()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_671(int iParam0)
{
	if (!is_entity_dead(iParam0) && get_animal_tuning_bool_param(iParam0, 64))
	{
		return true;
	}
	return false;
}

bool func_672(var uParam0, vector3 vParam1)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_203(uParam0->f_13[iVar0]->f_1) && func_415(vParam1, uParam0->f_13[iVar0]->f_1) < uParam0->f_4)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_673(var uParam0)
{
	func_804(uParam0, 0f);
}

bool func_674(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

bool func_675(int iParam0)
{
	return (Global_17411.f_55.f_644.f_1734 && iParam0) != 0;
}

void func_676(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_677(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 9:
		case 10:
		case 11:
		case 12:
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
		default:
			break;
	}
	return false;
	StringCopy(sParam1, "image", 64);
	return true;
}

bool func_678(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 9:
		default:
			return false;
			StringCopy(sParam1, "map_card_story_clay2_rhodes", 64);
		case 11:
			StringCopy(sParam1, "map_card_story_clay2_blackwater", 64);
			break;
		case 12:
			StringCopy(sParam1, "map_card_story_clay2_tumbleweed", 64);
			break;
		case 10:
			StringCopy(sParam1, "map_card_story_clay2_valentine", 64);
			break;
		case 13:
			StringCopy(sParam1, "map_card_story_gunvout_1", 64);
			break;
		case 14:
			StringCopy(sParam1, "map_card_story_gunvout_2", 64);
			break;
		case 15:
			StringCopy(sParam1, "map_card_story_gunvout_3", 64);
			break;
		case 16:
			StringCopy(sParam1, "map_card_story_outlaw_1", 64);
			break;
		case 17:
			StringCopy(sParam1, "map_card_story_outlaw_2", 64);
			break;
		case 18:
			StringCopy(sParam1, "map_card_story_gunslinger_1", 64);
			break;
		case 19:
			StringCopy(sParam1, "map_card_story_gunslinger_2", 64);
			break;
		case 20:
			StringCopy(sParam1, "map_card_story_revenge_1", 64);
			break;
		case 21:
			StringCopy(sParam1, "map_card_story_outlaw_3", 64);
			break;
		case 22:
			StringCopy(sParam1, "map_card_story_outlaw_4", 64);
			break;
		case 23:
			StringCopy(sParam1, "map_card_story_gunslinger_3", 64);
			break;
		case 24:
			StringCopy(sParam1, "map_card_story_gunslinger_4", 64);
			break;
		case 25:
			StringCopy(sParam1, "map_card_story_revenge_2", 64);
			break;
	}
	return true;
}

bool func_679(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 9:
		case 10:
		case 11:
		case 12:
		default:
			return false;
			StringCopy(sParam1, "BLIP_MP_MISSION_CLAY", 64);
		case 13:
		case 14:
		case 15:
			StringCopy(sParam1, "BLIP_DECISION", 64);
			break;
		case 16:
		case 17:
		case 21:
		case 22:
			StringCopy(sParam1, "BLIP_MP_MISSION_SAMSON_FINCH", 64);
			break;
		case 18:
		case 19:
		case 23:
		case 24:
			StringCopy(sParam1, "BLIP_MP_MISSION_MARSHALL_TOM_DAVIES", 64);
			break;
		case 20:
		case 25:
			StringCopy(sParam1, "BLIP_MP_MISSION_HORLEY", 64);
			break;
	}
	return true;
}

bool func_680(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 9:
		case 10:
		case 11:
		case 12:
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
		default:
			break;
	}
	return false;
	StringCopy(sParam1, "toast_log_blips_mp", 64);
	return true;
}

void func_681(int iParam0)
{
	Global_265377->f_124386 = iParam0;
}

int func_682(int iParam0)
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

int func_683(int iParam0, int iParam1)
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

int func_684(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_805(iParam0))
	{
		return 0;
	}
	iVar0 = func_683(iParam0, 5);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (_0xfbe782b3165ac8ec(iVar0))
	{
		return 5;
	}
	iVar0 = func_683(iParam0, 4);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (_0xfbe782b3165ac8ec(iVar0))
	{
		return 4;
	}
	iVar0 = func_683(iParam0, 3);
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

int func_685(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (Global_1293346->f_458.f_1546 >= 40)
	{
		func_806();
		return -1;
	}
	Var0 = -1;
	Var0.f_5.f_1 = 11;
	Var0.f_18.f_1 = 10;
	Var0.f_4 = iParam0;
	Var0 = func_807();
	Var0.f_3 = iParam1;
	func_808(Var0, 0);
	return Var0;
}

bool func_686(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_687(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_190(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_688(int iParam0)
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

void func_689(struct<2> Param0, var uParam2)
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
	switch (func_182(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_809(func_58(Param0));
			iVar5 = func_810(iVar4);
			if (!func_811(iVar5, 0))
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

int func_690(struct<2> Param0)
{
	iVar0 = func_185(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_812(iVar0);
}

int func_691(struct<2> Param0, int iParam2)
{
	if (Global_1071686->f_19550 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_190(Param0, &vVar0))
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
		func_190(*Global_1071686->f_19550.f_1[iVar9], &vVar3);
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
			func_813(iVar9);
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

void func_692()
{
	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (func_190(*Global_1071686->f_19550.f_1[iVar0], &vVar1))
		{
		}
		iVar0++;
	}
}

void func_693(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_694(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_695(int iParam0, int iParam1)
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

void func_696(char[12] cParam0)
{
	Global_1939161->f_75.f_67 = { cParam0 };
}

void func_697()
{
	StringCopy(&(Global_1939161->f_75.f_67), "", 24);
}

int func_698(struct<2> Param0)
{
	if (!func_55(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_453(*Global_1900736->f_1[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_699(int iParam0)
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
		func_189(Global_1900736->f_1[0]);
		return 1;
	}
	func_189(Global_1900736->f_1[iParam0]);
	Global_1900736->f_66 = (Global_1900736->f_66 - 1);
	func_814(iParam0, Global_1900736->f_66);
	return 1;
}

void func_700(int iParam0)
{
	Global_1139381->f_4912[iParam0] = _unlock_is_new((*Global_1835011)[iParam0]->f_3);
	Global_1139381->f_4912[iParam0]->f_2 = _unlock_is_visible((*Global_1835011)[iParam0]->f_3);
	Global_1139381->f_4912[iParam0]->f_1 = _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3);
}

struct<2> func_701(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

bool func_702(int iParam0, int iParam1)
{
	if (!func_815(iParam0))
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam1) || !network_is_player_connected(iParam1))
	{
		return false;
	}
	return _0x8f4f050054005c27(&((*Global_1056141)[iParam1]->f_15.f_20), iParam0);
}

int func_703(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	iVar0 = func_816(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (_0xd6f6acf4392187fb(Global_1296859->f_15))
	{
		iVar1 = _0x4be6c13a45cca8ec(Global_1296859->f_15);
	}
	else
	{
		iVar1 = &Global_1296859->f_154[&Global_1296859];
	}
	if (_network_is_player_index_valid(iVar1))
	{
		iVar3 = iVar1;
		iVar2 = func_817(iVar3);
	}
	else
	{
		return -1;
	}
	return func_818(iVar0, iVar2);
}

bool func_704(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

void func_705(bool bParam0)
{
	if (!bParam0)
	{
		func_497(14);
	}
	else
	{
		func_500(14);
	}
}

void func_706(int iParam0, bool bParam1)
{
	iVar0 = func_188((*Global_1835011)[iParam0]->f_1);
	if (!func_467(iVar0))
	{
		return;
	}
	if (does_blip_exist(Global_1900838[iVar0]))
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		remove_blip((*Global_1900838)[iVar0]);
	}
	if (func_468(iVar0, 48))
	{
		set_script_as_no_longer_needed(&((*Global_1835011)[iParam0]->f_13));
	}
	if (bParam1)
	{
		func_685(func_819(4, iParam0), 0);
		func_187((*Global_1835011)[iParam0]->f_1, 0, 2, 0, 0);
	}
	if ((*Global_1835011)[iParam0]->f_32 != -1)
	{
		(*Global_1835011)[iParam0]->f_32 = -1;
	}
	func_700(iParam0);
}

void func_707(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_55(Param0))
	{
		return;
	}
	if (!func_186(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_820(Param0);
	}
	if (!func_55(func_181(0)))
	{
		func_452(Param0, 3);
		func_454(bParam3);
		func_455(!bParam4);
		func_821(Param0, -1);
		if (bParam2 && !func_95(2))
		{
			func_676(&Global_0, 1024);
		}
		func_457(1);
	}
	else
	{
		func_821(Param0, -1);
		func_452(Param0, 4);
		func_822(Param0, 0);
	}
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_182(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_823(Param0, &Var1))
		{
			_0x1096603b519c905f(&(Var1.f_17));
		}
	}
}

bool func_708(int iParam0, var uParam1)
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

struct<2> func_709(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	return Var0;
}

void func_710(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_711()
{
	return Global_1102219->f_3672;
}

int func_712(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 > iParam2)
	{
		return -1;
	}
	iVar0 = ((iParam1 + iParam2) / 2);
	if (iParam3 < Global_1301323->f_84[iParam0][iVar0])
	{
		return func_712(iParam0, iParam1, (iVar0 - 1), iParam3);
	}
	if (iParam3 > Global_1301323->f_84[iParam0][iVar0])
	{
		return func_712(iParam0, iVar0 + 1, iParam2, iParam3);
	}
	return iVar0;
}

var func_713(int iParam0, int iParam1)
{
	return (*Global_1301323->f_84[iParam0])[iParam1]->f_1;
}

bool func_714(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_715(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

void func_716(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

bool func_717(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_718(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_719(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

void func_720(int iParam0)
{
	if (func_824(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

int func_721(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_722(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_723(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

var func_724(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_825(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_725(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_726(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_727(int iParam0, int iParam1)
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

bool func_728(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_504(iParam1) || !func_504(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_729(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_730(int iParam0)
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

int func_731(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1317351007;
		case 1:
			return -500478573;
		case 2:
			return -806573802;
		case 3:
			return -1109949204;
		default:
			break;
	}
	return -1060513333;
}

var func_732(var uParam0, int iParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_411(bParam2), uParam0, iParam1);
}

struct<4> func_733(bool bParam0)
{
	iVar0 = func_411(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_631(923904168, func_630(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_631(923904168, func_630(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_631(923904168, func_630(bParam0), -740156546, 0);
}

int func_734(int iParam0, int iParam1)
{
	if (!func_511(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_514(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_299(iParam0, 1399091007))
	{
		func_826(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_735(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_411(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_736(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_737(int iParam0)
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

int func_738(int iParam0)
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

int func_739(var uParam0, int iParam1)
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

int func_740(int iParam0)
{
	iVar0 = func_297(iParam0);
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

int func_741(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_635(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_788(&Var0, func_733(0));
	}
	if (!func_787(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_737(iVar14);
	return uVar15;
}

int func_742(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

struct<4> func_743(int iParam0, bool bParam1)
{
	Var0 = { func_794(iParam0, bParam1, 0) };
	return func_631(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_744(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

int func_745(int iParam0)
{
	if (!func_744(iParam0))
	{
		return 0;
	}
	return &(Global_1293346->f_3009[iParam0]);
}

int func_746(int iParam0, bool bParam1)
{
	if (!func_744(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		iVar0 = func_827(iParam0);
		if (func_511(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_828(255);
			}
			else
			{
				iVar1 = func_829(iVar0, func_630(1), -1990194462, 1, 0, 0);
			}
			Global_1293346->f_3009[iParam0] = iVar1;
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar0 = func_830(iParam0);
		if (func_511(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = _0xdb438cc9bc6f4022();
			}
			else
			{
				iVar1 = func_829(iVar0, func_630(1), -1990194462, 1, 0, 0);
			}
			Global_1293346->f_2985[iParam0] = iVar1;
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_747()
{
	switch (Global_1940258->f_38)
	{
		case -164645981:
		case -160924582:
		case 827679807:
		case 1247405313:
		case 1652431022:
			return true;
		default:
			break;
	}
	return false;
}

void func_748(bool bParam0)
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (bParam0)
	{
		_0xa0c683284df027c7(player_id(), 15, 1);
	}
	else
	{
		_0xa0c683284df027c7(player_id(), 15, 0);
		_0xa0c683284df027c7(player_id(), 1, 1);
	}
}

void func_749(int iParam0)
{
	if (!_databinding_is_data_id_valid(Global_1956200->f_5.f_7))
	{
		return;
	}
	if (_databinding_get_array_count(Global_1956200->f_5.f_7) > iParam0)
	{
		iVar0 = _databinding_get_item_context_by_index(Global_1956200->f_5.f_7, iParam0);
		if (iVar0 == &Global_1956200->f_5.f_14[iParam0])
		{
			return;
		}
	}
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1956200->f_5.f_7, iParam0, "pause_info_panel_list", &(Global_1956200->f_5.f_14[iParam0]));
}

void func_750(bool bParam0)
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
	}
	set_ped_config_flag(Global_34, 440, !bParam0);
}

void func_751(bool bParam0)
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
	}
	set_ped_config_flag(Global_34, 439, !bParam0);
}

void func_752(bool bParam0)
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
	}
	set_ped_config_flag(Global_34, 438, !bParam0);
}

void func_753(bool bParam0)
{
	iVar0 = 398076311;
	if (bParam0)
	{
		_hide_hud_component(iVar0);
	}
	else
	{
		_display_hud_component(iVar0);
	}
}

void func_754(bool bParam0)
{
	iVar0 = 50;
	iVar1 = player_id();
	if (bParam0)
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 1);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 1);
	}
	else
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 0);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 0);
	}
}

void func_755(bool bParam0)
{
	iVar0 = 49;
	iVar1 = player_id();
	if (bParam0)
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 1);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 1);
	}
	else
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 0);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 0);
	}
}

var func_756(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	Var13.f_7 = 1;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_757(int iParam0, int iParam1, int iParam2)
{
	if (!func_511(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_742(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_831(iParam0, iParam1, iParam2);
	}
	Var1 = { func_794(iParam0, 0, 1) };
	Var6 = { func_631(iParam0, Var1, Var1.f_4, 0) };
	return func_832(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

int func_758(int iParam0)
{
	return func_834(func_833(iParam0));
}

void func_759(int iParam0)
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
	func_835(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_760(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
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
	if (func_836(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] != 2)
	{
		if (!&Global_1296859->f_22[iVar0])
		{
			func_759(iParam0);
			return;
		}
		_0x51951de06c0d1c40(iParam0, 2);
		Global_1071686->f_21416.f_1[iVar0] = 2;
		iVar1 = 1;
	}
	if (iParam2 && iVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar3 = int_to_playerindex(iVar2);
			if (iVar2 != &Global_1296859 && network_is_player_active(iVar3))
			{
				if (_0x81fb74c83c2ed69f(iVar3))
				{
					if (bParam3)
					{
						_0x31010318ba9897ac(&uVar4, iVar2);
						bVar5 = true;
					}
				}
				else if (_0x3f59fe6f37869576(iVar3, iParam0))
				{
					if (bParam4)
					{
						_0x31010318ba9897ac(&uVar4, iVar2);
						bVar5 = true;
					}
					if (iVar2 != iVar0)
					{
						func_760(iVar3, iParam1, 0, 1, 0, 0);
					}
				}
			}
			iVar2++;
		}
		if (bVar5)
		{
			Var6.f_6 = 255;
			Var6.f_4 = 1;
			Var6.f_6 = iParam0;
			Var6.f_7 = iParam1;
			func_837(&Var6, uVar4);
		}
	}
}

bool func_761(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

bool func_762(struct<2> Param0, int iParam2, int iParam3)
{
	if (!func_55(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_838(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_763(var uParam0, var uParam1)
{
	func_839(uParam1);
	uParam1->f_30 = { *uParam0 };
	uParam1->f_62 = uParam0->f_5;
	bVar0 = true;
	func_840(uParam1);
	if (!func_841(*uParam0, &(uParam1->f_18)))
	{
		bVar0 = false;
	}
	else if (!func_842(&(uParam1->f_18), &(uParam1->f_24)))
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
	if (!func_841(uParam0->f_1, &(uParam1->f_6)))
	{
		bVar0 = false;
	}
	else if (!func_842(&(uParam1->f_6), &(uParam1->f_12)))
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

int func_764(var uParam0)
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
	iVar0 = func_843(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_844(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_845(uParam0);
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

int func_765(int iParam0)
{
	iVar0 = func_571(iParam0);
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

bool func_766(int iParam0)
{
	return iParam0 != 0;
}

bool func_767(int iParam0)
{
	return iParam0 != 0;
}

bool func_768()
{
	return true;
}

int func_769(int iParam0)
{
	return iParam0 * 31;
}

int func_770()
{
	if (Global_1296859->f_21 < 79)
	{
		return 603685163;
	}
	iVar0 = ((Global_1296859->f_21 % 79) * 100 / 79);
	if (func_772())
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

void func_771(int iParam0, bool bParam1)
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

bool func_772()
{
	if (!func_597())
	{
		return false;
	}
	return func_284(Global_1901947->f_44.f_5, 32);
}

bool func_773()
{
	if (!func_597())
	{
		return false;
	}
	return func_284(Global_1901947->f_44.f_5, 2);
}

bool func_774()
{
	if (!func_597())
	{
		return false;
	}
	return func_284(Global_1901947->f_44.f_5, 64);
}

var func_775()
{
	return Global_1071686->f_28448[48]->f_3;
}

int func_776(int iParam0)
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

bool func_777(int iParam0, int iParam1, var uParam2)
{
	if (func_846(iParam0, iParam1, &uVar0))
	{
		func_847(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_778(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1296859->f_10;
	}
	return Global_263042[iParam0];
}

bool func_779(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

var func_780(int iParam0)
{
	return Global_1128574[iParam0];
}

bool func_781(int iParam0)
{
	return func_848(iParam0, 1);
}

bool func_782(int iParam0, int iParam1)
{
	return func_329(Global_1940018->f_5[iParam0]->f_7, iParam1);
}

bool func_783(int iParam0, int iParam1)
{
	if (!func_612(iParam0))
	{
		return false;
	}
	if (func_54() == -1)
	{
		return (Global_1915715->f_3[iParam0]->f_6 && iParam1) != 0;
	}
	else
	{
		return (Global_1051439->f_72[iParam0]->f_1 && iParam1) != 0;
	}
	return false;
}

void func_784(int iParam0, int iParam1)
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

void func_785(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_849(uParam0))
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

struct<4> func_786()
{
	return Var0;
}

bool func_787(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_411(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

void func_788(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

void func_789(int iParam0, int iParam1)
{
	if (!func_536(iParam0))
	{
		return;
	}
	Global_1051439->f_3073[iParam0] = (Global_1051439->f_3073[iParam0] || iParam1);
}

void func_790(int iParam0, int iParam1)
{
	if (!func_536(iParam0))
	{
		return;
	}
	Global_1051439->f_3073[iParam0] = (&Global_1051439->f_3073[iParam0] - (Global_1051439->f_3073[iParam0] && iParam1));
}

void func_791(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_1915715->f_18246 = iParam0;
	}
}

int func_792(int iParam0)
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

bool func_793(int iParam0)
{
	return func_514(iParam0) == -427144552;
}

struct<5> func_794(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_630(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_514(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_631(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_733(bParam1) };
			if (bParam2 && func_850(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_851(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_851(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_513(iParam0, &Var6, 1728382685))
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
			Var0 = { func_852(bParam1) };
			switch (func_297(iParam0))
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
			if (func_853(iParam0, -1823706425))
			{
				Var0 = { func_631(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_853(iParam0, -1483207246))
			{
				Var0 = { func_631(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_631(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_853(iParam0, -1653629781))
			{
				Var0 = { func_631(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_854(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_853(iParam0, -1653629781))
			{
				Var0 = { func_631(1384535894, Var0, 1784584921, bParam1) };
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

bool func_795(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_855(&iParam0);
	if (!func_511(iParam0, 0) && !func_761(func_544(iParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_742(iParam0, -455129387) == 0)
	{
		bParam3 = true;
	}
	if (func_793(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		Var0 = { func_733(0) };
		Var4.f_9 = -1591664384;
		if (!func_851(iParam0, &Var0, 1728382685, 0, 0))
		{
			return false;
		}
		else if (func_513(iParam0, &Var4, 1728382685))
		{
			return false;
		}
		if (func_850(iParam0, 1))
		{
			if (!func_851(iParam0, &Var0, -649335959, 0, 0))
			{
				return false;
			}
			else if (func_513(iParam0, &Var4, -649335959))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_856(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_829(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_796(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_3 & 128 != 0;
	}
	return func_674(128, iParam0);
}

int func_797()
{
	iVar0 = 255;
	iVar1 = func_857();
	if (func_858(iVar1))
	{
		return player_id();
	}
	if (does_entity_exist(iVar1))
	{
		if (is_entity_a_ped(iVar1))
		{
			iVar2 = get_ped_index_from_entity_index(iVar1);
			if (is_ped_a_player(iVar2))
			{
				iVar0 = network_get_player_index_from_ped(iVar2);
			}
		}
	}
	return iVar0;
}

void func_798(int iParam0)
{
	if (!func_859(iParam0))
	{
		_0x31010318ba9897ac(&(Global_1071686->f_21416.f_260), iParam0);
	}
}

bool func_799(int iParam0)
{
	if (func_539(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_802(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

void func_800(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_801(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_802(int iParam0)
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
		func_759(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_835(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

bool func_803(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_804(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_670() - fParam1);
	func_860(uParam0, 1);
	func_861(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_805(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	iVar0 = func_819(2, iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	return _0xfbe782b3165ac8ec(iVar0);
}

void func_806()
{
}

var func_807()
{
	Global_1293346->f_458.f_1552++;
	if (Global_1293346->f_458.f_1552 >= 2147483646)
	{
		Global_1293346->f_458.f_1552 = 0;
	}
	return Global_1293346->f_458.f_1552;
}

void func_808(struct<30> Param0, int iParam30)
{
	switch (iParam30)
	{
		case 0:
			*Global_1293346->f_458.f_44[func_862()] = { Param0 };
			func_863((func_862() + 1 % 40));
			Global_1293346->f_458.f_1546++;
			break;
		case 1:
			*Global_1293346->f_458.f_1245[func_864()] = { Param0 };
			func_865((func_864() + 1 % 10));
			Global_1293346->f_458.f_1547++;
			break;
	}
}

int func_809(int iParam0)
{
	iVar0 = -1;
	if (func_866(&Var1, iParam0))
	{
		iVar0 = ((func_867() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_810(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_811(int iParam0, int iParam1)
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

int func_812(int iParam0)
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

int func_813(int iParam0)
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

void func_814(int iParam0, int iParam1)
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
			func_868((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_868(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_55(*Global_1900736->f_1[0]))
	{
		func_452(*Global_1900736->f_1[0], 3);
	}
}

bool func_815(int iParam0)
{
	iVar0 = iParam0;
	return (iVar0 >= 0 && iVar0 < 64);
}

int func_816(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_52;
}

int func_817(int iParam0)
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

int func_818(int iParam0, int iParam1)
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

int func_819(int iParam0, int iParam1)
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

void func_820(struct<2> Param0)
{
	if (func_449(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_449(Param0)))
	{
	}
	else
	{
		_0xb2a38826e5886e83(func_449(Param0), Global_265377->f_124517.f_71.f_17);
		if (func_823(Param0, &Var0))
		{
			if (Var0.f_29 == -681494152)
			{
				_0xf21a5d66874fcedd(Var0.f_2, 0, -1423748980);
			}
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_29, 0);
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_30, 0);
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_31, 0);
		}
	}
}

int func_821(struct<2> Param0, int iParam2)
{
	iVar0 = func_698(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900736->f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900736->f_66;
	func_869(Param0, iVar0);
	Global_1900736->f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900736->f_66)
	{
		return iVar0;
	}
	func_814(iVar0, iParam2);
	return iParam2;
}

int func_822(struct<2> Param0, int iParam2)
{
	if (!func_55(Param0))
	{
		return 0;
	}
	iVar0 = func_698(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_870(Param0, func_181(0), iParam2))
	{
		func_452(func_181(0), 3);
		func_452(func_181(iVar0), 4);
		return 0;
	}
	func_814(iVar0, 0);
	func_452(func_181(0), 3);
	func_452(func_181(1), 4);
	return 1;
}

bool func_823(struct<2> Param0, var uParam2)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_190(Param0, &vVar0);
	if (func_871(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

bool func_824(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

int func_825(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_826(int iParam0, var uParam1, var uParam2)
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

int func_827(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -697100746;
		case 7:
			return -999519443;
		case 12:
			return 128291088;
		case 11:
			return -1399517481;
		case 13:
			return 705255263;
		case 14:
			return -471215553;
		case 15:
			return 1371028520;
		case 16:
			return 1479488426;
		case 17:
			return -170363364;
		case 18:
			return -296143963;
		case 19:
			return -575193412;
		case 20:
			return 1364208910;
		case 21:
			return 1936286816;
		case 22:
			return -361115047;
		default:
			break;
	}
	return 0;
}

int func_828(int iParam0)
{
	if (iParam0 == 255 || iParam0 == network_player_id_to_int())
	{
		return _0x32c90cdfaf40514c();
	}
	return Global_1145091[iParam0];
}

int func_829(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_511(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_742(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_631(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_411(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_411(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_830(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1152215114;
		case 7:
			return -390042476;
		case 12:
			return -1108993414;
		case 11:
			return -657484822;
		case 13:
			return -138573168;
		case 14:
			return -1834731109;
		case 15:
			return -2024553896;
		case 16:
			return 712011765;
		case 17:
			return -494315136;
		case 18:
			return -399749454;
		case 19:
			return 1428145499;
		case 20:
			return -1318783204;
		case 21:
			return 893948884;
		case 22:
			return -187008013;
			return 0;
		}

int func_831(int iParam0, int iParam1, int iParam2)
{
	if (!func_511(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_742(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_794(iParam0, 0, 0) };
	if (func_795(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_872(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_411(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_832(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_511(iParam0, 0))
	{
		return 0;
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_795(iParam0, uParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_872(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_411(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

bool func_833(int iParam0)
{
	return func_268(&(Global_1956200->f_1565), iParam0, 1);
}

int func_834(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

void func_835(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

bool func_836(int iParam0, int iParam1, int iParam2)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 < iParam1)
	{
		if (iParam2 != 0)
		{
			Global_1071686->f_21416.f_1[iParam0]->f_2 = iParam2;
		}
		else
		{
			Global_1071686->f_21416.f_1[iParam0]->f_2 = Global_1296859->f_21;
		}
		Global_1071686->f_21416.f_1[iParam0]->f_1 = iParam1;
		return true;
	}
	else if (Global_1071686->f_21416.f_1[iParam0]->f_1 == iParam1)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = Global_1296859->f_21;
		return true;
	}
	return false;
}

void func_837(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 183;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 8, 2, &uParam1);
	func_873(*uParam0);
}

int func_838(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_58(Param0);
	}
	return -1;
}

void func_839(var uParam0)
{
	func_874(uParam0);
	func_874(&(uParam0->f_6));
	func_874(&(uParam0->f_12));
	func_874(&(uParam0->f_18));
	func_874(&(uParam0->f_24));
	uParam0->f_30 = { Var0 };
	uParam0->f_63 = 0;
}

int func_840(var uParam0)
{
	*uParam0 = 1;
	uParam0->f_3 = player_id();
	uParam0->f_2 = get_player_ped(uParam0->f_3);
	uParam0->f_1 = func_875(uParam0->f_2);
	uParam0->f_4 = get_player_team(uParam0->f_3);
	uParam0->f_5 = get_ped_relationship_group_hash(uParam0->f_2);
	return 1;
}

bool func_841(int iParam0, var uParam1)
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

bool func_842(var uParam0, var uParam1)
{
	switch (*uParam0)
	{
		case 3:
			return func_841(_get_rider_of_mount(uParam0->f_2, false), uParam1);
		case 4:
			return func_841(get_ped_in_vehicle_seat(uParam0->f_1, -1), uParam1);
		default:
			break;
	}
	return false;
}

int func_843(var uParam0)
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

int func_844(var uParam0)
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

int func_845(var uParam0)
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

bool func_846(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_876(iParam0);
	uParam2->f_4 = iParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_847(var uParam0, int iParam1, var uParam2)
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

bool func_848(int iParam0, int iParam1)
{
	return (Global_1107216->f_33[iParam0]->f_3.f_8 && iParam1) != 0;
}

bool func_849(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_850(int iParam0, bool bParam1)
{
	if (func_297(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_877();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_851(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_829(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

struct<4> func_852(bool bParam0)
{
	iVar0 = func_411(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_631(271701509, func_630(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_631(271701509, func_630(bParam0), 12999093, 0);
}

bool func_853(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_297(iParam0);
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
			if (func_878(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_854(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_879(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_855(int iParam0)
{
	if (!func_511(*iParam0, 0))
	{
		return 0;
	}
	if (!func_880(*iParam0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995:
			*iParam0 = -1753819339;
			break;
		case 1903483453:
			*iParam0 = -1527293029;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
		case 998010398:
			*iParam0 = -324053813;
			break;
		case -1424823393:
			*iParam0 = -885810591;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_856(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_511(iParam0, 0) && !func_761(func_544(iParam0), 2))
	{
		return 0;
	}
	if (func_514(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_742(iParam0, -455129387) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_411(bParam3), iParam0);
}

var func_857()
{
	return Global_1102219->f_26.f_3341;
}

bool func_858(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (iVar0 == Global_1102219->f_26.f_3344)
	{
		return true;
	}
	if (iVar0 == get_player_ped(player_id()))
	{
		return true;
	}
	return false;
}

bool func_859(int iParam0)
{
	return _0x72b2e00c9bac6789(&(Global_1071686->f_21416.f_260), iParam0);
}

void func_860(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_861(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_862()
{
	if (Global_1293346->f_458.f_1548 >= 40 || Global_1293346->f_458.f_1548 < 0)
	{
		Global_1293346->f_458.f_1548 = 0;
	}
	return Global_1293346->f_458.f_1548;
}

void func_863(int iParam0)
{
	if (iParam0 >= 40 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346->f_458.f_1548 = iParam0;
}

int func_864()
{
	if (Global_1293346->f_458.f_1549 >= 10 || Global_1293346->f_458.f_1549 < 0)
	{
		Global_1293346->f_458.f_1549 = 0;
	}
	return Global_1293346->f_458.f_1549;
}

void func_865(int iParam0)
{
	if (iParam0 >= 10 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346->f_458.f_1549 = iParam0;
}

bool func_866(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

int func_867()
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

void func_868(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { *Global_1900736->f_1[iParam0] };
	*Global_1900736->f_1[iParam0] = { *Global_1900736->f_1[iParam1] };
	*Global_1900736->f_1[iParam1] = { Var0 };
}

void func_869(struct<2> Param0, int iParam2)
{
	if (!func_55(Param0))
	{
		func_189(Global_1900736->f_1[iParam2]);
	}
	else
	{
		*Global_1900736->f_1[iParam2] = { Param0 };
	}
	func_881(Param0, 0, 1, -1);
}

bool func_870(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	if (!func_55(Param0))
	{
		return false;
	}
	if (!func_55(Param2))
	{
		return true;
	}
	iVar0 = func_182(Param0);
	iVar1 = func_182(Param2);
	if (iVar1 == iVar0)
	{
		if (bParam4)
		{
			return true;
		}
	}
	if (iVar1 == 2 || iVar1 == 7)
	{
		if (bParam4 && (iVar0 == 2 || iVar0 == 7))
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 2 || iVar0 == 7)
	{
		return true;
	}
	if (iVar1 == 6)
	{
		return false;
	}
	if (iVar0 == 6)
	{
		return true;
	}
	if (iVar1 == 5)
	{
		return false;
	}
	if (iVar0 == 5)
	{
		return true;
	}
	if (iVar1 == 3)
	{
		if (bParam4 && iVar0 == 3)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 3)
	{
		return true;
	}
	if (iVar1 == 4)
	{
		if (bParam4 && iVar0 == 4)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 4)
	{
		return true;
	}
	return false;
}

bool func_871(int iParam0, var uParam1, var uParam2)
{
	if (!func_882(iParam0))
	{
		return false;
	}
	if (func_883(iParam0, uParam1, &uVar0))
	{
		func_884(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_872(bool bParam0)
{
	if (func_54() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_411(bParam0));
}

void func_873(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

void func_874(var uParam0)
{
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = 623901053;
	*uParam0 = { Var0 };
}

var func_875(var uParam0)
{
	return uParam0;
}

int func_876(int iParam0)
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

bool func_877()
{
	return (func_885(-1185145312, 0, 0, 0) > 0 && func_886(func_631(889965687, func_630(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_878(int iParam0, int iParam1, int iParam2)
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

bool func_879(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_411(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_880(int iParam0)
{
	return func_299(iParam0, 1279601681);
}

int func_881(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	if (func_887(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_687(Param0);
	Var0.f_3 = iParam3;
	func_888(&Var0, bParam2, iParam4);
	return 1;
}

bool func_882(int iParam0)
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

bool func_883(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_876(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_884(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_889(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_890(iVar0);
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
			uParam2->f_5 = func_891(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_892(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_893(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_894(iVar0);
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

int func_885(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_895(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_411(bParam1), iParam0, iParam3);
}

int func_886(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_896(&uParam0, iParam4, bParam5, iParam6);
}

int func_887(struct<2> Param0)
{
	if (Global_1196205->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205->f_129)
	{
		if (func_453((*Global_1196205)[iVar0]->f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_888(var uParam0, bool bParam1, int iParam2)
{
	func_897(uParam0, iParam2);
	if (Global_1196205->f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_898(func_887(uParam0->f_1));
	}
	else
	{
		func_899();
	}
}

int func_889(int iParam0, var uParam1)
{
	if (func_900(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_890(int iParam0)
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

int func_891(int iParam0)
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

int func_892(int iParam0)
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

int func_893(int iParam0)
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

int func_894(int iParam0)
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

bool func_895(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_896(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_901(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_897(var uParam0, int iParam1)
{
	if (Global_1196205->f_129 >= 32)
	{
		Global_1196205->f_129 = 32;
		return;
	}
	if (iParam1 >= Global_1196205->f_129)
	{
		iParam1 = -1;
	}
	if (iParam1 <= -1)
	{
		*(*Global_1196205)[Global_1196205->f_129] = { *uParam0 };
		Global_1196205->f_129++;
		return;
	}
	iVar0 = iParam1;
	iVar1 = (Global_1196205->f_129 - 1);
	Var2.f_1 = -1;
	Var2.f_1.f_1 = -1;
	while (iVar1 >= iVar0)
	{
		Var2 = { *(*Global_1196205)[iVar1] };
		*(*Global_1196205)[iVar1] = { *((*Global_1196205)[iVar1 + 1]) };
		*((*Global_1196205)[iVar1 + 1]) = { Var2 };
		iVar1 = (iVar1 - 1);
	}
	*(*Global_1196205)[iParam1] = { *uParam0 };
	Global_1196205->f_129++;
}

void func_898(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1196205->f_129)
	{
		return;
	}
	Global_1196205->f_130 = iParam0;
	Global_1196205->f_131 = Global_1196205[iParam0];
}

void func_899()
{
	if (Global_1196205->f_131 == 0)
	{
		return;
	}
	Global_1196205->f_130 = func_902(Global_1196205->f_131);
	if (Global_1196205->f_130 < 0)
	{
		Global_1196205->f_131 = 0;
	}
}

bool func_900(int iParam0, var uParam1, var uParam2)
{
	if (func_903(iParam0, uParam1, &uVar0))
	{
		func_847(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_901(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_411(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_879(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

int func_902(int iParam0)
{
	if (Global_1196205->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205->f_129)
	{
		if (Global_1196205[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_903(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_876(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

