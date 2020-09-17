void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	sLocal_28 = "props_misc@campfires@5_logs";
	sLocal_29 = "Script_PropCampfire";
	uLocal_31 = uLocal_31;
	func_1("START THREAD");
	iVar0 = get_game_timer();
	func_2();
	func_3();
	func_1("NETWORK_CACHE_MATCHMAKING_GLOBAL_DATA - before");
	if (func_4(33554432))
	{
		func_5(33554432);
		func_6();
	}
	func_1("NETWORK_CACHE_MATCHMAKING_GLOBAL_DATA - after");
	func_1("Main loop start");
	if (!func_7(0, 0))
	{
		func_8();
		func_9();
	}
	while (!func_7(0, 0))
	{
		func_10();
		switch (func_11(player_id()))
		{
			case 0:
				if (func_12() > 0)
				{
					if (func_13() && func_14())
					{
						func_15();
					}
					else if (Global_1572887->f_106.f_9 == -1 && Global_1572887->f_106.f_13 != 3)
					{
						func_16();
					}
					else if (Global_1572887->f_106.f_9 == -1 && Global_1572887->f_106.f_13 == 3)
					{
						func_15();
					}
					else if (func_17())
					{
						func_16();
					}
					else if (!func_18(Global_1572887->f_106.f_11))
					{
						func_15();
					}
					else
					{
						switch (func_19(Global_1572887->f_106.f_11))
						{
							case -1450443819:
							case -1084413800:
							case -994383356:
							case -647435344:
							case -233421195:
							case 322803854:
							case 397994890:
							case 765518144:
							case 840529594:
							case 943006457:
							case 1852077510:
							case 2018479297:
								func_16();
								break;
							default:
								func_15();
								break;
						}
					}
					func_20(1);
					if (!func_21())
					{
						func_22(1);
					}
					else
					{
						func_22(2);
					}
				}
				break;
			case 1:
				if (func_23() != -1050153785)
				{
				}
				else
				{
					func_24();
				}
				func_22(2);
				break;
			case 2:
				if (func_25())
				{
					func_22(3);
				}
				break;
			case 3:
				if (func_21())
				{
					func_22(7);
				}
				else if (func_23() == 1495295997 && !func_21())
				{
					func_22(6);
				}
				else if (func_23() == -1330461529 && !func_21())
				{
					func_22(6);
				}
				else if (!func_26())
				{
					func_22(6);
				}
				else
				{
					func_22(4);
				}
				break;
			case 4:
				switch (func_27(uLocal_32))
				{
					case 0:
						break;
					case 1:
						break;
					case 2:
						break;
					case 4:
						func_28(32);
						break;
					case 3:
						func_22(5);
						break;
					case 5:
						func_22(5);
						break;
				}
				break;
			case 5:
				if (func_13())
				{
					if (func_29())
					{
						func_22(6);
					}
				}
				else
				{
					func_22(6);
				}
				break;
			case 6:
				func_30();
				func_22(7);
				break;
			case 7:
				func_31();
				func_32();
				func_33();
				func_34(1);
				func_22(8);
				break;
			case 8:
				func_35(&uLocal_30);
				func_36();
				func_37();
				break;
			case 9:
				func_38();
				func_39();
				if (network_can_session_end() && network_is_session_started())
				{
					force_cleanup(523);
					_network_session_leave();
				}
				break;
			default:
				break;
		}
		if (network_is_host_of_this_script())
		{
			switch (func_12())
			{
				case 0:
					func_40(8);
					break;
				case 8:
					func_41();
					func_42("MP_GAME_STATE_MAIN_UPDATE", 8);
					break;
				case 9:
					break;
			}
		}
		wait(0);
	}
	func_38();
	func_39();
	func_43();
	while (func_44())
	{
		wait(0);
	}
	while (!_0x380ffa15b72408fb(1440))
	{
		wait(0);
	}
	func_45();
}

void func_1(char* sParam0)
{
	iVar0 = _get_system_time();
	iVar1 = get_frame_count();
	Global_1572887->f_2 = get_frame_count();
	Global_1572887->f_3 = _get_system_time();
}

void func_2()
{
	request_script("net_train_manager");
	request_script("net_fme_manager");
	request_script("net_gangfeud_manager");
	request_script("net_ugc_global_loader");
	request_script("generic_show_mp_manager");
	request_script("net_camp_manager");
	request_script("net_camp_dog_manager");
	request_script("net_player_camp_manager");
	request_script("net_ace_thread_manager");
	request_script("net_fetch_manager");
	request_script("net_crew_manager");
	request_script("net_beat_manager");
	request_script("net_scan_manager");
}

void func_3()
{
	func_1("NET_MAIN_ONLINE__PROCESS_PRE_GAME - start");
	func_46();
	func_47();
	func_48();
	network_set_this_script_is_network_script(32, false, -1);
	func_49();
	if (func_50())
	{
	}
	func_1("PROCESS_PRE_GAME_BROADCAST_ARRAY_REGISTRATION - before");
	func_51();
	func_1("PROCESS_PRE_GAME_BROADCAST_ARRAY_REGISTRATION - after");
	func_52(0);
	func_1("WAIT_FOR_FIRST_NETWORK_BROADCAST");
	set_this_script_can_be_paused(false);
	_0xb711eb4bc8d06013();
	if (!func_21())
	{
		func_53();
	}
	func_22(0);
	func_54();
	Global_1051252->f_13 = 0;
	func_55();
	Global_1051215->f_36 = 0;
	func_1("NET_MAIN_ONLINE__PROCESS_PRE_GAME - end");
}

bool func_4(int iParam0)
{
	return (Global_1572887->f_106.f_15 && iParam0) != 0;
}

void func_5(int iParam0)
{
	func_56(&(Global_1572887->f_106.f_15), iParam0);
}

void func_6()
{
	if (func_57() == -1)
	{
		return;
	}
	iVar0 = &Global_1296859;
	if (func_58(Global_1572887->f_7, 1))
	{
		func_59(&((*Global_1056141)[iVar0]->f_187.f_10), 4);
	}
	else
	{
		func_56(&((*Global_1056141)[iVar0]->f_187.f_10), 4);
	}
	(*Global_1056141)[iVar0]->f_187 = Global_1572887->f_106;
	(*Global_1056141)[iVar0]->f_187.f_1 = Global_1572887->f_106.f_9;
	(*Global_1056141)[iVar0]->f_187.f_2 = Global_1572887->f_106.f_10;
	(*Global_1056141)[iVar0]->f_187.f_3 = { Global_1572887->f_106.f_11 };
	(*Global_1056141)[iVar0]->f_187.f_8 = Global_1572887->f_106.f_13;
	(*Global_1056141)[iVar0]->f_187.f_5 = { Global_1572887->f_360 };
	(*Global_1056141)[iVar0]->f_187.f_9 = Global_1572887->f_106.f_74;
	if (func_4(1024))
	{
		func_59(&((*Global_1056141)[iVar0]->f_187.f_10), 2);
	}
	else
	{
		func_56(&((*Global_1056141)[iVar0]->f_187.f_10), 2);
	}
}

bool func_7(bool bParam0, bool bParam1)
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

void func_8()
{
	func_60();
	func_61(-1, 0, 1);
	func_62();
	if ((func_63(1464020707) || func_63(1098974047)) || func_63(868706284))
	{
		Global_1102219->f_3979.f_5 = 1;
	}
}

void func_9()
{
	Global_1071686->f_4 = 1;
	Global_1051252->f_42 = (get_game_timer() - Global_1051252->f_40);
}

void func_10()
{
	func_64();
	if (network_is_player_active(player_id()))
	{
		if (Global_1056141[network_player_id_to_int()] < 7)
		{
			set_scenario_ped_density_multiplier_this_frame(0f);
		}
	}
	func_60();
	func_65();
}

int func_11(int iParam0)
{
	if (iParam0 >= 0)
	{
		return Global_1056141[iParam0];
	}
	return -1;
}

int func_12()
{
	return &Global_1071685;
}

bool func_13()
{
	return Global_1572887->f_266 > 0;
}

bool func_14()
{
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0 = { func_66() };
	iVar11 = func_67();
	if (network_is_player_active(iVar11))
	{
		iVar12 = iVar11;
		Var0.f_10 = func_68(iVar12);
		Var0 = func_69(iVar12);
		Var0.f_1 = func_70(iVar12);
		Var0.f_2 = func_71(iVar12);
		Var0.f_3 = { func_72(iVar12) };
	}
	if (Var0.f_3 == 6)
	{
		return false;
	}
	if (!func_58(Var0.f_10, 4))
	{
		return false;
	}
	switch (Var0)
	{
		case 2:
			if (func_73(iVar11, 4096))
			{
				return false;
			}
			break;
		case 0:
			if (Var0.f_1 >= 34 && Var0.f_1 <= 42)
			{
				return false;
			}
			break;
	}
	return true;
}

void func_15()
{
	Global_1051252->f_15 = 1;
}

void func_16()
{
	Global_1051252->f_15 = 0;
}

bool func_17()
{
	if (func_74() != 0)
	{
		return false;
	}
	if (Global_1572887->f_106.f_9 >= 5 && Global_1572887->f_106.f_9 <= 8)
	{
		return false;
	}
	return true;
}

bool func_18(struct<2> Param0)
{
	if (!func_75(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_76(Param0))
	{
		return false;
	}
	return true;
}

int func_19(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_77(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

void func_20(bool bParam0)
{
	if (func_78())
	{
		if ((!Global_1051252->f_15 || ((Global_1048577 || Global_1048581) // PointerArith && !&Global_1049271)) && func_26())
		{
			func_79();
			func_80(bParam0);
			func_81(16);
		}
		else if (&Global_1049271)
		{
			if (func_82(15))
			{
				func_81(15);
				func_83(16);
			}
		}
	}
	else
	{
		func_85((func_84() && func_82(16)));
		if (func_82(16))
		{
			func_81(16);
		}
	}
}

bool func_21()
{
	return !Global_1572887->f_9;
}

void func_22(int iParam0)
{
	iVar0 = network_player_id_to_int();
	if (iVar0 == 255 || iVar0 >= 32)
	{
	}
	else
	{
		(*Global_1056141)[iVar0] = iParam0;
		(*Global_1056141)[iVar0]->f_1++;
		func_1(func_86(Global_1056141[iVar0]));
	}
}

int func_23()
{
	return Global_1572887->f_405;
}

void func_24()
{
	if (!Global_1572887->f_6)
	{
		Global_1572887->f_6 = 1;
		_0xe9f24081d84931b8();
	}
}

bool func_25()
{
	bVar0 = false;
	if (func_87(1))
	{
		if (func_88("net_train_manager", 3, 1024))
		{
			func_59(&(Global_1051252->f_13), 1);
		}
		bVar0 = true;
	}
	if (func_87(2))
	{
		if (func_88("net_fme_manager", 4, 1024))
		{
			func_59(&(Global_1051252->f_13), 2);
		}
		bVar0 = true;
	}
	if (func_87(32))
	{
		if (func_88("net_gangfeud_manager", 8, 1024))
		{
			func_59(&(Global_1051252->f_13), 32);
		}
		bVar0 = true;
	}
	if (func_87(4))
	{
		if (func_88("net_ugc_global_loader", 5, 3088))
		{
			func_59(&(Global_1051252->f_13), 4);
		}
		bVar0 = true;
	}
	if (func_87(2048))
	{
		if (func_88("generic_show_mp_manager", 15, 1024))
		{
			func_59(&(Global_1051252->f_13), 2048);
		}
		bVar0 = true;
	}
	if (func_87(64))
	{
		if (func_88("net_camp_manager", 9, 1024))
		{
			func_59(&(Global_1051252->f_13), 64);
		}
		bVar0 = true;
	}
	if (func_87(128))
	{
		if (func_88("net_camp_dog_manager", 10, 1024))
		{
			func_59(&(Global_1051252->f_13), 128);
		}
		bVar0 = true;
	}
	if (func_87(32768))
	{
		if (func_88("net_player_camp_manager", 11, 1024))
		{
			func_59(&(Global_1051252->f_13), 32768);
		}
		bVar0 = true;
	}
	if (func_87(256))
	{
		if (func_88("net_ace_thread_manager", 12, 1024))
		{
			func_59(&(Global_1051252->f_13), 256);
		}
		bVar0 = true;
	}
	if (func_87(512))
	{
		if (func_88("net_fetch_manager", 13, 2050))
		{
			func_59(&(Global_1051252->f_13), 512);
		}
		bVar0 = true;
	}
	if (func_87(1024))
	{
		if (func_88("net_crew_manager", 14, 1024))
		{
			func_59(&(Global_1051252->f_13), 1024);
		}
		bVar0 = true;
	}
	if (func_87(4096))
	{
		if (func_88("net_beat_manager", 16, 3500))
		{
			func_59(&(Global_1051252->f_13), 4096);
		}
		bVar0 = true;
	}
	if (func_87(8192))
	{
		if (func_88("net_scan_manager", 17, 512))
		{
			func_59(&(Global_1051252->f_13), 8192);
		}
		bVar0 = true;
	}
	if (func_87(16384))
	{
		if (func_88("net_moonshine_manager", 18, 1024))
		{
			func_59(&(Global_1051252->f_13), 16384);
		}
		bVar0 = true;
	}
	if (func_87(65536))
	{
		if (func_88("flow_controller", 19, 1024))
		{
			func_59(&(Global_1051252->f_13), 65536);
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		return false;
	}
	return true;
}

bool func_26()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

int func_27(var uParam0)
{
	iVar0 = get_unique_int_for_player(player_id());
	switch (Global_1132288->f_2018)
	{
		case 1:
			if (!_unlock_is_unlocked(-75008140))
			{
			}
			else
			{
				vVar1 = { func_89() };
				if (vVar1.z != 0)
				{
					if (func_90(64))
					{
						vVar1.f_2 = -2;
					}
					if (func_91(Global_1296859->f_15))
					{
						func_92(vVar1);
					}
					else
					{
						func_92(vVar1);
					}
					func_93(2);
				}
				else
				{
					func_93(4);
				}
				Jump @234; //curOff = 141
				if (((*Global_1134390)[network_player_id_to_int()]->f_33.f_3 != -1 && Global_1131196->f_865[iVar0]->f_4 == (*Global_1134390)[network_player_id_to_int()]->f_33.f_3) && &Global_1131196->f_865[iVar0] == 6)
				{
					func_93(3);
					return 3;
				}
				Jump @234; //curOff = 223
				func_93(3);
			}
			if (Global_1132288->f_2041 == 0)
			{
				Global_1132288->f_2041 = _get_system_time();
			}
			else if ((_get_system_time() - Global_1132288->f_2041) >= Global_1901947->f_584.f_2)
			{
				return 5;
			}
			return func_94();
			default:
				break;
	}
}

void func_28(int iParam0)
{
	func_95(&(Global_1137047->f_8), iParam0);
}

bool func_29()
{
	return Global_1572887->f_266 > 19;
}

void func_30()
{
	fVar0 = (IntToFloat(get_random_int_in_range(0, 359)) * 1f);
	func_96(0);
	Global_1102219->f_3594 = 1;
	if (((func_97(Global_17411.f_55.f_1) || func_98(Global_17411.f_55.f_1) == -1) || func_98(Global_17411.f_55.f_1) == 8) || func_99(Global_17411.f_55) == 8)
	{
		if (!func_100(&(Global_17411.f_55.f_1), &fVar0))
		{
			Global_17411.f_55.f_1 = { get_entity_coords(player_ped_id(), false, false) };
			fVar0 = (IntToFloat(get_random_int_in_range(0, 359)) * 1f);
		}
		Global_17411.f_55 = func_101(Global_17411.f_55.f_1, 1);
	}
	if (func_23() == -1330461529)
	{
		func_102(1);
		func_103(1);
		func_104(122, 0);
	}
	else if (func_23() == 1495295997)
	{
		func_102(1);
		func_103(1);
	}
	else if (func_26())
	{
		if (func_63(-159568751))
		{
			func_105(1);
		}
		else
		{
			func_106(1, 1);
		}
		if (_0xfc4165c9165c166f() || func_13())
		{
			func_107(64);
			func_107(256);
		}
		else if (Global_1572887->f_405.f_6 != -1)
		{
			func_104(Global_1572887->f_405.f_6, 0);
			func_108();
		}
		else if (Global_1572887->f_405.f_7 != -1)
		{
			func_104(Global_1102219->f_25, 0);
			func_108();
		}
		else if (Global_1572887->f_405.f_8 != -1)
		{
			func_104(Global_1102219->f_25, 0);
			func_108();
		}
		else if ((func_63(1464020707) || func_63(1098974047)) || func_63(868706284))
		{
			func_109(&(Global_1102219->f_3979.f_6), &(Global_1102219->f_3979.f_36), 1, 1, 1);
			if (Global_1102219->f_3979.f_45)
			{
				func_110();
			}
			if (Global_1102219->f_3979.f_46)
			{
				func_111(1, 0);
			}
			Global_1102219->f_3979.f_5 = 0;
			Global_1102219->f_3979 = 0;
		}
		else if (func_63(-1879562593))
		{
			func_112(1);
			func_113();
			func_106(0, -1);
			func_105(0);
		}
		else if (func_63(1890312850))
		{
			func_114(1);
			func_113();
			func_106(0, -1);
			func_105(0);
		}
		else if (func_63(2134863183))
		{
			func_113();
			func_106(0, -1);
			func_105(0);
		}
		else if (func_63(1735278055))
		{
			func_115();
			func_106(0, -1);
			func_105(0);
		}
		else if (func_63(-11301188))
		{
			func_104(Global_1102219->f_25, 0);
			func_108();
		}
		else if (func_63(-1312679892))
		{
			func_104(Global_17411.f_55, 0);
			func_108();
		}
		else if (func_63(-61119924))
		{
			func_116(Global_17411.f_55.f_1, fVar0, -1f, 75f, 1, 1, 1);
			func_108();
		}
		else if (func_63(-110687166) && func_117())
		{
			func_118();
		}
		else if (func_63(1737952409) && func_117())
		{
			func_118();
		}
		else if (func_63(2137301164) && func_117())
		{
			func_118();
		}
		else if (func_63(-1808811965))
		{
			if (vdist(func_119(1), 0f, 0f, 0f) < 2f)
			{
				func_116(Global_17411.f_55.f_1, fVar0, -1f, 75f, 1, 1, 1);
			}
			else
			{
				func_120(&Var1);
				func_121(&Var31);
				Var1.f_17.f_9 = -432403087;
				Var1.f_17.f_6 = { func_119(1) };
				Var1.f_17 = { 30f, 30f, 50f };
				Var1.f_16 = 1;
				Var1.f_6 = { Var1.f_17 };
				Var1.f_6 = { 1.5f, 1.5f, 5f };
				Var1.f_1 = { Var1.f_17.f_6 };
				Var1.f_5 = 2;
				Var31.f_5 = 1;
				if (!func_122(Var1.f_17.f_6, &(Var31.f_6), &Var31))
				{
					Var31.f_6 = { (Global_1071686->f_23887.f_366[get_random_int_in_range(0, 15)])->f_2 };
					Var31 = (IntToFloat(get_random_int_in_range(0, 359)) * 1f);
				}
				func_109(&Var1, &Var31, 1, 1, 1);
				func_110();
			}
		}
		else if (func_63(-1854341522))
		{
			func_120(&Var1);
			func_121(&Var31);
			Var1.f_17.f_9 = -432403087;
			Var1.f_17.f_6 = { func_123(Global_17411.f_55.f_1, -471827042) };
			Var1.f_17 = { 30f, 30f, 30f };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 1.5f, 1.5f, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!func_122(Var1.f_17.f_6, &(Var31.f_6), &Var31))
			{
				Var31.f_6 = { (Global_1071686->f_23887.f_366[get_random_int_in_range(0, 15)])->f_2 };
				Var31 = (IntToFloat(get_random_int_in_range(0, 359)) * 1f);
			}
			func_109(&Var1, &Var31, 1, 1, 1);
			func_110();
		}
		else if (func_63(313296873))
		{
			func_120(&Var1);
			func_121(&Var31);
			Var1.f_17.f_9 = -432403087;
			if (func_124(3, &(Var1.f_17.f_6)))
			{
			}
			else
			{
				Var1.f_17.f_6 = { -1723.073f, -430.4347f, 151.0119f };
			}
			Var1.f_17 = { 50f, 50f, 30f };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 20f, 20f, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!func_122(Var1.f_17.f_6, &(Var31.f_6), &Var31))
			{
				Var31.f_6 = { (Global_1071686->f_23887.f_366[get_random_int_in_range(0, 15)])->f_2 };
				Var31 = (IntToFloat(get_random_int_in_range(0, 359)) * 1f);
			}
			func_109(&Var1, &Var31, 1, 1, 1);
			func_110();
		}
		else if (func_63(541270806))
		{
			func_120(&Var1);
			func_121(&Var31);
			Var1.f_17.f_9 = -432403087;
			if (func_124(4, &(Var1.f_17.f_6)))
			{
			}
			else
			{
				Var1.f_17.f_6 = { -1723.073f, -430.4347f, 151.0119f };
			}
			Var1.f_17 = { 50f, 50f, 30f };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 20f, 20f, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!func_122(Var1.f_17.f_6, &(Var31.f_6), &Var31))
			{
				Var31.f_6 = { (Global_1071686->f_23887.f_366[get_random_int_in_range(0, 15)])->f_2 };
				Var31 = (IntToFloat(get_random_int_in_range(0, 359)) * 1f);
			}
			func_109(&Var1, &Var31, 1, 1, 1);
			func_110();
		}
		else if (func_63(922800273))
		{
			func_120(&Var1);
			func_121(&Var31);
			Var1.f_17.f_9 = -432403087;
			if (func_124(2, &(Var1.f_17.f_6)))
			{
			}
			else
			{
				Var1.f_17.f_6 = { -190.3148f, 639.5237f, 112.2634f };
			}
			Var1.f_17 = { 50f, 50f, 30f };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 20f, 20f, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!func_122(Var1.f_17.f_6, &(Var31.f_6), &Var31))
			{
				Var31.f_6 = { (Global_1071686->f_23887.f_366[get_random_int_in_range(0, 15)])->f_2 };
				Var31 = (IntToFloat(get_random_int_in_range(0, 359)) * 1f);
			}
			func_109(&Var1, &Var31, 1, 1, 1);
			func_110();
		}
		else if (func_63(1298496858))
		{
			func_120(&Var1);
			if (func_124(5, &(Var1.f_17.f_6)))
			{
				func_121(&Var31);
				Var1.f_17.f_9 = -432403087;
				Var1.f_17 = { 50f, 50f, 30f };
				Var1.f_16 = 1;
				Var1.f_6 = { Var1.f_17 };
				Var1.f_6 = { 1.5f, 1.5f, 5f };
				Var1.f_1 = { Var1.f_17.f_6 };
				Var1.f_5 = 2;
				Var31.f_5 = 1;
				if (!func_122(Var1.f_17.f_6, &(Var31.f_6), &Var31))
				{
					Var31.f_6 = { (Global_1071686->f_23887.f_366[get_random_int_in_range(0, 15)])->f_2 };
					Var31 = (IntToFloat(get_random_int_in_range(0, 359)) * 1f);
				}
				func_109(&Var1, &Var31, 1, 1, 1);
				func_110();
			}
			else
			{
				func_120(&Var1);
				func_116(Global_17411.f_55.f_1, fVar0, -1f, 75f, 1, 1, 1);
				func_108();
				func_125(904, 1);
			}
		}
		else if (func_63(1699163417))
		{
			func_120(&Var1);
			func_121(&Var31);
			Var1.f_17.f_9 = -432403087;
			if (func_124(6, &(Var1.f_17.f_6)))
			{
			}
			else
			{
				Var1.f_17.f_6 = { -190.3148f, 639.5237f, 112.2634f };
			}
			Var1.f_17 = { 50f, 50f, 30f };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 1.5f, 1.5f, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!func_122(Var1.f_17.f_6, &(Var31.f_6), &Var31))
			{
				Var31.f_6 = { (Global_1071686->f_23887.f_366[get_random_int_in_range(0, 15)])->f_2 };
				Var31 = (IntToFloat(get_random_int_in_range(0, 359)) * 1f);
			}
			func_109(&Var1, &Var31, 1, 1, 1);
			func_110();
		}
		else if (func_63(864110990))
		{
			func_120(&Var1);
			func_121(&Var31);
			Var1.f_17.f_9 = -432403087;
			Var1.f_17.f_6 = { 1235.993f, -1279.31f, 74.9174f };
			Var1.f_17 = { 30f, 30f, 30f };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 1.5f, 1.5f, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!func_122(Var1.f_17.f_6, &(Var31.f_6), &Var31))
			{
				Var31.f_6 = { (Global_1071686->f_23887.f_366[get_random_int_in_range(0, 15)])->f_2 };
				Var31 = (IntToFloat(get_random_int_in_range(0, 359)) * 1f);
			}
			func_109(&Var1, &Var31, 1, 1, 1);
			func_110();
		}
		else if (func_63(-2127829790))
		{
			func_120(&Var1);
			func_121(&Var31);
			Var1.f_17.f_9 = -432403087;
			Var1.f_17.f_6 = { 1235.993f, -1279.31f, 74.9174f };
			Var1.f_17 = { 30f, 30f, 30f };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 1.5f, 1.5f, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!func_122(Var1.f_17.f_6, &(Var31.f_6), &Var31))
			{
				Var31.f_6 = { (Global_1071686->f_23887.f_366[get_random_int_in_range(0, 15)])->f_2 };
				Var31 = (IntToFloat(get_random_int_in_range(0, 359)) * 1f);
			}
			func_109(&Var1, &Var31, 1, 1, 1);
			func_110();
		}
		else if (func_63(-575777117))
		{
			func_102(1);
			func_126(1);
			func_127(-561.4f, -3782.6f, 237.6f, 166.8f, 1);
			Global_1071686->f_28777 |= 1;
		}
		else
		{
			func_116(Global_17411.f_55.f_1, fVar0, -1f, 75f, 1, 1, 1);
		}
		(*Global_1056141)[network_player_id_to_int()]->f_463 = 1;
	}
	else if (!func_128())
	{
		func_102(1);
		func_126(1);
		func_116(func_129(33, 1), 0f, -1082130432, -1082130432, 1, 1, 1);
	}
	else if (!func_130())
	{
		func_102(1);
		func_126(1);
		func_113();
	}
	else
	{
		func_102(1);
		func_126(1);
		func_116(func_129(func_131(Global_1071686->f_28341.f_2), 1), 0f, -1082130432, -1082130432, 1, 1, 1);
	}
	(*Global_1056141)[network_player_id_to_int()]->f_464 = _0x595f028698072dd9(-1);
}

void func_31()
{
	func_132();
	func_133();
	_0x0a428058079ee65c(1);
	if (func_21())
	{
		return;
	}
	if (func_134())
	{
		return;
	}
	_0xc505036a35afd01b(false);
	func_135(-1);
	func_136();
	_uitutorial_set_rpg_icon_visibility(3, 0);
	_uitutorial_set_rpg_icon_visibility(2, 0);
	func_137(3);
	func_138();
	func_139();
	func_140();
	func_141();
	_0x11b0a0b282fa9b10(1);
	_0x6f700a4bf7c3331b(1);
	_0xf9e951a1e5517c06();
	_0x218f7710a139d012();
	func_142();
	func_143();
	Global_1071686->f_21689.f_262 = 1;
	Global_1572887->f_106.f_101 = 0;
	Global_1139381->f_5560 = 1;
	func_144(0);
	_0x9c25e8ec4c535fbd(func_145(player_id(), 0, 1));
	func_146(1, 6);
}

void func_32()
{
	if (func_134())
	{
		return;
	}
	if (func_21())
	{
		return;
	}
	if (func_57() != 0)
	{
		return;
	}
	func_147();
	func_148();
}

void func_33()
{
	if (!Global_1572887->f_9)
	{
		return;
	}
	_0x2cd41ac000e6f611();
	Global_1572887->f_9 = 0;
}

void func_34(int iParam0)
{
	_0x704f92b3af20d857(iParam0);
}

void func_35(var uParam0)
{
	if (*uParam0)
	{
		return;
	}
	if (func_149(255) != 1)
	{
		return;
	}
	if (func_21())
	{
		return;
	}
	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_4 = 0;
	func_151(Var0, func_150(3, 8), 0, 0);
	*uParam0 = 1;
}

void func_36()
{
	func_152();
	func_153();
	func_154();
	func_155();
	func_156();
	func_157();
	func_158();
	func_159();
	func_160();
	func_161();
	func_162();
	func_163();
	func_164();
}

void func_37()
{
	if (func_57() != 0)
	{
		return;
	}
	switch (Global_1051215->f_36)
	{
		case 0:
			break;
		case 1:
			func_165();
			break;
	}
	Global_1051215->f_36++;
	if (Global_1051215->f_36 >= 3)
	{
		Global_1051215->f_36 = 0;
	}
	func_166();
	func_167();
	func_168();
	func_169();
	func_170();
	func_152();
	func_171();
	func_172();
}

void func_38()
{
	func_173();
}

void func_39()
{
	func_174();
	func_46();
	func_47();
	func_48();
}

void func_40(int iParam0)
{
	if (network_is_host_of_this_script())
	{
		Global_1071685 = iParam0;
	}
}

void func_41()
{
	Global_1296473 = get_network_time_accurate();
	func_175();
	func_176();
}

void func_42(char* sParam0, int iParam1)
{
	iParam1 = iParam1;
	sParam0 = sParam0;
	if (!network_is_host_of_this_script())
	{
	}
}

void func_43()
{
	func_46();
	func_47();
	func_48();
	func_177();
	func_16();
	if (is_screen_faded_out() || is_screen_fading_out())
	{
		func_178();
	}
	func_179();
}

bool func_44()
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iVar0 != 0)
		{
			if (&Global_1051252->f_16[iVar0] != 0)
			{
				if (_does_thread_exist(&(Global_1051252->f_16[iVar0])))
				{
					iVar1 = 1;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_45()
{
	terminate_this_thread();
}

void func_46()
{
	Global_1071686->f_5 = 0;
}

void func_47()
{
	Global_1071686->f_4 = 0;
}

void func_48()
{
	Global_1071686->f_3 = 0;
}

int func_49()
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
			func_45();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_45();
					break;
				case 2:
					func_45();
					break;
				case 4:
					func_45();
					break;
				case 3:
					func_45();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_45();
		}
		if (!network_is_game_in_progress())
		{
			func_45();
		}
		if (!network_is_signed_online())
		{
			func_45();
		}
		if (func_57() == 0)
		{
			if (func_180())
			{
				func_45();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_45();
	}
	return 1;
}

bool func_50()
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

void func_51()
{
	Global_1071686->f_13 = 0;
	bVar0 = false;
	while (!func_7(0, 0) && !bVar0)
	{
		switch (Global_1071686->f_13)
		{
			case 0:
				func_181(Global_1071685);
				network_register_host_broadcast_variables(Global_1071685, 1, 84);
				func_182(_0xba24095ea96dfe17(Global_1071685), 1, "g_mpHostData");
				if (func_21())
				{
					*Global_1071214 = { *(*Global_1056141)[func_183()] };
					func_184(Global_1056141);
					network_register_player_broadcast_variables(Global_1056141, 15073, 85);
					func_185(_0x690806bc83bc8ca2((*Global_1056141)[0]), 15073, "g_mpPlayerData");
					*(*Global_1056141)[network_player_id_to_int()] = { *Global_1071214 };
				}
				else
				{
					network_register_player_broadcast_variables(Global_1056141, 15073, 85);
					func_185(_0x690806bc83bc8ca2((*Global_1056141)[0]), 15073, "g_mpPlayerData");
				}
				Global_1071686->f_13++;
				break;
			case 1:
				func_186();
				Global_1071686->f_13++;
				break;
			case 2:
				func_187();
				Global_1071686->f_13++;
				break;
			case 3:
				func_188();
				Global_1071686->f_13++;
				break;
			case 4:
				func_189();
				Global_1071686->f_13++;
				break;
			case 5:
				func_190();
				Global_1071686->f_13++;
				break;
			case 6:
				func_191();
				Global_1071686->f_13++;
				break;
			case 7:
				func_192();
				Global_1071686->f_13++;
				break;
			case 8:
				func_193();
				Global_1071686->f_13++;
				break;
			case 9:
				func_194();
				Global_1071686->f_13++;
				break;
			case 10:
				func_195();
				Global_1071686->f_13++;
				break;
			case 11:
				func_196();
				Global_1071686->f_13++;
				break;
			case 12:
				func_197();
				Global_1071686->f_13++;
				break;
			case 13:
				func_198();
				Global_1071686->f_13++;
				break;
			case 14:
				bVar0 = true;
				break;
		}
		wait(0);
	}
	func_199();
}

void func_52(bool bParam0)
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
					func_45();
					break;
				case 2:
					func_45();
					break;
				case 4:
					func_45();
					break;
				case 3:
					func_45();
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
			func_45();
			return;
		}
		wait(0);
	}
}

void func_53()
{
	func_200();
}

void func_54()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1071686->f_16.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_1071686->f_16 = 0;
}

void func_55()
{
	iVar0 = network_player_id_to_int();
	if (iVar0 == 255)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 17)
	{
		iVar2 = &Global_1071686->f_19648[iVar1];
		Global_1071686->f_19648[iVar1] = &Global_39.f_110[iVar1];
		(*Global_1056141)[iVar0]->f_425[iVar1] = &Global_39.f_110[iVar1];
		(*Global_1056141)[iVar0]->f_425.f_19[iVar1] = -1;
		func_201(iVar1, iVar2, iVar0);
		iVar1++;
	}
	func_202(iVar0, Global_1071686->f_19648.f_21);
	Global_1071686->f_19648.f_21 = 0;
}

void func_56(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_57()
{
	return Global_1572887->f_13;
}

bool func_58(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_59(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_60()
{
	iVar0 = network_player_id_to_int();
	if (iVar0 == 255)
	{
		return;
	}
	if (Global_1102219->f_3672 != iVar0)
	{
		Global_1102219->f_3672 = iVar0;
	}
}

int func_61(int iParam0, bool bParam1, bool bParam2)
{
	if (!network_is_game_in_progress())
	{
		return 0;
	}
	if (get_player_team(player_id()) == iParam0 && !bParam2)
	{
		return 1;
	}
	if (!(iParam0 >= -1 && iParam0 <= 7))
	{
		return 0;
	}
	set_player_team(player_id(), iParam0, bParam1);
	if (!bParam1)
	{
		func_203();
	}
	return 1;
}

void func_62()
{
	iVar0 = network_player_id_to_int();
	func_204(&(Global_1296473->f_60), 1, 1);
	func_204(&(Global_1296473->f_61), 1, 1);
	if (iVar0 != 255)
	{
		(*Global_1296406)[iVar0] = 0;
	}
	func_205(1);
}

bool func_63(int iParam0)
{
	return func_207(func_206(iParam0));
}

void func_64()
{
	Global_1051252->f_38 = network_is_host_of_this_script();
}

void func_65()
{
	bVar0 = false;
	iVar1 = 12;
	if (func_208(&iVar1))
	{
		bVar0 = true;
	}
	while (iVar1 != 12)
	{
		if (func_208(&iVar1))
		{
			bVar0 = true;
		}
	}
	if (Global_1051252->f_45.f_1)
	{
		iVar2 = 0;
		if (func_209(&iVar2))
		{
			bVar0 = true;
		}
		while (iVar2 != 0)
		{
			if (func_209(&iVar2))
			{
				bVar0 = true;
			}
		}
		Global_1051252->f_45.f_1 = 0;
	}
	else if (func_209(&(Global_1051252->f_45)))
	{
		bVar0 = true;
	}
	Var3 = { Global_1051252->f_45 };
	Var38 = 12;
	Var38.f_1.f_4 = 10;
	Var38.f_1.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	iVar219 = 0;
	while (iVar219 < 12)
	{
		Var38[iVar219] = 15;
		iVar219++;
	}
	iVar220 = 0;
	iVar222 = 0;
	bVar223 = true;
	if (Var3.f_2[0] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220] = 0;
		Var38[iVar220]->f_1 = { Global_1296859->f_17 };
		Var38[iVar220]->f_4[0] = func_211(func_210(0));
		iVar220++;
	}
	if (Var3.f_2[1] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220] = 1;
		Var38[iVar220]->f_1 = { Global_1296859->f_17 };
		if ((_does_thread_exist(Global_1132288->f_2055) && is_thread_active(Global_1132288->f_2055, false)) && Global_1132288->f_2056 != -1)
		{
			Var38[iVar220]->f_4[0] = _0x6c4dbf553885f9eb((*Global_1131196)[Global_1132288->f_2056]->f_20);
		}
		else if (func_212(16))
		{
			Var38[iVar220]->f_4[0] = func_214(func_213(player_id(), 1));
		}
		iVar220++;
	}
	if (Var3.f_2[2] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220] = 2;
		Var38[iVar220]->f_1 = { Global_1296859->f_17 };
		iVar221 = 0;
		iVar222 = (func_215() - 1);
		iVar221 = 0;
		while (iVar221 <= iVar222)
		{
			Var224 = { *Global_1051252->f_80[iVar221] };
			StringConCat(&Var224, " ", 64);
			StringIntConCat(&Var224, Global_1051252->f_80[iVar221]->f_9, 64);
			Var38[iVar220]->f_4[iVar221] = func_216(Var224);
			iVar221++;
		}
		iVar220++;
	}
	if (Var3.f_2[3] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220] = 3;
		Var38[iVar220]->f_1 = { Global_1296859->f_17 };
		Var38[iVar220]->f_4[0] = func_218(func_217(255));
		iVar220++;
	}
	if (Var3.f_2[4] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220] = 4;
		Var38[iVar220]->f_1 = { Global_1296859->f_17 };
		if (is_string_null_or_empty(func_219()))
		{
			if (func_220())
			{
				Var38[iVar220]->f_4[0] = func_221();
			}
		}
		else
		{
			Var38[iVar220]->f_4[0] = func_219();
		}
		iVar220++;
	}
	if (Var3.f_2[6] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220] = 6;
		Var38[iVar220]->f_1 = { Global_1296859->f_17 };
		iVar221 = 0;
		if (func_222(0, &Global_1296859))
		{
			Var38[iVar220]->f_4[iVar221] = func_223(0);
			iVar221++;
		}
		if (func_222(1, &Global_1296859))
		{
			Var38[iVar220]->f_4[iVar221] = func_223(1);
			iVar221++;
		}
		if (func_222(2, &Global_1296859))
		{
			Var38[iVar220]->f_4[iVar221] = func_223(2);
			iVar221++;
		}
		iVar220++;
	}
	if (Var3.f_2[7] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220] = 7;
		Var38[iVar220]->f_1 = { Global_1296859->f_17 };
		Var38[iVar220]->f_4[0] = func_224();
		iVar220++;
	}
	if (Var3.f_2[8] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220] = 8;
		Var38[iVar220]->f_1 = { Global_1296859->f_17 };
		iVar221 = 0;
		Var233.f_8 = -1;
		Var233.f_8.f_1 = -1;
		Var233.f_16.f_12 = -1;
		Var233.f_16.f_12.f_1 = -1;
		Var233.f_16.f_14 = 255;
		Var233.f_16.f_15 = 255;
		iVar232 = 0;
		while (iVar232 < 10)
		{
			if (iVar221 >= 10)
			{
			}
			else
			{
				Var233 = { func_225(iVar232) };
				if (!func_226(&Var233))
				{
				}
				else
				{
					StringCopy(&cVar268, "Invite - ", 64);
					StringIntConCat(&cVar268, iVar232, 64);
					Var38[iVar220]->f_4[iVar221] = func_216(cVar268);
					iVar221++;
				}
				iVar232++;
			}
		}
		iVar220++;
	}
	if (Var3.f_2[9] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220] = 9;
		Var38[iVar220]->f_1 = { Global_1296859->f_17 };
		Var38[iVar220]->f_4[0] = "Matchmaking Hack";
		iVar220++;
	}
	if (Var3.f_2[10] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220] = 10;
		Var38[iVar220]->f_1 = { Global_1296859->f_17 };
		Var38[iVar220]->f_4[0] = func_227(player_id());
		iVar220++;
	}
	if (Var3.f_2[11] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220] = 11;
		Var38[iVar220]->f_1 = { func_228() };
		Var38[iVar220]->f_4[0] = func_229();
		iVar220++;
	}
	if (Var3.f_2[12] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220] = 12;
		Var38[iVar220]->f_1 = { Global_1296859->f_17 };
		iVar220++;
	}
	if (Var3.f_2[13] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220] = 13;
		Var38[iVar220]->f_1 = { Global_1296859->f_17 };
		iVar220++;
	}
	if (Var3.f_2[14] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220] = 14;
		Var38[iVar220]->f_1 = { Global_1296859->f_17 };
		iVar220++;
	}
	if (!bVar223)
	{
		if (_0xaaded99a6b268a27() || bVar0)
		{
			_0x63246a24f5747510(0, &Var38);
		}
		if ((((Var3.f_2[12] || Var3.f_2[13]) // PointerArith || Var3.f_2[14]) // PointerArith || Var3.f_2[0]) // PointerArith)
		{
			if (_0xe258570e0c116a66())
			{
				_0x4440fee3efe78f54(0);
			}
		}
		else if (!_0xe258570e0c116a66())
		{
			_0x4440fee3efe78f54(1);
		}
	}
	else
	{
		if (!_0xaaded99a6b268a27())
		{
			_0x63246a24f5747510(1, &Var38);
		}
		if (!_0xe258570e0c116a66())
		{
			_0x4440fee3efe78f54(1);
		}
	}
}

struct<11> func_66()
{
	return Global_1572887->f_266.f_50;
}

var func_67()
{
	return Global_1572887->f_266.f_61;
}

var func_68(int iParam0)
{
	return (*Global_1056141)[iParam0]->f_187.f_10;
}

var func_69(int iParam0)
{
	return (*Global_1056141)[iParam0]->f_187;
}

var func_70(int iParam0)
{
	return (*Global_1056141)[iParam0]->f_187.f_1;
}

var func_71(int iParam0)
{
	return (*Global_1056141)[iParam0]->f_187.f_2;
}

struct<2> func_72(int iParam0)
{
	return (*Global_1056141)[iParam0]->f_187.f_3;
}

bool func_73(int iParam0, int iParam1)
{
	return ((*Global_263042)[iParam0]->f_68 && iParam1) != 0;
}

int func_74()
{
	return Global_1572887->f_106;
}

bool func_75(int iParam0)
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

int func_76(int iParam0)
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

bool func_77(struct<2> Param0, var uParam2)
{
	if (!func_18(Param0))
	{
		return false;
	}
	func_230(uParam2);
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

bool func_78()
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

void func_79()
{
	if (!func_82(1))
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
	func_232(func_231(), func_84());
}

void func_80(bool bParam0)
{
	if (!func_78())
	{
		return;
	}
	if (func_233() || func_234())
	{
		if (!func_82(1) || bParam0)
		{
			iVar0 = 603685163;
			if (func_233())
			{
				iVar0 = -273223690;
			}
			func_232(iVar0, func_84());
			set_ambient_zone_list_state("AZL_RDRO_X18", true, true);
			_0xec116edb683ad479(1);
			set_timecycle_modifier("MP_reduceGlobalTemperature");
			func_83(1);
		}
		if (func_84() || bParam0)
		{
			if (func_233())
			{
				if (!func_82(4))
				{
					_set_snow_coverage_type(3);
					func_83(4);
					func_81(2);
				}
			}
			else if (!func_82(2))
			{
				_set_snow_coverage_type(2);
				func_83(2);
				func_81(4);
			}
		}
	}
	if (func_235())
	{
		if (((!func_82(8) && !_0xcf45df50c7775f2a()) && !func_236(-1562607865)) || bParam0)
		{
			func_237(-1562607865);
			func_83(8);
		}
	}
}

void func_81(int iParam0)
{
	Global_1939655->f_84 = (Global_1939655->f_84 - (Global_1939655->f_84 && iParam0));
}

bool func_82(int iParam0)
{
	return (Global_1939655->f_84 && iParam0) != 0;
}

void func_83(int iParam0)
{
	Global_1939655->f_84 = (Global_1939655->f_84 || iParam0);
}

bool func_84()
{
	return (_is_loading_screen_active() || is_screen_faded_out());
}

void func_85(bool bParam0)
{
	if (func_82(1) || bParam0)
	{
		clear_weather_type_persist();
		clear_ambient_zone_list_state("AZL_RDRO_X18", true);
		_0xec116edb683ad479(0);
		clear_timecycle_modifier();
		func_81(1);
	}
	if ((func_82(6) && func_84()) || bParam0)
	{
		_set_snow_coverage_type(0);
		func_81(2);
		func_81(4);
	}
	if (((func_82(8) && !_0xcf45df50c7775f2a()) && !func_236(-1562607865)) || bParam0)
	{
		func_238(-1562607865);
		func_81(8);
	}
}

int func_86(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = "MP_GAME_STATE_INVALID";
			break;
		case 0:
			iVar0 = "MP_GAME_STATE_GAME_INIT";
			break;
		case 1:
			iVar0 = "MP_GAME_STATE_LOAD_INIT_THREADS";
			break;
		case 2:
			iVar0 = "MP_GAME_STATE_LOAD_MAIN_THREADS";
			break;
		case 3:
			iVar0 = "MP_GAME_STATE_ROUTE_TRANSITION";
			break;
		case 4:
			iVar0 = "MP_GAME_STATE_CREATE_PLAYER_CAMP";
			break;
		case 5:
			iVar0 = "MP_GAME_STATE_CHECK_FOR_INVITE";
			break;
		case 6:
			iVar0 = "MP_GAME_STATE_SPAWN_PLAYER";
			break;
		case 7:
			iVar0 = "MP_GAME_STATE_MAIN_UPDATE_FIRST_FRAME";
			break;
		case 8:
			iVar0 = "MP_GAME_STATE_MAIN_UPDATE";
			break;
		case 9:
			iVar0 = "MP_GAME_STATE_END";
			break;
		case 10:
			iVar0 = "MP_GAME_STATE_ALL_LEAVE";
			break;
	}
	return iVar0;
}

bool func_87(int iParam0)
{
	if (Global_1051252->f_15 && func_58(Global_1051252->f_14, iParam0))
	{
		return false;
	}
	if (func_58(Global_1051252->f_13, iParam0))
	{
		return false;
	}
	return true;
}

bool func_88(char* sParam0, int iParam1, int iParam2)
{
	request_script(sParam0);
	if (has_script_loaded(sParam0) && get_number_of_free_stacks_of_this_size(iParam2) > 0)
	{
		Global_1051252->f_16[iParam1] = start_new_script(sParam0, iParam2);
		set_script_as_no_longer_needed(sParam0);
		return true;
	}
	return false;
}

Vector3 func_89()
{
	Var3 = { func_239(0) };
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

bool func_90(int iParam0)
{
	return func_240((*Global_1134390)[network_player_id_to_int()]->f_73, iParam0);
}

bool func_91(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return false;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam0);
	if (network_is_player_active(iVar0))
	{
		if (iVar0 == player_id())
		{
			_0xc08aff658b2e51da(&iVar1);
			if (iVar1 != 0)
			{
				return true;
			}
		}
		else
		{
			Var2 = { func_241(iVar0) };
			iVar19 = 0;
			while (iVar19 <= (_0xc084ff658b2e61da(&Var2) - 1))
			{
				if ((_0xc084ff658b2e81da(&Var2, iVar19, &Var9) && Var9 != 0) && Var9.f_9 == 1)
				{
					return true;
				}
				iVar19++;
			}
		}
	}
	return false;
}

int func_92(vector3 vParam0)
{
	if (!func_242(vParam0, 0))
	{
		return 0;
	}
	func_243(64);
	return 1;
}

void func_93(int iParam0)
{
	if (Global_1132288->f_2018 != iParam0)
	{
		Global_1132288->f_2018 = iParam0;
	}
}

var func_94()
{
	return Global_1132288->f_2018;
}

void func_95(var uParam0, int iParam1)
{
	func_244(uParam0, iParam1);
}

void func_96(int iParam0)
{
	iVar0 = get_frame_count();
	iVar1 = _get_system_time();
	Global_1102219 = iParam0;
	Global_1102219->f_3571 = iVar1;
	Global_1102219->f_3572 = iVar0;
	Global_1102219->f_3573 = 0;
}

bool func_97(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_98(vector3 vParam0)
{
	return func_245(_get_map_zone_at_coords(vParam0, 10));
}

int func_99(int iParam0)
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

bool func_100(var uParam0, float fParam1)
{
	uVar0 = &Global_1071686->f_23887.f_366[get_random_int_in_range(0, 15)];
	iVar1 = func_246(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = get_random_int_in_range(0, iVar1);
		if (func_247(uVar0, iVar2, uParam0, fParam1))
		{
			return true;
		}
	}
	return false;
}

int func_101(vector3 vParam0, int iParam3)
{
	iVar0 = func_248();
	if (func_249(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1887339)[iVar0]->f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_250(vParam0, iParam3);
}

void func_102(bool bParam0)
{
	if (!bParam0)
	{
		func_251(18);
	}
	else
	{
		func_252(18);
	}
}

void func_103(bool bParam0)
{
	if (!bParam0)
	{
		func_251(24);
	}
	else
	{
		func_252(24);
	}
}

void func_104(int iParam0, bool bParam1)
{
	if (!func_100(&(Var30.f_6), &Var30))
	{
		Var30.f_6 = { (Global_1071686->f_23887.f_366[get_random_int_in_range(0, 15)])->f_2 };
		Var30 = (IntToFloat(get_random_int_in_range(0, 359)) * 1f);
	}
	Var30.f_5 = 1;
	func_252(88);
	if (func_253(iParam0, &uVar0))
	{
		func_109(&uVar0, &Var30, 1, 1, 1);
		if (bParam1)
		{
			func_251(0);
		}
		return;
	}
	func_116(Var30.f_6, Var30, -1082130432, -1082130432, 1, 1, 1);
	if (bParam1)
	{
		func_251(0);
	}
}

void func_105(bool bParam0)
{
	if (bParam0)
	{
		func_252(56);
	}
	else
	{
		func_251(56);
	}
}

void func_106(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (iParam1 != -1)
		{
			Global_1102219->f_3809 = 0;
		}
		else
		{
			Global_1102219->f_3809 = 1;
		}
		func_252(58);
		Global_1102219->f_3808 = iParam1;
	}
	else
	{
		func_251(58);
	}
}

void func_107(int iParam0)
{
	func_59(&(Global_1572887->f_266.f_63), iParam0);
}

void func_108()
{
	func_252(90);
}

void func_109(var uParam0, float fParam1, int iParam2, bool bParam3, int iParam4)
{
	if (func_149(255) == 4)
	{
		return;
	}
	if (bParam3)
	{
		if (func_97(uParam0->f_17.f_6))
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
	if (func_97(fParam1->f_6))
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
	func_252(0);
	func_252(3);
	Global_1102219->f_3919 = iParam2;
	Global_1102219->f_3920 = bParam3;
	Global_1102219->f_3921 = iParam4;
	func_120(&(Global_1102219->f_3849));
	Global_1102219->f_3849 = { *uParam0 };
	func_121(&(Global_1102219->f_3888));
	Global_1102219->f_3888 = { *fParam1 };
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_254(Global_1102219->f_3849, 36);
	func_255(Global_1102219->f_3888, 36);
}

void func_110()
{
	func_252(89);
	func_252(88);
}

void func_111(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_252(66);
		if (bParam1)
		{
			func_252(69);
		}
	}
	else
	{
		func_251(66);
		func_251(69);
	}
}

void func_112(bool bParam0)
{
	if (bParam0)
	{
		func_252(52);
	}
	else
	{
		func_251(52);
	}
}

void func_113()
{
	func_256(1);
	func_257(1, 1);
}

void func_114(bool bParam0)
{
	if (bParam0)
	{
		func_252(54);
	}
	else
	{
		func_251(54);
	}
}

void func_115()
{
	func_258(1);
	func_257(1, 1);
}

void func_116(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8)
{
	vVar0 = { get_entity_coords(player_ped_id(), false, false) };
	iVar3 = iParam3;
	if (!func_122(Global_1296859->f_17, &vVar0, &iVar3))
	{
		vVar0 = { get_entity_coords(player_ped_id(), false, false) };
		iVar3 = iParam3;
	}
	func_259(vParam0, iParam3, vVar0, iVar3, iParam4, iParam5, iParam6, iParam7, fParam8, 1);
}

bool func_117()
{
	iVar0 = _0x901e0dc25080c8b9(player_id());
	if (!_0x0f99f6436528a089(iVar0))
	{
		return false;
	}
	iVar1 = _0x4be6c13a45cca8ec(iVar0);
	if (!network_is_player_active(iVar1))
	{
		return false;
	}
	if (!does_entity_exist(get_player_ped(iVar1)))
	{
		return false;
	}
	if (iVar1 == player_id())
	{
		return false;
	}
	return true;
}

void func_118()
{
	iVar0 = get_player_ped(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())));
	Var1.f_17.f_6 = { get_entity_coords(iVar0, false, false) };
	Var1.f_17 = { 25f, 25f, 25f };
	Var1.f_17.f_9 = -432403087;
	Var1.f_4 = iVar0;
	Var1.f_5 = 3;
	func_100(&(Var31.f_6), &Var31);
	Var31.f_5 = 1;
	func_109(&Var1, &Var31, 1, 1, 1);
	if (is_ped_on_mount(iVar0))
	{
		func_111(1, 0);
	}
}

Vector3 func_119(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return *Global_17411.f_2944[1];
		default:
			break;
	}
	return func_260();
}

void func_120(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_121(float fParam0)
{
	*fParam0 = { Var0 };
}

bool func_122(vector3 vParam0, var uParam3, int iParam4)
{
	uVar0 = &Global_1071686->f_23887.f_366[func_261(vParam0)];
	iVar1 = func_246(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = get_random_int_in_range(0, iVar1);
		if (func_247(uVar0, iVar2, uParam3, iParam4))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_123(vector3 vParam0, int iParam3)
{
	if (iParam3 == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar3 = -1;
	if (iParam3 == -471827042)
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			iVar0 = iVar1;
			Var21 = { func_262(iVar0) };
			*vVar5[iVar1] = { Var21.f_5 };
			iVar2++;
			iVar1++;
		}
	}
	else
	{
		return 0f, 0f, 0f;
	}
	if (!iVar2 == 0)
	{
		iVar1 = 0;
		while (iVar1 <= (iVar2 - 1))
		{
			if (iVar3 == -1)
			{
				iVar3 = iVar1;
				fVar4 = get_distance_between_coords(vParam0, *vVar5[iVar1], true);
			}
			else if (fVar4 > get_distance_between_coords(vParam0, *vVar5[iVar1], true))
			{
				iVar3 = iVar1;
				fVar4 = get_distance_between_coords(vParam0, *vVar5[iVar1], true);
			}
			iVar1++;
		}
		return *vVar5[iVar3];
	}
	return 0f, 0f, 0f;
}

bool func_124(int iParam0, var uParam1)
{
	*uParam1 = { func_260() };
	switch (iParam0)
	{
		case 1:
			*uParam1 = { -870.1846f, -1276.62f, 42.2367f };
			break;
		case 2:
			*uParam1 = { 1352.95f, -1306.359f, 75.9113f };
			break;
		case 3:
			vVar0 = { func_89() };
			switch (vVar0.y)
			{
				case -987049424:
				case -682748:
				case 1538293636:
				case 1581179681:
				default:
					*uParam1 = { -319.24f, 797.04f, 116.89f };
					break;
					*uParam1 = { -319.24f, 797.04f, 116.89f };
					break;
				case -1992167326:
				case -1884014371:
				case -1554232707:
				case -724534761:
				case -215258135:
				case 892234183:
					*uParam1 = { -3678.34f, -2623.56f, -14.24f };
					break;
				case -1871413878:
				case 1357161730:
				case 1483778247:
					*uParam1 = { 2822.76f, -1313f, 46.34f };
					break;
			}
			break;
		case 4:
			iVar3 = func_263();
			if (iVar3 != -1)
			{
				if (func_264(iVar3, &vVar4, &uVar7))
				{
					*uParam1 = { vVar4 };
				}
			}
			break;
		case 5:
			if (func_265())
			{
				*uParam1 = { 1440.138f, 369.3305f, 88.016f };
			}
			break;
		case 6:
			*uParam1 = { -1789.972f, -372.0744f, 158.8352f };
			break;
	}
	return !func_97(*uParam1);
}

void func_125(int iParam0, bool bParam1)
{
	func_266(iParam0, &iVar0, &iVar1);
	if (!func_267(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_268(iVar0, iVar1);
}

void func_126(bool bParam0)
{
	if (!bParam0)
	{
		func_251(20);
	}
	else
	{
		func_252(20);
	}
}

void func_127(vector3 vParam0, float fParam3, bool bParam4)
{
	if (func_269(vParam0, fParam3))
	{
		func_257(1, bParam4);
	}
}

bool func_128()
{
	iVar0 = 1;
	while (iVar0 <= 4)
	{
		if (Global_1139381->f_4912[iVar0]->f_1 && !Global_1139381->f_4912[iVar0]->f_2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

Vector3 func_129(int iParam0, bool bParam1)
{
	vVar0 = { 0f, 0f, 0f };
	if (!func_249(iParam0))
	{
		return vVar0;
	}
	if (_does_volume_exist((*Global_1887339)[iParam0]->f_4))
	{
		vVar0 = { _0xf70f00013a62f866((*Global_1887339)[iParam0]->f_4) };
		if (bParam1)
		{
			if (get_ground_z_for_3d_coord(vVar0, &uVar3, false))
			{
				vVar0.f_2 = uVar3;
			}
		}
	}
	return vVar0;
}

bool func_130()
{
	iVar0 = 9;
	while (iVar0 <= 12)
	{
		if (Global_1139381->f_4912[iVar0]->f_1 && !Global_1139381->f_4912[iVar0]->f_2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 111;
		case 1:
			return 81;
		case 2:
			return 40;
		case 3:
			return 121;
		default:
			break;
	}
	return 111;
}

void func_132()
{
	Global_1071686->f_5 = 1;
	Global_1051252->f_43 = (get_game_timer() - Global_1051252->f_40);
}

void func_133()
{
	func_270(256);
}

bool func_134()
{
	return false;
}

void func_135(int iParam0)
{
	Global_1896622->f_41 = iParam0;
}

void func_136()
{
	func_271();
	func_272();
	func_273();
	func_274();
}

void func_137(int iParam0)
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

void func_138()
{
	func_275();
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!is_string_null_or_empty(func_276(iVar0)))
		{
			request_named_ptfx_asset(get_hash_key(func_276(iVar0)));
		}
		iVar0++;
	}
}

void func_139()
{
	enable_script_brain_set(1);
}

void func_140()
{
	enable_script_brain_set(4);
}

void func_141()
{
	disable_script_brain_set(2);
}

void func_142()
{
	iVar0 = func_277();
	iVar1 = func_278();
	Var2 = 7;
	Var2.f_1 = 10;
	Var2.f_1.f_11 = 10;
	Var2.f_1.f_11.f_11 = 10;
	Var2.f_1.f_11.f_11.f_11 = 10;
	Var2.f_1.f_11.f_11.f_11.f_11 = 10;
	Var2.f_1.f_11.f_11.f_11.f_11.f_11 = 10;
	Var2.f_1.f_11.f_11.f_11.f_11.f_11.f_11 = 10;
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 - 1);
		func_279(&iVar0, 0, 0, 0, 1, 0, 0);
	}
	iVar1 = 0;
	while (iVar1 < 7)
	{
		*Global_1297612->f_34[iVar1] = { func_280(iVar0, iVar1, &Var2) };
		func_281(&iVar0, 0, 0, 0, 1, 0, 0, 0);
		iVar1++;
	}
}

void func_143()
{
	_0x062b4a4a3396351d(player_id());
	_0x55f37f5f3f2475e1();
}

void func_144(bool bParam0)
{
	iVar0 = get_main_player_blip_id();
	if (func_282(player_id(), 1) && !bParam0)
	{
		_blip_set_modifier(iVar0, -600115211);
		_set_blip_flash_style(iVar0, -706674318);
	}
	else if (func_283(player_id(), 1) && !bParam0)
	{
		_set_blip_flash_style(iVar0, -600115211);
		_blip_set_modifier(iVar0, -706674318);
	}
	else
	{
		_set_blip_flash_style(iVar0, -600115211);
		_set_blip_flash_style(iVar0, -706674318);
	}
}

bool func_145(int iParam0, bool bParam1, bool bParam2)
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

void func_146(int iParam0, int iParam1)
{
	if (Global_1051436->f_1)
	{
	}
	Global_1051436->f_1 = iParam0;
	if (!func_284(iParam1))
	{
		return;
	}
	Global_1051436->f_2 = 0;
	Global_1051436 = Global_1901947->f_44;
	_0xbe7d814cfa181b56();
	if (!Global_1051436->f_1)
	{
		func_285("BGS_CONFIRM", 15000, 0, 0, 0, 1);
	}
	Global_1051436->f_1 = 0;
}

void func_147()
{
	Global_1071686->f_23887.f_366.f_4084 = -1;
	Global_1071686->f_23887 = 1;
}

void func_148()
{
	reserve_network_client_mission_peds((1 + get_num_reserved_mission_peds(0)));
}

int func_149(int iParam0)
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

var func_150(int iParam0, int iParam1)
{
	return func_286(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_151(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
{
	if (!_0x179a6f0ee2e79026(&uParam19))
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
				Var0.f_19 = uParam19;
				Var0.f_20 = Param0.f_2;
				func_287(&(Global_1071686->f_23044), Var0);
				return;
			}
		}
	}
	trigger_script_event(1, &Param0, 19, 7, &uParam19);
}

void func_152()
{
	Var0 = { func_210(0) };
	if (func_18(Var0))
	{
		(*Global_1056141)[&Global_1296859]->f_2 = { func_210(0) };
	}
	else
	{
		func_288(&((*Global_1056141)[&Global_1296859]->f_2));
	}
}

void func_153()
{
	if (!func_289())
	{
		return;
	}
	network_get_local_handle(&uVar0);
	if (!network_is_handle_valid(&uVar0))
	{
		return;
	}
	if (!_network_is_player_index_valid(player_id()))
	{
		return;
	}
	if (!network_is_handle_valid(&((*Global_1145091)[player_id()]->f_1)) || !network_are_handles_the_same(&((*Global_1145091)[player_id()]->f_1), &uVar0))
	{
		_copy_memory(&((*Global_1145091)[player_id()]->f_1), &uVar0, 7);
	}
}

void func_154()
{
	(*Global_1145091)[&Global_1296859] = _0x32c90cdfaf40514c();
}

void func_155()
{
	if (!Global_1572887->f_9)
	{
		return;
	}
	(*Global_1291071)[&Global_1296859] = Global_1071686->f_21416.f_1[&Global_1296859]->f_7;
	(*Global_1056141)[&Global_1296859]->f_10 = Global_1071686->f_21416.f_259;
	(*Global_1056141)[&Global_1296859]->f_9 = Global_1071686->f_21416.f_258;
	_0xde544b7ec0c187cc(&(Global_1071686->f_21416.f_259));
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iVar0 == &Global_1296859)
		{
		}
		else if (!&Global_1296859->f_22[iVar0])
		{
		}
		else if (func_290(&(Global_1296859->f_154[iVar0]), 0))
		{
			if (func_240(Global_1291071[iVar0], 16))
			{
				_0xffddf802279be128(&((*Global_1056141)[iVar0]->f_9), &(Global_1071686->f_21416.f_259), &(Global_1071686->f_21416.f_259));
			}
		}
		iVar0++;
	}
}

void func_156()
{
	Var0 = { func_225(0) };
	if (Var0)
	{
		if (get_time_difference(get_network_time_accurate(), Var0.f_16.f_2) > Global_1901947->f_1.f_25)
		{
			func_291();
			func_292(&Var0);
		}
	}
	func_293();
	func_295((func_294() + 1 % 10));
	func_296();
}

void func_157()
{
	if ((*Global_1291106)[&Global_1296859]->f_1 & 1 != 0)
	{
		(*Global_1291106)[&Global_1296859]->f_5 = Global_1291734->f_11.f_51;
	}
	else
	{
		(*Global_1291106)[&Global_1296859]->f_5 = -1;
	}
	if ((*Global_1291106)[&Global_1296859]->f_1 & 2 != 0)
	{
		if (!_0x1b89bc43b6e69107((*Global_1291106)[&Global_1296859]->f_9, (*Global_1291106)[&Global_1296859]->f_10, (*Global_1291106)[&Global_1296859]->f_1 & 4 != 0, 0))
		{
			func_297(2);
			(*Global_1291106)[&Global_1296859]->f_9 = 0;
			(*Global_1291106)[&Global_1296859]->f_10 = -1;
		}
	}
	if ((*Global_1291106)[&Global_1296859]->f_1 & 16 != 0)
	{
		if (!_0x1b89bc43b6e69107((*Global_1291106)[&Global_1296859]->f_9, (*Global_1291106)[&Global_1296859]->f_10, true, 0))
		{
			func_297(16);
			(*Global_1291106)[&Global_1296859]->f_9 = 0;
			(*Global_1291106)[&Global_1296859]->f_10 = -1;
		}
	}
	if ((*Global_1291106)[&Global_1296859]->f_2 & 1 != 0)
	{
		(*Global_1291106)[&Global_1296859]->f_6 = Global_1291734->f_581.f_46;
	}
	else
	{
		(*Global_1291106)[&Global_1296859]->f_6 = -1;
	}
	if ((*Global_1291106)[&Global_1296859]->f_2 & 8 != 0)
	{
		if (!_0x1b89bc43b6e69107((*Global_1291106)[&Global_1296859]->f_11, (*Global_1291106)[&Global_1296859]->f_12, (*Global_1291106)[&Global_1296859]->f_2 & 16 != 0, 0))
		{
			func_298(8);
			(*Global_1291106)[&Global_1296859]->f_11 = 0;
			(*Global_1291106)[&Global_1296859]->f_12 = -1;
		}
	}
	if (func_299(54))
	{
		(*Global_1291106)[&Global_1296859]->f_1 |= 262144;
	}
	else
	{
		(*Global_1291106)[&Global_1296859]->f_1 = ((*Global_1291106)[&Global_1296859]->f_1 - (*Global_1291106)[&Global_1296859]->f_1 & 262144);
	}
	if (func_299(55))
	{
		(*Global_1291106)[&Global_1296859]->f_1 |= 256;
	}
	else
	{
		(*Global_1291106)[&Global_1296859]->f_1 = ((*Global_1291106)[&Global_1296859]->f_1 - (*Global_1291106)[&Global_1296859]->f_1 & 256);
	}
	if (func_299(56))
	{
		(*Global_1291106)[&Global_1296859]->f_1 |= 512;
	}
	else
	{
		(*Global_1291106)[&Global_1296859]->f_1 = ((*Global_1291106)[&Global_1296859]->f_1 - (*Global_1291106)[&Global_1296859]->f_1 & 512);
	}
	if (func_299(57))
	{
		(*Global_1291106)[&Global_1296859]->f_1 |= 64;
	}
	else
	{
		(*Global_1291106)[&Global_1296859]->f_1 = ((*Global_1291106)[&Global_1296859]->f_1 - (*Global_1291106)[&Global_1296859]->f_1 & 64);
	}
	if (func_299(58))
	{
		(*Global_1291106)[&Global_1296859]->f_1 |= 32;
	}
	else
	{
		(*Global_1291106)[&Global_1296859]->f_1 = ((*Global_1291106)[&Global_1296859]->f_1 - (*Global_1291106)[&Global_1296859]->f_1 & 32);
	}
	if (func_299(59))
	{
		(*Global_1291106)[&Global_1296859]->f_1 |= 128;
	}
	else
	{
		(*Global_1291106)[&Global_1296859]->f_1 = ((*Global_1291106)[&Global_1296859]->f_1 - (*Global_1291106)[&Global_1296859]->f_1 & 128);
	}
	if (func_299(60))
	{
		(*Global_1291106)[&Global_1296859]->f_1 |= 1024;
	}
	else
	{
		(*Global_1291106)[&Global_1296859]->f_1 = ((*Global_1291106)[&Global_1296859]->f_1 - (*Global_1291106)[&Global_1296859]->f_1 & 1024);
	}
	if (func_299(61))
	{
		(*Global_1291106)[&Global_1296859]->f_1 |= 2048;
	}
	else
	{
		(*Global_1291106)[&Global_1296859]->f_1 = ((*Global_1291106)[&Global_1296859]->f_1 - (*Global_1291106)[&Global_1296859]->f_1 & 2048);
	}
	if (func_299(67))
	{
		bVar0 = true;
		if (Global_1291734->f_11.f_306 == 0)
		{
			bVar0 = false;
		}
		if (bVar0 && !_does_thread_exist(Global_1291734->f_11.f_306))
		{
			bVar0 = false;
		}
		if (bVar0 && !is_thread_active(Global_1291734->f_11.f_306, false))
		{
			bVar0 = false;
		}
		if (!bVar0)
		{
			Global_1291734->f_11.f_306 = 0;
			func_300(67);
		}
	}
	if (func_299(67))
	{
		(*Global_1291106)[&Global_1296859]->f_1 |= 8;
	}
	else
	{
		(*Global_1291106)[&Global_1296859]->f_1 = ((*Global_1291106)[&Global_1296859]->f_1 - (*Global_1291106)[&Global_1296859]->f_1 & 8);
	}
	if (func_299(68))
	{
		(*Global_1291106)[&Global_1296859]->f_1 |= 16384;
	}
	else
	{
		(*Global_1291106)[&Global_1296859]->f_1 = ((*Global_1291106)[&Global_1296859]->f_1 - (*Global_1291106)[&Global_1296859]->f_1 & 16384);
	}
	if (Global_17411.f_55.f_61.f_582 & 262144 != 0)
	{
		(*Global_1291106)[&Global_1296859]->f_1 |= 8192;
	}
	else
	{
		(*Global_1291106)[&Global_1296859]->f_1 = ((*Global_1291106)[&Global_1296859]->f_1 - (*Global_1291106)[&Global_1296859]->f_1 & 8192);
	}
	if ((((func_299(9) || func_299(10)) || func_299(11)) || func_299(12)) || func_299(13))
	{
		if (func_299(9))
		{
			(*Global_1291106)[&Global_1296859] = Global_1291106[&Global_1296859] | 1;
		}
		else
		{
			(*Global_1291106)[&Global_1296859] = (Global_1291106[&Global_1296859] - Global_1291106[&Global_1296859] & 1);
		}
		if (func_299(10))
		{
			(*Global_1291106)[&Global_1296859] = Global_1291106[&Global_1296859] | 2;
		}
		else
		{
			(*Global_1291106)[&Global_1296859] = (Global_1291106[&Global_1296859] - Global_1291106[&Global_1296859] & 2);
		}
		if (func_299(11))
		{
			(*Global_1291106)[&Global_1296859] = Global_1291106[&Global_1296859] | 4;
		}
		else
		{
			(*Global_1291106)[&Global_1296859] = (Global_1291106[&Global_1296859] - Global_1291106[&Global_1296859] & 4);
		}
		if (func_299(12))
		{
			(*Global_1291106)[&Global_1296859] = Global_1291106[&Global_1296859] | 8;
		}
		else
		{
			(*Global_1291106)[&Global_1296859] = (Global_1291106[&Global_1296859] - Global_1291106[&Global_1296859] & 8);
		}
		if (func_299(13))
		{
			(*Global_1291106)[&Global_1296859] = Global_1291106[&Global_1296859] | 16;
		}
		else
		{
			(*Global_1291106)[&Global_1296859] = (Global_1291106[&Global_1296859] - Global_1291106[&Global_1296859] & 16);
		}
	}
	else
	{
		if (Global_17411.f_55.f_61.f_582 & 1 != 0)
		{
			(*Global_1291106)[&Global_1296859] = Global_1291106[&Global_1296859] | 1;
		}
		else
		{
			(*Global_1291106)[&Global_1296859] = (Global_1291106[&Global_1296859] - Global_1291106[&Global_1296859] & 1);
		}
		if (Global_17411.f_55.f_61.f_582 & 2 != 0)
		{
			(*Global_1291106)[&Global_1296859] = Global_1291106[&Global_1296859] | 2;
		}
		else
		{
			(*Global_1291106)[&Global_1296859] = (Global_1291106[&Global_1296859] - Global_1291106[&Global_1296859] & 2);
		}
		if (Global_17411.f_55.f_61.f_582 & 4 != 0)
		{
			(*Global_1291106)[&Global_1296859] = Global_1291106[&Global_1296859] | 4;
		}
		else
		{
			(*Global_1291106)[&Global_1296859] = (Global_1291106[&Global_1296859] - Global_1291106[&Global_1296859] & 4);
		}
		if (Global_17411.f_55.f_61.f_582 & 8 != 0)
		{
			(*Global_1291106)[&Global_1296859] = Global_1291106[&Global_1296859] | 8;
		}
		else
		{
			(*Global_1291106)[&Global_1296859] = (Global_1291106[&Global_1296859] - Global_1291106[&Global_1296859] & 8);
		}
		if (Global_17411.f_55.f_61.f_582 & 16 != 0)
		{
			(*Global_1291106)[&Global_1296859] = Global_1291106[&Global_1296859] | 16;
		}
		else
		{
			(*Global_1291106)[&Global_1296859] = (Global_1291106[&Global_1296859] - Global_1291106[&Global_1296859] & 16);
		}
	}
	iVar1 = (*Global_1291106)[&Global_1296859]->f_3;
	if ((((func_299(19) || func_299(20)) || func_299(21)) || func_299(22)) || func_299(23))
	{
		if (func_299(19))
		{
			(*Global_1291106)[&Global_1296859]->f_3 |= 1;
		}
		else
		{
			(*Global_1291106)[&Global_1296859]->f_3 = ((*Global_1291106)[&Global_1296859]->f_3 - (*Global_1291106)[&Global_1296859]->f_3 & 1);
		}
		if (func_299(20))
		{
			(*Global_1291106)[&Global_1296859]->f_3 |= 2;
		}
		else
		{
			(*Global_1291106)[&Global_1296859]->f_3 = ((*Global_1291106)[&Global_1296859]->f_3 - (*Global_1291106)[&Global_1296859]->f_3 & 2);
		}
		if (func_299(21))
		{
			(*Global_1291106)[&Global_1296859]->f_3 |= 4;
		}
		else
		{
			(*Global_1291106)[&Global_1296859]->f_3 = ((*Global_1291106)[&Global_1296859]->f_3 - (*Global_1291106)[&Global_1296859]->f_3 & 4);
		}
		if (func_299(22))
		{
			(*Global_1291106)[&Global_1296859]->f_3 |= 8;
		}
		else
		{
			(*Global_1291106)[&Global_1296859]->f_3 = ((*Global_1291106)[&Global_1296859]->f_3 - (*Global_1291106)[&Global_1296859]->f_3 & 8);
		}
		if (func_299(23))
		{
			(*Global_1291106)[&Global_1296859]->f_3 |= 16;
		}
		else
		{
			(*Global_1291106)[&Global_1296859]->f_3 = ((*Global_1291106)[&Global_1296859]->f_3 - (*Global_1291106)[&Global_1296859]->f_3 & 16);
		}
	}
	else
	{
		if (Global_17411.f_55.f_61.f_582 & 262144 != 0)
		{
			(*Global_1291106)[&Global_1296859]->f_3 |= 1;
		}
		else
		{
			(*Global_1291106)[&Global_1296859]->f_3 = ((*Global_1291106)[&Global_1296859]->f_3 - (*Global_1291106)[&Global_1296859]->f_3 & 1);
		}
		if (Global_17411.f_55.f_61.f_582 & 524288 != 0)
		{
			(*Global_1291106)[&Global_1296859]->f_3 |= 2;
		}
		else
		{
			(*Global_1291106)[&Global_1296859]->f_3 = ((*Global_1291106)[&Global_1296859]->f_3 - (*Global_1291106)[&Global_1296859]->f_3 & 2);
		}
		if (Global_17411.f_55.f_61.f_582 & 1048576 != 0)
		{
			(*Global_1291106)[&Global_1296859]->f_3 |= 4;
		}
		else
		{
			(*Global_1291106)[&Global_1296859]->f_3 = ((*Global_1291106)[&Global_1296859]->f_3 - (*Global_1291106)[&Global_1296859]->f_3 & 4);
		}
		if (Global_17411.f_55.f_61.f_582 & 2097152 != 0)
		{
			(*Global_1291106)[&Global_1296859]->f_3 |= 8;
		}
		else
		{
			(*Global_1291106)[&Global_1296859]->f_3 = ((*Global_1291106)[&Global_1296859]->f_3 - (*Global_1291106)[&Global_1296859]->f_3 & 8);
		}
		if (Global_17411.f_55.f_61.f_582 & 4194304 != 0)
		{
			(*Global_1291106)[&Global_1296859]->f_3 |= 16;
		}
		else
		{
			(*Global_1291106)[&Global_1296859]->f_3 = ((*Global_1291106)[&Global_1296859]->f_3 - (*Global_1291106)[&Global_1296859]->f_3 & 16);
		}
	}
	if (iVar1 != (*Global_1291106)[&Global_1296859]->f_3)
	{
		func_301();
	}
	if ((((func_299(14) || func_299(15)) || func_299(16)) || func_299(17)) || func_299(18))
	{
		if (func_299(14))
		{
			(*Global_1291106)[&Global_1296859] = Global_1291106[&Global_1296859] | 32;
		}
		else
		{
			(*Global_1291106)[&Global_1296859] = (Global_1291106[&Global_1296859] - Global_1291106[&Global_1296859] & 32);
		}
		if (func_299(15))
		{
			(*Global_1291106)[&Global_1296859] = Global_1291106[&Global_1296859] | 64;
		}
		else
		{
			(*Global_1291106)[&Global_1296859] = (Global_1291106[&Global_1296859] - Global_1291106[&Global_1296859] & 64);
		}
		if (func_299(16))
		{
			(*Global_1291106)[&Global_1296859] = Global_1291106[&Global_1296859] | 128;
		}
		else
		{
			(*Global_1291106)[&Global_1296859] = (Global_1291106[&Global_1296859] - Global_1291106[&Global_1296859] & 128);
		}
		if (func_299(17))
		{
			(*Global_1291106)[&Global_1296859] = Global_1291106[&Global_1296859] | 256;
		}
		else
		{
			(*Global_1291106)[&Global_1296859] = (Global_1291106[&Global_1296859] - Global_1291106[&Global_1296859] & 256);
		}
		if (func_299(18))
		{
			(*Global_1291106)[&Global_1296859] = Global_1291106[&Global_1296859] | 512;
		}
		else
		{
			(*Global_1291106)[&Global_1296859] = (Global_1291106[&Global_1296859] - Global_1291106[&Global_1296859] & 512);
		}
	}
	else
	{
		if (Global_17411.f_55.f_61.f_582 & 32 != 0)
		{
			(*Global_1291106)[&Global_1296859] = Global_1291106[&Global_1296859] | 32;
		}
		else
		{
			(*Global_1291106)[&Global_1296859] = (Global_1291106[&Global_1296859] - Global_1291106[&Global_1296859] & 32);
		}
		if (Global_17411.f_55.f_61.f_582 & 64 != 0)
		{
			(*Global_1291106)[&Global_1296859] = Global_1291106[&Global_1296859] | 64;
		}
		else
		{
			(*Global_1291106)[&Global_1296859] = (Global_1291106[&Global_1296859] - Global_1291106[&Global_1296859] & 64);
		}
		if (Global_17411.f_55.f_61.f_582 & 128 != 0)
		{
			(*Global_1291106)[&Global_1296859] = Global_1291106[&Global_1296859] | 128;
		}
		else
		{
			(*Global_1291106)[&Global_1296859] = (Global_1291106[&Global_1296859] - Global_1291106[&Global_1296859] & 128);
		}
		if (Global_17411.f_55.f_61.f_582 & 256 != 0)
		{
			(*Global_1291106)[&Global_1296859] = Global_1291106[&Global_1296859] | 256;
		}
		else
		{
			(*Global_1291106)[&Global_1296859] = (Global_1291106[&Global_1296859] - Global_1291106[&Global_1296859] & 256);
		}
		if (Global_17411.f_55.f_61.f_582 & 512 != 0)
		{
			(*Global_1291106)[&Global_1296859] = Global_1291106[&Global_1296859] | 512;
		}
		else
		{
			(*Global_1291106)[&Global_1296859] = (Global_1291106[&Global_1296859] - Global_1291106[&Global_1296859] & 512);
		}
	}
	Global_1291734->f_919.f_2++;
	Global_1291734->f_919.f_2 = (Global_1291734->f_919.f_2 % 32);
}

void func_158()
{
}

void func_159()
{
	if (!func_58(Global_1572887->f_7, 1073741824))
	{
		return;
	}
	func_56(&(Global_1572887->f_7), 1073741824);
	if (func_302())
	{
		if (func_17())
		{
			func_303();
		}
		else if (func_74() == 3)
		{
			func_304();
		}
		else
		{
			func_305();
		}
	}
	else
	{
		func_306();
	}
}

void func_160()
{
	func_307();
	if (!func_284(9))
	{
		return;
	}
	func_146(0, 6);
}

void func_161()
{
	Global_1296473 = get_network_time();
	switch (Global_1296473->f_1)
	{
		case 0:
			func_308();
			break;
		case 1:
			func_309();
			break;
		case 2:
			func_310();
			break;
		case 3:
			func_311();
			break;
		case 4:
			func_312();
			break;
		case 5:
			func_313();
			break;
		case 6:
			func_314();
			break;
	}
	Global_1296473->f_62 = &Global_1296473;
}

void func_162()
{
	if (Global_1102219->f_26.f_3345)
	{
		if (func_315())
		{
			Global_1102219->f_26.f_3345 = 0;
		}
	}
	if (Global_1102219->f_26.f_3346)
	{
		if (does_entity_exist(Global_1102219->f_26.f_3344))
		{
			set_entity_coords(Global_1102219->f_26.f_3344, Global_1102219->f_26.f_3348, false, false, true, true);
			set_entity_rotation(Global_1102219->f_26.f_3344, Global_1102219->f_26.f_3354, 2, false);
		}
		Global_1102219->f_26.f_3346 = 0;
	}
	if (Global_1102219->f_26.f_3347)
	{
		if (!func_316())
		{
			func_317();
			Global_1102219->f_26.f_3347 = 0;
		}
	}
}

void func_163()
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = Global_1193972[iVar0];
		if ((*Global_1193972)[iVar0]->f_6)
		{
			iVar2 = (*Global_1193972)[iVar0]->f_1;
			iVar3 = (*Global_1193972)[iVar0]->f_2;
			iVar4 = (*Global_1193972)[iVar0]->f_3;
			bVar5 = (*Global_1193972)[iVar0]->f_4;
			if (iVar3 != 0)
			{
				use_particle_fx_asset(func_276(iVar3));
			}
			if ((*Global_1193972)[iVar0]->f_3 >= 0)
			{
				if (!bVar5)
				{
					iVar1 = start_networked_particle_fx_looped_on_entity_bone(func_318(iVar2), Global_34, 0f, 0f, 0f, 0f, 0f, 0f, iVar4, 1065353216, 0, 0, 0);
				}
				else
				{
					iVar1 = start_particle_fx_looped_on_entity_bone(func_318(iVar2), Global_34, 0f, 0f, 0f, 0f, 0f, 0f, iVar4, 1f, false, false, false);
				}
			}
			else if (!bVar5)
			{
				iVar1 = start_networked_particle_fx_looped_on_entity(func_318(iVar2), Global_34, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			}
			else
			{
				iVar1 = start_particle_fx_looped_on_entity(func_318(iVar2), Global_34, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
			}
			(*Global_1193972)[iVar0] = iVar1;
			(*Global_1193972)[iVar0]->f_6 = 0;
		}
		else if ((*Global_1193972)[iVar0]->f_7)
		{
			if (does_particle_fx_looped_exist(iVar1))
			{
				remove_particle_fx(iVar1, false);
			}
			(*Global_1193972)[iVar0]->f_7 = 0;
		}
		iVar0++;
	}
}

void func_164()
{
	func_319();
	switch (func_320())
	{
		case 0:
			if (!func_321())
			{
			}
			else if (!func_322())
			{
			}
			else
			{
				func_323(1);
				Jump @109; //curOff = 64
				if (!func_324())
				{
				}
				else
				{
					func_325();
					func_326();
					func_327();
					func_323(2);
					Jump @109; //curOff = 95
					func_328(2);
				}
			}
			iVar0 = func_329();
			if (func_330(iVar0))
			{
				func_331(13);
			}
			switch (iVar0)
			{
				case 0:
					if (!&Global_1048577)
					{
					}
					else
					{
						func_331(1);
						Jump @906; //curOff = 250
						if (&Global_1296859 < 0 || &Global_1296859 >= 32)
						{
						}
						else if (func_332(&Global_1296859) == 0)
						{
							if (func_18(func_210(0)))
							{
								func_331(2);
							}
						}
						else
						{
							func_331(2);
							Jump @906; //curOff = 315
							if (&Global_1296859 < 0 || &Global_1296859 >= 32)
							{
							}
							else
							{
								func_333(func_332(&Global_1296859));
								if (func_334(func_332(&Global_1296859)))
								{
									func_331(3);
								}
								else
								{
									func_335(1);
									func_331(4);
								}
								Jump @906; //curOff = 388
								if (!func_18(func_210(0)))
								{
								}
								else
								{
									func_331(5);
									Jump @906; //curOff = 412
									if (func_18(func_210(0)))
									{
									}
									else
									{
										func_331(15);
										Jump @906; //curOff = 436
										func_337(func_336());
										func_331(6);
										Jump @906; //curOff = 453
										if (!func_338(1))
										{
										}
										else
										{
											if (func_338(4))
											{
												func_331(8);
											}
											else
											{
												func_331(7);
											}
											Jump @906; //curOff = 490
											func_331(9);
											Jump @906; //curOff = 499
											func_339(4);
											func_331(9);
											Jump @906; //curOff = 513
											if (!func_338(2))
											{
											}
											else
											{
												if (func_338(8))
												{
													func_331(11);
												}
												else
												{
													func_331(10);
												}
												Jump @906; //curOff = 552
												switch (func_340(player_id()))
												{
													case 10:
														func_341(4);
														func_331(12);
														break;
													case 2:
													case 15:
														func_331(11);
														break;
													default:
														break;
												}
												Jump @906; //curOff = 613
												func_342();
												func_331(13);
												Jump @906; //curOff = 626
												func_339(2);
												func_331(6);
												Jump @906; //curOff = 639
												if (!is_screen_faded_in())
												{
												}
												else if (func_343())
												{
												}
												else if (&Global_1048577)
												{
												}
												else if (&Global_1048584)
												{
												}
												else
												{
													Var1 = { func_345(func_344(0)) };
													if (!_0x375f5870a7b8bec1(func_346(Var1)))
													{
														prepare_music_event(func_346(Var1));
													}
													func_331(14);
													Jump @906; //curOff = 734
													iVar9 = func_348(func_347(0));
													switch (iVar9)
													{
														case 9:
															if (!_0x424b17a7dc5c90bc(player_id()))
															{
																if (_unlock_is_unlocked(-319651633))
																{
																	func_349(-1208093116);
																}
																else if (func_213(player_id(), 1) != -1)
																{
																	func_350(2048);
																}
																else
																{
																	func_349(-1221663008);
																}
															}
															Var1 = { func_345(func_344(0)) };
															if (!is_string_null_or_empty(func_346(Var1)))
															{
																trigger_music_event(func_346(Var1));
															}
															break;
													}
													func_331(15);
													Jump @906; //curOff = 884
													func_351();
													func_352();
													func_331(0);
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
			default:
				break;
	}
}

void func_165()
{
	switch (func_353())
	{
		case -1:
			break;
		case 0:
			break;
		case 1:
			func_354();
			break;
		case 2:
			break;
		default:
			break;
	}
}

void func_166()
{
	Global_1108365->f_34.f_772 = (Global_1108365->f_34.f_772 + 1 % 32);
}

void func_167()
{
	if (func_57() != 0)
	{
		return;
	}
	iVar0 = network_player_id_to_int();
	if (iVar0 == 255)
	{
		return;
	}
	if ((func_355() || Global_1048585) // PointerArith)
	{
		func_356();
	}
	iVar1 = Global_1071686->f_19648.f_21;
	(*Global_1056141)[iVar0]->f_425[iVar1] = &Global_39.f_110[iVar1];
	if (func_357(iVar1, iVar0))
	{
		Global_1071686->f_19648.f_21++;
		if (Global_1071686->f_19648.f_21 > 17)
		{
			Global_1071686->f_19648.f_21 = 0;
		}
		func_202(iVar0, Global_1071686->f_19648.f_21);
	}
	func_358();
}

void func_168()
{
	iVar0 = Global_1071686->f_28341.f_1 + 1;
	if (iVar0 > 25)
	{
		iVar0 = 0;
	}
	Global_1071686->f_28341.f_1 = iVar0;
	if (func_359((*Global_1835011)[iVar0]->f_32))
	{
		return;
	}
	func_360();
	if (Global_1139381->f_4912[iVar0]->f_2)
	{
		if (!func_361(iVar0, get_player_index()))
		{
			func_362();
		}
		func_363(iVar0);
	}
	else
	{
		func_364(iVar0);
	}
	if ((*Global_1835011)[iVar0]->f_3 == 0)
	{
		return;
	}
	if (!func_18((*Global_1835011)[iVar0]->f_1))
	{
		return;
	}
	iVar1 = _0x4be6c13a45cca8ec(Global_1296859->f_15);
	if (!network_is_player_active(iVar1))
	{
		return;
	}
	iVar2 = func_365((*Global_1835011)[iVar0]->f_1);
	if (!func_361(iVar0, iVar1))
	{
		if (iVar2 == 1)
		{
			func_366(iVar0, -1, 0, 0, 1, 0, 0);
			return;
		}
		return;
	}
	switch (iVar2)
	{
		case 3:
		case 4:
			return;
		case 1:
		case 2:
			return;
		default:
			break;
	}
	func_367((*Global_1835011)[iVar0]->f_1);
}

void func_169()
{
	if (Global_1297047->f_422)
	{
		return;
	}
	func_368();
	iVar0 = func_369();
	if (iVar0 > 0 && iVar0 < 7)
	{
		if (func_370(4))
		{
			if (!&Global_1048577)
			{
				func_371(11);
			}
		}
		else if (&Global_1048577)
		{
			func_372(4);
		}
	}
	iVar3 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
	if (_network_is_player_index_valid(iVar3) && (*Global_1056141)[player_id()]->f_418.f_6 != iVar3)
	{
		(*Global_1056141)[player_id()]->f_418.f_6 = iVar3;
		if ((iVar0 > 0 && iVar0 <= 3) && func_373())
		{
			func_374(8);
		}
	}
	if (func_373())
	{
		if ((iVar0 > 0 && iVar0 < 11) && func_375())
		{
			func_374(1);
			func_376();
		}
	}
	switch (iVar0)
	{
		case 0:
			if (!func_377(1))
			{
			}
			else
			{
				if (func_373())
				{
					func_371(1);
				}
				else
				{
					func_371(2);
				}
				Jump @1287; //curOff = 337
				if (!func_375())
				{
				}
				else
				{
					func_376();
					func_371(3);
					Jump @1287; //curOff = 360
					func_378();
					if (!func_375())
					{
					}
					else
					{
						func_371(3);
						Jump @1287; //curOff = 383
						if (!func_379(player_id(), 1))
						{
						}
						else
						{
							if (func_373())
							{
								func_371(4);
							}
							else
							{
								func_371(6);
							}
							Jump @1287; //curOff = 422
							if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) > 1)
							{
								if (!_0x48e4e23f1739e197(&(Global_1297047->f_374.f_6), func_381(func_380()), func_383(func_382())))
								{
									func_371(6);
								}
								else
								{
									Jump @526; //curOff = 482
									if (!_0xfc81d7c7a151cfaa(&(Global_1297047->f_374.f_6), func_381(func_380()), func_383(func_382())))
									{
										func_371(6);
									}
									else
									{
										func_384(get_game_timer());
										func_372(1);
										func_371(5);
										Jump @1287; //curOff = 544
										if (func_370(536870912))
										{
											func_384(get_game_timer());
											func_374(4);
											func_371(6);
											func_385();
										}
										else if (func_370(1073741824))
										{
											func_371(6);
											func_385();
										}
										else if (func_370(268435456))
										{
											func_371(6);
											func_385();
										}
										Jump @1287; //curOff = 629
										if (func_377(4))
										{
											func_372(8);
										}
										if (!func_386())
										{
										}
										else
										{
											func_371(8);
											Jump @1287; //curOff = 663
											if (func_370(8))
											{
												func_388(func_387());
												func_391(func_390(773203532, func_389(1), 1084182731, 1, 0, 0));
												func_393(func_392(0));
												func_394(func_392(7));
												func_395();
												_0xa7309ac0dcf6d950(&(Global_1297047->f_374.f_6), &(Global_1297047->f_374.f_16.f_1));
												func_372(32);
												func_384(get_game_timer());
												func_372(2);
												func_371(9);
											}
											else
											{
												func_371(11);
											}
											Jump @1287; //curOff = 790
											if (func_370(1879048192))
											{
												func_371(7);
												func_396();
												func_385();
												_0x2ba1bcc99826cda2();
											}
											Jump @1287; //curOff = 822
											if (!is_screen_faded_in())
											{
											}
											else if (func_343())
											{
											}
											else if (&Global_1048577)
											{
											}
											else if (&Global_1048584)
											{
											}
											else
											{
												func_371(10);
												Jump @1287; //curOff = 872
												if (!func_397())
												{
													if (func_370(32))
													{
														func_398();
														func_399(32);
													}
												}
												iVar1 = (func_387() - func_400());
												if (iVar1 > 0)
												{
													func_401(_create_var_string(2, "FEED_MONEY_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
												}
												iVar1 = (func_390(773203532, func_389(1), 1084182731, 1, 0, 0) - func_402());
												if (iVar1 > 0)
												{
													fVar2 = (IntToFloat(func_403(iVar1)) + (IntToFloat(func_404(iVar1, 1)) * (1f / 100f)));
													func_401(_create_var_string(6, "SHOP_GOLD_PRICE_READ", fVar2), "ITEMTYPE_TEXTURES", -1959861270, 0, 1684603218, 0, 0, 0, 1);
												}
												iVar1 = (func_392(0) - func_405());
												if (iVar1 > 0)
												{
													func_401(_create_var_string(2, "PLAYER_RPG_XP_GAIN", iVar1), "itemtype_textures", 1088654639, 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
												}
												iVar1 = (func_392(7) - func_406());
												if (iVar1 > 0)
												{
													func_401(_create_var_string(2, "NET_TRADE_BOUNTY_HUNTER_XP", iVar1), "itemtype_textures", 1088654639, 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
												}
												if (func_382() != 0)
												{
													func_371(11);
												}
												else
												{
													if (func_407() == 4)
													{
														func_408(1);
													}
													else if (func_407() < 4 && func_370(16))
													{
														func_408(2);
													}
													func_408(4);
													func_371(11);
													Jump @1287; //curOff = 1237
													_0x2ba1bcc99826cda2();
													func_409();
													func_410();
													func_411();
													func_371(12);
													Jump @1287; //curOff = 1262
													if (func_377(1))
													{
													}
													else
													{
														func_371(0);
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

void func_170()
{
	func_412();
}

void func_171()
{
	iVar2 = player_id();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = func_413();
		iVar3 = int_to_playerindex(iVar1);
		if (iVar3 == iVar2)
		{
			func_414((iVar1 + 1 % 32));
		}
		else
		{
			switch (func_415(iVar1))
			{
				case 0:
					func_416();
					break;
				case 1:
					func_417();
					break;
				case 2:
					func_418();
					break;
				case 3:
					func_419();
					break;
				default:
					break;
			}
			func_414((iVar1 + 1 % 32));
		}
		iVar0++;
	}
}

void func_172()
{
	if (func_355())
	{
		return;
	}
	if (Global_1211327[network_player_id_to_int()] != Global_1211392->f_1.f_8 || (*Global_1211327)[network_player_id_to_int()]->f_1 != Global_1211392->f_1.f_9)
	{
		(*Global_1211327)[network_player_id_to_int()] = Global_1211392->f_1.f_8;
		(*Global_1211327)[network_player_id_to_int()]->f_1 = Global_1211392->f_1.f_9;
	}
	if (Global_1211392->f_1200 >= 32)
	{
		Global_1211392->f_1200 = 0;
	}
	func_420(Global_1211392->f_1200);
	Global_1211392->f_1200++;
}

void func_173()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_421(iVar0);
		iVar0++;
	}
}

void func_174()
{
	func_422();
	func_317();
	Global_1102219->f_26.f_3347 = 0;
	Global_1102219->f_26.f_3345 = 0;
}

void func_175()
{
	func_423(Global_1296473->f_66, Global_1296473->f_67);
	Global_1296473->f_66++;
	if (Global_1296473->f_66 >= 1)
	{
		Global_1296473->f_66 = 0;
		Global_1296473->f_67++;
		Global_1296473->f_67 = (Global_1296473->f_67 % 32);
	}
}

void func_176()
{
	Global_1296473->f_68++;
	if (Global_1296473->f_68 >= Global_1296379->f_22)
	{
		Global_1296473->f_68 = 0;
		Global_1296473->f_69++;
		Global_1296473->f_69 = (Global_1296473->f_69 % 32);
	}
	if (Global_1296473->f_68 >= Global_1296379->f_22)
	{
		return;
	}
	switch (Global_1296379->f_3[Global_1296473->f_68]->f_1)
	{
		case 0:
			func_424(Global_1296379->f_3[Global_1296473->f_68]);
			break;
		case 1:
			func_425(Global_1296379->f_3[Global_1296473->f_68]);
			break;
		case 2:
			func_426(Global_1296379->f_3[Global_1296473->f_68], Global_1296473->f_68);
			break;
	}
}

void func_177()
{
	if (has_script_loaded("net_train_manager"))
	{
		set_script_as_no_longer_needed("net_train_manager");
	}
	if (has_script_loaded("net_fme_manager"))
	{
		set_script_as_no_longer_needed("net_fme_manager");
	}
	if (has_script_loaded("net_gangfeud_manager"))
	{
		set_script_as_no_longer_needed("net_gangfeud_manager");
	}
	if (has_script_loaded("net_ugc_global_loader"))
	{
		set_script_as_no_longer_needed("net_ugc_global_loader");
	}
	if (has_script_loaded("generic_show_mp_manager"))
	{
		set_script_as_no_longer_needed("generic_show_mp_manager");
	}
	if (has_script_loaded("net_camp_manager"))
	{
		set_script_as_no_longer_needed("net_camp_manager");
	}
	if (has_script_loaded("net_camp_dog_manager"))
	{
		set_script_as_no_longer_needed("net_camp_dog_manager");
	}
	if (has_script_loaded("net_player_camp_manager"))
	{
		set_script_as_no_longer_needed("net_player_camp_manager");
	}
	if (has_script_loaded("net_ace_thread_manager"))
	{
		set_script_as_no_longer_needed("net_ace_thread_manager");
	}
	if (has_script_loaded("net_fetch_manager"))
	{
		set_script_as_no_longer_needed("net_fetch_manager");
	}
	if (has_script_loaded("net_crew_manager"))
	{
		set_script_as_no_longer_needed("net_crew_manager");
	}
	if (has_script_loaded("net_beat_manager"))
	{
		set_script_as_no_longer_needed("net_beat_manager");
	}
	if (has_script_loaded("net_scan_manager"))
	{
		set_script_as_no_longer_needed("net_scan_manager");
	}
}

void func_178()
{
	func_427(256);
}

void func_179()
{
	_0xde544b7ec0c187cc(&((*Global_1056141)[network_player_id_to_int()]->f_10));
}

bool func_180()
{
	return Global_1051252->f_8;
}

void func_181(var uParam0)
{
	*uParam0 = uVar0;
}

int func_182(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_183()
{
	return Global_1102219->f_3672;
}

void func_184(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_428((*uParam0)[iVar0]);
		iVar0++;
	}
}

int func_185(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_186()
{
	if (func_21())
	{
		*Global_1102166 = { *(*Global_1100469)[func_183()] };
		func_429(Global_1100469);
		network_register_player_broadcast_variables(Global_1100469, 1697, 70);
		func_185(_0x690806bc83bc8ca2((*Global_1100469)[0]), 1697, "g_mpPlayerStatusSyncData");
		*(*Global_1100469)[network_player_id_to_int()] = { *Global_1102166 };
	}
	else
	{
		network_register_player_broadcast_variables(Global_1100469, 1697, 70);
		func_185(_0x690806bc83bc8ca2((*Global_1100469)[0]), 1697, "g_mpPlayerStatusSyncData");
	}
}

void func_187()
{
	if (func_21())
	{
		func_430(Global_1145091);
		network_register_player_broadcast_variables(Global_1145091, 1121, 67);
		func_185(_0x690806bc83bc8ca2((*Global_1145091)[0]), 1121, "g_mpPlayerPersona");
	}
	else
	{
		network_register_player_broadcast_variables(Global_1145091, 1121, 67);
		func_185(_0x690806bc83bc8ca2((*Global_1145091)[0]), 1121, "g_mpPlayerPersona");
	}
	func_154();
	func_153();
}

void func_188()
{
	func_431(Global_1107216);
	network_register_host_broadcast_variables(Global_1107216, 33, 51);
	func_182(_0xba24095ea96dfe17(Global_1107216), 33, "g_mpHostJobData.sGangImpromptuRaceData");
	if (func_21())
	{
		*Global_1109790 = { *(*Global_1109340)[func_183()] };
		func_432(Global_1109340);
		network_register_player_broadcast_variables(Global_1109340, 193, 52);
		func_185(_0x690806bc83bc8ca2((*Global_1109340)[0]), 193, "g_mpPlayerJobData.sGangImpromptuRaceData");
		*(*Global_1109340)[network_player_id_to_int()] = { *Global_1109790 };
	}
	else
	{
		network_register_player_broadcast_variables(Global_1109340, 193, 52);
		func_185(_0x690806bc83bc8ca2((*Global_1109340)[0]), 193, "g_mpPlayerJobData.sGangImpromptuRaceData");
	}
}

void func_189()
{
	func_433(Global_1197355);
	network_register_player_broadcast_variables(Global_1197355, 385, 46);
	func_185(_0x690806bc83bc8ca2((*Global_1197355)[0]), 385, "g_mpSessionManagerPlayerData");
	func_200();
}

void func_190()
{
	func_434(Global_1285012);
	network_register_host_broadcast_variables(Global_1285012, 181, 44);
	func_182(_0xba24095ea96dfe17(Global_1285012), 181, "g_mpShopManagerHostData");
	if (func_21())
	{
		*Global_1285258 = { *(*Global_1285193)[func_183()] };
		func_435(Global_1285193);
		network_register_player_broadcast_variables(Global_1285193, 65, 45);
		func_185(_0x690806bc83bc8ca2((*Global_1285193)[0]), 65, "g_mpShopManagerPlayerData");
		*(*Global_1285193)[network_player_id_to_int()] = { *Global_1285258 };
	}
	else
	{
		network_register_player_broadcast_variables(Global_1285193, 65, 45);
		func_185(_0x690806bc83bc8ca2((*Global_1285193)[0]), 65, "g_mpShopManagerPlayerData");
	}
}

void func_191()
{
	if (func_21())
	{
		Global_1291104 = Global_1291071[Global_1102219->f_3672];
		func_436(Global_1291071);
		network_register_player_broadcast_variables(Global_1291071, 33, 4);
		func_185(_0x690806bc83bc8ca2((*Global_1291071)[0]), 33, "g_mpPlayerNetHudData");
		(*Global_1291071)[network_player_id_to_int()] = &Global_1291104;
	}
	else
	{
		network_register_player_broadcast_variables(Global_1291071, 33, 4);
		func_185(_0x690806bc83bc8ca2((*Global_1291071)[0]), 33, "g_mpPlayerNetHudData");
	}
}

void func_192()
{
	func_437(&(Global_1107216->f_33));
	network_register_host_broadcast_variables(&(Global_1107216->f_33), 717, 73);
	func_182(_0xba24095ea96dfe17(&(Global_1107216->f_33)), 717, "g_mpHostJobData.sGunForHireMissionData");
	func_438(&(Global_1107216->f_750));
	network_register_host_broadcast_variables(&(Global_1107216->f_750), 2, 74);
	func_182(_0xba24095ea96dfe17(&(Global_1107216->f_750)), 2, "g_mpHostJobData.sGunForHireLocationGiverData");
	if (func_21())
	{
		func_439((*Global_1128574)[func_183()]);
		func_440(Global_1128574);
		network_register_player_broadcast_variables(Global_1128574, 1793, 75);
		func_185(_0x690806bc83bc8ca2((*Global_1128574)[0]), 1793, "g_mpGunForHireGangPlayerData.sGunForHireGangData");
		func_441((*Global_1130367)[func_183()]);
		func_442(Global_1130367);
		network_register_player_broadcast_variables(Global_1130367, 225, 76);
		func_185(_0x690806bc83bc8ca2((*Global_1130367)[0]), 225, "g_mpGunForHireCooldownPlayerData.sGunForHireCooldownData");
	}
	else
	{
		network_register_player_broadcast_variables(Global_1128574, 1793, 75);
		func_185(_0x690806bc83bc8ca2((*Global_1128574)[0]), 1793, "g_mpGunForHireGangPlayerData.sGunForHireGangData");
		network_register_player_broadcast_variables(Global_1130367, 225, 76);
		func_185(_0x690806bc83bc8ca2((*Global_1130367)[0]), 225, "g_mpGunForHireCooldownPlayerData.sGunForHireCooldownData");
	}
	func_443(1);
	func_444();
	func_445();
	func_446(4);
}

void func_193()
{
	func_447(Global_1291105);
	network_register_host_broadcast_variables(Global_1291105, 1, 79);
	func_182(_0xba24095ea96dfe17(Global_1291105), 1, "g_mpStableHostData");
	if (func_21())
	{
		*Global_1291715 = { *(*Global_1291106)[func_183()] };
		func_448((*Global_1291106)[network_player_id_to_int()]);
		network_register_player_broadcast_variables(Global_1291106, 609, 80);
		func_185(_0x690806bc83bc8ca2((*Global_1291106)[0]), 609, "g_mpStablePlayerData");
		*(*Global_1291106)[network_player_id_to_int()] = { *Global_1291715 };
	}
	else
	{
		func_449(Global_1291734);
		func_450(Global_1291106);
		network_register_player_broadcast_variables(Global_1291106, 609, 80);
		func_185(_0x690806bc83bc8ca2((*Global_1291106)[0]), 609, "g_mpStablePlayerData");
	}
}

void func_194()
{
	func_451(&(Global_1107216->f_752));
	network_register_host_broadcast_variables(&(Global_1107216->f_752), 397, 30);
	func_182(_0xba24095ea96dfe17(&(Global_1107216->f_752)), 397, "g_mpHostJobData.sPosseVersusData");
	if (func_21())
	{
		Global_1109790->f_6 = { *Global_1109340->f_193[func_183()] };
		func_452(&(Global_1109340->f_193));
		network_register_player_broadcast_variables(&(Global_1109340->f_193), 257, 31);
		func_185(_0x690806bc83bc8ca2(Global_1109340->f_193[0]), 257, "g_mpPlayerJobData.sPosseVersusData");
		*Global_1109340->f_193[network_player_id_to_int()] = { Global_1109790->f_6 };
	}
	else
	{
		network_register_player_broadcast_variables(&(Global_1109340->f_193), 257, 31);
		func_185(_0x690806bc83bc8ca2(Global_1109340->f_193[0]), 257, "g_mpPlayerJobData.sPosseVersusData");
	}
}

void func_195()
{
	func_453(Global_1296379);
	network_register_host_broadcast_variables(Global_1296379, 27, 68);
	func_182(_0xba24095ea96dfe17(Global_1296379), 27, "g_mpStoryCoopTransitionHostData");
	if (func_21())
	{
		*Global_1296471 = { *(*Global_1296406)[func_183()] };
		func_454((*Global_1296406)[network_player_id_to_int()]);
		network_register_player_broadcast_variables(Global_1296406, 65, 69);
		func_185(_0x690806bc83bc8ca2((*Global_1296406)[0]), 65, "g_mpStoryCoopTransitionPlayerData");
		*(*Global_1296406)[network_player_id_to_int()] = { *Global_1296471 };
	}
	else
	{
		func_455(Global_1296473);
		func_456(Global_1296406);
		network_register_player_broadcast_variables(Global_1296406, 65, 69);
		func_185(_0x690806bc83bc8ca2((*Global_1296406)[0]), 65, "g_mpStoryCoopTransitionPlayerData");
	}
}

void func_196()
{
	func_457();
	network_register_player_broadcast_variables(Global_1211327, 65, 81);
	func_185(_0xba24095ea96dfe17((*Global_1211327)[0]), 65, "g_mpAbandonedLootPlayerData");
}

void func_197()
{
	if (func_21())
	{
		*Global_1290881 = { *(*Global_1288736)[func_183()] };
		func_458(Global_1288736);
		network_register_player_broadcast_variables(Global_1288736, 2145, 11);
		func_185(_0x690806bc83bc8ca2((*Global_1288736)[0]), 2145, "g_mpParleyPlayerData");
		*(*Global_1288736)[network_player_id_to_int()] = { *Global_1290881 };
	}
	else
	{
		network_register_player_broadcast_variables(Global_1288736, 2145, 11);
		func_185(_0x690806bc83bc8ca2((*Global_1288736)[0]), 2145, "g_mpParleyPlayerData");
	}
}

void func_198()
{
	if (func_21())
	{
		func_459((*Global_1212600)[func_183()]);
		func_460(Global_1212600);
		network_register_player_broadcast_variables(Global_1212600, 289, 23);
		func_185(_0x690806bc83bc8ca2((*Global_1212600)[0]), 289, "g_mpCollectiblePlayerData");
	}
	else
	{
		network_register_player_broadcast_variables(Global_1212600, 289, 23);
		func_185(_0x690806bc83bc8ca2((*Global_1212600)[0]), 289, "g_mpCollectiblePlayerData");
	}
}

void func_199()
{
	Global_1071686->f_3 = 1;
	Global_1051252->f_41 = (get_game_timer() - Global_1051252->f_40);
}

void func_200()
{
	(*Global_1197355)[network_player_id_to_int()] = 0;
	(*Global_1197355)[network_player_id_to_int()]->f_2 = 0;
	Global_1197740->f_1 = 0;
	Global_1197740->f_1.f_1 = 1;
}

void func_201(int iParam0, int iParam1, int iParam2)
{
	iVar2 = func_461(iParam0);
	if (iVar2 != -1)
	{
		iVar0 = iVar2;
		while (iVar0 <= 31)
		{
			iVar1 = (iParam0 * 31 + iVar0);
			if (iVar1 >= 545)
			{
			}
			else
			{
				if (is_bit_set(iParam1, iVar0) && !func_462(iVar1))
				{
					set_bit((*Global_1056141)[iParam2]->f_425[iParam0], iVar0);
				}
				iVar0++;
			}
		}
		Global_1071686->f_19648[iParam0] = (Global_1071686->f_19648[iParam0] || (*Global_1056141)[iParam2]->f_425[iParam0]) // PointerArith;
	}
}

void func_202(int iParam0, int iParam1)
{
	Global_1071686->f_19648.f_19 = 0;
	Global_1071686->f_19648.f_20 = &(*Global_1056141)[iParam0]->f_425.f_19[iParam1];
	Global_1071686->f_19648.f_22 = 0;
	Global_1071686->f_19648.f_23 = 0;
}

void func_203()
{
	iVar1 = get_player_team(player_id());
	switch (iVar1)
	{
		case -1:
			iVar0 = func_463(network_player_id_to_int());
			break;
		case 0:
			iVar0 = 1965820175;
			break;
		case 1:
			iVar0 = -1164995627;
			break;
		case 2:
			iVar0 = -1406404850;
			break;
		case 3:
			iVar0 = 892340488;
			break;
		case 4:
			iVar0 = 570352286;
			break;
		case 5:
			iVar0 = 1809249877;
			break;
		case 6:
			iVar0 = 1185197041;
			break;
		case 7:
			iVar0 = -1901478918;
			break;
		case 8:
			iVar0 = 2097877918;
			break;
		default:
			return;
	}
	set_ped_relationship_group_hash(player_ped_id(), iVar0);
	if (!is_entity_dead(player_ped_id()) && is_ped_on_mount(player_ped_id()))
	{
		set_ped_relationship_group_hash(get_mount(player_ped_id()), func_464());
	}
}

void func_204(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_465(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_466(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_467(iVar0);
	*uParam0 = 0;
}

void func_205(int iParam0)
{
	Global_1296473->f_1 = iParam0;
}

int func_206(int iParam0)
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

bool func_207(int iParam0)
{
	return func_468(&(Global_1572887->f_405.f_1), iParam0, 3);
}

bool func_208(int iParam0)
{
	switch (*iParam0)
	{
		case 12:
			bVar0 = !func_469(255);
			iVar1 = 13;
			break;
		case 13:
			bVar0 = !func_128();
			iVar1 = 14;
			break;
		case 14:
			bVar0 = !func_470();
			iVar1 = 12;
			break;
	}
	bVar2 = &Global_1051252->f_45.f_2[*iParam0] != bVar0;
	Global_1051252->f_45.f_2[*iParam0] = bVar0;
	*iParam0 = iVar1;
	return bVar2;
}

bool func_209(int iParam0)
{
	switch (*iParam0)
	{
		case 0:
			bVar0 = (!Global_1197740->f_1 & 3 != 0 && func_471());
			iVar1 = 4;
			break;
		case 4:
			bVar0 = (network_is_in_mp_cutscene() || func_220());
			iVar1 = 6;
			break;
		case 6:
			bVar0 = (!Global_1197740->f_1 & 64 != 0 && func_472(network_player_id_to_int()));
			iVar1 = 7;
			break;
		case 7:
			bVar0 = func_473(255);
			iVar1 = 8;
			break;
		case 8:
			bVar0 = func_474() > 0;
			iVar1 = 9;
			break;
		case 9:
			bVar0 = func_475() != true;
			iVar1 = 2;
			break;
		case 2:
			bVar0 = (!Global_1197740->f_1 & 3 != 0 && func_476());
			iVar1 = 1;
			break;
		case 1:
			bVar0 = ((!Global_1197740->f_1 & 16 != 0 && (func_477() || func_478())) || (!Global_1197740->f_1 & 512 != 0 && func_212(16)));
			iVar1 = 10;
			break;
		case 10:
			bVar0 = func_479();
			iVar1 = 11;
			break;
		case 11:
			bVar0 = func_480();
			iVar1 = 0;
			break;
	}
	bVar2 = &Global_1051252->f_45.f_2[*iParam0] != bVar0;
	Global_1051252->f_45.f_2[*iParam0] = bVar0;
	*iParam0 = iVar1;
	return bVar2;
}

struct<2> func_210(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

var func_211(struct<2> Param0)
{
	StringCopy(&cVar0, "(", 128);
	StringConCat(&cVar0, func_481(Param0), 128);
	StringConCat(&cVar0, ",", 128);
	StringIntConCat(&cVar0, Param0.f_1, 128);
	StringConCat(&cVar0, ")", 128);
	if (func_18(Param0))
	{
		StringConCat(&cVar0, "|", 128);
		StringCopy(&cVar16, "", 128);
		IntToString(&cVar16, func_19(Param0), 128);
		StringConCat(&cVar0, &cVar16, 128);
	}
	return _0xd8402b858f4ddd88(&cVar0, get_length_of_literal_string(&cVar0));
}

bool func_212(int iParam0)
{
	return func_240(Global_1298378->f_156, iParam0);
}

int func_213(int iParam0, bool bParam1)
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

var func_214(int iParam0)
{
	return _0x2b6846401d68e563(to_float(iParam0), 0);
}

int func_215()
{
	return Global_1051252->f_80.f_102;
}

var func_216(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_217(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_10;
	}
	return (*Global_1100469)[iParam0]->f_10;
}

char* func_218(int iParam0)
{
	if (!func_249(iParam0))
	{
		return "Wilderness";
	}
	switch (iParam0)
	{
		case 0:
			return "CrawdadWillies";
		case 1:
			return "MacombsEnd";
		case 2:
			return "MerkinsWaller";
		case 3:
			return "Lagras";
		case 4:
			return "Lakay";
		case 5:
			return "SaintDenis";
		case 6:
			return "OrangePlantation";
		case 7:
			return "SerialKiller";
		case 8:
			return "Serendipity";
		case 9:
			return "ShadyBelle";
		case 10:
			return "SiltwaterStrand";
		case 11:
			return "AppleseedTimberCo";
		case 12:
			return "BerylsDream";
		case 13:
			return "BigValleyTrapper";
		case 14:
			return "DakotaRiverTrapper";
		case 15:
			return "FortRiggsHoldingCamp";
		case 16:
			return "HangingDogRanch";
		case 17:
			return "LoneMuleStead";
		case 18:
			return "MissingHusband";
		case 19:
			return "MontoRest";
		case 20:
			return "OwanjilaDam";
		case 21:
			return "PaintedSky";
		case 22:
			return "PronghornRanch";
		case 23:
			return "RiggsStation";
		case 24:
			return "BigvalleyShack";
		case 25:
			return "ShepherdsRise";
		case 26:
			return "Strawberry";
		case 27:
			return "ValleyView";
		case 28:
			return "WallaceStation";
		case 30:
			return "WatsonsCabin";
		case 29:
			return "BigValleyOldManJones";
		case 31:
			return "Canebreak Manor";
		case 32:
			return "Copperhead";
		case 33:
			return "SisikaPenitentiary";
		case 34:
			return "BluewaterTravelSales";
		case 35:
			return "BacchuBridge";
		case 36:
			return "DinoLady";
		case 37:
			return "OldFortWallace";
		case 38:
			return "SixPointCabin";
		case 39:
			return "BeechersHope";
		case 40:
			return "Blackwater";
		case 41:
			return "QuakersCove";
		case 42:
			return "AdlerRanch";
		case 43:
			return "DeadRival";
		case 53:
			return "CalumetRavine";
		case 54:
			return "CivilWarBride";
		case 44:
			return "ChezPorter";
		case 55:
			return "Cohutta";
		case 45:
			return "Colter";
		case 56:
			return "CotorraSprings";
		case 46:
			return "FrozenExplorer";
		case 57:
			return "GunFight";
		case 47:
			return "MillesaniClaim";
		case 49:
			return "MountHagenPeak";
		case 48:
			return "MountainMan";
		case 50:
			return "StarvingChildren";
		case 51:
			return "TempestRim";
		case 58:
			return "TheLoft";
		case 59:
			return "Veteran";
		case 60:
			return "Wapiti";
		case 52:
			return "WinterMiningTown";
		case 61:
			return "GrizzliesTravelSales";
		case 62:
			return "AguasDulces";
		case 63:
			return "GuarmaCamp";
		case 64:
			return "CincoTorres";
		case 65:
			return "LaCapilla";
		case 66:
			return "Manicato";
		case 67:
			return "Abandoned Mill";
		case 69:
			return "CarmodyDell";
		case 70:
			return "CornwallKerosene";
		case 71:
			return "CropFarm";
		case 72:
			return "CumberlandFalls";
		case 73:
			return "DownsRanch";
		case 74:
			return "EmeraldRanch";
		case 75:
			return "GrangersHoggery";
		case 76:
			return "HorseshoeOverlook";
		case 77:
			return "LarnedSod";
		case 78:
			return "LoonyCult";
		case 79:
			return "LuckysCabin";
		case 80:
			return "SwansonsStation";
		case 81:
			return "Valentine";
		case 82:
			return "AberdeenPigFarm";
		case 83:
			return "Annesburg";
		case 68:
			return "BeechersC";
		case 84:
			return "BeaverHollow";
		case 85:
			return "BlackBalsamRise";
		case 86:
			return "BrandywineDrop";
		case 87:
			return "ButcherCreek";
		case 88:
			return "Doverhill";
		case 89:
			return "HappyFamily";
		case 90:
			return "Isolationist";
		case 91:
			return "MacLeansHouse";
		case 92:
			return "MossyFlats";
		case 93:
			return "RoanokeValley";
		case 94:
			return "RockySeven";
		case 95:
			return "RoanokeTrapper";
		case 97:
			return "VanHornMansion";
		case 98:
			return "VanHornTradingPost";
		case 96:
			return "RoanokeOldManJones";
		case 99:
			return "BraithewaiteManor";
		case 100:
			return "BulgerGlade";
		case 101:
			return "CaligaHall";
		case 102:
			return "CatfishJacksons";
		case 103:
			return "ClemensCove";
		case 104:
			return "ClemensPoint";
		case 105:
			return "CompsonsStead";
		case 106:
			return "Dairy Farm";
		case 107:
			return "ScarletMeadowsHorseShop";
		case 108:
			return "LonniesShack";
		case 109:
			return "LoveTriangle";
		case 110:
			return "Radleys Pasture";
		case 111:
			return "Rhodes";
		case 112:
			return "SlavePen";
		case 113:
			return "AuroraBasinShack";
		case 114:
			return "DeadSettler";
		case 115:
			return "Cochinay";
		case 116:
			return "ManzanitaPost";
		case 117:
			return "PacificUnionRailroad";
		case 118:
			return "TannersReach";
		case 119:
			return "TallTreesTrapper";
		case 135:
			return "MacFarlanesRanch";
		case 136:
			return "ThievesLanding";
		case 137:
			return "HenniganTravelSales";
		case 138:
			return "HenniganHarriet";
		case 127:
			return "Armadillo";
		case 128:
			return "CootsChapel";
		case 129:
			return "DonJulioHouse";
		case 131:
			return "RidgewoodFarm";
		case 130:
			return "RileysCharge";
		case 132:
			return "TwinRocks";
		case 133:
			return "ChollaTravelSales";
		case 134:
			return "ChollaTrapper";
		case 120:
			return "Gaptooth Breach";
		case 121:
			return "Tumbleweed";
		case 122:
			return "Rathskeller Fork";
		case 123:
			return "BenedictPoint";
		case 124:
			return "FortMercer";
		case 125:
			return "Plainview";
		case 126:
			return "RioBravoTravelSales";
		case 139:
			return "CentralUnionRRCamp";
		default:
			break;
	}
	return "Wilderness";
}

char* func_219()
{
	if (func_482())
	{
		return _0xd8402b858f4ddd88(&Global_26540, get_length_of_literal_string(&Global_26540));
	}
	return "";
}

bool func_220()
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!func_483(iVar0))
		{
		}
		else if (!func_484(iVar0))
		{
		}
		else if (func_485(Global_1293165->f_20[iVar0]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

var func_221()
{
	StringCopy(&cVar0, "[", 128);
	iVar17 = 0;
	iVar16 = 0;
	while (iVar16 < 9)
	{
		if (!func_483(iVar16))
		{
		}
		else if (!func_484(iVar16))
		{
		}
		else if (!func_485(Global_1293165->f_20[iVar16]))
		{
		}
		else
		{
			if (iVar17 > 0)
			{
				StringConCat(&cVar0, ",", 128);
			}
			StringConCat(&cVar0, "'", 128);
			StringIntConCat(&cVar0, Global_1293165->f_20[iVar16]->f_1, 128);
			StringConCat(&cVar0, "'", 128);
			iVar17++;
		}
		iVar16++;
	}
	if (iVar17 <= 0)
	{
		StringCopy(&cVar0, "[NONE]", 128);
	}
	else
	{
		StringConCat(&cVar0, "]", 128);
	}
	return func_486(&cVar0);
}

bool func_222(int iParam0, int iParam1)
{
	return (network_is_player_active(int_to_playerindex(iParam1)) && func_487(iParam0, 4, iParam1));
}

char* func_223(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Primary";
		case 1:
			return "Secondary";
		case 2:
			return "Trolley";
		default:
			break;
	}
	return "undefined";
}

var func_224()
{
	return _0xd8402b858f4ddd88(&((*Global_263042)[&Global_1296859]->f_1.f_27), get_length_of_literal_string(&((*Global_263042)[&Global_1296859]->f_1.f_27)));
}

struct<35> func_225(int iParam0)
{
	Var0.f_8 = -1;
	Var0.f_8.f_1 = -1;
	Var0.f_16.f_12 = -1;
	Var0.f_16.f_12.f_1 = -1;
	Var0.f_16.f_14 = 255;
	Var0.f_16.f_15 = 255;
	if (Global_1071686->f_16 > 0)
	{
		return *Global_1071686->f_16.f_5[iParam0];
	}
	return Var0;
}

bool func_226(var uParam0)
{
	if (!*uParam0)
	{
		return false;
	}
	switch (uParam0->f_16.f_4)
	{
		case 68:
		case 72:
		case 74:
		case 75:
			return true;
		default:
			break;
	}
	return false;
}

var func_227(int iParam0)
{
	iVar0 = func_488(iParam0);
	if (!func_489(iVar0))
	{
		return "NoSlot";
	}
	Var1 = -1;
	Var1.f_1 = -1;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		Var1 = { func_490(iVar3) };
		if (func_18(Var1))
		{
		}
		else
		{
			iVar3++;
		}
	}
	return func_211(Var1);
}

Vector3 func_228()
{
	if (Global_1248240->f_9296 == -1)
	{
		return 0f, 0f, 0f;
	}
	return (*Global_1248240)[Global_1248240->f_9296]->f_600;
}

var func_229()
{
	StringCopy(&cVar0, "DynamicNearby", 64);
	return func_491(cVar0);
}

void func_230(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_231()
{
	if (Global_1296859->f_21 < 79)
	{
		return 603685163;
	}
	iVar0 = ((Global_1296859->f_21 % 79) * 100 / 79);
	if (func_233())
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

void func_232(int iParam0, bool bParam1)
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

bool func_233()
{
	if (!func_78())
	{
		return false;
	}
	return func_240(Global_1901947->f_44.f_5, 32);
}

bool func_234()
{
	if (!func_78())
	{
		return false;
	}
	return func_240(Global_1901947->f_44.f_5, 2);
}

bool func_235()
{
	if (!func_78())
	{
		return false;
	}
	return func_240(Global_1901947->f_44.f_5, 64);
}

bool func_236(int iParam0)
{
	if (is_screen_faded_out())
	{
		return false;
	}
	return _is_position_inside_imap_streaming_extents(iParam0, Global_35);
}

void func_237(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		func_492(iParam0);
	}
}

void func_238(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		func_493(iParam0);
	}
}

struct<19> func_239(bool bParam0)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var19 = { func_494(-1838434463, func_389(1), 1084182731, 1) };
	if (!_0xb881ca836cc4b6d4(&Var19))
	{
		return Var0;
	}
	Var23.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_495(1), &Var19, &Var23, 17, 1))
	{
		return Var0;
	}
	Var0 = { func_496(&Var23, bParam0) };
	Var0.f_17 = Var23.f_15;
	Var0.f_18 = Var23.f_16;
	Var0.f_16 = Var23.f_14;
	return Var0;
}

bool func_240(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

struct<7> func_241(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

bool func_242(vector3 vParam0, int iParam3)
{
	if (vParam0.x < 4)
	{
		vParam0.x = 4;
	}
	if (!func_497(0, 1))
	{
		return false;
	}
	(*Global_1134390)[network_player_id_to_int()]->f_33 = { vParam0 };
	(*Global_1134390)[network_player_id_to_int()]->f_33.f_3 = get_random_int_in_range(0, 65536);
	func_498();
	if (iParam3 == 1)
	{
		func_243(2);
	}
	else
	{
		Global_1137047->f_330.f_6 = 1;
		func_499(2);
	}
	if (!func_500(network_player_id_to_int()))
	{
		func_499(8);
		func_501();
	}
	if (!func_502(4) && (func_502(8) || func_502(16)))
	{
		func_243(4);
	}
	else
	{
		func_499(4);
	}
	if (func_240(Global_1137047->f_8, 1))
	{
		func_243(1);
	}
	else
	{
		func_499(1);
	}
	func_503(6);
	return true;
}

void func_243(int iParam0)
{
	func_95(&((*Global_1134390)[network_player_id_to_int()]->f_33.f_4), iParam0);
}

void func_244(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_245(int iParam0)
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

int func_246(var uParam0)
{
	Var0 = Global_1071686->f_23887.f_366.f_4085;
	Var0.f_2 = 1593794963;
	Var0.f_3 = uParam0;
	return _datafile_get_num_nodes(&Var0);
}

bool func_247(var uParam0, int iParam1, var uParam2, float fParam3)
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

int func_248()
{
	return Global_1893587->f_2;
}

bool func_249(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_250(vector3 vParam0, bool bParam3)
{
	iVar0 = func_504(vParam0);
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

int func_251(int iParam0)
{
	if (func_505(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_252(int iParam0)
{
	if (func_506(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_253(int iParam0, var uParam1)
{
	if (!func_249(iParam0))
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

void func_254(struct<29> Param0, var uParam29, int iParam30)
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

void func_255(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_256(bool bParam0)
{
	if (!bParam0)
	{
		func_251(5);
	}
	else
	{
		if (func_149(255) == 4)
		{
			return;
		}
		func_252(5);
	}
}

void func_257(bool bParam0, bool bParam1)
{
	if (func_149(255) == 4)
	{
		return;
	}
	if (func_97(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_251(0);
	}
	else
	{
		if (bParam1)
		{
			func_507(0, 0, 0, 1);
		}
		func_252(0);
		func_120(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_121(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_254(Global_1102219->f_3849, 36);
	func_255(Global_1102219->f_3888, 36);
}

void func_258(bool bParam0)
{
	if (!bParam0)
	{
		func_251(6);
	}
	else
	{
		if (func_149(255) == 4)
		{
			return;
		}
		func_252(6);
	}
}

void func_259(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_149(255) == 4)
	{
		return;
	}
	if (func_97(vParam0))
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
		func_507(0, 0, 0, 1);
	}
	func_252(0);
	func_252(3);
	Global_1102219->f_3919 = iParam11;
	Global_1102219->f_3920 = fParam12;
	Global_1102219->f_3921 = iParam13;
	func_120(&(Global_1102219->f_3849));
	Global_1102219->f_3849 = iParam3;
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
	func_121(&(Global_1102219->f_3888));
	Global_1102219->f_3888.f_6 = { vParam4 };
	Global_1102219->f_3888 = iParam7;
	Global_1102219->f_3888.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_254(Global_1102219->f_3849, 36);
	func_255(Global_1102219->f_3888, 36);
}

Vector3 func_260()
{
	return 0f, 0f, 0f;
}

int func_261(vector3 vParam0)
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

struct<10> func_262(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	func_509(func_508(iParam0), &Var0);
	return Var0;
}

int func_263()
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
	iVar5 = func_510(iVar0);
	if (iVar5 < 0 || iVar5 >= 12)
	{
		return -1;
	}
	return (135 + iVar5);
}

bool func_264(int iParam0, var uParam1, var uParam2)
{
	Var0 = Global_1071686->f_28448[48]->f_3;
	Var0.f_2 = -738708473;
	Var0.f_3 = func_511(iParam0);
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

bool func_265()
{
	iVar0 = func_512(-2104202019, 120471651);
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

void func_266(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_267(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_513(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_514(iParam0))
	{
		return false;
	}
	if (func_515(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_516(iParam0, 1)) || func_517(32768))
	{
		if (!func_516(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_518())
	{
		return false;
	}
	return true;
}

void func_268(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

bool func_269(vector3 vParam0, float fParam3)
{
	if (func_97(vParam0))
	{
		return false;
	}
	if (func_149(255) == 4)
	{
		return false;
	}
	if (func_519(4, 255))
	{
	}
	func_252(4);
	func_520(&(Global_1102219->f_3879));
	Global_1102219->f_3879.f_6 = { vParam0 };
	Global_1102219->f_3879 = fParam3;
	Global_1102219->f_3879.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_521(Global_1102219->f_3879, 36);
	return true;
}

void func_270(int iParam0)
{
	Global_1893587 = (&Global_1893587 - (Global_1893587 && iParam0));
}

void func_271()
{
	func_522();
	func_523();
	func_524();
	func_525();
	func_526();
}

void func_272()
{
	if (_0x5ac0944c156e5f44("dewclm_nav_camp_00"))
	{
		_0x527b97c203bb8606("dewclm_nav_camp_00");
	}
	if (_0x5ac0944c156e5f44("shb_nav_camp_00"))
	{
		_0x527b97c203bb8606("shb_nav_camp_00");
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar9 = 0;
		while (iVar9 <= 2)
		{
			if (func_527(iVar0, iVar9))
			{
				Var1 = { func_528(iVar0, iVar9) };
				if (_0x5ac0944c156e5f44(&Var1))
				{
					_0x527b97c203bb8606(&Var1);
				}
			}
			iVar9++;
		}
		iVar0++;
	}
}

void func_273()
{
	iVar0[0] = 67198036;
	iVar0[1] = -1656481590;
	iVar0[2] = -1670262487;
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (_is_imap_active(&(iVar0[iVar4])))
		{
			func_493(&(iVar0[iVar4]));
		}
		iVar4++;
	}
}

void func_274()
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_530(iVar0, func_529(iVar0), 0, 0);
		iVar0++;
	}
}

void func_275()
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = Global_1193972[iVar0];
		if (does_particle_fx_looped_exist(iVar1))
		{
			remove_particle_fx(iVar1, false);
		}
		iVar0++;
	}
}

char* func_276(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "scr_deadeye";
		default:
			break;
	}
	return "";
}

var func_277()
{
	get_posix_time(&Var1, &(Var1.f_1), &(Var1.f_2), &(Var1.f_3), &(Var1.f_4), &(Var1.f_5));
	func_531(&uVar0, Var1.f_5);
	func_532(&uVar0, Var1.f_4);
	func_533(&uVar0, Var1.f_3);
	func_534(&uVar0, Var1.f_2);
	func_535(&uVar0, (Var1.f_1 - 1));
	func_536(&uVar0, (Var1 - 100));
	return uVar0;
}

int func_278()
{
	get_posix_time(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	iVar7 = Var0.f_2;
	iVar8 = Var0.f_1;
	iVar9 = Var0;
	if (iVar8 <= 2)
	{
		iVar8 += 12;
		iVar9 = (iVar9 - 1);
	}
	iVar10 = (iVar9 % 100);
	iVar11 = (iVar9 / 100);
	iVar12 = (((((iVar7 + ((13 * iVar8 + 1) / 5)) + iVar10) + (iVar10 / 4)) + (iVar11 / 4)) + (5 * iVar11));
	iVar13 = (iVar12 + 6 % 7);
	return iVar13;
}

void func_279(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_537(*uParam0);
	iVar1 = func_538(*uParam0);
	iVar2 = func_539(*uParam0);
	iVar3 = func_540(*uParam0);
	iVar4 = func_541(*uParam0);
	iVar5 = func_542(*uParam0);
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
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_543(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_544(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

struct<10> func_280(int iParam0, int iParam1, var uParam2)
{
	func_545(iParam0, iParam1, &uVar10, &uVar11, &uVar12);
	func_546(uParam2, iParam1, 0, &uVar10, &uVar11, &uVar12);
	func_546(uParam2, iParam1, 1, &uVar10, &uVar11, &uVar12);
	func_546(uParam2, iParam1, 2, &uVar10, &uVar11, &uVar12);
	func_546(uParam2, iParam1, 3, &uVar10, &uVar11, &uVar12);
	func_546(uParam2, iParam1, 4, &uVar10, &uVar11, &uVar12);
	func_546(uParam2, iParam1, 5, &uVar10, &uVar11, &uVar12);
	func_546(uParam2, iParam1, 6, &uVar10, &uVar11, &uVar12);
	func_546(uParam2, iParam1, 7, &uVar10, &uVar11, &uVar12);
	func_546(uParam2, iParam1, 8, &uVar10, &uVar11, &uVar12);
	func_546(uParam2, iParam1, 9, &uVar10, &uVar11, &uVar12);
	Var0 = func_547((*uParam2)[iParam1][0]);
	Var0.f_1 = func_548((*uParam2)[iParam1][1]);
	Var0.f_8 = func_549((*uParam2)[iParam1][2]);
	Var0.f_3 = func_550((*uParam2)[iParam1][3]);
	Var0.f_6 = func_551((*uParam2)[iParam1][4]);
	Var0.f_7 = func_552((*uParam2)[iParam1][5]);
	Var0.f_4 = func_553((*uParam2)[iParam1][6]);
	Var0.f_5 = func_554((*uParam2)[iParam1][7]);
	Var0.f_2 = func_555((*uParam2)[iParam1][8]);
	Var0.f_9 = func_556((*uParam2)[iParam1][9]);
	return Var0;
}

void func_281(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_537(*iParam0);
	iVar1 = func_538(*iParam0);
	iVar2 = func_539(*iParam0);
	iVar3 = func_540(*iParam0);
	iVar4 = func_541(*iParam0);
	iVar5 = func_542(*iParam0);
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
	iVar6 = func_543(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_543(iVar1, iVar0);
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
	func_544(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_282(int iParam0, bool bParam1)
{
	return func_557(iParam0, bParam1) >= 4;
}

bool func_283(int iParam0, bool bParam1)
{
	return (func_557(iParam0, bParam1) >= 2 && func_557(iParam0, bParam1) < 4);
}

bool func_284(int iParam0)
{
	if (Global_1051436->f_1)
	{
		return true;
	}
	if (Global_1901947->f_44.f_1 == 0)
	{
		return false;
	}
	if (Global_1901947->f_44 == 0)
	{
		return false;
	}
	if (&Global_1051436 != Global_1901947->f_44)
	{
		iVar0 = (get_cloud_time_as_int() - Global_1901947->f_44.f_1);
		if (iVar0 > 0)
		{
			return true;
		}
	}
	return false;
}

int func_285(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

var func_286(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_558() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_559());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_559());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_559());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_560(get_player_team(iVar5)));
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
			if (func_561(iVar2))
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
				if (iVar9 & 8192 != 0 && func_149(iVar2) != 1)
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
					if (!func_562(iVar10))
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

int func_287(var uParam0, struct<21> Param1)
{
	if (!func_563(uParam0))
	{
		return 0;
	}
	*uParam0->f_2[*uParam0] = { Param1 };
	*uParam0++;
	return 1;
}

void func_288(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

bool func_289()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_3;
}

bool func_290(int iParam0, bool bParam1)
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

struct<35> func_291()
{
	Var4.f_8 = -1;
	Var4.f_8.f_1 = -1;
	Var4.f_16.f_12 = -1;
	Var4.f_16.f_12.f_1 = -1;
	Var4.f_16.f_14 = 255;
	Var4.f_16.f_15 = 255;
	Var4.f_16.f_1 = 255;
	Var4.f_16.f_2 = vVar0.z;
	func_288(&(Var4.f_8));
	if (Global_1071686->f_16 > 0)
	{
		Global_1071686->f_16 = (Global_1071686->f_16 - 1);
		if (func_564() == Global_1071686->f_16)
		{
			func_565();
		}
		Var4 = { *Global_1071686->f_16.f_5[Global_1071686->f_16] };
		Global_1071686->f_16.f_5[Global_1071686->f_16] = 0;
	}
	iVar39 = 0;
	iVar39 = 0;
	while (iVar39 <= 8)
	{
		if (func_564() == iVar39 + 1)
		{
			func_566(iVar39);
		}
		*Global_1071686->f_16.f_5[iVar39] = { *(Global_1071686->f_16.f_5[iVar39 + 1]) };
		Global_1071686->f_16.f_5[iVar39 + 1] = 0;
		iVar39++;
	}
	return Var4;
}

void func_292(var uParam0)
{
}

void func_293()
{
	Var0 = { func_225(func_294()) };
	if (!Var0)
	{
		return;
	}
}

int func_294()
{
	return Global_1071686->f_16.f_1;
}

void func_295(int iParam0)
{
	Global_1071686->f_16.f_1 = iParam0;
}

void func_296()
{
	if (func_564() == -1)
	{
		return;
	}
	if (get_time_difference(get_network_time_accurate(), Global_1071686->f_16.f_2.f_2) > (Global_1901947->f_1.f_25 / 2))
	{
		func_565();
		return;
	}
}

void func_297(int iParam0)
{
	iVar0 = network_player_id_to_int();
	(*Global_1291106)[iVar0]->f_1 = ((*Global_1291106)[iVar0]->f_1 - ((*Global_1291106)[iVar0]->f_1 && iParam0));
}

void func_298(int iParam0)
{
	iVar0 = network_player_id_to_int();
	(*Global_1291106)[iVar0]->f_2 = ((*Global_1291106)[iVar0]->f_2 - ((*Global_1291106)[iVar0]->f_2 && iParam0));
}

bool func_299(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return is_bit_set(&(Global_1904087->f_496[iVar0]), iVar1);
}

void func_300(int iParam0)
{
	if (!func_567(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	clear_bit(Global_1904087->f_496[iVar0], iVar1);
}

void func_301()
{
	func_568();
}

bool func_302()
{
	return func_58(Global_1572887->f_7, 1);
}

void func_303()
{
	func_569(1);
	func_569(2);
	func_569(4);
	func_569(8);
	func_569(16);
	func_569(256);
	func_569(512);
	func_569(1024);
	func_569(4096);
	func_569(8192);
}

void func_304()
{
	func_569(1);
	func_569(2);
	func_569(4);
	func_569(8);
	func_569(16);
	func_569(64);
	func_569(128);
	func_569(256);
	func_569(512);
	func_569(1024);
	func_569(4096);
}

void func_305()
{
	func_569(1);
	func_569(2);
	func_569(8);
	func_569(16);
	func_569(64);
	func_569(128);
	func_569(256);
	func_569(512);
	func_569(1024);
	func_569(2048);
	func_569(4096);
	func_569(8192);
}

void func_306()
{
	func_570(1);
	func_570(2);
	func_570(4);
	func_570(8);
	func_570(16);
	func_570(32);
	func_570(64);
	func_570(128);
	func_570(256);
	func_570(512);
	func_570(1024);
	func_570(2048);
	func_570(4096);
	func_570(8192);
}

void func_307()
{
	if (Global_1901947->f_44.f_1 == 0)
	{
		return;
	}
	if (Global_1901947->f_44 == 0)
	{
		return;
	}
	iVar0 = (get_cloud_time_as_int() - Global_1901947->f_44.f_1);
	if (iVar0 < func_571(1))
	{
		func_572(1, 1022);
	}
	else if (iVar0 < func_571(2))
	{
		func_572(2, 1020);
	}
	else if (iVar0 < func_571(4))
	{
		func_572(4, 1016);
	}
	else if (iVar0 < func_571(8))
	{
		func_572(8, 1008);
	}
	else if (iVar0 < func_571(16))
	{
		func_572(16, 992);
	}
	else if (iVar0 < func_571(32))
	{
		func_572(32, 960);
	}
	else if (iVar0 < func_571(64))
	{
		func_572(64, 896);
	}
	else if (iVar0 < func_571(128))
	{
		func_572(128, 768);
	}
	else if (iVar0 < func_571(256))
	{
		func_572(256, 512);
	}
	else if (iVar0 < func_571(512))
	{
		func_572(512, 512);
	}
}

void func_308()
{
	func_62();
}

void func_309()
{
	if (!func_573(1, &Global_1296859))
	{
		return;
	}
	if (func_573(2, 255))
	{
		func_574(8);
		func_205(3);
	}
	else
	{
		func_205(2);
	}
}

void func_310()
{
	if (_0x72b2e00c9bac6789(&(Global_1296379->f_2), &Global_1296859))
	{
		func_204(&(Global_1296473->f_60), 1, 1);
		func_204(&(Global_1296473->f_61), 1, 1);
		func_205(3);
		return;
	}
	if (!func_573(1, &Global_1296859))
	{
		func_205(0);
		return;
	}
	if (func_573(8, 255))
	{
		func_204(&(Global_1296473->f_60), 1, 1);
		if (!func_465(Global_1296473->f_61))
		{
			Global_1296473->f_61 = func_575("STORY_COOP_TRANSITION_CANCEL", 992265328, 2, 0, 1, 4, 570, 4000, 10, 1073741824, 1704213876, 0);
		}
		if (func_576(Global_1296473->f_61, 1))
		{
			func_577(8);
		}
		return;
	}
	func_204(&(Global_1296473->f_61), 1, 1);
	if (!func_578(&Global_1296859))
	{
		return;
	}
	if (!func_465(Global_1296473->f_60))
	{
		Global_1296473->f_60 = func_575("STORY_COOP_TRANSITION_CONFIRM", -473983589, 2, 0, 1, 4, 570, 4000, 10, 1073741824, 1704213876, 0);
	}
	if (func_576(Global_1296473->f_60, 1))
	{
		func_574(8);
	}
}

void func_311()
{
	if (!_0x72b2e00c9bac6789(&(Global_1296379->f_2), &Global_1296859))
	{
		if (!func_573(1, &Global_1296859))
		{
			func_205(0);
			return;
		}
		return;
	}
	Global_1296473->f_63 = -1;
	iVar0 = 0;
	while (iVar0 < Global_1296379->f_22)
	{
		if (_0x72b2e00c9bac6789(&(Global_1296379->f_3[iVar0]->f_2), &Global_1296859))
		{
			Global_1296473->f_63 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (Global_1296473->f_63 == -1)
	{
		return;
	}
	func_205(4);
}

void func_312()
{
	if (!is_screen_faded_out())
	{
		if (!is_screen_fading_out())
		{
			do_screen_fade_out(2000);
		}
		return;
	}
	func_574(16);
	func_579(0);
	func_205(5);
}

void func_313()
{
	if (Global_1296379->f_3[Global_1296473->f_63]->f_1 >= 2)
	{
		func_205(6);
		return;
	}
	switch (Global_1296473->f_64)
	{
		case 0:
			if (Global_1296379->f_3[Global_1296473->f_63]->f_3 != Global_1296859->f_10)
			{
				return;
			}
			if (Global_1296473->f_65 >= 15)
			{
				func_574(64);
				return;
			}
			if (!_0xe404bff0aba23cdc(&(Global_1296379->f_3[Global_1296473->f_63]->f_2)))
			{
				return;
			}
			_0xc505036a35afd01b(true);
			if (!_0xc223d299c670413d(1, 32, 0, -1))
			{
				return;
			}
			func_579(1);
			break;
		case 1:
			if (_0xa021095c983f20d8())
			{
				return;
			}
			if (!_0x6d87ba8ef15226cd())
			{
				Global_1296473->f_65++;
				func_579(0);
				return;
			}
			if (!_0x277865a734918ae6())
			{
				Global_1296473->f_65++;
				func_579(0);
				return;
			}
			if (!_0x0b6b4507ac5ea8b8())
			{
				if (!_0x1bb50cd340a996e6())
				{
					_0x101f538c25abb39a(0, 0);
				}
			}
			func_579(2);
			break;
		case 2:
			func_574(32);
			break;
	}
}

void func_314()
{
	iVar0 = network_player_id_to_int();
	if (iVar0 == 255)
	{
		return;
	}
	if (!_0x72b2e00c9bac6789(&(Global_1296379->f_2), iVar0))
	{
		func_62();
		return;
	}
	func_574(128);
}

bool func_315()
{
	if (does_entity_exist(Global_1102219->f_26.f_3344))
	{
		set_entity_coords(Global_1102219->f_26.f_3344, Global_1102219->f_26.f_3348, false, false, true, true);
		set_entity_rotation(Global_1102219->f_26.f_3344, Global_1102219->f_26.f_3354, 2, false);
		set_entity_visible(Global_1102219->f_26.f_3344, false);
		set_entity_collision(Global_1102219->f_26.f_3344, false, false);
		set_entity_completely_disable_collision(Global_1102219->f_26.f_3344, false, false);
		set_entity_invincible(Global_1102219->f_26.f_3344, true);
		freeze_entity_position(Global_1102219->f_26.f_3344, true);
		_0x9ed3108d6847760a(ped_to_net(Global_1102219->f_26.f_3344), 1);
		set_ped_config_flag(Global_1102219->f_26.f_3344, 301, true);
		set_ped_config_flag(Global_1102219->f_26.f_3344, 277, true);
		set_ped_config_flag(Global_1102219->f_26.f_3344, 417, true);
		set_ped_config_flag(Global_1102219->f_26.f_3344, 394, true);
		set_ped_config_flag(Global_1102219->f_26.f_3344, 253, true);
		set_blocking_of_non_temporary_events(Global_1102219->f_26.f_3344, true);
		task_play_anim(Global_1102219->f_26.f_3344, "CREATURES_BIRD@OWL@NORMAL@DEAD", "Dead_Up", 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
		Global_1102219->f_26.f_3357 = { Global_1102219->f_26.f_3354 };
		return true;
	}
	request_model(-861544272, false);
	if (!has_model_loaded(-861544272))
	{
		return false;
	}
	request_anim_dict("CREATURES_BIRD@OWL@NORMAL@DEAD");
	if (!has_anim_dict_loaded("CREATURES_BIRD@OWL@NORMAL@DEAD"))
	{
		return false;
	}
	if (can_register_mission_peds(1))
	{
		reserve_network_client_mission_peds((1 + get_num_reserved_mission_peds(0)));
	}
	else
	{
		return false;
	}
	_0xc6136b40fffb778b(1);
	Global_1102219->f_26.f_3344 = create_ped(-861544272, Global_1102219->f_26.f_3348, 0f, true, false, true, false);
	set_entity_coords(Global_1102219->f_26.f_3344, Global_1102219->f_26.f_3348, false, false, true, true);
	set_entity_rotation(Global_1102219->f_26.f_3344, Global_1102219->f_26.f_3354, 2, false);
	set_entity_visible(Global_1102219->f_26.f_3344, false);
	set_entity_collision(Global_1102219->f_26.f_3344, false, false);
	set_entity_completely_disable_collision(Global_1102219->f_26.f_3344, false, false);
	set_entity_invincible(Global_1102219->f_26.f_3344, true);
	freeze_entity_position(Global_1102219->f_26.f_3344, true);
	_0x9ed3108d6847760a(ped_to_net(Global_1102219->f_26.f_3344), 1);
	set_ped_config_flag(Global_1102219->f_26.f_3344, 301, true);
	set_ped_config_flag(Global_1102219->f_26.f_3344, 277, true);
	set_ped_config_flag(Global_1102219->f_26.f_3344, 417, true);
	set_ped_config_flag(Global_1102219->f_26.f_3344, 394, true);
	set_ped_config_flag(Global_1102219->f_26.f_3344, 253, true);
	set_blocking_of_non_temporary_events(Global_1102219->f_26.f_3344, true);
	task_play_anim(Global_1102219->f_26.f_3344, "CREATURES_BIRD@OWL@NORMAL@DEAD", "Dead_Up", 1000f, -8f, -1, 1, 0f, false, 0, false, 0, false);
	Global_1102219->f_26.f_3357 = { Global_1102219->f_26.f_3354 };
	set_model_as_no_longer_needed(-861544272);
	_0xc6136b40fffb778b(0);
	add_entity_to_audio_mix_group(Global_1102219->f_26.f_3344, "Hide_and_Mute_Entity_group", 0f);
	start_audio_scene("Hide_and_Mute_Entity_Scene");
	return true;
}

bool func_316()
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
	if (func_580(2048))
	{
		return true;
	}
	if (func_581(1))
	{
		return true;
	}
	if (Global_1102219->f_26.f_3337 != 0)
	{
		return true;
	}
	return false;
}

void func_317()
{
	if (!does_entity_exist(Global_1102219->f_26.f_3344))
	{
		return;
	}
	stop_audio_scene("Hide_and_Mute_Entity_Scene");
	delete_ped(&(Global_1102219->f_26.f_3344));
	Global_1102219->f_26.f_3345 = 0;
	set_model_as_no_longer_needed(-861544272);
}

char* func_318(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "scr_de_slippery_haze_head";
		case 1:
			return "scr_de_slippery_haze_torso";
		case 2:
			return "scr_de_slippery_haze_limb";
		case 3:
			return "scr_de_recuperate_wisps";
		case 4:
			return "scr_de_steady_smoke_torso";
		default:
			break;
	}
	return "";
}

void func_319()
{
	if (!is_screen_faded_in() || !is_player_control_on(player_id()))
	{
		return;
	}
	func_582();
	if (func_583() != 0)
	{
		if (!func_585(func_584()))
		{
			iVar3 = func_586(func_583());
			if (func_587() < iVar3)
			{
				if (!func_588())
				{
					func_590(func_589());
					return;
				}
			}
			else
			{
				func_591(func_583());
				func_592();
				func_593(0);
			}
		}
		else
		{
			func_593(func_587() + 1);
			func_590(0);
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 0)
		{
			if (func_594(iVar1) == 0)
			{
			}
			else
			{
				iVar2 = 0;
				while (iVar2 <= 31)
				{
					iVar0 = func_595((iVar1 * 32 + iVar2), 1);
					if (!func_596(iVar0))
					{
					}
					else
					{
						func_597(iVar0);
					}
					else
					{
						iVar2++;
					}
				}
				if (func_583() != 0)
				{
				}
				else
				{
					iVar1++;
				}
			}
		}
	}
}

int func_320()
{
	return &Global_1297470;
}

bool func_321()
{
	if (!_0x7907969497ea92f5(Global_1071686->f_28448[29]->f_3))
	{
		return false;
	}
	if (!_0x603ac35fd4602c76(Global_1071686->f_28448[29]->f_3))
	{
		return false;
	}
	return true;
}

bool func_322()
{
	Var9 = -1;
	Var9.f_1 = -1;
	Var9.f_2 = -1;
	Var9.f_3 = -1;
	Var9.f_4 = -1;
	iVar1 = func_598();
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var9 = iVar0;
		iVar4 = func_599(&Var9);
		iVar3 = func_600(iVar0);
		iVar2 = 0;
		while (iVar2 <= (iVar3 - 1))
		{
			Var5 = { func_601(iVar0, iVar2) };
			func_602(&Var5, iVar4);
			iVar2++;
		}
		iVar0++;
	}
	return true;
}

void func_323(int iParam0)
{
	Global_1297470 = iParam0;
}

bool func_324()
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_603(iVar0, &uVar1);
		if (func_604(&uVar1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_325()
{
	iVar1 = func_598();
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar6 = iVar0;
		iVar3 = func_605(iVar6);
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 <= (iVar3 - 1))
		{
			iVar7 = iVar2;
			iVar5 = func_606(iVar6, iVar7);
			bVar9 = false;
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				iVar8 = iVar4;
				if (!func_607(iVar6, iVar7, iVar8, 3))
				{
				}
				else
				{
					func_608(iVar6, iVar7, iVar4);
					bVar9 = true;
				}
				else
				{
					iVar4++;
				}
			}
			if (iVar5 <= 0)
			{
				func_608(iVar6, iVar7, -1);
			}
			else if (!bVar9)
			{
				func_608(iVar6, iVar7, 15);
			}
			if ((iVar4 == 0 && bVar9) && !bVar10)
			{
				func_609(iVar6, iVar2);
				bVar10 = true;
			}
			iVar2++;
		}
		if (iVar3 <= 0)
		{
			func_609(iVar6, -1);
		}
		else if (!bVar10)
		{
			func_609(iVar6, 15);
		}
		iVar0++;
	}
}

void func_326()
{
	iVar1 = func_598();
	func_610(iVar1);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar6 = iVar0;
		iVar3 = func_605(iVar6);
		func_611(iVar6, iVar3);
		uVar4 = func_612(iVar6);
		func_613(iVar6, uVar4);
		Var8 = { func_614(iVar6, -1919535953) };
		func_615(iVar6, Var8);
		bVar10 = func_616(iVar6);
		func_617(iVar6, bVar10);
		iVar11 = func_618(iVar6, 0);
		func_619(iVar6, iVar11);
		iVar2 = 0;
		while (iVar2 <= (iVar3 - 1))
		{
			iVar7 = iVar2;
			uVar5 = func_620(iVar6, iVar7);
			func_621(iVar6, iVar7, uVar5);
			iVar2++;
		}
		iVar0++;
	}
}

void func_327()
{
	iVar0 = 0;
	while (iVar0 <= (func_622() - 1))
	{
		iVar1 = (iVar1 + func_623(iVar0));
		iVar0++;
	}
	func_624();
	func_328(iVar1);
}

void func_328(int iParam0)
{
	iVar9 = player_id();
	iVar11 = _0x901e0dc25080c8b9(iVar9);
	iVar10 = _0x4be6c13a45cca8ec(iVar11);
	iVar1 = _0x149a2751ab66ac02(iVar11);
	bVar8 = ((iVar9 == iVar10 && _network_is_player_index_valid(iVar9)) && network_is_player_active(iVar9));
	iVar5 = Global_1296859->f_21;
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		iVar6 = func_625();
		iVar7 = func_626();
		uVar2 = func_627(iVar6, iVar7);
		iVar3 = func_628(iVar6);
		Var14 = { func_629(iVar6) };
		stat_id_get_int(&Var14, &iVar4);
		if (func_630(iVar6))
		{
			if (_0xe54dc27571d5edc5(uVar2))
			{
				iVar12 = missiondata_get_replay_state(uVar2);
				iVar13 = func_631(iVar6);
				uVar16 = func_632(iVar6);
				if (((func_343() || Global_1048577) // PointerArith || Global_1048584) // PointerArith)
				{
					if (iVar12 != 2)
					{
						_0xe4e2c581f127a11c(uVar2, 2);
					}
				}
				else if (bVar8)
				{
					if (iVar1 <= 4)
					{
						if (iVar4 == 0 || (iVar4 + iVar3) <= iVar5)
						{
							if (iVar13 == 15)
							{
								if (iVar12 != 0)
								{
									_0xe4e2c581f127a11c(uVar2, 0);
								}
							}
							else if (iVar13 > iVar7)
							{
								if (iVar12 != 0)
								{
									_0xe4e2c581f127a11c(uVar2, 0);
								}
							}
							else if (iVar12 != 3)
							{
								_0xe4e2c581f127a11c(uVar2, 3);
							}
						}
						else if (iVar12 != 1)
						{
							_0xe4e2c581f127a11c(uVar2, 1);
						}
					}
					else if (iVar12 != 2)
					{
						_0xe4e2c581f127a11c(uVar2, 2);
					}
				}
				else if (iVar12 != 6)
				{
					_0xe4e2c581f127a11c(uVar2, 6);
				}
			}
			if (iVar13 == 15)
			{
				if (_0xe145864decc34219(uVar16))
				{
					_0x957a830c9b4b99ea(uVar16, 0);
				}
			}
			else if (!_0xe145864decc34219(uVar16))
			{
				_0x957a830c9b4b99ea(uVar16, 1);
			}
		}
		else
		{
			iVar7 = (func_623(iVar6) - 1);
		}
		iVar7 = (iVar7 + 1 % func_623(iVar6));
		func_633(iVar7);
		if (iVar7 == 0)
		{
			iVar6 = (iVar6 + 1 % func_622());
			func_634(iVar6);
		}
		iVar0++;
	}
}

int func_329()
{
	return Global_1297470->f_55;
}

bool func_330(int iParam0)
{
	if (&Global_1048577)
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
		case 13:
		case 14:
		case 15:
			return false;
		default:
			break;
	}
	return true;
}

void func_331(int iParam0)
{
	Global_1297470->f_55 = iParam0;
}

int func_332(int iParam0)
{
	return (*Global_1056141)[iParam0]->f_187.f_9;
}

void func_333(int iParam0)
{
	Global_1297470->f_55.f_1 = iParam0;
}

bool func_334(int iParam0)
{
	Var0 = { func_635(iParam0) };
	return func_636(Var0, Var0.f_1) != 0;
}

void func_335(int iParam0)
{
	Global_1297470->f_55.f_1.f_2 = (Global_1297470->f_55.f_1.f_2 || iParam0);
}

int func_336()
{
	return Global_1297470->f_55.f_1;
}

int func_337(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_3 = -1;
	Var0.f_3.f_4 = -1;
	Var0.f_3 = { func_635(iParam0) };
	iVar8 = func_636(Var0.f_3, Var0.f_3.f_1);
	if (iVar8 == 0)
	{
		return 0;
	}
	Var0 = { func_637(iVar8, 7) };
	Var0.f_2 = get_game_timer();
	if (!func_18(Var0))
	{
		return 0;
	}
	func_638(0, &Var0);
	return 1;
}

bool func_338(int iParam0)
{
	return (Global_1297470->f_55.f_1.f_1 && iParam0) != 0;
}

void func_339(int iParam0)
{
	Global_1297470->f_55.f_1.f_1 = (Global_1297470->f_55.f_1.f_1 - (Global_1297470->f_55.f_1.f_1 && iParam0));
}

int func_340(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1296859->f_10;
	}
	return Global_263042[iParam0];
}

void func_341(int iParam0)
{
	Global_1297470->f_55.f_1.f_1 = (Global_1297470->f_55.f_1.f_1 || iParam0);
}

void func_342()
{
	iVar0 = func_336();
	func_639(iVar0);
}

bool func_343()
{
	return Global_1071686->f_28662.f_22.f_3 != 0;
}

int func_344(int iParam0)
{
	return Global_1297470->f_55.f_4[iParam0]->f_3;
}

struct<8> func_345(int iParam0)
{
	if (!func_640(&uVar0))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 19, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 54, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 55, 0, 0, 1))
	{
		return Var5;
	}
	return func_642(&uVar0, 60, 1);
}

var func_346(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

struct<2> func_347(int iParam0)
{
	return *Global_1297470->f_55.f_4[iParam0];
}

int func_348(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_77(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

void func_349(int iParam0)
{
	func_506(&(Global_1297470->f_50.f_3), func_643(iParam0, 1), 1);
}

void func_350(int iParam0)
{
	func_59(&(Global_1572887->f_106.f_16), iParam0);
}

void func_351()
{
	Var0 = { func_644(0) };
	Var0.f_2 = get_game_timer();
	func_645(0);
	if (func_646(1))
	{
		return;
	}
	func_638(1, &Var0);
}

void func_352()
{
	_copy_memory(&(Global_1297470->f_55.f_1), &uVar0, 3);
}

int func_353()
{
	return func_647();
}

void func_354()
{
	func_649(func_648(1));
	func_650(Global_1107216->f_33[func_648(2)]->f_1, -1);
	if (func_651())
	{
		func_652(&(Global_1107216->f_33.f_513), &(Global_1109804->f_10));
		func_653(func_648(0));
		func_654(func_648(3));
		func_655(func_648(0));
		func_656();
	}
	func_657();
	func_658();
	func_659();
	func_660();
	func_661();
	func_662();
	func_663();
	func_664();
	func_665();
	func_666();
	func_667();
	if (Global_1109804->f_15)
	{
		func_668();
		Global_1109804->f_15 = 0;
	}
	func_669();
}

bool func_355()
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
	if (!func_18(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_356()
{
	Global_1071686->f_19648.f_24 = 1;
	if (Global_1071686->f_19648.f_25 != -1)
	{
		bVar0 = true;
	}
	Global_1071686->f_19648.f_25 = get_frame_count();
	if (!bVar0)
	{
		func_670();
	}
}

bool func_357(int iParam0, int iParam1)
{
	if (!func_671(iParam0))
	{
		return true;
	}
	switch (Global_1071686->f_19648.f_23)
	{
		case 0:
			func_672(iParam0, &iVar0);
			break;
		case 1:
			func_673(iParam1, iParam0);
			break;
		case 2:
			Global_1071686->f_19648[iParam0] = func_674(Global_1071686->f_19648.f_19, Global_1071686->f_19648.f_20);
			iVar0 = 1;
			break;
	}
	return iVar0;
}

void func_358()
{
	if (Global_1071686->f_19648.f_25 == get_frame_count())
	{
		return;
	}
	if (Global_1071686->f_19648.f_24)
	{
		Global_1071686->f_19648.f_24 = 0;
	}
	else if (Global_1071686->f_19648.f_25 != -1)
	{
		Global_1071686->f_19648.f_25 = -1;
		func_670();
	}
}

bool func_359(int iParam0)
{
	if (!func_675(iParam0))
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

void func_360()
{
	iVar0 = _0x901e0dc25080c8b9(Global_1296859->f_10);
	if (Global_1296859->f_15 != iVar0)
	{
		Global_1296859->f_15 = iVar0;
	}
	if (Global_1071686->f_28341 != Global_1296859->f_15)
	{
		Global_1071686->f_28341 = Global_1296859->f_15;
	}
}

bool func_361(int iParam0, int iParam1)
{
	if (!func_676(iParam0))
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam1) || !network_is_player_connected(iParam1))
	{
		return false;
	}
	return _0x8f4f050054005c27(&((*Global_1056141)[iParam1]->f_15.f_20), iParam0);
}

void func_362()
{
	Global_1960071 = 0;
}

void func_363(int iParam0)
{
	if (!func_676(iParam0))
	{
		return;
	}
	iVar0 = get_player_index();
	if (!_network_is_player_index_valid(iVar0) || !network_is_player_connected(iVar0))
	{
		return;
	}
	if (func_361(iParam0, iVar0))
	{
		return;
	}
	_0xe84aac1b22a73e99(&((*Global_1056141)[iVar0]->f_15.f_20), iParam0);
}

void func_364(int iParam0)
{
	if (!func_676(iParam0))
	{
		return;
	}
	iVar0 = get_player_index();
	if (!_network_is_player_index_valid(iVar0) || !network_is_player_connected(iVar0))
	{
		return;
	}
	if (!func_361(iParam0, iVar0))
	{
		return;
	}
	_0xb909149f2bb5f6da(&((*Global_1056141)[iVar0]->f_15.f_20), iParam0);
}

int func_365(struct<2> Param0)
{
	if (!func_18(Param0))
	{
		return -1;
	}
	iVar0 = func_677(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

void func_366(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	if (!func_678(iParam1))
	{
		iParam1 = func_680(func_679(iParam0));
		if (!func_678(iParam1))
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
		func_681(iParam0, iParam5, iParam1);
	}
	if (func_682(iParam1, 48))
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
		func_683((*Global_1835011)[iParam0]->f_1);
	}
	else
	{
		func_684(iParam1, 3831);
	}
	(*Global_1835011)[iParam0]->f_71 = 0;
}

int func_367(struct<2> Param0)
{
	if (&Global_1900806 == 15)
	{
		return -1;
	}
	if (!func_685(Param0))
	{
		return -1;
	}
	iVar1 = func_680(Param0);
	if (iVar1 >= 0)
	{
		func_686(Param0, 1);
		return iVar1;
	}
	else
	{
		iVar0 = &Global_1900806;
		*(*Global_1900807)[iVar0] = { Param0 };
		*(*Global_1900838)[iVar0] = { Var2 };
		func_686(Param0, 1);
		Global_1900806 = &Global_1900806 + 1;
		if (&Global_1900806 > 15)
		{
			Global_1900806 = 15;
		}
		return iVar0;
	}
	return -1;
}

void func_368()
{
	iVar0 = func_687();
	if (iVar0 == 0)
	{
		func_688();
	}
	else
	{
		if (_0xc17f69e1418cd11f(1) == iVar0)
		{
			return;
		}
		iVar1 = func_689();
		if (does_blip_exist(iVar1))
		{
			remove_blip(&iVar1);
			func_690(0);
		}
		func_691(0);
	}
}

int func_369()
{
	return Global_1297047->f_374;
}

bool func_370(int iParam0)
{
	return (Global_1297047->f_374.f_1 && iParam0) != 0;
}

void func_371(int iParam0)
{
	Global_1297047->f_374 = iParam0;
}

void func_372(int iParam0)
{
	Global_1297047->f_374.f_1 = (Global_1297047->f_374.f_1 || iParam0);
}

bool func_373()
{
	return func_692() == player_id();
}

void func_374(int iParam0)
{
	iVar0 = player_id();
	if (!_network_is_player_index_valid(iVar0))
	{
		return;
	}
	if (func_692() != iVar0)
	{
		return;
	}
	(*Global_1056141)[player_id()]->f_418 = ((*Global_1056141)[player_id()]->f_418 || iParam0);
}

bool func_375()
{
	iVar0 = func_380();
	if (iVar0 == -1)
	{
		return false;
	}
	if (func_693() == 9)
	{
		return false;
	}
	if (func_407() == 6)
	{
		return false;
	}
	iVar1 = func_382();
	if (iVar1 == -1)
	{
		return false;
	}
	iVar2 = func_694(iVar0, iVar1);
	if (!_unlock_is_unlocked(iVar2))
	{
		return false;
	}
	if (!_unlock_is_visible(iVar2))
	{
		return false;
	}
	iVar3 = func_696(func_695(iVar0, iVar1));
	if (!_unlock_is_unlocked(iVar3))
	{
		return false;
	}
	if (!_unlock_is_visible(iVar3))
	{
		return false;
	}
	return true;
}

void func_376()
{
	iVar0 = player_id();
	if (!_network_is_player_index_valid(iVar0))
	{
		return;
	}
	func_697(func_380());
	func_698(func_693());
	func_699(func_407());
	func_700(func_382());
}

bool func_377(int iParam0)
{
	iVar0 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
	if (!_network_is_player_index_valid(iVar0))
	{
		return false;
	}
	return ((*Global_1056141)[iVar0]->f_418 && iParam0) != 0;
}

void func_378()
{
	iVar0 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
	if (!_network_is_player_index_valid(iVar0))
	{
		return;
	}
	func_702(func_701(iVar0));
	func_704(func_703(iVar0));
	func_706(func_705(iVar0));
	func_708(func_707(iVar0));
}

bool func_379(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	return ((*Global_1056141)[iParam0]->f_418.f_1 && iParam1) != 0;
}

int func_380()
{
	return Global_1297047->f_374.f_2;
}

var func_381(int iParam0)
{
	return (*Global_1297047)[iParam0]->f_8;
}

int func_382()
{
	return Global_1297047->f_374.f_5;
}

int func_383(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_384(int iParam0)
{
	Global_1297047->f_374.f_10 = iParam0;
}

void func_385()
{
	func_399(536870912);
	func_399(1073741824);
	func_399(268435456);
	_copy_memory(&(Global_1297047->f_374.f_6), &uVar0, 4);
}

bool func_386()
{
	return Global_1297047->f_374.f_29;
}

int func_387()
{
	if (func_57() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

void func_388(int iParam0)
{
	Global_1297047->f_374.f_14 = iParam0;
}

struct<4> func_389(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_495(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_494(1328661203, func_709(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_494(1328661203, func_709(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_494(1328661203, func_709(), -1591664384, bParam0);
}

int func_390(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_710(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_711(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_494(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_495(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_495(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

void func_391(int iParam0)
{
	Global_1297047->f_374.f_15 = iParam0;
}

int func_392(int iParam0)
{
	if (!func_712(iParam0))
	{
		return 0;
	}
	iVar0 = func_713(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_714(iParam0, 0);
	}
	return 0;
}

void func_393(int iParam0)
{
	Global_1297047->f_374.f_12 = iParam0;
}

void func_394(int iParam0)
{
	Global_1297047->f_374.f_13 = iParam0;
}

void func_395()
{
	Global_1913504 = 1;
}

void func_396()
{
	Var0.f_1 = 11;
	_copy_memory(&(Global_1297047->f_374.f_16), &Var0, 13);
}

bool func_397()
{
	return !&Global_1913504;
}

void func_398()
{
	Global_1913504 = 0;
}

void func_399(int iParam0)
{
	Global_1297047->f_374.f_1 = (Global_1297047->f_374.f_1 - (Global_1297047->f_374.f_1 && iParam0));
}

int func_400()
{
	return Global_1297047->f_374.f_14;
}

var func_401(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_715(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_402()
{
	return Global_1297047->f_374.f_15;
}

int func_403(int iParam0)
{
	return (iParam0 / 100);
}

int func_404(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return ((iParam0 % 100) / 1);
	}
	return (iParam0 / 1);
}

int func_405()
{
	return Global_1297047->f_374.f_12;
}

int func_406()
{
	return Global_1297047->f_374.f_13;
}

int func_407()
{
	return Global_1297047->f_374.f_4;
}

void func_408(int iParam0)
{
	Global_1297047->f_419 = (Global_1297047->f_419 || iParam0);
}

void func_409()
{
	if (func_692() == player_id())
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	iVar1 = func_382();
	if (iVar1 == -1)
	{
		return;
	}
	func_716(iVar0, iVar1, func_380());
	func_717(iVar0, iVar1, get_game_timer());
	func_718(iVar0, iVar1, func_407());
}

void func_410()
{
	Var0.f_2 = -1;
	Var0.f_3 = 9;
	Var0.f_4 = 6;
	Var0.f_5 = -1;
	Var0.f_16.f_1 = 11;
	Var0 = func_369();
	_copy_memory(&(Global_1297047->f_374), &Var0, 30);
}

void func_411()
{
	Var0.f_2 = -1;
	Var0.f_3 = 9;
	Var0.f_4 = 6;
	Var0.f_5 = -1;
	_copy_memory(&((*Global_1056141)[player_id()]->f_418), &Var0, 7);
}

void func_412()
{
	Global_1197740->f_1 = 0;
	if (&Global_1296859->f_22[0])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[0]);
	}
	if (&Global_1296859->f_22[1])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[1]);
	}
	if (&Global_1296859->f_22[2])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[2]);
	}
	if (&Global_1296859->f_22[3])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[3]);
	}
	if (&Global_1296859->f_22[4])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[4]);
	}
	if (&Global_1296859->f_22[5])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[5]);
	}
	if (&Global_1296859->f_22[6])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[6]);
	}
	if (&Global_1296859->f_22[7])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[7]);
	}
	if (&Global_1296859->f_22[8])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[8]);
	}
	if (&Global_1296859->f_22[9])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[9]);
	}
	if (&Global_1296859->f_22[10])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[10]);
	}
	if (&Global_1296859->f_22[11])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[11]);
	}
	if (&Global_1296859->f_22[12])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[12]);
	}
	if (&Global_1296859->f_22[13])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[13]);
	}
	if (&Global_1296859->f_22[14])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[14]);
	}
	if (&Global_1296859->f_22[15])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[15]);
	}
	if (&Global_1296859->f_22[16])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[16]);
	}
	if (&Global_1296859->f_22[17])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[17]);
	}
	if (&Global_1296859->f_22[18])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[18]);
	}
	if (&Global_1296859->f_22[19])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[19]);
	}
	if (&Global_1296859->f_22[20])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[20]);
	}
	if (&Global_1296859->f_22[21])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[21]);
	}
	if (&Global_1296859->f_22[22])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[22]);
	}
	if (&Global_1296859->f_22[23])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[23]);
	}
	if (&Global_1296859->f_22[24])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[24]);
	}
	if (&Global_1296859->f_22[25])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[25]);
	}
	if (&Global_1296859->f_22[26])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[26]);
	}
	if (&Global_1296859->f_22[27])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[27]);
	}
	if (&Global_1296859->f_22[28])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[28]);
	}
	if (&Global_1296859->f_22[29])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[29]);
	}
	if (&Global_1296859->f_22[30])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[30]);
	}
	if (&Global_1296859->f_22[31])
	{
		Global_1197740->f_1 = (Global_1197740->f_1 || Global_1197355[31]);
	}
	if (!&Global_1197740)
	{
		if (func_719(8192))
		{
			_0xc6dcc2a3a8825c85(1);
		}
		else
		{
			_0xbc90bdf4e5228ea1();
		}
		Global_1197740 = 1;
	}
}

int func_413()
{
	return Global_1301323->f_155;
}

void func_414(int iParam0)
{
	Global_1301323->f_155 = iParam0;
}

int func_415(int iParam0)
{
	return &(Global_1301323->f_155.f_4[iParam0]);
}

void func_416()
{
	iVar0 = func_413();
	iVar1 = int_to_playerindex(iVar0);
	if (!_network_is_player_index_valid(iVar1))
	{
		return;
	}
	if (!network_is_player_active(iVar1))
	{
		return;
	}
	if (!func_720(iVar1, 2))
	{
		return;
	}
	iVar2 = get_player_ped(iVar1);
	if (!does_entity_exist(iVar2))
	{
		return;
	}
	iVar3 = get_player_ped(player_id());
	if (!does_entity_exist(iVar3))
	{
		return;
	}
	fVar4 = func_721(get_entity_coords(iVar2, true, false), get_entity_coords(iVar3, true, false));
	if (fVar4 > func_722())
	{
		func_723(iVar0, 2);
	}
	else
	{
		func_724(iVar0, get_network_time_accurate());
		func_723(iVar0, 1);
	}
}

void func_417()
{
	iVar0 = func_413();
	iVar6 = int_to_playerindex(iVar0);
	if (!_network_is_player_index_valid(iVar6))
	{
		func_725(iVar0);
		func_723(iVar0, 0);
		func_726(iVar6);
		return;
	}
	if (!network_is_player_active(iVar6))
	{
		func_725(iVar0);
		func_723(iVar0, 0);
		func_726(iVar6);
		return;
	}
	if (!func_720(iVar6, 2))
	{
		func_725(iVar0);
		func_723(iVar0, 0);
		func_726(iVar6);
		return;
	}
	iVar8 = get_network_time_accurate();
	iVar7 = func_727(iVar6);
	iVar9 = func_728(iVar0);
	iVar2 = get_time_difference(iVar7, iVar8);
	iVar3 = get_time_difference(iVar9, iVar8);
	iVar4 = get_time_difference(iVar7, iVar9);
	iVar10 = get_player_ped(iVar6);
	if (!does_entity_exist(iVar10))
	{
		func_725(iVar0);
		func_723(iVar0, 0);
		func_726(iVar6);
		return;
	}
	iVar11 = get_entity_model(iVar10);
	if (iVar11 != -171876066 && iVar11 != -1481695040)
	{
		iVar5 = func_730((func_729() - iVar4), 1, func_729());
		fVar12 = (to_float(iVar3) / to_float(iVar5));
		fVar13 = func_731(fVar12, 0f, 1f);
		iVar1 = floor(func_732(48f, 255f, (1f - fVar13)));
		set_entity_alpha(iVar10, iVar1, false);
		func_733(iVar6, iVar1);
		func_734(iVar6);
	}
	_0xf3354d6ca46f419d(iVar10, 0);
	if (iVar2 > func_729())
	{
		func_723(iVar0, 3);
		func_726(iVar6);
	}
}

void func_418()
{
	iVar0 = func_413();
	iVar1 = int_to_playerindex(iVar0);
	if (!_network_is_player_index_valid(iVar1))
	{
		func_725(iVar0);
		func_723(iVar0, 0);
		return;
	}
	if (!network_is_player_active(iVar1))
	{
		func_725(iVar0);
		func_723(iVar0, 0);
		return;
	}
	if (!func_720(iVar1, 2))
	{
		func_725(iVar0);
		func_723(iVar0, 0);
		return;
	}
	iVar2 = get_player_ped(iVar1);
	if (!does_entity_exist(iVar2))
	{
		func_725(iVar0);
		func_723(iVar0, 0);
		return;
	}
	iVar3 = get_player_ped(player_id());
	if (!does_entity_exist(iVar3))
	{
		return;
	}
	fVar4 = func_721(get_entity_coords(iVar2, true, false), get_entity_coords(iVar3, true, false));
	if (fVar4 > func_722())
	{
		return;
	}
	func_724(iVar0, get_network_time_accurate());
	func_723(iVar0, 1);
}

void func_419()
{
	iVar0 = func_413();
	iVar1 = int_to_playerindex(iVar0);
	if (!_network_is_player_index_valid(iVar1))
	{
		func_725(iVar0);
		func_723(iVar0, 0);
		return;
	}
	if (!network_is_player_active(iVar1))
	{
		func_725(iVar0);
		func_723(iVar0, 0);
		return;
	}
	if (!func_720(iVar1, 2))
	{
		func_725(iVar0);
		func_723(iVar0, 0);
		return;
	}
}

void func_420(int iParam0)
{
	if (iParam0 == &Global_1296859)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		func_421(iParam0);
		return;
	}
	iVar1 = Global_1211327[iParam0];
	iVar2 = (*Global_1211327)[iParam0]->f_1;
	if (iVar1 == -1 || iVar2 == -1)
	{
		func_421(iParam0);
		return;
	}
	if (iVar1 == Global_1211327[network_player_id_to_int()] && iVar2 == (*Global_1211327)[network_player_id_to_int()]->f_1)
	{
		func_421(iParam0);
		return;
	}
	if (does_entity_exist(Global_1211392->f_48[iVar1][iVar2]))
	{
		func_421(iParam0);
		return;
	}
	if (vdist(Global_35, (*Global_1211392->f_48[iVar1])[iVar2]->f_1) > 100f)
	{
		func_421(iParam0);
		return;
	}
	func_735(iParam0, iVar1, iVar2);
}

void func_421(int iParam0)
{
	if (_0x91a5f9cbebb9d936(&(Global_1211392->f_1099[iParam0])))
	{
		remove_scenario_blocking_area(&(Global_1211392->f_1099[iParam0]), false);
	}
}

void func_422()
{
	Global_1102219->f_26.f_3348 = { 0f, 0f, 0f };
	Global_1102219->f_26.f_3354 = { 0f, 0f, 0f };
	Global_1102219->f_26.f_3347 = 1;
}

void func_423(int iParam0, int iParam1)
{
	if (func_736(iParam1, iParam0))
	{
		if (!_0x179a6f0ee2e79026(Global_1296379->f_23[iParam0]))
		{
			Global_1296379->f_23[iParam0]->f_1 = &Global_1296473;
			Global_1296379->f_23[iParam0]->f_2 = 4000;
		}
		else if (!_0x72b2e00c9bac6789(Global_1296379->f_23[iParam0], iParam1))
		{
			Global_1296379->f_23[iParam0]->f_1 = &Global_1296473;
			Global_1296379->f_23[iParam0]->f_2 += 2000;
			if (Global_1296379->f_23[iParam0]->f_2 > 5000)
			{
				Global_1296379->f_23[iParam0]->f_2 = 5000;
			}
		}
		_0x31010318ba9897ac(Global_1296379->f_23[iParam0], iParam1);
	}
	else
	{
		_0xd426e2e3288469d6(Global_1296379->f_23[iParam0], iParam1);
	}
	if (!_0x179a6f0ee2e79026(Global_1296379->f_23[iParam0]))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (absi(get_time_difference(Global_1296379->f_23[iParam0]->f_1, &Global_1296473)) < Global_1296379->f_23[iParam0]->f_2)
			{
				return;
			}
			break;
	}
	if (!func_737(&(Global_1296379->f_23[iParam0]), iParam0))
	{
		return;
	}
	_0xde544b7ec0c187cc(Global_1296379->f_23[iParam0]);
}

void func_424(var uParam0)
{
	iVar0 = int_to_playerindex(Global_1296473->f_69);
	if (!_0x179a6f0ee2e79026(&(uParam0->f_2)))
	{
		func_738(uParam0, 2);
		return;
	}
	if (_0x72b2e00c9bac6789(&(uParam0->f_2), Global_1296473->f_69))
	{
		if (!network_is_player_connected(iVar0))
		{
			func_739(uParam0, iVar0, Global_1296473->f_69);
		}
		else if (func_573(16, Global_1296473->f_69))
		{
			_0x31010318ba9897ac(&(uParam0->f_4), Global_1296473->f_69);
		}
	}
	if (count_player_bits(&(uParam0->f_4)) < count_player_bits(&(uParam0->f_2)))
	{
		return;
	}
	func_738(uParam0, 1);
}

void func_425(var uParam0)
{
	if (!_network_is_player_index_valid(uParam0->f_3) || !network_is_player_connected(uParam0->f_3))
	{
		uParam0->f_3 = 255;
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!_0x72b2e00c9bac6789(&(uParam0->f_2), iVar0))
			{
			}
			else
			{
				iVar1 = int_to_playerindex(iVar0);
				if (!network_is_player_connected(iVar1))
				{
					func_739(uParam0, iVar1, iVar0);
				}
				else if (func_573(64, iVar0))
				{
				}
				else
				{
					uParam0->f_3 = int_to_playerindex(iVar0);
				}
				else
				{
					iVar0++;
				}
				if (!_network_is_player_index_valid(uParam0->f_3))
				{
					func_738(uParam0, 2);
				}
				return;
				iVar2 = uParam0->f_3;
				if (func_573(64, iVar2))
				{
					uParam0->f_3 = 255;
					return;
				}
				if (!func_573(32, iVar2))
				{
					return;
				}
				func_738(uParam0, 2);
			}
		}
	}
}

void func_426(var uParam0, int iParam1)
{
	iVar0 = int_to_playerindex(Global_1296473->f_69);
	if (_0x72b2e00c9bac6789(&(uParam0->f_2), Global_1296473->f_69))
	{
		if (!network_is_player_connected(iVar0))
		{
			func_739(uParam0, iVar0, Global_1296473->f_69);
		}
		else if (func_573(128, Global_1296473->f_69))
		{
			_0x31010318ba9897ac(&(uParam0->f_5), Global_1296473->f_69);
		}
	}
	if (_0x179a6f0ee2e79026(&(uParam0->f_2)))
	{
		if (count_player_bits(&(uParam0->f_5)) < count_player_bits(&(uParam0->f_2)))
		{
			return;
		}
	}
	func_740(iParam1);
}

void func_427(int iParam0)
{
	Global_1893587 = (Global_1893587 || iParam0);
}

void func_428(var uParam0)
{
	Var0.f_2 = -1;
	Var0.f_2.f_1 = -1;
	Var0.f_2.f_5 = 255;
	Var0.f_11 = 3;
	Var0.f_15 = -1;
	Var0.f_15.f_1 = 9;
	Var0.f_15.f_12 = 7;
	Var0.f_15.f_20 = 2;
	Var0.f_41.f_1 = 9;
	Var0.f_41.f_1.f_1.f_1 = -1;
	Var0.f_41.f_1.f_1.f_2 = -1;
	Var0.f_41.f_1.f_1.f_3 = 7;
	Var0.f_41.f_1.f_1.f_11 = 2;
	Var0.f_41.f_1.f_1.f_16.f_1 = -1;
	Var0.f_41.f_1.f_1.f_16.f_2 = -1;
	Var0.f_41.f_1.f_1.f_16.f_3 = 7;
	Var0.f_41.f_1.f_1.f_16.f_11 = 2;
	Var0.f_41.f_1.f_1.f_16.f_16.f_1 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_2 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_3 = 7;
	Var0.f_41.f_1.f_1.f_16.f_16.f_11 = 2;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_1 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_2 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_3 = 7;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_11 = 2;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_187.f_1 = -1;
	Var0.f_187.f_2 = -1;
	Var0.f_187.f_3 = -1;
	Var0.f_187.f_3.f_1 = -1;
	Var0.f_187.f_11 = 4;
	Var0.f_187.f_36 = 32;
	Var0.f_187.f_36.f_193 = 2147483647;
	Var0.f_418.f_2 = -1;
	Var0.f_418.f_3 = 9;
	Var0.f_418.f_4 = 6;
	Var0.f_418.f_5 = -1;
	Var0.f_425 = 18;
	Var0.f_425.f_19 = 18;
	Var0.f_466 = 4;
	iVar471 = 0;
	while (iLocal_474 < 7)
	{
		Var0.f_15.f_12[iLocal_474] = 255;
		iVar471 = iLocal_474 + 1;
	}
	*uParam0 = { Var0 };
	func_741(&(uParam0->f_15));
	func_742(&(uParam0->f_41));
}

void func_429(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_743((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_430(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_744((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_431(var uParam0)
{
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_22 = 10;
	*uParam0 = { Var0 };
	iVar33 = 0;
	while (iVar33 < 10)
	{
		uParam0->f_11[iVar33] = 0;
		(*uParam0)[iVar33] = 0;
		uParam0->f_22[iVar33] = 255;
		iVar33++;
	}
}

void func_432(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_745((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_433(var uParam0)
{
	Var0.f_1 = 1;
	Var0.f_2.f_1 = 1;
	Var0.f_4 = 7;
	iVar12 = 0;
	iVar12 = 0;
	while (iVar12 <= 31)
	{
		*(*uParam0)[iVar12] = { Var0 };
		iVar12++;
	}
}

void func_434(var uParam0)
{
	Var0 = 180;
	*uParam0 = { Var0 };
}

void func_435(var uParam0)
{
	Var0 = -1;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		*(*uParam0)[iVar2] = { Var0 };
		iVar2++;
	}
}

void func_436(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_746((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_437(var uParam0)
{
	Var0 = 32;
	Var0.f_1.f_1 = -1;
	Var0.f_1.f_2 = -1;
	Var0.f_1.f_3 = -1;
	Var0.f_1.f_3.f_1 = -1;
	Var0.f_1.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3 = -1;
	Var0.f_1.f_3.f_5 = -1;
	Var0.f_1.f_3.f_5.f_1 = -1;
	Var0.f_1.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_1 = -1;
	Var0.f_1.f_16.f_2 = -1;
	Var0.f_1.f_16.f_3 = -1;
	Var0.f_1.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_513.f_2 = 5;
	Var0.f_513.f_3 = 5;
	Var0.f_513.f_3.f_1 = -1;
	Var0.f_513.f_3.f_1.f_1 = -1;
	Var0.f_513.f_3.f_1.f_2 = -1;
	Var0.f_513.f_3.f_1.f_3 = 255;
	Var0.f_513.f_3.f_1.f_4 = -1;
	Var0.f_513.f_3.f_1.f_5 = -1;
	Var0.f_513.f_3.f_1.f_6 = -1;
	Var0.f_513.f_3.f_1.f_8 = 2;
	Var0.f_513.f_3.f_1.f_8.f_1 = -1;
	Var0.f_513.f_3.f_1.f_8.f_5 = -1;
	Var0.f_513.f_3.f_1.f_8.f_5.f_1 = -1;
	Var0.f_513.f_3.f_1.f_8.f_5.f_3 = -1;
	Var0.f_513.f_3.f_1.f_8.f_5.f_4 = -1;
	Var0.f_513.f_3.f_1.f_8.f_5.f_5 = -1;
	Var0.f_513.f_3.f_1.f_8.f_5.f_6 = -1;
	Var0.f_513.f_3.f_1.f_8.f_5.f_6.f_1 = -1;
	Var0.f_513.f_3.f_1.f_8.f_5.f_9 = 2;
	Var0.f_513.f_3.f_1.f_23.f_1 = 1024;
	Var0.f_513.f_3.f_1.f_23.f_4 = -15;
	Var0.f_513.f_3.f_1.f_23.f_5 = 255;
	Var0.f_513.f_3.f_1.f_23.f_8 = 1;
	Var0.f_513.f_3.f_1.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_513.f_3.f_1.f_23.f_13 = -1;
	Var0.f_513.f_3.f_1.f_40 = -1;
	Var0.f_513.f_3.f_1.f_40.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_2 = -1;
	Var0.f_513.f_3.f_1.f_40.f_3 = 255;
	Var0.f_513.f_3.f_1.f_40.f_4 = -1;
	Var0.f_513.f_3.f_1.f_40.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_6 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8 = 2;
	Var0.f_513.f_3.f_1.f_40.f_8.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8.f_5.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8.f_5.f_3 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8.f_5.f_4 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8.f_5.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8.f_5.f_6 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8.f_5.f_9 = 2;
	Var0.f_513.f_3.f_1.f_40.f_23.f_1 = 1024;
	Var0.f_513.f_3.f_1.f_40.f_23.f_4 = -15;
	Var0.f_513.f_3.f_1.f_40.f_23.f_5 = 255;
	Var0.f_513.f_3.f_1.f_40.f_23.f_8 = 1;
	Var0.f_513.f_3.f_1.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_513.f_3.f_1.f_40.f_23.f_13 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_2 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_3 = 255;
	Var0.f_513.f_3.f_1.f_40.f_40.f_4 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_6 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8 = 2;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_513.f_3.f_1.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_513.f_3.f_1.f_40.f_40.f_23.f_4 = -15;
	Var0.f_513.f_3.f_1.f_40.f_40.f_23.f_5 = 255;
	Var0.f_513.f_3.f_1.f_40.f_40.f_23.f_8 = 1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_513.f_3.f_1.f_40.f_40.f_23.f_13 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_2 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_3 = 255;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_4 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_6 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8 = 2;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_4 = -15;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_5 = 255;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_8 = 1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_13 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_2 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_3 = 255;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_4 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_6 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8 = 2;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_4 = -15;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_5 = 255;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8 = 1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_13 = -1;
	*uParam0 = { Var0 };
}

void func_438(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_439(var uParam0)
{
	Var0 = -1;
	Var0.f_1 = 32;
	Var0.f_35 = 2;
	Var0.f_38 = 3;
	Var0.f_43 = 2;
	Var0.f_49 = 3;
	*uParam0 = { Var0 };
}

void func_440(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_439((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_441(var uParam0)
{
	Var0 = 2;
	Var0.f_3 = 3;
	*uParam0 = { Var0 };
}

void func_442(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_441((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_443(int iParam0)
{
	Global_1107216->f_750 = iParam0;
}

void func_444()
{
	Global_1107216->f_750.f_1 = get_network_time_accurate();
}

void func_445()
{
	(*Global_1128574)[player_id()]->f_49.f_4 = 1;
}

void func_446(int iParam0)
{
	Global_1109804->f_6371.f_2 = (Global_1109804->f_6371.f_2 || iParam0);
}

void func_447(var uParam0)
{
	*uParam0 = 0;
}

void func_448(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	uParam0->f_3 = 0;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	uParam0->f_12 = -1;
}

void func_449(var uParam0)
{
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		uParam0->f_1[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_10 = 0;
	func_747(&(uParam0->f_11));
	func_748(&(uParam0->f_581));
	func_749(&(uParam0->f_872));
	func_750(&(uParam0->f_919));
	func_751(&(uParam0->f_928));
	func_752(&(uParam0->f_929));
	uParam0->f_1402 = 0;
	func_753(&(uParam0->f_1403));
	func_754(&(uParam0->f_1423));
	func_755(&(uParam0->f_1429));
}

void func_450(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_448((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_451(var uParam0)
{
	Var0 = 32;
	Var0.f_1 = -1;
	Var0.f_1.f_2 = -1;
	Var0.f_1.f_2.f_1 = -1;
	Var0.f_1.f_2.f_1.f_1 = -1;
	Var0.f_1.f_2.f_3 = -1;
	Var0.f_1.f_6 = -1;
	Var0.f_1.f_6.f_2 = -1;
	Var0.f_1.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_193.f_2 = 5;
	Var0.f_193.f_3 = 5;
	Var0.f_193.f_3.f_1 = -1;
	Var0.f_193.f_3.f_1.f_1 = -1;
	Var0.f_193.f_3.f_1.f_2 = -1;
	Var0.f_193.f_3.f_1.f_3 = 255;
	Var0.f_193.f_3.f_1.f_4 = -1;
	Var0.f_193.f_3.f_1.f_5 = -1;
	Var0.f_193.f_3.f_1.f_6 = -1;
	Var0.f_193.f_3.f_1.f_8 = 2;
	Var0.f_193.f_3.f_1.f_8.f_1 = -1;
	Var0.f_193.f_3.f_1.f_8.f_5 = -1;
	Var0.f_193.f_3.f_1.f_8.f_5.f_1 = -1;
	Var0.f_193.f_3.f_1.f_8.f_5.f_3 = -1;
	Var0.f_193.f_3.f_1.f_8.f_5.f_4 = -1;
	Var0.f_193.f_3.f_1.f_8.f_5.f_5 = -1;
	Var0.f_193.f_3.f_1.f_8.f_5.f_6 = -1;
	Var0.f_193.f_3.f_1.f_8.f_5.f_6.f_1 = -1;
	Var0.f_193.f_3.f_1.f_8.f_5.f_9 = 2;
	Var0.f_193.f_3.f_1.f_23.f_1 = 1024;
	Var0.f_193.f_3.f_1.f_23.f_4 = -15;
	Var0.f_193.f_3.f_1.f_23.f_5 = 255;
	Var0.f_193.f_3.f_1.f_23.f_8 = 1;
	Var0.f_193.f_3.f_1.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_193.f_3.f_1.f_23.f_13 = -1;
	Var0.f_193.f_3.f_1.f_40 = -1;
	Var0.f_193.f_3.f_1.f_40.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_2 = -1;
	Var0.f_193.f_3.f_1.f_40.f_3 = 255;
	Var0.f_193.f_3.f_1.f_40.f_4 = -1;
	Var0.f_193.f_3.f_1.f_40.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_6 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8 = 2;
	Var0.f_193.f_3.f_1.f_40.f_8.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8.f_5.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8.f_5.f_3 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8.f_5.f_4 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8.f_5.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8.f_5.f_6 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8.f_5.f_9 = 2;
	Var0.f_193.f_3.f_1.f_40.f_23.f_1 = 1024;
	Var0.f_193.f_3.f_1.f_40.f_23.f_4 = -15;
	Var0.f_193.f_3.f_1.f_40.f_23.f_5 = 255;
	Var0.f_193.f_3.f_1.f_40.f_23.f_8 = 1;
	Var0.f_193.f_3.f_1.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_193.f_3.f_1.f_40.f_23.f_13 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_2 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_3 = 255;
	Var0.f_193.f_3.f_1.f_40.f_40.f_4 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_6 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8 = 2;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_193.f_3.f_1.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_193.f_3.f_1.f_40.f_40.f_23.f_4 = -15;
	Var0.f_193.f_3.f_1.f_40.f_40.f_23.f_5 = 255;
	Var0.f_193.f_3.f_1.f_40.f_40.f_23.f_8 = 1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_193.f_3.f_1.f_40.f_40.f_23.f_13 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_2 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_3 = 255;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_4 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_6 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8 = 2;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_4 = -15;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_5 = 255;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_8 = 1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_13 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_2 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_3 = 255;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_4 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_6 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8 = 2;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_4 = -15;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_5 = 255;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8 = 1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_13 = -1;
	*uParam0 = { Var0 };
}

void func_452(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_756((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_453(var uParam0)
{
	Var0.f_3 = 3;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_1.f_3 = 255;
	Var0.f_3.f_1.f_6 = -1;
	Var0.f_3.f_1.f_6.f_3 = 255;
	Var0.f_3.f_1.f_6.f_6 = -1;
	Var0.f_3.f_1.f_6.f_6.f_3 = 255;
	Var0.f_23 = 1;
	*uParam0 = { Var0 };
}

void func_454(var uParam0)
{
	Var0.f_1 = -1;
	*uParam0 = { Var0 };
}

void func_455(var uParam0)
{
	Var0.f_3.f_3 = -1;
	Var0.f_3.f_3.f_1 = -1;
	Var0.f_3.f_5 = 1;
	Var0.f_3.f_6 = 7;
	Var0.f_63 = -1;
	*uParam0 = { Var0 };
}

void func_456(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_454((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_457()
{
	func_757(Global_1211327);
}

void func_458(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_758((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_459(var uParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_8 = -1082130432;
	_copy_memory(uParam0, &Var0, 9);
}

void func_460(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_459((*uParam0)[iVar0]);
		iVar0++;
	}
}

int func_461(int iParam0)
{
	if (!func_671(iParam0))
	{
		return -1;
	}
	if (func_759(iParam0) >= 336)
	{
		return 0;
	}
	return (30 - (func_760(iParam0) - 336));
}

bool func_462(int iParam0)
{
	iVar0 = func_761(iParam0, 1);
	if (iVar0 == -1)
	{
		return true;
	}
	if (Global_1071686->f_19648.f_24 && !func_762(iVar0))
	{
		return true;
	}
	switch (iVar0)
	{
		case -2043909922:
			if (!func_763(-1145153057) && func_764(-763.5972f, -1263.053f, 43.02452f, 100f))
			{
				return false;
			}
			break;
		case -1145153057:
			if (!func_763(-2043909922) && func_764(-763.5972f, -1263.053f, 43.02452f, 100f))
			{
				return false;
			}
			break;
		case 589380360:
			if (!func_763(468797819) && func_764(2499.046f, -1307.856f, 47.95675f, 100f))
			{
				return false;
			}
			break;
		case 468797819:
			if (!func_763(589380360) && func_764(2499.046f, -1307.856f, 47.95675f, 100f))
			{
				return false;
			}
			break;
		case -632127260:
			if (!func_763(965467037) && func_764(-1811.496f, -352.1608f, 160.4848f, 100f))
			{
				return false;
			}
			break;
		case 965467037:
			if (!func_763(-632127260) && func_764(-1811.496f, -352.1608f, 160.4848f, 100f))
			{
				return false;
			}
			break;
		case -209894800:
			if (!func_763(-279765076) && func_764(-272.9644f, 810.0542f, 118.3835f, 100f))
			{
				return false;
			}
			break;
		case -279765076:
			if (!func_763(-209894800) && func_764(-272.9644f, 810.0542f, 118.3835f, 100f))
			{
				return false;
			}
			break;
		case -1585840296:
		case -510945576:
			if (func_764(347.239f, 1490.71f, 178.557f, 100f))
			{
				return false;
			}
			break;
		case 1238086793:
			if (!func_765(-414301703, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -1344601768:
			if (!func_765(728379187, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 1302228510:
			if (!func_765(-1809365172, 1120403456, 1133084672))
			{
				return false;
			}
			else if (func_766())
			{
				return false;
			}
			break;
		case -460024530:
			if (!func_765(1092530042, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -108780030:
			if (!func_765(-2051059045, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 1698972798:
			if (!func_765(-1408478050, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -1340339190:
			if (!func_765(-612173099, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -1296807958:
			if (!func_765(-1974746920, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -1283202000:
			if (!func_765(1171226610, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -1610966108:
			if (!func_765(406701199, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -693828600:
			if (!func_765(1502951187, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 1321892118:
			if (!func_765(-1151968796, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -61411516:
			if (!func_765(1975720265, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 582380806:
			if (!func_765(508578717, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 1932172605:
			if (!func_765(-848533860, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 1159471771:
			if (!func_765(830856441, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 784360470:
			if (!func_765(-522767301, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 1881028477:
			if (!func_765(-2103414139, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 1703398561:
			if (!func_765(771896020, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -1209597203:
			if (!func_765(895825612, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -897750037:
			if (!func_765(1256749990, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 929582877:
			if (!func_765(-1934886317, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -911126844:
			if (!func_765(993438435, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -355531636:
			if (!func_765(1495728629, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -1455998786:
			if (!func_765(967935536, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -851626677:
			if (!func_765(-773956478, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -734416508:
			if (!func_765(-1615749463, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -396624371:
			if (!func_765(-361709910, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 885777893:
			if (!func_765(-1323334072, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 619839857:
			if (!func_765(-1521897637, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 2113625508:
			if (!func_765(-716370751, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 1549124796:
			if (!func_765(-2053832767, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -502473159:
			if (!func_765(372806894, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 229371495:
			if (!func_765(-1534577778, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -781631220:
			if (!func_765(-2024941402, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 1708045337:
			if (!func_765(-50297425, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 1166612791:
			if (!func_765(536714458, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 74872959:
			if (!func_765(2068117822, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 1744443559:
			if (!func_765(-576687258, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 509781469:
			if (!func_765(226557169, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 885378256:
			if (!func_765(476687617, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -524787708:
			if (!func_765(1856368424, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -1861414976:
			if (!func_765(568096966, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 747514327:
			if (!func_765(1104817207, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -1042021329:
			if (!func_765(478888800, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -591815673:
			if (!func_765(1955414013, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 883901517:
			if (!func_765(-1207218596, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 1561093093:
			if (!func_765(-116967529, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 1287917122:
			if (!func_765(-605808708, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -1943367752:
			if (!func_765(-100150000, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -371827125:
			if (!func_765(-320403109, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -889906510:
			if (!func_765(18369533, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 64896505:
			if (!func_765(-331965904, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -1161687045:
			if (!func_765(127191252, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 526003171:
			if (!func_765(-2074957003, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -895073533:
			if (!func_765(-1226747327, 1120403456, 1133084672) || !func_765(-141795616, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -2066272360:
			if (!func_765(-1973910443, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 93964309:
			if (!func_765(1707200698, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 2103908624:
			if (!func_765(1883767827, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -2142074819:
		case -2141419899:
		case -2100409704:
		case -2056579774:
		case -1939389836:
		case -1932919229:
		case -1914141706:
		case -1906892166:
		case -1882707460:
		case -1848799275:
		case -1842033327:
		case -1827602683:
		case -1808329564:
		case -1753769127:
		case -1749433374:
		case -1749043433:
		case -1719055206:
		case -1705799799:
		case -1684974589:
		case -1673998598:
		case -1664435783:
		case -1624627591:
		case -1578292898:
		case -1573753524:
		case -1556041029:
		case -1547280108:
		case -1502194556:
		case -1462313959:
		case -1445041595:
		case -1442844448:
		case -1422877860:
		case -1395855864:
		case -1387772214:
		case -1378911044:
		case -1369678628:
		case -1341750998:
		case -1339871203:
		case -1319875891:
		case -1290997627:
		case -1287894233:
		case -1262828457:
		case -1181950077:
		case -1120447016:
		case -1095341658:
		case -1023919011:
		case -1004266677:
		case -947815572:
		case -941648233:
		case -931337253:
		case -895307590:
		case -888632790:
		case -852602679:
		case -839820438:
		case -800891377:
		case -797689456:
		case -729679654:
		case -677920206:
		case -635323621:
		case -630295963:
		case -604603161:
		case -583127403:
		case -574190021:
		case -500245243:
		case -492731190:
		case -489737721:
		case -448554447:
		case -414883443:
		case -381925743:
		case -364475655:
		case -329176208:
		case -297483764:
		case -243260793:
		case -226366310:
		case -211583122:
		case -207792846:
		case -110352060:
		case -102827640:
		case -101740709:
		case -90486812:
		case -89829333:
		case -75928821:
		case -74031276:
		case -70727482:
		case -38135693:
		case 16844748:
		case 84709454:
		case 148595040:
		case 215903338:
		case 237155783:
		case 321629486:
		case 404823609:
		case 560154875:
		case 565812320:
		case 640520536:
		case 642824856:
		case 673606600:
		case 715735881:
		case 730069127:
		case 799106423:
		case 803929300:
		case 804063423:
		case 826868753:
		case 831940854:
		case 846837291:
		case 896725436:
		case 943561238:
		case 982765715:
		case 1028084603:
		case 1032791043:
		case 1126565489:
		case 1153686207:
		case 1157309080:
		case 1232840551:
		case 1248935549:
		case 1279586666:
		case 1280406542:
		case 1325325699:
		case 1341699707:
		case 1362354162:
		case 1421300489:
		case 1480425906:
		case 1494062795:
		case 1517951665:
		case 1521272922:
		case 1601722481:
		case 1666964801:
		case 1788424349:
		case 1812677765:
		case 1866434585:
		case 1891256113:
		case 2013720626:
		case 2048790450:
		case 2068208444:
		case 2068253437:
		case 2079292950:
		case 2127412005:
			iVar1 = func_767(iVar0);
			if (iVar1 != -1554566073)
			{
				if (!func_765(iVar1, 1120403456, 1133084672))
				{
					return false;
				}
			}
			else
			{
				return vdist(Global_35, func_768(iVar0)) > 100f;
			}
			break;
		case -812641169:
			if (!func_765(104287396, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -554519756:
			if (!func_765(715920781, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 865557632:
			if (!func_765(-900541220, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 1112996351:
			if (!func_765(-1199296193, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -1608141409:
			if (!func_765(546408124, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -311373772:
			if (!func_765(-1232784731, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 61537448:
			if (!func_765(301558156, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case -925071604:
			if (!func_765(1683033662, 1120403456, 1133084672))
			{
				return false;
			}
			break;
		case 1195508693:
			if (!func_765(-643041038, 1120403456, 1133084672))
			{
				return false;
			}
			break;
	}
	return true;
}

int func_463(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = func_183();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 623901053;
	}
	return func_769(get_unique_int_for_player(&(Global_1296859->f_154[iParam0])));
}

int func_464()
{
	return get_ped_relationship_group_hash(player_ped_id());
}

bool func_465(int iParam0)
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

int func_466(int iParam0)
{
	return iParam0;
}

void func_467(int iParam0)
{
	if (!func_770(iParam0))
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

bool func_468(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

bool func_469(int iParam0)
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

bool func_470()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_5;
}

bool func_471()
{
	return Global_1900736->f_67;
}

bool func_472(int iParam0)
{
	return ((func_222(0, iParam0) || func_222(1, iParam0)) || func_222(2, iParam0));
}

int func_473(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		iParam0 = player_id();
	}
	iVar0 = iParam0;
	if (func_340(iParam0) > 2)
	{
		return 1;
	}
	if ((*Global_263042)[iVar0]->f_1.f_16 != 0)
	{
		return 1;
	}
	if ((*Global_263042)[iVar0]->f_1 != 255)
	{
		return 1;
	}
	if ((*Global_263042)[iVar0]->f_1.f_18 != 2147483647)
	{
		return 1;
	}
	return 0;
}

int func_474()
{
	iVar0 = 0;
	Var2.f_8 = -1;
	Var2.f_8.f_1 = -1;
	Var2.f_16.f_12 = -1;
	Var2.f_16.f_12.f_1 = -1;
	Var2.f_16.f_14 = 255;
	Var2.f_16.f_15 = 255;
	iVar1 = 0;
	while (iVar1 < Global_1071686->f_16)
	{
		Var2 = { func_225(iVar1) };
		if (!func_226(&Var2))
		{
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_475()
{
	return Global_1572887->f_106.f_75;
}

bool func_476()
{
	return Global_1051252->f_80.f_102 > 0;
}

bool func_477()
{
	return Global_1132288->f_2042 > 0;
}

bool func_478()
{
	iVar0 = 0;
	while (iVar0 < &Global_1138048)
	{
		if (((*Global_1138048)[iVar0]->f_4 && !func_97(*(*Global_1138048)[iVar0])) && vdist(*(*Global_1138048)[iVar0], Global_35) <= 30f)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_479()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&Global_1107216->f_33[iVar0] != 0)
		{
			if (_0x93a91a351a07360e(&(Global_1107216->f_33[iVar0])))
			{
				if (&Global_1107216->f_33[iVar0] == Global_1296859->f_15)
				{
					if (func_18(Global_1107216->f_33[iVar0]->f_3.f_5))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_480()
{
	return Global_1248240->f_9296 != -1;
}

char* func_481(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "Stry";
		case 3:
			return "Proc";
		case 4:
			return "Fetch";
		case 5:
			return "Mini";
		case 8:
			return "Beat";
		case 7:
			return "UGC";
		case 6:
			return "FMA";
		default:
			break;
	}
	return "Unknown";
}

bool func_482()
{
	return (_does_anim_scene_exist(Global_26538) && _is_anim_scene_started(Global_26538, false));
}

bool func_483(int iParam0)
{
	if (iParam0 <= 0 || iParam0 >= 9)
	{
		return false;
	}
	return true;
}

bool func_484(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return Global_1293165[iParam0] == iParam0;
}

bool func_485(var uParam0)
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

char[] func_486(char[4] cParam0)
{
	return cParam0;
}

bool func_487(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 32)
	{
		return false;
	}
	return func_240((*Global_1138411)[iParam2][iParam0], iParam1);
}

int func_488(int iParam0)
{
	return Global_1128574[iParam0];
}

bool func_489(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 32);
}

struct<2> func_490(int iParam0)
{
	return Global_1107216->f_33[iParam0]->f_3.f_5;
}

var func_491(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_492(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		return 1;
	}
	if (func_771())
	{
		return 0;
	}
	_request_imap(iParam0);
	return 0;
}

int func_493(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		return 1;
	}
	if (func_771())
	{
		return 0;
	}
	_remove_imap(iParam0);
	return 0;
}

struct<4> func_494(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_710(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_495(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_495(bool bParam0)
{
	if (func_57() == -1)
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

struct<16> func_496(var uParam0, bool bParam1)
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
		Var0.f_15 = func_711(uParam0->f_4, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_709() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_497(int iParam0, int iParam1)
{
	if ((!func_289() || !network_is_game_in_progress()) || !network_is_session_active())
	{
		return false;
	}
	if (!func_90(16))
	{
		return false;
	}
	if (func_26())
	{
		if (!_unlock_is_unlocked(-75008140))
		{
			return false;
		}
	}
	if (!func_772())
	{
		return false;
	}
	if (func_719(16))
	{
		return false;
	}
	iVar0 = _0x901e0dc25080c8b9(player_id());
	if (iParam1 == 1 && (!_0xd6f6acf4392187fb(iVar0) || !_0x424b17a7dc5c90bc(player_id())))
	{
		return false;
	}
	if (iParam0 == 1 && func_240(Global_1137047->f_8, 1))
	{
		return false;
	}
	if (func_773())
	{
		return false;
	}
	return true;
}

void func_498()
{
	(*Global_1134390)[network_player_id_to_int()]->f_33.f_4 = 0;
}

void func_499(int iParam0)
{
	func_774(&((*Global_1134390)[network_player_id_to_int()]->f_33.f_4), iParam0);
}

bool func_500(int iParam0)
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

void func_501()
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

bool func_502(int iParam0)
{
	return func_240(Global_1137047->f_8, iParam0);
}

void func_503(int iParam0)
{
	Global_1132288->f_2019 = iParam0;
}

int func_504(vector3 vParam0)
{
	iVar0 = func_775(vParam0, 0f, 0f, 0, 2);
	return func_775(vParam0, (*Global_1892740)[iVar0]->f_1, (*Global_1892740)[iVar0]->f_2, Global_1892740[iVar0], 4);
}

bool func_505(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_506(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

void func_507(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_776(iParam0);
	if (!func_581(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_580(128) && !func_777(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_778() == 4)
	{
		func_251(18);
	}
	func_779(1024);
}

int func_508(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9;
		case 1:
			return 10;
		case 2:
			return 11;
		case 3:
			return 12;
		case 4:
			return 13;
		default:
			break;
	}
	return -1;
}

int func_509(int iParam0, var uParam1)
{
	*uParam1 = iParam0;
	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2971f, -1324.285f, 46.89f };
			uParam1->f_8 = 0.29f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 111;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400f;
			uParam1->f_5 = { 1339.562f, -1372.173f, 83.2967f };
			uParam1->f_8 = 80f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 98;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300f;
			uParam1->f_5 = { 2938.582f, 520.6577f, 44.3412f };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2f;
			return 1;
		case 3:
			uParam1->f_1 = 1;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -936.9756f, -1390.084f, 49.5777f };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 4:
			uParam1->f_1 = 1;
			uParam1->f_2 = 74;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { 1522.005f, 431.2095f, 89.679f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 5:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150f;
			uParam1->f_5 = { 2515.659f, -1245.743f, 49.5757f };
			uParam1->f_8 = -45f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 6:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1826.215f, -433.9676f, 159.7386f };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 7:
			uParam1->f_1 = 3;
			uParam1->f_2 = 81;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.8849f };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 8:
			uParam1->f_1 = 3;
			uParam1->f_2 = 98;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { 2946.444f, 500.1154f, 45.53999f };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 9:
			uParam1->f_1 = 2;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2148f, -1316.547f, 42.6787f };
			uParam1->f_8 = 60f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 10:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { 2630.74f, -1226.25f, 52.3794f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 11:
			uParam1->f_1 = 2;
			uParam1->f_2 = 80;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f };
			uParam1->f_8 = -63f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 12:
			uParam1->f_1 = 2;
			uParam1->f_2 = 121;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -5510.395f, -2913.764f, 0.6353f };
			uParam1->f_8 = 90f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 13:
			uParam1->f_1 = 2;
			uParam1->f_2 = 81;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f };
			uParam1->f_8 = 135f;
			uParam1->f_9 = 2.5f;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_510(int iParam0)
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

int func_511(int iParam0)
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

var func_512(int iParam0, int iParam1)
{
	Var1 = { func_780(iParam0, iParam1) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

bool func_513(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_514(int iParam0)
{
	if (func_516(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_515(int iParam0)
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

bool func_516(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_517(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_518()
{
	if (!func_26())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

bool func_519(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_468(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_183())
	{
		return func_468(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_468(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

void func_520(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_521(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_522()
{
	func_781(-1687561002);
	func_781(1957225320);
	func_781(-860696938);
	func_781(-1971474291);
	func_781(-1425946870);
	func_781(-1114426126);
	func_781(-316909020);
	func_781(-1962893335);
	func_781(1351589798);
	func_781(300868838);
	func_781(-1788578071);
	func_781(1157066259);
	func_781(1475953931);
	func_781(2022451711);
	func_781(970924250);
	func_781(-1177590512);
	func_781(-1611076340);
	func_782(446964392);
}

void func_523()
{
	func_781(1209017192);
	func_781(-2143243848);
	func_781(510052409);
	func_781(-644575724);
	func_781(291770965);
	func_781(1700661865);
	func_781(1070723367);
	func_781(1261237250);
	func_781(-109425099);
	func_781(1402472902);
	func_781(1802272784);
	func_781(-1458944281);
	func_781(2108368013);
	func_782(1802272784);
	func_782(-1999825729);
}

void func_524()
{
	func_781(-1232260252);
	func_781(1404611977);
	func_781(-1395712024);
}

void func_525()
{
	func_781(414622870);
	func_781(557551306);
	func_781(-412827149);
	func_782(1802272784);
	func_782(414622870);
}

void func_526()
{
	func_781(531106429);
	func_781(1069611813);
	func_781(1102643191);
	func_781(44502487);
	func_781(-1869016398);
	func_781(806681228);
	func_781(1311984381);
	func_781(-1162254606);
}

bool func_527(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 7:
		case 8:
			return false;
		case 3:
		case 5:
			switch (iParam1)
			{
				case 0:
					return false;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return false;
			}
			break;
	}
	return true;
}

struct<8> func_528(int iParam0, int iParam1)
{
	StringCopy(&cVar0, func_783(iParam0), 64);
	StringConCat(&cVar0, "_nav_camp_", 64);
	StringConCat(&cVar0, func_784(iParam1), 64);
	return cVar0;
}

int func_529(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 84;
		case 0:
			return 45;
		case 2:
			return 104;
		case 4:
			return 63;
		case 1:
			return 76;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 39;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

void func_530(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = 0;
		while (iVar1 < 6)
		{
			func_785(iParam1, iVar0, iVar1, bParam2, bParam3);
			iVar1++;
		}
		iVar0++;
	}
}

void func_531(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_532(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_533(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_534(int iParam0, int iParam1)
{
	iVar0 = func_538(*iParam0);
	iVar1 = func_537(*iParam0);
	if (iParam1 < 1 || iParam1 > func_543(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_535(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_536(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || shift_left((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || shift_left((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

int func_537(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_786(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_538(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_539(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_540(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_541(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_542(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_543(int iParam0, int iParam1)
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

void func_544(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_536(iParam0, iParam6);
	func_535(iParam0, iParam5);
	func_534(iParam0, iParam4);
	func_533(iParam0, iParam3);
	func_532(iParam0, iParam2);
	func_531(iParam0, iParam1);
}

void func_545(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = ((func_537(iParam0) + func_538(iParam0)) + func_539(iParam0));
	*uParam3 = uParam1;
	*uParam4 = func_539(iParam0);
}

void func_546(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	iVar0 = (func_787(uParam3, uParam4, uParam5) % 6);
	if (0 == iParam1)
	{
		iVar0 = (iVar0 % 3);
	}
	else
	{
		if (6 == iParam1)
		{
			iVar0 = (iVar0 % 3) + 3;
		}
		if (iVar0 == (*uParam0)[(iParam1 - 1)][iParam2])
		{
			iVar0 = (iVar0 + 1 % 6);
			if (6 == iParam1 && iVar0 < 3)
			{
				iVar0 = 3;
			}
		}
	}
	(*(*uParam0)[iParam1])[iParam2] = iVar0;
}

int func_547(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 262189671;
		case 1:
			return -1865796416;
		case 2:
			return -2102912900;
		case 3:
			return -1471781960;
		case 4:
			return -1711487195;
		case 5:
			return 1532840411;
		default:
			break;
	}
	return 262189671;
}

int func_548(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1859451998;
		case 1:
			return 467802382;
		case 2:
			return 212892331;
		case 3:
			return -137539355;
		case 4:
			return -366824048;
		case 5:
			return -1952384882;
		default:
			break;
	}
	return -1859451998;
}

int func_549(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1381272898;
		case 1:
			return 1539809320;
		case 2:
			return -2102137352;
		case 3:
			return 199098446;
		case 4:
			return 1462376165;
		case 5:
			return 1885620569;
		default:
			break;
	}
	return 1381272898;
}

int func_550(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1285238734;
		case 1:
			return -888012916;
		case 2:
			return -1211213567;
		case 3:
			return -1116052391;
		case 4:
			return 1314063884;
		case 5:
			return 1644572018;
		default:
			break;
	}
	return -1285238734;
}

int func_551(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1561655701;
		case 1:
			return 1218924734;
		case 2:
			return 1516368947;
		case 3:
			return 1984048115;
		case 4:
			return -2013016202;
		case 5:
			return -1745916083;
		default:
			break;
	}
	return 1561655701;
}

int func_552(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 40018245;
		case 1:
			return -1586372771;
		case 2:
			return -1356105008;
		case 3:
			return -1175547818;
		case 4:
			return -877579301;
		case 5:
			return 1138992134;
		default:
			break;
	}
	return 40018245;
}

int func_553(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -158969429;
		case 1:
			return 147060262;
		case 2:
			return -486692198;
		case 3:
			return 886099519;
		case 4:
			return -1789128804;
		case 5:
			return -1617026016;
		default:
			break;
	}
	return -158969429;
}

int func_554(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1414390857;
		case 1:
			return -490927668;
		case 2:
			return 345304443;
		case 3:
			return -564887297;
		case 4:
			return 267084844;
		case 5:
			return 1120782832;
		default:
			break;
	}
	return -1414390857;
}

int func_555(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -112719434;
		case 1:
			return 1796697427;
		case 2:
			return -1827848894;
		case 3:
			return 1960444124;
		case 4:
			return -1311048995;
		case 5:
			return -1542168752;
		default:
			break;
	}
	return -112719434;
}

int func_556(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 346286482;
		case 1:
			return 82987567;
		case 2:
			return -145707284;
		case 3:
			return 1940236180;
		case 4:
			return 1558018564;
		case 5:
			return 1310186617;
		default:
			break;
	}
	return 346286482;
}

int func_557(int iParam0, bool bParam1)
{
	iVar0 = floor(func_788(iParam0, bParam1));
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

int func_558()
{
	return Global_1051252->f_12;
}

char* func_559()
{
	return "unnamed";
}

int func_560(int iParam0)
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

bool func_561(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_519(36, iParam0);
}

bool func_562(int iParam0)
{
	if (func_789(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_790(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

bool func_563(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

int func_564()
{
	return Global_1071686->f_16.f_2;
}

void func_565()
{
	if (func_564() == -1)
	{
		return;
	}
	func_791(Global_1071686->f_16.f_2.f_1);
	vVar0 = -1;
	Global_1071686->f_16.f_2 = { vVar0 };
}

void func_566(int iParam0)
{
	Global_1071686->f_16.f_2 = iParam0;
}

bool func_567(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

void func_568()
{
	iVar0 = 1;
	iVar1 = network_player_id_to_int();
	if ((*Global_1291106)[iVar1]->f_3 & 1 == 0)
	{
		if ((*Global_1291106)[iVar1]->f_3 & 2 != 0)
		{
			iVar0 |= 4;
		}
		if ((*Global_1291106)[iVar1]->f_3 & 4 != 0)
		{
			iVar0 |= 8;
		}
		if ((*Global_1291106)[iVar1]->f_3 & 8 != 0)
		{
			iVar0 |= 16;
		}
		if ((*Global_1291106)[iVar1]->f_3 & 16 != 0)
		{
			iVar0 = 2;
		}
	}
	_0x4ec8be63b8a5d4ef(player_id(), iVar0);
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
	if (!func_58(Global_1197355[network_player_id_to_int()], iParam0))
	{
		func_59((*Global_1197355)[network_player_id_to_int()], iParam0);
		Global_1051252->f_45.f_1 = 1;
	}
}

void func_570(int iParam0)
{
	if (!Global_1071686->f_3)
	{
		return;
	}
	if (!network_is_in_session())
	{
		return;
	}
	if (func_58(Global_1197355[network_player_id_to_int()], iParam0))
	{
		func_56((*Global_1197355)[network_player_id_to_int()], iParam0);
		Global_1051252->f_45.f_1 = 1;
	}
}

int func_571(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 60;
		case 2:
			return 300;
		case 4:
			return 600;
		case 8:
			return 1800;
		case 16:
			return 3600;
		case 32:
			return 7200;
		case 64:
			return 10800;
		case 128:
			return 14400;
		case 256:
			return 18000;
		case 512:
			return 21600;
		default:
			break;
	}
	return 0;
}

void func_572(int iParam0, int iParam1)
{
	if (func_58(Global_1051436->f_2, iParam0))
	{
		return;
	}
	func_59(&(Global_1051436->f_2), (iParam0 || iParam1));
}

bool func_573(int iParam0, int iParam1)
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

void func_574(int iParam0)
{
	iVar0 = network_player_id_to_int();
	if (iVar0 == 255)
	{
		return;
	}
	(*Global_1296406)[iVar0] = (Global_1296406[iVar0] || iParam0);
}

int func_575(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
		if (func_792(iVar0, 2))
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
		func_793(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

bool func_576(int iParam0, bool bParam1)
{
	if (bParam1 && !func_465(iParam0))
	{
		return false;
	}
	iVar0 = func_466(iParam0);
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

void func_577(int iParam0)
{
	iVar0 = network_player_id_to_int();
	if (iVar0 == 255)
	{
		return;
	}
	(*Global_1296406)[iVar0] = (Global_1296406[iVar0] - (Global_1296406[iVar0] && iParam0));
}

bool func_578(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1296379->f_2), iParam0))
	{
		return false;
	}
	return true;
}

void func_579(int iParam0)
{
	Global_1296473->f_64 = iParam0;
}

bool func_580(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_581(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

void func_582()
{
	if (!func_794(2))
	{
		return;
	}
	if (func_795())
	{
		return;
	}
	if (func_344(0) != -1)
	{
		return;
	}
	iVar0 = func_344(1);
	if (iVar0 != -1 && !func_796(iVar0))
	{
		func_797(2);
		func_349(-373925780);
	}
}

int func_583()
{
	return Global_1297470->f_50;
}

int func_584()
{
	return Global_1297470->f_50.f_1;
}

bool func_585(int iParam0)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 == 0)
	{
		return false;
	}
	return (iVar0 == iParam0 && _0x59fa676177dbe4c9(iVar0) <= 4);
}

var func_586(int iParam0)
{
	if (!func_640(&uVar0))
	{
		return 0;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 16, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 41, iParam0, 0, 1))
	{
		return 0;
	}
	return func_798(&uVar0, 7);
}

int func_587()
{
	return Global_1297470->f_50.f_2;
}

bool func_588()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) <= 4);
}

var func_589()
{
	sVar0 = _create_var_string(0, func_799(func_583(), func_587()));
	return func_285(sVar0, 10000, 0, 0, 0, 1);
}

void func_590(int iParam0)
{
	Global_1297470->f_50.f_1 = iParam0;
}

void func_591(int iParam0)
{
	func_505(&(Global_1297470->f_50.f_3), func_643(iParam0, 1), 1);
}

void func_592()
{
	Global_1297470->f_50 = uVar0;
}

void func_593(int iParam0)
{
	Global_1297470->f_50.f_2 = iParam0;
}

int func_594(int iParam0)
{
	return &(Global_1297470->f_50.f_3[iParam0]);
}

int func_595(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -667134878;
		case 1:
			return -1813872822;
		case 2:
			return -887362116;
		case 3:
			return -1221663008;
		case 4:
			return -1208093116;
		case 5:
			return -551064688;
		case 6:
			return -373925780;
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

bool func_596(int iParam0)
{
	return func_468(&(Global_1297470->f_50.f_3), func_643(iParam0, 1), 1);
}

void func_597(int iParam0)
{
	Global_1297470->f_50 = iParam0;
}

int func_598()
{
	if (!func_640(&uVar0))
	{
		return 0;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	return func_798(&uVar0, 0);
}

int func_599(int iParam0)
{
	iVar0 = (5 - 1);
	while (iVar0 >= 0)
	{
		iVar3 = iVar0;
		iVar2 = func_800(iVar3, 1);
		if (iVar2 == -1)
		{
		}
		else
		{
			if (iVar0 != (5 - 1))
			{
				iVar1 = shift_left(iVar1, iVar2);
			}
			iVar1 = (iVar1 || func_801(iVar3, iParam0));
		}
		iVar0 = (iVar0 + -1);
	}
	return iVar1;
}

var func_600(int iParam0)
{
	if (!func_640(&uVar0))
	{
		return 0;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 36, 0, 0, 0))
	{
		return 0;
	}
	return func_798(&uVar0, 8);
}

struct<4> func_601(int iParam0, int iParam1)
{
	if (!func_640(&uVar0))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 19, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 36, 0, 0, 0))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 37, iParam1, 0, 1))
	{
		return Var5;
	}
	iVar9 = func_802(&uVar0);
	return func_803(iVar9);
}

void func_602(var uParam0, int iParam1)
{
	if (!func_804(uParam0, iParam1))
	{
		return;
	}
	iVar0 = func_805();
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_806(*uParam0, &uVar1, 1, 255, 0, 0))
	{
		return;
	}
	func_807(iVar0, &uVar1, iParam1, uParam0->f_3);
}

void func_603(int iParam0, var uParam1)
{
	_copy_memory(uParam1, Global_1297470->f_111[iParam0], 4);
}

bool func_604(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_605(int iParam0)
{
	if (!func_640(&uVar0))
	{
		return 0;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	return func_798(&uVar0, 1);
}

var func_606(int iParam0, int iParam1)
{
	if (!func_640(&uVar0))
	{
		return 0;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 24, 0, 0, 0))
	{
		return 0;
	}
	return func_798(&uVar0, 2);
}

bool func_607(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_640(&Var4))
	{
		return false;
	}
	if (!func_641(&Var4, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_641(&Var4, 17, 0, 0, 1))
	{
		return false;
	}
	if (!func_641(&Var4, 19, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_641(&Var4, 20, 0, 0, 1))
	{
		return false;
	}
	if (!func_641(&Var4, 23, iParam1, 0, 1))
	{
		return false;
	}
	if (!func_641(&Var4, 43, 0, 0, 0))
	{
		if (func_641(&Var4, 24, 0, 0, 0))
		{
			if (!func_641(&Var4, 25, iParam2, 0, 1))
			{
				return false;
			}
			if (!func_641(&Var4, 43, 0, 0, 1))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	uVar9 = Var4.f_1;
	iVar11 = func_798(&Var4, 9);
	iVar10 = 0;
	while (iVar10 <= (iVar11 - 1))
	{
		Var4.f_1 = uVar9;
		if (!func_641(&Var4, 44, iVar10, 0, 1))
		{
			return false;
		}
		Var0 = { func_808(Var4) };
		if (!func_809(&Var0, iParam3))
		{
			return false;
		}
		iVar10++;
	}
	return true;
}

void func_608(int iParam0, int iParam1, int iParam2)
{
	Global_1297470->f_76[iParam0]->f_1[iParam1] = iParam2;
}

void func_609(int iParam0, int iParam1)
{
	Global_1297470->f_76[iParam0] = iParam1;
}

void func_610(int iParam0)
{
	Global_1297470->f_2.f_45 = iParam0;
}

void func_611(int iParam0, int iParam1)
{
	Global_1297470->f_2[iParam0]->f_16 = iParam1;
}

var func_612(int iParam0)
{
	if (!func_810(&uVar0, iParam0, -337291755))
	{
		return 0;
	}
	return func_811(&uVar0);
}

void func_613(int iParam0, var uParam1)
{
	Global_1297470->f_2[iParam0]->f_17 = uParam1;
}

struct<2> func_614(int iParam0, int iParam1)
{
	if (!func_640(&uVar0))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 19, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 34, 0, 0, 0))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 35, iParam1, 0, 0))
	{
		return Var5;
	}
	iVar7 = func_812(&uVar0);
	iVar8 = func_813(&uVar0);
	return func_780(iVar7, iVar8);
}

void func_615(int iParam0, struct<2> Param1)
{
	Global_1297470->f_2[iParam0]->f_18 = { Param1 };
}

bool func_616(int iParam0)
{
	return func_618(iParam0, 0) != 0;
}

void func_617(int iParam0, bool bParam1)
{
	Global_1297470->f_2[iParam0]->f_20 = bParam1;
}

var func_618(int iParam0, int iParam1)
{
	if (!func_640(&uVar0))
	{
		return 0;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	return func_814(&uVar0, iParam1);
}

void func_619(int iParam0, int iParam1)
{
	Global_1297470->f_2[iParam0]->f_21 = iParam1;
}

var func_620(int iParam0, int iParam1)
{
	if (!func_640(&uVar0))
	{
		return 0;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	return func_815(&uVar0);
}

void func_621(int iParam0, int iParam1, var uParam2)
{
	(*Global_1297470->f_2[iParam0])[iParam1] = uParam2;
}

int func_622()
{
	return Global_1297470->f_2.f_45;
}

int func_623(int iParam0)
{
	return Global_1297470->f_2[iParam0]->f_16;
}

void func_624()
{
	iVar1 = func_598();
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar5 = iVar0;
		iVar3 = func_605(iVar5);
		iVar2 = 0;
		while (iVar2 <= (iVar3 - 1))
		{
			iVar6 = iVar2;
			iVar7 = func_816(iVar5, iVar6);
			switch (iVar7)
			{
				case -1:
					iVar8 = 0;
					break;
				case 0:
					iVar8 = 0;
					break;
				case 15:
					iVar8 = 5;
					break;
				default:
					switch (iVar7)
					{
						case 1:
							iVar8 = 3;
							break;
						case 2:
							iVar8 = 4;
							break;
						default:
							iVar8 = 0;
							break;
					}
					break;
			}
			if (iVar8 == 0)
			{
			}
			else
			{
				uVar4 = func_620(iVar5, iVar6);
				_0xe824ce7d13fcb300(uVar4, iVar8);
			}
			iVar2++;
		}
		iVar0++;
	}
}

int func_625()
{
	return Global_1297470->f_48;
}

int func_626()
{
	return Global_1297470->f_48.f_1;
}

var func_627(int iParam0, int iParam1)
{
	return Global_1297470->f_2[iParam0][iParam1];
}

int func_628(int iParam0)
{
	return Global_1297470->f_2[iParam0]->f_17 * 60;
}

struct<2> func_629(int iParam0)
{
	return Global_1297470->f_2[iParam0]->f_18;
}

bool func_630(int iParam0)
{
	return Global_1297470->f_2[iParam0]->f_20;
}

int func_631(int iParam0)
{
	return &(Global_1297470->f_76[iParam0]);
}

var func_632(int iParam0)
{
	return Global_1297470->f_2[iParam0]->f_21;
}

void func_633(int iParam0)
{
	Global_1297470->f_48.f_1 = iParam0;
}

void func_634(int iParam0)
{
	Global_1297470->f_48 = iParam0;
}

struct<5> func_635(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	iVar7 = iParam0;
	iVar5 = 0;
	while (iVar5 <= (5 - 1))
	{
		iVar8 = iVar5;
		iVar6 = func_800(iVar8, 1);
		if (iVar6 == -1)
		{
		}
		else
		{
			func_817(iVar8, &Var0, iVar7);
			iVar7 = shift_right(iVar7, iVar6);
		}
		iVar5++;
	}
	return Var0;
}

var func_636(int iParam0, int iParam1)
{
	if (!func_640(&uVar0))
	{
		return 0;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	return func_818(&uVar0);
}

struct<2> func_637(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_819(iParam0, &(Global_1071686->f_636), func_76(iParam1));
			break;
		case 3:
			Var0.f_1 = func_819(iParam0, &(Global_1071686->f_636.f_602), func_76(iParam1));
			break;
		case 4:
			Var0.f_1 = func_819(iParam0, &(Global_1071686->f_636.f_2104), func_76(iParam1));
			break;
		case 5:
			Var0.f_1 = func_819(iParam0, &(Global_1071686->f_636.f_12606), func_76(iParam1));
			break;
		case 6:
			Var0.f_1 = func_819(iParam0, &(Global_1071686->f_636.f_12908), func_76(iParam1));
			break;
		case 7:
			Var0.f_1 = func_819(iParam0, &(Global_1071686->f_636.f_15910), func_76(iParam1));
			break;
		case 8:
			Var0.f_1 = func_819(iParam0, &(Global_1071686->f_636.f_16512), func_76(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_820();
	}
	return Var0;
}

void func_638(int iParam0, var uParam1)
{
	func_821(iParam0, uParam1->f_3.f_2);
	func_822(iParam0, uParam1->f_3.f_3);
	func_823(iParam0, uParam1->f_3.f_4);
	func_824(iParam0, uParam1->f_3);
	func_825(iParam0, uParam1->f_3.f_1);
	func_826(iParam0, *uParam1);
	func_827(iParam0, uParam1->f_2);
}

void func_639(int iParam0)
{
	Var17 = -1;
	Var17.f_1 = -1;
	Var17.f_3 = -1;
	Var17.f_3.f_1 = -1;
	Var17.f_3.f_2 = -1;
	Var17.f_3.f_3 = -1;
	Var17.f_3.f_4 = -1;
	Var17.f_3 = { func_635(iParam0) };
	iVar1 = func_828(Var17.f_3, Var17.f_3.f_1, Var17.f_3.f_2);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var6 = { func_829(Var17, iVar0) };
		func_830(&Var6, iParam0);
		iVar0++;
	}
	iVar1 = func_831(Var17.f_3, Var17.f_3.f_1, Var17.f_3.f_2);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var12 = { func_832(&Var17, iVar0) };
		func_833(&Var12, iParam0);
		iVar0++;
	}
	iVar1 = func_834(Var17.f_3, Var17.f_3.f_1, Var17.f_3.f_2);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var2 = { func_835(Var17, iVar0) };
		func_602(&Var2, iParam0);
		iVar0++;
	}
}

bool func_640(var uParam0)
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

bool func_641(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

struct<8> func_642(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (!_datafile_get_string(&Var0, uParam0))
	{
	}
	return Var0;
}

int func_643(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1813872822:
			return 1;
		case -1221663008:
			return 3;
		case -1208093116:
			return 4;
		case -887362116:
			return 2;
		case -667134878:
			return 0;
		case -551064688:
			return 5;
		case -373925780:
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

struct<8> func_644(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_3 = -1;
	Var0.f_3.f_4 = -1;
	_copy_memory(&Var0, Global_1297470->f_55.f_4[iParam0], 8);
	return Var0;
}

void func_645(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_3 = -1;
	Var0.f_3.f_4 = -1;
	func_638(iParam0, &Var0);
}

bool func_646(int iParam0)
{
	return (Global_1297470->f_55.f_1.f_2 && iParam0) != 0;
}

var func_647()
{
	return Global_1109804->f_21;
}

int func_648(int iParam0)
{
	return Global_1109804[iParam0];
}

void func_649(int iParam0)
{
	if (Global_1109804->f_17)
	{
		func_836(iParam0);
	}
	else
	{
		func_837(iParam0);
	}
}

void func_650(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_838(iParam0, 1))
	{
		return;
	}
	bVar0 = func_839();
	func_840(iParam0);
	if (iParam1 == -1)
	{
		iVar1 = Global_1198046->f_231.f_1066[iParam0]->f_7;
		if (iVar1 > 1)
		{
			iVar1 = 1;
		}
		iParam1 = 0;
		while (iParam1 < iVar1)
		{
			func_841(iParam0, iParam1, bVar0);
			iParam1++;
		}
	}
	else
	{
		func_841(iParam0, iParam1, bVar0);
	}
	if (bVar0)
	{
		func_842(iParam0);
	}
}

bool func_651()
{
	return func_843();
}

void func_652(var uParam0, var uParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	*uParam1++;
	if (*uParam1 >= *uParam0)
	{
		*uParam1 = 0;
	}
	iVar0 = ((uParam0->f_1 + *uParam1) % uParam0->f_2);
	Var1 = -1;
	Var1.f_2 = -1;
	Var1.f_3 = 255;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_8 = 2;
	Var1.f_8.f_1 = -1;
	Var1.f_8.f_5 = -1;
	Var1.f_8.f_5.f_1 = -1;
	Var1.f_8.f_5.f_3 = -1;
	Var1.f_8.f_5.f_4 = -1;
	Var1.f_8.f_5.f_5 = -1;
	Var1.f_8.f_5.f_6 = -1;
	Var1.f_8.f_5.f_6.f_1 = -1;
	Var1.f_8.f_5.f_9 = 2;
	Var1.f_23.f_1 = 1024;
	Var1.f_23.f_4 = -15;
	Var1.f_23.f_5 = 255;
	Var1.f_23.f_8 = 1;
	Var1.f_23.f_8.f_1.f_1 = 2147483647;
	Var1.f_23.f_13 = -1;
	if (uParam0->f_3[iVar0]->f_2 != -1)
	{
		Var1 = { func_844(&(Global_1198046->f_28), *uParam0->f_3[iVar0]) };
		func_845(Var1, uParam0, uParam0->f_3[iVar0]);
	}
}

void func_653(int iParam0)
{
	iVar0 = func_846(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (!_0x93a91a351a07360e(iVar0))
	{
		Var1 = -1;
		Var1.f_1 = -1;
		Var1.f_3 = -1;
		Var1.f_4 = -1;
		Var1.f_5 = -1;
		Var1.f_6 = -1;
		Var1.f_6.f_1 = -1;
		Var1.f_9 = 2;
		Var1 = { func_490(iParam0) };
		if (func_18(Var1))
		{
			iVar11 = func_847(&Var1);
			if (iVar11 != func_848(iParam0))
			{
				if (func_849(iVar11))
				{
					func_850(iParam0, iVar11);
				}
			}
		}
		func_851(iParam0);
	}
}

void func_654(int iParam0)
{
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	iVar1 = func_852(iVar0, -1);
	iVar4 = _0x901e0dc25080c8b9(iVar0);
	if (func_489(iVar1))
	{
		if (func_846(iVar1) == iVar4)
		{
			return;
		}
	}
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar5 = func_846(iVar2);
		if (func_853(iVar2) != -1)
		{
		}
		else
		{
			if (iVar5 == 0)
			{
				iVar3 = iVar2;
			}
			else if (!_0x93a91a351a07360e(iVar5))
			{
				iVar3 = iVar2;
			}
			else
			{
				if (iVar5 == iVar4)
				{
					return;
				}
				iVar2++;
			}
			if (iVar3 == -1)
			{
				return;
			}
			func_854(iVar3, iVar4);
		}
	}
}

void func_655(int iParam0)
{
	switch (func_853(iParam0))
	{
		case -1:
			bVar1 = func_855(iParam0, &uVar0);
			break;
		case 0:
			bVar1 = func_856(iParam0, &uVar0);
			break;
		case 1:
			bVar1 = func_857(iParam0, &uVar0);
			break;
		case 2:
			bVar1 = func_858(iParam0, &uVar0);
			break;
		case 3:
			bVar1 = func_859(iParam0, &uVar0);
			break;
		case 4:
			bVar1 = func_860(iParam0, &uVar0);
			break;
		case 5:
			bVar1 = func_861(iParam0, &uVar0);
			break;
		case 6:
			bVar1 = func_862(iParam0, &uVar0);
			break;
		case 7:
			bVar1 = func_863(iParam0, &uVar0);
			break;
		case 9:
			bVar1 = func_864(iParam0, &uVar0);
			break;
		case 8:
			bVar1 = func_865(iParam0, &uVar0);
			break;
		default:
			break;
	}
	if (bVar1)
	{
		func_867(iParam0, uVar0, func_866(iParam0));
	}
}

void func_656()
{
	func_868(3, (func_648(3) + 1 % 32));
	func_868(0, (func_648(0) + 1 % 32));
}

void func_657()
{
	iVar0 = func_852(player_id(), -1);
	if (!func_489(iVar0))
	{
		return;
	}
	Var1 = { func_869(iVar0) };
	if (!func_870(Var1.f_5, Var1.f_3))
	{
		return;
	}
	Var14 = -1;
	Var14.f_1 = -1;
	Var14.f_3 = -1;
	Var14 = { Var1.f_5 };
	if (func_18(Var1.f_5))
	{
		Var14.f_3 = Var1.f_3;
		Var14.f_2 = func_19(Var1.f_5);
	}
	else
	{
		Var14.f_3 = -1;
		Var14.f_2 = 0;
	}
	func_871(&Var14);
}

void func_658()
{
	iVar8 = player_id();
	bVar2 = func_872(iVar8, 1);
	bVar3 = func_872(iVar8, 2);
	bVar0 = func_872(iVar8, 4);
	bVar1 = func_872(iVar8, 8);
	bVar4 = func_872(iVar8, 32);
	bVar5 = (func_18(func_873()) && !func_18(func_874()));
	bVar7 = func_875() == true;
	bVar6 = (func_876() >= 23 || func_876() == 0);
	if (func_877() != _0x901e0dc25080c8b9(iVar8) && (func_878() == 4 || (bVar4 && !func_879(255))))
	{
		if (bVar4)
		{
			if (is_screen_faded_out() || is_screen_fading_out())
			{
				do_screen_fade_in(2000);
			}
		}
		func_880();
		return;
	}
	if (bVar4)
	{
		if ((func_881() == 0 && !bVar0) || bVar1)
		{
			if (is_screen_faded_in() && !func_879(255))
			{
				func_882(4);
				func_882(8);
				func_882(32);
				func_883(0);
				func_884(func_820());
			}
		}
	}
	if ((func_885() == -1 && !bVar5) && ((bVar7 && bVar6) || !bVar7))
	{
		if (bVar2)
		{
			func_880();
		}
		return;
	}
	iVar9 = func_852(iVar8, -1);
	if (!func_489(iVar9))
	{
		return;
	}
	if (((((!bVar5 && ((bVar7 && bVar6) || !bVar7)) && func_877() != _0x901e0dc25080c8b9(player_id())) && bVar3) && !bVar0) && func_878() != 2)
	{
		func_880();
		return;
	}
	if (!bVar2)
	{
		return;
	}
	if (!bVar5 && func_878() != 4)
	{
		if (func_885() != 4)
		{
			return;
		}
	}
	if (!bVar3)
	{
		switch (func_885())
		{
			case 4:
				if (!_0xa2cac9def0195e6f(0))
				{
					func_886(2);
				}
				break;
			default:
				func_886(2);
				break;
		}
		return;
	}
	if (!bVar1)
	{
		return;
	}
	func_880();
}

void func_659()
{
	iVar0 = func_648(4);
	if (func_887(iVar0))
	{
		func_888(iVar0);
	}
	else
	{
		func_889(iVar0);
	}
}

void func_660()
{
	iVar0 = func_648(5);
	iVar1 = iVar0;
	if (func_890(iVar1))
	{
		func_891(iVar1);
	}
	else
	{
		func_892(iVar1);
	}
}

void func_661()
{
	if (func_893(255))
	{
		func_894(1);
	}
	else
	{
		func_894(2);
	}
}

void func_662()
{
	iVar0 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
	if (!_network_is_player_index_valid(iVar0))
	{
		return;
	}
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	if (!func_895(iVar0, 1024))
	{
		return;
	}
	if (func_18(func_873()))
	{
		return;
	}
	iVar1 = get_game_timer();
	if (func_896(131072))
	{
		if ((iVar1 - func_897()) < Global_1901947->f_308.f_37)
		{
			return;
		}
	}
	func_898(iVar0);
	func_899(iVar1);
	func_900(131072);
}

void func_663()
{
	if (!func_901())
	{
		return;
	}
	if (_0x901e0dc25080c8b9(player_id()) != func_902())
	{
		func_903();
		return;
	}
	iVar0 = func_904(func_902());
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_905(iVar0))
	{
		return;
	}
	if (func_853(iVar0) != 0)
	{
		return;
	}
	if (!func_907(func_906(), func_490(iVar0)) && func_18(func_490(iVar0)))
	{
		func_903();
		return;
	}
	if (func_908(iVar0, 2))
	{
		func_903();
		return;
	}
	Var1.f_1 = -1;
	func_909(&Var1);
	func_914(func_910(), func_911(), func_912(), func_913(), func_906(), Var1, 1);
	func_903();
}

void func_664()
{
	Var0 = 3;
	iVar5 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
	if (_network_is_player_index_valid(iVar5) && network_is_player_active(iVar5))
	{
		func_915(iVar5, &Var0);
		if (Var0.f_4)
		{
			func_916(&Var0);
		}
	}
	if (func_917(2))
	{
		func_918(&Var0);
		func_919(&Var0);
		func_920(2);
	}
}

void func_665()
{
	Var0 = 2;
	iVar4 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
	if (_network_is_player_index_valid(iVar4) && network_is_player_active(iVar4))
	{
		func_921(iVar4, &Var0);
		if (Var0.f_3)
		{
			func_922(&Var0);
		}
	}
	if (func_917(4))
	{
		func_923(&Var0);
		func_924(&Var0);
		func_920(4);
	}
}

void func_666()
{
	Var0 = 3;
	uVar5 = 3;
	if (player_id() == Global_1102219->f_3674)
	{
		iVar10 = 0;
		while (iVar10 <= 6)
		{
			if (!_network_is_player_index_valid(&(Global_1102219->f_3675[iVar10])))
			{
			}
			else if (!network_is_player_active(&(Global_1102219->f_3675[iVar10])))
			{
			}
			else
			{
				func_925(&(Global_1102219->f_3675[iVar10]), &uVar5);
				if (!uVar5.f_4)
				{
				}
				else
				{
					iVar11 = 0;
					while (iVar11 <= 2)
					{
						Var0[iVar11] = (Var0[iVar11] || uVar5[iVar11]) // PointerArith;
						iVar11++;
					}
				}
			}
			iVar10++;
		}
		Var0.f_4 = 1;
	}
	func_926(&Var0);
}

void func_667()
{
	iVar0 = func_648(6);
	iVar3 = player_id();
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (iVar0 == func_927(iVar1))
		{
			if (func_928(iVar1) != 0)
			{
				bVar2 = true;
			}
		}
	else
	{
		}
		iVar1++;
	}
	if (!bVar2)
	{
		if (func_929(iVar3, iVar0))
		{
			func_930(iVar0);
			return;
		}
	}
}

int func_668()
{
	if (!func_931())
	{
		return 0;
	}
	Global_1194053->f_409.f_9 = 0;
	return 1;
}

void func_669()
{
	func_868(1, (func_648(1) + 1 % 32));
	func_868(2, (func_648(2) + 1 % 32));
	func_868(4, (func_648(4) + 1 % 36));
	func_868(5, (func_648(5) + 1 % 90));
	func_868(6, (func_648(6) + 1 % 62));
}

void func_670()
{
	Global_1939655 = 3;
	Global_1939655->f_289 = 1;
}

bool func_671(int iParam0)
{
	iVar0 = func_760(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

void func_672(int iParam0, var uParam1)
{
	iVar0 = Global_1071686->f_19648.f_20;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar2 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar2))
		{
		}
		else if (func_11(iVar2) != 8)
		{
		}
		else
		{
			Global_1071686->f_19648.f_19 = (Global_1071686->f_19648.f_19 || (*Global_1056141)[iVar1]->f_425[iParam0]) // PointerArith;
			Global_1071686->f_19648.f_20 = (Global_1071686->f_19648.f_20 && (*Global_1056141)[iVar1]->f_425.f_19[iParam0]) // PointerArith;
		}
		iVar1++;
	}
	func_932(iParam0);
	if (Global_1071686->f_19648.f_19 == &Global_1071686->f_19648[iParam0] && iVar0 == Global_1071686->f_19648.f_20)
	{
		*uParam1 = 1;
	}
	else
	{
		Global_1071686->f_19648.f_23 = 1;
	}
}

void func_673(int iParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar2 = (Global_1071686->f_19648.f_22 + iVar1);
		if (iVar2 > 31)
		{
			bVar0 = true;
		}
		else
		{
			if (is_bit_set(&((*Global_1056141)[iParam0]->f_425[iParam1]), iVar2))
			{
				clear_bit((*Global_1056141)[iParam0]->f_425.f_19[iParam1], iVar2);
			}
			else if (!is_bit_set(&(Global_1071686->f_19648[iParam1]), iVar2))
			{
				set_bit((*Global_1056141)[iParam0]->f_425.f_19[iParam1], iVar2);
			}
			else
			{
				iVar3 = (iParam1 * 31 + iVar2);
				if (iVar3 > 544)
				{
					bVar0 = true;
				}
				else
				{
					if (func_462(iVar3))
					{
						set_bit((*Global_1056141)[iParam0]->f_425.f_19[iParam1], iVar2);
					}
					else
					{
						clear_bit((*Global_1056141)[iParam0]->f_425.f_19[iParam1], iVar2);
					}
					iVar1++;
				}
				Global_1071686->f_19648.f_22 = iVar2 + 1;
				if (bVar0 || iVar2 == 31)
				{
					if (Global_1071686->f_19648.f_20 != &(*Global_1056141)[iParam0]->f_425.f_19[iParam1])
					{
						Global_1071686->f_19648.f_20 = (Global_1071686->f_19648.f_20 && (*Global_1056141)[iParam0]->f_425.f_19[iParam1]) // PointerArith;
					}
					Global_1071686->f_19648.f_23 = 2;
				}
			}
		}
	}
}

var func_674(int iParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (is_bit_set(iParam0, iVar1))
		{
			set_bit(&uVar0, iVar1);
		}
		else if (!is_bit_set(iParam1, iVar1))
		{
			set_bit(&uVar0, iVar1);
		}
		iVar1++;
	}
	return uVar0;
}

bool func_675(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 2147483647)
	{
		return false;
	}
	return true;
}

bool func_676(int iParam0)
{
	iVar0 = iParam0;
	return (iVar0 >= 0 && iVar0 < 64);
}

int func_677(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_77(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_77(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
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

bool func_678(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

struct<2> func_679(int iParam0)
{
	if (!func_933(iParam0))
	{
		return func_820();
	}
	return (*Global_1835011)[iParam0]->f_1;
}

int func_680(struct<2> Param0)
{
	if (&Global_1900806 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1900806 - 1))
	{
		if (func_907(*(*Global_1900807)[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_681(int iParam0, int iParam1, int iParam2)
{
	if (func_517(32768))
	{
		return 0;
	}
	iVar0 = func_57();
	if (func_934(&((*Global_1835011)[iParam0]->f_30), 512) && !func_934(&((*Global_1835011)[iParam0]->f_30), 1024))
	{
		if (func_935())
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
		if (func_936(iParam0, iVar0))
		{
			vVar4 = { func_937(iParam0) };
			(*Global_1835011)[iParam0]->f_65 = _create_volume_sphere(vVar4, 0f, 0f, 0f, 19f, 19f, 19f);
			if (_does_volume_exist((*Global_1835011)[iParam0]->f_65))
			{
				(*Global_1835011)[iParam0]->f_28 = _0xa6ef0c54a3443e70(1673015813, (*Global_1835011)[iParam0]->f_65);
			}
		}
		else if (bVar3)
		{
			(*Global_1835011)[iParam0]->f_28 = _blip_add_for_coord(1673015813, func_938(iParam0));
		}
		else
		{
			(*Global_1835011)[iParam0]->f_28 = _blip_add_for_coord(1673015813, func_939(iParam0));
		}
		(*Global_1835011)[iParam0]->f_29 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2)
			{
				func_940(iParam2, 4194304);
			}
			else
			{
				func_684(iParam2, 4194304);
			}
		}
		set_blip_flash_timer((*Global_1835011)[iParam0]->f_28, 71, (*Global_1835011)[iParam0]->f_3);
	}
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_28))
	{
		return 0;
	}
	func_941(iParam0);
	if (bVar1)
	{
		set_blip_sprite((*Global_1835011)[iParam0]->f_28, (*Global_1835011)[iParam0]->f_27, true);
		if (iVar0 != -1)
		{
			_set_blip_name_from_player_string((*Global_1835011)[iParam0]->f_28, &((*Global_1835011)[iParam0]->f_42));
		}
		if (!func_934(&((*Global_1835011)[iParam0]->f_30), 1024))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_28, 580546400);
			func_942(&((*Global_1835011)[iParam0]->f_30), 1024);
		}
		if (func_934(&((*Global_1835011)[iParam0]->f_30), 524288))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_28, -401963276);
		}
		if (func_934(&((*Global_1835011)[iParam0]->f_30), 1048576))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_28, -1878373110);
			_blip_set_modifier((*Global_1835011)[iParam0]->f_28, 231194138);
		}
	}
	return 1;
}

bool func_682(int iParam0, int iParam1)
{
	return (func_678(iParam0) && ((*Global_1900838)[iParam0]->f_1 && iParam1) != 0);
}

void func_683(struct<2> Param0)
{
	if (&Global_1900806 <= 0)
	{
		return;
	}
	if (!func_18(Param0))
	{
		return;
	}
	if (func_943(Param0))
	{
		func_944(Param0, 0, -1, 0, 0);
	}
	iVar0 = func_680(Param0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1900806 > 1)
	{
		*(*Global_1900807)[iVar1] = { *((*Global_1900807)[(&Global_1900806 - 1)]) };
		*(*Global_1900838)[iVar1] = { *((*Global_1900838)[(&Global_1900806 - 1)]) };
		func_288((*Global_1900807)[(&Global_1900806 - 1)]);
		*((*Global_1900838)[(&Global_1900806 - 1)]) = { Var2 };
	}
	else
	{
		func_288((*Global_1900807)[iVar1]);
		*(*Global_1900838)[iVar1] = { Var2 };
	}
	Global_1900806 = (&Global_1900806 - 1);
	if (&Global_1900806 < 0)
	{
		Global_1900806 = 0;
	}
}

void func_684(int iParam0, int iParam1)
{
	if (!func_678(iParam0))
	{
		return;
	}
	(*Global_1900838)[iParam0]->f_1 = ((*Global_1900838)[iParam0]->f_1 - ((*Global_1900838)[iParam0]->f_1 && iParam1));
}

bool func_685(struct<2> Param0)
{
	return func_365(Param0) == 0;
}

void func_686(struct<2> Param0, bool bParam2)
{
	if (!func_18(Param0))
	{
		return;
	}
	if (!func_685(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_945(Param0);
	}
	func_946(Param0, 1);
	bParam2 = bParam2;
}

int func_687()
{
	return Global_1297047->f_419.f_1;
}

void func_688()
{
	if (!func_947())
	{
		return;
	}
	if (!func_948())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = shift_left(1, iVar0);
		iVar2 = iVar1;
		if (!func_949(iVar2))
		{
		}
		else if (!func_950(iVar2))
		{
		}
		else
		{
			func_951(iVar2);
		}
		else
		{
			iVar0++;
		}
	}
}

int func_689()
{
	return Global_1297047->f_419.f_2;
}

void func_690(int iParam0)
{
	Global_1297047->f_419.f_2 = iParam0;
}

void func_691(int iParam0)
{
	Global_1297047->f_419.f_1 = iParam0;
}

int func_692()
{
	return Global_1102219->f_3674;
}

int func_693()
{
	return Global_1297047->f_374.f_3;
}

int func_694(int iParam0, int iParam1)
{
	return (*Global_1297047)[iParam0][iParam1];
}

int func_695(int iParam0, int iParam1)
{
	return &((*Global_1297047)[iParam0]->f_3[iParam1]);
}

int func_696(int iParam0)
{
	return &(Global_1297047->f_371[iParam0]);
}

void func_697(int iParam0)
{
	(*Global_1056141)[player_id()]->f_418.f_2 = iParam0;
}

void func_698(int iParam0)
{
	(*Global_1056141)[player_id()]->f_418.f_3 = iParam0;
}

void func_699(int iParam0)
{
	(*Global_1056141)[player_id()]->f_418.f_4 = iParam0;
}

void func_700(int iParam0)
{
	(*Global_1056141)[player_id()]->f_418.f_5 = iParam0;
}

var func_701(int iParam0)
{
	return (*Global_1056141)[iParam0]->f_418.f_2;
}

void func_702(var uParam0)
{
	Global_1297047->f_374.f_2 = uParam0;
}

var func_703(int iParam0)
{
	return (*Global_1056141)[iParam0]->f_418.f_3;
}

void func_704(var uParam0)
{
	Global_1297047->f_374.f_3 = uParam0;
}

var func_705(int iParam0)
{
	return (*Global_1056141)[iParam0]->f_418.f_4;
}

void func_706(var uParam0)
{
	Global_1297047->f_374.f_4 = uParam0;
}

var func_707(int iParam0)
{
	return (*Global_1056141)[iParam0]->f_418.f_5;
}

void func_708(var uParam0)
{
	Global_1297047->f_374.f_5 = uParam0;
}

struct<4> func_709()
{
	return Var0;
}

bool func_710(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_711(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

bool func_712(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

int func_713(int iParam0)
{
	if (!func_712(iParam0))
	{
		return 0;
	}
	return &(Global_1293346->f_2985[iParam0]);
}

int func_714(int iParam0, bool bParam1)
{
	if (!func_712(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		iVar0 = func_952(iParam0);
		if (func_710(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_953(255);
			}
			else
			{
				iVar1 = func_390(iVar0, func_389(1), -1990194462, 1, 0, 0);
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
		iVar0 = func_954(iParam0);
		if (func_710(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = _0xdb438cc9bc6f4022();
			}
			else
			{
				iVar1 = func_390(iVar0, func_389(1), -1990194462, 1, 0, 0);
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

void func_715(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

void func_716(int iParam0, int iParam1, int iParam2)
{
	(*Global_1297047->f_404[iParam0])[iParam1]->f_1 = iParam2;
}

void func_717(int iParam0, int iParam1, int iParam2)
{
	(*Global_1297047->f_404[iParam0])[iParam1] = iParam2;
}

void func_718(int iParam0, int iParam1, int iParam2)
{
	(*Global_1297047->f_404[iParam0])[iParam1]->f_2 = iParam2;
}

bool func_719(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_720(int iParam0, int iParam1)
{
	return ((*Global_1100469)[iParam0]->f_51.f_1 && iParam1) != 0;
}

float func_721(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_722()
{
	return 100f;
}

void func_723(int iParam0, int iParam1)
{
	Global_1301323->f_155.f_4[iParam0] = iParam1;
}

void func_724(int iParam0, int iParam1)
{
	Global_1301323->f_155.f_4[iParam0]->f_3 = iParam1;
}

void func_725(int iParam0)
{
	func_955(iParam0);
	func_956(iParam0);
	func_724(iParam0, 0);
}

void func_726(int iParam0)
{
	Var5 = -1;
	Var5.f_9 = -1082130432;
	func_957(iParam0);
	iVar4 = get_player_ped(iParam0);
	iVar3 = get_entity_model(iVar4);
	iVar2 = func_958(iVar3);
	iVar1 = iParam0;
	if (func_959() <= 0)
	{
		if (func_960(1))
		{
			_0x5c9978a2a3dc3d0d();
			func_961(1);
		}
		if (func_960(2))
		{
			iVar0 = 0;
			while (iVar0 <= (iVar2 - 1))
			{
				if (func_962(iVar1, iVar0))
				{
				}
				else if (!func_963(iVar3, iVar0, &Var5))
				{
				}
				else
				{
					animpostfx_stop(&(Var5.f_1));
				}
				iVar0++;
			}
			func_961(2);
		}
	}
	if (does_entity_exist(iVar4))
	{
		_0x56a786e87ff53478(iVar4);
	}
}

int func_727(int iParam0)
{
	return (*Global_1100469)[iParam0]->f_51;
}

int func_728(int iParam0)
{
	return Global_1301323->f_155.f_4[iParam0]->f_3;
}

int func_729()
{
	return 3000;
}

int func_730(int iParam0, int iParam1, int iParam2)
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

float func_731(float fParam0, float fParam1, float fParam2)
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

float func_732(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_733(int iParam0, int iParam1)
{
	Var5.f_26 = -1;
	Var5.f_27 = -1082130432;
	Var5.f_28 = -1;
	Var5.f_29 = -1;
	Var5.f_30 = -1;
	Var5.f_31 = -1;
	Var5.f_32 = -1;
	iVar1 = iParam0;
	iVar4 = get_player_ped(iParam0);
	iVar3 = get_entity_model(iVar4);
	iVar2 = func_964(iVar3);
	iVar0 = 0;
	while (iVar0 <= (iVar2 - 1))
	{
		if (func_965(iVar1, iVar0))
		{
		}
		else if (!func_966(iVar3, iVar0, &Var5))
		{
		}
		else if (Var5.f_33 & 64 != 0)
		{
			if (iParam1 > Var5.f_32)
			{
			}
			else
			{
				request_named_ptfx_asset(Var5.f_16);
				if (!has_named_ptfx_asset_loaded(Var5.f_16))
				{
				}
				else
				{
					use_particle_fx_asset(&(Var5.f_8));
					if (Var5.f_33 & 8 != 0)
					{
						set_particle_fx_non_looped_colour(to_float(Var5.f_28), to_float(Var5.f_30), to_float(Var5.f_29));
					}
					if (Var5.f_33 & 16 != 0)
					{
						set_particle_fx_non_looped_alpha(to_float(Var5.f_31));
					}
					if (Var5.f_33 & 32 != 0)
					{
						_0x56c392c2bd78b024(Var5.f_23);
					}
					_0xc695870b8a149b96(&Var5, iVar4, Var5.f_17, Var5.f_20, Var5.f_26, Var5.f_27, Var5.f_33 & 1 != 0, Var5.f_33 & 2 != 0, Var5.f_33 & 4 != 0);
					func_967(iVar1, iVar0);
				}
			}
			iVar0++;
		}
	}
}

void func_734(int iParam0)
{
	Var5 = -1;
	Var5.f_9 = -1082130432;
	func_968(iParam0);
	if (!func_960(1))
	{
		_0xfaad23de7a54fc14();
		func_969(1);
	}
	iVar4 = get_player_ped(iParam0);
	iVar3 = get_entity_model(iVar4);
	iVar2 = func_958(iVar3);
	iVar1 = iParam0;
	iVar0 = 0;
	while (iVar0 <= (iVar2 - 1))
	{
		if (func_962(iVar1, iVar0))
		{
		}
		else if (!func_963(iVar3, iVar0, &Var5))
		{
		}
		else
		{
			animpostfx_play(&(Var5.f_1));
			_0x958debd9353c0935(iVar4, Var5, Var5.f_9);
			func_970(iVar1, iVar0);
			func_969(2);
		}
		iVar0++;
	}
}

void func_735(int iParam0, int iParam1, int iParam2)
{
	if ((!_0x91a5f9cbebb9d936(&(Global_1211392->f_1099[iParam0])) || Global_1211392->f_1099[iParam0]->f_1 != iParam1) || Global_1211392->f_1099[iParam0]->f_2 != iParam2)
	{
		func_421(iParam0);
		vVar0 = { (*Global_1211392->f_48[iParam1])[iParam2]->f_1 };
		vVar3 = { 2f, 2f, 2f };
		Global_1211392->f_1099[iParam0] = add_scenario_blocking_area((vVar0.x - vVar3.x), (vVar0.y - vVar3.y), (vVar0.z - vVar3.z), (vVar0.x + vVar3.x), (vVar0.y + vVar3.y), (vVar0.z + vVar3.z), 0, 16);
		Global_1211392->f_1099[iParam0]->f_1 = iParam1;
		Global_1211392->f_1099[iParam0]->f_2 = iParam2;
	}
}

bool func_736(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if ((*Global_1296406)[iParam0]->f_1 != iParam1)
	{
		return false;
	}
	if (!func_573(1, iParam0))
	{
		return false;
	}
	if (!func_573(8, iParam0))
	{
		return false;
	}
	if (!func_573(4, iParam0))
	{
		return false;
	}
	if (_0x72b2e00c9bac6789(&(Global_1296379->f_2), iParam0))
	{
		return false;
	}
	return true;
}

bool func_737(var uParam0, int iParam1)
{
	if (Global_1296379->f_22 >= 3)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!_0x72b2e00c9bac6789(&uParam0, iVar0))
		{
		}
		else if (!func_736(iVar0, iParam1))
		{
			_0xd426e2e3288469d6(&uParam0, iVar0);
		}
		iVar0++;
	}
	if (!_0x179a6f0ee2e79026(&uParam0))
	{
		return true;
	}
	func_971(Global_1296379->f_3[Global_1296379->f_22]);
	Global_1296379->f_3[Global_1296379->f_22] = iParam1;
	Global_1296379->f_3[Global_1296379->f_22]->f_2 = uParam0;
	_0xffddf802279be128(&(Global_1296379->f_2), &(Global_1296379->f_3[Global_1296379->f_22]->f_2), &uVar1);
	Global_1296379->f_2 = uVar1;
	Global_1296379->f_22++;
	return true;
}

void func_738(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_739(var uParam0, int iParam1, int iParam2)
{
	_0xd426e2e3288469d6(&(Global_1296379->f_2), iParam2);
	_0xd426e2e3288469d6(&(uParam0->f_2), iParam2);
	_0xd426e2e3288469d6(&(uParam0->f_4), iParam2);
	_0xd426e2e3288469d6(&(uParam0->f_5), iParam2);
	if (uParam0->f_3 == iParam1)
	{
		uParam0->f_3 = 255;
	}
}

void func_740(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return;
	}
	if (Global_1296379->f_22 <= 0)
	{
		return;
	}
	iVar0 = get_block_of_player_bits(&(Global_1296379->f_2), 0);
	iVar1 = get_block_of_player_bits(&(Global_1296379->f_2), 1);
	iVar2 = get_block_of_player_bits(&(Global_1296379->f_3[iParam0]->f_2), 0);
	iVar3 = get_block_of_player_bits(&(Global_1296379->f_3[iParam0]->f_2), 1);
	set_block_of_player_bits(&(Global_1296379->f_2), 0, (iVar0 - iVar2));
	set_block_of_player_bits(&(Global_1296379->f_2), 1, (iVar1 - iVar3));
	Global_1296379->f_22 = (Global_1296379->f_22 - 1);
	*Global_1296379->f_3[iParam0] = { *Global_1296379->f_3[Global_1296379->f_22] };
	func_971(Global_1296379->f_3[Global_1296379->f_22]);
}

void func_741(var uParam0)
{
	Var0 = -1;
	Var0.f_1 = 9;
	Var0.f_12 = 7;
	Var0.f_20 = 2;
	*uParam0 = { Var0 };
	iVar26 = 0;
	while (iVar26 <= 6)
	{
		uParam0->f_12[iVar26] = 255;
		iVar26++;
	}
}

void func_742(var uParam0)
{
	Var0.f_1 = 9;
	Var0.f_1.f_1.f_1 = -1;
	Var0.f_1.f_1.f_2 = -1;
	Var0.f_1.f_1.f_3 = 7;
	Var0.f_1.f_1.f_11 = 2;
	Var0.f_1.f_1.f_16.f_1 = -1;
	Var0.f_1.f_1.f_16.f_2 = -1;
	Var0.f_1.f_1.f_16.f_3 = 7;
	Var0.f_1.f_1.f_16.f_11 = 2;
	Var0.f_1.f_1.f_16.f_16.f_1 = -1;
	Var0.f_1.f_1.f_16.f_16.f_2 = -1;
	Var0.f_1.f_1.f_16.f_16.f_3 = 7;
	Var0.f_1.f_1.f_16.f_16.f_11 = 2;
	Var0.f_1.f_1.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_3 = 7;
	Var0.f_1.f_1.f_16.f_16.f_16.f_11 = 2;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	*uParam0 = { Var0 };
	iVar147 = 0;
	while (iVar147 < 9)
	{
		iVar146 = 0;
		while (iVar146 <= 6)
		{
			uParam0->f_1[iVar147]->f_3[iVar146] = 255;
			iVar146++;
		}
		iVar147++;
	}
}

void func_743(var uParam0)
{
	Var0.f_4 = 5;
	Var0.f_19 = 255;
	*uParam0 = { Var0 };
}

void func_744(var uParam0)
{
	Var0.f_8 = -1;
	Var0.f_8.f_1 = -1;
	Var0.f_10 = 4;
	Var0.f_10.f_1.f_1 = -1;
	Var0.f_10.f_1.f_3.f_1 = -1;
	Var0.f_10.f_1.f_3.f_3.f_1 = -1;
	Var0.f_10.f_1.f_3.f_3.f_3.f_1 = -1;
	*uParam0 = { Var0 };
}

void func_745(var uParam0)
{
	Var0.f_1 = -1;
	Var0.f_2 = 255;
	*uParam0 = { Var0 };
}

void func_746(var uParam0)
{
	*uParam0 = uVar0;
}

void func_747(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_972(&(uParam0->f_3));
	func_973(&(uParam0->f_18));
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_51 = -1;
	uParam0->f_52 = -1;
	uParam0->f_53 = 0;
	uParam0->f_54 = 0;
	uParam0->f_55 = { 0f, 0f, 0f };
	uParam0->f_58 = 0f;
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = func_974(2880);
	uParam0->f_62 = -1;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	func_975(&(uParam0->f_65));
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = { 0f, 0f, 0f };
	uParam0->f_77 = 0f;
	func_976(&(uParam0->f_78));
	uParam0->f_102 = 0;
	uParam0->f_103 = 0;
	uParam0->f_105 = 0;
	func_975(&(uParam0->f_106));
	StringCopy(&(uParam0->f_110), "", 64);
	uParam0->f_118 = 0;
	uParam0->f_122 = 0;
	func_975(&(uParam0->f_123));
	uParam0->f_127 = -1;
	func_976(&(uParam0->f_128));
	uParam0->f_152 = 0;
	uParam0->f_153 = 0;
	uParam0->f_303 = 0f;
}

void func_748(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	func_972(&(uParam0->f_2));
	func_973(&(uParam0->f_17));
	uParam0->f_45 = 0;
	uParam0->f_46 = -1;
	uParam0->f_47 = -1;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
	uParam0->f_50 = { 0f, 0f, 0f };
	uParam0->f_53 = 0f;
	uParam0->f_54 = 0;
	uParam0->f_55 = -1;
	uParam0->f_56 = 0;
	func_975(&(uParam0->f_57));
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_65 = -1;
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = 0f;
	func_975(&(uParam0->f_77));
	uParam0->f_81 = -1;
	func_976(&(uParam0->f_82));
	uParam0->f_106 = 0;
	uParam0->f_220 = 0;
	uParam0->f_221 = 0;
	func_975(&(uParam0->f_222));
	StringCopy(&(uParam0->f_226), "", 64);
	uParam0->f_235 = 0;
	func_975(&(uParam0->f_236));
	uParam0->f_240 = -1;
	func_976(&(uParam0->f_241));
	uParam0->f_265 = 0;
	uParam0->f_269 = 0;
	uParam0->f_280 = 0;
	uParam0->f_281 = 0;
	uParam0->f_282 = 0;
	uParam0->f_283 = -1;
	uParam0->f_284 = 0;
	uParam0->f_285 = 0;
	uParam0->f_285.f_1 = 0;
	uParam0->f_285.f_2 = 0;
	uParam0->f_285.f_3 = 0;
	if (does_blip_exist(uParam0->f_289))
	{
		remove_blip(&(uParam0->f_289));
	}
	if (uParam0->f_290 != 0)
	{
		_0x2f901291ef177b02(uParam0->f_290, 0);
		uParam0->f_290 = 0;
	}
}

void func_749(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_977(&(uParam0->f_4));
}

void func_750(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
	uParam0->f_8 = 0;
}

void func_751(var uParam0)
{
	*uParam0 = -1;
}

void func_752(var uParam0)
{
	func_975(uParam0);
	uParam0->f_4 = -1;
	uParam0->f_5 = 0;
	uParam0->f_6 = -1;
	uParam0->f_7 = 0;
}

void func_753(var uParam0)
{
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_9 = -1;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0f;
	uParam0->f_6 = -1;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_12 = 0;
	uParam0->f_14 = 0;
	uParam0->f_18 = -15;
	uParam0->f_19 = 0;
}

void func_754(var uParam0)
{
	func_978(uParam0);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_3[iVar0] = 0f;
		iVar0++;
	}
}

void func_755(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_756(var uParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_2.f_1 = -1;
	Var0.f_2.f_1.f_1 = -1;
	Var0.f_2.f_3 = -1;
	Var0.f_6 = -1;
	*uParam0 = { Var0 };
}

void func_757(var uParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		*(*uParam0)[iVar2] = { Var0 };
		iVar2++;
	}
}

void func_758(var uParam0)
{
	Var0 = 32;
	Var0.f_1 = 255;
	Var0.f_1.f_2 = 255;
	Var0.f_1.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	*uParam0 = { Var0 };
}

int func_759(int iParam0)
{
	return iParam0 * 31;
}

int func_760(int iParam0)
{
	return func_759(iParam0) + 30;
}

int func_761(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return 0;
		case 2:
			return 473295046;
		case 3:
			return -1738165526;
		case 4:
			return -699277634;
		case 5:
			return 1497516462;
		case 6:
			return 2016141805;
		case 7:
			return 1010885152;
		case 8:
			return -502324015;
		case 9:
			return 1607768502;
		case 10:
			return -1852605133;
		case 11:
			return -129643890;
		case 12:
			return -1433686245;
		case 13:
			return -1711895055;
		case 14:
			return 192515737;
		case 15:
			return 426191476;
		case 16:
			return 187862543;
		case 17:
			return 417081698;
		case 18:
			return 791041526;
		case 19:
			return 965986934;
		case 20:
			return 1350371763;
		case 21:
			return -1257057567;
		case 22:
			return -1419919497;
		case 23:
			return -1718674470;
		case 24:
			return -35658630;
		case 25:
			return -2069570138;
		case 26:
			return -1838712533;
		case 27:
			return 1140218954;
		case 28:
			return -108307814;
		case 29:
			return -1123615607;
		case 30:
			return -261141318;
		case 31:
			return 440043364;
		case 32:
			return -1425209566;
		case 33:
			return -1666278201;
		case 34:
			return 405586984;
		case 35:
			return 1509509592;
		case 36:
			return -959357075;
		case 37:
			return -1311865656;
		case 38:
			return 1177464213;
		case 39:
			return 2091701359;
		case 40:
			return -919512195;
		case 41:
			return -1925798111;
		case 42:
			return 420709909;
		case 43:
			return 1703426636;
		case 44:
			return -939420910;
		case 45:
			return -1187950766;
		case 46:
			return -1170496998;
		case 47:
			return 356365161;
		case 48:
			return 753127042;
		case 49:
			return -2038424081;
		case 50:
			return 1485195808;
		case 51:
			return 1884271742;
		case 52:
			return 269047710;
		case 53:
			return -1674179981;
		case 54:
			return -1835851517;
		case 55:
			return -1838352012;
		case 56:
			return -1053549743;
		case 57:
			return -2073072369;
		case 58:
			return -741351766;
		case 59:
			return -1717960576;
		case 60:
			return 210001842;
		case 61:
			return 2037589949;
		case 62:
			return -1741667789;
		case 63:
			return -853383233;
		case 64:
			return 330026330;
		case 65:
			return -664512648;
		case 66:
			return 1691618738;
		case 67:
			return -334729750;
		case 68:
			return 1867912207;
		case 69:
			return -628542779;
		case 70:
			return 1500064347;
		case 71:
			return -1414537028;
		case 72:
			return 38162571;
		case 73:
			return 1350391819;
		case 74:
			return 54073871;
		case 75:
			return 618699440;
		case 76:
			return -748969569;
		case 77:
			return -1062490780;
		case 78:
			return -683458244;
		case 79:
			return 273461605;
		case 80:
			return 1360745816;
		case 81:
			return -857964358;
		case 82:
			return -868076593;
		case 83:
			return 1205826474;
		case 84:
			return 153152452;
		case 85:
			return 2136753624;
		case 86:
			return -796902762;
		case 87:
			return -63926460;
		case 88:
			return 374115931;
		case 89:
			return 1982676972;
		case 90:
			return -2034257789;
		case 91:
			return 1665756137;
		case 92:
			return 1766284049;
		case 93:
			return 280705402;
		case 94:
			return 1926308480;
		case 95:
			return -150493654;
		case 96:
			return -1271608261;
		case 97:
			return 1846061697;
		case 98:
			return -1145519186;
		case 99:
			return 106479759;
		case 100:
			return 1485494263;
		case 101:
			return -356975260;
		case 102:
			return -2106214197;
		case 103:
			return -1405998267;
		case 104:
			return -1029225159;
		case 105:
			return 1609506757;
		case 106:
			return 439465264;
		case 107:
			return 757752139;
		case 108:
			return 1064154891;
		case 109:
			return -468693731;
		case 110:
			return -2021582629;
		case 111:
			return -1232809834;
		case 112:
			return 141950038;
		case 113:
			return 544152906;
		case 114:
			return -1532284567;
		case 115:
			return -524145696;
		case 116:
			return 1626481264;
		case 117:
			return 282809459;
		case 118:
			return 1466547629;
		case 119:
			return -238080464;
		case 120:
			return 1015669983;
		case 121:
			return -1831552326;
		case 122:
			return -1151084372;
		case 123:
			return 1453909576;
		case 124:
			return -1223121209;
		case 125:
			return 1643531967;
		case 126:
			return 630808005;
		case 127:
			return -9438024;
		case 128:
			return -534215902;
		case 129:
			return -1215445344;
		case 130:
			return -254562075;
		case 131:
			return 320943355;
		case 132:
			return 689024866;
		case 133:
			return 1160698568;
		case 134:
			return -1179948750;
		case 135:
			return 1713221411;
		case 136:
			return 300221584;
		case 137:
			return -220282381;
		case 138:
			return -1329135070;
		case 139:
			return -1763509974;
		case 140:
			return 224551212;
		case 141:
			return -397760715;
		case 142:
			return 1074873669;
		case 143:
			return -86199844;
		case 144:
			return -1582926490;
		case 145:
			return -1579419919;
		case 146:
			return 478884033;
		case 147:
			return -191424539;
		case 148:
			return 1660024373;
		case 149:
			return -1063147448;
		case 150:
			return -950054349;
		case 151:
			return 2639906;
		case 152:
			return -80522843;
		case 153:
			return -1523910291;
		case 154:
			return -1206122982;
		case 155:
			return -666014935;
		case 156:
			return 1164928979;
		case 157:
			return 527226204;
		case 158:
			return 1213993593;
		case 159:
			return 1944170089;
		case 160:
			return -350863510;
		case 161:
			return 1557082963;
		case 162:
			return 249726958;
		case 163:
			return -1952856164;
		case 164:
			return 1433244935;
		case 165:
			return -99303535;
		case 166:
			return 1512816328;
		case 167:
			return 1207048789;
		case 168:
			return -1230112817;
		case 169:
			return -1278074582;
		case 170:
			return -1436021162;
		case 171:
			return 407136781;
		case 172:
			return -538880323;
		case 173:
			return -538889627;
		case 174:
			return -1056767524;
		case 175:
			return -182889087;
		case 176:
			return 704802028;
		case 177:
			return 588987611;
		case 178:
			return 2008888900;
		case 179:
			return 1649996811;
		case 180:
			return 227918160;
		case 181:
			return 168171957;
		case 182:
			return 1193080109;
		case 183:
			return -639037538;
		case 184:
			return -491981251;
		case 185:
			return -618620429;
		case 186:
			return 373691918;
		case 187:
			return 2019386373;
		case 188:
			return -664252410;
		case 189:
			return 2109952320;
		case 190:
			return 2024121624;
		case 191:
			return -1077783786;
		case 192:
			return -2101264851;
		case 193:
			return 1850082804;
		case 194:
			return -2058120606;
		case 195:
			return 311708813;
		case 196:
			return 434558613;
		case 197:
			return 1822001510;
		case 198:
			return -1612662716;
		case 199:
			return 1306158345;
		case 200:
			return 1952610440;
		case 201:
			return -223469678;
		case 202:
			return -404698347;
		case 203:
			return 1517904467;
		case 204:
			return 689930684;
		case 205:
			return -1957523409;
		case 206:
			return -1524512402;
		case 207:
			return 1399676951;
		case 208:
			return 1441416901;
		case 209:
			return 1410198831;
		case 210:
			return 1376646519;
		case 211:
			return 931649776;
		case 212:
			return -434590080;
		case 213:
			return 1743048395;
		case 214:
			return 449774763;
		case 215:
			return -764163380;
		case 216:
			return 1947931439;
		case 217:
			return 1186594126;
		case 218:
			return 469053995;
		case 219:
			return 476714362;
		case 220:
			return -1706438978;
		case 221:
			return -1164215952;
		case 222:
			return -1236261996;
		case 223:
			return -879507474;
		case 224:
			return 26245360;
		case 225:
			return -515561750;
		case 226:
			return -1060078174;
		case 227:
			return 817925178;
		case 228:
			return 198200492;
		case 229:
			return -1124061431;
		case 230:
			return 52706132;
		case 231:
			return -259123672;
		case 232:
			return -811637947;
		case 233:
			return 514932331;
		case 234:
			return 945612176;
		case 235:
			return -503955743;
		case 236:
			return -785605431;
		case 237:
			return -978957786;
		case 238:
			return 559573222;
		case 239:
			return -1818850842;
		case 240:
			return -792853067;
		case 241:
			return 2127577956;
		case 242:
			return 1151197909;
		case 243:
			return -1799960545;
		case 244:
			return -75024673;
		case 245:
			return 1250636944;
		case 246:
			return -828139293;
		case 247:
			return -644722288;
		case 248:
			return -789397228;
		case 249:
			return 1358491857;
		case 250:
			return 723021499;
		case 251:
			return -2022369555;
		case 252:
			return -1825294305;
		case 253:
			return -270094635;
		case 254:
			return -464836488;
		case 255:
			return -1282804314;
		case 256:
			return 1352699670;
		case 257:
			return -389056691;
		case 258:
			return -233743613;
		case 259:
			return 1203043430;
		case 260:
			return 299694527;
		case 261:
			return -1949204933;
		case 262:
			return -1824738758;
		case 263:
			return -2020023971;
		case 264:
			return 522677506;
		case 265:
			return 1522511407;
		case 266:
			return 371850993;
		case 267:
			return 2080210939;
		case 268:
			return 171499483;
		case 269:
			return 1050128548;
		case 270:
			return 868326136;
		case 271:
			return 235928616;
		case 272:
			return 345808947;
		case 273:
			return -1014145132;
		case 274:
			return -1840704908;
		case 275:
			return -25901845;
		case 276:
			return 94263042;
		case 277:
			return -2106445152;
		case 278:
			return 409602249;
		case 279:
			return 651395116;
		case 280:
			return 1488286867;
		case 281:
			return 665676602;
		case 282:
			return 8924991;
		case 283:
			return 932909855;
		case 284:
			return 2051822093;
		case 285:
			return -1241340344;
		case 286:
			return -1558439474;
		case 287:
			return 442317566;
		case 288:
			return 417525590;
		case 289:
			return 1583012985;
		case 290:
			return 479419429;
		case 291:
			return 2077022393;
		case 292:
			return 1167397384;
		case 293:
			return 2024769126;
		case 294:
			return -154581735;
		case 295:
			return 976539083;
		case 296:
			return -1530132748;
		case 297:
			return 664571177;
		case 298:
			return -349064220;
		case 299:
			return 1776302352;
		case 300:
			return -523522517;
		case 301:
			return 1591451572;
		case 302:
			return -736853952;
		case 303:
			return 1478132521;
		case 304:
			return -360036154;
		case 305:
			return 2024383613;
		case 306:
			return -622554983;
		case 307:
			return 1954026328;
		case 308:
			return -1764522338;
		case 309:
			return -76237062;
		case 310:
			return 1221801385;
		case 311:
			return -306246697;
		case 312:
			return -1847672446;
		case 313:
			return -545450213;
		case 314:
			return -1080627546;
		case 315:
			return 885203519;
		case 316:
			return 459290420;
		case 317:
			return -1700452710;
		case 318:
			return 1488453464;
		case 319:
			return -299522880;
		case 320:
			return -640663440;
		case 321:
			return -1447311849;
		case 322:
			return 302205488;
		case 323:
			return 26054262;
		case 324:
			return 2113625508;
		case 325:
			return 1549124796;
		case 326:
			return -502473159;
		case 327:
			return 229371495;
		case 328:
			return -781631220;
		case 329:
			return 1708045337;
		case 330:
			return 1166612791;
		case 331:
			return 74872959;
		case 332:
			return 1582370975;
		case 333:
			return -330120947;
		case 334:
			return -333135263;
		case 335:
			return 1908151693;
		case 336:
			return -1585840296;
		case 337:
			return -510945576;
		case 338:
			return -2043909922;
		case 339:
			return -1145153057;
		case 340:
			return 589380360;
		case 341:
			return 468797819;
		case 342:
			return -632127260;
		case 343:
			return 965467037;
		case 344:
			return -209894800;
		case 345:
			return -279765076;
		case 346:
			return 1238086793;
		case 347:
			return -1344601768;
		case 348:
			return 1302228510;
		case 349:
			return -460024530;
		case 350:
			return -108780030;
		case 351:
			return 1698972798;
		case 352:
			return -1296807958;
		case 353:
			return -1283202000;
		case 354:
			return -1610966108;
		case 355:
			return -693828600;
		case 356:
			return 1321892118;
		case 357:
			return -61411516;
		case 358:
			return 582380806;
		case 359:
			return 1932172605;
		case 360:
			return 1159471771;
		case 361:
			return 784360470;
		case 362:
			return -1340339190;
		case 363:
			return 1881028477;
		case 364:
			return 1703398561;
		case 365:
			return -1209597203;
		case 366:
			return -897750037;
		case 367:
			return 929582877;
		case 368:
			return -911126844;
		case 369:
			return -355531636;
		case 370:
			return -1455998786;
		case 371:
			return -851626677;
		case 372:
			return -734416508;
		case 373:
			return -396624371;
		case 374:
			return 885777893;
		case 375:
			return 619839857;
		case 376:
			return 1744443559;
		case 377:
			return 509781469;
		case 378:
			return 885378256;
		case 379:
			return -524787708;
		case 380:
			return -1861414976;
		case 381:
			return 747514327;
		case 382:
			return -1042021329;
		case 383:
			return -591815673;
		case 384:
			return 883901517;
		case 385:
			return 1561093093;
		case 386:
			return 1287917122;
		case 387:
			return -1943367752;
		case 388:
			return -371827125;
		case 389:
			return -889906510;
		case 390:
			return 64896505;
		case 391:
			return -1161687045;
		case 392:
			return 526003171;
		case 393:
			return -895073533;
		case 394:
			return -2066272360;
		case 395:
			return 93964309;
		case 396:
			return 2103908624;
		case 397:
			return 1812677765;
		case 398:
			return -1753769127;
		case 399:
			return -947815572;
		case 400:
			return -1181950077;
		case 401:
			return -489737721;
		case 402:
			return -102827640;
		case 403:
			return -1906892166;
		case 404:
			return -2141419899;
		case 405:
			return 16844748;
		case 406:
			return 831940854;
		case 407:
			return -1387772214;
		case 408:
			return -1095341658;
		case 409:
			return -1848799275;
		case 410:
			return -1556041029;
		case 411:
			return -1808329564;
		case 412:
			return 1866434585;
		case 413:
			return 1421300489;
		case 414:
			return 1248935549;
		case 415:
			return 943561238;
		case 416:
			return -1939389836;
		case 417:
			return -243260793;
		case 418:
			return -492731190;
		case 419:
			return -839820438;
		case 420:
			return 1325325699;
		case 421:
			return -1705799799;
		case 422:
			return -89829333;
		case 423:
			return -1262828457;
		case 424:
			return -931337253;
		case 425:
			return 1494062795;
		case 426:
			return -1287894233;
		case 427:
			return 2068208444;
		case 428:
			return -1932919229;
		case 429:
			return -364475655;
		case 430:
			return -110352060;
		case 431:
			return -1023919011;
		case 432:
			return -852602679;
		case 433:
			return -297483764;
		case 434:
			return -1578292898;
		case 435:
			return 1517951665;
		case 436:
			return 1891256113;
		case 437:
			return -1319875891;
		case 438:
			return -1624627591;
		case 439:
			return -1914141706;
		case 440:
			return -74031276;
		case 441:
			return 1280406542;
		case 442:
			return 982765715;
		case 443:
			return -1120447016;
		case 444:
			return 1788424349;
		case 445:
			return 1028084603;
		case 446:
			return -1827602683;
		case 447:
			return 565812320;
		case 448:
			return 1279586666;
		case 449:
			return 1480425906;
		case 450:
			return 846837291;
		case 451:
			return 1153686207;
		case 452:
			return -70727482;
		case 453:
			return 84709454;
		case 454:
			return 799106423;
		case 455:
			return 560154875;
		case 456:
			return 2079292950;
		case 457:
			return 1521272922;
		case 458:
			return -677920206;
		case 459:
			return -414883443;
		case 460:
			return -1004266677;
		case 461:
			return -1290997627;
		case 462:
			return -1462313959;
		case 463:
			return -1882707460;
		case 464:
			return -2056579774;
		case 465:
			return -1442844448;
		case 466:
			return -1684974589;
		case 467:
			return -38135693;
		case 468:
			return 803929300;
		case 469:
			return 640520536;
		case 470:
			return -2100409704;
		case 471:
			return -604603161;
		case 472:
			return -1422877860;
		case 473:
			return 826868753;
		case 474:
			return 730069127;
		case 475:
			return -1378911044;
		case 476:
			return -1341750998;
		case 477:
			return 2068253437;
		case 478:
			return -1395855864;
		case 479:
			return -1749433374;
		case 480:
			return 1232840551;
		case 481:
			return 642824856;
		case 482:
			return -207792846;
		case 483:
			return 715735881;
		case 484:
			return 404823609;
		case 485:
			return 1126565489;
		case 486:
			return -1664435783;
		case 487:
			return -1369678628;
		case 488:
			return 2013720626;
		case 489:
			return 215903338;
		case 490:
			return -90486812;
		case 491:
			return -329176208;
		case 492:
			return -574190021;
		case 493:
			return -800891377;
		case 494:
			return -630295963;
		case 495:
			return 2127412005;
		case 496:
			return 1362354162;
		case 497:
			return 2048790450;
		case 498:
			return -101740709;
		case 499:
			return 673606600;
		case 500:
			return -895307590;
		case 501:
			return 1032791043;
		case 502:
			return 804063423;
		case 503:
			return -1573753524;
		case 504:
			return -1842033327;
		case 505:
			return -888632790;
		case 506:
			return -583127403;
		case 507:
			return -381925743;
		case 508:
			return -75928821;
		case 509:
			return 321629486;
		case 510:
			return 896725436;
		case 511:
			return -941648233;
		case 512:
			return -635323621;
		case 513:
			return 1157309080;
		case 514:
			return -797689456;
		case 515:
			return -500245243;
		case 516:
			return -211583122;
		case 517:
			return 237155783;
		case 518:
			return -1547280108;
		case 519:
			return -1719055206;
		case 520:
			return 1601722481;
		case 521:
			return -2142074819;
		case 522:
			return -226366310;
		case 523:
			return -1502194556;
		case 524:
			return -1749043433;
		case 525:
			return 1341699707;
		case 526:
			return 1666964801;
		case 527:
			return -1673998598;
		case 528:
			return -1445041595;
		case 529:
			return 148595040;
		case 530:
			return -729679654;
		case 531:
			return -448554447;
		case 532:
			return -1339871203;
		case 533:
			return -441204543;
		case 534:
			return -812641169;
		case 535:
			return -554519756;
		case 536:
			return 865557632;
		case 537:
			return 1112996351;
		case 538:
			return -1608141409;
		case 539:
			return -311373772;
		case 540:
			return 61537448;
		case 541:
			return -925071604;
		case 542:
			return 1195508693;
		case 543:
			return 1774060092;
		case 544:
			return 424920933;
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

bool func_762(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return true;
	}
	return false;
}

bool func_763(int iParam0)
{
	iVar0 = func_979(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_671(iVar1))
	{
		if (Global_1071686->f_19648.f_24 && !func_762(iParam0))
		{
			return false;
		}
		return (is_bit_set(&(Global_1071686->f_19648[iVar1]), iVar2) || is_bit_set(&(Global_39.f_110[iVar1]), iVar2));
	}
	return is_bit_set(&(Global_39.f_110[iVar1]), iVar2);
}

bool func_764(vector3 vParam0, float fParam3)
{
	return vdist(Global_35, vParam0) < fParam3;
}

bool func_765(int iParam0, float fParam1, float fParam2)
{
	if (!_is_imap_active(iParam0))
	{
		return true;
	}
	if (!_get_imap_position_and_heading(iParam0, &vVar0, &fVar3))
	{
		return false;
	}
	fVar4 = vdist(get_entity_coords(Global_34, true, false), vVar0);
	if (fVar4 <= fParam1)
	{
		return false;
	}
	if (fVar4 > fParam2)
	{
		return true;
	}
	if (is_sphere_visible(vVar0, fVar3))
	{
		return false;
	}
	return true;
}

bool func_766()
{
	if (does_entity_exist(Global_34) && !is_entity_dead(Global_34))
	{
		iVar0 = get_interior_from_entity(Global_34);
		if (iVar0 != 0 && _get_interior_minimap_hash(iVar0) == 768224943)
		{
			return true;
		}
	}
	return false;
}

int func_767(int iParam0)
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

Vector3 func_768(int iParam0)
{
	switch (iParam0)
	{
		case -1319875891:
			return -329.744f, -151.659f, 50.562f;
		case 640520536:
			return -1519.495f, 740.865f, 124.87f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_769(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1158905413;
		case 1:
			return 358397622;
		case 2:
			return 65999835;
		case 3:
			return 814443795;
		case 4:
			return 519621102;
		case 5:
			return -1628223003;
		case 6:
			return 1278256225;
		case 7:
			return 2038628101;
		case 8:
			return 1742494648;
		case 9:
			return -1010166918;
		case 10:
			return 660170868;
		case 11:
			return -1278312096;
		case 12:
			return -509158128;
		case 13:
			return -226656579;
		case 14:
			return 2115868159;
		case 15:
			return 1495813101;
		case 16:
			return 1197385818;
		case 17:
			return 1015780020;
		case 18:
			return -1286733825;
		case 19:
			return -1670393277;
		case 20:
			return -415733461;
		case 21:
			return -1207924036;
		case 22:
			return 497702414;
		case 23:
			return 719188085;
		case 24:
			return 43753457;
		case 25:
			return 771290791;
		case 26:
			return 20356387;
		case 27:
			return 309149584;
		case 28:
			return 1613781781;
		case 29:
			return 1693607065;
		case 30:
			return 1132176120;
		case 31:
			return 869270437;
		default:
			break;
	}
	return 623901053;
}

bool func_770(int iParam0)
{
	return func_792(iParam0, 2);
}

bool func_771()
{
	return func_778() == 4;
}

bool func_772()
{
	return !func_90(2);
}

bool func_773()
{
	iVar0 = func_980(player_id());
	if (iVar0 != -1)
	{
		if ((*Global_1131196)[iVar0]->f_18.f_1 != 0 && func_240((*Global_1131196)[iVar0]->f_18, 1))
		{
			return true;
		}
	}
	return false;
}

void func_774(var uParam0, int iParam1)
{
	func_981(uParam0, iParam1);
}

int func_775(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

void func_776(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

bool func_777(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

int func_778()
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

void func_779(int iParam0)
{
	if (func_982(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

struct<2> func_780(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_781(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		func_493(iParam0);
	}
}

void func_782(int iParam0)
{
	if (_0xde9bad3292aa6d5e(iParam0))
	{
		_0xdd0bc0edcb2162f6(iParam0);
	}
}

char* func_783(int iParam0)
{
	if (iParam0 == 2)
	{
		return "dewclm";
	}
	if (iParam0 == 4)
	{
		return "gua";
	}
	return func_486(&((*Global_1887339)[func_529(iParam0)]->f_23));
}

char* func_784(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "setup";
		case 1:
			return "running";
		case 2:
			if (_0x5ac0944c156e5f44("bvh_nav_camp_teardown"))
			{
				_0x527b97c203bb8606("bvh_nav_camp_teardown");
			}
			if (_0x5ac0944c156e5f44("bvh_nav_camp_finale1"))
			{
				_0x527b97c203bb8606("bvh_nav_camp_finale1");
			}
			return "teardown";
	}
	return "";
}

void func_785(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	MemCopy(&cVar0, {(*Global_1887339)[iParam0]->f_23}, 8);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, func_983(iParam1), 64);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, func_984(iParam2), 64);
	Var8 = { cVar0 };
	StringConCat(&Var8, "_setup", 64);
	if (does_scenario_group_exist(&Var8))
	{
		set_scenario_group_enabled(&Var8, bParam4);
	}
	else if (bParam4)
	{
		bParam3 = true;
	}
	if (does_scenario_group_exist(&cVar0))
	{
		set_scenario_group_enabled(&cVar0, bParam3);
	}
}

int func_786(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_787(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = ((171 * *uParam0) % 30269);
	*uParam1 = ((172 * *uParam1) % 30307);
	*uParam2 = ((170 * *uParam2) % 30323);
	fVar0 = (((to_float(*uParam0) / 30269f) + (to_float(*uParam1) / 30307f)) + (to_float(*uParam2) / 30323f));
	*uParam0 = func_786(0 == *uParam0, 171, *uParam0);
	*uParam1 = func_786(0 == *uParam1, 172, *uParam1);
	*uParam2 = func_786(0 == *uParam2, 170, *uParam2);
	return round((1000f * fVar0));
}

float func_788(int iParam0, bool bParam1)
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

bool func_789(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_790(int iParam0)
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
		func_985(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_986(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

void func_791(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0))
	{
		return;
	}
	_databinding_remove_binding_array_item_by_data_context_id(Global_1940311->f_242.f_5, uParam0);
	func_987(uParam0);
	_databinding_remove_data_entry(uParam0);
	func_988((Global_1940311->f_242.f_1186 - 1));
}

bool func_792(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_793(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_989(iParam0, 1);
	func_990(iParam0, 1);
	func_991(iParam0, 128);
}

bool func_794(int iParam0)
{
	return (Global_1297470->f_1 && iParam0) != 0;
}

bool func_795()
{
	return &Global_1048577;
}

bool func_796(int iParam0)
{
	iVar0 = Global_1296859->f_21;
	iVar1 = func_628(iParam0);
	Var3 = { func_629(iParam0) };
	stat_id_get_int(&Var3, &iVar2);
	if (iVar2 == 0 || (iVar2 + iVar1) > iVar0)
	{
		return true;
	}
	return false;
}

void func_797(int iParam0)
{
	Global_1297470->f_1 = (Global_1297470->f_1 - (Global_1297470->f_1 && iParam0));
}

int func_798(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	return _datafile_get_num_nodes(uParam0);
}

var func_799(int iParam0, int iParam1)
{
	if (!func_640(&uVar0))
	{
		return 0;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 16, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 41, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 42, iParam1, 0, 1))
	{
		return 0;
	}
	return func_992(&uVar0);
}

int func_800(int iParam0, bool bParam1)
{
	iVar0 = func_786(bParam1, 1, 0);
	iVar1 = func_993(iParam0);
	return (floor(func_994(2f, to_float((iVar1 - 1)))) + iVar0) + 1;
}

var func_801(int iParam0, int iParam1)
{
	iVar0 = (func_800(iParam0, 1) - 1);
	iVar3 = func_995(iParam0);
	iVar1 = func_996(iParam0, iParam1);
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

int func_802(var uParam0)
{
	return func_997(uParam0, 72, 1);
}

struct<4> func_803(int iParam0)
{
	if (!func_640(&Var0))
	{
		return Var9;
	}
	if (!func_641(&Var0, 13, 0, 0, 1))
	{
		return Var9;
	}
	if (!func_641(&Var0, 14, 0, 0, 1))
	{
		return Var9;
	}
	if (!func_641(&Var0, 38, iParam0, 0, 1))
	{
		return Var9;
	}
	Var5.f_3 = iParam0;
	Var5 = func_998(&Var0);
	func_999(Var0, &Var5);
	return Var5;
}

bool func_804(var uParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_3 = -1;
	Var0.f_3.f_4 = -1;
	Var0.f_3 = { func_635(iParam1) };
	if (uParam0->f_1 & 2 != 0)
	{
		if (func_320() != 0)
		{
			return false;
		}
	}
	if (uParam0->f_1 & 1 != 0)
	{
		if (_0xfbe782b3165ac8ec(*uParam0))
		{
			return false;
		}
	}
	if (uParam0->f_1 & 4 != 0)
	{
		if (Var0.f_3 == -1 || Var0.f_3.f_1 == -1)
		{
			return false;
		}
		if (!func_338(8))
		{
			return false;
		}
	}
	if (uParam0->f_1 & 8 != 0)
	{
		if (Var0.f_3 == -1 || Var0.f_3.f_1 == -1)
		{
			return false;
		}
		if (!func_607(Var0.f_3, Var0.f_3.f_1, Var0.f_3.f_2, 0))
		{
			return false;
		}
	}
	return true;
}

int func_805()
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_603(iVar0, &uVar1);
		if (!func_604(&uVar1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_806(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_1000(iParam0, uParam1, &Var12, &Var0, iParam2, iParam3, iParam4, bParam5);
}

void func_807(int iParam0, var uParam1, int iParam2, var uParam3)
{
	func_1001(iParam0, uParam1);
	func_1002(iParam0, iParam2);
	func_1003(iParam0, uParam3);
}

struct<4> func_808(struct<5> Param0)
{
	Var0 = func_1004(&Param0);
	Var0.f_1 = func_1005(&Param0);
	switch (Var0)
	{
		case 581657549:
			Var0.f_2 = func_1006(&Param0);
			break;
		case -1732594287:
			Var0.f_2 = func_1007(&Param0);
			break;
		case 914197110:
			Var0.f_2 = func_1007(&Param0);
			break;
		default:
			break;
	}
	func_1008(Param0, &Var0);
	return Var0;
}

bool func_809(var uParam0, int iParam1)
{
	if (!func_1009(iParam1, uParam0->f_3))
	{
		return true;
	}
	switch (*uParam0)
	{
		case -1732594287:
			iVar0 = uParam0->f_1;
			return func_1010(iVar0, uParam0->f_2);
		case 581657549:
			if (!_0x85e4d7b225a30ed1(uParam0->f_1, &Var2))
			{
				return false;
			}
			return Var2.f_1 >= uParam0->f_2;
		case 914197110:
			uVar1 = uParam0->f_1;
			return func_1011(uVar1, uParam0->f_2);
		default:
			break;
	}
	return false;
}

bool func_810(var uParam0, int iParam1, int iParam2)
{
	if (!func_640(uParam0))
	{
		return false;
	}
	if (!func_641(uParam0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_641(uParam0, 17, 0, 0, 1))
	{
		return false;
	}
	if (!func_641(uParam0, 19, iParam1, 0, 1))
	{
		return false;
	}
	if (!func_641(uParam0, 13, 0, 0, 0))
	{
		return false;
	}
	if (!func_641(uParam0, 45, iParam2, 0, 1))
	{
		return false;
	}
	return true;
}

var func_811(var uParam0)
{
	return func_1012(uParam0, 77, 1);
}

var func_812(var uParam0)
{
	return func_997(uParam0, 70, 1);
}

var func_813(var uParam0)
{
	return func_997(uParam0, 71, 1);
}

var func_814(var uParam0, int iParam1)
{
	return func_997(uParam0, 87, iParam1);
}

var func_815(var uParam0)
{
	return func_997(uParam0, 68, 1);
}

int func_816(int iParam0, int iParam1)
{
	return &(Global_1297470->f_76[iParam0]->f_1[iParam1]);
}

void func_817(int iParam0, var uParam1, int iParam2)
{
	iVar0 = func_800(iParam0, 0);
	iVar1 = func_995(iParam0);
	if (is_bit_set(iParam2, iVar0))
	{
		iParam2 = (iParam2 && iVar1);
	}
	else
	{
		iParam2 = -1;
	}
	switch (iParam0)
	{
		case 0:
			uParam1->f_2 = iParam2;
			break;
		case 1:
			uParam1->f_3 = iParam2;
			break;
		case 2:
			uParam1->f_4 = iParam2;
			break;
		case 3:
			uParam1->f_1 = iParam2;
			break;
		case 4:
			*uParam1 = iParam2;
			break;
		default:
			break;
	}
}

var func_818(var uParam0)
{
	return func_997(uParam0, 60, 1);
}

int func_819(int iParam0, var uParam1, int iParam2)
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

struct<2> func_820()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_821(int iParam0, var uParam1)
{
	Global_1297470->f_55.f_4[iParam0]->f_3.f_2 = uParam1;
}

void func_822(int iParam0, var uParam1)
{
	Global_1297470->f_55.f_4[iParam0]->f_3.f_3 = uParam1;
}

void func_823(int iParam0, var uParam1)
{
	Global_1297470->f_55.f_4[iParam0]->f_3.f_4 = uParam1;
}

void func_824(int iParam0, var uParam1)
{
	Global_1297470->f_55.f_4[iParam0]->f_3 = uParam1;
}

void func_825(int iParam0, var uParam1)
{
	Global_1297470->f_55.f_4[iParam0]->f_3.f_1 = uParam1;
}

void func_826(int iParam0, struct<2> Param1)
{
	*Global_1297470->f_55.f_4[iParam0] = { Param1 };
}

void func_827(int iParam0, var uParam1)
{
	Global_1297470->f_55.f_4[iParam0]->f_2 = uParam1;
}

int func_828(int iParam0, int iParam1, int iParam2)
{
	if (!func_640(&uVar0))
	{
		return 0;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 24, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 25, iParam2, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 46, 0, 0, 0))
	{
		return 0;
	}
	return func_798(&uVar0, 10);
}

struct<6> func_829(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8)
{
	if (!func_640(&uVar0))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 19, Param0.f_3, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 20, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 23, Param0.f_3.f_1, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 24, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 25, Param0.f_3.f_2, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 46, 0, 0, 0))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 47, iParam8, 0, 1))
	{
		return Var5;
	}
	iVar11 = func_1013(&uVar0);
	return func_1014(iVar11);
}

void func_830(var uParam0, int iParam1)
{
	if (!func_1015(uParam0, iParam1))
	{
		return;
	}
	switch (uParam0->f_3)
	{
		case 556453026:
			if (chal_is_goal_active(uParam0->f_1, uParam0->f_2))
			{
				chal_add_goal_progress_int(uParam0->f_1, uParam0->f_2, uParam0->f_4);
			}
			break;
		default:
			break;
	}
}

int func_831(int iParam0, int iParam1, int iParam2)
{
	if (!func_640(&uVar0))
	{
		return 0;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 24, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 25, iParam2, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 57, 0, 0, 0))
	{
		return 0;
	}
	return func_798(&uVar0, 12);
}

struct<5> func_832(var uParam0, int iParam1)
{
	if (!func_640(&Var0))
	{
		return Var5;
	}
	if (!func_641(&Var0, 13, 0, 0, 1))
	{
		return Var5;
	}
	uVar14 = Var0.f_1;
	if (!func_641(&Var0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&Var0, 19, uParam0->f_3, 0, 1))
	{
		return Var5;
	}
	uVar10 = func_814(&Var0, 1);
	if (!func_641(&Var0, 20, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&Var0, 23, uParam0->f_3.f_1, 0, 1))
	{
		return Var5;
	}
	uVar13 = func_815(&Var0);
	if (!func_641(&Var0, 24, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&Var0, 25, uParam0->f_3.f_2, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&Var0, 57, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&Var0, 58, iParam1, 0, 1))
	{
		return Var5;
	}
	iVar12 = func_1016(&Var0);
	Var0.f_1 = uVar14;
	if (!func_641(&Var0, 56, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&Var0, 59, iVar12, 0, 1))
	{
		return Var5;
	}
	uVar11 = func_1017(&Var0);
	Var5 = iVar12;
	Var5.f_2 = uVar13;
	Var5.f_3 = uVar10;
	Var5.f_1 = uVar11;
	func_1018(Var0, &Var5);
	return Var5;
}

void func_833(var uParam0, int iParam1)
{
	if (!func_1019(uParam0, iParam1))
	{
		return;
	}
	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_3.f_1 = -1;
	Var1.f_3.f_2 = -1;
	Var1.f_3.f_3 = -1;
	Var1.f_3.f_4 = -1;
	Var1.f_3 = { func_635(iParam1) };
	switch (uParam0->f_1)
	{
		case 2049349725:
			_0xe54dc27571d5edc4(uParam0->f_2);
			switch (Var1.f_3.f_2)
			{
				case 0:
					iVar0 = 3;
					break;
				case 1:
					iVar0 = 4;
					break;
				case 2:
					iVar0 = 5;
					break;
			}
			_0xe824ce7d13fcb300(uParam0->f_2, iVar0);
			break;
		case 759256821:
			_0x957a830c9b4b99ea(uParam0->f_3, 0);
			break;
		default:
			break;
	}
}

int func_834(int iParam0, int iParam1, int iParam2)
{
	if (!func_640(&uVar0))
	{
		return 0;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 24, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 25, iParam2, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 36, 0, 0, 1))
	{
		return 0;
	}
	return func_798(&uVar0, 8);
}

struct<4> func_835(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8)
{
	if (!func_640(&uVar0))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 19, Param0.f_3, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 20, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 23, Param0.f_3.f_1, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 24, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 25, Param0.f_3.f_2, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 36, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 37, iParam8, 0, 1))
	{
		return Var5;
	}
	iVar9 = func_802(&uVar0);
	return func_803(iVar9);
}

void func_836(int iParam0)
{
	iVar0 = player_id();
	iVar1 = func_1020(iVar0);
	if (!func_489(iVar1))
	{
		return;
	}
	if (iVar1 != iParam0)
	{
		func_1021(iParam0, 7);
		func_1021(iParam0, 8);
	}
	Var2 = { func_869(iVar1) };
	switch (func_1022(iVar1))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			if (func_18(Var2.f_5))
			{
				if (!func_1023(iVar0, iVar1, 8) && func_908(iVar1, 1))
				{
					func_1024(Var2.f_5);
					func_1025(iVar1, 8);
				}
				if (func_1026(Var2.f_5))
				{
					func_1025(iVar1, 2);
					func_1021(iVar1, 5);
				}
				else if (func_943(Var2.f_5))
				{
					func_1025(iVar1, 1);
					func_1021(iVar1, 6);
				}
				else
				{
					func_1027(Var2);
					func_1025(iVar1, 4);
					func_1021(iVar1, 3);
				}
			}
			else
			{
				func_1021(iVar1, 7);
			}
			break;
		case 8:
			if (Global_1109804->f_19)
			{
				if (func_908(iVar1, 4))
				{
				}
				else
				{
					func_1028();
				}
				func_1029(iVar1);
				func_1030(1);
				func_1030(0);
			}
			else
			{
				func_1028();
				func_1029(iVar1);
				func_1030(1);
				func_1030(0);
			}
			break;
	}
}

void func_837(int iParam0)
{
	iVar0 = player_id();
	iVar1 = func_1020(iVar0);
	if (!func_489(iVar1))
	{
		return;
	}
	Var2 = { func_869(iParam0) };
	switch (func_1022(iVar1))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			if (func_18(Var2.f_5))
			{
				if (!func_1023(iVar0, iParam0, 8) && func_908(iParam0, 1))
				{
					func_1024(Var2.f_5);
					func_1025(iParam0, 8);
				}
				if (func_1026(Var2.f_5))
				{
					func_1025(iParam0, 2);
					func_1021(iParam0, 5);
				}
				else if (func_943(Var2.f_5))
				{
					func_1025(iParam0, 1);
					func_1021(iParam0, 6);
				}
				else
				{
					func_1027(Var2);
					func_1025(iParam0, 4);
					func_1021(iParam0, 3);
				}
			}
			else
			{
				func_1021(iParam0, 7);
			}
			break;
		case 8:
			if (Global_1109804->f_19)
			{
				if (func_908(iVar1, 4))
				{
				}
				else
				{
					func_1028();
				}
				func_1029(iVar1);
				func_1030(1);
				func_1030(0);
			}
			else
			{
				func_1028();
				func_1029(iVar1);
				func_1030(1);
				func_1030(0);
			}
			break;
	}
}

bool func_838(int iParam0, int iParam1)
{
	return (Global_1198046->f_231.f_1066[iParam0]->f_6 && iParam1) != 0;
}

bool func_839()
{
	if (!Global_1071686->f_3)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return false;
	}
	if (!network_is_in_session() || func_180())
	{
		return false;
	}
	if (!is_thread_active(&Global_1210161, false))
	{
		return false;
	}
	if (!network_is_script_active("net_ambient_content_evaluator", -1, true, 0))
	{
		return false;
	}
	return player_id() == _0xb4a25351d79b444c(&Global_1210161);
}

void func_840(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	iVar4 = player_id();
	iVar5 = func_1031(iParam0);
	if (!func_1032(iParam0, &Var0))
	{
		if (iVar5 < 5)
		{
			func_1033(iParam0, 5);
		}
	}
	switch (iVar5)
	{
		case 1:
			break;
		case 2:
			if (!func_838(iParam0, 2))
			{
				return;
			}
			if (!func_1034(iParam0))
			{
				func_1035(iParam0, 0);
				return;
			}
			bVar3 = func_943(Var0);
			bVar2 = func_1026(Var0);
			if (!bVar3 && !bVar2)
			{
				if (!func_1036(iParam0, iVar4, 2) && !func_1036(iParam0, iVar4, 3))
				{
					if (func_1037(iParam0, 3) || func_1038(iParam0) == Global_1296859->f_15)
					{
						func_1039(iParam0);
					}
				}
			}
			else if (!func_1037(iParam0, 3) && func_1038(iParam0) != Global_1296859->f_15)
			{
				func_1035(iParam0, 0);
			}
			break;
		case 4:
			if (!func_838(iParam0, 2))
			{
				if (func_838(iParam0, 2048))
				{
					func_1040(iParam0);
				}
				return;
			}
			if (func_943(Var0))
			{
				if (func_1037(iParam0, 4))
				{
					func_1041(iParam0, 0, 1, 1);
					func_1042(iParam0, 0, 0);
				}
				else
				{
					func_1041(iParam0, 0, 1, 1);
					func_1043(iParam0, 0);
				}
			}
			else if (func_1026(Var0))
			{
				func_1043(iParam0, 0);
			}
			else
			{
				func_1044(iParam0, 6);
			}
			if (func_1045(iParam0))
			{
				func_1040(iParam0);
			}
			break;
		case 5:
		case 6:
			if ((!func_18(Var0) || func_1036(iParam0, iVar4, 0)) || func_1046(iParam0, iVar4))
			{
				func_1047(iParam0);
			}
			break;
	}
}

void func_841(int iParam0, int iParam1, bool bParam2)
{
	func_1048(iParam0, iParam1);
	if (!bParam2)
	{
		func_1049(iParam0, iParam1);
	}
	else
	{
		func_1050(iParam0, iParam1);
		func_1051(iParam0, iParam1);
	}
}

void func_842(int iParam0)
{
	iVar0 = func_1031(iParam0);
	if (func_1052(iParam0, iVar0))
	{
		return;
	}
	switch (iVar0)
	{
		case -1:
			if (!func_18(func_1053(iParam0)))
			{
				return;
			}
			if (func_838(iParam0, 32))
			{
				Global_1198046->f_231.f_1066[iParam0]->f_8[0]->f_1 = iParam0;
			}
			if (Global_1198046->f_231.f_1066[iParam0]->f_5 != 255)
			{
				func_1054(iParam0, Global_1198046->f_231.f_1066[iParam0]->f_5);
				func_1033(iParam0, 2);
			}
			else
			{
				func_1033(iParam0, 1);
			}
			break;
		case 0:
			break;
		case 1:
			if (func_1055(iParam0) != 255)
			{
				func_1033(iParam0, 2);
				return;
			}
			if (func_1056(iParam0, 3))
			{
				func_1033(iParam0, 2);
				return;
			}
			if (func_1057(iParam0))
			{
				func_1033(iParam0, 5);
				return;
			}
			break;
		case 2:
			if (func_1055(iParam0) == 255 && !func_1056(iParam0, 3))
			{
				func_1033(iParam0, 4);
				return;
			}
			if (func_1058(iParam0))
			{
				func_1033(iParam0, 5);
				return;
			}
			if (func_1056(iParam0, 4) || func_1056(iParam0, 5))
			{
				func_1033(iParam0, 3);
				return;
			}
			func_1059(iParam0);
			break;
		case 3:
			if (func_1060(iParam0))
			{
				return;
			}
			func_1033(iParam0, 4);
			break;
		case 4:
			if (func_1061(iParam0, 7))
			{
				func_1033(iParam0, 5);
			}
			else
			{
				return;
			}
			func_1033(iParam0, 5);
			break;
		case 5:
			if (func_1061(iParam0, 7))
			{
				if (func_1062(iParam0) > 1)
				{
					func_1063(iParam0, 1);
				}
				func_1033(iParam0, 6);
			}
			else
			{
				return;
			}
			break;
		case 6:
			break;
	}
}

int func_843()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1051252->f_38;
}

struct<40> func_844(var uParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40)
{
	if (Param1.f_1 != -1)
	{
		return *uParam0->f_2[Param1.f_1];
	}
	Var0 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	iVar40 = 0;
	while (iVar40 < *uParam0)
	{
		iVar41 = ((uParam0->f_1 + iVar40) % 5);
		if (uParam0->f_2[iVar41]->f_2 != Param1.f_2)
		{
		}
		else if (uParam0->f_2[iVar41]->f_3 != Param1.f_3)
		{
		}
		else if (uParam0->f_2[iVar41]->f_4 != Param1.f_4)
		{
		}
		else
		{
			return *uParam0->f_2[iVar41];
		}
		iVar40++;
	}
	return Var0;
}

void func_845(struct<7> Param0, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41)
{
	switch (func_1064(uParam41))
	{
		case -1:
			func_1065(uParam40, uParam41->f_4);
			break;
		case 0:
			if (!func_1066(&Param0, uParam41))
			{
				if ((get_network_time_accurate() - uParam41->f_7) > 120000)
				{
					uParam41->f_6 = 2;
					func_1067(uParam41, 3);
				}
				return;
			}
			if (func_1068(&Param0) < 0)
			{
				return;
			}
			uParam41->f_1 = Param0.f_1;
			func_1067(uParam41, 1);
			break;
		case 1:
			if (!func_1066(&Param0, uParam41))
			{
				uParam41->f_6 = 2;
				func_1067(uParam41, 3);
				return;
			}
			if (func_1068(&Param0) < 1)
			{
				return;
			}
			uParam41->f_6 = Param0.f_6;
			func_1067(uParam41, 2);
			break;
		case 2:
			if (!func_1066(&Param0, uParam41))
			{
				if (uParam41->f_6 == -1)
				{
					uParam41->f_6 = 2;
				}
				func_1067(uParam41, 3);
				return;
			}
			if (func_1068(&Param0) < 3)
			{
				return;
			}
			func_1067(uParam41, 3);
			break;
		case 3:
			func_1067(uParam41, -1);
			break;
	}
}

int func_846(int iParam0)
{
	return &(Global_1107216->f_33[iParam0]);
}

int func_847(var uParam0)
{
	if (!func_1069(uParam0))
	{
		return -1;
	}
	iVar0 = func_1070(uParam0, uParam0->f_9);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar1 == uParam0->f_9)
		{
		}
		else
		{
			iVar0 = func_1070(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

int func_848(int iParam0)
{
	return Global_1107216->f_33[iParam0]->f_1;
}

bool func_849(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 71);
}

void func_850(int iParam0, int iParam1)
{
	Global_1107216->f_33[iParam0]->f_1 = iParam1;
}

void func_851(int iParam0)
{
	Global_1107216->f_33[iParam0] = 0;
}

int func_852(int iParam0, int iParam1)
{
	iVar0 = _0x901e0dc25080c8b9(iParam0);
	if (func_489(iParam1))
	{
		if (iVar0 == func_846(iParam1))
		{
			return iParam1;
		}
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (iVar0 == func_846(iVar1))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

int func_853(int iParam0)
{
	return Global_1107216->f_33[iParam0]->f_2;
}

void func_854(int iParam0, int iParam1)
{
	Global_1107216->f_33[iParam0] = iParam1;
}

int func_855(int iParam0, var uParam1)
{
	if (!func_1071(iParam0))
	{
		return 0;
	}
	*uParam1 = 0;
	return 1;
}

int func_856(int iParam0, var uParam1)
{
	if (!func_1071(iParam0))
	{
		*uParam1 = 9;
		return 1;
	}
	if (!func_18(func_490(iParam0)))
	{
		return 0;
	}
	if (func_908(iParam0, 4))
	{
		func_1072(func_490(iParam0));
		*uParam1 = 6;
		return 1;
	}
	func_1073(iParam0, get_network_time_accurate());
	*uParam1 = 1;
	return 1;
}

int func_857(int iParam0, var uParam1)
{
	if (!func_1071(iParam0))
	{
		*uParam1 = 5;
		return 1;
	}
	Var0 = { func_490(iParam0) };
	if (!func_18(Var0))
	{
		*uParam1 = 6;
		return 1;
	}
	if (func_908(iParam0, 4))
	{
		func_1072(func_490(iParam0));
		*uParam1 = 6;
		return 1;
	}
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_6.f_1 = -1;
	Var2.f_9 = 2;
	Var2 = { Var0 };
	iVar12 = func_847(&Var2);
	if (func_849(iVar12))
	{
		func_850(iParam0, iVar12);
		func_1073(iParam0, get_network_time_accurate());
		*uParam1 = 2;
		return 1;
	}
	iVar13 = get_network_time_accurate();
	if (get_time_difference(func_1074(iParam0), iVar13) > func_1075())
	{
		if (func_1076(Var0, iParam0))
		{
			*uParam1 = 6;
		}
		else
		{
			*uParam1 = 7;
		}
		return 1;
	}
	return 0;
}

int func_858(int iParam0, var uParam1)
{
	if (!func_1071(iParam0))
	{
		*uParam1 = 5;
		return 1;
	}
	iVar0 = func_1077(iParam0);
	if (iVar0 & 2 != 0)
	{
		*uParam1 = 4;
		return 1;
	}
	if (iVar0 & 1 != 0)
	{
		*uParam1 = 3;
		return 1;
	}
	if (func_908(iParam0, 4))
	{
		func_1072(func_490(iParam0));
		*uParam1 = 6;
		return 1;
	}
	iVar1 = get_network_time_accurate();
	if (get_time_difference(func_1074(iParam0), iVar1) > func_1075())
	{
		if (func_1076(func_490(iParam0), iParam0))
		{
			*uParam1 = 6;
		}
		else
		{
			*uParam1 = 7;
		}
		return 1;
	}
	return 0;
}

int func_859(int iParam0, var uParam1)
{
	iVar0 = func_1077(iParam0);
	if (iVar0 & 2 != 0)
	{
		*uParam1 = 4;
		return 1;
	}
	if (func_908(iParam0, 4))
	{
		func_1072(func_490(iParam0));
		*uParam1 = 6;
		return 1;
	}
	if (iVar0 & 1 != 0)
	{
		return 0;
	}
	if (func_1076(func_490(iParam0), iParam0))
	{
		*uParam1 = 6;
	}
	else
	{
		*uParam1 = 7;
	}
	return 1;
}

int func_860(int iParam0, var uParam1)
{
	if (!func_1071(iParam0))
	{
		*uParam1 = 5;
		return 1;
	}
	iVar0 = func_1077(iParam0);
	if (iVar0 & 2 != 0)
	{
		return 0;
	}
	if (iVar0 & 1 != 0)
	{
		*uParam1 = 3;
		return 1;
	}
	if (func_908(iParam0, 4))
	{
		func_1072(func_490(iParam0));
		*uParam1 = 6;
		return 1;
	}
	if (Global_1109804->f_18)
	{
		if (func_1076(func_490(iParam0), iParam0))
		{
			*uParam1 = 6;
		}
		else
		{
			*uParam1 = 7;
		}
	}
	else
	{
		func_1076(func_490(iParam0), iParam0);
		*uParam1 = 6;
	}
	return 1;
}

int func_861(int iParam0, var uParam1)
{
	iVar0 = func_1077(iParam0);
	if (iVar0 & 2 != 0)
	{
		return 0;
	}
	if (iVar0 & 1 != 0)
	{
		return 0;
	}
	if (func_1076(func_490(iParam0), iParam0))
	{
		*uParam1 = 6;
	}
	else
	{
		*uParam1 = 7;
	}
	return 1;
}

int func_862(int iParam0, var uParam1)
{
	if (!func_18(func_490(iParam0)))
	{
		*uParam1 = 7;
		return 1;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_9 = 2;
	Var0 = { func_490(iParam0) };
	iVar10 = func_847(&Var0);
	if (!func_849(iVar10))
	{
		func_1078(iParam0);
		*uParam1 = 7;
		return 1;
	}
	iVar11 = get_network_time_accurate();
	if (get_time_difference(func_1074(iParam0), iVar11) > func_1075())
	{
		func_1072(Var0);
		func_1073(iParam0, iVar11);
	}
	return 0;
}

int func_863(int iParam0, var uParam1)
{
	if (func_1071(iParam0))
	{
		*uParam1 = 8;
		return 1;
	}
	else
	{
		*uParam1 = 9;
		return 1;
	}
	return 0;
}

int func_864(int iParam0, var uParam1)
{
	bVar1 = true;
	if (Global_1109804->f_19)
	{
		iVar0 = func_1079();
		if (iVar0 <= 1)
		{
			if (func_908(iParam0, 4))
			{
				bVar1 = false;
			}
			else
			{
				bVar1 = true;
			}
		}
		else
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (_0x51f33dbc1a41cbfd() & 9 != 0 && func_908(iParam0, 1))
		{
			if (get_time_difference(func_1080(), get_network_time_accurate()) > 5000)
			{
				func_1081();
				func_444();
			}
			return 0;
		}
	}
	func_1082(iParam0);
	*uParam1 = -1;
	return 1;
}

int func_865(int iParam0, var uParam1)
{
	switch (func_866(iParam0))
	{
		case 0:
			return func_1083(iParam0, uParam1);
		case 1:
			return func_1084(iParam0, uParam1);
		default:
			break;
	}
	return 0;
}

int func_866(int iParam0)
{
	return Global_1107216->f_33[iParam0]->f_3.f_2;
}

void func_867(int iParam0, var uParam1, int iParam2)
{
	Global_1107216->f_33[iParam0]->f_2 = uParam1;
}

void func_868(int iParam0, int iParam1)
{
	(*Global_1109804)[iParam0] = iParam1;
}

struct<13> func_869(int iParam0)
{
	return Global_1107216->f_33[iParam0]->f_3;
}

bool func_870(struct<2> Param0, int iParam2)
{
	return (!func_907(func_1085(), Param0) || func_1086() != iParam2);
}

void func_871(var uParam0)
{
	Global_1109804->f_11 = { *uParam0 };
}

bool func_872(int iParam0, int iParam1)
{
	return ((*Global_1128574)[iParam0]->f_34 && iParam1) != 0;
}

struct<2> func_873()
{
	return Global_1130592->f_5.f_3;
}

struct<2> func_874()
{
	return Global_1109804->f_21.f_12.f_23;
}

int func_875()
{
	return Global_1130592->f_5.f_7;
}

int func_876()
{
	return Global_1130592->f_24;
}

int func_877()
{
	return Global_1109804->f_21.f_12.f_20;
}

int func_878()
{
	return Global_1109804->f_21.f_12.f_2;
}

bool func_879(int iParam0)
{
	return func_519(1, iParam0);
}

void func_880()
{
	func_1087(-1);
	func_1088(-1);
	func_1089(-1);
	func_1090();
	func_1091();
}

int func_881()
{
	return Global_1109804->f_21.f_12.f_8;
}

void func_882(int iParam0)
{
	iVar0 = player_id();
	(*Global_1128574)[iVar0]->f_34 = ((*Global_1128574)[iVar0]->f_34 - ((*Global_1128574)[iVar0]->f_34 && iParam0));
}

void func_883(int iParam0)
{
	Global_1109804->f_21.f_12.f_8 = iParam0;
}

void func_884(struct<2> Param0)
{
	Global_1109804->f_21.f_12.f_9 = { Param0 };
}

int func_885()
{
	return Global_1109804->f_21.f_12;
}

void func_886(int iParam0)
{
	iVar0 = player_id();
	(*Global_1128574)[iVar0]->f_34 = ((*Global_1128574)[iVar0]->f_34 || iParam0);
}

bool func_887(int iParam0)
{
	return func_468(&(Global_1109804->f_247.f_6), iParam0, 2);
}

void func_888(int iParam0)
{
	if (func_506((*Global_1130367)[player_id()], iParam0, 2))
	{
	}
}

void func_889(int iParam0)
{
	if (func_505((*Global_1130367)[player_id()], iParam0, 2))
	{
	}
}

bool func_890(int iParam0)
{
	return func_468(&(Global_1109804->f_247.f_9), iParam0, 3);
}

void func_891(int iParam0)
{
	if (func_506(&((*Global_1130367)[player_id()]->f_3), iParam0, 3))
	{
	}
}

void func_892(int iParam0)
{
	if (func_505(&((*Global_1130367)[player_id()]->f_3), iParam0, 3))
	{
	}
}

bool func_893(int iParam0)
{
	iVar0 = func_1092(iParam0);
	if (iVar0 < 0)
	{
		return true;
	}
	return func_1093(Global_1139381->f_11.f_3222.f_320[iVar0], 1);
}

void func_894(int iParam0)
{
	if ((*Global_1128574)[player_id()]->f_47 == iParam0)
	{
		return;
	}
	(*Global_1128574)[player_id()]->f_47 = iParam0;
}

bool func_895(int iParam0, int iParam1)
{
	return ((*Global_1128574)[iParam0]->f_54.f_1 && iParam1) != 0;
}

bool func_896(int iParam0)
{
	return (Global_1130592->f_24.f_3 && iParam0) != 0;
}

int func_897()
{
	return Global_1130592->f_24.f_6;
}

void func_898(int iParam0)
{
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	Var0.f_4 = 14;
	Var0.f_10 = player_id();
	_0x31010318ba9897ac(&uVar31, iParam0);
	func_1094(&Var0, uVar31);
}

void func_899(int iParam0)
{
	Global_1130592->f_24.f_6 = iParam0;
}

void func_900(int iParam0)
{
	Global_1130592->f_24.f_3 = (Global_1130592->f_24.f_3 || iParam0);
}

bool func_901()
{
	return Global_1109804->f_21.f_109.f_6;
}

int func_902()
{
	return Global_1109804->f_21.f_109.f_5;
}

void func_903()
{
	func_1095(-1);
	func_1096(-1);
	func_1097(-1);
	func_1098(func_820());
	func_1099(0);
	func_1100(0);
	func_1101(0);
	func_1102(0);
	Var0.f_1 = -1;
	func_1103(&Var0);
}

int func_904(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam0 == func_846(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_905(int iParam0)
{
	if (!func_1104(func_911()))
	{
		if (func_1104(func_1105(iParam0)))
		{
			func_1095(func_1105(iParam0));
		}
		else
		{
			return false;
		}
	}
	if (!func_1106(func_910()))
	{
		if (func_1106(func_1107(iParam0)))
		{
			func_1096(func_1107(iParam0));
		}
		else
		{
			return false;
		}
	}
	if (!func_1108(func_913()))
	{
		if (func_1108(func_1109(iParam0)))
		{
			func_1097(func_1109(iParam0));
		}
		else
		{
			return false;
		}
	}
	if (!func_1110() && func_1112(func_1111(func_913())) == 7)
	{
		Var0.f_1 = -1;
		func_1113(iParam0, &Var0);
		if (Var0 == 0)
		{
		}
		else
		{
			func_1103(&Var0);
			func_1102(1);
		}
	}
	return true;
}

struct<2> func_906()
{
	return Global_1109804->f_21.f_109.f_3;
}

bool func_907(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_908(int iParam0, int iParam1)
{
	return (Global_1107216->f_33[iParam0]->f_3.f_8 && iParam1) != 0;
}

void func_909(var uParam0)
{
	_copy_memory(uParam0, &(Global_1109804->f_21.f_109.f_9), 4);
}

int func_910()
{
	return Global_1109804->f_21.f_109;
}

int func_911()
{
	return Global_1109804->f_21.f_109.f_1;
}

var func_912()
{
	return Global_1109804->f_21.f_109.f_7;
}

int func_913()
{
	return Global_1109804->f_21.f_109.f_2;
}

void func_914(int iParam0, int iParam1, var uParam2, int iParam3, struct<2> Param4, int iParam6, var uParam7, var uParam8, var uParam9, int iParam10)
{
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	uVar31 = func_150(0, 8);
	Var0.f_6 = iParam0;
	Var0.f_5 = iParam1;
	Var0.f_11 = _0x901e0dc25080c8b9(player_id());
	Var0.f_4 = 3;
	Var0.f_9 = iParam3;
	Var0.f_14 = uParam2;
	Var0.f_7 = { Param4 };
	Var0.f_13 = iParam10;
	_copy_memory(&(Var0.f_27), &iParam6, 4);
	vVar32 = { func_1114(iParam0) };
	uVar35 = func_1115(iParam0);
	func_1116(&(Var0.f_19), Var0.f_11, vVar32, uVar35);
	func_1094(&Var0, uVar31);
}

void func_915(int iParam0, var uParam1)
{
	_copy_memory(uParam1, &((*Global_1128574)[iParam0]->f_38), 5);
}

void func_916(var uParam0)
{
	func_1117(uParam0, 1);
}

bool func_917(int iParam0)
{
	return (Global_1109804->f_6371.f_2 && iParam0) != 0;
}

void func_918(var uParam0)
{
	func_1118(uParam0, 0);
}

void func_919(int iParam0)
{
	_copy_memory(&((*Global_1128574)[player_id()]->f_38), iParam0, 5);
}

void func_920(int iParam0)
{
	Global_1109804->f_6371.f_2 = (Global_1109804->f_6371.f_2 - (Global_1109804->f_6371.f_2 && iParam0));
}

void func_921(int iParam0, var uParam1)
{
	_copy_memory(uParam1, &((*Global_1128574)[iParam0]->f_43), 4);
}

void func_922(var uParam0)
{
	func_1119(uParam0, 1);
}

void func_923(var uParam0)
{
	func_1120(uParam0, 0);
}

void func_924(int iParam0)
{
	_copy_memory(&((*Global_1128574)[player_id()]->f_43), iParam0, 4);
}

void func_925(int iParam0, var uParam1)
{
	_copy_memory(uParam1, &((*Global_1128574)[iParam0]->f_49), 5);
}

void func_926(int iParam0)
{
	_copy_memory(&(Global_1109804->f_6371.f_22), iParam0, 5);
}

int func_927(int iParam0)
{
	return &(Global_1109804->f_146.f_84[iParam0]);
}

int func_928(int iParam0)
{
	return Global_1109804->f_146.f_84[iParam0]->f_2;
}

bool func_929(int iParam0, int iParam1)
{
	return func_468(&((*Global_1128574)[iParam0]->f_49), iParam1, 3);
}

void func_930(int iParam0)
{
	if (func_505(&((*Global_1128574)[player_id()]->f_49), iParam0, 3))
	{
	}
}

bool func_931()
{
	return Global_1194053->f_409.f_9;
}

void func_932(int iParam0)
{
	iVar0 = func_461(iParam0);
	if (iVar0 == -1)
	{
		Global_1071686->f_19648.f_19 = &Global_1071686->f_19648[iParam0];
		return;
	}
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (is_bit_set(&(Global_39.f_110[iParam0]), iVar1))
		{
			set_bit(&(Global_1071686->f_19648.f_19), iVar1);
		}
		else
		{
			clear_bit(&(Global_1071686->f_19648.f_19), iVar1);
		}
		iVar1++;
	}
}

bool func_933(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_934(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_935()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

bool func_936(int iParam0, int iParam1)
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

Vector3 func_937(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_19;
}

Vector3 func_938(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_19;
}

Vector3 func_939(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_19;
}

void func_940(int iParam0, int iParam1)
{
	if (!func_678(iParam0))
	{
		return;
	}
	(*Global_1900838)[iParam0]->f_1 = ((*Global_1900838)[iParam0]->f_1 || iParam1);
}

void func_941(int iParam0)
{
	if (func_57() == -1)
	{
		return;
	}
	if ((*Global_1835011)[iParam0]->f_3 != 0 && _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3))
	{
		_unlock_set_new((*Global_1835011)[iParam0]->f_3, false);
	}
	func_1121(iParam0);
}

void func_942(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_943(struct<2> Param0)
{
	iVar0 = func_365(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

void func_944(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_18(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_1026(Param0) && !func_943(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_1122(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_365(Param0) == 3)
		{
			func_1123(1, -1706799532);
		}
		else if (func_365(Param0) == 4)
		{
			func_1123(0, -1706799532);
		}
	}
	if ((func_365(Param0) == 3 || func_365(Param0) == 1) || ((bParam5 && func_365(Param0) == 4) && _0x01f4d242765c6b24(func_1122(Param0))))
	{
		if (iParam3 != -1)
		{
			func_1124(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_1124(Param0, 2, iParam4, 255, 0);
		}
	}
	func_946(Param0, 0);
	if (func_907(func_210(0), Param0))
	{
		func_1125(1);
		func_1126(0);
		func_1127(0);
		func_1128(1);
	}
	func_1129(Param0);
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_1130(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		_0x1096603b519c905f("");
	}
}

void func_945(struct<2> Param0)
{
	if (func_1122(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_1122(Param0)))
	{
		_0x99230691875fc218(func_1130(Param0), func_1122(Param0), Global_35);
	}
}

void func_946(struct<2> Param0, int iParam2)
{
	if (!func_18(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_1131(Param0);
	}
	else
	{
		func_1132(Param0, iParam2);
	}
	func_1133();
}

bool func_947()
{
	return Global_1297047->f_419 != 0;
}

bool func_948()
{
	if (_0xc17f69e1418cd11f(1) != 0)
	{
		return false;
	}
	if (!is_screen_faded_in())
	{
		return false;
	}
	return true;
}

bool func_949(int iParam0)
{
	return (Global_1297047->f_419 && iParam0) != 0;
}

bool func_950(int iParam0)
{
	iVar1 = func_1134(iParam0);
	iVar2 = func_1135(iParam0);
	iVar3 = func_689();
	switch (iVar2)
	{
		case 0:
			iVar0 = func_285(_create_var_string(0, iVar1), 10000, 0, 0, 0, 1);
			break;
		case 1:
			if (!does_blip_exist(iVar3))
			{
				iVar3 = _0x3e593df9c2962ec6(1699087565);
				if (!does_blip_exist(iVar3))
				{
					return false;
				}
				set_blip_sprite(iVar3, -1636832113, true);
				_blip_set_modifier(iVar3, -244815569);
				func_690(iVar3);
			}
			iVar0 = func_285(_create_var_string(0, iVar1, iVar3), 10000, 0, 0, 0, 1);
			break;
	}
	return iVar0 != 0;
}

void func_951(int iParam0)
{
	Global_1297047->f_419 = (Global_1297047->f_419 - (Global_1297047->f_419 && iParam0));
}

int func_952(int iParam0)
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

int func_953(int iParam0)
{
	if (iParam0 == 255 || iParam0 == network_player_id_to_int())
	{
		return _0x32c90cdfaf40514c();
	}
	return Global_1145091[iParam0];
}

int func_954(int iParam0)
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
		default:
			break;
	}
	return 0;
}

void func_955(int iParam0)
{
	Global_1301323->f_155.f_4[iParam0]->f_1 = 0;
}

void func_956(int iParam0)
{
	Global_1301323->f_155.f_4[iParam0]->f_2 = 0;
}

void func_957(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1301323->f_155.f_2), iParam0);
}

var func_958(int iParam0)
{
	if (!func_1136(&uVar0))
	{
		return 0;
	}
	if (!func_1137(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1137(&uVar0, 37, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1137(&uVar0, 40, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1137(&uVar0, 53, 0, 0, 1))
	{
		return 0;
	}
	return func_1138(&uVar0, 11);
}

int func_959()
{
	return count_player_bits(&(Global_1301323->f_155.f_2));
}

bool func_960(int iParam0)
{
	return (Global_1301323->f_155.f_3 && iParam0) != 0;
}

void func_961(int iParam0)
{
	Global_1301323->f_155.f_3 = (Global_1301323->f_155.f_3 - (Global_1301323->f_155.f_3 && iParam0));
}

bool func_962(int iParam0, int iParam1)
{
	return is_bit_set(Global_1301323->f_155.f_4[iParam0]->f_2, iParam1);
}

bool func_963(int iParam0, int iParam1, var uParam2)
{
	if (!func_1136(&Var0))
	{
		return false;
	}
	if (!func_1137(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_1137(&Var0, 37, 0, 0, 1))
	{
		return false;
	}
	if (!func_1137(&Var0, 40, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_1137(&Var0, 53, 0, 0, 1))
	{
		return false;
	}
	if (!func_1137(&Var0, 54, iParam1, 0, 1))
	{
		return false;
	}
	uParam2->f_1 = { func_1139(Var0) };
	*uParam2 = func_1140(Var0);
	uParam2->f_9 = func_1141(Var0);
	return true;
}

var func_964(int iParam0)
{
	if (!func_1136(&uVar0))
	{
		return 0;
	}
	if (!func_1137(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1137(&uVar0, 37, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1137(&uVar0, 40, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1137(&uVar0, 51, 0, 0, 1))
	{
		return 0;
	}
	return func_1138(&uVar0, 10);
}

bool func_965(int iParam0, int iParam1)
{
	return is_bit_set(Global_1301323->f_155.f_4[iParam0]->f_1, iParam1);
}

bool func_966(int iParam0, int iParam1, var uParam2)
{
	if (!func_1136(&Var0))
	{
		return false;
	}
	if (!func_1137(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_1137(&Var0, 37, 0, 0, 1))
	{
		return false;
	}
	if (!func_1137(&Var0, 40, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_1137(&Var0, 51, 0, 0, 1))
	{
		return false;
	}
	if (!func_1137(&Var0, 52, iParam1, 0, 1))
	{
		return false;
	}
	uParam2->f_33 = func_1142(Var0, -1564702706);
	*uParam2 = { func_1139(Var0) };
	uParam2->f_8 = { func_1143(Var0) };
	uParam2->f_16 = func_1144(Var0);
	uParam2->f_17 = { func_1145(Var0) };
	uParam2->f_20 = { func_1146(Var0) };
	uParam2->f_26 = func_1147(Var0);
	uParam2->f_27 = func_1148(Var0);
	if (uParam2->f_33 & 32 != 0)
	{
		uParam2->f_23 = { func_1149(Var0) };
	}
	if (uParam2->f_33 & 16 != 0)
	{
		uParam2->f_31 = func_1150(Var0);
	}
	if (uParam2->f_33 & 8 != 0)
	{
		uParam2->f_28 = func_1151(Var0);
		uParam2->f_29 = func_1152(Var0);
		uParam2->f_30 = func_1153(Var0);
	}
	if (uParam2->f_33 & 64 != 0)
	{
		uParam2->f_32 = func_1154(Var0);
	}
	return true;
}

void func_967(int iParam0, int iParam1)
{
	set_bit(&(Global_1301323->f_155.f_4[iParam0]->f_1), iParam1);
}

void func_968(int iParam0)
{
	_0x31010318ba9897ac(&(Global_1301323->f_155.f_2), iParam0);
}

void func_969(int iParam0)
{
	Global_1301323->f_155.f_3 = (Global_1301323->f_155.f_3 || iParam0);
}

void func_970(int iParam0, int iParam1)
{
	set_bit(&(Global_1301323->f_155.f_4[iParam0]->f_2), iParam1);
}

void func_971(var uParam0)
{
	Var0 = -1;
	Var0.f_3 = 255;
	*uParam0 = { Var0 };
}

void func_972(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_1155(&(uParam0->f_3));
	uParam0->f_12 = 1;
	uParam0->f_13 = 0;
}

void func_973(var uParam0)
{
	func_1156(uParam0);
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = 0;
	uParam0->f_8 = -1;
	uParam0->f_9 = 10;
	uParam0->f_10 = { 0f, 0f, 0f };
	uParam0->f_13 = 0f;
	uParam0->f_14 = 0f;
	uParam0->f_15 = 0f;
	uParam0->f_16 = { 0f, 0f, 0f };
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0f;
	uParam0->f_22 = 0;
	uParam0->f_23 = -1;
	uParam0->f_24 = { 0f, 0f, 0f };
	uParam0->f_27 = 0f;
}

int func_974(int iParam0)
{
	if (iParam0 <= 0)
	{
		return 0;
	}
	get_posix_time(&iVar1, &iVar2, &iVar3, &iVar4, &iVar5, &iVar6);
	iVar0 = ((((((iVar1 + iVar2) + iVar3) + iVar4) + iVar5) + iVar6) + get_random_int_in_range(0, 60000));
	iVar0 = (iVar0 % iParam0);
	return iVar0;
}

void func_975(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_976(var uParam0)
{
	func_975(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_709() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
}

void func_977(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1157((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_978(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_979(int iParam0, int iParam1)
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

int func_980(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

void func_981(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_982(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

char* func_983(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
		case 3:
			return "BILL";
		case 1:
			return "JOHN";
		case 2:
			return "JAVIER";
		case 4:
			return "UNCLE";
		case 5:
			return "HOSEA";
		case 6:
			return "MICAH";
		case 7:
			return "CHARLES";
		case 8:
			return "SEAN";
		case 9:
			return "LENNY";
		case 13:
			return "ABIGAIL";
		case 10:
			return "KIERAN";
		case 14:
			return "JACK";
		case 15:
			return "MARYBETH";
		case 16:
			return "MOLLY";
		case 17:
			return "PEARSON";
		case 18:
			return "STRAUSS";
		case 19:
			return "GRIMSHAW";
		case 20:
			return "KAREN";
		case 21:
			return "SWANSON";
		case 22:
			return "TILLY";
		case 23:
			return "TRELAWNY";
		case 11:
			return "SADIE";
		case 24:
			return "CLEET";
		case 25:
			return "JOE";
		case 26:
			return "EAGLEFLIES";
		case 12:
			return "DOG";
		default:
			break;
	}
	return "Companion unknown";
}

char* func_984(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Morning";
		case 1:
			return "Day";
		case 2:
			return "LongDay";
		case 3:
			return "Afternoon";
		case 4:
			return "Evening";
		case 5:
			return "Night";
		default:
			break;
	}
	return "";
}

void func_985(int iParam0)
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
	func_986(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_986(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

void func_987(var uParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(uParam0, func_1158(91));
	if (func_1159(iVar0))
	{
		_0x2f901291ef177b02(iVar0, 1);
	}
}

void func_988(int iParam0)
{
	Global_1940311->f_242.f_1186 = iParam0;
	_databinding_write_data_string(Global_1940311->f_242.f_6, _0x2b6846401d68e563(to_float(Global_1940311->f_242.f_1186), 0));
}

void func_989(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_792(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_990(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_991(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

var func_992(var uParam0)
{
	return func_997(uParam0, 75, 1);
}

int func_993(int iParam0)
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

float func_994(float fParam0, float fParam1)
{
	return (_log10(fParam1) / _log10(fParam0));
}

int func_995(int iParam0)
{
	iVar0 = func_800(iParam0, 0);
	return (floor(pow(2f, to_float(iVar0))) - 1);
}

int func_996(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return iParam1->f_2;
		case 1:
			return iParam1->f_3;
		case 2:
			return iParam1->f_4;
		case 3:
			return iParam1->f_1;
		case 4:
			return *iParam1;
		default:
			break;
	}
	return -1;
}

int func_997(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (_datafile_get_hash(&uVar0, uParam0))
	{
	}
	return uVar0;
}

var func_998(var uParam0)
{
	return func_997(uParam0, 73, 1);
}

void func_999(struct<5> Param0, var uParam5)
{
	uVar4 = Param0.f_1;
	iVar1 = func_798(&Param0, 4);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		Param0.f_1 = uVar4;
		if (!func_641(&Param0, 31, iVar0, 0, 1))
		{
			return;
		}
		iVar2 = func_1160(Param0, &iVar3);
		switch (iVar3)
		{
			case 914197110:
				uParam5->f_1 = iVar2;
				break;
			case 253781561:
				uParam5->f_2 = iVar2;
				break;
			default:
				break;
		}
		iVar0++;
	}
}

int func_1000(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_1161(iParam2, -372840566);
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
	func_1162(uParam1, iParam0, Var3);
	return 1;
}

void func_1001(int iParam0, int iParam1)
{
	_copy_memory(Global_1297470->f_111[iParam0], iParam1, 4);
}

void func_1002(int iParam0, int iParam1)
{
	Global_1297470->f_111[iParam0]->f_4 = iParam1;
}

void func_1003(int iParam0, var uParam1)
{
	Global_1297470->f_111[iParam0]->f_5 = uParam1;
}

var func_1004(var uParam0)
{
	return func_997(uParam0, 63, 1);
}

var func_1005(var uParam0)
{
	return func_997(uParam0, 64, 1);
}

var func_1006(var uParam0)
{
	return func_1012(uParam0, 62, 1);
}

var func_1007(var uParam0)
{
	return func_997(uParam0, 62, 1);
}

void func_1008(struct<5> Param0, var uParam5)
{
	uVar4 = Param0.f_1;
	iVar1 = func_798(&Param0, 4);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		Param0.f_1 = uVar4;
		if (!func_641(&Param0, 31, iVar0, 0, 1))
		{
			return;
		}
		iVar2 = func_1160(Param0, &iVar3);
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

bool func_1009(int iParam0, int iParam1)
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

bool func_1010(int iParam0, int iParam1)
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

bool func_1011(int iParam0, int iParam1)
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

var func_1012(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (!_datafile_get_int(&uVar0, uParam0))
	{
	}
	return uVar0;
}

var func_1013(var uParam0)
{
	return func_997(uParam0, 83, 1);
}

struct<6> func_1014(int iParam0)
{
	if (!func_640(&Var0))
	{
		return Var11;
	}
	if (!func_641(&Var0, 13, 0, 0, 1))
	{
		return Var11;
	}
	if (!func_641(&Var0, 15, 0, 0, 1))
	{
		return Var11;
	}
	if (!func_641(&Var0, 48, iParam0, 0, 1))
	{
		return Var11;
	}
	Var5 = iParam0;
	Var5.f_1 = func_1163(&Var0);
	Var5.f_2 = func_1164(&Var0);
	Var5.f_3 = func_1165(&Var0);
	switch (Var5.f_3)
	{
		case 556453026:
			Var5.f_4 = func_1166(&Var0);
			break;
		default:
			break;
	}
	func_1167(Var0, &Var5);
	return Var5;
}

bool func_1015(var uParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_3 = -1;
	Var0.f_3.f_4 = -1;
	Var0.f_3 = { func_635(iParam1) };
	if (uParam0->f_5 & 1 != 0)
	{
		if (Var0.f_3 == -1 || Var0.f_3.f_1 == -1)
		{
			return false;
		}
		if (!func_338(8))
		{
			return false;
		}
	}
	if (uParam0->f_5 & 2 != 0)
	{
		if (Var0.f_3 == -1 || Var0.f_3.f_1 == -1)
		{
			return false;
		}
		if (!func_607(Var0.f_3, Var0.f_3.f_1, Var0.f_3.f_2, 0))
		{
			return false;
		}
	}
	return true;
}

var func_1016(var uParam0)
{
	return func_997(uParam0, 60, 1);
}

var func_1017(var uParam0)
{
	return func_997(uParam0, 88, 1);
}

void func_1018(struct<5> Param0, var uParam5)
{
	uVar4 = Param0.f_1;
	iVar1 = func_798(&Param0, 4);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		Param0.f_1 = uVar4;
		if (!func_641(&Param0, 31, iVar0, 0, 1))
		{
			return;
		}
		iVar2 = func_1160(Param0, &iVar3);
		switch (iVar3)
		{
			case -1444170561:
				uParam5->f_4 = iVar2;
				break;
			default:
				break;
		}
		iVar0++;
	}
}

bool func_1019(var uParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_3 = -1;
	Var0.f_3.f_4 = -1;
	Var0.f_3 = { func_635(iParam1) };
	if (uParam0->f_4 & 1 != 0)
	{
		if (Var0.f_3 == -1 || Var0.f_3.f_1 == -1)
		{
			return false;
		}
		if (!func_338(8))
		{
			return false;
		}
	}
	if (uParam0->f_4 & 2 != 0)
	{
		if (Var0.f_3 == -1 || Var0.f_3.f_1 == -1)
		{
			return false;
		}
		if (!func_607(Var0.f_3, Var0.f_3.f_1, Var0.f_3.f_2, 0))
		{
			return false;
		}
	}
	return true;
}

int func_1020(int iParam0)
{
	iVar0 = func_488(iParam0);
	iVar1 = func_852(iParam0, iVar0);
	if (iVar0 != iVar1)
	{
		if (func_489(iVar1))
		{
			func_1168(iVar1);
			iVar0 = iVar1;
		}
	}
	return iVar0;
}

void func_1021(int iParam0, int iParam1)
{
	iVar0 = player_id();
	(*Global_1128574)[iVar0]->f_1[iParam0] = (&(*Global_1128574)[iVar0]->f_1[iParam0] - ((*Global_1128574)[iVar0]->f_1[iParam0] && iParam1));
}

int func_1022(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return func_853(iParam0);
}

bool func_1023(int iParam0, int iParam1, int iParam2)
{
	return ((*Global_1128574)[iParam0]->f_1[iParam1] && iParam2) != 0;
}

int func_1024(struct<2> Param0)
{
	if (func_1169())
	{
		return 0;
	}
	if (!func_18(Param0))
	{
		return 0;
	}
	*Global_1051213 = { Param0 };
	return 1;
}

void func_1025(int iParam0, int iParam1)
{
	iVar0 = player_id();
	(*Global_1128574)[iVar0]->f_1[iParam0] = ((*Global_1128574)[iVar0]->f_1[iParam0] || iParam1);
}

bool func_1026(struct<2> Param0)
{
	iVar0 = func_365(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_1027(int iParam0)
{
	func_1170(iParam0);
}

void func_1028()
{
	if (!network_is_host())
	{
		return;
	}
	iVar0 = _0x51f33dbc1a41cbfd();
	iVar1 |= 8;
	if (_0x277865a734918ae6())
	{
		_0xbb51299166b844f3();
	}
	if ((iVar0 && iVar1) != 0)
	{
		iVar1 = (iVar1 && iVar0);
		_0x78335e12db0bf961(iVar1);
	}
}

void func_1029(int iParam0)
{
	if (!func_1023(player_id(), iParam0, 8))
	{
		return;
	}
	func_1171();
	Global_1109804->f_15 = 1;
	func_1021(iParam0, 8);
}

void func_1030(int iParam0)
{
	func_1172(iParam0);
	func_1173(iParam0, 0);
}

int func_1031(int iParam0)
{
	return Global_1198046->f_231.f_1066[iParam0]->f_13;
}

bool func_1032(int iParam0, var uParam1)
{
	iVar0 = player_id();
	*uParam1 = { func_1053(iParam0) };
	if (func_1062(iParam0) <= 0)
	{
		*uParam1 = { func_1174(iParam0) };
		if (func_18(*uParam1))
		{
			func_1047(iParam0);
		}
		return false;
	}
	else if (!func_18(*uParam1))
	{
		*uParam1 = { func_1174(iParam0) };
		if (func_18(*uParam1))
		{
			func_1047(iParam0);
			return false;
		}
	}
	else if (func_18(*uParam1))
	{
		if (func_1031(iParam0) < 4)
		{
			if (!func_1036(iParam0, iVar0, 0))
			{
				func_1175(iParam0, *uParam1);
				func_1044(iParam0, 0);
				if (func_838(iParam0, 256))
				{
					func_1044(iParam0, 1);
				}
			}
		}
		if (func_1026(*uParam1))
		{
			if (func_1037(iParam0, 4))
			{
				func_1042(iParam0, 0, 0);
				return false;
			}
			else if (func_1037(iParam0, 5))
			{
				func_1043(iParam0, 0);
				return false;
			}
		}
	}
	return true;
}

void func_1033(int iParam0, int iParam1)
{
	Global_1198046->f_231.f_1066[iParam0]->f_13 = iParam1;
}

bool func_1034(int iParam0)
{
	if (!func_1176(iParam0))
	{
		return false;
	}
	if (func_1031(iParam0) >= 5)
	{
		return false;
	}
	if (func_1031(iParam0) <= 0)
	{
		return false;
	}
	if (!func_1036(iParam0, player_id(), 0))
	{
		return false;
	}
	return true;
}

void func_1035(int iParam0, int iParam1)
{
	Var0 = { func_1174(iParam0) };
	if (!func_18(Var0))
	{
		return;
	}
	if (!func_943(Var0) && !func_1026(Var0))
	{
		return;
	}
	func_1177(iParam0, 2);
	func_1177(iParam0, 3);
	func_1044(iParam0, 6);
	func_944(Var0, 0, 2, iParam1, 0);
}

bool func_1036(int iParam0, int iParam1, int iParam2)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return false;
	}
	return is_bit_set((*Global_1207784)[iParam1][iParam0], iParam2);
}

bool func_1037(int iParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < func_1178())
	{
		iVar0 = func_1179(iVar1);
		if (func_1036(iParam0, iVar0, iParam1))
		{
			return true;
		}
		iVar1++;
	}
	return func_1036(iParam0, player_id(), iParam1);
}

int func_1038(int iParam0)
{
	return Global_1198046->f_2505[iParam0]->f_4;
}

void func_1039(int iParam0)
{
	Var0 = { func_1174(iParam0) };
	if (!func_18(Var0))
	{
		return;
	}
	if (func_943(Var0))
	{
		return;
	}
	if (func_1026(Var0))
	{
		return;
	}
	func_1044(iParam0, 2);
	func_1177(iParam0, 3);
	func_1177(iParam0, 6);
	func_367(Var0);
}

void func_1040(int iParam0)
{
	iVar0 = get_player_index();
	(*(*Global_1207784)[iVar0])[iParam0] = 0;
}

void func_1041(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	Var0 = { func_1174(iParam0) };
	if (!func_18(Var0))
	{
		return;
	}
	if (!func_943(Var0))
	{
		return;
	}
	if (func_1026(Var0))
	{
		return;
	}
	if (bParam1)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
	}
	if (bParam1)
	{
		set_this_script_can_remove_blips_created_by_any_script(false);
	}
	func_1044(iParam0, 3);
	func_1180(Var0, 1, bParam2, bParam3);
}

void func_1042(int iParam0, bool bParam1, int iParam2)
{
	Var0 = { func_1174(iParam0) };
	if (!func_18(Var0))
	{
		return;
	}
	if (func_943(Var0))
	{
		return;
	}
	if (!func_1026(Var0))
	{
		return;
	}
	if (func_1036(iParam0, player_id(), 5))
	{
		return;
	}
	if (bParam1)
	{
		bVar2 = 4;
	}
	else
	{
		bVar2 = false;
	}
	func_944(Var0, 0, bVar2, iParam2, 0);
	func_1044(iParam0, 4);
}

void func_1043(int iParam0, int iParam1)
{
	Var0 = { func_1174(iParam0) };
	if (!func_18(Var0))
	{
		return;
	}
	if (func_943(Var0))
	{
		return;
	}
	if (!func_1026(Var0))
	{
		return;
	}
	if (func_1036(iParam0, player_id(), 5))
	{
		return;
	}
	func_944(Var0, 0, 1, iParam1, 0);
	func_1044(iParam0, 5);
}

void func_1044(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (func_1036(iParam0, iVar0, iParam1))
	{
		return;
	}
	set_bit((*(*Global_1207784)[iVar0])[iParam0], iParam1);
}

bool func_1045(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1178())
	{
		iVar0 = func_1179(iVar1);
		if (func_1036(iParam0, iVar0, 2) && !((func_1036(iParam0, iVar0, 4) || func_1036(iParam0, iVar0, 5)) || func_1036(iParam0, iVar0, 6)))
		{
			return false;
		}
		iVar1++;
	}
	Var2 = { func_1174(iParam0) };
	return !(func_943(Var2) || func_1026(Var2));
}

bool func_1046(int iParam0, int iParam1)
{
	return (*Global_1207784)[iParam1][iParam0] == 0;
}

void func_1047(int iParam0)
{
	iVar1 = Global_1198046->f_231.f_1066[iParam0]->f_7;
	if (iVar1 > 1)
	{
		iVar1 = 1;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		func_1181(iParam0, iVar0);
		func_1182(iParam0, iVar0);
		iVar0++;
	}
	func_1035(iParam0, 0);
	func_1183(iParam0);
	func_1040(iParam0);
}

void func_1048(int iParam0, int iParam1)
{
	uVar0 = func_1184(iParam0);
	uVar1 = func_1185(iParam0, iParam1);
	iVar2 = func_1186(iParam0, iParam1);
	iVar3 = func_1031(iParam0);
	switch (func_1187(iParam0, iParam1))
	{
		case -1:
			if (!func_1034(iParam0))
			{
				if (iVar2 >= 3)
				{
					func_1188(iParam0, iParam1, 6);
				}
				return;
			}
			func_1188(iParam0, iParam1, 1);
			break;
		case 0:
			if (!func_1034(iParam0))
			{
				if (iVar2 >= 3)
				{
					func_1188(iParam0, iParam1, 6);
				}
				return;
			}
			func_1188(iParam0, iParam1, 1);
			break;
		case 1:
			if (!func_1034(iParam0))
			{
				func_1189(iParam0, iParam1);
				func_1188(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				return;
			}
			if (iVar2 >= 3)
			{
				func_1188(iParam0, iParam1, 6);
				return;
			}
			func_1188(iParam0, iParam1, 2);
			break;
		case 2:
			if (!func_1034(iParam0))
			{
				func_1189(iParam0, iParam1);
				func_1188(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				func_1188(iParam0, iParam1, 1);
				return;
			}
			if (iVar2 >= 3)
			{
				func_1188(iParam0, iParam1, 6);
				return;
			}
			if (!func_1190(iParam0, iParam1))
			{
				return;
			}
			func_1191(iParam0, iParam1, 0);
			func_1188(iParam0, iParam1, 3);
			break;
		case 3:
			if (!func_1034(iParam0))
			{
				func_1189(iParam0, iParam1);
				func_1188(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				func_1188(iParam0, iParam1, 7);
				return;
			}
			if (iVar2 >= 3)
			{
				func_1188(iParam0, iParam1, 6);
				return;
			}
			if (!func_1192(iParam0, iParam1))
			{
				return;
			}
			func_1188(iParam0, iParam1, 4);
			break;
		case 4:
			if (!_0x1b89bc43b6e69107(uVar0, uVar1, true, 0))
			{
				if (!func_1193(iParam0, iParam1))
				{
					func_1194(iParam0, iParam1, 0);
					func_1195(iParam0, iParam1, 0);
					func_1188(iParam0, iParam1, 2);
				}
				return;
			}
			func_1188(iParam0, iParam1, 5);
			break;
		case 5:
			if ((func_1062(iParam0) <= 0 || iVar3 >= 5) || iVar3 < 1)
			{
				func_1181(iParam0, iParam1);
			}
			if (func_1196(iParam0, iParam1))
			{
				func_1181(iParam0, iParam1);
			}
			if (_0x1b89bc43b6e69107(uVar0, uVar1, true, 0))
			{
				return;
			}
			if (func_1193(iParam0, iParam1))
			{
				return;
			}
			func_1194(iParam0, iParam1, 0);
			if ((func_1056(iParam0, 4) || func_1056(iParam0, 5)) || (func_1031(iParam0) > 2 && iVar2 == 3))
			{
				func_1188(iParam0, iParam1, 6);
			}
			else
			{
				func_1195(iParam0, iParam1, 0);
				func_1188(iParam0, iParam1, 8);
			}
			break;
		case 6:
			if (!func_1045(iParam0))
			{
				return;
			}
			func_1188(iParam0, iParam1, 7);
			break;
		case 7:
			func_1189(iParam0, iParam1);
			func_1188(iParam0, iParam1, 8);
			break;
		case 8:
			func_1044(iParam0, 7);
			if (iVar2 == 2 || iVar2 == 3)
			{
				return;
			}
			func_1188(iParam0, iParam1, 1);
			func_1177(iParam0, 7);
			break;
	}
}

bool func_1049(int iParam0, int iParam1)
{
	iVar0 = func_1197(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return true;
	}
	if (!_0xa4a4359320345b34(iVar0))
	{
		func_1198(iParam0, iParam1, 0);
		return true;
	}
	func_1198(iParam0, iParam1, 0);
	return true;
}

void func_1050(int iParam0, int iParam1)
{
	if (!func_838(iParam0, 8))
	{
		return;
	}
	iVar0 = func_1062(iParam0);
	iVar1 = func_1199(iParam0, iParam1);
	iVar2 = func_1031(iParam0);
	iVar3 = func_1186(iParam0, iParam1);
	bVar4 = func_1176(iParam0);
	if (!bVar4 || iVar2 >= 5)
	{
		if (iVar1 != 1)
		{
			func_1200(iParam0, iParam1);
			func_1201(iParam0, iParam1, 1);
		}
		return;
	}
	switch (iVar1)
	{
		case -2:
			break;
		case -1:
			if (!func_18(func_1053(iParam0)))
			{
			}
			else if (func_1202(iParam0, iParam1) <= 0)
			{
				func_1201(iParam0, iParam1, 0);
			}
			else if (iVar0 == 1)
			{
				func_1201(iParam0, iParam1, 5);
			}
			else
			{
				func_1201(iParam0, iParam1, 2);
			}
			break;
		case 0:
			if (func_1202(iParam0, iParam1) > 0)
			{
				func_1201(iParam0, iParam1, 2);
			}
			break;
		case 1:
			func_1201(iParam0, iParam1, -1);
			break;
		case 2:
			if (func_1203(iParam0, iParam1) != 0)
			{
				func_1201(iParam0, iParam1, 4);
				return;
			}
			func_1204(iParam0, iParam1, 0);
			func_1201(iParam0, iParam1, 3);
			break;
		case 3:
			if (func_1197(iParam0, iParam1) == 0)
			{
				func_1201(iParam0, iParam1, 2);
				return;
			}
			if (func_1205(iParam0, iParam1))
			{
				func_1201(iParam0, iParam1, 4);
				return;
			}
			break;
		case 4:
			if (iVar0 == 1)
			{
				_0xd4fa73fe628fec63(func_1203(iParam0, iParam1), 160);
				func_1201(iParam0, iParam1, 7);
			}
			else if (!_0xf6a8a652a6b186cd(func_1203(iParam0, iParam1)))
			{
				func_1206(iParam0, iParam1);
				func_1201(iParam0, iParam1, 2);
			}
			break;
		case 5:
			if ((iVar3 == 2 || iVar2 == 2) || iVar0 > 1)
			{
				func_1201(iParam0, iParam1, 2);
			}
			break;
		case 6:
			break;
		case 7:
			if ((iVar3 == 2 || iVar2 == 2) || iVar0 > 1)
			{
				_0xd4fa73fe628fec63(func_1203(iParam0, iParam1), 32);
				func_1201(iParam0, iParam1, 4);
			}
			else if (!_0xf6a8a652a6b186cd(func_1203(iParam0, iParam1)))
			{
				func_1206(iParam0, iParam1);
				func_1201(iParam0, iParam1, 5);
			}
			break;
	}
}

void func_1051(int iParam0, int iParam1)
{
	if (!func_838(iParam0, 16))
	{
		return;
	}
	uVar0 = func_1184(iParam0);
	uVar1 = func_1185(iParam0, iParam1);
	iVar3 = func_1186(iParam0, iParam1);
	if (iVar3 > 0 && !func_1176(iParam0))
	{
		func_1207(iParam0, iParam1, 0);
		return;
	}
	switch (iVar3)
	{
		case -1:
			if (!func_18(func_1053(iParam0)))
			{
				return;
			}
			if (func_1208(iParam0, iParam1) <= 0)
			{
				func_1207(iParam0, iParam1, 0);
				return;
			}
			else
			{
				func_1207(iParam0, iParam1, 1);
				return;
			}
			break;
		case 0:
			if (!func_1176(iParam0))
			{
				return;
			}
			if (func_1208(iParam0, iParam1) <= 0)
			{
				return;
			}
			iVar2 = func_1209(iParam0);
			if (iVar2 != -15 && func_1210(iVar2))
			{
				return;
			}
			func_1207(iParam0, iParam1, 1);
			break;
		case 1:
			if (!func_1211(iParam0, iParam1, 0))
			{
			}
			else
			{
				func_1207(iParam0, iParam1, 2);
				func_1063(iParam0, 3);
				return;
			}
			break;
		case 2:
			if (!func_1211(iParam0, iParam1, 0))
			{
				if (!_0x1b89bc43b6e69107(uVar0, uVar1, false, 0))
				{
					func_1207(iParam0, iParam1, 3);
					return;
				}
			}
			if (func_1031(iParam0) >= 3)
			{
				func_1207(iParam0, iParam1, 3);
				return;
			}
			break;
		case 3:
			if (func_1031(iParam0) >= 3)
			{
				return;
			}
			if (!func_1212(iParam0, iParam1))
			{
				func_1207(iParam0, iParam1, 2);
				return;
			}
			if (func_1055(iParam0) != 255)
			{
				func_1063(iParam0, 2);
			}
			else
			{
				func_1063(iParam0, 1);
			}
			iVar2 = func_1209(iParam0);
			if (iVar2 != -15 && func_1210(iVar2))
			{
				func_1207(iParam0, iParam1, 0);
				return;
			}
			if (func_1031(iParam0) >= 4)
			{
				return;
			}
			if (func_1213(iParam0, 7))
			{
				return;
			}
			func_1207(iParam0, iParam1, 1);
			break;
	}
}

bool func_1052(int iParam0, int iParam1)
{
	if (iParam1 > -1 && iParam1 < 5)
	{
		if (!func_18(func_1053(iParam0)))
		{
			func_1033(iParam0, 5);
			return true;
		}
	}
	if (!func_1176(iParam0) && iParam1 < 5)
	{
		func_1214(iParam0);
		func_1033(iParam0, 5);
		return true;
	}
	return false;
}

struct<2> func_1053(int iParam0)
{
	if (iParam0 < 0)
	{
		return func_820();
	}
	return Global_1198046->f_231[iParam0]->f_5;
}

void func_1054(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	if (!_network_is_player_index_valid(iParam1))
	{
		return;
	}
	if (!network_is_player_active(iParam1))
	{
		return;
	}
	Global_1198046->f_2505[iParam0]->f_4 = _0x901e0dc25080c8b9(iParam1);
	Global_1198046->f_2505[iParam0]->f_5 = iParam1;
}

int func_1055(int iParam0)
{
	return Global_1198046->f_2505[iParam0]->f_5;
}

bool func_1056(int iParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar0))
		{
		}
		else if (func_1036(iParam0, iVar0, iParam1))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_1057(int iParam0)
{
	if (!func_838(iParam0, 512))
	{
		return false;
	}
	iVar0 = func_1215(iParam0);
	if (iVar0 <= 0)
	{
		return false;
	}
	uVar1 = func_286(func_1216(iParam0, 0), 0f, 0f, 0f, IntToFloat(iVar0), IntToFloat(iVar0), IntToFloat(iVar0 * 2), -432403087, 0, 8);
	return count_player_bits(&uVar1) <= 0;
}

bool func_1058(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar0))
		{
		}
		else if (!func_1046(iParam0, iVar0))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

void func_1059(int iParam0)
{
	if (Global_1198046->f_231.f_1066[iParam0]->f_6 & 4096 != 0)
	{
		return;
	}
	iVar0 = Global_1198046->f_2505[iParam0]->f_5;
	if (!_network_is_player_index_valid(iVar0))
	{
		return;
	}
	if (network_is_player_active(iVar0))
	{
		iVar2 = _0x901e0dc25080c8b9(iVar0);
		if (Global_1198046->f_2505[iParam0]->f_4 != iVar2)
		{
			if ((_0xd6f6acf4392187fb(Global_1198046->f_2505[iParam0]->f_4) && _0x93a91a351a07360e(Global_1198046->f_2505[iParam0]->f_4)) && _0x149a2751ab66ac02(Global_1198046->f_2505[iParam0]->f_4) > 0)
			{
				iVar1 = _0x4be6c13a45cca8ec(Global_1198046->f_2505[iParam0]->f_4);
				func_1054(iParam0, iVar1);
			}
			else if (_0x4be6c13a45cca8ec(iVar2) == iVar0)
			{
				Global_1198046->f_2505[iParam0]->f_4 = iVar2;
			}
			else
			{
				func_1217(iParam0);
			}
		}
		return;
	}
	if (Global_1198046->f_2505[iParam0]->f_4 == 0)
	{
		func_1217(iParam0);
		return;
	}
	if (!_0x93a91a351a07360e(Global_1198046->f_2505[iParam0]->f_4))
	{
		func_1217(iParam0);
		return;
	}
	iVar1 = _0x4be6c13a45cca8ec(Global_1198046->f_2505[iParam0]->f_4);
	if (!_network_is_player_index_valid(iVar1))
	{
		func_1217(iParam0);
		return;
	}
	if (!network_is_player_active(iVar1))
	{
		func_1217(iParam0);
		return;
	}
	func_1054(iParam0, iVar1);
}

bool func_1060(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar0))
		{
		}
		else if ((*Global_1207784)[iVar0][iParam0] > 255)
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_1061(int iParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar0))
		{
		}
		else if (!func_1036(iParam0, iVar0, iParam1))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

int func_1062(int iParam0)
{
	if (!func_849(iParam0))
	{
		return -1;
	}
	return Global_1198046->f_231[iParam0]->f_1;
}

void func_1063(int iParam0, int iParam1)
{
	Global_1198046->f_231[iParam0]->f_1 = iParam1;
}

int func_1064(var uParam0)
{
	return *uParam0;
}

struct<40> func_1065(var uParam0, int iParam1)
{
	Var0 = { func_1218(uParam0, iParam1) };
	func_1219(uParam0, iParam1);
	return Var0;
}

bool func_1066(var uParam0, var uParam1)
{
	if (uParam0->f_2 == -1)
	{
		return false;
	}
	if (uParam1->f_2 == -1)
	{
		return false;
	}
	if (uParam0->f_2 != uParam1->f_2)
	{
		return false;
	}
	if (uParam0->f_3 != uParam1->f_3)
	{
		return false;
	}
	if (uParam0->f_4 != -1 && uParam1->f_1 != -1)
	{
		if (uParam0->f_1 == uParam1->f_1 && uParam0->f_4 == uParam1->f_4)
		{
			return true;
		}
		return false;
	}
	if (uParam0->f_5 == -1)
	{
		return false;
	}
	if (uParam1->f_5 == -1)
	{
		return false;
	}
	if (uParam0->f_5 != uParam1->f_5)
	{
		return false;
	}
	if (uParam0->f_7 != uParam1->f_7)
	{
		return false;
	}
	if (uParam0->f_8 != uParam1->f_8)
	{
		return false;
	}
	if (uParam0->f_8.f_1 != uParam1->f_8.f_1)
	{
		return false;
	}
	if (!func_907(uParam0->f_8.f_5, uParam1->f_8.f_5))
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_2 != uParam1->f_8.f_5.f_2)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_3 != uParam1->f_8.f_5.f_3)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_4 != uParam1->f_8.f_5.f_4)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_5 != uParam1->f_8.f_5.f_5)
	{
		return false;
	}
	if (!func_907(uParam0->f_8.f_5.f_6, uParam1->f_8.f_5.f_6))
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_8 != uParam1->f_8.f_5.f_8)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_9 != uParam1->f_8.f_5.f_9)
	{
		return false;
	}
	return true;
}

void func_1067(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_1068(var uParam0)
{
	return *uParam0;
}

bool func_1069(var uParam0)
{
	if (func_18(*uParam0))
	{
		return true;
	}
	if (uParam0->f_2 != 0)
	{
		if (uParam0->f_3 != -1)
		{
			return true;
		}
		if (uParam0->f_4 != -1)
		{
			return true;
		}
		if (uParam0->f_5 != -1)
		{
			return true;
		}
	}
	return false;
}

int func_1070(var uParam0, int iParam1)
{
	iVar0 = func_1220(iParam1);
	iVar1 = ((&Global_1198046->f_3[iParam1] + iVar0) - 1);
	if (&Global_1198046->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_1221(iParam1)) - 1);
	}
	bVar2 = func_18(*uParam0);
	bVar3 = (uParam0->f_2 != 0 && uParam0->f_3 != -1);
	bVar4 = (uParam0->f_2 != 0 && uParam0->f_4 != -1);
	bVar5 = (uParam0->f_2 != 0 && uParam0->f_5 != -1);
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		if (bVar2)
		{
			if (func_907(Global_1198046->f_231[iVar6]->f_5, *uParam0))
			{
				return iVar6;
			}
		}
		if (bVar3)
		{
			if (Global_1198046->f_231[iVar6]->f_5.f_2 == uParam0->f_2 && Global_1198046->f_231[iVar6]->f_5.f_3 == uParam0->f_3)
			{
				return iVar6;
			}
		}
		if (bVar4)
		{
			if (Global_1198046->f_231[iVar6]->f_5.f_2 == uParam0->f_2 && Global_1198046->f_231[iVar6]->f_5.f_4 == uParam0->f_4)
			{
				return iVar6;
			}
		}
		if (bVar5)
		{
			if (Global_1198046->f_231[iVar6]->f_5.f_2 == uParam0->f_2 && Global_1198046->f_231[iVar6]->f_5.f_5 == uParam0->f_5)
			{
				return iVar6;
			}
		}
		iVar6++;
	}
	return -1;
}

bool func_1071(int iParam0)
{
	iVar0 = func_846(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (!_0x93a91a351a07360e(iVar0))
	{
		return false;
	}
	return true;
}

void func_1072(struct<2> Param0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	Var0.f_2 = 0;
	Var0.f_5 = 7;
	Var0.f_8.f_1 = 2;
	Var0.f_8 = 1;
	Var0.f_8.f_5.f_9 = 1;
	Var0.f_8.f_5 = { Param0 };
	func_1222(&(Global_1107216->f_33.f_513), &Var0, 0, 0, 0, 0, 0);
}

void func_1073(int iParam0, int iParam1)
{
	Global_1107216->f_33[iParam0]->f_3.f_7 = iParam1;
}

var func_1074(int iParam0)
{
	return Global_1107216->f_33[iParam0]->f_3.f_7;
}

int func_1075()
{
	return Global_1901947->f_308.f_41;
}

bool func_1076(struct<2> Param0, int iParam2)
{
	iVar0 = func_846(iParam2);
	bVar1 = (iVar0 != 0 && _0x93a91a351a07360e(iVar0));
	if (Global_1109804->f_18)
	{
		iVar2 = func_1223(Param0);
		if (func_1224(iVar2, bVar1))
		{
			func_1072(Param0);
			return true;
		}
	}
	else
	{
		func_1072(Param0);
		return true;
	}
	return false;
}

int func_1077(int iParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (!&Global_1296859->f_22[iVar1])
		{
		}
		else
		{
			iVar0 = (iVar0 || (*Global_1128574)[iVar1]->f_1[iParam0]) // PointerArith;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1078(int iParam0)
{
	Global_1107216->f_33[iParam0]->f_1 = -1;
}

int func_1079()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_846(iVar0) == 0)
		{
		}
		else if (!_0x93a91a351a07360e(func_846(iVar0)))
		{
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

var func_1080()
{
	return Global_1107216->f_750.f_1;
}

void func_1081()
{
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	if (!func_651())
	{
		return;
	}
	iVar32 = _network_get_session_host();
	if (!_network_is_player_index_valid(iVar32))
	{
		return;
	}
	if (!network_is_player_active(iVar32))
	{
		return;
	}
	_0x31010318ba9897ac(&uVar31, iVar32);
	Var0.f_10 = player_id();
	Var0.f_11 = _0x901e0dc25080c8b9(Var0.f_10);
	Var0.f_4 = 9;
	func_444();
	func_1094(&Var0, uVar31);
}

void func_1082(int iParam0)
{
	func_1225(iParam0);
	func_1078(iParam0);
	func_1226(iParam0);
}

int func_1083(int iParam0, var uParam1)
{
	iVar0 = func_1077(iParam0);
	if (iVar0 & 8 != 0)
	{
		return 0;
	}
	if (Global_1109804->f_19)
	{
		if (!func_908(iParam0, 4))
		{
			if (_0x51f33dbc1a41cbfd() & 9 != 0)
			{
				return 0;
			}
		}
	}
	else if (_0x51f33dbc1a41cbfd() & 9 != 0)
	{
		return 0;
	}
	func_1226(iParam0);
	func_1078(iParam0);
	*uParam1 = 0;
	return 1;
}

int func_1084(int iParam0, var uParam1)
{
	func_1226(iParam0);
	func_1078(iParam0);
	*uParam1 = 0;
	return 1;
}

struct<2> func_1085()
{
	return Global_1109804->f_11;
}

int func_1086()
{
	return Global_1109804->f_11.f_3;
}

void func_1087(int iParam0)
{
	Global_1109804->f_21.f_12.f_1 = iParam0;
}

void func_1088(int iParam0)
{
	Global_1109804->f_21.f_12.f_2 = iParam0;
}

void func_1089(int iParam0)
{
	Global_1109804->f_21.f_12.f_3 = iParam0;
}

void func_1090()
{
	func_1227(&(Global_1109804->f_21.f_12));
}

void func_1091()
{
	(*Global_1128574)[player_id()]->f_34 = 0;
}

int func_1092(int iParam0)
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

bool func_1093(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

void func_1094(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 31, 32, &uParam1);
}

void func_1095(int iParam0)
{
	Global_1109804->f_21.f_109.f_1 = iParam0;
}

void func_1096(int iParam0)
{
	Global_1109804->f_21.f_109 = iParam0;
}

void func_1097(int iParam0)
{
	Global_1109804->f_21.f_109.f_2 = iParam0;
}

void func_1098(struct<2> Param0)
{
	Global_1109804->f_21.f_109.f_3 = { Param0 };
}

void func_1099(int iParam0)
{
	Global_1109804->f_21.f_109.f_5 = iParam0;
}

void func_1100(int iParam0)
{
	Global_1109804->f_21.f_109.f_6 = iParam0;
}

void func_1101(int iParam0)
{
	Global_1109804->f_21.f_109.f_7 = iParam0;
}

void func_1102(int iParam0)
{
	Global_1109804->f_21.f_109.f_6 = iParam0;
}

void func_1103(int iParam0)
{
	_copy_memory(&(Global_1109804->f_21.f_109.f_9), iParam0, 4);
}

bool func_1104(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 36);
}

int func_1105(int iParam0)
{
	return Global_1107216->f_33[iParam0]->f_3;
}

bool func_1106(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 62);
}

int func_1107(int iParam0)
{
	return Global_1107216->f_33[iParam0]->f_3.f_1;
}

bool func_1108(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 90);
}

int func_1109(int iParam0)
{
	return Global_1107216->f_33[iParam0]->f_3.f_3;
}

bool func_1110()
{
	return Global_1109804->f_21.f_109.f_8;
}

int func_1111(int iParam0)
{
	return &(Global_1109804->f_5737[iParam0]);
}

int func_1112(int iParam0)
{
	return func_1228(iParam0);
}

void func_1113(int iParam0, var uParam1)
{
	_copy_memory(uParam1, &(Global_1107216->f_33[iParam0]->f_3.f_9), 4);
}

Vector3 func_1114(int iParam0)
{
	return (*Global_1116202)[iParam0]->f_7.f_1;
}

var func_1115(int iParam0)
{
	return (*Global_1116202)[iParam0]->f_7;
}

void func_1116(var uParam0, var uParam1, vector3 vParam2, var uParam5)
{
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar12 = int_to_playerindex(iVar2);
		if (!_network_is_player_index_valid(iVar12))
		{
		}
		else if (!network_is_player_active(iVar12))
		{
		}
		else if (!_0x9be7dcb22d32ccbe(uParam1, iVar12))
		{
		}
		else if (_0x424b17a7dc5c90bc(iVar12))
		{
			(*uParam0)[0] = iVar12;
			Jump @159; //curOff = 85
		}
		else if (func_1229(iVar12, vParam2, uParam5))
		{
			if (iVar0 + 1 < 7)
			{
				(*uParam0)[(1 + iVar0)] = iVar12;
				iVar0++;
			}
		}
		else if (iVar1 < 7)
		{
			iVar4[iVar1] = iVar2;
			iVar1++;
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= (iVar1 - 1))
	{
		iVar3 = &iVar4[iVar2];
		iVar12 = int_to_playerindex(iVar3);
		if (iVar0 + 1 < 7)
		{
			(*uParam0)[(1 + iVar0)] = iVar12;
			iVar0++;
		}
		iVar2++;
	}
}

void func_1117(int iParam0, int iParam1)
{
	_copy_memory(Global_1109804->f_6371.f_3[iParam1], iParam0, 5);
}

void func_1118(var uParam0, int iParam1)
{
	_copy_memory(uParam0, Global_1109804->f_6371.f_3[iParam1], 5);
}

void func_1119(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1109804->f_6371.f_3[iParam1]->f_5), iParam0, 4);
}

void func_1120(var uParam0, int iParam1)
{
	_copy_memory(uParam0, &(Global_1109804->f_6371.f_3[iParam1]->f_5), 4);
}

void func_1121(int iParam0)
{
	Global_1139381->f_4912[iParam0] = _unlock_is_new((*Global_1835011)[iParam0]->f_3);
	Global_1139381->f_4912[iParam0]->f_2 = _unlock_is_visible((*Global_1835011)[iParam0]->f_3);
	Global_1139381->f_4912[iParam0]->f_1 = _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3);
}

int func_1122(struct<2> Param0)
{
	return func_19(Param0);
}

int func_1123(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_21())
	{
		return 0;
	}
	if (!func_26())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_1230(&Global_0, 8);
	}
	func_1230(&Global_0, 1);
	return 1;
}

void func_1124(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_1231(func_1130(Param0));
	iVar1 = func_1122(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_57() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_1232(Param0, &Var2);
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

void func_1125(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_1233(Global_1940258, 8388608);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_1234(Global_1940258, 8388608);
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

void func_1126(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_1235(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_1236(cVar2);
			}
			else
			{
				func_1237();
			}
			_0xf611de44aeb36a1d(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_1127(bool bParam0)
{
	if (!bParam0 && func_763(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_1128(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_1129(struct<2> Param0)
{
	return func_1239(func_1238(Param0));
}

int func_1130(var uParam0, var uParam1)
{
	return uParam0;
}

int func_1131(struct<2> Param0)
{
	iVar0 = func_677(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1240(iVar0);
}

int func_1132(struct<2> Param0, int iParam2)
{
	if (Global_1071686->f_19550 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_77(Param0, &vVar0))
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
		func_77(*Global_1071686->f_19550.f_1[iVar9], &vVar3);
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
			func_1241(iVar9);
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

void func_1133()
{
	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (func_77(*Global_1071686->f_19550.f_1[iVar0], &vVar1))
		{
		}
		iVar0++;
	}
}

int func_1134(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1193206973;
		case 2:
			return -1344025432;
		case 4:
			return -108962728;
		default:
			break;
	}
	return 0;
}

int func_1135(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
	return 0;
}

bool func_1136(var uParam0)
{
	_copy_memory(uParam0, &uVar0, 5);
	if (!func_1242(1))
	{
		return false;
	}
	*uParam0 = Global_1071686->f_28448[51]->f_3;
	return true;
}

bool func_1137(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	uVar0 = uParam0->f_1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		uParam0->f_1 = uVar0;
		return false;
	}
	return true;
}

int func_1138(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	return _datafile_get_num_nodes(uParam0);
}

struct<8> func_1139(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1243(&uParam0, 69, 1);
}

var func_1140(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1244(&uParam0, 93, 1, -1);
}

var func_1141(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1245(&uParam0, 94, 1);
}

int func_1142(struct<5> Param0, int iParam5)
{
	if (!func_1137(&Param0, 28, iParam5, 0, 1))
	{
		return 0;
	}
	iVar1 = func_1138(&Param0, 3);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		iVar3 = 0;
		iVar2 = func_1246(Param0, iVar0);
		switch (iParam5)
		{
			case -783556459:
				iVar3 = func_1248(func_1247(iVar2));
				break;
			case -952694274:
				iVar3 = func_1248(func_1249(iVar2));
				break;
			case -1564702706:
				iVar3 = func_1248(func_1250(iVar2));
				break;
			case -1000179465:
				iVar3 = func_1248(func_1251(iVar2));
				break;
			default:
				break;
		}
		uVar4 = (uVar4 || iVar3);
		iVar0++;
	}
	return uVar4;
}

struct<8> func_1143(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1243(&uParam0, 87, 1);
}

int func_1144(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1252(&uParam0, 87, 1);
}

Vector3 func_1145(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1253(&uParam0, 88, 1);
}

Vector3 func_1146(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1253(&uParam0, 68, 1);
}

int func_1147(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1254(func_1252(&uParam0, 89, 1));
}

var func_1148(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1245(&uParam0, 90, 1);
}

Vector3 func_1149(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1253(&uParam0, 91, 1);
}

var func_1150(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1244(&uParam0, 86, 0, -1);
}

var func_1151(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1244(&uParam0, 83, 0, -1);
}

var func_1152(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1244(&uParam0, 85, 0, -1);
}

var func_1153(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1244(&uParam0, 84, 0, -1);
}

var func_1154(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1244(&uParam0, 92, 1, -1);
}

void func_1155(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = { 0f, 0f, 0f };
}

void func_1156(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1157(var uParam0)
{
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		uParam0->f_1[iVar0] = 0;
		iVar0++;
	}
}

char* func_1158(int iParam0)
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

bool func_1159(int iParam0)
{
	return iParam0 != 0;
}

int func_1160(struct<2> Param0, var uParam2, var uParam3, var uParam4, int iParam5)
{
	uVar5 = Param0.f_1;
	*iParam5 = func_1255(&Param0);
	iVar1 = func_798(&Param0, 5);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar5;
		if (!func_641(&Param0, 33, iVar0, 0, 1))
		{
		}
		else
		{
			iVar4 = func_997(&Param0, 60, 1);
			switch (*iParam5)
			{
				case 914197110:
					iVar2 = func_1256(iVar4);
					break;
				case 253781561:
					iVar2 = func_1257(iVar4);
					break;
				case -646838152:
					iVar2 = func_1258(iVar4);
					break;
				case 356437857:
					iVar2 = func_1259(iVar4);
					break;
				case -1649591222:
					iVar2 = func_1260(iVar4);
					break;
				case -1444170561:
					iVar2 = func_1261(iVar4);
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

void func_1161(int iParam0, int iParam1)
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

void func_1162(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_604(uParam0))
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

int func_1163(var uParam0)
{
	return func_997(uParam0, 79, 1);
}

int func_1164(var uParam0)
{
	return func_997(uParam0, 80, 1);
}

int func_1165(var uParam0)
{
	return func_997(uParam0, 81, 1);
}

var func_1166(var uParam0)
{
	return func_1012(uParam0, 82, 1);
}

void func_1167(struct<5> Param0, var uParam5)
{
	uVar4 = Param0.f_1;
	iVar1 = func_798(&Param0, 4);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		Param0.f_1 = uVar4;
		if (!func_641(&Param0, 31, iVar0, 0, 1))
		{
			return;
		}
		iVar2 = func_1160(Param0, &iVar3);
		switch (iVar3)
		{
			case -1649591222:
				uParam5->f_5 = iVar2;
				break;
			default:
				break;
		}
		iVar0++;
	}
}

void func_1168(int iParam0)
{
	if (!func_489(iParam0))
	{
		return;
	}
	(*Global_1128574)[network_player_id_to_int()] = iParam0;
}

bool func_1169()
{
	return func_18(*Global_1051213);
}

void func_1170(int iParam0)
{
	if (!func_1104(iParam0))
	{
		return;
	}
	func_1262(iParam0);
}

void func_1171()
{
	if (!func_1169())
	{
		return;
	}
	if (!func_18(*Global_1051213))
	{
		return;
	}
	func_288(Global_1051213);
}

void func_1172(int iParam0)
{
	if (func_505(Global_1130592, iParam0, 1))
	{
	}
}

void func_1173(int iParam0, int iParam1)
{
	Global_1130592->f_2[iParam0] = iParam1;
}

struct<2> func_1174(int iParam0)
{
	return Global_1210161->f_1[iParam0]->f_4;
}

void func_1175(int iParam0, struct<2> Param1)
{
	Global_1210161->f_1[iParam0]->f_4 = { Param1 };
	Global_1210161->f_1[iParam0]->f_6 = func_19(Param1);
}

bool func_1176(int iParam0)
{
	bVar0 = !func_1264(func_1174(iParam0), func_1263(iParam0), 0);
	return bVar0;
}

void func_1177(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	clear_bit((*(*Global_1207784)[iVar0])[iParam0], iParam1);
}

int func_1178()
{
	return Global_1102219->f_3673;
}

int func_1179(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 255;
	}
	return &(Global_1102219->f_3675[iParam0]);
}

void func_1180(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_18(Param0))
	{
		return;
	}
	if (!func_943(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1265(Param0);
	}
	if (!func_18(func_210(0)))
	{
		func_946(Param0, 3);
		func_1125(bParam3);
		func_1126(!bParam4);
		func_1266(Param0, -1);
		if (bParam2 && !func_517(2))
		{
			func_1230(&Global_0, 1024);
		}
		func_1128(1);
	}
	else
	{
		func_1266(Param0, -1);
		func_946(Param0, 4);
		func_1267(Param0, 0);
	}
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_1130(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_1268(Param0, &Var1))
		{
			_0x1096603b519c905f(&(Var1.f_17));
		}
	}
}

void func_1181(int iParam0, int iParam1)
{
	if (!func_1193(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_1269(iParam0, iParam1);
	if (!is_thread_active(iVar0, false))
	{
		return;
	}
	_0x7de4643157ad646c(iVar0);
}

void func_1182(int iParam0, int iParam1)
{
	func_1189(iParam0, iParam1);
	func_1188(iParam0, iParam1, -1);
}

void func_1183(int iParam0)
{
	func_288(&(Global_1210161->f_1[iParam0]->f_4));
	Global_1210161->f_1[iParam0]->f_6 = 0;
}

var func_1184(int iParam0)
{
	return &(Global_1198046->f_231.f_1066[iParam0]);
}

var func_1185(int iParam0, int iParam1)
{
	return Global_1198046->f_231.f_1066[iParam0]->f_8[iParam1]->f_1;
}

var func_1186(int iParam0, int iParam1)
{
	return Global_1198046->f_2505[iParam0][iParam1];
}

int func_1187(int iParam0, int iParam1)
{
	return Global_1210161->f_1[iParam0][iParam1];
}

void func_1188(int iParam0, int iParam1, int iParam2)
{
	(*Global_1210161->f_1[iParam0])[iParam1] = iParam2;
}

void func_1189(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_1195(iParam0, iParam1, iVar0);
		iVar0++;
	}
}

bool func_1190(int iParam0, int iParam1)
{
	iVar0 = func_1208(iParam0, iParam1);
	if (iVar0 == 2147483647)
	{
		return true;
	}
	vVar1 = { func_1270(player_id()) };
	if (func_97(vVar1))
	{
		return false;
	}
	return func_721(vVar1, func_1216(iParam0, iParam1)) < IntToFloat(iVar0);
}

void func_1191(int iParam0, int iParam1, int iParam2)
{
	func_1044(iParam0, func_1271(iParam1, iParam2));
}

bool func_1192(int iParam0, int iParam1)
{
	iVar0 = func_1185(iParam0, iParam1);
	iVar1 = func_1184(iParam0);
	if (func_1193(iParam0, iParam1))
	{
		return false;
	}
	if (_0x1b89bc43b6e69107(iVar1, iVar0, true, 0))
	{
		return false;
	}
	if (func_838(iParam0, 8))
	{
		if (func_1199(iParam0, iParam1) != 4)
		{
			return false;
		}
	}
	request_script_with_name_hash(iVar1);
	if (has_script_with_name_hash_loaded(iVar1))
	{
		if (get_number_of_free_stacks_of_this_size(func_1272(iParam0)) <= 0)
		{
			return false;
		}
		if (func_838(iParam0, 64))
		{
			Var3.f_7 = -1;
			Var3.f_7.f_1 = -1;
			Var3.f_9 = 255;
			Var3 = iVar0;
			Var3.f_9 = func_1055(iParam0);
			Var3.f_1 = { func_1216(iParam0, iParam1) };
			Var3.f_5 = iParam0;
			Var3.f_7 = { func_1174(iParam0) };
			iVar2 = start_new_script_with_name_hash_and_args(iVar1, &Var3, 10, func_1272(iParam0));
		}
		else if (func_838(iParam0, 128))
		{
			Var13 = iVar0;
			Var13.f_1 = func_1273(iVar1);
			Var13.f_2 = Global_1198046->f_231.f_1066[iParam0]->f_14;
			Var13.f_3 = Global_1198046->f_231.f_1066[iParam0]->f_15;
			Var13.f_4 = Global_1198046->f_231.f_1066[iParam0]->f_16;
			iVar2 = start_new_script_with_name_hash_and_args(iVar1, &Var13, 5, func_1272(iParam0));
		}
		else
		{
			iVar2 = start_new_script_with_name_hash_and_args(iVar1, &uVar18, 1, func_1272(iParam0));
		}
		func_1194(iParam0, iParam1, iVar2);
		set_script_with_name_hash_as_no_longer_needed(iVar1);
		func_1274(iVar1, iVar0);
		return true;
	}
	return false;
}

bool func_1193(int iParam0, int iParam1)
{
	return _does_thread_exist((*Global_1210161->f_1[iParam0])[iParam1]->f_2);
}

void func_1194(int iParam0, int iParam1, int iParam2)
{
	(*Global_1210161->f_1[iParam0])[iParam1]->f_2 = iParam2;
}

void func_1195(int iParam0, int iParam1, int iParam2)
{
	func_1177(iParam0, func_1271(iParam1, iParam2));
}

bool func_1196(int iParam0, int iParam1)
{
	if (!func_838(iParam0, 1024))
	{
		return false;
	}
	iVar0 = func_1215(iParam0);
	if (iVar0 <= 0)
	{
		return false;
	}
	return func_721(Global_35, func_1216(iParam0, iParam1)) > IntToFloat(iVar0);
}

int func_1197(int iParam0, int iParam1)
{
	return (*Global_1210161->f_1[iParam0])[iParam1]->f_1;
}

void func_1198(int iParam0, int iParam1, int iParam2)
{
	if (!_0xa4a4359320345b34(iParam2))
	{
		(*Global_1210161->f_1[iParam0])[iParam1]->f_1 = 0;
		return;
	}
	(*Global_1210161->f_1[iParam0])[iParam1]->f_1 = iParam2;
}

int func_1199(int iParam0, int iParam1)
{
	return (*Global_1198046->f_2505[iParam0])[iParam1]->f_1;
}

void func_1200(int iParam0, int iParam1)
{
	func_1206(iParam0, iParam1);
	func_1049(iParam0, iParam1);
}

void func_1201(int iParam0, int iParam1, int iParam2)
{
	(*Global_1198046->f_2505[iParam0])[iParam1]->f_1 = iParam2;
}

int func_1202(int iParam0, int iParam1)
{
	return Global_1198046->f_231.f_1066[iParam0]->f_8[iParam1]->f_2;
}

int func_1203(int iParam0, int iParam1)
{
	return (*Global_1198046->f_2505[iParam0])[iParam1]->f_2;
}

void func_1204(int iParam0, int iParam1, bool bParam2)
{
	if (func_1197(iParam0, iParam1) != 0 && !func_1275(func_1197(iParam0, iParam1)))
	{
		return;
	}
	iVar0 = 96;
	if (!bParam2)
	{
		iVar0 += 128;
	}
	if (func_1049(iParam0, iParam1))
	{
		Var1 = { func_1216(iParam0, iParam1) };
		Var1.f_4 = to_float(func_1202(iParam0, iParam1));
		Var1.f_5 = iVar0;
		Var1.f_6 = func_1276(iParam0);
		Var10 = { func_1174(iParam0) };
		iVar12 = 0;
		if (func_18(Var10))
		{
			iVar12 = func_19(Var10);
		}
		if (iVar12 != 0)
		{
			Var1.f_7 = iVar12;
		}
		else
		{
			Var1.f_7 = -1546799264;
		}
		func_1198(iParam0, iParam1, _0x183c0b6cfeffcae4(&Var1));
	}
}

bool func_1205(int iParam0, int iParam1)
{
	if (func_1203(iParam0, iParam1) != 0)
	{
		return true;
	}
	func_1277(iParam0, iParam1);
	func_1204(iParam0, iParam1, 1);
	iVar0 = func_1197(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (!func_1278(iVar0))
	{
		return false;
	}
	func_1279(iParam0, iParam1, _0x351d71b8b72b858b(func_1197(iParam0, iParam1)));
	return true;
}

void func_1206(int iParam0, int iParam1)
{
	iVar0 = func_1203(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	if (!_0xf6a8a652a6b186cd(iVar0))
	{
		func_1279(iParam0, iParam1, 0);
		return;
	}
	_0xfdfecc6ee4491e11(iVar0);
	func_1279(iParam0, iParam1, 0);
	func_1049(iParam0, iParam1);
}

void func_1207(int iParam0, int iParam1, int iParam2)
{
	(*Global_1198046->f_2505[iParam0])[iParam1] = iParam2;
}

int func_1208(int iParam0, int iParam1)
{
	return Global_1198046->f_231.f_1066[iParam0]->f_8[iParam1]->f_3;
}

int func_1209(int iParam0)
{
	return Global_1198046->f_231.f_1066[iParam0]->f_4;
}

bool func_1210(int iParam0)
{
	return &Global_1902818 > iParam0;
}

bool func_1211(int iParam0, int iParam1, int iParam2)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar0))
		{
		}
		else if (func_1280(iParam0, iParam1, iVar0, iParam2))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_1212(int iParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar0))
		{
		}
		else if (!func_1281(iParam0, iParam1, iVar0))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

bool func_1213(int iParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (!network_is_player_active(iVar0))
		{
		}
		else if (!func_1036(iParam0, iVar0, 2))
		{
		}
		else if (!func_1036(iParam0, iVar0, iParam1))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_1214(int iParam0)
{
	if (!func_849(iParam0))
	{
		return 0;
	}
	Var0 = 2;
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	Var15 = { *Global_1198046->f_231[iParam0] };
	Var0.f_1 = 0;
	*Global_1198046->f_231[iParam0] = { Var0 };
	iVar30 = Var15;
	iVar31 = Var15.f_5.f_9;
	Global_1198046->f_13[iVar31] = (&Global_1198046->f_13[iVar31] - 1);
	Global_1198046->f_8[iVar30] = (&Global_1198046->f_8[iVar30] - 1);
	if (iVar30 != iVar31)
	{
		Global_1198046->f_18[iVar30] = (&Global_1198046->f_18[iVar30] - 1);
	}
	if (func_1282(iParam0))
	{
		Global_1198046->f_23[iVar30] = (&Global_1198046->f_23[iVar30] - 1);
	}
	return 1;
}

var func_1215(int iParam0)
{
	return Global_1198046->f_231.f_1066[iParam0]->f_2;
}

Vector3 func_1216(int iParam0, int iParam1)
{
	return func_1283(&(Global_1198046->f_231.f_1066[iParam0]->f_8[iParam1]));
}

void func_1217(int iParam0)
{
	Global_1198046->f_2505[iParam0]->f_4 = 0;
	Global_1198046->f_2505[iParam0]->f_5 = 255;
}

struct<40> func_1218(var uParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	if (!func_1284(uParam0, iParam1))
	{
		return Var0;
	}
	Var40 = { *uParam0->f_3[iParam1] };
	*uParam0->f_3[iParam1] = { Var0 };
	return Var40;
}

void func_1219(var uParam0, int iParam1)
{
	iVar0 = (((uParam0->f_1 + *uParam0) - 1) % uParam0->f_2);
	if (uParam0->f_1 == iParam1)
	{
		iVar2 = *uParam0;
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			iVar3 = ((uParam0->f_1 + iVar1) % uParam0->f_2);
			if (&uParam0->f_3[iVar3] != -1)
			{
			}
			else
			{
				if (uParam0->f_3[iVar3]->f_4 != -1)
				{
					func_1218(uParam0, iVar3);
				}
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		uParam0->f_1 = iVar3;
		*uParam0 = iVar2;
	}
	else if (iVar0 == iParam1)
	{
		iVar2 = *uParam0;
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			iVar4 = ((iVar0 - iVar1) + 5 % uParam0->f_2);
			if (&uParam0->f_3[iVar4] != -1)
			{
			}
			else
			{
				func_1218(uParam0, iVar4);
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		*uParam0 = iVar2;
	}
}

int func_1220(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 3;
		case 2:
			return 35;
		case 3:
			return 55;
		default:
			break;
	}
	return 0;
}

int func_1221(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			if (&Global_1198046->f_3[iParam0] * 2 <= 32)
			{
				return &Global_1198046->f_3[iParam0] * 2;
			}
			return 32;
		case 2:
			if (&Global_1198046->f_3[iParam0] * 2 <= 20)
			{
				return &Global_1198046->f_3[iParam0] * 2;
			}
			return 20;
		case 3:
			if (&Global_1198046->f_3[iParam0] * 2 <= 16)
			{
				return &Global_1198046->f_3[iParam0] * 2;
			}
			return 16;
		default:
			break;
	}
	return 0;
}

int func_1222(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_1285(uParam0))
	{
		return 0;
	}
	if (!func_1286(&(uParam1->f_8)))
	{
		return 0;
	}
	if (uParam1->f_2 == -1)
	{
		return 0;
	}
	if (uParam1->f_2 == 5)
	{
		uParam1->f_3 = player_id();
	}
	if (uParam1->f_5 == -1)
	{
		return 0;
	}
	if (uParam1->f_8 != uParam1->f_8.f_5.f_9)
	{
		return 0;
	}
	iVar0 = func_1287(uParam0, uParam1);
	if (iVar0 >= 0)
	{
		return 0;
	}
	switch (uParam1->f_5)
	{
		case 0:
		case 1:
		case 3:
		default:
			break;
			if (!func_1288(uParam1, bParam2, iParam3, iParam4, iParam5, iParam6))
			{
				return 0;
			}
			break;
	}
	uParam1->f_7 = get_network_time_accurate();
	iVar1 = ((uParam0->f_1 + *uParam0) % uParam0->f_2);
	uParam1->f_4 = iVar1;
	*uParam0->f_3[iVar1] = { *uParam1 };
	func_1067(uParam0->f_3[iVar1], 0);
	*uParam0++;
	return 1;
}

int func_1223(struct<2> Param0)
{
	if (!func_18(Param0))
	{
		return 0;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		Var0 = { func_490(iVar2) };
		if (func_907(Var0, Param0))
		{
			iVar4 = func_853(iVar2);
			iVar5 = func_846(iVar2);
			if (iVar4 >= 1 && iVar4 <= 4)
			{
				if (iVar5 != 0 && _0x93a91a351a07360e(iVar5))
				{
					iVar3++;
				}
			}
		}
		iVar2++;
	}
	return iVar3;
}

bool func_1224(int iParam0, bool bParam1)
{
	if (iParam0 > 1)
	{
		return false;
	}
	if (iParam0 < 1)
	{
		return true;
	}
	if (bParam1)
	{
		return true;
	}
	return false;
}

void func_1225(int iParam0)
{
	Global_1107216->f_33[iParam0] = 0;
}

void func_1226(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_9.f_1 = -1;
	_copy_memory(&(Global_1107216->f_33[iParam0]->f_3), &Var0, 13);
}

void func_1227(var uParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_9 = -1;
	Var0.f_9.f_1 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = 7;
	Var0.f_12.f_1 = 255;
	Var0.f_12.f_1.f_1 = 255;
	Var0.f_12.f_1.f_1.f_1 = 255;
	Var0.f_12.f_1.f_1.f_1.f_1 = 255;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_23 = -1;
	Var0.f_23.f_1 = -1;
	*uParam0 = { Var0 };
}

var func_1228(int iParam0)
{
	return (*Global_1297717)[iParam0]->f_3;
}

bool func_1229(int iParam0, vector3 vParam1, float fParam4)
{
	return vdist(func_1270(iParam0), vParam1) <= fParam4;
}

void func_1230(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1231(int iParam0)
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

void func_1232(struct<2> Param0, var uParam2)
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
	switch (func_1130(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_1289(func_348(Param0));
			iVar5 = func_1290(iVar4);
			if (!func_1291(iVar5, 0))
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

void func_1233(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1234(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_1235(int iParam0, int iParam1)
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

void func_1236(char[12] cParam0)
{
	Global_1939161->f_75.f_67 = { cParam0 };
}

void func_1237()
{
	StringCopy(&(Global_1939161->f_75.f_67), "", 24);
}

int func_1238(struct<2> Param0)
{
	if (!func_18(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_907(*Global_1900736->f_1[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1239(int iParam0)
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
		func_288(Global_1900736->f_1[0]);
		return 1;
	}
	func_288(Global_1900736->f_1[iParam0]);
	Global_1900736->f_66 = (Global_1900736->f_66 - 1);
	func_1292(iParam0, Global_1900736->f_66);
	return 1;
}

int func_1240(int iParam0)
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

int func_1241(int iParam0)
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

bool func_1242(int iParam0)
{
	if (!_0x7907969497ea92f5(Global_1071686->f_28448[51]->f_3))
	{
		return false;
	}
	if (!_0x603ac35fd4602c76(Global_1071686->f_28448[51]->f_3))
	{
		return false;
	}
	return true;
}

struct<8> func_1243(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (!_datafile_get_string(&Var0, uParam0))
	{
	}
	return Var0;
}

int func_1244(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_2 = iParam1;
	if (!_datafile_get_int(&iVar0, uParam0))
	{
		iVar0 = iParam3;
	}
	return iVar0;
}

var func_1245(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (!_datafile_get_float(&uVar0, uParam0))
	{
	}
	return uVar0;
}

int func_1246(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	if (!func_1137(&uParam0, 30, iParam5, 0, 1))
	{
		return 0;
	}
	return func_1252(&uParam0, 61, 1);
}

int func_1247(int iParam0)
{
	switch (iParam0)
	{
		case -1813649426:
			return 1;
		case -1728078503:
			return 2;
		case 664704845:
			return 4;
		case -656485570:
			return 8;
		case 856889675:
			return 16;
		case -40729341:
			return 32;
		case 513761045:
			return 64;
		case -608370326:
			return 128;
		case -1443098918:
			return 256;
		case -1138842803:
			return 512;
		case 1959327570:
			return 1024;
		case -1584776041:
			return 2048;
		case -1303182884:
			return 4096;
		case 1317645850:
			return 8192;
		case 2020911072:
			return 16384;
		case 1930555512:
			return 32768;
		default:
			break;
	}
	return 0;
}

int func_1248(int iParam0)
{
	return iParam0;
}

int func_1249(int iParam0)
{
	switch (iParam0)
	{
		case 1934013388:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1250(int iParam0)
{
	switch (iParam0)
	{
		case -1420685820:
			return 1;
		case -445480404:
			return 2;
		case -138533181:
			return 4;
		case 675169979:
			return 16;
		case 1324736666:
			return 8;
		case 74623641:
			return 64;
		default:
			break;
	}
	return 0;
}

int func_1251(int iParam0)
{
	switch (iParam0)
	{
		case 472588819:
			return 1;
		case 1830115867:
			return 2;
		case 465284456:
			return 4;
		case -429839084:
			return 8;
		default:
			break;
	}
	return 0;
}

int func_1252(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (_datafile_get_hash(&uVar0, uParam0))
	{
	}
	return uVar0;
}

Vector3 func_1253(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (!_datafile_get_vector(&vVar0, uParam0))
	{
	}
	return vVar0;
}

int func_1254(int iParam0)
{
	switch (iParam0)
	{
		case 258009537:
			return 0;
		case 1598423091:
			return 11569;
		case 1090952104:
			return 14410;
		case 1370242291:
			return 14411;
		case 1542345079:
			return 14412;
		case 1846998472:
			return 14413;
		case -31418915:
			return 14414;
		case 171486733:
			return 14415;
		case 351191929:
			return 14416;
		case 952081078:
			return 14283;
		case -1507887760:
			return 14284;
		case 1277968783:
			return 14285;
		case 127516762:
			return 21030;
		default:
			break;
	}
	return -1;
}

int func_1255(var uParam0)
{
	return func_997(uParam0, 60, 1);
}

int func_1256(int iParam0)
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

int func_1257(int iParam0)
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

int func_1258(int iParam0)
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

int func_1259(int iParam0)
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

int func_1260(int iParam0)
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

int func_1261(int iParam0)
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

void func_1262(int iParam0)
{
	func_288(&((*Global_1118808)[iParam0]->f_16));
}

int func_1263(int iParam0)
{
	if (!func_849(iParam0))
	{
		return 0;
	}
	return Global_1198046->f_231[iParam0]->f_5.f_8;
}

bool func_1264(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return true;
	}
	if (func_18(*Global_1051213) && !func_907(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_719(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_1293(iParam3, 255))
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
	if (func_355())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_18(*Global_1051213))
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

void func_1265(struct<2> Param0)
{
	if (func_1122(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_1122(Param0)))
	{
	}
	else
	{
		_0xb2a38826e5886e83(func_1122(Param0), Global_265377->f_124517.f_71.f_17);
		if (func_1268(Param0, &Var0))
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

int func_1266(struct<2> Param0, int iParam2)
{
	iVar0 = func_1238(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900736->f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900736->f_66;
	func_1294(Param0, iVar0);
	Global_1900736->f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900736->f_66)
	{
		return iVar0;
	}
	func_1292(iVar0, iParam2);
	return iParam2;
}

int func_1267(struct<2> Param0, int iParam2)
{
	if (!func_18(Param0))
	{
		return 0;
	}
	iVar0 = func_1238(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_1295(Param0, func_210(0), iParam2))
	{
		func_946(func_210(0), 3);
		func_946(func_210(iVar0), 4);
		return 0;
	}
	func_1292(iVar0, 0);
	func_946(func_210(0), 3);
	func_946(func_210(1), 4);
	return 1;
}

bool func_1268(struct<2> Param0, var uParam2)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_77(Param0, &vVar0);
	if (func_1296(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

int func_1269(int iParam0, int iParam1)
{
	return (*Global_1210161->f_1[iParam0])[iParam1]->f_2;
}

Vector3 func_1270(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

int func_1271(int iParam0, int iParam1)
{
	return (8 + (iParam0 * 2 + iParam1));
}

var func_1272(int iParam0)
{
	return Global_1198046->f_231.f_1066[iParam0]->f_1;
}

int func_1273(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1881122909:
			return 1;
		case 1746254613:
			return 2;
		case -210940392:
			return 3;
		case -337883659:
			return 4;
		case -2127851115:
			return 6;
		case -1515832348:
			return 7;
		case -392050235:
			return 5;
		case -16753530:
			return 11;
		case -1210919694:
			return 8;
		case -1628357986:
			return 9;
		case -1054322328:
			return 10;
		case -1488065830:
			return 12;
		case 1903114091:
			return 13;
		case 1623440542:
			return 14;
		case -726533106:
			return 15;
		case 911021683:
			return 16;
		case 338631142:
			return 17;
		case -1896431036:
			return 18;
		case 1875318885:
			return 19;
		case 518160998:
			return 20;
		case 681896882:
			return 31;
		case 409019465:
			return 21;
		case -1877273045:
			return 28;
		case -510630761:
			return 24;
		case 1558203524:
			return 25;
		case -1347839684:
			return 22;
		case 569695338:
			return 23;
		case 617627179:
			return 29;
		case -721827460:
			return 26;
		case -502572877:
			return 30;
		case 1541283230:
			return 27;
		case 1773252799:
			return 32;
		case -1209093440:
			return 33;
		case 901959776:
			return 34;
		default:
			break;
	}
	return 0;
}

void func_1274(int iParam0, int iParam1)
{
	if (Global_1051252->f_80.f_101 >= 10)
	{
		return;
	}
	iVar0 = func_1297(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return;
	}
	StringCopy(Global_1051252->f_80[Global_1051252->f_80.f_101], "HashOnlyScript", 64);
	Global_1051252->f_80[Global_1051252->f_80.f_101]->f_8 = iParam0;
	Global_1051252->f_80[Global_1051252->f_80.f_101]->f_9 = iParam1;
	Global_1051252->f_80.f_101++;
	Global_1051252->f_45.f_1 = 1;
}

bool func_1275(int iParam0)
{
	if (!_0xa4a4359320345b34(iParam0))
	{
		return true;
	}
	if (_0xb33a604345f58202(iParam0) == 4)
	{
		return true;
	}
	return false;
}

var func_1276(int iParam0)
{
	return Global_1198046->f_231.f_1066[iParam0]->f_3;
}

void func_1277(int iParam0, int iParam1)
{
	if (func_1197(iParam0, iParam1) != 0)
	{
		if (func_1275(func_1197(iParam0, iParam1)))
		{
			func_1206(iParam0, iParam1);
			func_1049(iParam0, iParam1);
		}
	}
}

bool func_1278(int iParam0)
{
	if (!_0xa4a4359320345b34(iParam0))
	{
		return false;
	}
	iVar0 = _0xb33a604345f58202(iParam0);
	if (iVar0 == 3)
	{
		return true;
	}
	return false;
}

void func_1279(int iParam0, int iParam1, int iParam2)
{
	if (!_0xf6a8a652a6b186cd(iParam2))
	{
		(*Global_1198046->f_2505[iParam0])[iParam1]->f_2 = 0;
		return;
	}
	(*Global_1198046->f_2505[iParam0])[iParam1]->f_2 = iParam2;
}

bool func_1280(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return func_1036(iParam0, iParam2, func_1271(iParam1, iParam3));
}

bool func_1281(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_1280(iParam0, iParam1, iParam2, iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_1282(int iParam0)
{
	if (iParam0 < 3)
	{
		return false;
	}
	if (iParam0 < (&Global_1198046->f_3[1] + 3))
	{
		return false;
	}
	if (iParam0 < 35)
	{
		return true;
	}
	if (iParam0 < (&Global_1198046->f_3[2] + 35))
	{
		return false;
	}
	if (iParam0 < (&Global_1198046->f_3[2] + 35) + 16)
	{
		return false;
	}
	return true;
}

Vector3 func_1283(int iParam0)
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

bool func_1284(var uParam0, int iParam1)
{
	return (iParam1 >= 0 && iParam1 < uParam0->f_2);
}

bool func_1285(var uParam0)
{
	return *uParam0 == uParam0->f_2;
}

bool func_1286(var uParam0)
{
	if (uParam0->f_1 == -1)
	{
		return false;
	}
	if (!func_1069(&(uParam0->f_5)))
	{
		return false;
	}
	return true;
}

int func_1287(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar1 = ((uParam0->f_1 + iVar0) % uParam0->f_2);
		if (func_1298(uParam1, uParam0->f_3[iVar1]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1288(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var33 = -1;
	Var33.f_1 = -1;
	if (func_18(uParam0->f_8.f_5))
	{
		Var33 = { uParam0->f_8.f_5 };
	}
	else if (func_18(uParam0->f_8.f_5.f_6))
	{
		Var33 = { uParam0->f_8.f_5.f_6 };
	}
	else
	{
		return true;
	}
	bVar35 = false;
	if (func_97(uParam0->f_8.f_2))
	{
		bVar35 = true;
	}
	else
	{
		bVar35 = false;
	}
	if (bParam1)
	{
		Var0.f_25 = iParam2;
		Var0.f_26 = iParam3;
		Var0.f_27 = iParam4;
		Var0.f_28 = iParam5;
	}
	else if (!func_1299(func_19(Var33), &Var0))
	{
		return false;
	}
	if (Var0.f_25 <= 0 || Var0.f_25 > 50)
	{
		if (Var0.f_25 != 0)
		{
		}
		iVar36[0] = 0;
	}
	else
	{
		iVar36[0] = 1;
	}
	if (Var0.f_26 <= 0 || Var0.f_26 > 10)
	{
		if (Var0.f_26 != 0)
		{
		}
		iVar36[1] = 0;
	}
	else
	{
		iVar36[1] = 1;
	}
	if (Var0.f_27 <= 0 || Var0.f_27 > 25)
	{
		if (Var0.f_27 != 0)
		{
		}
		iVar36[2] = 0;
	}
	else
	{
		iVar36[2] = 1;
	}
	if (Var0.f_28 <= 0 || Var0.f_28 > 10)
	{
		if (Var0.f_28 != 0)
		{
		}
		iVar36[3] = 0;
	}
	else
	{
		iVar36[3] = 1;
	}
	if (bVar35)
	{
		iVar43 = get_num_reserved_mission_peds(1);
		iVar44 = get_num_reserved_mission_vehicles(1);
		iVar45 = get_num_reserved_mission_objects(1);
		iVar46 = _0x62be3ecc79fbd004(1);
	}
	else
	{
		_0x5e71e72a94985214(uParam0->f_8.f_2, 0, &iVar43, &iVar44, &iVar45, &iVar46);
	}
	iVar41 = 0;
	while (iVar41 < 4)
	{
		iVar47 = iVar41;
		if (iVar47 == -1)
		{
		}
		else if (!&iVar36[iVar41])
		{
		}
		else
		{
			switch (iVar47)
			{
				case 0:
					iVar42 = (get_max_num_network_peds() - iVar43);
					if (iVar42 < Var0.f_25)
					{
						return false;
					}
					break;
					break;
				case 1:
					iVar42 = (get_max_num_network_vehicles() - iVar44);
					if (iVar42 < Var0.f_26)
					{
						return false;
					}
					break;
					break;
				case 2:
					iVar42 = (get_max_num_network_objects() - iVar45);
					if (iVar42 < Var0.f_27)
					{
						return false;
					}
					break;
					break;
				case 3:
					iVar42 = (get_max_num_network_pickups() - iVar46);
					if (iVar42 < Var0.f_28)
					{
						return false;
					}
					break;
					break;
			}
		}
		iVar41++;
	}
	return true;
}

int func_1289(int iParam0)
{
	iVar0 = -1;
	if (func_1300(&Var1, iParam0))
	{
		iVar0 = ((func_1301() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_1290(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_1291(int iParam0, int iParam1)
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

void func_1292(int iParam0, int iParam1)
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
			func_1302((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1302(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_18(*Global_1900736->f_1[0]))
	{
		func_946(*Global_1900736->f_1[0], 3);
	}
}

bool func_1293(int iParam0, int iParam1)
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

void func_1294(struct<2> Param0, int iParam2)
{
	if (!func_18(Param0))
	{
		func_288(Global_1900736->f_1[iParam2]);
	}
	else
	{
		*Global_1900736->f_1[iParam2] = { Param0 };
	}
	func_1303(Param0, 0, 1, -1);
}

bool func_1295(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	if (!func_18(Param0))
	{
		return false;
	}
	if (!func_18(Param2))
	{
		return true;
	}
	iVar0 = func_1130(Param0);
	iVar1 = func_1130(Param2);
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

bool func_1296(int iParam0, int iParam1, var uParam2)
{
	if (!func_1304(iParam0))
	{
		return false;
	}
	if (func_1305(iParam0, iParam1, &uVar0))
	{
		func_1306(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_1297(int iParam0, int iParam1)
{
	if (Global_1051252->f_80.f_101 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1051252->f_80.f_101 - 1))
	{
		if (Global_1051252->f_80[iVar0]->f_8 == iParam0 && Global_1051252->f_80[iVar0]->f_9 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1298(var uParam0, var uParam1)
{
	if (uParam1->f_2 == -1)
	{
		return false;
	}
	if (uParam0->f_2 == -1)
	{
		return false;
	}
	if (uParam1->f_2 != uParam0->f_2)
	{
		return false;
	}
	if (uParam1->f_5 == -1)
	{
		return false;
	}
	if (uParam0->f_5 == -1)
	{
		return false;
	}
	if (uParam1->f_5 != uParam0->f_5)
	{
		return false;
	}
	if (uParam1->f_8 != uParam0->f_8)
	{
		return false;
	}
	if (uParam1->f_8.f_1 != uParam0->f_8.f_1)
	{
		return false;
	}
	if (!func_907(uParam1->f_8.f_5, uParam0->f_8.f_5))
	{
		return false;
	}
	if (uParam1->f_8.f_5.f_4 != uParam0->f_8.f_5.f_4)
	{
		return false;
	}
	if (uParam1->f_8.f_5.f_2 != uParam0->f_8.f_5.f_2)
	{
		return false;
	}
	return true;
}

bool func_1299(int iParam0, var uParam1)
{
	Var0 = { func_1307(iParam0) };
	if (!func_18(Var0))
	{
		return false;
	}
	func_1296(Var0, iParam0, uParam1);
	return true;
}

bool func_1300(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

int func_1301()
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

void func_1302(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { *Global_1900736->f_1[iParam0] };
	*Global_1900736->f_1[iParam0] = { *Global_1900736->f_1[iParam1] };
	*Global_1900736->f_1[iParam1] = { Var0 };
}

int func_1303(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	if (func_1308(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_19(Param0);
	Var0.f_3 = iParam3;
	func_1309(&Var0, bParam2, iParam4);
	return 1;
}

bool func_1304(int iParam0)
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

bool func_1305(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_1310(iParam0);
	uParam2->f_4 = iParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_1306(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_1311(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_1312(iVar0);
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
			uParam2->f_5 = func_1313(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1314(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1315(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_1316(iVar0);
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

struct<2> func_1307(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_637(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_637(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_637(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_637(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_637(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_637(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_637(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_820();
}

int func_1308(struct<2> Param0)
{
	if (Global_1196205->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205->f_129)
	{
		if (func_907((*Global_1196205)[iVar0]->f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1309(var uParam0, bool bParam1, int iParam2)
{
	func_1317(uParam0, iParam2);
	if (Global_1196205->f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_1318(func_1308(uParam0->f_1));
	}
	else
	{
		func_1319();
	}
}

int func_1310(int iParam0)
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

int func_1311(int iParam0, var uParam1)
{
	if (func_1320(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_1312(int iParam0)
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

int func_1313(int iParam0)
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

int func_1314(int iParam0)
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

int func_1315(int iParam0)
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

int func_1316(int iParam0)
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

void func_1317(var uParam0, int iParam1)
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

void func_1318(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1196205->f_129)
	{
		return;
	}
	Global_1196205->f_130 = iParam0;
	Global_1196205->f_131 = Global_1196205[iParam0];
}

void func_1319()
{
	if (Global_1196205->f_131 == 0)
	{
		return;
	}
	Global_1196205->f_130 = func_1321(Global_1196205->f_131);
	if (Global_1196205->f_130 < 0)
	{
		Global_1196205->f_131 = 0;
	}
}

bool func_1320(int iParam0, var uParam1, var uParam2)
{
	if (func_1322(iParam0, uParam1, &uVar0))
	{
		func_1323(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_1321(int iParam0)
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

bool func_1322(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_1310(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_1323(var uParam0, int iParam1, var uParam2)
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

