void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	network_set_script_is_safe_for_network_game();
	_set_thread_priority(0);
	func_1(16);
	set_this_script_can_remove_blips_created_by_any_script(true);
	func_2();
	while (!func_3(512))
	{
		wait(0);
	}
	func_4();
	func_5();
	while (!func_3(512))
	{
		wait(0);
	}
	func_6();
	func_7(16);
	while (Global_1572887->f_9)
	{
		wait(0);
	}
	while (!func_3(256))
	{
		wait(0);
	}
	network_set_script_ready_for_events(true);
	func_7(2);
	while (!_0x9e4ef615e307fbbe())
	{
		func_8();
		Global_1956196->f_1 = (1 + Global_1956196->f_1);
		Global_1956196->f_2 = (get_frame_time() + Global_1956196->f_2);
		if ((&Global_1956196 - get_game_timer()) > 500)
		{
			Global_1956196->f_3 = (1f / (Global_1956196->f_2 / to_float(Global_1956196->f_1)));
			Global_1956196->f_1 = 0;
			Global_1956196->f_2 = 0f;
		}
		iVar0 = 0;
		while (iVar0 < 14)
		{
			Call_Loc(Local_168[iVar0]->f_1);
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Call_Loc(Local_267[iVar1]->f_1);
			iVar1++;
		}
		wait(0);
	}
	func_9();
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

void func_2()
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		Local_168[iVar0] = 962;
		Local_168[iVar0]->f_1 = 970;
		Local_168[iVar0]->f_2 = 962;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_267[iVar0] = 962;
		Local_267[iVar0]->f_1 = 970;
		Local_267[iVar0]->f_2 = 962;
		iVar0++;
	}
}

bool func_3(int iParam0)
{
	return (Global_18 && iParam0) != 0;
}

void func_4()
{
	func_14(981, 989, 962, 0, "PLAYER(S)");
	func_14(1070, 1206, 1444, 1, "DISTRICT");
	func_14(962, 1529, 962, 2, "UID LAUNCHER");
	func_14(1635, 1647, 962, 3, "EVENT MONITOR");
	func_14(2035, 2051, 962, 4, "LAW(S)");
	func_14(962, 2212, 962, 5, "SATCHEL");
	func_14(2867, 2879, 3075, 6, "PLAYER_MENU_");
	func_14(3083, 3171, 4613, 7, "HUD");
	func_14(4636, 4650, 4919, 8, "SKINNING");
	func_14(962, 4934, 962, 10, "FOCUS_VOLUME");
	func_14(962, 5200, 5284, 11, "MISSION HANDLER(S)");
	func_14(962, 970, 5322, 12, "UI CLEANUP");
	func_14(962, 5342, 962, 13, "WORLD STATE SHORT");
}

void func_5()
{
	func_41(5401, 5469, 5874, 0, "NET_SHOPS");
	func_41(962, 5938, 962, 1, "UGCGLOBALLOADER");
	func_41(5950, 6205, 6213, 2, "AUTHORED SPAWNS");
	func_41(6234, 6251, 6651, 3, "ONSCREEN_KEYBOARD");
}

void func_6()
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		Call_Loc(&Local_168[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Call_Loc(&Local_267[iVar0]);
		iVar0++;
	}
}

void func_7(int iParam0)
{
	Global_18 = (Global_18 || iParam0);
}

void func_8()
{
	Global_19 = 0;
}

void func_9()
{
	func_49();
	network_set_script_ready_for_events(false);
	if (Global_1940258->f_2 != 0)
	{
		_0x00a15b94cba4f76f(Global_1940258->f_2);
	}
}

void func_10()
{
}

void func_11()
{
	return;
}

void func_12()
{
}

void func_13()
{
	func_50();
	func_51();
	func_52();
	func_53();
	Global_1915662 = 0;
	func_54();
}

void func_14(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	Local_168[iParam3] = iParam0;
	Local_168[iParam3]->f_1 = iParam1;
	Local_168[iParam3]->f_2 = iParam2;
	StringCopy(&(Local_168[iParam3]->f_3), sParam4, 24);
}

void func_15()
{
	if (!_does_volume_exist(Global_1896622->f_38))
	{
		Global_1896622->f_38 = _create_volume_cylinder_with_custom_name(3267.312f, -619.652f, 80.27f, 0f, 0f, 24f, 279f, 400f, 91f, "siska Inner");
	}
	if (!_does_volume_exist(Global_1896622->f_39))
	{
		Global_1896622->f_39 = _create_volume_cylinder_with_custom_name(3267.312f, -619.652f, 80.27f, 0f, 0f, 24f, 300f, 421f, 91f, "siska Outer");
	}
}

void func_16()
{
	if (func_55())
	{
		return;
	}
	func_56(8);
	func_57(Global_1896622->f_35);
	func_58(Global_1896622->f_35);
	func_59();
	Global_1896622->f_35++;
	if (Global_1896622->f_35 >= 17)
	{
		Global_1896622->f_35 = 0;
		bVar0 = true;
	}
	if (Global_1896622->f_36 != -1)
	{
		if (Global_1896622->f_36 != func_60())
		{
			func_61(Global_1896622->f_36);
		}
		return;
	}
	if (bVar0)
	{
		iVar1 = func_63(func_62());
		if (iVar1 < 0 || iVar1 >= 17)
		{
			return;
		}
		if (func_60() != iVar1)
		{
			Global_1896622->f_37 = 1;
			if (func_61(iVar1))
			{
				return;
			}
		}
		if ((!Global_1896622->f_37 && !is_thread_active(Global_1896622->f_42, false)) && func_60() != -1)
		{
			func_61(func_60());
		}
		Global_1896622->f_37 = 0;
	}
}

void func_17()
{
	iVar0 = 0;
	while (iVar0 < 17)
	{
		StringCopy(&cVar1, func_64(iVar0), 64);
		if (!is_string_null_or_empty(&cVar1) && _get_number_of_references_of_script_with_name_hash(get_hash_key(&cVar1)) > 0)
		{
			_0x7423f7835770f619(get_hash_key(&cVar1));
		}
		iVar0++;
	}
	func_65();
	Global_1896622->f_41 = -1;
}

void func_18()
{
	iVar0 = func_66();
	if (iVar0 != -1 && iVar0 != 0)
	{
		return;
	}
	func_67();
	Var1 = { func_68(0) };
	if (func_69(Var1))
	{
		switch (func_70(func_68(0)))
		{
			case 2:
			case 7:
				if (func_71(12288))
				{
					func_72(0, 0, 0, 0);
				}
				return;
			default:
				break;
		}
	}
}

void func_19()
{
	func_73();
}

void func_20()
{
	func_74();
	iVar1 = get_number_of_events(0);
	if (iVar1 > 0)
	{
		Global_1951245->f_8 = 0;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_75(iVar0);
			func_76(iVar0);
			func_77(iVar0);
			func_78(iVar0);
			func_79(iVar0);
			func_80(iVar0);
			func_81(iVar0);
			func_82(iVar0);
			func_83(iVar0);
			func_84(iVar0);
			iVar2 = get_event_at_index(0, iVar0);
			switch (iVar2)
			{
				case -140551285:
					func_85(iVar0);
					break;
				case -2091944374:
				case -1511724297:
				case -1312424871:
				case -369170747:
					func_86(iVar0);
					break;
				case 1376140891:
					func_87(iVar0);
					break;
				case -745090075:
					func_88(iVar0);
					break;
				case -1034120588:
					func_89(iVar0);
					break;
				case 1387172233:
					func_90(iVar0);
					func_91(iVar0);
					break;
				case 735942751:
					func_92(iVar0);
					break;
				case -1816722641:
					func_93(iVar0);
					break;
				case -1241852893:
					func_94(iVar0);
					break;
				case 867155253:
					func_95(iVar0);
					break;
				case -582361627:
					func_96(iVar0);
					break;
				case 1553659161:
					func_97(iVar0);
					break;
				case 1351025667:
					func_98(iVar0);
					break;
			}
			iVar0++;
		}
	}
	iVar1 = get_number_of_events(3);
	if (iVar1 > 0)
	{
		iVar3 = 0;
		while (iVar3 < get_number_of_events(3))
		{
			func_99(iVar3);
			iVar3++;
		}
	}
}

void func_21()
{
	func_100();
	func_101();
}

void func_22()
{
	bVar0 = func_102();
	bVar1 = func_103(player_id(), 1, 0, 1);
	bVar2 = func_103(player_id(), 0, 0, 1);
	if (!bVar0)
	{
		func_104(bVar1);
		func_105();
		Var3 = { func_106(player_id()) };
		_0x4ef23e04a0c8ff51(&Var3, &uVar10);
		iVar12 = uVar10;
		iVar13 = func_66();
		if (iVar13 == -1)
		{
			iVar12 = _get_bounty_for_player(player_id());
		}
		else if (iVar13 == 0)
		{
			func_107();
		}
		if (func_109(func_108()))
		{
			if (!is_screen_faded_out() && iVar12 > Global_1940258->f_11)
			{
				_0xc310239acccf5579();
			}
		}
	}
	func_110(bVar2, bVar0);
}

void func_23()
{
	func_111();
	func_112();
	func_113();
	if (is_weapon_valid(Global_1940258->f_38) && _is_weapon_binoculars(Global_1940258->f_38))
	{
		if (Global_1940258->f_38 == 1652431022)
		{
			if (Global_1940311->f_13)
			{
				Global_1940311->f_13 = 0;
			}
			else if (is_first_person_aim_cam_active())
			{
				_0x9f9a829c6751f3c7(get_player_index(), 57, 1);
			}
		}
		if (!func_114())
		{
			if (!func_115("binoculars"))
			{
				func_116();
			}
		}
	}
	func_117();
	func_118();
	if (Global_1940258->f_38 == -1016714371)
	{
		if (!func_119())
		{
			if (!func_115("camera_item"))
			{
				func_120();
			}
		}
	}
	func_121();
	func_122();
	if (Global_1940258->f_38 == 332793555)
	{
		if (!func_123())
		{
			if (!func_115("net_advanced_camera"))
			{
				func_124();
			}
			func_125();
			func_126();
		}
		if (!func_127())
		{
			func_128();
		}
	}
	if (Global_1940258->f_38 == 827679807)
	{
		if (func_66() == -1)
		{
			if (!func_129())
			{
				if (!func_115("electric_lantern"))
				{
					func_130();
				}
			}
		}
	}
	if (func_131())
	{
		if (!func_132())
		{
			if (!func_115("metal_detector"))
			{
				func_133();
			}
		}
	}
	bVar0 = false;
	if (func_66() == 0 && func_134(2048, 255))
	{
		bVar0 = true;
	}
	if (!is_ped_injured(Global_34))
	{
		if (Global_1940258->f_38 == -1415022764)
		{
			if (!func_135(Global_34, 716706914))
			{
				if (func_136(bVar0))
				{
					func_137();
				}
			}
			if (!is_pause_menu_active() && func_138())
			{
				_0x2804658eb7d8a50b(1, -517219045);
			}
		}
		else if (func_139(1))
		{
			if (func_136(bVar0))
			{
				func_137();
			}
		}
	}
	if (!func_140())
	{
		Global_1940311->f_36 = 0;
		return;
	}
	bVar1 = &Global_1940311 == true;
	if (!bVar1)
	{
		if (func_141(&(Global_1940144->f_86[2]), 1))
		{
			bVar1 = true;
		}
	}
	if (bVar1 && !Global_1940311->f_1)
	{
		if (func_70(func_68(0)) != 5)
		{
			if (!is_thread_active(Global_1940311->f_32, false))
			{
				request_script("satchel");
				Global_1940311->f_1 = 1;
				Global_1940311 = 0;
			}
		}
		else if (&Global_1940311 == 1)
		{
			Global_1940311 = 0;
		}
	}
	else if (Global_1940311->f_1 && !is_thread_active(Global_1940311->f_32, false))
	{
		if (has_script_loaded("satchel"))
		{
			if (get_number_of_free_stacks_of_this_size(1024) > 0)
			{
				Global_1940311->f_32 = start_new_script("satchel", 1024);
				set_script_as_no_longer_needed("satchel");
			}
		}
	}
}

void func_24()
{
	func_142();
}

void func_25()
{
	_0x0a487cc74a517fb5(1);
	func_143();
	func_144();
	if (!func_145())
	{
		func_146(0);
		Global_1896738->f_386 = 0;
		return;
	}
	bVar0 = func_147();
	bVar1 = func_148();
	bVar2 = (((Global_1896738->f_386 || bVar0) && Global_1896738->f_384) || Global_1896738->f_387);
	bVar3 = ((Global_1915715->f_20638 || Global_1915715->f_22504.f_1) || func_149());
	if (func_150(!bVar3, 1, 1, 0, 1, 1, 1, 1, 0))
	{
		_0x1c38c3577901af1f();
	}
	if ((_is_app_active(1433015236) || bVar2) || bVar1)
	{
		if (bVar0)
		{
			func_151();
		}
		func_152();
	}
}

void func_26()
{
}

void func_27()
{
	Global_1940144->f_94 = func_153(-569063887, 0, 0, 0) >= 1;
	Global_1940144->f_95 = func_153(1259508039, 0, 0, 0) >= 1;
	func_154();
	func_155();
	func_156();
	func_157();
	func_158();
	func_159();
	if (func_66() != -1)
	{
		return;
	}
	func_160();
}

void func_28()
{
	func_161();
	if (Global_26640)
	{
		_0xc9caeaeec1256e54(1023137905);
	}
	Global_1940144->f_25 = 0;
	if (Global_1940258->f_6)
	{
		if (func_162(Global_1940144->f_85))
		{
			func_163(&(Global_1940144->f_85), 1, 1);
		}
		return;
	}
	if ((get_frame_count() % 30) == 0)
	{
		if (func_66() == -1)
		{
			Global_1940144->f_94 = func_153(-569063887, 0, 0, 0) >= 1;
			Global_1940144->f_95 = func_153(1259508039, 0, 0, 0) >= 1;
		}
		else
		{
			_0xb7e52a058b07c7e2(Global_34, &uVar0, &uVar4);
			if ((func_164(&uVar0) && !Global_1940144->f_36) && Global_1940144->f_37)
			{
				func_165(872, 0);
				Global_1940144->f_36 = 1;
			}
			Global_1940144->f_94 = 0;
			Global_1940144->f_95 = 1;
		}
	}
	if ((get_frame_count() % 3) == 0)
	{
		func_166(0);
	}
	func_167();
	func_168();
	if (Global_1940144->f_19)
	{
		set_ped_reset_flag(Global_34, 103, true);
	}
	iVar8 = Global_1940144->f_40;
	Global_1940144->f_40 = _0x9c409bbc492cb5b1();
	if (_event_manager_is_event_pending(746131100) && _event_manager_peek_event(746131100, &vVar9))
	{
		if (vVar9.x == -1740156697)
		{
			func_169(&(Global_1940144->f_50.f_10));
			bVar13 = true;
		}
	}
	bVar14 = false;
	if ((Global_1940144->f_10 || Global_1940144->f_11) || Global_1940144->f_12)
	{
		bVar14 = true;
	}
	if (bVar14)
	{
		if (func_162(Global_1940144->f_85))
		{
			func_163(&(Global_1940144->f_85), 1, 1);
		}
		disable_control_action(0, -17122892, false);
		disable_control_action(0, -874806616, false);
		if (!Global_1940144->f_18)
		{
			Global_1940144->f_18 = 1;
			func_170();
		}
		if (!Global_1952637->f_929)
		{
			func_171(37, 0, 0, 0, 0);
			Global_1952637->f_929 = 1;
		}
	}
	else
	{
		if (Global_1952637->f_929)
		{
			func_171(38, 0, 0, 0, 0);
			Global_1952637->f_929 = 0;
		}
		if (Global_1940144->f_18)
		{
			Global_1940144->f_18 = 0;
		}
	}
	if (bVar14 || bVar13)
	{
		if (((((!Global_1940144->f_15 && _0x2d19bc4df626cbe7(Global_34, 0, 1615635273, 0)) && func_172(0, 99870848)) && !func_173(Global_34)) && !_0xec7e480ff8bd0bed(Global_34)) && !func_174())
		{
			if (!Global_1940144->f_16 || bVar13)
			{
				func_175(1);
			}
		}
		else if (Global_1940144->f_16 || bVar13)
		{
			func_175(0);
		}
	}
	if (func_176())
	{
		return;
	}
	if (!Global_1940144->f_10 && (Global_1940144->f_11 || Global_1940144->f_12))
	{
		if (!is_task_move_network_active(Global_34))
		{
			Global_1940144->f_8 = 0;
		}
	}
	if (iVar8 != Global_1940144->f_40)
	{
		if (func_177(Global_1940144->f_40, 0))
		{
			if (func_178(Global_1940144->f_40) == 2085633299 && func_179(Global_1940144->f_40))
			{
				if (Global_1940144->f_12)
				{
				}
				else
				{
					func_180(Global_1940144->f_40, 1, 0, 0, 1, 1, 0);
				}
			}
		}
	}
	func_181();
	func_182();
	func_183();
	while (_event_manager_is_event_pending(746131100))
	{
		if (_event_manager_peek_event(746131100, &vVar9))
		{
			switch (vVar9.x)
			{
				case -1740156697:
					switch (vVar9.z)
					{
						case 813560150:
							if (!Global_1940144->f_10)
							{
								func_184();
							}
							if ((Global_1940144->f_15 || !func_185()) && !(Global_1940258->f_38 == -1016714371 || Global_1940258->f_38 == 332793555))
							{
								func_175(0);
							}
							Global_1940144->f_10 = 1;
							if (!Global_1940144->f_37)
							{
								func_165(871, 0);
								Global_1940144->f_37 = 1;
							}
							break;
						case -414255251:
							func_186(0);
							Global_1940144->f_11 = 1;
							break;
						case -1472057397:
							Global_1940144->f_12 = 1;
							break;
						case -1992626253:
							Global_1940144->f_13 = 1;
							break;
						default:
							break;
					}
					break;
				case -632467210:
					switch (vVar9.z)
					{
						case 813560150:
							Global_1940144->f_10 = 0;
							break;
						case -414255251:
							Global_1940144->f_11 = 0;
							break;
						case -1472057397:
							Global_1940144->f_12 = 0;
							break;
						case -1992626253:
							Global_1940144->f_13 = 0;
							break;
						default:
							break;
					}
					break;
				case -1203660660:
					switch (vVar9.z)
					{
						case -445375936:
							func_166(1);
							func_187();
							break;
						case -1472057397:
							func_188(vVar9.z, 0);
							break;
						case 545934563:
							Global_1940144->f_25 = 1;
							break;
						default:
							func_189(vVar9.z, 0);
							break;
					}
					break;
				default:
					break;
			}
			_event_manager_pop_event(746131100);
		}
	else
	{
		}
	else
	{
		}
	}
	bVar15 = _0x51bea356b1c60225(get_player_index(), 35);
	if (bVar15)
	{
		iVar16 = func_190();
		if (iVar16 != 0 && iVar16 != Global_1940144->f_65)
		{
			Global_1940144->f_65 = iVar16;
		}
	}
	else if (Global_1940144->f_65 == 0)
	{
	}
	if (Global_1940144->f_23 && bVar15)
	{
		if (!func_191(&(Global_1940144->f_50)))
		{
			func_192(&(Global_1940144->f_50));
		}
		if (func_193(&(Global_1940144->f_50)))
		{
			if (func_194(&(Global_1940144->f_50)))
			{
				func_195(&(Global_1940144->f_50));
			}
		}
	}
	else if ((!bVar15 || !Global_1940144->f_23) && Global_1940144->f_6 != get_game_timer())
	{
		if (func_191(&(Global_1940144->f_50)))
		{
			func_196(&(Global_1940144->f_50));
		}
		Global_1940144->f_23 = 0;
		_0xdc68829bb3f37023(get_player_index(), 0);
	}
}

void func_29()
{
	if (busyspinner_is_on())
	{
		busyspinner_off();
	}
	func_197();
}

void func_30()
{
	func_198(&Local_24);
}

void func_31()
{
	switch (func_199(&Local_24))
	{
		case 0:
			if (Local_24.f_135)
			{
				func_200(&Local_24);
			}
			else if (Local_24.f_136 != -1 && func_201(&(Global_1915715->f_18260[Local_24.f_136])))
			{
				if ((get_game_timer() - Local_24.f_137) > 40000)
				{
					func_205(func_202(Local_24.f_136), func_204(func_203(Local_24.f_136)), 580546400);
					func_205(func_202(Local_24.f_136), func_204(func_203(Local_24.f_136)), 847579139);
					Local_24.f_136 = -1;
				}
			}
			func_206(&Local_24);
			break;
		case 1:
			func_207(&Local_24);
			break;
		case 2:
			func_208(&Local_24);
			break;
		case 3:
			func_209(&Local_24);
			break;
		case 4:
			func_210(&Local_24);
			break;
		case 5:
			func_211(&Local_24);
			break;
		case 6:
			func_212(&Local_24, 0);
			break;
		case 7:
		default:
			break;
	}
	func_213(&Local_24);
}

void func_32()
{
	func_212(&Local_24, 1);
}

void func_33()
{
	iVar0 = func_214();
	iVar1 = 0;
	iVar2 = -1;
	if (!is_entity_dead(iVar0))
	{
		iVar2 = func_215(0, 0);
		if (func_216(iVar2, 1, 1))
		{
			iVar1 = get_mount(iVar0);
			if (!func_217(iVar2, 2, 1))
			{
				if (!does_entity_exist(iVar1) || is_entity_dead(iVar1))
				{
					set_ped_max_move_blend_ratio(iVar0, 1f);
				}
				else
				{
					set_ped_max_move_blend_ratio(iVar1, 1.25f);
				}
			}
			set_ped_reset_flag(Global_34, 188, true);
			if (!func_217(iVar2, 4, 1))
			{
				disable_control_action(0, -128997553, false);
			}
			if (func_217(iVar2, 256, 1))
			{
				disable_control_action(0, 130948705, false);
				disable_control_action(0, 42190210, false);
			}
			if (func_217(iVar2, 2048, 1))
			{
				disable_control_action(0, -640622144, false);
				disable_control_action(0, -1437157082, false);
				disable_control_action(0, -455946723, false);
			}
			if (func_217(iVar2, 1024, 1) || func_217(iVar2, 512, 1))
			{
				enable_control_action(0, -124244224, true);
			}
		}
	}
}

void func_34()
{
	iVar0 = &Global_1878313 + 1;
	if (iVar0 > 25)
	{
		iVar0 = 0;
	}
	Global_1878313 = iVar0;
	if ((*Global_1835011)[&Global_1878313]->f_8 != 0 && !_does_thread_exist((*Global_1835011)[&Global_1878313]->f_8))
	{
		(*Global_1835011)[&Global_1878313]->f_8 = 0;
	}
}

void func_35()
{
	iVar0 = 0;
	while (iVar0 < 80)
	{
		(*Global_1835011)[iVar0]->f_8 = 0;
		iVar0++;
	}
}

void func_36()
{
	if (!_0x9eeb007317fa3b9c())
	{
		_close_all_apps();
	}
}

void func_37()
{
	if (func_55())
	{
		return;
	}
	if (_does_scenario_point_exist(&Global_1915663))
	{
		_0x5a40040bb5ae3ea2(&Global_1915663);
	}
	Global_1915663 = 0;
	if (Global_1939655->f_290)
	{
		return;
	}
	func_218();
}

void func_38()
{
	func_219(0);
	func_220();
	func_221();
	(*Global_1051439)[Global_1051439->f_41] = 34;
	Global_1051439->f_41++;
	func_222(34, 32768);
	func_222(34, 16384);
}

void func_39()
{
	if ((Global_1572887->f_9 || func_223(4)) || func_224() != func_225())
	{
		return;
	}
	if (func_226())
	{
		func_227();
	}
	func_228();
	func_229();
	func_230();
	func_231();
	if (Global_1915715->f_18246 != -1)
	{
		if (Global_1915715->f_18246 != Global_1051439->f_3743)
		{
			func_232(Global_1915715->f_18246, func_202(Global_1915715->f_18246));
		}
		Global_1915715->f_18246 = -1;
	}
	func_232(Global_1051439->f_3743, func_202(Global_1051439->f_3743));
	func_233();
	func_234();
	func_235(&(Global_1915715->f_20343));
	if (!func_236(&iVar0))
	{
		return;
	}
	if (iVar0 <= -1 || iVar0 >= 40)
	{
		return;
	}
	if (iVar0 != 34)
	{
		func_238(func_237());
	}
	switch (iVar0)
	{
		case 34:
			func_239();
			break;
		case 30:
			func_240();
			break;
		case 36:
			func_241();
			break;
		case 32:
			func_242();
			break;
		default:
			if (&Global_1051439->f_72[iVar0] == -1)
			{
				return;
			}
			iVar1 = Global_1051439->f_72[iVar0]->f_18;
			if (iVar1 <= -1 || iVar1 >= 180)
			{
				return;
			}
			if (!func_243(iVar0))
			{
				func_244(iVar0);
			}
			switch (&Global_1051439->f_72[iVar0])
			{
				case 0:
					func_245(iVar0, iVar1);
					break;
				case 2:
					func_246(iVar0, iVar1);
					break;
			}
			break;
	}
}

void func_40()
{
	func_221();
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	Local_267[iParam3] = iParam0;
	Local_267[iParam3]->f_1 = iParam1;
	Local_267[iParam3]->f_2 = iParam2;
	StringCopy(&(Local_267[iParam3]->f_3), sParam4, 24);
}

void func_42()
{
	func_247();
}

void func_43()
{
	if (!func_248(1668953026, Global_1915664, 600, -1, 1, 1))
	{
		return;
	}
	_datafile_register_query(&Global_1915664, -780621134, "SPAWN_DATA/REGION(id=%x)");
	_datafile_register_query(&Global_1915664, 2126283924, "POINT_COLLECTION(type=%x)/SPAWN_POINT(%i)");
	_datafile_register_query(&Global_1915664, 1661768221, "POINT_COLLECTION(type=%x)/SPAWN_POINT(%i):position");
	_datafile_register_query(&Global_1915664, 1500437351, "POINT_COLLECTION(type=%x)/SPAWN_POINT(%i):heading");
	_datafile_register_query(&Global_1915664, 1364851805, "SPAWN_DATA/REGION(%i):id");
	_datafile_register_query(&Global_1915664, -1881300037, "SPAWN_DATA/REGION(%i)");
	_datafile_register_query(&Global_1915664, 1711937246, "POINT_COLLECTION(%i):type");
	_datafile_register_query(&Global_1915664, 1538476019, "SPAWN_DATA/REGION(%i)/POINT_COLLECTION(%i)");
	_datafile_register_query(&Global_1915664, 1608076257, "POINT_COLLECTION(%i)/SPAWN_POINT(%i)");
	_datafile_register_query(&Global_1915664, -2021516177, "POINT_COLLECTION(%i)/SPAWN_POINT(%i):id");
	_datafile_register_query(&Global_1915664, -1469979977, "POINT_COLLECTION(%i)/SPAWN_POINT(%i):position");
	_datafile_register_query(&Global_1915664, -514416884, "POINT_COLLECTION(%i)/SPAWN_POINT(%i):heading");
	func_249(1);
}

void func_44()
{
}

void func_45()
{
	_datafile_unload(&Global_1915664);
	func_250(1);
}

void func_46()
{
	func_251();
	func_252(0);
}

void func_47()
{
	switch (func_253())
	{
		case 0:
			if (!func_254())
			{
				return;
			}
			func_252(1);
		case 1:
			Global_1960073->f_53 = 0;
			StringCopy(&(Global_1960073->f_56), "", 128);
			func_252(2);
		case 2:
			_0x5cb71eaa1429a358(Global_1960073->f_50);
			display_onscreen_keyboard(&Global_1960073, &(Global_1960073->f_1), &(Global_1960073->f_17), &(Global_1960073->f_33), "", "", "", Global_1960073->f_49);
			func_252(3);
		case 3:
			switch (update_onscreen_keyboard())
			{
				case 1:
					if (is_string_null_or_empty(get_onscreen_keyboard_result()))
					{
						func_252(8);
						return;
					}
					else
					{
						func_252(4);
						return;
					}
					break;
				case 0:
					return;
				default:
					func_252(8);
					return;
			}
			break;
		case 4:
			switch (sc_profanity_get_string_status(Global_1960073->f_53))
			{
				case 3:
					if (sc_profanity_check_string(get_onscreen_keyboard_result(), &(Global_1960073->f_53)))
					{
					}
					break;
				case 2:
					func_255(0);
					break;
				case 0:
					func_252(6);
					break;
				case 1:
				case 4:
					func_256(1);
					break;
				default:
					func_256(0);
					break;
			}
			break;
		case 5:
			func_257();
			break;
		case 6:
			func_258(get_onscreen_keyboard_result());
			func_259(1);
			func_252(7);
		case 7:
			func_261(func_260());
			func_252(8);
			return;
		case 8:
			func_251();
			func_252(0);
			break;
	}
}

void func_48()
{
	func_251();
}

void func_49()
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		Call_Loc(Local_168[iVar0]->f_2);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Call_Loc(Local_267[iVar0]->f_2);
		iVar0++;
	}
}

void func_50()
{
	iVar0 = func_262();
	bVar1 = (!func_263(&Global_1940258, 8388608) || Global_1940258->f_11 > 0);
	if (does_entity_exist(Global_34))
	{
		if (bVar1)
		{
			Global_1940258->f_7 = (_0x69e181772886f48b(iVar0) || _0xf0fbfb9ab15f7734(iVar0, 0, 0));
			Global_1940258->f_9 = _0x148e7ac8141c9e64(iVar0);
			Global_1940258->f_8 = _0x9945a3e2528a02e8(iVar0);
			Global_1940258->f_10 = _0xf46108c50a22b029();
			Global_1940258->f_11 = _get_wanted_intensity_for_player(iVar0);
			Global_1940258->f_20 = _0x9d5c9a5a3321b128(iVar0);
			Global_1940258->f_15 = _0xdaefdfdb2aeece37(_get_hud_player_crime_type(iVar0), 0);
			Global_1940258->f_12 = _0xad401c63158acbaa(iVar0);
			if (Global_1940258->f_12)
			{
				_0x9c5bd8c562565ce6(&Var2);
				Global_1940258->f_13 = Var2.f_10;
				Global_1940258->f_17 = Var2.f_11 == 6;
			}
			Global_1940258->f_14 = -1;
			iVar19 = 0;
			while (iVar19 < 24)
			{
				if (_0x532c5fddb986ee5c(iVar0, iVar19, &Var20))
				{
					if (Var20.f_10)
					{
						iVar37 = _0xdaefdfdb2aeece37(Var20, 0);
						if (iVar37 > Global_1940258->f_14)
						{
							Global_1940258->f_14 = iVar37;
						}
					}
				}
				iVar19++;
			}
		}
		else
		{
			func_264();
		}
		Global_1940258->f_52 = _0xab7993ba61a4674f(Global_34, 1);
	}
	if (Global_1940258->f_34 != 0)
	{
		Global_1940258->f_35 = Global_1940258->f_34;
	}
	Global_1940258->f_16 = is_player_being_arrested(iVar0, true);
	Global_1940258->f_6 = is_entity_dead(Global_34);
	if (!Global_1940258->f_6)
	{
		get_current_ped_weapon(Global_34, &(Global_1940258->f_38), false, 0, false);
		Global_1940258->f_34 = get_mount(Global_34);
		if (Global_1572887->f_13 == -1 && Global_1940258 & 524288 != 0)
		{
			set_ped_reset_flag(Global_34, 174, true);
		}
		if (Global_1572887->f_13 != -1)
		{
			set_ped_reset_flag(Global_34, 154, true);
		}
		else if (Global_1940258 & 131072 != 0)
		{
			set_ped_reset_flag(Global_34, 154, true);
		}
	}
	else
	{
		if (func_66() == -1 && _0x139efb0a71dd9011())
		{
			_uiprompt_enable_prompt_type_this_frame(6);
		}
		Global_1940258->f_38 = 0;
		Global_1940258->f_34 = 0;
	}
}

void func_51()
{
	if (&Global_1913638)
	{
		if ((get_game_timer() - Global_1913638->f_1) > 10000)
		{
			Global_1913638 = 0;
		}
		disable_all_control_actions(0);
		enable_control_action(0, -1450761377, true);
		enable_control_action(0, -771458680, true);
	}
}

void func_52()
{
	if (func_265(134217728))
	{
		return;
	}
	if (!func_265(8))
	{
		return;
	}
	if (Global_1952637->f_920 > 0)
	{
		func_266(&(Global_1952637->f_837));
	}
	if (Global_1952637->f_918 > 0 && !func_265(16384))
	{
		func_267(&(Global_1952637->f_736));
	}
	else if (Global_1952637->f_919 > 0)
	{
		func_268(&(Global_1952637->f_635));
	}
	if (func_265(16384))
	{
		func_269(16384);
	}
	if ((((Global_1952637->f_919 <= 0 && Global_1952637->f_918 <= 0) && Global_1952637->f_920 <= 0) && !func_270(0)) && !Global_1956123->f_1)
	{
		if (func_265(67108864))
		{
			Var0.f_1 = 1;
			Var0 = 2;
			_0x31010318ba9897ac(&(Var0.f_2), &Global_1296859);
			Var0.f_3 = 1;
			func_271(&Var0);
			func_269(67108864);
		}
		if (func_265(512))
		{
			if (func_66() == -1)
			{
				func_272(0, 4);
			}
			else
			{
				func_273(0, 1280353230);
			}
			func_269(512);
			func_269(16);
		}
		if (func_265(16))
		{
			if (func_66() == -1)
			{
				func_272(0, 4);
			}
			else
			{
				func_273(0, -1343026476);
			}
			func_269(16);
		}
		func_269(8);
	}
}

void func_53()
{
	iVar0 = get_player_ped(player_id());
	iVar1 = _get_metaped_type(iVar0);
	if (iVar1 == 3)
	{
		_disable_first_person_cam_this_frame();
		func_274();
		_0xae6004120c18df97(iVar0, 0, 0);
	}
	if (Global_1952637->f_2 != iVar1)
	{
		if (Global_1952637->f_2 == 3)
		{
			_0xae6004120c18df97(iVar0, 0, 1);
		}
		Global_1952637->f_2 = iVar1;
	}
}

void func_54()
{
	if (Global_1940085->f_9 > 0f)
	{
		bVar0 = false;
		fVar1 = 0.01f;
		iVar2 = 30000;
		if (Global_1940085->f_14)
		{
			fVar1 = 0.004f;
			iVar2 = 30000;
		}
		if (Global_1940085->f_1 != -1 && Global_1940085->f_1 < &Global_1940085)
		{
			bVar0 = true;
			fVar1 = 0.25f;
		}
		if ((get_game_timer() >= (Global_1940085->f_3 + iVar2) && !Global_1940085->f_10) || bVar0)
		{
			if ((((get_game_timer() >= Global_1940085->f_4 || bVar0) && (Global_1940085->f_9 < 1f || bVar0)) && (Global_1940085->f_9 >= func_275() || Global_1940085->f_15.f_1 == 0f)) && !func_276())
			{
				Global_1940085->f_9 = (Global_1940085->f_9 - (fVar1 * timestep()));
				if (Global_1940085->f_9 < 0f)
				{
					Global_1940085->f_9 = 0f;
				}
			}
		}
		_0x06d26a96ca1bca75(Global_34, 10, Global_1940085->f_9, 0);
	}
	if (func_277())
	{
		if (&Global_1940085 >= 2)
		{
			disable_control_action(0, -822242784, false);
		}
		_0x406ccf555b04fad3(Global_34, 1, Global_1940085->f_9);
		get_current_ped_weapon(Global_34, &iVar3, true, 0, false);
		if (iVar3 != -1569615261 && iVar3 != 0)
		{
			set_ped_reset_flag(Global_34, 1, true);
		}
		if (Global_1940085->f_9 >= 1f)
		{
			Global_1940085->f_8 = (Global_1940085->f_8 + (1f * timestep()));
		}
		else
		{
			Global_1940085->f_8 = 0f;
		}
		if (is_gameplay_cam_rendering() && !_0x190f7da1ac09a8ef())
		{
			if (Global_1940085->f_15.f_1 > 0f)
			{
				if (is_gameplay_cam_shaking())
				{
					bVar4 = false;
					switch (Global_1940085->f_15.f_12)
					{
						case 2:
							if (!is_first_person_aim_cam_active())
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (!_0xa24c1d341c6e0d53(1, 0, 1) || is_first_person_aim_cam_active())
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (_0xa24c1d341c6e0d53(1, 0, 1))
							{
								bVar4 = true;
							}
							break;
					}
					if (bVar4)
					{
						stop_gameplay_cam_shaking(true);
					}
				}
				if (Global_1940085->f_15.f_9 != Global_1940085->f_15.f_1 || !is_gameplay_cam_shaking())
				{
					sVar5 = "";
					if (is_first_person_aim_cam_active())
					{
						sVar5 = "POV_AIM_DRUNK_SHAKE";
						Global_1940085->f_15.f_12 = 2;
					}
					else if (_0xa24c1d341c6e0d53(1, 0, 1))
					{
						sVar5 = "POV_DRUNK_SHAKE";
						Global_1940085->f_15.f_12 = 1;
					}
					else
					{
						sVar5 = "DRUNK_SHAKE";
						Global_1940085->f_15.f_12 = 0;
					}
					if (!is_gameplay_cam_shaking())
					{
						shake_gameplay_cam(sVar5, func_278());
					}
					else
					{
						set_gameplay_cam_shake_amplitude(func_278());
					}
					Global_1940085->f_15.f_9 = Global_1940085->f_15.f_1;
				}
			}
			else if (is_gameplay_cam_shaking())
			{
				stop_gameplay_cam_shaking(false);
			}
		}
		if (Global_1940085->f_9 >= func_275())
		{
			fVar6 = ((0.2f * pow(260f, ((Global_1940085->f_9 - func_275()) - 0.25f))) + 0.1f);
			if (&Global_1940085 >= 2)
			{
				fVar6 = (fVar6 + 0.15f);
			}
			if (fVar6 > 1f)
			{
				fVar6 = 1f;
			}
			else if (fVar6 < 0f)
			{
				fVar6 = 0f;
			}
		}
		else
		{
			fVar6 = 0f;
		}
		if (fVar6 > Global_1940085->f_15.f_1)
		{
			if (get_game_timer() >= Global_1940085->f_3 + 1500)
			{
				Global_1940085->f_15.f_1 = (Global_1940085->f_15.f_1 + (0.18f * timestep()));
				if (Global_1940085->f_15.f_1 > fVar6)
				{
					Global_1940085->f_15.f_1 = fVar6;
				}
			}
		}
		else if (fVar6 < Global_1940085->f_15.f_1)
		{
			Global_1940085->f_15.f_1 = (Global_1940085->f_15.f_1 - (0.18f * timestep()));
			if (Global_1940085->f_15.f_1 < fVar6)
			{
				Global_1940085->f_15.f_1 = fVar6;
			}
		}
		bVar7 = animpostfx_is_running("PlayerDrunk01");
		if (((Global_1940085->f_15.f_1 > 0f && !bVar7) || (Global_1940085->f_15.f_1 <= 0f && bVar7)) || Global_1940085->f_15 != Global_1940085->f_15.f_1)
		{
			if (!bVar7)
			{
				animpostfx_play("PlayerDrunk01");
			}
			_0xcab4dd2d5b2b7246("PlayerDrunk01", func_279());
			Global_1940085->f_15 = Global_1940085->f_15.f_1;
		}
		if (bVar7)
		{
			fVar8 = get_control_normal(0, -1450761377);
			if (fVar8 < 0f)
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar9 = get_control_normal(0, -771458680);
			if (fVar9 < 0f)
			{
				fVar9 = (fVar9 * -1f);
			}
			if (fVar8 > fVar9)
			{
				fVar10 = fVar8;
			}
			else
			{
				fVar10 = fVar9;
			}
			fVar11 = fVar10;
			if (fVar11 > Global_1940085->f_15.f_8)
			{
				Global_1940085->f_15.f_8 = (Global_1940085->f_15.f_8 + (0.8f * timestep()));
				if (Global_1940085->f_15.f_8 > fVar11)
				{
					Global_1940085->f_15.f_8 = fVar11;
				}
			}
			else if (fVar11 < Global_1940085->f_15.f_8)
			{
				Global_1940085->f_15.f_8 = (Global_1940085->f_15.f_8 - (0.8f * timestep()));
				if (Global_1940085->f_15.f_8 < fVar11)
				{
					Global_1940085->f_15.f_8 = fVar11;
				}
			}
			_0xf972f0ab16dc5260("PlayerDrunk01", 1, Global_1940085->f_15.f_8);
		}
	}
	if (func_280())
	{
		func_281();
	}
}

bool func_55()
{
	return false;
}

void func_56(int iParam0)
{
	Global_19 = (Global_19 || iParam0);
}

void func_57(int iParam0)
{
	if (func_282(iParam0, 1) || func_282(iParam0, 2))
	{
		iVar0 = func_283(iParam0);
		if (_does_volume_exist(iVar0))
		{
			if (func_282(iParam0, 1))
			{
				func_284(iVar0, 0);
				func_285(iVar0);
				func_286(iParam0, 1);
			}
			if (func_282(iParam0, 2))
			{
				_0xa1cfb35069d23c23(iVar0);
				_0x74c2b3dc0b294102(iVar0);
				_delete_volume(iVar0);
				func_286(iParam0, 2);
			}
		}
	}
}

void func_58(int iParam0)
{
	if (func_282(iParam0, 4))
	{
		func_287(iParam0);
		func_286(iParam0, 4);
	}
	if (func_282(iParam0, 8))
	{
		func_288(iParam0);
		func_286(iParam0, 8);
	}
}

void func_59()
{
	iVar0 = get_player_ped(player_id());
	if (func_289() && func_290(68))
	{
		return;
	}
	if (!is_ped_injured(iVar0))
	{
		if (func_291(iVar0, Global_1896622->f_39, 1, 0) && !func_291(iVar0, Global_1896622->f_38, 1, 0))
		{
			if (!Global_1896622->f_40)
			{
				if (is_ped_in_any_boat(iVar0))
				{
					iVar1 = get_vehicle_ped_is_in(iVar0, false);
					iVar2 = func_292(iVar1);
					if (!is_entity_dead(iVar1))
					{
						set_entity_as_mission_entity(iVar1, false, false);
						set_boat_sinks_when_wrecked(iVar1, true);
						explode_vehicle(iVar1, false, false, 0);
						set_entity_as_no_longer_needed(&iVar2);
					}
				}
				if (is_ped_on_mount(iVar0))
				{
					iVar3 = get_mount(iVar0);
					func_293(iVar3, 0, 0);
				}
				if (func_289() && func_290(82))
				{
					func_294(player_ped_id(), -10959621, 0, 0);
				}
				else
				{
					func_295(5, 0);
				}
				Global_1896622->f_40 = 1;
			}
		}
	}
	else if (Global_1896622->f_40)
	{
		_0x8d9db115fba8e23d(iVar0);
		_0xe4ef4382e22c780c(iVar0);
		Global_1896622->f_40 = 0;
	}
}

int func_60()
{
	return Global_1896622->f_41;
}

bool func_61(int iParam0)
{
	sVar0 = func_64(iParam0);
	request_script(sVar0);
	if (has_script_loaded(sVar0) && get_number_of_free_stacks_of_this_size(1024) > 0)
	{
		if (func_66() == -1)
		{
			if (is_thread_active(Global_1896622->f_42, false))
			{
				force_cleanup_for_thread_with_this_id(Global_1896622->f_42, 523);
				return true;
			}
			if (_get_number_of_references_of_script_with_name_hash(get_hash_key(sVar0)) > 0)
			{
				func_296(sVar0);
				return true;
			}
		}
		else if (!is_string_null_or_empty(&(Global_1896622->f_43)) && network_is_script_active(&(Global_1896622->f_43), Global_1896622->f_51, true, 0))
		{
			_0x7de4643157ad646c(Global_1896622->f_42);
			set_script_as_no_longer_needed(sVar0);
			return false;
		}
		Global_1896622->f_42 = start_new_script(sVar0, 1024);
		StringCopy(&(Global_1896622->f_43), sVar0, 64);
		set_script_as_no_longer_needed(sVar0);
		if (func_297(iParam0) != func_297(func_60()) || func_298(iParam0))
		{
			func_299(func_60(), 0);
			iVar1 = func_300(func_62(), 1);
			if (!func_301(iVar1))
			{
				if (!func_263(&Global_1940258, 32768) && !func_302())
				{
					if (func_303(func_297(iParam0)) >= get_wanted_level_threshold(1))
					{
						func_304(-1, -1, -1, 0, func_297(iParam0), 0);
					}
					else if (func_298(iParam0))
					{
						func_304(-1, iParam0, -1, 0, -1, 0);
					}
				}
			}
			if (!func_103(player_id(), 1, 0, 1))
			{
				func_305(iParam0);
			}
			else
			{
				func_299(iParam0, 1);
			}
		}
		if (func_60() != -1)
		{
			func_306(func_60());
			func_287(func_60());
		}
		func_307(iParam0);
		_0x14e57f88ba0a07fc(func_308(iParam0));
		func_309(iParam0);
		func_310(iParam0);
		iVar2 = -1000;
		if (func_311(func_108()))
		{
			iVar2 = (*Global_1887339)[func_108()]->f_2;
		}
		if (iVar2 < (get_game_timer() - 1000))
		{
			iVar3 = func_300(func_62(), 1);
			if (func_312(iVar3, 1, 0) == 0)
			{
				func_314(func_313(iParam0, 1), func_297(iParam0));
			}
			func_315(0.775f, 0.2f, 0.025f, 0f);
			func_288(iParam0);
		}
		if (8 == iParam0 != func_316(373691918))
		{
			func_317(373691918, 8 == iParam0, 0);
		}
		return true;
	}
	return false;
}

Vector3 func_62()
{
	vVar0 = { Global_35 };
	if (func_318(255))
	{
		iVar3 = func_319();
		iVar4 = get_player_ped(iVar3);
		vVar0 = { get_entity_coords(iVar4, true, false) };
	}
	return vVar0;
}

int func_63(vector3 vParam0)
{
	return func_320(_get_map_zone_at_coords(vParam0, 10));
}

char* func_64(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BayouNwa_population";
		case 1:
			return "BigValley_population";
		case 2:
			return "BluegillMarsh_population";
		case 3:
			return "CumberlandForest_population";
		case 4:
			return "GreatPlains_population";
		case 5:
			return "Grizzlies_population";
		case 6:
			return "GrizzliesEast_population";
		case 7:
			return "GrizzliesWest_population";
		case 8:
			return "Guama_population";
		case 9:
			return "Heartland_population";
		case 10:
			return "RoanokeRidge_population";
		case 11:
			return "ScarlettMeadows_population";
		case 12:
			return "TallTrees_population";
		case 15:
			return "ChollaSprings_population";
		case 13:
			return "GaptoothRidge_population";
		case 16:
			return "HennigansStead_population";
		case 14:
			return "RioBravo_population";
		default:
			break;
	}
	return "No District script?";
}

void func_65()
{
	if (func_66() != -1)
	{
		return;
	}
	iVar1 = 926;
	iVar2 = 946;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		func_321((iVar1 + iVar0), 0);
		iVar0++;
	}
}

int func_66()
{
	return Global_1572887->f_13;
}

void func_67()
{
	Global_1900736->f_67 = func_322(0, 0, 0);
}

struct<2> func_68(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_69(struct<2> Param0)
{
	iVar0 = func_323(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_70(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_71(int iParam0)
{
	return (Global_1940258 && (-1 - iParam0) & 81919) != 0;
}

int func_72(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	bVar3 = false;
	if (bVar3)
	{
		bVar2 = bParam1;
	}
	else
	{
		bVar2 = func_103(get_player_index(), 1, 0, 1);
	}
	if (!func_324(&Global_1900872, 1024))
	{
		func_325(Global_1900872, 1024);
		if (bParam3)
		{
			return 0;
		}
	}
	iVar1 = (&Global_1900806 - 1);
	while (iVar1 >= 0)
	{
		if (func_326(*(*Global_1900807)[iVar1]) && func_327(*(*Global_1900807)[iVar1]))
		{
			if (!func_328(iVar1, 1024))
			{
				switch (Global_1900807[iVar1])
				{
					case 2:
						if (!(*Global_1835011)[iVar0]->f_67)
						{
							iVar0 = func_329(*(*Global_1900807)[iVar1]);
							if (func_330(iVar0))
							{
								if (!bParam1)
								{
									func_331(iVar0, 0);
								}
								func_332(iVar0, -1, bVar2, 1, 1, 0, 0);
								func_333(iVar0);
								if (bParam3)
								{
									return 0;
								}
							}
						}
						break;
					case 3:
						if (does_blip_exist(Global_1900838[iVar1]))
						{
							remove_blip((*Global_1900838)[iVar1]);
						}
						break;
					default:
						if (does_blip_exist(Global_1900838[iVar1]))
						{
							remove_blip((*Global_1900838)[iVar1]);
						}
						break;
				}
			}
		}
		iVar1 = (iVar1 + -1);
	}
	if (bParam2)
	{
		func_334();
	}
	func_67();
	return 1;
}

void func_73()
{
	_0x608ad36a644a97fe(-1250929611, 1, 0);
	_0x608ad36a644a97fe(1462638198, 1, 0);
	_0x608ad36a644a97fe(-1043434543, 1, 0);
	_0x608ad36a644a97fe(225514697, 1, 0);
	_0x608ad36a644a97fe(11966224, 1, 0);
	_0x608ad36a644a97fe(-1038436471, 1, 0);
}

void func_74()
{
	if (!func_335())
	{
		Global_1951245->f_7 = 0;
		return;
	}
	if (does_entity_exist(Global_1951245->f_7))
	{
		get_current_ped_weapon(Global_1951245->f_7, &iVar0, false, 3, false);
		if (func_336(iVar0))
		{
			if (_is_weapon_pistol(iVar0))
			{
				if (!func_311(Global_1893587->f_2) || Global_1893587->f_2 != 5)
				{
					fVar1 = _0xd56e5f336c675efa(get_object_index_from_entity_index(get_current_ped_weapon_entity_index(Global_1951245->f_7, 3)));
					remove_weapon_from_ped(Global_1951245->f_7, iVar0, true, -142743235);
					iVar0 = _0xf8204ef17410bf43(-1101297303, 1056964608, 1065353216, 0);
					_give_weapon_to_ped_2(Global_1951245->f_7, iVar0, _get_weapon_clip_size(iVar0), true, false, 3, false, 0.5f, 1f, 752097756, false, fVar1, false);
				}
			}
		}
		get_current_ped_weapon(Global_1951245->f_7, &iVar0, false, 2, false);
		if (func_336(iVar0))
		{
			if (_is_weapon_pistol(iVar0))
			{
				if (!func_311(Global_1893587->f_2) || Global_1893587->f_2 != 5)
				{
					fVar1 = _0xd56e5f336c675efa(get_object_index_from_entity_index(get_current_ped_weapon_entity_index(Global_1951245->f_7, 2)));
					remove_weapon_from_ped(Global_1951245->f_7, iVar0, true, -142743235);
					iVar0 = _0xf8204ef17410bf43(-1101297303, 1056964608, 1065353216, 0);
					_give_weapon_to_ped_2(Global_1951245->f_7, iVar0, _get_weapon_clip_size(iVar0), true, false, 2, false, 0.5f, 1f, 752097756, false, fVar1, false);
				}
			}
		}
		Global_1951245->f_7 = 0;
	}
}

void func_75(int iParam0)
{
	switch (get_event_at_index(0, iParam0))
	{
		case -978548489:
		case 402722103:
			func_337(iParam0);
			break;
		case -1360035949:
		case 2145012826:
			if (func_66() == -1)
			{
				func_338(iParam0);
			}
			break;
		case -1682387274:
			break;
	}
}

void func_76(int iParam0)
{
	switch (get_event_at_index(0, iParam0))
	{
		case 1924269094:
			func_339(iParam0);
			break;
	}
}

void func_77(int iParam0)
{
	switch (get_event_at_index(0, iParam0))
	{
		case -978548489:
		case 402722103:
			func_340(iParam0);
			break;
		case -1360035949:
		case 2145012826:
			func_341(iParam0);
			break;
	}
}

void func_78(int iParam0)
{
	if (func_66() != 0)
	{
		return;
	}
	switch (get_event_at_index(0, iParam0))
	{
		case 1327216456:
			func_342(iParam0);
			break;
		case -1651585854:
			func_343(iParam0);
			break;
		case -1985279805:
			func_344(iParam0);
			break;
		case 218595333:
			func_345(iParam0);
			break;
		case 1553659161:
			func_346(iParam0);
			break;
		case 1784289253:
			func_347(iParam0);
			break;
		case 1387172233:
			func_348(iParam0);
			break;
		case 1082572570:
			func_349(iParam0);
			func_350(iParam0);
			break;
		case -687266558:
			func_351(iParam0);
			func_352(iParam0);
			func_353(iParam0);
			break;
	}
}

void func_79(int iParam0)
{
	iVar22 = get_event_at_index(0, iParam0);
	iVar23 = 10;
	switch (iVar22)
	{
		case 1165534493:
			if (!get_event_data(0, iParam0, &uVar20, 2))
			{
				return;
			}
			func_354(&uVar20);
			break;
		case -1286831256:
			if (func_265(128))
			{
				func_269(128);
				return;
			}
			if (!get_event_data(0, iParam0, &Var5, 5))
			{
				return;
			}
			if (func_265(262144) && !Var5.f_3)
			{
				return;
			}
			iVar2 = get_ped_index_from_entity_index(Var5);
			if (network_get_player_index_from_ped(iVar2) != player_id())
			{
				return;
			}
			if (does_entity_exist(Var5.f_2))
			{
				_0x18ff3110cf47115d(Var5.f_2, 10, 0);
				iVar0 = _0x7e02e4218d916b94(Var5.f_2, _get_metaped_type(iVar2), 1);
				if (iVar0 == 0)
				{
					_0xa48e4801debdf7e4(Var5.f_2, 0);
				}
				else if (!func_355(iVar0, 1))
				{
					_0xa48e4801debdf7e4(Var5.f_2, 0);
				}
			}
			if (func_356())
			{
				return;
			}
			if (is_entity_dead(iVar2))
			{
				return;
			}
			Global_1952637->f_3482 = _0x1f714e7a9dadfc42(iVar2);
			if (&Global_1952637->f_1675.f_1[iVar23] != &Global_1952637->f_83[iVar23])
			{
				func_357(&(Global_1952637->f_1675.f_1[iVar23]), 0, 0);
			}
			if (func_265(32768))
			{
				func_358();
			}
			else
			{
				func_359(iVar2, &(Global_1952637->f_83[10]), 0, 1108822547, 1, 1, 0, 1, 0, 1, 1);
			}
			break;
		case -369170747:
			if (!get_event_data(0, iParam0, &Var10, 10))
			{
				return;
			}
			iVar1 = network_get_player_index_from_ped(get_ped_index_from_entity_index(Var10));
			if (iVar1 != player_id())
			{
			}
			else
			{
				func_361(func_360(1829295266), 1);
				if (&Global_1952637->f_1675.f_1[iVar23] != &Global_1952637->f_83[iVar23])
				{
					func_357(&(Global_1952637->f_1675.f_1[iVar23]), 0, 0);
				}
				iVar0 = _0x7e02e4218d916b94(Var10.f_1, _get_metaped_type(get_ped_index_from_entity_index(Var10)), 1);
				iVar3 = iVar0;
				if (func_355(iVar3, 1))
				{
					if (func_265(32768))
					{
						func_358();
					}
					iVar4 = func_362(iVar3);
					if (iVar4 != -2061583405 && iVar4 != -525676072)
					{
						return;
					}
					if (iVar4 == -525676072)
					{
						_0xc494c76a34266e82(Global_34, 0);
						if (add_shocking_event_for_entity(1925708505, Global_34, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1) > 0)
						{
						}
					}
					func_363(iVar3);
					func_359(player_ped_id(), iVar0, 0, func_364(iVar3), 1, 1, 0, 1, 0, 1, 1);
					if (does_entity_exist(Global_1952637->f_3482))
					{
						_0x18ff3110cf47115d(Global_1952637->f_3482, 10, 0);
					}
				}
				else
				{
					func_165(87, 0);
					func_359(player_ped_id(), &(Global_1952637->f_83[10]), 0, 1108822547, 0, 1, 0, 0, 0, 0, 1);
					func_365(Var10.f_2, Var10.f_3, Var10.f_4, Var10.f_5, Var10.f_6, Var10.f_7, Var10.f_8, Var10.f_9);
				}
			}
	}
}

void func_80(int iParam0)
{
	if (func_66() != -1)
	{
		return;
	}
	switch (get_event_at_index(0, iParam0))
	{
		case 2030961287:
			if (!get_event_data(0, iParam0, &Var0, 2))
			{
				return;
			}
			if (Var0 == func_292(Global_34))
			{
				return;
			}
			if (get_entity_model(Var0) == -1865855539)
			{
				_0x18ff3110cf47115d(Var0.f_1, 10, 0);
				_0x18ff3110cf47115d(Var0.f_1, 2, 0);
				return;
			}
			if (is_entity_a_ped(Var0) && get_ped_relationship_group_hash(get_ped_index_from_entity_index(Var0)) == 1030835986)
			{
				_0x18ff3110cf47115d(Var0.f_1, 10, 0);
				_0x18ff3110cf47115d(Var0.f_1, 2, 0);
				return;
			}
			if (_0x7e02e4218d916b94(Var0.f_1, 0, 0) != 0)
			{
				_0xa48e4801debdf7e4(Var0.f_1, 1);
			}
			break;
	}
}

void func_81(int iParam0)
{
	if (func_66() == 0)
	{
		return;
	}
	switch (get_event_at_index(0, iParam0))
	{
		case -1863021589:
			func_366(iParam0);
			break;
		case -1231347001:
			func_367(iParam0);
			break;
	}
}

void func_82(int iParam0)
{
	switch (get_event_at_index(0, iParam0))
	{
		case 1794914733:
			func_368(iParam0);
			break;
		case 353377915:
			func_369(iParam0);
			break;
		case 1208357138:
			func_370(iParam0, 0, 0);
			break;
		case 1081092949:
			func_371(iParam0);
			break;
		case 1505348054:
			func_372(iParam0);
			break;
	}
}

void func_83(int iParam0)
{
	switch (get_event_at_index(0, iParam0))
	{
		case -178091376:
			func_373(iParam0);
			break;
	}
}

void func_84(int iParam0)
{
	if (get_event_at_index(0, iParam0) != 2099179610)
	{
		return;
	}
	if (!get_event_data(0, iParam0, &Var0, 2))
	{
		return;
	}
	if (func_374(Var0.f_1))
	{
		return;
	}
	Var2.f_6 = 3;
	Var2 = Var0;
	Var2.f_1 = Var0.f_1;
	Var2.f_2 = Var0.f_1;
	if (func_177(Var0.f_1, 0))
	{
		sVar14 = func_375(Var0.f_1);
		if (!is_string_null_or_empty(sVar14))
		{
			Var2.f_3 = sVar14;
		}
		iVar15 = func_376(Var0.f_1, 1);
		if (iVar15 != 0)
		{
			Var2.f_2 = iVar15;
		}
		else
		{
			uVar16 = Var0.f_1;
			if (func_377(&uVar16))
			{
				Var2.f_2 = uVar16;
			}
		}
		_0xfd41d1d4350f6413(&Var2);
	}
	else
	{
		_0xfd41d1d4350f6413(&Var2);
	}
}

void func_85(int iParam0)
{
	if (get_event_data(0, iParam0, &uVar0, 6))
	{
		_copy_memory(Global_1951245, &uVar0, 6);
		Global_1951245->f_6 = get_game_timer();
	}
}

void func_86(int iParam0)
{
	if (func_55())
	{
		return;
	}
	if (Global_1572887->f_9)
	{
		return;
	}
	switch (get_event_at_index(0, iParam0))
	{
		case -2091944374:
			func_378(iParam0);
			break;
		case -1511724297:
			func_379(iParam0);
			break;
		case -369170747:
			func_380(iParam0);
			break;
	}
}

void func_87(int iParam0)
{
	get_event_data(0, iParam0, &iVar0, 3);
	if (func_66() == 0)
	{
	}
	if (iVar0 == Global_34)
	{
		Global_1198042 = 1;
	}
}

void func_88(int iParam0)
{
	get_event_data(0, iParam0, &Var2, 2);
	iVar0 = get_ped_index_from_entity_index(_get_entity_from_item(Var2.f_1));
	iVar1 = compendium_animal_get_sample_inventory_item(_0x1cfa0219d8e1cf25(1979337996, iVar0));
	if (does_entity_exist(iVar0))
	{
		if (func_381(iVar1, 1, 0) && func_70(func_382()) != 6)
		{
			func_165(936, 1);
			_0x6569f31a01b4c097(iVar0, 28, 1);
		}
		if (_0xcdc25355c0d65963(iVar0) || _0xcdc25355c0d65963(iVar0))
		{
			if (!func_383(938))
			{
				func_165(938, 0);
			}
		}
	}
}

void func_89(int iParam0)
{
	get_event_data(0, iParam0, &Var2, 4);
	iVar0 = get_ped_index_from_entity_index(_get_entity_from_item(Var2.f_3));
	iVar1 = -1939515319;
	if (does_entity_exist(iVar0))
	{
		if (((func_153(iVar1, 0, 0, 0) == 0 && func_70(func_382()) != 6) && Var2.f_2 == 0) && Var2.f_1 == 1677002210)
		{
			iVar6 = _0x3e593df9c2962ec6(408396114);
			set_blip_sprite(iVar6, -1646261997, false);
			_blip_set_modifier(iVar6, 845611107);
			_blip_set_modifier(iVar6, -244815569);
			func_384(937, iVar6, 1);
		}
	}
}

void func_90(int iParam0)
{
	get_event_data(0, iParam0, &Var0, 10);
	iVar10 = Var0;
	iVar11 = Var0.f_7;
	bVar13 = false;
	switch (iVar10)
	{
		case 30:
			if (does_entity_exist(Var0.f_2))
			{
				switch (iVar11)
				{
					case 0:
						if (!_0x354f689c4ffaab37(Var0.f_3))
						{
							_0x7c32191d9fb2bdea(Var0.f_3);
						}
						break;
					case 1:
						iVar12 = get_ped_index_from_entity_index(_get_entity_from_item(Var0.f_2));
						if (Var0.f_8 == 0)
						{
							bVar13 = true;
							if ((!_0x23b5e9c5160bc04f(iVar12) && !func_385(iVar12, 0)) && !func_386(iVar12))
							{
								iVar14 = _0x9f678782720349e4(iVar12);
								if (iVar14 != 0 && !_0xfbe782b3165ac8ec(iVar14))
								{
									func_387(iVar14, 0, 255, 0, 0);
								}
							}
						}
						else if (Var0.f_8 == 3)
						{
							bVar13 = true;
						}
						func_388(iVar12, _0x964000d355219fc0(iVar12), bVar13, 0);
						break;
					case 2:
						break;
					case 3:
						break;
					default:
						break;
				}
			}
			break;
		case 35:
			Global_1940144->f_23 = !Global_1940144->f_23;
			Global_1940144->f_6 = get_game_timer();
			_0xdc68829bb3f37023(get_player_index(), Global_1940144->f_23);
			break;
		case 26:
			break;
		case 34:
			if (does_entity_exist(Var0.f_2))
			{
				iVar12 = get_ped_index_from_entity_index(_get_entity_from_item(Var0.f_2));
				if (!is_entity_dead(iVar12) && _0xf8b48a361dc388ae(iVar12) == 2)
				{
					func_388(iVar12, _0x964000d355219fc0(iVar12), 1, 0);
				}
			}
			break;
		case 55:
			Global_1071686->f_28357.f_89 = 1;
			break;
		case 37:
		case 38:
		case 39:
		case 40:
			break;
		default:
			break;
	}
}

void func_91(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 10))
	{
		return;
	}
	if (Var0.f_9 == -2106738342)
	{
		Global_1940258->f_49 = get_game_timer();
		Global_1940258->f_50 = 1;
	}
}

void func_92(int iParam0)
{
	if (get_event_data(0, iParam0, &iVar0, 1))
	{
		if (!is_entity_dead(iVar0) && is_ped_human(iVar0))
		{
			switch (get_entity_model(iVar0))
			{
				case -1150462894:
				case 138961043:
				case 969427509:
					set_entity_as_mission_entity(iVar0, true, true);
					delete_ped(&iVar0);
					return;
			}
			if (!is_entity_a_mission_entity(iVar0))
			{
				Global_1951245->f_7 = iVar0;
			}
		}
	}
}

void func_93(int iParam0)
{
	if (get_event_data(0, iParam0, &iVar0, 2))
	{
		if (Global_34 == iVar0)
		{
			func_389(-1315007749, 0, 0);
		}
	}
}

void func_94(int iParam0)
{
	if (!get_event_data(0, iParam0, &vVar0, 5))
	{
		return;
	}
	if (!func_390(get_vehicle_index_from_entity_index(vVar0.z)))
	{
		return;
	}
	Global_17333.f_17 = 0;
	Global_1291734->f_581.f_282 = func_391(vVar0.y);
	Global_1291734->f_581.f_281 = get_entity_model(vVar0.y);
}

void func_95(int iParam0)
{
	if (!get_event_data(0, iParam0, &vVar0, 4))
	{
		return;
	}
	if (!func_390(get_vehicle_index_from_entity_index(vVar0.y)))
	{
		return;
	}
	if (Global_1291734->f_581.f_282 != 0)
	{
		if (vVar0.z == 1)
		{
		}
		else if (!func_392(Global_1291734->f_581.f_282, 1))
		{
			func_393(_0x5ca6bbd4a7d8145e(player_id()), 0, 1);
		}
		Global_17333.f_17 = 0;
		Global_1291734->f_581.f_282 = 0;
		Global_1291734->f_581.f_281 = 0;
	}
}

void func_96(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 6))
	{
		return;
	}
	if (Var0.f_1 != 7)
	{
		return;
	}
	if (!is_entity_a_ped(Var0.f_3))
	{
		return;
	}
	iVar6 = get_ped_index_from_entity_index(Var0.f_3);
	if (!does_entity_exist(iVar6))
	{
		return;
	}
	iVar7 = _0xad03b03737ce6810(iVar6);
	bVar8 = false;
	if (!_network_is_player_index_valid(iVar7) || !network_is_player_active(iVar7))
	{
		bVar8 = true;
	}
	else if (func_394(iVar7, 1, 0))
	{
		bVar8 = true;
	}
	Var9.f_6 = -1082130432;
	Var9 = Var0;
	Var9.f_1 = Var0.f_1;
	if (bVar8)
	{
		Var9.f_2 |= 1;
	}
	_0xf666ef30f4f0ac4e(&Var9);
}

void func_97(int iParam0)
{
	if (get_event_at_index(0, iParam0) == 1553659161)
	{
		get_event_data(0, iParam0, &Var0, 3);
		iVar3 = get_ped_index_from_entity_index(Var0.f_1);
		iVar4 = get_ped_index_from_entity_index(Var0);
		if ((iVar3 == Global_34 && !func_386(iVar4)) && !is_ped_a_player(iVar4))
		{
			func_361(func_395(-18742251, -1688922105), 1);
			func_396(iVar4);
			func_397();
		}
	}
}

void func_98(int iParam0)
{
	switch (get_event_at_index(0, iParam0))
	{
		case 1351025667:
			get_event_data(0, iParam0, &iVar0, 1);
			if (iVar0 == -1983776246)
			{
				func_165(960, 1);
			}
			break;
	}
}

void func_99(int iParam0)
{
	switch (get_event_at_index(3, iParam0))
	{
		case -1267317510:
			if (func_398())
			{
				func_399(iParam0);
			}
			set_event_flag_for_deletion(3, iParam0, 1);
			break;
		case -346212524:
			func_400(iParam0);
			set_event_flag_for_deletion(3, iParam0, 1);
			break;
	}
}

void func_100()
{
	_0x748c5f51a18cb8f0(0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_401(iVar0))
		{
			func_402(iVar0);
		}
		iVar0++;
	}
	_0x748c5f51a18cb8f0(1);
}

void func_101()
{
	iVar0 = 0;
	while (iVar0 < 140)
	{
		if (func_311(iVar0))
		{
			if (func_403(iVar0))
			{
				func_404(iVar0, 1, 350);
			}
			else
			{
				func_404(iVar0, 0, 350);
			}
			if (func_109(iVar0))
			{
				func_405(iVar0, 1);
			}
			else
			{
				func_405(iVar0, 0);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (func_406(iVar1))
		{
			if (func_407(iVar1, 0))
			{
				func_408(iVar1, 1);
			}
			else
			{
				func_408(iVar1, 0);
			}
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (func_401(iVar2))
		{
			if (func_409(iVar2, 1))
			{
				func_410(iVar2, 1);
			}
			else
			{
				func_410(iVar2, 0);
			}
			if (func_411(iVar2, 4))
			{
				func_412(iVar2, 1);
			}
			else
			{
				func_412(iVar2, 0);
			}
		}
		iVar2++;
	}
}

bool func_102()
{
	return func_413(1, 255);
}

bool func_103(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_414(bParam1, bParam2, bParam3);
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

void func_104(bool bParam0)
{
	if (!bParam0)
	{
		if (func_415())
		{
			iVar0 = func_297(func_60());
			if (func_401(iVar0) && func_416(iVar0))
			{
				func_417(iVar0);
				func_418(iVar0, func_303(iVar0));
				func_419(iVar0, 0);
			}
		}
	}
	else
	{
		if (func_66() == -1)
		{
			iVar1 = _get_bounty_for_player(player_id());
		}
		else
		{
			Var2 = { func_106(player_id()) };
			_0x4ef23e04a0c8ff51(&Var2, &iVar9);
			iVar1 = iVar9;
		}
		func_418(func_420(), iVar1);
	}
}

void func_105()
{
	if (func_66() == -1)
	{
		if (func_103(player_id(), 1, 1, 1))
		{
			if (_get_bounty_for_player(player_id()) >= get_wanted_level_threshold(1))
			{
				if (!func_109(func_108()))
				{
					func_405(func_108(), 1);
				}
			}
		}
		else if (func_109(func_108()))
		{
			if (_get_bounty_for_player(player_id()) <= 0 || func_422(func_421(func_108())) >= 4320)
			{
				func_405(func_108(), 0);
			}
		}
	}
}

struct<7> func_106(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

void func_107()
{
	if (network_is_player_active(player_id()))
	{
		if (Global_1296851->f_2.f_1 == 1)
		{
			_0x236905c700fdb54d();
			if (func_423("net_jail", 1024, &(Global_1296851->f_2)))
			{
				Global_1296851->f_2.f_1 = 2;
			}
		}
	}
}

int func_108()
{
	return Global_1893587->f_2;
}

bool func_109(int iParam0)
{
	if (!func_311(iParam0))
	{
		return false;
	}
	return func_424(iParam0, 67108864);
}

void func_110(bool bParam0, bool bParam1)
{
	iVar0 = func_425();
	bVar1 = false;
	bVar2 = Global_1940258->f_7;
	bVar3 = true;
	bVar4 = false;
	if ((iVar0 == 5 || bParam1) || _0x139efb0a71dd9011())
	{
		if (Global_1939161->f_75.f_59 != 0)
		{
			func_426(0);
		}
	}
	else if ((!bVar2 && !bParam0) && Global_1939161->f_75.f_62 == -1)
	{
		if (Global_1939161->f_75.f_59 != 0)
		{
			if (Global_1939161->f_75.f_59 != 9)
			{
				func_426(0);
			}
		}
	}
	else if (bParam0)
	{
		bVar1 = func_427(player_id());
	}
	if (Global_1939161->f_75.f_62 != -1)
	{
		if (Global_1939161->f_75.f_59 != Global_1939161->f_75.f_62)
		{
			func_426(Global_1939161->f_75.f_62);
		}
	}
	switch (Global_1939161->f_75.f_59)
	{
		case 0:
			if (iVar0 != 5)
			{
				if (func_428(player_id(), 0, 0, 1))
				{
					func_429(bVar1);
					return;
				}
				else if (bVar2)
				{
					if (func_426(1))
					{
						return;
					}
				}
			}
			switch (Global_1939161->f_75.f_60)
			{
				case 0:
					func_430();
					func_431();
					func_432(-1);
					_0x3e98ac9d8c56c62c(0);
					if (func_433(4))
					{
						func_434(0);
					}
					func_435(2);
					break;
				case 2:
					break;
			}
			break;
		case 1:
			switch (Global_1939161->f_75.f_60)
			{
				case 0:
					func_430();
					_databinding_write_data_string(Global_1939161->f_75.f_1.f_2, "LAW_UI_WITNESS");
					_databinding_write_data_bool(Global_1939161->f_75.f_1.f_1, true);
					func_436();
					func_437(&(Global_1939161->f_75.f_56));
					if (!is_player_being_arrested(get_player_index(), true))
					{
						play_sound_frontend("Witness", "HUD_Wanted_Sounds", true, 0);
					}
					if (_0x69e181772886f48b(player_id()))
					{
						Global_1939161->f_6 = _get_hud_player_crime_type(player_id());
						sVar5 = func_438(Global_1939161->f_6);
						if (Global_1939161->f_6 == -1361146315)
						{
							if (!func_383(300))
							{
								if (!func_439() && !func_440())
								{
									func_165(300, 0);
								}
							}
						}
						_databinding_write_data_int(Global_1939161->f_75.f_1.f_12, 1);
						_databinding_write_data_string(Global_1939161->f_75.f_1.f_5, sVar5);
						func_435(2);
					}
					else
					{
						if ((!func_439() && !func_383(289)) && !func_440())
						{
							func_165(289, 0);
						}
						_databinding_write_data_int(Global_1939161->f_75.f_1.f_12, 0);
						_databinding_write_data_int(Global_1939161->f_75.f_1.f_3, 0);
						_databinding_write_data_string(Global_1939161->f_75.f_1.f_4, "LAW_UI_INVESTIGATING");
						func_435(1);
					}
					break;
				case 1:
					if (_0x69e181772886f48b(player_id()) || bParam0)
					{
						_databinding_write_data_int(Global_1939161->f_75.f_1.f_12, 1);
						func_435(2);
					}
					break;
				case 2:
					iVar23 = _get_hud_player_crime_type(player_id());
					if (_0xdaefdfdb2aeece37(iVar23, 0) >= _0xdaefdfdb2aeece37(Global_1939161->f_6, 0))
					{
						Global_1939161->f_6 = iVar23;
					}
					sVar5 = func_438(Global_1939161->f_6);
					_databinding_write_data_string(Global_1939161->f_75.f_1.f_5, sVar5);
					if (_databinding_read_data_int(Global_1939161->f_75.f_1.f_3) != 1)
					{
						if ((!func_439() && !func_383(291)) && !func_440())
						{
							func_165(291, 0);
						}
						func_436();
					}
					else if ((!func_439() && !func_383(290)) && !func_440())
					{
						func_165(290, 0);
					}
					func_441();
					if (bParam0 && Global_1940258->f_9 != 1370593166)
					{
						func_429(bVar1);
						return;
					}
					break;
			}
			break;
		case 2:
			bVar4 = true;
			if (func_442())
			{
				if (func_426(5))
				{
					return;
				}
			}
			switch (Global_1939161->f_75.f_60)
			{
				case 0:
					func_430();
					func_436();
					_databinding_write_data_string(Global_1939161->f_75.f_19.f_4, "LAW_UI_CRIME_REPORTED");
					_databinding_write_data_int(Global_1939161->f_75.f_19.f_12, 0);
					_databinding_write_data_bool(Global_1939161->f_75.f_1.f_1, false);
					_databinding_write_data_bool(Global_1939161->f_75.f_19.f_1, true);
					_databinding_write_data_bool(Global_1939161->f_75.f_37.f_1, false);
					if (Global_1940258->f_12)
					{
						_0x9c5bd8c562565ce6(&Var6);
						if (Var6.f_16)
						{
							func_443();
							func_436();
							_databinding_write_data_bool(Global_1939161->f_75.f_19.f_13, true);
						}
						else if (!_databinding_read_data_bool(Global_1939161->f_75.f_19.f_14))
						{
							_databinding_write_data_bool(Global_1939161->f_75.f_19.f_14, true);
						}
					}
					else
					{
						_databinding_write_data_bool(Global_1939161->f_75.f_19.f_13, true);
					}
					func_441();
					func_437(&(Global_1939161->f_75.f_56));
					func_435(1);
					break;
				case 1:
					if (Global_1940258->f_12)
					{
						_0x9c5bd8c562565ce6(&Var6);
					}
					if (((func_444(&(Global_1939161->f_75.f_56)) > 4000 && _0x9d5c9a5a3321b128(player_id())) || Var6.f_12 == 5) || Var6.f_12 == 3)
					{
						if (func_445())
						{
							_0x3e98ac9d8c56c62c(1);
						}
						if (func_426(3))
						{
							return;
						}
					}
					break;
			}
			break;
		case 3:
			bVar4 = true;
			if (func_442())
			{
				if (func_426(5))
				{
					return;
				}
			}
			else
			{
				if (!func_445() || !Global_1940258->f_12)
				{
					if (func_426(8))
					{
						_databinding_write_data_string(Global_1939161->f_75.f_19.f_4, "LAW_UI_INVESTIGATING");
						_databinding_write_data_int(Global_1939161->f_75.f_19.f_12, 0);
						return;
					}
				}
				if (func_446())
				{
					if (func_426(4))
					{
						return;
					}
				}
			}
			switch (Global_1939161->f_75.f_60)
			{
				case 0:
					_databinding_write_data_bool(Global_1939161->f_75.f_1.f_1, false);
					_databinding_write_data_bool(Global_1939161->f_75.f_19.f_1, true);
					_databinding_write_data_bool(Global_1939161->f_75.f_37.f_1, false);
					_databinding_write_data_string(Global_1939161->f_75.f_19.f_4, "LAW_UI_INVESTIGATING");
					_databinding_write_data_int(Global_1939161->f_75.f_19.f_12, 0);
					func_437(&(Global_1939161->f_75.f_56));
					func_435(1);
					break;
				case 1:
					if (func_444(&(Global_1939161->f_75.f_56)) > 2000)
					{
						_databinding_write_data_int(Global_1939161->f_75.f_19.f_12, 1);
						if (Global_1940258->f_12)
						{
							_0x9c5bd8c562565ce6(&Var6);
						}
						if (Var6.f_16)
						{
							if (_databinding_read_data_bool(Global_1939161->f_75.f_19.f_14))
							{
								_databinding_write_data_bool(Global_1939161->f_75.f_19.f_14, false);
								_databinding_write_data_bool(Global_1939161->f_75.f_19.f_13, true);
							}
							_databinding_write_data_string(Global_1939161->f_75.f_19.f_5, func_447());
						}
						else
						{
							if (!_databinding_read_data_bool(Global_1939161->f_75.f_19.f_14))
							{
								_databinding_write_data_bool(Global_1939161->f_75.f_19.f_14, true);
								_databinding_write_data_bool(Global_1939161->f_75.f_19.f_13, false);
							}
							_databinding_write_data_string(Global_1939161->f_75.f_19.f_5, "LAW_UI_UNKNOWN_SUSPECT");
						}
						func_437(&(Global_1939161->f_75.f_56));
						func_435(2);
					}
					break;
				case 2:
					if (func_444(&(Global_1939161->f_75.f_56)) > 2000)
					{
						func_437(&(Global_1939161->f_75.f_56));
						if (Global_1940258->f_12)
						{
							_0x9c5bd8c562565ce6(&Var6);
						}
						if (Var6.f_12 == 3)
						{
							_databinding_write_data_string(Global_1939161->f_75.f_19.f_4, "LAW_UI_MOVE_ALONG");
						}
						else
						{
							_databinding_write_data_string(Global_1939161->f_75.f_19.f_4, "LAW_UI_INVESTIGATING");
						}
						_databinding_write_data_int(Global_1939161->f_75.f_19.f_12, 0);
						func_435(1);
					}
					break;
			}
			break;
		case 4:
			bVar4 = true;
			if (func_442())
			{
				if (func_426(5))
				{
					return;
				}
			}
			else if (!func_446())
			{
				if (func_426(3))
				{
					return;
				}
			}
			switch (Global_1939161->f_75.f_60)
			{
				case 0:
					func_430();
					_databinding_write_data_bool(Global_1939161->f_75.f_1.f_1, false);
					_databinding_write_data_bool(Global_1939161->f_75.f_19.f_1, true);
					_databinding_write_data_bool(Global_1939161->f_75.f_37.f_1, false);
					_databinding_write_data_bool(Global_1939161->f_75.f_19.f_14, true);
					_databinding_write_data_string(Global_1939161->f_75.f_19.f_4, "LAW_UI_INTERROGATING");
					_databinding_write_data_int(Global_1939161->f_75.f_19.f_12, 0);
					if ((!func_439() && !func_383(301)) && !func_440())
					{
						func_165(301, 0);
					}
					func_437(&(Global_1939161->f_75.f_56));
					func_435(1);
					break;
				case 1:
					if (func_444(&(Global_1939161->f_75.f_56)) > 2000)
					{
						func_437(&(Global_1939161->f_75.f_56));
					}
					break;
				case 2:
					break;
			}
			break;
		case 5:
			func_432(func_425());
			switch (Global_1939161->f_75.f_60)
			{
				case 0:
					func_430();
					func_436();
					_databinding_write_data_bool(Global_1939161->f_75.f_1.f_1, false);
					_databinding_write_data_bool(Global_1939161->f_75.f_19.f_1, false);
					_databinding_write_data_bool(Global_1939161->f_75.f_37.f_1, true);
					_databinding_write_data_bool(Global_1939161->f_75.f_37.f_15, true);
					_databinding_write_data_bool(Global_1939161->f_75.f_37.f_15, false);
					_databinding_write_data_string(Global_1939161->f_75.f_37.f_4, "");
					_databinding_write_data_string(Global_1939161->f_75.f_37.f_4, func_447());
					_databinding_write_data_int(Global_1939161->f_75.f_37.f_12, 0);
					if (!is_player_being_arrested(get_player_index(), true))
					{
						play_sound_frontend("Wanted_Spotted", "HUD_Wanted_Sounds", true, 0);
					}
					func_437(&(Global_1939161->f_75.f_56));
					func_435(1);
					break;
				case 1:
					if (func_444(&(Global_1939161->f_75.f_56)) > 4000)
					{
						if (Global_1939161->f_6 == 0)
						{
							_0x6abc50979655bee7(player_id(), &uVar24, 1);
							Global_1939161->f_6 = uVar24;
						}
						sVar5 = func_438(Global_1939161->f_6);
						_databinding_write_data_string(Global_1939161->f_75.f_37.f_5, sVar5);
						_databinding_write_data_int(Global_1939161->f_75.f_37.f_12, 1);
						func_437(&(Global_1939161->f_75.f_56));
						func_435(2);
					}
					break;
				case 2:
					if (func_444(&(Global_1939161->f_75.f_56)) > 4000)
					{
						if (func_426(6))
						{
							return;
						}
					}
					break;
			}
			break;
		case 6:
			func_443();
			if (Global_1940258->f_12)
			{
				_0x9c5bd8c562565ce6(&Var6);
				if (Var6.f_16)
				{
					func_432(func_425());
				}
			}
			switch (Global_1939161->f_75.f_60)
			{
				case 0:
					func_430();
					func_448(3);
					_0x3e98ac9d8c56c62c(1);
					_databinding_write_data_int(Global_1939161->f_75.f_37.f_12, 0);
					_databinding_write_data_bool(Global_1939161->f_75.f_1.f_1, false);
					_databinding_write_data_bool(Global_1939161->f_75.f_19.f_1, false);
					_databinding_write_data_bool(Global_1939161->f_75.f_37.f_1, true);
					func_436();
					if (_0x717da2281df90855(player_id()) > 0f)
					{
						_databinding_write_data_bool(Global_1939161->f_75.f_37.f_15, true);
						_databinding_write_data_bool(Global_1939161->f_75.f_37.f_15, false);
					}
					func_435(2);
					break;
				case 2:
					if (_0x717da2281df90855(player_id()) > 1f)
					{
						if (!func_445())
						{
							if (func_426(8))
							{
								return;
							}
						}
						else if (func_426(7))
						{
							return;
						}
					}
					break;
			}
			break;
		case 7:
			bVar4 = true;
			switch (Global_1939161->f_75.f_60)
			{
				case 0:
					func_430();
					_0x3e98ac9d8c56c62c(1);
					_databinding_write_data_bool(Global_1939161->f_75.f_1.f_1, false);
					_databinding_write_data_bool(Global_1939161->f_75.f_19.f_1, false);
					_databinding_write_data_bool(Global_1939161->f_75.f_37.f_1, true);
					_databinding_write_data_bool(Global_1939161->f_75.f_37.f_13, true);
					_databinding_write_data_int(Global_1939161->f_75.f_37.f_12, 1);
					_databinding_write_data_string(Global_1939161->f_75.f_37.f_5, "LAW_UI_LAW_SEARCHING");
					func_437(&(Global_1939161->f_75.f_56));
					func_435(2);
					break;
				case 2:
					fVar41 = _0x717da2281df90855(player_id());
					if (fVar41 <= 0f && _0x9945a3e2528a02e8(player_id()))
					{
						if (bVar1)
						{
							if (func_426(10))
							{
								return;
							}
						}
						else if (func_426(6))
						{
							return;
						}
					}
					if (!func_445() || !Global_1940258->f_12)
					{
						if (func_426(8))
						{
							return;
						}
					}
					Global_1939161->f_75.f_61 = fVar41;
					break;
			}
			break;
		case 8:
			switch (Global_1939161->f_75.f_60)
			{
				case 0:
					_0x3e98ac9d8c56c62c(0);
					if (!Global_1940258->f_12)
					{
						_databinding_write_data_bool(Global_1939161->f_75.f_1.f_16, true);
						_databinding_write_data_bool(Global_1939161->f_75.f_19.f_16, true);
						_databinding_write_data_bool(Global_1939161->f_75.f_37.f_16, true);
					}
					else
					{
						_databinding_write_data_bool(Global_1939161->f_75.f_1.f_17, true);
						_databinding_write_data_bool(Global_1939161->f_75.f_19.f_17, true);
						_databinding_write_data_bool(Global_1939161->f_75.f_37.f_17, true);
						if ((!func_439() && !func_383(297)) && !func_440())
						{
							func_165(297, 0);
						}
					}
					_0x35a33783ec3c3448(1);
					func_437(&(Global_1939161->f_75.f_56));
					func_435(2);
					break;
				case 2:
					if (func_445() && Global_1940258->f_12)
					{
						func_429(bVar1);
						if (func_449(297))
						{
							func_450(297);
						}
						return;
					}
					if (_databinding_read_data_bool(Global_1939161->f_75.f_37.f_16))
					{
						iVar42 = 10000;
					}
					else
					{
						iVar42 = 35000;
					}
					_0x39d8d7082bc34b72(iVar42);
					_0x1ad8ad999c27f44a(func_444(&(Global_1939161->f_75.f_56)));
					if (func_444(&(Global_1939161->f_75.f_56)) > iVar42)
					{
						if (func_449(297))
						{
							func_450(297);
						}
						if (!Global_1940258->f_12)
						{
							if (func_426(9))
							{
								return;
							}
						}
						else if (func_451())
						{
							return;
						}
					}
					break;
			}
			break;
		case 9:
			switch (Global_1939161->f_75.f_60)
			{
				case 0:
					func_431();
					func_437(&(Global_1939161->f_75.f_56));
					func_435(1);
					break;
				case 1:
					if (func_444(&(Global_1939161->f_75.f_56)) > 1000)
					{
						if (func_401(func_420()))
						{
							iVar43 = func_452(func_420());
							if (iVar43 > 0)
							{
								func_304(-1, -1, -1, 0, func_420(), 0);
							}
						}
						func_435(2);
					}
					break;
				case 2:
					func_426(0);
					break;
			}
			break;
		case 10:
			bVar3 = false;
			if (!bVar1)
			{
				func_429(bVar1);
				return;
			}
			switch (Global_1939161->f_75.f_60)
			{
				case 0:
					if (_0x9945a3e2528a02e8(player_id()))
					{
						func_430();
						_databinding_write_data_bool(Global_1939161->f_75.f_55, true);
						func_437(&(Global_1939161->f_75.f_56));
						func_435(1);
					}
					break;
				case 1:
					if (func_444(&(Global_1939161->f_75.f_56)) > 4000)
					{
						_databinding_write_data_bool(Global_1939161->f_75.f_55, false);
						func_435(2);
					}
					break;
			}
			break;
	}
	func_453(bVar3, bVar4);
}

void func_111()
{
	Global_1940311->f_14.f_17++;
	if (Global_1940311->f_14.f_17 >= Global_1940311->f_14.f_16)
	{
		Global_1940311->f_14.f_17 = 0;
	}
	if (Global_1940311->f_14.f_17 >= Global_1940311->f_14.f_16)
	{
		return;
	}
	if (is_thread_active(Global_1940311->f_14[Global_1940311->f_14.f_17]->f_2, false))
	{
		return;
	}
	func_454(Global_1940311->f_14.f_17);
}

void func_112()
{
	iVar0 = get_game_timer();
	if (iVar0 <= Global_17406)
	{
		func_455(1);
	}
	if (iVar0 <= Global_17393)
	{
		func_456();
	}
	switch (Global_17394)
	{
		case 1:
			if (!Global_17407)
			{
				if (!func_162(&(Global_17395[1])))
				{
					Global_17395[1] = func_457("DOCUMENT_INSPECTION_PREV_DOC", 538512052, Global_34, 2, 0, 0, 1, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					func_458(&(Global_17395[1]), &(Global_17400[1]), 1, 1);
					func_459(&(Global_17395[1]), 1310260484, 0, 1);
				}
				if (!func_162(&(Global_17395[0])))
				{
					Global_17395[0] = func_457("DOCUMENT_INSPECTION_NEXT_DOC", -914910537, Global_34, 2, 0, 0, 1, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					func_458(&(Global_17395[0]), &(Global_17400[0]), 1, 1);
					func_459(&(Global_17395[0]), 1310260484, 0, 1);
				}
			}
			if (!Global_17408)
			{
				if (!func_162(&(Global_17395[2])))
				{
					Global_17395[2] = func_457("HUD_SATCHEL", -1692620582, Global_34, 2, 0, 0, 1, 5, 1070386381, 570, 4000, 10, 1073741824, 0, -820096546, 0, 0);
					func_459(&(Global_17395[2]), 1310260484, 0, 1);
				}
			}
			if (!Global_17410)
			{
				if (!func_162(&(Global_17395[3])))
				{
					Global_17395[3] = func_457("VI_READ", -473983589, Global_34, 2, 0, 0, 1, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					func_458(&(Global_17395[3]), &(Global_17400[3]), 1, 1);
					if (!Global_17409)
					{
						func_459(&(Global_17395[3]), 1310260484, 0, 1);
					}
				}
			}
			Global_17409 = 0;
			if ((((_get_number_of_references_of_script_with_name_hash(195871429) == 0 && _get_number_of_references_of_script_with_name_hash(2006217472) == 0) && _get_number_of_references_of_script_with_name_hash(-704221704) == 0) && _get_number_of_references_of_script_with_name_hash(-369505775) == 0) && get_game_timer() >= Global_17405)
			{
				Global_17394 = 2;
			}
			break;
		case 2:
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (func_162(&(Global_17395[iVar1])))
				{
					func_163(Global_17395[iVar1], 0, 1);
				}
				iVar1++;
			}
			_0xcb9401f918cb0f75(Global_34, "GENERIC_DOCUMENT_FLIP_AVAILABLE", 0, -1);
			Global_17394 = 0;
			break;
	}
}

void func_113()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		switch ((*Global_1913674)[iVar0]->f_1)
		{
			case 4:
				if (!_0x038b1f1674f0e242(Global_34))
				{
					func_460(iVar0);
				}
				break;
			case 3:
				if (!(*Global_1913674)[iVar0]->f_4)
				{
					if ((*Global_1913674)[iVar0]->f_2 != 0)
					{
						_set_streamed_txd_as_no_longer_needed((*Global_1913674)[iVar0]->f_2);
						(*Global_1913674)[iVar0]->f_2 = 0;
					}
				}
				else if ((*Global_1913674)[iVar0]->f_3 != 0)
				{
					_0xf1e6979c0b779985(&((*Global_1913674)[iVar0]->f_3));
					(*Global_1913674)[iVar0]->f_3 = 0;
				}
				(*Global_1913674)[iVar0]->f_1 = 0;
				break;
			case 0:
				if (Global_1913674[iVar0] != 0)
				{
					(*Global_1913674)[iVar0]->f_4 = func_462(func_461(Global_1913674[iVar0], -949239683));
					if (!(*Global_1913674)[iVar0]->f_4)
					{
						if (func_463(Global_1913674[iVar0], &iVar1, 805880880, -401018458, 0, 0))
						{
							if (_does_streamed_txd_exist(iVar1))
							{
								_request_streamed_txd(iVar1, false);
								(*Global_1913674)[iVar0]->f_2 = iVar1;
							}
						}
					}
					else
					{
						iVar4 = func_464(Global_1913674[iVar0]);
						(*Global_1913674)[iVar0]->f_3 = _0xb6857100f8fd433c(iVar4, -2);
					}
					(*Global_1913674)[iVar0]->f_1 = 1;
				}
				break;
			case 1:
				if (!(*Global_1913674)[iVar0]->f_4)
				{
					if ((*Global_1913674)[iVar0]->f_2 != 0)
					{
						if (_has_streamed_txd_loaded((*Global_1913674)[iVar0]->f_2))
						{
							(*Global_1913674)[iVar0]->f_1 = 2;
						}
					}
					else
					{
						(*Global_1913674)[iVar0]->f_1 = 2;
					}
				}
				else
				{
					(*Global_1913674)[iVar0]->f_1 = 2;
				}
				break;
			case 2:
				if ((*Global_1913674)[iVar0]->f_4)
				{
					bVar5 = _0x038b1f1674f0e242(Global_34);
					if (iVar0 == 0)
					{
						if (!bVar5 || !(*Global_1913674)[iVar0]->f_5)
						{
							iVar6 = _0xbe1067cd1c9570f6((*Global_1913674)[iVar0]->f_3);
							if (iVar6 != 0)
							{
								_0x51de09a2196bd951(iVar6, -1028267229);
								if (bVar5)
								{
									(*Global_1913674)[iVar0]->f_5 = 1;
								}
							}
						}
					}
				}
				break;
		}
		iVar0++;
	}
}

bool func_114()
{
	return _get_number_of_references_of_script_with_name_hash(-310160435) > 0;
}

bool func_115(char* sParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939493->f_161)
	{
		if (are_strings_equal(&((*Global_1939493)[iVar0]->f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_116()
{
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "binoculars", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_465(Var10, 0);
}

void func_117()
{
	if (is_bit_set(&Global_1958009, 0))
	{
		set_bit(Global_1958009, 1);
		clear_bit(Global_1958009, 0);
		return;
	}
	if (!is_bit_set(&Global_1958009, 0))
	{
		clear_bit(Global_1958009, 1);
		return;
	}
}

void func_118()
{
	if (!is_bit_set(&Global_1958009, 4))
	{
		if (is_bit_set(&Global_1958009, 1))
		{
			func_466(64);
		}
	}
}

bool func_119()
{
	return _get_number_of_references_of_script_with_name_hash(-92416669) > 0;
}

void func_120()
{
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "camera_item", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_465(Var10, 0);
}

void func_121()
{
	if (func_324(&Global_1301321, 8))
	{
		func_325(Global_1301321, 4);
		func_467(Global_1301321, 8);
		return;
	}
	if (!func_324(&Global_1301321, 8))
	{
		func_467(Global_1301321, 4);
	}
}

void func_122()
{
	if (!func_324(&Global_1301321, 2))
	{
		if (func_324(&Global_1301321, 4))
		{
			func_466(131072);
		}
	}
}

bool func_123()
{
	return _get_number_of_references_of_script_with_name_hash(872480335) > 0;
}

void func_124()
{
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "net_advanced_camera", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_465(Var10, 0);
}

void func_125()
{
	func_466(2);
	func_466(4);
	func_466(8);
	func_466(16);
	func_466(32);
	func_466(32768);
	func_466(65536);
	func_466(1048576);
	func_466(128);
	func_466(256);
	func_466(512);
	func_466(1024);
	func_466(2048);
	func_466(1);
	func_466(4096);
	func_466(16384);
}

void func_126()
{
	_uiprompt_disable_prompt_type_this_frame(1);
	_uiprompt_disable_prompt_type_this_frame(3);
	_uiprompt_disable_prompt_type_this_frame(2);
	_uiprompt_disable_prompt_type_this_frame(4);
	_uiprompt_disable_prompt_type_this_frame(5);
	_uiprompt_disable_prompt_type_this_frame(12);
	_uiprompt_disable_prompt_type_this_frame(8);
	_uiprompt_disable_prompt_type_this_frame(9);
	_uiprompt_disable_prompt_type_this_frame(10);
	_uiprompt_disable_prompt_type_this_frame(11);
	_uiprompt_disable_prompt_type_this_frame(15);
}

bool func_127()
{
	return func_468(256);
}

void func_128()
{
	set_ped_reset_flag(Global_34, 129, true);
	set_ped_reset_flag(Global_34, 173, true);
	disable_control_action(2, -1304887797, false);
	disable_control_action(2, 130948705, false);
	disable_control_action(0, 1632043089, false);
	disable_control_action(2, 1623727326, false);
	disable_control_action(0, -1292666904, false);
	disable_control_action(0, 278816850, false);
	disable_control_action(0, -796643617, false);
	disable_control_action(0, -141724873, false);
	disable_control_action(0, -562475458, false);
	disable_control_action(0, 648122183, false);
	disable_control_action(0, -163964935, false);
	disable_control_action(0, 1520437207, false);
	disable_control_action(0, -640622144, false);
	disable_control_action(0, -1664638556, false);
	disable_control_action(0, -128997553, false);
	disable_control_action(0, -711536720, false);
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, -209515122, false);
	disable_control_action(0, 1101824977, false);
	disable_control_action(0, -432665970, false);
	disable_control_action(0, -349518703, false);
	disable_control_action(0, -1098542161, false);
	disable_control_action(0, -822242784, false);
	disable_control_action(0, -1722177808, false);
	disable_control_action(0, -824104112, false);
	disable_control_action(0, 1663574939, false);
	disable_control_action(0, -2128655846, false);
	disable_control_action(0, 516589524, false);
	if (is_ped_on_mount(Global_34))
	{
		iVar0 = get_mount(Global_34);
		if (!is_ped_injured(iVar0))
		{
			set_ped_reset_flag(iVar0, 53, true);
			set_ped_reset_flag(iVar0, 153, true);
			_0x06d26a96ca1bca75(iVar0, 3, 0f, 0);
		}
	}
}

bool func_129()
{
	return _get_number_of_references_of_script_with_name_hash(-458977373) > 0;
}

void func_130()
{
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "electric_lantern", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_465(Var10, 0);
}

bool func_131()
{
	if (!network_is_game_in_progress())
	{
		return false;
	}
	if (Global_1940258->f_38 == -862059856)
	{
		return true;
	}
	if (get_current_ped_weapon(Global_34, &iVar0, true, 1, false) && iVar0 == -862059856)
	{
		return true;
	}
	if (Global_1296859->f_22[Global_1212889->f_3] && !&Global_1296859->f_88[Global_1212889->f_3])
	{
		iVar1 = &Global_1296859->f_154[Global_1212889->f_3];
		iVar2 = get_player_ped(iVar1);
		if (!is_entity_dead(iVar2))
		{
			if (iVar2 != player_ped_id())
			{
				if (vdist2(Global_1296859->f_17, get_entity_coords(iVar2, true, false)) < 2500f)
				{
					if (decor_exist_on(iVar2, "DigSiteX"))
					{
						return true;
					}
				}
			}
		}
	}
	Global_1212889->f_3++;
	if (Global_1212889->f_3 >= 32)
	{
		Global_1212889->f_3 = 0;
	}
	return false;
}

bool func_132()
{
	return _get_number_of_references_of_script_with_name_hash(-689602647) > 0;
}

void func_133()
{
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "metal_detector", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_465(Var10, 0);
}

bool func_134(int iParam0, int iParam1)
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

bool func_135(int iParam0, int iParam1)
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

bool func_136(bool bParam0)
{
	return ((!bParam0 && !func_138()) && (is_screen_faded_in() || func_139(1)));
}

void func_137()
{
	if (func_423("fishing_core", 5505, Global_1903071))
	{
	}
}

bool func_138()
{
	if (is_thread_active(&Global_1903071, false))
	{
		return true;
	}
	if (_get_number_of_references_of_script_with_name_hash(-506425016) > 0)
	{
		return true;
	}
	if (func_66() == 0 && _0x1b89bc43b6e69107(-506425016, -1, 1, 0))
	{
		return true;
	}
	return false;
}

bool func_139(int iParam0)
{
	return func_324(Global_1903071->f_1, iParam0);
}

bool func_140()
{
	bVar0 = true;
	if (Global_1915715->f_20638 || Global_1940311->f_8)
	{
		bVar0 = false;
	}
	if (!func_150(bVar0, 1, 0, 1, 0, 0, 0, 0, 1))
	{
		if (&Global_1940311 == 1)
		{
		}
		return false;
	}
	if (!Global_1940311->f_2)
	{
		if (&Global_1940311 == 1)
		{
		}
		return false;
	}
	bVar1 = Global_1940311->f_5;
	Global_1940311->f_5 = 0;
	if (bVar1)
	{
		if (&Global_1940311 == 1)
		{
		}
		return false;
	}
	if (func_148())
	{
		if (&Global_1940311 == 1)
		{
		}
		return false;
	}
	return true;
}

bool func_141(int iParam0, bool bParam1)
{
	if (bParam1 && !func_162(iParam0))
	{
		return false;
	}
	iVar0 = func_469(iParam0);
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

void func_142()
{
	func_470();
}

void func_143()
{
	if (func_148())
	{
		return;
	}
	iVar4 = 1433015236;
	while (_event_manager_is_event_pending(iVar4))
	{
		if (_event_manager_peek_event(iVar4, &Var0))
		{
			switch (Var0)
			{
				case -1340543710:
					func_471(Var0, Var0.f_2);
					_event_manager_pop_event(iVar4);
					break;
				case -1203660660:
					switch (Var0.f_2)
					{
						case 290710310:
							func_472(Var0.f_3);
							break;
					}
					_event_manager_pop_event(iVar4);
					break;
				default:
					_event_manager_pop_event(iVar4);
					break;
			}
		}
	}
}

void func_144()
{
	bVar0 = func_473(0, 0, 1);
	Global_1896738->f_384 = bVar0;
}

bool func_145()
{
	if (!Global_1896738->f_383)
	{
		return false;
	}
	return true;
}

void func_146(bool bParam0)
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

int func_147()
{
	if (func_474(&(Global_1940144->f_86[3]), 1))
	{
		return 1;
	}
	return 0;
}

bool func_148()
{
	return Global_1896738->f_382;
}

var func_149()
{
	return Global_1956123->f_1;
}

bool func_150(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!bParam7 && _is_any_app_running())
	{
		return false;
	}
	iVar0 = &Global_1296859->f_154[&Global_1296859];
	iVar1 = Global_1296859->f_8;
	bVar2 = is_entity_dead(iVar1);
	bVar3 = _0xb655db7582aec805(iVar1);
	if (bVar2 || bVar3)
	{
		if (!bParam5)
		{
			return false;
		}
	}
	else
	{
		if (!bParam4)
		{
			if (_0xec7e480ff8bd0bed(Global_34))
			{
				return false;
			}
			if (_0x4912dfe492db98cd(Global_34, "inInspectionMode"))
			{
				return false;
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
				return false;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915715->f_20638 || Global_1915715->f_22504.f_1)
		{
			return false;
		}
		if (_0xd04241bbf6d03a5e(Global_34) != 0)
		{
			return false;
		}
	}
	if (func_475())
	{
		return false;
	}
	if (Global_15)
	{
		return false;
	}
	if (!bParam2 && (((Global_1940144->f_10 || Global_1940144->f_11) || Global_1940144->f_12) || Global_1940144->f_13))
	{
		return false;
	}
	if (!bParam3)
	{
		iVar4 = network_player_id_to_int();
		if (Global_1248240->f_9297 != -1)
		{
			return false;
		}
		if ((*Global_1128574)[iVar4]->f_34 & 1 != 0 && (*Global_1128574)[iVar4]->f_34 & 2 == 0)
		{
			return false;
		}
		if (Global_1130634->f_293)
		{
			return false;
		}
		if (Global_1572887->f_106.f_75 > 11 && Global_1572887->f_106.f_75 < 15)
		{
			return false;
		}
		else if (Global_1572887->f_106.f_75 > 15)
		{
			return false;
		}
	}
	if (!bParam8)
	{
		if ((_get_global_block_can_be_accessed(2) && _get_global_block_can_be_accessed(8)) && _get_global_block_can_be_accessed(9))
		{
			if ((Global_1048576 || Global_2883584) // PointerArith)
			{
				return false;
			}
			if (&Global_1048581)
			{
				return false;
			}
			if (&Global_1048585)
			{
				return false;
			}
		}
	}
	return true;
}

void func_151()
{
	if (func_324(Global_1138962->f_137.f_1, 2))
	{
		func_476(9);
	}
	else
	{
		func_476(0);
	}
}

void func_152()
{
	if (_does_thread_exist(Global_1896738->f_388))
	{
		if (is_thread_active(Global_1896738->f_388, false))
		{
			return;
		}
	}
	if (!func_148())
	{
		func_146(1);
	}
	iVar0 = func_477(1433015236, 1400, &(Global_1896738->f_388));
	switch (iVar0)
	{
		case 3:
			break;
		case 4:
			Global_1896738->f_387 = 0;
			break;
		default:
			break;
	}
}

int func_153(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_177(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_178(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_376(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_478(iParam0, 0);
	}
	if (func_479(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_480(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_481(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_480(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

void func_154()
{
	Global_1940144->f_21 = 0;
}

void func_155()
{
	if (Global_1940144->f_95)
	{
		Global_1940144->f_43 = _databinding_add_data_container_from_path("", "quick_select_satchel_shortcut");
		Global_1940144->f_43.f_1 = _databinding_add_data_bool(Global_1940144->f_43, "isAccessible", true);
	}
}

void func_156()
{
}

void func_157()
{
	if (func_66() == -1)
	{
		Global_1940144->f_47 = _databinding_add_data_container_from_path("", "quick_select_crafting_menu_shortcut");
		Global_1940144->f_47.f_1 = _databinding_add_data_bool(Global_1940144->f_47, "isAccessible", true);
	}
}

void func_158()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = iVar0;
		func_163(Global_1940144->f_86[iVar1], 1, 1);
		iVar0++;
	}
	Global_1940144->f_21 = 0;
}

bool func_159()
{
	iVar0 = func_480(0);
	if (func_482(iVar0, 1, 0, 0))
	{
		func_483(iVar0);
		return true;
	}
	return false;
}

void func_160()
{
}

void func_161()
{
	iVar0 = -1;
	if (Global_1940144->f_105 != -1)
	{
		if (!_does_thread_exist(Global_1940144->f_105.f_1) || !is_thread_active(Global_1940144->f_105.f_1, false))
		{
			func_484();
		}
		iVar0 = Global_1940144->f_105;
	}
	else if (Global_1940144->f_105.f_2 != -1)
	{
		iVar0 = Global_1940144->f_105.f_2;
	}
	bVar1 = _0xf8806ec3ff840fdc();
	if (iVar0 != -1 && !bVar1)
	{
		if (Global_1940144->f_105.f_4 > 8)
		{
			_uiprompt_disable_prompts_this_frame();
			if (iVar0 != Global_1940144->f_105.f_3 || !busyspinner_is_on())
			{
				if (busyspinner_is_on())
				{
					busyspinner_off();
				}
				_busyspinner_set_text(func_485(iVar0));
			}
		}
		Global_1940144->f_105.f_4++;
	}
	else
	{
		if (Global_1940144->f_105.f_4 > 38)
		{
			Global_1940144->f_105.f_4 = 0;
		}
		else if (Global_1940144->f_105.f_4 > 8)
		{
			Global_1940144->f_105.f_4++;
		}
		else
		{
			Global_1940144->f_105.f_4 = 0;
		}
		if (busyspinner_is_on())
		{
			if (Global_1940144->f_105.f_4 == 0 || bVar1)
			{
				busyspinner_off();
			}
			else
			{
				_uiprompt_disable_prompts_this_frame();
			}
		}
	}
	Global_1940144->f_105.f_3 = iVar0;
	Global_1940144->f_105.f_2 = -1;
}

bool func_162(int iParam0)
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

void func_163(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_162(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_469(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_486(iVar0);
	*uParam0 = 0;
}

bool func_164(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_165(int iParam0, bool bParam1)
{
	func_487(iParam0, &iVar0, &iVar1);
	if (!func_488(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_489(iVar0, iVar1);
}

void func_166(bool bParam0)
{
	func_490();
	bVar0 = func_491(1);
	if (func_493(1, 96721) != bVar0)
	{
		if (!Global_1940144->f_80.f_1)
		{
			Global_1940144->f_80.f_1 = 1;
		}
	}
	bVar0 = func_491(2);
	if (func_493(2, 96799) != bVar0)
	{
		if (!Global_1940144->f_80.f_1)
		{
			Global_1940144->f_80.f_1 = 1;
		}
	}
	bVar0 = func_491(65536);
	if (func_493(65536, 96812) != bVar0)
	{
		if (!Global_1940144->f_80.f_1)
		{
			Global_1940144->f_80.f_1 = 1;
		}
	}
	bVar0 = func_491(1048576);
	if (func_493(1048576, 96825) != bVar0)
	{
		if (!Global_1940144->f_80.f_1)
		{
			Global_1940144->f_80.f_1 = 1;
		}
	}
	bVar0 = (func_491(4) || func_491(8));
	if (!func_497())
	{
		func_498(4);
		func_498(8);
		bVar0 = false;
	}
	else
	{
		bVar1 = false;
		bVar2 = false;
		if (func_499(81053684) || func_500(4))
		{
			func_498(4);
		}
		else
		{
			bVar1 = true;
		}
		if (func_499(-525676072) || func_500(8))
		{
			func_498(8);
		}
		else
		{
			bVar2 = true;
		}
		if (bVar1 || bVar2)
		{
			if (func_172(0, func_501()))
			{
				if (!bVar0)
				{
					Global_1940144->f_80.f_1 = 1;
				}
				if (bVar1)
				{
					func_502(4);
				}
				if (bVar2)
				{
					func_502(8);
				}
			}
			else
			{
				func_498(4);
				func_498(8);
				if (bVar0)
				{
					Global_1940144->f_80.f_1 = 1;
				}
			}
		}
	}
	bVar0 = func_491(16);
	if (func_493(16, 96939) != bVar0)
	{
		if (!Global_1940144->f_80.f_1)
		{
			Global_1940144->f_80.f_1 = 1;
		}
	}
	bVar0 = func_491(256);
	if (func_493(256, 96952) != bVar0)
	{
		if (!Global_1940144->f_80.f_1)
		{
			Global_1940144->f_80.f_1 = 1;
		}
	}
	bVar0 = func_491(512);
	if (func_493(512, 96965) != bVar0)
	{
		if (!Global_1940144->f_80.f_1)
		{
			Global_1940144->f_80.f_1 = 1;
		}
	}
	bVar0 = func_491(1024);
	if (func_493(1024, 96978) != bVar0)
	{
		if (!Global_1940144->f_80.f_1)
		{
			Global_1940144->f_80.f_1 = 1;
		}
	}
	if (((((func_507() || func_508()) || func_509()) || func_510()) || func_511()) || bParam0)
	{
		bVar0 = func_491(8192);
		if (func_493(8192, 97073) != bVar0)
		{
			if (!Global_1940144->f_80.f_1)
			{
				Global_1940144->f_80.f_1 = 1;
			}
		}
		bVar0 = func_491(64);
		if (func_493(64, 97086) != bVar0)
		{
			if (!Global_1940144->f_80.f_1)
			{
				Global_1940144->f_80.f_1 = 1;
			}
		}
		bVar0 = func_491(131072);
		if (func_493(131072, 97086) != bVar0)
		{
			if (!Global_1940144->f_80.f_1)
			{
				Global_1940144->f_80.f_1 = 1;
			}
		}
		bVar0 = func_491(32);
		if (func_493(32, 97099) != bVar0)
		{
			if (!Global_1940144->f_80.f_1)
			{
				Global_1940144->f_80.f_1 = 1;
			}
		}
		bVar0 = func_491(128);
		if (func_493(128, 97112) != bVar0)
		{
			if (!Global_1940144->f_80.f_1)
			{
				Global_1940144->f_80.f_1 = 1;
			}
		}
		bVar0 = func_491(262144);
		if (func_493(262144, 97125) != bVar0)
		{
			if (!Global_1940144->f_80.f_1)
			{
				Global_1940144->f_80.f_1 = 1;
			}
		}
		bVar0 = func_491(2048);
		if (func_493(2048, 97138) != bVar0)
		{
			if (!Global_1940144->f_80.f_1)
			{
				Global_1940144->f_80.f_1 = 1;
			}
		}
		bVar0 = func_491(32768);
		if (func_493(32768, 97151) != bVar0)
		{
			if (!Global_1940144->f_80.f_1)
			{
				Global_1940144->f_80.f_1 = 1;
			}
		}
		bVar0 = func_491(4096);
		if (func_493(4096, 97164) != bVar0)
		{
			if (!Global_1940144->f_80.f_1)
			{
				Global_1940144->f_80.f_1 = 1;
			}
		}
		bVar0 = func_491(524288);
		if (func_493(524288, 97177) != bVar0)
		{
			if (!Global_1940144->f_80.f_1)
			{
				Global_1940144->f_80.f_1 = 1;
			}
		}
	}
	func_521();
}

void func_167()
{
	if ((get_frame_count() % 3) == 0 || Global_1940144->f_80)
	{
		if (func_511() || (((func_507() || func_508()) || func_509()) || func_510()))
		{
			bVar0 = true;
		}
	}
	if (!Global_1940144->f_80.f_4 && !Global_1940144->f_80)
	{
		if (bVar0)
		{
			Global_1940144->f_80.f_4 = 1;
			Global_1940144->f_80 = 0;
			Global_1940144->f_80.f_3 = get_frame_count();
		}
	}
	if (Global_1940144->f_80.f_4 || Global_1940144->f_80)
	{
		if (!Global_1940144->f_80)
		{
			if (Global_1940144->f_80.f_4)
			{
				if (func_187())
				{
					Global_1940144->f_80.f_4 = 0;
					Global_1940144->f_80 = 1;
					if (Global_1940144->f_80.f_1)
					{
						func_522(1, 1, 0);
					}
					Global_1940144->f_80.f_1 = 0;
					Global_1940144->f_80.f_2 = 0;
					Global_1940144->f_80.f_3 = get_frame_count();
				}
			}
		}
		else if (!bVar0)
		{
			if (func_159())
			{
				Global_1940144->f_80 = 0;
				Global_1940144->f_80.f_1 = 0;
				Global_1940144->f_80.f_2 = 0;
			}
		}
		else
		{
			Global_1940144->f_80.f_3 = get_frame_count();
		}
	}
}

void func_168()
{
	func_523();
	func_524();
	if (Global_1940144->f_20)
	{
		Global_1940144->f_20 = 0;
	}
	if ((Global_1940144->f_22 && !is_control_pressed(0, 255439828)) && !is_control_pressed(0, -813019446))
	{
		Global_1940144->f_22 = 0;
	}
	func_525();
	if (is_control_pressed(0, -813019446))
	{
		if (Global_1940144->f_112)
		{
			func_526(1);
		}
	}
	else if (is_control_pressed(0, 255439828))
	{
		func_526(0);
	}
	else if (func_527())
	{
		if (Global_1940144->f_112)
		{
			func_526(1);
		}
	}
	else if (func_474(&(Global_1940144->f_86[5]), 1))
	{
		func_180(Global_1940144->f_77.f_2, 1, 0, 0, 1, 0, 0);
		func_197();
	}
	else if (func_474(&(Global_1940144->f_86[6]), 1))
	{
		Global_1940144->f_70.f_2 = get_game_timer();
		func_180(Global_1940144->f_70.f_1, 0, 0, 0, 1, 0, 0);
		func_528();
	}
}

void func_169(var uParam0)
{
	if (!_databinding_is_data_id_valid(*uParam0))
	{
		*uParam0 = _databinding_add_data_container_from_path("", "quick_select");
		uParam0->f_1 = _databinding_add_data_container(*uParam0, "target_horse_info");
	}
	bVar0 = true;
	if (!func_529())
	{
		bVar0 = false;
	}
	_databinding_add_data_bool(uParam0->f_1, "visible", bVar0);
	if (!bVar0)
	{
		_databinding_add_data_string(uParam0->f_1, "horseName", "");
		_databinding_add_data_hash(uParam0->f_1, "bondingRankTexture", 0);
		_databinding_add_data_string(uParam0->f_1, "horseCoat", "");
		_databinding_add_data_int(uParam0->f_1, "horseSpeedValue", 0);
		_databinding_add_data_int(uParam0->f_1, "horseSpeedMinValue", 0);
		_databinding_add_data_int(uParam0->f_1, "horseSpeedMaxValue", 10);
		_databinding_add_data_int(uParam0->f_1, "horseSpeedCapacityValue", 0);
		_databinding_add_data_int(uParam0->f_1, "horseSpeedCapacityMinValue", 0);
		_databinding_add_data_int(uParam0->f_1, "horseSpeedCapacityMaxValue", 10);
		_databinding_add_data_int(uParam0->f_1, "horseSpeedEquipmentValue", 0);
		_databinding_add_data_int(uParam0->f_1, "horseSpeedEquipmentMinValue", 0);
		_databinding_add_data_int(uParam0->f_1, "horseSpeedEquipmentMaxValue", 10);
		_databinding_add_data_int(uParam0->f_1, "horseAccValue", 0);
		_databinding_add_data_int(uParam0->f_1, "horseAccMinValue", 0);
		_databinding_add_data_int(uParam0->f_1, "horseAccMaxValue", 10);
		_databinding_add_data_int(uParam0->f_1, "horseAccCapacityValue", 0);
		_databinding_add_data_int(uParam0->f_1, "horseAccCapacityMinValue", 0);
		_databinding_add_data_int(uParam0->f_1, "horseAccCapacityMaxValue", 10);
		_databinding_add_data_int(uParam0->f_1, "horseAccEquipmentValue", 0);
		_databinding_add_data_int(uParam0->f_1, "horseAccEquipmentMinValue", 0);
		_databinding_add_data_int(uParam0->f_1, "horseAccEquipmentMaxValue", 10);
		_databinding_add_data_string(uParam0->f_1, "horseHandling", "");
		return;
	}
	iVar1 = _0x0501d52d24ea8934(1);
	iVar2 = -1;
	if (func_530(iVar1))
	{
		iVar2 = func_531(iVar1);
	}
	iVar3 = get_entity_model(iVar1);
	iVar4 = func_532(iVar3);
	sVar5 = "";
	StringCopy(&cVar6, func_533(iVar4), 64);
	sVar5 = func_534(&cVar6);
	iVar14 = 0;
	iVar15 = func_535(iVar1);
	if (iVar2 == 0)
	{
		if (iVar15 == 0)
		{
			iVar14 = -217389439;
		}
		else if (iVar15 == 1)
		{
			iVar14 = 13992470;
		}
		else if (iVar15 == 2)
		{
			iVar14 = 396341162;
		}
		else if (iVar15 == 3)
		{
			iVar14 = 623069873;
		}
		else if (iVar15 == 4)
		{
			iVar14 = -637422489;
		}
	}
	else if (iVar15 == 0)
	{
		iVar14 = 937553910;
	}
	else if (iVar15 == 1)
	{
		iVar14 = 489732756;
	}
	else if (iVar15 == 2)
	{
		iVar14 = 195204984;
	}
	else if (iVar15 == 3)
	{
		iVar14 = -103418913;
	}
	else if (iVar15 == 4)
	{
		iVar14 = -815685893;
	}
	sVar16 = func_536(iVar4);
	_databinding_add_data_string(uParam0->f_1, "horseName", _get_label_text_2(sVar5));
	_databinding_add_data_hash(uParam0->f_1, "bondingRankTexture", iVar14);
	_databinding_add_data_string(uParam0->f_1, "horseCoat", sVar16);
	iVar17 = func_537(iVar1);
	iVar18 = iVar17 + 1;
	_databinding_add_data_int(uParam0->f_1, "horseSpeedValue", iVar18);
	_databinding_add_data_int(uParam0->f_1, "horseSpeedMinValue", 0);
	_databinding_add_data_int(uParam0->f_1, "horseSpeedMaxValue", 10);
	iVar19 = func_538(iVar1);
	iVar20 = (iVar18 + iVar19);
	iVar20 = func_539(iVar20, 0, 10);
	_databinding_add_data_int(uParam0->f_1, "horseSpeedEquipmentValue", iVar20);
	_databinding_add_data_int(uParam0->f_1, "horseSpeedEquipmentMinValue", 0);
	_databinding_add_data_int(uParam0->f_1, "horseSpeedEquipmentMaxValue", 10);
	iVar21 = iVar18 + 2;
	iVar21 = func_539(iVar21, 0, 10);
	_databinding_add_data_int(uParam0->f_1, "horseSpeedCapacityValue", iVar21);
	_databinding_add_data_int(uParam0->f_1, "horseSpeedCapacityMinValue", 0);
	_databinding_add_data_int(uParam0->f_1, "horseSpeedCapacityMaxValue", 10);
	iVar22 = func_540(iVar1);
	iVar23 = iVar22 + 1;
	_databinding_add_data_int(uParam0->f_1, "horseAccValue", iVar23);
	_databinding_add_data_int(uParam0->f_1, "horseAccMinValue", 0);
	_databinding_add_data_int(uParam0->f_1, "horseAccMaxValue", 10);
	iVar24 = func_541(iVar1);
	iVar25 = (iVar23 + iVar24);
	iVar25 = func_539(iVar25, 0, 10);
	_databinding_add_data_int(uParam0->f_1, "horseAccEquipmentValue", iVar25);
	_databinding_add_data_int(uParam0->f_1, "horseAccEquipmentMinValue", 0);
	_databinding_add_data_int(uParam0->f_1, "horseAccEquipmentMaxValue", 10);
	iVar26 = iVar23 + 2;
	iVar26 = func_539(iVar26, 0, 10);
	_databinding_add_data_int(uParam0->f_1, "horseAccCapacityValue", iVar26);
	_databinding_add_data_int(uParam0->f_1, "horseAccCapacityMinValue", 0);
	_databinding_add_data_int(uParam0->f_1, "horseAccCapacityMaxValue", 10);
	iVar27 = func_542(iVar1);
	sVar28 = func_543(iVar27);
	_databinding_add_data_string(uParam0->f_1, "horseHandling", sVar28);
}

void func_170()
{
	if (func_544())
	{
		iVar0 = _0xd04241bbf6d03a5e(Global_34);
		if (_does_scenario_point_exist(iVar0))
		{
			_databinding_write_data_bool(Global_1940144->f_43.f_1, false);
			_databinding_write_data_bool(Global_1940144->f_45.f_1, false);
		}
		else
		{
			_databinding_write_data_bool(Global_1940144->f_43.f_1, true);
			_databinding_write_data_bool(Global_1940144->f_45.f_1, true);
		}
	}
	else
	{
		if (_databinding_read_data_bool(Global_1940144->f_43.f_1) && !Global_1940144->f_95)
		{
			_databinding_write_data_bool(Global_1940144->f_43.f_1, false);
		}
		else if (!_databinding_read_data_bool(Global_1940144->f_43.f_1) && Global_1940144->f_95)
		{
			_databinding_write_data_bool(Global_1940144->f_43.f_1, true);
		}
		if (func_66() == -1)
		{
			if (_databinding_read_data_bool(Global_1940144->f_45.f_1) && !Global_1940144->f_94)
			{
				_databinding_write_data_bool(Global_1940144->f_45.f_1, false);
			}
			else if (!_databinding_read_data_bool(Global_1940144->f_45.f_1) && Global_1940144->f_94)
			{
				_databinding_write_data_bool(Global_1940144->f_45.f_1, true);
			}
		}
	}
	if (func_66() == -1)
	{
		iVar1 = -1448210800;
	}
	else
	{
		iVar1 = -2035110427;
	}
	if (_databinding_read_data_bool(Global_1940144->f_47.f_1) && !func_355(iVar1, 1))
	{
		_databinding_write_data_bool(Global_1940144->f_47.f_1, false);
	}
	else if (!_databinding_read_data_bool(Global_1940144->f_47.f_1) && func_355(iVar1, 1))
	{
		_databinding_write_data_bool(Global_1940144->f_47.f_1, true);
	}
}

void func_171(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_545(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_546(Var0);
}

bool func_172(bool bParam0, int iParam1)
{
	if ((Global_1940258->f_6 || is_ped_dead_or_dying(Global_34, true)) || is_entity_dead(Global_34))
	{
		return false;
	}
	if (func_66() == 0)
	{
		if (func_547(131072))
		{
			return false;
		}
	}
	if (!func_548(iParam1, 1))
	{
		if (func_547(1024))
		{
			return false;
		}
	}
	if (Global_1940258->f_16)
	{
		return false;
	}
	if (!func_548(iParam1, 2) && func_547(32))
	{
		return false;
	}
	if (!func_548(iParam1, 4))
	{
		if (func_547(4096))
		{
			return false;
		}
	}
	if (!func_548(iParam1, 8) && func_547(512))
	{
		return false;
	}
	if (!func_548(iParam1, 512) && !func_549(bParam0))
	{
		return false;
	}
	if (!func_548(iParam1, 262144) && !func_550(bParam0, func_548(iParam1, 524288)))
	{
		return false;
	}
	if (!func_548(iParam1, 64) && !func_551(bParam0, iParam1, 1))
	{
		return false;
	}
	if (!func_548(iParam1, 128))
	{
		if (func_135(Global_34, 1868526510) || is_ped_on_mount(Global_34))
		{
			if (bParam0)
			{
				func_552("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_548(iParam1, 16))
	{
		if (func_553(Global_34))
		{
			iVar0 = get_mount(Global_34);
			if (!func_554(iVar0, 1))
			{
				if (bParam0)
				{
					func_552("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
				}
				return false;
			}
		}
	}
	if (!func_548(iParam1, 256) && func_547(8192))
	{
		return false;
	}
	if (!func_548(iParam1, 1024) && func_547(65536))
	{
		if (bParam0)
		{
			func_552("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!func_548(iParam1, 2048))
	{
		if (func_547(32768))
		{
			return false;
		}
	}
	if (!func_548(iParam1, 4096))
	{
		if (func_547(16384))
		{
			return false;
		}
	}
	if (!func_548(iParam1, 8192))
	{
		if (!func_547(16))
		{
			return false;
		}
	}
	if (!func_548(iParam1, 67108864))
	{
		if (!func_547(268435456))
		{
			return false;
		}
	}
	if (!func_548(iParam1, 16384))
	{
		if (func_547(256))
		{
			return false;
		}
	}
	if (!func_548(iParam1, 32768))
	{
		if (func_511())
		{
			if (bParam0)
			{
				func_552("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_548(iParam1, 131072))
	{
		if (!func_547(524288))
		{
			return false;
		}
	}
	if (!func_548(iParam1, 65536))
	{
		if (!func_547(262144))
		{
			return false;
		}
	}
	if (!func_548(iParam1, 1048576))
	{
		if (!func_547(2097152))
		{
			return false;
		}
	}
	if (!func_548(iParam1, 2097152))
	{
		if (!func_547(8388608))
		{
			return false;
		}
	}
	if (!func_548(iParam1, 4194304))
	{
		if (!func_547(16777216))
		{
			return false;
		}
	}
	if (!func_548(iParam1, 8388608))
	{
		if (func_547(33554432))
		{
			return false;
		}
	}
	if (!func_548(iParam1, 16777216))
	{
		if (func_547(67108864))
		{
			return false;
		}
	}
	if (!func_548(iParam1, 33554432))
	{
		if (func_547(134217728))
		{
			return false;
		}
	}
	if (func_547(64))
	{
		return false;
	}
	else if (func_547(128))
	{
		return false;
	}
	else if (func_547(1048576))
	{
		return false;
	}
	else if (func_547(4))
	{
		return false;
	}
	if (!func_548(iParam1, 134217728))
	{
		if (func_555(256))
		{
			return false;
		}
	}
	return true;
}

bool func_173(int iParam0)
{
	if (!is_ped_injured(iParam0))
	{
		if (is_ped_on_mount(iParam0))
		{
			if (_0x4e76cb57222a00e5(iParam0) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_174()
{
	if (func_556(4))
	{
		return Global_1940258->f_21;
	}
	return func_557();
}

void func_175(int iParam0)
{
	if (Global_1940144->f_16 == iParam0 && !Global_1940144->f_17)
	{
		return;
	}
	Global_1940144->f_16 = iParam0;
	Global_1940144->f_17 = 0;
	Var3.f_9 = -1591664384;
	if (func_558("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		Var17.f_3 = -1;
		Var17.f_12 = 4;
		Var17.f_17 = 4;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_559(&Var3, iVar2, iVar0, iVar1))
			{
			}
			else if (!func_336(Var3.f_4))
			{
			}
			else if (!func_560(Var3.f_4, 1194584906) && _0x0c093c1787f18519(Var3.f_4, &Var17))
			{
				_0x227522fd59ddb7e8(func_480(0), &Var3, iParam0);
			}
			iVar2++;
		}
		func_561(iVar0);
	}
}

bool func_176()
{
	if (Global_1913694->f_1581)
	{
		disable_all_control_actions(0);
		if (func_562("simple_crafting", 1024))
		{
			Global_1913694->f_1581 = 0;
			Global_1913694->f_1582 = 1;
		}
		else if ((get_game_timer() - Global_1913694->f_1583) > 1000)
		{
			Global_1913694->f_1581 = 0;
		}
		return false;
	}
	if (func_66() == 0)
	{
		return false;
	}
	return false;
}

bool func_177(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_178(int iParam0)
{
	if (!func_177(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_179(int iParam0)
{
	iVar0 = func_461(iParam0, -949239683);
	switch (iVar0)
	{
		case -1919515848:
		case -1915958659:
		case -1337515701:
		case -809056541:
		case -273840653:
		case -262371497:
		case 89124942:
		case 238865292:
		case 845883585:
		case 999632878:
		case 1130235258:
		case 1177617310:
		case 1443104131:
		case 1451036371:
		case 1859991422:
		case 1891031775:
			return false;
		default:
			break;
	}
	if (func_560(Global_1940144->f_40, 791664616))
	{
		return false;
	}
	return true;
}

int func_180(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_563())
	{
		Global_1940311->f_10894 = iParam0;
		func_564(iParam0, 1, -142743235, 0, 0);
		return 0;
	}
	if (!func_565(iParam0, bParam4))
	{
		return 0;
	}
	if (func_566(iParam0))
	{
		return 0;
	}
	if (_0xec7e480ff8bd0bed(Global_34) && !has_anim_event_fired(Global_34, 108107462))
	{
		return 0;
	}
	bVar28 = true;
	iVar29 = 1;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (iParam0 == -418848773)
	{
		_launch_app_with_entry("player_menu", "mp_moonshine_selection");
	}
	if (func_567(iParam0))
	{
		Global_1913502 = iParam0;
		Global_1913693 = get_game_timer();
		Global_1913503 = get_game_timer() + 3000;
		return 1;
	}
	if (func_560(iParam0, -2081717885))
	{
		func_568(iParam0, Var10, Var0, uVar27, bVar28, iVar29);
	}
	else if (func_560(iParam0, -1909684001))
	{
		func_569(iParam0, Var10, Var0, bVar28, iVar29);
	}
	else if (func_560(iParam0, 587975446))
	{
		func_570(iParam0, Var10);
	}
	else if (func_560(iParam0, 566155764))
	{
		if (!func_571(iParam0))
		{
			return 0;
		}
	}
	if (func_572(iParam0, bParam5, bParam6, bParam1))
	{
		Global_1913502 = iParam0;
		Global_1913693 = get_game_timer();
		return 1;
	}
	if (func_560(iParam0, -1227898937))
	{
		Var0.f_2 = iParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_465(Var10, 1);
		iVar29 = 0;
		bVar28 = false;
	}
	else if ((func_560(iParam0, -1472964441) || func_560(iParam0, -228153877)) || func_560(iParam0, 566155764))
	{
	}
	else if (func_560(iParam0, 1919582297))
	{
		if (((func_573() || is_ped_active_in_scenario(Global_34, 1)) || _0x0c3cb2e600c8977d(Global_34, 1)) || !is_ped_on_foot(Global_34))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 1929383243:
			case 2036955137:
				StringCopy(&(Var10.f_10), "item_bait_herbivore", 32);
				break;
			case -1635450397:
			case 1831763320:
				StringCopy(&(Var10.f_10), "item_bait_predator", 32);
				break;
			case -252071901:
				StringCopy(&(Var10.f_10), "item_legendary_animal_pheromone", 32);
				break;
		}
		Var0.f_1 = iParam0;
		Var0.f_3 = bParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_465(Var10, 0);
		bVar28 = false;
	}
	else if (func_574(iParam0))
	{
		Var0.f_3 = 0;
		Var0.f_1 = iParam0;
		Var0.f_2 = 0;
		Var0 = func_575(Global_1071686->f_28357.f_11.f_67);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_465(Var10, 0);
		iVar29 = 1;
	}
	else if (func_178(iParam0) == -1037537535)
	{
		if (!func_576(iParam0))
		{
			func_552("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
			return iVar29;
		}
		iVar32 = func_362(iParam0);
		switch (iVar32)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				bVar30 = func_577();
				break;
			default:
				bVar30 = true;
				break;
		}
		if (!bVar30)
		{
			if (func_578(player_id()))
			{
				func_552("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_552("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return iVar29;
		}
		if (iVar32 == -999503751)
		{
			if (Global_1952637->f_1675 != iParam0)
			{
				func_171(20, iParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (iVar32)
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_579(iParam0, 0);
					return iVar29;
				case -2061583405:
					func_580(iParam0);
					func_171(35, 0, 0, 0, 0);
					return 1;
				case -1719060085:
					if (iParam0 == &Global_1952637->f_1675.f_1[23])
					{
						func_359(Global_34, 260271636, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						_0xcb9401f918cb0f75(Global_34, "PlayUnequipGlovesFidget", 1, 15);
						func_357(iParam0, 0, 0);
						return 1;
					}
					else
					{
						_0xcb9401f918cb0f75(Global_34, "PlayEquipGlovesFidget", 1, 15);
						func_357(iParam0, 1, 0);
					}
					break;
				case 119907797:
				case 1388798186:
					if (iParam0 == &Global_1952637->f_1675.f_1[10])
					{
						func_359(Global_34, &(Global_1952637->f_83[10]), 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						func_357(iParam0, 0, 0);
						return 1;
					}
					else
					{
						func_357(iParam0, 1, 0);
						func_581(-2061583405, 0);
						if (iVar32 == 1388798186)
						{
							func_581(119907797, 0);
						}
						else if (iVar32 == 119907797)
						{
							func_581(1388798186, 0);
						}
					}
					break;
				default:
					if (!func_560(iParam0, 160827531))
					{
					}
					else
					{
						func_579(iParam0, 0);
					}
					break;
			}
			func_359(Global_34, iParam0, 0, -358215195, 1, 1, 1, 0, 0, 1, 1);
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1259508039:
				func_219(1);
				break;
			case -727924611:
				if (func_66() != -1)
				{
				}
				else if (!func_576(iParam0))
				{
					func_552("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar30 = func_582(7, iParam0);
					bVar31 = func_582(1, iParam0);
					if (bVar31 && !bVar30)
					{
						if (does_blip_exist(Global_17332))
						{
							remove_blip(&Global_17332);
						}
						Global_17332 = _0x3e593df9c2962ec6(-1925605092);
						_blip_set_modifier(Global_17332, 673950256);
						func_552(_create_var_string(0, -1680440926, Global_17332), 10000, 0, 0, 0, 1);
					}
					else if (!func_583(7))
					{
						func_552("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar30)
					{
						if (func_585(Global_34, func_584(7), 0))
						{
							func_552("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (does_blip_exist(Global_17332))
							{
								remove_blip(&Global_17332);
							}
							Global_17332 = _0x3e593df9c2962ec6(-1925605092);
							_blip_set_modifier(Global_17332, 673950256);
							func_552(_create_var_string(0, -482898802, Global_17332), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						iVar26 = 1338309244;
						if (_get_number_of_references_of_script_with_name_hash(iVar26) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var0.f_2 = 51499045;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							func_465(Var10, 0);
						}
						Jump @2406; //curOff = 1788
						func_227();
						Jump @2406; //curOff = 1795
						if (func_576(-1838434463))
						{
							if (func_586(1, 1))
							{
								func_587(2, 1);
							}
							else if (func_588(1))
							{
								func_552("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
							}
							else if (func_589())
							{
								func_552("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
							}
							else
							{
								if (_0x424b17a7dc5c90bc(player_id()))
								{
									func_590();
								}
								else
								{
									func_552("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								}
								func_591(_0x901e0dc25080c8b9(player_id()));
							}
						}
						else if (!_0x424b17a7dc5c90bc(player_id()))
						{
							func_552("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
							func_591(_0x901e0dc25080c8b9(player_id()));
						}
						else if (func_589())
						{
							func_552("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_552("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
						}
						Jump @2406; //curOff = 2016
						if (!_is_weapon_binoculars(func_592(Global_34, 1, 0, 0)))
						{
							set_current_ped_weapon(Global_34, iParam0, false, 0, false, false);
						}
						return 1;
						Jump @2406; //curOff = 2054
						if (func_592(Global_34, 1, 0, 0) != iParam0)
						{
							set_current_ped_weapon(Global_34, iParam0, false, 0, false, false);
						}
						return 1;
						Jump @2406; //curOff = 2089
						Jump @2406; //curOff = 2092
						func_165(535, 1);
						Jump @2406; //curOff = 2103
						func_593(1);
						Jump @2406; //curOff = 2111
						_task_item_interaction(player_ped_id(), -569063887, 1928812891, 1, 0, -1082130432);
						bVar28 = false;
						return 1;
						Jump @2406; //curOff = 2146
						_launch_app_by_hash(-76766502);
						if (_get_number_of_references_of_script_with_name_hash(-76766502) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "collectors_bag", 32);
							Var10.f_14 = 1024;
							func_465(Var10, 0);
						}
						return 1;
						Jump @2406; //curOff = 2222
						_close_app_by_hash(-4058091);
						if (get_hash_of_this_script_name() == 1349139153)
						{
							_launch_app_by_hash_with_entry(1976336482, 1261159557);
						}
						else
						{
							_launch_app_by_hash(1976336482);
						}
						if (_get_number_of_references_of_script_with_name_hash(698150113) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var0.f_3 = !get_hash_of_this_script_name() != 1349139153;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "field_guide", 32);
							Var10.f_14 = 1024;
							func_465(Var10, 0);
						}
						return 1;
						Jump @2406; //curOff = 2352
						if ((*Global_1138048)[player_id()]->f_4)
						{
							func_552("NET_WCAMP_OWNER_CAMP_RUNNING", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_594();
						}
						return 1;
						Jump @2406; //curOff = 2397
						iVar29 = 0;
					}
				}
				if (bVar28)
				{
					_0xbfff81e12a745a5f();
				}
				return iVar29;
				default:
					break;
		}
	}
}

void func_181()
{
	iVar0 = get_game_timer();
	if (!func_595())
	{
		if (Global_1913504->f_2 > 0)
		{
			if ((iVar0 - Global_1913504->f_1) > Global_1913504->f_2)
			{
				func_596();
				Global_1913504->f_2 = 0;
			}
			else
			{
				return;
			}
		}
		else
		{
			return;
		}
	}
	if (!func_597())
	{
		iVar1 = 0;
		while (iVar1 < Global_1913504->f_3)
		{
			if (func_560(&(Global_1913504->f_4[iVar1]), 770992123))
			{
				func_598(&(Global_1913504->f_4[iVar1]), Global_1913504->f_4[iVar1]->f_1);
			}
			else
			{
				func_599(&(Global_1913504->f_4[iVar1]), Global_1913504->f_4[iVar1]->f_1, Global_1913504->f_4[iVar1]->f_2, Global_1913504->f_4[iVar1]->f_4, Global_1913504->f_4[iVar1]->f_3, Global_1913504->f_4[iVar1]->f_5, 0);
			}
			Global_1913504->f_4[iVar1] = 0;
			Global_1913504->f_4[iVar1]->f_1 = 0;
			iVar1++;
		}
		func_600();
	}
	if (!func_601())
	{
		if ((iVar0 - Global_1913504->f_128) > Global_1913504->f_129)
		{
			func_602(186, Global_1913504->f_130, 255, 0);
			func_603();
		}
	}
	if (!func_604())
	{
		if ((iVar0 - Global_1913504->f_125) > Global_1913504->f_126)
		{
			func_605(Global_1913504->f_127, 0, 0, 0);
			func_606();
		}
	}
	if (!func_607())
	{
		if ((iVar0 - Global_1913504->f_131) > Global_1913504->f_132)
		{
			func_608(0);
			func_609();
		}
	}
}

void func_182()
{
}

void func_183()
{
	if (Global_1957959->f_2 != -1 && !Global_1940144->f_8)
	{
		func_610(1, Global_1957959->f_2, Var0);
	}
}

void func_184()
{
	Global_1940144->f_17 = 1;
}

bool func_185()
{
	return func_491(1);
}

void func_186(int iParam0)
{
	Var3.f_9 = -1591664384;
	if (func_558("ALL EXCLUDING CLOTHING", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_559(&Var3, iVar2, iVar0, iVar1))
			{
			}
			else if ((((((is_weapon_valid(Var3.f_4) && _is_weapon_binoculars(Var3.f_4)) || Var3.f_4 == -1016714371) || Var3.f_4 == 332793555) || Var3.f_4 == -1838434463) || Var3.f_4 == 2019377485) || Var3.f_4 == -1115561122)
			{
				_0x227522fd59ddb7e8(func_480(0), &Var3, iParam0);
			}
			iVar2++;
		}
		func_561(iVar0);
	}
}

bool func_187()
{
	if (func_270(0) || func_611())
	{
		return true;
	}
	iVar0 = func_480(0);
	if (func_482(iVar0, 0, 0, 0))
	{
		func_483(iVar0);
		return true;
	}
	return false;
}

void func_188(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (_0x3d10d7179d7034af(func_480(0), iVar0, true))
	{
		return;
	}
	iVar1 = func_178(iVar0);
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (iVar1 != -1037537535)
	{
		func_612(iVar0, iParam1);
	}
	else
	{
		func_180(iVar0, 0, 0, 0, 1, 0, 0);
	}
	if (iVar1 == 2085633299)
	{
		Global_1940144->f_41 = iVar0;
	}
	else
	{
		Global_1940144->f_42 = iVar0;
	}
}

void func_189(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (_0x3d10d7179d7034af(func_480(0), iVar0, true))
	{
		if (iVar0 == 1807503187)
		{
			func_552(func_613(), 10000, 0, 0, 0, 1);
		}
		if (iVar0 == -1115561122)
		{
			func_614(1);
		}
		return;
	}
	iVar1 = func_178(iVar0);
	if (Global_1146212->f_21645[42]->f_208 && iVar1 == 2085633299)
	{
		return;
	}
	if (does_entity_exist(iParam1))
	{
	}
	if ((iVar1 != 2085633299 || Global_1940144->f_40 != iVar0) || !func_179(iVar0))
	{
		func_180(iVar0, 1, iParam1, 0, 1, 0, 0);
	}
	if (iVar1 == 2085633299)
	{
		Global_1940144->f_41 = iVar0;
	}
	else
	{
		Global_1940144->f_42 = iVar0;
	}
	iVar2 = func_480(0);
	if (!_0x3d10d7179d7034af(iVar2, iVar0, false))
	{
		Global_1903071->f_36 = iVar0;
	}
}

int func_190()
{
	iVar0 = get_player_index();
	if (_0x3ee1f7a8c32f24e1(iVar0, &uVar1, 1, 0))
	{
		return uVar1;
	}
	if (get_player_target_entity(iVar0, &uVar1) || get_entity_player_is_free_aiming_at(iVar0, &uVar1))
	{
		return uVar1;
	}
	return uVar1;
}

bool func_191(var uParam0)
{
	return uParam0->f_13;
}

void func_192(var uParam0)
{
	uParam0->f_12 = func_190();
	if (!does_entity_exist(uParam0->f_12))
	{
		return;
	}
	bVar0 = false;
	if (func_193(uParam0))
	{
		iVar1 = get_ped_index_from_entity_index(uParam0->f_12);
		uParam0->f_14 = func_535(iVar1);
		bVar0 = true;
	}
	bVar2 = false;
	if (bVar0)
	{
		if (func_615(uParam0))
		{
			bVar2 = true;
		}
	}
	else if (func_616(uParam0))
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		_hide_hud_component(-972988753);
		uParam0->f_13 = 1;
		play_sound_frontend("show_info", "Study_Sounds", true, 0);
	}
}

bool func_193(var uParam0)
{
	if (is_entity_a_ped(uParam0->f_12))
	{
		iVar0 = get_ped_index_from_entity_index(uParam0->f_12);
		if (func_386(iVar0))
		{
			iVar1 = get_entity_model(uParam0->f_12);
			if (!func_617(iVar1) && !func_618(iVar1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_194(var uParam0)
{
	iVar0 = get_ped_index_from_entity_index(uParam0->f_12);
	iVar1 = func_535(iVar0);
	if (uParam0->f_14 != iVar1)
	{
		return true;
	}
	return false;
}

void func_195(var uParam0)
{
	iVar0 = player_id();
	iVar1 = get_ped_index_from_entity_index(uParam0->f_12);
	bVar2 = false;
	if (_0x46fa0ae18f4c7fa9(iVar0) == iVar1)
	{
		bVar2 = true;
	}
	iVar3 = 937553910;
	iVar4 = func_535(iVar1);
	if (bVar2)
	{
		if (iVar4 == 0)
		{
			iVar3 = -217389439;
		}
		else if (iVar4 == 1)
		{
			iVar3 = 13992470;
		}
		else if (iVar4 == 2)
		{
			iVar3 = 396341162;
		}
		else if (iVar4 == 3)
		{
			iVar3 = 623069873;
		}
		else if (iVar4 == 4)
		{
			iVar3 = -637422489;
		}
	}
	else if (iVar4 == 1)
	{
		iVar3 = 489732756;
	}
	else if (iVar4 == 2)
	{
		iVar3 = 195204984;
	}
	else if (iVar4 == 3)
	{
		iVar3 = -103418913;
	}
	else if (iVar4 == 4)
	{
		iVar3 = -815685893;
	}
	uParam0->f_2.f_7 = _databinding_add_data_container(uParam0->f_2, "bonding");
	_databinding_add_data_hash(uParam0->f_2.f_7, "bondingRankTexture", iVar3);
}

void func_196(var uParam0)
{
	if (_is_app_active(1749944028))
	{
		_close_app_by_hash(1749944028);
	}
	if (!_is_app_active(1749944028))
	{
		_databinding_remove_data_entry(uParam0->f_1);
	}
	if (uParam0->f_13)
	{
		play_sound_frontend("hide_info", "Study_Sounds", true, 0);
	}
	uParam0->f_12 = 0;
	uParam0->f_14 = 0;
	uParam0->f_13 = 0;
	_display_hud_component(-972988753);
}

void func_197()
{
	func_163(Global_1940144->f_86[5], 1, 1);
	Global_1940144->f_77 = 0;
	Global_1940144->f_77.f_1 = 0;
	Global_1940144->f_77.f_2 = 0;
}

void func_198(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_2[iVar0] = -1;
		uParam0->f_18[iVar0] = -1f;
		iVar0++;
	}
	uParam0->f_9 = 0;
	uParam0->f_25 = 0;
	uParam0->f_16 = 0;
	uParam0->f_15 = 0;
	uParam0->f_17 = 0;
	uParam0->f_26 = 0f;
	func_619(uParam0, 0);
	func_620(uParam0, 1);
	Global_17333 = 0;
	Global_17333.f_1 = 0;
	Global_17333.f_2 = 3;
	func_621();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17333.f_4[iVar0] = 0;
		Global_17333.f_4[iVar0]->f_1 = 1;
		iVar0++;
	}
	uParam0->f_46 = 0f;
	uParam0->f_46.f_1 = 0f;
	uVar1 = 30;
	func_622(&uVar1, &(uParam0->f_46.f_2));
	uParam0->f_46.f_33 = 20;
	uParam0->f_46.f_34 = 1000;
	uParam0->f_46.f_35 = 1f;
	uParam0->f_46.f_37 = 0;
	StringCopy(&(uParam0->f_84), "default_inspection_settings", 64);
	StringCopy(&(uParam0->f_84.f_8), "DEFAULT_INSPECTION_REQUEST", 64);
	uParam0->f_84.f_16 = 0;
	uParam0->f_84.f_17 = -1;
	uParam0->f_84.f_18 = -1;
	uParam0->f_84.f_19 = 0;
	uParam0->f_84.f_43 = 0;
	uParam0->f_84.f_44 = 0;
	uParam0->f_84.f_45 = 0;
	uParam0->f_84.f_46 = 0;
	uParam0->f_84.f_47 = -1;
}

int func_199(var uParam0)
{
	return *uParam0;
}

void func_200(var uParam0)
{
	if (func_383(497))
	{
		return;
	}
	if (!func_623())
	{
		return;
	}
	if (func_439())
	{
		return;
	}
	if (func_624())
	{
		return;
	}
	func_165(497, 0);
	uParam0->f_136 = func_625(15, 0, 0, 0);
	if (!func_626(uParam0->f_136))
	{
		return;
	}
	vVar0 = { func_627(uParam0->f_136) };
	if (func_628(vVar0))
	{
		return;
	}
	if (!func_201(&(Global_1915715->f_18260[uParam0->f_136])))
	{
		Global_1915715->f_18260[uParam0->f_136] = func_629(func_202(uParam0->f_136), func_204(func_203(uParam0->f_136)), vVar0, -1);
	}
	if (&Global_1915715->f_18260[uParam0->f_136] == -1)
	{
		return;
	}
	func_630(func_202(uParam0->f_136), func_204(func_203(uParam0->f_136)), 580546400);
	func_630(func_202(uParam0->f_136), func_204(func_203(uParam0->f_136)), 847579139);
	uParam0->f_137 = get_game_timer();
	uParam0->f_135 = 0;
}

bool func_201(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_17081)
	{
		return does_blip_exist(&(Global_17081[iParam0]));
	}
	return false;
}

int func_202(int iParam0)
{
	if (!func_626(iParam0))
	{
		return -1;
	}
	if (iParam0 == 40 && func_108() == 139)
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

int func_203(int iParam0)
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

int func_204(int iParam0)
{
	if (!func_631(iParam0))
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
			iVar0 = func_632(Global_1915715->f_20646.f_1009);
			break;
	}
	return iVar0;
}

bool func_205(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < Global_17081)
	{
		if (func_633(iVar0) == iParam0 && func_634(iVar0) == iParam1)
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

void func_206(var uParam0)
{
	if (func_635(Global_34))
	{
		func_636(uParam0, 1);
	}
	else if (func_637(Global_34))
	{
		uParam0->f_138 = 1;
		func_636(uParam0, 1);
	}
	else if (func_638(&Var0))
	{
		switch (Var0)
		{
			case 2:
				iVar3 = get_entity_type(Var0.f_1);
				switch (iVar3)
				{
					case 1:
						if (!func_639())
						{
							func_165(582, 1);
						}
						break;
					case 3:
						break;
				}
				break;
			case 4:
				if (func_640(10))
				{
					return;
				}
				if (func_641())
				{
					return;
				}
				iVar2 = func_644(func_643(func_642(10f)));
				if (func_177(iVar2, 0))
				{
					func_646(952, func_645(iVar2), 1);
				}
				else
				{
					func_165(953, 1);
				}
				break;
			case 3:
				if (does_entity_exist(Var0.f_1))
				{
					if (does_entity_exist(player_ped_id()) && !is_ped_injured(player_ped_id()))
					{
						if (is_ped_on_foot(player_ped_id()) && !is_ped_human(get_ped_index_from_entity_index(Var0.f_1)))
						{
							func_165(222, 1);
						}
					}
				}
				break;
			case 6:
				func_165(938, 1);
				break;
			case 7:
				if (does_entity_exist(Var0.f_1))
				{
					if (is_entity_dead(Var0.f_1))
					{
						func_165(939, 1);
					}
				}
				break;
		}
	}
}

void func_207(var uParam0)
{
	if (!uParam0->f_138)
	{
		iVar0 = func_647(Global_34);
	}
	else
	{
		iVar0 = func_648(Global_34);
	}
	if (does_entity_exist(iVar0))
	{
		if (_0x9a100f1cf4546629(iVar0) || _0xc346a546612c49a9(iVar0))
		{
			func_649(uParam0, iVar0);
			func_636(uParam0, 2);
		}
		else
		{
			func_636(uParam0, 6);
		}
	}
}

void func_208(var uParam0)
{
	func_650(uParam0);
	if (uParam0->f_25 == 0)
	{
		func_636(uParam0, 4);
		return;
	}
	func_651(uParam0);
	func_652(uParam0, 1);
	func_653();
	_0x6a4d224fc7643941(&(uParam0->f_84));
	func_636(uParam0, 3);
}

void func_209(var uParam0)
{
	iVar0 = func_654(uParam0);
	func_455(0);
	if (func_655(uParam0))
	{
		func_656(&(uParam0->f_84), uParam0->f_84.f_43, uParam0->f_84.f_44, uParam0->f_84.f_45);
		if (_0x38c2bf94d15f464d(Global_34))
		{
			func_619(uParam0, 1);
			func_657(uParam0, iVar0);
		}
		else if (func_658(uParam0))
		{
			func_651(uParam0);
			func_659(uParam0, iVar0 + 1);
		}
		if (iVar0 >= func_660(uParam0))
		{
			if (uParam0->f_84.f_47 != -1)
			{
				func_661(&(uParam0->f_84.f_48), 0);
			}
			func_636(uParam0, 4);
		}
	}
	else
	{
		func_636(uParam0, 4);
	}
	if (!func_635(Global_34))
	{
		func_636(uParam0, 6);
	}
}

void func_210(var uParam0)
{
	bVar0 = false;
	if (uParam0->f_25 > 0 || (uParam0->f_25 >= 0 && !bVar0))
	{
		func_662(uParam0);
	}
}

void func_211(var uParam0)
{
	if (func_663(uParam0))
	{
		iVar0 = func_664(uParam0);
		iVar1 = uParam0->f_15;
		bVar2 = false;
		iVar3 = 1;
		if (func_665(get_ped_index_from_entity_index(iVar0)))
		{
			bVar2 = true;
			iVar3 = 0;
		}
		func_388(get_ped_index_from_entity_index(iVar0), iVar1, bVar2, iVar3);
		if (uParam0->f_138)
		{
			func_666(uParam0);
			func_636(uParam0, 6);
			return;
		}
		Global_1293346->f_2980 = uParam0->f_15;
		bVar4 = func_667(iVar0);
		if (func_668(iVar0))
		{
			if (func_665(get_ped_index_from_entity_index(iVar0)))
			{
				func_165(499, 0);
			}
			else if (func_355(-1733092640, 1))
			{
				func_165(944, 0);
			}
			else
			{
				func_165(500, 0);
			}
		}
		_0xd64dbc8b0424135f(iVar0, iVar1);
		if (!func_669(0) || func_670())
		{
			if (!func_671(iVar0))
			{
				iVar5 = func_672(iVar0);
				Var6.f_1 = 10;
				func_673(uParam0->f_44, uParam0->f_45, &Var6, 0);
				func_674(iVar5, &Var6, 0, 0);
			}
			iVar18 = 0;
			while (iVar18 < uParam0->f_33)
			{
				if (func_675(&(uParam0->f_33[iVar18])))
				{
					Global_1293346->f_2981 = &uParam0->f_33[iVar18];
				}
				else if (!func_676(&(uParam0->f_33[iVar18])) && !func_560(&(uParam0->f_33[iVar18]), -887064662))
				{
					if (func_560(&(uParam0->f_33[iVar18]), -1257428961))
					{
						func_165(942, 0);
					}
					else if (func_355(-1733092640, 1))
					{
						func_165(943, 0);
					}
					else
					{
						func_165(501, 0);
					}
				}
				iVar18++;
			}
			if (!bVar4)
			{
				iVar19 = 0;
				while (iVar19 < uParam0->f_33)
				{
					func_677(&(uParam0->f_33[iVar19]), 1, 0);
					iVar19++;
				}
			}
		}
		else
		{
			_telemetry_animal_skinned(uParam0->f_15, &(uParam0->f_33));
			iVar20 = 0;
			iVar32 = 0;
			while (iVar32 < uParam0->f_33)
			{
				if (!func_177(&(uParam0->f_33[iVar32]), 0))
				{
				}
				else
				{
					bVar34 = false;
					iVar33 = 0;
					while (iVar33 < uParam0->f_33)
					{
						if (&uParam0->f_33[iVar32] == &uVar21[iVar33])
						{
							bVar34 = true;
						}
						iVar33++;
					}
					if (bVar34)
					{
					}
					else
					{
						uVar21[iVar20] = &uParam0->f_33[iVar32];
						iVar20++;
						iVar36 = 0;
						iVar35 = 0;
						while (iVar35 < uParam0->f_33)
						{
							if (&uParam0->f_33[iVar32] == &uParam0->f_33[iVar35])
							{
								iVar36++;
							}
							iVar35++;
						}
						if (iVar36 > 0)
						{
							func_678(&(uParam0->f_33[iVar32]));
							func_677(&(uParam0->f_33[iVar32]), iVar36, bVar4);
							if (bVar4 || !_0x4aef1fb5b9011d75(&(uParam0->f_33[iVar32])))
							{
								func_679(&(uParam0->f_33[iVar32]), iVar36, 0, 0, 0, -897553835, 0, 0, 0, 0);
								uParam0->f_33[iVar32] = 0;
							}
						}
					}
				}
				iVar32++;
			}
			func_680();
		}
		iVar37 = _0xf8b48a361dc388ae(get_ped_index_from_entity_index(iVar0));
		func_681(get_entity_model(iVar0), &uVar38, &iVar39);
		func_682(iVar39, 1, 0);
		func_684(func_683(iVar37));
		func_685(6);
		func_636(uParam0, 6);
	}
	else if (Global_17333.f_18)
	{
		Global_17333.f_18 = 0;
		func_636(uParam0, 6);
	}
}

void func_212(var uParam0, bool bParam1)
{
	if (func_686(&(uParam0->f_84.f_48)) && func_687(&(uParam0->f_84.f_48)) >= uParam0->f_84.f_47)
	{
		func_688(&(uParam0->f_84.f_48));
		func_689(&(uParam0->f_84), 0);
	}
	if (!func_635(Global_34) || bParam1)
	{
		func_690();
		func_652(uParam0, 0);
		func_691(*uParam0);
		func_689(&(uParam0->f_84), 1);
		func_692(uParam0);
		iVar0 = _get_first_entity_ped_is_carrying(player_ped_id());
		if (does_entity_exist(iVar0))
		{
			iVar1 = _0x31fef6a20f00b963(iVar0);
			if (func_675(iVar1) && func_693(iVar1))
			{
				if (!func_383(497))
				{
					uParam0->f_135 = 1;
				}
				else
				{
					uParam0->f_135 = 0;
				}
				Global_17333.f_15 = 1;
				Global_17333.f_16 = iVar0;
			}
		}
		func_636(uParam0, 0);
	}
}

void func_213(var uParam0)
{
	Global_17333 = func_199(uParam0);
	Global_17333.f_1 = func_664(uParam0);
	if (uParam0->f_17)
	{
		set_player_may_not_enter_any_vehicle(player_id());
		_0x9f9a829c6751f3c7(player_id(), 28, 1);
		set_ped_reset_flag(Global_34, 175, true);
		set_ped_reset_flag(Global_34, 129, true);
		disable_control_action(0, -128997553, true);
		disable_control_action(0, 130948705, true);
	}
	func_694(uParam0);
}

int func_214()
{
	switch (func_66())
	{
		case 0:
			return get_player_ped(player_id());
		default:
			break;
	}
	return Global_34;
}

int func_215(int iParam0, bool bParam1)
{
	iVar0 = func_214();
	if (bParam1 && is_entity_dead(iVar0))
	{
		return -1;
	}
	return &Global_1956130;
}

bool func_216(int iParam0, bool bParam1, bool bParam2)
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

bool func_217(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2 || func_216(iParam0, 1, 1))
	{
		return func_324(Global_1956131[iParam0], iParam1);
	}
	return false;
}

void func_218()
{
	iVar0 = func_108();
	while (true)
	{
		switch (iVar0)
		{
			case 9:
				func_695(&Global_17375);
				break;
			case 84:
				func_696(&Global_17375);
				break;
			case 5:
				func_697(&Global_17375);
				break;
			case 4:
				func_698(&Global_17375);
				break;
			case 38:
				func_699(&Global_17375);
				break;
			case 59:
				func_700(&Global_17375);
				break;
			case 111:
				func_701(&Global_17375);
				break;
			case 39:
				func_702(&Global_17375);
				break;
			case 21:
				func_703(&Global_17375);
				break;
			case 22:
				func_704(&Global_17375);
				break;
			case 81:
				func_705(&Global_17375);
				break;
			case 8:
				func_706(&Global_17375);
				break;
			case 45:
				break;
			case 70:
				func_707(&Global_17375);
				break;
			case 73:
				func_708(&Global_17375);
				break;
			case 74:
				func_709(&Global_17375);
				break;
			case 16:
				func_710(&Global_17375);
				break;
			case 42:
				func_711(&Global_17375);
				break;
			case 47:
				func_712(&Global_17375);
				break;
			case 50:
				func_713(&Global_17375);
				break;
			case 12:
				func_714(&Global_17375);
				break;
			case 101:
				func_711(&Global_17375);
				break;
			case 26:
				func_715(&Global_17375);
				break;
			case 83:
				func_716(&Global_17375);
				break;
			case 121:
				func_717(&Global_17375);
				break;
			case 80:
				func_718(&Global_17375);
				break;
			case 129:
				func_719(&Global_17375);
				break;
			case 99:
				func_720(&Global_17375);
				break;
			case 85:
				func_721(&Global_17375);
				break;
			case 89:
				func_722(&Global_17375);
				break;
			case 40:
				func_723(&Global_17375);
				break;
			case 44:
				func_724(&Global_17375);
				break;
			case -1:
				func_725(&Global_17375);
				break;
			default:
				Global_17375 = 0;
				break;
		}
		if (!func_726())
		{
		}
	else
	{
		}
	}
	if (iVar0 == 45)
	{
		func_727();
	}
}

void func_219(bool bParam0)
{
	if (bParam0)
	{
		Global_1940311 = 1;
	}
	else
	{
		Global_1940311 = 2;
	}
}

void func_220()
{
	Global_1913501 = 1;
}

void func_221()
{
	_0x748c5f51a18cb8f0(0);
	iVar0 = 0;
	while (iVar0 < 40)
	{
		switch (iVar0)
		{
			case 34:
				break;
			case 30:
				func_728();
				break;
			case 32:
				func_729();
				break;
			default:
				func_730(iVar0, 1);
				func_731(iVar0);
				break;
		}
		iVar0++;
	}
	_0x748c5f51a18cb8f0(1);
}

void func_222(int iParam0, int iParam1)
{
	func_732(&(Global_1051439->f_72[iParam0]->f_49), iParam1);
}

bool func_223(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_224()
{
	return &Global_1572864;
}

int func_225()
{
	return Global_1572864->f_1;
}

bool func_226()
{
	if (func_141(&(Global_1940144->f_86[4]), 1))
	{
		return true;
	}
	if (func_733(1))
	{
		if (_is_app_active(29649618) || _is_app_running(29649618))
		{
			if (!func_686(&(Global_1051439->f_3631)))
			{
				func_661(&(Global_1051439->f_3631), 0);
			}
			if (func_734(&(Global_1051439->f_3631)) > 10000f)
			{
				func_735(1);
				func_736(0);
				func_688(&(Global_1051439->f_3631));
			}
			if (func_237())
			{
				Global_1915715->f_22504.f_1 = 0;
			}
			return false;
		}
		return true;
	}
	return false;
}

void func_227()
{
	if (func_737())
	{
		return;
	}
	if (func_733(8))
	{
		switch (Global_1051439->f_3629)
		{
			case 0:
				if (func_733(16))
				{
					if (is_ped_using_any_scenario(Global_34))
					{
						_0xf1c03a5352243a30(Global_34);
						clear_ped_tasks(Global_34, 1, 0);
					}
					func_735(16);
				}
				func_738(1);
				break;
			case 1:
				if (is_ped_using_any_scenario(Global_34))
				{
				}
				else
				{
					func_735(8);
					func_738(0);
				}
		}
		return;
	}
	if (func_237())
	{
		_task_item_interaction(player_ped_id(), 1807503187, -2005122350, 1, 0, -1082130432);
		Global_1915715->f_22504.f_1 = 1;
		Global_1051439->f_43 = 0;
		func_739();
	}
	else
	{
		iVar0 = func_741(func_740());
		if (iVar0 != -1)
		{
			func_552(func_613(), 10000, 0, 0, 0, 1);
			Global_1051439->f_3628 = 0;
			Global_1051439->f_3629 = 0;
			func_736(0);
			func_742(-1);
		}
	}
}

void func_228()
{
	if (!func_544())
	{
		return;
	}
	bVar0 = true;
	if (func_270(1))
	{
		bVar0 = false;
	}
	if (Global_1051439->f_3725 && (_0x149a2751ab66ac02(Global_1296859->f_15) == 1 || !func_743(Global_1296859->f_15)))
	{
		bVar0 = false;
	}
	if (Global_1051439->f_3718 != 0)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		_0x236905c700fdb54d();
	}
}

void func_229()
{
	if (func_744() || func_641())
	{
		return;
	}
	if (!Global_1051439->f_3255)
	{
		if (((Global_1915715->f_20637 || Global_1915715->f_22504.f_2) && !Global_1940258->f_6) && !Global_13)
		{
			if (!func_745() == 9 || Global_1915715->f_20645)
			{
				if (func_746(Global_1915715->f_20241) || func_747(Global_1915715->f_20241))
				{
					_hide_hud_component(1422092402);
				}
				_hide_hud_component(-1347445791);
				func_748(1);
				Global_1051439->f_3255 = 1;
			}
		}
	}
	else if (((!(Global_1915715->f_20637 || Global_1915715->f_22504.f_2) || Global_1940258->f_6) || Global_13) || (func_745() == 9 && !Global_1915715->f_20645))
	{
		_display_hud_component(1422092402);
		_display_hud_component(-1347445791);
		func_748(0);
		Global_1051439->f_3255 = 0;
	}
}

void func_230()
{
	if (func_749())
	{
		if (!func_750(iLocal_22, &iVar0))
		{
			func_751();
			return;
		}
		if (func_752(iVar0))
		{
			return;
		}
		if (func_753(iLocal_22))
		{
			sVar1 = func_754(iLocal_22);
			if (!_text_database_has_loaded(sVar1))
			{
				if (!_0x3cf96e16265b7dc8(sVar1))
				{
					_text_database_request(sVar1);
				}
				return;
			}
		}
		switch (iLocal_22)
		{
			case 10:
				func_755(iVar0, "CALL_OUT_GENERAL", 0);
				break;
			case 38:
				switch (get_random_int_in_range(0, 3))
				{
					case 0:
					case 1:
						func_755(iVar0, "CALL_OUT_GENERAL", 0);
						break;
					case 2:
						if (is_ped_male(Global_34))
						{
							func_755(iVar0, "CALL_OUT_MALE", 0);
						}
						else
						{
							func_755(iVar0, "CALL_OUT_FEMALE", 0);
						}
						break;
				}
				break;
			case 15:
				if (func_756(7))
				{
					switch (get_random_int_in_range(0, 2))
					{
						case 0:
							func_755(iVar0, "TRAPP_CALLOUT", 1);
							break;
						case 1:
							func_755(iVar0, "CALL_OUT_GENERAL", 0);
							break;
					}
				}
				break;
			case 39:
				if (func_756(7))
				{
					switch (get_random_int_in_range(0, 2))
					{
						case 0:
							func_755(iVar0, "NATUR_GREETCALL", 1);
							break;
						case 1:
							func_755(iVar0, "CALL_OUT_GENERAL", 0);
							break;
					}
				}
				break;
			case 14:
				switch (get_random_int_in_range(0, 4))
				{
					case 0:
						func_755(iVar0, "CALL_OUT_BAIT", 0);
						break;
					case 1:
						func_755(iVar0, "CALL_OUT_FISHING_EQUIPMENT", 0);
						break;
					case 2:
						func_755(iVar0, "CALL_OUT_NEUTRAL", 0);
						break;
					case 3:
						if (is_ped_male(Global_34))
						{
							func_755(iVar0, "CALL_OUT_MALE", 0);
						}
						else
						{
							func_755(iVar0, "CALL_OUT_NEUTRAL", 0);
						}
						break;
				}
				break;
		}
		func_751();
	}
}

void func_231()
{
	if (Global_1051439->f_3743 == -1)
	{
		Global_1051439->f_3743 = 0;
	}
	else
	{
		Global_1051439->f_3743++;
		if (Global_1051439->f_3743 == 180)
		{
			Global_1051439->f_3743 = 0;
		}
	}
	iVar0 = func_203(Global_1051439->f_3743);
	if (iVar0 == -1)
	{
		return;
	}
	func_757(Global_1051439->f_3743, iVar0);
	bVar1 = ((func_758(iVar0) || func_759(func_202(Global_1051439->f_3743), 255)) || func_760(Global_1051439->f_3743) == 1);
	iVar2 = func_761(Global_1051439->f_3743);
	bVar1 = ((bVar1 || !_unlock_is_unlocked(iVar2)) || !_unlock_is_visible(iVar2));
	if (bVar1)
	{
		if (&Global_1051439->f_3745[iVar0] == Global_1051439->f_3743)
		{
			func_762(Global_1051439->f_3745[iVar0]);
			func_763(Global_1051439->f_3745[iVar0]);
		}
	}
	else
	{
		vVar3 = { 0f, 0f, 0f };
		if (func_764(Global_1051439->f_3743, &uVar7, &uVar6, &vVar3) && !func_628(vVar3))
		{
			if (&Global_1051439->f_3745[iVar0] == -1 || func_203(&(Global_1051439->f_3745[iVar0])) != iVar0)
			{
				Global_1051439->f_3745[iVar0] = Global_1051439->f_3743;
				Global_1051439->f_3745[iVar0]->f_1 = { vVar3 };
				Global_1051439->f_3745[iVar0]->f_9 = 0;
			}
			else if (&Global_1051439->f_3745[iVar0] == Global_1051439->f_3743)
			{
			}
			else if (vdist2(func_62(), vVar3) < vdist2(func_62(), Global_1051439->f_3745[iVar0]->f_1))
			{
				func_762(Global_1051439->f_3745[iVar0]);
				Global_1051439->f_3745[iVar0] = Global_1051439->f_3743;
				Global_1051439->f_3745[iVar0]->f_1 = { vVar3 };
				Global_1051439->f_3745[iVar0]->f_9 = 0;
			}
		}
	}
	if (Global_1051439->f_3744 == -1)
	{
		Global_1051439->f_3744 = 0;
	}
	iVar8 = Global_1051439->f_3744 + 1;
	if (iVar8 == 40 || iVar8 == -1)
	{
		iVar8 = 0;
	}
	while (iVar8 != Global_1051439->f_3744)
	{
		if (vdist2(Global_1051439->f_3745[iVar8]->f_1, func_62()) < func_765(iVar8, 1))
		{
			Global_1051439->f_3744 = iVar8;
		}
		else
		{
			iVar8++;
			if (iVar8 == 40)
			{
				iVar8 = 0;
			}
		}
	}
	func_766(Global_1051439->f_3745[Global_1051439->f_3744], Global_1051439->f_3744);
	func_767(Global_1051439->f_3744);
	if (Global_1051439->f_3718.f_1 != -1)
	{
		func_768(&(Global_1051439->f_3745[Global_1051439->f_3718.f_1]));
	}
	else if (func_769())
	{
		iVar9 = 0;
		while (iVar9 < 40)
		{
			func_768(&(Global_1051439->f_3745[iVar9]));
			if (Global_1051439->f_3718.f_1 != -1)
			{
			}
			else
			{
				iVar9++;
			}
		}
	}
}

int func_232(int iParam0, int iParam1)
{
	iVar0 = func_203(iParam0);
	if (!func_770(iParam0, iVar0) || func_772(iParam0, iVar0, ((iParam1 == -1 || iParam1 != func_108()) || !func_771(func_108()))))
	{
		if (func_773(iParam0))
		{
			func_774(Global_1915715->f_18260[iParam0], 0);
			Global_1915715->f_18260[iParam0]->f_5 = 0;
		}
		return 0;
	}
	bVar1 = false;
	if (!func_773(iParam0))
	{
		Global_1915715->f_18260[iParam0] = func_775(iVar0, iParam0, iParam1);
		if (&Global_1915715->f_18260[iParam0] != -1)
		{
			iVar2 = func_204(iVar0);
			if (iVar0 == 9)
			{
				iVar2 = func_776(iParam0, iVar0);
			}
			if (iVar2 != 0)
			{
				Global_1915715->f_18260[iParam0]->f_1 = iVar2;
				func_778(&(Global_1915715->f_18260[iParam0]), func_777(iVar2));
			}
			if (iVar0 == 15)
			{
				func_780(&(Global_1915715->f_18260[iParam0]), func_779(iVar0));
			}
			bVar1 = true;
		}
		func_781(iParam0, 16);
		func_781(iParam0, 64);
		func_781(iParam0, 128);
		func_781(iParam0, -2147483648);
	}
	else
	{
		bVar1 = true;
	}
	func_782(iParam0);
	if (bVar1)
	{
		if (func_783(&(Global_1915715->f_18260[iParam0])) && !Global_1915715->f_18260[iParam0]->f_5)
		{
			func_784(&(Global_1915715->f_18260[iParam0]), -1025871137);
			Global_1915715->f_18260[iParam0]->f_5 = 1;
		}
		if (func_785(&(Global_1915715->f_18260[iParam0])) && !Global_1915715->f_18260[iParam0]->f_5)
		{
			if (!(Global_1915715->f_18260[iParam0]->f_6 != -1 && !Global_1915715->f_18260[iParam0]->f_8) && !func_786(iParam0, 8))
			{
				if (iParam1 == func_202(iParam0) && func_787(&(Global_1915715->f_18260[iParam0]), iParam1))
				{
					Global_1915715->f_18260[iParam0]->f_5 = 1;
				}
			}
		}
		func_788(iParam0, iVar0);
	}
	return 1;
}

void func_233()
{
	iVar0 = 1037810546;
	if (Global_1051439->f_4466.f_5 == -1)
	{
		if (!func_177(Global_1051439->f_4466.f_3, 0) && Global_1051439->f_4466.f_4 == 0)
		{
			func_789(0);
			return;
		}
	}
	if (!func_790())
	{
		func_789(0);
		return;
	}
	if (!func_791())
	{
		func_792(0);
		return;
	}
	if (!_can_launch_app_by_hash(iVar0))
	{
		return;
	}
	if (Global_1051439->f_4466.f_1 && !_is_app_running(iVar0))
	{
		func_792(1);
		return;
	}
	else
	{
		if (Global_1051439->f_4466.f_2 == 0)
		{
			Var1.f_2 = 0;
			Var1.f_3 = get_hash_key("SHOP_YES");
			Var1.f_7 = get_hash_key("SHOP_NO");
			Var1.f_3.f_3 = 0;
			func_793(&Var1);
			if (Global_1051439->f_4466.f_5 != -1)
			{
				iVar20 = Global_1051439->f_4466.f_5;
			}
			else if (Global_1051439->f_4466.f_3 != 0)
			{
				iVar20 = func_795(Global_1051439->f_4466.f_3, func_794(Global_1051439->f_4466.f_3), 1, 0, 1);
			}
			else
			{
				iVar20 = func_797(func_796(Global_1051439->f_4466.f_4, -570078785, 0, 1));
			}
			if (iVar20 == 1)
			{
				Global_1051439->f_4466.f_2 = func_798(&Var1, "GLOBAL_ALERT_ALT", _create_var_string(2, "SHOP_GOLD_STORE_ALERT_S", iVar20), 0, 1);
			}
			else
			{
				Global_1051439->f_4466.f_2 = func_798(&Var1, "GLOBAL_ALERT_ALT", _create_var_string(2, "SHOP_GOLD_STORE_ALERT", iVar20), 0, 1);
			}
		}
		if (is_control_just_pressed(2, -186823577))
		{
			_0x00a15b94cba4f76f(Global_1051439->f_4466.f_2);
			Global_1051439->f_4466.f_2 = 0;
			iVar21 = _launch_app_by_hash(iVar0);
			if (iVar21 == 1 || iVar21 == 2)
			{
				return;
			}
			else
			{
				set_no_loading_screen(true);
				do_screen_fade_out(0);
				Global_1051439->f_4466.f_1 = 1;
			}
			iVar22 = func_799();
			iVar23 = func_800();
			bVar24 = func_801(Global_1051439->f_4466.f_3, 1) > _0x32c90cdfaf40514c();
			if (iVar22 != 0 && iVar23 != 0)
			{
				_0x536b6025e94ac48f(iVar22, iVar23, Global_1051439->f_4466.f_3, bVar24);
			}
		}
		else if (is_control_just_pressed(2, 217814591))
		{
			_0x00a15b94cba4f76f(Global_1051439->f_4466.f_2);
			Global_1051439->f_4466.f_2 = 0;
			func_789(0);
			return;
		}
	}
}

void func_234()
{
	iVar0 = func_203(Global_1051439->f_4678);
	if (Global_1051439->f_4678 != -1)
	{
		if (((Global_1051439->f_72[iVar0]->f_18 != Global_1051439->f_4678 || func_786(Global_1051439->f_4678, 1)) || func_769()) || func_734(&(Global_1051439->f_4679)) > 20f)
		{
			Global_1051439->f_4678 = -1;
			func_688(&(Global_1051439->f_4679));
			if (is_screen_faded_out() || is_screen_fading_out())
			{
				set_player_control(player_id(), true, 0, false);
				do_screen_fade_in(500);
			}
		}
		else if (Global_1915715->f_20241.f_1 != Global_1051439->f_4678)
		{
			set_ped_reset_flag(Global_34, 295, true);
			if (func_148())
			{
				func_802();
				return;
			}
			if (_is_app_active(29649618) || _is_app_running(29649618))
			{
				_close_app_by_hash(29649618);
				return;
			}
			if (func_511())
			{
				func_803();
				return;
			}
			if (_is_ped_carrying(Global_34) || func_804(Global_34))
			{
				iVar1 = _get_first_entity_ped_is_carrying(Global_34);
				if (does_entity_exist(iVar1))
				{
					_0xed00d72f81cf7278(iVar1, 0, 0);
				}
				return;
			}
			if (func_635(Global_34))
			{
				return;
			}
			if (is_ped_in_any_vehicle(Global_34, false))
			{
				if (!func_805(Global_34, -828834893))
				{
					task_leave_any_vehicle(Global_34, 0, 0);
				}
				return;
			}
			if (is_ped_on_mount(Global_34))
			{
				if (!func_805(Global_34, 501393341))
				{
					task_dismount_animal(Global_34, 0, 0, 0, 0, 0);
				}
				return;
			}
			if (is_screen_faded_out())
			{
				if (func_806(Global_1051439->f_4678, &vVar2))
				{
					func_807(Global_34, vVar2, 0f, 2, 1073741824);
				}
			}
			else if (!is_screen_fading_out())
			{
				set_player_control(player_id(), false, 256, false);
				do_screen_fade_out(500);
			}
		}
	}
}

void func_235(var uParam0)
{
	if (Global_1051439->f_3262 <= 12)
	{
		if ((Global_1051439->f_3262 % 4) == 0)
		{
			if ((((((((_unlock_is_unlocked(func_761(Global_1915715->f_20241.f_1)) && _0xcb690f680a3ea971(Global_34, 7)) && func_592(Global_34, 1, 0, 0) != -862059856) && Global_1915715->f_20241 != 9) && Global_1915715->f_20241 != 18) && Global_1915715->f_20241 != 28) && Global_1915715->f_20241 != 14) && Global_1915715->f_20241 != 29) && Global_1915715->f_20241 != 27)
			{
				*uParam0 |= 1024;
			}
			else
			{
				*uParam0 = (*uParam0 - *uParam0 & 1024);
			}
		}
	}
	else
	{
		Global_1051439->f_3262 = 0;
		if (&Global_1296859->f_88[&Global_1296859])
		{
			*uParam0 |= 8;
		}
		else
		{
			*uParam0 = (*uParam0 - *uParam0 & 8);
		}
		if (func_103(Global_1296859->f_10, 1, 0, 1) && Global_1915715->f_20241 != 37)
		{
			*uParam0 |= 4;
		}
		else
		{
			*uParam0 = (*uParam0 - *uParam0 & 4);
		}
		if (((func_808(&uVar0) && !func_809(Global_1915715->f_20241)) && !func_810(Global_1915715->f_20241)) && !Global_1956123->f_1)
		{
			*uParam0 |= 16384;
		}
		else
		{
			*uParam0 = (*uParam0 - *uParam0 & 16384);
		}
		if (Global_1915715->f_20241 == 29)
		{
			if (_0x0de0944eccb3df5d(Global_34) || is_explosion_in_sphere(35, get_entity_coords(Global_34, true, false), 5f))
			{
				*uParam0 |= 32768;
			}
			else
			{
				*uParam0 = (*uParam0 - *uParam0 & 32768);
			}
		}
		if (func_811(Global_1296859->f_10, 10000) && Global_1915715->f_20241 != 37)
		{
			*uParam0 |= 256;
		}
		else
		{
			*uParam0 = (*uParam0 - *uParam0 & 256);
		}
		if (func_812() || (Global_1915715->f_20241 == 37 && func_326(func_382())))
		{
			*uParam0 |= 4096;
		}
		else
		{
			*uParam0 = (*uParam0 - *uParam0 & 4096);
		}
		if (does_entity_exist(Global_1296859->f_8))
		{
			if (_is_ped_hogtied(Global_1296859->f_8))
			{
				*uParam0 |= 64;
			}
			else
			{
				*uParam0 = (*uParam0 - *uParam0 & 64);
			}
		}
		if (func_813())
		{
			*uParam0 |= 8192;
		}
		else
		{
			*uParam0 = (*uParam0 - *uParam0 & 8192);
		}
		if (_is_ped_carrying(Global_1296859->f_8))
		{
			*uParam0 |= 128;
		}
		else
		{
			*uParam0 = (*uParam0 - *uParam0 & 128);
		}
		if (func_814() && !func_815())
		{
			*uParam0 |= 2048;
		}
		else
		{
			*uParam0 = (*uParam0 - *uParam0 & 2048);
		}
	}
	Global_1051439->f_3262++;
}

bool func_236(var uParam0)
{
	if (Global_1051439->f_41 < 1)
	{
		*uParam0 = -1;
		return false;
	}
	*uParam0 = Global_1051439[Global_1051439->f_42];
	Global_1051439->f_42++;
	if (Global_1051439->f_42 >= Global_1051439->f_41)
	{
		Global_1051439->f_42 = 0;
	}
	return true;
}

bool func_237()
{
	return Global_1915715->f_22504;
}

void func_238(bool bParam0)
{
	if (!(bParam0 && Global_1915715->f_22504))
	{
		if (bParam0)
		{
			_0x6a564540fac12211(2, 1807503187);
		}
		else
		{
			_0x766315a564594401(2, 1807503187, 0);
		}
	}
	Global_1915715->f_22504 = bParam0;
}

void func_239()
{
	if (!func_816(34))
	{
		func_238(0);
		if (func_817())
		{
			if (!func_818(34))
			{
			}
		}
	}
	else
	{
		iVar0 = func_741(func_740());
		if (iVar0 != -1)
		{
			func_742(iVar0);
			func_238(0);
		}
		else
		{
			func_238(1);
		}
	}
}

void func_240()
{
	if ((Global_1051439->f_3711 < 0 || Global_1051439->f_3711 == 4) || &Global_1051439->f_3634[Global_1051439->f_3711] == -1)
	{
		Global_1051439->f_3711 = 0;
	}
	iVar3 = Global_1051439->f_3711;
	if (&Global_1051439->f_3634[iVar3] != -1)
	{
		func_757(&(Global_1051439->f_3634[iVar3]), 30);
		switch (Global_1051439->f_3634[iVar3]->f_1)
		{
			case 0:
				func_819(iVar3, 1);
				break;
			case 1:
				if (!does_entity_exist(Global_1051439->f_3634[iVar3]->f_8) || !does_entity_exist(Global_1051439->f_3634[iVar3]->f_7))
				{
					if (&Global_1051439->f_3745[30] != &Global_1051439->f_3634[iVar3])
					{
					}
					else if (!does_entity_exist(Global_1051439->f_3745[30]->f_4))
					{
					}
					else
					{
						Global_1051439->f_3634[iVar3]->f_7 = Global_1051439->f_3745[30]->f_4;
						Global_1051439->f_3634[iVar3]->f_8 = Global_1051439->f_3745[30]->f_5;
					}
				}
				else
				{
					iVar0 = Global_1051439->f_3634[iVar3]->f_8;
					if (!_0x88ad6cc10d8d35b2(Global_1051439->f_3634[iVar3]->f_7))
					{
						set_entity_as_mission_entity(Global_1051439->f_3634[iVar3]->f_7, true, false);
					}
					func_819(iVar3, 2);
				}
				break;
			case 2:
				if (Global_1051439->f_3634[iVar3]->f_9 == -1)
				{
					func_819(iVar3, 3);
				}
				else if (!does_entity_exist(Global_1051439->f_3634[iVar3]->f_15) || !does_entity_exist(Global_1051439->f_3634[iVar3]->f_14))
				{
					iVar2 = func_761(Global_1051439->f_3634[iVar3]->f_9);
					if (!_unlock_is_unlocked(iVar2) || !_unlock_is_visible(iVar2))
					{
						func_819(iVar3, 3);
					}
					else if (&Global_1051439->f_3745[31] != Global_1051439->f_3634[iVar3]->f_9)
					{
					}
					else if (!does_entity_exist(Global_1051439->f_3745[31]->f_4))
					{
					}
					else
					{
						Global_1051439->f_3634[iVar3]->f_14 = Global_1051439->f_3745[31]->f_4;
						Global_1051439->f_3634[iVar3]->f_15 = Global_1051439->f_3745[31]->f_5;
					}
				}
				else
				{
					if (does_entity_exist(Global_1051439->f_3634[iVar3]->f_15))
					{
						iVar0 = Global_1051439->f_3634[iVar3]->f_15;
						if (!_0x88ad6cc10d8d35b2(iVar0))
						{
							set_entity_as_mission_entity(iVar0, true, false);
						}
						set_entity_invincible(iVar0, true);
						set_blocking_of_non_temporary_events(iVar0, true);
						set_entity_proofs(iVar0, 127, false);
						set_ped_can_ragdoll(iVar0, false);
						_0xae6004120c18df97(iVar0, 0, 0);
						set_ped_config_flag(iVar0, 146, true);
						set_ped_config_flag(iVar0, 26, true);
						set_ped_config_flag(iVar0, 44, true);
					}
					Global_1051439->f_3634[iVar3]->f_16 = 0;
					func_819(iVar3, 3);
				}
				break;
			case 3:
				if (!does_entity_exist(Global_1051439->f_3634[iVar3]->f_8))
				{
					func_819(iVar3, 0);
					Jump @1266; //curOff = 778
				}
				else if (!Global_1940018->f_51)
				{
					if (!_does_scenario_point_exist(Global_1051439->f_3634[iVar3]->f_6))
					{
					}
					else if (_0x9c54041bb66bcf9e(Global_1051439->f_3634[iVar3]->f_8, Global_1051439->f_3634[iVar3]->f_6))
					{
					}
					else if (func_820(30, 1))
					{
					}
					else
					{
						clear_ped_tasks(Global_1051439->f_3634[iVar3]->f_8, 1, 0);
						_task_use_scenario_point(Global_1051439->f_3634[iVar3]->f_8, Global_1051439->f_3634[iVar3]->f_6, 0, 0, false, true, 1778448947, false, -1f, false);
					}
				}
				if (!does_entity_exist(Global_1051439->f_3634[iVar3]->f_15))
				{
					if (Global_1051439->f_3634[iVar3]->f_9 != -1)
					{
						func_819(iVar3, 2);
					}
					else
					{
						Jump @1263; //curOff = 983
						if (_does_scenario_point_exist(Global_1051439->f_3634[iVar3]->f_13) && !_0x9c54041bb66bcf9e(Global_1051439->f_3634[iVar3]->f_15, Global_1051439->f_3634[iVar3]->f_13))
						{
							clear_ped_tasks(Global_1051439->f_3634[iVar3]->f_15, 1, 0);
							_task_use_scenario_point(Global_1051439->f_3634[iVar3]->f_15, Global_1051439->f_3634[iVar3]->f_13, 0, 0, false, true, 1595886358, false, -1f, false);
							Global_1051439->f_3634[iVar3]->f_16 = 0;
						}
						else if (!Global_1051439->f_3634[iVar3]->f_16)
						{
							if (_0xbe28db99556ff8d9(Global_1051439->f_3634[iVar3]->f_15) != 0 && !func_821())
							{
								iVar1 = func_822(&(Global_1051439->f_3634[iVar3]));
								if (iVar1 != 0)
								{
									_0x8e901b65206c2d3e(Global_1051439->f_3634[iVar3]->f_15);
									_0xb93a769b8b726950(Global_1051439->f_3634[iVar3]->f_15, iVar1);
									_0xc4cfce4c656ef480(Global_1051439->f_3634[iVar3]->f_15);
								}
							}
							Global_1051439->f_3634[iVar3]->f_16 = 1;
						}
					}
					Global_1051439->f_3711++;
				}
				default:
					break;
		}
	}
}

void func_241()
{
	iVar0 = func_108();
	if (!func_823(iVar0))
	{
		return;
	}
	Global_1290948->f_45 = (Global_1290948->f_45 + 1 % 2);
	iVar1 = Global_1290948->f_45;
	if (!func_824(iVar0, iVar1))
	{
		return;
	}
	Global_1051439->f_72[36]->f_10 = 50f;
	if (is_thread_active(Global_1051439->f_72[36]->f_9, false))
	{
		return;
	}
	if (vdist(Global_1290948->f_32[Global_1290948->f_45]->f_1, Global_35) < Global_1051439->f_72[36]->f_10)
	{
		Global_1051439->f_72[36] = 0;
		Global_1051439->f_72[36]->f_18 = func_825(iVar0, iVar1);
		Global_1051439->f_72[36]->f_24 = &Global_1290948->f_47[Global_1290948->f_45];
		Global_1051439->f_72[36]->f_3 = { func_827(func_826(iVar0, iVar1)) };
		Global_1051439->f_72[36]->f_25 = &Global_1290948->f_50[Global_1290948->f_45];
		Global_1051439->f_72[36]->f_2 = iVar0;
		Global_1051439->f_72[36]->f_63 = func_761(Global_1051439->f_72[36]->f_18);
		if (func_828(36))
		{
			if (get_number_of_free_stacks_of_this_size(6005) > 0)
			{
				Var2 = 36;
				Var2.f_2 = Global_1051439->f_72[36]->f_24;
				Var2.f_3 = Global_1051439->f_72[36]->f_25;
				Var2.f_1 = iVar0;
				Var2.f_4 = { Global_1051439->f_72[36]->f_3 };
				Global_1051439->f_72[36]->f_9 = start_new_script_with_args(func_829(36), &Var2, 7, 6005);
				set_script_as_no_longer_needed(func_829(36));
				func_830(36, 2);
				func_222(36, 8);
			}
		}
		else if (!func_831(36, 2))
		{
			func_832(36);
		}
	}
}

void func_242()
{
	if (Global_1051439->f_4460 < 0 || Global_1051439->f_4460 == 4)
	{
		Global_1051439->f_4460 = 0;
	}
	iVar1 = Global_1051439->f_4460;
	iVar2 = &Global_1051439->f_4427[iVar1];
	if (iVar2 != -1)
	{
		func_757(iVar2, 32);
		if (!does_entity_exist(Global_1051439->f_4427[iVar1]->f_1))
		{
			if (&Global_1051439->f_3745[32] != iVar2)
			{
			}
			else if (!does_entity_exist(Global_1051439->f_3745[32]->f_4))
			{
			}
			else
			{
				Global_1051439->f_4427[iVar1]->f_1 = Global_1051439->f_3745[32]->f_4;
				Global_1051439->f_4427[iVar1]->f_2 = Global_1051439->f_3745[32]->f_5;
			}
		}
		else
		{
			iVar0 = Global_1051439->f_4427[iVar1]->f_2;
			if (!_does_scenario_point_exist(Global_1051439->f_4427[iVar1]->f_6))
			{
			}
			else if (_0x9c54041bb66bcf9e(iVar0, Global_1051439->f_4427[iVar1]->f_6))
			{
				if (func_833(&(Global_1051439->f_4427[iVar1]), 32, iVar0))
				{
					if (!Global_1051439->f_4427[iVar1]->f_7)
					{
						if (!_0x916b8e075abc8b4e(iVar0, 1))
						{
							_0xe7fa07624574b79a(iVar0, Global_34, 3, 1, -1f, 1, 0, 0, 0);
						}
						Global_1051439->f_4427[iVar1]->f_7 = 1;
					}
				}
				else if (Global_1051439->f_4427[iVar1]->f_7)
				{
					if (_0x916b8e075abc8b4e(iVar0, 1))
					{
						_0x541e5b41dca45828(iVar0, 3, 0);
					}
					Global_1051439->f_4427[iVar1]->f_7 = 0;
				}
			}
			else
			{
				_request_scenario_type(Global_1051439->f_4427[iVar1]->f_5, 8207, 0, 0);
				if (_has_scenario_type_loaded(Global_1051439->f_4427[iVar1]->f_5, false))
				{
					clear_ped_tasks(iVar0, 1, 0);
					_task_use_scenario_point(iVar0, Global_1051439->f_4427[iVar1]->f_6, 0, 0, true, false, Global_1051439->f_4427[iVar1]->f_5, false, -1f, false);
				}
			}
		}
	}
	Global_1051439->f_4460++;
}

bool func_243(int iParam0)
{
	return func_548(&(Global_1915715->f_20387[iParam0]), 8);
	return false;
}

int func_244(int iParam0)
{
	if (!func_834(iParam0))
	{
		if (!func_835(iParam0))
		{
			return 0;
		}
	}
	else
	{
		if (func_548(&(Global_1915715->f_20387[iParam0]), 1))
		{
			func_836(Global_1915715->f_20387[iParam0], 1);
		}
		if (!func_837(iParam0))
		{
			return 0;
		}
		else
		{
			func_732(Global_1915715->f_20387[iParam0], 8);
		}
	}
	return 1;
}

void func_245(int iParam0, int iParam1)
{
	func_838(iParam0);
	if (is_model_valid(Global_1051439->f_72[iParam0]->f_19))
	{
		request_model(Global_1051439->f_72[iParam0]->f_19, false);
	}
	func_839(Global_1051439->f_72[iParam0], 2, iParam0);
}

void func_246(int iParam0, int iParam1)
{
	if (((Global_1051439->f_3264 != -1 && Global_1051439->f_3265 != 0) && _0x59fa676177dbe4c9(Global_1051439->f_3265) > 5) && !Global_1915715->f_20637)
	{
		Global_1051439->f_3265 = 0;
		Global_1051439->f_3264 = -1;
	}
	func_757(iParam1, iParam0);
	func_840(iParam0);
	if (func_816(iParam0))
	{
		func_841(iParam0);
	}
	else if (vdist2(func_62(), Global_1051439->f_72[iParam0]->f_3) < (Global_1051439->f_72[iParam0]->f_10 * Global_1051439->f_72[iParam0]->f_10))
	{
		if (!func_818(iParam0))
		{
		}
	}
	if (!func_747(iParam0) && _does_volume_exist(Global_1051439->f_72[iParam0]->f_24))
	{
		if (func_786(iParam1, 1))
		{
			if (func_820(iParam0, 2))
			{
				_0xfd010a2154b40676(Global_1051439->f_72[iParam0]->f_24, 623901053);
				_0x2c87c3e1c7b96ee2(Global_1051439->f_72[iParam0]->f_24);
				func_842(iParam0, 2);
			}
		}
		else if (!func_820(iParam0, 2))
		{
			iVar0 = 0;
			iVar1 = 0;
			fVar3 = 0f;
			iVar1 = 0;
			while (iVar1 < 40)
			{
				if (func_820(iVar1, 2))
				{
					fVar4 = vdist2(Global_35, Global_1051439->f_72[iVar1]->f_3);
					if (fVar4 > fVar3)
					{
						fVar3 = fVar4;
						iVar2 = iVar1;
					}
					iVar0++;
					if (iVar0 == 4)
					{
					}
					else
					{
						iVar1++;
					}
					if (iVar0 == 4)
					{
						if (vdist2(Global_35, Global_1051439->f_72[iParam0]->f_3) < fVar3)
						{
							_0xfd010a2154b40676(Global_1051439->f_72[iVar2]->f_24, 623901053);
							_0x2c87c3e1c7b96ee2(Global_1051439->f_72[iVar2]->f_24);
							func_842(iVar2, 2);
							iVar0 = (iVar0 - 1);
						}
					}
					if (iVar0 < 4)
					{
						_0xfd010a2154b40676(Global_1051439->f_72[iParam0]->f_24, func_843());
						_0x19c7567d2f2287d6(Global_1051439->f_72[iParam0]->f_24, 16);
						func_844(iParam0, 2);
					}
					if (func_831(iParam0, 512))
					{
						if (Global_1051439->f_72[iParam0]->f_49 & 1 != 0 && Global_1051439->f_72[iParam0]->f_49 & 134217728 != 0)
						{
							func_845(iParam0);
						}
						if (func_846(iParam0) || Global_1051439->f_72[iParam0]->f_49 & 268435456 != 0)
						{
							func_847(iParam0, iParam1);
						}
						else
						{
							func_848(iParam0);
						}
					}
					else
					{
						if (func_846(iParam0))
						{
							if (Global_1051439->f_72[iParam0]->f_49 & 1 != 0 && !func_831(iParam0, 65536))
							{
								func_849(iParam0, 65536);
							}
						}
						if (func_850(iParam0))
						{
							func_851();
						}
						if (iParam0 != 9)
						{
							if (Global_1051439->f_72[iParam0]->f_49 & 1 != 0 && !Global_1051439->f_72[iParam0]->f_49 & 134217728 != 0)
							{
								func_852(iParam0, 0);
							}
						}
					}
				}
			}
		}
	}
}

void func_247()
{
	sVar0 = "net_ugc_end_flow";
	if (!func_853(4))
	{
		return;
	}
	iVar1 = get_hash_key(sVar0);
	if (_get_number_of_references_of_script_with_name_hash(iVar1) != 0)
	{
		return;
	}
	if (network_is_script_active(sVar0, -1, true, 0))
	{
		return;
	}
	request_script(sVar0);
	if (has_script_loaded(sVar0))
	{
		Global_265377->f_124746 = start_new_script(sVar0, 6000);
		func_854(4);
	}
}

bool func_248(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar0 = 0;
	if (iParam2 < 1)
	{
		iParam2 = 10;
	}
	bVar1 = false;
	*uParam1 = _0xd97d8d905f1562f2(iParam0);
	while ((!_0x603ac35fd4602c76(*uParam1) && iVar0 < iParam2) && !bVar1)
	{
		if (Global_1572887->f_13 != -1)
		{
			bVar1 = func_855(bParam4, bParam5);
		}
		iVar0++;
		wait(0);
	}
	if (Global_1572887->f_13 != -1)
	{
		bVar1 = func_855(bParam4, bParam5);
	}
	if (bVar1)
	{
		func_856();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return false;
	}
	iVar0 = 0;
	return true;
}

void func_249(int iParam0)
{
	func_732(&(Global_1915664->f_1), iParam0);
}

void func_250(int iParam0)
{
	func_836(&(Global_1915664->f_1), iParam0);
}

void func_251()
{
	_cancel_onscreen_keyboard();
	func_857();
	func_261(0);
	Global_1960073->f_53 = 0;
	Global_1960073->f_52 = 0;
	StringCopy(&(Global_1960073->f_56), "", 128);
	Var0.f_50 = 256;
	_copy_memory(Global_1960073, &Var0, 51);
}

void func_252(int iParam0)
{
	Global_1960073->f_51 = iParam0;
}

int func_253()
{
	return Global_1960073->f_51;
}

bool func_254()
{
	if (func_858() == 0)
	{
		return false;
	}
	iVar0 = func_859();
	if (iVar0 != -1)
	{
		func_256(iVar0);
		return false;
	}
	return true;
}

void func_255(int iParam0)
{
	if (Global_1940144->f_105.f_2 >= iParam0)
	{
		return;
	}
	Global_1940144->f_105.f_2 = iParam0;
}

void func_256(int iParam0)
{
	func_252(5);
	func_860(iParam0);
}

void func_257()
{
	if (Global_1960073->f_52 == 0)
	{
		Var0.f_2 = 0;
		Var0.f_3 = 1330277134;
		Var0.f_3.f_3 = 0;
		sVar19 = "";
		switch (func_861())
		{
			case -1:
				func_252(8);
				return;
			case 0:
				func_259(4);
				sVar19 = "ERROR_PROFANITY_SERVICE_DOWN";
				break;
			case 1:
				func_259(5);
				sVar19 = "ERROR_FAILEDPROFANITY";
				break;
			case 2:
				sVar19 = "NM_GC_FOOTER_RESTRICT_ACCOUNT_P_NAME";
				break;
			case 3:
				sVar19 = "NM_GC_UGC_RESTRICT";
				break;
		}
		if (func_862(&Var0, "GLOBAL_ALERT_ALT", sVar19, 0, 0, 1))
		{
		}
		else
		{
			func_259(3);
			func_252(7);
			return;
		}
	}
	if (func_863() != -1577439368)
	{
		func_864();
		func_252(7);
	}
}

void func_258(char* sParam0)
{
	StringCopy(&(Global_1960073->f_56), sParam0, 128);
}

void func_259(int iParam0)
{
	Global_1960073->f_54 = iParam0;
}

int func_260()
{
	return Global_1960073->f_54;
}

void func_261(int iParam0)
{
	Global_1960073->f_72 = iParam0;
}

int func_262()
{
	if (Global_1572887->f_13 != -1)
	{
		Global_34 = Global_1296859->f_8;
		Global_35 = { Global_1296859->f_17 };
		return Global_1296859->f_10;
	}
	Global_34 = get_player_ped(player_id());
	Global_35 = { get_entity_coords(Global_34, false, false) };
	return player_id();
}

bool func_263(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_264()
{
	Global_1940258->f_7 = 0;
	Global_1940258->f_8 = 0;
	Global_1940258->f_20 = 0;
	Global_1940258->f_9 = 0;
	Global_1940258->f_10 = 0;
	Global_1940258->f_11 = 0;
	Global_1940258->f_12 = 0;
	Global_1940258->f_13 = -1;
	Global_1940258->f_14 = -1;
	Global_1940258->f_15 = -1;
	Global_1940258->f_17 = 0;
}

bool func_265(int iParam0)
{
	return (Global_1952637 && iParam0) != 0;
}

void func_266(var uParam0)
{
	iVar0 = Global_1952637->f_921;
	switch (uParam0[iVar0])
	{
		case 26:
			func_865((*uParam0)[iVar0]->f_1);
			break;
		case 27:
			if (func_265(32))
			{
				func_867(&(Global_1952637->f_2365), !func_866(*(*uParam0)[iVar0], 65536), func_866(*(*uParam0)[iVar0], 131072));
				func_868(Global_1952637->f_2365, func_866(*(*uParam0)[iVar0], 2), func_866(*(*uParam0)[iVar0], 131072));
			}
			else
			{
				func_867(&(Global_1952637->f_1675), !func_866(*(*uParam0)[iVar0], 65536), func_866(*(*uParam0)[iVar0], 131072));
				func_868(Global_1952637->f_1675, func_866(*(*uParam0)[iVar0], 2), func_866(*(*uParam0)[iVar0], 131072));
			}
			func_869();
			break;
		case 35:
			func_870(&(Global_1952637->f_1675), func_866(*(*uParam0)[iVar0], 131072));
			break;
		case 28:
			iVar2 = (*uParam0)[iVar0]->f_1;
			if (func_362(iVar2) != -999503751)
			{
				iVar3 = func_364(iVar2);
				if (iVar3 == -358215195)
				{
				}
				else
				{
					bVar1 = iVar2 == &Global_1952637->f_1675.f_1[func_871(iVar3, 1)];
					Jump @419; //curOff = 404
					bVar1 = iVar2 == Global_1952637->f_1675;
					func_872(iVar2, 1, 1, bVar1, 0, func_866(*(*uParam0)[iVar0], 131072));
					Jump @680; //curOff = 446
					iVar2 = (*uParam0)[iVar0]->f_1;
					func_873(iVar2, 1, 1, 0, func_866(*(*uParam0)[iVar0], 131072));
					Jump @680; //curOff = 484
					func_868(Global_1952637->f_1675, 0, 0);
					Jump @680; //curOff = 500
					func_868(Global_1952637->f_1675, 0, 0);
					Jump @680; //curOff = 516
					func_874((*uParam0)[iVar0]->f_1);
					Jump @680; //curOff = 531
					func_875((*uParam0)[iVar0]->f_1);
					Jump @680; //curOff = 546
					if (func_265(32))
					{
						func_876(&(Global_1952637->f_2365), func_866(*(*uParam0)[iVar0], 131072));
					}
					else
					{
						func_876(&(Global_1952637->f_1675), func_866(*(*uParam0)[iVar0], 131072));
					}
					Jump @680; //curOff = 615
					func_877(&(Global_1952637->f_1058.f_9), Global_1952637->f_1058.f_6);
					Jump @680; //curOff = 640
					func_878();
					Jump @680; //curOff = 647
					if (Global_1952637->f_929)
					{
					}
					else
					{
						if (func_879())
						{
							return;
						}
						func_880();
					}
				}
				func_881(uParam0[iVar0]);
				iVar0 = (iVar0 + 1 % 20);
				Global_1952637->f_921 = iVar0;
				Global_1952637->f_920 = (Global_1952637->f_920 - 1);
			}
			default:
				break;
	}
}

void func_267(var uParam0)
{
	iVar1 = Global_1952637->f_923;
	if ((*uParam0)[iVar1]->f_3 != 0)
	{
		iVar0 = (*uParam0)[iVar1]->f_3;
	}
	else
	{
		iVar0 = get_player_ped(player_id());
	}
	if (func_882(uParam0[iVar1]))
	{
		if (!func_883(iVar0, &iVar3))
		{
			return;
		}
	}
	else
	{
		iVar3 = 3;
	}
	if (iVar3 == 0)
	{
		switch (uParam0[iVar1])
		{
			case 5:
				if (func_866(*(*uParam0)[iVar1], 4096))
				{
					_set_metaped_weariness(iVar0, Global_17411.f_55.f_644.f_1776);
				}
				if (func_866(*(*uParam0)[iVar1], 262144))
				{
					if (func_884(iVar0, (*uParam0)[iVar1]->f_1))
					{
						_set_ped_body_component(iVar0, (*uParam0)[iVar1]->f_1);
					}
					else
					{
						_set_ped_outfit_preset(iVar0, 0, 0);
					}
				}
				else if (func_866(*(*uParam0)[iVar1], 16384))
				{
					_set_random_outfit_variation(iVar0, true);
				}
				_update_ped_variation(iVar0, false, true, false, true, func_866(*(*uParam0)[iVar1], 16));
				break;
			case 13:
				func_885(&(Global_1952637->f_1058));
				break;
			case 3:
				if (func_866(*(*uParam0)[iVar1], 32768))
				{
				}
				else
				{
					if (Global_1952637->f_1058.f_1 == 0)
					{
					}
					else
					{
						if (!func_886(&(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9)))
						{
							return;
						}
						Jump @1740; //curOff = 469
						if (func_866(*(*uParam0)[iVar1], 32768))
						{
						}
						else if (!func_887(iVar0, &(Global_1952637->f_1058)))
						{
							return;
						}
						if (func_866(*(*uParam0)[iVar1], 16))
						{
							_update_ped_variation(iVar0, false, true, true, true, false);
						}
						Jump @1740; //curOff = 542
						if (func_866(*(*uParam0)[iVar1], 2048))
						{
							if (!func_887(iVar0, &(Global_1952637->f_1058)))
							{
								return;
							}
						}
						func_888(&(Global_1952637->f_1675), iVar0, func_866(*(*uParam0)[iVar1], 2), 65, !func_866(*(*uParam0)[iVar1], 4), func_866(*(*uParam0)[iVar1], 16), 1, 1);
						Jump @1740; //curOff = 641
						if (func_866(*(*uParam0)[iVar1], 2048))
						{
							if (!func_887(iVar0, &(Global_1952637->f_1058)))
							{
								return;
							}
						}
						func_888(&(Global_1952637->f_1556), iVar0, func_866(*(*uParam0)[iVar1], 2), 65, !func_866(*(*uParam0)[iVar1], 4), func_866(*(*uParam0)[iVar1], 16), 1, 1);
						Jump @1740; //curOff = 740
						if (func_866(*(*uParam0)[iVar1], 2048))
						{
							if (!func_887(iVar0, &(Global_1952637->f_1058)))
							{
								return;
							}
						}
						func_888(&(Global_1952637->f_1675), iVar0, func_866(*(*uParam0)[iVar1], 2), 64, !func_866(*(*uParam0)[iVar1], 4), func_866(*(*uParam0)[iVar1], 16), 1, 1);
						Jump @1740; //curOff = 839
						if (func_866(*(*uParam0)[iVar1], 2048))
						{
							if (!func_887(iVar0, &(Global_1952637->f_1058)))
							{
								return;
							}
						}
						func_888(&(Global_1952637->f_1556), iVar0, func_866(*(*uParam0)[iVar1], 2), 64, !func_866(*(*uParam0)[iVar1], 4), func_866(*(*uParam0)[iVar1], 16), 1, 1);
						Jump @1740; //curOff = 938
						func_889();
						Jump @1740; //curOff = 945
						func_890(&(Global_1952637->f_1556), iVar0, func_866(*(*uParam0)[iVar1], 2), !func_866(*(*uParam0)[iVar1], 4), func_866(*(*uParam0)[iVar1], 16), func_866(*(*uParam0)[iVar1], 64), func_866(*(*uParam0)[iVar1], 128));
						Jump @1740; //curOff = 1030
						func_890(&(Global_1952637->f_1675), iVar0, func_866(*(*uParam0)[iVar1], 2), !func_866(*(*uParam0)[iVar1], 4), func_866(*(*uParam0)[iVar1], 16), func_866(*(*uParam0)[iVar1], 64), func_866(*(*uParam0)[iVar1], 128));
						Jump @1740; //curOff = 1115
						iVar4 = -1;
						if ((*uParam0)[iVar1]->f_1 != 0)
						{
							iVar4 = (*uParam0)[iVar1]->f_1;
						}
						func_888(&(Global_1952637->f_1556), iVar0, func_866(*(*uParam0)[iVar1], 2), iVar4, !func_866(*(*uParam0)[iVar1], 4), func_866(*(*uParam0)[iVar1], 16), !func_866(*(*uParam0)[iVar1], 1024), 1);
						Jump @1740; //curOff = 1216
						iVar4 = -1;
						if ((*uParam0)[iVar1]->f_1 != 0)
						{
							iVar4 = (*uParam0)[iVar1]->f_1;
						}
						func_888(&(Global_1952637->f_1675), iVar0, func_866(*(*uParam0)[iVar1], 2), iVar4, !func_866(*(*uParam0)[iVar1], 4), func_866(*(*uParam0)[iVar1], 16), !func_866(*(*uParam0)[iVar1], 1024), 1);
						Jump @1740; //curOff = 1317
						func_891(iVar0, &(Global_1952637->f_4), Global_1952637->f_3481, Global_1956200->f_1431.f_106);
						Jump @1740; //curOff = 1348
						iVar2 = func_871((*uParam0)[iVar1]->f_1, 1);
						func_892(iVar0, iVar2, !func_866(*(*uParam0)[iVar1], 256));
						_update_ped_variation(iVar0, false, true, true, true, func_866(*(*uParam0)[iVar1], 16));
						Jump @1740; //curOff = 1414
						iVar2 = func_871(Global_1952637->f_736[iVar1]->f_1, 1);
						func_893(&(Global_1952637->f_1675), iVar0, iVar2, !func_866(*(*uParam0)[iVar1], 4), func_866(*(*uParam0)[iVar1], 16));
						Jump @1740; //curOff = 1480
						iVar2 = func_871(Global_1952637->f_736[iVar1]->f_1, 1);
						func_893(&(Global_1952637->f_1556), iVar0, iVar2, !func_866(*(*uParam0)[iVar1], 4), func_866(*(*uParam0)[iVar1], 16));
						Jump @1740; //curOff = 1546
						func_894(iVar0, 1);
						Jump @1740; //curOff = 1556
						if (!func_895(2))
						{
						}
						else
						{
							if (!func_897(iVar0, func_896(255), (*uParam0)[iVar1]->f_1))
							{
							}
							_update_ped_variation(iVar0, false, true, true, true, func_866(*(*uParam0)[iVar1], 16));
							Jump @1740; //curOff = 1619
							_set_ped_component_disabled(iVar0, -668168749, 0);
							Jump @1740; //curOff = 1634
							if (!func_898(*(*uParam0)[iVar1]))
							{
								return;
							}
							Jump @1740; //curOff = 1656
							func_899(iVar0, (*uParam0)[iVar1]->f_1, 1, func_866(*(*uParam0)[iVar1], 16));
							Jump @1740; //curOff = 1689
							func_900(iVar0, (*uParam0)[iVar1]->f_1, 1, func_866(*(*uParam0)[iVar1], 16), func_866(*(*uParam0)[iVar1], 8192));
						}
					}
					if (func_866(*(*uParam0)[iVar1], 32))
					{
					}
					func_881(uParam0[iVar1]);
					iVar1 = (iVar1 + 1 % 25);
					Global_1952637->f_923 = iVar1;
					Global_1952637->f_918 = (Global_1952637->f_918 - 1);
				}
				default:
					break;
		}
	}
}

void func_268(var uParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_919)
	{
		if ((*uParam0)[iVar0]->f_3 != 0)
		{
			iVar2 = (*uParam0)[iVar0]->f_3;
		}
		else
		{
			iVar2 = get_player_ped(player_id());
		}
		if (!func_883(iVar2, &iVar3))
		{
			return;
		}
		if (iVar3 == 0)
		{
			switch (uParam0[iVar0])
			{
				case 24:
					_apply_ped_metaped_outfit((*uParam0)[iVar0]->f_1, iVar2, true, false);
					bVar1 = true;
					break;
				case 25:
					_set_ped_body_component(iVar2, (*uParam0)[iVar0]->f_1);
					bVar1 = true;
					break;
			}
		}
		func_881(uParam0[iVar0]);
		iVar0++;
	}
	if (bVar1)
	{
		_update_ped_variation(iVar2, false, true, true, true, func_866(*(*uParam0)[iVar0], 16));
	}
	Global_1952637->f_919 = 0;
}

void func_269(int iParam0)
{
	Global_1952637 = (&Global_1952637 - (Global_1952637 && iParam0));
}

bool func_270(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

void func_271(var uParam0)
{
	vVar0 = -1;
	vVar0.f_1 = get_cloud_time_as_int();
	switch (*uParam0)
	{
		case 0:
			vVar0.x = 0;
			_0x31010318ba9897ac(&(vVar0.f_2), network_player_id_to_int());
			func_901(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			_0x20f4cb76689acdbc(&(vVar0.f_2));
			func_901(vVar0);
			if (!uParam0->f_3)
			{
			}
			else
			{
				Var6.f_4 = 0;
				Var6.f_6 = uParam0->f_1;
				Var6.f_5 = *uParam0;
				Var6.f_7 = uVar4;
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < 32)
				{
					if (!network_is_player_active(&(Global_1296859->f_154[iVar3])))
					{
					}
					else if (&Global_1296859->f_154[iVar3] == Global_1296859->f_10)
					{
					}
					else
					{
						_0x31010318ba9897ac(&uVar5, &(Global_1296859->f_154[iVar3]));
					}
					iVar3++;
				}
				func_902(&Var6, uVar5);
				Jump @392; //curOff = 221
				if (!_0x179a6f0ee2e79026(&(uParam0->f_2)))
				{
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				func_901(vVar0);
				if (!uParam0->f_3)
				{
				}
				else
				{
					Var14.f_4 = 0;
					Var14.f_6 = uParam0->f_1;
					Var14.f_5 = *uParam0;
					Var14.f_7 = uParam0->f_2;
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < 32)
					{
						if (!network_is_player_active(&(Global_1296859->f_154[iVar3])))
						{
						}
						else if (&Global_1296859->f_154[iVar3] == Global_1296859->f_10)
						{
						}
						else
						{
							_0x31010318ba9897ac(&uVar5, &(Global_1296859->f_154[iVar3]));
						}
						iVar3++;
					}
					func_902(&Var14, uVar5);
				}
			}
			default:
				break;
	}
}

void func_272(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_903(&Global_0, 8);
	}
	if (!func_335() || func_66() != -1)
	{
		return;
	}
	func_903(&Global_0, 1);
}

int func_273(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_904())
	{
		return 0;
	}
	if (!func_905())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_903(&Global_0, 8);
	}
	func_903(&Global_0, 1);
	return 1;
}

void func_274()
{
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, -988720069, false);
}

float func_275()
{
	return 0.5f;
}

bool func_276()
{
	return Global_1940085->f_13;
}

bool func_277()
{
	return (func_906() || func_907());
}

float func_278()
{
	fVar0 = ((Global_1940085->f_15.f_1 - func_275()) * (1f / (1f - func_275())));
	fVar1 = ((Global_1940085->f_15.f_5 * fVar0) + (Global_1940085->f_15.f_4 * (1f - fVar0)));
	return (fVar1 * Global_1940085->f_15.f_2);
}

float func_279()
{
	fVar0 = ((Global_1940085->f_15.f_1 - func_275()) * (1f / (1f - func_275())));
	fVar1 = ((Global_1940085->f_15.f_7 * fVar0) + (Global_1940085->f_15.f_6 * (1f - fVar0)));
	return (fVar1 * Global_1940085->f_15.f_3);
}

bool func_280()
{
	if (Global_1940085->f_14)
	{
		return false;
	}
	if (Global_1940085->f_28.f_1)
	{
		return true;
	}
	if (Global_1940085->f_9 >= 1f && func_908())
	{
		func_909();
		return true;
	}
	return false;
}

void func_281()
{
	if (!does_entity_exist(Global_34) || is_entity_dead(Global_34))
	{
		func_910(1);
		func_911();
	}
	vVar2 = { 1f, 1f, 1f };
	switch (Global_1940085->f_28.f_8)
	{
		case 0:
			set_ped_config_flag(Global_34, 26, true);
			func_912(1);
			Global_1940085->f_28.f_3 = 0;
			break;
		case 1:
			if (!Global_1940085->f_28.f_3)
			{
				request_anim_dict(func_913());
				Global_1940085->f_28.f_3 = 1;
			}
			if (has_anim_dict_loaded(func_913()))
			{
				func_912(2);
			}
			break;
		case 2:
			do_screen_fade_out(5000);
			Global_1940085->f_28.f_4 = get_game_timer();
			if (_is_ped_carrying(Global_34))
			{
				func_912(3);
			}
			else
			{
				func_912(4);
			}
			break;
		case 3:
			if (is_screen_faded_out())
			{
				iVar1 = _get_first_entity_ped_is_carrying(Global_34);
				task_place_carried_entity_at_coord(Global_34, iVar1, Global_35 + vVar2, 2f, 0);
				func_912(5);
			}
			break;
		case 4:
			if (is_ped_walking(Global_34) || is_ped_running(Global_34))
			{
				bVar0 = true;
			}
			if (func_914(Global_34))
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
					task_play_anim(Global_34, func_913(), func_915(), 4f, -2f, 5000, 0, 0f, false, 0, false, 0, false);
					Global_1940085->f_28 = 1;
				}
				if (Global_1940085->f_28.f_3)
				{
					remove_anim_dict(func_913());
					Global_1940085->f_28.f_3 = 0;
				}
				func_912(5);
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
					func_294(Global_34, 357427886, 1, 1);
				}
			}
			break;
		case 6:
			if (!is_screen_fading_in())
			{
				do_screen_fade_in(5000);
			}
			func_910(1);
			func_911();
			break;
	}
}

bool func_282(int iParam0, int iParam1)
{
	return (Global_1896622[iParam0] && iParam1) != 0;
}

int func_283(int iParam0)
{
	if (_does_volume_exist((*Global_1896622)[iParam0]->f_1))
	{
		return (*Global_1896622)[iParam0]->f_1;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_BAYOU_NWA");
			_0x39816f6f94f385ad(iVar0, 2037.5f, -2050f, 150f, 0f, 0f, 18f, 575f, 750f, 700f);
			_0x39816f6f94f385ad(iVar0, 2485f, -1497.5f, 150f, 0f, 0f, 20f, 725f, 1050f, 700f);
			_0x39816f6f94f385ad(iVar0, 2060f, -1812.5f, 150f, 0f, 0f, 20f, 315f, 750f, 700f);
			_0x39816f6f94f385ad(iVar0, 1975f, -1452.5f, 150f, 0f, 0f, -43f, 200f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, 2022.5f, -1277.5f, 150f, 0f, 0f, -7f, 100f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, 2022.5f, -925f, 150f, 0f, 0f, 20f, 865f, 365f, 700f);
			_0x39816f6f94f385ad(iVar0, 2200f, -2440f, 150f, 0f, 0f, 0f, 500f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, 1762.5f, -737.5f, 150f, 0f, 0f, 20f, 500f, 175f, 700f);
			_0x39816f6f94f385ad(iVar0, 2020.944f, -580.694f, 150f, 0f, 0f, -111f, 400f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, 2116.078f, -612.5f, 150f, 0f, 0f, -1f, 240f, 540f, 700f);
			_0x39816f6f94f385ad(iVar0, 2197.5f, -693.982f, 150f, 0f, 0f, -111f, 200f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, 2527.5f, -785f, 150f, 0f, 0f, -80f, 400f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, 3550f, -1455f, 150f, 0f, 0f, 0f, 1800f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, 2687.5f, -757.5f, 150f, 0f, 0f, -80f, 400f, 75f, 700f);
			_0x39816f6f94f385ad(iVar0, 2826.796f, -755f, 150f, 0f, 0f, 0f, 282.646f, 400f, 700f);
			break;
		case 1:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_BIG_VALLEY");
			_0x39816f6f94f385ad(iVar0, -1605f, -382.5f, 150f, 0f, 0f, 25f, 1100f, 1200f, 700f);
			_0x39816f6f94f385ad(iVar0, -2035f, -810f, 150f, 0f, 0f, -65f, 400f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -1887.5f, -1050f, 150f, 0f, 0f, -45f, 210f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -2210f, -625f, 150f, 0f, 0f, -65f, 200f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -2827.5f, -82.5f, 150f, 0f, 0f, 167f, 1500f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, -930f, -730f, 150f, 0f, 0f, 0f, 600f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -825f, -780f, 150f, 0f, 0f, -45f, 300f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -632.5f, -902.5f, 150f, 0f, 0f, -20f, 300f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -820f, -170f, 150f, 0f, 0f, 37.5f, 500f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, -835f, -525f, 150f, 0f, 0f, 41f, 200f, 400f, 700f);
			_0x39816f6f94f385ad(iVar0, -532.5f, -32.5f, 150f, 0f, 0f, -27f, 150f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -605f, 50f, 150f, 0f, 0f, -75f, 200f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -540f, 50f, 150f, 0f, 0f, -140f, 150f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -1127.5f, -90f, 150f, 0f, 0f, -32.5f, 200f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -1500f, 392.5f, 150f, 0f, 0f, 160f, 700f, 400f, 700f);
			_0x39816f6f94f385ad(iVar0, -1477.5f, 552.5f, 150f, 0f, 0f, 143f, 800f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -1656.969f, 378.098f, 150f, 0f, 0f, 122f, 795f, 1083f, 700f);
			_0x39816f6f94f385ad(iVar0, -2617.969f, 452.097f, 150f, 0f, 0f, 167f, 1763f, 1500f, 700f);
			break;
		case 2:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_BLUEGILL_MARSH");
			_0x39816f6f94f385ad(iVar0, 3585f, -280f, 150f, 0f, 0f, 0f, 1800f, 550f, 700f);
			_0x39816f6f94f385ad(iVar0, 3085f, -337.5f, 150f, 0f, 0f, -80.5f, 300f, 1500f, 700f);
			_0x39816f6f94f385ad(iVar0, 2440f, -465f, 150f, 0f, 0f, -1f, 400f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, 2322.5f, -537.5f, 150f, 0f, 0f, -111f, 100f, 150f, 700f);
			_0x39816f6f94f385ad(iVar0, 3100f, 125f, 150f, 0f, 0f, 41f, 1700f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, 3670f, 80f, 150f, 0f, 0f, 41f, 1400f, 475f, 700f);
			_0x39816f6f94f385ad(iVar0, 2332.651f, -365.338f, 150f, 0f, 0f, 86f, 150f, 140f, 700f);
			_0x39816f6f94f385ad(iVar0, 2124.824f, -347.118f, 150f, 0f, 0f, 86f, 140f, 291f, 700f);
			_0x39816f6f94f385ad(iVar0, 3726.431f, -755f, 150f, 0f, 0f, 0f, 1518.809f, 400f, 700f);
			break;
		case 3:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_CUMBERLAND_FOREST");
			_0x39816f6f94f385ad(iVar0, 190.4736f, 1214.829f, 200f, 0f, 0f, 59f, 488.2586f, 443.9291f, 800f);
			_0x39816f6f94f385ad(iVar0, 695f, 1075f, 200f, 0f, 0f, 35f, 250f, 250f, 800f);
			_0x39816f6f94f385ad(iVar0, -11.22244f, 1259.539f, 200f, 0f, 0f, 0f, 135f, 340.8336f, 800f);
			_0x39816f6f94f385ad(iVar0, 667.5f, 1675f, 200f, 0f, 0f, 15f, 150f, 325f, 800f);
			_0x39816f6f94f385ad(iVar0, 627.5f, 1255f, 200f, 0f, 0f, 9.999999f, 400f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, 507.5f, 1532.5f, 200f, 0f, 0f, -45f, 300f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 72.5f, 1297.5f, 200f, 0f, 0f, 50f, 400f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 615f, 1750f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			_0x39816f6f94f385ad(iVar0, 510f, 1025f, 200f, 0f, 0f, 1f, 300f, 250f, 800f);
			_0x39816f6f94f385ad(iVar0, 330.2712f, 1028.66f, 200f, 0f, 0f, 82f, 300f, 100f, 800f);
			_0x39816f6f94f385ad(iVar0, 224.7084f, 1010.634f, 200f, 0f, 0f, 58.85596f, 175f, 267.2676f, 800f);
			_0x39816f6f94f385ad(iVar0, 153.0846f, 1314.722f, 200f, 0f, 0f, -23f, 400f, 409.2231f, 800f);
			break;
		case 4:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GREAT_PLAINS");
			_0x39816f6f94f385ad(iVar0, -1285f, -1725f, 150f, 0f, 0f, 20f, 500f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -1360f, -1540f, 150f, 0f, 0f, 30f, 500f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -1492.5f, -1262.5f, 150f, 0f, 0f, 15f, 500f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -1410f, -1147.5f, 150f, 0f, 0f, 25f, 700f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -865f, -1125f, 150f, 0f, 0f, -20f, 700f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -865f, -1725f, 150f, 0f, 0f, 0f, 800f, 1200f, 700f);
			_0x39816f6f94f385ad(iVar0, -1300f, -1917.5f, 150f, 0f, 0f, -42f, 250f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -1180f, -2122.5f, 150f, 0f, 0f, 20f, 300f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, -955f, -1065f, 150f, 0f, 0f, -45f, 250f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -1052.5f, -990f, 150f, 0f, 0f, 1.25f, 200f, 200f, 700f);
			break;
		case 7:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GRIZZLIES_WEST");
			_0x39816f6f94f385ad(iVar0, -100f, 1557.5f, 200f, 0f, 0f, 50f, 225f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, -162.5f, 1660f, 200f, 0f, 0f, 0f, 135f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, -162.5f, 1952.5f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			_0x39816f6f94f385ad(iVar0, -752.5f, 2135f, 200f, 0f, 0f, 0f, 1050f, 1975f, 800f);
			_0x39816f6f94f385ad(iVar0, -2139.972f, 1966.829f, 200f, 0f, 0f, 165f, 1814.271f, 1288f, 800f);
			_0x39816f6f94f385ad(iVar0, -1295f, 1090f, 200f, 0f, 0f, 122f, 1200f, 300f, 800f);
			_0x39816f6f94f385ad(iVar0, -1080f, 1132.5f, 200f, 0f, 0f, 105f, 1200f, 375f, 800f);
			_0x39816f6f94f385ad(iVar0, -895f, 1150f, 200f, 0f, 0f, 45f, 800f, 800f, 800f);
			_0x39816f6f94f385ad(iVar0, -845f, 720f, 200f, 0f, 0f, 0f, 200f, 300f, 800f);
			_0x39816f6f94f385ad(iVar0, -1015f, 560f, 200f, 0f, 0f, 143f, 75f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, -1940f, 3145f, 200f, 0f, 0f, 0f, 1400f, 2000f, 800f);
			_0x39816f6f94f385ad(iVar0, -757.5f, 3625f, 200f, 0f, 0f, 0f, 975f, 1050f, 800f);
			_0x39816f6f94f385ad(iVar0, -187.5f, 3210f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			_0x39816f6f94f385ad(iVar0, -2315.88f, 1498.498f, 150f, 0f, 0f, 167f, 1655f, 587f, 700f);
			break;
		case 6:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GRIZZLIES_EAST");
			_0x39816f6f94f385ad(iVar0, 190f, 1630f, 200f, 0f, 0f, -23f, 225f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, 715f, 3145f, 200f, 0f, 0f, 0f, 1200f, 2000f, 800f);
			_0x39816f6f94f385ad(iVar0, 1210f, 1212.5f, 200f, 0f, 0f, -14f, 585f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, 1510f, 1445f, 200f, 0f, 0f, 16f, 450f, 1000f, 800f);
			_0x39816f6f94f385ad(iVar0, 1935f, 1040f, 200f, 0f, 0f, 12f, 200f, 100f, 800f);
			_0x39816f6f94f385ad(iVar0, 1810f, 1030f, 200f, 0f, 0f, -14f, 100f, 100f, 800f);
			_0x39816f6f94f385ad(iVar0, 1495f, 1425f, 200f, 0f, 0f, -9f, 1200f, 650f, 800f);
			_0x39816f6f94f385ad(iVar0, 1050f, 1430f, 200f, 0f, 0f, 10f, 500f, 700f, 800f);
			_0x39816f6f94f385ad(iVar0, 2037.5f, 1630f, 200f, 0f, 0f, 118f, 200f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, 1400f, 2500f, 200f, 0f, 0f, -47f, 2000f, 800f, 800f);
			_0x39816f6f94f385ad(iVar0, 1810f, 2707.5f, 200f, 0f, 0f, -19f, 1500f, 900f, 800f);
			_0x39816f6f94f385ad(iVar0, 2175f, 3557.5f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			_0x39816f6f94f385ad(iVar0, 1040f, 2120f, 200f, 0f, 0f, 15f, 800f, 1000f, 800f);
			_0x39816f6f94f385ad(iVar0, 410f, 2112.5f, 200f, 0f, 0f, -93f, 500f, 600f, 800f);
			_0x39816f6f94f385ad(iVar0, 307.5f, 1722.5f, 200f, 0f, 0f, -45f, 250f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 472.5f, 1880f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			_0x39816f6f94f385ad(iVar0, 135f, 2000f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			_0x39816f6f94f385ad(iVar0, 217.5f, 3245f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			break;
		case 5:
			if (_does_volume_exist((*Global_1896622)[6]->f_1) && _does_volume_exist((*Global_1896622)[7]->f_1))
			{
				iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GRIZZLIES");
				_0x6e0d3c3f828da773(iVar0, (*Global_1896622)[6]->f_1);
				_0x6e0d3c3f828da773(iVar0, (*Global_1896622)[7]->f_1);
			}
			else
			{
				return 0;
			}
			break;
		case 8:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GUARMA");
			_0xbce668aaf83608be(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			_0xbce668aaf83608be(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			break;
		case 9:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_HEARTLAND");
			_0x39816f6f94f385ad(iVar0, -357.5f, -120f, 200f, 0f, 0f, -27f, 150f, 350f, 800f);
			_0x39816f6f94f385ad(iVar0, -385f, 180f, 200f, 0f, 0f, -140f, 150f, 350f, 800f);
			_0x39816f6f94f385ad(iVar0, -600f, 280f, 200f, 0f, 0f, -75f, 150f, 350f, 800f);
			_0x39816f6f94f385ad(iVar0, 165f, 165f, 200f, 0f, 0f, 0f, 1100f, 1000f, 800f);
			_0x39816f6f94f385ad(iVar0, -465f, -340f, 200f, 0f, 0f, 37.5f, 500f, 275f, 800f);
			_0x39816f6f94f385ad(iVar0, -37.5f, -525f, 200f, 0f, 0f, 0f, 1125f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 670f, -315f, 200f, 0f, 0f, -42f, 365f, 817f, 800f);
			_0x39816f6f94f385ad(iVar0, 860f, 487.5f, 200f, 0f, 0f, 35f, 650f, 900f, 800f);
			_0x39816f6f94f385ad(iVar0, 512.5f, 800f, 200f, 0f, 0f, 1f, 300f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, 1230f, 695f, 200f, 0f, 0f, -14f, 875f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, 1560f, 835f, 200f, 0f, 0f, 16f, 450f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, 1727.5f, 702.5f, 200f, 0f, 0f, -14f, 100f, 575f, 800f);
			_0x39816f6f94f385ad(iVar0, 964.14f, 59.521f, 200f, 0f, 0f, -71.00001f, 415f, 725f, 800f);
			_0x39816f6f94f385ad(iVar0, 1485f, 322.5f, 200f, 0f, 0f, -84f, 650f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 1630f, 100f, 200f, 0f, 0f, -111f, 435f, 375f, 800f);
			_0x39816f6f94f385ad(iVar0, 1752.5f, 302.5f, 200f, 0f, 0f, -47f, 275f, 100f, 800f);
			_0x39816f6f94f385ad(iVar0, 103.6867f, 807.6879f, 200f, 0f, 0f, 58.7951f, 295.0871f, 709.0376f, 800f);
			_0x39816f6f94f385ad(iVar0, 302.139f, 780.344f, 200f, 0f, 0f, 82f, 200f, 157.492f, 800f);
			_0x39816f6f94f385ad(iVar0, -847.5f, 240f, 200f, 0f, 0f, 33f, 797f, 225f, 800f);
			_0x39816f6f94f385ad(iVar0, -975f, 280f, 200f, 0f, 0f, 142f, 329f, 450f, 800f);
			_0x39816f6f94f385ad(iVar0, -245.4394f, 1000f, 200f, 0f, 0f, 0f, 333.3127f, 300f, 800f);
			_0x39816f6f94f385ad(iVar0, -760f, 440f, 200f, 0f, 0f, 105f, 300f, 250f, 800f);
			_0x39816f6f94f385ad(iVar0, -520f, 507.5f, 200f, 0f, 0f, 0f, 450f, 450f, 800f);
			_0x39816f6f94f385ad(iVar0, -495f, 822.5f, 200f, 0f, 0f, 45f, 500f, 225f, 800f);
			_0x39816f6f94f385ad(iVar0, -140f, 705f, 200f, 0f, 0f, 59f, 250f, 650f, 800f);
			_0x39816f6f94f385ad(iVar0, -327.5f, 1080f, 200f, 0f, 0f, 45f, 100f, 100f, 800f);
			break;
		case 10:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_ROANOKE_RIDGE");
			_0x39816f6f94f385ad(iVar0, 1838.526f, 72.693f, 200f, 0f, 0f, -111f, 525f, 311f, 800f);
			_0x39816f6f94f385ad(iVar0, 2827.5f, 1215f, 200f, 0f, 0f, -9f, 1500f, 650f, 800f);
			_0x39816f6f94f385ad(iVar0, 1920f, 655f, 200f, 0f, 0f, -14f, 300f, 575f, 800f);
			_0x39816f6f94f385ad(iVar0, 2181.992f, -132.078f, 200f, 0f, 0f, 86f, 315f, 322f, 800f);
			_0x39816f6f94f385ad(iVar0, 2130f, 825f, 200f, 0f, 0f, 12f, 500f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 2345f, 1795f, 200f, 0f, 0f, 118f, 200f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, 2775f, 725f, 200f, 0f, 0f, 41f, 2000f, 985f, 800f);
			_0x39816f6f94f385ad(iVar0, 2565f, 1537.5f, 200f, 0f, 0f, -47f, 1000f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 3025f, 1632.5f, 200f, 0f, 0f, -19f, 1500f, 1000f, 800f);
			_0x39816f6f94f385ad(iVar0, 3730f, 2300f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			break;
		case 11:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_SCARLETT_MEADOWS");
			_0x39816f6f94f385ad(iVar0, 1025f, -642.5f, 150f, 0f, 0f, -42f, 600f, 800f, 700f);
			_0x39816f6f94f385ad(iVar0, 1335f, -407.5f, 150f, 0f, 0f, -71f, 717f, 325f, 700f);
			_0x39816f6f94f385ad(iVar0, 1585f, -330f, 150f, 0f, 0f, -111f, 400f, 625f, 700f);
			_0x39816f6f94f385ad(iVar0, 1250f, -1702.5f, 150f, 0f, 0f, 0f, 594f, 2000f, 700f);
			_0x39816f6f94f385ad(iVar0, 612.5f, -1337.5f, 150f, 0f, 0f, 0f, 850f, 1200f, 700f);
			_0x39816f6f94f385ad(iVar0, 677.5f, -2270f, 150f, 0f, 0f, 45f, 1000f, 700f, 700f);
			_0x39816f6f94f385ad(iVar0, 1408.3f, -1687.9f, 150f, 0f, 0f, 5f, 450f, 1300f, 700f);
			_0x39816f6f94f385ad(iVar0, 1600f, -545f, 100f, 0f, 0f, 20f, 325f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, 1807.467f, -1544.09f, 150f, 0f, 0f, -72f, 309f, 562f, 700f);
			_0x39816f6f94f385ad(iVar0, 1705.656f, -1257.077f, 150f, 0f, 0f, 20f, 400f, 50f, 700f);
			_0x39816f6f94f385ad(iVar0, 1946.824f, -1264.023f, 150f, 0f, 0f, 21f, 100f, 176f, 700f);
			_0x39816f6f94f385ad(iVar0, 1735.228f, -1334.945f, 150f, 0f, 0f, 20f, 295f, 150f, 700f);
			_0x39816f6f94f385ad(iVar0, 1902.5f, -432.5f, 150f, 0f, 0f, -111f, 365f, 75f, 700f);
			_0x39816f6f94f385ad(iVar0, 1827.5f, -580f, 150f, 0f, 0f, 20f, 75f, 75f, 700f);
			_0x39816f6f94f385ad(iVar0, 1571.834f, -1097.489f, 150f, 0f, 0f, 20f, 85f, 371f, 700f);
			_0x39816f6f94f385ad(iVar0, 1661.989f, -1972.796f, 150f, 0f, 0f, 18f, 85f, 371f, 700f);
			break;
		case 12:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_TALL_TREES");
			_0x39816f6f94f385ad(iVar0, -1762.5f, -2030f, 150f, 0f, 0f, 16f, 275f, 400f, 700f);
			_0x39816f6f94f385ad(iVar0, -1445f, -1987.5f, 150f, 0f, 0f, -42f, 125f, 50f, 700f);
			_0x39816f6f94f385ad(iVar0, -1600f, -1882.5f, 150f, 0f, 0f, 20f, 200f, 335f, 700f);
			_0x39816f6f94f385ad(iVar0, -1927.5f, -1750f, 150f, 0f, 0f, 30f, 690f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -2052.5f, -1517.5f, 150f, 0f, 0f, 15f, 715f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -2162.5f, -1237.5f, 150f, 0f, 0f, -45f, 500f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -2272.5f, -1057.5f, 150f, 0f, 0f, -65f, 519f, 530f, 700f);
			_0x39816f6f94f385ad(iVar0, -2865f, -1112.5f, 150f, 0f, 0f, 167f, 1250f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, -1972.5f, -2022.5f, 150f, 0f, 0f, 44f, 300f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -1875f, -2087.5f, 150f, 0f, 0f, 70f, 300f, 180f, 700f);
			_0x39816f6f94f385ad(iVar0, -2140f, -1950f, 150f, 0f, 0f, 70f, 200f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -2210f, -1890f, 150f, 0f, 0f, 24f, 200f, 175f, 700f);
			_0x39816f6f94f385ad(iVar0, -1397.5f, -2027.5f, 150f, 0f, 0f, 20f, 45f, 25f, 700f);
			break;
		case 15:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_CHOLLA_SPRINGS");
			_0x39816f6f94f385ad(iVar0, -3305f, -3380f, 150f, 0f, 0f, 123f, 300f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -3335f, -3582.5f, 150f, 0f, 0f, 170f, 225f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -3200f, -3515f, 150f, 0f, 0f, -154f, 235f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -3515f, -3190f, 150f, 0f, 0f, 139f, 450f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -3930f, -2912.5f, 150f, 0f, 0f, 154f, 700f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -4537.5f, -2665f, 150f, 0f, 0f, -178f, 1000f, 800f, 700f);
			_0x39816f6f94f385ad(iVar0, -4967.5f, -2390f, 150f, 0f, 0f, -148f, 300f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -4617.5f, -2080f, 150f, 0f, 0f, 175f, 1000f, 700f, 700f);
			_0x39816f6f94f385ad(iVar0, -3747.5f, -2030f, 150f, 0f, 0f, 99f, 700f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, -3282.5f, -3050f, 150f, 0f, 0f, 107f, 750f, 400f, 700f);
			_0x39816f6f94f385ad(iVar0, -3370f, -2690f, 150f, 0f, 0f, 124f, 100f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, -3355f, -2345f, 150f, 0f, 0f, 69f, 200f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -3657.5f, -2610f, 150f, 0f, 0f, 98f, 500f, 850f, 700f);
			break;
		case 13:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GAPTOOTH_RIDGE");
			_0x39816f6f94f385ad(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			_0x39816f6f94f385ad(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			_0x39816f6f94f385ad(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			break;
		case 16:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_HENNIGAS_STEAD");
			_0x39816f6f94f385ad(iVar0, -2510f, -2542.5f, 150f, 0f, 0f, 44f, 1200f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -1632.5f, -2480f, 150f, 0f, 0f, 16f, 275f, 535f, 700f);
			_0x39816f6f94f385ad(iVar0, -1990f, -2525f, 150f, 0f, 0f, 70f, 600f, 850f, 700f);
			_0x39816f6f94f385ad(iVar0, -1452.5f, -2342.5f, 150f, 0f, 0f, 16f, 150f, 625f, 700f);
			_0x39816f6f94f385ad(iVar0, -1480f, -2177.5f, 150f, 0f, 0f, 20f, 165f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -1487.5f, -2087.5f, 150f, 0f, 0f, -42f, 60f, 150f, 700f);
			_0x39816f6f94f385ad(iVar0, -1350f, -2330f, 150f, 0f, 0f, 20f, 165f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -1562.5f, -2652.5f, 150f, 0f, 0f, 28f, 500f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -2445f, -2795f, 150f, 0f, 0f, 107f, 750f, 1350f, 700f);
			_0x39816f6f94f385ad(iVar0, -2675f, -2177.5f, 150f, 0f, 0f, 70f, 600f, 900f, 700f);
			_0x39816f6f94f385ad(iVar0, -2947.5f, -2465f, 150f, 0f, 0f, 98f, 150f, 600f, 700f);
			_0x39816f6f94f385ad(iVar0, -3097.5f, -1977.5f, 150f, 0f, 0f, 99f, 800f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -2467.5f, -3145f, 150f, 0f, 0f, 123f, 150f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -2577.5f, -3182.5f, 150f, 0f, 0f, 85f, 150f, 150f, 700f);
			_0x39816f6f94f385ad(iVar0, -2985f, -2502.5f, 150f, 0f, 0f, 124f, 150f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -2942.5f, -2457.5f, 150f, 0f, 0f, 69f, 175f, 600f, 700f);
			break;
		case 14:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_RIO_BRAVO");
			_0x39816f6f94f385ad(iVar0, -3540f, -3635f, 150f, 0f, 0f, 123f, 125f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -3880f, -3687.5f, 150f, 0f, 0f, 105f, 225f, 625f, 700f);
			_0x39816f6f94f385ad(iVar0, -4495f, -3610f, 150f, 0f, 0f, 96f, 600f, 625f, 700f);
			_0x39816f6f94f385ad(iVar0, -4922.5f, -3742.5f, 150f, 0f, 0f, 131f, 500f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5135f, -3900f, 150f, 0f, 0f, 22f, 200f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5205f, -3887.5f, 150f, 0f, 0f, -16f, 300f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5350f, -3835f, 150f, 0f, 0f, -32f, 150f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5125f, -3500f, 150f, 0f, 0f, 175f, 300f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -4975f, -3360f, 150f, 0f, 0f, 137f, 450f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, -4645f, -3220f, 150f, 0f, 0f, -178f, 735f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -4205f, -3420f, 150f, 0f, 0f, 154f, 450f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -3795f, -3510f, 150f, 0f, 0f, 139f, 450f, 275f, 700f);
			_0x39816f6f94f385ad(iVar0, -3992.5f, -3567.5f, 150f, 0f, 0f, 0f, 200f, 200f, 700f);
			break;
	}
	(*Global_1896622)[iParam0]->f_1 = iVar0;
	return iVar0;
}

void func_284(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_285(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, 231, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, 231, 16384, 0, -1, -1, 0);
	_0x2161278c6322f740(231, 16384, 0, -1, -1, iParam0);
}

void func_286(int iParam0, int iParam1)
{
	(*Global_1896622)[iParam0] = (Global_1896622[iParam0] - (Global_1896622[iParam0] && iParam1));
}

void func_287(int iParam0)
{
	if (func_916(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			func_321((iVar1 + iVar0), 1);
			iVar0++;
		}
	}
}

void func_288(int iParam0)
{
	if (func_66() != -1)
	{
		return;
	}
	if (func_916(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			func_917((iVar1 + iVar0), 0);
			iVar0++;
		}
	}
}

bool func_289()
{
	return &Global_1048577;
}

bool func_290(int iParam0)
{
	return func_918(&(Global_3145858->f_6), iParam0);
}

bool func_291(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_292(int iParam0)
{
	return iParam0;
}

void func_293(int iParam0, bool bParam1, bool bParam2)
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

void func_294(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
		Var0.f_1 = iParam0;
		Var0.f_2 = to_float(get_entity_health(player_ped_id()));
		Var0.f_3 = 1;
		Var0.f_5 = iParam1;
		Var0.f_12 = (iParam1 != 0 && _is_weapon_melee(iParam1));
		func_919(&Var0, &(Global_1102219->f_3599));
		_0x1ce875505d45338a(player_ped_id(), iParam0, iParam1);
	}
}

void func_295(int iParam0, bool bParam1)
{
	if (!func_920(&(Var30.f_6), &Var30))
	{
		Var30.f_6 = { (Global_1071686->f_23887.f_366[get_random_int_in_range(0, 15)])->f_2 };
		Var30 = (IntToFloat(get_random_int_in_range(0, 359)) * 1f);
	}
	Var30.f_5 = 1;
	func_921(88);
	if (func_922(iParam0, &uVar0))
	{
		func_923(&uVar0, &Var30, 1, 1, 1);
		if (bParam1)
		{
			func_924(0);
		}
		return;
	}
	func_925(Var30.f_6, Var30, -1082130432, -1082130432, 1, 1, 1);
	if (bParam1)
	{
		func_924(0);
	}
}

void func_296(char* sParam0)
{
	if (is_string_null_or_empty(sParam0))
	{
		return;
	}
	iVar0 = get_hash_key(sParam0);
	if (_get_number_of_references_of_script_with_name_hash(iVar0) != 0)
	{
		script_thread_iterator_reset();
		iVar1 = script_thread_iterator_get_next_thread_id();
		while (iVar1 != 0)
		{
			if (iVar0 == _get_hash_of_thread(iVar1))
			{
				if (is_thread_active(iVar1, false))
				{
					force_cleanup_for_thread_with_this_id(iVar1, 523);
				}
			}
			iVar1 = script_thread_iterator_get_next_thread_id();
		}
	}
}

int func_297(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

bool func_298(int iParam0)
{
	if (!func_406(iParam0))
	{
		return false;
	}
	return func_926(iParam0, 2);
}

void func_299(int iParam0, int iParam1)
{
	if (!func_406(iParam0))
	{
		return;
	}
	func_419(func_297(iParam0), iParam1);
}

int func_300(vector3 vParam0, int iParam3)
{
	iVar0 = func_108();
	if (func_311(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1887339)[iVar0]->f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_927(vParam0, iParam3);
}

bool func_301(int iParam0)
{
	if (!func_311(iParam0))
	{
		return false;
	}
	return (((*Global_1887339)[iParam0]->f_21 == 1 || (*Global_1887339)[iParam0]->f_21 == 2) && !func_928(iParam0));
}

bool func_302()
{
	return func_263(&Global_1940258, 8192);
}

int func_303(int iParam0)
{
	if (!func_401(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_13 == -1)
	{
		return &(Global_39.f_190[iParam0]);
	}
	iVar0 = 0;
	Var1 = { func_106(player_id()) };
	_0x4ef23e04a0c8ff51(&Var1, &uVar8);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1071686->f_21325[iVar0] = uVar8;
		iVar0++;
	}
	return &(Global_1071686->f_21325[iParam0]);
}

void func_304(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (!func_929())
	{
		return;
	}
	sVar1 = func_930(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (is_string_null_or_empty(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_401(iParam4))
	{
		if (func_311(iParam0))
		{
			iParam4 = func_297(func_931(iParam0));
		}
		else
		{
			iParam4 = func_297(iParam1);
		}
	}
	if (func_401(iParam4))
	{
		iVar3 = func_303(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_933(func_932(iParam2));
	}
	else if ((func_926(iParam1, 2) || func_411(iParam4, 2)) && !Global_1893587->f_9)
	{
		if (does_entity_exist(player_ped_id()))
		{
			if (is_ped_male(player_ped_id()))
			{
				sVar2 = _create_var_string(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = _create_var_string(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1893587->f_9 = 1;
	}
	else if ((func_311(iParam0) && func_424(iParam0, 16777216)) && !Global_1893587->f_9)
	{
		sVar2 = _create_var_string(2, "LAW_UI_RESTRICTED_AREA");
		Global_1893587->f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1893587->f_9)
	{
		sVar2 = _create_var_string(2, "REGION_BOUNTY", iVar3);
		Global_1893587->f_9 = 1;
	}
	else
	{
		iVar4 = func_935(func_934());
		iVar5 = func_936(func_934());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = _get_temperature_at_coords(Global_35);
		if (!_should_use_24_hour_clock())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!_should_use_metric_temperature())
			{
				fVar7 = func_937(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(674, sVar8, iVar4, func_938(&cVar6, 109029619), sVar9, func_938(&cVar10, 109029619));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!_should_use_metric_temperature())
			{
				fVar7 = func_937(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(162, sVar8, iVar4, func_938(&cVar6, 109029619), func_938(&cVar10, 109029619));
		}
		Global_1893587->f_9 = 0;
	}
	Global_1939161->f_145 = func_939(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_305(int iParam0)
{
	if (!func_406(iParam0))
	{
		return;
	}
	iVar0 = func_297(iParam0);
	func_417(iVar0);
	func_418(iVar0, func_303(iVar0));
}

void func_306(int iParam0)
{
	if (func_940(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			func_321((iVar1 + iVar0), 1);
			iVar0++;
		}
	}
}

void func_307(int iParam0)
{
	Global_1896622->f_41 = iParam0;
}

int func_308(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2025841068;
		case 1:
			return 822658194;
		case 2:
			return 1308232528;
		case 3:
			return 1835499550;
		case 4:
			return 476637847;
		case 6:
			return -120156735;
		case 7:
			return 1645618177;
		case 8:
			return -512529193;
		case 9:
			return 131399519;
		case 10:
			return 178647645;
		case 11:
			return -864275692;
		case 12:
			return 1684533001;
		case 13:
			return -2066240242;
		case 14:
			return -2145992129;
		case 15:
			return -108848014;
		case 16:
			return 892930832;
		default:
			break;
	}
	return -1;
}

void func_309(int iParam0)
{
	if (func_66() != -1)
	{
		return;
	}
	if (func_940(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			if (func_941((iVar1 + iVar0)))
			{
				func_917((iVar1 + iVar0), 0);
			}
			iVar0++;
		}
	}
}

void func_310(int iParam0)
{
	if (!func_406(iParam0))
	{
		return;
	}
	func_942();
	switch (iParam0)
	{
		case 0:
			func_943(5, -411244401);
			func_943(10, -530650579);
			func_943(11, -411244401);
			func_943(12, -79992523);
			func_943(13, -1608748833);
			func_943(7, -1243003160);
			break;
		case 1:
			func_943(5, -431794078);
			func_943(10, -530650579);
			func_943(11, 2024364203);
			func_943(12, 1131021608);
			func_943(13, -2064541187);
			func_943(7, -604466256);
			break;
		case 2:
			func_943(5, -715307145);
			func_943(10, 1784992423);
			func_943(11, -411244401);
			func_943(12, 1784992423);
			func_943(13, -1608748833);
			func_943(7, 486487548);
			break;
		case 3:
			func_943(5, -2064541187);
			func_943(10, -530650579);
			func_943(11, 2024364203);
			func_943(12, 1131021608);
			func_943(13, -2064541187);
			func_943(7, 506825778);
			break;
		case 4:
			func_943(5, -530650579);
			func_943(10, -530650579);
			func_943(11, 2024364203);
			func_943(12, -1897088481);
			func_943(13, -2064541187);
			func_943(7, -604466256);
			func_943(8, 239028334);
			break;
		case 5:
		case 6:
		case 7:
			func_943(5, -530650579);
			func_943(10, -1608748833);
			func_943(11, 1455354960);
			func_943(12, -530650579);
			func_943(13, -1608748833);
			func_943(7, 188176855);
			break;
		case 8:
			func_943(5, -79992523);
			func_943(10, -79992523);
			func_943(11, 796850253);
			func_943(12, -838827775);
			func_943(13, -79992523);
			func_943(7, -1063650279);
			break;
		case 9:
			func_943(5, -530650579);
			func_943(10, -530650579);
			func_943(11, 1455354960);
			func_943(12, -79992523);
			func_943(13, -2064541187);
			func_943(7, -604466256);
			func_943(8, 239028334);
			break;
		case 10:
			func_943(5, -2064541187);
			func_943(10, -530650579);
			func_943(11, 1455354960);
			func_943(12, 1131021608);
			func_943(13, -2064541187);
			func_943(7, -604466256);
			break;
		case 11:
			func_943(5, -530650579);
			func_943(10, -1074047115);
			func_943(11, -1608748833);
			func_943(12, -1897088481);
			func_943(13, -1608748833);
			func_943(7, 662736559);
			break;
		case 12:
			func_943(5, -530650579);
			func_943(10, -1608748833);
			func_943(11, -1504621559);
			func_943(12, 1131021608);
			func_943(13, -2064541187);
			func_943(7, 486487548);
			break;
	}
}

bool func_311(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_312(int iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 81:
			if (func_403(iParam0))
			{
				return 305496830;
			}
			else
			{
				return -1482428221;
			}
			break;
		case 111:
			if (func_403(iParam0))
			{
				return -1323821455;
			}
			else
			{
				return -1994249944;
			}
			break;
		case 5:
			if (func_66() != -1 && func_944() == 1339372314)
			{
				return 1339372314;
			}
			else
			{
				return 1559741032;
			}
			break;
		case 66:
			return 60667583;
		case 83:
			return 1758133584;
		case 26:
			return -577559008;
		case 40:
			if (!bParam1 || func_66() != -1)
			{
				return 1624541293;
			}
			if (func_945(44))
			{
				return 1624541293;
			}
			else
			{
				return 1716860278;
			}
			break;
		case 98:
			if (func_66() != -1)
			{
				return 1178102426;
			}
			else
			{
				return 1637569166;
			}
			break;
		case 70:
			return -867798278;
		case 74:
			return 1543937523;
		case 99:
			return 1030875135;
		case 101:
			return -201437056;
		case 62:
			return 794246846;
		case 3:
			return -968357677;
		case 33:
			return 728480338;
		case 87:
			if (func_66() != -1)
			{
				return 1178102426;
			}
			else
			{
				return 725489698;
			}
			break;
		case 37:
			return 183652754;
		case 60:
			if (func_66() != -1)
			{
				return -1147969487;
			}
			else
			{
				return 2056744450;
			}
			break;
		case 135:
			return 963280223;
		case 127:
			return -256309418;
		case 131:
			return 1666986024;
		case 121:
			return 251328732;
		case 136:
			if (func_66() != -1)
			{
				return -877373104;
			}
			if (!bParam1)
			{
				return 1024208566;
			}
			if (func_945(44))
			{
				return 1024208566;
			}
			else
			{
				return 1640255731;
			}
			break;
		case 22:
			return 965626876;
		case 39:
			return -497792649;
		case 4:
		case 9:
		case 45:
		case 63:
		case 76:
		case 84:
		case 104:
			break;
		case 116:
			return -1990305778;
	}
	if (bParam2)
	{
		iVar0 = func_946(iParam0);
		if (iVar0 != -1)
		{
			return func_313(iVar0, bParam1);
		}
	}
	return 0;
}

int func_313(int iParam0, bool bParam1)
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
			if (!bParam1 || func_66() != -1)
			{
				return -1308265478;
			}
			if (func_945(44))
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
			if (!bParam1 || func_66() != -1)
			{
				return -650528936;
			}
			if (func_945(44))
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
			if (!bParam1 || func_66() != -1)
			{
				return -877373104;
			}
			if (func_945(44))
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

void func_314(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		iParam0 = func_313(func_63(Global_35), 1);
	}
	if (func_947(iParam0, iParam1))
	{
	}
}

void func_315(float fParam0, float fParam1, float fParam2, float fParam3)
{
	Global_1893587->f_182 = fParam0;
	Global_1893587->f_183 = fParam1;
	Global_1893587->f_184 = fParam2;
	Global_1893587->f_185 = fParam3;
}

bool func_316(int iParam0)
{
	iVar0 = func_948(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_949(iVar1))
	{
		if (Global_1071686->f_19648.f_24 && !func_950(iParam0))
		{
			return false;
		}
		return (is_bit_set(&(Global_1071686->f_19648[iVar1]), iVar2) || is_bit_set(&(Global_39.f_110[iVar1]), iVar2));
	}
	return is_bit_set(&(Global_39.f_110[iVar1]), iVar2);
}

void func_317(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_951(1497516462);
			func_952(2016141805);
			func_952(1010885152);
			func_952(-502324015);
			break;
		case 2016141805:
			func_952(1497516462);
			func_951(2016141805);
			func_952(1010885152);
			func_952(-502324015);
			break;
		case 1010885152:
			func_952(1497516462);
			func_952(2016141805);
			func_951(1010885152);
			func_952(-502324015);
			break;
		case -502324015:
			func_952(1497516462);
			func_952(2016141805);
			func_952(1010885152);
			func_951(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_952(-538889627);
			func_952(-538880323);
			func_952(-1056767524);
			func_951(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_953();
			func_951(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_954();
			func_951(iParam0);
			break;
		case 2019386373:
			func_952(-664252410);
			func_952(2109952320);
			func_951(2019386373);
			break;
		case -664252410:
			func_952(2019386373);
			func_952(2109952320);
			func_951(-664252410);
			break;
		case 2109952320:
			func_952(2019386373);
			func_952(-664252410);
			func_951(2109952320);
			break;
		case -1674179981:
			func_952(-1835851517);
			func_952(-1838352012);
			func_951(-1674179981);
			break;
		case -1835851517:
			func_952(-1674179981);
			func_952(-1838352012);
			func_951(-1835851517);
			break;
		case -1838352012:
			func_952(-1674179981);
			func_952(-1835851517);
			func_951(-1838352012);
			break;
		case -1717960576:
			func_952(210001842);
			func_951(-1717960576);
			break;
		case 210001842:
			func_952(-1717960576);
			func_951(210001842);
			break;
		case -150493654:
			func_952(-1271608261);
			func_952(1846061697);
			func_952(-1145519186);
			func_951(-150493654);
			break;
		case -1271608261:
			func_952(-150493654);
			func_952(1846061697);
			func_952(-1145519186);
			func_951(-1271608261);
			break;
		case 1846061697:
			func_952(-150493654);
			func_952(-1271608261);
			func_952(-1145519186);
			func_951(1846061697);
			break;
		case -1145519186:
			func_952(-150493654);
			func_952(-1271608261);
			func_952(1846061697);
			func_951(-1145519186);
			break;
		case 1766284049:
			func_952(280705402);
			func_952(1926308480);
			func_951(1766284049);
			break;
		case 280705402:
			func_952(1766284049);
			func_952(1926308480);
			func_951(280705402);
			break;
		case 1926308480:
			func_952(1766284049);
			func_952(280705402);
			func_951(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_952(439465264);
				func_951(1609506757);
			}
			else
			{
				func_952(1609506757);
				func_952(439465264);
			}
			break;
		case 439465264:
			if (func_316(1609506757))
			{
				if (bParam1)
				{
					func_951(439465264);
				}
				else
				{
					func_952(439465264);
				}
			}
			break;
		case 1822001510:
			func_952(-1612662716);
			func_951(1822001510);
			break;
		case -1612662716:
			func_952(1822001510);
			func_951(-1612662716);
			break;
		case 1306158345:
			func_952(1952610440);
			func_952(-223469678);
			func_952(-404698347);
			func_952(1517904467);
			func_951(1306158345);
			break;
		case 1952610440:
			func_952(1306158345);
			func_952(-223469678);
			func_952(-404698347);
			func_952(1517904467);
			func_951(1952610440);
			break;
		case -223469678:
			func_952(1306158345);
			func_952(1952610440);
			func_952(-404698347);
			func_952(1517904467);
			func_951(-223469678);
			break;
		case -404698347:
			func_952(1306158345);
			func_952(1952610440);
			func_952(-223469678);
			func_952(1517904467);
			func_951(-404698347);
			break;
		case 1517904467:
			func_952(1306158345);
			func_952(1952610440);
			func_952(-223469678);
			func_952(-404698347);
			func_951(1517904467);
			break;
		case 1376646519:
			func_952(931649776);
			func_952(-434590080);
			func_952(1743048395);
			func_952(449774763);
			func_951(1376646519);
			break;
		case 931649776:
			func_952(1376646519);
			func_952(-434590080);
			func_952(1743048395);
			func_952(449774763);
			func_951(931649776);
			break;
		case -434590080:
			func_952(1376646519);
			func_952(931649776);
			func_952(1743048395);
			func_952(449774763);
			func_951(-434590080);
			break;
		case 1743048395:
			func_952(1376646519);
			func_952(931649776);
			func_952(-434590080);
			func_952(449774763);
			func_951(1743048395);
			break;
		case 449774763:
			func_952(1376646519);
			func_952(931649776);
			func_952(-434590080);
			func_952(1743048395);
			func_951(449774763);
			break;
		case -1414537028:
			func_952(38162571);
			func_952(1350391819);
			func_952(54073871);
			func_951(-1414537028);
			break;
		case 38162571:
			func_952(-1414537028);
			func_952(1350391819);
			func_952(54073871);
			func_951(38162571);
			break;
		case 1350391819:
			func_952(-1414537028);
			func_952(38162571);
			func_952(54073871);
			func_951(1350391819);
			break;
		case 54073871:
			func_952(-1414537028);
			func_952(38162571);
			func_952(1350391819);
			func_951(54073871);
			break;
		case 198200492:
			func_951(198200492);
			func_952(-1124061431);
			func_952(52706132);
			func_952(-259123672);
			break;
		case -1124061431:
			func_952(198200492);
			func_951(-1124061431);
			func_952(52706132);
			func_952(-259123672);
			break;
		case 52706132:
			func_952(198200492);
			func_952(-1124061431);
			func_951(52706132);
			func_952(-259123672);
			break;
		case -259123672:
			func_952(198200492);
			func_952(-1124061431);
			func_952(52706132);
			func_951(-259123672);
			break;
		case -919512195:
			func_951(-919512195);
			func_952(-1925798111);
			func_952(420709909);
			func_952(1703426636);
			break;
		case -1925798111:
			func_951(-1925798111);
			func_952(-919512195);
			func_952(420709909);
			func_952(1703426636);
			break;
		case 420709909:
			func_951(420709909);
			func_952(-919512195);
			func_952(-1925798111);
			func_952(1703426636);
			break;
		case 1703426636:
			func_951(1703426636);
			func_952(-919512195);
			func_952(-1925798111);
			func_952(420709909);
			break;
		case -1223121209:
			func_951(-1223121209);
			func_952(630808005);
			break;
		case 630808005:
			func_951(630808005);
			func_952(-1223121209);
			break;
		case 1453909576:
			func_951(1453909576);
			func_952(1643531967);
			break;
		case 1643531967:
			func_951(1643531967);
			func_952(1453909576);
			break;
		case 0:
			func_951(0);
			func_952(473295046);
			func_952(-1738165526);
			break;
		case 473295046:
			func_951(473295046);
			func_952(0);
			func_952(-1738165526);
			break;
		case -1738165526:
			func_951(-1738165526);
			func_952(0);
			func_952(473295046);
			break;
		case 932909855:
			func_951(932909855);
			func_952(2051822093);
			break;
		case 2051822093:
			func_951(2051822093);
			func_952(932909855);
			break;
		case 405586984:
			func_951(405586984);
			func_952(1509509592);
			func_952(-959357075);
			func_952(-1311865656);
			break;
		case 1509509592:
			func_951(1509509592);
			func_952(405586984);
			func_952(-959357075);
			func_952(-1311865656);
			break;
		case -959357075:
			func_951(-959357075);
			func_952(1509509592);
			func_952(405586984);
			func_952(-1311865656);
			break;
		case -1311865656:
			func_951(-1311865656);
			func_952(1509509592);
			func_952(-959357075);
			func_952(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_951(-524145696);
			}
			else
			{
				func_952(-524145696);
			}
			func_952(1626481264);
			func_952(282809459);
			break;
		case 282809459:
			func_951(282809459);
			func_952(1626481264);
			func_952(-524145696);
			break;
		case 1626481264:
			func_951(1626481264);
			func_952(-524145696);
			func_952(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_951(885203519);
			}
			else
			{
				func_952(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_951(-1080627546);
			}
			else
			{
				func_952(-1080627546);
			}
			break;
		case -510945576:
			if (bParam1)
			{
				func_951(-510945576);
			}
			else
			{
				func_952(-510945576);
				func_955(385812466);
				func_955(-1201452352);
			}
			break;
		default:
			if (bParam1)
			{
				func_951(iParam0);
			}
			else
			{
				func_952(iParam0);
			}
			break;
	}
}

bool func_318(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_3 & 128 != 0;
	}
	return func_956(128, iParam0);
}

int func_319()
{
	iVar0 = 255;
	iVar1 = func_957();
	if (func_958(iVar1))
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

int func_320(int iParam0)
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

int func_321(int iParam0, bool bParam1)
{
	if (!func_959(iParam0))
	{
		return 0;
	}
	if (!func_960(iParam0, 2))
	{
		return 0;
	}
	if (func_961(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_962(iParam0)))
	{
		return 1;
	}
	if (func_960(iParam0, 1) && !bParam1)
	{
		func_963(iParam0, 128);
		return 1;
	}
	func_964(iParam0, 129);
	func_965(iParam0);
	_0xfc77c5b44d5ff7c0(func_962(iParam0));
	func_966(iParam0, 0);
	return 1;
}

bool func_322(int iParam0, bool bParam1, bool bParam2)
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
		if (func_967())
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
	if (iParam0 == 0 && func_326(func_68(0)))
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
	switch (func_70(func_68(0)))
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

int func_323(struct<2> Param0)
{
	if (!func_326(Param0))
	{
		return -1;
	}
	iVar0 = func_968(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

bool func_324(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_325(int iParam0, int iParam1)
{
	func_969(iParam0, iParam1);
}

bool func_326(struct<2> Param0)
{
	if (!func_970(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_971(Param0))
	{
		return false;
	}
	return true;
}

bool func_327(struct<2> Param0)
{
	iVar0 = func_323(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

bool func_328(int iParam0, int iParam1)
{
	return (func_972(iParam0) && ((*Global_1900838)[iParam0]->f_1 && iParam1) != 0);
}

int func_329(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_973(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

bool func_330(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_331(int iParam0, bool bParam1)
{
	if (!func_330(iParam0))
	{
		return;
	}
	if (func_974((*Global_1835011)[iParam0], 8192))
	{
		bVar0 = true;
	}
	(*Global_1835011)[iParam0]->f_58 = 0;
	if (!bParam1 && bVar0)
	{
		(*Global_1835011)[iParam0]->f_58 |= 2;
		(*Global_1835011)[iParam0]->f_58 |= 8192;
	}
}

void func_332(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	if (!func_972(iParam1))
	{
		iParam1 = func_976(func_975(iParam0));
		if (!func_972(iParam1))
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
		func_977(iParam0, iParam5, iParam1);
	}
	if (func_328(iParam1, 48))
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
		func_978((*Global_1835011)[iParam0]->f_1);
	}
	else
	{
		func_979(iParam1, 3831);
	}
	(*Global_1835011)[iParam0]->f_71 = 0;
}

void func_333(int iParam0)
{
	MemCopy(&uVar0, {(*Global_1835011)[iParam0]->f_4}, 3);
	if ((func_66() != -1 && !is_string_null_or_empty(&uVar0)) && is_thread_active((*Global_1835011)[iParam0]->f_8, false))
	{
		_0x7de4643157ad646c((*Global_1835011)[iParam0]->f_8);
	}
}

void func_334()
{
	iVar0 = 0;
	while (iVar0 < Global_1878407->f_7168)
	{
		if (!is_bit_set(&(Global_1878407->f_7169.f_1[iVar0]), 2))
		{
			if (is_bit_set(&(Global_1878407->f_7169.f_1[iVar0]), 1))
			{
				switch (&Global_1878407->f_1811[Global_1878407->f_7169.f_1[iVar0]->f_1])
				{
					case -2093459088:
						iVar1 = Global_1878407->f_1811[Global_1878407->f_7169.f_1[iVar0]->f_1]->f_2;
						if (func_330(iVar1))
						{
							func_331(iVar1, 0);
							func_332(iVar1, -1, 0, 1, 0, 0, 0);
							if (does_blip_exist((*Global_1835011)[iVar1]->f_28))
							{
								remove_blip(&((*Global_1835011)[iVar1]->f_28));
							}
						}
						break;
				}
			}
		}
		iVar0++;
	}
}

bool func_335()
{
	return true;
	if (Global_1572887->f_13 == 0)
	{
		return true;
	}
	return Global_39.f_1;
}

bool func_336(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

void func_337(int iParam0)
{
	get_event_data(0, iParam0, &vVar0, 9);
	if (!does_entity_exist(vVar0.x) || is_entity_dead(vVar0.x))
	{
		return;
	}
	if (vVar0.z != 0)
	{
		if (_0x705be297eebdb95d(vVar0.z))
		{
			decor_set_int(vVar0.x, "last_gun_damage_time_in_ms", func_980());
			if (is_entity_a_ped(vVar0.y))
			{
				if (get_ped_index_from_entity_index(vVar0.y) == Global_34)
				{
					decor_set_bool(vVar0.x, "DamagedByPlayer", true);
				}
			}
		}
	}
}

void func_338(int iParam0)
{
	get_event_data(0, iParam0, &vVar0, 9);
	if (!does_entity_exist(vVar0.x))
	{
		return;
	}
	if (is_entity_a_ped(vVar0.x))
	{
		iVar9 = get_ped_index_from_entity_index(vVar0.x);
		if (!get_ped_config_flag(iVar9, 385, false))
		{
			iVar10 = func_981(get_ped_index_from_entity_index(vVar0.x), 1);
			if (iVar10 != -1)
			{
				func_982(iVar10);
				if (_0x40851bcc33acd9ab(iVar9) && is_ped_a_player(get_ped_index_from_entity_index(vVar0.y)))
				{
				}
			}
			if (_0xff584f097c17fa8f() && is_entity_a_ped(vVar0.y))
			{
				if (_0x118d476a6f1a13f1(iVar9) && vVar0.z == -1553120962)
				{
					bVar11 = true;
				}
				if (((iVar9 != Global_34 && !is_entity_dead(vVar0.y)) && get_ped_index_from_entity_index(vVar0.y) == Global_34) && !bVar11)
				{
					animpostfx_play("PedKill");
				}
			}
		}
	}
}

void func_339(int iParam0)
{
	get_event_data(0, iParam0, &Var0, 3);
	if (!does_entity_exist(Var0.f_1))
	{
		return;
	}
	iVar3 = network_get_player_index_from_ped(Var0.f_1);
	if (!_network_is_player_index_valid(iVar3) || !network_is_player_active(iVar3))
	{
		return;
	}
	if (func_983(&Var0))
	{
		return;
	}
	switch (Var0)
	{
		case 1437412331:
			if (iVar3 != Global_1296859->f_10)
			{
				func_984(-1648877470, iVar3);
				func_985(&Var0);
			}
			else
			{
				func_389(-1648877470, 0, 0);
			}
			break;
		case -2051405571:
		case 1923998736:
			if (iVar3 != Global_1296859->f_10)
			{
				func_984(-545299531, iVar3);
				func_985(&Var0);
			}
			else
			{
				func_389(-545299531, 0, 0);
			}
			break;
		case -999071359:
		case -857617219:
		case 416962030:
			if (iVar3 != Global_1296859->f_10)
			{
				func_984(-1598949067, iVar3);
				func_985(&Var0);
			}
			else
			{
				func_389(-1598949067, 0, 0);
			}
			break;
		case 1746095559:
			if (iVar3 != Global_1296859->f_10)
			{
				func_984(478308321, iVar3);
				func_985(&Var0);
			}
			else
			{
				func_389(478308321, 0, 0);
			}
			break;
		case -2130852007:
		case -102241052:
			if (iVar3 != Global_1296859->f_10)
			{
				func_984(440583097, iVar3);
				func_985(&Var0);
			}
			else
			{
				func_389(440583097, 0, 0);
			}
			break;
	}
}

void func_340(int iParam0)
{
}

void func_341(int iParam0)
{
}

void func_342(int iParam0)
{
	if (!_unlock_is_unlocked(-1585489042))
	{
		return;
	}
	func_986(52);
	if (!get_event_data(0, iParam0, &Var0, 2))
	{
		return;
	}
	if ((Global_1296859->f_12 || Global_1296859->f_88[&Global_1296859]) // PointerArith)
	{
		return;
	}
	iVar2 = Var0;
	if (!does_entity_exist(iVar2))
	{
		return;
	}
	if (is_entity_dead(iVar2))
	{
		return;
	}
	if (!is_entity_a_ped(iVar2))
	{
		return;
	}
	iVar3 = get_ped_index_from_entity_index(iVar2);
	iVar4 = player_ped_id();
	if (iVar3 != iVar4)
	{
		return;
	}
	switch (Var0.f_1)
	{
		case 1807639261:
			return;
		case -72209530:
			iVar5 = 0;
			break;
		case 1704957293:
			iVar5 = 0;
			break;
		case 869278708:
			iVar5 = 4;
			break;
		case 640210656:
			iVar5 = 0;
			break;
		case 1051485804:
			iVar5 = 2;
			break;
		default:
			iVar5 = 0;
			break;
	}
	decor_set_bool(iVar4, "Whistling", true);
	func_987(4);
}

void func_343(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (is_ped_injured(Global_34))
	{
		return;
	}
	iVar4 = Var0;
	if (!does_entity_exist(iVar4))
	{
		return;
	}
	if (iVar4 != player_ped_id())
	{
		return;
	}
	iVar5 = Var0.f_1;
	if (!does_entity_exist(iVar5))
	{
		return;
	}
	if (_0xf49f14462f0ae27c(player_id()) != iVar5)
	{
		return;
	}
	Var6 = { func_988(0, 1, 0, -1) };
	if (!func_989(&Var6, 0, 1))
	{
		return;
	}
	vVar10 = { get_entity_coords(iVar5, true, false) };
	if (!Var0.f_2)
	{
		func_990(&Var6, vVar10);
		return;
	}
	if (Var0.f_3 == 0)
	{
		return;
	}
	vVar13 = { func_991(&Var6) };
	if (!func_628(vVar13))
	{
		if (get_distance_between_coords(vVar10, vVar13, true) < 200f)
		{
			func_990(&Var6, vVar10);
			func_992(iVar5, Global_1904087, 10, 0);
			return;
		}
	}
	func_990(&Var6, vVar10);
	func_992(iVar5, Global_1904087, 11, 0);
}

void func_344(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (!does_entity_exist(Var0))
	{
		return;
	}
	if (!does_entity_exist(Var0.f_1))
	{
		return;
	}
	iVar4 = get_ped_index_from_entity_index(Var0);
	iVar5 = get_ped_index_from_entity_index(Var0.f_1);
	iVar6 = Var0.f_2;
	bVar7 = Var0.f_3;
	if (iVar4 != Global_34)
	{
		return;
	}
	if (is_entity_dead(iVar4) || is_ped_injured(iVar4))
	{
		return;
	}
	if (is_entity_dead(iVar5) || is_ped_injured(iVar5))
	{
		return;
	}
	fVar8 = func_993(iVar5);
	bVar9 = false;
	if (fVar8 == 0f)
	{
		bVar9 = true;
	}
	iVar10 = get_entity_model(iVar5);
	if (func_618(iVar10) || func_617(iVar10))
	{
		return;
	}
	iVar11 = _0xe4770da1b8ff4fd1(iVar5);
	if (does_entity_exist(iVar11))
	{
		return;
	}
	if (Global_1291734->f_1403.f_6 != iVar5)
	{
		Global_1291734->f_1403.f_6 = iVar5;
		Global_1291734->f_1403.f_7 = 0;
	}
	bVar12 = false;
	iVar13 = Global_1296859->f_20;
	if ((Global_1291734->f_1403.f_7 + 45000) > iVar13)
	{
		bVar12 = true;
	}
	bVar14 = false;
	if (bVar12 && Global_1291734->f_1403.f_7 + 15000 > iVar13)
	{
		bVar14 = true;
	}
	Var15 = { func_988(0, 1, 0, -1) };
	if (!func_989(&Var15, 0, 1))
	{
		return;
	}
	iVar19 = 23;
	switch (iVar6)
	{
		case 0:
			if (bVar7)
			{
				if (bVar12)
				{
					if (!bVar14)
					{
						iVar19 = 8;
					}
				}
				else if (get_ped_desired_move_blend_ratio(iVar5) > 1.5f)
				{
					iVar19 = 8;
				}
				else
				{
					iVar19 = 9;
				}
			}
			func_994(Global_34, "VOFX_Calm_Horse", 1017772929, iVar5, 1, 0, 0, 1);
			break;
		case 1:
		case 3:
			if (bVar12)
			{
				if (!bVar14)
				{
					iVar19 = 6;
				}
			}
			else if (bVar7)
			{
				iVar19 = 9;
			}
			else if (bVar9)
			{
				iVar19 = 7;
			}
			break;
	}
	if (_0xf49f14462f0ae27c(player_id()) != iVar5)
	{
		return;
	}
	if (iVar19 != 23)
	{
		func_992(iVar5, Global_1904087, iVar19, 0);
		if ((bVar7 || !bVar12) || !bVar14)
		{
			Global_1291734->f_1403.f_7 = iVar13;
		}
	}
	func_995(iVar5);
}

void func_345(int iParam0)
{
	get_event_data(0, iParam0, &vVar0, 3);
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (!does_entity_exist(vVar0.x))
	{
		return;
	}
	if (!is_entity_a_ped(vVar0.x))
	{
		return;
	}
	iVar3 = get_ped_index_from_entity_index(vVar0.x);
	if (is_entity_dead(iVar3) || is_ped_injured(iVar3))
	{
		return;
	}
	if (iVar3 != Global_34)
	{
		return;
	}
	if (!does_entity_exist(vVar0.y))
	{
		return;
	}
	if (!is_entity_a_ped(vVar0.y))
	{
		return;
	}
	iVar4 = get_ped_index_from_entity_index(vVar0.y);
	if (is_entity_dead(iVar4) || is_ped_injured(iVar4))
	{
		return;
	}
	if (vVar0.z == 0)
	{
		if (!func_996())
		{
			func_165(599, 1);
		}
		if (network_has_control_of_entity(iVar4))
		{
			if (!get_ped_config_flag(iVar4, 467, false))
			{
				set_ped_config_flag(iVar4, 467, true);
			}
		}
	}
	iVar5 = get_game_timer();
	if (vVar0.z == 1)
	{
		iVar6 = func_997();
		if (func_998(601) == 0)
		{
			func_999(get_game_timer());
			func_165(601, 0);
		}
		else if (func_998(601) < 3)
		{
			if ((iVar6 + 1800000) <= iVar5)
			{
				func_165(601, 1);
				func_999(get_game_timer());
			}
		}
		func_1000(0);
	}
	if (vVar0.z == 2)
	{
		if (func_1001(599))
		{
			func_1002(599);
		}
		if (func_449(599))
		{
			func_450(599);
		}
		func_165(600, 1);
		func_1000(1);
	}
	if (vVar0.z != 2)
	{
		return;
	}
	func_361(func_395(-1811330370, -591306697), 1);
	compendium_horse_wild_broken(iVar4);
}

void func_346(int iParam0)
{
	if (!get_event_data(0, iParam0, &vVar0, 3))
	{
		return;
	}
	if (!does_entity_exist(vVar0.y))
	{
		return;
	}
	if (!is_entity_a_ped(vVar0.y))
	{
		return;
	}
	iVar3 = get_ped_index_from_entity_index(vVar0.y);
	if (iVar3 != Global_34)
	{
		return;
	}
	if (!does_entity_exist(vVar0.x))
	{
		return;
	}
	if (!is_entity_a_ped(vVar0.x))
	{
		return;
	}
	iVar4 = get_ped_index_from_entity_index(vVar0.x);
	iVar5 = _0xad03b03737ce6810(iVar4);
	if (!_network_is_player_index_valid(iVar5))
	{
		return;
	}
	iVar6 = vVar0.z;
	func_1003(iVar4, iVar6);
	if (player_id() == iVar5)
	{
		func_389(-469672732, 0, 0);
		Global_1291734->f_919.f_8 = 0;
	}
	else
	{
		func_389(-162385832, 0, 0);
	}
	_0xeb8886e1065654cd(iVar4, 10, "ALL", 10f);
}

void func_347(int iParam0)
{
	iVar0 = player_id();
	iVar1 = func_1004(iVar0);
	if (iVar1 == 0 || iVar1 == 2)
	{
		return;
	}
	if (!get_event_data(0, iParam0, &Var2, 2))
	{
		return;
	}
	iVar4 = Var2;
	iVar5 = Var2.f_1;
	if (!does_entity_exist(iVar4))
	{
		return;
	}
	iVar6 = _0xad03b03737ce6810(iVar4);
	bVar7 = _network_is_player_index_valid(iVar6);
	bVar8 = false;
	if (does_entity_exist(iVar5))
	{
		bVar8 = is_ped_a_player(iVar5);
	}
	iVar9 = player_ped_id();
	iVar10 = _0xf49f14462f0ae27c(iVar0);
	if (bVar7)
	{
		set_ped_config_flag(iVar5, 6, true);
	}
	if (iVar4 != iVar10)
	{
		if ((bVar7 && bVar8) && iVar5 == iVar9)
		{
			func_1005(iVar0, iVar6, iVar4);
		}
		return;
	}
	iVar11 = network_get_player_index_from_ped(iVar5);
	if (_network_is_player_index_valid(iVar11))
	{
		if (iVar11 != iVar0)
		{
			Global_1291734->f_919.f_8 = 1;
		}
	}
	if (is_screen_fading_out() || is_screen_faded_out())
	{
		return;
	}
	if (func_1006())
	{
		if (func_449(593))
		{
			func_450(593);
		}
		if (func_1001(593))
		{
			func_1002(593);
		}
		if (!func_449(592) && !func_1001(592))
		{
			func_165(592, 1);
		}
	}
	else
	{
		if (func_449(592))
		{
			func_450(592);
		}
		if (func_1001(592))
		{
			func_1002(592);
		}
		if (!func_449(593) && !func_1001(593))
		{
			func_165(593, 1);
		}
	}
}

void func_348(int iParam0)
{
	if (!get_event_data(0, iParam0, &vVar0, 10))
	{
		return;
	}
	uVar10 = vVar0.x;
	iVar11 = uVar10;
	switch (iVar11)
	{
		case 28:
			func_219(1);
			func_1007(-283002878);
			break;
	}
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
		return;
	}
	iVar12 = vVar0.z;
	if (!does_entity_exist(iVar12))
	{
		return;
	}
	if (!is_entity_a_ped(iVar12))
	{
		return;
	}
	iVar13 = get_ped_index_from_entity_index(iVar12);
	if (is_entity_dead(iVar13) || is_ped_injured(iVar13))
	{
		return;
	}
	switch (iVar11)
	{
		case 31:
			func_1008(iVar13, 0);
			break;
		case 32:
			func_1008(iVar13, 1);
			break;
		case 33:
			func_1008(iVar13, 2);
			break;
		case 49:
			func_1009(iParam0);
			break;
		case 50:
			func_1010(iParam0);
			break;
		default:
			return;
	}
}

void func_349(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 6))
	{
		return;
	}
	if (!Var0.f_4)
	{
		return;
	}
	if (!does_entity_exist(Var0))
	{
		return;
	}
	if (!does_entity_exist(Var0.f_2))
	{
		return;
	}
	if (!is_entity_a_ped(Var0.f_2))
	{
		return;
	}
	if (!func_1011(Var0.f_5))
	{
		return;
	}
	iVar6 = get_ped_index_from_entity_index(Var0.f_2);
	if (func_1012(0) != iVar6)
	{
		return;
	}
	if (func_394(player_id(), 1, 0))
	{
		_0x18ff3110cf47115d(iVar6, 32, 1);
		return;
	}
	if (func_1013(0, Var0.f_5, 1))
	{
		func_1014(iVar6, Var0.f_5, 1);
		if (!func_1015(_inventory_get_ped_inventory_id(iVar6), Var0.f_5, 1))
		{
			if (!func_1016(0, Var0.f_5, 1))
			{
			}
			func_1017(iVar6, Var0.f_5, 1);
		}
	}
	if (func_394(player_id(), 1, 0))
	{
		_0x18ff3110cf47115d(iVar6, 32, 1);
	}
	else
	{
		_0x18ff3110cf47115d(iVar6, 32, 0);
	}
}

void func_350(int iParam0)
{
	if (!get_event_data(0, iParam0, &vVar0, 6))
	{
		return;
	}
	if (!does_entity_exist(vVar0.y))
	{
		return;
	}
	if (!does_entity_exist(vVar0.z))
	{
		return;
	}
	if (!is_entity_a_ped(vVar0.z))
	{
		return;
	}
	iVar6 = get_ped_index_from_entity_index(vVar0.z);
	iVar7 = _0xad03b03737ce6810(iVar6);
	iVar8 = func_1018(vVar0.x);
	if (!_network_is_player_index_valid(iVar7))
	{
		return;
	}
	if (!network_is_player_active(iVar7))
	{
		return;
	}
	iVar9 = iVar7;
	iVar10 = get_player_index();
	if (_0xf49f14462f0ae27c(iVar10) == iVar6 && iVar8 == iVar10)
	{
		Global_1139381->f_5560.f_25[iVar9] = vVar0.y;
		Global_1139381->f_5560.f_58[iVar9] = vVar0.z;
		return;
	}
	if (iVar8 == iVar10)
	{
		Global_1139381->f_5560.f_25[iVar9] = vVar0.y;
		Global_1139381->f_5560.f_58[iVar9] = vVar0.z;
	}
}

void func_351(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (!does_entity_exist(Var0.f_1))
	{
		return;
	}
	if (!does_entity_exist(Var0.f_3))
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (!is_entity_a_ped(Var0.f_3))
	{
		return;
	}
	iVar4 = get_ped_index_from_entity_index(Var0.f_3);
	if (func_1012(0) != iVar4)
	{
		return;
	}
	iVar5 = Var0.f_1;
	bVar6 = false;
	if (is_entity_a_mission_entity(iVar5))
	{
		bVar6 = true;
	}
	if (!bVar6)
	{
		_0xdc0a1f0ecec9f0c0(iVar5, 1f);
	}
}

void func_352(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (!does_entity_exist(Var0))
	{
		return;
	}
	iVar4 = get_ped_index_from_entity_index(Var0);
	if (Global_34 != iVar4)
	{
		return;
	}
	if (!does_entity_exist(Var0.f_1))
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (!does_entity_exist(Var0.f_3))
	{
		return;
	}
	iVar5 = get_ped_index_from_entity_index(Var0.f_3);
	if (_0xf49f14462f0ae27c(get_player_index()) != iVar5)
	{
		return;
	}
	if (!func_686(&(Global_1291734->f_1403.f_15)))
	{
		return;
	}
	if (func_1019(iVar5, 0))
	{
		return;
	}
	iVar6 = Var0.f_1;
	if (!is_entity_a_ped(iVar6) && !_0x255b6db4e3ad3c3e(iVar6))
	{
		return;
	}
	func_688(&(Global_1291734->f_1403.f_15));
	bVar7 = false;
	if (!Global_1291734->f_1403.f_14)
	{
		bVar7 = true;
	}
	Global_1291734->f_1403.f_14 = 0;
	Var8 = { func_988(0, 1, 0, -1) };
	if (!func_989(&Var8, 0, 1))
	{
		return;
	}
	if (bVar7)
	{
		func_992(iVar5, Global_1904087, 20, 0);
	}
	else
	{
		func_992(iVar5, Global_1904087, 21, 0);
	}
}

void func_353(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (!does_entity_exist(Var0.f_1))
	{
		return;
	}
	if (!does_entity_exist(Var0.f_3))
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (!is_entity_a_ped(Var0.f_3))
	{
		return;
	}
	iVar4 = get_ped_index_from_entity_index(Var0.f_3);
	iVar5 = func_1018(Var0);
	iVar6 = _0xad03b03737ce6810(iVar4);
	if (!_network_is_player_index_valid(iVar6))
	{
		return;
	}
	if (!_network_is_player_index_valid(iVar5))
	{
		return;
	}
	if (!network_is_player_active(iVar6))
	{
		return;
	}
	iVar7 = _0x901e0dc25080c8b9(iVar5);
	iVar8 = _0x901e0dc25080c8b9(iVar6);
	if (_0x0f99f6436528a089(iVar7) && _0x0f99f6436528a089(iVar8))
	{
		if (iVar7 == iVar8)
		{
			return;
		}
	}
	iVar9 = iVar6;
	iVar12 = player_id();
	if (iVar6 != iVar12 && iVar5 != iVar12)
	{
		return;
	}
	if (_0xf49f14462f0ae27c(iVar12) == iVar4)
	{
		iVar13 = iVar5;
		if (&Global_1139381->f_5560.f_25[iVar13] == Var0.f_1 && &Global_1139381->f_5560.f_58[iVar13] == Var0.f_3)
		{
		}
		else if (!func_1020(iVar5, iVar6, 1, 1))
		{
			func_1021(iVar5, 3, 1, 1, 0, 0);
		}
		Global_1139381->f_5560.f_25[iVar9] = uVar10;
		Global_1139381->f_5560.f_58[iVar9] = uVar11;
		return;
	}
	if (&Global_1139381->f_5560.f_25[iVar9] == Var0.f_1 && &Global_1139381->f_5560.f_58[iVar9] == Var0.f_3)
	{
		Global_1139381->f_5560.f_25[iVar9] = uVar10;
		Global_1139381->f_5560.f_58[iVar9] = uVar11;
		return;
	}
	if (!func_1022(iVar5, 0, 1))
	{
		Global_1139381->f_5560.f_25[iVar9] = uVar10;
		Global_1139381->f_5560.f_58[iVar9] = uVar11;
		return;
	}
	func_1023(10, iVar6, iVar5, 0);
	Global_1139381->f_5560.f_25[iVar9] = uVar10;
	Global_1139381->f_5560.f_58[iVar9] = uVar11;
}

void func_354(var uParam0)
{
	if (get_ped_index_from_entity_index(uParam0->f_1) != Global_1296859->f_8)
	{
		return;
	}
	func_1023(1, network_get_player_index_from_ped(get_ped_index_from_entity_index(*uParam0)), 255, 0);
	func_1024(-1822335806);
}

bool func_355(int iParam0, int iParam1)
{
	if (!func_177(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_178(iParam0);
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
			if (!func_1025(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_1026(iParam0))
			{
				return true;
			}
			break;
	}
	return func_153(iParam0, 0, 0, 0) >= iParam1;
}

bool func_356()
{
	return ((Global_1139381->f_4796.f_21 && Global_1139381->f_4796.f_2) && Global_1139381->f_4796);
}

void func_357(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1027(iParam0, bParam2, 0) };
	Var5 = { func_1028(iParam0, Var0, Var0.f_4, bParam2) };
	if (func_1029(iParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_480(bParam2), &Var5, bParam1);
}

void func_358()
{
	Global_1952637->f_3467 = 0;
	Global_1952637->f_3467.f_1 = 0;
	Global_1952637->f_3467.f_8 = 0;
	Global_1952637->f_3467.f_2 = 0;
	Global_1952637->f_3467.f_3[0] = 0;
	Global_1952637->f_3467.f_3[1] = 0;
	Global_1952637->f_3467.f_3[2] = 0;
	Global_1952637->f_3467.f_3[3] = 0;
	Global_1952637->f_3467.f_9 = 0;
	Global_1952637->f_3467.f_10 = 0;
	Global_1952637->f_3467.f_11 = 0;
	if (Global_1952637->f_3467.f_12)
	{
		_0x13e7320c762f0477(Global_1952637->f_3467.f_13);
	}
	Global_1952637->f_3467.f_12 = 0;
	func_269(32768);
	func_1030(1108822547, 8, 6);
}

int func_359(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_1027(iParam1, 1, 0) };
		iParam3 = func_1031(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1032(iParam1, iParam2, func_871(iParam3, 1), bParam4, 1, 0, 1))
	{
		return 0;
	}
	func_1033(1, bParam5, bParam9, 1);
	if (bParam10)
	{
		if (func_1034(iParam1, 0))
		{
			func_1035(&(Global_1952637->f_1675.f_1[func_871(iParam3, 1)]), 0, 0);
		}
		else
		{
			func_1035(iParam1, 1, 0);
		}
	}
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam7 && iParam1 != &Global_1952637->f_83[func_871(iParam3, 1)])
			{
				func_171(27, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_265(32768))
			{
				func_358();
				func_171(21, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return 1;
	}
	iVar5 = func_1036(iParam3);
	if (bParam4)
	{
		iVar5 |= 2;
	}
	if (bParam8)
	{
		func_1037(&iVar5, 4);
	}
	if (is_ped_a_player(iParam0))
	{
		func_171(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_171(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

struct<2> func_360(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_361(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_362(int iParam0)
{
	if (!func_177(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_363(int iParam0)
{
	iVar0 = 10;
	iVar1 = func_362(iParam0);
	iVar2 = &Global_1952637->f_1675.f_1[iVar0];
	if (iParam0 == iVar2)
	{
		return;
	}
	if (func_1038(iVar2))
	{
		func_357(iVar2, 0, 0);
	}
	if (func_560(iParam0, 160827531))
	{
		iVar1 = 81053684;
	}
	if (func_1038(iParam0))
	{
		func_357(iParam0, 1, 0);
	}
	else if (func_1039(iVar1, 0))
	{
		func_872(iParam0, 1, 1, 1, 0, 0);
	}
}

int func_364(int iParam0)
{
	Var0 = { func_1027(iParam0, 1, 0) };
	return func_1031(Var0.f_4);
}

void func_365(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7)
{
	func_545(32768);
	func_1040(1108822547);
	Global_1952637->f_3467.f_1 = uParam0;
	Global_1952637->f_3467.f_3[0] = uParam1;
	Global_1952637->f_3467.f_3[1] = uParam2;
	Global_1952637->f_3467.f_3[2] = uParam3;
	Global_1952637->f_3467 = -1725579161;
	if (iParam4 != 0)
	{
		Global_1952637->f_3467.f_8 = iParam4;
		Global_1952637->f_3467.f_9 = uParam5;
		Global_1952637->f_3467.f_10 = uParam6;
		Global_1952637->f_3467.f_11 = uParam7;
	}
	Global_1952637->f_3467.f_12 = 1;
	Global_1952637->f_3467.f_13 = _0x3fcbb5fcfd968698(Global_1952637->f_3467.f_1, &(Global_1952637->f_3467.f_3[0]), &(Global_1952637->f_3467.f_3[1]), &(Global_1952637->f_3467.f_3[2]), 0);
}

void func_366(int iParam0)
{
	get_event_data(0, iParam0, &iVar0, 1);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
		return;
	}
	if (func_1041(iVar0))
	{
		if (!is_entity_a_mission_entity(iVar0))
		{
			set_vehicle_has_been_owned_by_player(iVar0, true);
		}
	}
}

void func_367(int iParam0)
{
	get_event_data(0, iParam0, &iVar0, 1);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
}

void func_368(int iParam0)
{
	get_event_data(0, iParam0, &Var0, 3);
	if (!is_ped_a_player(Var0) || !is_ped_a_player(Var0.f_1))
	{
		return;
	}
	if (Var0 == Global_34)
	{
		Global_1288655->f_16 = network_get_player_index_from_ped(Var0.f_1);
	}
	Var3.f_5 = -1;
	Var3.f_4 = 1;
	iVar11 = 0;
	iVar11 = 0;
	while (iVar11 < 32)
	{
		if (network_is_player_active(&(Global_1296859->f_154[iVar11])) && get_player_ped(&(Global_1296859->f_154[iVar11])) == Var0.f_1)
		{
			_0x31010318ba9897ac(&uVar10, &(Global_1296859->f_154[iVar11]));
			if (iVar11 == &Global_1296859)
			{
				if (network_is_player_active(network_get_player_index_from_ped(Var0)))
				{
					func_1042(network_get_player_index_from_ped(Var0));
				}
			}
		}
		if (network_is_player_active(&(Global_1296859->f_154[iVar11])) && get_player_ped(&(Global_1296859->f_154[iVar11])) == Var0)
		{
			if (iVar11 == &Global_1296859)
			{
				if (network_is_player_active(network_get_player_index_from_ped(Var0.f_1)))
				{
					func_1043(network_get_player_index_from_ped(Var0.f_1));
				}
			}
		}
		iVar11++;
	}
	func_1044(&Var3, uVar10);
}

void func_369(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 2))
	{
		return;
	}
	if (!is_ped_a_player(Var0.f_1) || !is_ped_a_player(Var0))
	{
		return;
	}
}

void func_370(int iParam0, int iParam1, int iParam2)
{
	if (Global_17333 != 0)
	{
		return;
	}
	if (iParam1 != 0)
	{
		iVar0 = iParam1;
	}
	else
	{
		iVar0 = _get_first_entity_ped_is_carrying(player_ped_id());
	}
	iVar13 = 0;
	if (is_entity_a_ped(iVar0))
	{
		iVar14 = get_ped_index_from_entity_index(iVar0);
		iVar1 = func_1045(iVar14, &uVar2);
		if (_0x9a100f1cf4546629(iVar14))
		{
			func_388(iVar14, _0x964000d355219fc0(iVar14), 0, 1);
		}
	}
	if (iVar1 == 0)
	{
		if (does_entity_exist(iVar0))
		{
			iVar13 = _0x31fef6a20f00b963(iVar0);
		}
		else
		{
			iVar13 = 0;
		}
		get_event_data(0, iParam0, &Var15, 5);
		if (iVar13 == 0)
		{
			if (Global_17333.f_17 != 0)
			{
				if (Var15.f_3 == 0)
				{
					func_599(Global_17333.f_17, -1, 0, 0, 0, 0, 0);
				}
				Global_17333.f_17 = 0;
			}
			if (!is_ped_a_player(get_ped_index_from_entity_index(Var15.f_2)))
			{
				func_1046();
			}
		}
		else if (func_675(iVar13))
		{
			if (Global_17333.f_17 == 0)
			{
				Global_17333.f_17 = iVar13;
				func_599(Global_17333.f_17, 1, 0, 0, 0, 0, 0);
			}
		}
		if (is_entity_a_ped(Var15.f_2) && is_entity_a_ped(Var15))
		{
			iVar20 = get_ped_index_from_entity_index(Var15.f_2);
			iVar21 = get_ped_index_from_entity_index(Var15);
			if (is_ped_a_player(iVar20) && is_ped_a_player(iVar21))
			{
				if (&Global_1296859->f_154[&Global_1296859] == network_get_player_index_from_ped(iVar20))
				{
					func_1042(network_get_player_index_from_ped(iVar21));
				}
				else if (&Global_1296859->f_154[&Global_1296859] == network_get_player_index_from_ped(iVar21))
				{
					func_1043(network_get_player_index_from_ped(iVar20));
				}
			}
		}
	}
	else if (func_1047(iVar0))
	{
		iVar22 = 0;
		while (iVar22 < iVar1)
		{
			iVar23 = &uVar2[iVar22];
			if (iVar23 == 0 || !func_676(iVar23))
			{
			}
			else if (iVar23 == iParam2)
			{
				Jump @453; //curOff = 432
			}
			else
			{
				func_599(iVar23, 1, 0, 0, 0, 0, 0);
			}
			iVar22++;
		}
	}
}

void func_371(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 5))
	{
		return;
	}
	iVar5 = Var0;
	if (func_374(iVar5))
	{
		return;
	}
	if (func_1048(Var0.f_1))
	{
		return;
	}
	if (func_335())
	{
		iVar6 = 7;
		_0xb03140014aca6c40(Var0, iVar6);
	}
	if (!func_669(0) || (func_670() && !func_1049(&Var0)))
	{
		if (Var0.f_1 == 716341297 && !func_1050())
		{
		}
		else if (_0x1e804ea9b12030a4(Var0.f_4, &iVar7))
		{
			func_1051(iVar7, 0);
		}
		else
		{
			func_1051(Var0.f_1, 0);
		}
	}
	else if (!Var0.f_2)
	{
		if ((func_1052(iVar5) && is_weapon_valid(iVar5)) && !func_560(iVar5, -1588156645))
		{
			func_599(iVar5, 1, 0, 0, 0, 0, 0);
			iVar8 = func_1053(iVar5);
			if (iVar8 > 0)
			{
				func_1054(_get_ammo_type_for_weapon(iVar5), iVar8, -897553835);
				func_1055(iVar5, iVar8);
			}
		}
		else
		{
			func_679(iVar5, 1, 0, 0, 0, -897553835, 0, 1, Var0.f_4, 0);
		}
	}
	else
	{
		func_1056(iVar5, 1, 752097756);
		func_180(iVar5, 0, 0, 1, 1, 0, 0);
	}
}

void func_372(int iParam0)
{
	if (!get_event_data(0, iParam0, &uVar0, 1))
	{
		return;
	}
	iVar1 = uVar0;
	if (func_560(iVar1, 747873593))
	{
		return;
	}
	func_1057(iVar1, 1, 0, -142743235);
}

void func_373(int iParam0)
{
	if (!func_669(0))
	{
		return;
	}
	else if (func_670())
	{
		return;
	}
	if (get_event_data(0, iParam0, &Var0, 8))
	{
		iVar9 = Var0.f_7;
		if (!func_177(iVar9, 0))
		{
			return;
		}
		iVar8 = _0x44b09a23d728045a(Var0);
		if (Var0.f_1 == 0 && Var0.f_6 == 0)
		{
			return;
		}
		iVar10 = func_1058(iVar9, 1);
		if (is_weapon_valid(iVar10))
		{
			if (!func_355(iVar9, 1))
			{
				if (func_66() == -1)
				{
					func_1060(_create_var_string(10, "WEP_DISCOVER", func_1059(iVar10)), -2, 0, 0, 0, 1);
					play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				}
				func_599(iVar9, 1, 0, 0, 0, 0, 0);
			}
			else
			{
				iVar11 = _get_ammo_type_for_weapon(iVar10);
				if (_0x58425fca3d3a2d15(iVar10))
				{
					if (func_1061(iVar11, 0) == iVar11)
					{
						func_599(iVar9, 1, 0, 0, 0, 0, 0);
					}
					else
					{
						func_599(iVar8, Var0.f_6, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_599(iVar9, 1, 0, 0, 0, 0, 0);
				}
			}
		}
		else if (func_1062(iVar9))
		{
			func_599(iVar9, Var0.f_6, 0, 0, 0, 0, 0);
		}
		if (func_66() == 0)
		{
			func_1063(Var0.f_2);
		}
	}
}

bool func_374(int iParam0)
{
	iVar0 = func_745();
	if (func_631(iVar0))
	{
		iVar1 = func_1064(func_108(), iVar0);
		if (func_626(iVar1))
		{
			if (func_1065(iVar0, iVar1, iParam0, &Var2))
			{
				if (Var2.f_1 != 0)
				{
					iParam0 = Var2.f_1;
				}
			}
			if (func_1066(iParam0, iVar1))
			{
				return true;
			}
		}
	}
	return false;
}

char* func_375(int iParam0)
{
	if (!func_177(iParam0, 0))
	{
		return "";
	}
	StringCopy(&cVar8, "_", 32);
	bVar12 = func_1067(iParam0, &Var0);
	bVar13 = func_1068(iParam0, &cVar4);
	if (bVar12 && bVar13)
	{
		MemCopy(&cVar14, {Var0}, 8);
		StringConCat(&cVar14, &cVar8, 64);
		StringConCat(&cVar14, &cVar4, 64);
		return _0xd8402b858f4ddd88(&cVar14, get_length_of_literal_string(&cVar14));
	}
	if (!bVar12 && bVar13)
	{
		return _0xd8402b858f4ddd88(&cVar4, get_length_of_literal_string(&cVar4));
	}
	if (bVar12 && !bVar13)
	{
		return "";
	}
	return "";
}

int func_376(int iParam0, int iParam1)
{
	if (!func_177(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_178(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_560(iParam0, 1399091007))
	{
		func_1069(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_377(int iParam0)
{
	if (!func_177(*iParam0, 0))
	{
		return false;
	}
	if (!func_1070(*iParam0))
	{
		return false;
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
			return false;
	}
	return true;
}

void func_378(int iParam0)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var26.f_1 = 10;
	Var26.f_12 = 10;
	iVar51 = 0;
	fVar52 = 0f;
	bVar53 = false;
	get_event_data(0, iParam0, &Var0, 26);
	if (!func_1071(Var0.f_24))
	{
		if (Var0.f_23 == Global_34)
		{
			func_1072(Var0.f_24);
			Var26 = { Var0 };
			if (!func_1073(Var0.f_24))
			{
				iVar49 = func_1074(Var0.f_24, &iVar51, &uVar50, &fVar52, &uVar60, &uVar54, &uVar57, &uVar62);
				while (iVar49 != 0)
				{
					Var26.f_1[iVar61] = iVar49;
					Var26.f_12[iVar61] = iVar51;
					iVar49 = func_1074(Var0.f_24, &iVar51, &uVar50, &fVar52, &uVar60, &uVar54, &uVar57, &uVar62);
					iVar61++;
				}
				func_1075(Var0.f_24);
				bVar53 = true;
			}
			if (func_1076(&Var26))
			{
				bVar53 = true;
			}
			if (bVar53)
			{
				if (func_1077(Var0.f_24))
				{
					func_1078(&Var26);
				}
				if (_0xcc1baf72d571db8d(Var0.f_23, &Var26, Var0.f_25))
				{
				}
			}
		}
	}
}

void func_379(int iParam0)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	get_event_data(0, iParam0, &Var0, 36);
	if (func_66() == 0)
	{
	}
	if (does_entity_exist(Var0.f_27))
	{
	}
	if (!func_1071(Var0.f_27))
	{
		if (Var0.f_26 == Global_34)
		{
			if (!func_1077(Var0.f_27))
			{
				func_1079(&Var0, 0);
			}
			Global_1940015 = get_game_timer();
			iVar36 = func_1081(func_1080(Var0.f_29));
			if (iVar36 == 0)
			{
				if (Var0.f_29 == -1541470630 || Var0.f_29 == -839537088)
				{
					iVar36 = 1537662162;
				}
			}
			if (!_does_scenario_point_exist(Global_1198042->f_2) && iVar36 != 0)
			{
				Global_1198042->f_2 = _find_closest_active_scenario_point_of_type(Global_1296859->f_17, iVar36, 7f, 0, false);
			}
			if (_does_scenario_point_exist(Global_1198042->f_2))
			{
				Global_1198042->f_1 = 1;
			}
			func_1072(Var0.f_27);
		}
	}
}

void func_380(int iParam0)
{
	get_event_data(0, iParam0, &uVar0, 10);
}

bool func_381(int iParam0, int iParam1, bool bParam2)
{
	Var0 = { func_1027(iParam0, 0, 0) };
	return func_1082(iParam0, &Var0, iParam1, 0, bParam2, -1, 0);
}

struct<2> func_382()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_68(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_68(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

bool func_383(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17411.f_2565[iVar1]), iVar2);
}

void func_384(int iParam0, int iParam1, bool bParam2)
{
	func_487(iParam0, &iVar0, &iVar1);
	if (!func_488(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1083(iParam0, 1024))
	{
		return;
	}
	func_489(iVar0, iVar1);
	Global_1904651->f_33[iParam0]->f_3[0] = iParam1;
	Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 3;
}

bool func_385(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (get_animal_tuning_bool_param(iParam0, 58))
	{
		if (bParam1)
		{
			return is_entity_in_air(iParam0, 1);
		}
		return true;
	}
	return false;
}

bool func_386(int iParam0)
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

int func_387(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_1084(iParam0, &uVar25, &Var12, &Var0, bParam1, iParam2, iParam3, bParam4);
}

void func_388(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return;
	}
	iVar0 = get_entity_model(iParam0);
	if (!is_model_valid(iVar0))
	{
		return;
	}
	func_1085(iParam0);
	vVar1 = { get_entity_coords(iParam0, true, false) };
	func_1086(iParam1, iVar0, vVar1, bParam2, iParam3);
	if (bParam2 && -153407852 == iParam1)
	{
		compendium_horse_observed(iParam0, iParam3);
	}
}

void func_389(int iParam0, bool bParam1, bool bParam2)
{
	if (func_66() != 0)
	{
		return;
	}
	if (func_1087())
	{
		return;
	}
	if (_0x0e2f43516f998269(player_ped_id()))
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (!bParam1)
	{
		if (!&Global_1139381->f_3876.f_2[func_1088(iParam0, 1)])
		{
			return;
		}
	}
	(Global_1139381->f_3876.f_2[func_1088(iParam0, 1)])->f_2++;
	if (!bParam2)
	{
		return;
	}
	if (Global_1296859->f_16 != &Global_1296859)
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_4 = 0;
	Var0.f_5 = iParam0;
	Var0.f_6 = bParam1;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 32)
	{
		if (!network_is_player_active(&(Global_1296859->f_154[iVar8])))
		{
		}
		else if (!_0x9be7dcb22d32ccbe(Global_1296859->f_15, &(Global_1296859->f_154[iVar8])))
		{
		}
		else if (&Global_1296859->f_154[iVar8] == Global_1296859->f_10)
		{
		}
		else
		{
			_0x31010318ba9897ac(&uVar7, &(Global_1296859->f_154[iVar8]));
		}
		iVar8++;
	}
	func_1044(&Var0, uVar7);
}

bool func_390(int iParam0)
{
	if (!func_1089())
	{
		return false;
	}
	if (_0xb9050a97594c8832(player_id()) != iParam0)
	{
		return false;
	}
	return true;
}

int func_391(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (_0x9a100f1cf4546629(iParam0) || _0xc346a546612c49a9(iParam0))
	{
		iVar0 = func_1090(&iParam0);
		if (!func_177(iVar0, 0))
		{
			iVar0 = func_1091(iParam0);
		}
	}
	else
	{
		iVar0 = func_1091(iParam0);
	}
	return iVar0;
}

bool func_392(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_1089())
		{
			return false;
		}
	}
	iVar4 = func_1092(iParam0);
	if (!func_1093(iVar4))
	{
		return false;
	}
	if (func_1011(iParam0))
	{
		if (func_394(player_id(), 1, 1))
		{
			return false;
		}
		if (!func_1094(iVar4, &uVar0, 0, 255, 0, 0))
		{
			return false;
		}
		else
		{
			func_1095(&uVar0);
		}
	}
	else
	{
		if (func_1096())
		{
			return false;
		}
		iVar5 = func_1097(iParam0);
		if (iVar5 < 0)
		{
			return false;
		}
		if (!func_1098(iParam0))
		{
			return false;
		}
		if (!func_1094(iVar4, &uVar0, 0, 255, 0, 0))
		{
			return false;
		}
		else
		{
			func_1095(&uVar0);
		}
	}
	func_1099();
	return true;
}

void func_393(int iParam0, bool bParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1100(1);
	}
	func_1103(iParam0, func_1101(), func_1102(player_id(), 1), iParam2);
}

bool func_394(int iParam0, int iParam1, bool bParam2)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return iParam1;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return iParam1;
	}
	return func_1104(iVar0, bParam2) >= func_1105(bParam2);
}

struct<2> func_395(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_396(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		if (!decor_exist_on(iParam0, "RevivedOnce") || !decor_get_bool(iParam0, "RevivedOnce"))
		{
			decor_set_bool(iParam0, "RevivedOnce", true);
			if (_0xf8b48a361dc388ae(iParam0) == 2)
			{
				iVar0 = 258647363;
			}
			else
			{
				iVar0 = -1486645408;
			}
			func_387(iVar0, 0, 255, 0, 0);
		}
	}
}

void func_397()
{
	func_389(796310207, 0, 0);
	func_685(0);
}

bool func_398()
{
	if (func_178(Global_1940144->f_40) != 2085633299)
	{
		return true;
	}
	if (!func_1106())
	{
		return true;
	}
	if (_0xb65927f861e7ae39(player_ped_id(), 34))
	{
		return true;
	}
	func_552("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
	return false;
}

void func_399(int iParam0)
{
	Var6.f_9 = -1591664384;
	if (get_event_data(3, iParam0, &Var0, 6))
	{
		if (_0x9700e8efc4ab9089(Var0.f_4, &Var0, &Var6, true))
		{
			bVar20 = false;
			if (does_entity_exist(Var0.f_5))
			{
				if (func_1107(Var0.f_5))
				{
					bVar20 = true;
				}
			}
			if (bVar20)
			{
				func_188(Var6.f_4, Var0.f_5);
			}
			else
			{
				func_189(Var6.f_4, Var0.f_5);
			}
		}
	}
}

void func_400(int iParam0)
{
	Var6.f_9 = -1591664384;
	if (get_event_data(3, iParam0, &Var0, 6))
	{
		if (_0x9700e8efc4ab9089(Var0.f_4, &Var0, &Var6, true))
		{
			func_610(Var0.f_5, Var6.f_4, Var0);
		}
	}
}

bool func_401(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

void func_402(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_311(iVar0))
		{
			if (func_1108(func_312(iVar0, 1, 1)) == iParam0)
			{
				func_405(iVar0, 0);
			}
		}
		iVar0++;
	}
}

bool func_403(int iParam0)
{
	if (!func_311(iParam0))
	{
		return false;
	}
	return func_424(iParam0, 33554432);
}

void func_404(int iParam0, bool bParam1, int iParam2)
{
	if (!func_311(iParam0))
	{
		return;
	}
	if (func_1109(iParam0) && !bParam1)
	{
		return;
	}
	if (_does_volume_exist((*Global_1887339)[iParam0]->f_6))
	{
		iVar0 = (*Global_1887339)[iParam0]->f_6;
	}
	else
	{
		iVar0 = func_1110(iParam0);
	}
	bVar1 = func_424(iParam0, 33554432);
	if (bParam1)
	{
		iVar2 = func_1111(iParam0);
		if (iParam2 > iVar2)
		{
			func_1112(iParam0, func_934());
			func_1113(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_1114(iParam0, 33554432);
			if (_does_volume_exist(iVar0))
			{
				if (iParam0 == 40)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				_0xf2a2177ac848b3a8(iVar0, 0, iVar3);
			}
		}
	}
	else if (bVar1)
	{
		func_1115(iParam0, 33554432);
		func_1112(iParam0, -15);
		if (_does_volume_exist(iVar0))
		{
			_0xf2a2177ac848b3a8(iVar0, 1, 1);
		}
	}
	func_1116(iParam0);
}

void func_405(int iParam0, bool bParam1)
{
	if (!func_311(iParam0))
	{
		return;
	}
	bVar0 = func_424(iParam0, 67108864);
	if (bParam1)
	{
		if (!bVar0)
		{
			func_1117(iParam0, func_934());
			func_1114(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_1115(iParam0, 67108864);
		func_1117(iParam0, -15);
	}
	func_1118(iParam0);
}

bool func_406(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_407(int iParam0, bool bParam1)
{
	if (!func_406(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_926(iParam0, 8))
		{
			return false;
		}
	}
	if (func_926(iParam0, 1))
	{
		return true;
	}
	return false;
}

void func_408(int iParam0, bool bParam1)
{
	if (!func_406(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1119(iParam0, 1);
	}
	else
	{
		if (func_298(iParam0))
		{
			return;
		}
		func_1120(iParam0, 1);
	}
	func_1121(iParam0, bParam1);
}

bool func_409(int iParam0, bool bParam1)
{
	if (!func_401(iParam0))
	{
		return false;
	}
	if (func_411(iParam0, 1) || (bParam1 && func_411(iParam0, 2)))
	{
		return true;
	}
	return false;
}

void func_410(int iParam0, bool bParam1)
{
	if (!func_401(iParam0))
	{
		return;
	}
	if (func_411(iParam0, 2) && !bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_1122(iParam0, 1);
	}
	else
	{
		func_1123(iParam0, 1);
	}
	func_1124(iParam0, bParam1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_297(iVar0) == iParam0)
		{
			func_408(iVar0, 0);
		}
		iVar0++;
	}
}

bool func_411(int iParam0, int iParam1)
{
	if (!func_401(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_190[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1071686->f_21325[iParam0]->f_5 && iParam1) != 0;
}

void func_412(int iParam0, bool bParam1)
{
	if (!func_401(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1122(iParam0, 4);
	}
	else
	{
		func_1123(iParam0, 4);
	}
	func_1125(iParam0, bParam1);
}

bool func_413(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1126(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_1127())
	{
		return func_1126(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_1126(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

int func_414(bool bParam0, bool bParam1, bool bParam2)
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

bool func_415()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_401(iVar0))
		{
			if (func_416(iVar0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_416(int iParam0)
{
	if (!func_401(iParam0))
	{
		return false;
	}
	return &(Global_1939161->f_27[iParam0]);
}

void func_417(int iParam0)
{
	if (!func_401(iParam0))
	{
		return;
	}
	Global_1939161->f_4 = iParam0;
}

void func_418(int iParam0, int iParam1)
{
	if (!func_401(iParam0))
	{
		return;
	}
	iVar0 = func_1128();
	if (iParam1 > iVar0)
	{
		iParam1 = iVar0;
	}
	_set_max_wanted_level_2(iVar0);
	if (iParam0 == func_425() && !func_66() == 0)
	{
		_set_bounty_for_player(player_id(), iParam1);
	}
	if (Global_1572887->f_13 == -1)
	{
		if (&Global_39.f_190[iParam0] != iParam1)
		{
			func_1129(iParam0, iParam1);
			func_1130(iParam0);
		}
		Global_39.f_190[iParam0] = iParam1;
		if (!func_411(iParam0, 4))
		{
			if (&Global_39.f_190[iParam0] >= get_wanted_level_threshold(1))
			{
				func_412(iParam0, 1);
			}
		}
		else if (&Global_39.f_190[iParam0] == 0)
		{
			func_412(iParam0, 0);
		}
		return;
	}
	iVar1 = 0;
	Var2 = { func_106(player_id()) };
	_0x4ef23e04a0c8ff51(&Var2, &uVar9);
	iVar1 = 0;
	while (iVar1 < 6)
	{
		Global_1071686->f_21325[iVar1] = uVar9;
		iVar1++;
	}
}

void func_419(int iParam0, int iParam1)
{
	if (!func_401(iParam0))
	{
		return;
	}
	Global_1939161->f_27[iParam0] = iParam1;
}

int func_420()
{
	return Global_1939161->f_5;
}

int func_421(int iParam0)
{
	if (!func_311(iParam0))
	{
		return -15;
	}
	if (Global_1572887->f_13 == -1)
	{
		return Global_8123[iParam0]->f_2;
	}
	return Global_1071686->f_19674[iParam0]->f_2;
}

int func_422(int iParam0)
{
	if (!func_1131(iParam0))
	{
		return 0;
	}
	func_1132(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	fVar6 = ((((((to_float(iVar0) / 60f) + to_float(iVar1)) + (to_float(iVar2) * 60f)) + ((to_float(iVar3) * 24f) * 60f)) + (((to_float(iVar4) * 30.4375f) * 24f) * 60f)) + (((to_float(iVar5) * 365.25f) * 24f) * 60f));
	iVar7 = round(fVar6);
	return iVar7;
}

bool func_423(char* sParam0, int iParam1, var uParam2)
{
	if (!does_script_exist(sParam0))
	{
		return false;
	}
	request_script(sParam0);
	if (!has_script_loaded(sParam0))
	{
		return false;
	}
	*uParam2 = start_new_script(sParam0, iParam1);
	set_script_as_no_longer_needed(sParam0);
	return true;
}

bool func_424(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_8123[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_19674[iParam0] && iParam1) != 0;
}

int func_425()
{
	return Global_1939161->f_4;
}

bool func_426(int iParam0)
{
	if (iParam0 != Global_1939161->f_75.f_62 && Global_1939161->f_75.f_62 != -1)
	{
		return false;
	}
	Global_1939161->f_75.f_59 = iParam0;
	Global_1939161->f_75.f_60 = 0;
	func_441();
	return true;
}

bool func_427(int iParam0)
{
	if (!does_entity_exist(get_player_ped(iParam0)))
	{
		return false;
	}
	switch (Global_1940258->f_9)
	{
		case -717938992:
		case -251921849:
		case 681501455:
		case 701031707:
		case 2118174520:
			return true;
	}
	return false;
}

bool func_428(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_103(iParam0, bParam1, bParam2, bParam3))
	{
		if (func_427(iParam0) || Global_1940258->f_9 != 1370593166)
		{
			return true;
		}
	}
	return false;
}

void func_429(bool bParam0)
{
	if (!Global_1940258->f_12)
	{
		return;
	}
	if (bParam0)
	{
		func_426(10);
	}
	else
	{
		if (!is_player_being_arrested(get_player_index(), true))
		{
			play_sound_frontend("Witness_Wanted", "HUD_Wanted_Sounds", true, 0);
		}
		_0x6abc50979655bee7(player_id(), &uVar0, 1);
		if (Global_1940258->f_12)
		{
			_0x9c5bd8c562565ce6(&Var17);
		}
		Var34 = { func_106(player_id()) };
		_0x4ef23e04a0c8ff51(&Var34, &iVar41);
		iVar43 = iVar41;
		if (func_66() == -1)
		{
			iVar43 = _get_bounty_for_player(player_id());
		}
		if (Var17.f_16 && iVar43 > 0)
		{
			func_432(func_425());
		}
		if (Global_1940258->f_17)
		{
			func_426(6);
		}
		else
		{
			func_426(2);
		}
	}
}

void func_430()
{
	func_1133(&(Global_1939161->f_75.f_56));
	_databinding_write_data_bool(Global_1939161->f_75.f_1.f_16, false);
	_databinding_write_data_bool(Global_1939161->f_75.f_1.f_17, false);
	_databinding_write_data_bool(Global_1939161->f_75.f_19.f_16, false);
	_databinding_write_data_bool(Global_1939161->f_75.f_19.f_17, false);
	_databinding_write_data_bool(Global_1939161->f_75.f_37.f_16, false);
	_databinding_write_data_bool(Global_1939161->f_75.f_37.f_17, false);
	_databinding_write_data_bool(Global_1939161->f_75.f_1.f_14, false);
	_databinding_write_data_bool(Global_1939161->f_75.f_1.f_13, false);
	_databinding_write_data_bool(Global_1939161->f_75.f_19.f_14, false);
	_databinding_write_data_bool(Global_1939161->f_75.f_19.f_13, false);
	_databinding_write_data_bool(Global_1939161->f_75.f_37.f_14, false);
	_databinding_write_data_bool(Global_1939161->f_75.f_37.f_13, false);
	_databinding_write_data_bool(Global_1939161->f_75.f_55, false);
	_0x35a33783ec3c3448(0);
	_0x39d8d7082bc34b72(0);
	_0x1ad8ad999c27f44a(0);
}

void func_431()
{
	_databinding_write_data_bool(Global_1939161->f_75.f_1.f_1, false);
	_databinding_write_data_bool(Global_1939161->f_75.f_19.f_1, false);
	_databinding_write_data_bool(Global_1939161->f_75.f_37.f_1, false);
	_databinding_write_data_bool(Global_1939161->f_75.f_55, false);
	Global_1939161->f_6 = 0;
}

void func_432(int iParam0)
{
	Global_1939161->f_5 = iParam0;
}

bool func_433(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			if ((Global_1900688->f_1 == 1 || Global_1900688->f_1 == 3) || Global_1900688->f_1 == 4)
			{
				return true;
			}
			break;
		case 2:
			if ((((Global_1900688->f_1 == 2 || Global_1900688->f_1 == 5) || Global_1900688->f_1 == 1) || Global_1900688->f_1 == 3) || Global_1900688->f_1 == 4)
			{
				return true;
			}
			break;
		case 5:
			if (((Global_1900688->f_1 == 5 || Global_1900688->f_1 == 1) || Global_1900688->f_1 == 3) || Global_1900688->f_1 == 4)
			{
				return true;
			}
			break;
		case 3:
			if (Global_1900688->f_1 == 3 || Global_1900688->f_1 == 4)
			{
				return true;
			}
			break;
		case 4:
			if (Global_1900688->f_1 == 4)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_434(bool bParam0)
{
	if (Global_1900688->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_66() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900688->f_2 == 4 && Global_1900688->f_12 != Global_1900688->f_13) && !bParam0)
	{
		Global_1900688->f_1 = Global_1900688->f_2;
		Global_1900688->f_12 = Global_1900688->f_13;
		func_1134(iVar0, Global_1900688->f_12);
	}
	else
	{
		Global_1900688->f_1 = 0;
		Global_1900688->f_7 = iVar0;
		Global_1900688->f_8 = func_1135();
		Global_1900688->f_9 = func_1136(Global_1893587->f_2);
		Global_1900688->f_11 = func_1137(Global_1896622->f_41);
		if (Global_1900688->f_9 != -1 && Global_1900688->f_9 != 0)
		{
			func_1138(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
		else if (Global_1900688->f_11 != -1)
		{
			func_1138(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_11);
		}
		else
		{
			func_1138(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
	}
	Global_1900688->f_2 = 0;
}

void func_435(int iParam0)
{
	Global_1939161->f_75.f_60 = iParam0;
	func_441();
}

void func_436()
{
	if (Global_1940258->f_12)
	{
		_0x9c5bd8c562565ce6(&Var1);
		if (Var1.f_16 || Var1.f_15)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if ((_0x89e005b1662f6e48(player_id(), 1, 0) || _0x3738b784ddd35cc6(player_id(), 1, 0)) || Global_1939161->f_75.f_62 > -1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	if (Global_1939161->f_75.f_63 > 0)
	{
		iVar0 = Global_1939161->f_75.f_63;
	}
	_databinding_write_data_int(Global_1939161->f_75.f_1.f_3, iVar0);
	_databinding_write_data_int(Global_1939161->f_75.f_19.f_3, iVar0);
	_databinding_write_data_int(Global_1939161->f_75.f_37.f_3, iVar0);
}

void func_437(var uParam0)
{
	func_1139(uParam0, 0);
}

char* func_438(int iParam0)
{
	switch (iParam0)
	{
		case -1358475411:
			return "CRIME_ACCOMPLICE";
		case 195938434:
			return "CRIME_ASSAULT";
		case 416962030:
			return "CRIME_ASSAULT_ANIMAL";
		case 1314857970:
			return "CRIME_ASSAULT_CORPSE";
		case -999071359:
			return "CRIME_ASSAULT_HORSE";
		case -683250308:
			return "CRIME_ASSAULT_LAW";
		case -857617219:
			return "CRIME_ASSAULT_LIVESTOCK";
		case 1780145725:
			return "CRIME_BANK_ROBBERY";
		case -1521715232:
			return "CRIME_BURGLARY";
		case -1560342203:
			return "CRIME_CHEATING";
		case 1343354387:
			return "CRIME_DISTURBANCE";
		case 1052408375:
			return "CRIME_EXPLOSION";
		case -1759599185:
			return "CRIME_GRAVE_ROBBERY";
		case 1481148278:
			return "CRIME_HASSLE";
		case -16106300:
			return "CRIME_HIT_AND_RUN";
		case 105387183:
			return "CRIME_HIT_AND_RUN_LAW";
		case -2095449173:
			return "CRIME_INTIMIDATION";
		case 314693001:
			return "CRIME_JAIL_BREAK";
		case -2097683294:
			return "CRIME_JACK_HORSE";
		case 1805131596:
			return "CRIME_JACK_VEHICLE";
		case -1728509733:
			return "CRIME_KIDNAPPING";
		case -42817558:
			return "CRIME_KIDNAPPING_LAW";
		case 1458462042:
			return "CRIME_LASSO_ASSAULT";
		case 481893872:
			return "CRIME_LAW_IS_THREATENED";
		case 1714017012:
			return "CRIME_LOITERING";
		case 1437412331:
			return "CRIME_LOOTING";
		case -493957506:
			return "CRIME_MURDER";
		case 1224055398:
			return "CRIME_MURDER_ANIMAL";
		case -953803399:
			return "CRIME_MURDER_HORSE";
		case 2006449383:
			return "CRIME_MURDER_LAW";
		case -1788230330:
			return "CRIME_MURDER_LIVESTOCK";
		case 1396375613:
			return "CRIME_PROPERTY_DESTRUCTION";
		case -547914843:
			return "CRIME_RESIST_ARREST";
		case -1547772340:
			return "CRIME_ROBBERY";
		case 1352191066:
			return "CRIME_UNARMED_ASSAULT";
		case -59535775:
			return "CRIME_STAGECOACH_ROBBERY";
		case -1701536647:
			return "CRIME_STOLEN_GOODS";
		case 1923998736:
			return "CRIME_THEFT";
		case -1103472584:
			return "CRIME_THEFT_HORSE";
		case -2051405571:
			return "CRIME_THEFT_LIVESTOCK";
		case 1135209633:
			return "CRIME_THEFT_VEHICLE";
		case -1810065318:
			return "CRIME_THREATEN";
		case 2140177766:
			return "CRIME_THREATEN_LAW";
		case 1171995096:
			return "CRIME_TRAMPLE";
		case -267442581:
			return "CRIME_TRAMPLE_LAW";
		case 1685924442:
			return "CRIME_TRAIN_ROBBERY";
		case -1361146315:
			return "CRIME_TRESPASSING";
		case -2130852007:
			return "CRIME_VANDALISM";
		case -102241052:
			return "CRIME_VANDALISM_VEHICLE";
		case 1420320220:
			return "CRIME_VEHICLE_DESTRUCTION";
		case 0:
			return "CRIME_NONE";
		default:
			break;
	}
	return "CRIME_NONE";
}

bool func_439()
{
	if (func_1140())
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

bool func_440()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_441()
{
	_0xb6fd96420c0126a1(343652620, _databinding_read_data_bool(Global_1939161->f_75.f_1.f_1));
	_0xb6fd96420c0126a1(370165233, _databinding_read_data_bool(Global_1939161->f_75.f_19.f_1));
	_0xb6fd96420c0126a1(214328093, _databinding_read_data_bool(Global_1939161->f_75.f_37.f_1));
	_0x29c733459a9011eb(899278954, _databinding_read_data_string(Global_1939161->f_75.f_1.f_2));
	_0x74bcceb233ad95b2(-67464364, _databinding_read_data_int(Global_1939161->f_75.f_1.f_3));
	_0x29c733459a9011eb(-1388386159, _databinding_read_data_string(Global_1939161->f_75.f_1.f_4));
	_0x29c733459a9011eb(1584094595, _databinding_read_data_string(Global_1939161->f_75.f_1.f_5));
	_0x29c733459a9011eb(2037870381, _databinding_read_data_string(Global_1939161->f_75.f_19.f_2));
	_0x74bcceb233ad95b2(419081062, _databinding_read_data_int(Global_1939161->f_75.f_19.f_3));
	_0x29c733459a9011eb(-77578703, _databinding_read_data_string(Global_1939161->f_75.f_19.f_4));
	_0x29c733459a9011eb(-1895820149, _databinding_read_data_string(Global_1939161->f_75.f_19.f_5));
	_0x29c733459a9011eb(284336735, _databinding_read_data_string(Global_1939161->f_75.f_37.f_2));
	_0x74bcceb233ad95b2(1967777848, _databinding_read_data_int(Global_1939161->f_75.f_37.f_3));
	_0x29c733459a9011eb(-1851553844, _databinding_read_data_string(Global_1939161->f_75.f_37.f_4));
	_0x29c733459a9011eb(-1711179274, _databinding_read_data_string(Global_1939161->f_75.f_37.f_5));
	_0x29c733459a9011eb(-502453069, _databinding_read_data_string(Global_1939161->f_75.f_37.f_8));
	_0xb6fd96420c0126a1(2090772712, _databinding_read_data_bool(Global_1939161->f_75.f_1.f_13));
	_0xb6fd96420c0126a1(567080718, _databinding_read_data_bool(Global_1939161->f_75.f_1.f_14));
	_0xb6fd96420c0126a1(-2111378860, _databinding_read_data_bool(Global_1939161->f_75.f_19.f_13));
	_0xb6fd96420c0126a1(930867308, _databinding_read_data_bool(Global_1939161->f_75.f_19.f_14));
	_0xb6fd96420c0126a1(102890458, _databinding_read_data_bool(Global_1939161->f_75.f_37.f_13));
	_0xb6fd96420c0126a1(400672808, _databinding_read_data_bool(Global_1939161->f_75.f_37.f_14));
	_0xb6fd96420c0126a1(158320892, _databinding_read_data_bool(Global_1939161->f_75.f_37.f_15));
	_0xb6fd96420c0126a1(-2074406361, _databinding_read_data_bool(Global_1939161->f_75.f_1.f_16));
	_0xb6fd96420c0126a1(-882466102, _databinding_read_data_bool(Global_1939161->f_75.f_1.f_17));
	_0xb6fd96420c0126a1(-1363987847, _databinding_read_data_bool(Global_1939161->f_75.f_19.f_16));
	_0xb6fd96420c0126a1(581135177, _databinding_read_data_bool(Global_1939161->f_75.f_19.f_17));
	_0xb6fd96420c0126a1(874457339, _databinding_read_data_bool(Global_1939161->f_75.f_37.f_16));
	_0xb6fd96420c0126a1(-84149284, _databinding_read_data_bool(Global_1939161->f_75.f_37.f_17));
	_0x74bcceb233ad95b2(-1979147281, _databinding_read_data_int(Global_1939161->f_75.f_1.f_12));
	_0x74bcceb233ad95b2(397723712, _databinding_read_data_int(Global_1939161->f_75.f_19.f_12));
	_0x74bcceb233ad95b2(1420669041, _databinding_read_data_int(Global_1939161->f_75.f_37.f_12));
}

bool func_442()
{
	if (!Global_1940258->f_12)
	{
		return false;
	}
	if (Global_1940258->f_17)
	{
		return true;
	}
	return false;
}

void func_443()
{
	Var1 = { func_106(player_id()) };
	_0x4ef23e04a0c8ff51(&Var1, &uVar8);
	iVar0 = uVar8;
	if (func_66() == -1)
	{
		iVar0 = _get_bounty_for_player(player_id());
	}
	if (does_text_label_exist(&(Global_1939161->f_75.f_67)))
	{
		_databinding_write_data_string(Global_1939161->f_75.f_37.f_4, &(Global_1939161->f_75.f_67));
	}
	else if (func_298(func_60()) || func_1109(func_108()))
	{
		if (func_1141() == 24043185)
		{
			_databinding_write_data_string(Global_1939161->f_75.f_37.f_4, "LAW_UI_DEAD_OR_ALIVE_F");
		}
		else
		{
			_databinding_write_data_string(Global_1939161->f_75.f_37.f_4, "LAW_UI_DEAD_OR_ALIVE");
		}
	}
	else if (iVar0 <= 1)
	{
		_databinding_write_data_string(Global_1939161->f_75.f_37.f_4, "LAW_UI_NO_BOUNTY");
	}
	else
	{
		sVar10 = _create_var_string(2, "LAW_UI_BOUNTY_CASH", iVar0);
		_databinding_write_data_string(Global_1939161->f_75.f_37.f_8, sVar10);
	}
	func_441();
}

int func_444(var uParam0)
{
	if (!func_1142(uParam0))
	{
		func_1143(uParam0, 0);
		return uParam0->f_1;
	}
	if (func_1144(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_980() - uParam0->f_1);
}

bool func_445()
{
	iVar0 = func_425();
	if (!func_401(iVar0))
	{
		return false;
	}
	if (func_628(Global_39.f_190[iVar0]->f_1) || Global_39.f_190[iVar0]->f_4 < 1f)
	{
		return false;
	}
	if (func_1145(Global_34, Global_39.f_190[iVar0]->f_1, (Global_39.f_190[iVar0]->f_4 + 10f), 1, 1))
	{
		return true;
	}
	return false;
}

bool func_446()
{
	if (Global_1940258->f_12)
	{
		_0x9c5bd8c562565ce6(&Var0);
	}
	if (Var0.f_11 == 4 || Var0.f_11 == 5)
	{
		return false;
	}
	if (!func_445())
	{
		return false;
	}
	if (((Var0.f_12 != 0 && Var0.f_12 != 1) && Var0.f_12 != 5) && Var0.f_12 != 3)
	{
		return true;
	}
	return false;
}

char* func_447()
{
	if (does_text_label_exist(&(Global_1939161->f_75.f_64)))
	{
		return func_1146(Global_1939161->f_75.f_64);
	}
	if (func_1147())
	{
		return "POSTER_PL_ARTHUR_NAME";
	}
	if (func_1148())
	{
		return "POSTER_PL_JOHN_NAME";
	}
	return "POSTER_PL_GENERIC";
}

void func_448(int iParam0)
{
	if (((Global_1900688->f_1 == 2 || Global_1900688->f_1 == 5) || Global_1900688->f_1 == 3) || Global_1900688->f_1 == 1)
	{
		return;
	}
	iVar0 = 0;
	if (func_66() != -1)
	{
		iVar0 = 1;
	}
	Global_1900688->f_2 = Global_1900688->f_1;
	Global_1900688->f_13 = Global_1900688->f_12;
	Global_1900688->f_1 = 4;
	Global_1900688->f_7 = iVar0;
	Global_1900688->f_12 = iParam0;
	func_1134(Global_1900688->f_7, Global_1900688->f_12);
}

bool func_449(int iParam0)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1904651->f_33[iParam0]->f_1;
	}
	return false;
}

void func_450(int iParam0)
{
	if (!func_449(iParam0))
	{
		return;
	}
	func_1149(1);
}

bool func_451()
{
	if (func_426(9))
	{
		if (Global_1940258->f_12)
		{
			_0x55f37f5f3f2475e1();
		}
		return true;
	}
	return false;
}

int func_452(int iParam0)
{
	if (!func_401(iParam0))
	{
		return 0;
	}
	return func_303(iParam0);
}

void func_453(bool bParam0, bool bParam1)
{
	bVar0 = true;
	if (bParam0 && (Global_1940258->f_12 || Global_1939161->f_75.f_62 > -1))
	{
		if (Global_1940258->f_12)
		{
			_0x9c5bd8c562565ce6(&Var1);
		}
		if (Var1.f_10 > -1 || Global_1939161->f_75.f_62 > -1)
		{
			bVar0 = false;
			iVar18 = func_425();
			if (!func_401(iVar18))
			{
				return;
			}
			if (Global_1940258->f_12)
			{
				Global_39.f_190[iVar18]->f_1 = { Var1.f_7 };
			}
			else
			{
				Global_39.f_190[iVar18]->f_1 = { Global_35 };
			}
			func_1150(get_game_timer());
			iVar19 = func_1151();
			iVar20 = iVar19;
			Global_39.f_190[iVar18]->f_4 = get_wanted_level_radius(iVar20);
			if (Global_39.f_190[iVar18]->f_4 <= 0f)
			{
				switch (iVar19)
				{
					case 1:
						Global_39.f_190[iVar18]->f_4 = 60f;
						break;
					case 2:
						Global_39.f_190[iVar18]->f_4 = 70f;
						break;
					default:
						Global_39.f_190[iVar18]->f_4 = 80f;
						break;
				}
			}
			if (!does_blip_exist(Global_1939161->f_148))
			{
				Global_1939161->f_148 = _blip_add_for_radius(1165324392, Global_39.f_190[iVar18]->f_1, Global_39.f_190[iVar18]->f_4);
			}
			else
			{
				set_blip_coords(Global_1939161->f_148, Global_39.f_190[iVar18]->f_1);
				set_blip_scale(Global_1939161->f_148, Global_39.f_190[iVar18]->f_4);
				if (bParam1)
				{
					_blip_set_modifier(Global_1939161->f_148, 40294510);
				}
				else
				{
					_set_blip_flash_style(Global_1939161->f_148, 40294510);
				}
			}
		}
	}
	if (bVar0)
	{
		if (does_blip_exist(Global_1939161->f_148))
		{
			remove_blip(&(Global_1939161->f_148));
		}
	}
}

void func_454(int iParam0)
{
	Global_1940311->f_14.f_16 = (Global_1940311->f_14.f_16 - 1);
	func_1152(Global_1940311->f_14[iParam0]);
	*Global_1940311->f_14[iParam0] = { *Global_1940311->f_14[Global_1940311->f_14.f_16] };
	func_1152(Global_1940311->f_14[Global_1940311->f_14.f_16]);
}

void func_455(bool bParam0)
{
	if (bParam0)
	{
		func_1153(4);
	}
	func_1153(2);
	set_bit(&(Global_1957959->f_1), 0);
}

void func_456()
{
	disable_control_action(0, 1367437629, false);
	disable_control_action(0, 992265328, false);
	disable_control_action(0, -473983589, false);
	disable_control_action(0, -719620017, false);
	disable_control_action(0, -1053137564, false);
	disable_control_action(0, 129547951, false);
	disable_control_action(0, -1300031296, false);
}

int func_457(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	while (iVar0 < 60)
	{
		if (func_1154(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == (*Global_1951255)[iVar0]->f_11 && iParam1 == (*Global_1951255)[iVar0]->f_4)
				{
					if (iParam3 <= Global_1951255[iVar0])
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
				func_1155(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_458(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_162(iParam0))
	{
		return;
	}
	iVar0 = func_469(iParam0);
	if (bParam1)
	{
		func_1156(iParam0, 4);
		if (bParam3)
		{
			func_1157(iVar0, 1);
		}
		func_1158(iVar0, 1);
	}
	else
	{
		func_1159(iParam0, 4);
		func_1158(iVar0, 0);
	}
}

void func_459(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_162(iParam0))
	{
		return;
	}
	iVar0 = func_469(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_group((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

void func_460(int iParam0)
{
	(*Global_1913674)[iParam0]->f_1 = 3;
	(*Global_1913674)[iParam0] = 0;
	(*Global_1913674)[iParam0]->f_5 = 0;
}

int func_461(int iParam0, int iParam1)
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

int func_462(int iParam0)
{
	if (iParam0 == 82200319)
	{
		return 1;
	}
	return 0;
}

bool func_463(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				Jump @230; //curOff = 56
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
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*iParam1 = iVar1;
					iParam1->f_1 = iVar2;
					iParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_464(int iParam0)
{
	switch (iParam0)
	{
		case -14157738:
			return 1323994892;
		case -246260565:
			return 1573399751;
		case 340173459:
			return -2106624491;
		case 109840158:
			return -1793811613;
		case 903996873:
			return -1510851298;
		case 706727493:
			return -1467596218;
		case -1454682982:
			return -1184308213;
		case 1538503020:
			return -870708883;
		case 1318524723:
			return -251964625;
		case 18296369:
			return 1207697423;
		case -279147844:
			return 1499898596;
		case -413074747:
			return 1822214480;
		case -760557223:
			return 2134142591;
		case -924992065:
			return -1862299111;
		case 1767753378:
			return 389460201;
		case -1556675047:
			return 1371776514;
		case -2012820803:
			return 1001486814;
		case -849973848:
			return 1882514148;
		case 1012860904:
			return 1103889939;
		case -1680391208:
			return -1802851441;
		case -1253105631:
			return 1719193452;
		case -915721704:
			return -1151534797;
		case 202891657:
			return -1929044860;
		case -1261034125:
			return 924313143;
		case 1787203230:
			return 626082474;
		case 1737771952:
			return -653022672;
		case -1254096446:
			return -942045252;
		case 61577350:
			return -38767767;
		case 1566650197:
			return -194659462;
		case -572653278:
			return -549220042;
		case -532692958:
			return 293303717;
		case -1594812622:
			return -1890586292;
		case -358162791:
			return -2122099277;
		case 368626453:
			return -1681356223;
		case 543847666:
			return -830115910;
		case 888242611:
			return 1211786018;
		case 1712504077:
			return 1124096174;
		case -634222073:
			return -911614461;
		case 662019373:
			return -662209602;
		case 1032348365:
			return 1799528770;
		case -1449342224:
			return 1560872143;
		case 1786928078:
			return -1764788133;
	}
	switch (iParam0)
	{
		case -14157738:
			return 1323994892;
		case -246260565:
			return 1573399751;
		case 340173459:
			return -2106624491;
		case 109840158:
			return -1793811613;
		case 903996873:
			return -1510851298;
		case 706727493:
			return -1467596218;
		case -1454682982:
			return -1184308213;
		case 1538503020:
			return -870708883;
		case 1318524723:
			return -251964625;
		case 18296369:
			return 1207697423;
		case -279147844:
			return 1499898596;
		case -413074747:
			return 1822214480;
		case -760557223:
			return 2134142591;
		case -924992065:
			return -1862299111;
		case 1767753378:
			return 389460201;
		case -1556675047:
			return 1371776514;
		case -2012820803:
			return 1001486814;
		case -849973848:
			return 1882514148;
		case 1012860904:
			return 1103889939;
		case -1680391208:
			return -1802851441;
		case -1253105631:
			return 1719193452;
		case -915721704:
			return -1151534797;
		case 202891657:
			return -1929044860;
		case -1261034125:
			return 924313143;
		case 1787203230:
			return 626082474;
		case 1737771952:
			return -653022672;
		case -1254096446:
			return -942045252;
		case 61577350:
			return -38767767;
		case 1566650197:
			return -194659462;
		case -572653278:
			return -549220042;
		case -532692958:
			return 293303717;
		case -1594812622:
			return -1890586292;
		case -358162791:
			return -2122099277;
		case 368626453:
			return -1681356223;
		case 543847666:
			return -830115910;
		case 888242611:
			return 1211786018;
		case 1712504077:
			return 1124096174;
		case -634222073:
			return -911614461;
		case 662019373:
			return -662209602;
		case 1032348365:
			return 1799528770;
		case -1449342224:
			return 1560872143;
		case 1786928078:
			return -1764788133;
	}
	return -1;
}

void func_465(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1939493->f_161 >= 10)
	{
		return;
	}
	if (!func_1160(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_115(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (is_string_null_or_empty(&((*Global_1939493)[iVar0]->f_10)))
		{
			*(*Global_1939493)[iVar0] = { Param0 };
			Global_1939493->f_161++;
			func_1161(iParam16);
			return;
		}
		iVar0++;
	}
}

void func_466(int iParam0)
{
	Global_1940144->f_39 = (Global_1940144->f_39 || iParam0);
}

void func_467(var uParam0, int iParam1)
{
	func_1162(uParam0, iParam1);
}

bool func_468(int iParam0)
{
	return func_324(&Global_1301321, iParam0);
}

int func_469(int iParam0)
{
	return iParam0;
}

void func_470()
{
	Global_1940311->f_242.f_4 = _databinding_add_data_container_from_path("", "invite_data");
	Global_1940311->f_242.f_1 = _databinding_add_data_int_by_hash(Global_1940311->f_242.f_4, -1821544064, 3);
	Global_1940311->f_242.f_2 = _databinding_add_data_int_by_hash(Global_1940311->f_242.f_4, 2093245832, 0);
	Global_1940311->f_242.f_3 = _databinding_add_data_hash_by_hash(Global_1940311->f_242.f_4, 1239184307, func_1163(0));
	Global_1940311->f_242.f_7 = _databinding_add_data_container_by_hash(Global_1940311->f_242.f_4, -2134210738);
	Global_1940311->f_242.f_7.f_1 = _databinding_add_data_string_by_hash(Global_1940311->f_242.f_7, 1923799069, "");
	Global_1940311->f_242.f_7.f_2 = _databinding_add_data_hash_by_hash(Global_1940311->f_242.f_7, 190030222, 0);
	Global_1940311->f_242.f_7.f_3 = _databinding_add_data_hash_by_hash(Global_1940311->f_242.f_7, -1924991449, 0);
	Global_1940311->f_242.f_7.f_4 = _databinding_add_data_string_by_hash(Global_1940311->f_242.f_7, 43663785, "");
	Global_1940311->f_242.f_7.f_5 = _databinding_add_data_string_by_hash(Global_1940311->f_242.f_7, -691977066, "");
	Global_1940311->f_242.f_7.f_6 = _databinding_add_data_string_by_hash(Global_1940311->f_242.f_7, 575354058, "");
	Global_1940311->f_242.f_5 = _databinding_add_ui_item_list_by_hash(Global_1940311->f_242.f_4, 904318604);
	func_1164();
	Global_1940311->f_242.f_6 = _databinding_add_data_string(Global_1940311->f_242.f_4, "invite_count", "0");
	Global_1940311->f_242.f_1189 = get_game_timer();
}

void func_471(struct<4> Param0, int iParam4)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	switch (iParam4)
	{
		case 778915895:
			if (_databinding_read_data_bool_from_parent(Param0.f_3, func_1165(86)))
			{
				return;
			}
			else if (!func_1166())
			{
				func_472(Param0.f_3);
			}
			_databinding_write_data_bool_from_parent(Param0.f_3, func_1165(86), 1);
			func_1167(Param0.f_3);
			break;
		case 1126679425:
			Var0 = Param0.f_1;
			func_1168(Var0, &Var0, 2, -1);
			func_1169(player_id(), 0);
			func_1171(func_1170(Var0));
			func_1172(&Var0);
			_launch_app_by_hash_with_entry(-1641598689, 1731040532);
			break;
		case 863036578:
			func_1173(player_id(), &vVar34);
			_0xe0884c184728c75b(vVar34, 100f);
			_launch_app_by_hash(-2042186616);
			break;
		case 2099367966:
			iVar40 = func_1174(player_id(), 1);
			vVar37 = { func_1175(iVar40) };
			_0xe0884c184728c75b(vVar37, 100f);
			_launch_app_by_hash(-2042186616);
			break;
		case -1121162991:
			vVar41 = { func_1176() };
			_0xe0884c184728c75b(vVar41, 100f);
			_launch_app_by_hash(-2042186616);
			break;
		case 510323272:
			vVar44 = { Global_1051439->f_3745[39]->f_1 };
			_0xe0884c184728c75b(vVar44, 100f);
			_launch_app_by_hash(-2042186616);
			break;
		case 179854274:
			func_180(17745825, 0, 0, 0, 1, 0, 0);
			break;
		case 1511356879:
			break;
		default:
			break;
	}
}

void func_472(int iParam0)
{
	if (!_databinding_is_data_id_valid(iParam0))
	{
		return;
	}
	iVar0 = _databinding_read_data_int_from_parent(iParam0, func_1165(87));
	switch (iVar0)
	{
		case 6:
			func_1177(_databinding_read_data_int_from_parent(iParam0, func_1165(50)));
			break;
		case 16:
			iVar1 = _0xe6aab897120492d6(iParam0, func_1165(88));
			func_1178(1, iVar1, Global_1901947->f_308.f_172);
			func_1179(88, Global_1296859->f_15, iVar1, 1);
			break;
		case 17:
			iVar1 = _0xe6aab897120492d6(iParam0, func_1165(88));
			func_1178(2, iVar1, Global_1901947->f_308.f_172);
			func_1179(89, Global_1296859->f_15, iVar1, 1);
			break;
		case 20:
			iVar3 = _databinding_read_data_int_from_parent(iParam0, func_1165(51));
			func_1180(int_to_playerindex(iVar3));
			break;
		case 8:
			iVar2 = _databinding_read_data_int_from_parent(iParam0, func_1165(50));
			func_1181(iVar2, 1);
			break;
		case 21:
			func_1182();
			break;
		case 10:
			iVar2 = _databinding_read_data_int_from_parent(iParam0, func_1165(50));
			func_1183(iVar2);
			break;
		case 9:
			iVar2 = _databinding_read_data_int_from_parent(iParam0, func_1165(50));
			func_1184(iVar2);
			break;
		case 12:
			iVar2 = _databinding_read_data_int_from_parent(iParam0, func_1165(50));
			break;
		case 11:
			break;
		case 1:
			iVar2 = _databinding_read_data_int_from_parent(iParam0, func_1165(50));
			func_1185(iVar2, 1);
			break;
		case 19:
			iVar2 = _databinding_read_data_int_from_parent(iParam0, func_1165(50));
			if (_0x8e2143144b8e188d(iVar2))
			{
			}
			break;
		case 23:
			Var4.f_10 = 255;
			Var4.f_4 = 34;
			Var4.f_5 = _databinding_read_data_int_from_parent(iParam0, func_1165(50));
			_0x31010318ba9897ac(&uVar23, network_player_id_to_int());
			func_1186(&Var4, uVar23);
			break;
	}
	func_1187(iParam0);
	func_802();
}

bool func_473(bool bParam0, bool bParam1, bool bParam2)
{
	bVar0 = func_150(bParam2, func_1188(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

bool func_474(int iParam0, bool bParam1)
{
	if (bParam1 && !func_162(iParam0))
	{
		return false;
	}
	iVar0 = func_469(iParam0);
	return _uiprompt_is_just_pressed((*Global_1951255)[iVar0]->f_3);
}

bool func_475()
{
	return (_does_anim_scene_exist(Global_26538) && _is_anim_scene_started(Global_26538, false));
}

void func_476(int iParam0)
{
	Global_1896738->f_390 = iParam0;
}

int func_477(int iParam0, int iParam1, var uParam2)
{
	if (!does_script_with_name_hash_exist(iParam0))
	{
		return 0;
	}
	if (get_number_of_free_stacks_of_this_size(iParam1) <= 0)
	{
		return 1;
	}
	if (!has_script_with_name_hash_loaded(iParam0))
	{
		request_script_with_name_hash(iParam0);
		return 3;
	}
	*uParam2 = start_new_script_with_name_hash(iParam0, iParam1);
	if (!_does_thread_exist(*uParam2))
	{
		return 2;
	}
	set_script_with_name_hash_as_no_longer_needed(iParam0);
	return 4;
}

int func_478(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1189(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_1191(&Var0, func_1190(0));
	}
	if (!func_1192(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_561(iVar14);
	return uVar15;
}

int func_479(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_480(bool bParam0)
{
	if (func_66() == -1)
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

struct<4> func_481(int iParam0, bool bParam1)
{
	Var0 = { func_1027(iParam0, bParam1, 0) };
	return func_1028(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_482(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_1193(Global_34))
	{
		bParam2 = true;
	}
	iVar0 = -1;
	iVar2 = 0;
	Var3.f_9 = -1591664384;
	if (Global_1940144->f_80.f_2 == 0)
	{
		iVar0 = _0xbb7f968675b34b0c(func_480(0), 32, &iVar1);
		if (iVar0 < 0)
		{
		}
		else
		{
			if (iVar1 > 0)
			{
				iVar2 = 0;
				while (iVar2 < 32)
				{
					if (!func_559(&Var3, iVar2, iVar0, iVar1))
					{
					}
					else if (!func_1194(Var3))
					{
					}
					else if (bParam1)
					{
						func_1195(iParam0, Var3.f_4, 1);
					}
					else if (bParam2)
					{
						func_1195(iParam0, Var3.f_4, 0);
					}
					else if (Var3.f_4 != 1259508039)
					{
						func_1195(iParam0, Var3.f_4, func_1196(Var3.f_4));
					}
					iVar2++;
				}
			}
			func_561(iVar0);
		}
	}
	Var17 = { func_1189(0, 1084182731, -1591664384, -1591664384, 0, 0, 0) };
	if (func_1192(&Var17, &iVar0, &iVar1, bParam3))
	{
		if (Global_1940144->f_80.f_2 > iVar1)
		{
			func_561(iVar0);
			return true;
		}
		iVar31 = 0;
		iVar2 = Global_1940144->f_80.f_2;
		while (iVar2 <= (iVar1 - 1))
		{
			iVar31++;
			if (iVar31 > 100)
			{
				Global_1940144->f_80.f_2 = iVar2;
				func_561(iVar0);
				return false;
			}
			if (func_559(&Var3, iVar2, iVar0, iVar1))
			{
				if (!func_1194(Var3))
				{
				}
				else if (bParam1)
				{
					func_1195(iParam0, Var3.f_4, 1);
				}
				else if (bParam2)
				{
					func_1195(iParam0, Var3.f_4, 0);
				}
				else if (Var3.f_4 != 1259508039)
				{
					func_1195(iParam0, Var3.f_4, func_1196(Var3.f_4));
				}
			}
			iVar2++;
		}
		func_561(iVar0);
	}
	return true;
}

void func_483(int iParam0)
{
	func_1195(iParam0, -160924582, func_491(32));
	func_1195(iParam0, 1652431022, func_491(32));
	func_1195(iParam0, -1016714371, func_491(64));
	func_1195(iParam0, 332793555, func_491(131072));
	func_1195(iParam0, -1516555556, func_491(1024));
	func_1195(iParam0, -862059856, (func_491(32768) && !func_555(256)));
	func_1195(iParam0, 1401465909, func_491(524288));
	func_1197(iParam0, func_491(8192));
	func_1198(iParam0, func_491(128));
	func_1195(iParam0, -1115561122, func_491(262144));
	func_1199(iParam0, func_491(4));
	func_1200(iParam0, func_491(8));
	func_1201(iParam0, func_491(1));
}

void func_484()
{
	Global_1940144->f_105 = -1;
	Global_1940144->f_105.f_1 = 0;
}

char* func_485(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "";
		case 1:
			return _create_var_string(2, "NT_INV_BUSYSPINNER_TRANSACTION");
		case 2:
			return _create_var_string(2, "NT_INV_BUSYSPINNER_FOLLOW_INVITE");
		case 3:
			return _create_var_string(2, "NT_INV_BUSYSPINNER_FOLLOW_JOIN");
		case 4:
			return _create_var_string(2, "HUD_BUSYSPINNER_MESSAGE__TAKING_MUGSHOT");
		case 5:
			return _create_var_string(2, "HUD_BUSYSPINNER_MESSAGE__LOADING_LOBBY");
		case 6:
			return _create_var_string(2, "HUD_BUSYSPINNER_MESSAGE__FINDING_PLAYERS");
		case 8:
			return _create_var_string(2, "HUD_BUSYSPINNER_MESSAGE__REJOINING_POSSE");
		case 9:
			return _create_var_string(2, "HUD_BUSYSPINNER_MESSAGE__REFORMING_POSSE");
		case 7:
			return _create_var_string(2, "HUD_BUSYSPINNER_MESSAGE__CREATING_POSSE");
		case 10:
			return _create_var_string(2, "HUD_BUSYSPINNER_MESSAGE__MATCHMAKING");
		default:
			break;
	}
	return "";
	return "";
}

void func_486(int iParam0)
{
	if (!func_1202(iParam0))
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

void func_487(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_488(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_1203(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1204(iParam0))
	{
		return false;
	}
	if (func_1205(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_1083(iParam0, 1)) || func_223(32768))
	{
		if (!func_1083(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_1206())
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

void func_490()
{
	if (does_entity_exist(Global_34))
	{
		if (func_804(Global_34))
		{
			Global_1940144->f_7 |= 1;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 1);
		}
		if (func_635(Global_34))
		{
			Global_1940144->f_7 |= 2;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 2);
		}
		if (func_805(Global_34, 713668775))
		{
			Global_1940144->f_7 |= 4;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 4);
		}
		if (func_1207(Global_34))
		{
			Global_1940144->f_7 |= 8;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 8);
		}
		if (func_66() == 0)
		{
			if (func_586(1, 1))
			{
				Global_1940144->f_7 |= 16;
			}
			else
			{
				Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 16);
			}
			if (func_614(0))
			{
				Global_1940144->f_7 |= 268435456;
			}
			else
			{
				Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 268435456);
			}
		}
		else if (func_1208(0, 1))
		{
			Global_1940144->f_7 |= 16;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 16);
		}
		if (!func_1209(0))
		{
			Global_1940144->f_7 |= 32;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 32);
		}
		if (!func_1210(0))
		{
			Global_1940144->f_7 |= 512;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 512);
		}
		if (!func_1211(0))
		{
			Global_1940144->f_7 |= 8192;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 8192);
		}
		if (is_ped_in_cover(Global_34, 0, 1))
		{
			Global_1940144->f_7 |= 16384;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 16384);
		}
		if (_get_ped_crouch_movement(Global_34))
		{
			Global_1940144->f_7 |= 32768;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 32768);
		}
		if (func_66() == 0 && _0xb655db7582aec805(Global_34))
		{
			Global_1940144->f_7 |= 131072;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 131072);
		}
		if (_0xec7e480ff8bd0bed(Global_34) && !has_anim_event_fired(Global_34, 108107462))
		{
			Global_1940144->f_7 |= 256;
		}
		else if (_0x7fc84e85d98f063d(Global_34))
		{
			Global_1940144->f_7 |= 256;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 256);
		}
		fVar0 = 30f;
		if (func_967() || func_1212())
		{
			fVar0 = 50f;
		}
		if ((Global_1940258->f_18 || _0xc8b29d18022ea2b7(Global_34)) || func_1213(fVar0, 1024))
		{
			Global_1940144->f_7 |= 1024;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 1024);
		}
		if (is_ped_running(Global_34))
		{
			Global_1940144->f_7 |= 4096;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 4096);
		}
		if (_0x3ab6c7b0bb0df4b1(Global_34, -1) || func_805(Global_34, 1369124074))
		{
			Global_1940144->f_7 |= 128;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 128);
		}
		if (is_ped_getting_up(Global_34))
		{
			Global_1940144->f_7 |= 1048576;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 1048576);
		}
		if (is_ped_male(Global_34))
		{
			Global_1940144->f_7 |= 16777216;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 16777216);
		}
		if (func_1214())
		{
			Global_1940144->f_7 |= 33554432;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 33554432);
		}
		if (func_1215(0))
		{
			Global_1940144->f_7 |= 524288;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 524288);
		}
		if (func_1216(0))
		{
			Global_1940144->f_7 |= 262144;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 262144);
		}
		if (func_1217(Global_34))
		{
			Global_1940144->f_7 |= 4194304;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 4194304);
		}
	}
	else
	{
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 1);
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 2);
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 4);
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 8);
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 16);
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 32);
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 512);
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 8192);
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 16384);
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 32768);
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 131072);
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 256);
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 1024);
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 4096);
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 128);
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 1048576);
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 16777216);
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 33554432);
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 524288);
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 262144);
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 4194304);
	}
	if (is_cinematic_cam_rendering())
	{
		Global_1940144->f_7 |= 65536;
	}
	else
	{
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 65536);
	}
	if (_0x1204eb53a5fbc63d())
	{
		Global_1940144->f_7 |= 64;
	}
	else
	{
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 64);
	}
	iVar1 = _0x0501d52d24ea8934(1);
	if (does_entity_exist(iVar1))
	{
		if (func_1107(iVar1))
		{
			switch (get_entity_model(iVar1))
			{
				case -1230516683:
				case 594040097:
				case 1772321403:
					Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 8388608);
					break;
				default:
					Global_1940144->f_7 |= 8388608;
					break;
			}
		}
		if (_is_metaped_using_component(iVar1, 149557334))
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 8388608);
		}
		if (!is_ped_ragdoll(iVar1) && is_ped_on_vehicle(iVar1, false))
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 8388608);
		}
	}
	else
	{
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 8388608);
	}
	if ((func_1218() || func_1219()) || (func_322(0, 0, 1) && !func_1220()))
	{
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 2097152);
	}
	else
	{
		Global_1940144->f_7 |= 2097152;
	}
	if (func_1221())
	{
		Global_1940144->f_7 |= 67108864;
	}
	else
	{
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 67108864);
	}
	if (Global_1940258->f_52)
	{
		Global_1940144->f_7 |= 134217728;
	}
	else
	{
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 134217728);
	}
}

bool func_491(int iParam0)
{
	return func_1222(iParam0);
}

int func_492()
{
	return 234348672;
}

int func_493(int iParam0, int iParam1)
{
	if (func_500(iParam0))
	{
		func_498(iParam0);
		return 0;
	}
	else
	{
		Stack.Push(0);
		Call_Loc(iParam1);
		if (func_172(StackVal, StackVal))
		{
			func_502(iParam0);
			return 1;
		}
		else
		{
			func_498(iParam0);
			return 0;
		}
	}
	return 0;
}

int func_494()
{
	return 234339543;
}

int func_495()
{
	return 225949718;
}

int func_496()
{
	return 206022678;
}

bool func_497()
{
	return func_1223();
}

void func_498(int iParam0)
{
	func_467(&(Global_1940144->f_38), iParam0);
}

bool func_499(int iParam0)
{
	return func_1225(func_1224(iParam0));
}

bool func_500(int iParam0)
{
	return (Global_1940144->f_39 && iParam0) != 0;
}

int func_501()
{
	return func_1226();
}

void func_502(int iParam0)
{
	func_325(&(Global_1940144->f_38), iParam0);
}

int func_503()
{
	return 234086528;
}

int func_504()
{
	return 232439799;
}

int func_505()
{
	return 232341495;
}

int func_506()
{
	return 232407015;
}

var func_507()
{
	return Global_1940144->f_10;
}

var func_508()
{
	return Global_1940144->f_11;
}

var func_509()
{
	return Global_1940144->f_12;
}

var func_510()
{
	return Global_1940144->f_13;
}

bool func_511()
{
	return (Global_1940311->f_1 || &Global_1940311 == 1);
}

int func_512()
{
	return 234596352;
}

int func_513()
{
	return 226211840;
}

int func_514()
{
	return 234596496;
}

int func_515()
{
	return 217554935;
}

int func_516()
{
	return 150191252;
}

int func_517()
{
	return 233516164;
}

int func_518()
{
	return 234596496;
}

int func_519()
{
	return 99859463;
}

int func_520()
{
	return 234350720;
}

void func_521()
{
	Global_1940144->f_39 = 0;
}

void func_522(int iParam0, bool bParam1, int iParam2)
{
	Global_1940311->f_4 = iParam0;
	Global_1940311->f_34 = iParam2;
	if (bParam1 || (func_1227() && iParam2 == 0))
	{
		func_1228(1);
		func_1229(1);
	}
}

void func_523()
{
	func_1230();
	if (!Global_1940144->f_21)
	{
		iVar0 = -820096546;
		if (!func_162(&(Global_1940144->f_86[2])))
		{
			Global_1940144->f_86[2] = func_1231("HUD_SATCHEL", 1287709438, 4, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 1, iVar0, 0);
			func_1232(&(Global_1940144->f_86[2]), 21, 1, 1);
			func_1232(&(Global_1940144->f_86[2]), 20, 1, 1);
			_uiprompt_set_tag((*Global_1951255)[&Global_1940144->f_86[2]]->f_3, "UCID_SATCHEL");
		}
		if (!func_162(&(Global_1940144->f_86[4])))
		{
			Global_1940144->f_86[4] = func_1231("HUD_CATALOG", -209515122, 4, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 1, iVar0, 0);
			func_1232(&(Global_1940144->f_86[4]), 21, 0, 1);
			func_1232(&(Global_1940144->f_86[4]), 20, 1, 1);
		}
		if (!func_162(&(Global_1940144->f_86[3])))
		{
			Global_1940144->f_86[3] = func_1231("HUD_PLAYER_MENU", -2131587435, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 1, iVar0, 0);
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (func_162(&(Global_1940144->f_86[iVar1])))
			{
				func_1232(&(Global_1940144->f_86[iVar1]), 17, 1, 1);
				func_1232(&(Global_1940144->f_86[iVar1]), 13, 1, 1);
				if (&Global_1940144->f_86[iVar1] != &Global_1940144->f_86[3])
				{
					func_1232(&(Global_1940144->f_86[iVar1]), 23, 1, 1);
				}
				func_1157(&(Global_1940144->f_86[iVar1]), 0);
			}
			iVar1++;
		}
		Global_1940144->f_21 = 1;
	}
}

void func_524()
{
	bVar0 = false;
	bVar1 = get_ped_reset_flag(Global_1296859->f_8, 311);
	bVar2 = is_player_targetting_anything(get_player_index());
	bVar3 = func_263(&Global_1940258, 65536);
	if (func_547(128))
	{
		bVar0 = true;
	}
	else if (func_547(512))
	{
		bVar0 = true;
	}
	else if (func_547(1048576))
	{
		bVar0 = true;
	}
	else if (is_ped_using_any_scenario(Global_1296859->f_8) && !func_1233(Global_1296859->f_8))
	{
		bVar0 = true;
	}
	else if (get_is_loading_screen_active())
	{
		bVar0 = true;
	}
	else if (func_547(4))
	{
		bVar0 = true;
	}
	if (func_1234(Global_1296859->f_8, 0) || !does_entity_exist(Global_1296859->f_8))
	{
		bVar0 = true;
	}
	if (!bVar0 && _0xec7e480ff8bd0bed(Global_1296859->f_8))
	{
		bVar0 = true;
	}
	if (!bVar0 && bVar3)
	{
		bVar0 = true;
	}
	if ((bVar0 || bVar1) || !func_1235())
	{
		func_1236(2);
	}
	else
	{
		func_1237(2, 0);
	}
	if ((!func_185() || bVar1) || bVar2)
	{
		func_1236(6);
	}
	else
	{
		func_1237(6, 1);
	}
	func_1237(3, 0);
	if (bVar0 || !func_1238())
	{
		func_1236(4);
	}
	else
	{
		func_1237(4, 0);
	}
	bVar4 = false;
	if (func_162(&(Global_1940144->f_86[5])) && func_1239(&(Global_1940144->f_86[5]), 0))
	{
		if (func_1240())
		{
			bVar4 = true;
		}
	}
	if (bVar0 || bVar4)
	{
		func_1236(5);
	}
	else
	{
		func_1237(5, 0);
	}
	if (Global_1915715->f_22504 == 0)
	{
		if (func_162(&(Global_1940144->f_86[4])))
		{
			func_1232(&(Global_1940144->f_86[4]), 21, 0, 0);
		}
	}
	else if (func_162(&(Global_1940144->f_86[4])))
	{
		func_1232(&(Global_1940144->f_86[4]), 21, 1, 0);
	}
}

void func_525()
{
	if (Global_1940144->f_111)
	{
		if ((Global_1296859->f_20 - Global_1940144->f_113) >= 3000)
		{
			func_1241();
		}
		if (Global_1940144->f_5 != 2)
		{
			func_1241();
		}
	}
}

void func_526(bool bParam0)
{
	Global_1940144->f_20 = 1;
	disable_control_action(0, -209515122, false);
	bVar0 = false;
	if (func_66() == 0)
	{
		if ((((func_1242() || Global_1048577) // PointerArith || func_967()) || func_1243()) || func_1244())
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if ((func_1245(Global_524288->f_40400) && Global_1048577) // PointerArith && func_1246() == 0)
			{
				bVar0 = false;
			}
		}
	}
	if (!Global_1940144->f_22)
	{
		Global_1940144->f_22 = 1;
		if (bVar0)
		{
			if (bParam0)
			{
				if (Global_1940144->f_112)
				{
					Global_1940144->f_5 = 2;
					func_1247();
				}
			}
			else
			{
				Global_1940144->f_5 = 1;
				func_1241();
			}
		}
	}
	if ((bVar0 && !bParam0) && is_control_just_pressed(0, -1929835875))
	{
		func_1248();
	}
	if (func_66() == -1)
	{
		func_1250(704572841, func_1249(), 1);
		_0x2804658eb7d8a50b(5, -333019928);
	}
	else if (!bParam0)
	{
		if (bVar0)
		{
			if (!func_1251())
			{
				func_1250(704572841, func_1252(), 2);
			}
			if (Global_1940144->f_5 == 1)
			{
				_0x2804658eb7d8a50b(5, -2070808411);
			}
			else
			{
				_0x2804658eb7d8a50b(5, -333019928);
			}
		}
		else
		{
			func_1250(704572841, func_1249(), 1);
			_0x2804658eb7d8a50b(5, -333019928);
		}
	}
}

bool func_527()
{
	return Global_1940144->f_111;
}

void func_528()
{
	if (func_162(&(Global_1940144->f_86[6])))
	{
		if (!Global_1940311->f_1 && !_0x038b1f1674f0e242(Global_34))
		{
			func_460(0);
		}
		func_1253();
		func_163(Global_1940144->f_86[6], 1, 1);
	}
}

bool func_529()
{
	iVar0 = _0x0501d52d24ea8934(1);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	iVar1 = get_entity_model(iVar0);
	if (func_617(iVar1) || func_618(iVar1))
	{
		return false;
	}
	return true;
}

bool func_530(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_531(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_531(int iParam0)
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
		if (iParam0 == Global_1903136[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_532(int iParam0)
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

char[] func_533(int iParam0)
{
	StringCopy(&cVar0, func_1254(iParam0), 64);
	StringConCat(&cVar0, "_BREED", 64);
	return func_534(&cVar0);
}

char[] func_534(char[4] cParam0)
{
	return cParam0;
}

int func_535(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = get_attribute_rank(iParam0, 7);
	return iVar0;
}

char* func_536(int iParam0)
{
	switch (iParam0)
	{
		case -974145463:
			return "COAT_OVERO";
		case 1432602132:
			return "COAT_TOB";
		case 92296905:
			return "COAT_SPLASHWHITE";
		case -842044823:
			return "COAT_GREYOVERO";
		case 1371398552:
			return "COAT_BLACK";
		case -745453539:
			return "COAT_BUCKSKIN";
		case 1583029039:
			return "COAT_PALDAP";
		case -783061276:
			return "COAT_SILVERTAILBUCKSKIN";
		case -1322521536:
			return "COAT_DARKBAY";
		case 1100711204:
			return "COAT_PERLINO";
		case 728055838:
			return "COAT_ROSEGREY";
		case -1782334639:
			return "COAT_BLANKET";
		case -1181052732:
			return "COAT_LEOPBLANKET";
		case -179102320:
			return "COAT_BRLEOP";
		case -1266863668:
			return "COAT_LEOP";
		case -2078767648:
			return "COAT_BLACK";
		case -852553462:
			return "COAT_ROSEGREYBAY";
		case -80004868:
			return "COAT_WHITE";
		case 1813208211:
			return "COAT_BAYR";
		case 836323303:
			return "COAT_STRAWR";
		case 153881023:
			return "COAT_IRONGREYR";
		case -1256798240:
			return "COAT_BLONDCH";
		case 2118089359:
			return "COAT_MEALYCH";
		case -1537586382:
			return "COAT_SOOTYBUCKSKIN";
		case 1440692746:
			return "COAT_SEALBR";
		case 697143532:
			return "COAT_CHOCR";
		case 281128160:
			return "COAT_FLAXCH";
		case 1854519167:
			return "COAT_PIETOB";
		case -1376299681:
			return "COAT_DAPDARKGREY";
		case -1955947684:
			return "COAT_BLACK";
		case 1361788230:
			return "COAT_CHPIN";
		case 1974379573:
			return "COAT_GREY";
		case 545109431:
			return "COAT_SILVERBAY";
		case 1275638003:
			return "COAT_AMBCHA";
		case 2083573823:
			return "COAT_SILVERDAPPINT";
		case 1235275977:
			return "COAT_BAY";
		case 892601357:
			return "COAT_BAYR";
		case 1224695367:
			return "COAT_FLAXCH";
		case 648301150:
			return "COAT_PAL";
		case -1597490733:
			return "COAT_GRULDUN";
		case 2000205872:
			return "COAT_WILDBAY";
		case -1428527735:
			return "COAT_TIGSTRBAY";
		case 170010697:
			return "COAT_BLUER";
		case -742726637:
			return "COAT_WHITER";
		case -1714171692:
			return "COAT_REVDAPR";
		case -103101636:
			return "COAT_DARKBAY";
		case -1999094324:
			return "COAT_LGREY";
		case 1724200240:
			return "COAT_SORREL";
		case 237935328:
			return "COAT_REDCH";
		case 120848852:
			return "COAT_BLACKRAB";
		case -868094182:
			return "COAT_CH";
		case -887362763:
			return "COAT_DAPBAY";
		case -847714194:
			return "COAT_REDR";
		case 1756765331:
			return "COAT_FLAXR";
		case -813071670:
			return "COAT_BLBAY";
		case -1900569233:
			return "COAT_DAPGREY";
		case 1688250187:
			return "COAT_BRINDLE";
		case -1262715164:
			return "COAT_BLACKCH";
		case 2010625508:
			return "COAT_REVDAPBLACK";
		case -136225010:
			return "COAT_DARKBAY";
		case -225011104:
			return "COAT_GOLD";
		case -1882436593:
			return "COAT_SILVER";
		case -757978903:
			return "COAT_REDR";
		case 1909854428:
			return "COAT_SORREL";
		case 1592694494:
			return "COAT_GRULDUN";
		case 981469777:
			return "COAT_SEALBR";
		case 1064693514:
			return "COAT_MEALYDAPBAY";
		case -1365665739:
			return "COAT_STEELGREY";
		case 1577022605:
			return "COAT_BLUEROANOVERO";
		case 381495209:
			return "COAT_DUN";
		case 3032834:
			return "COAT_BAYBRINDLE";
		case -1722101672:
			return "COAT_SORRELOVERO";
		case -189605757:
			return "COAT_BAYFRAMEOVERO";
		case 863391233:
			return "COAT_MARBLESABINO";
		case -952011226:
			return "COAT_PIE";
		case -356470463:
			return "COAT_WHITEBLAGDON";
		case -1750687713:
			return "COAT_PALBLAGDON";
		case -272192064:
			return "COAT_SKEWBALD";
		case 1935859332:
			return "COAT_SPLASHBAY";
		case -1898310680:
			return "COAT_SPLASHPIE";
		case 885568364:
			return "COAT_BLACK";
		case -1540355548:
			return "COAT_WHITE";
		case -601560591:
			return "COAT_CREM";
		case -370362766:
			return "COAT_GREY";
		case -1698261864:
			return "COAT_DAPROSEGREY";
		case -670301166:
			return "COAT_SILVER";
		case -302057902:
			return "COAT_BLACK";
		case 1257620801:
			return "COAT_SPECKLEDGREY";
		case 821735821:
			return "COAT_PIEROAN";
		case -769035812:
			return "COAT_ROSEGREY";
		case -1824684932:
			return "COAT_DAPBUCKSKIN";
		case 1589592948:
			return "COAT_SPOTTEDTRICOLOR";
		case -1331210307:
			return "COAT_NONE";
		case 122449722:
			return "COAT_NONE";
		case -1784502482:
			return "COAT_NONE";
		case -1943445834:
			return "COAT_LIGHTBUCKSKIN";
		case -635244104:
			return "COAT_BLACKSNO";
		case -1427377767:
			return "COAT_GREY";
		case -2055655009:
			return "COAT_REDCH";
		case -1293672675:
			return "COAT_LIVERCH";
		case -1179079660:
			return "COAT_SABLECHAMP";
		case 805526368:
			return "COAT_GOLDENDUN";
		case 1342496140:
			return "COAT_MAHBAY";
		case -126555855:
			return "COAT_RAVBLACK";
		case 294243421:
			return "COAT_CHEMGOLD";
		case -997197050:
			return "COAT_SEALBR";
		case -235714362:
			return "COAT_BLANKET";
		case -1678164:
			return "COAT_BLUER";
		case -977833913:
			return "COAT_BLACKRAB";
		case 1589164943:
			return "COAT_SILVERBAY";
		case -1087523615:
			return "COAT_SPLASHWHITE";
		case -496814209:
			return "COAT_BROWNR";
		case 2109055751:
			return "COAT_GREYSNOWCAPSPOTTED";
		case -776673611:
			return "COAT_GREYROANSABINO";
		case 1764402253:
			return "COAT_ALBINO";
		case -1417310078:
			return "COAT_SILVER";
		case 1096273915:
			return "COAT_GREYOVERO";
		case 772751081:
			return "COAT_SILVERDARKBAY";
		case -1140435723:
			return "COAT_SMOKYBLACK";
		case 2002524329:
			return "COAT_FLAXR";
		case 1151530184:
			return "COAT_LIGHTPALOMINO";
		case -1266525037:
			return "COAT_BLACK";
		case -2018137175:
			return "COAT_GOLDDAP";
		case -574151692:
			return "COAT_DARKBAYROAN";
		case 649786380:
			return "COAT_SILVERTAILBUCKSKIN";
		case -1921328920:
			return "COAT_BRLEOP";
		case -837607790:
			return "COAT_SABINO";
		case 370424594:
			return "COAT_FEWSPOTBUCKSKIN";
		case -364764277:
			return "COAT_MANGY";
		default:
			break;
	}
	return "";
}

int func_537(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = get_attribute_base_rank(iParam0, func_1255());
	return iVar0;
}

int func_538(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = get_attribute_bonus_rank(iParam0, func_1255());
	return iVar0;
}

int func_539(int iParam0, int iParam1, int iParam2)
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

int func_540(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = get_attribute_base_rank(iParam0, func_1256());
	return iVar0;
}

int func_541(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = get_attribute_bonus_rank(iParam0, func_1256());
	return iVar0;
}

int func_542(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = func_1257(iParam0);
	switch (iVar0)
	{
		case 0:
		case 1:
			return 0;
		case 2:
		case 3:
			return 1;
		case 4:
		case 5:
			return 2;
		case 6:
		case 7:
		case 8:
		case 9:
			return 3;
	}
	return -1;
}

char* func_543(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HORSE_HANDLING_HEAVY";
		case 1:
			return "HORSE_HANDLING_STANDARD";
		case 2:
			return "HORSE_HANDLING_RACE";
		case 3:
			return "HORSE_HANDLING_ELITE";
		default:
			break;
	}
	return "";
}

bool func_544()
{
	return (Global_1915715->f_20637 || Global_1915715->f_22504.f_1);
}

void func_545(int iParam0)
{
	Global_1952637 = (Global_1952637 || iParam0);
}

void func_546(struct<4> Param0)
{
	switch (Param0)
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
			if (Global_1952637->f_918 >= 25)
			{
				return;
			}
			if (func_1258(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1952637->f_918)
				{
					iVar1 = ((Global_1952637->f_923 + iVar0) % 25);
					if ((&Global_1952637->f_736[iVar1] == Param0 && Global_1952637->f_736[iVar1]->f_1 == Param0.f_1) && Global_1952637->f_736[iVar1]->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_1259(Param0);
			*Global_1952637->f_736[Global_1952637->f_924] = { Param0 };
			Global_1952637->f_918++;
			Global_1952637->f_924 = (Global_1952637->f_924 + 1 % 25);
			func_545(8);
			break;
		case 24:
		case 25:
			if (Global_1952637->f_919 >= 25)
			{
				return;
			}
			if (func_1258(Param0))
			{
				return;
			}
			func_1259(Param0);
			*Global_1952637->f_635[Global_1952637->f_919] = { Param0 };
			Global_1952637->f_919++;
			func_545(8);
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
			if (Global_1952637->f_920 >= 20)
			{
				return;
			}
			if (func_1258(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1952637->f_920)
				{
					iVar1 = ((Global_1952637->f_921 + iVar0) % 20);
					if ((&Global_1952637->f_837[iVar1] == Param0 && Global_1952637->f_837[iVar1]->f_1 == Param0.f_1) && Global_1952637->f_837[iVar1]->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_1259(Param0);
			*Global_1952637->f_837[Global_1952637->f_922] = { Param0 };
			Global_1952637->f_920++;
			Global_1952637->f_922 = (Global_1952637->f_922 + 1 % 20);
			func_545(8);
			break;
			break;
	}
}

bool func_547(int iParam0)
{
	return func_324(Global_1940144->f_7, iParam0);
}

bool func_548(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_549(bool bParam0)
{
	if (func_547(1))
	{
		if (bParam0)
		{
			func_552("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_547(2) && get_game_timer() >= Global_17388)
	{
		if (bParam0)
		{
			iVar0 = func_1260(Global_34);
			if (iVar0 != 0)
			{
				if (_0x9a100f1cf4546629(iVar0))
				{
					func_552("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return false;
				}
			}
			func_552("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_547(4194304))
	{
		return false;
	}
	return true;
}

bool func_550(bool bParam0, bool bParam1)
{
	if (_is_ped_carrying(Global_34))
	{
		_0x6b67320e0d57856a(Global_34, &Var0, 2, 0);
		if (bParam1)
		{
			switch (Var0.f_1)
			{
				case 4:
					return true;
				default:
					break;
			}
		}
		if (bParam0)
		{
			func_552("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_551(bool bParam0, int iParam1, bool bParam2)
{
	if (_0x1d46b417f926d34d(Global_34))
	{
		return false;
	}
	else if (is_ped_in_any_vehicle(Global_34, true))
	{
		if (!is_ped_in_any_vehicle(Global_34, false))
		{
			return false;
		}
		iVar0 = get_vehicle_ped_is_using(Global_34);
		iVar1 = get_entity_model(iVar0);
		switch (iVar1)
		{
			case -1613317544:
			case 1493442814:
				if (bParam0)
				{
					func_552("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return false;
			case -1988548788:
			case 518773733:
			case 742064790:
			case 749266870:
				if (bParam0)
				{
					func_552("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return false;
		}
		if (!func_548(iParam1, 32) && !is_ped_on_mount(Global_34))
		{
			if (bParam2 || _0x2963b5c1637e8a27(iVar0) == Global_34)
			{
				return false;
			}
		}
	}
	else if (is_ped_getting_into_a_vehicle(Global_34))
	{
		return false;
	}
	return true;
}

var func_552(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_553(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return _is_ped_getting_into_a_mount_seat(iParam0, true);
	}
	return false;
}

bool func_554(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!does_entity_exist(iParam0))
		{
			return false;
		}
		if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
		{
			return false;
		}
	}
	fVar0 = get_entity_speed(iParam0);
	fVar1 = _0xca95924c893a0c91(iParam0, fVar0);
	if (fVar1 <= 1.5f)
	{
		return true;
	}
	return false;
}

bool func_555(int iParam0)
{
	return (Global_1958000 && iParam0) != 0;
}

bool func_556(int iParam0)
{
	return (Global_19 && iParam0) != 0;
}

bool func_557()
{
	if (func_1261())
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

bool func_558(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_480(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_559(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_560(int iParam0, int iParam1)
{
	if (!func_177(iParam0, 0))
	{
		return func_1263(func_1262(iParam0), iParam1);
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

int func_561(int iParam0)
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

bool func_562(char* sParam0, int iParam1)
{
	if (!does_script_exist(sParam0))
	{
		return false;
	}
	request_script(sParam0);
	if (!has_script_loaded(sParam0) || get_number_of_free_stacks_of_this_size(iParam1) <= 0)
	{
		return false;
	}
	start_new_script(sParam0, iParam1);
	set_script_as_no_longer_needed(sParam0);
	return true;
}

bool func_563()
{
	if (Global_1940311->f_36 == 3)
	{
		return true;
	}
	return false;
}

bool func_564(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_177(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_479(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_1264(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_1027(iParam0, bParam4, 0) };
	Var6 = { func_1028(iParam0, Var1, Var1.f_4, bParam4) };
	return func_1265(iParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

bool func_565(int iParam0, bool bParam1)
{
	if (!func_177(iParam0, 0))
	{
		return false;
	}
	if (Global_1940311->f_7)
	{
		return false;
	}
	if (((iParam0 != 1259508039 && iParam0 != -1838434463) && iParam0 != 2019377485) && bParam1)
	{
		iVar0 = func_1266(iParam0);
		if (func_560(iParam0, 1147021565))
		{
			iVar0 |= 64;
		}
		if (!func_172(1, iVar0))
		{
			return false;
		}
	}
	if (iParam0 == -1448210800 || iParam0 == -2035110427)
	{
		if (func_1218())
		{
			return false;
		}
	}
	if (!func_355(iParam0, 1))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

bool func_566(int iParam0)
{
	if (func_574(iParam0))
	{
		return false;
	}
	if (!_0x3d10d7179d7034af(func_480(0), iParam0, func_270(0)))
	{
		return false;
	}
	switch (iParam0)
	{
		case -1838434463:
		case 2019377485:
			func_1208(1, 1);
			_0x565eaa726b2ce3b7(0);
			return true;
		case 1807503187:
			if (func_1267() != -1)
			{
				func_552(func_613(), 10000, 0, 0, 0, 1);
				func_742(-1);
			}
			break;
	}
	return true;
}

bool func_567(int iParam0)
{
	if (iParam0 == 17745825)
	{
		StringCopy(&(Var0.f_10), "legendary_animal_map", 32);
		Var0.f_14 = 512;
		func_465(Var0, 0);
		return true;
	}
	return false;
}

void func_568(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, bool bParam28, int iParam29)
{
}

void func_569(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
}

void func_570(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
}

bool func_571(int iParam0)
{
	if (func_66() == 0 && func_1269(func_1268(iParam0), 1, 0) != 0)
	{
		func_552("NET_ALOOT_HELP_OPEN_FAIL", 10000, 0, 0, 0, 1);
		return false;
	}
	return true;
}

bool func_572(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_1270(iParam0, bParam1, 0, 0, -1082130432))
	{
		Global_1913503 = get_game_timer() + 3000;
		return true;
	}
	switch (func_461(iParam0, -949239683))
	{
		case 881567935:
			if (!bParam1)
			{
				_task_item_interaction(player_ped_id(), iParam0, 1245009814, 1, 0, -1082130432);
				return true;
			}
			break;
		case 845883585:
			if (!bParam1)
			{
				if (!func_1271())
				{
					if (func_1272(&Global_34))
					{
						_task_item_interaction(player_ped_id(), iParam0, 616992297, 1, 0, -1082130432);
					}
					else
					{
						_task_item_interaction(player_ped_id(), iParam0, -903856906, 1, 0, -1082130432);
					}
					return true;
				}
				else
				{
					func_552("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
				}
			}
			break;
		case -1239610997:
			if (!bParam2)
			{
				_task_item_interaction(player_ped_id(), iParam0, 280850861, 1, 0, -1082130432);
			}
			else
			{
				_task_item_interaction(player_ped_id(), iParam0, 1087288635, 1, 0, 0f);
				if (_0xa24c1d341c6e0d53(1, 0, 0))
				{
					animpostfx_play("CamTransition01");
				}
			}
			Global_1913503 = get_game_timer() + 3000;
			return true;
		case 632545869:
			if (!bParam2)
			{
				_task_item_interaction(player_ped_id(), iParam0, -268993254, 1, 0, -1082130432);
			}
			else
			{
				_task_item_interaction(player_ped_id(), iParam0, -1401979141, 1, 0, 0f);
				if (_0xa24c1d341c6e0d53(1, 0, 0))
				{
					animpostfx_play("CamTransition01");
				}
			}
			Global_1913503 = get_game_timer() + 3000;
			return true;
		case -793205628:
			if (!bParam2)
			{
				_task_item_interaction(player_ped_id(), iParam0, 1834614641, 1, 0, -1082130432);
			}
			else
			{
				_task_item_interaction(player_ped_id(), iParam0, 136592566, 1, 0, 0f);
				if (_0xa24c1d341c6e0d53(1, 0, 0))
				{
					animpostfx_play("CamTransition01");
				}
			}
			Global_1913503 = get_game_timer() + 3000;
			return true;
		case 1451036371:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_1273(iParam0);
				}
				else
				{
					func_1274(iParam0);
				}
				return true;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_1275(iParam0, 1);
				return true;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_1276(iParam0, 1);
				return true;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				func_1277(iParam0);
				return true;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_1273(iParam0);
				}
				else
				{
					func_1278(iParam0);
				}
				return true;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_1273(iParam0);
				}
				else
				{
					func_1279(iParam0);
				}
				return true;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_1273(iParam0);
				}
				else
				{
					func_1280(iParam0);
				}
				return true;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_1273(iParam0);
				}
				else
				{
					func_1281(iParam0);
				}
				return true;
			}
			break;
		case -1337515701:
			if (!bParam1)
			{
				_task_item_interaction(player_ped_id(), iParam0, -1893721798, 1, 0, -1082130432);
				return true;
			}
			break;
		case -262371497:
			if (!bParam1)
			{
				func_1282(iParam0);
				return true;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_1283(iParam0);
				return true;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_1284(iParam0);
				return true;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_1273(iParam0);
				return true;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_1285(iParam0, bParam3);
				return true;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_1286(iParam0, bParam3);
				return true;
			}
			break;
	}
	return false;
}

bool func_573()
{
	return Global_1893587 & 2 != 0;
}

bool func_574(int iParam0)
{
	if (!func_177(iParam0, 0))
	{
		return false;
	}
	if (func_178(iParam0) == -1650247667)
	{
		return true;
	}
	return false;
}

int func_575(int iParam0)
{
	return func_1287(iParam0);
}

bool func_576(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (func_178(iParam0) == -1037537535)
	{
		if (func_362(iParam0) == -999503751)
		{
		}
	}
	return true;
}

int func_577()
{
	iVar0 = player_id();
	iVar1 = _0xf49f14462f0ae27c(iVar0);
	iVar2 = get_player_ped(iVar0);
	if (!does_entity_exist(iVar1))
	{
		return 0;
	}
	if (is_entity_dead(iVar1) || is_ped_injured(iVar1))
	{
		return 0;
	}
	if (is_ped_swimming(iVar2) || is_ped_swimming(iVar1))
	{
		return 0;
	}
	if (is_ped_on_mount(iVar2))
	{
		if (_get_rider_of_mount(iVar1, false) != iVar2)
		{
			return 0;
		}
	}
	vVar3 = { get_entity_coords(iVar2, false, false) };
	vVar6 = { get_entity_coords(iVar1, false, false) };
	if (get_distance_between_coords(vVar3, vVar6, true) < 2f && _0xd543d3a8fde4f185(iVar2, iVar1))
	{
		return 1;
	}
	return 0;
}

bool func_578(int iParam0)
{
	iVar0 = get_player_ped(iParam0);
	iVar1 = _0xf49f14462f0ae27c(iParam0);
	if (is_ped_on_mount(iVar0))
	{
		if (_get_rider_of_mount(iVar1, false) == iVar0)
		{
			return true;
		}
	}
	return false;
}

int func_579(int iParam0, bool bParam1)
{
	if (!func_1223())
	{
		return 0;
	}
	if (!func_1288(iParam0))
	{
		return 0;
	}
	if (func_1289(iParam0))
	{
		iVar0 = 0;
		if ((func_362(iParam0) == 81053684 || func_560(iParam0, 160827531)) && !func_560(iParam0, -1303648999))
		{
			if (bParam1)
			{
				func_325(&iVar0, 2);
			}
		}
		return func_1290(iParam0, iVar0);
	}
	return 0;
}

void func_580(int iParam0)
{
	iVar0 = 10;
	iVar1 = &Global_1952637->f_1675.f_1[iVar0];
	if (iVar1 == iParam0)
	{
		_0xcb9401f918cb0f75(Global_34, "PlayUnequipHatFidget", 1, 15);
		func_359(Global_34, -2065815962, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
		func_357(iParam0, 0, 0);
		return;
	}
	_0xcb9401f918cb0f75(Global_34, "PlayEquipHatFidget", 1, 15);
	func_359(Global_34, iParam0, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
	if (func_265(32768))
	{
		knock_off_ped_prop(Global_34, false, true, false, true);
		func_358();
		func_545(128);
		return;
	}
	if (iVar1 == &Global_1952637->f_83[iVar0])
	{
		func_357(iParam0, 1, 0);
		return;
	}
	if (func_1039(-2061583405, 0))
	{
		if (func_1038(iVar1))
		{
			func_357(iVar1, 0, 0);
		}
		else
		{
			func_872(iVar1, 1, 1, 0, 0, 0);
		}
		func_357(iParam0, 1, 0);
		return;
	}
	if (func_1038(iVar1))
	{
		func_357(iVar1, 0, 0);
		func_357(iParam0, 1, 0);
	}
	else if (func_1038(iParam0))
	{
		if (iParam0 != func_1291(0))
		{
			func_1292(iParam0, iVar1, 0, 0, 0);
			func_357(iParam0, 0, 0);
			func_357(iVar1, 0, 0);
		}
		else
		{
			knock_off_ped_prop(Global_34, false, true, false, true);
			func_545(128);
			func_357(iParam0, 1, 0);
		}
	}
}

int func_581(int iParam0, bool bParam1)
{
	iVar2 = 0;
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar7))
	{
		return 0;
	}
	Var8 = { func_1028(889965687, func_1293(bParam1), 1034665895, bParam1) };
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_3334.f_26)
	{
		iVar1 = &Global_1952637->f_3334[iVar0];
		if (func_362(iVar1) == iParam0 || (iParam0 == 81053684 && func_560(iVar1, 160827531)))
		{
			Var3 = { func_1028(iVar1, Var8, iVar7, bParam1) };
			if (_0x70e3a884ed000a01(func_480(bParam1), &Var3))
			{
				iVar2 = iVar1;
				_0x65a5f70f4a292ebe(func_480(bParam1), &Var3, false);
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_582(int iParam0, int iParam1)
{
	iParam0 = func_1294(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_584(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_swimming(Global_34) || is_ped_swimming(iVar0))
	{
		return 0;
	}
	if (is_ped_on_mount(Global_34))
	{
		if (_get_rider_of_mount(iVar0, false) == Global_34)
		{
			if (iParam1 == -727924611)
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_1295(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_583(int iParam0)
{
	iParam0 = func_1294(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_584(iParam0);
	if (!does_entity_exist(iVar0))
	{
		if (iParam0 == func_1296())
		{
			return true;
		}
		return false;
	}
	if (iVar0 == _get_saddle_horse_for_player(player_id()))
	{
		return true;
	}
	return false;
}

int func_584(int iParam0)
{
	iParam0 = func_1294(iParam0);
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

bool func_585(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (does_entity_exist(iParam1) && !is_entity_dead(iParam1))
		{
			if (bParam2)
			{
				return (_is_ped_getting_into_a_mount_seat(iParam0, true) && get_mount(iParam0) == iParam1);
			}
			else
			{
				return (is_ped_on_mount(iParam0) && get_mount(iParam0) == iParam1);
			}
		}
	}
	return false;
}

bool func_586(int iParam0, int iParam1)
{
	if ((!func_1297() || !network_is_game_in_progress()) || !network_is_session_active())
	{
		return false;
	}
	if (!func_1298(16))
	{
		return false;
	}
	if (func_905())
	{
		if (!_unlock_is_unlocked(-75008140))
		{
			return false;
		}
	}
	if (!func_1299())
	{
		return false;
	}
	if (func_1300(16))
	{
		return false;
	}
	iVar0 = _0x901e0dc25080c8b9(player_id());
	if (iParam1 == 1 && (!_0xd6f6acf4392187fb(iVar0) || !_0x424b17a7dc5c90bc(player_id())))
	{
		return false;
	}
	if (iParam0 == 1 && func_324(Global_1137047->f_8, 1))
	{
		return false;
	}
	if (func_589())
	{
		return false;
	}
	return true;
}

int func_587(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1301();
	}
	if (!func_473(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_476(iParam0);
	Global_1896738->f_386 = 1;
	Global_1896738->f_387 = bParam1;
	return 1;
}

bool func_588(int iParam0)
{
	return func_324(Global_1137047->f_8, iParam0);
}

bool func_589()
{
	iVar0 = func_1302(player_id());
	if (iVar0 != -1)
	{
		if ((*Global_1131196)[iVar0]->f_18.f_1 != 0 && func_324((*Global_1131196)[iVar0]->f_18, 1))
		{
			return true;
		}
	}
	return false;
}

void func_590()
{
	Var0 = { func_68(0) };
	if (func_326(Var0))
	{
		if (Var0 == 6)
		{
			iVar2 = func_1303(player_id(), 0);
			if (iVar2 != -1)
			{
				if (func_1304(iVar2) == -785841056)
				{
					func_552("GC_SELECT_FAIL_POSSE_VERSUS", 10000, 0, 0, 0, 1);
				}
				else if (iVar2 == 1)
				{
					func_552("GC_SELECT_FAIL_CHALLENGE", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_552("GC_SELECT_FAIL_EVENT", 10000, 0, 0, 0, 1);
				}
			}
		}
		else
		{
			func_552("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
		}
	}
}

void func_591(int iParam0)
{
	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_6 = iParam0;
	Var0.f_4 = 56;
	func_1306(Var0, func_1305(0, 8), 0, 0);
}

int func_592(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_593(bool bParam0)
{
	if ((func_66() != -1 || !bParam0) || func_1307(Global_34))
	{
		func_1308();
		return;
	}
}

void func_594()
{
	iVar0 = player_id();
	func_1309(1, iVar0);
}

bool func_595()
{
	return !&Global_1913504;
}

void func_596()
{
	Global_1913504 = 0;
}

bool func_597()
{
	return Global_1913504->f_3 == 0;
}

void func_598(int iParam0, char* sParam1)
{
	func_1311(_create_var_string(2, func_1310(iParam0), sParam1), "itemtype_textures", 1088654639, 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_599(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_177(iParam0, 0))
	{
		return;
	}
	else if (iParam0 == 1807503187)
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_595() || bParam6)
	{
		func_1312(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1313(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam0 == 1701457723)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_1313(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_1314(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_178(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if (((((((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038) && iParam0 != 446901936) && iParam0 != -228768324) && iParam0 != 34372170) && iParam0 != 963726415) && iParam0 != 1701457723)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	iVar12 = func_362(iParam0);
	if (((((((iVar6 == -1013984273 || iVar6 == 658570475) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_1315(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (get_hash_key(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (is_string_null_or_empty(Var7))
	{
		return;
	}
	iVar13 = 109029619;
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		iVar13 = 619977481;
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_560(iParam0, 474910316))
	{
		sVar17 = func_1316(iParam0);
		if (!is_string_null_or_empty(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (_item_database_is_overpowered_item(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = -856358433;
		}
		else
		{
			iVar13 = -1905433004;
		}
	}
	if (func_560(iParam0, 1816585950))
	{
		iVar13 = 76603059;
	}
	if (func_1317(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = -1777836132;
		}
		else
		{
			iVar13 = -1905433004;
		}
	}
	iVar18 = func_645(iParam0);
	if ((func_1318(iVar12) && func_560(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_1319(iParam0);
	}
	else if (func_178(iParam0) == -1037537535)
	{
		iVar19 = func_1320(iParam0);
		if (func_177(iVar19, 0))
		{
			iVar18 = func_645(iVar19);
		}
	}
	if (func_1321(iParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_1322(iParam0, -915411861, &iVar20, 0);
		iVar1 = ceil((to_float(iVar1) / to_float(iVar20)));
		iParam1 = ceil((to_float(iParam1) / to_float(iVar20)));
	}
	sVar21 = func_1323(_create_var_string(10, &cVar2, _create_var_string(0, iVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = _create_var_string(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != -1713496139) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != 1733464892) && iParam0 != -598283164)) || (iVar12 == 252325943 && iParam0 != -860557048)) || (iVar12 == -636562458 && iParam0 != -2087489409))
	{
		sVar21 = _create_var_string(0, func_1324(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_1325(iParam0, &cVar22))
		{
			sVar21 = func_938(func_1326(cVar22), 109029619);
		}
	}
	func_1311(sVar21, Var7.f_1, get_hash_key(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

void func_600()
{
	Global_1913504->f_3 = 0;
}

bool func_601()
{
	return Global_1913504->f_130 == 0;
}

void func_602(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_1327(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam2 == 255 || !network_is_player_active(iParam2))
	{
		if ((bParam3 && iParam0 == 186) && iVar0 == get_hash_key("PXPT_NULL"))
		{
			func_1328(iParam1, 1000);
			return;
		}
		iParam2 = player_id();
	}
	else if (!func_595())
	{
		func_1328(iParam1, 1000);
		return;
	}
	iVar1 = iParam2;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return;
	}
	if (!func_1329(player_id(), iVar1) || !is_mp_gamer_tag_active(Global_1071686->f_21952[iVar1]->f_2))
	{
		iParam2 = player_id();
	}
	func_1311(_create_var_string(0, iVar0, iParam1), "itemtype_textures", 1088654639, 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_603()
{
	Global_1913504->f_130 = 0;
	Global_1913504->f_128 = 0;
	Global_1913504->f_129 = 0;
}

bool func_604()
{
	return Global_1913504->f_127 == 0;
}

void func_605(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		if (bParam3)
		{
			func_1330(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_1311(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_606()
{
	Global_1913504->f_127 = 0;
	Global_1913504->f_125 = 0;
	Global_1913504->f_126 = 0;
}

bool func_607()
{
	return Global_1913504->f_133 == 0;
}

void func_608(bool bParam0)
{
	if (bParam0)
	{
		func_1331(1000);
		return;
	}
	sVar0 = "PNOT_HOSTILITY_TRANS";
	func_1311(_create_var_string(2, sVar0), "mp_online_options", 1196426011, 0, 859817522, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
}

void func_609()
{
	Global_1913504->f_133 = 0;
	Global_1913504->f_131 = 0;
	Global_1913504->f_132 = 0;
}

void func_610(int iParam0, var uParam1, struct<4> Param2)
{
	disable_control_action(0, -822242784, false);
	if (is_ped_on_mount(Global_34) && !func_553(Global_34))
	{
		return;
	}
	else if (is_ped_getting_into_a_vehicle(Global_34))
	{
		return;
	}
	else if (is_ped_reloading(Global_34))
	{
		return;
	}
	if (iParam0 == 1)
	{
		uVar0 = uParam1;
		if (!Global_1940144->f_9 && !_0x4912dfe492db98cd(Global_34, "inInspectionMode"))
		{
			_task_item_interaction_3(player_ped_id(), uVar0, &Param2, 0, 0, 0, -1082130432);
			Global_1940144->f_8 = 1;
			Global_1940144->f_66 = { Param2 };
		}
	}
}

bool func_611()
{
	if (((Global_1940311->f_36 == 1 || Global_1940311->f_36 == 2) || func_1332()) || func_563())
	{
		return true;
	}
	return false;
}

int func_612(int iParam0, int iParam1)
{
	if (func_66() == -1)
	{
		if (func_1333(iParam0, iParam1))
		{
			return 1;
		}
		return 0;
	}
	if (func_66() == 0)
	{
		if (func_1333(iParam0, iParam1))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

char* func_613()
{
	iVar0 = func_1267();
	switch (iVar0)
	{
		case 0:
			return "SHOPS_HANDHELD_FAIL_NONE";
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
		case 3:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
		case 4:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
		case 5:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		case 6:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
		case 9:
			return "SHOPS_HANDHELD_FAIL_WAIT_FOR_FREEROAM";
		case 7:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
		case 8:
			return "SHOPS_HANDHELD_FAIL_SHOPS_DISABLED_THIS_FRAME";
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_USING_TURRET";
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
		case 16:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
		case 17:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
		case 18:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
		case 19:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
		case 20:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
		case 21:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BRUSHING";
		case 22:
			return "SHOPS_HANDHELD_FAIL_IN_DEEP_WATER";
		case 23:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME";
		case 24:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ARCHERY";
		case 25:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CHALLENGE";
		case 26:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_DEAD_DROP";
		case 27:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_GOLDEN_SHOWDOWN";
		case 28:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_HOT_PROPERTY";
		case 29:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_CASTLE";
		case 30:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_RAILS";
		case 31:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WRECKAGE";
		case 32:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CONDOR_EGG";
		case 33:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ANIMAL_TAGGING";
		case 35:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_PROTECT_LEGENDARY_ANIMAL";
		case 34:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WILDLIFE_PHOTOGRAPHER";
		case 37:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV";
		case 39:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_BIGGEST_FISH";
		case 40:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_FLYING_BIRD";
		case 41:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HERBALIST";
		case 36:
			return "SHOPS_HANDHELD_FAIL_MISSION_FEUD";
		case 38:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HUNT_THE_POSSE_LEADER";
		case 42:
			return "SHOPS_HANDHELD_FAIL_PLAYER_MATCHMAKING";
		case 46:
			Var1 = -1;
			Var1.f_1 = -1;
			Var1 = { func_68(0) };
			if (!func_326(Var1))
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			iVar3 = func_1334(&Var1, 1);
			if (iVar3 == -1)
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			if (!func_1335(iVar3, 461218520, 1))
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			return func_1337(func_1336(iVar3, 461218520));
	}
	return "";
}

bool func_614(bool bParam0)
{
	iVar0 = player_id();
	iVar1 = iVar0;
	if ((*Global_1138048)[iVar1]->f_4)
	{
		if (bParam0)
		{
			func_552("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_in_combat(Global_34, 0))
	{
		if (bParam0)
		{
			func_552("CAMP_UNUSABLE_IN_COMBAT", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_103(player_id(), 1, 1, 0))
	{
		if (bParam0)
		{
			func_552("CAMP_UNUSABLE_WANTED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_active_in_scenario(Global_34, 1))
	{
		if (bParam0)
		{
			func_552("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_1338(-608558181) || _get_number_of_references_of_script_with_name_hash(-608558181) > 0)
	{
		if (bParam0)
		{
			func_552("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_minigame_in_progress())
	{
		if (bParam0)
		{
			func_552("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if ((((is_ped_in_any_vehicle(Global_34, false) || (!is_ped_ragdoll(Global_34) && is_ped_on_vehicle(Global_34, false))) || is_ped_in_any_boat(Global_34)) || is_player_riding_train(player_id())) || is_ped_jacking(Global_34))
	{
		if (bParam0)
		{
			func_552("CAMP_UNUSABLE_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_322(0, 1, 1) && !func_1339(1))
	{
		if (bParam0)
		{
			func_552("CAMP_UNUSABLE_MISSIONS", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_1340())
	{
		if (bParam0)
		{
			func_552("CAMP_UNUSABLE_CAMERA", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_555(8))
	{
		if (bParam0)
		{
			func_552("CAMP_UNUSABLE_ALREADY_IN_A_CAMP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_635(Global_34))
	{
		if (bParam0)
		{
			func_552("CAMP_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_any_hostile_ped_near_point(Global_34, Global_35, 10f))
	{
		if (bParam0)
		{
			func_552("CAMP_UNUSABLE_HOSTILE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_1341())
	{
		if (bParam0)
		{
			func_552("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_interior_scene())
	{
		if (bParam0)
		{
			func_552("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (Global_1915715->f_20637 || Global_1915715->f_22504.f_1)
	{
		if (bParam0)
		{
			func_552("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_615(var uParam0)
{
	if (!does_entity_exist(uParam0->f_12))
	{
		return false;
	}
	if (!is_entity_a_ped(uParam0->f_12))
	{
		return false;
	}
	if (_launch_app_by_hash_with_entry(1749944028, -649639953) != 0)
	{
		return false;
	}
	iVar0 = get_entity_model(uParam0->f_12);
	iVar1 = get_ped_index_from_entity_index(uParam0->f_12);
	uParam0->f_1 = _databinding_add_data_container_from_path("", "InfoBox");
	_databinding_add_data_bool(uParam0->f_1, "isVisible", true);
	_databinding_add_data_bool(uParam0->f_1, "showHorseStats", true);
	sVar3 = _0x0139637a3bff8b6d(uParam0->f_12, &uVar2);
	StringCopy(&cVar4, _create_var_string(0, sVar3), 128);
	_databinding_add_data_string(uParam0->f_1, "itemLabel", &cVar4);
	func_388(iVar1, _0x964000d355219fc0(iVar1), 1, 0);
	iVar20 = compendium_get_short_description_from_ped(iVar1);
	_databinding_add_data_hash(uParam0->f_1, "itemDescription", iVar20);
	iVar21 = func_532(iVar0);
	sVar22 = "";
	StringCopy(&cVar23, func_533(iVar21), 64);
	sVar22 = func_534(&cVar23);
	iVar31 = player_id();
	bVar32 = false;
	if (_0x46fa0ae18f4c7fa9(iVar31) == iVar1)
	{
		bVar32 = true;
	}
	bVar33 = false;
	if (_0xd3f7445cea2e5035(iVar31) == iVar1)
	{
		bVar33 = true;
	}
	bVar34 = false;
	if (bVar32 || bVar33)
	{
		bVar34 = true;
	}
	_databinding_add_data_bool(uParam0->f_2, "visible", true);
	_databinding_add_data_bool(uParam0->f_2, "showHorseStats", true);
	uParam0->f_2 = _databinding_add_data_container(uParam0->f_1, "horseRpgStats");
	iVar35 = func_1342(iVar1);
	fVar36 = _0x22f2a386d43048a9(iVar1);
	iVar37 = func_1343(iVar1, 1);
	iVar38 = round((IntToFloat(iVar37) * 0.15f));
	uParam0->f_2.f_1 = _databinding_add_data_container(uParam0->f_2, "stamina");
	_databinding_add_data_int(uParam0->f_2.f_1, "unlockedMaxAsState", iVar35);
	_databinding_add_data_float(uParam0->f_2.f_1, "normalizedValue", fVar36);
	_databinding_add_data_float(uParam0->f_2.f_1, "normalizedUnlockedMax", fVar36);
	uParam0->f_2.f_2 = _databinding_add_data_container(uParam0->f_2.f_1, "staminaCore");
	uParam0->f_2.f_3 = _databinding_add_data_container(uParam0->f_2.f_2, "status");
	_databinding_add_data_int(uParam0->f_2.f_3, "state", iVar38);
	iVar39 = func_1344(iVar1);
	iVar40 = get_entity_health(iVar1);
	iVar41 = get_entity_max_health(iVar1, false);
	fVar42 = (to_float(iVar40) / to_float(iVar41));
	iVar43 = func_1343(iVar1, 0);
	iVar44 = round((IntToFloat(iVar43) * 0.15f));
	uParam0->f_2.f_4 = _databinding_add_data_container(uParam0->f_2, "health");
	_databinding_add_data_int(uParam0->f_2.f_4, "unlockedMaxAsState", iVar39);
	_databinding_add_data_float(uParam0->f_2.f_4, "normalizedValue", fVar42);
	_databinding_add_data_float(uParam0->f_2.f_4, "normalizedUnlockedMax", fVar42);
	uParam0->f_2.f_5 = _databinding_add_data_container(uParam0->f_2.f_4, "healthCore");
	uParam0->f_2.f_6 = _databinding_add_data_container(uParam0->f_2.f_5, "status");
	_databinding_add_data_int(uParam0->f_2.f_6, "state", iVar44);
	func_195(uParam0);
	sVar45 = func_536(iVar21);
	_databinding_add_data_string(uParam0->f_1, "horseName", _get_label_text_2(sVar22));
	_databinding_add_data_string(uParam0->f_1, "HorseCoat", sVar45);
	iVar46 = func_537(iVar1);
	iVar47 = iVar46 + 1;
	_databinding_add_data_int(uParam0->f_1, "HorseSpeedValue", iVar47);
	_databinding_add_data_int(uParam0->f_1, "HorseSpeedMinValue", 0);
	_databinding_add_data_int(uParam0->f_1, "HorseSpeedMaxValue", 10);
	iVar48 = func_538(iVar1);
	iVar49 = (iVar47 + iVar48);
	iVar49 = func_539(iVar49, 0, 10);
	_databinding_add_data_int(uParam0->f_1, "HorseSpeedEquipmentValue", iVar49);
	_databinding_add_data_int(uParam0->f_1, "HorseSpeedEquipmentMinValue", 0);
	_databinding_add_data_int(uParam0->f_1, "HorseSpeedEquipmentMaxValue", 10);
	iVar50 = iVar47 + 2;
	iVar50 = func_539(iVar50, 0, 10);
	_databinding_add_data_int(uParam0->f_1, "HorseSpeedCapacityValue", iVar50);
	_databinding_add_data_int(uParam0->f_1, "HorseSpeedCapacityMinValue", 0);
	_databinding_add_data_int(uParam0->f_1, "HorseSpeedCapacityMaxValue", 10);
	iVar51 = func_540(iVar1);
	iVar52 = iVar51 + 1;
	_databinding_add_data_int(uParam0->f_1, "HorseAccValue", iVar52);
	_databinding_add_data_int(uParam0->f_1, "HorseAccMinValue", 0);
	_databinding_add_data_int(uParam0->f_1, "HorseAccMaxValue", 10);
	iVar53 = func_541(iVar1);
	iVar54 = (iVar52 + iVar53);
	iVar54 = func_539(iVar54, 0, 10);
	_databinding_add_data_int(uParam0->f_1, "HorseAccEquipmentValue", iVar54);
	_databinding_add_data_int(uParam0->f_1, "HorseAccEquipmentMinValue", 0);
	_databinding_add_data_int(uParam0->f_1, "HorseAccEquipmentMaxValue", 10);
	iVar55 = iVar52 + 2;
	iVar55 = func_539(iVar55, 0, 10);
	_databinding_add_data_int(uParam0->f_1, "HorseAccCapacityValue", iVar55);
	_databinding_add_data_int(uParam0->f_1, "HorseAccCapacityMinValue", 0);
	_databinding_add_data_int(uParam0->f_1, "HorseAccCapacityMaxValue", 10);
	iVar56 = func_542(iVar1);
	sVar57 = func_543(iVar56);
	_databinding_add_data_string(uParam0->f_1, "HorseHandling", sVar57);
	iVar58 = 0;
	if (bVar34 && is_ped_in_writhe(iVar1))
	{
		iVar58 = -7914336;
	}
	else if (bVar32)
	{
		iVar58 = -790855579;
	}
	else if (bVar33)
	{
		iVar58 = 592282892;
	}
	_databinding_add_data_hash(uParam0->f_1, "itemTipText", iVar58);
	return true;
}

bool func_616(var uParam0)
{
	if (!does_entity_exist(uParam0->f_12))
	{
		return false;
	}
	if (_launch_app_by_hash_with_entry(1749944028, -1645363952) != 0)
	{
		return false;
	}
	uParam0->f_1 = _databinding_add_data_container_from_path("", "InfoBox");
	_databinding_add_data_bool(uParam0->f_1, "isVisible", true);
	iVar1 = _0x0139637a3bff8b6d(uParam0->f_12, &iVar0);
	if (iVar1 == 0 && is_entity_a_ped(uParam0->f_12))
	{
		iVar1 = _0x36e3d8b5a6552fe8(get_ped_index_from_entity_index(uParam0->f_12));
	}
	StringCopy(&cVar2, _create_var_string(0, iVar1), 128);
	if (iVar0 == 1)
	{
		iVar18 = get_ped_index_from_entity_index(uParam0->f_12);
		iVar19 = _get_ped_quality(iVar18);
		if (iVar19 != -1)
		{
			if (iVar19 == 2)
			{
				StringCopy(&cVar20, "PED_QUALITY_HIGH", 128);
			}
			else if (iVar19 == 1)
			{
				StringCopy(&cVar20, "PED_QUALITY_MEDIUM", 128);
			}
			else
			{
				StringCopy(&cVar20, "PED_QUALITY_LOW", 128);
			}
			StringCopy(&cVar2, _create_var_string(42, "MORE_INFO_PED_QUALITY", _create_var_string(0, iVar1), &cVar20), 128);
		}
	}
	_databinding_add_data_string(uParam0->f_1, "itemLabel", &cVar2);
	iVar36 = 0;
	if (is_entity_a_ped(uParam0->f_12))
	{
		iVar37 = get_ped_index_from_entity_index(uParam0->f_12);
		func_388(iVar37, _0x964000d355219fc0(iVar37), !get_ped_config_flag(iVar37, 580, true), 0);
		iVar36 = compendium_get_short_description_from_ped(iVar37);
		if (iVar0 == 1)
		{
			if (_is_metaped_using_component(iVar37, -234257069))
			{
				iVar36 = get_hash_key("MANGY_ANIMAL_DESC_MP");
			}
		}
	}
	_databinding_add_data_hash(uParam0->f_1, "itemDescription", iVar36);
	return true;
}

bool func_617(int iParam0)
{
	switch (iParam0)
	{
		case -1230516683:
		case 594040097:
			return true;
	}
	return false;
}

bool func_618(int iParam0)
{
	switch (iParam0)
	{
		case 1772321403:
			return true;
	}
	return false;
}

void func_619(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		set_bit(&(uParam0->f_28), 2);
	}
	else
	{
		clear_bit(&(uParam0->f_28), 2);
	}
}

void func_620(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		set_bit(&(uParam0->f_27), 0);
	}
	else
	{
		clear_bit(&(uParam0->f_27), 0);
	}
}

void func_621()
{
	Global_17333.f_3 = 0;
}

void func_622(var uParam0, var uParam1)
{
	if (*uParam0 != *uParam1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam1)[iVar0] = uParam0[iVar0];
		iVar0++;
	}
}

bool func_623()
{
	if (!func_439() && func_1345(1))
	{
		return true;
	}
	return false;
}

bool func_624()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) <= 4);
}

int func_625(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = -1;
	iVar1 = -1;
	fVar4 = -1f;
	iVar0 = 0;
	while (iVar0 < 180)
	{
		if (!func_626(iVar0))
		{
		}
		else if (func_203(iVar0) != iParam0)
		{
		}
		else if (bParam1)
		{
			if (!func_1346(iVar0))
			{
			}
			else
			{
				iVar2 = func_202(iVar0);
				if (bParam3)
				{
					if (!func_1347(iVar2))
					{
					}
					else if (bParam2)
					{
						if (func_403(iVar2))
						{
						}
						else
						{
							fVar3 = func_1348(Global_34, func_627(iVar0), 1);
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

bool func_626(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

Vector3 func_627(int iParam0)
{
	if (!func_626(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2947.055f, 1320.15f, 43.8203f;
		case 1:
			return 2939.063f, 1287.116f, 43.6529f;
		case 2:
			return 2932.97f, 1282.56f, 43.67f;
		case 117:
			return -5227.357f, -3470.067f, -20.49293f;
		case 118:
			return -5228.75f, -3468.28f, -21.57f;
		case 6:
			return -784.49f, -1321.95f, 42.88f;
		case 9:
			return -753.4219f, -1284.24f, 43.20049f;
		case 8:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.03f, -1327.09f, 42.97f;
		case 15:
			return -875.02f, -1326.71f, 42.97f;
		case 19:
			return -762.0716f, -1293.549f, 42.8355f;
		case 12:
			return -813.6f, -1373.8f, 44.2f;
		case 22:
			return 1417.288f, 273.5687f, 88.4881f;
		case 24:
			return 1521.91f, 441.15f, 89.68f;
		case 25:
			return 1523.63f, 442.65f, 89.68f;
		case 26:
			return 2161.5f, -618.5f, 43f;
		case 27:
			return -1092.88f, -575.69f, 81.41f;
		case 28:
			return -1094.35f, -577.48f, 81.41f;
		case 29:
			return 1294.084f, -1303.102f, 76.0418f;
		case 30:
			return 1297.423f, -1278.412f, 75.65752f;
		case 31:
			return 1319.43f, -1142.08f, 81.41f;
		case 33:
			return 1329.755f, -1294.218f, 76.0092f;
		case 34:
			return 1323.734f, -1321.775f, 77.8924f;
		case 35:
			return 1226.71f, -1295.08f, 75.9f;
		case 39:
			return 1230.34f, -1298.578f, 75.9027f;
		case 41:
			return 1209.053f, -193.1814f, 101.9785f;
		case 42:
			return 2644.188f, -1292.507f, 51.2496f;
		case 43:
			return 2657.466f, -1180.96f, 53.2785f;
		case 44:
			return 2819.495f, -1331.29f, 45.514f;
			return 2721.24f, -1231.66f, 49.37f;
			return 2859.51f, -1202.16f, 48.59f;
			return 2825.607f, -1318.207f, 45.7557f;
			return 2718f, -1287f, 49.6f;
			return 2508.212f, -1449.654f, 48.41523f;
			return 2748.811f, -1398.277f, 45.18309f;
			return 2747.824f, -1396.384f, 45.18309f;
			return 2555.09f, -1166.98f, 52.68f;
			return 2832.02f, -1225.563f, 46.6422f;
			return 2734.174f, -1119.755f, 50.10792f;
			return -1753.404f, -392.557f, 155.2576f;
			return -1790f, -388.27f, 159.33f;
			return -1818.99f, -370.94f, 162.3f;
			return -1819.88f, -561.8194f, 157.2323f;
			return -1763.78f, -385.1118f, 156.7401f;
			return -307.9643f, 773.6048f, 117.7031f;
			return -306.3f, 815.08f, 117.98f;
			return 0f, 0f, 0f;
			return -338.8647f, 767.4334f, 115.5628f;
			return -287.9538f, 804.0544f, 118.3859f;
			return -324f, 803.72f, 116.88f;
			return -281.82f, 778.97f, 118.5f;
			return -369.4457f, 786.6935f, 115.9904f;
			return -178.0316f, 628.0621f, 113.0896f;
			return -175.0377f, 631.7999f, 113.0896f;
			return -325.532f, 773.6285f, 117.5038f;
			return 3025.786f, 562.7253f, 43.7167f;
			return 2986.224f, 569.9468f, 43.62284f;
			return 2986.94f, 574.9f, 43.64f;
			return 2967.273f, 796.7416f, 52.5948f;
			return -1302.951f, 394.6608f, 94.3817f;
			return -1300.83f, 399.7599f, 94.38248f;
			return -1299.891f, 401.3615f, 94.38248f;
			return -5518.071f, -2906.217f, -2.7513f;
			return -5487.197f, -2939.038f, -1.3872f;
			return -5507.993f, -2964.844f, -1.6215f;
			return -5509.019f, -2947.435f, -2.8934f;
			return -5520.701f, -3044.427f, -1.40419f;
			return -3687.3f, -2623.39f, -14.44f;
			return -2842.211f, 137.3398f, 183.8268f;
			return -1005.934f, -540.8262f, 97.9502f;
			return 2076.835f, 1000.829f, 111.4973f;
			return -2251.034f, -1916.911f, 115.9488f;
			return -4730.243f, -2939.088f, -20.1029f;
			return -142.072f, -23.5242f, 95.0883f;
			return 675.3091f, -1251.233f, 43.0152f;
			return 1875.2f, -1859.182f, 41.8f;
			return 2366.084f, 1347.122f, 105.1305f;
			return -1402f, -2317f, 43.6f;
			return 0f, 0f, 0f;
		}

bool func_628(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_629(int iParam0, int iParam1, vector3 vParam2, int iParam5)
{
	if (iParam1 == 0)
	{
		return -1;
	}
	if (func_628(vParam2))
	{
		return -1;
	}
	iVar1 = -1;
	iVar2 = func_1349(vParam2);
	iVar0 = 0;
	while (iVar0 < Global_17081)
	{
		if (func_634(iVar0) == 0 && iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		else if ((func_634(iVar0) == iParam1 && func_633(iVar0) == iParam0) && iVar2 == func_1350(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 250)
	{
		func_1351(iVar1, iParam0);
		func_1352(iVar1, iParam1);
		func_1353(iVar1, iVar2);
		func_1354(iVar1, iParam5);
		func_1355(iVar1);
		set_blip_flash_timer(&(Global_17081[iVar1]), iParam1, func_1356(iParam0, 0));
		return iVar1;
	}
	return -1;
}

bool func_630(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < Global_17081)
	{
		if (func_633(iVar0) == iParam0 && func_634(iVar0) == iParam1)
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

bool func_631(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

int func_632(int iParam0)
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

int func_633(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return &(Global_39.f_3647[iParam0]);
	}
	return &(Global_25003[iParam0]);
}

int func_634(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return Global_39.f_3647[iParam0]->f_1;
	}
	return Global_25003[iParam0]->f_1;
}

bool func_635(int iParam0)
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

void func_636(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_637(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (_0x5463c962bc7777c3(iParam0, 6, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	return false;
}

bool func_638(int* iParam0)
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		if (get_event_at_index(0, iVar0) == -1509407906)
		{
			if (get_event_data(0, iVar0, iParam0, 2))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_639()
{
	return Global_1900736->f_67;
}

bool func_640(int iParam0)
{
	return Global_1108365->f_935.f_28 == iParam0;
}

bool func_641()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

int func_642(float fParam0)
{
	return func_1357(get_entity_coords(Global_34, true, false), fParam0);
}

int func_643(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_66() != -1)
	{
		return &(Global_20502[iParam0]);
	}
	else
	{
		return &(Global_12580[iParam0]);
	}
	return 0;
}

int func_644(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1433048902;
		case 3:
			return 1433048902;
		case 4:
			return -1602657245;
		case 5:
			return -1991037110;
		case 6:
			return 1047281747;
		case 7:
			return -398744080;
		case 8:
			return -1066874997;
		case 11:
			return -2085219828;
		case 12:
			return 2064962445;
		case 13:
			return -1781387050;
		case 15:
			return -1620920647;
		case 16:
			return -1664530975;
		case 18:
			return 1047281747;
		case 19:
			return -241666815;
		case 20:
			return -1781387050;
		case 21:
			return -597058368;
		case 24:
			return 128702355;
		case 27:
			return -2051332199;
		case 28:
			return 546981776;
		case 29:
			return -2013384490;
		case 30:
			return 228922461;
		case 32:
			return -746674788;
		case 34:
			return 599861917;
		case 35:
			return -1781387050;
		case 38:
			return 2006811763;
		case 39:
			return -90546043;
		case 49:
			return 1216456215;
		case 50:
			return 746300881;
		case 51:
			return -435006002;
		case 52:
			return -624139784;
		case 53:
			return -529638012;
		case 40:
			return 1338475089;
		case 41:
			return 2605459;
		case 42:
			return 1071702353;
		case 43:
			return -1183422860;
		case 44:
			return -1957546791;
		case 45:
			return -589542533;
		case 46:
			return -1776738559;
		case 47:
			return 1602215994;
		case 48:
			return -396757268;
		default:
			break;
	}
	return 0;
}

int func_645(int iParam0)
{
	if (!func_177(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1358(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

void func_646(int iParam0, int iParam1, bool bParam2)
{
	func_487(iParam0, &iVar0, &iVar1);
	if (!func_488(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1083(iParam0, 1024))
	{
		return;
	}
	func_489(iVar0, iVar1);
	Global_1904651->f_33[iParam0]->f_3[0] = iParam1;
	Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 2;
}

int func_647(int iParam0)
{
	iVar0 = func_1359(iParam0, 0);
	if (does_entity_exist(iVar0))
	{
		return iVar0;
	}
	iVar1 = func_1359(iParam0, 2);
	if (does_entity_exist(iVar1))
	{
		return iVar1;
	}
	iVar2 = func_1359(iParam0, 1);
	if (does_entity_exist(iVar2))
	{
		return iVar2;
	}
	uVar3 = _0x14169fa823679e41(iParam0);
	return uVar3;
}

int func_648(int iParam0)
{
	iVar0 = func_1359(iParam0, 6);
	return iVar0;
}

void func_649(var uParam0, int iParam1)
{
	uParam0->f_16 = iParam1;
}

void func_650(var uParam0)
{
	iVar0 = func_664(uParam0);
	uParam0->f_15 = func_1360(iVar0);
	iVar1 = get_entity_model(iVar0);
	if (_0xc346a546612c49a9(iVar0))
	{
		switch (iVar1)
		{
			case -1003616053:
				break;
			case 1459778951:
				func_620(uParam0, 0);
				break;
			case 831859211:
				func_620(uParam0, 0);
				break;
			case 723190474:
				func_620(uParam0, 0);
				break;
			default:
				break;
		}
	}
	else
	{
		switch (iVar1)
		{
			case -1892280447:
			case -1598866821:
				func_620(uParam0, 0);
				break;
			case -1124266369:
			case 730092646:
				func_620(uParam0, 1);
				break;
			case 1556473961:
				func_620(uParam0, 0);
				break;
			case 480688259:
				func_620(uParam0, 0);
				break;
			case 1110710183:
				break;
			case -541762431:
				func_620(uParam0, 0);
				break;
			case -1211566332:
				func_620(uParam0, 0);
				break;
			default:
				break;
		}
	}
	func_1361(uParam0, iVar1);
}

void func_651(var uParam0)
{
	uParam0->f_9 = 0;
	uParam0->f_28 = 0;
	uParam0->f_46 = 0f;
	uParam0->f_46.f_1 = 0f;
	uVar0 = 30;
	func_622(&uVar0, &(uParam0->f_46.f_2));
	func_1362(&(uParam0->f_46.f_37));
	if (uParam0->f_84.f_46)
	{
		uParam0->f_84.f_46 = 0;
		uParam0->f_84.f_16 = 0;
		uParam0->f_84.f_17 = -1;
		uParam0->f_84.f_18 = -1;
		uParam0->f_84.f_19 = 0;
		uParam0->f_84.f_43 = 0;
		uParam0->f_84.f_44 = 0;
		uParam0->f_84.f_45 = 0;
		uParam0->f_84.f_47 = -1;
		func_689(&(uParam0->f_84), 0);
	}
	func_691(*uParam0);
}

void func_652(var uParam0, int iParam1)
{
	uParam0->f_17 = iParam1;
}

void func_653()
{
	if (Global_1896738->f_383)
	{
	}
	Global_1896738->f_383 = 0;
}

int func_654(var uParam0)
{
	return uParam0->f_1;
}

bool func_655(var uParam0)
{
	return is_bit_set(uParam0->f_27, 0);
}

void func_656(var uParam0, int iParam1, char* sParam2, char* sParam3)
{
	iVar0 = -1;
	iVar1 = -1;
	if (!is_string_null_or_empty(sParam2) || !is_string_null_or_empty(sParam3))
	{
		iVar0 = get_hash_key(sParam2);
		iVar1 = get_hash_key(sParam3);
	}
	if (!_0x927b810e43e99932(uParam0))
	{
		if ((_0xdd0b7c5ae58f721d(uParam0) && does_entity_exist(iParam1)) && (iVar0 != -1 || iVar1 != -1))
		{
			_0xb8b207c34285e978(uParam0);
			uParam0->f_16 = iParam1;
			uParam0->f_17 = iVar0;
			uParam0->f_18 = iVar1;
			_0x29e6655df3590b0d(uParam0);
		}
	}
	else if (((uParam0->f_16 != iParam1 && does_entity_exist(iParam1)) || uParam0->f_17 != iVar0) || uParam0->f_18 != iVar1)
	{
		uParam0->f_16 = iParam1;
		uParam0->f_17 = iVar0;
		uParam0->f_18 = iVar1;
		_0x29e6655df3590b0d(uParam0);
	}
}

void func_657(var uParam0, int iParam1)
{
	func_1363(&(uParam0->f_29));
	switch (&uParam0->f_2[iParam1])
	{
		case 0:
			func_1364(uParam0);
			break;
		case 1:
			func_1365(uParam0);
			break;
		case 2:
			func_1366(uParam0);
			break;
		case -1:
		default:
			break;
	}
}

bool func_658(var uParam0)
{
	return is_bit_set(uParam0->f_28, 2);
}

void func_659(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

int func_660(var uParam0)
{
	return uParam0->f_25;
}

void func_661(var uParam0, bool bParam1)
{
	if (bParam1 || !func_686(uParam0))
	{
		func_1367(uParam0);
	}
}

void func_662(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_33)
	{
		uParam0->f_33[iVar0] = 0;
		iVar0++;
	}
	iVar2 = func_664(uParam0);
	uParam0->f_44 = _get_ped_damage(get_ped_index_from_entity_index(iVar2));
	if (func_355(-269048282, 1))
	{
		if (uParam0->f_44 < 2 && get_random_int_in_range(0, 10) == 0)
		{
			iVar3 = uParam0->f_44;
			iVar3++;
			uParam0->f_44 = iVar3;
		}
	}
	iVar4 = _0xf8b48a361dc388ae(get_ped_index_from_entity_index(iVar2));
	if (Global_17333.f_2 != 3)
	{
		iVar4 = Global_17333.f_2;
	}
	uParam0->f_45 = func_1368(get_ped_index_from_entity_index(iVar2), iVar4);
	if (uParam0->f_138)
	{
		if (uParam0->f_45 != 4)
		{
			uParam0->f_45 = 5;
		}
	}
	_0x6b89faa36fc909a3(&(uParam0->f_33), get_ped_index_from_entity_index(iVar2), uParam0->f_44, uParam0->f_45);
	iVar1 = 0;
	while (iVar1 < uParam0->f_33)
	{
		if (&uParam0->f_33[iVar1] != 0)
		{
			if (func_1047(iVar2) && !func_676(&(uParam0->f_33[iVar1])))
			{
				uParam0->f_33[iVar1] = 0;
			}
			else if (_0x4aef1fb5b9011d75(&(uParam0->f_33[iVar1])) && !func_667(iVar2))
			{
				iVar5 = get_ped_index_from_entity_index(iVar2);
				_0x9b47971234169990(iVar5, &(uParam0->f_33[iVar1]));
			}
		}
		iVar1++;
	}
	func_636(uParam0, 5);
}

bool func_663(var uParam0)
{
	return is_bit_set(uParam0->f_27, 1);
}

int func_664(var uParam0)
{
	return uParam0->f_16;
}

bool func_665(int iParam0)
{
	return _0xf8b48a361dc388ae(iParam0) == 2;
}

void func_666(var uParam0)
{
	iVar0 = func_664(uParam0);
	iVar1 = uParam0->f_15;
	bVar2 = false;
	iVar3 = 1;
	if (func_665(get_ped_index_from_entity_index(iVar0)))
	{
		bVar2 = true;
		iVar3 = 0;
	}
	func_388(get_ped_index_from_entity_index(iVar0), iVar1, bVar2, iVar3);
	if (!func_669(0) || func_670())
	{
		iVar4 = func_672(func_664(uParam0));
		Var5.f_1 = 10;
		func_1369(&Var5, -253507341);
		func_1369(&Var5, -2117874489);
		func_674(iVar4, &Var5, 0, get_ped_index_from_entity_index(uParam0->f_16));
	}
	else
	{
		iVar17 = 0;
		while (iVar17 < uParam0->f_33)
		{
			if (!func_177(&(uParam0->f_33[iVar17]), 0))
			{
			}
			else
			{
				func_679(&(uParam0->f_33[iVar17]), 1, 0, 0, 0, -897553835, 0, 0, 0, 0);
			}
			iVar17++;
		}
	}
}

bool func_667(int iParam0)
{
	iVar0 = get_entity_model(iParam0);
	switch (iVar0)
	{
		case -1797625440:
		case -1414989025:
		case -1211566332:
		case -1170118274:
		case -1134449699:
		case -541762431:
		case 1458540991:
			return true;
		default:
			break;
	}
	return false;
}

bool func_668(int iParam0)
{
	iVar0 = get_entity_model(iParam0);
	switch (iVar0)
	{
		case -2021043433:
		case -1963605336:
		case -1003616053:
		case -753902995:
		case -541762431:
		case 252669332:
		case 1110710183:
		case 1556473961:
			return true;
		default:
			break;
	}
	return false;
}

bool func_669(bool bParam0)
{
	if (func_66() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_480(bParam0));
}

bool func_670()
{
	if (_inventory_get_ped_inventory_id(player_ped_id()) != 3)
	{
		return false;
	}
	return _0xfc7563f482781a3d();
}

bool func_671(int iParam0)
{
	if (func_1370(iParam0, 1024) == 1)
	{
		return true;
	}
	return false;
}

int func_672(int iParam0)
{
	iVar0 = get_entity_model(iParam0);
	iVar1 = _0x30569f348d126a5a(get_ped_index_from_entity_index(iParam0));
	switch (iVar0)
	{
		case -1568716381:
			switch (iVar1)
			{
				case -2116663991:
				case -1372086773:
				case -682671307:
					return -753903716;
				case -1899670587:
				case -1667731605:
				case -156048846:
					return 1061226258;
				case -1151440774:
				case -886836096:
				case -376191772:
					return -1591797482;
				case -1834180478:
				case 834383524:
				case 2144062151:
					return 2072223427;
				case -163914005:
				case 689325217:
				case 696231378:
					return -757922552;
				case 707006636:
				case 1572075467:
				default:
					break;
			}
			return -1056620362;
		case 831859211:
			switch (iVar1)
			{
				case 1437006206:
					return -1125709620;
				case -770027479:
					return 459066619;
				default:
					break;
			}
			return 1386296519;
		case -2021043433:
			switch (iVar1)
			{
				case -813373518:
				case -566788959:
				case -37747857:
				case 1501573693:
				case 1762054474:
					return -336178884;
				default:
					break;
			}
			return -2107595540;
		case -1098441944:
			switch (iVar1)
			{
				case -1861127026:
				case -1538725798:
				case 2146685523:
					return -2054953443;
				default:
					break;
			}
			return 1119640965;
		case 195700131:
			switch (iVar1)
			{
				case -28012574:
					return 1305943144;
				case -1236418802:
					return -903458013;
				default:
					break;
			}
			return -2140586059;
		case 556355544:
			switch (iVar1)
			{
				case 966583925:
					return -672435928;
				default:
					break;
			}
			return -632772302;
		case 1007418994:
			switch (iVar1)
			{
				case -1388818080:
					return -1217465045;
				case 538936875:
					return -89560230;
				default:
					break;
			}
			return -246751884;
		case 1755643085:
			switch (iVar1)
			{
				case -1235944432:
				case -1057615530:
				case 1126570175:
					return -758239991;
				case -87794079:
				case 389666332:
				case 2042092622:
					return -954225965;
				case -967163299:
				case 1011154058:
				case 2098180041:
					return 198316330;
				case -2108783749:
				case 1900330120:
				case 2109101419:
					return 606485492;
				case 432909265:
				case 697666614:
				case 1950818712:
					return 829756021;
				case -730833443:
				case 1999086413:
				default:
					break;
			}
			return -303515535;
		case 1654513481:
			switch (iVar1)
			{
				case 1058681367:
					return 1950708333;
				default:
					break;
			}
			break;
		case -229688157:
			switch (iVar1)
			{
				case 463389154:
					return 1137638700;
				case -1122285933:
					return -1883365910;
				default:
					break;
			}
			return -1512794177;
		case 545068538:
			switch (iVar1)
			{
				case 1844089285:
					return 1267857699;
				default:
					break;
			}
			return -991957482;
		case 1464167925:
			switch (iVar1)
			{
				case -1688984856:
					return -34181954;
				default:
					break;
			}
			return 1166756352;
		case -885451903:
			switch (iVar1)
			{
				case 1497369321:
					return -1938451981;
				default:
					break;
			}
			return 996277324;
		case 252669332:
			switch (iVar1)
			{
				case 413989195:
					return 2012622948;
				case 784342540:
					return -1012323570;
				default:
					break;
			}
			return -1615358106;
		case 674287411:
			switch (iVar1)
			{
				case 1659735712:
					return 1316689918;
				case -972401444:
					return 1547023219;
				case -1203226280:
					return -1198101453;
				default:
					break;
			}
			break;
		case -551216071:
			switch (iVar1)
			{
				case -1508185179:
					return 1296995901;
				case -1210544352:
					return 335127412;
				case 147271932:
					return 1757433120;
				default:
					break;
			}
			break;
		case -1149999295:
			switch (iVar1)
			{
				case 1321671943:
					return 2121666418;
				case 334014283:
					return 1155537995;
				case 766106317:
					return 1864003775;
				default:
					break;
			}
			break;
		case -915290938:
			switch (iVar1)
			{
				case -139301483:
					return 1088642353;
				case -378711797:
					return 1261007293;
				case -605047280:
					return 663431809;
				default:
					break;
			}
			break;
		case -389300196:
			switch (iVar1)
			{
				case -661738271:
					return -1518145759;
				case -978876653:
					return 1991086455;
				case -188652218:
					return -1996605928;
				default:
					break;
			}
			break;
		case -1754211037:
			switch (iVar1)
			{
				case -1617752974:
					return -412929147;
				case -1381586791:
					return -695955000;
				case -1141848787:
					return 184548030;
				default:
					break;
			}
			break;
		case -1433814131:
			switch (iVar1)
			{
				case 2096045552:
					return -1369809861;
				case -835665806:
					return -1724304903;
				case 693761739:
					return 1019246857;
				default:
					break;
			}
			break;
		case -1307757043:
			switch (iVar1)
			{
				case 807110531:
					return -429705337;
				case 1662119255:
					return 940366557;
				case 1155641591:
					return 1236696624;
				default:
					break;
			}
			break;
		case -781967776:
			switch (iVar1)
			{
				case -44203702:
					return 175237282;
				case 319532198:
					return 837302210;
				case 1810685543:
					return 52419126;
				default:
					break;
			}
			break;
		case -557149691:
			switch (iVar1)
			{
				case -1558958207:
					return 420874474;
				case -1936391549:
					return -1968542703;
				case 131922197:
					return 1386642442;
				default:
					break;
			}
			break;
		case -117665949:
			switch (iVar1)
			{
				case 538065295:
					return -1310137424;
				case 206311939:
					return -1624195520;
				case 878961202:
					return -764533574;
				default:
					break;
			}
			break;
		case -1189368951:
			switch (iVar1)
			{
				case 968333004:
					return 1191280703;
				case -606676212:
					return -911407724;
				case -360941481:
					return -76322528;
				default:
					break;
			}
			break;
		case -511163808:
			switch (iVar1)
			{
				case 797910655:
					return -1180832883;
				case -1369857002:
					return -1427157456;
				case -1667956595:
					return -210084023;
				default:
					break;
			}
			break;
		case -1392359921:
			switch (iVar1)
			{
				case 263659570:
					return 730081147;
				case -1657259210:
					return 1053249025;
				case -1428269438:
					return 1284303244;
				default:
					break;
			}
			break;
	}
	return iVar0;
}

struct<12> func_673(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1112574294;
					break;
				case 1:
					iVar0 = -132480015;
					break;
				case 2:
					iVar0 = 1838524355;
					break;
				case 3:
					iVar0 = 781424689;
					break;
				case 4:
					iVar0 = 1547693994;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 = -684991368;
					break;
				case 1:
					iVar0 = -832325162;
					break;
				case 2:
					iVar0 = -346003361;
					break;
				case 3:
					iVar0 = 264694784;
					break;
				case 4:
					iVar0 = -559967702;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1341408997;
					break;
				case 1:
					iVar0 = -254777578;
					break;
				case 2:
					iVar0 = -379118674;
					break;
				case 3:
					iVar0 = -1624584872;
					break;
				case 4:
					iVar0 = 1526992527;
					break;
			}
			break;
	}
	if (bParam3)
	{
		func_1369(uParam2, 1528001899);
	}
	else
	{
		func_1369(uParam2, 1884295263);
	}
	func_1369(uParam2, iVar0);
	return *uParam2;
}

int func_674(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (0 == iParam0)
	{
		return 0;
	}
	return func_1371(iParam0, uParam1, &uVar0, iParam2, iParam3);
}

bool func_675(int iParam0)
{
	if (!func_177(iParam0, 0))
	{
		return false;
	}
	return (func_560(iParam0, 1686880204) || _0x4aef1fb5b9011d75(iParam0));
}

bool func_676(int iParam0)
{
	if (!func_177(iParam0, 0))
	{
	}
	if (func_560(iParam0, 1286414894))
	{
		return true;
	}
	return false;
}

void func_677(int iParam0, int iParam1, bool bParam2)
{
	if (!func_675(iParam0))
	{
		return;
	}
	if (func_560(iParam0, -1112814642) && func_560(iParam0, -1697809989))
	{
	}
	if (!bParam2)
	{
		func_599(iParam0, iParam1, 0, 0, 0, 0, 0);
		Global_17333.f_17 = iParam0;
	}
}

void func_678(int iParam0)
{
	if (iParam0 == -923552142)
	{
		if (chal_is_goal_active(1231074654, 586762978))
		{
			chal_add_goal_progress_int(1231074654, 586762978, 1);
		}
	}
}

int func_679(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_177(iParam0, 0))
	{
		return 0;
	}
	if (!func_1372(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_1373(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_1374(iParam0, bParam2);
	iVar2 = 0;
	if (func_178(iParam0) == -1037537535)
	{
		if (!func_560(iParam0, 866047851) && !func_560(iParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_1314(iParam0, 8388608) && !func_945(27))
	{
		func_1375(27);
	}
	func_1376(iParam0);
	if (!bVar3)
	{
		if (func_560(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			iVar1 = func_1058(func_1061(iParam0, 1), 0);
			if (is_weapon_valid(iVar1))
			{
				if (func_66() == -1)
				{
					func_1377(iVar1);
				}
				if (func_669(0) && func_1378(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_1054(iParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_1056(iParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_178(iParam0) == -427144552)
		{
			if (!func_1379(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_178(iParam0) == 307971639 && func_1062(iParam0))
		{
			if (!func_1380(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_560(iParam0, -103750053))
		{
			func_361(func_1381(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_361(func_395(-717883113, 2091222383), iVar0);
		}
		else if (func_560(iParam0, -121341956) && !func_560(iParam0, 606799272))
		{
			if (iParam0 != 191707516)
			{
				func_165(536, 0);
			}
			if (func_560(iParam0, -2017733358) || func_560(iParam0, -1369131378))
			{
			}
		}
		else if (func_560(iParam0, -136654233))
		{
			if (func_560(iParam0, -1021472396))
			{
			}
		}
		else if (func_560(iParam0, -1466706512) && func_560(iParam0, 1147021565))
		{
			func_165(519, 0);
		}
		else if (func_560(iParam0, 1147021565) && func_560(iParam0, -524514947))
		{
		}
		else if (func_560(iParam0, 554195525))
		{
		}
		else if (func_560(iParam0, 589988438))
		{
			if (func_1382())
			{
				func_1383(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_560(iParam0, 787083290) && func_560(iParam0, 949916894))
		{
			func_1384(iParam0);
		}
		else if (func_560(iParam0, -1718133314))
		{
			func_1385(iParam0);
		}
		else if (func_560(iParam0, -1738650224))
		{
			func_1386(iParam0);
		}
		else if (func_560(iParam0, -1112814642) && func_560(iParam0, 949916894))
		{
			func_1387(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1940144->f_21 = 0;
		}
		else if (func_560(iParam0, 1841149704))
		{
			func_1388();
		}
		else if (func_560(iParam0, -1979000645))
		{
		}
		else if (func_560(iParam0, 606799272))
		{
		}
		else if (func_560(iParam0, -1112814642) && func_560(iParam0, -1697809989))
		{
		}
		else if (func_560(iParam0, -2017733358) || func_560(iParam0, -1369131378))
		{
		}
		else if (func_560(iParam0, -1921346699))
		{
			return 0;
		}
		else if (func_560(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_355(215778062, 1))
					{
						func_679(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_355(670273567, 1))
					{
						func_679(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_355(-967317137, 1))
					{
						func_679(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_355(526074061, 1))
					{
						func_679(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_355(-1045488665, 1))
					{
						func_679(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_355(471514780, 1))
					{
						func_679(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_560(iParam0, -839724752) && func_1314(iParam0, 4))
		{
		}
		else if (func_560(iParam0, 1399091007))
		{
			func_1389(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		switch (iParam0)
		{
			case 990323211:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			case 1143540373:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			case -1073808995:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			case 1903483453:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			case 224572565:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case -13395913:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case 1859340712:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1614861441:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1336735809:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case -1109613870:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case 637788839:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case -1161163727:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case 648503798:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -1434556002:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -843069275:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1356680930:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1127253961:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1531214887;
				break;
			case -160924582:
			case 1652431022:
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -21093309:
				func_646(272, func_645(-21093309), 0);
				break;
			case 204375141:
				func_646(270, func_645(204375141), 0);
				break;
			case -417963070:
				func_646(271, func_645(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_1390(685, 1934060482, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_1390(685, 1110018439, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_1390(685, 1408511260, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_1390(685, -1228016946, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_1390(686, -103579, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_1390(686, -1531530025, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case 80178851:
				func_165(526, 0);
				break;
			case 1613651027:
				func_165(529, 0);
				break;
			case -885810591:
				break;
			case -601932535:
				if (func_945(1))
				{
					func_165(522, 0);
				}
				break;
			case -898386032:
				func_165(521, 0);
				break;
			case -2035110427:
				if (func_66() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_165(534, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar5 = iParam0;
		func_1391(&iVar5);
		if (!func_1056(iVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_669(0))
		{
			return 1;
		}
		if (func_178(iParam0) == -1037537535)
		{
			func_1392(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_669(0) && !func_670())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_34, 0, 0, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_679(&(Var6.f_1[iVar29]), &(Var6.f_12[iVar29]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_1051(iVar2, 0);
		}
	}
	Var30 = { func_1393(iParam0) };
	if (_stat_id_is_valid(&Var30))
	{
		_0x6a0184e904cdf25e(&Var30, iVar0);
	}
	func_1394(iParam0);
	if (fParam6 > 0f)
	{
		if (func_560(iParam0, -839724752))
		{
			func_1395(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_599(iParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

void func_680()
{
	if (!func_669(0) || func_670())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (&Global_17333.f_4[iVar0] != 0 && Global_17333.f_4[iVar0]->f_1 > 0)
		{
			func_679(&(Global_17333.f_4[iVar0]), Global_17333.f_4[iVar0]->f_1, 1, 0, 0, -897553835, 0, 0, 0, 0);
			func_1311(_create_var_string(10, "ITEM_GET_PUMP_MULT", _create_var_string(0, func_645(&(Global_17333.f_4[iVar0]))), Global_17333.f_4[iVar0]->f_1), "", 0, 0, 109029619, 0, 0, 0, 1);
		}
		iVar0++;
	}
}

int func_681(int iParam0, var uParam1, int iParam2)
{
	Var0 = Global_1139381->f_10;
	Var0.f_2 = 1436525806;
	Var0.f_3 = iParam0;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1339366851;
		_datafile_get_hash(&iVar5, &Var0);
		*uParam1 = func_1396(iVar5);
		Var0.f_2 = 327549336;
		_datafile_get_hash(&iVar5, &Var0);
		*iParam2 = func_1396(iVar5);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_682(int iParam0, bool bParam1, int iParam2)
{
	if (func_1397(255))
	{
		return 1;
	}
	if (!_unlock_is_unlocked(522750908))
	{
		return 0;
	}
	if (!func_1398(iParam0))
	{
		return 0;
	}
	if (!func_387(func_1399(iParam0), !bParam1, iParam2, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_683(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 41;
		case 1:
			return 42;
		case 2:
			return 43;
		default:
			break;
	}
	return 41;
}

int func_684(int iParam0)
{
	if (func_1400())
	{
		return 0;
	}
	if (!_0xdd73c9838ce7181d())
	{
		return 0;
	}
	if (func_641())
	{
		return 0;
	}
	iVar0 = func_1401(iParam0);
	iVar1 = func_1402(iVar0, 2);
	if (iVar1 >= 5)
	{
		return 0;
	}
	if (!func_387(func_1403(iParam0), 0, 255, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_685(int iParam0)
{
	if (func_1087())
	{
		return;
	}
	if (func_66() != 0)
	{
		return;
	}
	if (iParam0 > 6 || iParam0 < 0)
	{
		return;
	}
	iVar0 = func_1404(iParam0);
	if (iVar0 >= 5 || iVar0 <= 0)
	{
		return;
	}
	iVar1 = func_1405(iParam0);
	if (iVar1 <= 0)
	{
		return;
	}
	iVar2 = func_1406(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	Var3 = { *Global_1139381->f_3876.f_428[iParam0] };
	if (Var3 < 0 || Var3 >= iVar0)
	{
		Var3 = 0;
	}
	iVar10 = absi(get_cloud_time_as_int());
	iVar11 = 0;
	iVar12 = 0;
	Var3.f_1[Var3] = iVar10;
	iVar11 = 0;
	while (iVar11 < iVar0)
	{
		if (&Var3.f_1[iVar11] <= 0)
		{
		}
		else if ((&Var3.f_1[iVar11] - iVar10) < iVar1)
		{
			iVar12++;
		}
		iVar11++;
	}
	if (iVar12 >= iVar0)
	{
		iVar11 = 0;
		while (iVar11 < 5)
		{
			Var3.f_1[iVar11] = 0;
			iVar11++;
		}
		func_389(iVar2, 0, 0);
		Var3 = 0;
	}
	else
	{
		Var3++;
	}
	*Global_1139381->f_3876.f_428[iParam0] = { Var3 };
}

bool func_686(var uParam0)
{
	return func_1407(*uParam0, 1);
}

int func_687(var uParam0)
{
	if (!func_686(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_1408(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_980() - round((uParam0->f_1 * 1000f)));
}

void func_688(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_689(var uParam0, bool bParam1)
{
	if (_0x927b810e43e99932(uParam0))
	{
		_0x0a5a4f1979abb40e(uParam0);
	}
	if (bParam1)
	{
		_0x798be43c9393632b(uParam0);
	}
}

void func_690()
{
	if (!Global_1896738->f_383)
	{
	}
	Global_1896738->f_383 = 1;
}

void func_691(struct<11> Param0, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_1409(&(Param0.f_10[iVar0])))
		{
			func_1149(1);
		}
		iVar0++;
	}
}

void func_692(var uParam0)
{
	func_659(uParam0, 0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_2[iVar0] = -1;
		uParam0->f_18[iVar0] = -1f;
		iVar0++;
	}
	uParam0->f_9 = 0;
	uParam0->f_25 = 0;
	uParam0->f_16 = 0;
	uParam0->f_15 = 0;
	uParam0->f_26 = 0f;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	uParam0->f_29 = 0;
	func_620(uParam0, 1);
	Global_17333 = *uParam0;
	Global_17333.f_1 = 0;
	Global_17333.f_2 = 3;
	func_621();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17333.f_4[iVar0] = 0;
		Global_17333.f_4[iVar0]->f_1 = 1;
		iVar0++;
	}
	uParam0->f_46 = 0f;
	uParam0->f_46.f_1 = 0f;
	uVar1 = 30;
	func_622(&uVar1, &(uParam0->f_46.f_2));
	uParam0->f_46.f_33 = 20;
	uParam0->f_46.f_34 = 1000;
	uParam0->f_46.f_35 = 1f;
	func_1362(&(uParam0->f_46.f_37));
	uParam0->f_84.f_16 = 0;
	uParam0->f_84.f_17 = -1;
	uParam0->f_84.f_18 = -1;
	uParam0->f_84.f_19 = 0;
	uParam0->f_84.f_43 = 0;
	uParam0->f_84.f_44 = 0;
	uParam0->f_84.f_45 = 0;
	uParam0->f_84.f_46 = 0;
	uParam0->f_84.f_47 = -1;
	func_688(&(uParam0->f_84.f_48));
	uParam0->f_138 = 0;
}

bool func_693(int iParam0)
{
	if (!func_675(iParam0))
	{
		return false;
	}
	return false;
}

void func_694(var uParam0)
{
	bVar0 = false;
	if (func_199(uParam0) == 5 && !func_663(uParam0))
	{
		iVar1 = 0;
		while (iVar1 < get_number_of_events(0))
		{
			if (get_event_at_index(0, iVar1) == 1376140891)
			{
				get_event_data(0, iVar1, &vVar2, 3);
				if (vVar2.x == Global_34)
				{
					if (vVar2.y == func_664(uParam0) && vVar2.z)
					{
						bVar0 = true;
					}
					else
					{
						func_636(uParam0, 6);
					}
				}
				else if (vVar2.x == 0 && vVar2.y == 0)
				{
					func_636(uParam0, 6);
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			func_1410(uParam0, 1);
		}
	}
}

void func_695(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			iVar0 = get_interior_at_coords(1891.925f, -1864.166f, 46.30484f);
			func_1411(1891.925f, -1864.166f, 46.30484f, "shb_p_mansion_00", 1, 0, 1, 0, iVar0);
			func_1411(1891.925f, -1864.166f, 46.30484f, "shb_p_mansion_01", 2, 0, 1, 0, iVar0);
			func_1411(1891.925f, -1864.166f, 46.30484f, "shb_p_mansion_02", 4, 0, 1, 0, iVar0);
			func_1411(1891.925f, -1864.166f, 46.30484f, "shb_p_mansion_03", 15, 0, 1, 0, iVar0);
			break;
		case 2:
			func_1411(1891.925f, -1864.166f, 46.30484f, "shb_p_mansion_04", 5, 0, 1, 0, 0);
			break;
		case 3:
			func_1411(1905.741f, -1862.606f, 46.3492f, "shb_p_mansion_fasttravel", 6, 0, 1, 0, 0);
			break;
		case 4:
			func_1411(1894.485f, -1859.417f, 46.3346f, "shb_p_mansion_pulp_eden", 7, 0, 1, 0, 0);
			break;
		case 5:
			func_1411(1894.485f, -1859.417f, 46.3346f, "shb_p_mansion_pulp_inferno", 8, 0, 1, 0, 0);
			break;
		case 6:
			func_1411(1898.38f, -1871.146f, 46.3756f, "shb_upg_john_rug", 9, 0, 1, 0, 0);
			break;
		case 7:
			iVar0 = get_interior_at_coords(1905.561f, -1861.793f, 46.3492f);
			func_1411(1905.561f, -1861.793f, 46.3492f, "shb_upg_arthur_chest", 10, 0, 1, 0, iVar0);
			func_1411(1905.561f, -1861.793f, 46.3492f, "shb_upg_arthur_rug", 11, 0, 1, 0, iVar0);
			func_1411(1905.561f, -1861.793f, 46.3492f, "shb_upg_skull_ram", 12, 0, 1, 0, iVar0);
			func_1411(1905.561f, -1861.793f, 46.3492f, "shb_upg_skull_gator", 13, 0, 1, 0, iVar0);
			func_1411(1905.561f, -1861.793f, 46.3492f, "shb_upg_arthur_table", 14, 0, 1, 0, iVar0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_696(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1411(2294f, 1462.5f, 85.8f, "bea_cave_endlessSummer", 162, 0, 1, 0, 0);
			break;
		case 2:
			iVar0 = get_interior_at_coords(2294f, 1462.5f, 85.8f);
			func_1411(2294f, 1462.5f, 85.8f, "BEA_CAVE_INT_PLATFORM", 189, 0, 1, 0, iVar0);
			func_1411(2294f, 1462.5f, 85.8f, "BEA_CAVE_INT_PLATFORMBURNED", 188, 0, 1, 0, iVar0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_697(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			if (_is_imap_active(-1490034522))
			{
				iVar0 = get_interior_at_coords(2692.287f, -1197.868f, 55.4693f);
				func_1411(2692.287f, -1197.868f, 55.4693f, "new_art_photos_pre_RC_Mason", 16, 0, 1, 0, iVar0);
				func_1411(2692.287f, -1197.868f, 55.4693f, "new_art_photos_post_RC_Mason", 17, 0, 1, 0, iVar0);
			}
			break;
		case 2:
			iVar0 = get_interior_at_coords(2385.548f, -1221.158f, 46.1729f);
			func_1411(2385.548f, -1221.158f, 46.1729f, "bronte_shutters_open", 158, 0, 1, 0, iVar0);
			func_1411(2385.548f, -1221.158f, 46.1729f, "bronte_shutters_close", 159, 0, 1, 0, iVar0);
			func_1411(2385.548f, -1221.158f, 46.1729f, "bronte_glass_breakable", 160, 0, 1, 0, iVar0);
			func_1411(2385.548f, -1221.158f, 46.1729f, "bronte_glass_unbreakable", 161, 0, 1, 0, iVar0);
			break;
		case 3:
			iVar0 = get_interior_at_coords(2638.399f, -1290.197f, 51.2461f);
			func_1411(2638.399f, -1290.197f, 51.2461f, "new_com_bank_before", 132, 0, 1, 0, iVar0);
			func_1411(2638.399f, -1290.197f, 51.2461f, "new_com_bank_shootout", 133, 0, 1, 0, iVar0);
			func_1411(2638.399f, -1290.197f, 51.2461f, "new_com_bank_after", 135, 0, 1, 0, iVar0);
			func_1411(2638.399f, -1290.197f, 51.2461f, "new_com_bank_int_windows_blocker", 136, 0, 1, 0, iVar0);
			break;
		case 4:
			func_1411(2795.127f, -1170.396f, 46.924f, "ForMyArt_nobarprops", 166, 0, 1, 0, 0);
			break;
		case 5:
			if (_is_imap_active(-1490034522))
			{
				iVar0 = get_interior_at_coords(2698.232f, -1187.539f, 55.0907f);
				func_1411(2698.232f, -1187.539f, 55.0907f, "new_art_exhibit_RC_Art3", 152, 0, 1, 0, iVar0);
				func_1411(2698.232f, -1187.539f, 55.0907f, "new_art_exhibit_post_RC_Art3", 153, 0, 1, 0, iVar0);
			}
			break;
		case 6:
			if (_is_imap_active(-1490034522))
			{
				iVar0 = get_interior_at_coords(2689.99f, -1203.135f, 55.4694f);
				func_1411(2689.99f, -1203.135f, 55.4694f, "new_forMyArt_paintings", 154, 0, 1, 0, iVar0);
				func_1411(2689.99f, -1203.135f, 55.4694f, "new_forMyArt_gallery", 155, 0, 1, 0, iVar0);
				func_1411(2689.99f, -1203.135f, 55.4694f, "st_denis_art_int_open", 157, 0, 1, 0, iVar0);
			}
			break;
		case 7:
			func_1411(2698.736f, -1188.603f, 51.0762f, "st_denis_art_int_closed", 156, 0, 1, 0, 0);
			break;
		case 8:
			iVar0 = get_interior_at_coords(2385.548f, -1221.158f, 46.1729f);
			func_1411(2385.548f, -1221.158f, 46.1729f, "bronte_mp_dressing", 164, 0, 1, 0, iVar0);
			func_1411(2385.548f, -1221.158f, 46.1729f, "bronte_sp_dressing", 165, 0, 1, 0, iVar0);
			break;
		case 9:
			iVar0 = get_interior_at_coords(2643.301f, -1304.161f, 51.2461f);
			func_1411(2643.301f, -1304.161f, 51.2461f, "new_com_bank_vaults_with_rayfire", 137, 0, 1, 0, iVar0);
			func_1411(2643.301f, -1304.161f, 51.2461f, "new_com_bank_vaults_without_rayfire", 138, 0, 1, 0, iVar0);
			break;
		case 10:
			func_1411(2652.08f, -1292.479f, 51.246f, "new_com_bank_int_des", 134, 0, 1, 0, 0);
			break;
		case 11:
			func_1411(2853.421f, -1202.203f, 47.5946f, "new_shadyshop_cheatcode01", 217, 0, 1, 0, 0);
			break;
		case 12:
			func_1411(2633.846f, -1225.53f, 52.3804f, "new_saloon01_int_rent", 207, 0, 1, 0, 0);
			break;
		case 13:
			func_1411(2734.165f, -1119.711f, 50.122f, "new_photo_tablechair", 226, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_698(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			iVar0 = get_interior_at_coords(2253.076f, -789.0005f, 44.3422f);
			func_1411(2253.076f, -789.0005f, 44.3422f, "lak_hidout_trapopen", 23, 0, 1, 0, iVar0);
			func_1411(2253.076f, -789.0005f, 44.3422f, "lak_hideout_intgroup_trapdoor", 24, 0, 1, 0, iVar0);
			break;
		case 2:
			iVar0 = get_interior_at_coords(2232.242f, -770.113f, 42.5082f);
			func_1411(2232.242f, -770.113f, 42.5082f, "lak_dockhouse_undamaged", 25, 0, 1, 0, iVar0);
			func_1411(2232.242f, -770.113f, 42.5082f, "lak_dockhouse_damaged", 26, 0, 1, 0, iVar0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_699(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1411(-63.9f, 1236.4f, 171.8f, "six_table_STATIC", 18, 0, 1, 0, 0);
			break;
		case 2:
			func_1411(-63.9f, 1236.4f, 171.8f, "six_fireplace_ON", 19, 0, 1, 0, 0);
			break;
		case 3:
			func_1411(-63.9f, 1236.4f, 171.8f, "six_lights_on", 21, 0, 1, 0, 0);
			break;
		case 4:
			func_1411(-63.9f, 1236.4f, 171.8f, "six_lights_off", 22, 0, 1, 1, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_700(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1411(1698.872f, 1510.014f, 147.8707f, "vet_fishTrophy", 174, 0, 1, 0, 0);
			break;
		case 2:
			func_1411(1698.872f, 1510.014f, 147.8707f, "InteriorGroup_WolfHead", 175, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_701(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			iVar0 = get_interior_at_coords(1339.969f, -1371.888f, 84.07868f);
			func_1411(1339.969f, -1371.888f, 84.07868f, "brt1_saloon_before", 128, 0, 1, 0, iVar0);
			func_1411(1339.969f, -1371.888f, 84.07868f, "brt1_saloon_after", 129, 0, 1, 0, iVar0);
			break;
		case 2:
			iVar0 = get_interior_at_coords(1355.646f, -1301.913f, 76.7644f);
			func_1411(1355.646f, -1301.913f, 76.7644f, "rho_sheriff_int_JBO1_01", 141, 0, 1, 0, iVar0);
			func_1411(1355.646f, -1301.913f, 76.7644f, "rho_sheriff_int_JBO1_02", 142, 0, 1, 0, iVar0);
			break;
		case 3:
			iVar0 = get_interior_at_coords(1339.969f, -1371.888f, 84.07868f);
			func_1411(1339.969f, -1371.888f, 84.07868f, "rho_sal_tables01", 130, 0, 1, 0, iVar0);
			func_1411(1339.969f, -1371.888f, 84.07868f, "rho_sal_tables02", 131, 0, 1, 0, iVar0);
			break;
		case 4:
			iVar0 = get_interior_at_coords(1293.242f, -1301.401f, 76.0402f);
			func_1411(1293.242f, -1301.401f, 76.0402f, "rhobank_int_walla", 180, 0, 1, 0, iVar0);
			func_1411(1293.242f, -1301.401f, 76.0402f, "rhobank_int_wallb", 181, 0, 1, 0, iVar0);
			break;
		case 5:
			iVar0 = get_interior_at_coords(1327.78f, -1292.977f, 76.0091f);
			func_1411(1327.78f, -1292.977f, 76.0091f, "_FIN2_EXT_P19_FRAMES_ON", 190, 0, 1, 0, iVar0);
			func_1411(1327.78f, -1292.977f, 76.0091f, "_FIN2_EXT_P19_FRAMES_OFF", 191, 0, 1, 0, iVar0);
			break;
		case 6:
			func_1411(1339.969f, -1371.888f, 84.07868f, "rho_saloon_int_rentSign", 205, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_702(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			iVar0 = get_interior_at_coords(-1643.893f, -1358.232f, 86.4541f);
			func_1411(-1643.893f, -1358.232f, 86.4541f, "Beechers_after_2.2", 99, 0, 1, 0, iVar0);
			func_1411(-1643.893f, -1358.232f, 86.4541f, "Beechers_after_Marston8_Abigail2.2", 100, 0, 1, 0, iVar0);
			func_1411(-1643.893f, -1358.232f, 86.4541f, "Beechers_after_Marston8_Abigail2.2_dressing", 101, 0, 1, 0, iVar0);
			func_1411(-1643.893f, -1358.232f, 86.4541f, "Beechers_finished_after_Marston8_dressing", 102, 0, 1, 0, iVar0);
			func_1411(-1643.893f, -1358.232f, 86.4541f, "bee_01_house_fireplace_on", 109, 0, 1, 0, iVar0);
			break;
		case 2:
			iVar0 = get_interior_at_coords(-1643.893f, -1358.232f, 86.4541f);
			func_1411(-1643.893f, -1358.232f, 86.4541f, "bee_01_masterBR_bed01_unmade", 106, 0, 1, 0, iVar0);
			func_1411(-1643.893f, -1358.232f, 86.4541f, "bee_01_masterBR_bed01", 105, 0, 1, 0, iVar0);
			func_1411(-1643.893f, -1358.232f, 86.4541f, "Beechers_decorated_after_Abigail3", 107, 0, 1, 0, iVar0);
			func_1411(-1643.893f, -1358.232f, 86.4541f, "IntGrp_livingrm_furniture_basic", 108, 0, 1, 0, iVar0);
			func_1411(-1643.893f, -1358.232f, 86.4541f, "bee_01_masterBR_bed_Abigail3", 104, 0, 1, 0, iVar0);
			break;
		case 3:
			iVar0 = get_interior_at_coords(-1643.893f, -1358.232f, 86.4541f);
			func_1411(-1643.893f, -1358.232f, 86.4541f, "Beechers_fully_decorated_finale", 110, 0, 1, 0, iVar0);
			func_1411(-1643.893f, -1358.232f, 86.4541f, "IntGrp_livingrm_furniture_fancy", 111, 0, 1, 0, iVar0);
			func_1411(-1643.893f, -1358.232f, 86.4541f, "bee_01_masterBR_bed03_unmade", 113, 0, 1, 0, iVar0);
			func_1411(-1643.893f, -1358.232f, 86.4541f, "bee_01_masterBR_bed03", 112, 0, 1, 0, iVar0);
			func_1411(-1643.893f, -1358.232f, 86.4541f, "BEE_01_HOUSE_STAGE06", 114, 0, 1, 0, iVar0);
			func_1411(-1643.893f, -1358.232f, 86.4541f, "BEECHERS_PIANO_STOOL", 115, 0, 1, 0, iVar0);
			func_1411(-1643.893f, -1358.232f, 86.4541f, "bee_01_house_chair", 116, 0, 1, 0, iVar0);
			break;
		case 4:
			func_1411(-1632.406f, -1356.38f, 83.4029f, "bee_01_masterBR_travelmap", 98, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_703(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1411(-613.6971f, -27.7605f, 84.9747f, "pai_intgroup_lootables", 228, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_704(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			iVar0 = get_interior_at_coords(-2593.122f, 452.8192f, 145.9973f);
			func_1411(-2593.122f, 452.8192f, 145.9973f, "pro_worker_bedmade", 124, 666254892, 1, 0, iVar0);
			func_1411(-2593.122f, 452.8192f, 145.9973f, "pro_worker_bedunmade", 126, 666254892, 1, 0, iVar0);
			break;
		case 2:
			iVar0 = get_interior_at_coords(-2592.498f, 458.3414f, 145.9973f);
			func_1411(-2592.498f, 458.3414f, 145.9973f, "pro_worker_food", 125, 666254892, 1, 0, iVar0);
			func_1411(-2592.498f, 458.3414f, 145.9973f, "pro_int_shaving", 127, 666254892, 1, 0, iVar0);
			break;
		case 3:
			func_1411(-2371.433f, 472.4824f, 131.229f, "shack_hb_cheat01", 216, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_705(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			iVar0 = get_interior_at_coords(-273.4513f, 811.3408f, 118.38f);
			func_1411(-273.4513f, 811.3408f, 118.38f, "val_jail_int_walla", 143, 0, 1, 0, iVar0);
			func_1411(-273.4513f, 811.3408f, 118.38f, "val_jail_int_wallb", 144, 0, 1, 0, iVar0);
			break;
		case 2:
			func_1411(-289.4673f, 865.7859f, 121.1349f, "val_res_a_int_peepcurtain", 163, 0, 1, 0, 0);
			break;
		case 3:
			iVar0 = get_interior_at_coords(-308.2578f, 777.48f, 117.7031f);
			func_1411(-308.2578f, 777.48f, 117.7031f, "val_bank_int_curtainsopen", 168, 0, 1, 0, iVar0);
			func_1411(-308.2578f, 777.48f, 117.7031f, "val_bank_int_curtainsclosed", 167, 0, 1, 0, iVar0);
			break;
		case 4:
			iVar0 = get_interior_at_coords(-306.48f, 803.07f, 118.97f);
			func_1411(-306.48f, 803.07f, 118.97f, "6_chair_poker_set", 173, 0, 1, 0, iVar0);
			func_1411(-306.48f, 803.07f, 118.97f, "4_chair_poker_set", 172, 0, 1, 0, iVar0);
			break;
		case 5:
			func_1411(-323.5455f, 761.3587f, 120.6335f, "val_hotel_int_rentSign", 204, 0, 1, 0, 0);
			break;
		case 6:
			iVar0 = get_interior_at_coords(-308.88f, 777.37f, 118.77f);
			func_1411(-308.88f, 777.37f, 118.77f, "val_bank_front_windows", 193, 0, 1, 0, iVar0);
			func_1411(-308.88f, 777.37f, 118.77f, "val_bank_mud5_windowblock", 194, 0, 1, 0, iVar0);
			break;
		case 7:
			iVar0 = get_interior_at_coords(-310.0119f, 802.9316f, 117.9846f);
			func_1411(-310.0119f, 802.9316f, 117.9846f, "front_windows", 195, 0, 1, 0, iVar0);
			func_1411(-310.0119f, 802.9316f, 117.9846f, "val_saloon_br03_bed", 196, 0, 1, 0, iVar0);
			break;
		case 8:
			func_1411(-323.0087f, 801.0296f, 116.8817f, "val_genstore_night_light", 179, 0, 1, 0, 0);
			break;
		case 9:
			iVar0 = get_interior_at_coords(-323.5455f, 761.3587f, 120.6335f);
			func_1411(-323.5455f, 761.3587f, 120.6335f, "mud3_val_hotel_room_curtain01", 169, 0, 1, 0, iVar0);
			func_1411(-323.5455f, 761.3587f, 120.6335f, "MUD3_val_hotel_room1b_prayercurtain", 170, 0, 1, 0, iVar0);
			func_1411(-323.5455f, 761.3587f, 120.6335f, "MUD3_val_hotel_room1b_curtain", 171, 0, 1, 0, iVar0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_706(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1411(3285.792f, -1325.603f, 43.08399f, "korrigan_props_default", 139, -1800106923, 1, 0, 0);
			break;
		case 2:
			func_1411(3285.792f, -1325.603f, 43.08399f, "korrigan_props_poker", 140, -1800106923, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_707(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1411(340.3874f, 607.1694f, 117.3576f, "cor_factb_int_loot", 151, 0, 1, 0, 0);
			break;
		case 2:
			func_1411(494.78f, 673.19f, 120.043f, "cor_factb_int_cheatcode_01", 218, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_708(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1411(-819.8f, 353.8f, 97.0781f, "IntGroup_Downes_pulp_novel", 223, 0, 1, 0, 0);
			break;
		case 2:
			func_1411(-819.8f, 353.8f, 97.0781f, "IntGroup_Downes_after_move", 198, 0, 1, 0, 0);
			break;
		case 3:
			func_1411(-819.8f, 353.8f, 97.0781f, "IntGroup_Downes_before_move", 197, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_709(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1411(1450.08f, 373.16f, 91.06f, "eme_saloon_intgroup_curtains", 201, 0, 1, 0, 0);
			break;
		case 2:
			func_1411(1448.06f, 371.59f, 88.88f, "eme_saloon_intgroup_furniture_mp", 239, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_710(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1411(-2177.459f, 717.2651f, 121.6204f, "han_win_lock", 176, 0, 1, 0, 0);
			break;
		case 2:
			func_1411(-2177.459f, 717.2651f, 121.6204f, "han_int_tables_upright", 177, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_711(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1411(-551.09f, 2705.65f, 321.98f, "adl_winter01_trapdooropen", 183, 0, 1, 0, 0);
			break;
		case 2:
			func_1411(-551.09f, 2705.65f, 321.98f, "adl_winter01_trapdoorclosed", 184, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_712(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1411(-1407.588f, 1206.949f, 221.6721f, "Mil_mine_cave03_cheat01", 219, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_713(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1411(-690.3915f, 1044.363f, 134.0043f, "shack_sc_int_pulp_novel", 222, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_714(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1411(-2351.33f, 110.337f, 216.825f, "m05_mine_collapse_rocks", 238, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_715(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1411(-1813.349f, -354.6237f, 160.4226f, "str_jail_unbrokenwall", 192, 0, 1, 0, 0);
			break;
		case 2:
			func_1411(-1812.825f, -370.48f, 161.8785f, "str_whore_int_rentSign", 206, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_716(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1411(2946.44f, 1319.626f, 43.8203f, "ann_gunsmith_int_rent", 209, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_717(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1411(-5508.609f, -2965.48f, -1.6284f, "tum_gunsmith_int_rentSign", 208, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_718(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1411(-332.4864f, -359.7746f, 87.0537f, "swa_chairs_regular", 199, 0, 1, 0, 0);
			break;
		case 2:
			func_1411(-332.4864f, -359.7746f, 87.0537f, "swa_chairs_cinematic", 200, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_719(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1411(-3400.726f, -3305.328f, -5.4439f, "ldj_shack_cc_graffiti", 210, 0, 1, 0, 0);
			break;
		case 2:
			func_1411(-3400.726f, -3305.328f, -5.4439f, "ldj_shack_pulp_novel", 224, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_720(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1411(1119.123f, -1988.793f, 54.4015f, "br_tre_house_cheat01", 214, 0, 1, 0, 0);
			func_1411(1006.364f, -1766.812f, 46.5922f, "bra_mansion_dining_groups", 118, 0, 1, 0, 0);
			break;
		case 2:
			func_1411(1006.364f, -1766.812f, 46.5922f, "bra_mansion_dining_csprops", 119, 0, 1, 0, 0);
			func_1411(1006.364f, -1766.812f, 46.5922f, "bra_int_bedroom_clean", 120, 0, 1, 0, 0);
			break;
		case 3:
			func_1411(1006.364f, -1766.812f, 46.5922f, "bra_int_bedroom_ransacked", 121, 0, 1, 0, 0);
			func_1411(1010.435f, -1767.927f, 49.4189f, "bra_man_dining_vfx", 186, 0, 1, 0, 0);
			func_1411(1010.435f, -1767.927f, 49.4189f, "bra_man_parlor_vfx", 187, 0, 1, 0, 0);
			break;
		case 4:
			func_1411(1010.435f, -1767.927f, 49.4189f, "bra_mansion_WindowsBreakable", 123, 0, 1, 0, 0);
			func_1411(1010.435f, -1767.927f, 49.4189f, "bra_mansion_WindowsStatic", 122, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_721(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1411(2624.29f, 1695.73f, 114.6861f, "shack_it_02_cheat01", 215, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_722(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1411(1889.438f, 301.362f, 76.0637f, "HF_pulp_novel", 221, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_723(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1411(-814.042f, -1374.27f, 44.941f, "bla_photo_int_chairs", 227, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_724(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1411(-399.4595f, 1729.324f, 219.2795f, "che_cabin_int_roof_intact", 230, 0, 1, 0, 0);
			break;
		case 2:
			func_1411(-399.4595f, 1729.324f, 219.2795f, "che_cabin_int_roof_broken", 231, 0, 1, 0, 0);
			break;
		case 3:
			func_1411(-399.4595f, 1729.324f, 219.2795f, "che_maincabin_occupied", 232, 0, 1, 0, 0);
			break;
		case 4:
			func_1411(-399.4595f, 1729.324f, 219.2795f, "che_cabin_int_abandoned", 233, 0, 1, 0, 0);
			break;
		case 5:
			func_1411(-423.5326f, 1736.137f, 217.2976f, "che_shack_occupied", 234, 0, 1, 0, 0);
			break;
		case 6:
			func_1411(-423.5326f, 1736.137f, 217.2976f, "che_shack_outlaw", 235, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_725(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1411(342.0971f, -666.6483f, 41.8221f, "InteriorGroup_legFish_beg", 202, 0, 1, 0, 0);
			break;
		case 2:
			func_1411(342.0971f, -666.6483f, 41.8221f, "InteriorGroup_legFish_end", 203, 0, 1, 0, 0);
			break;
		case 3:
			func_1411(-959.4431f, 705.4899f, 95.5632f, "l_08p_tunnel2_cc_graffiti", 211, 0, 1, 0, 0);
			break;
		case 4:
			func_1411(191.1237f, -412.0208f, 86.7293f, "dis_tradepost_cheat01", 212, 0, 1, 0, 0);
			break;
		case 5:
			func_1411(-4369.159f, -2416.709f, 19.4046f, "ple_house_int_cheatcode_01", 213, 0, 1, 0, 0);
			break;
		case 6:
			func_1411(326.6011f, 1712.11f, 165.5851f, "dis_grz_preskull_cheat01", 220, 0, 1, 0, 0);
			break;
		case 7:
			func_1411(2309.994f, 1141.108f, 95.3301f, "poison_mine_blockage", 225, 0, 1, 0, 0);
			break;
		case 8:
			func_1411(-1492.235f, 1248.413f, 313.4902f, "mic_hideout_lantern", 229, 0, 1, 0, 0);
			break;
		case 9:
			func_1411(-327.071f, -148.157f, 50.078f, "bur_bric_int_Tre02_BurntTown01", 236, 0, 1, 0, 0);
			break;
		case 10:
			func_1411(-1519.495f, 740.865f, 124.87f, "mp_tre_int_eastwatsons01", 237, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

bool func_726()
{
	if ((Global_17375 % 2) != 0)
	{
		return true;
	}
	return false;
}

void func_727()
{
	func_1411(-1321.927f, 2438.953f, 309.6122f, "col_school_int_before", 146, 0, 1, 0, 0);
	func_1411(-1321.927f, 2438.953f, 309.6122f, "col_school_int_after", 145, 0, 1, 0, 0);
	func_1411(-1351.798f, 2440.891f, 309.3728f, "col_cabin_lights_on", 147, 0, 1, 0, 0);
	func_1411(-1336.995f, 2399.444f, 308.1392f, "col_barn_lights_on", 148, 0, 1, 0, 0);
	func_1411(-1360.135f, 2425.155f, 308.6656f, "col_bunkhouse_lights_on", 149, 0, 1, 0, 0);
	func_1411(-1319.982f, 2440.926f, 308.9205f, "col_school_int_fireplace", 150, 0, 1, 0, 0);
}

void func_728()
{
	func_1412(30);
	func_1413(30);
	func_1414(30);
	func_1415(30);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (_does_scenario_point_exist(Global_1051439->f_3634[iVar0]->f_6))
		{
			_delete_scenario_point(Global_1051439->f_3634[iVar0]->f_6);
		}
		Global_1051439->f_3634[iVar0]->f_6 = uVar1;
		if (_does_scenario_point_exist(Global_1051439->f_3634[iVar0]->f_13))
		{
			_delete_scenario_point(Global_1051439->f_3634[iVar0]->f_13);
		}
		Global_1051439->f_3634[iVar0]->f_13 = uVar1;
		if (does_blip_exist(Global_1051439->f_3634[iVar0]->f_17))
		{
			remove_blip(&(Global_1051439->f_3634[iVar0]->f_17));
		}
		if (does_entity_exist(Global_1051439->f_3634[iVar0]->f_8))
		{
			if (!_0x88ad6cc10d8d35b2(Global_1051439->f_3634[iVar0]->f_8))
			{
				set_entity_as_mission_entity(Global_1051439->f_3634[iVar0]->f_8, true, true);
			}
			delete_ped(&(Global_1051439->f_3634[iVar0]->f_8));
		}
		if (does_entity_exist(Global_1051439->f_3634[iVar0]->f_15))
		{
			if (!_0x88ad6cc10d8d35b2(Global_1051439->f_3634[iVar0]->f_15))
			{
				set_entity_as_mission_entity(Global_1051439->f_3634[iVar0]->f_15, true, true);
			}
			delete_ped(&(Global_1051439->f_3634[iVar0]->f_15));
		}
		Global_1051439->f_3634[iVar0]->f_1 = 0;
		Global_1051439->f_3634[iVar0]->f_5 = 0;
		Global_1051439->f_3634[iVar0]->f_8 = 0;
		Global_1051439->f_3634[iVar0]->f_15 = 0;
		Global_1051439->f_3634[iVar0]->f_7 = 0;
		Global_1051439->f_3634[iVar0]->f_14 = 0;
		Global_1051439->f_3634[iVar0]->f_9 = -1;
		Global_1051439->f_3634[iVar0] = -1;
		iVar0++;
	}
}

void func_729()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_1051439->f_4427[iVar0] = -1;
		Global_1051439->f_4427[iVar0]->f_3 = 0;
		Global_1051439->f_4427[iVar0]->f_4 = 0;
		Global_1051439->f_4427[iVar0]->f_7 = 0;
		if (_does_scenario_point_exist(Global_1051439->f_4427[iVar0]->f_6))
		{
			_delete_scenario_point(Global_1051439->f_4427[iVar0]->f_6);
		}
		iVar0++;
	}
	func_1415(32);
}

void func_730(int iParam0, bool bParam1)
{
	bVar0 = (func_1416(iParam0) && !bParam1);
	if (!bVar0 && !func_1417(iParam0, 65536))
	{
		if (does_entity_exist(Global_1051439->f_72[iParam0]->f_21))
		{
			if (!_0x88ad6cc10d8d35b2(Global_1051439->f_72[iParam0]->f_21))
			{
				set_entity_as_mission_entity(Global_1051439->f_72[iParam0]->f_21, true, true);
			}
			delete_entity(&(Global_1051439->f_72[iParam0]->f_21));
			Global_1051439->f_72[iParam0]->f_21 = 0;
		}
		if (is_model_valid(Global_1051439->f_72[iParam0]->f_19))
		{
			set_model_as_no_longer_needed(Global_1051439->f_72[iParam0]->f_19);
		}
		Global_1051439->f_72[iParam0]->f_19 = 0;
	}
	else if (func_831(iParam0, 67108864) && does_entity_exist(Global_1051439->f_72[iParam0]->f_21))
	{
		_0xe98d55c5983f2509(Global_1051439->f_72[iParam0]->f_21);
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_24))
	{
		_0xa35e7bf20fa269e0(Global_1051439->f_72[iParam0]->f_24);
		_0xa1cfb35069d23c23(Global_1051439->f_72[iParam0]->f_24);
		_0x74c2b3dc0b294102(Global_1051439->f_72[iParam0]->f_24);
		if (func_1417(iParam0, 524288))
		{
			_delete_volume(Global_1051439->f_72[iParam0]->f_24);
		}
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_25))
	{
		_0xa1cfb35069d23c23(Global_1051439->f_72[iParam0]->f_25);
		_0x74c2b3dc0b294102(Global_1051439->f_72[iParam0]->f_25);
		if (func_1417(iParam0, 524288))
		{
			_delete_volume(Global_1051439->f_72[iParam0]->f_25);
		}
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_27))
	{
		if (func_1417(iParam0, 524288))
		{
			_delete_volume(Global_1051439->f_72[iParam0]->f_27);
		}
	}
	if (func_831(iParam0, 16384) && !bVar0)
	{
		if (_does_scenario_point_exist(Global_1051439->f_72[iParam0]->f_6))
		{
			iVar1 = _get_scenario_point_entity(Global_1051439->f_72[iParam0]->f_6, "mp001_s_mp_catalogue01x_noanim_PH_R_HAND");
			if (does_entity_exist(iVar1))
			{
				set_entity_as_no_longer_needed(&iVar1);
			}
			_delete_scenario_point(Global_1051439->f_72[iParam0]->f_6);
		}
		Global_1051439->f_72[iParam0]->f_6 = 0;
		func_830(iParam0, 16384);
	}
	Global_1051439->f_72[iParam0] = -1;
	Global_1051439->f_72[iParam0]->f_3 = { 0f, 0f, 0f };
	Global_1051439->f_72[iParam0]->f_48 = 0;
	Global_1051439->f_72[iParam0]->f_73 = 1;
	Global_1915715->f_3[iParam0]->f_16 = 0;
	iVar3 = func_1418(iParam0);
	if (iVar3 >= 15)
	{
		Global_1915715->f_3[iParam0]->f_409 = 0;
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			func_955(&(Global_1051439->f_72[iParam0]->f_31[iVar2]));
			Global_1051439->f_72[iParam0]->f_31[iVar2] = 0;
			iVar2++;
		}
		Global_1051439->f_72[iParam0]->f_47 = 0;
	}
	func_1419(iParam0);
	if (func_1417(iParam0, 262144))
	{
		Global_1051439->f_72[iParam0]->f_49 = 262144;
	}
	else
	{
		func_1412(iParam0);
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_24) && func_820(iParam0, 2))
	{
		_0xfd010a2154b40676(Global_1051439->f_72[iParam0]->f_24, 623901053);
		_0x2c87c3e1c7b96ee2(Global_1051439->f_72[iParam0]->f_24);
	}
	func_1413(iParam0);
	Global_1051439->f_72[iParam0]->f_1 &= 2113536;
	func_1415(iParam0);
	Global_1051439->f_72[iParam0]->f_18 = -1;
	Global_1051439->f_72[iParam0]->f_2 = -1;
}

void func_731(int iParam0)
{
	if (_0x7907969497ea92f5(&(Global_1915715->f_20346[iParam0])) && _0x603ac35fd4602c76(&(Global_1915715->f_20346[iParam0])))
	{
		_datafile_unload(&(Global_1915715->f_20346[iParam0]));
	}
	Global_1915715->f_20387[iParam0] = 0;
	Global_1915715->f_20346[iParam0] = 0;
}

void func_732(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_733(int iParam0)
{
	return (Global_1051439->f_3628 && iParam0) != 0;
}

float func_734(var uParam0)
{
	if (!func_686(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_1408(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_1420() - uParam0->f_1);
}

void func_735(int iParam0)
{
	Global_1051439->f_3628 = (Global_1051439->f_3628 - (Global_1051439->f_3628 && iParam0));
}

void func_736(int iParam0)
{
	if (!func_740())
	{
		func_1421(1);
	}
	Global_1051439->f_3630 = iParam0;
	iVar0 = func_741(1);
	if (iVar0 != -1)
	{
		func_742(iVar0);
		func_238(0);
	}
	else
	{
		func_238(1);
	}
}

bool func_737()
{
	return Global_1915715->f_22504.f_1;
}

void func_738(int iParam0)
{
	Global_1051439->f_3629 = iParam0;
}

void func_739()
{
	_0x2804658eb7d8a50b(4, 666989068);
}

bool func_740()
{
	return func_733(4);
}

int func_741(bool bParam0)
{
	if (!func_817())
	{
		return 3;
	}
	if ((_get_number_of_references_of_script_with_name_hash(29649618) > 0 && Global_1051439->f_3630 == 0) && !bParam0)
	{
		return 45;
	}
	if (Global_1915715->f_20638)
	{
		return 10;
	}
	if (Global_1051439->f_3718 != 0)
	{
		return 0;
	}
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
		return 12;
	}
	if ((func_1213(1106247680, 0) || _is_ped_hogtied(Global_34)) || _is_ped_hogtying(Global_34))
	{
		return 13;
	}
	if (_0x1d46b417f926d34d(Global_34) || is_ped_in_any_train(Global_34))
	{
		iVar1 = get_vehicle_ped_is_using(Global_34);
		if (does_entity_exist(iVar1))
		{
			iVar2 = get_entity_model(iVar1);
			switch (iVar2)
			{
				case -1988548788:
				case 518773733:
				case 742064790:
				case 749266870:
					return 14;
			}
		}
		return 11;
	}
	if (_0x038b1f1674f0e242(Global_34) && !Global_1915715->f_22504.f_1)
	{
		return 16;
	}
	if (_is_ped_carrying(Global_34))
	{
		return 17;
	}
	if (_0xd04241bbf6d03a5e(player_ped_id()) != 0)
	{
		return 18;
	}
	if (is_ped_using_any_scenario(Global_34))
	{
		iVar3 = _get_scenario_point_type_ped_is_using(Global_34);
		if ((iVar3 != -1241981548 && iVar3 != -1177373461) && iVar3 != -447259824)
		{
			return 19;
		}
	}
	if (func_1422(255))
	{
		return 3;
	}
	if (is_minigame_in_progress())
	{
		return 44;
	}
	if ((Global_1108365->f_935.f_28 != -1 && Global_1108365->f_935.f_28 != 6) && Global_1108365->f_935.f_28 != 8)
	{
		if (func_1423(Global_1108365->f_935.f_28))
		{
			return 36;
		}
		else
		{
			return 37;
		}
	}
	if (_0x2942457417a5fd24(Global_34) >= 1f)
	{
		return 22;
	}
	if (Global_1572887->f_106.f_75 >= 11 && Global_1572887->f_106.f_75 < 15)
	{
		return 42;
	}
	if (((is_ped_falling(Global_34) || is_ped_climbing(Global_34)) || _is_ped_sliding(Global_34)) || is_ped_swimming(Global_34))
	{
		return 15;
	}
	if (_0x7fc84e85d98f063d(Global_34))
	{
		return 21;
	}
	if (func_641())
	{
		return 43;
	}
	return -1;
}

void func_742(int iParam0)
{
	Global_1915715->f_22504.f_5 = iParam0;
}

bool func_743(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return false;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return false;
	}
	if (func_1022(iVar0, 0, 1))
	{
		return false;
	}
	if (func_1424(iVar0, 32))
	{
		return true;
	}
	return false;
}

bool func_744()
{
	iVar0 = Global_1915715->f_20241;
	if (iVar0 == 29 || iVar0 == 33)
	{
		return true;
	}
	return false;
}

int func_745()
{
	return Global_1915715->f_20241;
}

bool func_746(int iParam0)
{
	if ((((((((((iParam0 == 10 || iParam0 == 14) || iParam0 == 2) || iParam0 == 28) || iParam0 == 29) || iParam0 == 27) || iParam0 == 38) || iParam0 == 15) || iParam0 == 39) || iParam0 == 33) || iParam0 == 37)
	{
		return true;
	}
	return false;
}

bool func_747(int iParam0)
{
	if (!func_631(iParam0))
	{
		return false;
	}
	iVar0 = func_1064(func_108(), iParam0);
	switch (iVar0)
	{
		case 22:
		case 24:
		case 31:
		case 78:
		case 98:
		case 101:
		case 130:
			return true;
		default:
			break;
	}
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 12:
		case 14:
		case 15:
		case 16:
		case 17:
		case 25:
		case 27:
		case 28:
		case 29:
		case 30:
		case 33:
		case 34:
		case 37:
		case 38:
		case 39:
			return true;
		default:
			break;
	}
	return false;
}

void func_748(bool bParam0)
{
	if (bParam0)
	{
		_hide_hud_component(2077578434);
	}
	else
	{
		_display_hud_component(2077578434);
	}
}

bool func_749()
{
	if (!func_686(&uLocal_19))
	{
		return true;
	}
	if (func_734(&uLocal_19) < 30f)
	{
		return false;
	}
	return true;
}

bool func_750(int iParam0, int iParam1)
{
	if (func_641())
	{
		return false;
	}
	if (func_820(iParam0, 4))
	{
		return false;
	}
	if (func_820(iParam0, 1))
	{
		return false;
	}
	if (&Global_1051439->f_3745[iParam0] == -1)
	{
		return false;
	}
	if (!does_entity_exist(Global_1051439->f_3745[iParam0]->f_4))
	{
		return false;
	}
	if (func_786(&(Global_1051439->f_3745[iParam0]), 1))
	{
		return false;
	}
	if (!func_1425(&(Global_17411.f_2763[&Global_1051439->f_3745[iParam0]]), 2))
	{
		return false;
	}
	if (func_1426(iParam0))
	{
		return false;
	}
	*iParam1 = get_ped_index_from_entity_index(Global_1051439->f_3745[iParam0]->f_4);
	if (!func_1427(*iParam1, 79))
	{
		return false;
	}
	if (!func_1428(*iParam1, iParam0))
	{
		return false;
	}
	if (func_1429(*iParam1, 0, 0, 0))
	{
		return false;
	}
	if (vdist2(Global_35, get_entity_coords(*iParam1, true, false)) > (50f * 50f))
	{
		return false;
	}
	if (!has_entity_clear_los_to_entity(*iParam1, Global_34, 17))
	{
		return false;
	}
	return true;
}

void func_751()
{
	switch (iLocal_22)
	{
		case 10:
			iLocal_22 = 15;
			break;
		case 15:
			iLocal_22 = 39;
			break;
		case 39:
			iLocal_22 = 38;
			break;
		case 38:
			iLocal_22 = 14;
			break;
		default:
			iLocal_22 = 10;
			break;
	}
}

bool func_752(int iParam0)
{
	if (!does_entity_exist(iParam0) || func_1234(iParam0, 0))
	{
		return true;
	}
	if (((func_1430(1) || _0x2b101ad9f651243a()) || is_scripted_speech_playing(iParam0)) || is_any_speech_playing(iParam0))
	{
		return true;
	}
	return false;
}

bool func_753(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 33:
		case 37:
		case 39:
			return true;
		default:
			break;
	}
	return false;
}

char* func_754(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return "TRAPPAU";
		case 39:
			return "NATURAU";
		case 37:
			return "MAGGAUD";
		case 33:
			return "COOKAUD";
		default:
			break;
	}
	return "";
}

void func_755(int iParam0, char[4] cParam1, bool bParam2)
{
	func_1431(iLocal_22, iParam0);
	if (bParam2)
	{
		uVar0 = 24;
		func_1433(&uVar0, iParam0, func_1432(*Global_1959375->f_327[iLocal_22]), 1);
		func_1435(&uVar0, func_1434(cParam1), 0, -1, 0, 0);
	}
	else
	{
		func_994(iParam0, cParam1, 1541280898, 0, 0, func_1432(*Global_1959375->f_327[iLocal_22]), 0, 1);
	}
	func_1367(&uLocal_19);
}

bool func_756(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return false;
	}
	iVar0 = func_1436(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_unlocked(iVar0))
	{
		iVar1 = func_1437(1, iParam0);
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

void func_757(int iParam0, int iParam1)
{
	if (!func_626(iParam0))
	{
		return;
	}
	bVar0 = func_108() == func_202(iParam0);
	Global_1051439->f_72[iParam1]->f_65 = -1;
	if (func_786(iParam0, 1048576))
	{
		func_1438(iParam0, 1);
		func_1438(iParam0, 4);
		if (bVar0)
		{
			func_830(iParam1, 256);
			func_830(iParam1, 512);
			Global_1051439->f_72[iParam1]->f_65 = 4;
		}
		return;
	}
	iVar1 = func_202(iParam0);
	if (iVar1 != -1 && func_759(iVar1, 255))
	{
		func_1438(iParam0, 1);
		func_1438(iParam0, 4);
		if (bVar0)
		{
			func_830(iParam1, 256);
			func_830(iParam1, 512);
			Global_1051439->f_72[iParam1]->f_65 = 4;
		}
		return;
	}
	if (func_758(iParam1) || func_760(iParam0) == 1)
	{
		func_1438(iParam0, 1);
		func_1438(iParam0, 4);
		func_830(iParam1, 256);
		func_830(iParam1, 512);
		Global_1051439->f_72[iParam1]->f_65 = 0;
		return;
	}
	if (iParam1 == 38 && !func_1439(iParam0))
	{
		func_1438(iParam0, 1);
		func_1438(iParam0, 4);
		if (bVar0)
		{
			func_830(iParam1, 256);
			func_830(iParam1, 512);
			Global_1051439->f_72[iParam1]->f_65 = 4;
		}
		return;
	}
	if (func_812())
	{
		func_830(iParam1, 256);
		func_830(iParam1, 512);
		Global_1051439->f_72[iParam1]->f_65 = 0;
		return;
	}
	iVar2 = func_761(iParam0);
	if (iVar2 != 0 && (!_unlock_is_visible(iVar2) || !_unlock_is_unlocked(iVar2)))
	{
		func_1438(iParam0, 1);
		func_1438(iParam0, 4);
		if (bVar0)
		{
			func_830(iParam1, 256);
			func_830(iParam1, 512);
			Global_1051439->f_72[iParam1]->f_65 = 10;
		}
		return;
	}
	bVar3 = true;
	if (func_786(iParam0, 1))
	{
		func_1440(iParam0, 1);
	}
	if (func_786(iParam0, 4))
	{
		func_1440(iParam0, 4);
	}
	iVar4 = Global_1915715->f_20343;
	if (bVar3 && Global_1915715->f_20343 & 128 == 128)
	{
		if (!func_1417(iParam1, 536870912))
		{
			Global_1051439->f_72[iParam1]->f_65 = 13;
			bVar3 = false;
		}
	}
	if (bVar3 && Global_1915715->f_20343 & 8192 == 8192)
	{
		if (iParam1 == 29)
		{
			Global_1051439->f_72[iParam1]->f_65 = 14;
			bVar3 = false;
		}
	}
	if (bVar3 && Global_1915715->f_20343 & 2048 == 2048)
	{
		Global_1051439->f_72[iParam1]->f_65 = 15;
		bVar3 = false;
	}
	func_1441(&iVar4, 2194);
	if (bVar3 && iVar4 != 0)
	{
		bVar3 = false;
	}
	if (((bVar3 && (iParam1 != 28 && iParam1 != 29)) && !Global_1051439->f_72[iParam1]->f_48) && !Global_1051439->f_72[iParam1]->f_49 & 16384 != 0)
	{
		Global_1051439->f_72[iParam1]->f_65 = 6;
		bVar3 = false;
	}
	if (bVar3)
	{
		func_849(iParam1, 256);
		func_849(iParam1, 512);
	}
	else
	{
		func_830(iParam1, 256);
		func_830(iParam1, 512);
	}
}

bool func_758(int iParam0)
{
	if (iParam0 == 28 && !func_1298(64))
	{
		return true;
	}
	if (iParam0 == 35)
	{
		if (!func_756(1))
		{
			return true;
		}
		if (func_322(0, 0, 1))
		{
			return true;
		}
	}
	if (func_134(4, 255))
	{
		if (Global_1051439->f_72[iParam0]->f_49 & 1073741824 != 0)
		{
		}
		else
		{
			return true;
		}
	}
	if (func_967())
	{
		if (!func_1442())
		{
			return true;
		}
		if (iParam0 == 38)
		{
			return true;
		}
	}
	if (func_1443(player_id()))
	{
		if (iParam0 == 39)
		{
			Var0 = -1;
			Var0.f_1 = -1;
			Var0 = { func_68(0) };
			if (func_326(Var0))
			{
				if (func_329(Var0) == -20166336)
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

bool func_759(int iParam0, int iParam1)
{
	if (func_66() == -1)
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
	iVar0 = func_1444(&((*Global_1197355)[iParam1]->f_4), iParam0, 30, 1, 7);
	if (iVar0 == 1)
	{
		return true;
	}
	return false;
}

int func_760(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_203(iParam0);
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

int func_761(int iParam0)
{
	if (!func_626(iParam0))
	{
		return 0;
	}
	if (&Global_1051439->f_4472[iParam0] == 0)
	{
		Global_1051439->f_4472[iParam0] = func_1445(iParam0);
	}
	return &(Global_1051439->f_4472[iParam0]);
}

void func_762(var uParam0)
{
	iVar0 = func_203(*uParam0);
	if (does_entity_exist(uParam0->f_4) && !func_1417(iVar0, 65536))
	{
		if (!_0x88ad6cc10d8d35b2(uParam0->f_4))
		{
			set_entity_as_mission_entity(uParam0->f_4, true, true);
		}
		delete_entity(&(uParam0->f_4));
	}
	if (iVar0 == 30)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (&Global_1051439->f_3634[iVar1] == *uParam0)
			{
				if (does_entity_exist(Global_1051439->f_3634[iVar1]->f_8))
				{
					if (!_0x88ad6cc10d8d35b2(Global_1051439->f_3634[iVar1]->f_8))
					{
						set_entity_as_mission_entity(Global_1051439->f_3634[iVar1]->f_8, true, true);
					}
					delete_ped(&(Global_1051439->f_3634[iVar1]->f_8));
				}
				if (does_entity_exist(Global_1051439->f_3634[iVar1]->f_15))
				{
					if (!_0x88ad6cc10d8d35b2(Global_1051439->f_3634[iVar1]->f_15))
					{
						set_entity_as_mission_entity(Global_1051439->f_3634[iVar1]->f_15, true, true);
					}
					delete_ped(&(Global_1051439->f_3634[iVar1]->f_15));
				}
			}
			else
			{
				iVar1++;
			}
		}
	}
	if (func_831(iVar0, 2097152))
	{
		if (_does_propset_exist(uParam0->f_15))
		{
			_delete_propset(uParam0->f_15, true, true);
		}
		if (does_entity_exist(uParam0->f_16))
		{
			delete_entity(&(uParam0->f_16));
		}
		func_1446(*uParam0, &uVar2, &iVar10);
		if (!is_string_null_or_empty(&uVar2))
		{
			set_ambient_zone_state(&uVar2, false, true);
		}
		if (iVar10 != 0)
		{
			func_1447(iVar10);
		}
	}
	func_830(iVar0, 2097152);
	uParam0->f_10 = 0;
	if (((func_831(iVar0, 16384) && func_108() != func_202(*uParam0)) && func_108() != Global_1051439->f_72[iVar0]->f_2) && func_1416(iVar0))
	{
		if (_does_scenario_point_exist(Global_1051439->f_72[iVar0]->f_6))
		{
			iVar11 = _get_scenario_point_entity(Global_1051439->f_72[iVar0]->f_6, "mp001_s_mp_catalogue01x_noanim_PH_R_HAND");
			_delete_scenario_point(Global_1051439->f_72[iVar0]->f_6);
			if (does_entity_exist(iVar11))
			{
				set_entity_as_no_longer_needed(&iVar11);
			}
		}
		if (_does_scenario_point_exist(Global_1915715->f_3[iVar0]->f_16))
		{
			_delete_scenario_point(Global_1915715->f_3[iVar0]->f_16);
		}
		Global_1051439->f_72[iVar0]->f_6 = 0;
		func_830(iVar0, 16384);
	}
}

void func_763(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_9 = 0;
	if (uParam0->f_6 != 0)
	{
		set_model_as_no_longer_needed(uParam0->f_6);
		uParam0->f_6 = 0;
	}
	if (_is_metaped_outfit_request_valid(uParam0->f_8))
	{
		_release_metaped_outfit_request(uParam0->f_8);
	}
}

bool func_764(int iParam0, var uParam1, var uParam2, var uParam3)
{
	return func_1448(iParam0, "sHash", uParam1, "fHeading", uParam2, "vPos", uParam3);
}

float func_765(int iParam0, bool bParam1)
{
	fVar0 = func_1449(iParam0, 0);
	fVar0 = (fVar0 + 20f);
	if (bParam1)
	{
		fVar0 = (fVar0 * fVar0);
	}
	return fVar0;
}

void func_766(var uParam0, int iParam1)
{
	if (iParam1 == 36)
	{
		if ((does_entity_exist(uParam0->f_4) && !is_entity_dead(uParam0->f_4)) && is_entity_visible(uParam0->f_4))
		{
			set_entity_visible(uParam0->f_4, false);
		}
	}
	switch (uParam0->f_9)
	{
		case 0:
			if ((vdist2(func_62(), uParam0->f_1) < func_1449(iParam1, 1) && func_1450(iParam1, *uParam0)) && !func_786(*uParam0, 1))
			{
				func_1451(uParam0, 1);
			}
			break;
		case 1:
			if (!does_entity_exist(func_292(uParam0->f_5)))
			{
				if (!func_1452(*uParam0, &(uParam0->f_6), &(uParam0->f_7)) || uParam0->f_6 == 0)
				{
					return;
				}
				request_model(uParam0->f_6, false);
				if (!has_model_loaded(uParam0->f_6))
				{
					return;
				}
				if (uParam0->f_7 == 0)
				{
				}
				else if (!_is_metaped_outfit_request_valid(uParam0->f_8))
				{
					uParam0->f_8 = _request_metaped_outfit(uParam0->f_6, uParam0->f_7);
				}
				else if (!_0x610438375e5d1801(uParam0->f_8))
				{
					return;
				}
				uParam0->f_5 = func_1453(uParam0->f_6, uParam0->f_1, 0, 0, 1, 0, 1, 1, 1, 0, 0);
				set_entity_invincible(uParam0->f_5, true);
				set_blocking_of_non_temporary_events(uParam0->f_5, true);
				set_entity_proofs(uParam0->f_5, 127, false);
				set_ped_can_ragdoll(uParam0->f_5, false);
				_0xae6004120c18df97(uParam0->f_5, 0, 0);
				set_ped_config_flag(uParam0->f_5, 146, true);
				set_ped_config_flag(uParam0->f_5, 26, true);
				set_ped_config_flag(uParam0->f_5, 44, true);
				if (iParam1 != 15)
				{
					set_ped_config_flag(uParam0->f_5, 422, true);
				}
				if (iParam1 == 2 || iParam1 == 15)
				{
					set_ped_config_flag(uParam0->f_5, 376, true);
				}
				if ((iParam1 == 15 && func_1454(*uParam0, &iVar0)) && iVar0 == -752368041)
				{
					_give_weapon_to_ped_2(uParam0->f_5, -1471716628, 0, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, true);
					set_current_ped_weapon(uParam0->f_5, -1471716628, true, 0, false, false);
				}
				uParam0->f_4 = func_292(uParam0->f_5);
				func_1455(uParam0->f_5);
			}
			else
			{
				if (!does_entity_exist(uParam0->f_4) || is_entity_dead(uParam0->f_4))
				{
					func_1451(uParam0, 0);
					return;
				}
				if (uParam0->f_7 == 0)
				{
				}
				else if (!_0xa0bc8faed8cfeb3c(uParam0->f_5))
				{
					return;
				}
				else if (_is_metaped_outfit_request_valid(uParam0->f_8))
				{
					_set_ped_body_component(uParam0->f_5, uParam0->f_7);
					_update_ped_variation(uParam0->f_5, true, true, true, true, false);
					_release_metaped_outfit_request(uParam0->f_8);
				}
				func_1451(uParam0, 2);
			}
			break;
		case 2:
			if (((!does_entity_exist(uParam0->f_4) || is_entity_dead(uParam0->f_4)) || vdist2(func_62(), get_entity_coords(uParam0->f_4, true, false)) > func_765(iParam1, 1)) || !func_1450(iParam1, *uParam0))
			{
				func_762(uParam0);
			}
			if (!does_entity_exist(uParam0->f_4))
			{
				func_1451(uParam0, 0);
			}
			break;
	}
}

int func_767(int iParam0)
{
	bVar0 = ((func_758(iParam0) || func_759(func_202(&(Global_1051439->f_3745[iParam0])), 255)) || func_760(&(Global_1051439->f_3745[iParam0])) == 1);
	iVar1 = func_761(&(Global_1051439->f_3745[iParam0]));
	bVar0 = ((bVar0 || !_unlock_is_unlocked(iVar1)) || !_unlock_is_visible(iVar1));
	if (iParam0 == 38)
	{
		bVar0 = (bVar0 || !func_1439(&(Global_1051439->f_3745[iParam0])));
	}
	if (!bVar0)
	{
		if (!func_831(iParam0, 2097152) && Global_1051439->f_3745[iParam0]->f_10 == 0)
		{
			if (func_1456(&(Global_1051439->f_3745[iParam0]), &(Global_1051439->f_3745[iParam0]->f_11), &(Global_1051439->f_3745[iParam0]->f_14), &(Global_1051439->f_3745[iParam0]->f_10)))
			{
				if (Global_1051439->f_3745[iParam0]->f_10 == 0)
				{
					func_849(iParam0, 2097152);
				}
			}
		}
		if (Global_1051439->f_3745[iParam0]->f_10 != 0 && vdist2(Global_1051439->f_3745[iParam0]->f_11, func_62()) < (200f * 200f))
		{
			bVar11 = is_model_valid(Global_1051439->f_3745[iParam0]->f_10);
			if (!func_831(iParam0, 2097152))
			{
				if ((bVar11 && !does_entity_exist(Global_1051439->f_3745[iParam0]->f_16)) || (!bVar11 && !_does_propset_exist(Global_1051439->f_3745[iParam0]->f_15)))
				{
					if (bVar11)
					{
						request_model(Global_1051439->f_3745[iParam0]->f_10, false);
						if (!has_model_loaded(Global_1051439->f_3745[iParam0]->f_10))
						{
							return 0;
						}
					}
					else
					{
						_request_propset_2(Global_1051439->f_3745[iParam0]->f_10);
						if (!_has_propset_loaded_2(Global_1051439->f_3745[iParam0]->f_10))
						{
							return 0;
						}
					}
					func_1446(&(Global_1051439->f_3745[iParam0]), &uVar2, &iVar10);
					bVar12 = iVar10 != false;
					if (bVar11)
					{
						Global_1051439->f_3745[iParam0]->f_16 = create_object(Global_1051439->f_3745[iParam0]->f_10, Global_1051439->f_3745[iParam0]->f_11, false, true, false, false, true);
						if (!does_entity_exist(Global_1051439->f_3745[iParam0]->f_16))
						{
							return 0;
						}
						set_entity_heading(Global_1051439->f_3745[iParam0]->f_16, Global_1051439->f_3745[iParam0]->f_14);
						freeze_entity_position(Global_1051439->f_3745[iParam0]->f_16, true);
						set_entity_can_be_damaged(Global_1051439->f_3745[iParam0]->f_16, false);
						set_entity_proofs(Global_1051439->f_3745[iParam0]->f_16, -1, false);
						set_entity_invincible(Global_1051439->f_3745[iParam0]->f_16, true);
					}
					else
					{
						Global_1051439->f_3745[iParam0]->f_15 = _create_propset_2(Global_1051439->f_3745[iParam0]->f_10, Global_1051439->f_3745[iParam0]->f_11, 7, Global_1051439->f_3745[iParam0]->f_14, 1200f, false, !bVar12);
						if (!_does_propset_exist(Global_1051439->f_3745[iParam0]->f_15))
						{
							return 0;
						}
					}
					if (!is_string_null_or_empty(&uVar2))
					{
						set_ambient_zone_state(&uVar2, true, true);
						_0x3743ce6948194349(&uVar2, Global_1051439->f_3745[iParam0]->f_11, Global_1051439->f_3745[iParam0]->f_14);
					}
					if (bVar12)
					{
						func_1457(iVar10);
					}
					func_849(iParam0, 2097152);
				}
				else
				{
					_delete_propset(Global_1051439->f_3745[iParam0]->f_15, true, true);
					func_1446(&(Global_1051439->f_3745[iParam0]), &uVar2, &iVar10);
					if (!is_string_null_or_empty(&uVar2))
					{
						set_ambient_zone_state(&uVar2, false, true);
					}
					if (iVar10 != 0)
					{
						func_1447(iVar10);
					}
				}
			}
			else if ((bVar11 && !does_entity_exist(Global_1051439->f_3745[iParam0]->f_16)) || (!bVar11 && !_does_propset_exist(Global_1051439->f_3745[iParam0]->f_15)))
			{
				func_830(iParam0, 2097152);
			}
		}
	}
	else if (func_831(iParam0, 2097152))
	{
		bVar13 = is_model_valid(Global_1051439->f_3745[iParam0]->f_10);
		if ((bVar13 && !does_entity_exist(Global_1051439->f_3745[iParam0]->f_16)) || (!bVar13 && !_does_propset_exist(Global_1051439->f_3745[iParam0]->f_15)))
		{
			if (bVar13)
			{
				_delete_propset(Global_1051439->f_3745[iParam0]->f_15, true, true);
			}
			else
			{
				delete_entity(&(Global_1051439->f_3745[iParam0]->f_16));
			}
			func_1446(&(Global_1051439->f_3745[iParam0]), &uVar2, &iVar10);
			if (!is_string_null_or_empty(&uVar2))
			{
				set_ambient_zone_state(&uVar2, false, true);
			}
			if (iVar10 != 0)
			{
				func_1447(iVar10);
			}
		}
		func_830(iParam0, 2097152);
	}
	return 1;
}

void func_768(int iParam0)
{
	iVar0 = func_203(iParam0);
	iVar1 = func_108();
	if (iVar1 != func_202(iParam0))
	{
		if (Global_1051439->f_3718 != 0)
		{
			func_1458();
		}
		return;
	}
	if (!func_1459(iParam0, iVar0))
	{
		return;
	}
	iVar3 = func_1460(iParam0);
	if (iVar3 == 0)
	{
		return;
	}
	if (Global_1051439->f_3718 != 0)
	{
		if (Global_1051439->f_3718.f_1 != -1)
		{
			if ((!func_1461(iParam0) && vdist2(Global_35, Global_1051439->f_72[Global_1051439->f_3718.f_1]->f_3) > (15f * 15f)) || func_102())
			{
				if (!is_player_dead(player_id()))
				{
					clear_ped_tasks(Global_34, 1, 0);
				}
				func_1458();
			}
		}
		else
		{
			if (!is_player_dead(player_id()))
			{
				clear_ped_tasks(Global_34, 1, 0);
			}
			func_1458();
			return;
		}
	}
	else if ((vdist2(Global_35, Global_1051439->f_72[iVar0]->f_3) > (15f * 15f) && iVar0 != 36) || func_102())
	{
		return;
	}
	switch (Global_1051439->f_3718)
	{
		case 0:
			if (func_1461(iParam0) && vdist2(Global_35, Global_1051439->f_72[iVar0]->f_3) > (15f * 15f))
			{
				func_1462(iParam0);
				func_552("SHOP_NOT_CURRENTLY_ALLOWED", 10000, 0, 0, 0, 1);
				Global_1051439->f_3718.f_1 = iVar0;
				func_1463(3);
			}
			else if (func_1464(iVar0) && (func_628(Global_1051439->f_3718.f_2) || func_1465(Global_34, Global_1051439->f_3718.f_2, 1) > 1f))
			{
				if (iVar0 == 36)
				{
					func_552("SHOP_NOT_CURRENTLY_ALLOWED_THEATER", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_552("SHOP_NOT_CURRENTLY_ALLOWED", 10000, 0, 0, 0, 1);
				}
				Global_1051439->f_3718.f_1 = iVar0;
				func_1463(1);
			}
			break;
		case 1:
			if (is_player_dead(player_id()))
			{
				func_1458();
			}
			else
			{
				iVar7 = get_script_task_status(Global_34, 713668775, true);
				if (((((!iVar7 == 1 && !iVar7 == 0) && !is_ped_falling(Global_34)) && !is_ped_jumping(Global_34)) && !is_ped_climbing(Global_34)) && !is_ped_vaulting(Global_34))
				{
					Global_1051439->f_3718.f_2 = { 0f, 0f, 0f };
					iVar2 = 0;
					while (iVar2 <= (iVar3 - 1))
					{
						func_1466(iParam0, iVar2, &vVar4);
						if (vdist(Global_35, vVar4) < vdist(Global_35, Global_1051439->f_3718.f_2))
						{
							Global_1051439->f_3718.f_2 = { vVar4 };
						}
						iVar2++;
					}
					if (Global_1051439->f_3718.f_6 > 3)
					{
						func_1463(3);
						return;
					}
					if (_is_ped_carrying(Global_34))
					{
						iVar8 = func_1467(Global_34);
						if (does_entity_exist(iVar8) && is_ped_a_player(iVar8))
						{
							func_1463(3);
							return;
						}
					}
					clear_ped_tasks(Global_34, 1, 0);
					_0x013a7ba5015c1372(Global_34, 1);
					_0xfa30e2254461adeb(Global_34, 1);
					task_follow_nav_mesh_to_coord(Global_34, Global_1051439->f_3718.f_2, 1f, 20000, 0.25f, 131072, 40000f);
					set_ped_config_flag(Global_34, 1, true);
					set_ped_config_flag(Global_34, 170, true);
					_0xfd6943b6df77e449(Global_34, true);
					_0xc2266aa617668ad3(Global_34, 0.01f);
					_0x73b6f907b913c860(Global_34, 0.4f);
					Global_1051439->f_3718.f_6++;
				}
				else if (!func_1464(Global_1051439->f_3718.f_1) || func_1465(Global_34, Global_1051439->f_3718.f_2, 1) < 1f)
				{
					Global_1051439->f_3718.f_5 = get_entity_heading(Global_34);
					func_1463(2);
				}
			}
			break;
		case 2:
			if (!is_player_dead(player_id()))
			{
				clear_ped_tasks(Global_34, 1, 0);
				simulate_player_input_gait(player_id(), 1f, 2000, Global_1051439->f_3718.f_5, false, false);
			}
			func_1458();
			break;
		case 3:
			if (!is_screen_faded_out())
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(500);
				}
			}
			else
			{
				func_807(Global_34, Global_1051439->f_3718.f_2, get_entity_heading(Global_34), 2, 1073741824);
				do_screen_fade_in(500);
				func_1458();
			}
			break;
		default:
			func_1458();
			break;
	}
}

bool func_769()
{
	if (func_270(0))
	{
		return false;
	}
	if (func_102())
	{
		return false;
	}
	if (func_103(player_id(), 1, 0, 1))
	{
		return true;
	}
	if (func_1468())
	{
		return true;
	}
	if (func_812())
	{
		return true;
	}
	iVar0 = func_1467(Global_34);
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

bool func_770(int iParam0, int iParam1)
{
	if (!func_626(iParam0) || !func_631(iParam1))
	{
		return false;
	}
	if ((((((((((((((iParam1 == 11 || iParam1 == 30) || iParam1 == 20) || iParam1 == 34) || iParam1 == 12) || iParam1 == 13) || iParam1 == 1) || iParam1 == 17) || iParam1 == 16) || iParam1 == 23) || iParam1 == 26) || iParam1 == 36) || iParam1 == 31) || iParam1 == 32) || iParam1 == 19)
	{
		return false;
	}
	if (iParam1 == 35 && !func_905())
	{
		return false;
	}
	if (iParam1 == 25 && !func_1417(iParam1, 262144))
	{
		return false;
	}
	if (((((iParam1 == 27 || iParam1 == 28) || iParam0 == 147) || iParam1 == 29) || iParam1 == 33) || iParam1 == 37)
	{
		if (Global_1051439->f_72[iParam1]->f_18 == iParam0 && !func_628(Global_1051439->f_72[iParam1]->f_3))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (iParam1 == 9)
	{
		iVar0 = func_776(iParam0, iParam1);
	}
	else
	{
		iVar0 = func_204(iParam1);
	}
	if (func_777(iVar0) == 0)
	{
		return false;
	}
	if (!func_764(iParam0, &uVar5, &uVar4, &vVar1))
	{
		return false;
	}
	if (func_628(vVar1) && ((func_202(iParam0) != -1 && func_108() != func_202(iParam0)) || func_628(Global_1051439->f_72[iParam1]->f_3)))
	{
		return false;
	}
	return true;
}

bool func_771(int iParam0)
{
	if (!func_311(iParam0))
	{
		return false;
	}
	return func_424(iParam0, 8);
}

bool func_772(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 9)
	{
		if (((func_905() && func_326(func_382())) || func_1469()) && !func_1470())
		{
			return true;
		}
	}
	if (iParam1 == 39)
	{
		if (iParam0 == &Global_1051439->f_3745[39] && func_1471(8))
		{
			return true;
		}
	}
	if (func_758(iParam1) || func_760(iParam0) == 1)
	{
		return true;
	}
	if (func_1472(iParam0, 4))
	{
		return true;
	}
	if (func_786(iParam0, 4))
	{
		return true;
	}
	if (func_786(iParam0, 1))
	{
		return true;
	}
	if (func_786(iParam0, 1048576))
	{
		return true;
	}
	if (!_unlock_is_visible(func_761(iParam0)))
	{
		return true;
	}
	if (!func_1473(iParam1) && !func_1417(iParam1, 262144))
	{
		return true;
	}
	if (func_831(iParam1, 134217728) && !func_1417(iParam1, 262144))
	{
		return true;
	}
	if (!bParam2 && !func_831(iParam1, 4))
	{
		return true;
	}
	if (func_1417(iParam1, 2))
	{
		if (!func_1474())
		{
			return true;
		}
	}
	if (func_1468())
	{
		return true;
	}
	if (iParam1 == 38 && !Global_17411.f_3078)
	{
		return true;
	}
	if ((iParam1 == 39 || iParam1 == 15) && !func_756(7))
	{
		return true;
	}
	return false;
}

bool func_773(int iParam0)
{
	return func_201(&(Global_1915715->f_18260[iParam0]));
}

void func_774(int iParam0, bool bParam1)
{
	if (*iParam0 != -1)
	{
		func_1351(*iParam0, -1);
		func_1352(*iParam0, 0);
		func_1353(*iParam0, 0);
		if (does_blip_exist(&(Global_17081[*iParam0])))
		{
			if (bParam1)
			{
				set_radar_zoom(&(Global_17081[*iParam0]));
			}
			remove_blip(Global_17081[*iParam0]);
		}
	}
	*iParam0 = -1;
}

int func_775(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 11 && Global_1915715->f_20646.f_1009 == 0)
	{
		return -1;
	}
	if (!func_764(iParam1, &uVar4, &uVar3, &vVar0))
	{
		if (((((iParam1 == 153 || iParam1 == 154) || iParam1 == 133) || iParam1 == 147) || iParam1 == 20) || iParam1 == 134)
		{
			vVar0 = { Global_1051439->f_72[iParam0]->f_3 };
		}
		else
		{
			return -1;
		}
	}
	if (func_628(vVar0))
	{
		vVar0 = { Global_1051439->f_72[iParam0]->f_3 };
	}
	if (iParam0 == 9)
	{
		iVar5 = func_629(iParam2, func_776(iParam1, iParam0), vVar0, -1);
		iVar6 = func_1475(iVar5);
		if (does_blip_exist(iVar6))
		{
			set_blip_flash_timer(iVar6, func_204(iParam0), func_761(iParam1));
		}
		return iVar5;
	}
	if (iParam0 == func_203(iParam1))
	{
		iVar7 = func_204(iParam0);
		if (iVar7 != 0)
		{
			iVar5 = func_629(iParam2, iVar7, vVar0, -1);
			iVar8 = func_1475(iVar5);
			if (does_blip_exist(iVar8))
			{
				set_blip_flash_timer(iVar8, func_204(iParam0), func_761(iParam1));
			}
			return iVar5;
		}
	}
	return -1;
}

int func_776(int iParam0, int iParam1)
{
	iVar0 = func_1476(iParam0, iParam1);
	return func_632(iVar0);
}

int func_777(int iParam0)
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

void func_778(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_17081)
	{
		_0xbd62d98799a3daf0(&(Global_17081[iParam0]), iParam1);
	}
}

char[] func_779(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return "SHOP_TITLE_BAIT";
		case 12:
			return "SHOP_TITLE_BANK";
		case 8:
			return "SHOP_TITLE_BARBER";
		case 30:
			return "SHOP_TITLE_BARTENDER";
		case 24:
			return "SHOP_TITLE_";
		case 25:
			return "SHOP_TITLE_BOUNTYHUNTING_MP_RETURN";
		case 10:
			return "SHOP_TITLE_BUTCHER";
		case 21:
			return "SHOP_TITLE_CAMP_SHAVING";
		case 26:
			return "SHOP_TITLE_COACH";
		case 0:
			return "SHOP_TITLE_DOCTOR";
		case 4:
			return "SHOP_TITLE_FENCE";
		case 3:
			return "SHOP_TITLE_GENERAL";
		case 6:
			return "SHOP_TITLE_GUNSMITH";
		case 23:
			return "SHOP_TITLE_TRAINER";
		case 9:
			return "SHOP_TITLE_HORSE_SHOP";
		case 2:
			return "SHOP_TITLE_POST";
		case 22:
			return "SHOP_TITLE_QUARTER";
		case 7:
			return "SHOP_TITLE_TAILOR";
		case 1:
			return "SHOP_TITLE_TRAIN_STATION";
		case 5:
			return "SHOP_TITLE_HORSE_FENCE";
		case 15:
			return "SHOP_TITLE_GUS";
		case 16:
			return "SHOP_TITLE_PEARSON";
		case 17:
			return "SHOP_TITLE_HOTEL";
		case 27:
			return "SHOP_TITLE_WILDERNESS_SUPPLIES";
		case 28:
			return "GC_LOCK_TITLE";
		case 29:
			return "NET_CAMP_BUTCHER";
		case 34:
			return "SHOP_TITLE_HANDHELD";
		case 18:
			return "SHOP_TITLE_PHOTO_STUDIO";
		case 20:
			return "SHOP_TITLE_WARDROBE";
		case 38:
			return "SHOP_TITLE_TRAVELLING_SALESMAN";
		case 39:
			return "SHOP_TITLE_HARRIET";
		case 33:
			return "SHOP_TITLE_MP_MOONSHINER";
		case 37:
			return "SHOP_TITLE_MP_MOONSHINE_PROP";
		default:
			break;
	}
	return "INVALID SHOP";
}

void func_780(int iParam0, char* sParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_17081)
	{
		if (does_blip_exist(&(Global_17081[iParam0])))
		{
			set_blip_name_from_text_file(&(Global_17081[iParam0]), sParam1);
		}
	}
}

void func_781(int iParam0, int iParam1)
{
	if (!func_626(iParam0))
	{
		return;
	}
	Global_1915715->f_17884[iParam0] = (&Global_1915715->f_17884[iParam0] - (Global_1915715->f_17884[iParam0] && iParam1));
}

void func_782(int iParam0)
{
	if (Global_1915715->f_18260[iParam0]->f_8)
	{
		if (Global_1915715->f_18260[iParam0]->f_6 == -1)
		{
			Global_1915715->f_18260[iParam0]->f_8 = 0;
		}
		if (Global_1915715->f_18260[iParam0]->f_6 != -2)
		{
			if (func_383(Global_1915715->f_18260[iParam0]->f_6) && !Global_1915715->f_18260[iParam0]->f_10)
			{
				Global_1915715->f_18260[iParam0]->f_8 = 0;
				Global_1915715->f_18260[iParam0]->f_6 = -1;
				return;
			}
			if (!func_623())
			{
				return;
			}
			if (func_439())
			{
				return;
			}
			if (func_624())
			{
				return;
			}
		}
		if (Global_1915715->f_18260[iParam0]->f_7 >= 0)
		{
			Global_1915715->f_18260[iParam0]->f_7 = (Global_1915715->f_18260[iParam0]->f_7 + get_game_timer());
		}
		Global_1915715->f_18260[iParam0]->f_8 = 0;
		if (Global_1915715->f_18260[iParam0]->f_6 != -2)
		{
			func_165(Global_1915715->f_18260[iParam0]->f_6, Global_1915715->f_18260[iParam0]->f_10);
			if (Global_1915715->f_18260[iParam0]->f_6 == 773)
			{
				func_1477(128);
			}
		}
	}
	else if (Global_1915715->f_18260[iParam0]->f_6 != -1 && func_201(&(Global_1915715->f_18260[iParam0])))
	{
		if (Global_1915715->f_18260[iParam0]->f_7 >= 0 && (get_game_timer() - Global_1915715->f_18260[iParam0]->f_7) > 0)
		{
			func_205(func_202(iParam0), func_204(func_203(iParam0)), 580546400);
			func_205(func_202(iParam0), func_204(func_203(iParam0)), 847579139);
			Global_1915715->f_18260[iParam0]->f_6 = -1;
			Global_1915715->f_18260[iParam0]->f_7 = 0;
		}
	}
}

bool func_783(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 250)
	{
		return false;
	}
	iVar0 = func_634(iParam0);
	switch (iVar0)
	{
		case 22:
		case 43:
		case 44:
		case 98:
			return true;
		default:
			break;
	}
	return false;
	return false;
}

void func_784(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_17081)
	{
		_blip_set_modifier(&(Global_17081[iParam0]), iParam1);
	}
}

bool func_785(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 250)
	{
		return false;
	}
	iVar0 = func_634(iParam0);
	switch (iVar0)
	{
		case 0:
		case 45:
		case 48:
		case 51:
			return false;
		default:
			break;
	}
	return true;
}

bool func_786(int iParam0, int iParam1)
{
	if (!func_626(iParam0))
	{
		return false;
	}
	return (Global_1051439->f_3073[iParam0] && iParam1) != 0;
}

bool func_787(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		iVar0 = func_1478(iParam1);
		if (func_1479(iVar0))
		{
			if (Global_1939084[iVar0] != -1)
			{
				iVar1 = func_1480(iParam1);
				if (iVar1 != 0)
				{
					func_784(iParam0, iVar1);
					return true;
				}
			}
		}
	}
	return false;
}

void func_788(int iParam0, int iParam1)
{
	if (!func_626(iParam0))
	{
		return;
	}
	if (!func_631(iParam1))
	{
		return;
	}
	if (iParam1 != func_203(iParam0))
	{
		return;
	}
	iVar0 = func_1481(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 != -1)
	{
		if (!func_201(iVar0))
		{
			func_774(&iVar0, 0);
			Global_1915715->f_18260[iParam0] = -1;
			if (Global_1915715->f_18260[iParam0]->f_5)
			{
				Global_1915715->f_18260[iParam0]->f_5 = 0;
			}
			return;
		}
	}
	if (iParam1 == 9)
	{
		iVar1 = func_1475(iVar0);
		if (func_1482(func_634(iVar0)) != func_1476(iParam0, iParam1))
		{
			if (iVar1 != 0)
			{
				set_blip_sprite(iVar1, func_1476(iParam0, iParam1), true);
				func_1352(iVar0, func_776(iParam0, iParam1));
			}
		}
		switch (func_1483(&(Global_1915715->f_20469)))
		{
			case 0:
				_set_blip_flash_style(iVar1, 1351440471);
				_set_blip_flash_style(iVar1, 2068327888);
				_set_blip_flash_style(iVar1, -586092192);
				break;
			case 1:
				_set_blip_flash_style(iVar1, 2068327888);
				_set_blip_flash_style(iVar1, -586092192);
				_blip_set_modifier(iVar1, 1351440471);
				break;
			case 2:
				_set_blip_flash_style(iVar1, 1351440471);
				_set_blip_flash_style(iVar1, -586092192);
				_blip_set_modifier(iVar1, 2068327888);
				break;
			case 3:
				_set_blip_flash_style(iVar1, 1351440471);
				_set_blip_flash_style(iVar1, 2068327888);
				_blip_set_modifier(iVar1, -586092192);
				break;
			default:
				_set_blip_flash_style(iVar1, 1351440471);
				_set_blip_flash_style(iVar1, 2068327888);
				_set_blip_flash_style(iVar1, -586092192);
				break;
		}
	}
	if (func_786(iParam0, 8))
	{
		if (!func_786(iParam0, 128))
		{
			func_1484(iParam0, iVar0);
			if (Global_1915715->f_18260[iParam0]->f_5)
			{
				func_1485(iVar0, func_1480(func_202(iParam0)));
				Global_1915715->f_18260[iParam0]->f_5 = 0;
			}
			func_784(iVar0, -401963276);
			func_784(iVar0, 231194138);
			func_784(iVar0, 580546400);
			func_1438(iParam0, 128);
		}
	}
	else if (Global_1915715->f_18260[iParam0]->f_6 != -1 && !Global_1915715->f_18260[iParam0]->f_8)
	{
		if (!func_786(iParam0, -2147483648))
		{
			func_1484(iParam0, iVar0);
			if (Global_1915715->f_18260[iParam0]->f_5)
			{
				func_1485(iVar0, func_1480(func_202(iParam0)));
				Global_1915715->f_18260[iParam0]->f_5 = 0;
			}
			if (Global_1915715->f_18260[iParam0]->f_9)
			{
				func_784(iVar0, 580546400);
			}
			func_784(iVar0, 847579139);
			func_1438(iParam0, -2147483648);
		}
		if (func_1486(iParam0))
		{
			if (!func_786(iParam0, 16))
			{
				func_784(iVar0, 724623647);
				func_1438(iParam0, 16);
			}
		}
		if (func_203(iParam0) == 2)
		{
			iVar2 = func_1487();
			func_1488(&(Global_1915715->f_18260[iParam0]), iVar2);
		}
	}
	else if (func_1486(iParam0))
	{
		if (!func_786(iParam0, 16))
		{
			func_1484(iParam0, iVar0);
			func_784(iVar0, 724623647);
			func_1438(iParam0, 16);
		}
	}
	else
	{
		func_1484(iParam0, iVar0);
	}
	if (func_203(iParam0) == 2)
	{
		iVar3 = func_1487();
		func_1488(&(Global_1915715->f_18260[iParam0]), iVar3);
		if (func_425() != -1 && func_303(func_425()) > 0)
		{
			func_784(&(Global_1915715->f_18260[iParam0]), 37805592);
		}
		else
		{
			func_1485(&(Global_1915715->f_18260[iParam0]), 37805592);
		}
	}
}

void func_789(int iParam0)
{
	Global_1051439->f_4466 = iParam0;
}

bool func_790()
{
	return _0xdbc754cb6ccb9378();
}

bool func_791()
{
	return Global_1051439->f_4466;
}

void func_792(bool bParam0)
{
	iVar0 = 1037810546;
	if (_is_app_running(iVar0) || bParam0)
	{
		_close_app_by_hash(iVar0);
		set_no_loading_screen(false);
		if (is_screen_faded_out() && !func_102())
		{
			do_screen_fade_in(250);
		}
		Global_1051439->f_4466.f_1 = 0;
		Global_1051439->f_4466.f_2 = 0;
		func_1489(0, 0, -1);
	}
	_0x32d5898c4898cd95();
	func_789(0);
}

void func_793(var uParam0)
{
}

int func_794(int iParam0)
{
	if (func_1490(iParam0))
	{
		return func_1493(func_1491(iParam0, 0), func_1492(iParam0));
	}
	iVar0 = -570078785;
	if (func_1492(iParam0))
	{
		iVar0 = func_1494(iParam0, 1, 1);
		if (iVar0 == 0 || func_1495(iParam0, 773203532, iVar0, 1, 1) == 0)
		{
			iVar0 = -570078785;
		}
	}
	return iVar0;
}

int func_795(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_177(iParam0, 0))
	{
		Global_1051439->f_61 = 0;
		Global_1051439->f_46 = 0;
		return 0;
	}
	bVar1 = func_1496(iParam0, &iVar0);
	if ((iParam2 && bVar1) || ((func_1497() && bVar1) && iParam1 == 0))
	{
		if (func_1498(iVar0, 997808187, 0) && !func_1499(iVar0, 997808187))
		{
			Global_1051439->f_46 = 0;
			Global_1051439->f_61 = iParam0;
			return Global_1051439->f_46;
		}
		else if (func_1498(iVar0, -570078785, 0))
		{
			if (bParam3)
			{
				iVar2 = func_796(iVar0, -570078785, 0, 1);
			}
			else
			{
				iVar2 = func_797(func_796(iVar0, -570078785, 0, 1));
			}
			Global_1051439->f_46 = iVar2;
			Global_1051439->f_61 = iParam0;
			return Global_1051439->f_46;
		}
	}
	iVar3 = iParam1;
	if (iVar3 == 0)
	{
		iVar3 = func_1500(iParam0, iVar3, 1, -1, 1);
	}
	iVar4 = 0;
	if (func_1501(iParam0))
	{
		iVar4 = func_1502(iParam0);
	}
	else if (func_1503(iParam0))
	{
		iVar4 = func_1504(iParam0);
	}
	else if (func_1505(iParam0))
	{
		iVar4 = func_1506(iParam0);
	}
	else if (func_1507(iParam0))
	{
		iVar4 = func_1508(iParam0);
	}
	if (iVar4 != 0)
	{
		iVar2 = func_796(iVar4, iVar3, 0, bParam4);
		bVar5 = false;
		if (func_1509(iVar3))
		{
			if (func_1510(iVar4, 773203532, iVar3, 1, bParam4) > 0)
			{
				bVar5 = true;
			}
		}
		if ((iVar3 == -570078785 || bVar5) && !bParam3)
		{
			iVar2 = func_797(iVar2);
		}
		Global_1051439->f_61 = iParam0;
		return iVar2;
	}
	if (iVar3 == 997808187)
	{
		Global_1051439->f_61 = iParam0;
		Global_1051439->f_46 = 0;
		return 0;
	}
	else
	{
		iVar2 = func_1511(iParam0, iVar3, bParam4, 0, 1, 0);
		bVar6 = false;
		if (func_1509(iVar3))
		{
			if (func_1495(iParam0, 773203532, iVar3, bParam4, 1) > 0)
			{
				bVar6 = true;
			}
		}
		if ((iVar3 == -570078785 || bVar6) && !bParam3)
		{
			iVar2 = func_797(iVar2);
		}
		Global_1051439->f_46 = iVar2;
		Global_1051439->f_61 = iParam0;
		if (Global_1051439->f_62 != Global_1051439->f_61)
		{
			Global_1051439->f_62 = Global_1051439->f_61;
		}
		else
		{
			Global_1051439->f_62 = 0;
		}
		return iVar2;
	}
	Global_1051439->f_46 = 0;
	return -1;
}

int func_796(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_1512(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

int func_797(int iParam0)
{
	return (iParam0 / 100);
}

var func_798(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = sParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

int func_799()
{
	if (Global_1915715->f_22504.f_1)
	{
		return func_1513(34);
	}
	return func_1513(Global_1915715->f_20241);
}

int func_800()
{
	if (Global_1915715->f_22504.f_1)
	{
		return func_1514(152);
	}
	return func_1514(Global_1915715->f_20241.f_1);
}

int func_801(int iParam0, bool bParam1)
{
	if (!func_177(iParam0, 0))
	{
		return -1;
	}
	_0x7c1c2062cfad06fe(iParam0, &Var0);
	if (Var0.f_1 < 1)
	{
		return -1;
	}
	else if (func_560(iParam0, 81450561) || func_560(iParam0, 1342455455))
	{
		return -1;
	}
	switch (Var0)
	{
		case -1399517481:
		case -999519443:
		case 128291088:
			if (bParam1)
			{
				return Var0.f_1;
			}
			return -1;
		case -55206167:
			return 1;
		case -697100746:
			return Var0.f_1;
		default:
			break;
	}
	return -1;
}

void func_802()
{
	func_146(0);
}

void func_803()
{
	if (_get_number_of_references_of_script_with_name_hash(-4058091) > 0)
	{
		Global_1940311->f_12 = 1;
	}
}

bool func_804(int iParam0)
{
	return (func_1515(iParam0, 4) || func_1515(iParam0, 5));
}

bool func_805(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_806(int iParam0, var uParam1)
{
	Var0 = Global_1071686->f_28448[48]->f_3;
	Var0.f_2 = -738708473;
	Var0.f_3 = func_1514(iParam0);
	if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return false;
	}
	Var0.f_2 = -99852754;
	Var0.f_3 = get_hash_key("vDragInPos");
	_datafile_get_vector(uParam1, &Var0);
	return true;
}

void func_807(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_292(Global_34) && is_player_teleport_active())
	{
	}
	if (func_1107(iParam0))
	{
		if (func_1516(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_324(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_807(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_807(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_324(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_324(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_324(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_324(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_324(iParam5, 129))
	{
		if (func_324(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		_set_entity_coords_and_heading_no_offset(iParam0, vParam1, fParam4, func_324(iParam5, 32), true);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_324(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_324(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_1107(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_324(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_34 && !func_324(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_808(int iParam0)
{
	if (-1829635046 == func_1517(81053684))
	{
		if (func_1518(iParam0))
		{
			return true;
		}
	}
	else if (func_1519(-525676072, iParam0) || func_560(func_1520(1742327865), -1303648999))
	{
		if (func_1518(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_809(var uParam0)
{
	return true;
}

bool func_810(int iParam0)
{
	switch (iParam0)
	{
		case 27:
		case 28:
		case 29:
			return true;
		default:
			break;
	}
	return false;
}

bool func_811(var uParam0, int iParam1)
{
	_0x1a6e84f13c952094(uParam0, iParam1, &uVar0);
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		if (does_entity_exist(&(uVar0[iVar4])))
		{
			if (is_entity_a_ped(&(uVar0[iVar4])))
			{
				if (is_ped_human(&(uVar0[iVar4])))
				{
					return true;
				}
				if (func_386(&(uVar0[iVar4])))
				{
					return true;
				}
			}
		}
		iVar4++;
	}
	return false;
}

bool func_812()
{
	iVar0 = get_frame_count();
	return (Global_1051439->f_3259 == iVar0 || Global_1051439->f_3259 == (iVar0 - 1));
}

bool func_813()
{
	if (_is_ped_carrying(Global_34))
	{
		iVar0 = _get_first_entity_ped_is_carrying(Global_34);
		if (is_entity_a_ped(iVar0))
		{
			if (is_ped_human(get_ped_index_from_entity_index(iVar0)))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_814()
{
	return func_1521() >= 11;
}

bool func_815()
{
	return func_1521() >= 15;
}

bool func_816(int iParam0)
{
	if (!func_631(iParam0))
	{
		return false;
	}
	if (is_thread_active(Global_1051439->f_72[iParam0]->f_9, false))
	{
		return true;
	}
	return false;
}

bool func_817()
{
	if (!_unlock_is_unlocked(-1624899219))
	{
		func_742(2);
		return false;
	}
	if (!func_905())
	{
		func_742(9);
		return false;
	}
	if (Global_1051439->f_72[34]->f_1 & 128 != 0)
	{
		func_742(3);
		return false;
	}
	Var0 = { func_68(0) };
	if (func_326(Var0))
	{
		iVar2 = -1;
		switch (Var0)
		{
			case 6:
				iVar3 = func_1303(player_id(), 0);
				if (iVar3 != -1)
				{
					iVar2 = func_1522(iVar3);
				}
				break;
			case 3:
			case 4:
				iVar4 = func_1334(&Var0, 0);
				if (iVar4 != -1)
				{
					if (func_1335(iVar4, 461218520, 0))
					{
						iVar2 = 46;
					}
				}
				break;
		}
		if (iVar2 != -1)
		{
			func_742(iVar2);
			return false;
		}
	}
	if (func_1221())
	{
		func_742(4);
		return false;
	}
	if (func_134(4, network_player_id_to_int()) && Global_1051439->f_72[34]->f_49 & 1073741824 == 0)
	{
		func_742(5);
		return false;
	}
	if (func_956(131072, 255))
	{
		func_742(7);
		return false;
	}
	if (func_812())
	{
		func_742(8);
		return false;
	}
	return true;
}

bool func_818(int iParam0)
{
	bVar1 = func_1523(iParam0, &uVar0);
	if (bVar1)
	{
		if (!func_831(iParam0, 128))
		{
			if (is_thread_active(Global_1051439->f_72[iParam0]->f_9, false))
			{
				return false;
			}
			if (network_is_script_active(func_829(iParam0), -1, false, 0))
			{
				return false;
			}
			iVar2 = func_108();
			if (!func_626(func_1064(iVar2, iParam0)))
			{
				return false;
			}
			if (func_828(iParam0))
			{
				if (get_number_of_free_stacks_of_this_size(6005) > 0)
				{
					Var3 = iParam0;
					if (iParam0 != 34)
					{
						Var3.f_2 = Global_1051439->f_72[iParam0]->f_24;
						Var3.f_3 = Global_1051439->f_72[iParam0]->f_25;
						Var3.f_1 = iVar2;
						Var3.f_4 = { Global_1051439->f_72[iParam0]->f_3 };
					}
					Global_1051439->f_72[iParam0]->f_9 = start_new_script_with_args(func_829(iParam0), &Var3, 7, 6005);
					set_script_as_no_longer_needed(func_829(iParam0));
					func_830(iParam0, 2);
					func_222(iParam0, 8);
					return true;
				}
			}
			else if (!func_831(iParam0, 2))
			{
				func_832(iParam0);
			}
		}
	}
	return false;
}

void func_819(int iParam0, int iParam1)
{
	Global_1051439->f_3634[iParam0]->f_1 = iParam1;
}

bool func_820(int iParam0, int iParam1)
{
	return func_548(Global_1051439->f_72[iParam0]->f_50, iParam1);
}

bool func_821()
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

int func_822(int iParam0)
{
	switch (iParam0)
	{
		case 36:
			iVar0 = func_935(func_934());
			if (iVar0 > 16 || iVar0 < 6)
			{
				return 1180906091;
			}
			else
			{
				return -752894780;
			}
			break;
		case 54:
			return -1542215752;
		case 56:
			return 533120;
		case 105:
			return -1044357807;
		case 79:
			return 1949731019;
		case 94:
			return 1057811885;
	}
	return 0;
}

bool func_823(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 81:
			return true;
		default:
			break;
	}
	return false;
	return false;
}

bool func_824(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 0:
					return true;
				case 1:
					return true;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 1:
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

int func_825(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 0:
					return 61;
				case 1:
					return -1;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 1:
					return -1;
				default:
					break;
			}
			break;
	}
	return -1;
}

int func_826(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 1:
					return 2;
				default:
					break;
			}
			break;
	}
	return -1;
}

Vector3 func_827(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = Global_1290948->f_30;
	}
	switch (iParam0)
	{
		case 0:
			return 2538.077f, -1278.417f, 50.05436f;
		case 2:
			return -348.5222f, 699.9396f, 116.6784f;
		case 1:
			return 2691.543f, -1358.018f, 47.39368f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_828(int iParam0)
{
	if (!func_631(iParam0))
	{
		return false;
	}
	sVar0 = func_829(iParam0);
	if (is_string_null_or_empty(sVar0))
	{
		return false;
	}
	if (func_831(iParam0, 2))
	{
		if (has_script_loaded(sVar0))
		{
			return true;
		}
	}
	return false;
}

char* func_829(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "shop_doctor";
		case 3:
			return "shop_general";
		case 4:
			return "shop_fence";
		case 33:
			return "shop_moonshine_still";
		case 6:
			return "shop_gunsmith";
		case 7:
			return "shop_tailor";
		case 2:
			return "shop_post_office";
		case 1:
			return "shop_train_station";
		case 25:
			return "shop_bountyhunting_mp_return";
		case 8:
			return "shop_net_barber";
		case 11:
			return "shop_dynamic";
		case 26:
			return "shop_coach";
		case 9:
			return "shop_horse_shop";
		case 10:
			return "shop_butcher";
		case 12:
			return "shop_bank";
		case 14:
			return "shop_bait";
		case 30:
			return "shop_bartender";
		case 15:
			return "shop_trapper";
		case 27:
			return "shop_wilderness_supplies";
		case 28:
			return "shop_camp_lockbox";
		case 29:
			return "shop_camp_butchertable";
		case 35:
			return "shop_honor_mp";
		case 34:
			return "shop_handheld";
		case 18:
			return "shop_photo_studio";
		case 36:
			return "shop_theater";
		case 38:
			return "shop_travelling_salesman";
		case 37:
			return "shop_moonshine_shop";
		case 39:
			return "shop_harriet";
		default:
			break;
	}
	return "";
}

void func_830(int iParam0, int iParam1)
{
	if (func_831(iParam0, iParam1))
	{
	}
	Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 - (Global_1051439->f_72[iParam0]->f_1 && iParam1));
}

bool func_831(int iParam0, int iParam1)
{
	return (Global_1051439->f_72[iParam0]->f_1 && iParam1) != 0;
}

int func_832(int iParam0)
{
	if (!func_631(iParam0))
	{
		return 0;
	}
	sVar0 = func_829(iParam0);
	if (is_string_null_or_empty(sVar0))
	{
		return 0;
	}
	if (!does_script_exist(sVar0))
	{
		return 0;
	}
	if (func_831(iParam0, 2))
	{
		return 1;
	}
	request_script(sVar0);
	func_849(iParam0, 2);
	return 1;
}

bool func_833(int iParam0, int iParam1, int iParam2)
{
	if ((((is_ped_shooting(Global_1296859->f_8) || _0x09d7afd3716da8e1(iParam2, 4000)) || Global_1956200->f_1716[14]) // PointerArith || func_760(iParam0) == 2) || func_1213(1106247680, 0))
	{
		if (func_686(&(Global_1051439->f_72[iParam1]->f_69)))
		{
			func_1367(&(Global_1051439->f_72[iParam1]->f_69));
		}
		else
		{
			func_661(&(Global_1051439->f_72[iParam1]->f_69), 0);
		}
	}
	if (!func_686(&(Global_1051439->f_72[iParam1]->f_69)) || func_734(&(Global_1051439->f_72[iParam1]->f_69)) >= 10f)
	{
		func_688(&(Global_1051439->f_72[iParam1]->f_69));
		return false;
	}
	else if (vdist2(Global_35, get_entity_coords(iParam2, true, false)) < (30f * 30f))
	{
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

bool func_834(int iParam0)
{
	if (_0x7907969497ea92f5(&(Global_1915715->f_20346[iParam0])))
	{
		if (_0x603ac35fd4602c76(&(Global_1915715->f_20346[iParam0])))
		{
			if (!func_548(&(Global_1915715->f_20387[iParam0]), 2))
			{
				func_732(Global_1915715->f_20387[iParam0], 2);
			}
			return true;
		}
	}
	return false;
}

bool func_835(int iParam0)
{
	if (!func_631(iParam0))
	{
		return true;
	}
	iVar0 = func_1524(iParam0);
	if (iVar0 == 0)
	{
		return true;
	}
	if (!_0x7907969497ea92f5(&(Global_1915715->f_20346[iParam0])))
	{
		Global_1915715->f_20346[iParam0] = _0xd97d8d905f1562f2(iVar0);
		if (!func_324(&(Global_1915715->f_20387[iParam0]), 1))
		{
			func_732(Global_1915715->f_20387[iParam0], 1);
		}
	}
	if (!_0x603ac35fd4602c76(&(Global_1915715->f_20346[iParam0])))
	{
		return false;
	}
	return true;
}

void func_836(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_837(int iParam0)
{
	if (!func_834(iParam0))
	{
		return false;
	}
	if (func_1525(iParam0))
	{
		return false;
	}
	_datafile_register_query(&(Global_1915715->f_20346[iParam0]), 297708565, "SHOP_TYPE/REGION(id=%x)");
	_datafile_register_query(&(Global_1915715->f_20346[iParam0]), -1579522939, "VOLUME(id=%x):position");
	_datafile_register_query(&(Global_1915715->f_20346[iParam0]), 216275750, "VOLUME(id=%x):rotation");
	_datafile_register_query(&(Global_1915715->f_20346[iParam0]), -1658911560, "VOLUME(id=%x):scale");
	_datafile_register_query(&(Global_1915715->f_20346[iParam0]), -738708473, "VOLUME(id=%x):name");
	_datafile_register_query(&(Global_1915715->f_20346[iParam0]), -99852754, "VECTOR(id=%x):data");
	_datafile_register_query(&(Global_1915715->f_20346[iParam0]), 1059891245, "FLOAT(id=%x):data");
	_datafile_register_query(&(Global_1915715->f_20346[iParam0]), 110382701, "INT(id=%x):data");
	_datafile_register_query(&(Global_1915715->f_20346[iParam0]), -1407851228, "HASH(id=%x):data");
	_datafile_register_query(&(Global_1915715->f_20346[iParam0]), -1793904784, "STRING(id=%x):data");
	func_732(Global_1915715->f_20387[iParam0], 4);
	return true;
}

void func_838(int iParam0)
{
}

void func_839(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

void func_840(int iParam0)
{
	if (((iParam0 == 34 || iParam0 == 28) || iParam0 == 29) || func_1417(iParam0, 16384))
	{
		Global_1051439->f_72[iParam0]->f_48 = 0;
		return;
	}
	if (!_does_volume_exist(Global_1051439->f_72[iParam0]->f_24))
	{
		Global_1051439->f_72[iParam0]->f_48 = 0;
		return;
	}
	if (func_786(Global_1051439->f_72[iParam0]->f_18, 1))
	{
		if (does_entity_exist(Global_1051439->f_72[iParam0]->f_21))
		{
			func_830(iParam0, 2048);
			func_830(iParam0, 4096);
			func_830(iParam0, 8192);
			if (!func_1417(iParam0, 65536))
			{
				if (!_0x88ad6cc10d8d35b2(Global_1051439->f_72[iParam0]->f_21))
				{
					set_entity_as_mission_entity(Global_1051439->f_72[iParam0]->f_21, true, true);
				}
				delete_entity(&(Global_1051439->f_72[iParam0]->f_21));
			}
		}
		return;
	}
	if (func_831(iParam0, 4096) || func_831(iParam0, 8192))
	{
		if (!does_entity_exist(Global_1051439->f_72[iParam0]->f_21) || is_entity_dead(Global_1051439->f_72[iParam0]->f_21))
		{
			func_830(iParam0, 4096);
			func_830(iParam0, 8192);
			Global_1051439->f_72[iParam0]->f_48 = 0;
			return;
		}
	}
	if (func_831(iParam0, 8192))
	{
		if (!Global_1051439->f_72[iParam0]->f_48)
		{
			vVar0 = { get_entity_coords(Global_1051439->f_72[iParam0]->f_21, true, false) };
			if (!_0xf256a75210c5c0eb(Global_1051439->f_72[iParam0]->f_24, vVar0))
			{
				return;
			}
			else
			{
				Global_1051439->f_72[iParam0]->f_48 = 1;
			}
		}
		func_1526(iParam0, get_ped_index_from_entity_index(Global_1051439->f_72[iParam0]->f_21));
		return;
	}
	bVar3 = _does_scenario_point_exist(Global_1051439->f_72[iParam0]->f_6);
	fVar5 = 25f;
	if (func_831(iParam0, 4096))
	{
		if (!func_1527(Global_1051439->f_72[iParam0]->f_18))
		{
			if (vdist2(func_62(), Global_1051439->f_72[iParam0]->f_3) > (fVar5 * fVar5))
			{
				return;
			}
			if (!is_interior_ready(get_interior_at_coords(Global_1051439->f_72[iParam0]->f_3)))
			{
				return;
			}
		}
		if (Global_1051439->f_72[iParam0]->f_18 != &Global_1051439->f_3745[iParam0])
		{
			return;
		}
		bVar6 = func_831(iParam0, 4194304);
		iVar4 = get_ped_index_from_entity_index(Global_1051439->f_72[iParam0]->f_21);
		if (bVar3 && !(func_1528(iParam0) && !func_1529(iParam0)))
		{
			iVar7 = get_script_task_status(iVar4, -76381094, true);
			if (((!_0x9c54041bb66bcf9e(iVar4, Global_1051439->f_72[iParam0]->f_6) && !bVar6) && !(func_846(iParam0) && func_1530())) && iVar7 != 0)
			{
				clear_ped_tasks(iVar4, 1, 0);
				_task_use_scenario_point(iVar4, Global_1051439->f_72[iParam0]->f_6, 0, 0, false, true, Global_1051439->f_72[iParam0]->f_8, false, -1f, false);
			}
			else if (_0x9c54041bb66bcf9e(iVar4, Global_1051439->f_72[iParam0]->f_6))
			{
				Global_1051439->f_72[iParam0]->f_3 = { get_entity_coords(Global_1051439->f_72[iParam0]->f_21, true, false) };
				func_849(iParam0, 8192);
			}
		}
		else
		{
			func_849(iParam0, 8192);
		}
	}
	else
	{
		if (func_1417(iParam0, 65536))
		{
			if (does_entity_exist(&(Global_1051439->f_3266[Global_1051439->f_72[iParam0]->f_18])))
			{
				Global_1051439->f_72[iParam0]->f_21 = &Global_1051439->f_3266[Global_1051439->f_72[iParam0]->f_18];
				Global_1051439->f_72[iParam0]->f_20 = get_ped_index_from_entity_index(Global_1051439->f_72[iParam0]->f_21);
				Global_1051439->f_72[iParam0]->f_19 = get_entity_model(Global_1051439->f_72[iParam0]->f_21);
				Global_1051439->f_72[iParam0]->f_3 = { get_entity_coords(Global_1051439->f_72[iParam0]->f_21, true, false) };
				func_849(iParam0, 4096);
				func_849(iParam0, 8192);
			}
			else
			{
				return;
			}
		}
		else if (does_entity_exist(Global_1051439->f_3745[iParam0]->f_4))
		{
			Global_1051439->f_72[iParam0]->f_20 = Global_1051439->f_3745[iParam0]->f_5;
			Global_1051439->f_72[iParam0]->f_21 = Global_1051439->f_3745[iParam0]->f_4;
			if (!_0x88ad6cc10d8d35b2(Global_1051439->f_72[iParam0]->f_21))
			{
				set_entity_as_mission_entity(Global_1051439->f_72[iParam0]->f_21, true, false);
			}
		}
		else
		{
			return;
		}
		iVar4 = Global_1051439->f_72[iParam0]->f_20;
		if (!func_1234(iVar4, 0))
		{
			_0xd52df30355ea7c8e(Global_1051439->f_72[iParam0]->f_24, iVar4, 1);
		}
		_0x4a8fefc43fd8ac9b(Global_1051439->f_72[iParam0]->f_24, 1, 1);
		if (!_does_scenario_point_exist(Global_1051439->f_72[iParam0]->f_6))
		{
			iVar8 = func_1531(iParam0);
			if (iVar8 != 0)
			{
				Global_1051439->f_72[iParam0]->f_6 = iVar8;
			}
		}
		if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_27) && !func_1234(iVar4, 0))
		{
			_0xd52df30355ea7c8e(Global_1051439->f_72[iParam0]->f_27, iVar4, 1);
			_0x4a8fefc43fd8ac9b(Global_1051439->f_72[iParam0]->f_27, 0, 1);
		}
		func_849(iParam0, 4096);
		func_830(iParam0, 134217728);
		func_1455(get_ped_index_from_entity_index(Global_1051439->f_72[iParam0]->f_21));
		return;
	}
}

void func_841(int iParam0)
{
}

void func_842(int iParam0, int iParam1)
{
	func_836(&(Global_1051439->f_72[iParam0]->f_50), iParam1);
}

int func_843()
{
	return get_ped_relationship_group_hash(player_ped_id());
}

void func_844(int iParam0, int iParam1)
{
	func_732(&(Global_1051439->f_72[iParam0]->f_50), iParam1);
}

void func_845(int iParam0)
{
	iVar1 = func_1418(iParam0);
	if (iVar1 >= 15)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (func_1532(&(Global_1051439->f_72[iParam0]->f_31[iVar0])))
		{
			if (!func_1533(&(Global_1051439->f_72[iParam0]->f_31[iVar0])))
			{
				func_1534(&(Global_1051439->f_72[iParam0]->f_31[iVar0]), 0, 0, 0, 1, 0, 0, 0);
			}
		}
		iVar0++;
	}
	func_1535(iParam0, 134217728);
}

bool func_846(int iParam0)
{
	if (iParam0 == 34)
	{
		return true;
	}
	if (Global_1915715->f_20637 == 0)
	{
		return false;
	}
	if (Global_1915715->f_20241 != iParam0)
	{
		return false;
	}
	return true;
}

void func_847(int iParam0, int iParam1)
{
	if (func_1417(iParam0, 32) && !func_1417(iParam0, 64))
	{
		if (!network_is_in_tutorial_session())
		{
			func_1536();
		}
		func_222(iParam0, 64);
	}
	if (!func_1417(iParam0, 8))
	{
		func_222(iParam0, 8);
	}
}

void func_848(int iParam0)
{
	if (func_1417(iParam0, 32))
	{
		if (func_1417(iParam0, 64))
		{
			func_1537(0);
			func_1535(iParam0, 64);
		}
	}
	if (Global_1915715->f_20641)
	{
		if (func_746(iParam0) || func_747(iParam0))
		{
			_display_hud_component(1422092402);
		}
		_display_hud_component(-1347445791);
		_display_hud_component(2077578434);
		Global_1915715->f_20641 = 0;
	}
	func_1538(iParam0);
}

void func_849(int iParam0, int iParam1)
{
	if (!func_831(iParam0, iParam1))
	{
	}
	Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 || iParam1);
}

bool func_850(int iParam0)
{
	if (func_1473(iParam0))
	{
		return false;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_68(0) };
	if (func_1539(Var0) || func_1540(Var0))
	{
		return false;
	}
	if (!does_entity_exist(Global_1051439->f_72[iParam0]->f_21))
	{
		return false;
	}
	if (!get_player_target_entity(player_id(), &iVar2))
	{
		return false;
	}
	if (iVar2 != Global_1051439->f_72[iParam0]->f_21)
	{
		return false;
	}
	return true;
}

void func_851()
{
	if (func_967())
	{
		return;
	}
	sVar0 = "SHOP_UNAVAILABLE_SCHEDULE";
	iVar1 = 20;
	if (!func_1541(iVar1))
	{
		Global_1051439->f_3265 = func_552(sVar0, 10000, 0, 0, 0, 1);
		Global_1051439->f_3264 = iVar1;
	}
}

void func_852(int iParam0, bool bParam1)
{
	iVar1 = func_1418(iParam0);
	if (iVar1 >= 15)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (func_1532(&(Global_1051439->f_72[iParam0]->f_31[iVar0])))
		{
			if (!func_1542(&(Global_1051439->f_72[iParam0]->f_31[iVar0])))
			{
				if (bParam1)
				{
					door_system_set_door_state(&(Global_1051439->f_72[iParam0]->f_31[iVar0]), 1);
					_0x7f458b543006c8fe(&(Global_1051439->f_72[iParam0]->f_31[iVar0]), 12);
				}
				else
				{
					func_1534(&(Global_1051439->f_72[iParam0]->f_31[iVar0]), 1, 0, 0, 1, 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
	func_222(iParam0, 134217728);
}

bool func_853(int iParam0)
{
	return (Global_262151 && iParam0) != 0;
}

void func_854(int iParam0)
{
	Global_262151 = (&Global_262151 - (Global_262151 && iParam0));
}

int func_855(bool bParam0, bool bParam1)
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

void func_856()
{
	terminate_this_thread();
}

void func_857()
{
	Global_1960073->f_55 = -1;
}

int func_858()
{
	return Global_1960073->f_72;
}

int func_859()
{
	if (!_0x595f028698072dd9(-1) && is_orbis_version())
	{
		return 2;
	}
	else if (!_ugc_has_privilege())
	{
		return 3;
	}
	return -1;
}

void func_860(int iParam0)
{
	Global_1960073->f_55 = iParam0;
}

int func_861()
{
	return Global_1960073->f_55;
}

bool func_862(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	if (Global_1960073->f_52 != 0)
	{
		return false;
	}
	Global_1960073->f_52 = func_1543(uParam0, sParam1, sParam2, iParam3, iParam4, iParam5);
	return true;
}

int func_863()
{
	iVar0 = -1218098620;
	while (_event_manager_is_event_pending(iVar0))
	{
		if (_event_manager_peek_event(iVar0, &vVar1))
		{
			switch (vVar1.x)
			{
				case -1203660660:
					_event_manager_pop_event(iVar0);
					return vVar1.z;
				default:
					break;
			}
		}
		_event_manager_pop_event(iVar0);
	}
	return -1577439368;
}

void func_864()
{
	if (Global_1960073->f_52 == 0)
	{
	}
	else
	{
		_0x00a15b94cba4f76f(Global_1960073->f_52);
		Global_1960073->f_52 = 0;
	}
}

void func_865(int iParam0)
{
	if (func_66() != -1)
	{
		return;
	}
	iVar0 = func_1544(iParam0, &uVar2);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_355(&(uVar2[iVar1]), 1))
		{
		}
		else
		{
			func_679(&(uVar2[iVar1]), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
		iVar1++;
	}
}

bool func_866(vector3 vParam0, var uParam3, int iParam4)
{
	return (vParam0.z && iParam4) != 0;
}

void func_867(var uParam0, bool bParam1, bool bParam2)
{
	bVar2 = true;
	Var8 = { func_1028(889965687, func_1293(bParam2), 1034665895, bParam2) };
	func_1545(uParam0, bParam2);
	if (bParam1)
	{
		func_1546(uParam0, bParam2);
		func_1547(uParam0, bParam2);
		func_1548(uParam0, bParam2);
	}
	func_1549(uParam0, bParam2);
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_3334.f_26)
	{
		iVar3 = &Global_1952637->f_3334[iVar0];
		func_1550(iVar3, 0, bParam2);
		if (func_1551(iVar3))
		{
			iVar1 = func_1552(iVar3);
			if (iVar1 <= -1 || iVar1 >= 11)
			{
			}
			else
			{
				Var4 = { func_1028(iVar3, Var8, -751549960, bParam2) };
				if (func_1553(4, iVar1))
				{
					if (!func_1554(1, iVar1))
					{
						_0x100157d6d7fe32ca(&Var4, func_1337(func_1555(iVar1)));
						func_1556(1, iVar1, 6);
					}
				}
				else if (func_1554(1, iVar1))
				{
					_0x28ae29d909c8fdce(&Var4);
					func_1557(1, iVar1, 6);
				}
			}
		}
		iVar0++;
	}
	if (!bVar2)
	{
		return;
	}
	func_870(uParam0, bParam2);
}

void func_868(int iParam0, bool bParam1, bool bParam2)
{
	bVar0 = (func_265(96) || func_560(iParam0, -166674229));
	bVar1 = func_265(96);
	if (iParam0 == 491602716)
	{
		iVar2 = 0;
		while (iVar2 < 39)
		{
			if (func_560(&(Global_1952637->f_1675.f_1[iVar2]), -166674229))
			{
				bVar0 = true;
			}
			else
			{
				iVar2++;
			}
		}
	}
	if (bVar0)
	{
		if (!func_265(524288) || bParam1)
		{
			func_1558(0);
			func_1559(-2061583405, bParam2);
			func_1559(-525676072, bParam2);
			func_545(524288);
		}
	}
	else if (func_265(524288) || bParam1)
	{
		func_1558(1);
		func_1560(-2061583405, bParam2);
		func_1560(-525676072, bParam2);
		func_269(524288);
	}
	if (bVar1)
	{
		if (!func_265(4194304) || bParam1)
		{
			func_1559(-999503751, bParam2);
			func_545(4194304);
		}
	}
	else if (func_265(4194304) || bParam1)
	{
		func_1560(-999503751, bParam2);
		func_269(4194304);
	}
}

void func_869()
{
	Var3.f_9 = -1591664384;
	Var17 = -1;
	Var17.f_1 = -1;
	Var17.f_2 = -1;
	Var17.f_3 = -1;
	Var17.f_4 = -1;
	Var17.f_5 = -1;
	Var17.f_6 = -1;
	Var17.f_7 = -1;
	Var17.f_8 = -1;
	Var17.f_13 = -1;
	iVar2 = &Global_1952637->f_1675.f_1[34];
	if (func_560(iVar2, 2085922893))
	{
		Var17 = { func_1189(0, -1591664384, -1591664384, -1591664384, -999503751, 2085922893, 0) };
		if (func_1192(&Var17, &iVar0, &iVar1, 0))
		{
			if (func_559(&Var3, 0, iVar0, iVar1) && func_1561(Var3.f_4, &(Global_1952637->f_1675), -1, 0, 1))
			{
				func_1562(1);
			}
			else if (func_1563())
			{
				func_1562(0);
			}
			func_561(iVar0);
		}
		else if (func_1563())
		{
			func_1562(0);
		}
	}
	else if (func_1563())
	{
		func_1562(0);
	}
	iVar33 = func_1564(-999503751, 1);
	iVar31 = 0;
	while (iVar31 < iVar33)
	{
		iVar32 = func_1565(-999503751, iVar31, 1);
		if (func_1552(iVar32) != -1 || func_560(iVar32, -1220351246))
		{
			func_1567(iVar32, func_1566(iVar32));
		}
		iVar31++;
	}
}

void func_870(var uParam0, bool bParam1)
{
	iVar1 = *uParam0;
	func_581(-999503751, bParam1);
	if (func_1568(*uParam0, &uVar0))
	{
		func_357(iVar1, 1, bParam1);
	}
	else if (func_1039(-999503751, 1))
	{
		func_872(iVar1, 1, 1, 1, 0, bParam1);
	}
}

int func_871(int iParam0, int iParam1)
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
		case 735520874:
			return 5;
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

void func_872(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = func_362(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			if (func_560(iParam0, 1584357097))
			{
				return;
			}
			bVar1 = func_1569(iParam0, &(Global_1952637->f_3334.f_28), Global_1952637->f_3334.f_33.f_1, bParam1, bParam5);
			break;
		case 81053684:
			bVar1 = func_1569(iParam0, &(Global_1952637->f_3334.f_30), 1, bParam1, bParam5);
			break;
		case -999503751:
			bVar1 = func_1569(iParam0, &(Global_1952637->f_3334.f_27), Global_1952637->f_3334.f_33, bParam1, bParam5);
			break;
		case -525676072:
			bVar1 = func_1569(iParam0, &(Global_1952637->f_3334.f_29), Global_1952637->f_3334.f_33.f_2, bParam1, bParam5);
			break;
		case -1719060085:
			bVar1 = func_1569(iParam0, &(Global_1952637->f_3334.f_31), 1, bParam1, bParam5);
			break;
		case 119907797:
			bVar1 = func_1569(iParam0, &(Global_1952637->f_3334.f_32), 1, bParam1, bParam5);
			break;
		case 1388798186:
			bVar1 = func_1569(iParam0, &(Global_1952637->f_3334.f_33.f_7), 1, bParam1, bParam5);
			break;
		default:
			if (func_560(iParam0, 160827531))
			{
				bVar1 = func_1569(iParam0, &(Global_1952637->f_3334.f_30), 1, bParam1, bParam5);
			}
			break;
	}
	if (!bVar1)
	{
		return;
	}
	func_1570();
	if (func_499(iVar0) || (iVar0 != -999503751 && func_560(iParam0, -166674229)))
	{
		_0x766315a564594401(func_480(bParam5), iParam0, 0);
	}
	func_357(iParam0, bParam3, bParam5);
	if (bParam4)
	{
		func_1571(1, iParam0);
	}
	if (bParam2)
	{
		func_1572(0, 0);
	}
}

void func_873(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bVar0 = false;
	switch (func_362(iParam0))
	{
		case -2061583405:
			bVar0 = func_1573(iParam0, &(Global_1952637->f_3334.f_28), bParam4);
			break;
		case 81053684:
			bVar0 = func_1573(iParam0, &(Global_1952637->f_3334.f_30), bParam4);
			break;
		case -999503751:
			bVar0 = func_1573(iParam0, &(Global_1952637->f_3334.f_27), bParam4);
			if (func_560(iParam0, -166674229))
			{
				Var1.f_1 = 39;
				if (func_1574(&Var1, iParam0, &uVar120, 0, 1, 0, 0, 0, 1, 8))
				{
					iVar121 = 0;
					while (iVar121 < 39)
					{
						iVar122 = &Var1.f_1[iVar121];
						if (func_177(iVar122, 0))
						{
							func_873(iVar122, 0, 0, 0, 0);
						}
						iVar121++;
					}
				}
			}
			break;
		case -525676072:
			bVar0 = func_1573(iParam0, &(Global_1952637->f_3334.f_29), bParam4);
			break;
		case -1719060085:
			bVar0 = func_1573(iParam0, &(Global_1952637->f_3334.f_31), bParam4);
			break;
		case 119907797:
			bVar0 = func_1573(iParam0, &(Global_1952637->f_3334.f_32), bParam4);
			break;
		case 1388798186:
			bVar0 = func_1573(iParam0, &(Global_1952637->f_3334.f_33.f_7), bParam4);
			break;
		default:
			if (func_560(iParam0, 160827531))
			{
				bVar0 = func_1573(iParam0, &(Global_1952637->f_3334.f_30), bParam4);
			}
			break;
	}
	if (bParam3 && bVar0)
	{
		func_1571(0, iParam0);
	}
	if (bParam2)
	{
		func_1570();
	}
	if (bParam1)
	{
		func_1572(0, 0);
	}
}

void func_874(int iParam0)
{
	if (!func_177(iParam0, 0))
	{
		return;
	}
	if (func_560(iParam0, 314218815))
	{
		func_1575();
	}
	else if (func_560(iParam0, -1328503230))
	{
		func_1576();
	}
	else if (func_560(iParam0, -272910669))
	{
		func_1577();
	}
}

void func_875(int iParam0)
{
	if (!func_177(iParam0, 0))
	{
		return;
	}
	if (func_560(iParam0, 314218815))
	{
		func_1578();
	}
	else if (func_560(iParam0, -1328503230))
	{
		func_1579();
	}
	else if (func_560(iParam0, -272910669))
	{
		func_1580();
	}
}

void func_876(var uParam0, bool bParam1)
{
	Var7.f_9 = -1591664384;
	iVar21 = &uParam0->f_1[34];
	iVar22 = &uParam0->f_1[18];
	Var23 = { func_1028(889965687, func_1293(bParam1), 1034665895, bParam1) };
	if (func_362(iVar22) != 912453393)
	{
		iVar22 = 0;
	}
	iVar1 = *uParam0;
	Var3 = { func_1028(iVar1, Var23, -751549960, bParam1) };
	func_1581(Var3, 1, bParam1);
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1952637->f_83[iVar0]->f_9 == 0)
		{
		}
		else
		{
			iVar1 = &uParam0->f_1[iVar0];
			if (&uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0] || &uParam0->f_1[iVar0] == 0)
			{
				if (func_1582(iVar0, iVar21, iVar22))
				{
				}
				else
				{
					iVar2 = func_1583(Var23, Global_1952637->f_83[iVar0]->f_9, bParam1, -1);
					if (func_177(iVar2, 0))
					{
						Var3 = { func_1028(iVar2, Var23, Global_1952637->f_83[iVar0]->f_9, bParam1) };
						func_1584(iVar2, 0, bParam1, 0);
					}
					Jump @421; //curOff = 286
					if (func_1029(iVar1, Var23, Global_1952637->f_83[iVar0]->f_9, bParam1, 0, 0) <= 0)
					{
					}
					else
					{
						Var3 = { func_1028(iVar1, Var23, Global_1952637->f_83[iVar0]->f_9, bParam1) };
						if (!func_1585(Var3, &Var7, bParam1, 0, -1))
						{
						}
						else if (Var7.f_10)
						{
							func_1584(iVar1, uParam0->f_1[iVar0]->f_1, bParam1, 1);
						}
						else
						{
							func_1584(iVar1, uParam0->f_1[iVar0]->f_1, bParam1, 1);
						}
					}
				}
				iVar0++;
				func_1586(&uParam0->f_1[28] != &Global_1952637->f_83[28], bParam1);
			}
		}
	}
}

void func_877(var uParam0, int iParam1)
{
	Var4 = { func_1028(889965687, func_1293(1), 1034665895, 1) };
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		iVar3 = func_1587((*uParam0)[iVar0]->f_17);
		if (iVar3 == 0)
		{
		}
		else
		{
			iVar1 = uParam0[iVar0];
			if (func_1588(uParam0[iVar0]) != 0)
			{
				iVar2 = func_1583(Var4, iVar3, 0, -1);
				if (!func_177(iVar2, 0))
				{
				}
				else
				{
					func_1589(iVar2, 0f, 1, 0);
					Jump @164; //curOff = 122
					if (func_1029(iVar1, Var4, iVar3, 0, 0, 0) <= 0)
					{
					}
					else
					{
						func_1589(iVar1, (*uParam0)[iVar0]->f_13, 1, 1);
					}
				}
				iVar0++;
			}
		}
	}
}

void func_878()
{
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_3334.f_26)
	{
		iVar2 = &Global_1952637->f_3334[iVar0];
		if (func_362(iVar2) == -999503751)
		{
		}
		else
		{
			if (!Global_1952637->f_3334.f_33.f_8.f_1[iVar1]->f_3 || &Global_1952637->f_3334.f_33.f_8.f_1[iVar1] != &Global_1952637->f_3334[iVar0])
			{
				func_1590(Global_1952637->f_3334.f_33.f_8.f_1[iVar1], &(Global_1952637->f_3334[iVar0]), -1, 1, 0);
			}
			iVar1++;
		}
		iVar0++;
	}
	Global_1952637->f_3334.f_33.f_8 = iVar1;
}

bool func_879()
{
	iVar0 = &Global_1952637->f_595[8];
	iVar0 = (&Global_1952637->f_595[10] + iVar0);
	iVar0 = (&Global_1952637->f_595[1] + iVar0);
	iVar0 = (&Global_1952637->f_595[2] + iVar0);
	iVar0 = (&Global_1952637->f_595[5] + iVar0);
	iVar0 = (&Global_1952637->f_595[25] + iVar0);
	iVar0 = (&Global_1952637->f_595[23] + iVar0);
	iVar0 = (&Global_1952637->f_595[18] + iVar0);
	iVar0 = (&Global_1952637->f_595[19] + iVar0);
	return iVar0 > 0;
}

void func_880()
{
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_3334.f_33.f_8)
	{
		func_1591(Global_1952637->f_3334.f_33.f_8.f_1[iVar0]);
		iVar0++;
	}
}

void func_881(int iParam0)
{
	if ((&Global_1952637->f_595[iParam0] - 1) >= 0)
	{
		Global_1952637->f_595[iParam0] = (&Global_1952637->f_595[iParam0] - 1);
	}
}

bool func_882(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
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
		case 20:
		case 21:
		case 22:
		case 23:
			return !func_641();
	}
	return true;
}

bool func_883(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		*iParam1 = 2;
		return true;
	}
	if (!_0xa0bc8faed8cfeb3c(iParam0))
	{
		*iParam1 = 1;
		return false;
	}
	*iParam1 = 0;
	return true;
}

bool func_884(int iParam0, int iParam1)
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

void func_885(var uParam0)
{
	if (!_is_ped_texture_valid(*uParam0))
	{
		return;
	}
	if (func_1592(uParam0, 2))
	{
		return;
	}
	_update_ped_texture(*uParam0);
	_reset_ped_texture(*uParam0);
	func_1593(uParam0, 2);
}

bool func_886(var uParam0, var uParam1)
{
	if (uParam0->f_1 == 0)
	{
		return true;
	}
	if (func_1592(uParam0, 1))
	{
		if (!func_1592(uParam0, 4))
		{
			_set_ped_overlay_textures(*uParam0, 0, uParam0->f_2, uParam0->f_3, uParam0->f_4);
			func_1593(uParam0, 4);
		}
	}
	else if (!func_1592(uParam0, 4))
	{
		*uParam0 = _create_ped_texture(uParam0->f_2, uParam0->f_3, uParam0->f_4);
		func_1593(uParam0, 4);
	}
	if (!_is_ped_texture_valid(*uParam0))
	{
		return false;
	}
	if (uParam0->f_7 < uParam0->f_6)
	{
		func_1594(uParam0, uParam1, uParam0->f_7);
		uParam0->f_7++;
		return false;
	}
	func_1593(uParam0, 32);
	func_1593(uParam0, 1);
	return true;
}

bool func_887(int iParam0, var uParam1)
{
	if (!network_get_entity_is_networked(iParam0))
	{
		return true;
	}
	if (!_is_ped_texture_valid(*uParam1))
	{
		return false;
	}
	if (!func_1592(uParam1, 2))
	{
		_update_ped_texture(*uParam1);
	}
	_override_texture_on_ped(iParam0, uParam1->f_5, *uParam1);
	return true;
}

void func_888(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	Global_1952637->f_925 = 0;
	if (iParam3 == -1 && bParam6)
	{
		_0x0bfa1bd465cdfefd(iParam1);
		if (bParam7)
		{
			func_891(iParam1, &(Global_1952637->f_4), Global_1952637->f_3481, Global_1956200->f_1431.f_106);
		}
	}
	else
	{
		bParam6 = false;
	}
	if ((func_265(32768) && func_1595(1108822547, 8)) && func_1596(10, iParam3))
	{
		func_1597(iParam1, 0, 1, 0);
	}
	iVar1 = 0;
	while (iVar1 < Global_1952637->f_592)
	{
		iVar2 = &Global_1952637->f_552[iVar1];
		iVar0 = func_871(iVar2, 1);
		if (func_1595(iVar2, 8))
		{
		}
		else if (Global_1952637->f_83[iVar0]->f_1 <= 0 || &Global_1952637->f_83[iVar0]->f_3[0] == -1802376732)
		{
		}
		else if (&uParam0->f_1[iVar0] == 0)
		{
		}
		else if (!func_1596(iVar0, iParam3))
		{
		}
		else if ((func_1595(iVar2, 6) || &uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0]) || uParam0->f_1[iVar0]->f_1 == 289238755)
		{
			if (!func_1595(iVar2, 1) || bParam2)
			{
				Global_1952637->f_925++;
				if (!bParam6)
				{
					func_892(iParam1, iVar0, 1);
				}
				if (uParam0->f_1[iVar0]->f_1 == 289238755)
				{
					Global_1952637->f_2764[iVar0]->f_1 = 289238755;
				}
				func_1598(iVar2, 1, 6);
			}
		}
		else
		{
			if (!bParam6)
			{
				if ((!bParam2 && &uParam0->f_1[iVar0] == &Global_1952637->f_2764[iVar0]) && uParam0->f_1[iVar0]->f_1 == Global_1952637->f_2764[iVar0]->f_1)
				{
				}
				else
				{
					func_892(iParam1, iVar0, 1);
					Global_1952637->f_2764[iVar0] = &uParam0->f_1[iVar0];
					Global_1952637->f_2764[iVar0]->f_1 = uParam0->f_1[iVar0]->f_1;
					if (func_1595(iVar2, 1))
					{
						func_1030(iVar2, 1, 6);
					}
					Global_1952637->f_925++;
					func_1599(uParam0->f_1[iVar0], iParam1);
				}
				iVar1++;
				if (Global_1952637->f_925 <= 0)
				{
					return;
				}
				if (bParam4)
				{
					_0xaab86462966168ce(iParam1, true);
					_update_ped_variation(iParam1, false, true, true, true, bParam5);
				}
			}
		}
	}
}

void func_889()
{
}

void func_890(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_2897)
	{
		iVar1 = func_1600(&(Global_1952637->f_2897.f_2[iVar0]), 1);
		if (bParam5)
		{
			func_1601(Global_1952637->f_2897.f_2[iVar0], 2, 6);
		}
		func_1601(Global_1952637->f_2897.f_2[iVar0], 1, 6);
		if (iVar1 == -358215195)
		{
		}
		else if (func_1595(iVar1, 8))
		{
		}
		else if (&Global_1952637->f_83[&Global_1952637->f_2897.f_2[iVar0]]->f_3[0] == -1802376732 || &uParam0->f_1[&Global_1952637->f_2897.f_2[iVar0]] == 0)
		{
		}
		else
		{
			if (func_265(32768) && iVar1 == 1108822547)
			{
				func_1597(iParam1, 0, 1, &uParam0->f_1[&Global_1952637->f_2897.f_2[iVar0]] != &Global_1952637->f_83[&Global_1952637->f_2897.f_2[iVar0]]);
			}
			if ((func_1595(iVar1, 6) || &uParam0->f_1[&Global_1952637->f_2897.f_2[iVar0]] == &Global_1952637->f_83[&Global_1952637->f_2897.f_2[iVar0]]) || uParam0->f_1[&Global_1952637->f_2897.f_2[iVar0]]->f_1 == 289238755)
			{
				if (!func_1595(iVar1, 1) || bParam2)
				{
					Global_1952637->f_925++;
					func_892(iParam1, &(Global_1952637->f_2897.f_2[iVar0]), 1);
					if (uParam0->f_1[&Global_1952637->f_2897.f_2[iVar0]]->f_1 == 289238755)
					{
						Global_1952637->f_2764[&Global_1952637->f_2897.f_2[iVar0]]->f_1 = 289238755;
					}
					if (iVar1 == -1197751823)
					{
						func_1598(iVar1, 64, 6);
					}
					func_1598(iVar1, 1, 6);
				}
			}
			else if ((!bParam2 && &uParam0->f_1[&Global_1952637->f_2897.f_2[iVar0]] == &Global_1952637->f_2764[&Global_1952637->f_2897.f_2[iVar0]]) && uParam0->f_1[&Global_1952637->f_2897.f_2[iVar0]]->f_1 == Global_1952637->f_2764[&Global_1952637->f_2897.f_2[iVar0]]->f_1)
			{
			}
			else
			{
				Global_1952637->f_2764[&Global_1952637->f_2897.f_2[iVar0]] = &uParam0->f_1[&Global_1952637->f_2897.f_2[iVar0]];
				Global_1952637->f_2764[&Global_1952637->f_2897.f_2[iVar0]]->f_1 = uParam0->f_1[&Global_1952637->f_2897.f_2[iVar0]]->f_1;
				if (func_1595(iVar1, 1))
				{
					func_1030(iVar1, 1, 6);
				}
				if (iVar1 == -1197751823)
				{
					func_1598(iVar1, 128, 6);
				}
				func_892(iParam1, &(Global_1952637->f_2897.f_2[iVar0]), 1);
				Global_1952637->f_925++;
				func_1599(uParam0->f_1[&Global_1952637->f_2897.f_2[iVar0]], iParam1);
			}
		}
		iVar0++;
	}
	func_1602(uParam0, iParam1);
	if (bParam3)
	{
		_0xaab86462966168ce(iParam1, true);
		_update_ped_variation(iParam1, false, true, true, true, bParam4);
	}
	if (bParam5 || bParam6)
	{
		func_1603(&(Global_1952637->f_2897));
	}
}

void func_891(int iParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		_set_ped_face_feature(iParam0, &(Global_1952637->f_4[iVar0]), (*uParam1)[iVar0]->f_1);
		iVar0++;
	}
	if (iParam2 != 0)
	{
		_set_ped_body_component(iParam0, iParam2);
	}
	if (iParam3 != 0)
	{
		_set_ped_body_component(iParam0, iParam3);
	}
}

void func_892(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 < Global_1952637->f_83[iParam1]->f_1)
		{
			_0xdf631e4bce1b1fc4(iParam0, &(Global_1952637->f_83[iParam1]->f_3[iVar0]), 0, 1);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1952637->f_83[iParam1]->f_1)
		{
			_set_ped_component_disabled(iParam0, &(Global_1952637->f_83[iParam1]->f_3[iVar0]), 0);
			iVar0++;
		}
	}
}

void func_893(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return;
	}
	iVar0 = func_1600(iParam2, 1);
	if (func_265(32768) && iParam2 == 10)
	{
		func_1597(iParam1, bParam3, 1, 0);
		return;
	}
	if (func_1595(iVar0, 8))
	{
		return;
	}
	if (&uParam0->f_1[iParam2] == &Global_1952637->f_2764[iParam2] && uParam0->f_1[iParam2]->f_1 == Global_1952637->f_2764[iParam2]->f_1)
	{
		return;
	}
	Global_1952637->f_2764[iParam2] = &uParam0->f_1[iParam2];
	Global_1952637->f_2764[iParam2]->f_1 = uParam0->f_1[iParam2]->f_1;
	if ((func_1595(iVar0, 6) || &uParam0->f_1[iParam2] == &Global_1952637->f_83[iParam2]) || uParam0->f_1[iParam2]->f_1 == 289238755)
	{
		if (!func_1595(iVar0, 1))
		{
			func_892(iParam1, iParam2, (iVar0 != 1108822547 || (iVar0 == 1108822547 && Global_1952637->f_3467.f_1 == 0)));
			func_1598(iVar0, 1, 6);
		}
	}
	else
	{
		if (func_1595(iVar0, 1))
		{
			func_1030(iVar0, 1, 6);
		}
		if (func_1604(uParam0->f_1[iParam2], 4))
		{
			func_892(iParam1, iParam2, 1);
			func_1605(uParam0->f_1[iParam2], 4, 6);
		}
		_set_ped_component_enabled(iParam1, &(uParam0->f_1[iParam2]), false, true, false);
		if (uParam0->f_1[iParam2]->f_1 != 0)
		{
			_0x66b957aac2eaaeab(iParam1, &(uParam0->f_1[iParam2]), uParam0->f_1[iParam2]->f_1, 0, true, 1);
		}
	}
	if (bParam3)
	{
		_0xaab86462966168ce(iParam1, true);
		_update_ped_variation(iParam1, false, true, true, true, bParam4);
	}
}

void func_894(int iParam0, bool bParam1)
{
	bVar4 = false;
	bVar5 = true;
	Global_1952637->f_925 = 0;
	Var6.f_2 = 16;
	Var6.f_2.f_1 = 39;
	Var6.f_2.f_1.f_2 = 39;
	Var6.f_2.f_1.f_2.f_2 = 39;
	Var6.f_2.f_1.f_2.f_2.f_2 = 39;
	Var6.f_2.f_1.f_2.f_2.f_2.f_2 = 39;
	Var6.f_2.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var6.f_2.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var6.f_2.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var6.f_2.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var6.f_2.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var6.f_2.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var6.f_2.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var6.f_2.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var6.f_2.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var6.f_2.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var6.f_2.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var6.f_35 = 16;
	Var6.f_35.f_1 = 39;
	Var6.f_35.f_1.f_2 = 39;
	Var6.f_35.f_1.f_2.f_2 = 39;
	Var6.f_35.f_1.f_2.f_2.f_2 = 39;
	Var6.f_35.f_1.f_2.f_2.f_2.f_2 = 39;
	Var6.f_35.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var6.f_35.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var6.f_35.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var6.f_35.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var6.f_35.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var6.f_35.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var6.f_35.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var6.f_35.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var6.f_35.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var6.f_35.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var6.f_35.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar3 = func_1600(iVar0, 1);
		bVar4 = false;
		if (func_1595(iVar3, 8))
		{
			Global_1952637->f_2685[iVar0] = 0;
			Global_1952637->f_2685[iVar0]->f_1 = 0;
		}
		else if (&Global_1952637->f_83[iVar0]->f_3[0] == -1802376732 || &Global_1952637->f_2685[iVar0] == 0)
		{
			Global_1952637->f_2685[iVar0] = 0;
			Global_1952637->f_2685[iVar0]->f_1 = 0;
		}
		else
		{
			iVar1 = &Global_1952637->f_1675.f_1[iVar0];
			Global_1952637->f_1556.f_1[iVar0] = &Global_1952637->f_2685[iVar0];
			Global_1952637->f_1556.f_1[iVar0]->f_1 = 0;
			func_1606(&Var6, iVar0, 0);
			iVar2 = &Global_1952637->f_2685[iVar0];
			if (func_1595(iVar3, 6))
			{
				Global_1952637->f_2685[iVar0] = 0;
				Global_1952637->f_2685[iVar0]->f_1 = 0;
			}
			else
			{
				func_1607(iParam0, iVar3, iVar0, bVar5, &bVar4);
				if (func_362(iVar2) == -525676072 && &Global_1952637->f_1556.f_1[iVar0] != &Global_1952637->f_83[iVar0])
				{
					func_1608(-525676072, -1, 1, 0);
				}
				*Global_1952637->f_1675.f_1[iVar0] = { *Global_1952637->f_1556.f_1[iVar0] };
				if (func_1609(iVar3, 32))
				{
					func_357(iVar1, 0, 0);
				}
				if (func_1609(iVar3, 64))
				{
					func_357(iVar2, bVar4, 0);
				}
				else
				{
					switch (func_362(iVar2))
					{
						case 81053684:
							func_1610(81053684, 0);
							func_872(iVar2, 1, 1, bVar4, 0, 0);
							break;
						default:
							if (func_560(iVar2, 160827531))
							{
								func_1610(81053684, 0);
								func_872(iVar2, 1, 1, bVar4, 0, 0);
							}
							break;
					}
				}
				Global_1952637->f_2685[iVar0] = 0;
				Global_1952637->f_2685[iVar0]->f_1 = 0;
			}
		}
		iVar0++;
	}
	if (Var6 > 0)
	{
		func_1611(&Var6, 1, 1, 1, 1);
		func_1612(&Var6);
	}
	if (Global_1952637->f_925 <= 0)
	{
		return;
	}
	_0xaab86462966168ce(iParam0, bVar5);
	_update_ped_variation(iParam0, false, true, true, true, bParam1);
}

bool func_895(int iParam0)
{
	return func_324(&Global_1293345, iParam0);
}

int func_896(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1139381->f_4779.f_1;
	}
	return (*Global_1145091)[iParam0]->f_23.f_1;
}

bool func_897(int iParam0, int iParam1, int iParam2)
{
	func_1613(14, &(Global_1952637->f_1038));
	Global_1952637->f_1038.f_1 = 0;
	if (!func_1614(&(Global_1952637->f_1038), -929624153, iParam1, iParam2))
	{
		return false;
	}
	if (!func_1614(&(Global_1952637->f_1038), -1636119814, func_1141(), 0))
	{
		return false;
	}
	vVar1.f_2 = 3;
	iVar7 = func_1615(Global_1952637->f_1038, -1990973241, 0, 0);
	uVar8 = Global_1952637->f_1038.f_1;
	iVar0 = 0;
	while (iVar0 < iVar7)
	{
		Global_1952637->f_1038.f_1 = uVar8;
		if (!func_1614(&(Global_1952637->f_1038), -1990973241, iVar0, 0))
		{
		}
		else
		{
			func_1616(Global_1952637->f_1038, -612355112, &vVar1, 0);
			vVar1.x = func_1617(vVar1.x);
			func_1616(Global_1952637->f_1038, 607361843, &(vVar1.f_1), 0);
			func_1618(Global_1952637->f_1038, -914904147, vVar1.f_2[0], 0);
			func_1618(Global_1952637->f_1038, -2114544496, vVar1.f_2[1], 0);
			func_1618(Global_1952637->f_1038, -1925926132, vVar1.f_2[2], 0);
			_0x4efc1f8ff1ad94de(iParam0, vVar1.x, vVar1.y, &(vVar1.f_2[0]), &(vVar1.f_2[1]), &(vVar1.f_2[2]));
		}
		iVar0++;
	}
	return true;
}

bool func_898(struct<2> Param0, var uParam2, var uParam3)
{
	bVar1 = false;
	switch (Global_1952637->f_593)
	{
		case 0:
			iVar2 = func_1619(Global_34, Param0.f_1, &(Global_1952637->f_2151), 1);
			if (iVar2 == 3)
			{
				return true;
			}
			else if (iVar2 == 2)
			{
				func_1620(1);
			}
			break;
		case 1:
			iVar2 = func_1621(Global_34, &(Global_1952637->f_2151));
			if (iVar2 == 3)
			{
				return true;
			}
			else if (iVar2 == 2)
			{
				func_1620(2);
			}
			break;
		case 2:
			bVar1 = func_1622();
			func_1623(1);
			func_1624(Global_34, &(Global_1952637->f_2151), 1, bVar1);
			iVar0 = func_1552(Param0.f_1);
			if ((iVar0 >= 0 && iVar0 < 11) && func_1553(4, iVar0))
			{
				func_552(_create_var_string(10, "HORSE_WHEEL_OUTFIT_SWAP_LITERAL", func_1337(func_1555(iVar0))), 10000, 0, 0, 0, 1);
			}
			else
			{
				func_552(_create_var_string(10, "HORSE_WHEEL_OUTFIT_SWAP", _create_var_string(0, Param0.f_1)), 10000, 0, 0, 0, 1);
			}
			if (!bVar1 && func_265(1))
			{
				func_269(1);
				remove_anim_dict(func_1625());
			}
			func_1620(3);
			break;
		case 3:
			func_1620(0);
			return true;
	}
	return false;
}

int func_899(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_171(14, iParam1, 0, 0, 0);
		}
		else
		{
			func_171(14, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_1626(0))
	{
	}
	func_888(&(Global_1952637->f_1675), iParam0, 1, iParam1, 1, bParam3, 1, 1);
	return 1;
}

int func_900(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!func_1627(bParam4))
	{
	}
	if (!bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_171(2, iParam1, 0, 0, 0);
		}
		else
		{
			func_171(2, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	func_888(&(Global_1952637->f_1675), iParam0, 1, iParam1, 1, bParam3, 1, 1);
	return 1;
}

void func_901(vector3 vParam0)
{
	if (Global_1139381->f_5079.f_325 >= 50)
	{
		return;
	}
	if (vParam0.x == -1)
	{
		return;
	}
	*Global_1139381->f_5079.f_326[Global_1139381->f_5079.f_324] = { vParam0 };
	Global_1139381->f_5079.f_324 = (Global_1139381->f_5079.f_324 + 1 % 50);
	Global_1139381->f_5079.f_325++;
}

void func_902(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 186;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 8, 3, &uParam1);
}

void func_903(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_904()
{
	return !Global_1572887->f_9;
}

bool func_905()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_906()
{
	return &Global_1940085 == 1;
}

bool func_907()
{
	return &Global_1940085 == 2;
}

bool func_908()
{
	if (((is_ped_in_any_vehicle(Global_34, true) || func_1307(Global_34)) || Global_1940085->f_28.f_2) || func_1629(func_1628(), 0, 0))
	{
		return false;
	}
	return true;
}

void func_909()
{
	if (!Global_1940085->f_28.f_1)
	{
		Global_1940085->f_28.f_1 = 1;
	}
}

void func_910(bool bParam0)
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
	func_1630(0f);
	if (does_entity_exist(Global_34))
	{
		set_ped_config_flag(Global_34, 26, false);
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_1631();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

void func_911()
{
	Global_1940085->f_28 = 0;
	Global_1940085->f_28.f_1 = 0;
	Global_1940085->f_28.f_2 = 0;
	Global_1940085->f_28.f_3 = 0;
	Global_1940085->f_28.f_4 = 0;
	Global_1940085->f_28.f_8 = 0;
}

void func_912(int iParam0)
{
	Global_1940085->f_28.f_8 = iParam0;
}

char* func_913()
{
	return "MECH_LOCO_M@CHARACTER@ARTHUR@DRUNK@UNARMED@STUMBLE@TRANSITION@DRUNK_STUMBLE_TO_WALK_LF";
}

bool func_914(int iParam0)
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
	fVar13 = func_1632(*vVar0[2] - *vVar0[1], *vVar0[1] - *vVar0[0]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return false;
	}
	*vVar0[0] = { get_ped_bone_coords(iParam0, 6884, 0f, 0f, 0f) };
	*vVar0[1] = { get_ped_bone_coords(iParam0, 43312, 0f, 0f, 0f) };
	*vVar0[2] = { get_ped_bone_coords(iParam0, 33646, 0f, 0f, 0f) };
	fVar13 = func_1632(*vVar0[2] - *vVar0[1], *vVar0[1] - *vVar0[0]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return false;
	}
	return true;
}

char* func_915()
{
	return "MOVE";
}

bool func_916(int iParam0, var uParam1, var uParam2)
{
	bVar0 = func_66() != -1;
	if (bVar0)
	{
		return false;
	}
	switch (iParam0)
	{
		case 4:
			*uParam1 = 871;
			*uParam2 = 872;
			break;
		case 5:
		case 6:
		case 7:
			*uParam1 = 855;
			*uParam2 = 859;
			break;
		case 9:
			*uParam1 = 860;
			*uParam2 = 861;
			break;
		case 1:
			*uParam1 = 873;
			*uParam2 = 876;
			break;
		case 15:
			*uParam1 = 882;
			*uParam2 = 882;
			break;
		case 10:
			*uParam1 = 896;
			*uParam2 = 897;
			break;
		case 11:
			*uParam1 = 901;
			*uParam2 = 901;
			break;
		case 12:
			*uParam1 = 918;
			*uParam2 = 920;
			break;
		case 0:
			*uParam1 = 921;
			*uParam2 = 921;
			break;
		case 14:
			*uParam1 = 895;
			*uParam2 = 895;
			break;
		case 13:
			*uParam1 = 869;
			*uParam2 = 870;
			break;
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *uParam2 == -1)
	{
		return false;
	}
	return true;
}

int func_917(int iParam0, bool bParam1)
{
	if (!func_959(iParam0))
	{
		return 0;
	}
	if (!func_960(iParam0, 2))
	{
		return 0;
	}
	if (func_960(iParam0, 32) && !bParam1)
	{
		func_966(iParam0, _create_persistent_character(func_961(iParam0)));
		if (func_66() == -1)
		{
			if (func_960(iParam0, 2048))
			{
				_0x49a8c2cd97815215(func_962(iParam0));
				func_964(iParam0, 2048);
			}
			_0xfcc6db8dbe709bc8(func_962(iParam0));
		}
		return 0;
	}
	if (!func_1633(iParam0) && func_66() == -1)
	{
		return 0;
	}
	if (_0x800df3fc913355f3(func_962(iParam0)))
	{
		func_964(iParam0, 128);
		return 1;
	}
	func_966(iParam0, _create_persistent_character(func_961(iParam0)));
	_0x4f81ead1de8fa19b(func_962(iParam0));
	if (func_960(iParam0, 2048))
	{
		_0x49a8c2cd97815215(func_962(iParam0));
		func_964(iParam0, 2048);
	}
	return 1;
}

bool func_918(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return is_bit_set(uParam0[iVar0], iVar1);
}

void func_919(var uParam0, var uParam1)
{
	if (func_1634(uParam0, uParam1))
	{
		uParam1->f_63 = func_1635(uParam1);
	}
}

bool func_920(var uParam0, var uParam1)
{
	uVar0 = &Global_1071686->f_23887.f_366[get_random_int_in_range(0, 15)];
	iVar1 = func_1636(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = get_random_int_in_range(0, iVar1);
		if (func_1637(uVar0, iVar2, uParam0, uParam1))
		{
			return true;
		}
	}
	return false;
}

int func_921(int iParam0)
{
	if (func_1638(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_922(int iParam0, var uParam1)
{
	if (!func_311(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist((*Global_1887339)[iParam0]->f_4))
	{
		return false;
	}
	uParam1->f_17.f_6 = { _0xf70f00013a62f866((*Global_1887339)[iParam0]->f_4) };
	if (get_ground_z_for_3d_coord(uParam1->f_17.f_6, &uVar0, false))
	{
		uParam1->f_17.f_6.f_2 = uVar0;
	}
	uParam1->f_17 = Global_1901947->f_50.f_1;
	uParam1->f_17.f_1 = Global_1901947->f_50.f_1;
	uParam1->f_17.f_2 = Global_1901947->f_50.f_1;
	vVar1 = { _0x3e2a25b2416dd67e((*Global_1887339)[iParam0]->f_4) };
	fVar4 = (((vVar1.x + vVar1.y) + vVar1.z) * 0.3333f);
	if (fVar4 < Global_1901947->f_50)
	{
		fVar4 = Global_1901947->f_50;
	}
	if (fVar4 > Global_1901947->f_50.f_1)
	{
		fVar4 = Global_1901947->f_50.f_1;
	}
	uParam1->f_17.f_3 = { 0f, 0f, 0f };
	uParam1->f_17 = fVar4;
	uParam1->f_17.f_1 = fVar4;
	uParam1->f_17.f_2 = fVar4;
	uParam1->f_17.f_9 = -432403087;
	return true;
}

void func_923(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	if (func_1639(255) == 4)
	{
		return;
	}
	if (bParam3)
	{
		if (func_628(uParam0->f_17.f_6))
		{
			return;
		}
		if (vmag(uParam0->f_17) < 1f)
		{
			uParam0->f_17 = Global_1901947->f_50.f_1;
			uParam0->f_17.f_1 = Global_1901947->f_50.f_1;
			uParam0->f_17.f_2 = Global_1901947->f_50.f_1;
		}
	}
	if (func_628(uParam1->f_6))
	{
		return;
	}
	if (uParam0->f_16)
	{
		if (vmag(uParam0->f_6) < 1f)
		{
			return;
		}
		if (vmag(uParam0->f_17) < vmag(uParam0->f_6))
		{
			uParam0->f_16 = 0;
		}
	}
	func_921(0);
	func_921(3);
	Global_1102219->f_3919 = iParam2;
	Global_1102219->f_3920 = bParam3;
	Global_1102219->f_3921 = iParam4;
	func_1640(&(Global_1102219->f_3849));
	Global_1102219->f_3849 = { *uParam0 };
	func_1641(&(Global_1102219->f_3888));
	Global_1102219->f_3888 = { *uParam1 };
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_1642(Global_1102219->f_3849, 36);
	func_1643(Global_1102219->f_3888, 36);
}

int func_924(int iParam0)
{
	if (func_1644(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_925(vector3 vParam0, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, float fParam8)
{
	vVar0 = { get_entity_coords(player_ped_id(), false, false) };
	bVar3 = bParam3;
	if (!func_1645(Global_1296859->f_17, &vVar0, &bVar3))
	{
		vVar0 = { get_entity_coords(player_ped_id(), false, false) };
		bVar3 = bParam3;
	}
	func_1646(vParam0, bParam3, vVar0, bVar3, iParam4, iParam5, iParam6, bParam7, fParam8, 1);
}

bool func_926(int iParam0, int iParam1)
{
	if (!func_406(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_263[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_21398[iParam0] && iParam1) != 0;
}

int func_927(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1647(vParam0);
	iVar1 = -1;
	if (Global_1893570[iVar0] > 0)
	{
		iVar2 = (Global_1893570[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1892753)[iVar0][iVar2];
			if (_does_volume_exist((*Global_1887339)[iVar4]->f_4))
			{
				if (_0xf256a75210c5c0eb((*Global_1887339)[iVar4]->f_4, vParam0))
				{
					switch ((*Global_1887339)[iVar4]->f_21)
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

bool func_928(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 39) && !func_1148())
	{
		return true;
	}
	if (iParam0 == 66)
	{
		return true;
	}
	return false;
}

bool func_929()
{
	if (Global_13)
	{
		return false;
	}
	if (!func_1648())
	{
		return false;
	}
	if (_databinding_read_data_bool(Global_1939161->f_75.f_55))
	{
		return false;
	}
	if (func_322(-1 ^ 9, 0, 1))
	{
		return false;
	}
	return true;
}

char* func_930(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, var uParam6)
{
	if (!is_string_null_or_empty(&(Global_1893587->f_162)))
	{
		sVar0 = func_1649(Global_1893587->f_162);
	}
	if (is_string_null_or_empty(sVar0) && bParam4)
	{
		sVar0 = func_1651(func_1650(Global_35));
	}
	if (is_string_null_or_empty(sVar0))
	{
		if (!func_1652(iParam0) || func_945(44))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 30:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 31:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 32:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 33:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 127:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 128:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 131:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 130:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 132:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 35:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 36:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 37:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 38:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 120:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 122:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 121:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 39:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 40:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 41:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 53:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 44:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 45:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 43:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 47:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 51:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 58:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 60:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 52:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 62:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 64:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 65:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 66:
					sVar0 = "TOWN_MANICATO";
					break;
				case 135:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 136:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 67:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 69:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 70:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 71:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 72:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 73:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 74:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 75:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 77:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 79:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 80:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 81:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 82:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 83:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 84:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 87:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 85:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 86:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 88:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 91:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 92:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 93:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 94:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 98:
					sVar0 = "TOWN_VANHORN";
					break;
				case 123:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 124:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 125:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 99:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 100:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 101:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 102:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 104:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 105:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 106:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 108:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 110:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 111:
					sVar0 = "TOWN_RHODES";
					break;
				case 114:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 116:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 117:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 118:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 139:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (is_string_null_or_empty(sVar0) || bParam5)
	{
		switch (iParam2)
		{
			case -49694339:
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*uParam6 = 1;
				break;
			case -196675805:
				sVar0 = "WATER_AURORA_BASIN";
				*uParam6 = 1;
				break;
			case -1168459546:
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*uParam6 = 1;
				break;
			case 795414694:
				sVar0 = "WATER_BARROW_LAGOON";
				*uParam6 = 1;
				break;
			case -557290573:
				sVar0 = "DISTRICT_BAYOU_NWA";
				*uParam6 = 1;
				break;
			case -1073312073:
				sVar0 = "WATER_CAIRN_LAKE";
				*uParam6 = 1;
				break;
			case -804804953:
				sVar0 = "WATER_CATTAIL_POND";
				*uParam6 = 1;
				break;
			case 370072007:
				sVar0 = "WATER_DAKOTA_RIVER";
				*uParam6 = 1;
				break;
			case 1245451421:
				sVar0 = "WATER_DEADBOOT_CREEK";
				*uParam6 = 1;
				break;
			case -105598602:
				sVar0 = "WATER_ELYSIAN_POOL";
				*uParam6 = 1;
				break;
			case -1356490953:
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*uParam6 = 1;
				break;
			case -1276586360:
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*uParam6 = 1;
				break;
			case 1755369577:
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*uParam6 = 1;
				break;
			case 1175365009:
				sVar0 = "WATER_COTORRA_SPRINGS";
				*uParam6 = 1;
				break;
			case -1369817450:
				sVar0 = "WATER_LAKE_DON_JULIO";
				*uParam6 = 1;
				break;
			case 592454541:
				sVar0 = "WATER_LAKE_ISABELLA";
				*uParam6 = 1;
				break;
			case -2040708515:
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*uParam6 = 1;
				break;
			case -1410384421:
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*uParam6 = 1;
				break;
			case -1308233316:
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case 301094150:
				sVar0 = "WATER_MATTOCK_POND";
				*uParam6 = 1;
				break;
			case -811730579:
				sVar0 = "WATER_MOONSTONE_POND";
				*uParam6 = 1;
				break;
			case -1817904483:
				sVar0 = "WATER_OCREAGHS_RUN";
				*uParam6 = 1;
				break;
			case -1300497193:
				sVar0 = "WATER_OWANJILA";
				*uParam6 = 1;
				break;
			case 2005774838:
				sVar0 = "WATER_RINGNECK_CREEK";
				*uParam6 = 1;
				break;
			case -247856387:
				sVar0 = "WATER_SEA_OF_CORONADO";
				*uParam6 = 1;
				break;
			case -823661292:
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*uParam6 = 1;
				break;
			case -218679770:
				sVar0 = "WATER_SPIDER_GORGE";
				*uParam6 = 1;
				break;
			case -1287619521:
				sVar0 = "WATER_STILLWATER_CREEK";
				*uParam6 = 1;
				break;
			case -1781130443:
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case -261541730:
				sVar0 = "WATER_WHINYARD_STRAIT";
				*uParam6 = 1;
				break;
			case -1229593481:
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*uParam6 = 1;
				break;
			case -1504425495:
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*uParam6 = 1;
				break;
		}
	}
	if (is_string_null_or_empty(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (is_string_null_or_empty(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

int func_931(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 122)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 134)
	{
		return 15;
	}
	else if (iParam0 <= 138)
	{
		return 16;
	}
	return -1;
}

int func_932(int iParam0)
{
	switch (iParam0)
	{
		case -196675805:
			return 0;
		case 795414694:
			return 0;
		case -557290573:
			return 2;
		case 650214731:
			return 1;
		case -1073312073:
			return 0;
		case 231313522:
			return 0;
		case -804804953:
			return 0;
		case 370072007:
			return 1;
		case 1245451421:
			return 1;
		case 469159176:
			return 1;
		case -105598602:
			return 0;
		case -1356490953:
			return 0;
		case -1276586360:
			return 1;
		case 1755369577:
			return 0;
		case 1175365009:
			return 0;
		case -1229593481:
			return 1;
		case -1369817450:
			return 0;
		case 592454541:
			return 0;
		case -2040708515:
			return 1;
		case -1410384421:
			return 1;
		case -1308233316:
			return 1;
		case 301094150:
			return 0;
		case -811730579:
			return 0;
		case -1817904483:
			return 0;
		case -1300497193:
			return 0;
		case 2005774838:
			return 1;
		case -1504425495:
			return 1;
		case -247856387:
			return 1;
		case -823661292:
			return 0;
		case -218679770:
			return 1;
		case -1287619521:
			return 1;
		case -1781130443:
			return 1;
		case -261541730:
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_933(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
		case 1:
			return "WATER_TYPE_RIVER";
		case 2:
			return "WATER_TYPE_SWAMP";
		default:
			break;
	}
	return "";
}

int func_934()
{
	return &Global_1902818;
}

int func_935(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_936(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

float func_937(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_938(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_1323(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_939(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar16 = _show_location_notification(&Var0, &vVar13, iParam6, iParam7);
	return uVar16;
}

bool func_940(int iParam0, var uParam1, var uParam2)
{
	bVar0 = func_66() != -1;
	if (bVar0)
	{
		return false;
	}
	switch (iParam0)
	{
		case 9:
			*uParam1 = 862;
			*uParam2 = 868;
			break;
		case 16:
			*uParam1 = 887;
			*uParam2 = 894;
			break;
		case 1:
			*uParam1 = 877;
			*uParam2 = 879;
			break;
		case 3:
			*uParam1 = 852;
			*uParam2 = 854;
			break;
		case 15:
			*uParam1 = 883;
			*uParam2 = 886;
			break;
		case 13:
			*uParam1 = 880;
			*uParam2 = 881;
			break;
		case 10:
			*uParam1 = 898;
			*uParam2 = 900;
			break;
		case 11:
			*uParam1 = 902;
			*uParam2 = 917;
			break;
		case 0:
			*uParam1 = 922;
			*uParam2 = 925;
			break;
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *uParam2 == -1)
	{
		return false;
	}
	return true;
}

bool func_941(int iParam0)
{
	switch (iParam0)
	{
		case 703:
		case 704:
		case 705:
		case 707:
			return false;
		default:
			break;
	}
	return true;
}

void func_942()
{
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_1653(iVar0))
		{
			(*Global_1900719)[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_943(int iParam0, int iParam1)
{
	if (!func_1653(iParam0))
	{
		return;
	}
	if (!func_1654(iParam1))
	{
		return;
	}
	(*Global_1900719)[iParam0] = iParam1;
}

int func_944()
{
	return Global_1939161->f_26;
}

bool func_945(int iParam0)
{
	if (!func_1655(iParam0))
	{
		return false;
	}
	return func_1656(iParam0);
}

int func_946(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 121)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 134)
	{
		return 15;
	}
	else if (iParam0 <= 138)
	{
		return 16;
	}
	return -1;
}

bool func_947(int iParam0, int iParam1)
{
	if (Global_1939161->f_26 != iParam0)
	{
		Global_1939161->f_26 = iParam0;
		iVar0 = iParam1;
		if (!func_401(iParam1))
		{
			iVar0 = func_1108(iParam0);
		}
		if (!func_401(iVar0))
		{
			iVar0 = func_297(func_63(Global_35));
		}
		if (!func_401(iVar0))
		{
			return false;
		}
		_0x4752f68eb7f2d280(player_id(), Global_1939161->f_26, func_1657(iVar0));
		return true;
	}
	return false;
}

int func_948(int iParam0, int iParam1)
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

bool func_949(int iParam0)
{
	iVar0 = func_1658(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_950(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return true;
	}
	return false;
}

void func_951(int iParam0)
{
	iVar0 = func_948(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_39.f_110[iVar1], iVar2);
	Global_1939655 = 0;
}

void func_952(int iParam0)
{
	iVar0 = func_948(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	clear_bit(Global_39.f_110[iVar1], iVar2);
	Global_1939655 = 0;
}

void func_953()
{
	func_952(-939420910);
	func_952(-1187950766);
	func_952(356365161);
	func_952(753127042);
	func_952(-2038424081);
	func_952(1884271742);
	func_952(459290420);
}

void func_954()
{
	func_952(704802028);
	func_952(588987611);
	func_952(2008888900);
	func_952(1649996811);
	func_952(227918160);
	func_952(168171957);
	func_952(1193080109);
	func_952(-491981251);
	func_952(-639037538);
	func_952(-618620429);
}

void func_955(int iParam0)
{
	if (func_1532(iParam0) && func_1659())
	{
		remove_door_from_system(iParam0);
	}
}

bool func_956(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

int func_957()
{
	return Global_1102219->f_26.f_3341;
}

bool func_958(int iParam0)
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

bool func_959(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 948);
}

bool func_960(int iParam0, int iParam1)
{
	if (func_66() != -1)
	{
		return false;
	}
	if (!func_959(iParam0))
	{
		return false;
	}
	return (Global_9892[iParam0] && iParam1) != 0;
}

int func_961(int iParam0)
{
	if (!func_959(iParam0))
	{
		return 0;
	}
	return Global_1893775[iParam0];
}

int func_962(int iParam0)
{
	if (!func_959(iParam0))
	{
		return 0;
	}
	return (*Global_1893775)[iParam0]->f_1;
}

void func_963(int iParam0, int iParam1)
{
	if (func_66() != -1)
	{
		return;
	}
	if (!func_959(iParam0))
	{
		return;
	}
	Global_9892[iParam0] = (Global_9892[iParam0] || iParam1);
}

void func_964(int iParam0, int iParam1)
{
	if (func_66() != -1)
	{
		return;
	}
	if (!func_959(iParam0))
	{
		return;
	}
	Global_9892[iParam0] = (&Global_9892[iParam0] - (Global_9892[iParam0] && iParam1));
}

void func_965(int iParam0)
{
	if (!func_959(iParam0))
	{
		return;
	}
	iVar0 = func_1660(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1893775)[iParam0]->f_2 = 0;
}

void func_966(int iParam0, int iParam1)
{
	if (!func_959(iParam0))
	{
		return;
	}
	(*Global_1893775)[iParam0]->f_1 = iParam1;
}

bool func_967()
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
	if (!func_326(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

int func_968(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_973(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_973(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
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

void func_969(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_970(int iParam0)
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

int func_971(int iParam0)
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

bool func_972(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

bool func_973(struct<2> Param0, var uParam2)
{
	if (!func_326(Param0))
	{
		return false;
	}
	func_1661(uParam2);
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

bool func_974(var uParam0, int iParam1)
{
	return (uParam0->f_58 && iParam1) != 0;
}

struct<2> func_975(int iParam0)
{
	if (!func_330(iParam0))
	{
		return func_1628();
	}
	return (*Global_1835011)[iParam0]->f_1;
}

int func_976(struct<2> Param0)
{
	if (&Global_1900806 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1900806 - 1))
	{
		if (func_1662(*(*Global_1900807)[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_977(int iParam0, int iParam1, int iParam2)
{
	if (func_223(32768))
	{
		return 0;
	}
	iVar0 = func_66();
	if (func_1663(&((*Global_1835011)[iParam0]->f_30), 512) && !func_1663(&((*Global_1835011)[iParam0]->f_30), 1024))
	{
		if (func_440())
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
		if (func_1664(iParam0, iVar0))
		{
			vVar4 = { func_1665(iParam0) };
			(*Global_1835011)[iParam0]->f_65 = _create_volume_sphere(vVar4, 0f, 0f, 0f, 19f, 19f, 19f);
			if (_does_volume_exist((*Global_1835011)[iParam0]->f_65))
			{
				(*Global_1835011)[iParam0]->f_28 = _0xa6ef0c54a3443e70(1673015813, (*Global_1835011)[iParam0]->f_65);
			}
		}
		else if (bVar3)
		{
			(*Global_1835011)[iParam0]->f_28 = _blip_add_for_coord(1673015813, func_1666(iParam0));
		}
		else
		{
			(*Global_1835011)[iParam0]->f_28 = _blip_add_for_coord(1673015813, func_1667(iParam0));
		}
		(*Global_1835011)[iParam0]->f_29 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2)
			{
				func_1668(iParam2, 4194304);
			}
			else
			{
				func_979(iParam2, 4194304);
			}
		}
		set_blip_flash_timer((*Global_1835011)[iParam0]->f_28, 71, (*Global_1835011)[iParam0]->f_3);
	}
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_28))
	{
		return 0;
	}
	func_1669(iParam0);
	if (bVar1)
	{
		set_blip_sprite((*Global_1835011)[iParam0]->f_28, (*Global_1835011)[iParam0]->f_27, true);
		if (iVar0 != -1)
		{
			_set_blip_name_from_player_string((*Global_1835011)[iParam0]->f_28, &((*Global_1835011)[iParam0]->f_42));
		}
		if (!func_1663(&((*Global_1835011)[iParam0]->f_30), 1024))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_28, 580546400);
			func_1670(&((*Global_1835011)[iParam0]->f_30), 1024);
		}
		if (func_1663(&((*Global_1835011)[iParam0]->f_30), 524288))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_28, -401963276);
		}
		if (func_1663(&((*Global_1835011)[iParam0]->f_30), 1048576))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_28, -1878373110);
			_blip_set_modifier((*Global_1835011)[iParam0]->f_28, 231194138);
		}
	}
	return 1;
}

void func_978(struct<2> Param0)
{
	if (&Global_1900806 <= 0)
	{
		return;
	}
	if (!func_326(Param0))
	{
		return;
	}
	if (func_327(Param0))
	{
		func_1671(Param0, 0, -1, 0, 0);
	}
	iVar0 = func_976(Param0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1900806 > 1)
	{
		*(*Global_1900807)[iVar1] = { *((*Global_1900807)[(&Global_1900806 - 1)]) };
		*(*Global_1900838)[iVar1] = { *((*Global_1900838)[(&Global_1900806 - 1)]) };
		func_1672((*Global_1900807)[(&Global_1900806 - 1)]);
		*((*Global_1900838)[(&Global_1900806 - 1)]) = { Var2 };
	}
	else
	{
		func_1672((*Global_1900807)[iVar1]);
		*(*Global_1900838)[iVar1] = { Var2 };
	}
	Global_1900806 = (&Global_1900806 - 1);
	if (&Global_1900806 < 0)
	{
		Global_1900806 = 0;
	}
}

void func_979(int iParam0, int iParam1)
{
	if (!func_972(iParam0))
	{
		return;
	}
	(*Global_1900838)[iParam0]->f_1 = ((*Global_1900838)[iParam0]->f_1 - ((*Global_1900838)[iParam0]->f_1 && iParam1));
}

int func_980()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

int func_981(int iParam0, bool bParam1)
{
	return func_1673(iParam0, Global_1893587->f_2, bParam1);
}

void func_982(int iParam0)
{
	if (!func_959(iParam0))
	{
		return;
	}
	Global_9892[iParam0]->f_1 = func_934();
	if (_0x800df3fc913355f3(func_962(iParam0)))
	{
		_0x0b3a99ab6713aa52(func_962(iParam0));
	}
}

bool func_983(var uParam0)
{
	switch (*uParam0)
	{
		case -2130852007:
		case -2051405571:
		case -857617219:
		case -102241052:
		case 416962030:
		case 1437412331:
		case 1746095559:
		case 1923998736:
		default:
			break;
	}
	return false;
	iVar0 = 0;
	iVar1 = get_cloud_time_as_int();
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_1139381->f_3876.f_712[iVar0]->f_1 != *uParam0)
		{
		}
		else
		{
			if (&Global_1139381->f_3876.f_712[iVar0] != 0)
			{
				iVar2 = absi((&Global_1139381->f_3876.f_712[iVar0] - iVar1));
				if (iVar2 < 5)
				{
					return true;
				}
			}
		}
		else
		{
			iVar0++;
		}
	}
	return false;
}

void func_984(int iParam0, int iParam1)
{
	if (func_66() != 0)
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (!network_is_player_active(iParam1))
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	Var0.f_6 = 0;
	_0x31010318ba9897ac(&uVar7, iParam1);
	func_1044(&Var0, uVar7);
}

void func_985(int iParam0)
{
	switch (*iParam0)
	{
		case -2130852007:
		case -2051405571:
		case -857617219:
		case -102241052:
		case 416962030:
		case 1437412331:
		case 1746095559:
		case 1923998736:
		default:
			break;
	}
	return;
	iVar0 = 0;
	iVar1 = get_cloud_time_as_int();
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_1139381->f_3876.f_712[iVar0]->f_1 != *iParam0)
		{
		}
		else
		{
			Global_1139381->f_3876.f_712[iVar0] = iVar1;
			return;
		}
		iVar0++;
	}
}

void func_986(int iParam0)
{
	if (!func_1674(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	clear_bit(Global_1904087->f_496[iVar0], iVar1);
}

void func_987(int iParam0)
{
	if (!func_1674(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	set_bit(Global_1904087->f_496[iVar0], iVar1);
}

struct<4> func_988(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (!func_1675(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var29 = { func_1676() };
		if (func_1677() && _0xb881ca836cc4b6d4(&Var29))
		{
			Var0 = { Var29 };
		}
		else if (!_0x4c543d5dfcd2dafd(&Var29, &Var0))
		{
			func_1678(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_1004(player_id());
	}
	bVar33 = func_290(75);
	if (bVar33)
	{
		iParam3 = 3;
	}
	iVar34 = func_1679(iParam3, 0);
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
			return func_1680();
		}
		if (!func_1681(&Var0, 0))
		{
			Var35 = { func_1682(bParam0) };
		}
		else
		{
			Var35 = { Var0 };
		}
		return Var35;
	}
	return Var0;
}

bool func_989(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	func_1683(Global_1904087);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_1684(uParam0, Global_1904087, &(Global_1904087->f_53), bParam2))
			{
				return false;
			}
			break;
		case 2:
			if (!func_1685(uParam0, Global_1904087, &(Global_1904087->f_82), bParam2))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_990(var uParam0, vector3 vParam1)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (_0x4c543d5dfcd2dafd(Global_17411.f_55.f_61.f_41[iVar0], uParam0))
		{
			Global_17411.f_55.f_61.f_41[iVar0]->f_51 = { vParam1 };
			return;
		}
		iVar0++;
	}
	if (!func_1686(uParam0))
	{
		return;
	}
	Global_17411.f_55.f_61.f_41[iVar0]->f_51 = { vParam1 };
}

Vector3 func_991(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (_0x4c543d5dfcd2dafd(Global_17411.f_55.f_61.f_41[iVar0], uParam0))
		{
			return Global_17411.f_55.f_61.f_41[iVar0]->f_51;
		}
		iVar0++;
	}
	if (!func_1686(uParam0))
	{
	}
	return 0f, 0f, 0f;
}

void func_992(int iParam0, var uParam1, int iParam2, float fParam3)
{
	if (func_535(iParam0) >= 4)
	{
		return;
	}
	if (func_1687(uParam1, iParam2))
	{
		return;
	}
	if (func_1688(iParam0, iParam2))
	{
		return;
	}
	if (fParam3 <= 0f)
	{
		bVar1 = func_1689(uParam1, iParam2) == 0f;
		fVar0 = func_1690(iParam2, bVar1);
	}
	else
	{
		fVar0 = fParam3;
	}
	if (fVar0 == 0f)
	{
		return;
	}
	fVar2 = (fVar0 * Global_1146212->f_2169[61]->f_201);
	fVar0 = (fVar0 + fVar2);
	fVar3 = func_1691(fVar0);
	Global_1291734->f_1403.f_3 = (Global_1291734->f_1403.f_3 + fVar3);
	fVar0 = to_float(floor(fVar0));
	if (Global_1291734->f_1403.f_3 >= 1f)
	{
		fVar4 = to_float(floor(Global_1291734->f_1403.f_3));
		Global_1291734->f_1403.f_3 = (Global_1291734->f_1403.f_3 - fVar4);
		fVar0 = (fVar0 + fVar4);
	}
	switch (iParam2)
	{
		case 0:
			if (func_1019(iParam0, 0))
			{
				fVar0 = (fVar0 * 0.5f);
			}
			Global_1291734->f_1403.f_11 = (Global_1291734->f_1403.f_11 + fVar0);
			break;
		case 1:
		case 2:
			Global_1291734->f_1403.f_11 = (Global_1291734->f_1403.f_11 + fVar0);
			break;
		case 3:
			Global_1291734->f_1403.f_13 = (Global_1291734->f_1403.f_13 + fVar0);
			break;
		default:
			func_1692(iParam2, fVar0);
			break;
	}
	func_1693(iParam0, fVar0);
	func_1694(uParam1, iParam2, fVar0);
	Global_1291734->f_1403.f_2 = (Global_1291734->f_1403.f_2 + fVar0);
}

float func_993(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	if (is_entity_dead(iParam0))
	{
		return 0f;
	}
	if (is_ped_injured(iParam0))
	{
		return 0f;
	}
	if (is_ped_in_writhe(iParam0))
	{
		return 0f;
	}
	uVar0 = _0x42688e94e96fd9b4(iParam0, 3, 0);
	return uVar0;
}

bool func_994(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_1695(iParam0, &Var0);
}

void func_995(int iParam0)
{
	iVar0 = func_535(iParam0);
	if (iVar0 < 2)
	{
		return;
	}
	iVar1 = Global_1296859->f_20;
	bVar2 = false;
	if (Global_1291734->f_1403.f_8 + 15000 > iVar1)
	{
		bVar2 = true;
	}
	if (!bVar2)
	{
		if (_get_ped_stamina(iParam0) == _get_ped_max_stamina(iParam0))
		{
			return;
		}
		switch (iVar0)
		{
			case 2:
				fVar3 = 2.5f;
				break;
			case 3:
				fVar3 = 5f;
				break;
			case 4:
				fVar3 = 10f;
				break;
		}
		func_1696(iParam0, fVar3);
		Global_1291734->f_1403.f_8 = iVar1;
	}
}

bool func_996()
{
	return Global_39.f_281.f_3244;
}

int func_997()
{
	return Global_1903136->f_429.f_18;
}

int func_998(int iParam0)
{
	func_487(iParam0, &iVar0, &iVar1);
	if (!func_1083(iParam0, 65536) && !func_1083(iParam0, 32768))
	{
		if (func_1203(iVar0, iVar1))
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

void func_999(int iParam0)
{
	Global_1903136->f_429.f_18 = iParam0;
}

void func_1000(int iParam0)
{
	Global_39.f_281.f_3244 = iParam0;
}

bool func_1001(int iParam0)
{
	func_487(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1904651[iVar0];
	return is_bit_set(iVar2, iVar1);
}

void func_1002(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_1904651[iVar1];
	clear_bit(&uVar3, iVar2);
	(*Global_1904651)[iVar1] = uVar3;
}

void func_1003(int iParam0, int iParam1)
{
	if (!func_177(iParam1, 0))
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (_0xf49f14462f0ae27c(player_id()) == iParam0)
	{
		Var0 = { func_988(0, 1, 0, -1) };
	}
	Var4.f_1 = 20;
	_item_database_fillout_item_effects_ids(iParam1, &Var4);
	iVar34 = 0;
	while (iVar34 < Var4)
	{
		_item_database_fillout_item_effects_id_info(&(Var4.f_1[iVar34]), &Var26);
		switch (Var26.f_1)
		{
			case 1194731729:
				iVar35 = (100 - func_1697(Var0, 1));
				if (iVar35 > 50)
				{
					iVar36 = Var26.f_2;
					func_1698(iParam0, Var0, 2, iVar36);
				}
				break;
			case 978049229:
				func_1699(iParam0, Var26.f_5);
				break;
			case -1918697215:
				iVar37 = func_1343(iParam0, 0);
				fVar38 = Var26.f_5;
				func_1700(iParam0, 0, (iVar37 + ceil(fVar38)));
				func_1698(iParam0, Var0, 1, floor(-fVar38));
				break;
			case 1136630075:
				fVar33 = func_1701(to_float(Var26.f_3), Var26.f_4);
				func_1702(iParam0, 19, fVar33, 0);
				break;
			case -778289619:
				fVar33 = func_1701(to_float(Var26.f_3), Var26.f_4);
				func_1702(iParam0, 0, fVar33, 0);
				break;
			case -1946606248:
				func_1696(iParam0, Var26.f_5);
				break;
			case 855745648:
				iVar39 = func_1343(iParam0, 1);
				fVar40 = Var26.f_5;
				func_1700(iParam0, 1, (iVar39 + ceil(fVar40)));
				break;
			case 1365603835:
				fVar33 = func_1701(to_float(Var26.f_3), Var26.f_4);
				func_1702(iParam0, 18, fVar33, 0);
				break;
			case 1497139093:
				fVar33 = func_1701(to_float(Var26.f_3), Var26.f_4);
				func_1702(iParam0, 1, fVar33, 0);
				break;
		}
		iVar34++;
	}
}

int func_1004(int iParam0)
{
	iVar0 = func_1703(iParam0);
	bVar1 = func_1629(func_1628(), 0, 0);
	if (!bVar1)
	{
		return 3;
	}
	return iVar0;
}

void func_1005(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1703(iParam0);
	iVar1 = func_1703(iParam1);
	if (iVar0 == 2 && iVar1 == 2)
	{
		return;
	}
	iVar2 = _0x5064db5083c29921(iParam2);
	if (does_entity_exist(iVar2))
	{
		return;
	}
	if (!_0x3f59fe6f37869576(iParam0, iParam1))
	{
		if (!func_1704(iParam1, iParam0) && func_1705(iParam2))
		{
			func_1023(6, iParam0, &(Global_1296859->f_154[&Global_1296859]), 0);
		}
	}
	if (!_network_is_money_balance_not_less_than(400, 0))
	{
		return;
	}
	if (!func_1706(1649473200, 1, 59806960))
	{
		return;
	}
	Global_1291734->f_11.f_305 = func_1707(1649473200, "NSTM_STABLE_KILLED_ENEMY_HORSE", 1, 1, 0, 59806960);
	func_1708(29, 400, 0);
}

bool func_1006()
{
	if (func_355(1627068364, 1) || func_355(-1795542128, 1))
	{
		return true;
	}
	return false;
}

void func_1007(int iParam0)
{
	Global_1940311->f_37 = iParam0;
}

void func_1008(int iParam0, int iParam1)
{
	if (func_66() == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			func_987(3);
			break;
		case 2:
			if (iParam0 == _0xf49f14462f0ae27c(player_id()))
			{
				if (func_1709(0))
				{
					func_994(Global_34, "HORSE_RUN_AWAY", 1017772929, iParam0, 1, 0, 0, 1);
					Var0 = { func_1710(0) };
					_0xff9052bc7a3b7d33(iParam0, -1842437844, &Var0, 0);
				}
			}
			else
			{
				iVar4 = player_ped_id();
				if (!func_1711(iParam0, iVar4))
				{
					return;
				}
				func_994(Global_34, "HORSE_RUN_AWAY", 1017772929, iParam0, 1, 0, 0, 1);
				clear_ped_tasks(iParam0, 1, 0);
				_0xff1e339ce40eaaaf(iParam0, 0);
				_task_smart_flee_style_coord(iParam0, get_entity_coords(iVar4, true, false), 6, 4718592, -1082130432, -1, 0);
			}
			break;
		case 1:
			if (iParam0 == _0xf49f14462f0ae27c(player_id()))
			{
				if (func_1712())
				{
				}
			}
			else
			{
				iVar5 = player_ped_id();
				if (!func_1711(iParam0, iVar5))
				{
					return;
				}
				clear_ped_tasks(iParam0, 1, 0);
				_0xff1e339ce40eaaaf(iParam0, 0);
				task_stand_still(iParam0, -1);
			}
			break;
	}
}

void func_1009(int iParam0)
{
	if (!get_event_data(0, iParam0, &vVar0, 10))
	{
		return;
	}
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
		return;
	}
	iVar10 = vVar0.z;
	if (!does_entity_exist(iVar10))
	{
		return;
	}
	if (!is_entity_a_ped(iVar10))
	{
		return;
	}
	iVar11 = get_ped_index_from_entity_index(iVar10);
	if (is_entity_dead(iVar11) || is_ped_injured(iVar11))
	{
		return;
	}
	func_1333(-1516555556, iVar11);
}

void func_1010(int iParam0)
{
	if (!get_event_data(0, iParam0, &vVar0, 10))
	{
		return;
	}
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
		return;
	}
	iVar10 = vVar0.z;
	if (!does_entity_exist(iVar10))
	{
		return;
	}
	if (!is_entity_a_ped(iVar10))
	{
		return;
	}
	iVar11 = get_ped_index_from_entity_index(iVar10);
	if (is_entity_dead(iVar11) || is_ped_injured(iVar11))
	{
		return;
	}
	iVar12 = func_1713();
	if (iVar12 != 0)
	{
		func_1333(iVar12, iVar11);
	}
}

bool func_1011(int iParam0)
{
	if (!func_675(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 77)
	{
		iVar1 = func_1714(iVar0, 1);
		iVar2 = iVar1;
		if (iParam0 == iVar2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1012(int iParam0)
{
	return _0xf49f14462f0ae27c(get_player_index());
}

bool func_1013(int iParam0, int iParam1, int iParam2)
{
	if (!func_177(iParam1, 0))
	{
		return false;
	}
	if (!func_1011(iParam1))
	{
		return false;
	}
	iVar0 = func_1715(iParam1);
	iVar1 = func_1716(iVar0, 1);
	if (iParam2 < 1)
	{
		return false;
	}
	if (!func_1717(iParam2, 0))
	{
		return false;
	}
	Global_1904087->f_402[iVar1] = (&Global_1904087->f_402[iVar1] + iParam2);
	return true;
}

void func_1014(int iParam0, var uParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (is_ped_injured(iParam0))
	{
		return;
	}
	iVar0 = player_id();
	if (_0xf49f14462f0ae27c(iVar0) != iParam0)
	{
		return;
	}
	iVar1 = 0;
	while (iParam2 > 0)
	{
		while (iVar1 < 3)
		{
			if (&(*Global_1291106)[iVar0]->f_15[iVar1] == 0)
			{
				(*Global_1291106)[iVar0]->f_15[iVar1] = uParam1;
				iParam2 = (iParam2 - 1);
				Jump @213; //curOff = 117
			}
			else if (iVar1 == 2)
			{
				iVar2 = 1;
				while (iVar2 <= 2)
				{
					(*Global_1291106)[iVar0]->f_15[(iVar2 - 1)] = &(*Global_1291106)[player_id()]->f_15[iVar2];
					iVar2++;
				}
				(*Global_1291106)[iVar0]->f_15[iVar1] = uParam1;
				iParam2 = (iParam2 - 1);
			}
			else
			{
				iVar1++;
			}
		}
		if (iVar1 >= 3)
		{
			iVar1 = 2;
		}
	}
}

bool func_1015(int iParam0, int iParam1, int iParam2)
{
	if (!func_177(iParam1, 0))
	{
		return false;
	}
	Var0 = { func_1718(iParam0) };
	Var5 = { func_1719(iParam0, iParam1, Var0, Var0.f_4) };
	if (_0xcb5d11f9508a928d(iParam0, &Var5, &Var0, iParam1, Var0.f_4, iParam2, 752097756))
	{
		return true;
	}
	return false;
}

bool func_1016(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_1294(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_1715(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = func_1716(iVar0, 1);
		if (iVar1 > -1)
		{
			iVar2 = &Global_1904087->f_402[iVar1];
			if (iVar2 > 0)
			{
				iVar3 = iParam2;
				if (iVar3 > iVar2)
				{
					iVar3 = iVar2;
				}
				if (!func_1720(iVar3, 0))
				{
				}
				Global_1904087->f_402[iVar1] = (&Global_1904087->f_402[iVar1] - iVar3);
				return true;
			}
		}
	}
	return false;
}

int func_1017(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return iParam2;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	iVar0 = 2;
	while (iVar0 >= 0)
	{
		if (iParam0 != _0xf49f14462f0ae27c(player_id()) || network_has_control_of_entity(iParam0))
		{
			iVar1 = _0x0ceeb6f4780b1f2f(iParam0, iVar0);
			if (iVar1 == iParam1)
			{
				_0x627f7f3a0c4c51ff(iParam0, iParam1);
				iParam2 = (iParam2 - 1);
			}
		}
		else
		{
			iVar1 = &(*Global_1291106)[player_id()]->f_15[iVar0];
			if (iVar1 == iParam1)
			{
				(*Global_1291106)[player_id()]->f_15[iVar0] = 0;
				iParam2 = (iParam2 - 1);
			}
		}
		if (iParam2 <= 0)
		{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	return iParam2;
}

int func_1018(int iParam0)
{
	if (is_entity_a_ped(iParam0))
	{
		iVar0 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_a_player(iVar0))
		{
			return network_get_player_index_from_ped(iVar0);
		}
	}
	return 255;
}

bool func_1019(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return false;
	}
	iVar0 = func_1721(iParam1);
	if (!_0x608bc6a6aacd5036(&Var1, iParam0, iVar0, 0))
	{
		return false;
	}
	iVar5 = Var1.f_3;
	if (!does_entity_exist(iVar5))
	{
		return false;
	}
	return true;
}

bool func_1020(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (bParam2)
	{
		if (func_1722(iParam0, 0) >= Global_1901947->f_716.f_40)
		{
			return true;
		}
	}
	if (bParam3)
	{
		if (!_network_is_player_index_valid(iParam1))
		{
			return false;
		}
		if (_0xfe53b1f8d43f19bf(iParam0, iParam1) == 2 || _0x862c5040f4888741(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

void func_1021(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
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
	if (func_1723(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] != 2)
	{
		if (!&Global_1296859->f_22[iVar0])
		{
			func_1724(iParam0);
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
						func_1021(iVar3, iParam1, 0, 1, 0, 0);
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
			func_1725(&Var6, uVar4);
		}
	}
}

bool func_1022(int iParam0, bool bParam1, bool bParam2)
{
	if (!Global_1139381->f_5560)
	{
		return false;
	}
	if (iParam0 == &Global_1296859->f_154[&Global_1296859])
	{
		return ((Global_17411.f_2621.f_2 == 2 || (bParam1 && Global_17411.f_2621.f_2 == 1)) || (bParam2 && Global_17411.f_2621.f_2 == 3));
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return (((*Global_1100469)[iVar0]->f_48 == 2 || (bParam1 && (*Global_1100469)[iVar0]->f_48 == 1)) || (bParam2 && (*Global_1100469)[iVar0]->f_48 == 3));
}

void func_1023(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	bVar0 = true;
	if (bParam3)
	{
		bVar0 = false;
	}
	if (func_1726(iParam1, bVar0))
	{
		return;
	}
	if (Global_1901947->f_716.f_41 < 1)
	{
		if (func_1704(&(Global_1296859->f_154[&Global_1296859]), iParam1))
		{
			if (2 == iParam0 || 3 == iParam0)
			{
				func_165(767, 0);
			}
			return;
		}
	}
	if (!func_1727(iParam0) && Global_1139381->f_5560.f_2 == iParam0)
	{
		if (Global_17411.f_2621.f_1 >= (Global_1296859->f_21 - func_1728(iParam0)))
		{
			return;
		}
	}
	if (((iParam0 == 1 && Global_1139381->f_5560.f_1 != 1) && Global_1139381->f_5560.f_1 != 0) && Global_1139381->f_5560.f_9 == Global_1296859->f_21)
	{
		return;
	}
	if (iParam0 == 1 || iParam0 == 9)
	{
		iVar1 = iParam1;
		_0x31010318ba9897ac(&uVar2, iVar1);
		Var3.f_6 = 255;
		Var3.f_4 = 4;
		Var3.f_6 = iParam1;
		Var3.f_7 = 3;
		func_1725(&Var3, uVar2);
	}
	if (iParam1 != 255)
	{
		Global_1139381->f_5560.f_3 = func_1729(iParam1, 1);
		Global_1139381->f_5560.f_4 = func_1022(iParam1, 0, 1);
		Global_1139381->f_5560.f_5 = iParam1;
	}
	else
	{
		Global_1139381->f_5560.f_3 = 0f;
		Global_1139381->f_5560.f_4 = 0;
		Global_1139381->f_5560.f_5 = 255;
	}
	Global_1139381->f_5560.f_1 = iParam0;
	Global_1139381->f_5560.f_9 = Global_1296859->f_21;
}

void func_1024(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_1730(iParam0);
	if (is_string_null_or_empty(sVar0))
	{
		return;
	}
	sVar1 = func_1731(iParam0);
	if (is_string_null_or_empty(sVar1))
	{
		return;
	}
	_play_sound_from_entity(sVar0, Global_1296859->f_8, sVar1, false, 0, 0);
}

bool func_1025(int iParam0, int iParam1)
{
	if (!func_177(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_376(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_558("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_559(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_336(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_561(iVar1);
				return true;
			}
			iVar3++;
		}
		func_561(iVar1);
	}
	return false;
}

bool func_1026(int iParam0)
{
	if (!func_177(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_362(iParam0);
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
	iVar1 = func_1588(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_1732(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_1733(iParam0);
	iVar2 = func_1732(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

struct<5> func_1027(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1293(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_178(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_1028(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_1190(bParam1) };
			if (bParam2 && func_1734(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_1735(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1735(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1736(iParam0, &Var6, 1728382685))
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
			Var0 = { func_1737(bParam1) };
			switch (func_362(iParam0))
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
			if (func_1738(iParam0, -1823706425))
			{
				Var0 = { func_1028(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1738(iParam0, -1483207246))
			{
				Var0 = { func_1028(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_1028(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_1738(iParam0, -1653629781))
			{
				Var0 = { func_1028(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_1585(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_1738(iParam0, -1653629781))
			{
				Var0 = { func_1028(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_1028(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_177(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_480(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_1029(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_177(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_479(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_1028(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_480(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_480(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

void func_1030(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_871(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_871(iParam0, 1)])->f_11 - ((Global_1952637->f_83[func_871(iParam0, 1)])->f_11 && iParam1));
}

int func_1031(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1952637->f_83[iVar0]->f_9 == iParam0)
		{
			return func_1600(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_1032(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_1739();
	if (iParam2 == 39)
	{
		Var0 = { func_1027(iParam0, 1, 0) };
		iParam2 = func_871(func_1031(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_265(32768) && iParam2 == 10)
	{
		func_1740(1108822547);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	if (func_1034(iParam0, 1))
	{
		func_1741(&(Global_1952637->f_1556), &iParam0, iParam2, bParam5);
	}
	if (bParam6)
	{
		func_1742(iParam2);
	}
	func_1743(iParam2, iVar5);
	func_1744(Global_1952637->f_1556.f_1[iParam2], 4, 6);
	func_1744(Global_1952637->f_1675.f_1[iParam2], 4, 6);
	func_1745(&(Global_1952637->f_1556), iParam0, iParam2, 1, iVar5);
	if (iParam1 == 0)
	{
		iParam1 = Global_1952637->f_1556.f_1[iParam2]->f_1;
	}
	Global_1952637->f_1556.f_1[iParam2] = iParam0;
	Global_1952637->f_1556.f_1[iParam2]->f_1 = func_1746(iParam0, iParam2, iParam1);
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1952637->f_2897)
		{
			if (&Global_1952637->f_2897.f_2[iVar6] >= 0 && &Global_1952637->f_2897.f_2[iVar6] < 39)
			{
				Global_1952637->f_2764[&Global_1952637->f_2897.f_2[iVar6]] = 0;
				Global_1952637->f_2764[&Global_1952637->f_2897.f_2[iVar6]]->f_1 = 0;
				func_1030(func_1600(&(Global_1952637->f_2897.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1033(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	func_1611(&(Global_1952637->f_2897), bParam0, bParam1, bParam2, bParam3);
}

bool func_1034(int iParam0, bool bParam1)
{
	if (!func_177(iParam0, 0))
	{
	}
	if (!bParam1 && (iParam0 == -1713496139 || iParam0 == -598283164))
	{
		return false;
	}
	if (func_560(iParam0, 265372629))
	{
		return true;
	}
	return false;
}

bool func_1035(int iParam0, int iParam1, bool bParam2)
{
	Var4 = { func_1027(iParam0, bParam2, 0) };
	if (func_1034(iParam0, 0))
	{
		iVar9 = func_1583(Var4, Var4.f_4, bParam2, -1);
		if (iVar9 != 0)
		{
			Var4 = { func_1027(iVar9, bParam2, 0) };
			Var0 = { func_1028(iVar9, Var4, Var4.f_4, bParam2) };
			return func_1581(Var0, 0, bParam2);
		}
		return true;
	}
	Var0 = { func_1028(iParam0, Var4, Var4.f_4, bParam2) };
	return func_1581(Var0, iParam1, bParam2);
}

int func_1036(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_871(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1952637->f_1675.f_1[iVar1] == &Global_1952637->f_83[iVar1] || &Global_1952637->f_1556.f_1[iVar1] == &Global_1952637->f_83[iVar1])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_1037(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_1038(int iParam0)
{
	return func_1568(iParam0, &uVar0);
}

bool func_1039(int iParam0, bool bParam1)
{
	return func_1564(iParam0, 0) < func_1747(iParam0, bParam1);
}

void func_1040(int iParam0)
{
	func_1598(iParam0, 8, 6);
}

bool func_1041(int iParam0)
{
	return is_this_model_a_train(get_entity_model(iParam0));
}

void func_1042(int iParam0)
{
	if (iParam0 != 255)
	{
		func_1748();
	}
	if (iParam0 == 255)
	{
		return;
	}
	if (!network_is_player_active(iParam0))
	{
		return;
	}
	network_handle_from_player(iParam0, &((*Global_1100469)[network_player_id_to_int()]->f_20));
	(*Global_1100469)[network_player_id_to_int()]->f_27 = get_network_time_accurate();
	(*Global_1100469)[network_player_id_to_int()]->f_28 = Global_1296859->f_21;
}

void func_1043(int iParam0)
{
	if (iParam0 == 255)
	{
		return;
	}
	if (!network_is_player_active(iParam0))
	{
		return;
	}
	network_handle_from_player(iParam0, &((*Global_1100469)[network_player_id_to_int()]->f_29));
	(*Global_1100469)[network_player_id_to_int()]->f_43 = get_network_time_accurate();
	(*Global_1100469)[network_player_id_to_int()]->f_44 = Global_1296859->f_21;
	Global_1102219->f_3665 = 0;
}

void func_1044(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 185;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 7, 6, &uParam1);
}

int func_1045(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!_0x9a100f1cf4546629(iParam0) && !_0xc346a546612c49a9(iParam0))
	{
		return 0;
	}
	iVar0 = _get_ped_damage(iParam0);
	iVar1 = _0xf8b48a361dc388ae(iParam0);
	if (iVar1 == 2)
	{
		iVar2 = 4;
	}
	else if (iVar1 == 1)
	{
		iVar2 = 3;
	}
	else
	{
		iVar3 = _get_ped_quality(iParam0);
		switch (iVar3)
		{
			case 0:
				iVar2 = 0;
				break;
			case 1:
				iVar2 = 1;
				break;
			case -1:
			case 2:
				iVar2 = 2;
				break;
		}
	}
	if (Global_17333.f_2 != 3)
	{
		iVar1 = Global_17333.f_2;
	}
	uVar4 = _0x6b89faa36fc909a3(uParam1, iParam0, iVar0, iVar2);
	return uVar4;
}

void func_1046()
{
	(*Global_1100469)[network_player_id_to_int()]->f_29 = { Var0 };
	(*Global_1100469)[network_player_id_to_int()]->f_43 = 0;
	(*Global_1100469)[network_player_id_to_int()]->f_44 = 0;
	Global_1102219->f_3665 = 0;
}

bool func_1047(int iParam0)
{
	switch (get_entity_model(iParam0))
	{
		case -2116748615:
		case -2037578922:
		case -1981561472:
		case -1910795227:
		case -1550768676:
		case -1302821723:
		case -1210546580:
		case -1182983171:
		case -1028170431:
		case -930822792:
		case -452224784:
		case -292997097:
		case -243188398:
		case 1520661:
		case 41707457:
		case 98537260:
		case 111281960:
		case 122748261:
		case 264156159:
		case 490159652:
		case 510312109:
		case 513249462:
		case 674267496:
		case 703712157:
		case 706485280:
		case 729471181:
		case 989669666:
		case 1465438313:
		case 1493541632:
		case 1502581273:
		case 1582986780:
		case 1746830155:
		case 1784941179:
		case 1860580756:
		case 1867262572:
		case 2105463796:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1048(int iParam0)
{
	return iParam0 == -1608851079;
}

bool func_1049(var uParam0)
{
	if (!decor_exist_on(uParam0->f_4, "loot_mp_mission_only"))
	{
		return false;
	}
	if (!decor_get_bool(uParam0->f_4, "loot_mp_mission_only"))
	{
		return false;
	}
	return true;
}

bool func_1050()
{
	if (_unlock_is_unlocked(765518144) && !_unlock_is_visible(765518144))
	{
		return true;
	}
	if (_unlock_is_unlocked(840529594) && !_unlock_is_visible(840529594))
	{
		return true;
	}
	if (_unlock_is_unlocked(-994383356) && !_unlock_is_visible(-994383356))
	{
		return true;
	}
	if (_unlock_is_unlocked(-233421195) && !_unlock_is_visible(-233421195))
	{
		return true;
	}
	return false;
}

int func_1051(int iParam0, int iParam1)
{
	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_1369(&Var4, 1356624740);
	return func_1371(iParam0, &Var4, &uVar0, iParam1, 0);
}

bool func_1052(int iParam0)
{
	return func_178(iParam0) == -427144552;
}

int func_1053(int iParam0)
{
	if (func_1749(iParam0))
	{
		if (get_ped_ammo_by_type(Global_34, 954660191) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (_0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_sniper(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = _get_weapon_clip_size(iParam0) * 4;
		}
		iVar1 = get_ped_ammo_by_type(Global_34, _get_ammo_type_for_weapon(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

bool func_1054(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_1062(iParam0))
	{
		return false;
	}
	if (!func_669(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_34, iParam0, iParam1, iParam2);
	return true;
}

void func_1055(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar2 = func_1750(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_34, iParam0, iVar2);
		if (get_max_ammo(Global_34, &iVar1, iParam0) && get_ammo_in_ped_weapon(Global_34, iParam0) > iVar1)
		{
			set_ped_ammo(Global_34, iParam0, iVar1);
		}
	}
}

int func_1056(int iParam0, int iParam1, int iParam2)
{
	if (!func_177(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_479(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_1751(iParam0, iParam1, iParam2);
	}
	Var1 = { func_1027(iParam0, 0, 1) };
	Var6 = { func_1028(iParam0, Var1, Var1.f_4, 0) };
	return func_1752(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

int func_1057(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_177(iParam0, 0))
	{
		return 0;
	}
	if (iParam3 == -142743235)
	{
		if (func_1753(iParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_376(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = get_ped_ammo_by_type(Global_34, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		_remove_ammo_from_ped_by_type(Global_34, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_599(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return 0;
	}
	if (!func_355(iParam0, 1))
	{
		return 0;
	}
	Var5 = { func_1393(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_153(iParam0, 0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_153(iParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_1057(iParam0, func_153(iParam0, 0, 0, 0), bParam2, iParam3);
			return 0;
		}
	}
	if (func_178(iParam0) == -427144552)
	{
		if (!func_1754(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_564(iParam0, iParam1, iParam3, bParam2, 0))
	{
		return 0;
	}
	else
	{
		Var7 = { func_1027(iParam0, 0, 0) };
		if (func_669(0) && Var7.f_4 == 1084182731)
		{
			func_522(1, 0, 0);
		}
	}
	if (iParam0 == -569063887)
	{
		Global_1940144->f_21 = 0;
	}
	if (!func_669(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_599(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

int func_1058(int iParam0, bool bParam1)
{
	if (!func_177(iParam0, 0))
	{
		return 0;
	}
	if (is_weapon_valid(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

char* func_1059(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WT_INVALID";
		case -1569615261:
			return "WT_UNARMED";
		case 416676503:
			return "WT_PISTOL";
		case -1101297303:
			return "WT_REVOLVER";
		case 970310034:
			return "WT_RIFLE";
		case -594562071:
			return "WT_ASSAULTRIFLE";
		case 860033945:
			return "WT_SHOTGUN";
		case -1212426201:
			return "WT_SNIPERRIFLE";
		default:
			return _get_weapon_name(iParam0);
	}
	return "WT_INVALID";
}

var func_1060(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_1061(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		case -1860710511:
			iVar0 = -764310200;
			break;
		case 1507636870:
			iVar0 = -764310200;
			break;
		case 1828724907:
			iVar0 = -764310200;
			break;
		case 1222378998:
			iVar0 = -764310200;
			break;
		case 2074469742:
			iVar0 = -764310200;
			break;
		case 1270940175:
			iVar0 = -764310200;
			break;
		case -1857826511:
			iVar0 = -764310200;
			break;
		case 480079517:
			iVar0 = -1504859554;
			break;
		case 840671577:
			iVar0 = -1504859554;
			break;
		case 1446246869:
			iVar0 = 1885857703;
			break;
		case -2006166057:
			iVar0 = 1885857703;
			break;
		case 1235846615:
			iVar0 = -1511427369;
			break;
		case -228768324:
			iVar0 = 2133046983;
			break;
		case -1411922943:
			iVar0 = -1511427369;
			break;
		case -834103244:
			iVar0 = -1511427369;
			break;
		case 34372170:
			iVar0 = 1151374672;
			break;
		case 963726415:
			iVar0 = -577893115;
			break;
		case 424030678:
			iVar0 = 165751297;
			break;
		case 446901936:
			iVar0 = 710736342;
			break;
		case -1092841802:
			iVar0 = -462374995;
			break;
		case -1452241321:
			iVar0 = 567069252;
			break;
		case -1188697038:
			iVar0 = -281894307;
			break;
		case 1671758975:
			iVar0 = -1127860381;
			break;
		case -893514737:
			iVar0 = -1894785522;
			break;
		case -2063089161:
			iVar0 = 469927692;
			break;
		case -452897925:
			iVar0 = 1960591597;
			break;
		default:
			break;
	}
	if (func_177(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1755(iVar0) || func_1756(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

bool func_1062(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

void func_1063(int iParam0)
{
	if (iParam0 == get_player_index())
	{
		if (func_1757(network_player_id_to_int(), 11))
		{
		}
	}
}

int func_1064(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 119;
	}
	else if (iParam1 == 27)
	{
		return 133;
	}
	else if (iParam1 == 34)
	{
		return 152;
	}
	else if (iParam1 == 28)
	{
		return 153;
	}
	else if (iParam1 == 29)
	{
		return 154;
	}
	if (iParam1 == 33)
	{
		return 20;
	}
	switch (iParam0)
	{
		case 84:
			switch (iParam1)
			{
				case 0:
					return 155;
				case 6:
					return 157;
				case 23:
					return 158;
				case 22:
					return 156;
				case 16:
					return 67;
				default:
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 12:
					return 5;
				case 30:
					return 10;
				case 25:
					return 122;
				case 26:
					return 123;
				case 3:
					return 6;
				case 8:
					return 8;
				case 10:
					return 9;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 7:
					return 19;
				case 18:
					return 12;
				default:
					break;
			}
			break;
		case 104:
			switch (iParam1)
			{
				case 0:
					return 159;
				case 6:
					return 161;
				case 23:
					return 162;
				case 22:
					return 160;
				case 16:
					return 65;
				default:
					break;
			}
			break;
		case 74:
			switch (iParam1)
			{
				case 4:
					return 22;
				case 33:
					return 21;
				case 3:
					return 23;
				case 2:
					return 24;
				case 1:
					return 25;
				case 38:
					return 140;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 0:
					return 164;
				case 6:
					return 166;
				case 23:
					return 167;
				case 22:
					return 165;
				case 16:
					return 64;
				case 38:
					return 141;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 168;
				case 6:
					return 170;
				case 23:
					return 171;
				case 22:
					return 169;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 14:
					return 26;
				case 39:
					return 151;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 12:
					return 42;
				case 8:
					return 43;
				case 30:
					return 54;
				case 25:
					return 124;
				case 10:
					return 44;
				case 26:
					return 125;
				case 0:
					return 45;
				case 4:
					return 46;
				case 33:
					return 20;
				case 3:
					return 48;
				case 6:
					return 49;
				case 9:
					return 50;
				case 2:
					return 51;
				case 1:
					return 52;
				case 7:
					return 53;
				case 15:
					return 63;
				case 18:
					return 60;
				case 36:
					return 61;
				default:
					break;
			}
			break;
		case 111:
			switch (iParam1)
			{
				case 12:
					return 29;
				case 30:
					return 36;
				case 25:
					return 126;
				case 10:
					return 30;
				case 4:
					return 31;
				case 33:
					return 32;
				case 3:
					return 33;
				case 6:
					return 34;
				case 2:
					return 35;
				case 1:
					return 39;
				default:
					break;
			}
			break;
		case 107:
			switch (iParam1)
			{
				case 9:
					return 41;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 15:
					return 3;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 27;
				case 1:
					return 28;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 172;
				case 22:
					return 173;
				case 6:
					return 174;
				case 23:
					return 175;
				case 16:
					return 66;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 25:
					return 127;
				case 30:
					return 75;
				case 10:
					return 68;
				case 3:
					return 69;
				case 17:
					return 70;
				case 9:
					return 71;
				case 2:
					return 74;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 15:
					return 4;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 12:
					return 77;
				case 8:
					return 78;
				case 30:
					return 79;
				case 25:
					return 120;
				case 10:
					return 82;
				case 26:
					return 121;
				case 0:
					return 83;
				case 3:
					return 84;
				case 6:
					return 85;
				case 9:
					return 86;
				case 2:
					return 87;
				case 1:
					return 88;
				case 17:
					return 90;
				case 36:
					return 89;
				case 38:
					return 136;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 26:
					return 128;
				case 4:
					return 93;
				case 33:
					return 92;
				case 2:
					return 98;
				case 1:
					return 97;
				case 9:
					return 96;
				default:
					break;
			}
			break;
		case 83:
			switch (iParam1)
			{
				case 25:
					return 129;
				case 6:
					return 0;
				case 2:
					return 1;
				case 1:
					return 2;
				default:
					break;
			}
			break;
		case 95:
		case 139:
			switch (iParam1)
			{
				case 15:
					return 40;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 101;
				case 1:
					return 100;
				case 3:
					return 99;
				default:
					break;
			}
			break;
		case 121:
			switch (iParam1)
			{
				case 30:
					return 105;
				case 3:
					return 102;
				case 6:
					return 103;
				case 9:
					return 107;
				case 10:
					return 104;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 3:
					return 108;
				case 2:
					return 111;
				case 1:
					return 112;
				case 35:
					return 109;
				default:
					break;
			}
			break;
		case 130:
			switch (iParam1)
			{
				case 4:
					return 116;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 2:
					return 117;
				case 1:
					return 118;
				default:
					break;
			}
			break;
		case 119:
			switch (iParam1)
			{
				case 15:
					return 76;
				default:
					break;
			}
			break;
		case 136:
			switch (iParam1)
			{
				case 4:
					return 130;
				default:
					break;
			}
			break;
		case 96:
			switch (iParam1)
			{
				case 35:
					return 113;
				default:
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 35:
					return 114;
				default:
					break;
			}
			break;
		case 126:
			switch (iParam1)
			{
				case 38:
					return 135;
				default:
					break;
			}
			break;
		case 133:
			switch (iParam1)
			{
				case 38:
					return 136;
				default:
					break;
			}
			break;
		case 137:
			switch (iParam1)
			{
				case 38:
					return 137;
				default:
					break;
			}
			break;
		case 39:
			switch (iParam1)
			{
				case 38:
					return 138;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 38:
					return 139;
				default:
					break;
			}
			break;
		case 61:
			switch (iParam1)
			{
				case 38:
					return 142;
				default:
					break;
			}
			break;
		case 100:
			switch (iParam1)
			{
				case 38:
					return 143;
				default:
					break;
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 38:
					return 144;
				default:
					break;
			}
			break;
		case 43:
			switch (iParam1)
			{
				case 38:
					return 145;
				default:
					break;
			}
			break;
		case 85:
			switch (iParam1)
			{
				case 38:
					return 146;
				default:
					break;
			}
			break;
		case 138:
			switch (iParam1)
			{
				case 39:
					return 149;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 39:
					return 150;
				default:
					break;
			}
			break;
		case 134:
			switch (iParam1)
			{
				case 15:
					return 148;
				default:
					break;
			}
			break;
	}
	if (iParam1 == 38)
	{
		return 147;
	}
	if (iParam1 == 33)
	{
		return 20;
	}
	if (iParam1 == 37)
	{
		return 134;
	}
	return -1;
}

bool func_1065(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (!func_631(iParam0))
	{
		return false;
	}
	if (!func_1613(6, &Var0))
	{
		return false;
	}
	Var0.f_2 = 465794448;
	Var0.f_3 = func_1513(iParam0);
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		iVar5 = func_202(iParam1);
		Var0.f_2 = 521381610;
		Var0.f_3 = func_1356(iVar5, 0);
		if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2042406626;
			Var0.f_3 = iParam2;
			if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
			{
				Var0.f_2 = 932018906;
				_datafile_get_hash(&uVar8, &Var0);
				uVar6 = uVar8;
				Var0.f_2 = 1247398698;
				_datafile_get_hash(&uVar9, &Var0);
				uVar7 = uVar9;
				Var0.f_2 = 2067444527;
				_datafile_get_bool(&uVar20, &Var0);
				Var0.f_2 = -2123036120;
				_datafile_get_string(&Var12, &Var0);
				Var0.f_2 = -1792709277;
				_datafile_get_hash(&uVar10, &Var0);
				uVar11 = uVar10;
				Var0.f_2 = 2125553816;
				_datafile_get_bool(&uVar21, &Var0);
				Var0.f_2 = -1037227702;
				_datafile_get_vector(&vVar22, &Var0);
				Var0.f_2 = -1373952081;
				_datafile_get_int(&uVar25, &Var0);
				*uParam3 = uVar6;
				uParam3->f_1 = uVar7;
				uParam3->f_11 = uVar20;
				uParam3->f_12 = uVar21;
				uParam3->f_13 = { vVar22 };
				uParam3->f_2 = { Var12 };
				uParam3->f_10 = uVar11;
				uParam3->f_16 = uVar25;
				return true;
			}
		}
	}
	return false;
}

int func_1066(int iParam0, int iParam1)
{
	if (iParam1 == 119)
	{
		return func_1758(iParam0);
	}
	else if (func_1759(iParam0, iParam1, &uVar0))
	{
		return 1;
	}
	return 0;
}

bool func_1067(int iParam0, char* sParam1)
{
	StringCopy(sParam1, "", 32);
	if (!func_177(iParam0, 0))
	{
		return false;
	}
	if (func_560(iParam0, -136654233))
	{
		StringCopy(sParam1, "CANNED", 32);
	}
	return !is_string_null_or_empty(sParam1);
}

bool func_1068(int iParam0, char* sParam1)
{
	StringCopy(sParam1, "", 32);
	if (!func_177(iParam0, 0))
	{
		return false;
	}
	if (func_560(iParam0, -887064662))
	{
		StringCopy(sParam1, "MEAT", 32);
	}
	else if (func_560(iParam0, -839724752))
	{
		StringCopy(sParam1, "FISH", 32);
	}
	else if (func_560(iParam0, 877714034))
	{
		StringCopy(sParam1, "VEGETABLE", 32);
	}
	else if (func_560(iParam0, -1021472396))
	{
		StringCopy(sParam1, "FRUIT", 32);
	}
	else if (func_560(iParam0, -1237028043))
	{
		StringCopy(sParam1, "DAIRY", 32);
	}
	else if (func_560(iParam0, 554195525))
	{
		StringCopy(sParam1, "CANDY", 32);
	}
	else if (func_560(iParam0, -772152977))
	{
		StringCopy(sParam1, "ITEM_CIGARETTE_CARD", 32);
	}
	else if (func_560(iParam0, 1264218912))
	{
		StringCopy(sParam1, "JERKY", 32);
	}
	else if (func_560(iParam0, -2081717885))
	{
		StringCopy(sParam1, "LETTER", 32);
	}
	return !is_string_null_or_empty(sParam1);
}

void func_1069(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*iParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		case -1202134084:
			*iParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		case 1297050066:
			*iParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		case -1780177928:
			*iParam1 = -1803237008;
			*uParam2 = -2084181920;
			break;
		case -1467836497:
			*iParam1 = -1175521284;
			*uParam2 = 1950175060;
			break;
		case 1723805622:
			*iParam1 = -1559549888;
			*uParam2 = 1950175060;
			break;
		case -153287664:
			*iParam1 = -1650796693;
			*uParam2 = 836939099;
			break;
		case 1845082736:
			*iParam1 = -1521597660;
			*uParam2 = -1411815376;
			break;
		case 406755377:
			*iParam1 = -1288829256;
			*uParam2 = 218444191;
			break;
		case 1469029564:
			*iParam1 = 1393841762;
			*uParam2 = 218444191;
			break;
		case 45760211:
			*iParam1 = -851229814;
			*uParam2 = 1654725195;
			break;
		case -276295943:
			*iParam1 = 914704115;
			*uParam2 = 1858824185;
			break;
		case -2029793397:
			*iParam1 = -219896679;
			*uParam2 = -1330115686;
			break;
		case 2120467495:
			*iParam1 = 516838334;
			*uParam2 = -1330115686;
			break;
		case -2075613923:
			*iParam1 = -385817936;
			*uParam2 = -578347576;
			break;
		case 122656217:
			*iParam1 = 1192843172;
			*uParam2 = 231465488;
			break;
		case 2107187484:
			*iParam1 = 954871696;
			*uParam2 = -1878508229;
			break;
		case -791844268:
			*iParam1 = -1217273132;
			*uParam2 = -1878508229;
			break;
		case 305770744:
			*iParam1 = -2087227528;
			*uParam2 = 314966081;
			break;
		case 550900979:
			*iParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

bool func_1070(int iParam0)
{
	return func_560(iParam0, 1279601681);
}

bool func_1071(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	return (_0x9a100f1cf4546629(iParam0) || _0xc346a546612c49a9(iParam0));
}

void func_1072(int iParam0)
{
	if (!is_entity_a_ped(iParam0))
	{
		return;
	}
	if (!is_entity_a_mission_entity(iParam0))
	{
		if (!get_ped_config_flag(get_ped_index_from_entity_index(iParam0), 467, false))
		{
			func_685(1);
		}
	}
}

bool func_1073(int iParam0)
{
	if ((((((((decor_exist_on(iParam0, "loot_empty") || decor_exist_on(iParam0, "loot_money")) || decor_exist_on(iParam0, "fLoot_money")) || decor_exist_on(iParam0, "loot_item_type1")) || decor_exist_on(iParam0, "loot_item_type2")) || decor_exist_on(iParam0, "loot_ammo1_type")) || decor_exist_on(iParam0, "loot_ammo2_type")) || decor_exist_on(iParam0, "loot_ammo3_type")) || decor_exist_on(iParam0, "loot_weapon"))
	{
		return false;
	}
	return true;
}

int func_1074(int iParam0, int iParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	iVar0 = 0;
	iVar1 = 0;
	*iParam1 = 0;
	*uParam7 = -1;
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (decor_exist_on(iParam0, "loot_empty"))
	{
		return 0;
	}
	*iParam1 = 1;
	if (decor_exist_on(iParam0, "loot_money"))
	{
		*iParam1 = decor_get_int(iParam0, "loot_money");
		decor_remove(iParam0, "loot_money");
		*uParam2 = 0;
		return 2084597891;
	}
	if (decor_exist_on(iParam0, "fLoot_money"))
	{
		*fParam3 = decor_get_float(iParam0, "fLoot_money");
		decor_remove(iParam0, "fLoot_money");
		*uParam2 = 0;
		return func_1760(*fParam3);
	}
	StringCopy(&cVar6, "loot_ammo", 16);
	iVar5 = 1;
	while (iVar5 <= 3)
	{
		Var8 = { cVar6 };
		Var10 = { cVar6 };
		StringIntConCat(&Var8, iVar5, 16);
		StringIntConCat(&Var10, iVar5, 16);
		StringConCat(&Var8, "_type", 16);
		StringConCat(&Var10, "_amt", 16);
		if (decor_exist_on(iParam0, &Var8))
		{
			iVar1 = decor_get_int(iParam0, &Var8);
			if (iVar1 != 0)
			{
				iVar0 = _get_ammo_type_for_weapon(iVar1);
				decor_remove(iParam0, &Var8);
				if (decor_exist_on(iParam0, &Var10))
				{
					*iParam1 = decor_get_int(iParam0, &Var10);
					decor_remove(iParam0, &Var10);
					*uParam2 = 2;
				}
				return iVar0;
			}
		}
		iVar5++;
	}
	if (decor_exist_on(iParam0, "loot_weapon"))
	{
		iVar1 = decor_get_int(iParam0, "loot_weapon");
		if (iVar1 != 0)
		{
			decor_remove(iParam0, "loot_weapon");
			*uParam2 = 3;
			return func_1761(iVar1);
		}
	}
	if (decor_exist_on(iParam0, "loot_item_type1"))
	{
		if (decor_exist_on(iParam0, "loot_item_amt1"))
		{
			*iParam1 = decor_get_int(iParam0, "loot_item_amt1");
			decor_remove(iParam0, "loot_item_amt1");
		}
		if (decor_exist_on(iParam0, "loot_item_bone1"))
		{
			*uParam7 = decor_get_int(iParam0, "loot_item_bone1");
			decor_remove(iParam0, "loot_item_bone1");
		}
		if (decor_exist_on(iParam0, "loot_item_model1"))
		{
			*uParam4 = decor_get_int(iParam0, "loot_item_model1");
			decor_remove(iParam0, "loot_item_model1");
		}
		if ((decor_exist_on(iParam0, "loot_item_offset1x") && decor_exist_on(iParam0, "loot_item_offset1y")) && decor_exist_on(iParam0, "loot_item_offset1z"))
		{
			fVar2 = decor_get_float(iParam0, "loot_item_offset1x");
			fVar3 = decor_get_float(iParam0, "loot_item_offset1y");
			fVar4 = decor_get_float(iParam0, "loot_item_offset1z");
			*uParam5 = { fVar2, fVar3, fVar4 };
			decor_remove(iParam0, "loot_item_offset1x");
			decor_remove(iParam0, "loot_item_offset1y");
			decor_remove(iParam0, "loot_item_offset1z");
		}
		if ((decor_exist_on(iParam0, "loot_item_orient1x") && decor_exist_on(iParam0, "loot_item_orient1y")) && decor_exist_on(iParam0, "loot_item_orient1z"))
		{
			fVar2 = decor_get_float(iParam0, "loot_item_orient1x");
			fVar3 = decor_get_float(iParam0, "loot_item_orient1y");
			fVar4 = decor_get_float(iParam0, "loot_item_orient1z");
			*uParam6 = { fVar2, fVar3, fVar4 };
			decor_remove(iParam0, "loot_item_orient1x");
			decor_remove(iParam0, "loot_item_orient1y");
			decor_remove(iParam0, "loot_item_orient1z");
		}
		iVar12 = decor_get_int(iParam0, "loot_item_type1");
		decor_remove(iParam0, "loot_item_type1");
		*uParam2 = 1;
		return iVar12;
	}
	if (decor_exist_on(iParam0, "loot_item_type2"))
	{
		if (decor_exist_on(iParam0, "loot_item_amt2"))
		{
			*iParam1 = decor_get_int(iParam0, "loot_item_amt2");
			decor_remove(iParam0, "loot_item_amt2");
		}
		if (decor_exist_on(iParam0, "loot_item_bone2"))
		{
			*uParam7 = decor_get_int(iParam0, "loot_item_bone2");
			decor_remove(iParam0, "loot_item_bone2");
		}
		if (decor_exist_on(iParam0, "loot_item_model2"))
		{
			*uParam4 = decor_get_int(iParam0, "loot_item_model2");
			decor_remove(iParam0, "loot_item_model2");
		}
		if ((decor_exist_on(iParam0, "loot_item_offset2x") && decor_exist_on(iParam0, "loot_item_offset2y")) && decor_exist_on(iParam0, "loot_item_offset2z"))
		{
			fVar2 = decor_get_float(iParam0, "loot_item_offset2x");
			fVar3 = decor_get_float(iParam0, "loot_item_offset2y");
			fVar4 = decor_get_float(iParam0, "loot_item_offset2z");
			*uParam5 = { fVar2, fVar3, fVar4 };
			decor_remove(iParam0, "loot_item_offset2x");
			decor_remove(iParam0, "loot_item_offset2y");
			decor_remove(iParam0, "loot_item_offset2z");
		}
		if ((decor_exist_on(iParam0, "loot_item_orient2x") && decor_exist_on(iParam0, "loot_item_orient2y")) && decor_exist_on(iParam0, "loot_item_orient2z"))
		{
			fVar2 = decor_get_float(iParam0, "loot_item_orient2x");
			fVar3 = decor_get_float(iParam0, "loot_item_orient2y");
			fVar4 = decor_get_float(iParam0, "loot_item_orient2z");
			*uParam6 = { fVar2, fVar3, fVar4 };
			decor_remove(iParam0, "loot_item_orient2x");
			decor_remove(iParam0, "loot_item_orient2y");
			decor_remove(iParam0, "loot_item_orient2z");
		}
		iVar13 = decor_get_int(iParam0, "loot_item_type2");
		decor_remove(iParam0, "loot_item_type2");
		*uParam2 = 1;
		return iVar13;
	}
	return 0;
}

void func_1075(int iParam0)
{
	decor_set_bool(iParam0, "got_loot", true);
}

bool func_1076(var uParam0)
{
	if (func_66() != -1)
	{
		return false;
	}
	iVar0 = 0;
	fVar1 = 1f;
	if (func_355(1811977508, 1))
	{
		fVar1 = (fVar1 + 0.1f);
	}
	if (func_355(2131771850, 1))
	{
		fVar1 = (fVar1 + 0.1f);
	}
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		if (&uParam0->f_1[iVar2] == 2084597891)
		{
			if (fVar1 > 1f)
			{
				uParam0->f_12[iVar2] = ceil((IntToFloat(&uParam0->f_12[iVar2]) * fVar1));
				iVar0 = 1;
			}
		}
		else
		{
			iVar3 = &uParam0->f_1[iVar2];
			if (func_177(iVar3, 0) && func_560(iVar3, -1921346699))
			{
				if (fVar1 > 1f)
				{
					uParam0->f_12[iVar2] = ceil((IntToFloat(&uParam0->f_12[iVar2]) * fVar1));
					iVar0 = 1;
				}
			}
		}
		iVar2++;
	}
	return iVar0;
}

bool func_1077(int iParam0)
{
	if ((does_entity_exist(iParam0) && decor_exist_on(iParam0, "loot_empty")) && decor_get_bool(iParam0, "loot_empty"))
	{
		_0x8c03cd6b5e0e85e8(iParam0, -1143637011);
		return true;
	}
	return false;
}

void func_1078(var uParam0)
{
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_12[iVar0] = 0;
		iVar0++;
	}
}

int func_1079(var uParam0, bool bParam1)
{
	if (!func_669(0))
	{
		return 0;
	}
	else if (func_670())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!&uParam0->f_1[iVar0] == 0)
		{
			iVar1 = iVar0 + 1;
			while (iVar1 <= (*uParam0 - 1))
			{
				if (&uParam0->f_1[iVar1] == &uParam0->f_1[iVar0])
				{
					uParam0->f_1[iVar1] = 0;
					uParam0->f_12[iVar0] = (uParam0->f_12[iVar1] + uParam0->f_12[iVar0]) // PointerArith;
					uParam0->f_12[iVar1] = 0;
				}
				iVar1++;
			}
			if (&uParam0->f_1[iVar0] == 2084597891)
			{
				if (func_66() == -1)
				{
					func_1762(&(uParam0->f_12[iVar0]), 0, 1065353216, 1, 0, 0, 1);
				}
				uParam0->f_1[iVar0] = 0;
				uParam0->f_12[iVar0] = 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!&uParam0->f_1[iVar0] == 0)
		{
			iVar2 = &uParam0->f_1[iVar0];
			if (!func_1052(iVar2) || (bParam1 || func_1756(iVar2)))
			{
				func_679(iVar2, &(uParam0->f_12[iVar0]), 0, 0, 0, -897553835, 0, 0, 0, 0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1080(int iParam0)
{
	switch (iParam0)
	{
		case 897798752:
			return 2017118308;
		case -968081962:
			return 1318567553;
		case 606777958:
			return 18267955;
		case 52818363:
			return 1222150012;
		case -1760647080:
			return -1884795646;
		case 216939201:
			return -360083955;
		case 1574960131:
			return -927747820;
		case -1798594118:
			return 2140180188;
		case -1178570251:
			return 117748712;
		case 1766753501:
			return 1506833252;
		case -2036270160:
			return 1578503684;
		case -1711235813:
			return -2012396119;
		case 378967106:
			return -1696453945;
		case 1864406526:
			return -1522071438;
		case -731204818:
			return -344807332;
		default:
			break;
	}
	return 0;
}

int func_1081(int iParam0)
{
	switch (iParam0)
	{
		case -2103804031:
			return -2103804031;
		case 2017118308:
			return 2017118308;
		case 1318567553:
			return 1318567553;
		case 18267955:
			return 18267955;
		case 1222150012:
			return 1222150012;
		case -1884795646:
			return -1884795646;
		case -360083955:
			return -360083955;
		case -927747820:
			return -927747820;
		case 2140180188:
			return 2140180188;
		case 117748712:
			return 117748712;
		case 1737790136:
			return 1737790136;
		case 1506833252:
			return 1506833252;
		case 1578503684:
			return 1578503684;
		case -2012396119:
			return -2012396119;
		case -1696453945:
			return -1696453945;
		case -1522071438:
			return -1522071438;
		case 781570345:
			return 781570345;
		case -344807332:
			return -344807332;
		default:
			break;
	}
	return 0;
}

bool func_1082(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_377(&iParam0);
	if (!func_177(iParam0, 0) && !func_1763(func_1262(iParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_479(iParam0, -455129387) == 0)
	{
		bParam3 = true;
	}
	if (func_1052(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		Var0 = { func_1190(0) };
		Var4.f_9 = -1591664384;
		if (!func_1735(iParam0, &Var0, 1728382685, 0, 0))
		{
			return false;
		}
		else if (func_1736(iParam0, &Var4, 1728382685))
		{
			return false;
		}
		if (func_1734(iParam0, 1))
		{
			if (!func_1735(iParam0, &Var0, -649335959, 0, 0))
			{
				return false;
			}
			else if (func_1736(iParam0, &Var4, -649335959))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_1764(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_1029(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_1083(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

int func_1084(int iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
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
		func_1765(iParam2, -372840566);
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
	Var3.f_13 = bParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_1766(uParam1, iParam0, Var3);
	return 1;
}

void func_1085(int iParam0)
{
	if (_0xf8b48a361dc388ae(iParam0) != 2)
	{
		return;
	}
	iVar1 = _0x0139637a3bff8b6d(iParam0, &uVar0);
	if (iVar1 == 0)
	{
	}
	else if (!_0x354f689c4ffaab37(iVar1))
	{
		_0x7c32191d9fb2bdea(iVar1);
	}
}

void func_1086(int iParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	iVar0 = compendium_get_map_discoverable_from_stat_item(iParam0, vParam2);
	iVar1 = iVar0;
	if (iVar1 != 0 && !_map_is_discovery_active(iVar1))
	{
		_0xd8c7162ab2e2af45(iVar1);
	}
	if (bParam5 && -153407852 != iParam0)
	{
		compendium_animal_observed_by_stat_name(iParam0, iParam6);
	}
}

bool func_1087()
{
	if (func_66() != 0)
	{
		return true;
	}
	if (!_unlock_is_unlocked(-1461907237))
	{
		return true;
	}
	if (Global_1139381->f_3876.f_1 & 2 != 0)
	{
		return true;
	}
	if (Global_1139381->f_3876.f_1 & 4 != 0)
	{
		return true;
	}
	if (!has_network_time_started())
	{
		return true;
	}
	return false;
}

int func_1088(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2086327823:
			return 64;
		case -2076515520:
			return 98;
		case -2062348046:
			return 101;
		case -1983943039:
			return 62;
		case -1967078622:
			return 4;
		case -1935655667:
			return 39;
		case -1930919582:
			return 56;
		case -1930399868:
			return 68;
		case -1924130593:
			return 102;
		case -1898294040:
			return 50;
		case -1854780893:
			return 5;
		case -1783181138:
			return 13;
		case -1777144780:
			return 92;
		case -1679013564:
			return 16;
		case -1648877470:
			return 43;
		case -1634863390:
			return 10;
		case -1598949067:
			return 45;
		case -1575244427:
			return 67;
		case -1494363065:
			return 1;
		case -1408563730:
			return 30;
		case -1399051227:
			return 53;
		case -1393798041:
			return 59;
		case -1376314322:
			return 49;
		case -1330378740:
			return 95;
		case -1315007749:
			return 21;
		case -1296513906:
			return 11;
		case -1258163578:
			return 48;
		case -1215742816:
			return 37;
		case -1152882498:
			return 18;
		case -1098645728:
			return 93;
		case -1034424695:
			return 32;
		case -1030655937:
			return 12;
		case -985005225:
			return 57;
		case -892848695:
			return 74;
		case -789758703:
			return 34;
		case -757633599:
			return 31;
		case -706075066:
			return 17;
		case -682435976:
			return 82;
		case -634665876:
			return 15;
		case -545299531:
			return 44;
		case -514316475:
			return 2;
		case -479797100:
			return 105;
		case -469672732:
			return 70;
		case -379874384:
			return 79;
		case -355092128:
			return 75;
		case -326224139:
			return 100;
		case -210274020:
			return 35;
		case -162385832:
			return 73;
		case -114666387:
			return 51;
		case -86995487:
			return 20;
		case -79139194:
			return 77;
		case -71551190:
			return 96;
		case -32613857:
			return 86;
		case -29468993:
			return 103;
		case -1:
			return 0;
		case 5611246:
			return 87;
		case 81846499:
			return 23;
		case 120448958:
			return 27;
		case 151445061:
			return 61;
		case 242857368:
			return 42;
		case 300196727:
			return 41;
		case 334700325:
			return 52;
		case 353568324:
			return 69;
		case 385589027:
			return 24;
		case 396837320:
			return 29;
		case 440583097:
			return 47;
		case 449057693:
			return 22;
		case 457103096:
			return 55;
		case 477974086:
			return 6;
		case 478308321:
			return 46;
		case 499656970:
			return 8;
		case 618068466:
			return 7;
		case 630308764:
			return 89;
		case 633501950:
			return 36;
		case 640330073:
			return 94;
		case 669386338:
			return 104;
		case 796310207:
			return 66;
		case 905156700:
			return 60;
		case 941437279:
			return 72;
		case 946732137:
			return 76;
		case 1232224440:
			return 83;
		case 1248971179:
			return 97;
		case 1250422342:
			return 14;
		case 1257949393:
			return 3;
		case 1316486837:
			return 26;
		case 1345888212:
			return 28;
		case 1382158532:
			return 78;
		case 1398164246:
			return 90;
		case 1427070667:
			return 81;
		case 1571096148:
			return 54;
		case 1623086000:
			return 65;
		case 1717813521:
			return 71;
		case 1723535349:
			return 58;
		case 1791948823:
			return 9;
		case 1841970554:
			return 33;
		case 1872332830:
			return 99;
		case 1889309476:
			return 84;
		case 1898201469:
			return 40;
		case 1918774327:
			return 85;
		case 1951290581:
			return 25;
		case 1971904853:
			return 38;
		case 2002140369:
			return 91;
		case 2018657739:
			return 80;
		case 2021695109:
			return 63;
		case 2078792148:
			return 88;
		case 2108116481:
			return 19;
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

bool func_1089()
{
	if (!_network_is_player_index_valid(player_id()))
	{
		return false;
	}
	if (!network_is_player_active(player_id()))
	{
		return false;
	}
	iVar0 = _0xb9050a97594c8832(player_id());
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (!func_1767(iVar0))
	{
		return false;
	}
	return true;
}

int func_1090(int iParam0)
{
	if (!does_entity_exist(*iParam0))
	{
		return 0;
	}
	iVar0 = get_ped_index_from_entity_index(*iParam0);
	return func_1768(iVar0);
}

int func_1091(int iParam0)
{
	iVar0 = 0;
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = _0x31fef6a20f00b963(iParam0);
	if (iVar0 == 0)
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar0 = func_1768(get_ped_index_from_entity_index(iParam0));
		}
	}
	return iVar0;
}

int func_1092(int iParam0)
{
	switch (iParam0)
	{
		case -802026654:
			return -1670497261;
		case 1806153689:
			return -280711232;
		case -1625078531:
			return 596590814;
		case -2102079544:
			return 1665117534;
		case -1243878166:
			return -978241196;
		case -1475338121:
			return -752126075;
		case 143941906:
			return 1824983669;
		case 957520252:
			return 928262209;
		case 1292673537:
			return 541735817;
		case -2059726619:
			return 478256501;
		case -1569450319:
			return -232007656;
		case 854596618:
			return 19595959;
		case 1490032862:
			return -101065075;
		case 1083865179:
			return 2105875134;
		case 663376218:
			return 294194582;
		case 2116849039:
			return 837315235;
		case 1248540072:
			return -1818319295;
		case -1858513856:
			return -1597636811;
		case -868657362:
			return -1985596288;
		case 1603936352:
			return -440737957;
		case -702790226:
			return -1886002303;
		case -591117838:
			return -901855085;
		case -1730060063:
			return 891487295;
		case -237756948:
			return -1647829735;
		case -336086818:
			return 1698233050;
		case 9293261:
			return -1939379896;
		case -53270317:
			return -1903865243;
		case 459744337:
			return 2116155169;
		case 1914602340:
			return -1373796272;
		case -1791452194:
			return 834120727;
		case 1150594075:
			return -976686879;
		case 334093551:
			return 622542686;
		case -845037222:
			return -96726590;
		case 1150939141:
			return 493864472;
		case -1558096473:
			return -1364685383;
		case -794277189:
			return 501072671;
		case -1827027577:
			return -1832121185;
		case -662178186:
			return 332878276;
		case -1035515486:
			return 226674781;
		case 1181652728:
			return 945521246;
		case 2053771712:
			return 1013673835;
		case -1332163079:
			return 1080677561;
		case 238733925:
			return 441281843;
		case 1647012424:
			return 2100972340;
		case 500722008:
			return 731989586;
		case 1710714415:
			return -312223536;
		case 699990316:
			return 919524407;
		case -1648383828:
			return 45874041;
		case -1379330323:
			return -1135509110;
		case -99092070:
			return -1991809269;
		case 1963510418:
			return -882315424;
		case 1636891382:
			return -1198430015;
		case 1868576868:
			return 610503310;
		case -217731719:
			return -2104728156;
		case 1208128650:
			return -1848951328;
		case 462348928:
			return -1522563214;
		case 659601266:
			return 701524769;
		case -395646254:
			return -1125735460;
		case 1584468323:
			return -912340422;
		case 1969175294:
			return -339216640;
		case -57190831:
			return -850815155;
		case -308965548:
			return 980503581;
		case -1102272634:
			return 222730798;
		case 554578289:
			return -615127816;
		case -983605026:
			return -588738567;
		case -1544126829:
			return -1194176543;
		case -476045512:
			return -963727698;
		case 1796037447:
			return -553292391;
		case 1795984405:
			return 1964559810;
		case -1317365569:
			return -30369031;
		case 1729948479:
			return 1200593517;
		case 1466150167:
			return 1386213093;
		case 1145777975:
			return -1853692477;
		case 85441452:
			return -265369183;
		case 653400939:
			return 1490994314;
		case 915880986:
			return -560512119;
		case -1424697962:
			return -372283616;
		case -1643384846:
			return 643029198;
		case -847420802:
			return -507336551;
		case -662726703:
			return -1633300610;
		case 1760886130:
			return 312232747;
		case -1243653490:
			return -369028960;
		case 1988467099:
			return 56997271;
		case -674590015:
			return -562880581;
		case -1480423460:
			return 1914482046;
		case 924882045:
			return -398123506;
		case 1415608202:
			return -154193613;
		case -593311590:
			return 253511830;
		case 765085831:
			return 25196805;
		case 2094730711:
			return -585570711;
		case -1310590179:
			return 738250137;
		case 992366796:
			return -255175472;
		case -244657613:
			return 2029824605;
		case -2026210939:
			return 637459650;
		case -1252472243:
			return -1763677083;
		case -980016656:
			return 105057785;
		case -758005668:
			return 2109109029;
		case -2139551030:
			return 590763523;
		case 1607144310:
			return -1415366968;
		case 80093385:
			return 1525242558;
		case -867655342:
			return -1053027662;
		case 991092621:
			return 170878033;
		case 871746664:
			return 1176700965;
		case 1626949878:
			return 956769558;
		case -1722483116:
			return -92340513;
		case -1739474417:
			return -1628899142;
		case -161524199:
			return -1009793706;
		case 156979555:
			return 69303734;
		case 322141256:
			return 1934146069;
		case 1310120320:
			return 1251861193;
		case -1228376431:
			return -1201528492;
		case 472142656:
			return -584564578;
		case -1837840093:
			return 1257170615;
		case 58634176:
			return -443353688;
		case 1023080408:
			return -726514003;
		case 1001171791:
			return -1178975683;
		case 1210345318:
			return -1735020859;
		case 399553313:
			return 1066403056;
		case -1422869557:
			return 379141135;
		case -1378812236:
			return 178588058;
		case 1011003885:
			return 250119098;
		case 651035143:
			return 1462096210;
		case 2013022756:
			return 125705494;
		case -1186289527:
			return 1955497943;
		case 877935135:
			return -239746263;
		case -39646495:
			return 483041697;
		case 1582593525:
			return 2115836262;
		case -246542229:
			return 127221449;
		case -529454751:
			return 1281075400;
		case -46978629:
			return -187017787;
		case -1347000030:
			return 2084769890;
		case -505583391:
			return -1860395611;
		case 1645887374:
			return -925132283;
		case -1559227925:
			return 1221255602;
		case 1562528937:
			return -1971512016;
		case -1471526136:
			return 1915869310;
		case -1440794801:
			return -291878865;
		case 2144711797:
			return 628765193;
		case 718825539:
			return 73897638;
		case 2105263879:
			return -520524691;
		case -905842006:
			return -677211393;
		case 1191274340:
			return 607200259;
		case 1613453781:
			return -422975251;
		case -1030182399:
			return -162653027;
		case 987967309:
			return -1918690839;
		case -1060737769:
			return 885447719;
		case 553310445:
			return 1359956914;
		case -1838865945:
			return -509393273;
		case 1418092959:
			return 1728485205;
		case -1315697778:
			return 179793498;
		case -1772126340:
			return -1846596769;
		case -935543049:
			return 1833664130;
		case 1772544356:
			return 485995198;
		case -266273535:
			return 2094969043;
		case -1670544626:
			return -1582650542;
		case 1290960696:
			return 1799724359;
		case 1913571052:
			return 1598789118;
		case 1717601520:
			return 1824349223;
		case 430397370:
			return 696418077;
		case 16287711:
			return 1106697533;
		case -1356230367:
			return -1454259523;
		case 1417331079:
			return -1896235488;
		case -884124246:
			return 276180683;
		case 1884610748:
			return -747881514;
		case 746558492:
			return 1262126135;
		case -892811627:
			return 2265787;
		case -2040522845:
			return -2129601667;
		case -1224510844:
			return 75684692;
		case 1334837390:
			return 1900817837;
		case 339620522:
			return -1956299475;
		case 1770451033:
			return 694522728;
		case 756657535:
			return 765710924;
		case 862898895:
			return 893337488;
		case 1997845858:
			return 154935767;
		case -1930144509:
			return -568415076;
		case 1846915545:
			return 1274028936;
		case -1816929509:
			return -1140231877;
		case 1197831625:
			return -27138549;
		case -1866642239:
			return 659005977;
		case -1508120809:
			return -771957300;
		case -1007681885:
			return 29804808;
		case 434924608:
			return 1551511426;
		case 1666393029:
			return 800713897;
		case -1814593136:
			return 1612873893;
		case -1188120304:
			return 1434794005;
		case 1978734761:
			return -1919690611;
		case -824902132:
			return 1742727635;
		case -1015531226:
			return 539212240;
		case -581619522:
			return -1730963015;
		case -861854914:
			return 392259955;
		case -545447034:
			return 1775800065;
		case -1824684934:
			return 1100310307;
		case 980653387:
			return 844987909;
		case -1011598664:
			return -278500197;
		case -177476569:
			return 887422410;
		case 416630124:
			return -1794448450;
		case 1925728375:
			return 2054761774;
		case -1080457688:
			return -1608758596;
		case 1742676369:
			return 1688649464;
		case -899751553:
			return -2008306533;
		case 431501574:
			return 1100437577;
		case 2126795269:
			return 1726381584;
		case 1489051752:
			return 1400293322;
		case -1705499323:
			return 995534052;
		case -2013445740:
			return 1922992885;
		case 102446365:
			return 81605402;
		case -1927342740:
			return -286651444;
		case -410900360:
			return -2064547947;
		case -1073614594:
			return -176022019;
		case 2060013792:
			return 1232227412;
		case 581032175:
			return -893789138;
		case -581931638:
			return 2050798648;
		case -1528265128:
			return -798568163;
		case -142632645:
			return 230404077;
		case -2048519180:
			return -1383606050;
		case 1442025993:
			return 1090514323;
		case 441195430:
			return 1374677981;
		case 748665395:
			return -636161424;
		case 351048413:
			return -1083700033;
		case -914779013:
			return 63328590;
		case 1323485831:
			return -676594955;
		case -365111821:
			return -654290128;
		case 101495387:
			return -66423751;
		case 157917500:
			return -237024085;
		case -936537044:
			return 431553826;
		case -1610329427:
			return -979079160;
		case -1836227998:
			return 1045329345;
		case 619479575:
			return 908385665;
		case -1444929945:
			return 1675254736;
		case -929322235:
			return 564968345;
		case -548076717:
			return 1401257519;
		case -281211381:
			return 1935981234;
		case 493457089:
			return 1930921435;
		case -479485786:
			return 4633231;
		case 27838955:
			return -588047787;
		case 1641833719:
			return -1503391831;
		case -314933180:
			return -1409703989;
		case 1917027383:
			return 1754322973;
		case 803930024:
			return -479401797;
		case -855052577:
			return -1108373076;
		case 1111663869:
			return -255978368;
		case 1338219162:
			return 1771244699;
		case 1297433586:
			return 1837733705;
		case -1538397860:
			return -755340618;
		case -293259613:
			return -274405663;
		case 193037129:
			return 1107308482;
		case 588902637:
			return -2034280224;
		case 1908704263:
			return 1147674954;
		case -2112217546:
			return 285459296;
		case -1745255175:
			return -1085630227;
		case -237368063:
			return -977624126;
		case 1598967299:
			return -1327298596;
		case -1809464109:
			return -1809370620;
		case -165201917:
			return -925376594;
		case 815147738:
			return 571888586;
		case 1287583539:
			return 1427039907;
		case -2126985311:
			return 1870052953;
		case -1268352491:
			return 1293957931;
		case -1940225526:
			return -1604751590;
		case -212307068:
			return 1619108346;
		case 355421032:
			return 954753324;
		case 1657729714:
			return -530719231;
		case 1350692346:
			return 1790841517;
		case -257850294:
			return 1709510426;
		case -918541014:
			return 1406497512;
		case -947573795:
			return -397897626;
		case -2068302756:
			return -2079304485;
		case 1650829985:
			return -1919132092;
		case -1808044035:
			return 1146883867;
		case -1952647655:
			return 213675443;
		case 1293221440:
			return -2050528754;
		case -642946194:
			return 953077128;
		case 819214075:
			return -1141453785;
		case -858652427:
			return 1397626289;
		case 395625948:
			return 1133589554;
		case -2063800922:
			return 1666627023;
		case -2117103642:
			return -1809574093;
		case -1583694057:
			return -1782999617;
		case -1550918713:
			return -508623201;
		case 836539658:
			return -1594035895;
		case 773062352:
			return 696987226;
		case 1306100270:
			return 1080524287;
		case -1063194668:
			return 1671304715;
		case 337839068:
			return 1998585657;
		case -1426520714:
			return 1020167279;
		case -1456429189:
			return 623984063;
		case -2032809253:
			return 2094082294;
		case 781728005:
			return -1960159253;
		case 1202409779:
			return -1365028169;
		case 1520877300:
			return -1221735631;
		case -1736624361:
			return -112981243;
		case 719465997:
			return -2139087610;
		case -361486526:
			return -1602510454;
		case -765274711:
			return -1297983889;
		case -887205673:
			return 2092698587;
		case -784020903:
			return -996945065;
		case -886117938:
			return 2084956560;
		case -1416771220:
			return 702905543;
		case 1648676911:
			return -1581520016;
		case 2103833563:
			return 1086407100;
		case -831636369:
			return 511869570;
		case -852290935:
			return -880049552;
		case -1870415962:
			return -1117023247;
		case -788684109:
			return -734978095;
		case 1416435145:
			return -1006346516;
		case -1483088274:
			return -1801089352;
		case -791867098:
			return -1884753879;
		case -1689552552:
			return 1991763855;
		case -1850779170:
			return -1306257518;
		case -121487803:
			return -1020683612;
		case -1280499288:
			return 926836797;
		case 820245961:
			return -1232342767;
		case -889526774:
			return -309925418;
		case -521025998:
			return -123071275;
		case 1583031244:
			return -1558938686;
		case -2115599211:
			return 1091662795;
		case -767176802:
			return -788362738;
		case -750945821:
			return 1328165841;
		case -2135749211:
			return -800990234;
		case 2063108046:
			return -1483684624;
		case 1299111759:
			return 905262788;
		case 1595322723:
			return 150247607;
		case 784918835:
			return -1233359941;
		case -676310905:
			return -313281876;
		case -1719545959:
			return -4490683;
		case -2142423934:
			return 772815941;
		case 747751566:
			return 829687693;
		case -1942682403:
			return -989662224;
		case 1018433784:
			return 2085868277;
		case -796185392:
			return 54441032;
		case -49549406:
			return 173369425;
		case 857788498:
			return 1040980289;
		case 1223148871:
			return 914451661;
		case 939407236:
			return -1351971822;
		case 1608778431:
			return 1314774140;
		case -2033821082:
			return -1359600522;
		case -993340234:
			return 766332028;
		case -1861062075:
			return 1221975438;
		case 1645001514:
			return -1326003094;
		case 782371031:
			return 1184491654;
		case 1255529169:
			return 750218917;
		case 70898308:
			return -1353658464;
		case -1050350982:
			return 851638420;
		case 581781784:
			return 722571285;
		case -1363330863:
			return 934062207;
		case -1780911288:
			return -1585718810;
		case 1018306802:
			return -1082360340;
		case 1615521415:
			return 2061367228;
		case -1499066338:
			return -1962565360;
		case 1711081908:
			return 262789343;
		case -164705:
			return -633571126;
		case -2044044647:
			return 786387404;
		case -859583379:
			return -379489403;
		case -759504052:
			return -764672668;
		case 700225820:
			return -282159777;
		case 136458586:
			return 468012182;
		case 799105420:
			return -617672215;
		case -481655757:
			return -562468122;
		case 484160931:
			return 1913327664;
		case 1010699907:
			return -993590812;
		case 1550264248:
			return -2137670338;
		case -371992731:
			return 726300604;
		case 1090294483:
			return 415226344;
		case -274175035:
			return -299634134;
		case -1064414912:
			return 1087304069;
		case -2091620305:
			return -9870681;
		case -468684824:
			return 1792621383;
		case 1668870118:
			return -199598455;
		case -534004020:
			return -1941388598;
		case -2126925270:
			return 157600273;
		case 2008380517:
			return 167746130;
		case -510697884:
			return 2004430445;
		case -955209948:
			return 1574944766;
		case 1459836898:
			return 1307900476;
		case 303969766:
			return 1042168876;
		case -1707588662:
			return 425489026;
		case -1224075784:
			return 1517438769;
		case -1806671048:
			return -875336946;
		case 749765420:
			return -586130620;
		case 462936163:
			return -586318490;
		case -8888941:
			return 208002432;
		case 1640227110:
			return -1210524242;
		case -1241188722:
			return 245773581;
		case -1030962659:
			return -2046702261;
		case 112552982:
			return 44564804;
		case -1599578931:
			return 100739460;
		case 1296331626:
			return -2092384992;
		case -1256398198:
			return 494095577;
		case 1297800973:
			return -384312098;
		case 1772582754:
			return 1560218503;
		case -1459876379:
			return -1430069792;
		case 1127406863:
			return 1131911627;
		case 1779996957:
			return -64072061;
		case 1885306923:
			return -202115307;
		case 1244107697:
			return -1102234278;
		case -1201555940:
			return 224070180;
		case -668487833:
			return 545086564;
		case -1178150148:
			return -1483573607;
		case 1171158615:
			return -1100372216;
		case -2123554124:
			return 622704213;
		case 1806705761:
			return 1251284632;
		case 404581836:
			return 1760006100;
		case 987197489:
			return 1196392781;
		case -1259715647:
			return 1740443788;
		case -1716717840:
			return 2126822237;
		case -196277007:
			return -78084331;
		case -2064457926:
			return 327705288;
		case 561267454:
			return 1627515010;
		case 686253083:
			return -1199577085;
		case -827518870:
			return -383061723;
		case 1367447057:
			return -85420896;
		case -2092697195:
			return 195048975;
		case -2043601589:
			return -104850773;
		case 1758585485:
			return 299748074;
		case 1527400190:
			return 66596639;
		case 1493601140:
			return 1475285432;
		case -885592109:
			return 1212248669;
		case -1282621313:
			return 975820334;
		case -70954328:
			return -1551048953;
		case -1378208045:
			return -1849017470;
		case 1450608653:
			return 1176216618;
		case 1543592331:
			return 1205723119;
		case 1842740532:
			return 286421589;
		case 2004357248:
			return 593368816;
		case -229670230:
			return -1720266128;
		case 546758456:
			return -757807829;
		case 1888419655:
			return -1112368409;
		case -2040849706:
			return -2121345370;
		case 2014346813:
			return -1797718726;
		case -1638839614:
			return -1393971825;
		case 1705186999:
			return 1725396367;
		case -1821314478:
			return -130246565;
		case -1434083213:
			return 175848664;
		case -2115566177:
			return -812348041;
		case -1886936864:
			return -1078006288;
		case 777641606:
			return -1384822435;
		case 1815502722:
			return 917639971;
		case 1518910503:
			return 1095182413;
		case 1020297399:
			return 1519573732;
		case -438328437:
			return -426122094;
		case -132069363:
			return -731955171;
		case 1718756614:
			return -884658711;
		case 616254818:
			return -143066399;
		case 1586020612:
			return -533378050;
		case 1892902297:
			return -228233122;
		case 1920759986:
			return -1686723157;
		case 1683741809:
			return -1437580450;
		case 403588059:
			return -1074041164;
		case -352805801:
			return -523105155;
		case 1491466288:
			return 1150407679;
		case -1066678466:
			return -984787596;
		case -375348364:
			return -2003656613;
		case -101301217:
			return -1022716598;
		case 213936563:
			return -1244890418;
		case 897866285:
			return -581023245;
		case 1135507073:
			return -820204176;
		case -1671125008:
			return -660029308;
		case -1924159110:
			return 2019212836;
		case -1621144167:
			return 1185012403;
		case -1061253029:
			return -1795655841;
		case 1181154860:
			return 998851714;
		case 1418435161:
			return 770910550;
		case 1511236969:
			return 540315097;
		case 121494806:
			return -571452361;
		case -251416414:
			return -929748607;
		case -1787430524:
			return 1226615434;
		case -260181673:
			return -299916907;
		case -1087205695:
			return 207478289;
		case -857265622:
			return 449542892;
		case -1572330336:
			return 927409174;
		case -1249752300:
			return 636584299;
		case -940052481:
			return 1538321641;
		case -308200059:
			return 258890562;
		case -1218522879:
			return -451410282;
		case 923422806:
			return 1771900830;
		case 832214437:
			return -859294463;
		case 397926876:
			return -1153003010;
		case 219794592:
			return -259720070;
		case -1061362634:
			return 701417305;
		case 1728819413:
			return 939811780;
		case 1009802015:
			return -2107574148;
		case -420237085:
			return 1333821068;
		case -1195518864:
			return 975852512;
		case -159428614:
			return 806010785;
		case 1276143905:
			return 1999736087;
		case -1262044528:
			return 1319943174;
		case -963027403:
			return 1559976099;
		case 739090883:
			return -1633116519;
		case 1043121665:
			return 1444384112;
		case -634716689:
			return 1683892733;
		case 2088901891:
			return -1855844933;
		case 836208559:
			return 1519362071;
		case 1600479946:
			return -1396390784;
		case -675142890:
			return -998699255;
		case -906131571:
			return -750277466;
		case -591844128:
			return -537016814;
		case -1946740647:
			return -2090366073;
		case -1548204069:
			return 1271176258;
		case -907373381:
			return 1468707790;
		default:
			break;
	}
	return 0;
}

bool func_1093(int iParam0)
{
	return iParam0 != 0;
}

int func_1094(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_1084(iParam0, uParam1, &Var12, &Var0, bParam2, iParam3, iParam4, bParam5);
}

void func_1095(var uParam0)
{
	if (Global_1291734->f_581.f_284)
	{
	}
	if (!func_1769(uParam0))
	{
		return;
	}
	_copy_memory(&(Global_1291734->f_581.f_285), uParam0, 4);
	Global_1291734->f_581.f_284 = 1;
}

bool func_1096()
{
	return Global_1291734->f_581.f_280 > Global_1901947->f_681.f_28;
}

int func_1097(int iParam0)
{
	if (func_1011(iParam0))
	{
		return 1;
	}
	return func_1770(iParam0);
}

bool func_1098(int iParam0)
{
	iVar0 = func_1097(iParam0);
	if (iVar0 < 1)
	{
		return false;
	}
	if (iVar0 + func_1101()) > func_1771()
	{
		return false;
	}
	return true;
}

void func_1099()
{
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if ((*Global_1248240)[iVar0]->f_632 != 0)
		{
			iVar1 = func_1772((*Global_1248240)[iVar0]->f_632, 1);
			(*Global_1248240)[iVar0]->f_631 = iVar1;
		}
		iVar0++;
	}
}

void func_1100(bool bParam0)
{
	Global_1291734->f_581.f_280 = 0;
	if (bParam0)
	{
		func_1773(1);
	}
	if (func_558("ALL SATCHEL EXCLUDING CLOTHING", &iVar0, &iVar1, -2015960939, 1))
	{
		if (iVar1 > 0)
		{
			Var4.f_9 = -1591664384;
			iVar2 = 0;
			while (iVar2 < iVar1)
			{
				if (func_559(&Var4, iVar2, iVar0, iVar1))
				{
					if (func_1011(Var4.f_4))
					{
						if (bParam0)
						{
							func_1717(Var4.f_11, 1);
						}
					}
					else
					{
						iVar3 = func_1770(Var4.f_4);
						if (iVar3 > 0)
						{
							Global_1291734->f_581.f_280 = (Global_1291734->f_581.f_280 + (iVar3 * Var4.f_11));
						}
					}
				}
				iVar2++;
			}
		}
		func_561(iVar0);
	}
}

int func_1101()
{
	return Global_1291734->f_581.f_280;
}

int func_1102(int iParam0, bool bParam1)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return func_1105(0);
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return func_1105(0);
	}
	return func_1104(iVar0, bParam1);
}

void func_1103(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	fVar0 = (to_float(iParam1) * func_1774(0, 1048576000));
	fVar1 = (to_float(iParam2) * func_1774(1, 1048576000));
	if (Global_1901947->f_681.f_32)
	{
		fVar0 = 0f;
		fVar1 = 0f;
	}
	_0x31f343383f19c987(iParam0, (fVar0 + fVar1), iParam3);
}

int func_1104(int iParam0, bool bParam1)
{
	return func_1775(bParam1, (*Global_1291106)[iParam0]->f_8, (*Global_1291106)[iParam0]->f_7);
}

int func_1105(bool bParam0)
{
	return func_1775(bParam0, Global_1901947->f_681.f_30, Global_1901947->f_681.f_29);
}

bool func_1106()
{
	if (_is_ped_carrying(Global_34) || func_804(Global_34))
	{
		return true;
	}
	return false;
}

bool func_1107(int iParam0)
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

int func_1108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2126166785:
			return -1;
		case -2119728378:
		case -1482428221:
		case -1391142299:
		case -867798278:
		case 183652754:
		case 305496830:
		case 725489698:
		case 1178102426:
		case 1543937523:
		case 1637569166:
		case 1758133584:
		case 2056744450:
			return 1;
		case -2137625828:
		case -1994249944:
		case -1323821455:
		case -968357677:
		case -201437056:
		case 493546894:
		case 728480338:
		case 1030875135:
		case 1559741032:
		case 1608357655:
			return 2;
		case -1147969487:
			return 0;
		case 60667583:
		case 537788226:
		case 794246846:
			return 5;
		case -1990305778:
		case -1738342532:
		case -1679988168:
		case -1308265478:
		case -650528936:
		case -577559008:
		case -497792649:
		case 139139039:
		case 965626876:
		case 1039226266:
		case 1624541293:
		case 1716860278:
			return 3;
		case -1618764825:
		case -877373104:
		case -256309418:
		case 251328732:
		case 963280223:
		case 1024208566:
		case 1640255731:
		case 1666986024:
			return 4;
	}
	return -1;
}

bool func_1109(int iParam0)
{
	if (!func_311(iParam0))
	{
		return false;
	}
	return func_424(iParam0, 16777216);
}

int func_1110(int iParam0)
{
	if (!func_311(iParam0))
	{
		return 0;
	}
	return (*Global_1887339)[iParam0]->f_4;
}

int func_1111(int iParam0)
{
	if (!func_311(iParam0))
	{
		return 0;
	}
	iVar0 = func_1776(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	iVar1 = func_422(func_1777(iParam0));
	iVar2 = (iVar0 - iVar1);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	return iVar2;
}

void func_1112(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0]->f_1 = iParam1;
		return;
	}
	Global_1071686->f_19674[iParam0]->f_1 = iParam1;
}

void func_1113(int iParam0, int iParam1)
{
	if (!func_311(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	Global_8123[iParam0]->f_3 = iParam1;
}

void func_1114(int iParam0, int iParam1)
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

void func_1115(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0] = (&Global_8123[iParam0] - (Global_8123[iParam0] && iParam1));
		return;
	}
	Global_1071686->f_19674[iParam0] = (&Global_1071686->f_19674[iParam0] - (Global_1071686->f_19674[iParam0] && iParam1));
}

void func_1116(int iParam0)
{
	if (!func_311(iParam0))
	{
		return;
	}
	if (func_403(iParam0) && func_1778(iParam0))
	{
		func_1779(func_1356(iParam0, 0));
	}
	else
	{
		func_1780(func_1356(iParam0, 0));
	}
}

void func_1117(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1071686->f_19674[iParam0]->f_2 = iParam1;
}

void func_1118(int iParam0)
{
	if (!func_311(iParam0))
	{
		return;
	}
	if (func_109(iParam0))
	{
		func_1781(iParam0);
	}
	else
	{
		func_1782(iParam0);
	}
}

void func_1119(int iParam0, int iParam1)
{
	if (!func_406(iParam0))
	{
		return;
	}
	if (!func_926(iParam0, iParam1))
	{
	}
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_263[iParam0] = (Global_39.f_263[iParam0] || iParam1);
		return;
	}
	Global_1071686->f_21398[iParam0] = (Global_1071686->f_21398[iParam0] || iParam1);
}

void func_1120(int iParam0, int iParam1)
{
	if (!func_406(iParam0))
	{
		return;
	}
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_263[iParam0] = (&Global_39.f_263[iParam0] - (Global_39.f_263[iParam0] && iParam1));
		return;
	}
	Global_1071686->f_21398[iParam0] = (&Global_1071686->f_21398[iParam0] - (Global_1071686->f_21398[iParam0] && iParam1));
}

void func_1121(int iParam0, bool bParam1)
{
	if (!func_406(iParam0))
	{
		return;
	}
	if (iParam0 == 8)
	{
		return;
	}
	iVar0 = func_1783(iParam0);
	if (bParam1)
	{
		func_1779(iVar0);
	}
	else
	{
		func_1780(iVar0);
	}
}

void func_1122(int iParam0, int iParam1)
{
	if (!func_401(iParam0))
	{
		return;
	}
	if (!func_411(iParam0, iParam1))
	{
	}
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_190[iParam0]->f_5 = (Global_39.f_190[iParam0]->f_5 || iParam1);
		return;
	}
	Global_1071686->f_21325[iParam0]->f_5 = (Global_1071686->f_21325[iParam0]->f_5 || iParam1);
}

void func_1123(int iParam0, int iParam1)
{
	if (!func_401(iParam0))
	{
		return;
	}
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_190[iParam0]->f_5 = (Global_39.f_190[iParam0]->f_5 - (Global_39.f_190[iParam0]->f_5 && iParam1));
		return;
	}
	Global_1071686->f_21325[iParam0]->f_5 = (Global_1071686->f_21325[iParam0]->f_5 - (Global_1071686->f_21325[iParam0]->f_5 && iParam1));
}

void func_1124(int iParam0, bool bParam1)
{
	if (!func_401(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1779(func_1657(iParam0));
	}
	else
	{
		func_1780(func_1657(iParam0));
	}
}

void func_1125(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		_0x563fcb6620523917(func_1784(iParam0), -1482012664);
	}
	else if (_0xe38450dbcbc70e3d(func_1784(iParam0), -1305340593) || _0xe38450dbcbc70e3d(func_1784(iParam0), -1482012664))
	{
		_0x6786d7afac3162b3(func_1784(iParam0));
	}
}

bool func_1126(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_1127()
{
	return Global_1102219->f_3672;
}

int func_1128()
{
	if (func_66() == 0)
	{
		return 10000;
	}
	return -1;
}

void func_1129(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			_0x74bcceb233ad95b2(-1743273232, iParam1);
			break;
		case 1:
			_0x74bcceb233ad95b2(-948016518, iParam1);
			break;
		case 2:
			_0x74bcceb233ad95b2(580522491, iParam1);
			break;
		case 3:
			_0x74bcceb233ad95b2(1176390239, iParam1);
			break;
		case 4:
			_0x74bcceb233ad95b2(1791198853, iParam1);
			break;
		default:
			break;
	}
}

void func_1130(int iParam0)
{
	iVar0 = func_1785(iParam0);
	switch (iParam0)
	{
		case 0:
			_0x74bcceb233ad95b2(-1047841819, iVar0);
			break;
		case 1:
			_0x74bcceb233ad95b2(-1349566727, iVar0);
			break;
		case 2:
			_0x74bcceb233ad95b2(613491521, iVar0);
			break;
		case 3:
			_0x74bcceb233ad95b2(1452147132, iVar0);
			break;
		case 4:
			_0x74bcceb233ad95b2(-885198919, iVar0);
			break;
		default:
			break;
	}
}

bool func_1131(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_1786(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_936(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_935(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_1787(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_1788(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_1789(iParam0);
	if (iVar5 < 1 || iVar5 > func_1790(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_1132(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1791(func_934(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_1133(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

void func_1134(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_1135()
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

int func_1136(int iParam0)
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

int func_1137(int iParam0)
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

void func_1138(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_1139(var uParam0, int iParam1)
{
	uParam0->f_1 = (func_980() - iParam1);
	func_1792(uParam0, 1);
	func_1793(uParam0, 2);
	uParam0->f_2 = 0;
}

bool func_1140()
{
	return Global_1904651->f_8683 != -1;
}

int func_1141()
{
	return Global_1952637->f_1;
}

bool func_1142(var uParam0)
{
	return func_1407(*uParam0, 1);
}

void func_1143(var uParam0, bool bParam1)
{
	if (bParam1 || !func_1142(uParam0))
	{
		func_437(uParam0);
	}
}

bool func_1144(var uParam0)
{
	return func_1407(*uParam0, 2);
}

bool func_1145(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (vdist2(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_1794(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

char* func_1146(var uParam0, var uParam1, var uParam2)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

bool func_1147()
{
	return false;
}

bool func_1148()
{
	return false;
}

void func_1149(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_1150(int iParam0)
{
	Global_1939161->f_64 = iParam0;
}

int func_1151()
{
	return func_1795(func_297(func_60()));
}

void func_1152(var uParam0)
{
	_copy_memory(uParam0, &uVar0, 3);
}

void func_1153(int iParam0)
{
	Global_1903136->f_302 = (Global_1903136->f_302 || iParam0);
}

bool func_1154(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_1155(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_1157(iParam0, 1);
	func_1158(iParam0, 1);
	func_1159(iParam0, 128);
}

void func_1156(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_1157(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_1154(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_1158(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_1159(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

bool func_1160(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1161(int iParam0)
{
	if (func_1160(iParam0, 1))
	{
		func_1796(1);
	}
}

void func_1162(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_1163(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2119268333;
		case 1:
			return -1827170883;
		case 2:
			return 2014102137;
		default:
			break;
	}
	return 0;
}

void func_1164()
{
	iVar0 = _databinding_read_data_int(Global_1940311->f_242.f_2);
	Global_1940311->f_242.f_1185 = iVar0;
	_databinding_write_data_hash_string(Global_1940311->f_242.f_3, func_1163(iVar0));
	func_1797(iVar0);
}

char* func_1165(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
		case 1:
			return "dynamic_list_item_visible";
		case 2:
			return "dynamic_list_item_main_color";
		case 3:
			return "dynamic_list_item_secondary_color";
		case 4:
			return "dynamic_list_item_tertiary_color";
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
		case 6:
			return "dynamic_list_item_main_img_texture";
		case 7:
			return "dynamic_list_item_main_img_visible";
		case 8:
			return "dynamic_list_item_main_img_enabled";
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
		case 10:
			return "dynamic_list_item_status_icon_texture";
		case 11:
			return "dynamic_list_item_status_icon_visible";
		case 12:
			return "dynamic_list_item_deco_texture_dic";
		case 13:
			return "dynamic_list_item_deco__texture";
		case 14:
			return "dynamic_list_item_deco_visible";
		case 15:
			return "dynamic_list_item_raw_text_entry";
		case 16:
			return "dynamic_list_item_text_label_entry";
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
		case 19:
			return "dynamic_list_item_secondary_text_visible";
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
		case 22:
			return "dynamic_list_item_end_img_texture";
		case 23:
			return "dynamic_list_item_end_img_visible";
		case 24:
			return "dynamic_list_item_corner_end_img_texture_dic";
		case 25:
			return "dynamic_list_item_corner_end_img_texture";
		case 26:
			return "dynamic_list_item_corner_end_img_visible";
		case 27:
			return "dynamic_list_item_entry_player_index";
		case 28:
			return "dynamic_list_item_entry_friend_index";
		case 29:
			return "dynamic_list_item_player_gamer_handle";
		case 30:
			return "dynamic_list_item_option_stepper_visible";
		case 31:
			return "dynamic_list_item_option_stepper_text_enabled";
		case 32:
			return "dynamic_list_item_option_stepper_items";
		case 33:
			return "dynamic_list_item_option_stepper_current_hash";
		case 34:
			return "dynamic_list_item_option_stepper_current_index";
		case 35:
			return "dynamic_list_item_option_stepper_max_index";
		case 36:
			return "dynamic_list_item_left_chevron_enabled";
		case 37:
			return "dynamic_list_item_right_chevron_enabled";
		case 38:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
		case 39:
			return "dynamic_list_item_main_fill_maximum";
		case 40:
			return "dynamic_list_item_main_fill_value";
		case 41:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
		case 42:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
		case 43:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
		case 47:
			return "dynamic_list_item_extra_img_texture_one_dic";
		case 48:
			return "dynamic_list_item_extra_img_one_texture";
		case 49:
			return "dynamic_list_item_extra_img_one_visible";
		case 50:
			return "dynamic_list_item_extra_int_field_one_value";
		case 51:
			return "dynamic_list_item_extra_int_field_two_value";
		case 52:
			return "dynamic_list_item_extra_vector_field_one_value";
		case 53:
			return "dynamic_list_item_extra_bool_field_one_value";
		case 54:
			return "dynamic_list_item_link";
		case 55:
			return "dynamic_list_item_event_channel_hash";
		case 56:
			return "dynamic_list_item_focus_hash";
		case 57:
			return "dynamic_list_item_select_hash";
		case 58:
			return "dynamic_list_item_prompt_text";
		case 59:
			return "dynamic_list_item_prompt_enabled";
		case 60:
			return "dynamic_list_item_prompt_visible";
		case 64:
			return "dynamic_list_item_prompt_option_text";
		case 65:
			return "dynamic_list_item_prompt_option_enabled";
		case 66:
			return "dynamic_list_item_prompt_option_visible";
		case 67:
			return "dynamic_list_item_prompt_option_select_hash";
		case 68:
			return "dynamic_list_item_prompt_toggle_text";
		case 69:
			return "dynamic_list_item_prompt_toggle_enabled";
		case 70:
			return "dynamic_list_item_prompt_toggle_visible";
		case 71:
			return "dynamic_list_item_prompt_toggle_select_hash";
		case 72:
			return "dynamic_list_item_prompt_r3_text";
		case 73:
			return "dynamic_list_item_prompt_r3_enabled";
		case 74:
			return "dynamic_list_item_prompt_r3_visible";
		case 75:
			return "dynamic_list_item_select_r3_select_hash";
		case 76:
			return "dynamic_list_item_prompt_dpad_left_right_text";
		case 77:
			return "dynamic_list_item_prompt_dpad_left_right_enabled";
		case 78:
			return "dynamic_list_item_prompt_dpad_left_right_visible";
		case 79:
			return "dynamic_list_item_select_dpad_left_right_select_hash";
		case 80:
			return "mount_collection_index";
		case 81:
			return "dynamic_list_item_rename_prompt_enabled";
		case 82:
			return "dynamic_list_item_rename_prompt_visible";
		case 83:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
		case 84:
			return "invite_unique_id";
		case 85:
			return "invite_tracked";
		case 86:
			return "invite_processed";
		case 87:
			return "invite_script_type";
		case 88:
			return "invite_gang_id";
		case 89:
			return "invite_expiration_time";
		case 90:
			return "invite_filter_type";
		case 91:
			return "invite_feed_message_id";
		case 92:
			return "invite_all_enabled";
		case 93:
			return "invite_all_visible";
		default:
			break;
	}
	return "null";
}

bool func_1166()
{
	if (func_1798())
	{
		return func_587(12, 0);
	}
	return func_587(5, 0);
}

void func_1167(int iParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(iParam0, func_1165(91));
	if (func_1799(iVar0))
	{
		_0x2f901291ef177b02(iVar0, 1);
	}
}

bool func_1168(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_1800())
	{
		return false;
	}
	return func_1801(iParam0, uParam1, iParam2, iParam3);
}

void func_1169(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1802(0);
	}
	if (player_id() == iParam0)
	{
		func_1803(0);
	}
	else
	{
		func_1803(1);
	}
	func_1804(0, iParam0);
	func_1804(1, iParam0);
	func_1804(2, iParam0);
	func_1804(3, iParam0);
}

int func_1170(int iParam0)
{
	if (!func_1805(iParam0))
	{
		return -1;
	}
	iVar2 = func_1806(iParam0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_1807(iVar0);
		if (func_1808(iVar2, iVar1, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1171(int iParam0)
{
	func_1802(iParam0);
	if (func_1809(iParam0))
	{
		iVar0 = 304794100;
	}
	else if (!func_1810(iParam0, 1))
	{
		iVar0 = func_1812(func_1811(iParam0, 1));
	}
	else
	{
		iVar0 = 1467455271;
	}
	func_1813(iVar0, func_1811(iParam0, 1));
	if (_0xf7c180f57f85d0b8(-1641598689))
	{
		_uistatemachine_request_transition(-1641598689, -2109508723);
	}
}

void func_1172(int iParam0)
{
	func_1814(*iParam0);
	if (_0xf7c180f57f85d0b8(-1641598689))
	{
		_uistatemachine_request_transition(-1641598689, -1316999016);
	}
}

int func_1173(int iParam0, var uParam1)
{
	if (!network_is_player_active(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	*uParam1 = { (*Global_1134390)[iVar0]->f_38.f_8 };
	return 1;
}

int func_1174(int iParam0, bool bParam1)
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

Vector3 func_1175(int iParam0)
{
	func_1816(51288898, func_1815(iParam0), 0, 0);
	if (!_datafile_get_vector(&vVar0, &(Global_1298378->f_1)))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

Vector3 func_1176()
{
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 <= (func_1817() - 1))
	{
		iVar1 = func_1818(iVar0);
		if (iVar1 == -1)
		{
		}
		else
		{
			fVar3 = func_1820(Global_35, func_1819(iVar1));
			if (iVar2 == -1)
			{
				fVar4 = fVar3;
				iVar2 = iVar1;
			}
			else if (fVar3 < fVar4)
			{
				fVar4 = fVar3;
				iVar2 = iVar1;
			}
		}
		iVar0++;
	}
	if (iVar2 == -1)
	{
		return 0f, 0f, 0f;
	}
	return func_1819(iVar2);
}

void func_1177(int iParam0)
{
	Var0 = { func_1821(iParam0) };
	if (!func_326(Var0))
	{
		return;
	}
	iVar2 = func_1822(Var0);
	if (iVar2 != -1)
	{
		iVar3 = Global_1196339->f_1[iVar2]->f_3;
		if (network_is_player_active(player_id()))
		{
			if (func_956(1048576, player_id()) || func_1823())
			{
				iVar4 = Global_1296851->f_2.f_4;
				if (!func_1824(iVar4))
				{
					func_1825(iVar2, 131072);
				}
				else
				{
					func_1825(iVar2, 32768);
				}
				return;
			}
			else if (func_1826())
			{
				func_1825(iVar2, 65536);
				return;
			}
		}
		if (iVar3 != 0 && func_1827(iVar2, Var0, iVar3))
		{
			iVar5 = func_1828(iVar2);
			if (iVar5 != -1 && func_1304(iVar5) == -785841056)
			{
				iVar6 = func_1829(iVar5);
				if (!func_640(iVar6))
				{
					func_1830(iVar6);
					func_1831(func_1829(iVar5), Var0, -1);
				}
			}
		}
	}
}

void func_1178(int iParam0, int iParam1, var uParam2)
{
	if (iParam1 == Global_1296859->f_15)
	{
		return;
	}
	if (!func_1832(iParam0))
	{
		return;
	}
	Var0.f_8 = -1;
	Var0.f_8.f_1 = -1;
	Var0.f_4 = 1;
	Var0.f_5 = -1;
	Var14 = -1;
	Var14.f_1 = -1;
	Var17.f_12 = -1;
	Var17.f_12.f_1 = -1;
	Var17.f_14 = 255;
	Var17.f_15 = 255;
	vVar36 = { 0f, 0f, 0f };
	Var0.f_5 = iParam0;
	Var0.f_10 = uParam2;
	Var0.f_11 = Global_1296859->f_15;
	iVar39 = get_unique_int_for_player(_0x4be6c13a45cca8ec(Global_1296859->f_15));
	switch (iParam0)
	{
		case 2:
			Var14 = { func_1834(5, func_1833(0)) };
			Var17.f_4 = 80;
			break;
		case 1:
			Var14 = { func_1834(4, func_1833(0)) };
			Var17.f_4 = 81;
			break;
	}
	func_1835(&fVar16, iParam1, 1);
	Var17 = 1;
	Var17.f_1 = player_id();
	Var17.f_2 = get_network_time_accurate();
	Var17.f_6 = uParam2;
	Var17.f_9 = iVar39;
	Var17.f_16 = Global_1296859->f_15;
	if (Var0.f_5 == -1)
	{
		return;
	}
	if (!func_1836(Var0.f_5))
	{
		return;
	}
	if (!func_1837(iParam1))
	{
		return;
	}
	func_1838(Var14, vVar36, 0f, 0, 0, fVar16, Var17);
	func_1835(&fVar16, iParam1, 0);
	switch (iParam0)
	{
		case 2:
			Var17.f_4 = 84;
			break;
		case 1:
			Var17.f_4 = 83;
			break;
	}
	Var17.f_7 = iParam1;
	Var17 = 0;
	func_1306(Var17, fVar16, 0, 0);
	_0xde544b7ec0c187cc(&fVar16);
	func_1839(Var0.f_5, &fVar16);
	if (!_0x179a6f0ee2e79026(&fVar16))
	{
		return;
	}
	Var0.f_6 = player_id();
	Var0.f_8 = { Var14 };
	Var0.f_7 = fVar16;
	Var0.f_11 = iParam1;
	Var0.f_13 = 1;
	Var0.f_12 = iVar39;
	func_1840(&Var0, &fVar16);
	func_1306(Var17, fVar16, 0, 0);
	_0xdd1232b332cbb9e7(6, 1, 0);
	_0xdd1232b332cbb9e7(1, 1, 0);
	func_802();
}

void func_1179(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	fVar0 = func_1841(iParam1);
	if (bParam3)
	{
		_0xd426e2e3288469d6(&fVar0, player_id());
	}
	Var1.f_12 = -1;
	Var1.f_12.f_1 = -1;
	Var1.f_14 = 255;
	Var1.f_15 = 255;
	Var1.f_4 = iParam0;
	Var1.f_16 = iParam2;
	func_1306(Var1, fVar0, 0, 0);
}

void func_1180(int iParam0)
{
	if (!func_1842(iParam0))
	{
		return;
	}
	if (!_network_is_player_index_valid(iParam0) || !network_is_player_active(iParam0))
	{
		return;
	}
	iVar2 = iParam0;
	func_1843(&uVar0, Global_1296859->f_15);
	func_1843(&uVar1, _0x901e0dc25080c8b9(iParam0));
	Var3.f_5 = player_id();
	Var3.f_6 = iParam0;
	Var3.f_4 = 2;
	func_1844(&Var3, &uVar0);
	Var3.f_4 = 3;
	func_1844(&Var3, &uVar1);
	func_1845(&(Global_1108365->f_34[iVar2]->f_8), 2);
	Global_1108365->f_34.f_771 = 255;
	func_1846(iVar2);
}

void func_1181(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1847(iParam0);
	}
	else
	{
		func_1848(iParam0);
	}
}

void func_1182()
{
	iVar6 = player_id();
	Var8 = 5;
	Var8.f_1 = 255;
	Var8.f_1.f_2 = 255;
	Var8.f_1.f_2.f_2 = 255;
	Var8.f_1.f_2.f_2.f_2 = 255;
	Var8.f_1.f_2.f_2.f_2.f_2 = 255;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (iVar0 >= 5)
		{
		}
		else
		{
			if (!func_1849(iVar3))
			{
			}
			else
			{
				iVar5 = int_to_playerindex(iVar3);
				fVar4 = vdist(func_1850(iVar5), func_1850(iVar6));
				if (fVar4 > (Global_1901947->f_166.f_23 * Global_1139381->f_4778))
				{
				}
				else
				{
					iVar7 = func_1851(iVar3);
					func_1852(Var8[iVar0], iVar7, iVar3);
					iVar1 = (iVar1 + Var8[iVar0]->f_1);
					iVar0++;
				}
			}
			iVar3++;
		}
	}
	if (iVar0 <= 0)
	{
		Var19.f_12 = -1;
		Var19.f_12.f_1 = -1;
		Var19.f_14 = 255;
		Var19.f_15 = 255;
		Var19.f_4 = 108;
		_0x31010318ba9897ac(&fVar38, player_id());
		func_1306(Var19, fVar38, 0, 0);
		return;
	}
	iVar39 = func_1853(1, iVar1);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar39 = (iVar39 - Var8[iVar2]->f_1);
		if (iVar39 <= 0)
		{
			func_1854(&(Var8[iVar2]));
			return;
		}
		iVar2++;
	}
}

void func_1183(int iParam0)
{
	iVar0 = _0xe4c64cd37cb176aa(iParam0);
	_0xb22b1d9f74095382(iParam0);
	if (!func_1855(iVar0))
	{
		return;
	}
}

void func_1184(int iParam0)
{
	iVar0 = int_to_playerindex(iParam0);
	if (!func_1856(iVar0))
	{
		return;
	}
}

void func_1185(int iParam0, bool bParam1)
{
	uVar0 = _0x27b1ae4d8c652f08(iParam0);
	if (bParam1)
	{
		if (func_1857())
		{
			return;
		}
		func_1858(iParam0);
		func_1859(0);
		func_1860(0);
	}
	else
	{
		_0x3aa0cdc63696166d(uVar0);
	}
}

void func_1186(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 176;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 19, 13, &uParam1);
	func_1861(uParam0);
}

void func_1187(int iParam0)
{
	if (!_databinding_is_data_id_valid(iParam0))
	{
		return;
	}
	_databinding_remove_binding_array_item_by_data_context_id(Global_1940311->f_242.f_5, iParam0);
	func_1167(iParam0);
	_databinding_remove_data_entry(iParam0);
	func_1862((Global_1940311->f_242.f_1186 - 1));
}

bool func_1188()
{
	return Global_1915715->f_20643;
}

struct<14> func_1189(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_1190(bool bParam0)
{
	iVar0 = func_480(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_1028(923904168, func_1293(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_1028(923904168, func_1293(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_1028(923904168, func_1293(bParam0), -740156546, 0);
}

void func_1191(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1192(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_480(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1193(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = func_1863();
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	iVar1 = create_itemset(false);
	if (!is_itemset_valid(iVar1))
	{
		return false;
	}
	_0x20a4bf0e09bee146(iVar1);
	find_all_attached_carriable_entities(iParam0, iVar1);
	bVar2 = false;
	iVar3 = get_itemset_size(iVar1);
	if (iVar3 > 0)
	{
		if (is_in_itemset(iVar0, iVar1))
		{
			bVar2 = true;
		}
	}
	destroy_itemset(iVar1);
	if (bVar2)
	{
		return true;
	}
	return false;
}

bool func_1194(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if ((((Param0.f_9 != 1084182731 && Param0.f_9 != -140655024) && Param0.f_9 != -1162387149) && Param0.f_9 != 1784584921) && Param0.f_9 != -511891179)
	{
		Var0.f_9 = -1591664384;
		if (!func_1585(Param0.f_5, &Var0, 1, 0, -1))
		{
			return false;
		}
		if (!func_560(Var0.f_4, 1093867179))
		{
			return false;
		}
	}
	iVar14 = func_178(Param0.f_4);
	if (((iVar14 == -427144552 && !_is_weapon_binoculars(Param0.f_4)) && Param0.f_4 != -1016714371) && Param0.f_4 != 332793555)
	{
		return false;
	}
	switch (iVar14)
	{
		case -1977020088:
		case -1879562593:
		case -1784221369:
		case -1650247667:
		case -1013984273:
		case 26423971:
		case 129583122:
		case 307971639:
		case 658570475:
		case 810656527:
		case 1293082345:
		case 1373051002:
		case 1495295997:
		case 1780172046:
		case 2071704023:
		case 2088138839:
			return false;
		case -1037537535:
			switch (func_362(Param0.f_4))
			{
				case -525676072:
					if (Param0.f_4 == 1147557067)
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				case 81053684:
					return true;
				case 1477698721:
					if (func_560(Param0.f_4, 160827531))
					{
						return true;
					}
					return false;
				default:
					return false;
			}
			break;
	}
	if (func_362(Param0.f_4) == -829303394)
	{
		return false;
	}
	return true;
}

void func_1195(int iParam0, int iParam1, bool bParam2)
{
	if (func_177(iParam1, 0))
	{
		if (bParam2)
		{
			_0x6a564540fac12211(iParam0, iParam1);
		}
		else
		{
			_0x766315a564594401(iParam0, iParam1, 0);
		}
	}
}

bool func_1196(int iParam0)
{
	return func_1864(func_362(iParam0), iParam0);
}

void func_1197(int iParam0, bool bParam1)
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
	Var0.f_4 = -854348463;
	func_1865(iParam0, Var0, bParam1, 0);
}

void func_1198(int iParam0, bool bParam1)
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
	Var0.f_4 = -1823706425;
	func_1865(iParam0, Var0, bParam1, 0);
}

void func_1199(int iParam0, bool bParam1)
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
	Var0.f_1 = 1835126290;
	Var0.f_4 = 81053684;
	func_1865(iParam0, Var0, bParam1, 0);
}

void func_1200(int iParam0, bool bParam1)
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
	Var0.f_4 = -525676072;
	func_1865(iParam0, Var0, bParam1, 0);
}

void func_1201(int iParam0, bool bParam1)
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
	Var0.f_4 = -1719060085;
	func_1865(iParam0, Var0, bParam1, 0);
}

bool func_1202(int iParam0)
{
	return func_1154(iParam0, 2);
}

bool func_1203(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_1204(int iParam0)
{
	if (func_1083(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_1205(int iParam0)
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

bool func_1206()
{
	if (!func_905())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

bool func_1207(int iParam0)
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

bool func_1208(int iParam0, int iParam1)
{
	return _databinding_read_data_bool(Global_1940311->f_1433.f_54.f_85);
}

bool func_1209(bool bParam0)
{
	if (_is_ped_hogtied(Global_34))
	{
		if (bParam0)
		{
			func_552("ITEM_UNUSABLE_HOGTIED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (_is_ped_hogtying(Global_34))
	{
		if (bParam0)
		{
			func_552("ITEM_UNUSABLE_HOGTYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (_is_ped_lassoed(Global_34))
	{
		if (bParam0)
		{
			func_552("ITEM_UNUSABLE_LASSOED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (_0xef3a8772f085b4aa(Global_34))
	{
		return false;
	}
	if (!_get_lassoed_entity(Global_34) == 0)
	{
		return false;
	}
	if (_0x226cf9b159e38f42(Global_34))
	{
		return false;
	}
	if (_0x3bdfcf25b58b0415(Global_34))
	{
		return false;
	}
	if (_0x0e99e3bf11bb6367(Global_34) || is_ped_performing_melee_action(Global_34, 4096, 0))
	{
		return false;
	}
	if (is_ped_performing_melee_action(Global_34, 32768, 0))
	{
		return false;
	}
	return true;
}

bool func_1210(bool bParam0)
{
	if (_is_ped_sliding(Global_34))
	{
		if (bParam0)
		{
			func_552("ITEM_UNUSABLE_SLIDING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_swimming(Global_34))
	{
		if (bParam0)
		{
			func_552("ITEM_UNUSABLE_SWIMMING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_climbing(Global_34))
	{
		if (bParam0)
		{
			func_552("ITEM_UNUSABLE_CLIMBING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_1207(Global_34))
	{
		if (bParam0)
		{
			func_552("ITEM_UNUSABLE_SLEEPING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_falling(Global_34))
	{
		if (bParam0)
		{
			func_552("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (_0x3e592d0486dec0f6(Global_34))
	{
		if (bParam0)
		{
			func_552("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_ragdoll(Global_34))
	{
		if (bParam0)
		{
			func_552("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_vaulting(Global_34))
	{
		if (bParam0)
		{
			func_552("ITEM_UNUSABLE_JUMPING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_getting_up(Global_34))
	{
		if (bParam0)
		{
			func_552("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_1211(bool bParam0)
{
	if (is_ped_hanging_on_to_vehicle(Global_34))
	{
		if (bParam0)
		{
			func_552("ITEM_UNUSABLE_HANGING_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_1212()
{
	return Global_1248240->f_9296 != -1;
}

bool func_1213(int iParam0, int iParam1)
{
	if (((is_ped_in_combat(Global_34, 0) || is_ped_in_melee_combat(Global_34)) || func_548(iParam1, 1024)) && _0x336b3d200ab007cb(Global_34, Global_35, iParam0, iParam1) > 0)
	{
		return true;
	}
	return false;
}

bool func_1214()
{
	return _0x2942457417a5fd24(Global_34) >= 1f;
}

bool func_1215(bool bParam0)
{
	iVar0 = func_1866();
	if (_0x756c7b4c43df0422(1))
	{
		iVar0 = _0x351f74ed6177ebe7();
	}
	else
	{
		iVar0 = _0x0501d52d24ea8934(1);
	}
	if (!does_entity_exist(iVar0))
	{
		if (bParam0)
		{
			func_552("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!func_1107(iVar0))
	{
		if (bParam0)
		{
			func_552("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!is_entity_dead(iVar0) && !is_ped_in_writhe(iVar0))
	{
		if (bParam0)
		{
			func_552("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!_0xd543d3a8fde4f185(Global_34, iVar0))
	{
		if (bParam0)
		{
			func_552("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_1216(bool bParam0)
{
	if (is_ped_on_mount(Global_34))
	{
		return true;
	}
	else if (_0x3ee1f7a8c32f24e1(get_player_index(), &iVar0, 0, 0))
	{
		if (!func_1107(iVar0))
		{
			if (bParam0)
			{
				func_552("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (does_entity_exist(_0xe4770da1b8ff4fd1(get_ped_index_from_entity_index(iVar0))))
		{
			if (bParam0)
			{
				func_552("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (is_ped_in_writhe(get_ped_index_from_entity_index(iVar0)))
		{
			if (bParam0)
			{
				func_552("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (func_1867(iVar0, 1, 1) > 2f)
		{
			if (bParam0)
			{
				func_552("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (!_0xd543d3a8fde4f185(Global_34, get_ped_index_from_entity_index(iVar0)))
		{
			if (bParam0)
			{
				func_552("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		return true;
	}
	iVar1 = _0x0501d52d24ea8934(1);
	if (!func_1107(iVar1))
	{
		if (bParam0)
		{
			func_552("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_in_writhe(iVar1))
	{
		if (bParam0)
		{
			func_552("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (does_entity_exist(_0xe4770da1b8ff4fd1(iVar1)))
	{
		if (bParam0)
		{
			func_552("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!_0xd543d3a8fde4f185(Global_34, iVar1))
	{
		if (bParam0)
		{
			func_552("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

int func_1217(int iParam0)
{
	return func_1515(iParam0, 7);
}

bool func_1218()
{
	if (!does_entity_exist(Global_34))
	{
		return false;
	}
	if (ped_has_use_scenario_task(Global_34))
	{
		iVar0 = _get_scenario_point_type_ped_is_using(Global_34);
		iVar1 = iVar0;
		if (iVar1 != -1241981548 && iVar1 != 1049986774)
		{
			return true;
		}
	}
	return false;
}

bool func_1219()
{
	if (!does_entity_exist(Global_34))
	{
		return false;
	}
	if (!is_ped_in_any_train(Global_34))
	{
		return false;
	}
	return false;
}

bool func_1220()
{
	return Global_1913694->f_1578;
}

bool func_1221()
{
	if ((func_967() || Global_1572887->f_106.f_75 > 10) || func_1868())
	{
		if ((!func_1869() && Global_265377->f_124517.f_71.f_21.f_2 != -504335712) && !func_1245(Global_265377->f_124517.f_71.f_21.f_3))
		{
			return true;
		}
	}
	return false;
}

bool func_1222(int iParam0)
{
	return func_324(Global_1940144->f_38, iParam0);
}

bool func_1223()
{
	return Global_1952637->f_3484;
}

int func_1224(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case 119907797:
			return 32;
		case 1388798186:
			return 64;
		default:
			break;
	}
	return 0;
}

bool func_1225(int iParam0)
{
	return (Global_1952637->f_3334.f_33.f_6 && iParam0) != 0;
}

int func_1226()
{
	return 234339573;
}

bool func_1227()
{
	if ((Global_1940311->f_10901 != (Global_1940311->f_38.f_203 - 1) || func_1870(func_1012(0), Global_1940311->f_10893, 0, 1, 1) > 0) || Global_1940311->f_10901 == 15)
	{
		return true;
	}
	func_1871();
	if (Global_1940311->f_6)
	{
		return true;
	}
	return false;
}

void func_1228(int iParam0)
{
	Global_1940311->f_10 = iParam0;
}

void func_1229(int iParam0)
{
	Global_1940311->f_9 = iParam0;
}

void func_1230()
{
	if ((Global_1940144->f_70.f_5 && !func_162(&(Global_1940144->f_86[6]))) && func_355(Global_1940144->f_70.f_1, 1))
	{
		if (get_game_timer() < Global_1940144->f_70.f_4 && !Global_1940144->f_70.f_6)
		{
			func_1253();
		}
		else if ((!_0x038b1f1674f0e242(Global_34) && func_172(0, func_1872())) && func_1873())
		{
			if (get_game_timer() >= Global_1940144->f_70.f_3)
			{
				if (func_162(&(Global_1940144->f_86[5])))
				{
					func_528();
				}
				else if (Global_1940144->f_70 == 0)
				{
					Global_1940144->f_70 = get_game_timer() + 5000;
					switch (func_461(Global_1940144->f_70.f_1, -949239683))
					{
						case -873135685:
						case 24248412:
							sVar0 = "QUICK_INSPECTION_CARD";
							break;
						default:
							sVar0 = "QUICK_INSPECTION";
							break;
					}
					if (Global_1940144->f_70.f_6)
					{
						sVar0 = "QUICK_MAP";
						Global_1940144->f_70 = get_game_timer() + 10000;
					}
					func_1874(0, Global_1940144->f_70.f_1);
					Global_1940144->f_86[6] = func_457(sVar0, -1046962283, Global_34, 3, 0, 0, 1, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					func_1232(&(Global_1940144->f_86[6]), 23, 1, 1);
					func_1232(&(Global_1940144->f_86[6]), 17, 1, 1);
					func_1232(&(Global_1940144->f_86[6]), 13, 1, 1);
					func_1232(&(Global_1940144->f_86[6]), 25, 1, 1);
					func_1157(&(Global_1940144->f_86[6]), 1);
				}
			}
		}
		else
		{
			Global_1940144->f_70.f_3 = get_game_timer() + 300;
		}
	}
	if (Global_1940144->f_70 != 0)
	{
		if ((((((get_game_timer() >= Global_1940144->f_70 || Global_1940311->f_1) || is_ped_in_any_vehicle(Global_34, false)) || is_ped_swimming(Global_34)) || (func_162(&(Global_1940144->f_86[6])) && !func_172(0, func_1872()))) || (Global_1940144->f_70.f_6 && is_ped_using_any_scenario(Global_34))) || _0xec7e480ff8bd0bed(Global_34))
		{
			func_528();
		}
	}
}

int func_1231(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_1154(iVar0, 2))
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
		func_1155(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_1232(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_162(iParam0))
	{
		return;
	}
	iVar0 = func_469(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

bool func_1233(int iParam0)
{
	iVar0 = _get_scenario_point_type_ped_is_using(iParam0);
	iVar1 = iVar0;
	if (((((((((((iVar1 == -1241981548 || iVar1 == 1020517461) || iVar1 == 1259174088) || iVar1 == -1075420544) || iVar1 == -1767895052) || iVar1 == -2016812721) || iVar1 == -1054012177) || iVar1 == -447259824) || iVar1 == -229964281) || iVar1 == 889554021) || iVar1 == -1177373461) || get_ped_config_flag(iParam0, 464, true))
	{
		return true;
	}
	return false;
}

bool func_1234(int iParam0, bool bParam1)
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

bool func_1235()
{
	if ((((((!is_control_enabled(0, 1287709438) || func_547(32)) || is_ped_falling(Global_34)) || is_ped_hanging_on_to_vehicle(Global_34)) || is_player_being_arrested(get_player_index(), true)) || _0x621d1b289caf5978(get_player_index())) || _0xb655db7582aec805(Global_34))
	{
		return false;
	}
	return true;
}

void func_1236(int iParam0)
{
	if (func_162(&(Global_1940144->f_86[iParam0])) && func_1239(&(Global_1940144->f_86[iParam0]), 0))
	{
		func_458(&(Global_1940144->f_86[iParam0]), 0, 1, 1);
	}
}

void func_1237(int iParam0, bool bParam1)
{
	if (func_162(&(Global_1940144->f_86[iParam0])) && !func_1239(&(Global_1940144->f_86[iParam0]), 0))
	{
		func_458(&(Global_1940144->f_86[iParam0]), 1, 1, 1);
		func_1157(&(Global_1940144->f_86[iParam0]), bParam1);
	}
}

bool func_1238()
{
	if (func_547(33554432))
	{
		return false;
	}
	else if (func_547(16384))
	{
		return false;
	}
	else if (func_547(67108864))
	{
		return false;
	}
	else if (func_547(1024))
	{
		return false;
	}
	else if (_is_ped_carrying(Global_34))
	{
		return false;
	}
	else if (func_547(1))
	{
		return false;
	}
	else if (func_547(2))
	{
		return false;
	}
	else if (!_0x2d19bc4df626cbe7(Global_34, 1807503187, -2005122350, 1))
	{
		return false;
	}
	return true;
}

bool func_1239(int iParam0, bool bParam1)
{
	if (bParam1 && !func_162(iParam0))
	{
		return false;
	}
	return !func_1154(iParam0, 4);
}

bool func_1240()
{
	bVar0 = _0xc48a9eb0d499b3e5(Global_1296859->f_8);
	if (bVar0)
	{
		return true;
	}
	bVar0 = _0xd453bb601d4a606e(Global_1296859->f_8);
	if (bVar0)
	{
		return true;
	}
	bVar0 = _is_ped_hogtied(Global_1296859->f_8);
	if (bVar0)
	{
		return true;
	}
	bVar0 = _0x3bdfcf25b58b0415(Global_1296859->f_8);
	if (bVar0)
	{
		return true;
	}
	bVar0 = _0xef3a8772f085b4aa(Global_1296859->f_8);
	if (bVar0)
	{
		return true;
	}
	bVar0 = _is_ped_lassoed(Global_1296859->f_8);
	if (bVar0)
	{
		return true;
	}
	return false;
}

void func_1241()
{
	Global_1940144->f_111 = 0;
	_display_hud_component(36547242);
}

int func_1242()
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_1875(iVar0, 4096) && !func_1875(iVar0, 16384))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1243()
{
	return Global_263042[&Global_1296859] > 2;
}

bool func_1244()
{
	if (Global_1108365->f_935.f_28 == -1)
	{
		return false;
	}
	if (Global_1108365->f_935.f_28 == 7)
	{
		return false;
	}
	if (Global_1108365->f_935.f_28 == 6)
	{
		return Global_1108365->f_935.f_22;
	}
	if (Global_1108365->f_935.f_28 != -1)
	{
		return Global_1940144->f_110;
	}
	return true;
}

bool func_1245(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

int func_1246()
{
	if (_get_number_of_references_of_script_with_name_hash(1814880805) != 0)
	{
		return 0;
	}
	else if (_get_number_of_references_of_script_with_name_hash(-701235215) != 0)
	{
		return 1;
	}
	return 2;
}

void func_1247()
{
	if (!Global_1940144->f_111 && Global_1940144->f_112)
	{
		Global_1940144->f_113 = Global_1296859->f_20;
		Global_1940144->f_111 = 1;
		_hide_hud_component(36547242);
	}
}

void func_1248()
{
	if (func_66() == 0)
	{
		switch (Global_1940144->f_5)
		{
			case 0:
				Global_1940144->f_5 = 1;
				break;
			case 1:
				Global_1940144->f_5 = 0;
				break;
		}
	}
}

char* func_1249()
{
	return "HUD_PAGE_RADAR";
}

void func_1250(int iParam0, char* sParam1, int iParam2)
{
	if (Global_1940144->f_5 == 2)
	{
		Global_1940144->f_5 = 1;
		func_1241();
	}
	if (is_string_null(sParam1) || Global_1940144->f_5 >= iParam2)
	{
		Global_1940144->f_5 = 0;
		sParam1 = "HUD_PAGE_RADAR";
	}
	_uiprompt_set_active_group_this_frame(iParam0, sParam1, iParam2, Global_1940144->f_5, 0, 0);
}

bool func_1251()
{
	if (Global_1102219->f_26.f_3337 == 9)
	{
		return false;
	}
	if (Global_1102219->f_26.f_3337 == 10)
	{
		return false;
	}
	if (Global_1102219->f_26.f_3337 == 11)
	{
		return false;
	}
	if (func_1876(2048))
	{
		return true;
	}
	if (func_1877(1))
	{
		return true;
	}
	if (Global_1102219->f_26.f_3337 != 0)
	{
		return true;
	}
	return false;
}

char* func_1252()
{
	if (func_66() == 0)
	{
		switch (Global_1940144->f_5)
		{
			case 0:
				sVar0 = "HUD_PAGE_RADAR";
				break;
			case 1:
				sVar0 = "HUD_PAGE_SCOREBOARD";
				break;
		}
	}
	return sVar0;
}

void func_1253()
{
	Global_1940144->f_70.f_5 = 0;
	Global_1940144->f_70.f_6 = 0;
	Global_1940144->f_70 = 0;
	Global_1940144->f_70.f_3 = 0;
	Global_1940144->f_70.f_1 = 0;
}

char* func_1254(int iParam0)
{
	switch (iParam0)
	{
		case -974145463:
			return "BREED_AMERICANPAINT_OVERO";
		case 1432602132:
			return "BREED_AMERICANPAINT_TOBIANO";
		case 92296905:
			return "BREED_AMERICANPAINT_SPLASHEDWHITE";
		case -842044823:
			return "BREED_AMERICANPAINT_GREYOVERO";
		case 1371398552:
			return "BREED_AMERICANSTANDARDBRED_BLACK";
		case -745453539:
			return "BREED_AMERICANSTANDARDBRED_BUCKSKIN";
		case 1583029039:
			return "BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE";
		case -783061276:
			return "BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN";
		case -1322521536:
			return "BREED_ANDALUSIAN_DARKBAY";
		case 1100711204:
			return "BREED_ANDALUSIAN_PERLINO";
		case 728055838:
			return "BREED_ANDALUSIAN_ROSEGRAY";
		case -1782334639:
			return "BREED_APPALOOSA_BLANKET";
		case -1181052732:
			return "BREED_APPALOOSA_LEOPARDBLANKET";
		case -179102320:
			return "BREED_APPALOOSA_BROWNLEOPARD";
		case -1266863668:
			return "BREED_APPALOOSA_LEOPARD";
		case -2078767648:
			return "BREED_ARABIAN_BLACK";
		case -852553462:
			return "BREED_ARABIAN_ROSEGREYBAY";
		case -80004868:
			return "BREED_ARABIAN_WHITE";
		case 1813208211:
			return "BREED_ARDENNES_BAYROAN";
		case 836323303:
			return "BREED_ARDENNES_STRAWBERRYROAN";
		case 153881023:
			return "BREED_ARDENNES_IRONGREYROAN";
		case -1256798240:
			return "BREED_BELGIAN_BLONDCHESTNUT";
		case 2118089359:
			return "BREED_BELGIAN_MEALYCHESTNUT";
		case -1537586382:
			return "BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN";
		case 1440692746:
			return "BREED_DUTCHWARMBLOOD_SEALBROWN";
		case 697143532:
			return "BREED_DUTCHWARMBLOOD_CHOCOLATEROAN";
		case 281128160:
			return "BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT";
		case 1854519167:
			return "BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO";
		case -1376299681:
			return "BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY";
		case -1955947684:
			return "BREED_KENTUCKYSADDLE_BLACK1";
		case 1361788230:
			return "BREED_KENTUCKYSADDLE_CHESTNUTPINTO";
		case 1974379573:
			return "BREED_KENTUCKYSADDLE_GREY";
		case 545109431:
			return "BREED_KENTUCKYSADDLE_SILVERBAY";
		case 1275638003:
			return "BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE";
		case 2083573823:
			return "BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO";
		case 1235275977:
			return "BREED_MORGAN_BAY";
		case 892601357:
			return "BREED_MORGAN_BAYROAN";
		case 1224695367:
			return "BREED_MORGAN_FLAXENCHESTNUT";
		case 648301150:
			return "BREED_MORGAN_PALOMINO";
		case -1597490733:
			return "BREED_MUSTANG_GRULLODUN";
		case 2000205872:
			return "BREED_MUSTANG_WILDBAY";
		case -1428527735:
			return "BREED_MUSTANG_TIGERSTRIPEDBAY";
		case 170010697:
			return "BREED_NOKOTA_BLUEROAN";
		case -742726637:
			return "BREED_NOKOTA_WHITEROAN";
		case -1714171692:
			return "BREED_NOKOTA_REVERSEDAPPLEROAN";
		case -103101636:
			return "BREED_SHIRE_DARKBAY";
		case -1999094324:
			return "BREED_SHIRE_LIGHTGREY";
		case 1724200240:
			return "BREED_SUFFOLKPUNCH_SORREL";
		case 237935328:
			return "BREED_SUFFOLKPUNCH_REDCHESTNUT";
		case 120848852:
			return "BREED_TENNESSEEWALKER_BLACKRABICANO";
		case -868094182:
			return "BREED_TENNESSEEWALKER_CHESTNUT";
		case -887362763:
			return "BREED_TENNESSEEWALKER_DAPPLEBAY";
		case -847714194:
			return "BREED_TENNESSEEWALKER_REDROAN";
		case 1756765331:
			return "BREED_TENNESSEEWALKER_FLAXENROAN";
		case -813071670:
			return "BREED_THOROUGHBRED_BLOODBAY";
		case -1900569233:
			return "BREED_THOROUGHBRED_DAPPLEGREY";
		case 1688250187:
			return "BREED_THOROUGHBRED_BRINDLE";
		case -1262715164:
			return "BREED_THOROUGHBRED_BLACKCHESTNUT";
		case 2010625508:
			return "BREED_THOROUGHBRED_REVERSEDAPPLEBLACK";
		case -136225010:
			return "BREED_TURKOMAN_DARKBAY";
		case -225011104:
			return "BREED_TURKOMAN_GOLD";
		case -1882436593:
			return "BREED_TURKOMAN_SILVER";
		case -757978903:
			return "BREED_BRETON_REDROAN";
		case 1909854428:
			return "BREED_BRETON_SORREL";
		case 1592694494:
			return "BREED_BRETON_GRULLODUN";
		case 981469777:
			return "BREED_BRETON_SEALBROWN";
		case 1064693514:
			return "BREED_BRETON_MEALYDAPPLEBAY";
		case -1365665739:
			return "BREED_BRETON_STEELGREY";
		case 1577022605:
			return "BREED_CRIOLLO_BLUEROANOVERO";
		case 381495209:
			return "BREED_CRIOLLO_DUN";
		case 3032834:
			return "BREED_CRIOLLO_BAYBRINDLE";
		case -1722101672:
			return "BREED_CRIOLLO_SORRELOVERO";
		case -189605757:
			return "BREED_CRIOLLO_BAYFRAMEOVERO";
		case 863391233:
			return "BREED_CRIOLLO_MARBLESABINO";
		case -952011226:
			return "BREED_GYPSYCOB_PIEBALD";
		case -356470463:
			return "BREED_GYPSYCOB_WHITEBLAGDON";
		case -1750687713:
			return "BREED_GYPSYCOB_PALOMINOBLAGDON";
		case -272192064:
			return "BREED_GYPSYCOB_SKEWBALD";
		case 1935859332:
			return "BREED_GYPSYCOB_SPLASHEDBAY";
		case -1898310680:
			return "BREED_GYPSYCOB_SPLASHEDPIEBALD";
		case 885568364:
			return "BREED_KLADRUBER_BLACK";
		case -1540355548:
			return "BREED_KLADRUBER_WHITE";
		case -601560591:
			return "BREED_KLADRUBER_CREMELLO";
		case -370362766:
			return "BREED_KLADRUBER_GREY";
		case -1698261864:
			return "BREED_KLADRUBER_DAPPLEROSEGREY";
		case -670301166:
			return "BREED_KLADRUBER_SILVER";
		case -302057902:
			return "BREED_NORFOLKROADSTER_BLACK";
		case 1257620801:
			return "BREED_NORFOLKROADSTER_SPECKLEDGREY";
		case 821735821:
			return "BREED_NORFOLKROADSTER_PIEBALDROAN";
		case -769035812:
			return "BREED_NORFOLKROADSTER_ROSEGREY";
		case -1824684932:
			return "BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN";
		case 1589592948:
			return "BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR";
		case -1331210307:
			return "BREED_DONKEY";
		case 122449722:
			return "BREED_MULE";
		case -1784502482:
			return "BREED_MULE_PAINTED";
		case -1943445834:
			return "BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN";
		case -635244104:
			return "BREED_APPALOOSA_BLACKSNOWFLAKE";
		case -1427377767:
			return "BREED_ARABIAN_GREY";
		case -2055655009:
			return "BREED_ARABIAN_REDCHESTNUT";
		case -1293672675:
			return "BREED_HUNGARIANHALFBRED_LIVERCHESTNUT";
		case -1179079660:
			return "BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE";
		case 805526368:
			return "BREED_MUSTANG_GOLDENDUN";
		case 1342496140:
			return "BREED_TENNESSEEWALKER_MAHOGANYBAY";
		case -126555855:
			return "BREED_SHIRE_RAVENBLACK";
		case 294243421:
			return "BREED_BUELL_WARVETS";
		case -997197050:
			return "BREED_JOHN_ENDLESSSUMMER";
		case -235714362:
			return "BREED_MURFREEBROOD_MANGE_01";
		case -1678164:
			return "BREED_MURFREEBROOD_MANGE_02";
		case -977833913:
			return "BREED_MURFREEBROOD_MANGE_03";
		case 1589164943:
			return "BREED_WINTER02_01";
		case -1087523615:
			return "BREED_EAGLEFLIES";
		case -496814209:
			return "BREED_GANG_BILL";
		case 2109055751:
			return "BREED_GANG_CHARLES";
		case -776673611:
			return "BREED_GANG_CHARLES_ENDLESSSUMMER";
		case 1764402253:
			return "BREED_GANG_DUTCH";
		case -1417310078:
			return "BREED_GANG_HOSEA";
		case 1096273915:
			return "BREED_GANG_JAVIER";
		case 772751081:
			return "BREED_GANG_JOHN";
		case -1140435723:
			return "BREED_GANG_KAREN";
		case 2002524329:
			return "BREED_GANG_KIERAN";
		case 1151530184:
			return "BREED_GANG_LENNY";
		case -1266525037:
			return "BREED_GANG_MICAH";
		case -2018137175:
			return "BREED_GANG_SADIE";
		case -574151692:
			return "BREED_GANG_SADIE_ENDLESSSUMMER";
		case 649786380:
			return "BREED_GANG_SEAN";
		case -1921328920:
			return "BREED_GANG_TRELAWNEY";
		case -837607790:
			return "BREED_GANG_UNCLE";
		case 370424594:
			return "BREED_GANG_UNCLE_ENDLESSSUMMER";
		case -364764277:
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "";
}

int func_1255()
{
	return 5;
}

int func_1256()
{
	return 6;
}

int func_1257(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = get_attribute_rank(iParam0, func_1878());
	return iVar0;
}

bool func_1258(int iParam0)
{
	return &Global_1952637->f_595[iParam0] > 0;
}

void func_1259(int iParam0)
{
	Global_1952637->f_595[iParam0] = &Global_1952637->f_595[iParam0] + 1;
}

int func_1260(int iParam0)
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

bool func_1261()
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

int func_1262(int iParam0)
{
	return iParam0;
}

int func_1263(int iParam0, int iParam1)
{
	if (!func_1763(iParam0, 2))
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

int func_1264(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_1879(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_479(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_669(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_1880(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_1881(iParam0, Var1[iVar63]) };
			Var65.f_12 = iParam2;
			iVar64 = func_1882(1702063850, &Var65, 1);
			if (iVar64 == -1)
			{
				return 0;
			}
			iVar63++;
		}
		if (iVar64 != -1)
		{
			Var81.f_7 = -142743235;
			Var81.f_16 = -1;
			Var81 = bParam3;
			Var81.f_7 = iParam2;
			func_1883(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!_0xb4158c8c9a3b5dce(func_480(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_1265(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1879(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1585(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_669(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_66() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_1882(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_1883(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_480(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1266(int iParam0)
{
	if (func_560(iParam0, 1573112293))
	{
		return func_1884(iParam0);
	}
	if (func_1885(iParam0))
	{
		return func_520();
	}
	switch (func_362(iParam0))
	{
		case -77448735:
			if (func_1886(iParam0))
			{
				return func_1884(iParam0);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_1884(iParam0);
		case -1520388130:
		case 1802292908:
			return func_503();
		case -2061583405:
		case 81053684:
		case 1477698721:
			return func_1226();
		case -525676072:
			return func_1226();
		case 1779021115:
			if (iParam0 == -1016714371 || iParam0 == 332793555)
			{
				return func_513();
			}
			return func_514();
		case -1823706425:
			if (iParam0 == -1115561122)
			{
				return func_516();
			}
			else
			{
				return func_515();
			}
			break;
		case -854348463:
			return func_512();
		case -2101244071:
		case 664784405:
		case 874188557:
		case 2020212423:
			return func_1887();
		default:
			if (func_177(iParam0, 0))
			{
				if (func_560(iParam0, 1919582297))
				{
					return func_519();
				}
				else if (iParam0 == -2035110427 || iParam0 == -1448210800)
				{
					return func_517();
				}
				else if (iParam0 == -1516555556)
				{
					return func_506();
				}
				else if (func_560(iParam0, 1147021565))
				{
					return func_494();
				}
			}
			return func_492();
	}
	return func_492();
}

int func_1267()
{
	return Global_1915715->f_22504.f_5;
}

int func_1268(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (func_1888(iVar0, iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1269(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1889(iParam0))
	{
		return 1;
	}
	if (!func_1890(iParam0))
	{
		return 5;
	}
	if (!bParam1 && Global_1211392->f_48[iParam0]->f_17)
	{
		if (bParam2 || Global_1211392->f_1.f_20 != 0)
		{
			return 2;
		}
	}
	if (!bParam2 && !func_1891(iParam0))
	{
		return 3;
	}
	if (func_1892(iParam0) && !func_1869())
	{
		return 4;
	}
	return 0;
}

bool func_1270(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	switch (func_461(iParam0, -949239683))
	{
		case -1420737577:
			if (!bParam1)
			{
				iVar0 = 2129866661;
				if (bParam2)
				{
					iVar0 = 1607869040;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1712126263:
			if (!bParam1)
			{
				iVar0 = 1589555562;
				if (bParam2)
				{
					iVar0 = -1424266966;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1229959999:
			if (!bParam1)
			{
				iVar0 = 1159762194;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1050374492:
			if (!bParam1)
			{
				iVar0 = 343713021;
				if (bParam2)
				{
					iVar0 = 760057945;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1513351077:
			if (!bParam1)
			{
				iVar0 = 889797228;
				if (bParam2)
				{
					iVar0 = -1043439814;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1565009253:
			if (!bParam1)
			{
				iVar0 = 1254219723;
				if (bParam2)
				{
					iVar0 = -2077441721;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 733893097:
			if (!bParam1)
			{
				iVar0 = 436157482;
				if (bParam2)
				{
					iVar0 = 1972630951;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -164980960:
			if (!bParam1)
			{
				iVar0 = -138141811;
				if (bParam2)
				{
					iVar0 = 2000759837;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1894156335:
			if (!bParam1)
			{
				iVar0 = 1801769345;
				if (bParam2)
				{
					iVar0 = 374699583;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 871191033:
			if (!bParam1)
			{
				iVar0 = 1290994194;
				if (bParam2)
				{
					iVar0 = -59421711;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1273369295:
			if (!bParam1)
			{
				iVar0 = -27851152;
				if (bParam2)
				{
					iVar0 = -1340223099;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 82200319:
			if (!bParam1)
			{
				iVar0 = -1216929452;
				if (bParam2)
				{
					iVar0 = -1140851507;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -873135685:
			if (!bParam1)
			{
				iVar0 = -1418730365;
				if (bParam2)
				{
					iVar0 = -1570312122;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 24248412:
			if (!bParam1)
			{
				iVar0 = 1014486005;
				if (bParam2)
				{
					iVar0 = 416212934;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 10252101:
			if (!bParam1)
			{
				iVar0 = -1246302402;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
	}
	return false;
}

bool func_1271()
{
	return Global_1952637->f_1675.f_1[1]->f_1 == -282754472;
}

bool func_1272(var uParam0)
{
	if (!does_entity_exist(*uParam0) || is_entity_dead(*uParam0))
	{
		return false;
	}
	if (func_1893(*uParam0, -1725579161, 0))
	{
		return true;
	}
	return false;
}

void func_1273(int iParam0)
{
	iVar0 = 406178289;
	switch (func_1894())
	{
		case 0:
			iVar0 = 406178289;
			break;
		case 1:
			iVar0 = 187883304;
			break;
		case 3:
			iVar0 = 38531903;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (func_560(iParam0, 1573112293))
		{
			func_1896(func_1895(iParam0), 1, 1);
		}
		func_1897(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_1898(iParam0);
		func_1057(iParam0, 1, 0, 562618531);
	}
}

void func_1274(int iParam0)
{
	iVar0 = 16939881;
	switch (func_1894())
	{
		case 0:
			iVar0 = 16939881;
			break;
		case 1:
			iVar0 = -1165614444;
			break;
		case 3:
			iVar0 = 968591133;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1897(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_1898(iParam0);
		func_1057(iParam0, 1, 0, 562618531);
	}
}

void func_1275(int iParam0, bool bParam1)
{
	iVar0 = -45077177;
	switch (func_1894())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -2137817968;
			}
			else
			{
				iVar0 = -45077177;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = -1947358597;
			}
			else
			{
				iVar0 = 36807409;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = -750686877;
			}
			else
			{
				iVar0 = 1293288723;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1897(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_1898(iParam0);
		func_1057(iParam0, 1, 0, 562618531);
	}
}

void func_1276(int iParam0, bool bParam1)
{
	iVar0 = 1700817728;
	switch (func_1894())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -447623645;
			}
			else
			{
				iVar0 = 1700817728;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = 1880532390;
			}
			else
			{
				iVar0 = -480771797;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = 468890170;
			}
			else
			{
				iVar0 = 764367205;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1897(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_1898(iParam0);
		func_1057(iParam0, 1, 0, 562618531);
	}
}

void func_1277(int iParam0)
{
	iVar0 = -362580870;
	switch (func_1894())
	{
		case 0:
			iVar0 = -362580870;
			break;
		case 1:
			iVar0 = -1013825131;
			break;
		case 3:
			iVar0 = -1433021121;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1897(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_1898(iParam0);
		func_1057(iParam0, 1, 0, 562618531);
	}
}

void func_1278(int iParam0)
{
	iVar0 = 2105609037;
	switch (func_1894())
	{
		case 0:
			iVar0 = 2105609037;
			break;
		case 3:
			iVar0 = -457187977;
			break;
		case 1:
			iVar0 = -1595716047;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1897(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_1898(iParam0);
		func_1057(iParam0, 1, 0, 562618531);
	}
}

void func_1279(int iParam0)
{
	iVar0 = 1964324114;
	switch (func_1894())
	{
		case 0:
			iVar0 = 1964324114;
			break;
		case 3:
			iVar0 = -654111932;
			break;
		case 1:
			iVar0 = 1826089606;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1897(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_1898(iParam0);
		func_1057(iParam0, 1, 0, 562618531);
	}
}

void func_1280(int iParam0)
{
	iVar0 = -1530144981;
	switch (func_1894())
	{
		case 0:
			iVar0 = -1530144981;
			break;
		case 3:
			iVar0 = -389189374;
			break;
		case 1:
			iVar0 = -312546963;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1897(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_1898(iParam0);
		func_1057(iParam0, 1, 0, 562618531);
	}
}

void func_1281(int iParam0)
{
	iVar0 = -1074475556;
	switch (func_1894())
	{
		case 0:
			iVar0 = -1074475556;
			break;
		case 3:
			iVar0 = 392506445;
			break;
		case 1:
			iVar0 = -1846586910;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1897(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_1898(iParam0);
		func_1057(iParam0, 1, 0, 562618531);
	}
}

void func_1282(int iParam0)
{
	iVar0 = 1076410848;
	switch (func_1894())
	{
		case 0:
			iVar0 = 1076410848;
			break;
		case 3:
			iVar0 = 1820106865;
			break;
		case 1:
			iVar0 = 1890537641;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1897(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_1898(iParam0);
		func_1057(iParam0, 1, 0, 562618531);
	}
}

void func_1283(int iParam0)
{
	iVar0 = 1516413548;
	switch (func_1894())
	{
		case 0:
			iVar0 = 1516413548;
			break;
		case 1:
			iVar0 = 1648161053;
			break;
		case 3:
			iVar0 = -1170654725;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1897(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_1898(iParam0);
		func_1057(iParam0, 1, 0, 562618531);
	}
}

void func_1284(int iParam0)
{
	iVar0 = -1454586679;
	switch (func_1894())
	{
		case 0:
			iVar0 = -1454586679;
			break;
		case 1:
			iVar0 = 1849268701;
			break;
		case 3:
			iVar0 = 881673189;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1897(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_1898(iParam0);
		func_1057(iParam0, 1, 0, 562618531);
	}
}

void func_1285(int iParam0, bool bParam1)
{
	iVar0 = 1934039819;
	switch (func_1894())
	{
		case 0:
			iVar0 = 1934039819;
			break;
		case 1:
			iVar0 = 1656393367;
			break;
		case 3:
			iVar0 = 1125253485;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (!func_1897(Global_34, iParam0, iVar0, 1, 0) && bParam1)
		{
			func_1898(iParam0);
			func_1057(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_1898(iParam0);
		func_1057(iParam0, 1, 0, 562618531);
	}
}

void func_1286(int iParam0, bool bParam1)
{
	iVar0 = -1054661625;
	switch (func_1894())
	{
		case 0:
			iVar0 = -1054661625;
			break;
		case 1:
			iVar0 = 1750832898;
			break;
		case 3:
			iVar0 = -1750311991;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (!func_1897(Global_34, iParam0, iVar0, 1, bParam1) && bParam1)
		{
			func_1898(iParam0);
			func_1057(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_1898(iParam0);
		func_1057(iParam0, 1, 0, 562618531);
	}
}

int func_1287(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 0;
		case 3:
			return 3;
		default:
			break;
	}
	return -1;
	return -1;
}

bool func_1288(int iParam0)
{
	if (func_1899())
	{
		return false;
	}
	if (!func_177(iParam0, 0))
	{
		return false;
	}
	if (!func_355(iParam0, 1))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

int func_1289(int iParam0)
{
	return func_1900(iParam0);
}

int func_1290(int iParam0, int iParam1)
{
	bVar3 = func_1901(iParam0);
	if (func_362(iParam0) == -525676072 || func_560(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_808(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_1902();
			}
			else
			{
				iVar0 = func_1903();
			}
		}
		else if (bVar1)
		{
			iVar0 = func_1904();
		}
		else
		{
			iVar0 = func_1905();
		}
	}
	else if (func_1518(&iVar2))
	{
		if (func_560(iVar2, -1303648999) || func_362(iVar2) == -525676072)
		{
			iVar0 = func_1902();
		}
		else
		{
			iVar0 = func_1903();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_1904();
	}
	else
	{
		iVar0 = func_1905();
	}
	if (iVar0 != 0)
	{
		Global_1952637->f_3483 = get_game_timer();
		_task_item_interaction(Global_34, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

int func_1291(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1141();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

void func_1292(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_1906(iParam0, iParam1))
	{
		func_1907(iParam0, iParam1, 1, bParam2, bParam3, bParam4);
		return;
	}
}

struct<4> func_1293(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_480(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_1028(1328661203, func_1680(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_1028(1328661203, func_1680(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_1028(1328661203, func_1680(), -1591664384, bParam0);
}

int func_1294(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_281;
	}
	return iParam0;
}

bool func_1295(int iParam0)
{
	iParam0 = func_1294(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_584(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return false;
	}
	if (func_1908(iVar0))
	{
		return true;
	}
	return false;
}

int func_1296()
{
	return Global_39.f_281.f_3222;
}

bool func_1297()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_3;
}

bool func_1298(int iParam0)
{
	return func_324((*Global_1134390)[network_player_id_to_int()]->f_73, iParam0);
}

bool func_1299()
{
	return !func_1298(2);
}

bool func_1300(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

void func_1301()
{
	if (!_is_any_app_running())
	{
		return;
	}
	_close_all_apps();
}

int func_1302(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

int func_1303(int iParam0, bool bParam1)
{
	if (network_is_player_active(iParam0))
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if (Global_1196339->f_1[iVar1]->f_1 != -1 && func_1909(iVar1, 64, iVar0))
			{
				if (bParam1)
				{
					if (&Global_1196898->f_78[iVar1] >= 2)
					{
						return Global_1196339->f_1[iVar1]->f_1;
					}
				}
				else if (&Global_1196898->f_78[iVar1] >= 5)
				{
					return Global_1196339->f_1[iVar1]->f_1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_1304(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return &(Global_1196898->f_1[iParam0]);
}

var func_1305(int iParam0, int iParam1)
{
	return func_1910(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_1306(struct<19> Param0, float fParam19, bool bParam20, bool bParam21)
{
	if (!_0x179a6f0ee2e79026(&fParam19))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = player_id();
	Param0.f_2 = get_network_time_accurate();
	if (!bParam20)
	{
		if (Param0.f_18)
		{
			if (bParam21)
			{
				Var0.f_12 = -1;
				Var0.f_12.f_1 = -1;
				Var0.f_14 = 255;
				Var0.f_15 = 255;
				Var0.f_20 = -1;
				Var0 = { Param0 };
				Var0.f_19 = fParam19;
				Var0.f_20 = Param0.f_2;
				func_1911(&(Global_1071686->f_23044), Var0);
				return;
			}
		}
	}
	trigger_script_event(1, &Param0, 19, 7, &fParam19);
}

bool func_1307(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

void func_1308()
{
	Global_1913694->f_1583 = get_game_timer();
	Global_1913694->f_1581 = 1;
}

void func_1309(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	(*Global_1138048)[iVar0]->f_7 = ((*Global_1138048)[iVar0]->f_7 || iParam0);
}

char* func_1310(int iParam0)
{
	switch (iParam0)
	{
		case -1108993414:
			return "NET_TRADE_COLLECTOR_XP";
		case -390042476:
			return "NET_TRADE_BOUNTY_HUNTER_XP";
		case -657484822:
			return "NET_TRADE_TRADER_XP";
		case -2024553896:
			return "NET_TRADE_MOONSHINER_XP";
		case -399749454:
			return "NET_TRADE_NATURALIST_XP";
		default:
			break;
	}
	return "";
}

var func_1311(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _0xb249ebcb30dd88e0(&Var0, &Var13, iParam8);
	func_1912(sParam0, sParam1, iParam2);
	return uVar20;
}

void func_1312(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = 0;
	while (iVar0 < Global_1913504->f_3)
	{
		if ((((&Global_1913504->f_4[iVar0] == iParam0 && Global_1913504->f_4[iVar0]->f_2 == bParam2) && Global_1913504->f_4[iVar0]->f_3 == bParam3) && Global_1913504->f_4[iVar0]->f_4 == bParam4) && Global_1913504->f_4[iVar0]->f_5 == bParam5)
		{
			Global_1913504->f_4[iVar0]->f_1 = (Global_1913504->f_4[iVar0]->f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1913504->f_3 < 19)
	{
		Global_1913504->f_4[Global_1913504->f_3] = iParam0;
		Global_1913504->f_4[Global_1913504->f_3]->f_1 = iParam1;
		Global_1913504->f_4[Global_1913504->f_3]->f_2 = bParam2;
		Global_1913504->f_4[Global_1913504->f_3]->f_3 = bParam3;
		Global_1913504->f_4[Global_1913504->f_3]->f_4 = bParam4;
		Global_1913504->f_4[Global_1913504->f_3]->f_5 = bParam5;
		Global_1913504->f_3++;
	}
}

char* func_1313(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1314(int iParam0, int iParam1)
{
	if (!func_177(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_1315(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				Jump @228; //curOff = 56
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
					Jump @228; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @228; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @228; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*sParam1 = { *Var3.f_2[iVar0] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_1316(int iParam0)
{
	if (func_560(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_560(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_560(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_560(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_560(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_560(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_560(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_560(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_560(iParam0, -352095726) || func_560(iParam0, -2014783736)) || func_560(iParam0, -545064757)) || func_560(iParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_1317(int iParam0)
{
	if (func_560(iParam0, -189374246))
	{
		if (((func_1913(iParam0, -1305775593) || func_1913(iParam0, 1384151091)) || func_1913(iParam0, 2075388272)) || func_1913(iParam0, -1738780413))
		{
			return true;
		}
	}
	if (func_560(iParam0, -753854379) || func_560(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

bool func_1318(int iParam0)
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

int func_1319(int iParam0)
{
	if (!func_177(iParam0, 0))
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

int func_1320(int iParam0)
{
	iVar0 = func_1914(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_1915(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_1916(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (_0x8750f69a720c2e41(iVar11, iVar13, &iVar14) && func_1917(iVar14))
			{
				func_1918(iVar11);
				return iVar14;
			}
			iVar13++;
		}
		func_1918(iVar11);
	}
	return 0;
}

bool func_1321(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, -949239683))
	{
		return true;
	}
	return false;
}

int func_1322(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_177(iParam0, 0) && !func_1763(func_1262(iParam0), 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

char* func_1323(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_1324(int iParam0, int iParam1)
{
	iVar0 = func_1919(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_1325(int iParam0, char* sParam1)
{
	if (!func_177(iParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_1920(iParam0), 128);
	iVar0 = get_length_of_literal_string(sParam1);
	if (!func_1921(iParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_1922(iParam0), 128);
	if (is_string_null_or_empty(&cVar1))
	{
		return false;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + get_length_of_literal_string(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return false;
	}
	*sParam1 = { cVar1 };
	return true;
}

char* func_1326(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_1327(int iParam0)
{
	iVar0 = get_hash_key("PXPT_NULL");
	if (iParam0 == 186)
	{
		return iVar0;
	}
	if (!func_1398(iParam0))
	{
		return iVar0;
	}
	iVar0 = Global_1139381->f_11[iParam0]->f_1;
	return iVar0;
}

void func_1328(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_604())
	{
		Global_1913504->f_128 = get_game_timer();
		Global_1913504->f_129 = iParam1;
	}
	Global_1913504->f_130 = (Global_1913504->f_130 + iParam0);
}

int func_1329(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!&Global_1296859->f_22[iParam0])
	{
		return 0;
	}
	if (!&Global_1296859->f_22[iParam1])
	{
		return 0;
	}
	if (!_network_is_player_index_valid(&(Global_1296859->f_154[iParam0])))
	{
		return 0;
	}
	if (!_network_is_player_index_valid(&(Global_1296859->f_154[iParam1])))
	{
		return 0;
	}
	return func_1923(&(Global_1296859->f_154[iParam0]), &(Global_1296859->f_154[iParam1]));
}

void func_1330(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_604())
	{
		Global_1913504->f_125 = get_game_timer();
		Global_1913504->f_126 = iParam1;
	}
	Global_1913504->f_127 = (Global_1913504->f_127 + iParam0);
}

void func_1331(int iParam0)
{
	if (func_607())
	{
		Global_1913504->f_131 = get_game_timer();
		Global_1913504->f_132 = iParam0;
	}
	Global_1913504->f_133++;
}

bool func_1332()
{
	if (func_1427(Global_34, 0))
	{
		if (_is_ped_using_scenario_hash(Global_34, 1855656219))
		{
			return true;
		}
	}
	return false;
}

bool func_1333(int iParam0, int iParam1)
{
	if (!func_177(iParam0, 0))
	{
		return false;
	}
	if (func_1924(iParam0))
	{
		_0xd962f8579d702db5();
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (!is_entity_a_ped(iParam1))
	{
		return false;
	}
	iVar0 = get_ped_index_from_entity_index(iParam1);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (func_1924(iParam0) && is_ped_in_writhe(iVar0))
	{
		if (func_1925(iVar0, iParam0))
		{
			return true;
		}
		return false;
	}
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	if (is_ped_injured(iVar0))
	{
		return false;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return false;
	}
	if (func_1926() == 1)
	{
		func_1927(iVar0);
		func_1928(iParam0);
		func_1929(1);
	}
	else
	{
		return false;
	}
	return true;
}

int func_1334(int iParam0, int iParam1)
{
	if (!func_326(*iParam0))
	{
		return -1;
	}
	iVar0 = -1;
	iVar5 = func_329(*iParam0);
	switch (*iParam0)
	{
		case 4:
			iVar2 = iVar5;
			iVar1 = func_1930(iVar2);
			if (iVar1 == -1)
			{
			}
			else
			{
				iVar0 = func_1931(iVar1);
			}
			break;
		case 3:
			iVar3 = func_1932(iVar5);
			iVar4 = func_1933(iVar3);
			if (iVar4 == -1)
			{
			}
			else
			{
				iVar0 = func_1934(iVar4);
			}
			break;
		default:
			break;
	}
	return iVar0;
}

bool func_1335(int iParam0, int iParam1, bool bParam2)
{
	return !_0x375f5870a7b8bec1(func_1337(func_1935(iParam0, iParam1, bParam2)));
}

struct<8> func_1336(int iParam0, int iParam1)
{
	return func_1935(iParam0, iParam1, 1);
}

char* func_1337(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

bool func_1338(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939493->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1939493)[iVar0]->f_10)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1339(int iParam0)
{
	return (Global_1915692->f_22 && iParam0) != 0;
}

bool func_1340()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	if (_get_number_of_references_of_script_with_name_hash(872480335) > 0)
	{
		return true;
	}
	return false;
}

bool func_1341()
{
	return (Global_1893587 & 1 != 0 && func_108() != -1);
}

int func_1342(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = get_attribute_rank(iParam0, func_1936());
	return iVar0;
}

int func_1343(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return 0;
	}
	if (func_1937(iParam1, &iVar0))
	{
		return _get_attribute_core_value(iParam0, iVar0);
	}
	return 0;
}

int func_1344(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = get_attribute_rank(iParam0, func_1938());
	return iVar0;
}

bool func_1345(bool bParam0)
{
	if (func_624())
	{
		return false;
	}
	if ((!is_screen_faded_in() || is_screen_fading_in()) || is_screen_fading_out())
	{
		return false;
	}
	if (func_1126(&(Global_1102219->f_4), 1, 5))
	{
		return false;
	}
	if (!bParam0)
	{
		if (!func_439())
		{
			return false;
		}
	}
	if ((Global_13 || Global_1048584) // PointerArith || func_1939())
	{
		return false;
	}
	if (!func_1206())
	{
		return false;
	}
	if (func_148())
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
	if (func_1940())
	{
		return false;
	}
	return true;
}

bool func_1346(int iParam0)
{
	return !func_1941(iParam0, 1);
}

bool func_1347(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return Global_8123[iParam0] & 32 != 0;
	}
	return Global_1071686->f_19674[iParam0] & 32 != 0;
}

float func_1348(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_1349(struct<2> Param0, var uParam2)
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

int func_1350(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return Global_39.f_3647[iParam0]->f_2;
	}
	return Global_25003[iParam0]->f_2;
}

void func_1351(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_3647[iParam0] = iParam1;
		return;
	}
	Global_25003[iParam0] = iParam1;
	return;
}

void func_1352(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_3647[iParam0]->f_1 = iParam1;
		return;
	}
	Global_25003[iParam0]->f_1 = iParam1;
	return;
}

void func_1353(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_3647[iParam0]->f_2 = iParam1;
		return;
	}
	Global_25003[iParam0]->f_2 = iParam1;
	return;
}

void func_1354(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_3647[iParam0]->f_3 = iParam1;
		return;
	}
	Global_25003[iParam0]->f_3 = iParam1;
	return;
}

void func_1355(int iParam0)
{
	vVar0 = { func_1942(func_1350(iParam0)) };
	Global_17081[iParam0] = _blip_add_for_coord(func_777(func_634(iParam0)), vVar0);
	set_blip_sprite(&(Global_17081[iParam0]), func_1482(func_634(iParam0)), true);
	set_blip_flash_timer(&(Global_17081[iParam0]), func_634(iParam0), iParam0);
}

int func_1356(int iParam0, bool bParam1)
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

int func_1357(vector3 vParam0, float fParam3)
{
	fVar0 = 2.147484E+09f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 500)
	{
		if (!func_1943(iVar2))
		{
		}
		else
		{
			vVar3 = { func_1944(iVar2) };
			vVar6 = { vParam0 };
			fVar9 = get_distance_between_coords(vVar3, vVar6, false);
			if (fVar9 > fParam3)
			{
			}
			else if (!func_1945(iVar2, 0, 0))
			{
			}
			else if (fVar9 < fVar0)
			{
				fVar0 = fVar9;
				iVar1 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_1358(int iParam0)
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

int func_1359(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	iVar1 = _0x5463c962bc7777c3(iParam0, iParam1, &uVar0, 1, 0);
	if (iVar1 != 0)
	{
		return uVar0;
	}
	return 0;
}

int func_1360(int iParam0)
{
	iVar0 = 0;
	if (_0x9a100f1cf4546629(iParam0))
	{
		iVar0 = func_1946(iParam0);
	}
	return iVar0;
}

void func_1361(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar0++;
	}
}

void func_1362(var uParam0)
{
	if (func_162(*uParam0))
	{
		func_163(uParam0, 1, 1);
		*uParam0 = 0;
	}
}

void func_1363(int* iParam0)
{
	if (_0xf9b91c5129eabc08(Global_34, "MGBegin"))
	{
		set_bit(iParam0, 0);
	}
	if (_0xf9b91c5129eabc08(Global_34, "MGEnd"))
	{
		clear_bit(iParam0, 0);
	}
	if (_0xf9b91c5129eabc08(Global_34, "ReadyForCut"))
	{
		set_bit(iParam0, 1);
	}
}

void func_1364(var uParam0)
{
	func_1947(1, *uParam0);
	switch (uParam0->f_9)
	{
		case 0:
			func_1948(&(uParam0->f_46.f_37), 1998417427, "SKN_MSH", 4);
			func_1949(uParam0, 1);
			break;
		case 1:
			if (func_1950(uParam0, 1, "CutBegin"))
			{
				func_1951(uParam0);
			}
			break;
	}
}

void func_1365(var uParam0)
{
	func_1947(2, *uParam0);
	switch (uParam0->f_9)
	{
		case 0:
			func_1948(&(uParam0->f_46.f_37), 1998417427, "SKN_MSH", 4);
			func_1949(uParam0, 1);
			break;
		case 1:
			if (func_1950(uParam0, 1, "CutBegin"))
			{
				func_1952(uParam0);
			}
			break;
	}
}

void func_1366(var uParam0)
{
	func_1947(0, *uParam0);
	switch (uParam0->f_9)
	{
		case 0:
			func_1948(&(uParam0->f_46.f_37), 1998417427, "SKN_MSH", 4);
			func_1949(uParam0, 1);
			break;
		case 1:
			if (func_1950(uParam0, 1, "CutBegin"))
			{
				func_1953(uParam0);
			}
			break;
	}
}

void func_1367(var uParam0)
{
	func_1954(uParam0, 0f);
}

int func_1368(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 1)
	{
		iVar0 = 3;
	}
	else
	{
		iVar1 = _get_ped_quality(iParam0);
		switch (iVar1)
		{
			case 0:
				iVar0 = 0;
				break;
			case 1:
				iVar0 = 1;
				break;
			case -1:
			case 2:
				iVar0 = 2;
				break;
		}
	}
	return iVar0;
}

void func_1369(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (&uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case 291123060:
			case 617531372:
				if (&uParam0->f_1[iVar1] == 617531372 || &uParam0->f_1[iVar1] == 291123060)
				{
					bVar0 = true;
				}
				break;
			case 1356624740:
			case 1884295263:
				if (&uParam0->f_1[iVar1] == 1356624740 || &uParam0->f_1[iVar1] == 1884295263)
				{
					bVar0 = true;
				}
				break;
			case -1850666435:
			case 1551239286:
			case 1937393363:
				if ((&uParam0->f_1[iVar1] == 1551239286 || &uParam0->f_1[iVar1] == -1850666435) || &uParam0->f_1[iVar1] == 1937393363)
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			uParam0->f_1[iVar1] = iParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

bool func_1370(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!decor_exist_on(iParam0, func_1955()))
	{
		return false;
	}
	return func_324(decor_get_int(iParam0, func_1955()), iParam1);
}

int func_1371(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1956(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_1957(uParam2, iParam0, Var1);
	return 1;
}

bool func_1372(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_66() == -1)
	{
		if (func_1052(iParam0) && func_1958(iParam0))
		{
			func_1959(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (iParam0 == -1569615261)
	{
		return false;
	}
	return true;
}

bool func_1373(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1960(iParam0, iParam1);
	Var0 = { func_1027(iParam0, 0, 1) };
	iVar5 = func_1764(iParam0, &Var0, 0, 0);
	iVar6 = func_1961(iParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_560(iParam0, -2051813666))
		{
			func_165(674, 1);
		}
		else if (func_66() == -1)
		{
			func_165(673, 0);
		}
	}
	if (func_1082(iParam0, &Var0, *iParam1, 0, 0, -1, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_1374(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_1873())
	{
		return;
	}
	switch (func_461(iParam0, -949239683))
	{
		case -1565009253:
		case -1420737577:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1940144->f_70.f_5 = 1;
			Global_1940144->f_70.f_6 = 0;
			Global_1940144->f_70.f_1 = iParam0;
			break;
	}
}

void func_1375(int iParam0)
{
	if (!func_1655(iParam0))
	{
		return;
	}
	func_1962(iParam0);
	func_1963(iParam0);
}

void func_1376(int iParam0)
{
	if (func_560(iParam0, -1522723129))
	{
		func_387(-848633709, 0, 255, 0, 0);
	}
	else if (func_560(iParam0, -283942357))
	{
		func_387(-981153234, 0, 255, 0, 0);
	}
	else if (func_560(iParam0, 683680997))
	{
		func_387(-756350192, 0, 255, 0, 0);
	}
	else if (func_560(iParam0, 1307628809))
	{
		func_387(603094518, 0, 255, 0, 0);
	}
}

void func_1377(int iParam0)
{
	if (Global_1572887->f_13 != -1)
	{
		return;
	}
	if (!func_336(iParam0))
	{
		return;
	}
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	_unlock_set_unlocked(iVar0, true);
}

bool func_1378(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_34, iParam0, 0, false))
	{
		Var0 = { func_1027(iParam0, 0, 1) };
		if (func_1735(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_1736(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_1028(iParam0, Var0, Var0.f_4, 0) };
				func_1265(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_669(0))
	{
		_give_weapon_to_ped_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!has_ped_got_weapon(Global_34, iParam0, 0, false))
		{
			return false;
		}
		func_1054(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
		func_1055(iParam0, iParam1);
		return true;
	}
	if (!has_ped_got_weapon(Global_34, iParam0, 0, false))
	{
		return false;
	}
	if (iParam1 > 0)
	{
	}
	_give_weapon_to_ped_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return true;
}

bool func_1379(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_1058(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_66() == -1)
		{
			func_1377(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1964(iVar0);
			}
		}
		if (!func_1082(iParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_1959(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1053(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_1378(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || _is_weapon_binoculars(iVar0))
			{
				func_1378(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_lasso(iVar0))
			{
				func_1378(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_1148())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1965(iVar0))
				{
					func_1378(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_1378(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1966(Global_34, 2, 0, 1);
				if ((((func_336(iVar7) && !Global_26640) && iVar7 != iVar0) && !func_355(-1185145312, 1)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_34, iVar7);
				}
				if (func_336(iVar7) && func_355(-1185145312, 1))
				{
					if (!func_1378(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_1378(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_1378(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (_0x9f0e1892c7f228a8(1) != 0 && iParam1 == 1248274121)
	{
		func_165(515, 1);
	}
	return true;
}

int func_1380(int iParam0, int iParam1, int iParam2)
{
	if (!func_1062(iParam0))
	{
		return 0;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_34, iParam0);
	if (func_336(iVar4))
	{
		get_max_ammo(Global_34, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (_is_weapon_bow(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = _get_weapon_clip_size(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * absi(*iParam1));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_646(func_1967(iParam0), func_645(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_669(0))
	{
		if (func_1054(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_1056(iParam0, *iParam1, iParam2);
	}
	return 0;
}

struct<2> func_1381(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

bool func_1382()
{
	return false;
}

int func_1383(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	if (func_66() == 0)
	{
		func_1051(iParam0, 0);
		return 0;
	}
	iVar0 = func_1968(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_605(iVar0, sParam4, iParam5, 0);
	}
	func_1969(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_1384(int iParam0)
{
}

void func_1385(int iParam0)
{
}

void func_1386(int iParam0)
{
}

void func_1387(int iParam0)
{
}

void func_1388()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_1389(int iParam0, int iParam1)
{
	func_1069(iParam0, iParam1, &uVar0);
}

void func_1390(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_487(iParam0, &iVar0, &iVar1);
	if (!func_488(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1083(iParam0, 1024))
	{
		return;
	}
	func_489(iVar0, iVar1);
	Global_1904651->f_33[iParam0]->f_3[0] = iParam1;
	if (!bParam3)
	{
		Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 1;
	}
	else
	{
		Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 5;
	}
}

void func_1391(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591;
			break;
		case 1358243310:
			*iParam0 = 1463786584;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
	}
}

void func_1392(int iParam0)
{
	if (func_66() != -1)
	{
		return;
	}
}

struct<2> func_1393(int iParam0)
{
	if (!func_177(iParam0, 0))
	{
		return Var0;
	}
	if (func_560(iParam0, -305066475))
	{
		if (func_66() == -1)
		{
			if (func_560(iParam0, -537818634))
			{
				return func_360(189951448);
			}
			else
			{
				return func_360(1176172851);
			}
		}
	}
	else if (func_560(iParam0, -537818634))
	{
		return func_360(-963660207);
	}
	if (func_560(iParam0, 2084895747))
	{
		return func_360(1694039471);
	}
	return Var2;
}

void func_1394(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			break;
	}
}

void func_1395(int iParam0, char* sParam1)
{
	sVar0 = func_1970(Global_1903071->f_37);
	func_1311(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1971(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1396(int iParam0)
{
	switch (iParam0)
	{
		case 213770430:
			return 0;
		case 1348537070:
			return 1;
		case 2017178795:
			return 2;
		case 212311210:
			return 3;
		case 46595604:
			return 4;
		case -1745952399:
			return 5;
		case 25467793:
			return 6;
		case -1764615555:
			return 7;
		case -1891092538:
			return 8;
		case -1468541253:
			return 9;
		case -198148097:
			return 10;
		case 1928083493:
			return 11;
		case 478908476:
			return 12;
		case 523209045:
			return 13;
		case 1642298338:
			return 14;
		case -1999708183:
			return 15;
		case 1345549049:
			return 16;
		case -3352312:
			return 17;
		case -1752367056:
			return 18;
		case 1323976525:
			return 19;
		case 1884959376:
			return 20;
		case -1053061729:
			return 21;
		case 1506759168:
			return 22;
		case -1403248324:
			return 23;
		case -1637740075:
			return 24;
		case -1206946221:
			return 25;
		case 1529054658:
			return 26;
		case -1923481756:
			return 27;
		case -778155050:
			return 28;
		case 1384018639:
			return 29;
		case 1368901284:
			return 30;
		case -93902562:
			return 31;
		case 272503815:
			return 32;
		case 559428004:
			return 33;
		case -275475422:
			return 34;
		case -154220915:
			return 35;
		case -1095861561:
			return 36;
		case 1726862171:
			return 37;
		case 1998421924:
			return 38;
		case 1353626311:
			return 39;
		case 1722015409:
			return 40;
		case 425237725:
			return 41;
		case -562309153:
			return 42;
		case -105344698:
			return 43;
		case 383037888:
			return 44;
		case 63707395:
			return 45;
		case -2060762448:
			return 46;
		case -1569391289:
			return 47;
		case -1155060053:
			return 48;
		case 24197950:
			return 49;
		case 1386610443:
			return 50;
		case -40736125:
			return 51;
		case 1655887779:
			return 52;
		case -1627501895:
			return 53;
		case 329346540:
			return 54;
		case 898765353:
			return 55;
		case -744825749:
			return 56;
		case 1967234998:
			return 57;
		case -262236690:
			return 58;
		case 1759470394:
			return 59;
		case -544714618:
			return 60;
		case -178619350:
			return 61;
		case 520590069:
			return 62;
		case -861242678:
			return 63;
		case -540860165:
			return 64;
		case 1614455280:
			return 65;
		case -254726968:
			return 66;
		case 880617757:
			return 67;
		case 447353038:
			return 68;
		case 2003650221:
			return 69;
		case 672493128:
			return 70;
		case -1781511804:
			return 71;
		case -1541773800:
			return 72;
		case 1919779519:
			return 73;
		case 1632657597:
			return 74;
		case -829467823:
			return 75;
		case 1541893635:
			return 76;
		case -366146928:
			return 77;
		case 433584891:
			return 78;
		case 1240325042:
			return 79;
		case 2101859233:
			return 80;
		case 473830038:
			return 81;
		case 437161603:
			return 82;
		case 601661983:
			return 83;
		case -2017102491:
			return 84;
		case 811450630:
			return 85;
		case 438461435:
			return 86;
		case -327776120:
			return 87;
		case -558895877:
			return 88;
		case -1881463122:
			return 89;
		case -985051046:
			return 90;
		case -247057520:
			return 91;
		case 1633817602:
			return 92;
		case 1061539774:
			return 93;
		case -1052450204:
			return 94;
		case -1479738967:
			return 95;
		case 845924662:
			return 96;
		case 2145299608:
			return 97;
		case 493877415:
			return 98;
		case 1451588297:
			return 99;
		case -936944153:
			return 100;
		case -1336693184:
			return 101;
		case -214387307:
			return 102;
		case -1012167733:
			return 103;
		case -366634668:
			return 104;
		case 591399820:
			return 105;
		case 888844033:
			return 106;
		case -1985761891:
			return 107;
		case -876425493:
			return 108;
		case 1312398658:
			return 109;
		case 1695107921:
			return 110;
		case 1043824046:
			return 111;
		case 1540009735:
			return 112;
		case -1824580213:
			return 113;
		case -654694140:
			return 114;
		case -1639291997:
			return 115;
		case -2130138848:
			return 116;
		case -898581525:
			return 117;
		case -1127291883:
			return 118;
		case 663566736:
			return 119;
		case 1052207076:
			return 120;
		case 36685199:
			return 121;
		case 1632831075:
			return 122;
		case 529429711:
			return 123;
		case -1926299826:
			return 124;
		case -871656015:
			return 125;
		case -642342576:
			return 126;
		case -2140035119:
			return 127;
		case -640749070:
			return 128;
		case -1564950002:
			return 129;
		case -1852448096:
			return 130;
		case 2141438700:
			return 131;
		case -1515489228:
			return 132;
		case 1068714805:
			return 133;
		case 1695807596:
			return 134;
		case 1916639104:
			return 135;
		case 1510432569:
			return 136;
		case 410557997:
			return 137;
		case 1920121310:
			return 138;
		case -1561716032:
			return 139;
		case -1337379458:
			return 140;
		case 791886393:
			return 141;
		case 560026862:
			return 142;
		case -764954888:
			return 143;
		case 2104364294:
			return 144;
		case 1180518217:
			return 145;
		case -431136699:
			return 146;
		case 590613833:
			return 147;
		case -827464642:
			return 148;
		case -1435329592:
			return 149;
		case -1993218253:
			return 150;
		case -221407290:
			return 151;
		case 1016279421:
			return 152;
		case 1620984137:
			return 153;
		case 366252583:
			return 154;
		case -524827520:
			return 155;
		case 1562932610:
			return 156;
		case 1441468745:
			return 157;
		case -832999674:
			return 158;
		case -1283693608:
			return 159;
		case 1206025271:
			return 160;
		case -1944736605:
			return 161;
		case 1827414530:
			return 162;
		case -1857539611:
			return 163;
		case -406286793:
			return 164;
		case -46308908:
			return 165;
		case -1181995254:
			return 166;
		case 1968031820:
			return 167;
		case 567556010:
			return 168;
		case -312973943:
			return 169;
		case -549920546:
			return 170;
		case -592681242:
			return 171;
		case 1056516570:
			return 172;
		case 923510750:
			return 173;
		case -1336297396:
			return 174;
		case 1380449358:
			return 175;
		case -525035223:
			return 176;
		case -1058692534:
			return 177;
		case 1361326874:
			return 178;
		case 1914833773:
			return 179;
		case 1104632578:
			return 180;
		case 1493357618:
			return 181;
		case -915232415:
			return 182;
		case 117890140:
			return 183;
		case -1131931767:
			return 184;
		case -2070842134:
			return 185;
		case -636857036:
			return 186;
		default:
			break;
	}
	return 186;
}

bool func_1397(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_413(36, iParam0);
}

bool func_1398(int iParam0)
{
	if (iParam0 >= 1 && iParam0 <= 184)
	{
		return true;
	}
	return false;
}

int func_1399(int iParam0)
{
	if (!func_1398(iParam0))
	{
		return 0;
	}
	return Global_1139381->f_11[iParam0]->f_2;
}

bool func_1400()
{
	return (func_1972(0) && func_1972(1));
}

int func_1401(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

int func_1402(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1973(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1956200->f_1431.f_50[iParam0]);
		case 1:
			return &(Global_1956200->f_1565.f_2.f_50[iParam0]);
		default:
			break;
	}
	return 1;
}

int func_1403(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -84152915;
		case 2:
			return -1789085602;
		case 3:
			return -593725333;
		case 4:
			return 1619211297;
		case 5:
			return -1448204146;
		case 6:
			return -1918007793;
		case 7:
			return -2108757294;
		case 8:
			return -787840584;
		case 9:
			return -7905424;
		case 10:
			return -376205482;
		case 11:
			return -1753179328;
		case 12:
			return -1876855008;
		case 13:
			return 550082662;
		case 14:
			return -1964113;
		case 15:
			return 196458601;
		case 16:
			return 22941087;
		case 17:
			return 2017633379;
		case 24:
			return 253945992;
		case 25:
			return -1689046118;
		case 26:
			return -483357612;
		case 27:
			return -430722038;
		case 28:
			return 64082831;
		case 35:
			return -1498321291;
		case 36:
			return 1654907663;
		case 37:
			return 1059449568;
		case 38:
			return 2073287291;
		case 39:
			return 1110270789;
		case 40:
			return 417802449;
		case 41:
			return 2136672177;
		case 42:
			return -1930911028;
		case 43:
			return -739528491;
		case 55:
			return 2075984360;
		default:
			break;
	}
	return 0;
}

int func_1404(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		default:
			return 0;
			return 3;
		case 1:
			return 3;
		case 2:
			return 3;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 1;
		case 6:
			return 3;
	}
}

int func_1405(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		default:
			return 0;
			return 120;
		case 1:
			return 60;
		case 2:
			return 60;
		case 3:
			return 60;
		case 4:
			return 60;
		case 5:
			return 120;
		case 6:
			return 120;
	}
}

int func_1406(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		default:
			return -1;
			return 353568324;
		case 1:
			return -86995487;
		case 2:
			return -1854780893;
		case 3:
			return 618068466;
		case 4:
			return 499656970;
		case 5:
			return 640330073;
		case 6:
			return -892848695;
	}
}

bool func_1407(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_1408(var uParam0)
{
	return func_1407(*uParam0, 2);
}

bool func_1409(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x59fa676177dbe4c9(iParam0) == 4;
}

void func_1410(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		set_bit(&(uParam0->f_27), 1);
	}
	else
	{
		clear_bit(&(uParam0->f_27), 1);
	}
}

void func_1411(vector3 vParam0, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	bVar0 = func_1974(iParam4);
	if (!is_valid_interior(iParam8))
	{
		if (iParam5 != 0)
		{
			iParam8 = get_interior_at_coords_with_typehash(vParam0, iParam5);
		}
		else
		{
			iParam8 = get_interior_at_coords(vParam0);
		}
	}
	if (is_valid_interior(iParam8))
	{
		if (func_1975(iParam4) != bVar0 || is_interior_entity_set_active(iParam8, sParam3) != bVar0)
		{
			if (func_1976(iParam8, iParam6, bParam7))
			{
				if (bVar0)
				{
					activate_interior_entity_set(iParam8, sParam3, 0);
					func_1977(iParam4);
					if (bParam7)
					{
						_0x2533f2ab0eb9c6f9(iParam8, 1);
						_0xfe2b3d5500b1b2e4(iParam8, 1);
					}
				}
				else
				{
					deactivate_interior_entity_set(iParam8, sParam3, true);
					func_1978(iParam4);
					if (bParam7)
					{
						_0x2533f2ab0eb9c6f9(iParam8, 0);
						_0xfe2b3d5500b1b2e4(iParam8, 0);
					}
				}
			}
		}
	}
}

void func_1412(int iParam0)
{
	Global_1051439->f_72[iParam0]->f_49 = 0;
}

void func_1413(int iParam0)
{
	Global_1051439->f_72[iParam0]->f_50 = 0;
}

void func_1414(int iParam0)
{
	Global_1051439->f_72[iParam0]->f_1 = 0;
}

void func_1415(int iParam0)
{
	if (Global_1051439->f_41 < 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1051439->f_41)
	{
		if (iParam0 == Global_1051439[iVar0])
		{
			iVar1 = iVar0;
			bVar2 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar2)
	{
		return;
	}
	Global_1051439->f_41 = (Global_1051439->f_41 - 1);
	if (Global_1051439->f_41 < 0)
	{
		Global_1051439->f_41 = 0;
	}
	(*Global_1051439)[iVar1] = Global_1051439[Global_1051439->f_41];
}

bool func_1416(int iParam0)
{
	if (((((iParam0 == 28 || iParam0 == 29) || iParam0 == 38) || iParam0 == 27) || iParam0 == 15) || iParam0 == 39)
	{
		return true;
	}
	if (func_1417(iParam0, 65536))
	{
		return true;
	}
	return false;
}

bool func_1417(int iParam0, int iParam1)
{
	return (Global_1051439->f_72[iParam0]->f_49 && iParam1) != 0;
}

int func_1418(int iParam0)
{
	return Global_1051439->f_72[iParam0]->f_47;
}

void func_1419(int iParam0)
{
}

float func_1420()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_1421(bool bParam0)
{
	if (bParam0)
	{
		func_1979(4);
	}
	else
	{
		func_735(4);
	}
}

bool func_1422(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_3 & 32 != 0;
	}
	return func_956(32, iParam0);
}

bool func_1423(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return true;
	}
	return false;
}

bool func_1424(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return func_324(Global_1071686->f_21416.f_1[iParam0]->f_7, iParam1);
}

bool func_1425(int iParam0, int iParam1)
{
	if (!func_1131(iParam0))
	{
		return false;
	}
	func_1132(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return true;
	}
	return false;
}

bool func_1426(int iParam0)
{
	if (func_544())
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_1427(int iParam0, int iParam1)
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
	if (func_324(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_324(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_324(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_324(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_324(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_324(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_324(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_324(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_1428(int iParam0, int iParam1)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam1]->f_24))
	{
		if (func_291(iParam0, Global_1051439->f_72[iParam1]->f_24, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_1429(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	if (func_556(16))
	{
		return Global_1940258->f_51 == iParam0;
	}
	if (!is_entity_dead(get_player_ped(player_id())))
	{
		if (_0x3ee1f7a8c32f24e1(player_id(), &iVar0, iParam2, iParam3))
		{
			if (does_entity_exist(iVar0))
			{
				if (is_entity_a_ped(iVar0))
				{
					func_56(16);
					Global_1940258->f_51 = get_ped_index_from_entity_index(iVar0);
					if (Global_1940258->f_51 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

var func_1430(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

void func_1431(int iParam0, int iParam1)
{
	if (!&Global_1959375->f_648[iParam0] == 1)
	{
		switch (iParam0)
		{
			case 10:
				func_1980(func_108());
				break;
			case 15:
				func_1981();
				break;
			case 38:
				func_1982();
				break;
			case 39:
				func_1983();
				break;
		}
		if (does_entity_exist(iParam1) && !func_1234(iParam1, 0))
		{
			if (!is_string_null_or_empty(func_1337(*Global_1959375->f_327[iParam0])))
			{
				set_ambient_voice_name(iParam1, Global_1959375->f_327[iParam0]);
				Global_1959375->f_648[iParam0] = 1;
			}
		}
	}
}

int func_1432(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

void func_1433(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_1984(uParam0, iParam1, sParam2))
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

Vector3 func_1434(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_1435(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!_0xd89504d9d7d5057d(&vParam1))
	{
		bVar0 = create_new_scripted_conversation(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_1985(vParam1, uParam0);
		if (bParam6)
		{
			preload_script_conversation(&vParam1, true, true, bParam7);
		}
		else
		{
			start_script_conversation(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			_0x40ca665ab9d8d505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

int func_1436(int iParam0)
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

int func_1437(int iParam0, int iParam1)
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

void func_1438(int iParam0, int iParam1)
{
	if (!func_626(iParam0))
	{
		return;
	}
	Global_1051439->f_3073[iParam0] = (Global_1051439->f_3073[iParam0] || iParam1);
}

bool func_1439(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 == func_1986())
	{
		return true;
	}
	if (&Global_1051439->f_3745[38] == iParam0 && does_entity_exist(Global_1051439->f_3745[38]->f_4))
	{
		return true;
	}
	return false;
}

void func_1440(int iParam0, int iParam1)
{
	if (!func_626(iParam0))
	{
		return;
	}
	Global_1051439->f_3073[iParam0] = (&Global_1051439->f_3073[iParam0] - (Global_1051439->f_3073[iParam0] && iParam1));
}

void func_1441(int iParam0, int iParam1)
{
	func_836(iParam0, iParam1);
}

bool func_1442()
{
	if (func_1987(255) <= 2)
	{
		return false;
	}
	if (Global_265377->f_124517.f_71.f_21.f_2 != -504335712)
	{
		return false;
	}
	if (!func_1245(Global_265377->f_124517.f_71.f_21.f_3))
	{
		return false;
	}
	return true;
}

bool func_1443(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = func_1988(iParam0);
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return func_1989(iVar0);
}

int func_1444(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

int func_1445(int iParam0)
{
	if (_0x603ac35fd4602c76(Global_1139381->f_7) && !func_1990(12, func_1514(iParam0), &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_1446(int iParam0, var uParam1, int iParam2)
{
	Var0 = func_1991();
	Var0.f_2 = -738708473;
	Var0.f_3 = func_1514(iParam0);
	if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return 0;
	}
	Var0.f_2 = -1407851228;
	Var0.f_3 = -1619729610;
	_datafile_get_string(uParam1, &Var0);
	Var0.f_2 = -1407851228;
	Var0.f_3 = 1766438541;
	_datafile_get_hash(iParam2, &Var0);
	return 1;
}

void func_1447(int iParam0)
{
	if (_0xde9bad3292aa6d5e(iParam0))
	{
		_0xdd0bc0edcb2162f6(iParam0);
	}
}

int func_1448(int iParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4, char* sParam5, var uParam6)
{
	Var0 = func_1991();
	Var0.f_2 = -738708473;
	Var0.f_3 = func_1514(iParam0);
	if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return 0;
	}
	Var0.f_2 = -1407851228;
	Var0.f_3 = get_hash_key(sParam1);
	_datafile_get_hash(iParam2, &Var0);
	Var0.f_2 = 1059891245;
	Var0.f_3 = get_hash_key(sParam3);
	_datafile_get_float(bParam4, &Var0);
	Var0.f_2 = -99852754;
	Var0.f_3 = get_hash_key(sParam5);
	_datafile_get_vector(uParam6, &Var0);
	return 1;
}

float func_1449(int iParam0, bool bParam1)
{
	fVar0 = 100f;
	switch (iParam0)
	{
		case 38:
			fVar0 = 200f;
			break;
	}
	if (bParam1)
	{
		fVar0 = (fVar0 * fVar0);
	}
	return fVar0;
}

bool func_1450(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	iVar3 = -1;
	switch (iParam0)
	{
		case 2:
			Var0 = { func_68(0) };
			if (func_1539(Var0))
			{
				return false;
			}
			break;
		case 32:
			iVar2 = 0;
			while (iVar2 < 4)
			{
				if (&Global_1051439->f_4427[iVar2] == &Global_1051439->f_3745[32])
				{
					iVar3 = iVar2;
				}
				iVar2++;
			}
			if (iVar3 == -1)
			{
				return false;
			}
			if (Global_1051439->f_4427[iVar3]->f_3 == Global_1051439->f_4427[iVar3]->f_4)
			{
				return true;
			}
			else
			{
				iVar4 = func_935(func_934());
				if (Global_1051439->f_4427[iVar3]->f_3 < Global_1051439->f_4427[iVar3]->f_4)
				{
					if (iVar4 >= Global_1051439->f_4427[iVar3]->f_3 && iVar4 < Global_1051439->f_4427[iVar3]->f_4)
					{
						return true;
					}
					else
					{
						return false;
					}
				}
				else if (iVar4 < Global_1051439->f_4427[iVar3]->f_3 && iVar4 >= Global_1051439->f_4427[iVar3]->f_4)
				{
					return false;
				}
				else
				{
					return true;
				}
			}
			break;
		case 31:
			if (func_786(func_1992(iParam1), 1))
			{
				return false;
			}
			break;
		case 38:
			return func_1439(iParam1);
	}
	return true;
}

void func_1451(var uParam0, int iParam1)
{
	uParam0->f_9 = iParam1;
}

bool func_1452(int iParam0, var uParam1, var uParam2)
{
	Var1 = func_1991();
	Var1.f_2 = -738708473;
	Var1.f_3 = func_1514(iParam0);
	if (!_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		return false;
	}
	Var1.f_2 = -1407851228;
	Var1.f_3 = -302053561;
	_datafile_get_hash(&uVar0, &Var1);
	*uParam1 = uVar0;
	Var1.f_2 = -1407851228;
	Var1.f_3 = -495343091;
	*uParam2 = 0;
	if (_datafile_get_hash(&uVar0, &Var1))
	{
		*uParam2 = uVar0;
	}
	return true;
}

int func_1453(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_1993(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_1454(int iParam0, int iParam1)
{
	Var0 = Global_1071686->f_28448[48]->f_3;
	Var0.f_2 = -738708473;
	Var0.f_3 = func_1514(iParam0);
	if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return false;
	}
	Var0.f_2 = -1407851228;
	Var0.f_3 = get_hash_key("sHash");
	_datafile_get_hash(iParam1, &Var0);
	return true;
}

void func_1455(int iParam0)
{
	if (Global_1051439->f_3254 == 623901053)
	{
		if (add_relationship_group("REL_SHOPKEEPER", &(Global_1051439->f_3254)))
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				set_relationship_between_groups(2, Global_1051439->f_3254, func_1994(iVar0));
				set_relationship_between_groups(2, func_1994(iVar0), Global_1051439->f_3254);
				iVar0++;
			}
			set_relationship_between_groups(2, func_843(), Global_1051439->f_3254);
			set_relationship_between_groups(2, Global_1051439->f_3254, 1609284507);
			set_relationship_between_groups(2, -989642646, Global_1051439->f_3254);
			set_ped_relationship_group_hash(iParam0, Global_1051439->f_3254);
		}
	}
	else
	{
		set_relationship_between_groups(2, func_843(), Global_1051439->f_3254);
		set_relationship_between_groups(2, Global_1051439->f_3254, func_843());
		set_ped_relationship_group_hash(iParam0, Global_1051439->f_3254);
	}
}

bool func_1456(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	Var0 = func_1991();
	Var0.f_2 = -738708473;
	Var0.f_3 = func_1514(iParam0);
	if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return false;
	}
	Var0.f_2 = -1407851228;
	Var0.f_3 = -1896626193;
	_datafile_get_hash(iParam3, &Var0);
	Var0.f_2 = -99852754;
	Var0.f_3 = -160814000;
	_datafile_get_vector(uParam1, &Var0);
	Var0.f_2 = 1059891245;
	Var0.f_3 = -1317038779;
	_datafile_get_float(bParam2, &Var0);
	return true;
}

void func_1457(int iParam0)
{
	if (!_0xde9bad3292aa6d5e(iParam0))
	{
		_0xdfea23ec90113657(iParam0);
	}
}

void func_1458()
{
	Global_1051439->f_3718.f_1 = -1;
	Global_1051439->f_3718.f_2 = { 0f, 0f, 0f };
	Global_1051439->f_3718.f_6 = 0;
	set_ped_config_flag(Global_34, 1, false);
	set_ped_config_flag(Global_34, 170, false);
	_0xc2266aa617668ad3(Global_34, 1f);
	_0x73b6f907b913c860(Global_34, 1f);
	_0x013a7ba5015c1372(Global_34, 0);
	_0xfa30e2254461adeb(Global_34, 0);
	func_1463(0);
}

bool func_1459(int iParam0, int iParam1)
{
	if (func_747(iParam1))
	{
		return false;
	}
	return true;
}

int func_1460(int iParam0)
{
	Var0 = func_1991();
	Var0.f_2 = 1164964224;
	Var0.f_3 = func_1514(iParam0);
	iVar5 = 0;
	bVar6 = false;
	while (!bVar6)
	{
		Var0.f_4 = iVar5;
		if (_datafile_get_vector(&uVar7, &Var0))
		{
			iVar5++;
		}
		else
		{
			bVar6 = true;
		}
	}
	return iVar5;
}

bool func_1461(int iParam0)
{
	iVar0 = func_203(iParam0);
	switch (iVar0)
	{
		case 36:
			if (func_1464(iVar0))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_1462(int iParam0)
{
	Global_1051439->f_3718.f_2 = { 0f, 0f, 0f };
	iVar0 = func_1460(iParam0);
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		func_1466(iParam0, iVar1, &vVar2);
		if (vdist(Global_35, vVar2) < vdist(Global_35, Global_1051439->f_3718.f_2))
		{
			Global_1051439->f_3718.f_2 = { vVar2 };
		}
		iVar1++;
	}
}

void func_1463(int iParam0)
{
	Global_1051439->f_3718 = iParam0;
}

bool func_1464(int iParam0)
{
	if (!_does_volume_exist(Global_1051439->f_72[iParam0]->f_24))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(Global_1051439->f_72[iParam0]->f_24, Global_35);
	return false;
}

float func_1465(int iParam0, vector3 vParam1, bool bParam4)
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
	return func_1794(vVar0, vParam1);
}

bool func_1466(int iParam0, int iParam1, var uParam2)
{
	Var0 = func_1991();
	Var0.f_2 = 1164964224;
	Var0.f_3 = func_1514(iParam0);
	Var0.f_4 = iParam1;
	return _datafile_get_vector(uParam2, &Var0);
}

int func_1467(int iParam0)
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

bool func_1468()
{
	if (func_1995())
	{
		return true;
	}
	if (func_1996())
	{
		return true;
	}
	if (func_1997())
	{
		return true;
	}
	if (func_1469())
	{
		return true;
	}
	return false;
}

bool func_1469()
{
	return func_956(131072, 255);
}

bool func_1470()
{
	iVar0 = get_frame_count();
	return (Global_1051439->f_3260 == iVar0 || Global_1051439->f_3260 == (iVar0 - 1));
}

bool func_1471(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return Global_1293165[iParam0] == iParam0;
}

bool func_1472(int iParam0, int iParam1)
{
	if (!func_626(iParam0))
	{
		return false;
	}
	return (Global_5860.f_2074[iParam0] && iParam1) != 0;
}

bool func_1473(int iParam0)
{
	if (!func_1998(iParam0))
	{
		return true;
	}
	iVar0 = get_clock_day_of_week();
	if (!is_bit_set(Global_1051439->f_72[iParam0]->f_53, iVar0))
	{
		return false;
	}
	return true;
}

bool func_1474()
{
	Var3.f_9 = -1591664384;
	if (!func_558("ALL SATCHEL EXCLUDING CLOTHING", &iVar0, &iVar1, -1591664384, 0))
	{
		return false;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if ((func_559(&Var3, iVar2, iVar0, iVar1) && func_177(Var3.f_4, 0)) && func_1999(Var3.f_4, 816454899, 1, 0) > 0)
		{
			iVar17 = 1;
		}
		else
		{
			iVar2++;
		}
	}
	func_561(iVar0);
	return iVar17;
}

int func_1475(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_17081)
	{
		return &(Global_17081[iParam0]);
	}
	return 0;
}

int func_1476(int iParam0, int iParam1)
{
	if (iParam1 != 9)
	{
		return 0;
	}
	if (func_66() != -1)
	{
		return 1938782895;
	}
	if (func_2000() == 3 && !does_blip_exist(Global_1903136->f_379.f_1))
	{
		return 469827317;
	}
	return 1938782895;
}

void func_1477(int iParam0)
{
	if (!func_324(Global_1051439->f_3734, iParam0))
	{
		func_325(&(Global_1051439->f_3734), iParam0);
	}
}

int func_1478(int iParam0)
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

bool func_1479(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 11)
	{
		return false;
	}
	return true;
}

int func_1480(int iParam0)
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

var func_1481(int iParam0)
{
	return &(Global_1915715->f_18260[iParam0]);
}

int func_1482(int iParam0)
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

int func_1483(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar2 = func_2001(iVar0);
		if (func_2002(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_1484(int iParam0, int iParam1)
{
	if (func_786(iParam0, 128))
	{
		func_1485(iParam1, -401963276);
		func_1485(iParam1, 231194138);
		func_1485(iParam1, 580546400);
		func_1440(iParam0, 128);
	}
	if (func_786(iParam0, -2147483648))
	{
		func_1485(iParam1, 580546400);
		func_1485(iParam1, 847579139);
		func_1440(iParam0, -2147483648);
	}
	if (func_786(iParam0, 16))
	{
		func_1485(iParam1, 724623647);
		func_1440(iParam0, 16);
	}
}

void func_1485(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_17081)
	{
		_set_blip_flash_style(&(Global_17081[iParam0]), iParam1);
	}
}

bool func_1486(int iParam0)
{
	if (!_unlock_is_unlocked(func_761(iParam0)))
	{
		return true;
	}
	if (func_2003(&(Global_1915715->f_20343), 2))
	{
		return true;
	}
	if (func_2003(&(Global_1915715->f_20343), 4) && func_202(iParam0) == func_108())
	{
		return true;
	}
	if (func_812())
	{
		return true;
	}
	if (iParam0 == 133)
	{
		if (func_786(iParam0, 16384))
		{
			return true;
		}
	}
	if (func_203(iParam0) == 39 && func_2004())
	{
		return true;
	}
	return false;
}

int func_1487()
{
	iVar0 = 1861010125;
	if (Global_1051439->f_3730)
	{
		iVar0 = 1475382911;
	}
	return iVar0;
}

void func_1488(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_17081)
	{
		if (does_blip_exist(&(Global_17081[iParam0])))
		{
			set_blip_sprite(&(Global_17081[iParam0]), iParam1, true);
		}
	}
}

void func_1489(int iParam0, int iParam1, int iParam2)
{
	Global_1051439->f_4466.f_3 = iParam0;
	Global_1051439->f_4466.f_4 = iParam1;
	Global_1051439->f_4466.f_5 = iParam2;
}

bool func_1490(int iParam0)
{
	if (func_560(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_1491(int iParam0, bool bParam1)
{
	if (!func_177(iParam0, 0))
	{
		return func_2005(func_1262(iParam0), bParam1);
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

bool func_1492(int iParam0)
{
	if (!func_905() && func_2006())
	{
		return true;
	}
	return func_560(iParam0, 1435272033);
}

int func_1493(int iParam0, bool bParam1)
{
	iVar0 = -570078785;
	if (bParam1)
	{
		iVar0 = func_2007(iParam0, 1, 1);
		if (iVar0 == 0 || func_1510(iParam0, 773203532, iVar0, 0, 1) == 0)
		{
			iVar0 = -570078785;
		}
	}
	return iVar0;
}

int func_1494(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_2008(iVar0, 0, 1);
		if (!func_2009(iParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_2010(&(Var9[iVar41])))
				{
					if (!bParam1 || func_153(&(Var9[iVar41]), 0, 1, 1) > 0)
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

int func_1495(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_1490(iParam0))
	{
		return func_1510(func_1491(iParam0, 0), iParam1, iParam2, bParam4, 1);
	}
	if (!func_2009(iParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
	{
		if (!bParam4)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == iParam1)
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
	if (!bParam4)
	{
	}
	return 0;
}

int func_1496(int iParam0, int iParam1)
{
	*iParam1 = 0;
	if (!func_177(iParam0, 0))
	{
		return 0;
	}
	if (func_2011(iParam0))
	{
		return 0;
	}
	if (func_560(iParam0, 81450561) || func_560(iParam0, 1342455455))
	{
		return 0;
	}
	if (func_1490(iParam0))
	{
		return 0;
	}
	iVar0 = func_1491(iParam0, 1);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_1498(iVar0, -570078785, 0))
	{
		return 0;
	}
	if (Global_1915715->f_22504.f_2 == 1)
	{
		Var1 = { func_1027(iParam0, 0, 0) };
		if (Var1.f_4 == 1084182731)
		{
			return 0;
		}
	}
	*iParam1 = iVar0;
	return 1;
}

bool func_1497()
{
	return Global_1915715->f_22477;
}

bool func_1498(int iParam0, int iParam1, bool bParam2)
{
	if (!func_2012(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_1499(iParam0, iParam1);
	}
	return true;
}

bool func_1499(int iParam0, int iParam1)
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

int func_1500(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_177(iParam0, 0))
	{
		return 0;
	}
	if (func_1490(iParam0))
	{
		return func_2013(func_1491(iParam0, 0), iParam1, bParam2, iParam3, func_1492(iParam0));
	}
	if (func_2014(iParam0, bParam4) || func_2015(iParam0))
	{
		iParam1 = 997808187;
	}
	else if (func_1492(iParam0) && (func_2016(iParam0, &iVar0) || func_2017(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else
	{
		bVar1 = func_2018(iParam0, -570078785);
		bVar2 = func_2018(iParam0, -915411861);
		if (bVar1 && !bVar2)
		{
			iParam1 = -570078785;
		}
		else if (bVar2 && bVar1)
		{
			if (func_1497())
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
		else if (func_2019(15) && func_2018(iParam0, 369710026))
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

bool func_1501(int iParam0)
{
	return func_362(iParam0) == -999503751;
}

int func_1502(int iParam0)
{
	if (!func_1501(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case -2068637111:
			return -705751660;
		case -1871922677:
			return 1364634153;
		case -905031115:
			return -388301838;
		case 1928115537:
			return 208175031;
		case 453281150:
			return -98968806;
		case 153739721:
			return -402606360;
		case 1167678119:
			return -709946811;
		case 736667462:
			return -362300646;
		case -673644764:
			return -65380737;
		case -980133221:
			return 100758093;
		case -209930641:
			return -1740761400;
		case -1735897526:
			return -27480348;
		case -482614352:
			return -257977494;
		case -1258944731:
			return -582914898;
		case 1536480356:
			return -814067424;
		case 1827632921:
			return -1179212391;
		case -1483084691:
			return -1407415707;
		case -1855140882:
			return -9237745;
		case -1605932637:
			return 296464256;
		case 838274308:
			return -1849217095;
		case 1423463110:
			return 1698584232;
		case 1722021469:
			return 1996257828;
		case 1293960018:
			return 1186175379;
		case 1084020314:
			return -1332741910;
		case 1384905272:
			return -1632447184;
		case 166258931:
			return -1930088011;
		case -285691117:
			return 2065632777;
		case -1506238056:
			return 937854865;
		case -141245365:
			return -1520409981;
		case 962175652:
			return 1356000914;
		case 687079897:
			return -423388555;
		case 373021801:
			return -188959129;
		case 75839740:
			return -93765184;
		case -208529642:
			return 401046716;
		case -504466477:
			return -845387737;
		case -1896067425:
			return -229247533;
		case -1732419039:
			return 57481217;
		case 1620668890:
			return 383434460;
		case 2095557238:
			return 404275544;
		case -700719823:
			return 721381157;
		case -520949089:
			return 1027509151;
		case 783963696:
			return -1688869940;
		case 477409701:
			return -97312371;
		case 325427079:
			return -870234774;
		case -2127824110:
			return -573609786;
		case -478920799:
			return -1336767027;
		case -784753876:
			return 1125692243;
		case -1991069642:
			return 1599850951;
		case 1534579841:
			return 1505836690;
		case 1755770591:
			return 1007026972;
		case 852591413:
			return -1271696523;
		case -1269692868:
			return -1501734903;
		case -1638540740:
			return -466660528;
		case 1404368072:
			return -1675392330;
		case 561909851:
			return -1377882579;
		case 1369829534:
			return 2136592667;
		case 669687080:
			return -1849788956;
		case 908671397:
			return -1561028528;
		case -50313388:
			return -1268368589;
		case 896138350:
			return -655694620;
		case -1347489546:
			return -882128410;
		case -1127937242:
			return -27217981;
		case -821055557:
			return 513863747;
		case -666844643:
			return 272520062;
		case 1507149124:
			return 1115043821;
		case 1797068311:
			return 434380030;
		case 1509389260:
			return -1994163333;
		case 1196052082:
			return 1445336445;
		case 914074837:
			return -1000181256;
		case 599099209:
			return -1601951172;
		case 774216741:
			return -1900673376;
		case 180232641:
			return -1722245291;
		case -1597878813:
			return -1550994497;
		case -895311481:
			return -1654216923;
		case -2075290374:
			return -956892603;
		case -1349063796:
			return 2044551183;
		case 1649135863:
			return 1816380636;
		case 10498108:
			return -1216565419;
		case 317576407:
			return -997045888;
		case -803057859:
			return -622430680;
		case -229076051:
			return -1279023141;
		case -1445559642:
			return -1036761924;
		case -1140185331:
			return -683249952;
		case 913153433:
			return 194792351;
		case 606730510:
			return -1974548202;
		case -964051505:
			return 1014738289;
		case -1267459676:
			return 634486813;
		case -483756272:
			return 1408261210;
		case -805187393:
			return -768354077;
		case -1116096467:
			return 1791083718;
		case -4997980:
			return 1484267571;
		case -305588017:
			return -632577068;
		case -694850968:
			return -872544455;
		case -985380922:
			return -1111430465;
		case 974827889:
			return -1351987694;
		case -1156770257:
			return -803252891;
		case -843695231:
			return 2121544208;
		case 1854078224:
			return -1667469728;
		case -2137185980:
			return 466087145;
		case -1830566447:
			return 98091275;
		case -1537546049:
			return -1010615123;
		case 469166476:
			return -32097795;
		case 1229079574:
			return -875834007;
		case 990422947:
			return 68797956;
		case -229665218:
			return -270885498;
		case -527568197:
			return 682069807;
		case 242634379:
			return 920726434;
		case -521123265:
			return -1709594912;
		case 766501761:
			return 1740292643;
		case -1135443708:
			return 2121330575;
		case 609997105:
			return 1281690488;
		case 378877348:
			return 1523820629;
		case -938370918:
			return 1117747177;
		case -1651298733:
			return -1091279926;
		case -494651336:
			return -585850882;
		case -1307650230:
			return -364430749;
		case 1220379817:
			return 1173844426;
		case 1450975270:
			return -964758829;
		case 1835159026:
			return -1806659977;
		case 1161689282:
			return -156109760;
		case 1472306629:
			return 325463492;
		case 23785761:
			return 20482409;
		case 332895738:
			return 1859937455;
		case -860715087:
			return 1554366530;
		case -151856079:
			return 1545191210;
		case -477077213:
			return 303195323;
		case -783270749:
			return -458159623;
		case -2043500951:
			return -162091708;
		case -705706526:
			return 869967935;
		case 1219931046:
			return 1175473322;
		case -1794096032:
			return 157930334;
		case 275775515:
			return 1379601741;
		case -1160690408:
			return -245138056;
		case -1763097043:
			return 115504824;
		case 912572382:
			return -1399728874;
		case 73391061:
			return -1090192900;
		case 332495544:
			return -1893000631;
		case -501475506:
			return -1583759578;
		case -280579677:
			return -204905596;
		case -814845497:
			return -974747713;
		case -1610902814:
			return -701454253;
		case -1313261987:
			return 678546644;
		case -668402627:
			return -1643732782;
		case -1436966753:
			return -1879178047;
		case -1105410003:
			return 2033604402;
		case -792302208:
			return 729201588;
		case -1544547372:
			return 1695854319;
		case -1268599623:
			return -2040860293;
		case 1281867320:
			return 430601343;
		case -1699226913:
			return 528449577;
		case -1610553999:
			return 836052180;
		case -1909243438:
			return 1126483827;
		case -1551799186:
			return 1432546287;
		case -1999554802:
			return 1721339484;
		case 723981565:
			return 1684533498;
		case 963752338:
			return 1404424086;
		case 372402960:
			return 69611632;
		case 989901996:
			return -221377088;
		case -239754729:
			return 1613326453;
		case 142266273:
			return 1307853835;
		case 911761394:
			return 2176663;
		case 1676688161:
			return -292908182;
		case 1907906229:
			return 1638955448;
		case -1621282302:
			return 1374083621;
		case -1801773954:
			return -1218075359;
		case -1003029579:
			return -1516043876;
		case 165089723:
			return -726135810;
		case 395586869:
			return -458052621;
		case 623560802:
			return -926911473;
		case 888203246:
			return -1761242982;
		case 1123550204:
			return -1388135148;
		case 1862360078:
			return -1644486999;
		case -1320869011:
			return -688485759;
		case -1078345642:
			return -381735150;
		case -571278136:
			return 2046513300;
		case -856663353:
			return -1943603989;
		case -632654469:
			return -1635706465;
		case -380562552:
			return -1338786556;
		case 1911459413:
			return -1434447686;
		case -1606456586:
			return -675714260;
		case -1888892597:
			return 249321841;
		case 1154823199:
			return -1070777324;
		case 856068226:
			return 2065543650;
		case 1786380136:
			return 1826887023;
		case 1943475930:
			return -1810703525;
		case 1697315198:
			return -1226563331;
		case -1787340262:
			return -1466006414;
		case -1341845703:
			return 724273546;
		case -1632670578:
			return 1512859531;
		case -932593662:
			return 1266305575;
		case -499308854:
			return 1937278961;
		case -785677145:
			return 971478216;
		case -18849776:
			return 1202597973;
		case -806059467:
			return 507698559;
		case 91876671:
			return 746355186;
		case -199538046:
			return 523755373;
		case -1754780383:
			return 1219798516;
		case -2050586146:
			return -1568843392;
		case -1622000367:
			return 1824681487;
		case -1930520502:
			return 933561301;
		case 1689602008:
			return -614970571;
		case 1384162159:
			return -310186102;
		case -733625577:
			return 1209768883;
		case -370348443:
			return 1834280485;
		case -1205728560:
			return 329528021;
		case 459985248:
			return 1778442129;
		case 834207228:
			return 805432208;
		case 1230744937:
			return -25950091;
		case 1859098900:
			return 922505133;
		case -2137310037:
			return 120975393;
		case 1086995730:
			return 426742932;
		case -1962290800:
			return 2081118674;
		case 1736084082:
			return -1914569345;
		case 2038967949:
			return 1110533655;
		case -1732116082:
			return -2005854180;
		case -2043224964:
			return -1762511586;
		case 1970158315:
			return -1609283862;
		case 1655444839:
			return -1311675804;
		case 1373270980:
			return -1952932365;
		case 1058885194:
			return -1923309189;
		case -1944199774:
			return -1262957735;
		case 999079041:
			return -1516622564;
		case 635605293:
			return -1741811132;
		case 1493792634:
			return -1991740303;
		case -213406744:
			return 2071419087;
		case -505870069:
			return 1352008461;
		case -152330007:
			return -196656840;
		case 2024678512:
			return 108848547;
		case 1188643011:
			return -610365465;
		case 1680243549:
			return -371774376;
		case 845486043:
			return -123352547;
		case -1351118334:
			return 112125487;
		case -1206325201:
			return -741695871;
		case -1514091649:
			return -711024087;
		case 1284413724:
			return 784454766;
		case 976581738:
			return 1114307520;
		case 1895916033:
			return 2026825867;
		case 1588804965:
			return 177900576;
		case -691537108:
			return -1357555725;
		case -2138714467:
			return -1604437371;
		case -1967660287:
			return -214441929;
		case -1574858284:
			return -455982228;
		case -1370707414:
			return -676320984;
		case 1429764111:
			return -907571817;
		case 1074060936:
			return 462295077;
		case 1238037012:
			return 768128154;
		case -1431915598:
			return -119452980;
		case -1133947081:
			return 189198231;
		case -987535189:
			return -698055213;
		case -676262434:
			return -422500692;
		case 1109042843:
			return 1148576455;
		case 817890278:
			return -244826955;
		case 1719496544:
			return -14755806;
		case 1452003197:
			return 249886638;
		case -2077939025:
			return -1994920950;
		case 2036208929:
			return 392792239;
		case -1698171004:
			return -1105085114;
		case -1437165919:
			return 1210831216;
		case -1206046162:
			return 651988690;
		case -1020114856:
			return 1835768799;
		case -778869478:
			return 1530492811;
		case -558071952:
			return -252173558;
		default:
			break;
	}
	return 0;
}

bool func_1503(int iParam0)
{
	if (!func_177(iParam0, 0))
	{
		return false;
	}
	return func_362(iParam0) == 153430294;
}

int func_1504(int iParam0)
{
	if (!func_1503(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 1652808217:
			return 2113612788;
		case 475385282:
			return 1799751306;
		case -35942194:
			return 1444076568;
		case 48470838:
			return 1147680963;
		case 1997008874:
			return -2020336278;
		case 1729941524:
			return -1377900033;
		case -1856789375:
			return -1541941647;
		case -2086565603:
			return 1616727805;
		case -463888252:
			return -922666835;
		case -1967067820:
			return -855621461;
		case 2030324187:
			return -564862124;
		case 837041052:
			return 1955205056;
		case -351609819:
			return 1515886177;
		case -112363350:
			return 1212871226;
		case 1064633628:
			return 520003486;
		case 1811373600:
			return 214694713;
		case 293907485:
			return -1002555587;
		case 896201705:
			return -704816453;
		case -953837732:
			return -408748538;
		case -849861695:
			return 2080515794;
		case -1484084376:
			return -1438504284;
		case -1244280834:
			return -1663266855;
		case -939529134:
			return -977280609;
		case -302466993:
			return -1208924670;
		case -740134980:
			return 760352143;
		case -462384932:
			return 1528293658;
		case 1388866954:
			return 601619107;
		case 1124978197:
			return 309975007;
		case 773175735:
			return -1805872365;
		case -6365998:
			return 25128279;
		case 163836188:
			return -286209990;
		case -603318871:
			return 1269465524;
		case -866802112:
			return 66925801;
		case -1222804528:
			return -1897379743;
		case -2051565307:
			return 1963005075;
		case -1837321585:
			return -2037925984;
		case 973666748:
			return 1668961632;
		case 211230425:
			return 1358934123;
		case -1098349891:
			return -1141176732;
		case -801495520:
			return -1415813725;
		case -1186378964:
			return 11713414;
		case -1629350306:
			return 1307072000;
		case 245003725:
			return 1575941645;
		case -61091504:
			return 701926877;
		case -1579778179:
			return -766852067;
		case -1100138310:
			return -1076125889;
		case 271080495:
			return -1445170375;
		case -620695071:
			return -1685465452;
		case -724967739:
			return -1670121942;
		case -687545541:
			return 1790317231;
		case 1877447950:
			return 1889214097;
		case -2102805870:
			return 2120268316;
		case 918258437:
			return -1816896715;
		case 1169203439:
			return 321247770;
		case -1755397046:
			return 626818695;
		case -2090951606:
			return -121887417;
		case -1893420074:
			return -890648157;
		case -521480347:
			return 802722687;
		case -1515678445:
			return 433303369;
		case 637343178:
			return 1912758109;
		case -1759971328:
			return 2076472033;
		case -1990239091:
			return 86705584;
		case 1595344893:
			return 518666542;
		case -553416748:
			return 682151083;
		case 2086466425:
			return -1982828649;
		case 1829328082:
			return 1530204769;
		case 147295280:
			return 1836693226;
		case 857399510:
			return -1096001202;
		case 811850600:
			return -1834221234;
		case -528729190:
			return -1526815245;
		case -732726675:
			return 1127336149;
		case -963846432:
			return 828941635;
		case -1242022473:
			return 531497422;
		case -2026971099:
			return 834643453;
		case 2066466847:
			return 526451008;
		case 1835609242:
			return -399699239;
		case -881400018:
			return -197243922;
		case -633699143:
			return -514513380;
		case -1069100838:
			return -809532687;
		case -695075472:
			return -854491755;
		case -1665332793:
			return -1318828485;
		case -1292945877:
			return -1465928526;
		case -542471226:
			return 1570234737;
		case -185354664:
			return -288324636;
		case -1008937941:
			return 11282331;
		case -770543466:
			return 725318841;
		case 1382597333:
			return -949699437;
		case 1129882805:
			return 1306347914;
		case 883033928:
			return 1536910598;
		case -1225782302:
			return 1924797251;
		case 1377331935:
			return 9499074;
		case -136923555:
			return 483863122;
		case 98783862:
			return 237473007;
		case 363196923:
			return 1066004403;
		case 547298053:
			return 1559978137;
		case 796506298:
			return 1322239046;
		case -2078055928:
			return 1564631339;
		case 855162804:
			return -212824759;
		case -1550515886:
			return -274429432;
		case -699406649:
			return 570453695;
		case -1870177465:
			return 207242099;
		case 1121730546:
			return -1112267224;
		case -1606199964:
			return 1417685661;
		case -1366953495:
			return -2095478833;
		case 1493223136:
			return 1899947034;
		case 1732731757:
			return -1752321861;
		case -993297765:
			return 1413210443;
		case 1243186493:
			return 1182877142;
		case 1548003731:
			return -208887838;
		case 1853771270:
			return 21707615;
		case -456994495:
			return 857732585;
		case -1627994710:
			return 1087541582;
		case -2009556946:
			return 1451015330;
		case 849308921:
			return 1688754425;
		case 1779645445:
			return 1437777233;
		case 2112644023:
			return 1676958164;
		case -909575313:
			return -35123787;
		case 1534435018:
			return 195668280;
		case -83784299:
			return -2087370390;
		case 1681940497:
			return 888087567;
		case 1436861146:
			return 707399301;
		case 1192175023:
			return 1507847664;
		case -503349107:
			return -2018900297;
		case 424603435:
			return -626938711;
		case 1033779145:
			return -336900292;
		case 734729251:
			return -1124798132;
		case -1451110845:
			return 1051595054;
		case 1302861393:
			return 1338028883;
		case 2145483459:
			return 574052421;
		case 1916198766:
			return -1516904708;
		case 229873288:
			return -337288225;
		case 1056766234:
			return 432390051;
		case 1993402593:
			return 1094880924;
		case 1754221662:
			return 1862953515;
		case 135502004:
			return -806719655;
		case -1094089207:
			return -492661555;
		case 683366891:
			return -1416714590;
		case 457948940:
			return -1170586631;
		case 84775568:
			return 385875335;
		case -2142729980:
			return 632068832;
		case -410630335:
			return 435122445;
		case -161815318:
			return 1413244326;
		case 1125547616:
			return 650709696;
		case -706894864:
			return -1018149936;
		case 512996699:
			return -712677318;
		case 822532673:
			return -272163651;
		case -1151792276:
			return 534957177;
		case -569224994:
			return 1399272333;
		case -1816871896:
			return 765978639;
		case -2105861707:
			return 1993996914;
		case 45914674:
			return 1227104007;
		case 676193620:
			return -595245625;
		case 1564617196:
			return 1395189422;
		case 1142159244:
			return 1618444619;
		case 834556641:
			return 1977920549;
		case -1297099578:
			return -2078652272;
		case -1477066926:
			return -1741786952;
		case -1764025059:
			return -1452207299;
		case -1896863365:
			return -1760699697;
		case -1706409937:
			return -1462337952;
		case -1336579003:
			return 1584884203;
		case 2015984622:
			return 1346489728;
		case 1306077006:
			return -2137870811;
		case 424001060:
			return -1557990587;
		default:
			break;
	}
	return 0;
}

bool func_1505(int iParam0)
{
	return (func_2020(iParam0) && func_560(iParam0, 1584357097));
}

int func_1506(int iParam0)
{
	if (!func_1505(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 731907282:
			return 195889874;
		case 1561454517:
			return 465087209;
		case 1254834984:
			return -311177636;
		case 1829957287:
			return 857944907;
		case 919634467:
			return -1729036567;
		case -28339930:
			return -2035393948;
		case 507515628:
			return -284580868;
		case -1975194892:
			return 73453226;
		case 2039957913:
			return 329215271;
		case 1502511939:
			return 1942551232;
		case 1809065934:
			return 518344954;
		case -997271222:
			return 1353200767;
		case -878058438:
			return -668553641;
		case -1617589234:
			return -431273312;
		case -1042952050:
			return -1111852673;
		case -2050900874:
			return -856521084;
		case -1815586685:
			return -412238982;
		case -51500315:
			return -260158053;
		case 1348094862:
			return 863949896;
		case 1646522145:
			return 1693169437;
		case 1156363443:
			return 387193715;
		case 1952092069:
			return -1816797957;
		case -2109461640:
			return -1533903180;
		case -1806184545:
			return 1874334976;
		case -1053842899:
			return -2015093177;
		case -755677768:
			return -1841483015;
		case 767294276:
			return -600422706;
		case 1311814185:
			return -229245945;
		case -840486512:
			return -526428006;
		case -1029170414:
			return 1651235889;
		case -831411723:
			return -882484202;
		case -429434400:
			return 1973137538;
		case -131203731:
			return -1830556910;
		case 1800445393:
			return 596295460;
		case 2047228732:
			return 290265769;
		case -2027203194:
			return 2081091619;
		case -609641686:
			return 516107635;
		case 154924622:
			return 207980728;
		case -142781743:
			return -99130340;
		case -533360838:
			return 1220617347;
		case -464283790:
			return -553725692;
		case -186533746:
			return -1123513064;
		case -1593520704:
			return -769187178;
		case 1260724738:
			return -1889559288;
		case -297375678:
			return 2100623539;
		case 1701653225:
			return -1303234828;
		case 1386939749:
			return 2105724242;
		case 1103717282:
			return 1767482612;
		case 1332088703:
			return 1366042262;
		case 1034120186:
			return 2091613460;
		case 532885562:
			return 1728467402;
		case -452048774:
			return 974561281;
		case -1085571851:
			return 1934791288;
		case -862677113:
			return -1633818354;
		case 1890828381:
			return -1707282708;
		case 1864875333:
			return 1682604808;
		case -320325540:
			return 1029354793;
		case -1278925815:
			return 1640403026;
		case -80071950:
			return -1229833684;
		case -781656240:
			return -2040374903;
		case 525029001:
			return 463034341;
		case 1717296181:
			return 149336704;
		case 1894117705:
			return 1146825064;
		case 1464921218:
			return -979751655;
		case 550403966:
			return -1219424121;
		case 856007660:
			return 1019812717;
		case -1617179117:
			return 862573726;
		case 1784374159:
			return 1100771587;
		case 2081818376:
			return 1455922005;
		case -1615607679:
			return 1686296029;
		case -1894668475:
			return 1957000738;
		case 2095710966:
			return 1656345167;
		case -260985198:
			return -354862110;
		case -1179959034:
			return -146516808;
		case -873142887:
			return -337101316;
		case 245915270:
			return 518337236;
		case 844146134:
			return 966617156;
		case 538640747:
			return 677332424;
		case 560856018:
			return 9691481;
		case -1382149068:
			return -240893062;
		case -188079477:
			return -547676440;
		case 1578729681:
			return 526083803;
		case 1879581870:
			return -1364982418;
		case 948647349:
			return -1058723344;
		default:
			break;
	}
	return 0;
}

bool func_1507(int iParam0)
{
	return func_362(iParam0) == 1882579758;
}

int func_1508(int iParam0)
{
	switch (iParam0)
	{
		case -756756912:
			return 174220197;
		case 380458460:
			return 468518590;
		case -1336702674:
			return -184567584;
		case -1481672726:
			return 140205975;
		case 1088924248:
			return 1664750935;
		case -1981006748:
			return 1960130701;
		case -1800252944:
			return 766061110;
		case -392037938:
			return 1364291974;
		case 2052037931:
			return 2076526201;
		case 683408729:
			return 292938556;
		default:
			break;
	}
	return 0;
}

bool func_1509(int iParam0)
{
	switch (iParam0)
	{
		case -1843707398:
		case -1571233163:
		case -1197011183:
		case 75922725:
		case 1070046552:
			return true;
		default:
			break;
	}
	return false;
}

int func_1510(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_1512(iParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == iParam1)
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
	if (!bParam3)
	{
	}
	return 0;
}

int func_1511(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && iParam1 == -915411861) && func_2018(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_1490(iParam0))
	{
		return func_796(func_1491(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_2009(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1512(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_2012(iParam0))
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
		func_2021(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_1513(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1391860027;
		case 3:
			return -2049683567;
		case 4:
			return -1639750081;
		case 33:
			return -395929392;
		case 6:
			return -543306319;
		case 7:
			return 93160283;
		case 8:
			return -1838611891;
		case 1:
			return 1619762084;
		case 2:
			return -2104053099;
		case 9:
			return -1431073983;
		case 10:
			return 887432345;
		case 11:
			return -238320361;
		case 22:
			return -1433937760;
		case 23:
			return -681691620;
		case 24:
			return -706234936;
		case 25:
			return -282099500;
		case 26:
			return 1450105278;
		case 5:
			return 379756162;
		case 12:
			return 2128397741;
		case 14:
			return -924263120;
		case 30:
			return 1915478031;
		case 31:
			return -1816941102;
		case 32:
			return 1350021532;
		case 15:
			return 1442571063;
		case 16:
			return -997221403;
		case 17:
			return 1489861748;
		case 27:
			return -2132712788;
		case 28:
			return -995716959;
		case 29:
			return 1414815075;
		case 34:
			return 1427539511;
		case 19:
			return -967055532;
		case 20:
			return 662159626;
		case 21:
			return 1743191502;
		case 18:
			return -830712656;
		case 35:
			return 1570650502;
		case 36:
			return -1980461700;
		case 38:
			return -486915945;
		case 37:
			return -1023568458;
		case 39:
			return 374439621;
		default:
			break;
	}
	return 0;
}

int func_1514(int iParam0)
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

int func_1515(int iParam0, int iParam1)
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

bool func_1516(int iParam0)
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

int func_1517(int iParam0)
{
	iVar0 = func_871(func_2022(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1952637->f_1675.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_1518(int iParam0)
{
	if (func_1519(81053684, iParam0))
	{
		return true;
	}
	if (func_1519(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_1519(int iParam0, int iParam1)
{
	iVar1 = func_871(func_2022(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1952637->f_1675.f_1[iVar1] != 0 && &Global_1952637->f_1675.f_1[iVar1] != &Global_1952637->f_83[iVar1])
	{
		iVar0 = &Global_1952637->f_1675.f_1[iVar1];
		if (func_362(iVar0) == iParam0 || (iParam0 == 81053684 && func_560(iVar0, 160827531)))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_1520(int iParam0)
{
	return &(Global_1952637->f_1675.f_1[func_871(iParam0, 1)]);
}

int func_1521()
{
	return Global_1572887->f_106.f_75;
}

int func_1522(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 24;
		case 1:
			return 25;
		case 2:
			return 26;
		case 3:
			return 27;
		case 4:
			return 28;
		case 5:
			return 29;
		case 6:
			return 30;
		case 18:
			return 38;
		case 16:
			return 39;
		case 17:
			return 40;
		case 15:
			return 41;
		case 11:
			return 31;
		case 12:
			return 32;
		case 13:
			return 33;
		case 14:
			return 35;
		case 7:
			return 34;
		default:
			break;
	}
	if (func_1304(iParam0) == -785841056)
	{
		return 37;
	}
	return 23;
}

bool func_1523(int iParam0, var uParam1)
{
	if (iParam0 == 9 && !func_243(iParam0))
	{
		*uParam1 = 6;
		return false;
	}
	if (func_831(iParam0, 128))
	{
		*uParam1 = 1;
		return false;
	}
	if (func_786(Global_1051439->f_72[iParam0]->f_18, 1) || func_786(Global_1051439->f_72[iParam0]->f_18, 1048576))
	{
		*uParam1 = 1;
		return false;
	}
	if (func_134(4, 255) && !func_1417(iParam0, 1073741824))
	{
		*uParam1 = 2;
		return false;
	}
	if (iParam0 == 34)
	{
		return true;
	}
	if (iParam0 == 28 || iParam0 == 29)
	{
		*uParam1 = 3;
		return does_entity_exist(Global_1051439->f_72[iParam0]->f_21);
	}
	if (iParam0 != 9 && func_1469())
	{
		return false;
	}
	bVar0 = false;
	if (!func_1417(iParam0, 16384))
	{
		iVar1 = get_ped_index_from_entity_index(Global_1051439->f_72[iParam0]->f_21);
	}
	if (!is_entity_dead(iVar1) || func_1417(iParam0, 16384))
	{
		if (func_1417(iParam0, 16384))
		{
			bVar0 = true;
		}
		else if (func_1417(iParam0, 32768) || func_1417(iParam0, 65536))
		{
			if (is_entity_in_volume(Global_1051439->f_72[iParam0]->f_21, Global_1051439->f_72[iParam0]->f_24, true, 0))
			{
				bVar0 = true;
			}
			else
			{
				vVar2 = { _0xf70f00013a62f866(Global_1051439->f_72[iParam0]->f_24) };
				vVar5 = { _0x3e2a25b2416dd67e(Global_1051439->f_72[iParam0]->f_24) };
			}
		}
		else if (_does_scenario_point_exist(Global_1051439->f_72[iParam0]->f_6))
		{
			if (_0x9c54041bb66bcf9e(iVar1, Global_1051439->f_72[iParam0]->f_6))
			{
				bVar0 = true;
			}
			else
			{
				func_830(iParam0, 8192);
			}
		}
	}
	if (!bVar0 && iParam0 != 39)
	{
		*uParam1 = 3;
		return false;
	}
	if (!func_1473(iParam0))
	{
		*uParam1 = 4;
		return false;
	}
	if (func_66() == 0 && iParam0 == 9)
	{
		if (!func_905())
		{
			if (!func_2006())
			{
				*uParam1 = 5;
				return false;
			}
		}
	}
	if (is_thread_active(Global_1051439->f_72[iParam0]->f_9, true))
	{
		*uParam1 = 7;
		return false;
	}
	if (_0x1bb50cd340a996e6())
	{
		*uParam1 = 2;
		return false;
	}
	return true;
}

int func_1524(int iParam0)
{
	if (func_66() == -1)
	{
		switch (iParam0)
		{
			case 0:
				return 345459576;
			case 3:
				return 316164498;
			case 4:
				return 107054859;
			case 6:
				return 1970668659;
			case 7:
				return -1423761327;
			case 2:
				return 1962571075;
			case 1:
				return -1351031954;
			case 8:
				return 246898748;
			case 11:
				return -1422207440;
			case 10:
				return -349412908;
			case 24:
				return 234332070;
			case 23:
				return -1264799642;
			case 22:
				return -862152188;
			case 9:
				return 1441533623;
			case 14:
				return -2144051908;
			case 15:
				return -1846094185;
			case 18:
				return -247100713;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 401693504;
			case 3:
				return 313645409;
			case 4:
				return 1504321614;
			case 33:
				return -2041316776;
			case 6:
				return 273039633;
			case 7:
				return -212649012;
			case 2:
				return 179517202;
			case 25:
				return 1483876011;
			case 8:
				return -1152758309;
			case 11:
				return 1907419717;
			case 10:
				return -1819629762;
			case 24:
				return -269308116;
			case 23:
				return 1868274377;
			case 9:
				return 273180217;
			case 14:
				return -1578822351;
			case 27:
				return 923565142;
			case 18:
				return 215795965;
			case 38:
				return 847573100;
			case 15:
				return -95677681;
			default:
				break;
		}
	}
	return 0;
}

bool func_1525(int iParam0)
{
	if (_0x7907969497ea92f5(&(Global_1915715->f_20346[iParam0])))
	{
		return func_548(&(Global_1915715->f_20387[iParam0]), 4);
	}
	return false;
}

void func_1526(int iParam0, int iParam1)
{
}

bool func_1527(int iParam0)
{
	if (!func_626(iParam0))
	{
		return false;
	}
	if (iParam0 == 46 || iParam0 == 93)
	{
		return false;
	}
	iVar0 = func_203(iParam0);
	if (((((((((((((iVar0 == 10 || iVar0 == 29) || iVar0 == 4) || iVar0 == 14) || iVar0 == 15) || iVar0 == 16) || iVar0 == 27) || iVar0 == 28) || iVar0 == 35) || iVar0 == 35) || iVar0 == 38) || iVar0 == 29) || iVar0 == 39) || iVar0 == 33)
	{
		return true;
	}
	return false;
}

bool func_1528(int iParam0)
{
	if (!func_686(&(Global_1051439->f_72[iParam0]->f_69)))
	{
		return false;
	}
	return func_734(&(Global_1051439->f_72[iParam0]->f_69)) < 10f;
}

bool func_1529(int iParam0)
{
	if (((iParam0 == 14 || iParam0 == 38) || iParam0 == 15) || iParam0 == 39)
	{
		return true;
	}
	return false;
}

bool func_1530()
{
	return func_270(0);
}

int func_1531(int iParam0)
{
	return Global_1051439->f_72[iParam0]->f_6;
}

bool func_1532(int iParam0)
{
	if (func_2023(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

bool func_1533(int iParam0)
{
	func_2024(iParam0, 0, 0);
	if (func_1532(iParam0))
	{
		return door_system_get_door_state(iParam0) == 0;
	}
	return false;
}

void func_1534(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_2024(iParam0, 0, 0);
	if (func_1532(iParam0))
	{
		door_system_set_open_ratio(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_2025(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_2026(iParam0, 1);
			}
			else
			{
				func_2027(iParam0, 1);
			}
		}
		else
		{
			func_2028(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_2029())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_1535(int iParam0, int iParam1)
{
	func_836(&(Global_1051439->f_72[iParam0]->f_49), iParam1);
}

void func_1536()
{
	if (Global_1071686->f_28773.f_1 != 0)
	{
		return;
	}
	func_732(&(Global_1071686->f_28773.f_2), 1);
	Global_1071686->f_28773.f_1 = get_id_of_this_thread();
}

void func_1537(bool bParam0)
{
	if (Global_1071686->f_28773.f_1 != get_id_of_this_thread() && !bParam0)
	{
		return;
	}
	if (Global_1071686->f_28773.f_1 == 0)
	{
		return;
	}
	func_732(&(Global_1071686->f_28773.f_2), 2);
}

void func_1538(int iParam0)
{
	Global_1051439->f_72[iParam0]->f_49 = (Global_1051439->f_72[iParam0]->f_49 - Global_1051439->f_72[iParam0]->f_49 & 3080);
}

bool func_1539(struct<2> Param0)
{
	return func_2030(Param0, 1, 4);
}

bool func_1540(struct<2> Param0)
{
	return func_2030(Param0, 9, 12);
}

bool func_1541(int iParam0)
{
	return Global_1051439->f_3264 == iParam0;
}

bool func_1542(int iParam0)
{
	func_2024(iParam0, 0, 0);
	if (func_1532(iParam0))
	{
		return (door_system_get_door_state(iParam0) == 2 || door_system_get_door_state(iParam0) == 1);
	}
	return false;
}

var func_1543(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = sParam1;
	Var0.f_3 = sParam2;
	uVar4 = _0x339e16b41780fc35(uParam0, &Var0, iParam5);
	return uVar4;
}

int func_1544(int iParam0, var uParam1)
{
	iVar8 = 0;
	if (!func_2031(iParam0, func_1141()))
	{
		return 0;
	}
	Var1 = func_2032(0);
	Var1.f_1 = iParam0;
	_0x91ded5dd64bb2691(&Var1);
	if (!_0xed4413cee1bf142c(&Var1))
	{
		return 0;
	}
	while (_0xed4413cee1bf142c(&Var1))
	{
		if (!_0x44b3a36933ac009c(&uVar0, &Var1, 1373051002))
		{
		}
		else
		{
			(*uParam1)[iVar8] = uVar0;
			iVar8++;
		}
	}
	return iVar8;
}

void func_1545(var uParam0, bool bParam1)
{
	iVar1 = 10;
	iVar2 = func_581(-2061583405, 0);
	iVar3 = func_581(-525676072, 0);
	if (iVar2 == 0)
	{
		iVar2 = iVar3;
	}
	if (&uParam0->f_1[iVar1] != &Global_1952637->f_83[iVar1])
	{
		iVar4 = &uParam0->f_1[iVar1];
		if (func_1568(iVar4, &uVar0))
		{
			func_357(iVar4, 1, bParam1);
		}
		else
		{
			func_2033(iVar4, iVar2, 1, 1, 0, 1, bParam1);
		}
	}
}

void func_1546(var uParam0, bool bParam1)
{
	iVar0 = 23;
	func_1610(-1719060085, bParam1);
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_872(&(uParam0->f_1[iVar0]), 1, 1, 1, 0, bParam1);
	}
}

void func_1547(var uParam0, bool bParam1)
{
	iVar0 = 10;
	func_1610(119907797, bParam1);
	if (119907797 != func_362(&(uParam0->f_1[iVar0])))
	{
		return;
	}
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_872(&(uParam0->f_1[iVar0]), 1, 1, 1, 0, bParam1);
	}
}

void func_1548(var uParam0, bool bParam1)
{
	iVar0 = 20;
	iVar1 = 10;
	func_1610(1388798186, bParam1);
	if (&uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0])
	{
		return;
	}
	if (!func_560(&(uParam0->f_1[iVar0]), 343781202))
	{
		return;
	}
	iVar2 = func_2034(&(uParam0->f_1[iVar0]), 1108822547);
	if (iVar2 == 0)
	{
		return;
	}
	if (1388798186 != func_362(iVar2))
	{
		return;
	}
	func_872(iVar2, 1, 1, iVar2 == &uParam0->f_1[iVar1], 0, bParam1);
}

void func_1549(var uParam0, bool bParam1)
{
	iVar0 = 12;
	iVar1 = &uParam0->f_1[iVar0];
	if (func_560(iVar1, 160827531) || func_362(iVar1) == 81053684)
	{
		func_1610(81053684, bParam1);
		if (func_499(81053684))
		{
			func_1560(81053684, bParam1);
		}
		func_872(iVar1, 1, 1, (uParam0->f_1[iVar0]->f_1 == -1829635046 || func_560(iVar1, -1303648999)), 0, bParam1);
	}
	else
	{
		iVar1 = func_2035(81053684, 0);
		func_581(81053684, 0);
	}
	if (func_2036(&(uParam0->f_1[34])) != 0)
	{
		func_1559(81053684, bParam1);
	}
	else if (func_2037(iVar1) != 0)
	{
		func_1559(81053684, bParam1);
	}
	else if (!func_265(524288))
	{
		func_1560(81053684, bParam1);
	}
	iVar2 = 20;
	iVar3 = 18;
	if (&uParam0->f_1[iVar2] != &Global_1952637->f_83[iVar2] || &uParam0->f_1[iVar3] != &Global_1952637->f_83[iVar3])
	{
		if (func_560(iVar1, -1303648999))
		{
			return;
		}
		if (func_560(&(uParam0->f_1[iVar2]), -1527414429) || func_560(&(uParam0->f_1[iVar3]), -1527414429))
		{
			func_1559(81053684, bParam1);
		}
	}
}

bool func_1550(int iParam0, int iParam1, bool bParam2)
{
	Var0 = { func_1027(iParam0, bParam2, 0) };
	Var5 = { func_1028(iParam0, Var0, Var0.f_4, bParam2) };
	if (func_1029(iParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_480(bParam2), &Var5, iParam1);
	return true;
}

bool func_1551(int iParam0)
{
	if (!func_177(iParam0, 0))
	{
	}
	if (func_560(iParam0, -1285438911))
	{
		return true;
	}
	return false;
}

int func_1552(int iParam0)
{
	switch (iParam0)
	{
		case 491602716:
			return 0;
		case 217155793:
			return 1;
		case 97391779:
			return 2;
		case -808817534:
			return 3;
		case 1270922359:
			return 4;
		case -2011879201:
			return 5;
		case -1063340820:
			return 6;
		case 2127262701:
			return 7;
		case -1323870201:
			return 8;
		case 1632140501:
			return 9;
		case 967218463:
			return 10;
		default:
			break;
	}
	return -1;
}

bool func_1553(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		return (Global_17411.f_55.f_644.f_33[iParam1] && iParam0) != 0;
	}
	return false;
}

bool func_1554(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		return (Global_1952637->f_2965[iParam1] && iParam0) != 0;
	}
	return false;
}

struct<8> func_1555(int iParam0)
{
	if (func_1553(4, iParam0))
	{
		return *Global_17411.f_2625[iParam0];
	}
	StringCopy(&cVar0, _get_label_text_by_hash(func_2038(iParam0)), 64);
	return cVar0;
}

void func_1556(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		Global_1952637->f_2965[iParam1] = (Global_1952637->f_2965[iParam1] || iParam0);
	}
}

void func_1557(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		Global_1952637->f_2965[iParam1] = (&Global_1952637->f_2965[iParam1] - (Global_1952637->f_2965[iParam1] && iParam0));
	}
}

void func_1558(bool bParam0)
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

void func_1559(int iParam0, bool bParam1)
{
	iVar2 = func_480(bParam1);
	if (func_1564(iParam0, 1) > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_1952637->f_3334.f_26)
		{
			iVar1 = &Global_1952637->f_3334[iVar0];
			if (func_362(iVar1) == iParam0 || (iParam0 == 81053684 && func_560(iVar1, 160827531)))
			{
				_0x766315a564594401(iVar2, iVar1, 0);
			}
			iVar0++;
		}
	}
	func_2039(func_1224(iParam0), 6);
}

void func_1560(int iParam0, bool bParam1)
{
	iVar2 = func_480(bParam1);
	if (func_1564(iParam0, 1) > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_1952637->f_3334.f_26)
		{
			iVar1 = &Global_1952637->f_3334[iVar0];
			if (func_362(iVar1) == iParam0 || (iParam0 == 81053684 && func_560(iVar1, 160827531)))
			{
				if (func_560(iVar1, -166674229) && iParam0 != -999503751)
				{
				}
				else
				{
					_0x6a564540fac12211(iVar2, iVar1);
				}
			}
			iVar0++;
		}
	}
	func_2040(func_1224(iParam0), 6);
}

int func_1561(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	iVar1 = iParam0;
	if (Global_1952637->f_1675 == iVar1)
	{
		return 1;
	}
	func_2041(&(Global_1952637->f_1913), 0, 1, 1, 0);
	if (!func_1574(&(Global_1952637->f_1913), iVar1, &bVar0, 1, 0, 0, 0, 0, 1, 8))
	{
		return 0;
	}
	return func_2042(&(Global_1952637->f_1913), bVar0, uParam1, iParam2, bParam3, iParam4);
}

void func_1562(int iParam0)
{
	Global_1956200->f_1431.f_97 = iParam0;
}

bool func_1563()
{
	return Global_1956200->f_1431.f_97;
}

int func_1564(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1952637->f_3334.f_28;
		case 81053684:
			return Global_1952637->f_3334.f_30;
		case -525676072:
			return Global_1952637->f_3334.f_29;
		case -1719060085:
			return Global_1952637->f_3334.f_31;
		case 1388798186:
			return Global_1952637->f_3334.f_33.f_7;
		case 119907797:
			return Global_1952637->f_3334.f_32;
		case -999503751:
			if (bParam1)
			{
				return Global_1952637->f_3334.f_27;
			}
			else
			{
				return func_2043();
			}
			break;
	}
	return 0;
}

int func_1565(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam1 >= func_1564(iParam0, bParam2))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 25)
	{
		iVar2 = &Global_1952637->f_3334[iVar1];
		if (func_177(iVar2, 0))
		{
			if (func_362(iVar2) == iParam0 || (iParam0 == 81053684 && func_560(iVar2, 160827531)))
			{
				if (iVar0 == iParam1)
				{
					return iVar2;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_1566(int iParam0)
{
	Var0.f_1 = 39;
	func_2041(&Var0, 0, 1, 1, 0);
	iVar120 = func_1552(iParam0);
	if (!func_2044(&Var0, &uVar119, iParam0, iVar120, 1, 0, 0, 0, 8))
	{
		return -1;
	}
	return func_2045(&Var0);
}

int func_1567(int iParam0, int iParam1)
{
	Var0 = { func_1027(iParam0, 0, 0) };
	Var5 = { func_1028(iParam0, Var0, Var0.f_4, 0) };
	if (func_1029(iParam0, Var0, Var0.f_4, 0, 0, 0) <= 0)
	{
		return 0;
	}
	_0x6d2f987736a42d4c(func_480(0), &Var5, iParam1);
	return 1;
}

bool func_1568(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1952637->f_3334.f_26)
	{
		if (iParam0 == &Global_1952637->f_3334[*uParam1])
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

int func_1569(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = iParam0;
	if (Global_1952637->f_3334.f_26 >= 25)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_1568(iVar1, &uVar0))
	{
		return 0;
	}
	if (!func_2046(iParam0, 0))
	{
		return 0;
	}
	if (bParam3 && !func_1550(iParam0, 0, bParam4))
	{
		return 0;
	}
	Global_1952637->f_3334[Global_1952637->f_3334.f_26] = iVar1;
	Global_1952637->f_3334.f_26++;
	*uParam1++;
	return 1;
}

void func_1570()
{
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_3334.f_26)
	{
		Global_17411.f_55.f_644[iVar0] = &Global_1952637->f_3334[iVar0];
		iVar0++;
	}
	Global_17411.f_55.f_644.f_27 = Global_1952637->f_3334.f_27;
	Global_17411.f_55.f_644.f_28 = Global_1952637->f_3334.f_28;
	Global_17411.f_55.f_644.f_29 = Global_1952637->f_3334.f_29;
	Global_17411.f_55.f_644.f_30 = Global_1952637->f_3334.f_30;
	Global_17411.f_55.f_644.f_31 = Global_1952637->f_3334.f_31;
	Global_17411.f_55.f_644.f_32 = Global_1952637->f_3334.f_32;
	Global_17411.f_55.f_644.f_26 = Global_1952637->f_3334.f_26;
}

void func_1571(bool bParam0, int iParam1)
{
	if (!func_177(iParam1, 0))
	{
		return;
	}
	iVar7 = -1;
	if (!func_1315(iParam1, &Var0, 805880880, 0, 0, -401018458))
	{
		Var0 = "_PLACEHOLDER";
		Var0.f_1 = "inventory_items";
	}
	if (is_string_null_or_empty(Var0))
	{
		return;
	}
	if (bParam0)
	{
		sVar4 = "Transaction_Positive";
		iVar6 = 109029619;
		iVar7 = func_1552(iParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_1553(4, iVar7))
		{
			sVar3 = "OUTFIT_STORED_LITERAL";
			sVar5 = func_1337(func_1555(iVar7));
		}
		else
		{
			iVar8 = func_1320(iParam1);
			if (func_177(iVar8, 0))
			{
				iParam1 = iVar8;
			}
			sVar3 = "ITEM_STORED";
			sVar5 = _create_var_string(0, func_645(iParam1));
		}
	}
	else
	{
		sVar4 = "Transaction_Positive";
		iVar6 = 109029619;
		iVar7 = func_1552(iParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_1553(4, iVar7))
		{
			sVar3 = "OUTFIT_REMOVED_LITERAL";
			sVar5 = func_1337(func_1555(iVar7));
		}
		else
		{
			iVar9 = func_1320(iParam1);
			if (func_177(iVar9, 0))
			{
				iParam1 = iVar9;
			}
			sVar3 = "ITEM_REMOVED";
			sVar5 = _create_var_string(0, func_645(iParam1));
		}
	}
	sVar10 = func_1323(_create_var_string(10, sVar3, sVar5), iVar6);
	func_1311(sVar10, Var0.f_1, get_hash_key(Var0), 0, iVar6, "Transaction_Feed_Sounds", sVar4, 0, 1);
}

void func_1572(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_2047();
	}
	if (bParam0)
	{
		func_545(8);
		func_545(512);
	}
	else
	{
		func_545(8);
		func_545(16);
	}
}

bool func_1573(int iParam0, var uParam1, bool bParam2)
{
	if (*uParam1 <= 0)
	{
		*uParam1 = 0;
		return false;
	}
	if (Global_1952637->f_3334.f_26 <= 1)
	{
		Global_1952637->f_3334.f_26 = 0;
		*uParam1 = 0;
		Global_1952637->f_3334[0] = 0;
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1952637->f_3334.f_26 - 1))
	{
		if (iParam0 == &Global_1952637->f_3334[iVar0])
		{
			bVar1 = true;
		}
		if (bVar1 && iVar0 < (Global_1952637->f_3334.f_26 - 1))
		{
			Global_1952637->f_3334[iVar0] = &Global_1952637->f_3334[iVar0 + 1];
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_1952637->f_3334.f_26 = (Global_1952637->f_3334.f_26 - 1);
		*uParam1 = (*uParam1 - 1);
		Global_1952637->f_3334[Global_1952637->f_3334.f_26] = 0;
		func_1550(iParam0, 1, bParam2);
	}
	return bVar1;
}

bool func_1574(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9)
{
	iVar11 = 0;
	Var4 = func_2032(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	_0x91ded5dd64bb2691(&Var4);
	if (!_0xed4413cee1bf142c(&Var4))
	{
		return false;
	}
	_0xa63cd20f19b961ab(&bVar2, &Var4, -1516819610);
	_0x44b3a36933ac009c(&iVar0, &Var4, 2049745650);
	*bParam2 = bVar2;
	if (!bVar2 && !bParam3)
	{
		func_2041(uParam0, func_2048(iVar0), 1, 1, bParam7);
	}
	if (bVar2)
	{
		if (iParam9 != 8)
		{
			func_1742(-1);
		}
		if (_0x44b3a36933ac009c(&iVar0, &Var4, -1212855483))
		{
			iVar11 = func_2048(iVar0);
		}
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_871(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1373051002))
			{
			}
			else
			{
				uParam0->f_1[iVar1] = iVar0;
				if (bVar2)
				{
					func_1598(iVar3, 16, 6);
				}
				if (bParam5)
				{
					if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1]->f_1 = 1155669136;
					}
					else
					{
						Jump @362; //curOff = 297
						if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1194786549))
						{
							if (func_2049(iVar3) && func_2050(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
							{
								uParam0->f_1[iVar1]->f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1]->f_1 = iVar0;
						}
					}
					iVar1 = 16;
					if (bVar2)
					{
						if (!bParam8)
						{
							func_2051(uParam0, iVar11, func_2036(iParam1) != 0, iParam9);
						}
					}
					else if ((((func_1141() == 24043185 && &uParam0->f_1[iVar1] == &Global_1952637->f_83[iVar1]) && func_2036(&(uParam0->f_1[34])) == 0) && !func_265(32)) && !func_265(64))
					{
						uParam0->f_1[iVar1] = func_2052(-1293064293, 0);
						uParam0->f_1[iVar1]->f_1 = 1155669136;
						func_1745(uParam0, &(uParam0->f_1[iVar1]), iVar1, 0, iParam9);
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return true;
				}
			}
		}
	}
}

void func_1575()
{
	if (!func_2053(-1631930150, -336340230))
	{
		return;
	}
	Global_1956200->f_1715 = 0f;
}

void func_1576()
{
	func_2053(-1631930150, -179898515);
}

void func_1577()
{
	func_2053(-1631930150, 1767031434);
}

void func_1578()
{
	if (func_2054(-1631930150) != -336340230)
	{
		return;
	}
	func_2055(-1631930150);
}

void func_1579()
{
	if (func_2054(-1631930150) != -179898515)
	{
		return;
	}
	func_2055(-1631930150);
}

void func_1580()
{
	if (func_2054(-1631930150) != 1767031434)
	{
		return;
	}
	func_2055(-1631930150);
}

bool func_1581(struct<4> Param0, int iParam4, bool bParam5)
{
	if (!func_669(0))
	{
		return func_2056(&Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1585(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_480(bParam5), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1582(int iParam0, int iParam1, int iParam2)
{
	if (func_1141() == 2026485318)
	{
		switch (func_1600(iParam0, 1))
		{
			case -1889597427:
				return true;
			case -1292426046:
				return true;
			case 1422688607:
				return true;
			case 389988485:
				return true;
			case -207860920:
			case 788010710:
				if (func_1029(-55206167, func_1293(1), -1990194462, 1, 0, 0) >= 5)
				{
					return true;
				}
				return false;
			default:
				break;
		}
		return false;
	}
	switch (func_1600(iParam0, 1))
	{
		case -1889597427:
			return true;
		case -1292426046:
			return true;
		case 1422688607:
			return true;
		case 389988485:
			return true;
		case -450913544:
		case -207860920:
		case 788010710:
		case 1250092473:
			if (iParam0 == 16)
			{
				iVar0 = func_2036(iParam1);
				if (iVar0 != 0)
				{
					return false;
				}
				if (func_362(iParam2) == 912453393 && !func_1034(iParam2, 0))
				{
					return false;
				}
				if (func_362(iParam1) == -1740828670 || func_362(iParam1) == 344283346)
				{
					return false;
				}
			}
			else if (iParam0 == 18)
			{
				if (func_362(iParam2) != 912453393 || func_1034(iParam2, 0))
				{
					return false;
				}
			}
			if (func_1029(-55206167, func_1293(1), -1990194462, 1, 0, 0) >= 5)
			{
				return true;
			}
			return false;
		default:
			break;
	}
	return false;
}

int func_1583(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_2057(&uParam0, iParam4, bParam5, iParam6);
}

int func_1584(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_177(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_1027(iParam0, bParam2, 0) };
	Var5 = { func_1028(iParam0, Var0, Var0.f_4, bParam2) };
	if (!_0xb881ca836cc4b6d4(&Var5))
	{
		return 0;
	}
	Var9.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_480(bParam2), &Var5, &Var9, 15, 1))
	{
		return 0;
	}
	Var24.f_9 = -1591664384;
	if (!_0x9700e8efc4ab9089(func_480(bParam2), &Var5, &Var24, true))
	{
		return 0;
	}
	if (Var9.f_14 == iParam1 && Var24.f_10 == iParam3)
	{
		return 1;
	}
	if (func_669(bParam2))
	{
		Var9.f_14 = iParam1;
		if (!_0xd80a8854db5cfba5(func_480(bParam2), &Var5, &Var9, 15))
		{
			return 0;
		}
	}
	else
	{
		Var38.f_9 = 1;
		Var38.f_11 = -1591664384;
		Var38 = { func_2058(&Var9, 0) };
		Var38.f_10 = iParam3;
		Var38.f_16 = iParam1;
		iVar55 = func_2059(-1230526146, &Var38, 0);
		if (iVar55 == -1)
		{
			return 0;
		}
		Global_1952637->f_926 = iVar55;
	}
	return 1;
}

bool func_1585(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_2060(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

void func_1586(bool bParam0, bool bParam1)
{
	Var0.f_7 = 752097756;
	Var0.f_8 = 1056964608;
	Var0.f_9 = 1065353216;
	if (bParam0)
	{
		_0x83b8d50eb9446bba(Global_34, 1);
		if (Global_1952637->f_927 != 0)
		{
			Var0.f_4 = Global_1952637->f_927;
			Var0 = { func_1028(Global_1952637->f_927, func_1190(bParam1), Global_1952637->f_928, bParam1) };
			Var0.f_6 = 3;
			Var0.f_12 = 1;
			_give_weapon_to_ped(Global_34, &Var0, &uVar16);
			set_current_ped_weapon(Global_34, Global_1952637->f_927, true, 3, false, false);
		}
		else
		{
			iVar26 = func_2061(&Var22, 262176, 0);
			if (iVar26 != 0)
			{
				Var0.f_4 = iVar26;
				Var0 = { Var22 };
				Var0.f_6 = 3;
				Var0.f_12 = 1;
				_give_weapon_to_ped(Global_34, &Var0, &uVar16);
			}
		}
	}
	else
	{
		Global_1952637->f_927 = 0;
		Var27.f_9 = -1591664384;
		if (((_0x6929e22158e52265(Global_34, 1, &Var22) && func_1585(Var22, &Var27, bParam1, 0, -1)) && _is_weapon_one_handed(Var27.f_4)) || ((_0x6929e22158e52265(Global_34, 3, &Var22) && func_1585(Var22, &Var27, bParam1, 0, -1)) && _is_weapon_one_handed(Var27.f_4)))
		{
			Global_1952637->f_927 = Var27.f_4;
			Global_1952637->f_928 = Var27.f_9;
		}
		set_current_ped_weapon(Global_34, -1569615261, true, 3, false, false);
		_0x83b8d50eb9446bba(Global_34, 0);
	}
}

int func_1587(int iParam0)
{
	switch (iParam0)
	{
		case 12857284:
			return -1990383629;
		case 299749022:
			return -101524555;
		case -1180698265:
			return -1915385310;
		case -487028314:
			return 1315162488;
		case 241235545:
			return 727393558;
		case 1827902148:
			return -1228057307;
		case 1301555144:
			return 1712094016;
		case -2056583192:
			return -1248299493;
		case 1015239729:
			return -451359317;
		case -340627321:
			return -2041626192;
		case -875805376:
			return -1371514637;
		case -768760704:
			return 1547608292;
		case 1089431066:
			return -361152079;
		case -2118203104:
			return -1994943603;
		case 1285634184:
			return 1011151573;
		case -559080197:
			return 892816668;
		case -1811760631:
			return -246340825;
		case 1858448324:
			return -1839865333;
		default:
			break;
	}
	return 0;
}

int func_1588(int iParam0)
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

int func_1589(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (!func_177(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_1027(iParam0, 0, 0) };
	Var5 = { func_1028(iParam0, Var0, Var0.f_4, 0) };
	if (!_0xb881ca836cc4b6d4(&Var5))
	{
		return 0;
	}
	Var9.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_480(bParam2), &Var5, &Var9, 15, 1))
	{
		return 0;
	}
	Var24.f_9 = -1591664384;
	if (!_0x9700e8efc4ab9089(func_480(bParam2), &Var5, &Var24, true))
	{
		return 0;
	}
	iVar38 = func_2062(fParam1);
	if (Var9.f_14 == iVar38 && Var24.f_10 == iParam3)
	{
		return 1;
	}
	if (func_669(bParam2))
	{
		Var9.f_14 = iVar38;
		if (!_0xd80a8854db5cfba5(func_480(bParam2), &Var5, &Var9, 15))
		{
			return 0;
		}
	}
	else
	{
		Var39.f_9 = 1;
		Var39.f_11 = -1591664384;
		Var39 = { func_2058(&Var9, 0) };
		Var39.f_10 = iParam3;
		Var39.f_16 = iVar38;
		iVar56 = func_2059(-1230526146, &Var39, 0);
		if (iVar56 == -1)
		{
			return 0;
		}
		Global_1952637->f_926 = iVar56;
	}
	return 1;
}

void func_1590(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (_0x93ffd92f05ec32fd(uParam0->f_3.f_1))
	{
		func_1591(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_871(func_364(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_2063(uParam0);
	}
}

void func_1591(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	if (uParam0->f_3 && _0x93ffd92f05ec32fd(uParam0->f_3.f_1))
	{
		_0x13e7320c762f0477(uParam0->f_3.f_1);
		uParam0->f_3.f_1 = -1;
	}
	uParam0->f_3 = 0;
}

bool func_1592(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_1593(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

void func_1594(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 > 0 && ((*uParam1)[(iParam2 - 1)])->f_1 > (*uParam1)[iParam2]->f_1)
	{
		func_2064(uParam0, uParam1);
	}
	else
	{
		func_2065(uParam0, (*uParam1)[iParam2]);
	}
}

bool func_1595(int iParam0, int iParam1)
{
	return ((Global_1952637->f_83[func_871(iParam0, 1)])->f_11 && iParam1) != 0;
}

bool func_1596(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return (Global_1952637->f_83[iParam0]->f_10 && iParam1) != 0;
}

void func_1597(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 10;
	if (func_1595(1108822547, 6) || bParam3)
	{
		if (bParam2 || bParam3)
		{
			func_892(iParam0, iVar0, 0);
			func_1598(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1952637->f_3467.f_1, &(Global_1952637->f_3467.f_3[0]), &(Global_1952637->f_3467.f_3[1]), &(Global_1952637->f_3467.f_3[2]), Global_1952637->f_3467.f_8, Global_1952637->f_3467.f_9, Global_1952637->f_3467.f_10, Global_1952637->f_3467.f_11);
		func_1030(1108822547, 1, 6);
	}
	Global_1952637->f_925++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1598(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_871(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_871(iParam0, 1)])->f_11 || iParam1);
}

void func_1599(var uParam0, int iParam1)
{
	_set_ped_component_enabled(iParam1, *uParam0, false, true, false);
	if (uParam0->f_1 != 0)
	{
		_0x66b957aac2eaaeab(iParam1, *uParam0, uParam0->f_1, 0, true, 1);
	}
}

int func_1600(int iParam0, int iParam1)
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
			return 735520874;
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

void func_1601(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1602(var uParam0, int iParam1)
{
	if (!func_1595(-1197751823, 192))
	{
		return;
	}
	func_1030(-1197751823, 192, 6);
	if (!func_1595(1250092473, 1))
	{
		Global_1952637->f_925++;
		func_1599(uParam0->f_1[16], iParam1);
	}
	if (!func_1595(-450913544, 1))
	{
		Global_1952637->f_925++;
		func_1599(uParam0->f_1[18], iParam1);
	}
}

void func_1603(var uParam0)
{
	Var2 = 39;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*Global_1952637->f_2897.f_35[iVar0] = { Var2 };
		if (!func_2066(uParam0->f_2[iVar0], 2))
		{
			*Global_1952637->f_2897.f_35[iVar1] = { *uParam0->f_2[iVar0] };
			iVar1++;
		}
		*uParam0->f_2[iVar0] = { Var2 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		*uParam0->f_2[iVar0] = { *Global_1952637->f_2897.f_35[iVar0] };
		iVar0++;
	}
	*uParam0 = iVar1;
}

bool func_1604(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_1605(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_1606(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 16)
	{
		return;
	}
	if (!func_2067(uParam0, 1))
	{
		func_2068(uParam0, 1);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_2[iVar0] == iParam1)
		{
			uParam0->f_2[iVar0]->f_1 = iParam2;
			return;
		}
		if (Global_1952637->f_83[&uParam0->f_2[iVar0]]->f_2 > Global_1952637->f_83[iParam1]->f_2)
		{
			iVar1 = *uParam0;
			while (iVar1 >= iVar0 + 1)
			{
				*uParam0->f_2[iVar1] = { *(uParam0->f_2[(iVar1 - 1)]) };
				iVar1 = (iVar1 + -1);
			}
			uParam0->f_2[iVar0] = iParam1;
			uParam0->f_2[iVar0]->f_1 = iParam2;
			*uParam0++;
			return;
		}
		iVar0++;
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

void func_1607(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = true;
	if (&Global_1952637->f_1556.f_1[iParam2] == &Global_1952637->f_83[iParam2] || func_1609(iParam1, 8))
	{
		if (!func_1595(iParam1, 1))
		{
			func_892(iParam0, iParam2, bParam3);
			func_1598(iParam1, 1, 6);
			Global_1952637->f_1556.f_1[iParam2] = &Global_1952637->f_83[iParam2];
			Global_1952637->f_1556.f_1[iParam2]->f_1 = 0;
			func_2069(iParam2, 0);
			*bParam4 = 0;
			Global_1952637->f_925++;
		}
		return;
	}
	if (func_1609(iParam1, 16))
	{
		if (iParam1 == 1108822547)
		{
			bVar0 = !func_265(32768);
			func_358();
		}
		func_892(iParam0, iParam2, bVar0);
	}
	if (func_1595(iParam1, 1))
	{
		func_1030(iParam1, 1, 6);
	}
	Global_1952637->f_925++;
	_set_ped_component_enabled(iParam0, &(Global_1952637->f_1556.f_1[iParam2]), false, bParam3, false);
	*bParam4 = 1;
	func_2069(iParam2, 1);
	iVar1 = &Global_1952637->f_1556.f_1[iParam2];
	if ((func_362(iVar1) == 81053684 || func_560(iVar1, 160827531)) && !func_560(iVar1, -1303648999))
	{
		if (func_1609(iParam1, 1))
		{
			Global_1952637->f_1556.f_1[iParam2]->f_1 = -1829635046;
			_0x66b957aac2eaaeab(iParam0, &(Global_1952637->f_1556.f_1[iParam2]), -1829635046, 0, bParam3, 1);
		}
		else
		{
			_0x66b957aac2eaaeab(iParam0, &(Global_1952637->f_1556.f_1[iParam2]), 1155669136, 0, bParam3, 1);
			*bParam4 = 0;
		}
	}
}

void func_1608(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == -999503751 && bParam2)
	{
		func_2070();
		return;
	}
	if (iParam1 == -1)
	{
		iVar0 = func_2022(iParam0);
		if (iVar0 == -358215195)
		{
			return;
		}
		iParam1 = func_871(iVar0, 1);
	}
	if (bParam3)
	{
		iVar1 = &Global_1952637->f_2151.f_1.f_1[iParam1];
	}
	else
	{
		iVar1 = &Global_1952637->f_1556.f_1[iParam1];
	}
	if (iVar1 == &Global_1952637->f_1675.f_1[iParam1])
	{
		return;
	}
	if ((!func_1034(iVar1, 0) && iParam0 == func_362(iVar1)) || iParam0 == -1674363638)
	{
		switch (iParam0)
		{
			case 1589583617:
				func_2071();
				break;
			case -1839668642:
			case -1415811768:
				func_2072();
				break;
			case -1674363638:
			case 231148558:
				func_2073();
				break;
			case -525676072:
				func_2074();
				break;
			default:
				break;
		}
	}
	if (func_1596(iParam1, 8) && bParam2)
	{
		func_2070();
	}
}

bool func_1609(int iParam0, int iParam1)
{
	return ((Global_1952637->f_2685[func_871(iParam0, 1)])->f_1 && iParam1) != 0;
}

void func_1610(int iParam0, bool bParam1)
{
	if (func_1564(iParam0, 0) <= 0)
	{
		return;
	}
	iVar0 = (Global_1952637->f_3334.f_26 - 1);
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1952637->f_3334[iVar0];
		if (func_1564(iParam0, 1) <= 0)
		{
			return;
		}
		if (iParam0 == func_362(iVar1) || (iParam0 == 81053684 && func_560(iVar1, 160827531)))
		{
			func_873(iVar1, 1, 1, 0, bParam1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_1611(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*iParam0 <= 0)
	{
		return;
	}
	if (func_265(4718592))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_2075(&(iParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (bParam4)
	{
		bVar1 = false;
		if (Global_1952637->f_1675 != 491602716 || !func_1553(2, -1))
		{
			bVar1 = true;
		}
		else if (!func_560(Global_1952637->f_1675, -166674229) && (Global_1952637->f_1675 != 491602716 || !func_1553(2, -1)))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			Global_1952637->f_1675 = 491602716;
			Global_1952637->f_1556 = 491602716;
			func_2076(-1, 0, 6);
			func_171(27, 0, 65536, 0, 0);
		}
	}
	if (bParam3)
	{
		func_1572(0, 1);
	}
}

void func_1612(int iParam0)
{
	Var1 = 39;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		*iParam0->f_2[iVar0] = { Var1 };
		iVar0++;
	}
	*iParam0 = 0;
	iParam0->f_1 = 0;
}

bool func_1613(int iParam0, var uParam1)
{
	if (!func_2077(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1915666[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

bool func_1614(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	if (_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return true;
	}
	return false;
}

int func_1615(struct<5> Param0, int iParam5, int iParam6, int iParam7)
{
	Param0.f_2 = iParam5;
	Param0.f_3 = iParam6;
	Param0.f_4 = iParam7;
	uVar0 = _datafile_get_num_nodes(&Param0);
	return uVar0;
}

bool func_1616(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (_datafile_get_hash(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_1617(int iParam0)
{
	switch (iParam0)
	{
		case -1039839725:
			return -406491492;
		case 423264750:
			return 931844364;
		case -2071873973:
			return 246385598;
		case -398968481:
			return -366693282;
		case -2105530711:
			return -1725579161;
		case 625416786:
			return -1057211637;
		case 1306151543:
			return -1505611915;
		case -1678070620:
			return -106096122;
		case -1859584295:
			return -2041904210;
		case -1939322467:
			return -1903910230;
		case -1971228573:
			return -1762808228;
		case -1754244730:
			return -134124598;
		case 1841183082:
			return 366200818;
		case -610558556:
			return -322391462;
		case 904830164:
			return -1229572297;
		case 719843584:
			return 98860198;
		case -1110426434:
			return -126114541;
		case -223797183:
			return 1963323202;
		case 1984438688:
			return -2087420491;
		case 1013950848:
			return 1524025505;
		case 1466020155:
			return 1606587013;
		case -355441334:
			return 706918662;
		case -1484052032:
			return 1163341077;
		case 1746653115:
			return 2056714954;
		case -856561534:
			return 1820468724;
		case -237881785:
			return 1094162565;
		case -689983341:
			return 1065301383;
		case 1853503172:
			return 188311241;
		case -2089804556:
			return 539411565;
		case 237827878:
			return -242465481;
		case 2115205669:
			return 1250560851;
		case -515231328:
			return 1065202434;
		case -2017254508:
			return 923771890;
		case 858722808:
			return 725125637;
		case -398105014:
			return 1527726350;
		case 1938574876:
			return 1026208467;
		case 376149636:
			return -2022036233;
		case 1253249384:
			return 1008366797;
		case -43043573:
			return -407765147;
		case -1162640732:
			return -529714994;
		case -662295926:
			return 1799186100;
		case 2045415055:
			return 1214179380;
		case 1174324405:
			return -372138959;
		case 874055612:
			return 1995498098;
		case -415832755:
			return 2118314848;
		case 1252420504:
			return 1937338194;
		case -911191911:
			return -1567461477;
		case 746805277:
			return 425108158;
		case -1901841908:
			return 2044190614;
		case -1383261957:
			return -2088206712;
		case -2124282627:
			return 1058996709;
		case 735082099:
			return -636605355;
		case 63173055:
			return -811108073;
		case 1418570693:
			return -1806676698;
		case -1476509547:
			return 1431760203;
		case -1653154748:
			return -1896142998;
		case 582522943:
			return -1250802524;
		case 250841639:
			return 1018031031;
		case -743641788:
			return -1459825906;
		case -366404014:
			return -1783800278;
		case -1267505364:
			return -356646862;
		case -1440204674:
			return -1394906584;
		case 1981185929:
			return 2076247897;
		case 100277197:
			return -614161520;
		case 798554492:
			return -85389185;
		case 1573110862:
			return -1691579511;
		case 1356956506:
			return 904313209;
		case -1292335301:
			return 1237884315;
		case 368776083:
			return 2078766994;
		case 974566458:
			return -1176307199;
		case 1620573656:
			return -1229581779;
		case 2097486068:
			return 2080418032;
		case 156885186:
			return -1496238906;
		case 1897833847:
			return 451737564;
		case -77443607:
			return -2110355467;
		case 1374870102:
			return 491541130;
		case -147640227:
			return -1168358466;
		case 263550809:
			return -2130987730;
		case 1755853336:
			return -1595692161;
		case -1708863941:
			return -1223513441;
		case 783045853:
			return 822561179;
		case 1333257424:
			return 1363860714;
		case 603592077:
			return 1377798597;
		case 1801830393:
			return 2004797167;
		case -834874115:
			return 410165049;
		case -1129780236:
			return 828269641;
		default:
			break;
	}
	return 0;
}

int func_1618(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_int(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_1619(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return 3;
	}
	iVar0 = func_1552(iParam1);
	if (iVar0 == -1 && !func_2031(iParam1, func_1141()))
	{
		return 3;
	}
	if (uParam2->f_1 != 0 && func_2078(uParam2, 1))
	{
		if (uParam2->f_1 == iParam1)
		{
			if (bParam3)
			{
				return func_2079(iParam0, uParam2);
			}
			else
			{
				return 2;
			}
		}
		else if (uParam2->f_1 != iParam1)
		{
			func_2080(uParam2);
		}
	}
	if (!func_2078(uParam2, 1))
	{
		func_2081(&(uParam2->f_1));
		if (!func_2044(&(uParam2->f_1), &uVar1, iParam1, iVar0, 1, 0, 0, 0, 8))
		{
			return 3;
		}
		uParam2->f_1 = iParam1;
		func_2082(uParam2, 1);
	}
	if (!bParam3)
	{
		return 2;
	}
	return func_2079(iParam0, uParam2);
}

void func_1620(int iParam0)
{
	Global_1952637->f_593 = iParam0;
}

int func_1621(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 3;
	}
	if (uParam1->f_1 == 0)
	{
		return 3;
	}
	iVar0 = 0;
	while (iVar0 < uParam1->f_134)
	{
		if (!_0xb0b2c6d170b0e8e5(&(uParam1->f_135[iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	return 2;
}

int func_1622()
{
	iVar5 = player_ped_id();
	bVar3 = get_current_ped_weapon(iVar5, &iVar0, true, 0, false);
	bVar4 = get_current_ped_weapon(iVar5, &iVar1, true, 1, false);
	if ((func_1749(iVar0) || func_1749(iVar1)) || _is_weapon_melee(iVar0))
	{
		return 0;
	}
	if (bVar3)
	{
		iVar2 = func_2083(iVar0);
		switch (iVar2)
		{
			case -1212426201:
			case -594562071:
			case 860033945:
			case 970310034:
				func_2084(1);
				return 1;
			case 416676503:
				return 0;
			case -1101297303:
				return 0;
			default:
				break;
		}
		if (iVar0 == -1569615261)
		{
			func_2084(2);
		}
	}
	if (bVar4)
	{
		if (iVar1 != -1569615261)
		{
			func_2084(0);
		}
		return 1;
	}
	func_2084(2);
	return 1;
}

void func_1623(bool bParam0)
{
	func_1608(-999503751, -1, 1, 0);
	func_1608(1589583617, 27, 0, bParam0);
	func_1608(-525676072, 10, 0, bParam0);
}

int func_1624(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	bVar0 = false;
	bVar1 = true;
	if (uParam1->f_1 == 0)
	{
		return 0;
	}
	if (func_1621(iParam0, uParam1) != 2)
	{
		bVar1 = false;
	}
	func_2085(&(uParam1->f_1));
	iVar2 = 112;
	bVar0 = func_1552(uParam1->f_1) >= false;
	if (!bVar0)
	{
		iVar2 = func_2086(uParam1->f_1);
	}
	func_2041(&(Global_1952637->f_1675), iVar2, 0, 0, 0);
	if (bVar1)
	{
		func_888(&(Global_1952637->f_1675), iParam0, 1, -1, 1, 1, 1, 1);
	}
	else
	{
		func_171(2, 0, 2, 0, 0);
	}
	func_171(27, 0, 0, 0, 0);
	func_171(34, 0, 0, 0, 0);
	func_2087(iParam0);
	if (bParam2)
	{
		func_2080(uParam1);
	}
	if (bParam3)
	{
	}
	return 1;
}

char* func_1625()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

bool func_1626(bool bParam0)
{
	if (Global_1952637->f_2843.f_1 <= 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_1600(iVar0, 1);
		if (func_1595(iVar2, 2))
		{
		}
		else if (&Global_1952637->f_2843.f_3[iVar0] == 0)
		{
		}
		else
		{
			if (bParam0 && func_2088(iVar0) == -1)
			{
				func_1743(iVar0, 0);
				func_1601(Global_1952637->f_2897.f_2[(Global_1952637->f_2897 - 1)], 2, 6);
			}
			func_1598(iVar2, 2, 6);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return true;
	}
	return false;
}

bool func_1627(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_1600(iVar0, 1);
		if (!func_1595(iVar2, 2))
		{
		}
		else if (&Global_1952637->f_2843.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0)
			{
				func_1743(iVar0, 0);
				func_1601(Global_1952637->f_2897.f_2[(Global_1952637->f_2897 - 1)], 1, 6);
			}
			func_1030(iVar2, 3, 6);
			Global_1952637->f_2764[iVar0] = 0;
			Global_1952637->f_2764[iVar0]->f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

struct<2> func_1628()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_1629(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return true;
	}
	if (func_326(*Global_1051213) && !func_1662(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_1300(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_134(iParam3, 255))
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
	if (func_967())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_326(*Global_1051213))
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

void func_1630(float fParam0)
{
}

void func_1631()
{
	animpostfx_stop("PlayerDrunk01");
	Global_1940085->f_15 = 0f;
}

float func_1632(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_1633(int iParam0)
{
	if (!func_959(iParam0))
	{
		return false;
	}
	if (!func_960(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1634(var uParam0, var uParam1)
{
	func_2089(uParam1);
	uParam1->f_30 = { *uParam0 };
	uParam1->f_62 = uParam0->f_5;
	bVar0 = true;
	func_2090(uParam1);
	if (!func_2091(*uParam0, &(uParam1->f_18)))
	{
		bVar0 = false;
	}
	else if (!func_2092(&(uParam1->f_18), &(uParam1->f_24)))
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
	if (!func_2091(uParam0->f_1, &(uParam1->f_6)))
	{
		bVar0 = false;
	}
	else if (!func_2092(&(uParam1->f_6), &(uParam1->f_12)))
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

int func_1635(var uParam0)
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
	iVar0 = func_2093(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_2094(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_2095(uParam0);
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

int func_1636(var uParam0)
{
	Var0 = Global_1071686->f_23887.f_366.f_4085;
	Var0.f_2 = 1593794963;
	Var0.f_3 = uParam0;
	return _datafile_get_num_nodes(&Var0);
}

bool func_1637(var uParam0, int iParam1, var uParam2, bool bParam3)
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
		_datafile_get_float(bParam3, &Var0);
		return true;
	}
	return false;
}

bool func_1638(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

int func_1639(int iParam0)
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

void func_1640(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_1641(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_1642(struct<29> Param0, var uParam29, int iParam30)
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

void func_1643(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

bool func_1644(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_1645(vector3 vParam0, var uParam3, bool bParam4)
{
	uVar0 = &Global_1071686->f_23887.f_366[func_2096(vParam0)];
	iVar1 = func_1636(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = get_random_int_in_range(0, iVar1);
		if (func_1637(uVar0, iVar2, uParam3, bParam4))
		{
			return true;
		}
	}
	return false;
}

void func_1646(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_1639(255) == 4)
	{
		return;
	}
	if (func_628(vParam0))
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
		func_2097(0, 0, 0, 1);
	}
	func_921(0);
	func_921(3);
	Global_1102219->f_3919 = iParam11;
	Global_1102219->f_3920 = fParam12;
	Global_1102219->f_3921 = iParam13;
	func_1640(&(Global_1102219->f_3849));
	Global_1102219->f_3849 = bParam3;
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
	func_1641(&(Global_1102219->f_3888));
	Global_1102219->f_3888.f_6 = { vParam4 };
	Global_1102219->f_3888 = bParam7;
	Global_1102219->f_3888.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_1642(Global_1102219->f_3849, 36);
	func_1643(Global_1102219->f_3888, 36);
}

int func_1647(vector3 vParam0)
{
	iVar0 = func_2098(vParam0, 0f, 0f, 0, 2);
	return func_2098(vParam0, (*Global_1892740)[iVar0]->f_1, (*Global_1892740)[iVar0]->f_2, Global_1892740[iVar0], 4);
}

bool func_1648()
{
	if (func_66() != 0)
	{
		return true;
	}
	if (func_967())
	{
		return false;
	}
	if (_0x7ec0d68233e391ac(6) == 1)
	{
		return true;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_2099() };
	if (func_326(Var0))
	{
		return false;
	}
	Var2 = { func_382() };
	if (func_326(Var2))
	{
		return false;
	}
	return true;
}

char* func_1649(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_1650(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_2100(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_1651(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
		case 1:
			return "LANDMARK_SCRATCHING_POST";
		case 2:
			return "LANDMARK_JORGES_GAP";
		case 3:
			return "LANDMARK_MERCER_STATION";
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
		case 6:
			return "LANDMARK_SILENT_STEAD";
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
		case 9:
			return "LANDMARK_TWO_CROWS";
		case 10:
			return "LANDMARK_REPENTANCE";
		case 11:
			return "LANDMARK_BENEDICT_PASS";
		case 12:
			return "WATER_MANTECA_FALLS";
		case 13:
			return "SETTLEMENT_LIMPANY";
		case 14:
			return "WATER_MOUNT_SHANN";
		case 15:
			return "LANDMARK_THREE_SISTERS";
		case 16:
			return "HIDEOUT_PIKES_BASIN";
		case 17:
			return "SETTLEMENT_EL_NIDO";
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
		case 19:
			return "LANDMARK_ERIS_FIELD";
		case 20:
			return "LANDMARK_GRANITE_PASS";
		case 21:
			return "LANDMARK_VENTERS_PLACE";
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
		case 25:
			return "LANDMARK_CITADEL_ROCK";
		case 26:
			return "LANDMARK_CUEVA_SECA";
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
		case 29:
			return "LANDMARK_DONNER_FALLS";
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
		case 32:
			return "LANDMARK_FORT_BRENNAND";
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 35:
			return "LANDMARK_MESCALERO";
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
		case 38:
			return "LANDMARK_BROKEN_TREE";
		case 39:
			return "LANDMARK_BARDS_CROSSING";
		case 40:
			return "LANDMARK_FACE_ROCK";
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	}
	return "";
}

bool func_1652(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 68:
			return true;
	}
	return false;
}

bool func_1653(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

bool func_1654(int iParam0)
{
	return iParam0 != 0;
}

bool func_1655(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1656(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_39.f_3643[iVar1]), iVar2);
}

int func_1657(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1806461473;
		case 3:
			return -694461623;
		case 1:
			return 1093870742;
		case 0:
			return 999150106;
		case 4:
			return 1098225713;
		case 5:
			return -1828192959;
		default:
			break;
	}
	return 0;
}

int func_1658(int iParam0)
{
	return func_2101(iParam0) + 30;
}

bool func_1659()
{
	return true;
}

int func_1660(int iParam0)
{
	iVar0 = func_962(iParam0);
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

void func_1661(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_1662(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_1663(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_1664(int iParam0, int iParam1)
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

Vector3 func_1665(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_19;
}

Vector3 func_1666(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_19;
}

Vector3 func_1667(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_19;
}

void func_1668(int iParam0, int iParam1)
{
	if (!func_972(iParam0))
	{
		return;
	}
	(*Global_1900838)[iParam0]->f_1 = ((*Global_1900838)[iParam0]->f_1 || iParam1);
}

void func_1669(int iParam0)
{
	if (func_66() == -1)
	{
		return;
	}
	if ((*Global_1835011)[iParam0]->f_3 != 0 && _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3))
	{
		_unlock_set_new((*Global_1835011)[iParam0]->f_3, false);
	}
	func_2102(iParam0);
}

void func_1670(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1671(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_326(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_69(Param0) && !func_327(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_2103(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_323(Param0) == 3)
		{
			func_273(1, -1706799532);
		}
		else if (func_323(Param0) == 4)
		{
			func_273(0, -1706799532);
		}
	}
	if ((func_323(Param0) == 3 || func_323(Param0) == 1) || ((bParam5 && func_323(Param0) == 4) && _0x01f4d242765c6b24(func_2103(Param0))))
	{
		if (iParam3 != -1)
		{
			func_2104(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_2104(Param0, 2, iParam4, 255, 0);
		}
	}
	func_2105(Param0, 0);
	if (func_1662(func_68(0), Param0))
	{
		func_2106(1);
		func_2107(0);
		func_2108(0);
		func_2109(1);
	}
	func_2110(Param0);
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_70(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		_0x1096603b519c905f("");
	}
}

void func_1672(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

int func_1673(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_2111(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_2112(iParam0, uVar0, iVar1, bParam2);
}

bool func_1674(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

bool func_1675(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	Var29 = { func_1189(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_1192(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_559(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_2113(&Var45, &Var0, 0))
				{
					if (func_2114(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_561(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_561(iVar43);
	}
	return false;
}

struct<4> func_1676()
{
	return Global_1291734->f_11.f_310;
}

bool func_1677()
{
	return Global_1291734->f_11.f_318 > Global_1296859->f_21;
}

void func_1678(var uParam0, bool bParam1)
{
	Global_1291734->f_11.f_310 = { *uParam0 };
	if (bParam1)
	{
		Global_1291734->f_11.f_318 = Global_1296859->f_21 + 10;
	}
}

int func_1679(int iParam0, int iParam1)
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

struct<4> func_1680()
{
	return Var0;
}

bool func_1681(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	Var29 = { func_1189(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_1192(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_559(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_2113(&Var45, &Var0, 0))
				{
					if (func_2114(&(Var0.f_24), 32))
					{
						*uParam0 = { Var0 };
						func_561(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_561(iVar43);
	}
	return false;
}

struct<4> func_1682(bool bParam0)
{
	Var2.f_9 = -1591664384;
	if (!func_558("ALL HORSES", &iVar0, &iVar1, -1591664384, bParam0))
	{
		return Var2;
	}
	iVar16 = 0;
	while (iVar16 < iVar1)
	{
		if (!func_559(&Var2, iVar16, iVar0, iVar1))
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
	func_561(iVar0);
	return Var2;
}

void func_1683(var uParam0)
{
	func_2115(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_1680() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
}

bool func_1684(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_2113(uParam0, uParam2, bParam3))
	{
		return false;
	}
	if (!func_2116(uParam1, uParam2))
	{
		return false;
	}
	return true;
}

bool func_1685(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_2117(uParam0, uParam2, bParam3))
	{
		return false;
	}
	if (!func_2118(uParam1, uParam2))
	{
		return false;
	}
	return true;
}

bool func_1686(var uParam0)
{
	Var0 = { func_1680() };
	if (_0x4c543d5dfcd2dafd(uParam0, &Var0))
	{
		return false;
	}
	Var4.f_9 = -1591664384;
	iVar19 = 0;
	while (iVar19 < 10)
	{
		if (_0x4c543d5dfcd2dafd(Global_17411.f_55.f_61.f_41[iVar19], uParam0))
		{
			bVar18 = true;
		}
		else if (_0x4c543d5dfcd2dafd(Global_17411.f_55.f_61.f_41[iVar19], &Var0))
		{
			func_2119(Global_17411.f_55.f_61.f_41[iVar19]);
			*Global_17411.f_55.f_61.f_41[iVar19] = { *uParam0 };
			bVar18 = true;
		}
		else
		{
			if (func_1585(*Global_17411.f_55.f_61.f_41[iVar19], &Var4, 1, 1, -1))
			{
			}
			else
			{
				func_2119(Global_17411.f_55.f_61.f_41[iVar19]);
				*Global_17411.f_55.f_61.f_41[iVar19] = { *uParam0 };
				bVar18 = true;
			}
			else
			{
				iVar19++;
			}
		}
	}
	if (!bVar18)
	{
		return false;
	}
	return true;
}

bool func_1687(var uParam0, int iParam1)
{
	fVar0 = func_2120(iParam1);
	if (fVar0 == 1E+09f)
	{
		return false;
	}
	if (func_1689(uParam0, iParam1) >= fVar0)
	{
		return true;
	}
	return false;
}

bool func_1688(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		return false;
	}
	switch (iParam1)
	{
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			return false;
		default:
			break;
	}
	if (func_993(iParam0) < 0.1f)
	{
		return false;
	}
	return true;
}

float func_1689(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (_0x4c543d5dfcd2dafd(Global_17411.f_55.f_61.f_41[iVar0], uParam0))
		{
			return &(Global_17411.f_55.f_61.f_41[iVar0]->f_4[iParam1]);
		}
		iVar0++;
	}
	if (!func_1686(uParam0))
	{
		return 0f;
	}
	return 0f;
}

float func_1690(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_2121(iParam0);
	}
	return func_2122(iParam0);
}

float func_1691(float fParam0)
{
	fVar0 = to_float(floor(fParam0));
	return (fParam0 - fVar0);
}

void func_1692(int iParam0, float fParam1)
{
	sVar0 = "";
	iVar1 = 0;
	iVar2 = 109029619;
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			break;
		case 3:
			sVar0 = "HORSE_XP_LEADING";
			break;
		case 10:
		case 11:
			sVar0 = "HORSE_XP_HITCH";
			break;
		case 4:
			sVar0 = "HORSE_XP_EQUIP_SADDLE";
			break;
		case 5:
			sVar0 = "HORSE_XP_BREAK_HORSE";
			break;
		case 6:
		case 7:
			sVar0 = "HORSE_XP_PATTED";
			break;
		case 12:
		case 13:
		case 14:
			sVar0 = "HORSE_XP_FED";
			break;
		case 15:
			sVar0 = "HORSE_XP_TREAT";
			break;
		case 16:
		case 17:
		case 18:
			sVar0 = "HORSE_XP_GROOM";
			break;
		case 19:
			sVar0 = "HORSE_XP_OINTMENT";
			break;
		case 8:
		case 9:
			sVar0 = "HORSE_XP_CALM";
			break;
		case 20:
		case 21:
			sVar0 = "HORSE_XP_LIGHT_LOAD";
			break;
		case 22:
			sVar0 = "HORSE_XP_KILLED_OWN_HORSE";
			iVar1 = 1;
			iVar2 = 859817522;
			break;
	}
	bVar3 = false;
	if (bVar3)
	{
		sVar0 = _create_var_string(2, sVar0, floor(fParam1));
	}
	else
	{
		sVar0 = _create_var_string(2, "HORSE_XP_GENERIC_EARNED");
	}
	func_1311(sVar0, "ITEMTYPE_TEXTURES", 48560695, iVar1, iVar2, 0, 0, 0, 1);
}

void func_1693(int iParam0, float fParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	iVar0 = func_535(iParam0);
	if (iVar0 >= 4)
	{
		return;
	}
	func_2123(iParam0, floor(fParam1));
	iVar1 = func_535(iParam0);
	if (iVar1 > iVar0)
	{
		iVar2 = (iVar1 - iVar0);
		func_361(func_1381(352983236), iVar2);
		_0xa69899995997a63b(iParam0, iVar1);
		if (iVar1 >= 4)
		{
			func_361(func_1381(-2116919750), 1);
		}
		if (iVar1 == 2)
		{
			func_165(21, 1);
		}
		else if (iVar1 == 3)
		{
			func_165(22, 1);
		}
		else if (iVar1 == 4)
		{
			func_165(23, 1);
		}
		func_2124(iVar1, iParam0);
		func_2125();
	}
}

void func_1694(var uParam0, int iParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (_0x4c543d5dfcd2dafd(Global_17411.f_55.f_61.f_41[iVar0], uParam0))
		{
			Global_17411.f_55.f_61.f_41[iVar0]->f_4[iParam1] = (&Global_17411.f_55.f_61.f_41[iVar0]->f_4[iParam1] + fParam2);
			return;
		}
		iVar0++;
	}
	if (!func_1686(uParam0))
	{
		return;
	}
	Global_17411.f_55.f_61.f_41[iVar0]->f_4[iParam1] = (&Global_17411.f_55.f_61.f_41[iVar0]->f_4[iParam1] + fParam2);
}

bool func_1695(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

void func_1696(int iParam0, float fParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	fParam1 = (fParam1 * 0.01f);
	fVar1 = _get_ped_stamina(iParam0);
	fVar2 = _get_ped_max_stamina(iParam0);
	fVar0 = (fVar2 * fParam1);
	fVar3 = fVar0;
	if ((fVar1 + fVar0) > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	fVar4 = (fVar1 + fVar3);
	_charge_ped_stamina(iParam0, fVar3);
}

int func_1697(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (_0x4c543d5dfcd2dafd(Global_17411.f_55.f_61.f_41[iVar0], &uParam0))
		{
			return &(Global_17411.f_55.f_61.f_41[iVar0]->f_38[iParam4]);
		}
		iVar0++;
	}
	if (!func_1686(&uParam0))
	{
		return 0;
	}
	return 0;
}

void func_1698(int iParam0, struct<4> Param1, int iParam5, int iParam6)
{
	func_2126(iParam0, Param1, iParam5, (func_1697(Param1, iParam5) + iParam6));
}

void func_1699(int iParam0, float fParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	fParam1 = (fParam1 * 0.01f);
	iVar1 = get_entity_health(iParam0);
	iVar2 = get_entity_max_health(iParam0, false);
	iVar0 = floor((fParam1 * IntToFloat(iVar2)));
	iVar3 = iVar0;
	if ((iVar1 + iVar0) > iVar2)
	{
		iVar3 = (iVar2 - iVar1);
	}
	iVar4 = (iVar1 + iVar3);
	_set_entity_health(iParam0, iVar4, 0);
}

void func_1700(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	iParam2 = func_539(iParam2, 0, 100);
	if (func_1937(iParam1, &iVar0))
	{
		_set_attribute_core_value(iParam0, iVar0, iParam2);
	}
}

float func_1701(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 0.033f);
		case 1:
			return (fParam0 * 2f);
		case 2:
			return (fParam0 * 120f);
		case 3:
			return (fParam0 * 2880f);
		default:
			break;
	}
	return fParam0;
}

int func_1702(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0))
	{
		iParam0 = Global_1296859->f_9;
		if (!does_entity_exist(iParam0))
		{
			return 0;
		}
	}
	return func_2127(iParam0, iParam1, fParam2, bParam3);
}

int func_1703(int iParam0)
{
	if (!&Global_1048577)
	{
		return 3;
	}
	iVar0 = (*Global_263042)[iParam0]->f_1.f_21.f_2;
	iVar1 = func_2128(iVar0);
	iVar2 = func_2129(iVar0, iVar1);
	return iVar2;
}

bool func_1704(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iVar0))
	{
		return false;
	}
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28350), iVar0))
	{
		return false;
	}
	if (_0xfe53b1f8d43f19bf(iParam0, iParam1) == 2 || Global_1108365->f_34[iVar0]->f_10)
	{
		return true;
	}
	return false;
}

bool func_1705(int iParam0)
{
	if (Global_1901947->f_716.f_42 <= 0)
	{
		return true;
	}
	uVar0 = Global_1901947->f_716.f_44 * 1000;
	if (_0x9e2d5d6bc97a5f1e(iParam0, 133987706, uVar0))
	{
		return false;
	}
	if (_0x9e2d5d6bc97a5f1e(iParam0, -1553120962, uVar0))
	{
		return false;
	}
	if (_0x9e2d5d6bc97a5f1e(iParam0, -842959696, uVar0))
	{
		return false;
	}
	return true;
}

bool func_1706(int iParam0, int iParam1, int iParam2)
{
	iVar0 = (func_2130(iParam0, 0, iParam2) * iParam1);
	bVar1 = false;
	if (iVar0 == 0)
	{
	}
	if (iVar0 >= 0)
	{
		bVar1 = func_1824(iVar0);
	}
	return bVar1;
}

int func_1707(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (!func_177(iParam0, 0))
	{
		return -1;
	}
	if (func_178(iParam0) != 26423971)
	{
		return -1;
	}
	if (func_670())
	{
		bParam3 = true;
	}
	if (iParam5 == -570078785 || iParam5 == -915411861)
	{
		iVar0 = (func_1511(iParam0, iParam5, 1, 0, 1, 2084597891) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_1511(iParam0, iParam5, 1, 0, 1, 773203532) * iParam2);
			if (iVar1 <= 0)
			{
				return -1;
			}
		}
		if (!_network_is_money_balance_not_less_than(iVar0, iVar1))
		{
			return -1;
		}
	}
	else if (func_2009(iParam0, iParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = (Var2[iVar35]->f_1 * iParam2);
			if (!func_153(&(Var2[iVar35]), 0, bParam3, 0) >= iVar34)
			{
				return -1;
			}
			iVar35++;
		}
	}
	else
	{
		return -1;
	}
	if (!bParam3 && func_669(0))
	{
		if (iVar0 > 0)
		{
			func_564(2084597891, iVar0, -142743235, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_564(773203532, iVar1, -142743235, 0, 0);
		}
		else if (func_2131(iParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = (Var2[iVar35]->f_1 * iParam2);
				func_564(&(Var2[iVar35]), iVar34, -142743235, 0, 0);
				iVar35++;
			}
		}
		return -1;
	}
	Var36.f_9 = 1;
	Var36.f_11 = -1591664384;
	Var36.f_8 = iParam0;
	Var36.f_9 = iParam2;
	Var36.f_13 = iParam5;
	Var36.f_12 = -142743235;
	iVar52 = func_1882(-1406934746, &Var36, bParam4);
	if (iVar52 == -1)
	{
	}
	else
	{
		Var53.f_7 = -142743235;
		Var53.f_16 = -1;
		StringCopy(&(Var53.f_12), sParam1, 32);
		func_1883(iVar52, Var53);
	}
	return iVar52;
}

void func_1708(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_2132(iParam0);
	if (func_2133(iParam0) && !bParam2)
	{
		return;
	}
	Global_1291734->f_11.f_523[iParam0] = func_552(_create_var_string(2, sVar0, sParam1), 10000, 0, 0, 0, 1);
}

bool func_1709(bool bParam0)
{
	iVar0 = _0xf49f14462f0ae27c(player_id());
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	iVar1 = _get_rider_of_mount(iVar0, false);
	if (does_entity_exist(iVar1))
	{
		if (iVar1 == player_ped_id() && !bParam0)
		{
			return false;
		}
	}
	Global_1291734->f_11.f_50 = Global_1296859->f_20;
	func_987(48);
	func_2134();
	return true;
}

struct<4> func_1710(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = _0xf49f14462f0ae27c(player_id());
			break;
		case 2:
			iVar0 = _0xb9050a97594c8832(player_id());
			break;
	}
	if (does_entity_exist(iVar0))
	{
		if (((!decor_exist_on(iVar0, func_2135()) || !decor_exist_on(iVar0, func_2136())) || !decor_exist_on(iVar0, func_2137())) || !decor_exist_on(iVar0, func_2138()))
		{
			return func_1680();
		}
		Var1 = decor_get_int(iVar0, func_2135());
		Var1.f_1 = decor_get_int(iVar0, func_2136());
		Var1.f_2 = decor_get_int(iVar0, func_2137());
		Var1.f_3 = decor_get_int(iVar0, func_2138());
		return Var1;
	}
	return func_1680();
}

bool func_1711(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (is_ped_dead_or_dying(iParam1, true))
	{
		return false;
	}
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_dead_or_dying(iParam0, true))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (func_2139(iParam1, iParam0, 1, 1) > 40f)
	{
		return false;
	}
	if (does_entity_exist(_get_rider_of_mount(iParam0, true)))
	{
		return false;
	}
	return true;
}

bool func_1712()
{
	iVar0 = _0xf49f14462f0ae27c(player_id());
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	iVar1 = _get_rider_of_mount(iVar0, false);
	if (does_entity_exist(iVar1))
	{
		return false;
	}
	func_2140(8, 4);
	return true;
}

int func_1713()
{
	iVar0[0] = 1448771675;
	iVar0[1] = -1921080134;
	iVar0[2] = 1533677103;
	iVar0[3] = -1683269219;
	iVar0[4] = 1209486044;
	iVar0[5] = 335540214;
	iVar0[6] = 1987629749;
	iVar0[7] = 516844411;
	iVar0[8] = -947702135;
	iVar0[9] = -1477273558;
	iVar0[10] = -635441454;
	iVar12 = 0;
	while (iVar12 < iVar0)
	{
		if (func_153(&(iVar0[iVar12]), 0, 0, 0) > 0)
		{
			return &(iVar0[iVar12]);
		}
		iVar12++;
	}
	iVar13[0] = 1668084914;
	iVar13[1] = -196740052;
	iVar13[2] = -1602657245;
	iVar13[3] = -1991037110;
	iVar13[4] = -249994063;
	iVar13[5] = -398744080;
	iVar13[6] = -1066874997;
	iVar13[7] = 2064962445;
	iVar13[8] = 428582000;
	iVar13[9] = -2006599970;
	iVar13[10] = -241666815;
	iVar13[11] = -118748546;
	iVar13[12] = -2051332199;
	iVar13[13] = -2013384490;
	iVar13[14] = -746674788;
	iVar13[15] = 599861917;
	iVar13[16] = -56806045;
	iVar13[17] = 746300881;
	iVar13[18] = -435006002;
	iVar13[19] = 1433048902;
	iVar13[20] = -1781387050;
	iVar13[21] = -624139784;
	iVar13[22] = 1047281747;
	iVar13[23] = 546981776;
	iVar13[24] = 1216456215;
	iVar13[25] = -2085219828;
	iVar13[26] = -1620920647;
	iVar12 = 0;
	iVar12 = 0;
	while (iVar12 < iVar13)
	{
		iVar41 = &iVar13[iVar12];
		if (func_2141(iVar41) && func_153(iVar41, 0, 0, 0) > 0)
		{
			return iVar41;
		}
		iVar12++;
	}
	return 0;
}

int func_1714(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -802026654;
		case 1:
			return 1806153689;
		case 2:
			return -1625078531;
		case 3:
			return -2059726619;
		case 4:
			return -1569450319;
		case 5:
			return 854596618;
		case 6:
			return 2116849039;
		case 7:
			return 1248540072;
		case 8:
			return -1858513856;
		case 9:
			return -868657362;
		case 10:
			return 1603936352;
		case 11:
			return -702790226;
		case 12:
			return 459744337;
		case 13:
			return 1914602340;
		case 14:
			return -1791452194;
		case 15:
			return 1150939141;
		case 16:
			return -1558096473;
		case 17:
			return -794277189;
		case 18:
			return -1827027577;
		case 19:
			return -662178186;
		case 20:
			return -1035515486;
		case 21:
			return 238733925;
		case 22:
			return 1647012424;
		case 23:
			return 500722008;
		case 24:
			return 1710714415;
		case 25:
			return 699990316;
		case 26:
			return -1648383828;
		case 27:
			return -1379330323;
		case 28:
			return -99092070;
		case 29:
			return 1963510418;
		case 30:
			return 2047376405;
		case 31:
			return -395646254;
		case 32:
			return 1584468323;
		case 33:
			return 1969175294;
		case 34:
			return -57190831;
		case 35:
			return -308965548;
		case 36:
			return -1102272634;
		case 37:
			return 554578289;
		case 38:
			return -983605026;
		case 39:
			return -1544126829;
		case 40:
			return -476045512;
		case 41:
			return 1796037447;
		case 42:
			return 1795984405;
		case 43:
			return -1317365569;
		case 44:
			return 1729948479;
		case 45:
			return 1466150167;
		case 46:
			return 1145777975;
		case 47:
			return 85441452;
		case 48:
			return 653400939;
		case 49:
			return 121494806;
		case 50:
			return -251416414;
		case 51:
			return -1787430524;
		case 52:
			return -1572330336;
		case 53:
			return -1249752300;
		case 54:
			return -940052481;
		case 55:
			return -308200059;
		case 56:
			return -1218522879;
		case 57:
			return 923422806;
		case 58:
			return 832214437;
		case 59:
			return 397926876;
		case 60:
			return 219794592;
		case 61:
			return -1061362634;
		case 62:
			return 1728819413;
		case 63:
			return 1009802015;
		case 64:
			return 1276143905;
		case 65:
			return -1262044528;
		case 66:
			return -963027403;
		case 67:
			return 2088901891;
		case 68:
			return 836208559;
		case 69:
			return 1600479946;
		case 70:
			return -675142890;
		case 71:
			return -906131571;
		case 72:
			return -591844128;
		case 73:
			return -1946740647;
		case 74:
			return -1548204069;
		case 75:
			return -907373381;
		case 76:
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

int func_1715(int iParam0)
{
	if (!func_1011(iParam0))
	{
		return 0;
	}
	return iParam0;
}

int func_1716(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2059726619:
			return 3;
		case -1946740647:
			return 73;
		case -1858513856:
			return 8;
		case -1827027577:
			return 18;
		case -1791452194:
			return 14;
		case -1787430524:
			return 51;
		case -1648383828:
			return 26;
		case -1625078531:
			return 2;
		case -1572330336:
			return 52;
		case -1569450319:
			return 4;
		case -1558096473:
			return 16;
		case -1548204069:
			return 74;
		case -1544126829:
			return 39;
		case -1379330323:
			return 27;
		case -1317365569:
			return 43;
		case -1262044528:
			return 65;
		case -1249752300:
			return 53;
		case -1218522879:
			return 56;
		case -1102272634:
			return 36;
		case -1061362634:
			return 61;
		case -1035515486:
			return 20;
		case -983605026:
			return 38;
		case -963027403:
			return 66;
		case -940052481:
			return 54;
		case -907373381:
			return 75;
		case -906131571:
			return 71;
		case -868657362:
			return 9;
		case -802026654:
			return 0;
		case -794277189:
			return 17;
		case -702790226:
			return 11;
		case -675142890:
			return 70;
		case -662178186:
			return 19;
		case -591844128:
			return 72;
		case -476045512:
			return 40;
		case -395646254:
			return 31;
		case -308965548:
			return 35;
		case -308200059:
			return 55;
		case -251416414:
			return 50;
		case -99092070:
			return 28;
		case -57190831:
			return 34;
		case 0:
			return 76;
		case 85441452:
			return 47;
		case 121494806:
			return 49;
		case 219794592:
			return 60;
		case 238733925:
			return 21;
		case 397926876:
			return 59;
		case 459744337:
			return 12;
		case 500722008:
			return 23;
		case 554578289:
			return 37;
		case 653400939:
			return 48;
		case 699990316:
			return 25;
		case 832214437:
			return 58;
		case 836208559:
			return 68;
		case 854596618:
			return 5;
		case 923422806:
			return 57;
		case 1009802015:
			return 63;
		case 1145777975:
			return 46;
		case 1150939141:
			return 15;
		case 1248540072:
			return 7;
		case 1276143905:
			return 64;
		case 1466150167:
			return 45;
		case 1584468323:
			return 32;
		case 1600479946:
			return 69;
		case 1603936352:
			return 10;
		case 1647012424:
			return 22;
		case 1710714415:
			return 24;
		case 1728819413:
			return 62;
		case 1729948479:
			return 44;
		case 1795984405:
			return 42;
		case 1796037447:
			return 41;
		case 1806153689:
			return 1;
		case 1914602340:
			return 13;
		case 1963510418:
			return 29;
		case 1969175294:
			return 33;
		case 2047376405:
			return 30;
		case 2088901891:
			return 67;
		case 2116849039:
			return 6;
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

bool func_1717(int iParam0, bool bParam1)
{
	iVar0 = player_id();
	if (!_network_is_player_index_valid(iVar0))
	{
		return false;
	}
	iVar1 = iVar0;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return false;
	}
	if (func_1104(iVar1, bParam1) >= func_1105(bParam1))
	{
		return false;
	}
	iVar2 = iParam0;
	iVar3 = (iVar2 + func_1104(iVar1, bParam1));
	if (iVar3 > func_1105(bParam1))
	{
		iVar2 = (func_1105(bParam1) - func_1104(iVar1, bParam1));
	}
	if (iVar2 < 1)
	{
		return false;
	}
	if (!bParam1)
	{
		(*Global_1291106)[iVar1]->f_7 = ((*Global_1291106)[iVar1]->f_7 + iVar2);
	}
	else
	{
		(*Global_1291106)[iVar1]->f_8 = ((*Global_1291106)[iVar1]->f_8 + iVar2);
	}
	return true;
}

struct<5> func_1718(int iParam0)
{
	Var0 = { func_1719(iParam0, 1328661203, func_1680(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_1719(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	if (!func_177(iParam1, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

bool func_1720(int iParam0, bool bParam1)
{
	iVar0 = player_id();
	if (!_network_is_player_index_valid(iVar0))
	{
		return false;
	}
	iVar1 = iVar0;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return false;
	}
	if (func_1104(iVar1, bParam1) == 0)
	{
		return false;
	}
	iVar2 = iParam0;
	if (iVar2 > func_1104(iVar1, bParam1))
	{
		iVar2 = func_1104(iVar1, bParam1);
	}
	if (!bParam1)
	{
		(*Global_1291106)[iVar1]->f_7 = ((*Global_1291106)[iVar1]->f_7 - iVar2);
	}
	else
	{
		(*Global_1291106)[iVar1]->f_8 = ((*Global_1291106)[iVar1]->f_8 - iVar2);
	}
	if (func_1104(iVar1, bParam1) < 0)
	{
		if (!bParam1)
		{
			(*Global_1291106)[iVar1]->f_7 = 0;
		}
		else
		{
			(*Global_1291106)[iVar1]->f_8 = 0;
		}
	}
	else if (func_1104(iVar1, bParam1) > func_1105(bParam1))
	{
		if (!bParam1)
		{
			(*Global_1291106)[iVar1]->f_7 = func_1105(bParam1);
		}
		else
		{
			(*Global_1291106)[iVar1]->f_8 = func_1105(bParam1);
		}
	}
	return true;
}

int func_1721(int iParam0)
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

int func_1722(int iParam0, bool bParam1)
{
	iVar0 = floor(func_1729(iParam0, bParam1));
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

bool func_1723(int iParam0, int iParam1, int iParam2)
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

void func_1724(int iParam0)
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
	func_2142(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_1725(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 183;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 8, 2, &uParam1);
	func_2143(*uParam0);
}

bool func_1726(int iParam0, bool bParam1)
{
	if (&Global_1048576)
	{
		return true;
	}
	if (Global_1572887->f_4)
	{
		return true;
	}
	if (&Global_1048577)
	{
		return true;
	}
	if (Global_1572887->f_106.f_75 > 10)
	{
		return true;
	}
	if (!func_326(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	if (func_326(func_2144()))
	{
		if (!func_1022(&(Global_1296859->f_154[&Global_1296859]), 0, 1) && func_2145(iParam0, bParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_1727(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return false;
		case 12:
			return false;
		case 10:
			return false;
		case 11:
			return false;
		case 9:
			return false;
		default:
			break;
	}
	return true;
	return true;
}

int func_1728(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 5;
		case 12:
			return 5;
		case 10:
			return 5;
		case 11:
			return 10;
		case 9:
			return 10;
		default:
			break;
	}
	return 0;
	return 0;
}

float func_1729(int iParam0, bool bParam1)
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

char* func_1730(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
		default:
			break;
	}
	return "";
}

char* func_1731(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
		default:
			break;
	}
	return "";
}

int func_1732(var uParam0, int iParam1)
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

int func_1733(int iParam0)
{
	iVar0 = func_362(iParam0);
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

bool func_1734(int iParam0, bool bParam1)
{
	if (func_362(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_2146();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_1735(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_1029(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_1736(int iParam0, var uParam1, int iParam2)
{
	if (func_2147(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1737(bool bParam0)
{
	iVar0 = func_480(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_1028(271701509, func_1293(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_1028(271701509, func_1293(bParam0), 12999093, 0);
}

bool func_1738(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_362(iParam0);
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
			if (func_2148(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

void func_1739()
{
	Global_1952637->f_1556 = Global_1952637->f_1675;
	Global_1952637->f_1552 = Global_1952637->f_1554;
	Global_1952637->f_1552.f_1 = Global_1952637->f_1554.f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1952637->f_1556.f_1[iVar0] = { *Global_1952637->f_1675.f_1[iVar0] };
		iVar0++;
	}
}

void func_1740(int iParam0)
{
	func_1030(iParam0, 8, 6);
}

void func_1741(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if ((*iParam1 == 832230214 || *iParam1 == 30652334) || *iParam1 == 750544038)
		{
			iVar0 = 16;
			if (func_362(&(uParam0->f_1[iVar0])) != 1882579758)
			{
				return;
			}
			iVar1 = func_2149(&(uParam0->f_1[iVar0]));
			if (iVar1 != 0 && iVar1 != &Global_1952637->f_83[iParam2])
			{
				*iParam1 = iVar1;
				return;
			}
		}
		if (!func_2150(*iParam1, iParam2))
		{
			*iParam1 = &Global_1952637->f_1675.f_1[iParam2];
			return;
		}
	}
	*iParam1 = &Global_1952637->f_83[iParam2];
}

void func_1742(int iParam0)
{
	func_2151(&(Global_1952637->f_2897), iParam0);
}

void func_1743(int iParam0, int iParam1)
{
	if (iParam1 & 8 != 0)
	{
		return;
	}
	func_1606(&(Global_1952637->f_2897), iParam0, iParam1);
}

void func_1744(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1745(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	iVar0 = iParam1;
	bVar1 = func_1034(iVar0, 1);
	if (bParam3 && func_560(&(uParam0->f_1[iParam2]), 343781202))
	{
		func_2152(uParam0, &(uParam0->f_1[iParam2]));
	}
	switch (func_1600(iParam2, 1))
	{
		case -1130352927:
			func_2153(uParam0, iVar0, iParam2, iParam4);
			break;
		case 1367443060:
			func_2154(uParam0, iVar0, iParam2);
			break;
		case -338487716:
			func_2155(uParam0, iVar0, bVar1, iParam4);
			break;
		case 1108822547:
			func_2156(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1742327865:
			func_2157(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1250092473:
			func_2158(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -893163968:
			func_2159(uParam0, bVar1, iVar0, iParam4);
			break;
		case -450913544:
			func_2160(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -1197751823:
			func_2161(uParam0, bVar1, iVar0, iParam4);
			break;
		case 304805134:
			func_2162(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1145151482:
			func_2163(uParam0, bVar1, iParam4);
			break;
		case -207860920:
			func_2164(uParam0, bVar1, iVar0, iParam4);
			break;
		case -426430150:
			func_2165(uParam0, bVar1, iParam4);
			break;
		case 788010710:
			func_2166(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1958421083:
			func_2167(uParam0, bVar1, iVar0, iParam4);
			break;
		case -1944638739:
			func_2168(uParam0, bVar1, iVar0, iParam4);
			break;
	}
}

int func_1746(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (func_1141() == 24043185)
	{
		iVar0 = 1;
	}
	if (iParam2 == 289238755)
	{
		return 289238755;
	}
	if (iParam2 != 0 && func_2169(iParam0, iVar0, iParam2) != -1)
	{
		return iParam2;
	}
	if (func_2050(iParam0, func_1600(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

int func_1747(int iParam0, bool bParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1952637->f_3334.f_33.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1952637->f_3334.f_33.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1952637->f_3334.f_33;
			break;
		case 1388798186:
			iVar0 = 1;
			break;
		case 119907797:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

void func_1748()
{
	Global_1106594->f_4.f_3++;
	if (Global_1106594->f_4.f_3 == 2)
	{
		func_361(func_360(-1683633663), 1);
	}
	if (!func_2170(&(Global_1106594->f_4)))
	{
		func_2171(&(Global_1106594->f_4), 0);
	}
}

bool func_1749(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_1750(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_1751(int iParam0, int iParam1, int iParam2)
{
	if (!func_177(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_479(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_1027(iParam0, 0, 0) };
	if (func_1082(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_669(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_480(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_1752(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_177(iParam0, 0))
	{
		return 0;
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_1082(iParam0, uParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_669(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_480(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

bool func_1753(int iParam0)
{
	return func_178(iParam0) == 2085633299;
}

bool func_1754(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1189(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_1191(&Var0, func_1190(0));
	}
	if (!func_1192(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_559(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1265(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_561(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1755(int iParam0)
{
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_visible(iVar0))
	{
		return true;
	}
	return false;
}

bool func_1756(int iParam0)
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

bool func_1757(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	iVar0 = iParam1;
	iVar1 = (iVar0 / 31);
	iVar2 = func_2172((iVar0 % 31));
	return ((*Global_1056141)[iParam0]->f_11[iVar1] && iVar2) != 0;
}

int func_1758(int iParam0)
{
	return func_2173(&(Global_1915715->f_20646), iParam0);
}

bool func_1759(int iParam0, int iParam1, var uParam2)
{
	iVar0 = func_203(iParam1);
	if (iVar0 == -1)
	{
		return false;
	}
	if (iVar0 == 11)
	{
		Var1.f_2 = 1;
		Var1.f_3 = -15;
		if (!func_2174(&(Global_1915715->f_20646), iParam0, &Var1))
		{
			return false;
		}
		if (Var1 != 0)
		{
			*uParam2 = Var1;
			uParam2->f_3 = 1;
			return true;
		}
	}
	else
	{
		if (_item_database_is_shop_key_valid(func_1513(iVar0)))
		{
			if (!_item_database_get_shop_inventories_item_info_by_key(func_1513(iVar0), iParam0, &iVar6))
			{
				return false;
			}
		}
		if (iVar6 == 0)
		{
			return false;
		}
		iVar9 = 0;
		if (!func_2175(iParam1, &iVar6, uParam2, &iVar9))
		{
			return false;
		}
		if (func_2176(iParam0))
		{
			if (func_2177(iParam0, iParam1, 1) <= 0)
			{
				return false;
			}
		}
		uParam2->f_3 = 1;
		return true;
	}
	return false;
}

int func_1760(var uParam0)
{
	return 0;
}

int func_1761(int iParam0)
{
	if (is_weapon_valid(iParam0))
	{
		return iParam0;
	}
	return 0;
}

void func_1762(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6)
{
	if (func_66() == 0)
	{
		if (((func_2178(iParam0, sParam4, bParam6) == -1 && !bParam6) && func_669(0)) && !func_670())
		{
			func_605(iParam0, sParam4, iParam5, 0);
		}
	}
	else
	{
		if (!bParam1)
		{
			func_605(iParam0, sParam4, iParam5, 0);
		}
		func_1969(iParam0, bParam1, fParam2, iParam3);
	}
}

bool func_1763(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

int func_1764(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_177(iParam0, 0) && !func_1763(func_1262(iParam0), 2))
	{
		return 0;
	}
	if (func_178(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_479(iParam0, -455129387) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_480(bParam3), iParam0);
}

void func_1765(int iParam0, int iParam1)
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

void func_1766(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_1769(uParam0))
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

bool func_1767(int iParam0)
{
	switch (get_entity_model(iParam0))
	{
		case -1698498246:
			return true;
		default:
			break;
	}
	return false;
}

int func_1768(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	iVar1 = _get_ped_damage(iVar0);
	iVar2 = func_2179(iVar0);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	iVar3 = iVar1;
	iVar4 = iVar2;
	if (iVar4 < iVar3)
	{
		iVar1 = iVar4;
	}
	if (!_0x9e7738b291706746(&iVar5, iVar0, iVar1))
	{
		return 0;
	}
	if (iVar5 != 0)
	{
		if (_is_metaped_using_component(iVar0, 43391475) || _0x8de41e9902e85756(iVar0))
		{
			iVar6 = func_2180(iVar5);
			return iVar6;
		}
		return iVar5;
	}
	switch (iVar1)
	{
		case 2:
			return -776155824;
		case 1:
			return 1715058708;
		case 0:
			return -45650221;
		default:
			break;
	}
	return -45650221;
}

bool func_1769(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_1770(int iParam0)
{
	if (func_2181(iParam0, &iVar1))
	{
		iParam0 = iVar1;
	}
	if (!_item_database_fillout_satchel_data(iParam0, &iVar0))
	{
		return -1;
	}
	switch (iVar0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 4;
		case 4:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_1771()
{
	return Global_1901947->f_681.f_28;
}

int func_1772(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_2182(iParam0);
	if (iVar0 <= 0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (func_2183(&Var3))
	{
		if (Var3.f_1 != 0)
		{
			if (func_2184(Var3.f_1, &iVar1, bParam1))
			{
				iVar2 = (iVar2 + iVar1);
			}
		}
	}
	return iVar2;
}

void func_1773(bool bParam0)
{
	if (!_network_is_player_index_valid(player_id()))
	{
		return;
	}
	iVar0 = player_id();
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!bParam0)
	{
		(*Global_1291106)[iVar0]->f_7 = 0;
	}
	else
	{
		(*Global_1291106)[iVar0]->f_8 = 0;
	}
}

float func_1774(bool bParam0, float fParam1)
{
	fParam1 = func_2185(fParam1, 0f, 1f);
	fVar0 = ((1f / to_float(Global_1901947->f_681.f_28)) * func_2186(bParam0, fParam1, (1f - fParam1)));
	if (bParam0)
	{
		return ((to_float(Global_1901947->f_681.f_28) / to_float(Global_1901947->f_681.f_29)) * fVar0);
	}
	return fVar0;
}

int func_1775(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_1776(int iParam0)
{
	if (!func_311(iParam0))
	{
		return 0;
	}
	if (func_1109(iParam0))
	{
		return -1;
	}
	return Global_8123[iParam0]->f_3;
}

int func_1777(int iParam0)
{
	if (!func_311(iParam0))
	{
		return -15;
	}
	if (Global_1572887->f_13 == -1)
	{
		return Global_8123[iParam0]->f_1;
	}
	return Global_1071686->f_19674[iParam0]->f_1;
}

bool func_1778(int iParam0)
{
	if (!func_311(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 26:
		case 33:
		case 37:
		case 40:
		case 62:
		case 66:
		case 81:
		case 83:
		case 99:
		case 101:
		case 111:
		case 121:
			return true;
	}
	return false;
}

void func_1779(int iParam0)
{
	if (func_2187(iParam0) == 62)
	{
		_0x563fcb6620523917(-1145496915, -1482012664);
		_0x563fcb6620523917(-1043953850, -1482012664);
		_0x563fcb6620523917(-1783502982, -1482012664);
	}
	else
	{
		iVar0 = -1482012664;
		if (((func_2188(iParam0) == 4 || func_2188(iParam0) == 12) || func_297(func_2188(iParam0)) == 4) || (func_926(func_2188(iParam0), 8) && ((func_2188(iParam0) == 2 || func_2188(iParam0) == 0) || func_2188(iParam0) == 10)))
		{
			iVar0 = -1305340593;
		}
		_0x563fcb6620523917(iParam0, iVar0);
	}
}

void func_1780(int iParam0)
{
	if (func_2187(iParam0) == 62)
	{
		_0x6786d7afac3162b3(-1145496915);
		_0x6786d7afac3162b3(-1043953850);
		_0x6786d7afac3162b3(-1783502982);
	}
	else if (_0xe38450dbcbc70e3d(iParam0, -1305340593) || _0xe38450dbcbc70e3d(iParam0, -1482012664))
	{
		_0x6786d7afac3162b3(iParam0);
	}
}

void func_1781(int iParam0)
{
	StringCopy(&cVar0, func_2189(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1649(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_1782(int iParam0)
{
	StringCopy(&cVar0, func_2189(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1649(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

int func_1783(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 675537701;
		case 1:
			return -1915988145;
		case 2:
			return 38535626;
		case 3:
			return 1904167574;
		case 4:
			return 244711249;
		case 5:
			return -1859792564;
		case 6:
			return -1808688941;
		case 7:
			return -736296038;
		case 8:
			return -909439131;
		case 9:
			return 1917744724;
		case 10:
			return 821748379;
		case 11:
			return 196685551;
		case 12:
			return 1983548039;
		case 15:
			return -1716084250;
		case 13:
			return 985737465;
		case 16:
			return 869827975;
		case 14:
			return -735550853;
		default:
			break;
	}
	return 1776960747;
}

int func_1784(int iParam0)
{
	StringCopy(&cVar0, func_2190(iParam0), 64);
	sVar8 = func_1649(cVar0);
	return get_hash_key(sVar8);
}

int func_1785(int iParam0)
{
	if (!func_401(iParam0))
	{
		return 0;
	}
	if (Global_39.f_190[iParam0]->f_5 & 2 != 0)
	{
		return 5;
	}
	if (&Global_39.f_190[iParam0] > 0 && get_wanted_level_threshold(5) > 0)
	{
		return func_2191(&(Global_39.f_190[iParam0]));
	}
	return 0;
}

int func_1786(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_1787(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1775(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_1788(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_1789(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_1790(int iParam0, int iParam1)
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

void func_1791(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_2192(iParam0, iParam1, 1))
	{
		iVar0 = func_1788(iParam1);
		iVar1 = func_1787(iParam0);
		iVar2 = (func_1787(iParam0) - func_1787(iParam1));
		iVar3 = (func_1788(iParam0) - func_1788(iParam1));
		iVar4 = (func_1789(iParam0) - func_1789(iParam1));
		iVar5 = (func_935(iParam0) - func_935(iParam1));
		iVar6 = (func_936(iParam0) - func_936(iParam1));
		iVar7 = (func_1786(iParam0) - func_1786(iParam1));
	}
	else
	{
		iVar0 = func_1788(iParam0);
		iVar1 = func_1787(iParam1);
		iVar2 = (func_1787(iParam1) - func_1787(iParam0));
		iVar3 = (func_1788(iParam1) - func_1788(iParam0));
		iVar4 = (func_1789(iParam1) - func_1789(iParam0));
		iVar5 = (func_935(iParam1) - func_935(iParam0));
		iVar6 = (func_936(iParam1) - func_936(iParam0));
		iVar7 = (func_1786(iParam1) - func_1786(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_1790(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_2193(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

void func_1792(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1793(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_1794(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

int func_1795(int iParam0)
{
	if (!func_401(iParam0))
	{
		return 0;
	}
	if (func_411(iParam0, 2))
	{
		return 5;
	}
	if (func_303(iParam0) > 0 && get_wanted_level_threshold(5) > 0)
	{
		return func_2194(func_303(iParam0));
	}
	return 0;
}

void func_1796(int iParam0)
{
	if (does_entity_exist(player_ped_id()))
	{
		if (iParam0 == 1)
		{
			decor_set_bool(player_ped_id(), "Inspecting_Item", true);
		}
		else if (decor_exist_on(player_ped_id(), "Inspecting_Item"))
		{
			decor_remove(player_ped_id(), "Inspecting_Item");
		}
	}
}

void func_1797(int iParam0)
{
	_databinding_clear_binding_array(Global_1940311->f_242.f_5);
	iVar0 = iParam0;
	iVar1 = 29;
	while (iVar1 >= 0)
	{
		if (!_databinding_read_data_bool(Global_1940311->f_242.f_14[iVar1]->f_37))
		{
		}
		else if (func_2195() != 0)
		{
			if (_databinding_read_data_int(Global_1940311->f_242.f_14[iVar1]->f_24) != iVar0)
			{
			}
			else
			{
				_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1940311->f_242.f_5, iVar2, "pm_invite_item", &(Global_1940311->f_242.f_14[iVar1]));
				iVar2++;
			}
			iVar1 = (iVar1 + -1);
			Global_1940311->f_242.f_1189 = 0;
			Global_1940311->f_242.f_1187 = iVar2;
		}
	}
}

bool func_1798()
{
	return func_2196() != -1;
}

bool func_1799(int iParam0)
{
	return iParam0 != 0;
}

bool func_1800()
{
	return _0x603ac35fd4602c76(Global_1139381->f_8);
}

int func_1801(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam2 == 2)
	{
		bVar0 = func_2197() == true;
	}
	else if (iParam2 == 1)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam3 != -1)
	{
		bVar1 = true;
	}
	if (!func_1805(iParam0))
	{
		func_2198(uParam1);
		return 0;
	}
	*uParam1 = &Global_1139381->f_11.f_1562[func_2199(iParam0, 1)];
	uParam1->f_2 = (Global_1139381->f_11.f_1562[func_2199(iParam0, 1)])->f_2;
	uParam1->f_1 = (Global_1139381->f_11.f_1562[func_2199(iParam0, 1)])->f_1;
	uParam1->f_8 = (Global_1139381->f_11.f_1562[func_2199(iParam0, 1)])->f_3;
	uParam1->f_16 = (Global_1139381->f_11.f_1562[func_2199(iParam0, 1)])->f_4;
	uParam1->f_32 = (Global_1139381->f_11.f_1562[func_2199(iParam0, 1)])->f_7;
	uParam1->f_33 = (Global_1139381->f_11.f_1562[func_2199(iParam0, 1)])->f_8;
	if (!func_177(uParam1->f_2, 0))
	{
		func_2198(uParam1);
		return 0;
	}
	bVar2 = true;
	if (!func_1805(*uParam1))
	{
		func_2198(uParam1);
		return 0;
	}
	if (!bVar0)
	{
		if (func_2200())
		{
			uParam1->f_19 = func_2201(*uParam1);
			uParam1->f_20 = 1;
			uParam1->f_21 = 1;
			uParam1->f_9 = (Global_1139381->f_11.f_1562[func_2199(iParam0, 1)])->f_5;
			uParam1->f_10 = (Global_1139381->f_11.f_1562[func_2199(iParam0, 1)])->f_6;
			if (func_2202(uParam1->f_19))
			{
				uParam1->f_13 = Global_1139381->f_4796.f_34[uParam1->f_19]->f_1;
			}
			else
			{
				uParam1->f_13 = 0;
			}
		}
		else
		{
			uParam1->f_19 = func_1170(*uParam1);
			iVar3 = func_1807(uParam1->f_19);
			uParam1->f_3 = { func_1028(uParam1->f_2, func_1293(bVar2), iVar3, bVar2) };
			uParam1->f_21 = func_2203(uParam1);
			uParam1->f_13 = func_2204(uParam1);
			uParam1->f_15 = func_2205(uParam1);
			uParam1->f_20 = func_2206(uParam1);
			uParam1->f_22 = func_2207(uParam1);
			uParam1->f_14 = func_2208(uParam1);
			uParam1->f_23 = func_2209(uParam1);
			uParam1->f_24 = func_2210(uParam1);
			uParam1->f_25 = func_2211(uParam1);
			uParam1->f_26 = func_2212(uParam1);
			uParam1->f_27 = func_2213(uParam1);
			uParam1->f_29 = func_2214(uParam1);
			iVar4 = -915411861;
			{
		}