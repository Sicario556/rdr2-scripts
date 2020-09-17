void __EntryFunction__()
{
	sLocal_0 = "";
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	Global_33 = -1;
	Global_17379 = { func_1() };
	func_2();
	func_3();
	wait(0);
	func_4();
	uVar0 = 15;
	while (!func_5(&uVar0))
	{
		wait(0);
	}
	func_6(1);
	if (!Global_39)
	{
	}
	func_7();
	set_player_invincible(player_id(), true);
	while (get_is_loading_screen_active() && func_8(&uLocal_35) < 2)
	{
		func_9();
		wait(0);
	}
	_0xe5ff65cff5160752();
	_0x603469298a4308af(1);
	func_10(0);
	while (true)
	{
		if (func_11() == 0 && is_orbis_version())
		{
			if (!Global_1572887->f_10)
			{
				_0x236905c700fdb54d();
			}
			if (!func_12())
			{
				if (!func_13())
				{
					_0x236905c700fdb54d();
				}
			}
			if (func_14() > 3)
			{
				_0x236905c700fdb54d();
			}
		}
		iVar16 = get_clock_hours();
		func_15(iVar16);
		func_16(iVar16);
		func_17(&uLocal_119);
		func_18(func_14() == 3);
		func_19(Global_1901847);
		func_9();
		if (func_20(1024))
		{
			_0x9428447ded71fc7e("Load_Menu_Scenes");
			func_21(1024);
		}
		switch (func_14())
		{
			case 0:
				if (Global_39)
				{
					func_22();
					func_21(4);
				}
				else if (_game_transition_manager_get_mode() != 496295564)
				{
					if (!func_23())
					{
						func_24(1);
					}
				}
				else
				{
					func_22();
					func_21(4);
				}
				if (func_25() == 1 || func_25() == 0)
				{
					func_26();
					func_10(1);
				}
				else
				{
					func_21(4);
					func_10(2);
				}
				break;
			case 1:
				if (func_27())
				{
					func_21(4);
					func_10(2);
				}
				break;
			case 2:
				func_28();
				if (func_29(func_25()))
				{
					func_10(3);
				}
				break;
			case 3:
				func_30();
				func_31();
				func_32();
				if (func_33())
				{
					func_34();
					func_10(4);
				}
				break;
			case 4:
				if (func_35())
				{
					func_36();
					func_21(4);
					func_37();
					func_38();
					if (func_25() == 1)
					{
						func_10(5);
						_0xa4484173759749b1();
						_0xbc2c927f5c264243(0);
					}
					else if (func_25() != 5)
					{
						if (func_39() != 1)
						{
							func_10(5);
							_0xe98204d3c25ae14c(func_40());
						}
						else
						{
							func_10(2);
						}
					}
					else
					{
						func_10(2);
					}
				}
				break;
			case 5:
				_0xa4484173759749b1();
				_0xe98204d3c25ae14c(func_40());
				break;
		}
		wait(0);
	}
}

struct<4> func_1()
{
	return Var0;
}

void func_2()
{
	network_set_script_is_safe_for_network_game();
	_0x3e74a687a73979c6(1);
	_0x6339c1ea3979b5f7("Main_Menu", "Load_Menu_Scenes");
}

void func_3()
{
}

void func_4()
{
	set_fade_in_after_load(false);
	set_fade_in_after_death_arrest(false);
	func_41();
	func_42();
	func_43();
}

bool func_5(var uParam0)
{
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (func_44(iVar1))
		{
			if (!func_45(iVar1, (*uParam0)[iVar1]))
			{
				bVar0 = false;
			}
		}
		iVar1++;
	}
	if (bVar0)
	{
		_0x11986b05885564d2(1);
	}
	return bVar0;
}

void func_6(bool bParam0)
{
	_set_global_block_can_be_accessed(1, bParam0);
	_set_global_block_can_be_accessed(2, bParam0);
	_set_global_block_can_be_accessed(4, bParam0);
	_set_global_block_can_be_accessed(8, bParam0);
	_set_global_block_can_be_accessed(9, bParam0);
}

void func_7()
{
	func_46();
	func_47();
	_set_guarma_worldhorizon_active(false);
	_0xa657ec9dbc6cc900(-1868977180);
	func_48();
}

int func_8(var uParam0)
{
	return uParam0->f_76;
}

void func_9()
{
	if (get_is_loading_screen_active())
	{
		func_49(&uLocal_35);
	}
	else if (func_50(&uLocal_35))
	{
		func_51(&uLocal_35);
	}
}

void func_10(int iParam0)
{
	Local_32 = iParam0;
	Local_32.f_1 = get_game_timer();
}

int func_11()
{
	return Global_1572887->f_13;
}

bool func_12()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_13()
{
	return &Global_1048577;
}

int func_14()
{
	return Local_32;
}

void func_15(int iParam0)
{
	if (iParam0 < 6)
	{
		Global_1902819 = 8;
		return;
	}
	if (iParam0 < 12)
	{
		Global_1902819 = 1;
		return;
	}
	if (iParam0 < 18)
	{
		Global_1902819 = 2;
		return;
	}
	Global_1902819 = 4;
}

void func_16(int iParam0)
{
	iVar0 = ((((shift_left(get_clock_seconds(), 0) || shift_left(get_clock_minutes(), 6)) || shift_left(iParam0, 12)) || shift_left(get_clock_month(), 22)) || shift_left(get_clock_day_of_month(), 17));
	iVar1 = get_clock_year();
	if ((iVar1 < 0 || iVar1 > 1930) || iVar1 < 1866)
	{
		return;
	}
	if (iVar1 < 1898)
	{
		iVar0 = (iVar0 || shift_left((1898 - iVar1), 26)) | -2147483648;
	}
	else
	{
		iVar0 = (iVar0 || shift_left((iVar1 - 1898), 26));
		iVar0 = (iVar0 - iVar0 & -2147483648);
	}
	Global_1902818 = iVar0;
}

void func_17(var uParam0)
{
	if (func_11() == -3)
	{
		return;
	}
	bVar0 = _0x7af1bb4504ea5ed9();
	if (&Global_1957959 != bVar0)
	{
		Global_1957959 = bVar0;
		if (bVar0)
		{
			func_52("COMP_APP_CONNECT", 10000, 0, 0, 0, 1);
		}
		else
		{
			*uParam0 = 0;
			func_53(&(uParam0->f_1));
			func_52("COMP_APP_DISCONNECT", 10000, 0, 0, 0, 1);
		}
		func_54();
	}
	if (&Global_1957959)
	{
		func_55(uParam0);
	}
	func_54();
}

void func_18(bool bParam0)
{
	func_56();
	func_57();
	if (!bParam0)
	{
		return;
	}
	func_58();
	func_59();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_60(Global_1071686->f_16.f_356[iVar0]);
		iVar0++;
	}
}

void func_19(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (!is_orbis_version())
			{
				func_61(3);
			}
			if (func_62())
			{
				func_63(&(Global_1901847->f_1));
				func_61(1);
			}
			break;
		case 1:
			if (func_64(&(Global_1901847->f_1), 10000, 1))
			{
				func_61(2);
			}
			break;
		case 2:
			func_65();
			if (!func_62())
			{
				func_61(0);
			}
			break;
		case 3:
			if (func_62())
			{
				func_66();
			}
			break;
		default:
			func_61(0);
			break;
	}
}

bool func_20(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_21(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 - (Global_1572864->f_3 && iParam0));
}

void func_22()
{
	func_67(4);
	func_68();
	func_24(2);
	func_69(1785216189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

bool func_23()
{
	iVar0 = 0;
	return iVar0;
}

void func_24(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864->f_1 = iParam0;
}

int func_25()
{
	return Global_1572864->f_1;
}

void func_26()
{
	vLocal_29 = { vVar0 };
}

bool func_27()
{
	func_70();
	switch (func_71())
	{
		case 0:
			if (does_entity_exist(player_ped_id()) && !is_entity_dead(player_ped_id()))
			{
				set_fade_in_after_load(false);
				set_fade_in_after_death_arrest(false);
				set_player_control(get_player_index(), false, 0, false);
				_0xf239400e16c23e08(2, 0);
				func_68();
				func_72(1);
				func_73(0);
				func_74();
				func_75(0);
				func_76();
				func_77(-1);
				network_set_script_ready_for_events(true);
				func_78(1);
			}
			else if (does_entity_exist(player_ped_id()))
			{
				resurrect_ped(player_ped_id());
			}
			break;
		case 1:
			if (func_79())
			{
				func_78(2);
			}
			else if (_0x9eeb007317fa3b9c())
			{
				func_78(2);
				vLocal_29.f_2 = 5;
			}
			break;
		case 2:
			if (is_screen_faded_out() || func_80())
			{
				if (func_81())
				{
					func_82();
				}
				else
				{
					vLocal_29.f_2 = 1;
					func_67(4);
				}
				if (func_80())
				{
					do_screen_fade_out(0);
				}
				func_24(vLocal_29.z);
				trigger_music_event("stop_title_screen_music");
				network_set_script_ready_for_events(false);
				_0xa0cefcea390aab9b(2);
				return true;
			}
			else if (!is_screen_fading_out())
			{
				do_screen_fade_out(0);
			}
			break;
	}
	return false;
}

void func_28()
{
	if (!func_20(64))
	{
		return;
	}
	switch (func_83())
	{
		case -1050153785:
			if (func_84(655115506))
			{
				func_85(2);
			}
			else if (func_84(133180145))
			{
				func_85(1);
			}
			else
			{
				func_85(0);
			}
			if (func_84(1651967528))
			{
				Global_28 = 1;
				Global_32 = 1;
			}
			if (func_84(-84928653))
			{
				Global_30 = 1;
			}
			if ((func_84(-2030542394) || func_84(1737952409)) || _0xfc4165c9165c166f())
			{
				Global_31 = 1;
			}
			else
			{
				Global_31 = 0;
			}
			if (func_84(-1357178860))
			{
				Global_1572887->f_5 = 1;
			}
			else
			{
				Global_1572887->f_5 = 0;
			}
			if (func_84(-88424047))
			{
				Global_27 = 1;
			}
			if (func_84(1306134188))
			{
			}
			if (func_84(2137301164))
			{
			}
			if (func_84(-159568751))
			{
			}
			if (func_84(-1879562593))
			{
			}
			if (func_84(1890312850))
			{
			}
			if (func_84(313296873))
			{
				Global_33 = 0;
			}
			else if (func_84(541270806))
			{
				Global_33 = 1;
			}
			else if (func_84(922800273))
			{
				Global_33 = 2;
			}
			else if (func_84(1298496858))
			{
				Global_33 = 3;
			}
			else
			{
				Global_33 = -1;
			}
			break;
		case -1330461529:
			break;
		case -1950263389:
			break;
		case 1495295997:
			break;
		case 1375707186:
			Global_29 = 1;
			Global_1572887->f_5 = 1;
			break;
	}
	func_21(64);
}

bool func_29(int iParam0)
{
	iVar1 = 1024;
	switch (iParam0)
	{
		case 1:
			func_67(4);
			return true;
		case 2:
			sVar0 = func_86(2);
			iVar1 = 1024;
			break;
		case 3:
			sVar0 = func_86(3);
			iVar1 = 25500;
			break;
		case 4:
			sVar0 = func_86(4);
			iVar1 = 25500;
			break;
		case 5:
			sVar0 = func_86(5);
			iVar1 = 1024;
			break;
	}
	if (_get_number_of_references_of_script_with_name_hash(get_hash_key(sVar0)) > 0)
	{
		func_87(iParam0);
		return true;
	}
	if (func_88(sVar0, iVar1))
	{
		func_87(iParam0);
		func_89(iParam0);
		func_36();
		return true;
	}
	return false;
}

void func_30()
{
}

void func_31()
{
}

void func_32()
{
}

bool func_33()
{
	if (func_39() != func_25())
	{
		return true;
	}
	if (func_20(4))
	{
		return true;
	}
	if (func_79())
	{
		func_81();
		do_screen_fade_out(0);
		return true;
	}
	return false;
}

void func_34()
{
	func_41();
	func_21(4);
	_0xa0cefcea390aab9b(0);
	if (func_39() == 3)
	{
		if (_does_thread_exist(Global_1572887->f_17))
		{
			func_67(2048);
		}
	}
	else if (func_39() == 4)
	{
		if (_does_thread_exist(Global_1572887->f_17))
		{
			func_67(2048);
		}
	}
	else
	{
		force_cleanup(2);
	}
}

bool func_35()
{
	script_thread_iterator_reset();
	iVar0 = script_thread_iterator_get_next_thread_id();
	iVar1 = get_id_of_this_thread();
	iVar2 = 1;
	while (_does_thread_exist(iVar0))
	{
		bVar3 = true;
		if (iVar0 == iVar1)
		{
			bVar3 = false;
		}
		else if (_is_background_script(iVar0))
		{
			bVar3 = false;
		}
		if (bVar3)
		{
			if (!_0x30bed53646c86d11(iVar0))
			{
				_0x7de4643157ad646c(iVar0);
			}
			if (func_11() == -1)
			{
				force_cleanup_for_thread_with_this_id(iVar0, 2);
			}
			_0x236905c700fdb54d();
			iVar2 = 0;
			wait(0);
		}
		iVar0 = script_thread_iterator_get_next_thread_id();
	}
	return iVar2;
}

void func_36()
{
	if (func_39() != 2)
	{
		set_script_as_no_longer_needed(func_86(2));
	}
	if (func_39() != 3)
	{
		set_script_as_no_longer_needed(func_86(3));
	}
	if (func_39() != 4)
	{
		set_script_as_no_longer_needed(func_86(4));
	}
	if (func_39() != 5)
	{
		set_script_as_no_longer_needed(func_86(5));
	}
}

void func_37()
{
}

void func_38()
{
	if (Global_1572887->f_6)
	{
		Global_1572887->f_6 = 0;
		_0x3180e991d4b8f248();
	}
}

int func_39()
{
	return &Global_1572864;
}

char* func_40()
{
	StringCopy(&cVar0, "-mode=", 64);
	StringConCat(&cVar0, func_90(func_83()), 64);
	StringCopy(&cVar8, "-char_slot=", 64);
	StringIntConCat(&cVar8, Global_1572887->f_405.f_12, 64);
	StringCopy(&cVar97, "", 64);
	switch (func_83())
	{
		case 1785216189:
			return _create_var_string(10, "LAUNCH_PARAMS", &cVar0);
		case -1050153785:
			iVar105 = 0;
			iVar106 = 0;
			iVar105 = 0;
			while (iVar105 <= 33)
			{
				if (func_91(iVar105) && iVar106 < 10)
				{
					StringCopy(Var16[iVar106], "-arg_", 64);
					StringIntConCat(Var16[iVar106], iVar106, 64);
					StringConCat(Var16[iVar106], "=", 64);
					StringConCat(Var16[iVar106], func_93(func_92(iVar105)), 64);
					iVar106++;
				}
				iVar105++;
			}
			if (func_84(-1480790826))
			{
				StringCopy(&cVar107, "-series_id=", 64);
				StringConCat(&cVar107, func_94(Global_1572887->f_405.f_5), 64);
				return _create_var_string(174762, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar107, Var16[0], Var16[1], Var16[2], Var16[3], Var16[4]);
			}
			if (Global_1572887->f_405.f_6 != -1)
			{
				StringCopy(&cVar115, "-region_id=", 64);
				StringConCat(&cVar115, func_95(Global_1572887->f_405.f_6), 64);
				return _create_var_string(174762, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar115, Var16[0], Var16[1], Var16[2], Var16[3], Var16[4]);
			}
			else if (Global_1572887->f_405.f_7 != -1)
			{
				StringCopy(&cVar123, "-district_id=", 64);
				StringConCat(&cVar123, func_96(Global_1572887->f_405.f_7), 64);
				return _create_var_string(174762, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar123, Var16[0], Var16[1], Var16[2], Var16[3], Var16[4]);
			}
			else if (Global_1572887->f_405.f_8 != -1)
			{
				StringCopy(&cVar131, "-state_id=", 64);
				StringConCat(&cVar131, func_97(Global_1572887->f_405.f_8), 64);
				return _create_var_string(174762, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar131, Var16[0], Var16[1], Var16[2], Var16[3], Var16[4]);
			}
			else
			{
				return _create_var_string(174762, "LAUNCH_PARAMS", &cVar0, &cVar8, Var16[0], Var16[1], Var16[2], Var16[3], Var16[4], &cVar97);
			}
			break;
		case -1743646234:
			return _create_var_string(42, "LAUNCH_PARAMS", &cVar0, &cVar8);
		case -1330461529:
			StringCopy(&cVar139, "-series_id=", 64);
			StringConCat(&cVar139, func_94(Global_1572887->f_405.f_5), 64);
			return _create_var_string(170, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar139);
		case -1950263389:
			StringCopy(&cVar147, "-mission_id=", 64);
			StringConCat(&cVar147, "", 64);
			return _create_var_string(170, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar147);
		case 1495295997:
			StringCopy(&cVar155, "-minigame_id=", 64);
			StringConCat(&cVar155, func_98(Global_1572887->f_405.f_10), 64);
			return _create_var_string(170, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar155);
		case 1375707186:
			return _create_var_string(42, "LAUNCH_PARAMS", &cVar0, &cVar8);
	}
	return "";
}

void func_41()
{
	func_99();
	func_100();
	func_101();
	_0x11b0a0b282fa9b10(0);
}

void func_42()
{
	sLocal_0 = "startup";
	_0xed4b0c1057892b2e(&Global_17411, 3090, 0, sLocal_0);
	func_102(&Global_17411, "g_mpSavedGlobals.herbs", 0);
	func_103(&(Global_17411.f_55), "g_mpSavedGlobals.sPersona");
	func_104(&(Global_17411.f_2565), "g_mpSavedGlobals.eTutorialsRun", 0);
	func_105(&(Global_17411.f_2598), "g_mpSavedGlobals.iTutorialBuffer");
	func_106(&(Global_17411.f_2621), "g_mpSavedGlobals.sNotoriety");
	func_107(&(Global_17411.f_2624), "g_mpSavedGlobals.sNotorietyTU004");
	func_108(&(Global_17411.f_2625), "g_mpSavedGlobals.sOutfitSaveDataTU004");
	func_109(&(Global_17411.f_2714), "g_mpSavedGlobals.sWebInboxData");
	func_110(&(Global_17411.f_2763), "g_mpSavedGlobals.todLastVisited");
	func_111(&(Global_17411.f_2944), "g_mpSavedGlobals.sFlowData");
	func_112(&(Global_17411.f_2966), "g_mpSavedGlobals.mpCollectiblesMapBlip");
	func_113(&(Global_17411.f_2989), "g_mpSavedGlobals.sMGRestrictData");
	func_114(&(Global_17411.f_3078), "g_mpSavedGlobals.sNetShopsTU006");
	func_115(&(Global_17411.f_3080));
	_0xe8346e62fd7fb962();
	_0xc0abf784590798a9(0);
}

void func_43()
{
	request_script(func_86(2));
	request_script(func_86(3));
	request_script(func_86(4));
	request_script(func_86(5));
	func_116();
}

bool func_44(int iParam0)
{
	if (iParam0 != 0 && iParam0 != 3)
	{
		return true;
	}
	return false;
}

bool func_45(int iParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 0:
			if (func_117(iParam0, 1))
			{
				_0xe97240065406cb80(iParam0, 0);
				request_script(func_118(iParam0));
				func_119(uParam1, 1, iParam0);
			}
			else
			{
				func_119(uParam1, 3, iParam0);
				return true;
			}
			break;
		case 1:
			if (has_script_loaded(func_118(iParam0)) && get_number_of_free_stacks_of_this_size(512) > 0)
			{
				start_new_script(func_118(iParam0), 512);
				set_script_as_no_longer_needed(func_118(iParam0));
				func_119(uParam1, 2, iParam0);
			}
			break;
		case 2:
			if (_get_number_of_references_of_script_with_name_hash(get_hash_key(func_118(iParam0))) == 0)
			{
				_0xe97240065406cb80(iParam0, 1);
				func_119(uParam1, 3, iParam0);
				return true;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_46()
{
	decor_register("outfitChanged", 2);
	decor_register("playerChangeOutfits", 2);
	decor_register("HorseHitchRope", 3);
	decor_register("Whistling", 2);
	decor_register("Inspecting_Item", 2);
	decor_register("JustSavedAtBed", 2);
	decor_register("CookingMeat", 2);
	decor_register("build_success", 2);
	decor_register("RWARV_Dominoes", 2);
	decor_register("Fishing_LaunchNow", 2);
	decor_register("RKTTY_Asked", 2);
	decor_register("RKTTY_Wagon", 2);
	decor_register("iDamageFrame", 3);
	decor_register("bIgnoreDamageChecking", 2);
	decor_register("rev_comment", 2);
	decor_register("camp_attacker", 2);
	decor_register("HorseGender", 3);
	decor_register("HorseCamp", 2);
	decor_register("HorseCompanion", 2);
	decor_register("CaravanCommonHorse", 2);
	decor_register("CaravanLivestock", 2);
	decor_register("StableOwnedHorse", 3);
	decor_register("HorseMission", 2);
	decor_register("bHorseHasBeenStolen", 2);
	decor_register("bHasBeenLassoedFromHorse", 2);
	decor_register("bHasBeenTrampledByHorse", 2);
	decor_register("bHorseCleanedUp", 2);
	decor_register("SyncedFlags01", 3);
	decor_register("SummonPosXY", 3);
	decor_register("SummonPosZ", 1);
	decor_register("companion_manager_msg", 3);
	decor_register("companion_manager_command", 3);
	decor_register("companion_manager_watch_mode", 3);
	decor_register("outfit_tags", 3);
	decor_register("metaped_outfit_request", 3);
	decor_register("metaped_outfit_request_name", 3);
	decor_register("chinLong", 3);
	decor_register("chopsLong", 3);
	decor_register("stacheLong", 3);
	decor_register("chinShort", 3);
	decor_register("chopsShort", 3);
	decor_register("stacheShort", 3);
	decor_register("hairLong", 3);
	decor_register("hairShort", 3);
	decor_register("player_newWeaponType", 3);
	decor_register("player_newWeaponTime", 3);
	decor_register("player_newRevolverWeaponType", 3);
	decor_register("player_newRevolverWeaponTime", 3);
	decor_register("player_newPistolWeaponType", 3);
	decor_register("player_newPistolWeaponTime", 3);
	decor_register("player_newShotgunWeaponType", 3);
	decor_register("player_newShotgunWeaponTime", 3);
	decor_register("player_newRifleWeaponType", 3);
	decor_register("player_newRifleWeaponTime", 3);
	decor_register("chest_open", 2);
	decor_register("loot_money", 3);
	decor_register("fLoot_money", 1);
	decor_register("loot_item_type1", 3);
	decor_register("loot_item_bone1", 3);
	decor_register("loot_item_amt1", 3);
	decor_register("loot_item_model1", 3);
	decor_register("loot_item_offset1x", 1);
	decor_register("loot_item_offset1y", 1);
	decor_register("loot_item_offset1z", 1);
	decor_register("loot_item_orient1x", 1);
	decor_register("loot_item_orient1y", 1);
	decor_register("loot_item_orient1z", 1);
	decor_register("loot_item_type2", 3);
	decor_register("loot_item_bone2", 3);
	decor_register("loot_item_amt2", 3);
	decor_register("loot_item_model2", 3);
	decor_register("loot_item_offset2x", 1);
	decor_register("loot_item_offset2y", 1);
	decor_register("loot_item_offset2z", 1);
	decor_register("loot_item_orient2x", 1);
	decor_register("loot_item_orient2y", 1);
	decor_register("loot_item_orient2z", 1);
	decor_register("loot_ammo1_type", 3);
	decor_register("loot_ammo1_amt", 3);
	decor_register("loot_ammo2_type", 3);
	decor_register("loot_ammo2_amt", 3);
	decor_register("loot_ammo3_type", 3);
	decor_register("loot_ammo3_amt", 3);
	decor_register("loot_weapon", 3);
	decor_register("loot_empty", 2);
	decor_register("lootable_interior", 3);
	decor_register("scripted_loot_only", 2);
	decor_register("got_loot", 2);
	decor_register("ransack", 2);
	decor_register("loot_long_custom_anim_data_set", 4);
	decor_register("letter_item", 3);
	decor_register("loot_allow_random", 2);
	decor_register("loot_mp_mission_only", 2);
	decor_register("chest_local_only", 2);
	decor_register("bLostLogs", 2);
	decor_register("bNoticePlayer", 2);
	decor_register("bIgnoreThisPed", 2);
	decor_register("bPedAlreadyCounted", 2);
	decor_register("bCowering", 2);
	decor_register("bChopDown", 2);
	decor_register("bGPSEnabled", 2);
	decor_register("interactNeg", 3);
	decor_register("bOnBreak", 2);
	decor_register("bScriptedILO", 2);
	decor_register("bAmbientCoachLooted", 2);
	decor_register("ValuableCoach", 2);
	decor_register("Herd_Panicked_Member", 2);
	decor_register("honor_bank", 3);
	decor_register("honor_override", 3);
	decor_register("not_enemy", 2);
	decor_register("bleed_start_time", 3);
	decor_register("instigated_by_player", 2);
	decor_register("player_greeted", 2);
	decor_register("player_antagonized", 2);
	decor_register("was_antagonized", 2);
	decor_register("injured_woman", 2);
	decor_register("recently_punched", 2);
	decor_register("was_hurt", 2);
	MemCopy(&uVar0, {func_120()}, 4);
	decor_register(&uVar0, 3);
	decor_register("pedRoam_bInPedRoam", 2);
	decor_register("pedRoam_targetRegion", 3);
	decor_register("pedRoam_state", 3);
	decor_register("pedRoam_behavior", 3);
	decor_register("pedRoam_target", 3);
	decor_register("pedRoam_targetCoord", 3);
	decor_register("pedRoam_targetCoord_Z", 1);
	decor_register("pedRoam_targetArea", 3);
	decor_register("pedRoam_hashKey", 3);
	decor_register("pedRoam_owner", 3);
	decor_register("pedRoam_flags", 3);
	decor_register("register_open", 2);
	decor_register("register_open_rdy", 2);
	decor_register("camera_takingPic", 2);
	decor_register("wearing_bandana", 2);
	decor_register("temp_HorseBroken", 2);
	decor_register("rcm_bnp_beauHogtie", 2);
	decor_register("rcm_bnp_PenelopeHogtie", 2);
	decor_register("rcm_elz1_elizaHogtie", 2);
	decor_register("rcm_SerialKiller_hogtie", 2);
	decor_register("proc_bounty_target", 2);
	decor_register("rcm_f_acc_played", 2);
	decor_register("rcm_f_acc_passed", 2);
	decor_register("rcm_lakay_bounty_target", 2);
	decor_register("LoanShark_Knowing", 2);
	decor_register("LoanShark_Questioned", 2);
	decor_register("player_crafting_active", 2);
	decor_register("player_whittling_active", 2);
	decor_register("bShowIsReady", 2);
	decor_register("bShowIsPaidFor", 2);
	decor_register("bUpdatedPlayer", 2);
	decor_register("Global_Object_Unique_ID", 3);
	decor_register("Global_Object_PackedDeed", 3);
	decor_register("Global_Object_Value", 3);
	decor_register("Global_Object_ExpStart", 3);
	decor_register("Global_Object_ExpDuration", 3);
	decor_register("Global_Object_No_Blip", 2);
	_decor_register_2(func_121(), 3, true);
	_decor_register_2(func_122(), 6, true);
	_decor_register_2(func_123(), 3, true);
	_decor_register_2(func_124(), 2, true);
	_decor_register_2(func_125(), 2, true);
	_decor_register_2(func_126(), 3, true);
	_decor_register_2(func_127(), 3, true);
	decor_register("iFmeLastEventPlayed", 3);
	decor_register("bFmeSpecialAnimal", 2);
	decor_register("bFmeIsAnimalKilled", 2);
	_decor_register_2("iMinigameHash", 3, true);
	_decor_register_2("iMinigameSeat", 3, true);
	decor_register("Has_Voice", 2);
	decor_register("bUnarmed", 2);
	decor_register("RANSACK", 2);
	decor_register("bIsCriminal", 2);
	decor_register("bDeadOrAlive", 2);
	decor_register("bReacted_To_Shocking_Event", 2);
	decor_register("REDJ_Witness_Time", 1);
	decor_register("SafeOpened", 2);
	decor_register("TargetHit", 2);
	decor_register("bIsSpecialPed", 2);
	decor_register("iSpecialPedID", 3);
	decor_register("bPickupThisCorpse", 2);
	decor_register("last_gun_damage_time_in_ms", 3);
	decor_register("DamagedByPlayer", 2);
	decor_register("grapple_start_time", 3);
	decor_register("grapple_tutorial_played", 2);
	decor_register("worn_tutorial", 2);
	decor_register("propsetName", 4);
	decor_register("witnessCannotBeBribedOrThreatened", 2);
	_decor_register_2("MP_HUD_Bits", 3, true);
	_decor_register_2(func_128(), 3, true);
	_decor_register_2(func_129(), 3, true);
	_decor_register_2(func_130(), 3, true);
	_decor_register_2(func_131(), 3, true);
	_decor_register_2(func_132(), 3, true);
	_decor_register_2(func_133(), 3, true);
	_decor_register_2(func_134(), 3, true);
	_decor_register_2(func_135(), 3, true);
	_decor_register_2(func_136(), 3, true);
	_decor_register_2(func_137(), 2, true);
	decor_register("MC_EntityID", 3);
	decor_register("MC_ChasePedID", 3);
	decor_register("MC_EntityPropID", 3);
	_decor_register_2("iCampFollowerCamp", 3, true);
	_decor_register_2("fCampVehicleMaxSpeed", 1, true);
	_decor_register_2("Fish_Attractor_Bluegill", 1, true);
	_decor_register_2("Fish_Attractor_BullheadCatfish", 1, true);
	_decor_register_2("Fish_Attractor_ChainPickerel", 1, true);
	_decor_register_2("Fish_Attractor_ChannelCatfish", 1, true);
	_decor_register_2("Fish_Attractor_LakeSturgeon", 1, true);
	_decor_register_2("Fish_Attractor_LargemouthBass", 1, true);
	_decor_register_2("Fish_Attractor_LongnoseGar", 1, true);
	_decor_register_2("Fish_Attractor_Muskie", 1, true);
	_decor_register_2("Fish_Attractor_NorthernPike", 1, true);
	_decor_register_2("Fish_Attractor_Perch", 1, true);
	_decor_register_2("Fish_Attractor_RedfinPickerel", 1, true);
	_decor_register_2("Fish_Attractor_RockBass", 1, true);
	_decor_register_2("Fish_Attractor_SmallmouthBass", 1, true);
	_decor_register_2("Fish_Attractor_SockeyeSalmon", 1, true);
	_decor_register_2("Fish_Attractor_SteelheadTrout", 1, true);
	_decor_register_2("Fish_Prevent_Tasking", 2, true);
	_decor_register_2("Fish_Weight", 1, true);
	_decor_register_2("FFF_Lives", 3, true);
	_decor_register_2("FFF_Time", 3, true);
	_decor_register_2("FFF_Laps", 3, true);
	_decor_register_2("FFF_Rounds", 3, true);
	_decor_register_2("FFF_Seated", 2, true);
	_decor_register_2("PedSeatedForMinigame", 2, true);
	_decor_register_2("MinigameObject", 2, true);
	_decor_register_2("DontGrabThisPedForMinigame", 2, true);
	_decor_register_2("MiniScenePedData", 3, true);
	_decor_register_2(func_138(), 2, true);
	_decor_register_2(func_139(), 3, true);
	_decor_register_2(func_140(), 3, true);
	_decor_register_2(func_141(), 3, true);
	_decor_register_2(func_142(), 3, true);
	_decor_register_2("NetHorseFence_Sold", 2, true);
	decor_register("wagonFenceValue", 3);
	decor_register("ItemSetScriptIndex", 3);
	decor_register("HorseTeamA", 2);
	decor_register("HorseOwnerTeamA", 2);
	decor_register("HorseTeamB", 2);
	decor_register("HorseOwnerTeamB", 2);
	decor_register("UsesTracker", 2);
	decor_register("bValidRobber", 2);
	decor_register("STORY_COOP_PED_ID", 3);
	_decor_register_2(func_143(), 3, true);
	_decor_register_2(func_144(), 6, true);
	_decor_register_2("fast_travel_camp_barker", 3, true);
	_decor_register_2("DigSiteX", 1, true);
	_decor_register_2("DigSiteY", 1, true);
	_decor_register_2("DigSiteZ", 1, true);
	_decor_register_2("EggBroken", 2, true);
	_decor_register_2("ChestDugUp", 2, true);
	_decor_register_2("RevivedOnce", 2, true);
	_decor_register_2("ReputationFlags", 3, true);
}

void func_47()
{
	func_145();
	func_146();
	func_147();
}

void func_48()
{
	_0xdeee1f265b7ecef5();
}

int func_49(var uParam0)
{
	switch (func_8(uParam0))
	{
		case 0:
			if (func_148(uParam0))
			{
				uParam0->f_81 = _databinding_add_data_container_from_path("", "LoadingScreen");
				uParam0->f_82 = _databinding_add_data_string(uParam0->f_81, "TooltipText", "");
				uParam0->f_83 = _databinding_add_data_bool(uParam0->f_81, "isVisible", 1);
				func_149(uParam0, 1);
				func_150(uParam0, 1);
			}
			else
			{
				func_150(uParam0, 3);
			}
			break;
		case 1:
			uParam0->f_77 = get_game_timer();
			_databinding_write_data_string(uParam0->f_82, uParam0->f_5[uParam0->f_78]);
			func_150(uParam0, 2);
			break;
		case 2:
			if (get_game_timer() >= (uParam0->f_77 + uParam0->f_5[uParam0->f_78]->f_5))
			{
				uParam0->f_78++;
				if (uParam0->f_78 < 10)
				{
					func_150(uParam0, 1);
				}
				else
				{
					func_150(uParam0, 3);
				}
			}
			break;
		case 3:
			func_51(uParam0);
			return 1;
	}
	return 0;
}

bool func_50(var uParam0)
{
	return uParam0->f_80;
}

void func_51(var uParam0)
{
	if (_databinding_is_data_id_valid(uParam0->f_81))
	{
		_databinding_remove_data_entry(uParam0->f_81);
	}
	if (_databinding_is_data_id_valid(uParam0->f_82))
	{
		_databinding_write_data_string(uParam0->f_82, "");
		_databinding_remove_data_entry(uParam0->f_82);
	}
	if (_0x7907969497ea92f5(*uParam0))
	{
		_datafile_unload(*uParam0);
	}
	func_149(uParam0, 0);
}

var func_52(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_53(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_54()
{
	while (!_event_queue_is_empty(-792505136))
	{
		_event_queue_pop(-792505136);
	}
}

void func_55(var uParam0)
{
	iVar0 = 0;
	bVar1 = false;
	if (func_151() || func_152())
	{
		bVar1 = true;
	}
	if (bVar1 != *uParam0)
	{
		*uParam0 = bVar1;
		if (!bVar1)
		{
			func_153(&(uParam0->f_1), 0);
		}
		else if (func_154(&(uParam0->f_1)))
		{
			func_53(&(uParam0->f_1));
		}
	}
	if (!bVar1 && func_154(&(uParam0->f_1)))
	{
		if (func_155(&(uParam0->f_1)) >= 0.5f)
		{
			func_53(&(uParam0->f_1));
		}
		else
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		set_bit(&iVar0, 6);
	}
	if (is_gameplay_cam_rendering() || is_cinematic_cam_rendering())
	{
		set_bit(&iVar0, 2);
		set_bit(&iVar0, 5);
		set_bit(&iVar0, 4);
		if (_get_wanted_intensity_for_player(player_id()) > 0)
		{
			set_bit(&iVar0, 3);
		}
	}
	func_156(iVar0);
}

void func_56()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		func_157(get_event_at_index(1, iVar0), iVar0);
		iVar0++;
	}
}

void func_57()
{
	switch (Global_1572887->f_266.f_84)
	{
		case 0:
			func_158();
			break;
		case 1:
			func_159();
			break;
		case 2:
			func_160();
			break;
		case 3:
			func_161();
			break;
	}
}

void func_58()
{
	if (Global_1572887->f_266.f_82 == 0)
	{
		return;
	}
	switch (Global_1572887->f_266.f_82)
	{
		case 1:
			if (is_pc_version())
			{
				func_162(4);
			}
			else
			{
				func_162(2);
			}
			break;
		case 2:
			func_163();
			func_162(3);
			break;
		case 3:
			if (func_164() == 0)
			{
				return;
			}
			func_162(4);
			break;
		case 4:
			func_162(0);
			break;
	}
}

void func_59()
{
	if (func_20(4))
	{
		func_165();
	}
	switch (Global_1572887->f_266)
	{
		case 0:
			break;
		case 1:
			func_166();
			break;
		case 2:
			func_167();
			break;
		case 3:
			func_168();
			break;
		case 4:
			func_169();
			break;
		case 5:
			func_170();
			break;
		case 6:
			func_171();
			break;
		case 8:
			func_172();
			break;
		case 11:
			func_173();
			break;
		case 7:
			func_174();
			break;
		case 9:
			func_175();
			break;
		case 10:
			func_176();
			break;
		case 13:
			func_177();
			break;
		case 17:
			func_178();
			break;
		case 14:
			func_179();
			break;
		case 15:
			func_180();
			break;
		case 16:
			func_181();
			break;
		case 18:
			func_182();
			break;
		case 19:
			func_183();
			break;
		case 20:
			func_184();
			break;
		case 22:
			func_185();
			break;
		case 23:
			func_186();
			break;
	}
}

void func_60(char* sParam0)
{
	if (!sParam0->f_61 && !sParam0->f_62)
	{
		return;
	}
	bVar0 = (func_187(&(sParam0->f_50)) > 3000 && !sParam0->f_62);
	if (!bVar0)
	{
		sVar1 = func_188(sParam0, sParam0->f_63);
		if (is_string_null_or_empty(sVar1))
		{
			return;
		}
	}
	if (!sParam0->f_62)
	{
		if (sParam0->f_63 > 0)
		{
			func_189(sParam0, sVar1, bVar0);
		}
		else
		{
			func_190(sParam0, sVar1, bVar0);
		}
		sParam0->f_62 = 1;
		sParam0->f_59 = get_game_timer();
	}
	bVar2 = (sParam0->f_59 != -1 && (get_game_timer() - sParam0->f_59) > 15000);
	if (sParam0->f_60 == 0 || (sParam0->f_62 && (_0x59fa676177dbe4c9(sParam0->f_60) == 6 || bVar2)))
	{
		Var3.f_12.f_8 = -1;
		Var3.f_12.f_8.f_1 = -1;
		Var3.f_12.f_16.f_12 = -1;
		Var3.f_12.f_16.f_12.f_1 = -1;
		Var3.f_12.f_16.f_14 = 255;
		Var3.f_12.f_16.f_15 = 255;
		Var3.f_57 = -1;
		Var3.f_57.f_1 = -1;
		Var3.f_59 = -1;
		_copy_memory(sParam0, &Var3, 64);
	}
}

void func_61(int iParam0)
{
	Global_1901847 = iParam0;
}

bool func_62()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_1900874[iVar1] != 0)
		{
			Global_1901847->f_99 = iVar1;
			iVar0 = 1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_63(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_64(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_191(uParam0, bParam2, 0);
	if (network_is_game_in_progress() && !bParam2)
	{
		if (absi(get_time_difference(get_network_time(), *uParam0)) >= iParam1)
		{
			func_63(uParam0);
			return true;
		}
	}
	else if (absi(get_time_difference(get_game_timer(), *uParam0)) >= iParam1)
	{
		func_63(uParam0);
		return true;
	}
	return false;
}

void func_65()
{
	if (!is_orbis_version())
	{
		if (func_62())
		{
			func_66();
		}
		return;
	}
	if (Global_1901847->f_99 >= 20 || Global_1901847->f_99 < 0)
	{
		return;
	}
	iVar0 = Global_1901847->f_99;
	if (func_192(Global_1900874[iVar0]))
	{
		func_193(iVar0);
		(*Global_1900874)[iVar0] = 0;
	}
	if (func_194(Global_1900874[iVar0]))
	{
		(*Global_1900874)[iVar0] = 0;
	}
	if (Global_1900874[iVar0] != 0)
	{
		func_195(*(*Global_1900874)[iVar0], iVar0);
	}
	Global_1901847->f_99++;
	if (Global_1901847->f_99 == 31)
	{
		Global_1901847->f_99 = 0;
	}
}

void func_66()
{
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		func_193(iVar0);
		iVar0++;
	}
	func_63(&(Global_1901847->f_1));
}

void func_67(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_68()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1572887->f_405.f_1[iVar0] = 0;
		iVar0++;
	}
}

void func_69(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Global_1572887->f_405 = iParam0;
	if (iParam1 != 0)
	{
		func_196(iParam1);
	}
	if (iParam2 != 0)
	{
		func_196(iParam2);
	}
	if (iParam3 != 0)
	{
		func_196(iParam3);
	}
	if (iParam4 != 0)
	{
		func_196(iParam4);
	}
	if (iParam5 != 0)
	{
		func_196(iParam5);
	}
	if (iParam6 != 0)
	{
		func_196(iParam6);
	}
	if (iParam7 != 0)
	{
		func_196(iParam7);
	}
	if (iParam8 != 0)
	{
		func_196(iParam8);
	}
	if (iParam9 != 0)
	{
		func_196(iParam9);
	}
	if (iParam10 != 0)
	{
		func_196(iParam10);
	}
	func_197();
}

void func_70()
{
	disable_control_action(2, -668070958, false);
	disable_control_action(2, 1644850270, false);
	disable_control_action(2, 2139949496, false);
	if (func_71() != 0)
	{
		hide_hud_and_radar_this_frame();
	}
}

int func_71()
{
	return vLocal_29.x;
}

void func_72(int iParam0)
{
	_0x704f92b3af20d857(iParam0);
}

void func_73(bool bParam0)
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

void func_74()
{
	func_198();
	func_199(-1);
	func_200(0);
	Global_1572887->f_266.f_63 = 0;
	Global_1572887->f_266.f_90 = 0;
	Global_1572887->f_266.f_1 = -1;
	if (Global_1572887->f_266.f_86 == 2)
	{
		Global_1572887->f_266.f_86 = 0;
	}
}

void func_75(int iParam0)
{
	Global_1572887->f_266.f_67 = iParam0;
}

void func_76()
{
	network_set_rich_presence(0, &uVar0, 1, 0);
}

void func_77(int iParam0)
{
	Global_1572887->f_13 = iParam0;
}

void func_78(int iParam0)
{
	vLocal_29.x = iParam0;
	vLocal_29.f_1 = get_game_timer();
}

bool func_79()
{
	if (func_201())
	{
		return false;
	}
	iVar0 = 0;
	while (_event_manager_is_event_pending(-999474433))
	{
		if (_event_manager_peek_event(-999474433, &vVar1))
		{
			switch (vVar1.x)
			{
				case -1203660660:
					if (vVar1.z == -490822059)
					{
						_0xac84686c06184b0d("Fade_To_SP", "Load_Menu_Scenes");
						func_202(1785216189);
						iVar0 = 1;
					}
					else if (vVar1.z == 2143694500)
					{
						_0xac84686c06184b0d("Fade_To_MP", "Load_Menu_Scenes");
						iVar0 = 1;
					}
					else if (vVar1.z == 367452774)
					{
						_0xac84686c06184b0d("Fade_To_MP", "Load_Menu_Scenes");
						iVar0 = 1;
					}
					else if (vVar1.z == 1317995259)
					{
						_0xac84686c06184b0d("Fade_To_MP", "Load_Menu_Scenes");
						func_202(-1050153785);
						func_196(1306134188);
						iVar0 = 1;
					}
					else if (vVar1.z == 425390024)
					{
						network_set_script_ready_for_events(false);
					}
					else if (vVar1.z == 446331713)
					{
						network_set_script_ready_for_events(true);
					}
					break;
			}
		}
		_event_manager_pop_event(-999474433);
	}
	return iVar0;
}

bool func_80()
{
	return func_203() > 120000;
}

bool func_81()
{
	if (!_get_launch_param_exists(func_204(1746230403)))
	{
		if (func_83() == 0)
		{
			func_202(1785216189);
			func_197();
			return true;
		}
		else
		{
			func_197();
			return true;
		}
	}
	func_205(&(Global_1572887->f_405));
	sVar0 = _get_launch_param_value(func_204(1746230403));
	iVar1 = get_hash_key(sVar0);
	if (iVar1 != 0)
	{
		func_202(iVar1);
	}
	if (_get_launch_param_exists(func_204(82543689)))
	{
		sVar0 = _get_launch_param_value(func_204(82543689));
		Global_1572887->f_405.f_6 = func_206(get_hash_key(sVar0));
	}
	if (_get_launch_param_exists(func_204(-1926951471)))
	{
		sVar0 = _get_launch_param_value(func_204(-1926951471));
		Global_1572887->f_405.f_7 = func_207(get_hash_key(sVar0));
	}
	if (_get_launch_param_exists(func_204(-763890493)))
	{
		sVar0 = _get_launch_param_value(func_204(-763890493));
		Global_1572887->f_405.f_8 = func_208(get_hash_key(sVar0));
	}
	if (_get_launch_param_exists(func_204(-875643756)))
	{
		sVar0 = _get_launch_param_value(func_204(-875643756));
		Global_1572887->f_405.f_10 = func_209(get_hash_key(sVar0));
		Global_1572887->f_405.f_9 = -1;
	}
	if (_get_launch_param_exists(func_204(64789430)))
	{
		sVar0 = _get_launch_param_value(func_204(64789430));
		Global_1572887->f_405.f_5 = func_210(get_hash_key(sVar0));
		if (Global_1572887->f_405.f_5 <= -1)
		{
			func_211(49, -1);
		}
	}
	if (_get_launch_param_exists(func_204(735882532)))
	{
		sVar0 = _get_launch_param_value(func_204(735882532));
		Global_1572887->f_405.f_11 = get_hash_key(sVar0);
	}
	Global_1572887->f_405.f_12 = 0;
	if (_get_launch_param_exists(func_204(-1637816997)))
	{
		sVar0 = _get_launch_param_value(func_204(-1637816997));
		if (string_to_int(sVar0, &(Global_1572887->f_405.f_12)))
		{
		}
	}
	func_212(-730035725);
	func_212(-503077631);
	func_212(1860157115);
	func_212(2091932252);
	func_212(-1955432480);
	func_212(-1725164717);
	func_212(1056268003);
	func_212(1286208076);
	func_212(1529091912);
	func_212(1762505499);
	_clear_launch_params();
	func_197();
	return true;
}

void func_82()
{
	switch (func_83())
	{
		case 1785216189:
			vLocal_29.f_2 = 2;
			break;
		case -1050153785:
			if (!_0x2a8112a974de1ef6())
			{
				vLocal_29.f_2 = 1;
				func_67(4);
				if (func_84(-2030542394) || _0xfc4165c9165c166f())
				{
					_0xa4484173759749b1();
				}
			}
			else
			{
				vLocal_29.f_2 = 3;
				func_67(68);
				_0xac84686c06184b0d("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case -1743646234:
			break;
		case -1330461529:
			if (!_0x2a8112a974de1ef6())
			{
				vLocal_29.f_2 = 1;
				func_67(4);
				if (func_84(-2030542394) || _0xfc4165c9165c166f())
				{
					_0xa4484173759749b1();
				}
			}
			else
			{
				vLocal_29.f_2 = 3;
				func_67(68);
				_0xac84686c06184b0d("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case -1950263389:
			if (!_0x2a8112a974de1ef6())
			{
				vLocal_29.f_2 = 1;
				func_67(4);
				if (func_84(-2030542394) || _0xfc4165c9165c166f())
				{
					_0xa4484173759749b1();
				}
			}
			else
			{
				vLocal_29.f_2 = 3;
				func_67(68);
				_0xac84686c06184b0d("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case 1495295997:
			if (!_0x2a8112a974de1ef6())
			{
				vLocal_29.f_2 = 1;
				func_67(4);
				if (func_84(-2030542394) || _0xfc4165c9165c166f())
				{
					_0xa4484173759749b1();
				}
			}
			else
			{
				vLocal_29.f_2 = 3;
				func_67(68);
				_0xac84686c06184b0d("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case 1375707186:
			if (!_0x2a8112a974de1ef6())
			{
				vLocal_29.f_2 = 1;
				func_67(4);
				if (func_84(-2030542394) || _0xfc4165c9165c166f())
				{
					_0xa4484173759749b1();
				}
			}
			else
			{
				vLocal_29.f_2 = 3;
				func_67(68);
				_0xac84686c06184b0d("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case -417606870:
			vLocal_29.f_2 = 5;
			func_67(4);
			_0xac84686c06184b0d("Fade_To_SP", "Load_Menu_Scenes");
			break;
	}
}

int func_83()
{
	return Global_1572887->f_405;
}

bool func_84(int iParam0)
{
	return func_91(func_213(iParam0));
}

void func_85(int iParam0)
{
	Global_1572887->f_16 = iParam0;
}

char* func_86(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "startup_sp";
		case 3:
			return "startup_mp";
		case 4:
			return "startup_tlg";
		case 5:
			return "startup_clip";
	}
	return "startup_sp";
}

void func_87(int iParam0)
{
	Global_1572864 = iParam0;
}

bool func_88(char* sParam0, int iParam1)
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

void func_89(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			_0xac84686c06184b0d("Fade_To_SP", "Load_Menu_Scenes");
			break;
		case 3:
			_0xac84686c06184b0d("Fade_To_MP", "Load_Menu_Scenes");
			break;
		case 4:
			_0xac84686c06184b0d("Fade_To_MP", "Load_Menu_Scenes");
			break;
		case 5:
			_0xac84686c06184b0d("Fade_To_Editor", "Load_Menu_Scenes");
			break;
	}
}

char* func_90(int iParam0)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		case 1785216189:
			sVar0 = "single_player";
			break;
		case -1050153785:
			sVar0 = "freeroam";
			break;
		case -1743646234:
			sVar0 = "goldstore";
			break;
		case -1330461529:
			sVar0 = "series";
			break;
		case -1950263389:
			sVar0 = "mission";
			break;
		case 1495295997:
			sVar0 = "minigame";
			break;
		case 1375707186:
			sVar0 = "mission_creator";
			break;
		case -417606870:
			sVar0 = "clip";
			break;
		case -1828660489:
			sVar0 = "tlg";
			break;
	}
	return sVar0;
}

bool func_91(int iParam0)
{
	return func_214(&(Global_1572887->f_405.f_1), iParam0, 3);
}

int func_92(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = -88424047;
			break;
		case 2:
			iVar0 = 1651967528;
			break;
		case 3:
			iVar0 = -84928653;
			break;
		case 4:
			iVar0 = 1306134188;
			break;
		case 5:
			iVar0 = -1357178860;
			break;
		case 6:
			iVar0 = 133180145;
			break;
		case 7:
			iVar0 = 655115506;
			break;
		case 8:
			iVar0 = 1737952409;
			break;
		case 9:
			iVar0 = 2137301164;
			break;
		case 10:
			iVar0 = -110687166;
			break;
		case 11:
			iVar0 = -2030542394;
			break;
		case 12:
			iVar0 = -11301188;
			break;
		case 13:
			iVar0 = -1312679892;
			break;
		case 14:
			iVar0 = -61119924;
			break;
		case 15:
			iVar0 = 2134863183;
			break;
		case 16:
			iVar0 = -159568751;
			break;
		case 17:
			iVar0 = -1808811965;
			break;
		case 18:
			iVar0 = -1854341522;
			break;
		case 19:
			iVar0 = 1464020707;
			break;
		case 20:
			iVar0 = 1098974047;
			break;
		case 21:
			iVar0 = 868706284;
			break;
		case 22:
			iVar0 = 313296873;
			break;
		case 23:
			iVar0 = 541270806;
			break;
		case 24:
			iVar0 = 922800273;
			break;
		case 25:
			iVar0 = 1298496858;
			break;
		case 26:
			iVar0 = 1699163417;
			break;
		case 27:
			iVar0 = 864110990;
			break;
		case 28:
			iVar0 = -2127829790;
			break;
		case 29:
			iVar0 = -575777117;
			break;
		case 30:
			iVar0 = -1879562593;
			break;
		case 31:
			iVar0 = 1890312850;
			break;
		case 32:
			iVar0 = 1735278055;
			break;
		case 33:
			iVar0 = -1480790826;
			break;
	}
	return iVar0;
}

char* func_93(int iParam0)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		case -88424047:
			sVar0 = "new_game";
			break;
		case 1651967528:
			sVar0 = "shift_f";
			break;
		case -84928653:
			sVar0 = "demo";
			break;
		case 1306134188:
			sVar0 = "intro_not_done";
			break;
		case -1357178860:
			sVar0 = "private";
			break;
		case 133180145:
			sVar0 = "friendly";
			break;
		case 655115506:
			sVar0 = "hardcore";
			break;
		case 1737952409:
			sVar0 = "near_posse";
			break;
		case 2137301164:
			sVar0 = "random_posse";
			break;
		case -110687166:
			sVar0 = "open_posse";
			break;
		case -2030542394:
			sVar0 = "follow_invite";
			break;
		case -11301188:
			sVar0 = "random_region";
			break;
		case -1312679892:
			sVar0 = "last_region";
			break;
		case -61119924:
			sVar0 = "last_location";
			break;
		case 2134863183:
			sVar0 = "camp";
			break;
		case -159568751:
			sVar0 = "handheld";
			break;
		case -1808811965:
			sVar0 = "last_mission";
			break;
		case -1854341522:
			sVar0 = "random_poker";
			break;
		case 1464020707:
			sVar0 = "bg_custom_1";
			break;
		case 1098974047:
			sVar0 = "bg_custom_2";
			break;
		case 868706284:
			sVar0 = "bg_custom_3";
			break;
		case 313296873:
			sVar0 = "trade_1";
			break;
		case 541270806:
			sVar0 = "trade_2";
			break;
		case 922800273:
			sVar0 = "trade_3";
			break;
		case 1298496858:
			sVar0 = "trade_4";
			break;
		case 1699163417:
			sVar0 = "trade_5";
			break;
		case 864110990:
			sVar0 = "trade_6";
			break;
		case -2127829790:
			sVar0 = "trade_7";
			break;
		case -575777117:
			sVar0 = "cchar";
			break;
		case -1879562593:
			sVar0 = "coupon";
			break;
		case 1890312850:
			sVar0 = "hub";
			break;
		case 1735278055:
			sVar0 = "my_moon";
			break;
		case -1480790826:
			sVar0 = "async_mm";
			break;
	}
	return sVar0;
}

char* func_94(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NET_PLAYLIST_RACE_SERIES";
		case 1:
			return "NET_PLAYLIST_FEATURED_SERIES_001";
		case 2:
			return "NET_PLAYLIST_ADVERSARY_SMALL";
		case 3:
			return "NET_PLAYLIST_ADVERSARY_MEDIUM";
		case 4:
			return "NET_PLAYLIST_ADVERSARY_LARGE";
		case 5:
			return "NET_PLAYLIST_GUN_RUSH_TEAMS";
		case 6:
			return "NET_PLAYLIST_GUN_RUSH_FREE_FOR_ALL";
		case 7:
			return "NET_PLAYLIST_ELIMINATION_SMALL";
		case 8:
			return "NET_PLAYLIST_ELIMINATION_MEDIUM";
		case 9:
			return "NET_PLAYLIST_ELIMINATION_LARGE";
		case 10:
			return "NET_PLAYLIST_NOMINATED_SERIES";
		case 11:
			return "NET_PLAYLIST_NOMINATED_SERIES_SMALL";
		case 12:
			return "NET_PLAYLIST_NOMINATED_SERIES_MEDIUM";
		case 13:
			return "NET_PLAYLIST_NOMINATED_SERIES_LARGE";
		case 14:
			return "NET_PLAYLIST_PRIVATE_SERIES";
		case 15:
			return "NET_PLAYLIST_ORBIS_SERIES_1";
		case 16:
			return "NET_PLAYLIST_ORBIS_SERIES_2";
		case 17:
			return "NET_PLAYLIST_ORBIS_SERIES_3";
		case 18:
			return "NET_PLAYLIST_SHOOTOUT";
		case 19:
			return "NET_PLAYLIST_CAPTURE";
		default:
			break;
	}
	return "";
}

char* func_95(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
		case 1:
			return "REGION_BAY_MACOMBS_END";
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		case 3:
			return "REGION_BAY_LAGRAS";
		case 4:
			return "REGION_BAY_LAKAY";
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		case 8:
			return "REGION_BAY_SERENDIPITY";
		case 9:
			return "REGION_BAY_SHADYBELLE";
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		case 15:
			return "REGION_BGV_FORTRIGGS";
		case 16:
			return "REGION_BGV_HANGINGDOG";
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		case 19:
			return "REGION_BGV_MONTO_REST";
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		case 22:
			return "REGION_BGV_PRONGHORN";
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		case 24:
			return "REGION_BGV_SHACK";
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		case 26:
			return "REGION_BGV_STRAWBERRY";
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		case 30:
			return "REGION_BGV_WATSONSCABIN";
		case 29:
			return "REGION_BGV_OLD_MAN_JONES";
		case 31:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 32:
			return "REGION_BLU_COPPERHEAD";
		case 33:
			return "REGION_BLU_SISIKA";
		case 34:
			return "REGION_BLU_TRAVELLING_SALESMAN";
		case 35:
			return "REGION_CML_BACCHUSBRIDGE";
		case 36:
			return "REGION_CML_DINO_LADY";
		case 37:
			return "REGION_CML_OLDFORTWALLACE";
		case 38:
			return "REGION_CML_SIXPOINTCABIN";
		case 39:
			return "REGION_GRT_BEECHERS";
		case 40:
			return "REGION_GRT_BLACKWATER";
		case 41:
			return "REGION_GRT_QUAKERS_COVE";
		case 42:
			return "REGION_GRZ_ADLERRANCH";
		case 43:
			return "REGION_GRZ_DEAD_RIVAL";
		case 53:
			return "REGION_GRZ_CALUMETRAVINE";
		case 54:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 44:
			return "REGION_GRZ_CHEZPORTER";
		case 55:
			return "REGION_GRZ_COHUTTA";
		case 45:
			return "REGION_GRZ_COLTER";
		case 56:
			return "REGION_GRZ_COTORRA_SPRINGS";
		case 46:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 57:
			return "REGION_GRZ_GUNFIGHT";
		case 47:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 48:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 49:
			return "REGION_GRZ_MOUNT_HAGEN_PEAK";
		case 50:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 51:
			return "REGION_GRZ_TEMPEST_RIM";
		case 58:
			return "REGION_GRZ_THELOFT";
		case 59:
			return "REGION_GRE_VETERAN";
		case 60:
			return "REGION_GRZ_WAPITI";
		case 52:
			return "REGION_GRZ_WINTERMINING_TOWN";
		case 61:
			return "REGION_GRZ_TRAVELLING_SALESMAN";
		case 62:
			return "REGION_GUA_AGUASDULCES";
		case 63:
			return "REGION_GUA_CAMP";
		case 64:
			return "REGION_GUA_CINCOTORRES";
		case 65:
			return "REGION_GUA_LACAPILLA";
		case 66:
			return "REGION_GUA_MANICATO";
		case 67:
			return "REGION_HRT_ABANDONED_MILL";
		case 69:
			return "REGION_HRT_CARMODYDELL";
		case 70:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 71:
			return "REGION_HRT_CROP_FARM";
		case 72:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 73:
			return "REGION_HRT_DOWNSRANCH";
		case 74:
			return "REGION_HRT_EMERALDRANCH";
		case 75:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 76:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 77:
			return "REGION_HRT_LARNEDSOD";
		case 78:
			return "REGION_HRT_LOONY_CULT";
		case 79:
			return "REGION_HRT_LUCKYSCABIN";
		case 80:
			return "REGION_HRT_SWANSONS_STATION";
		case 81:
			return "REGION_HRT_VALENTINE";
		case 82:
			return "REGION_ROA_ABERDEENPIGFARM";
		case 83:
			return "REGION_ROA_ANNESBURG";
		case 84:
			return "REGION_ROA_BEAVERHOLLOW";
		case 68:
			return "REGION_ROA_BEECHERS_C";
		case 85:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 86:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 87:
			return "REGION_ROA_BUTCHERCREEK";
		case 88:
			return "REGION_ROA_DOVERHILL";
		case 89:
			return "REGION_ROA_HAPPY_FAMILY";
		case 90:
			return "REGION_ROA_ISOLATIONIST";
		case 91:
			return "REGION_ROA_MACLEANSHOUSE";
		case 92:
			return "REGION_ROA_MOSSY_FLATS";
		case 93:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 94:
			return "REGION_ROA_ROCKYSEVEN";
		case 95:
			return "REGION_ROA_TRAPPER";
		case 97:
			return "REGION_ROA_VANHORNMANSION";
		case 98:
			return "REGION_ROA_VANHORNPOST";
		case 96:
			return "REGION_ROA_OLD_MAN_JONES";
		case 99:
			return "REGION_SCM_BRAITHWAITEMANOR";
		case 100:
			return "REGION_SCM_BULGERGLADE";
		case 101:
			return "REGION_SCM_CALIGAHALL";
		case 102:
			return "REGION_SCM_CATFISHJACKSONS";
		case 103:
			return "REGION_SCM_CLEMENSCOVE";
		case 104:
			return "REGION_SCM_CLEMENSPOINT";
		case 105:
			return "REGION_SCM_COMPSONS_STEAD";
		case 106:
			return "REGION_SCM_DAIRY_FARM";
		case 107:
			return "REGION_SCM_HORSE_SHOP";
		case 108:
			return "REGION_SCM_LONNIESSHACK";
		case 109:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 110:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 111:
			return "REGION_SCM_RHODES";
		case 112:
			return "REGION_SCM_SLAVE_PEN";
		case 113:
			return "REGION_TAL_AURORA_BASIN";
		case 114:
			return "REGION_TAL_DEAD_SETTLER";
		case 115:
			return "REGION_TAL_COCHINAY";
		case 116:
			return "REGION_TAL_MANZANITAPOST";
		case 117:
			return "REGION_TAL_PACIFICUNIONRR";
		case 118:
			return "REGION_TAL_TANNERSREACH";
		case 119:
			return "REGION_TAL_TRAPPER";
		case 135:
			return "REGION_HEN_MACFARLANES_RANCH";
		case 136:
			return "REGION_HEN_THIEVES_LANDING";
		case 137:
			return "REGION_HEN_TRAVELLING_SALESMAN";
		case 138:
			return "REGION_HEN_HARRIET";
		case 127:
			return "REGION_CHO_ARMADILLO";
		case 128:
			return "REGION_CHO_COOTS_CHAPEL";
		case 129:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 131:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 130:
			return "REGION_CHO_RILEYS_CHARGE";
		case 132:
			return "REGION_CHO_TWIN_ROCKS";
		case 133:
			return "REGION_CHO_TRAVELLING_SALESMAN";
		case 134:
			return "REGION_CHO_TRAPPER";
		case 120:
			return "REGION_GAP_GAPTOOTH_BREACH";
		case 121:
			return "REGION_GAP_TUMBLEWEED";
		case 122:
			return "REGION_GAP_RATHSKELLER_FORK";
		case 123:
			return "REGION_RIO_BENEDICT_POINT";
		case 124:
			return "REGION_RIO_FORT_MERCER";
		case 125:
			return "REGION_RIO_PLAIN_VIEW";
		case 126:
			return "REGION_RIO_TRAVELLING_SALESMAN";
		case 139:
			return "REGION_CENTRALUNIONRR";
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

char* func_96(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DISTRICT_BAYOU_NWA";
		case 1:
			return "DISTRICT_BIG_VALLEY";
		case 2:
			return "DISTRICT_BLUEGILL_MARSH";
		case 3:
			return "DISTRICT_CUMBERLAND_FOREST";
		case 4:
			return "DISTRICT_GREAT_PLAINS";
		case 5:
			return "DISTRICT_GRIZZLIES";
		case 6:
			return "DISTRICT_GRIZZLIES_EAST";
		case 7:
			return "DISTRICT_GRIZZLIES_WEST";
		case 8:
			return "DISTRICT_GUAMA";
		case 9:
			return "DISTRICT_HEARTLAND";
		case 10:
			return "DISTRICT_ROANOKE_RIDGE";
		case 11:
			return "DISTRICT_SCARLETT_MEADOWS";
		case 12:
			return "DISTRICT_TALL_TREES";
		case 13:
			return "DISTRICT_GAPTOOTH_RIDGE";
		case 14:
			return "DISTRICT_RIO_BRAVO";
		case 15:
			return "DISTRICT_CHOLLA_SPRINGS";
		case 16:
			return "DISTRICT_HENNIGANS_STEAD";
		default:
			break;
	}
	return "";
}

char* func_97(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMBARINO";
		case 1:
			return "LEMOYNE";
		case 2:
			return "NEWAUSTIN";
		case 3:
			return "NEWHANOVER";
		case 4:
			return "WESTELIZABETH";
		case 5:
			return "GUARMA";
		default:
			break;
	}
	return "";
}

char* func_98(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BLACKJACK";
		case 1:
			return "DOMINOES";
		case 2:
			return "POKER";
		case 3:
			return "FILLET";
		case 4:
			return "MILKING_COW";
		case 5:
			return "CLEAN_STALLS";
		case 6:
			return "FENCE_BUILDING";
		default:
			break;
	}
	return "invalid MINIGAME_TYPES";
}

void func_99()
{
	disable_script_brain_set(1);
}

void func_100()
{
	disable_script_brain_set(4);
}

void func_101()
{
	disable_script_brain_set(2);
}

void func_102(var uParam0, char* sParam1, int iParam2)
{
	StringCopy(&cVar1, "herbs", 64);
	_0x81f4e92be3958364(uParam0, 55, &cVar1);
	iVar0 = 0;
	while (iVar0 < 54)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eHerbTypeFlags", 64);
		_0xb25b5a375be5be26((*uParam0)[iVar0], &Var17);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_103(var uParam0, char* sParam1)
{
	_0x8e8ffb9e4ad051d2(uParam0, 2510, "persona", 11);
	_0xb25b5a375be5be26(uParam0, "psna_eLastValidRegion");
	func_215(&(uParam0->f_1), "psna_vLastValidPosition");
	func_216(&(uParam0->f_4));
	func_217(&(uParam0->f_14));
	func_218(&(uParam0->f_61));
	func_219(&(uParam0->f_644));
	func_220(&(uParam0->f_2436));
	func_221(&(uParam0->f_2439));
	func_222(&(uParam0->f_2481));
	_0xe0b45e983bfc0768();
}

void func_104(var uParam0, char* sParam1, bool bParam2)
{
	if (0 && !bParam2)
	{
	}
	StringCopy(&cVar1, "eTutorialsRun", 64);
	_0x81f4e92be3958364(uParam0, 33, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0xb25b5a375be5be26((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_105(var uParam0, char* sParam1)
{
	StringCopy(&cVar1, "iTutorialBuffer", 64);
	_0x81f4e92be3958364(uParam0, 23, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x529b9ccd0972af4d((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_106(var uParam0, char* sParam1)
{
	_0x443174c20b8b9e7f(uParam0, 3, "psna_sNotoriety");
	_0x35defecae36d4fae(uParam0, "psna_sNotoriety_fNotoriety");
	_0x529b9ccd0972af4d(&(uParam0->f_1), "psna_sNotoriety_iPosixTimeStampOfLastReason");
	_0xb25b5a375be5be26(&(uParam0->f_2), "psna_sNotoriety_ePassive");
	_0xe0b45e983bfc0768();
}

void func_107(var uParam0, char* sParam1)
{
	_0x443174c20b8b9e7f(uParam0, 1, "psna_sNotoriety_TU004");
	_0x529b9ccd0972af4d(uParam0, "iPosixTimeStampOfLastInfraction");
	_0xe0b45e983bfc0768();
}

void func_108(var uParam0, char* sParam1)
{
	StringCopy(&cVar1, "clothingTU004", 64);
	_0x443174c20b8b9e7f(uParam0, 89, &cVar1);
	StringConCat(&cVar1, "_OutfitArray", 64);
	_0x81f4e92be3958364(uParam0, 89, &cVar1);
	iVar0 = 0;
	while (iVar0 < 11)
	{
		StringCopy(&cVar1, "clothingTU004", 64);
		StringConCat(&cVar1, "_OutfitArray", 64);
		StringConCat(&cVar1, "_Element_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 8, &cVar1);
		StringConCat(&cVar1, "_Name", 64);
		_0x186608a2ac6f9e88((*uParam0)[iVar0], &cVar1);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

void func_109(var uParam0, char* sParam1)
{
	_0x443174c20b8b9e7f(uParam0, 49, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sGiftData", 64);
	_0x81f4e92be3958364(uParam0, 46, &cVar0);
	iVar24 = 0;
	while (iVar24 < *uParam0)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar24], 3, &Var8);
		Var16 = { Var8 };
		StringConCat(&Var16, ".bNotificationPushed", 64);
		_0xbb7f4273c186bc4b((*uParam0)[iVar24], &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iGiftItemHash", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar24]->f_1), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iItemMailCount", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar24]->f_2), &Var16);
		_0xe0b45e983bfc0768();
		iVar24++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sOfferData", 64);
	_0x443174c20b8b9e7f(&(uParam0->f_46), 3, &cVar0);
	Var16 = { cVar0 };
	StringConCat(&Var16, ".bNotificationPushed", 64);
	_0xbb7f4273c186bc4b(&(uParam0->f_46), &Var16);
	Var16 = { cVar0 };
	StringConCat(&Var16, ".iGiftItemHash", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_46.f_1), &Var16);
	Var16 = { cVar0 };
	StringConCat(&Var16, ".iItemMailCount", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_46.f_2), &Var16);
	_0xe0b45e983bfc0768();
	_0xe0b45e983bfc0768();
}

void func_110(var uParam0, char* sParam1)
{
	StringCopy(&cVar1, ".todLastVisited", 64);
	_0x81f4e92be3958364(uParam0, 181, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0xb25b5a375be5be26((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_111(var uParam0, char* sParam1)
{
	StringCopy(&cVar1, "MpFlow", 128);
	_0x443174c20b8b9e7f(uParam0, 22, &cVar1);
	StringConCat(&cVar1, ".LastPositionArray", 128);
	_0x81f4e92be3958364(uParam0, 22, &cVar1);
	iVar0 = 0;
	while (iVar0 < 7)
	{
		StringCopy(&cVar1, "MpFlow.LastPositionArray.Strand.", 128);
		StringIntConCat(&cVar1, iVar0, 128);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 3, &cVar1);
		StringConCat(&cVar1, ".vPos", 128);
		func_215((*uParam0)[iVar0], &cVar1);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

void func_112(var uParam0, char* sParam1)
{
	StringCopy(&cVar1, sParam1, 64);
	_0x443174c20b8b9e7f(uParam0, 23, "psna_blipsdatStruct");
	_0xb25b5a375be5be26(uParam0, "psna_sBlipsdatState");
	_0x81f4e92be3958364(&(uParam0->f_1), 16, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_1)
	{
		StringCopy(&cVar1, sParam1, 64);
		StringConCat(&cVar1, "psna_itemDat", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0x443174c20b8b9e7f(uParam0->f_1[iVar0], 16, &cVar1);
		StringCopy(&cVar1, sParam1, 64);
		StringConCat(&cVar1, "ItemPickedUp", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0xbb7f4273c186bc4b(uParam0->f_1[iVar0], &cVar1);
		StringCopy(&cVar1, sParam1, 64);
		StringConCat(&cVar1, "SearchVector", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		func_215(&(uParam0->f_1[iVar0]->f_1), &cVar1);
		StringCopy(&cVar1, sParam1, 64);
		StringConCat(&cVar1, "Item", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0xb25b5a375be5be26(&(uParam0->f_1[iVar0]->f_4), &cVar1);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xb25b5a375be5be26(&(uParam0->f_17), "psna_sBlipsdatCurrentMap");
	_0xb25b5a375be5be26(&(uParam0->f_18), "psna_sBlipsdatPrevMap");
	_0xb25b5a375be5be26(&(uParam0->f_19), "psna_sBlipsdatStartingScenarioGroup");
	_0xbb7f4273c186bc4b(&(uParam0->f_20), "psna_sBlipsdatStateChanged");
	_0xbb7f4273c186bc4b(&(uParam0->f_21), "psna_sBlipsdatActiveMapBlips");
	_0xbb7f4273c186bc4b(&(uParam0->f_22), "psna_sBlipsDataHasMapBeenClosed");
	_0xe0b45e983bfc0768();
}

void func_113(var uParam0, char* sParam1)
{
	_0x443174c20b8b9e7f(uParam0, 89, sParam1);
	StringCopy(&cVar1, sParam1, 64);
	StringConCat(&cVar1, ".Record", 64);
	_0x81f4e92be3958364(uParam0, 85, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 3, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iDate", 64);
		_0x529b9ccd0972af4d((*uParam0)[iVar0], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iGamblingSecs", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iGameSecs", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_2), &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&Var17, sParam1, 64);
	StringConCat(&Var17, ".iQueueFront", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_85), &Var17);
	StringCopy(&Var17, sParam1, 64);
	StringConCat(&Var17, ".iQueueBack", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_86), &Var17);
	StringCopy(&Var17, sParam1, 64);
	StringConCat(&Var17, ".iQueueSize", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_87), &Var17);
	StringCopy(&Var17, sParam1, 64);
	StringConCat(&Var17, ".iLockdownDate", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_88), &Var17);
	_0xe0b45e983bfc0768();
}

void func_114(var uParam0, char* sParam1)
{
	_0x443174c20b8b9e7f(uParam0, 2, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bCollectorBlipDiscovered", 64);
	_0xbb7f4273c186bc4b(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eCollectorCheckBlipShop", 64);
	_0xb25b5a375be5be26(&(uParam0->f_1), &cVar0);
	_0xe0b45e983bfc0768();
}

void func_115(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 10, "psna_collGroup");
	_0xb25b5a375be5be26(uParam0, "psna_collGroupArrowhead");
	_0xb25b5a375be5be26(&(uParam0->f_1), "psna_collGroupBottles");
	_0xb25b5a375be5be26(&(uParam0->f_2), "psna_collGroupRandom");
	_0xb25b5a375be5be26(&(uParam0->f_3), "psna_collGroupCoin");
	_0xb25b5a375be5be26(&(uParam0->f_4), "psna_collGroupHeirloom");
	_0xb25b5a375be5be26(&(uParam0->f_5), "psna_collGroupJewelry");
	_0xb25b5a375be5be26(&(uParam0->f_6), "psna_collGroupEgg");
	_0xb25b5a375be5be26(&(uParam0->f_7), "psna_collGroupFlower");
	_0xb25b5a375be5be26(&(uParam0->f_8), "psna_collGroupCard");
	_0xb25b5a375be5be26(&(uParam0->f_9), "psna_collGroupFossil");
	_0xe0b45e983bfc0768();
}

void func_116()
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_44(iVar0))
		{
			request_script(func_118(iVar0));
		}
		iVar0++;
	}
}

bool func_117(int iParam0, bool bParam1)
{
	bVar0 = (iParam0 >= 0 && iParam0 < 15);
	if (bParam1 && !bVar0)
	{
	}
	return bVar0;
}

char* func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "";
		case 1:
			return "init_global_block_ugc";
		case 4:
			return "init_global_block_mp";
		case 3:
			return "init_global_block_profiler";
		case 5:
			return "init_global_block_sp";
		case 7:
			return "init_global_block_shared";
		case 6:
			return "init_global_block_transition";
		case 10:
			return "init_global_block_softsave";
		case 2:
			return "init_global_block_mc";
		case 9:
			return "init_global_block_mc_deathmatch";
		case 8:
			return "init_global_block_mc_race";
		case 11:
			return "init_global_block_creator";
		case 12:
			return "init_global_block_ugc_common";
		case 13:
			return "init_global_block_ugc_transition";
		case 14:
			return "init_global_block_ugc_cutscene";
	}
	return uVar0;
}

void func_119(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

Vector3 func_120()
{
	StringCopy(&cVar0, "eDuelResult", 24);
	return cVar0;
}

char* func_121()
{
	return "brain_id";
}

char* func_122()
{
	return "brain_player";
}

char* func_123()
{
	return "brain_type";
}

char* func_124()
{
	return "brain_isHidden";
}

char* func_125()
{
	return "brain_isDisabled";
}

char* func_126()
{
	return "brain_timeStamp";
}

char* func_127()
{
	return "brain_value";
}

char* func_128()
{
	return "MP_HUD_Local_Status_Icon";
}

char* func_129()
{
	return "MP_HUD_Local_Secondary_Icon";
}

char* func_130()
{
	return "MP_HUD_Local_Blip_Sprite";
}

char* func_131()
{
	return "MP_HUD_Hide_My_Blip_FOR_TEAMS";
}

char* func_132()
{
	return "MP_HUD_Force_My_Blip_Persistent_For_Teams";
}

char* func_133()
{
	return "MP_HUD_Force_Can_Hear_Teams";
}

char* func_134()
{
	return "fetch_entity_bitfield";
}

char* func_135()
{
	return "fetch_combat_config";
}

char* func_136()
{
	return "fetch_lockon_end_time";
}

char* func_137()
{
	return "chu_vip_ped";
}

char* func_138()
{
	return "NetStableMount";
}

char* func_139()
{
	return "NetStableGUID1";
}

char* func_140()
{
	return "NetStableGUID2";
}

char* func_141()
{
	return "NetStableGUID3";
}

char* func_142()
{
	return "NetStableGUID4";
}

char* func_143()
{
	return "NSS_PLAYER_FLAG";
}

char* func_144()
{
	return "NSS_PLAYER_BOUNTY_CUSTODIAN";
}

void func_145()
{
}

void func_146()
{
}

void func_147()
{
	register_object_script_brain("net_fast_travel_barker", 148678632, 100, 20f, -1, 4);
}

bool func_148(var uParam0)
{
	StringCopy(&cVar1, "loading_tips", 24);
	bVar0 = _0x7907969497ea92f5(*uParam0);
	if (!bVar0)
	{
		*uParam0 = _0xd97d8d905f1562f2(get_hash_key(&cVar1));
	}
	bVar4 = _0x603ac35fd4602c76(*uParam0);
	if (!bVar4)
	{
		return false;
	}
	func_223(uParam0);
	uParam0->f_79 = func_224(uParam0, 1);
	if (uParam0->f_79 <= 0)
	{
		return false;
	}
	uVar15 = uParam0->f_1;
	iVar5 = 0;
	while (iVar5 < uParam0->f_79)
	{
		iVar24[iVar5] = iVar5;
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 <= (uParam0->f_79 - 1))
	{
		iVar125 = get_random_int_in_range(iVar5, (uParam0->f_79 - 1));
		iVar126 = &iVar24[iVar5];
		iVar24[iVar5] = &iVar24[iVar125];
		iVar24[iVar125] = iVar126;
		iVar5++;
	}
	iVar127 = 0;
	while (iVar127 < 10)
	{
		uParam0->f_1 = uVar15;
		uParam0->f_3 = &iVar24[iVar127];
		if (func_225(uParam0, 0))
		{
			if (func_226(uParam0, 2, &Var6))
			{
				if (!is_string_null_or_empty(&Var6))
				{
					MemCopy(&Var128, {Var6}, 4);
					if (func_227(uParam0, 4, &bVar14))
					{
						if (bVar14)
						{
							func_228(&Var128, 1);
						}
					}
					if (func_227(uParam0, 5, &bVar14))
					{
						if (bVar14)
						{
							func_228(&Var128, 2);
						}
					}
					func_229(uParam0, 3, &(Var128.f_5));
					if (func_226(uParam0, 6, &uVar16))
					{
						if (!is_string_null_or_empty(&uVar16))
						{
							Var128.f_6 = get_hash_key(&uVar16);
						}
					}
				}
			}
			if (Var128.f_6 == 0 || _0x57e798b54c45ee1a(Var128.f_6) >= 2)
			{
				*uParam0->f_5[iVar127] = { Var128 };
				iVar127++;
			}
		}
	}
	_datafile_unload(*uParam0);
	return true;
}

void func_149(var uParam0, int iParam1)
{
	uParam0->f_80 = iParam1;
}

void func_150(var uParam0, int iParam1)
{
	uParam0->f_76 = iParam1;
}

int func_151()
{
	if (!_get_global_block_can_be_accessed(4))
	{
		return 1;
	}
	if (!_get_global_block_can_be_accessed(7))
	{
		return 1;
	}
	if (!_get_global_block_can_be_accessed(0))
	{
		return 1;
	}
	if (is_bit_set(Global_1957959->f_1, 4))
	{
		return 0;
	}
	if (is_bit_set(Global_1957959->f_1, 5))
	{
		return 1;
	}
	if (func_230(255))
	{
		return 1;
	}
	if (func_231(0))
	{
		return 1;
	}
	if (Global_13)
	{
		return 1;
	}
	if (_0x81dcfd13cf39920e())
	{
		if (_0x975f6ebb62632fe3() || _0x1811a02277a9e49d())
		{
			return 1;
		}
	}
	if (!is_player_control_on(player_id()))
	{
		if (_0x66f35dd9d2b58579())
		{
			return 1;
		}
	}
	if (!is_player_playing(player_id()))
	{
		return 1;
	}
	if (get_tv_channel() != -1)
	{
		if (_0x66f35dd9d2b58579())
		{
			return 1;
		}
	}
	if (_0x975f6ebb62632fe3() || _0x1811a02277a9e49d())
	{
		if (is_radar_hidden())
		{
			if (!_0x1204eb53a5fbc63d())
			{
				return 1;
			}
		}
	}
	if (func_232(255))
	{
		return 1;
	}
	if ((is_screen_faded_out() || is_screen_fading_in()) || is_screen_fading_out())
	{
		return 1;
	}
	return 0;
}

int func_152()
{
	if (is_bit_set(Global_1957959->f_1, 4))
	{
		return 0;
	}
	if (is_bit_set(Global_1957959->f_1, 6))
	{
		return 1;
	}
	if (func_11() == -2)
	{
		return 1;
	}
	if (func_233(&Global_1940258, 8192))
	{
		return 1;
	}
	if (func_233(&Global_1940258, 4096))
	{
		return 1;
	}
	if (!is_screen_faded_in())
	{
		return 1;
	}
	if (_0x99f92061efe908ba() || func_233(&Global_1940258, 32768))
	{
		return 1;
	}
	if (Global_13 || animpostfx_is_running("Title_GameIntro"))
	{
		return 1;
	}
	if (func_234())
	{
		if (is_radar_hidden())
		{
			return 1;
		}
	}
	if (!is_gameplay_cam_rendering())
	{
		if ((!_0x1204eb53a5fbc63d() && !is_cinematic_cam_rendering()) && !func_234())
		{
			return 1;
		}
	}
	if (_0x66f35dd9d2b58579())
	{
		return 1;
	}
	if (func_11() == 0)
	{
		if (_get_global_block_can_be_accessed(4))
		{
			if (func_235(255) > 2 && !func_236(Global_1296859->f_10, 8192))
			{
				return 1;
			}
			else if (func_237(16))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_153(var uParam0, bool bParam1)
{
	if (bParam1 || !func_154(uParam0))
	{
		func_238(uParam0);
	}
}

bool func_154(var uParam0)
{
	return func_239(*uParam0, 1);
}

float func_155(var uParam0)
{
	if (!func_154(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_240(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_241() - uParam0->f_1);
}

void func_156(int iParam0)
{
	if (iParam0 != Global_1957959->f_3)
	{
		_0x74bcceb233ad95b2(612972714, iParam0);
		Global_1957959->f_3 = iParam0;
	}
}

void func_157(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -725272239:
			func_242(iParam1);
			break;
		case 1121131740:
			func_243(iParam1);
			break;
		case 543140406:
			func_244(iParam1);
			break;
		case -2095977185:
			func_245(iParam1);
			break;
		case 809652668:
			func_246(iParam1);
			break;
		case 1860341470:
			func_247();
			break;
		case 516249386:
			func_248(iParam1);
			break;
		case 904577075:
			func_249(iParam1);
			break;
	}
}

void func_158()
{
	if (Global_1572887->f_266.f_64 != 0 && func_250())
	{
		func_251(1);
		return;
	}
	if (Global_1572887->f_266.f_86 > 2 && func_250())
	{
		func_251(1);
		return;
	}
	if (Global_1572887->f_266.f_66 != -1 && func_250())
	{
		func_251(1);
		return;
	}
	if (Global_1572887->f_266.f_88 != 0 && func_250())
	{
		func_251(1);
		return;
	}
	if (func_252(Global_1572887->f_266.f_88, 4194304) || func_252(Global_1572887->f_266.f_88, 16777216))
	{
		func_253(16384);
	}
	Global_1572887->f_266.f_88 = 0;
}

void func_159()
{
	Global_1572887->f_266.f_91 = get_game_timer();
	Var0 = "";
	Var0.f_1 = "";
	Var0.f_2 = 0;
	func_254();
	if (func_255(256) || func_255(512))
	{
		Var0.f_3 = get_hash_key("IB_ACCEPT");
		Var0.f_3.f_1 = 0;
		Var0.f_3.f_2 = 0;
		Var0.f_3.f_3 = 0;
		Var0.f_7 = get_hash_key("IB_EXIT");
		Var0.f_7.f_1 = 0;
		Var0.f_7.f_2 = 0;
		Var0.f_7.f_3 = 0;
	}
	else if (func_255(536870912))
	{
		Var0.f_3 = get_hash_key("IB_ACCEPT");
		Var0.f_3.f_1 = 0;
		Var0.f_3.f_2 = 0;
		Var0.f_3.f_3 = 0;
		Var0.f_7 = get_hash_key("IB_CANCEL");
		Var0.f_7.f_1 = 0;
		Var0.f_7.f_2 = 0;
		Var0.f_7.f_3 = 0;
	}
	else if (((((((((func_255(131072) || func_255(262144)) || func_255(524288)) || func_255(1048576)) || func_255(2097152)) || func_255(4194304)) || func_255(8388608)) || func_255(16777216)) || func_255(33554432)) || func_255(67108864))
	{
		Var0.f_3 = get_hash_key("IB_OK");
		Var0.f_3.f_1 = 0;
		Var0.f_3.f_2 = 0;
		Var0.f_3.f_3 = 0;
	}
	else
	{
		Var0.f_3 = get_hash_key("IB_EXIT");
		Var0.f_3.f_1 = 0;
		Var0.f_3.f_2 = 0;
		Var0.f_3.f_3 = 0;
		func_253(512);
	}
	func_256(&Var0);
	Var19 = 0;
	Var19.f_2 = "SG_HDNG";
	StringCopy(&cVar23, "JAIL_ALT_BODY", 16);
	StringCopy(&cVar25, func_257(), 64);
	sVar33 = func_259(are_strings_equal(&cVar25, &cVar23), Global_1296851->f_2.f_4, func_258());
	Var19.f_3 = _create_var_string(2, &cVar25, sVar33);
	Var19.f_1 = 2;
	Global_1572887->f_266.f_85 = _0x339e16b41780fc35(&Var0, &Var19, 1);
	func_251(2);
	func_260(1);
}

void func_160()
{
	if (func_11() == 0)
	{
		if (is_thread_active(Global_1572887->f_17, false))
		{
			if (func_261() > 5)
			{
				if (is_screen_faded_in() || is_screen_fading_in())
				{
					do_screen_fade_out(0);
				}
				func_251(3);
				return;
			}
		}
	}
	while (_event_manager_is_event_pending(-1218098620))
	{
		if (_event_manager_peek_event(-1218098620, &vVar5))
		{
			switch (vVar5.x)
			{
				case -1203660660:
					if (vVar5.y == Global_1572887->f_266.f_85)
					{
						if (vVar5.z == 2074623703)
						{
							_event_manager_pop_event(-1218098620);
							bVar0 = true;
						}
						if (vVar5.z == 444632721)
						{
							_event_manager_pop_event(-1218098620);
							bVar2 = true;
						}
						if (vVar5.z == 1400745903)
						{
							_event_manager_pop_event(-1218098620);
							bVar1 = true;
						}
					}
					break;
				case -445432096:
					if (vVar5.y == Global_1572887->f_266.f_85)
					{
						Global_1572887->f_266.f_85 = 0;
						bVar3 = true;
						_event_manager_pop_event(-1218098620);
					}
					break;
			}
		}
		_event_manager_pop_event(-1218098620);
	}
	iVar9 = (get_game_timer() - Global_1572887->f_266.f_91);
	bVar4 = (iVar9 > Global_1901947->f_1.f_20 && Global_1572887->f_266.f_91 != -1);
	if ((((bVar4 || bVar0) || bVar1) || bVar2) || bVar3)
	{
		func_251(3);
		if (func_255(256) || func_255(512))
		{
			if (bVar0)
			{
				do_screen_fade_out(0);
				func_262(1, 0, 0, 0, 1);
				func_253(8);
				if (func_255(512))
				{
					func_253(1024);
				}
			}
			else if ((bVar1 || bVar3) || bVar4)
			{
				func_253(16);
				func_253(2);
			}
		}
		else if (((((((((func_255(131072) || func_255(262144)) || func_255(524288)) || func_255(1048576)) || func_255(2097152)) || func_255(4194304)) || func_255(8388608)) || func_255(16777216)) || func_255(33554432)) || func_255(67108864))
		{
			if (bVar0)
			{
				func_253(16);
				func_253(2);
			}
		}
		else if (func_255(536870912))
		{
			if (bVar0)
			{
				do_screen_fade_out(0);
				func_262(1, 0, 0, 0, 1);
				func_253(8);
			}
		}
	}
}

void func_161()
{
	if (_get_global_block_can_be_accessed(4))
	{
		if ((func_232(255) && !(is_screen_faded_out() || is_screen_fading_out())) && !func_263(255))
		{
			do_screen_fade_out(0);
		}
	}
	if (Global_1572887->f_266.f_85 != 0)
	{
		_0x00a15b94cba4f76f(Global_1572887->f_266.f_85);
	}
	if (Global_1572887->f_266.f_66 != -1)
	{
		iVar0 = (27200000 + Global_1572887->f_266.f_66);
		_0xa4484173759749b1();
		_clear_launch_params();
		reset_paused_renderphases();
		_0xbc2c927f5c264243(iVar0);
	}
	_0x2e399eafbeea74d5();
	Global_1572887->f_266.f_65 = Global_1572887->f_266.f_64;
	Global_1572887->f_266.f_87 = Global_1572887->f_266.f_86;
	Global_1572887->f_266.f_85 = 0;
	Global_1572887->f_266.f_64 = 0;
	Global_1572887->f_266.f_88 = 0;
	Global_1572887->f_266.f_86 = 0;
	Global_1572887->f_266.f_66 = -1;
	Global_1572887->f_266.f_91 = -1;
	func_251(0);
}

void func_162(int iParam0)
{
	Global_1572887->f_266.f_82 = iParam0;
}

void func_163()
{
	*Var0[0] = { Global_1572887->f_266.f_12 };
	*Var0[1] = { Global_1572887->f_266.f_12.f_7 };
	Global_1572887->f_266.f_83 = _0xd66c9e72b3cc4982(&Var0, 2);
}

int func_164()
{
	if (is_pc_version() || _is_stadia_version())
	{
		iVar17 = 0;
		if (!_network_get_display_name_from_handle(&(Global_1572887->f_266.f_12), Var0[0]))
		{
			iVar17 = -1;
		}
		else if (!_network_get_display_name_from_handle(&(Global_1572887->f_266.f_12.f_7), Var0[1]))
		{
			iVar17 = -1;
		}
	}
	else
	{
		iVar17 = _0x58cc181719256197(Global_1572887->f_266.f_83, &Var0, 2);
	}
	if (iVar17 == -1)
	{
		return 2;
	}
	else if (iVar17 == 1)
	{
		return 0;
	}
	sVar18 = func_264(Var0[0], 109029619);
	sVar19 = func_264(Var0[1], 109029619);
	sVar20 = sVar19;
	sVar21 = "";
	if (Global_1572887->f_266.f_2 == 0 || Global_1572887->f_266.f_2 == 1)
	{
		if (func_252(Global_1572887->f_266.f_28.f_16, 2))
		{
			sVar21 = _create_var_string(10, "NT_INV_JOIN_EXTENDED", sVar18);
		}
		else
		{
			sVar21 = _create_var_string(10, "NT_INV_EXTENDED", sVar18);
		}
	}
	else if (Global_1572887->f_266.f_2 == 2 || Global_1572887->f_266.f_2 == 3)
	{
		if (func_252(Global_1572887->f_266.f_3.f_8, 2))
		{
			sVar21 = _create_var_string(10, "NT_INV_JOIN_EXTENDED", sVar18);
		}
		else
		{
			sVar21 = _create_var_string(10, "NT_INV_EXTENDED", sVar18);
		}
	}
	else if (Global_1572887->f_266.f_2 == 4)
	{
		if (func_252(Global_1572887->f_266.f_12.f_15, 2))
		{
			sVar21 = _create_var_string(10, "NT_INV_JOIN_EXTENDED", sVar18);
		}
		else
		{
			sVar21 = _create_var_string(10, "NT_INV_EXTENDED", sVar18);
		}
	}
	else
	{
		sVar21 = _create_var_string(10, "NT_INV_EXTENDED", sVar18);
	}
	func_265(sVar20, sVar21, -437533031, 1183081869, 8000, 0, 0, 1, 0, 1, 1);
	return 1;
}

void func_165()
{
	_0xa4484173759749b1();
	func_260(1);
	func_72(0);
	func_74();
	if (Global_1572887->f_266.f_85 != 0)
	{
		_0x00a15b94cba4f76f(Global_1572887->f_266.f_85);
	}
	Global_1572887->f_266.f_84 = 0;
	Global_1572887->f_266.f_86 = 0;
	Global_1572887->f_266.f_87 = 0;
	Global_1572887->f_266.f_88 = 0;
	Global_1572887->f_266.f_89 = 0;
	Global_1572887->f_266.f_90 = 0;
	Global_1572887->f_266.f_91 = -1;
}

void func_166()
{
	func_198();
	func_200(2);
	if (((func_266(Global_1572887->f_266.f_28, 131072) || func_267(64)) || func_267(128)) || Global_1572887->f_266.f_2 == 5)
	{
		func_253(8);
		return;
	}
	if (func_268())
	{
		func_269(536870912);
		return;
	}
	if ((Global_1296859->f_14 && _0x4be6c13a45cca8ec(Global_1296859->f_15) != Global_1296859->f_10) && Global_1572887->f_266.f_2 != 4)
	{
		func_269(512);
		return;
	}
	if ((func_270() || func_271()) && Global_1572887->f_266.f_2 != 4)
	{
		func_269(256);
		return;
	}
	if (func_272() == 2)
	{
		bVar0 = true;
	}
	if (!func_273(bVar0))
	{
		return;
	}
	Global_1572887->f_266.f_86 = 0;
	Global_1572887->f_266.f_87 = 0;
	func_253(8);
}

void func_167()
{
	if (func_274(1))
	{
		func_200(23);
	}
	if (func_267(16))
	{
		func_200(23);
		return;
	}
	if (!func_267(8))
	{
		return;
	}
	if (!func_275())
	{
		return;
	}
	if (func_267(1024))
	{
		func_276(1);
	}
	func_277();
	if (func_11() == -1)
	{
		func_200(8);
		return;
	}
	func_278();
	func_200(3);
}

void func_168()
{
	if (Global_1572887->f_266.f_84 != 0)
	{
		func_253(4);
		func_279();
		func_200(23);
		return;
	}
	if (is_screen_faded_in() && !func_280())
	{
		if (func_267(8192) && func_281())
		{
			func_282(8192);
			func_283(1, 1, 0, 0, 0, 0, 0, 0, 1);
		}
		else
		{
			func_283(1, 1, 0, 0, 0, 0, 1, 1, 0);
		}
		func_284(0);
		func_200(4);
		return;
	}
	if (func_285())
	{
		func_286(18);
	}
	else
	{
		set_player_invincible(player_id(), true);
		func_287(0, 5);
	}
	func_200(5);
}

void func_169()
{
	if (Global_1572887->f_266.f_84 != 0)
	{
		func_253(4);
		func_279();
		func_200(23);
		return;
	}
	if (!func_288() && !func_289())
	{
		return;
	}
	func_200(5);
}

void func_170()
{
	if (Global_1572887->f_266.f_84 != 0)
	{
		func_253(4);
		func_279();
		func_200(23);
		return;
	}
	func_290(1);
	if (func_231(0))
	{
		func_292(func_291(), 0);
	}
	func_293();
	func_200(6);
}

void func_171()
{
	if (Global_1572887->f_266.f_84 != 0)
	{
		func_253(4);
		func_200(23);
		return;
	}
	if (&Global_1572887 != 39)
	{
		return;
	}
	Var22.f_1 = -1;
	Var22.f_2 = -1;
	Var22.f_3 = -1;
	Var22.f_3.f_1 = -1;
	if (!func_267(128))
	{
		switch (Global_1572887->f_266.f_2)
		{
			case 2:
			case 3:
				Global_1572887->f_266.f_1 = _0x9bcf28fb5d65a9be();
				if (!_0x3b82acc3f4b6240c())
				{
					Global_1572887->f_266.f_1 = -1;
					func_200(23);
					return;
				}
				break;
			case 0:
				Var0 = { func_294() };
				_0xc0cffda87c2c163d(_0x27b1ae4d8c652f08(Var0.f_15), &Var22, 11);
				func_295(&Var22);
				Global_1572887->f_266.f_1 = _0x6c27442a225a241a(_0x27b1ae4d8c652f08(Var0.f_15));
				if (!_0xb2cea5105aac8dde(_0x27b1ae4d8c652f08(Var0.f_15)))
				{
					Global_1572887->f_266.f_1 = -1;
					func_200(23);
					return;
				}
				break;
			case 1:
				Global_1572887->f_266.f_1 = _0xe483bb6be686f632(&(Global_1572887->f_266.f_28));
				if (Global_1572887->f_266.f_1 == -1)
				{
					func_200(23);
					return;
				}
				break;
		}
	}
	else
	{
		func_75(0);
	}
	if (_0xf0c0c94b404206fa() != 1)
	{
		func_253(2048);
	}
	func_296();
	if (func_297())
	{
		func_298(1);
		func_253(32768);
	}
	func_198();
	func_200(7);
}

void func_172()
{
	if (!func_299())
	{
		func_200(23);
		return;
	}
	func_300();
	func_200(11);
}

void func_173()
{
	if (!func_301())
	{
		return;
	}
	if (func_272() == 2 || func_272() == 3)
	{
		_0x3b82acc3f4b6240c();
	}
	else if (func_272() == 0 || func_272() == 1)
	{
		Var0 = { func_294() };
		_0xb2cea5105aac8dde(_0x27b1ae4d8c652f08(Var0.f_15));
	}
	func_200(7);
}

void func_174()
{
	if (!func_299())
	{
		func_253(4);
		func_200(23);
		return;
	}
	func_302();
	if (func_272() == 4 && is_thread_active(Global_265377->f_124745, false))
	{
		func_283(1, 0, 0, 1, 0, 0, 0, 0, 0);
	}
	func_73(0);
	_0xc505036a35afd01b(true);
	func_198();
	func_200(9);
}

void func_175()
{
	iVar0 = func_303();
	if (iVar0 == 1)
	{
		func_200(10);
	}
	else if (iVar0 == 2)
	{
		_0xc505036a35afd01b(false);
		if (is_screen_faded_out() || is_screen_fading_out())
		{
			do_screen_fade_in(0);
		}
		if (Global_1572887->f_266.f_87 == 15 || Global_1572887->f_266.f_86 == 15)
		{
			func_269(1073741824);
		}
		func_304(256);
		func_253(4);
		func_200(23);
	}
}

void func_176()
{
	func_198();
	func_305(0, 0, 0, 1);
	_0x236905c700fdb54d();
	_0xf45e46deecf7df6e(0, 0, 0, -1, -1);
	if (!is_screen_faded_in())
	{
		if (is_entity_dead(get_player_ped(player_id())) || !func_306(255))
		{
			func_307(1);
			func_253(4096);
		}
	}
	if (func_308(9))
	{
		func_307(1);
	}
	func_302();
	func_200(13);
	func_309(1, 0, 0);
}

void func_177()
{
	_0x236905c700fdb54d();
	_0xf45e46deecf7df6e(0, 0, 0, -1, -1);
	if (network_is_in_mp_cutscene())
	{
		network_set_in_mp_cutscene(false, true, 32, true);
	}
	func_198();
	func_200(17);
}

void func_178()
{
	if (!_is_ped_carrying(Global_1296859->f_8) && !func_310(Global_1296859->f_8, -208384378))
	{
		func_200(14);
	}
	else if (_is_ped_carrying(Global_34) && !func_310(Global_34, -208384378))
	{
		iVar0 = _get_first_entity_ped_is_carrying(Global_1296859->f_8);
		if (does_entity_exist(iVar0))
		{
			clear_ped_tasks(Global_1296859->f_8, 1, 0);
			task_place_carried_entity_at_coord(Global_1296859->f_8, iVar0, Global_1296859->f_17, 2f, 9);
		}
	}
}

void func_179()
{
	func_198();
	func_311();
	func_200(15);
}

void func_180()
{
	disable_all_control_actions(0);
	_0x236905c700fdb54d();
	_0xf45e46deecf7df6e(0, 0, 0, -1, -1);
	if (func_312())
	{
		func_198();
		func_313();
		func_200(16);
	}
	else if (func_274(0))
	{
		func_269(2048);
		func_200(23);
	}
}

void func_181()
{
	disable_all_control_actions(0);
	_0x236905c700fdb54d();
	_0xf45e46deecf7df6e(0, 0, 0, -1, -1);
	if (func_274(0))
	{
		func_269(4096);
		_0xc505036a35afd01b(false);
		if (is_screen_faded_out() || is_screen_fading_out())
		{
			do_screen_fade_in(0);
		}
		func_253(4);
		func_200(23);
	}
	iVar0 = get_script_task_status(Global_1296859->f_8, 501393341, true);
	if (iVar0 == 0 || iVar0 == 1)
	{
		return;
	}
	if (is_ped_on_mount(Global_1296859->f_8))
	{
		func_293();
		return;
	}
	func_314(13, 0, 0, 1);
	func_315();
	func_316();
	func_200(18);
}

void func_182()
{
	disable_all_control_actions(0);
	_0x236905c700fdb54d();
	_0xf45e46deecf7df6e(0, 0, 0, -1, -1);
	func_313();
	if (func_274(0))
	{
		func_269(8192);
		func_317();
		return;
	}
	Var0 = { func_294() };
	Var22 = { func_318() };
	Var31 = { func_319() };
	switch (func_272())
	{
		case 0:
			Var47 = { Var0 };
			break;
		case 1:
			Var47 = { Var0 };
			break;
		case 2:
			Var47 = { Var22 };
			break;
		case 3:
			Var47 = { Var22 };
			break;
		case 4:
			Var47 = { Var31 };
			break;
		case 5:
			Var47 = { Var0 };
			break;
	}
	if (!network_is_gamer_in_my_session(&Var47))
	{
		return;
	}
	func_198();
	func_200(19);
}

void func_183()
{
	disable_all_control_actions(0);
	_0x236905c700fdb54d();
	_0xf45e46deecf7df6e(0, 0, 0, -1, -1);
	func_313();
	if (func_274(0))
	{
		func_269(16384);
		_0xc505036a35afd01b(false);
		if (is_screen_faded_out() || is_screen_fading_out())
		{
			do_screen_fade_in(0);
		}
		func_253(4);
		func_200(23);
	}
	Var0 = { func_294() };
	Var22 = { func_318() };
	Var31 = { func_319() };
	switch (func_272())
	{
		case 0:
			Var47 = { Var0 };
			break;
		case 1:
			Var47 = { Var0 };
			break;
		case 2:
			Var47 = { Var22 };
			break;
		case 3:
			Var47 = { Var22 };
			break;
		case 4:
			Var47 = { Var31 };
			break;
		case 5:
			Var47 = { Var0 };
			break;
	}
	if (!network_is_gamer_in_my_session(&Var47))
	{
		func_269(8);
		func_320();
		func_253(2);
		_0xc505036a35afd01b(false);
		if (is_screen_faded_out() || is_screen_fading_out())
		{
			do_screen_fade_in(0);
		}
		func_253(4);
		func_200(23);
	}
	iVar54 = network_get_player_from_gamer_handle(&Var47);
	if (!_network_is_player_index_valid(iVar54))
	{
		return;
	}
	func_321(iVar54);
	_0x5a91bcef74944e93(iVar54, 30f);
	if (!network_is_game_in_progress())
	{
		return;
	}
	if (!network_is_player_active(iVar54))
	{
		return;
	}
	func_198();
	func_200(20);
}

void func_184()
{
	disable_all_control_actions(0);
	_0x236905c700fdb54d();
	_0xf45e46deecf7df6e(0, 0, 0, -1, -1);
	func_313();
	if ((func_322() && func_323()) && (func_235(255) > 0 && func_324() > -1))
	{
		func_200(22);
	}
}

void func_185()
{
	disable_all_control_actions(0);
	_0x236905c700fdb54d();
	_0xf45e46deecf7df6e(0, 0, 0, -1, -1);
	func_313();
	if (func_274(0))
	{
		func_269(32768);
		func_200(23);
	}
	if (((is_screen_faded_in() && !_is_loading_screen_active()) && !func_325()) && !func_280())
	{
		do_screen_fade_out(0);
		func_262(1, 0, 0, 0, 0);
	}
	iVar0 = Global_1572887->f_266.f_61;
	if (!network_is_player_active(iVar0))
	{
		func_269(16);
		func_326(1);
		func_320();
		func_253(2);
		func_253(4);
		func_200(23);
	}
	if (func_235(iVar0) == 0)
	{
		return;
	}
	if (func_327() != 2 && func_232(255))
	{
		return;
	}
	bVar1 = func_328();
	iVar2 = func_329();
	if (iVar2 == 1)
	{
		func_330();
		_close_all_apps();
		func_253(32);
		func_253(2);
		func_331(16384);
		func_200(23);
		if (func_332())
		{
			func_307(1);
			func_333(1);
			func_334(1);
		}
		if (bVar1)
		{
			func_335(iVar0, bVar1);
		}
		return;
	}
	else if (iVar2 == 0)
	{
		func_307(1);
		return;
	}
	else if ((iVar2 == 2 && _0xf0c0c94b404206fa() == 4) && !func_267(4))
	{
		func_269(134217728);
		func_253(4);
		return;
	}
	if (func_312())
	{
		func_260(1);
		return;
	}
	if (!func_252(Global_1572887->f_266.f_90, 8) || bVar1)
	{
		func_335(iVar0, bVar1);
	}
	if (!func_336())
	{
		return;
	}
	if (func_267(256))
	{
		set_entity_coords(player_ped_id(), get_entity_coords(player_ped_id(), false, false), false, false, true, true);
	}
	if (func_267(4096))
	{
		func_307(0);
	}
	if (func_325() || func_337(1))
	{
		func_338(512);
	}
	if (func_280())
	{
		func_262(1, 0, 0, 0, 1);
		Global_1071686->f_28662.f_65.f_36 = 1;
	}
	_close_all_apps();
	func_253(2);
	func_200(23);
}

void func_186()
{
	_0x236905c700fdb54d();
	func_313();
	if (func_267(4))
	{
		if (Global_1572887->f_266.f_84 != 0)
		{
			return;
		}
		if (func_325())
		{
			func_338(32768);
		}
		if (func_339())
		{
			if (!Global_1296859->f_14 || Global_1296859->f_16 == &Global_1296859)
			{
				func_340(0, 3, 0);
				func_253(2);
				func_326(0);
				func_341(1, 1);
			}
			else
			{
				func_340(0, 129, 0);
				func_253(2);
				func_326(0);
				func_341(1, 1);
			}
			if ((!func_267(2) && !func_232(255)) && !(is_screen_faded_in() || is_screen_fading_in()))
			{
				do_screen_fade_in(0);
			}
		}
		else if (func_11() == 0)
		{
			iVar0 = 45;
			if (func_267(512) || func_267(16384))
			{
				iVar0 = 0;
			}
			if (func_327() == 0 || func_327() == 1)
			{
				func_211(iVar0, -1);
			}
			else if (func_327() == 2)
			{
				if ((_get_global_block_can_be_accessed(4) && is_thread_active(Global_265377->f_124745, false)) || &Global_1572887 < 39)
				{
					func_211(iVar0, -1);
				}
			}
		}
	}
	if (!func_267(2) && _get_global_block_can_be_accessed(4))
	{
		if (func_232(255))
		{
			return;
		}
		else if (is_screen_faded_out() || is_screen_fading_out())
		{
			func_326(0);
			func_341(1, 1);
		}
		else
		{
			func_332();
		}
	}
	if (_is_loading_screen_active())
	{
		if (!is_screen_faded_out() && !func_325())
		{
			do_screen_fade_out(0);
		}
		shutdown_loading_screen();
	}
	if (Global_1572887->f_266.f_2 == 2 || Global_1572887->f_266.f_2 == 3)
	{
		_0xa4484173759749b1();
	}
	if (!func_267(32))
	{
		if (!func_342(0, 255) && func_343(255) == 1)
		{
			func_283(0, 1, 0, 0, 0, 0, 0, 0, 0);
			set_player_control(player_id(), true, 0, false);
		}
		else if (!func_267(2) && !func_267(32768))
		{
			func_326(1);
			func_344(1);
		}
	}
	if (!func_342(23, 255))
	{
		func_254();
	}
	if (!func_267(8))
	{
		func_345(25);
	}
	set_player_invincible(player_id(), false);
	func_346(0, 5, 0);
	_0x2e399eafbeea74d5();
	func_347(0);
	func_348();
	func_349();
	func_75(2);
	func_74();
}

int func_187(var uParam0)
{
	if (!func_350(uParam0))
	{
		return 0;
	}
	if (func_351(uParam0))
	{
		return uParam0->f_2;
	}
	return func_352(uParam0->f_1);
}

char* func_188(char* sParam0, int iParam1)
{
	sVar24 = "";
	switch (iParam1)
	{
		case 8:
		case 16:
		case 17:
		case 20:
			switch (func_353(&Var0, sParam0->f_48, 1))
			{
				case 1:
					return sVar24;
				case 2:
					if (!func_350(&(sParam0->f_53)) || (func_187(&(sParam0->f_53)) > 500 && func_354() == 0))
					{
						func_355(sParam0->f_48);
						func_356(&(sParam0->f_53), 1);
					}
					return sVar24;
				case 3:
					return sVar24;
				case 4:
					sVar24 = func_357(Var0);
					return sVar24;
				default:
					break;
			}
			break;
		case 1:
			iVar23 = _0x27b1ae4d8c652f08(sParam0->f_11);
			_0x16efb123c4451032(iVar23, &Var16);
			if (!func_358(Var16))
			{
				return sVar24;
			}
			sVar24 = _0xb5c4b18b12a2af23(&Var16, 0);
			if (is_string_null_or_empty(sVar24))
			{
				return sVar24;
			}
			return sVar24;
	}
	return sVar24;
}

void func_189(char* sParam0, char[4] cParam1, bool bParam2)
{
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_18 = 1105014447;
	Var0.f_19 = 1105014447;
	Var0.f_23 = 300;
	Var0.f_31.f_8 = 1105014447;
	Var0.f_31.f_11 = 1105014447;
	Var0.f_31.f_12 = 8000;
	Var0.f_31.f_13 = 1511356879;
	Var0.f_31.f_15 = 1433015236;
	Var0.f_31.f_21 = 1;
	switch (sParam0->f_63)
	{
		case 8:
		case 16:
		case 17:
		case 20:
			if (Global_1071686->f_16 >= 10)
			{
				return;
			}
			func_359(sParam0, &Var0, sParam0->f_63, cParam1, bParam2);
			*Global_1071686->f_16.f_5[Global_1071686->f_16] = { sParam0->f_12 };
			Global_1071686->f_16++;
			break;
		case 1:
			func_360(sParam0, &Var0, cParam1, bParam2);
			break;
	}
	Global_1071686->f_16.f_2.f_1 = func_361(Var0);
	sParam0->f_60 = _databinding_read_data_int_from_parent(Global_1071686->f_16.f_2.f_1, func_362(91));
	func_363(sParam0, Global_1071686->f_16.f_2.f_1);
	if (func_364(&(sParam0->f_12)))
	{
		func_365(&(sParam0->f_12), Global_1071686->f_16);
	}
	if (func_366(&(sParam0->f_12)))
	{
		if (_network_is_player_index_valid(sParam0->f_12.f_16.f_14) && network_is_player_active(sParam0->f_12.f_16.f_14))
		{
			_0x5a91bcef74944e93(sParam0->f_12.f_16.f_14, 30f);
		}
	}
}

void func_190(char* sParam0, char* sParam1, bool bParam2)
{
}

void func_191(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
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
}

bool func_192(int iParam0)
{
	if (iParam0 >= 31 || iParam0 <= 0)
	{
		return true;
	}
	return Global_1901815[iParam0] >= 1;
}

void func_193(int iParam0)
{
	if (iParam0 >= 0)
	{
		(*Global_1900874)[iParam0] = 0;
		(*Global_1900874)[iParam0]->f_1 = 0;
		StringCopy(&((*Global_1900874)[iParam0]->f_2), "", 24);
		StringCopy(&((*Global_1900874)[iParam0]->f_18), "", 24);
		StringCopy(&((*Global_1900874)[iParam0]->f_21), "", 24);
		StringCopy(&((*Global_1900874)[iParam0]->f_24), "", 24);
		StringCopy(&((*Global_1900874)[iParam0]->f_27), "", 24);
		StringCopy(&((*Global_1900874)[iParam0]->f_30), "", 128);
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			StringCopy((*Global_1900874)[iParam0]->f_5[iVar0], "", 24);
			iVar0++;
		}
	}
}

bool func_194(var uParam0)
{
	return false;
}

void func_195(struct<47> Param0, int iParam47)
{
	if (!func_367(Param0))
	{
		return;
	}
	if (is_string_null_or_empty(&(Param0.f_18)) || is_string_null_or_empty(&(Param0.f_21)))
	{
		return;
	}
	_0xcc7fc854b956a128(&(Param0.f_18), &(Param0.f_21));
	if (!is_string_null_or_empty(&(Param0.f_2)))
	{
		_0x9935f76407c32539(&(Param0.f_2));
	}
	if (Param0.f_46)
	{
		if (!is_string_null_or_empty(&(Param0.f_24)) && !is_string_null_or_empty(Param0.f_5[0]))
		{
			_0x91d657230bc208d2(Param0.f_5[0], &(Param0.f_24));
			Var0 = { func_368(player_id()) };
			if (func_358(Var0))
			{
				_0xaf530e56505d1bd6(&Var0);
			}
		}
		iVar7 = 1;
		while (iVar7 <= 3)
		{
			if (!is_string_null_or_empty(Param0.f_5[iVar7]))
			{
				_0x1694a053dfb61a34(Param0.f_5[iVar7]);
			}
			iVar7++;
		}
	}
	if (!is_string_null_or_empty(&(Param0.f_30)))
	{
		_0xff252e2bafb7330f(&(Param0.f_30));
	}
	_0xb16fc7b364d86585();
	func_193(iParam47);
	(*Global_1901815)[Param0] = Global_1901815[Param0] + 1;
}

void func_196(int iParam0)
{
	func_369(&(Global_1572887->f_405.f_1), func_213(iParam0), 3);
}

void func_197()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 33)
	{
		if (func_91(iVar0))
		{
		}
		iVar0++;
	}
	if (Global_1572887->f_405.f_5 != -1)
	{
	}
	if (Global_1572887->f_405.f_6 != -1)
	{
	}
	if (Global_1572887->f_405.f_7 != -1)
	{
	}
	if (Global_1572887->f_405.f_8 != -1)
	{
	}
	if (Global_1572887->f_405.f_9 != -1)
	{
	}
	if (Global_1572887->f_405.f_11 != 0)
	{
	}
}

void func_198()
{
	Global_1572887->f_266.f_62 = get_game_timer();
}

void func_199(int iParam0)
{
	Global_1572887->f_266.f_2 = iParam0;
}

void func_200(int iParam0)
{
	Global_1572887->f_266 = iParam0;
}

bool func_201()
{
	return Global_1572887->f_266.f_91 != -1;
}

void func_202(int iParam0)
{
	Global_1572887->f_405 = iParam0;
}

int func_203()
{
	return (get_game_timer() - vLocal_29.y);
}

char* func_204(int iParam0)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 1746230403:
			sVar0 = "mode";
			break;
		case -763890493:
			sVar0 = "state_id";
			break;
		case -1926951471:
			sVar0 = "district_id";
			break;
		case 82543689:
			sVar0 = "region_id";
			break;
		case -875643756:
			sVar0 = "minigame_id";
			break;
		case 64789430:
			sVar0 = "series_id";
			break;
		case 735882532:
			sVar0 = "mission_id";
			break;
		case -1637816997:
			sVar0 = "char_slot";
			break;
		case -730035725:
			sVar0 = "arg_0";
			break;
		case -503077631:
			sVar0 = "arg_1";
			break;
		case 1860157115:
			sVar0 = "arg_2";
			break;
		case 2091932252:
			sVar0 = "arg_3";
			break;
		case -1955432480:
			sVar0 = "arg_4";
			break;
		case -1725164717:
			sVar0 = "arg_5";
			break;
		case 1056268003:
			sVar0 = "arg_6";
			break;
		case 1286208076:
			sVar0 = "arg_7";
			break;
		case 1529091912:
			sVar0 = "arg_8";
			break;
		case 1762505499:
			sVar0 = "arg_9";
			break;
		case -1723987907:
			sVar0 = "launchPreset";
			break;
		case -1590500238:
			sVar0 = "launchGender";
			break;
	}
	return sVar0;
}

void func_205(var uParam0)
{
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		uParam0->f_1[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = -1;
	uParam0->f_9 = -1;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_206(int iParam0)
{
	switch (iParam0)
	{
		case -2085163631:
			return 0;
		case -4613767:
			return 0;
		case 1567162363:
			return 1;
		case 456471693:
			return 2;
		case -1772963474:
			return 3;
		case 1881496386:
			return 4;
		case 711768994:
			return 5;
		case -440834066:
			return 6;
		case -1363847832:
			return 7;
		case 967769300:
			return 8;
		case -1436873944:
			return 9;
		case -1585669139:
			return 10;
		case 16791368:
			return 11;
		case 1452922822:
			return 12;
		case 549538301:
			return 13;
		case 974698954:
			return 14;
		case 445881012:
			return 15;
		case -2043891857:
			return 16;
		case 419656993:
			return 17;
		case -1732457315:
			return 18;
		case 1794318026:
			return 19;
		case 2035159966:
			return 20;
		case 770832805:
			return 21;
		case -1109814766:
			return 22;
		case -1080317735:
			return 23;
		case -1075550363:
			return 24;
		case 2138576151:
			return 25;
		case 1180954297:
			return 26;
		case 783603394:
			return 27;
		case -170458336:
			return 30;
		case 2023240596:
			return 29;
		case 1285083821:
			return 31;
		case -1840907462:
			return 32;
		case 756710130:
			return 33;
		case 1634157321:
			return 34;
		case 388370024:
			return 35;
		case 1092296123:
			return 36;
		case 467491346:
			return 37;
		case -1391584612:
			return 38;
		case -152111346:
			return 39;
		case 1447551317:
			return 40;
		case 153136092:
			return 41;
		case 1304405732:
			return 42;
		case 1074984055:
			return 43;
		case 1087476368:
			return 53;
		case -1768057340:
			return 54;
		case 1218874593:
			return 44;
		case -1438443836:
			return 55;
		case -2036340415:
			return 45;
		case -597278150:
			return 56;
		case 803939643:
			return 46;
		case -632496195:
			return 57;
		case -965943619:
			return 47;
		case 283532073:
			return 48;
		case -462827524:
			return 49;
		case -69067491:
			return 50;
		case -1864895118:
			return 51;
		case -1929806571:
			return 58;
		case 1162337247:
			return 28;
		case -698525417:
			return 59;
		case -1149739894:
			return 60;
		case 380507325:
			return 52;
		case -875142075:
			return 61;
		case 407796241:
			return 62;
		case -152267914:
			return 63;
		case -1675443320:
			return 64;
		case 1940341639:
			return 65;
		case 1846596114:
			return 66;
		case 907708501:
			return 67;
		case 1825644981:
			return 69;
		case 2065937607:
			return 70;
		case -211317417:
			return 71;
		case 1801307910:
			return 72;
		case -4118897:
			return 73;
		case 1853610692:
			return 74;
		case -1574644415:
			return 75;
		case 2133055515:
			return 76;
		case -1413401932:
			return 77;
		case 801090761:
			return 78;
		case 2131218644:
			return 79;
		case 1708823660:
			return 80;
		case 7976942:
			return 81;
		case 2111120505:
			return 82;
		case 176893118:
			return 83;
		case 602306665:
			return 68;
		case 1179148161:
			return 84;
		case 547412068:
			return 85;
		case -1539748801:
			return 86;
		case -1605119912:
			return 87;
		case -884464063:
			return 88;
		case -1420970720:
			return 89;
		case 1017024547:
			return 90;
		case -1204497306:
			return 91;
		case -1621069480:
			return 92;
		case -458604261:
			return 93;
		case -923391614:
			return 94;
		case -689247089:
			return 95;
		case 44049568:
			return 97;
		case 1350259552:
			return 98;
		case 620414938:
			return 96;
		case -61661574:
			return 99;
		case -725338054:
			return 100;
		case -770123507:
			return 101;
		case 1322486734:
			return 102;
		case -460939553:
			return 103;
		case -1451863552:
			return 104;
		case 713715980:
			return 107;
		case -31204969:
			return 108;
		case -1720064790:
			return 109;
		case 173833068:
			return 105;
		case -1681004136:
			return 106;
		case -532172775:
			return 110;
		case -739067737:
			return 111;
		case -1203133835:
			return 112;
		case -1947411598:
			return 113;
		case -1049753365:
			return 114;
		case -1298718762:
			return 115;
		case -595083064:
			return 116;
		case 884833917:
			return 117;
		case 2141950651:
			return 118;
		case -1437650729:
			return 119;
		case 672925454:
			return 135;
		case 846062774:
			return 136;
		case 1713550306:
			return 137;
		case -1573562784:
			return 138;
		case 1369756178:
			return 127;
		case -736172423:
			return 128;
		case 1597070291:
			return 129;
		case -159501564:
			return 131;
		case -1438809608:
			return 130;
		case -102682392:
			return 132;
		case 676673543:
			return 133;
		case 1869665995:
			return 134;
		case -81068979:
			return 120;
		case 227618407:
			return 121;
		case 2106043438:
			return 122;
		case -1380256064:
			return 123;
		case -2118469183:
			return 124;
		case -558997834:
			return 125;
		case 1563120499:
			return 126;
		case 658339366:
			return 139;
		default:
			break;
	}
	return -1;
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 675537701:
			return 0;
		case -1915988145:
			return 1;
		case 38535626:
			return 2;
		case 1904167574:
			return 3;
		case 244711249:
			return 4;
		case -1859792564:
			return 5;
		case -1808688941:
			return 6;
		case -736296038:
			return 7;
		case -909439131:
			return 8;
		case 1917744724:
			return 9;
		case 821748379:
			return 10;
		case 196685551:
			return 11;
		case 1983548039:
			return 12;
		case 985737465:
			return 13;
		case -735550853:
			return 14;
		case -1716084250:
			return 15;
		case 869827975:
			return 16;
		default:
			break;
	}
	return -1;
}

int func_208(int iParam0)
{
	switch (iParam0)
	{
		case -221059932:
			return 0;
		case 10837344:
			return 1;
		case 2045157995:
			return 2;
		case -1289136221:
			return 3;
		case 1246494439:
			return 4;
		case 1935063277:
			return 5;
		default:
			break;
	}
	return -1;
}

int func_209(int iParam0)
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

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case -1369928329:
			return 0;
		case -1804958860:
			return 1;
		case 1412564789:
			return 2;
		case 2090637823:
			return 3;
		case -1740003396:
			return 4;
		case -2140118397:
			return 5;
		case -141490041:
			return 6;
		case 112216621:
			return 7;
		case -1767965617:
			return 8;
		case 81153145:
			return 9;
		case 485273815:
			return 10;
		case 188100165:
			return 11;
		case -840966484:
			return 12;
		case 812079913:
			return 13;
		case 839886685:
			return 14;
		case 1749906378:
			return 15;
		case 1485493317:
			return 16;
		case -1956038143:
			return 17;
		case -1013295952:
			return 18;
		case 928731509:
			return 19;
		default:
			break;
	}
	return -1;
}

void func_211(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		func_370(iParam0, iParam1);
	}
	func_67(4);
	func_68();
	func_24(1);
}

void func_212(int iParam0)
{
	sVar0 = func_204(iParam0);
	if (!_get_launch_param_exists(sVar0))
	{
		return;
	}
	sVar1 = _get_launch_param_value(sVar0);
	iVar2 = get_hash_key(sVar1);
	if (iVar2 == 0)
	{
		return;
	}
	func_196(iVar2);
}

int func_213(int iParam0)
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

bool func_214(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

void func_215(var uParam0, char* sParam1)
{
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".x", 64);
	_0x35defecae36d4fae(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".y", 64);
	_0x35defecae36d4fae(&(uParam0->f_1), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".z", 64);
	_0x35defecae36d4fae(&(uParam0->f_2), &cVar0);
}

void func_216(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 10, "psna_sCamp");
	_0x443174c20b8b9e7f(uParam0, 3, "psna_sCampLocation");
	_0x529b9ccd0972af4d(uParam0, "psna_sCampiSize");
	_0xb25b5a375be5be26(&(uParam0->f_1), "psna_sCampeDistrict");
	_0xb25b5a375be5be26(&(uParam0->f_2), "psna_sCampeLocation");
	_0xe0b45e983bfc0768();
	_0x443174c20b8b9e7f(&(uParam0->f_3), 7, "psna_sCampRecharge");
	_0x529b9ccd0972af4d(&(uParam0->f_3), "psna_sCampRechargeYear");
	_0x529b9ccd0972af4d(&(uParam0->f_3.f_1), "psna_sCampRechargeMonth");
	_0x529b9ccd0972af4d(&(uParam0->f_3.f_2), "psna_sCampRechargeDay");
	_0x529b9ccd0972af4d(&(uParam0->f_3.f_3), "psna_sCampRechargeHour");
	_0x529b9ccd0972af4d(&(uParam0->f_3.f_4), "psna_sCampRechargeMinute");
	_0x529b9ccd0972af4d(&(uParam0->f_3.f_5), "psna_sCampRechargeSecond");
	_0x529b9ccd0972af4d(&(uParam0->f_3.f_6), "psna_sCampRechargeMilliseconds");
	_0xe0b45e983bfc0768();
	_0xe0b45e983bfc0768();
}

void func_217(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 47, "psna_sPosse");
	_0x4845e7e7643a908c(uParam0, "psna_sPosse_txtGamertag");
	_0x529b9ccd0972af4e(&(uParam0->f_4), "psna_sPosse_iLastPosseID");
	_0xbb7f4273c186bc4b(&(uParam0->f_5), "psna_sPosse_bPreferOpen");
	_0x81f4e92be3958364(&(uParam0->f_6), 41, "psna_sPosse_sPosseDataArray");
	StringCopy(&cVar9, "psna_sPosse_data_", 64);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Var1 = { cVar9 };
		StringIntConCat(&Var1, iVar0, 64);
		_0x443174c20b8b9e7f(uParam0->f_6[iVar0], 8, &Var1);
		Var17 = { Var1 };
		StringConCat(&Var17, "_iPosseID", 64);
		_0x529b9ccd0972af4e(uParam0->f_6[iVar0], &Var17);
		Var17 = { Var1 };
		StringConCat(&Var17, "_sPosseLock", 64);
		_0x443174c20b8b9e7f(&(uParam0->f_6[iVar0]->f_1), 7, &Var17);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Year", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_6[iVar0]->f_1), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Month", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_6[iVar0]->f_1.f_1), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Day", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_6[iVar0]->f_1.f_2), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Hour", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_6[iVar0]->f_1.f_3), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Minute", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_6[iVar0]->f_1.f_4), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Second", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_6[iVar0]->f_1.f_5), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Milliseconds", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_6[iVar0]->f_1.f_6), &Var25);
		_0xe0b45e983bfc0768();
		_0xe0b45e983bfc0768();
		StringCopy(&Var17, "", 64);
		StringCopy(&Var25, "", 64);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

void func_218(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 583, "nssd_sStable_Data");
	func_371(uParam0);
	_0x81f4e92be3958364(&(uParam0->f_41), 541, "nssd_sStableBonding_array");
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		StringCopy(&cVar1, "nssd_sStableBonding_array_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		func_372(uParam0->f_41[iVar0], &cVar1);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xb25b5a375be5be26(&(uParam0->f_582), "nssd_eSavedSystemFlags");
	_0xe0b45e983bfc0768();
}

void func_219(var uParam0)
{
	StringCopy(&cVar9, "psna_sClothes", 64);
	_0x443174c20b8b9e7f(uParam0, 1792, &cVar9);
	Var1 = { cVar9 };
	StringConCat(&Var1, "PortableWardrobe", 64);
	_0x443174c20b8b9e7f(uParam0, 33, &Var1);
	func_373(uParam0, Var1);
	_0xe0b45e983bfc0768();
	StringCopy(&Var1, "psna_sClothes_OutfitList", 64);
	_0x81f4e92be3958364(&(uParam0->f_33), 1321, &Var1);
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		func_374(uParam0->f_33[iVar0], Var1, iVar0);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&Var1, "psna_sClothes_HeadOverlay", 64);
	func_375(&(uParam0->f_1354), Var1);
	_0xb25b5a375be5be26(&(uParam0->f_1734), "psna_sClothes_SystemFlags");
	_0xb25b5a375be5be26(&(uParam0->f_1735), "psna_sClothes_PlayerType");
	_0x81f4e92be3958364(&(uParam0->f_1736), 40, "psna_sClothes_fExpressions");
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Var1 = { cVar9 };
		StringConCat(&Var1, "_fExpression", 64);
		StringIntConCat(&Var1, iVar0, 64);
		_0x35defecae36d4fae(uParam0->f_1736[iVar0], &Var1);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0x35defecae36d4fae(&(uParam0->f_1776), "psna_sClothes_fEyeRedness");
	_0x529b9ccd0972af4d(&(uParam0->f_1777), "psna_sClothes_iCurOutfit");
	_0x529b9ccd0972af4d(&(uParam0->f_1778), "psna_sClothes_iWhistleStyle");
	_0x529b9ccd0972af4d(&(uParam0->f_1779), "psna_sClothes_iWhistlePitch");
	_0x529b9ccd0972af4d(&(uParam0->f_1780), "psna_sClothes_iWhistleClarity");
	_0x529b9ccd0972af4d(&(uParam0->f_1781), "psna_sClothes_iDeathsWithPomade");
	_0xb25b5a375be5be26(&(uParam0->f_1782), "psna_sClothes_ePomadeLifetime");
	_0x529b9ccd0972af4d(&(uParam0->f_1783), "psna_sClothes_iPreferredWalkStyle");
	_0x186608a2ac6f9e88(&(uParam0->f_1784), "psna_sClothes_tlPlayerSaveName");
	_0xe0b45e983bfc0768();
}

void func_220(var uParam0)
{
	StringCopy(&cVar9, "psna_sAbandonedLoot", 64);
	_0x443174c20b8b9e7f(uParam0, 3, &cVar9);
	_0x81f4e92be3958364(uParam0, 3, &Var1);
	Var1 = { cVar9 };
	StringIntConCat(&Var1, iVar0, 64);
	func_376((*uParam0)[0], Var1);
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

void func_221(var uParam0)
{
	StringCopy(&cVar18, "psna_sRpg", 64);
	_0x443174c20b8b9e7f(uParam0, 42, &cVar18);
	StringConCat(&cVar18, "psna_sAttributeData", 64);
	_0x81f4e92be3958364(uParam0, 24, &cVar18);
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		Var2 = { cVar18 };
		StringIntConCat(&Var2, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 1, &Var2);
		StringConCat(&Var2, "fAttributeXP", 64);
		_0x35defecae36d4fae((*uParam0)[iVar0], &Var2);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar18, "psna_sRpg", 64);
	StringConCat(&cVar18, "psna_sAttributeCoreData", 64);
	_0x81f4e92be3958364(&(uParam0->f_24), 10, &cVar18);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Var2 = { cVar18 };
		StringIntConCat(&Var2, iVar0, 64);
		_0x443174c20b8b9e7f(uParam0->f_24[iVar0], 3, &Var2);
		Var10 = { Var2 };
		StringConCat(&Var10, "fCoreValue", 64);
		_0x35defecae36d4fae(uParam0->f_24[iVar0], &Var10);
		Var10 = { Var2 };
		StringConCat(&Var10, "todDegradeLastFixed", 64);
		_0xb25b5a375be5be26(&(uParam0->f_24[iVar0]->f_1), &Var10);
		Var10 = { Var2 };
		StringConCat(&Var10, "iDegradeCount", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_24[iVar0]->f_2), &Var10);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar18, "psna_sRpg", 64);
	StringConCat(&cVar18, "psna_sAttributeOverpoweredTime", 64);
	_0x81f4e92be3958364(&(uParam0->f_34), 7, &cVar18);
	iVar1 = 0;
	while (iVar1 < uParam0->f_34)
	{
		Var2 = { cVar18 };
		StringIntConCat(&Var2, iVar1, 64);
		_0x443174c20b8b9e7f(uParam0->f_34[iVar1], 2, &Var2);
		Var10 = { Var2 };
		StringConCat(&Var10, "fTankTime", 64);
		_0x35defecae36d4fae(uParam0->f_34[iVar1], &Var10);
		Var10 = { Var2 };
		StringConCat(&Var10, "fCoreTime", 64);
		_0x35defecae36d4fae(&(uParam0->f_34[iVar1]->f_1), &Var10);
		_0xe0b45e983bfc0768();
		iVar1++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar18, "psna_sRpg", 64);
	StringConCat(&cVar18, "iTimesEatenFood", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_41), &cVar18);
	_0xe0b45e983bfc0768();
}

void func_222(var uParam0)
{
	StringCopy(&cVar0, "essd_emotes", 64);
	_0x443174c20b8b9e7f(uParam0, 29, &cVar0);
	StringConCat(&cVar0, ".sArr", 64);
	_0x81f4e92be3958364(uParam0, 29, &cVar0);
	iVar16 = 0;
	while (iVar16 <= (4 - 1))
	{
		Var8 = { cVar0 };
		StringConCat(&Var8, ".sCat", 64);
		StringIntConCat(&Var8, iVar16, 64);
		func_377((*uParam0)[iVar16], Var8);
		iVar16++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

void func_223(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		_datafile_register_query(*uParam0, iVar0, func_378(iVar0));
		iVar0++;
	}
}

var func_224(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	uVar0 = _datafile_get_num_nodes(uParam0);
	return uVar0;
}

bool func_225(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	bVar0 = _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
	if (bVar0)
	{
		return true;
	}
	return false;
}

bool func_226(var uParam0, int iParam1, var uParam2)
{
	uParam0->f_2 = iParam1;
	bVar0 = _datafile_get_string(uParam2, uParam0);
	if (bVar0)
	{
		return true;
	}
	return false;
}

bool func_227(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_2 = iParam1;
	bVar0 = _datafile_get_bool(bParam2, uParam0);
	if (bVar0)
	{
		return true;
	}
	return false;
}

void func_228(var uParam0, int iParam1)
{
	uParam0->f_4 = (uParam0->f_4 || iParam1);
}

int func_229(var uParam0, int iParam1, var uParam2)
{
	uParam0->f_2 = iParam1;
	bVar0 = _datafile_get_int(uParam2, uParam0);
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

bool func_230(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_3 & 32 != 0;
	}
	return func_379(32, iParam0);
}

bool func_231(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

bool func_232(int iParam0)
{
	return func_342(1, iParam0);
}

bool func_233(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_234()
{
	return func_380() != -1;
}

int func_235(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1296859->f_10;
	}
	return Global_263042[iParam0];
}

bool func_236(int iParam0, int iParam1)
{
	return ((*Global_263042)[iParam0]->f_68 && iParam1) != 0;
}

bool func_237(int iParam0)
{
	return (Global_262151 && iParam0) != 0;
}

void func_238(var uParam0)
{
	func_381(uParam0, 0f);
}

bool func_239(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_240(var uParam0)
{
	return func_239(*uParam0, 2);
}

float func_241()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_242(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 22))
	{
		return;
	}
	if (func_11() != -1)
	{
		if (!func_12())
		{
			func_253(2);
			return;
		}
		if (Global_1071686->f_28778)
		{
			func_253(2);
			return;
		}
	}
	iVar22 = _0x27b1ae4d8c652f08(Var0.f_15);
	if (iVar22 == -1)
	{
		return;
	}
	if (func_382())
	{
		Var23 = { func_294() };
		if (network_are_handles_the_same(&Var23, &Var0))
		{
			return;
		}
	}
	if (func_266(Var0, 131072))
	{
		func_383(Var0.f_15);
		func_199(0);
		func_253(8);
		func_384(0);
	}
	if ((func_266(Var0, 2048) && func_266(Var0, 32)) || func_385(255))
	{
		if (func_386())
		{
			Global_1572887->f_266.f_93 = 1;
		}
	}
	if (func_11() != -1)
	{
		if (func_387(Var0, 1))
		{
			return;
		}
	}
	sVar45 = func_264(_0xe59f4924bd3a718d(iVar22), 636925055);
	Var46 = 1;
	Var46.f_1 = 1;
	Var46.f_2 = 1105014447;
	Var46.f_4 = -1;
	Var46.f_5 = -1;
	Var46.f_6 = -1;
	Var46.f_10 = -1;
	Var46.f_11 = -1;
	Var46.f_12 = -1;
	Var46.f_18 = 1105014447;
	Var46.f_19 = 1105014447;
	Var46.f_23 = 300;
	Var46.f_31.f_8 = 1105014447;
	Var46.f_31.f_11 = 1105014447;
	Var46.f_31.f_12 = 8000;
	Var46.f_31.f_13 = 1511356879;
	Var46.f_31.f_15 = 1433015236;
	Var46.f_31.f_21 = 1;
	Var46.f_24 = 1;
	Var46.f_25 = Var0.f_15;
	Var46.f_16 = sVar45;
	Var46.f_20 = 1700592256;
	Var46.f_21 = 1434360011;
	Var46.f_30 = _0x9c725d149622bfde(0);
	Var46.f_29 = "IB_GAMERCARD";
	Var46.f_28 = 2;
	if (is_string_null_or_empty(&(Var0.f_17)))
	{
		Var99.f_1 = -1;
		Var99.f_2 = -1;
		Var99.f_3 = -1;
		Var99.f_3.f_1 = -1;
		_0xc0cffda87c2c163d(iVar22, &Var99, 11);
		if (Var99 == 3)
		{
			iVar110 = func_388(Var99.f_3);
			Var46.f_17 = _create_var_string(10, "NT_INV_RCV_BODY_INFO", func_390(func_389(iVar110)));
			Var46.f_31.f_3 = _create_var_string(10, "NM_TI_VIEW_INVITE_SUBTYPE", func_390(func_389(iVar110)));
			Var46.f_31.f_4 = _create_var_string(2, "NM_TI_VIEW_INVITE");
		}
		else
		{
			Var46.f_17 = _create_var_string(42, "NT_INV_BODY_INFO", func_264(&(Var0.f_7), 109029619), "LANDING_FREEROAM_TITLE");
			Var46.f_31.f_3 = _create_var_string(2, "NT_INV_FM_CONTENT");
			Var46.f_31.f_4 = _create_var_string(2, "NM_TI_VIEW_INVITE");
		}
	}
	else if (func_11() != -1)
	{
		iVar111 = func_391(get_hash_key(&(Var0.f_17)));
		if (iVar111 != -1)
		{
			iVar112 = Global_265377->f_4[iVar111]->f_29;
			if (iVar112 == -504335712)
			{
				sVar114 = func_392(Global_265377->f_4[iVar111]->f_31);
			}
			else if (iVar112 == 395262693)
			{
				sVar114 = func_393(Global_265377->f_4[iVar111]->f_31);
			}
			else if (iVar112 == -933924539)
			{
				sVar114 = func_394(Global_265377->f_4[iVar111]->f_31);
			}
			Var46.f_31.f_3 = _create_var_string(10, "NM_TI_VIEW_INVITE_SUBTYPE", sVar114);
			sVar113 = _create_var_string(2, sVar114);
			Var46.f_17 = _create_var_string(10, "NT_INV_RCV_BODY_INFO", sVar113);
		}
	}
	else
	{
		Var46.f_17 = _create_var_string(42, "NT_INV_BODY_INFO", func_264(&(Var0.f_7), 109029619), "PRES_SET_MODE_MP");
		Var46.f_31.f_3 = _create_var_string(2, "NT_INV_MP_PLAYER_JOIN");
	}
	Var46.f_31.f_2 = sVar45;
	Var46.f_31.f_6 = 1700592256;
	Var46.f_31.f_7 = 1434360011;
	Var46.f_31.f_17 = "HUD_Toast_Soundset";
	Var46.f_31.f_18 = "Toast_On";
	Var46.f_23 = Global_1901947->f_1.f_23;
	Var46.f_22 = 1;
	func_361(Var46);
}

void func_243(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 16))
	{
		return;
	}
	if (func_382())
	{
		if (Global_1572887->f_266 > 6)
		{
			func_395(&Var0);
			return;
		}
		else
		{
			if (Global_1572887->f_266.f_85 != 0)
			{
				_0x00a15b94cba4f76f(Global_1572887->f_266.f_85);
			}
			func_74();
			func_161();
		}
	}
	if (Global_1572887->f_266.f_1 == -1)
	{
		Global_1572887->f_266.f_1 = Var0.f_14;
	}
	if (func_11() != -1)
	{
		if (!func_12())
		{
			func_269(2);
			func_253(2);
			func_200(23);
			return;
		}
		if (Global_1071686->f_28778)
		{
			func_269(268435456);
			func_253(2);
			func_200(23);
			return;
		}
	}
	func_395(&Var0);
	func_396(&Var0);
	func_199(4);
	func_384(0);
	func_162(1);
}

void func_244(int iParam0)
{
	if (!get_event_data(1, iParam0, &iVar0, 2))
	{
		return;
	}
	func_397(1, iVar0);
	func_398(&iVar0);
}

void func_245(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 9))
	{
		return;
	}
	if (func_382() && !func_267(16384))
	{
		_0xa4484173759749b1();
		func_399(&Var0);
		return;
	}
	if (network_is_gamer_in_my_session(&Var0))
	{
		_0xa4484173759749b1();
		func_269(128);
		return;
	}
	if (func_11() != -1)
	{
		if (!func_12())
		{
			func_269(2);
			func_253(2);
			func_200(23);
			_0xa4484173759749b1();
			return;
		}
		if (Global_1071686->f_28778)
		{
			func_269(268435456);
			func_253(2);
			func_200(23);
			_0xa4484173759749b1();
			return;
		}
	}
	if (!func_299())
	{
		func_253(4);
		return;
	}
	Global_1572887->f_266.f_1 = Var0.f_7;
	func_399(&Var0);
	func_400(&Var0);
	if (func_401(Var0, 2))
	{
		func_199(3);
	}
	else
	{
		func_199(2);
	}
	func_282(16384);
	func_384(0);
}

void func_246(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 17))
	{
		return;
	}
	if (Global_1572887->f_266.f_1 != -1 && Global_1572887->f_266.f_1 != Var0.f_14)
	{
		return;
	}
	Var17 = { func_368(player_id()) };
	if (func_252(Var0.f_15, 2) || func_252(Var0.f_15, 1))
	{
		if (network_are_handles_the_same(&Var0, &Var17) && !func_382())
		{
			return;
		}
	}
	else if (network_are_handles_the_same(&(Var0.f_7), &Var17) && !func_382())
	{
		return;
	}
	if (network_are_handles_the_same(&Var0, &Var17) && Var0.f_16 == 4)
	{
		return;
	}
	if (Global_1572887->f_266.f_1 != -1 && Global_1572887->f_266.f_1 != Var0.f_14)
	{
		return;
	}
	if (func_252(Var0.f_16, 4194304))
	{
		if (func_402() >= 3 && func_402() <= 5)
		{
			func_279();
		}
		func_253(4);
		func_253(16384);
		func_200(23);
	}
	Global_1572887->f_266.f_88 = Var0.f_16;
	Global_1572887->f_266.f_68 = { Var0 };
	Global_1572887->f_266.f_75 = { Var0.f_7 };
	Global_1572887->f_266.f_89 = Var0.f_15;
}

void func_247()
{
	if (is_orbis_version())
	{
		Global_1572887->f_266.f_66 = _0x74fb3e29e6d10fa9();
	}
}

void func_248(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 16))
	{
		return;
	}
	func_269(65536);
	Global_1572887->f_266.f_86 = 3;
	Global_1572887->f_266.f_68 = { Var0 };
	Global_1572887->f_266.f_75 = { Var0.f_7 };
}

void func_249(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 17))
	{
		return;
	}
	if (Global_1572887->f_266.f_1 != -1 && Global_1572887->f_266.f_1 != Var0.f_14)
	{
		return;
	}
	Var17 = { func_368(player_id()) };
	bVar24 = network_are_handles_the_same(&Var0, &Var17);
	if (func_252(Var0.f_16, 8) && bVar24)
	{
		return;
	}
	func_403(&Var0);
	Global_1572887->f_266.f_86 = Var0.f_15;
	Global_1572887->f_266.f_87 = Global_1572887->f_266.f_86;
	Global_1572887->f_266.f_68 = { Var0 };
	Global_1572887->f_266.f_75 = { Var0.f_7 };
	Global_1572887->f_266.f_90 = Var0.f_16;
	if (func_267(128))
	{
		Var25 = { Var0 };
		func_399(&Var25);
		func_400(&Var25);
		if (func_252(Var0.f_16, 8))
		{
			func_199(3);
		}
		else
		{
			func_199(2);
		}
	}
	if (Global_1572887->f_266.f_86 > 2 && !func_250())
	{
		Global_1572887->f_266.f_86 = 0;
		Global_1572887->f_266.f_87 = 0;
	}
	else if (Global_1572887->f_266.f_86 == 2 && bVar24)
	{
		Global_1572887->f_266.f_86 = 0;
		Global_1572887->f_266.f_87 = 0;
	}
}

bool func_250()
{
	if (Global_1572887->f_266.f_64 != 0)
	{
		return true;
	}
	if (Global_1572887->f_266.f_66 != -1)
	{
		return true;
	}
	if (Global_1572887->f_266.f_86 > 2)
	{
		Var0 = { func_368(player_id()) };
		bVar7 = network_are_handles_the_same(&(Global_1572887->f_266.f_75), &Var0);
		Var8 = { func_368(_0x4be6c13a45cca8ec(Global_1296859->f_15)) };
		bVar15 = network_are_handles_the_same(&(Global_1572887->f_266.f_75), &Var8);
		bVar16 = (bVar7 || bVar15);
		if (Global_1572887->f_266.f_86 == 3)
		{
			return bVar16;
		}
		if (Global_1572887->f_266.f_86 == 4)
		{
			return bVar16;
		}
		if (Global_1572887->f_266.f_86 == 5)
		{
			return bVar16;
		}
		if (Global_1572887->f_266.f_86 == 6)
		{
			return bVar16;
		}
		if (Global_1572887->f_266.f_86 == 7)
		{
			return bVar16;
		}
		if (Global_1572887->f_266.f_86 == 8)
		{
			return bVar16;
		}
		if (Global_1572887->f_266.f_86 == 9)
		{
			return bVar16;
		}
		if (Global_1572887->f_266.f_86 == 10)
		{
			return bVar16;
		}
		if (Global_1572887->f_266.f_86 == 11)
		{
			return false;
		}
		if (Global_1572887->f_266.f_86 == 12)
		{
			return bVar16;
		}
		if (Global_1572887->f_266.f_86 == 13)
		{
			return bVar16;
		}
		if (Global_1572887->f_266.f_86 == 14)
		{
			return bVar16;
		}
		if (Global_1572887->f_266.f_86 == 15)
		{
			return bVar16;
		}
		if (Global_1572887->f_266.f_86 == 16)
		{
			return bVar16;
		}
		if (Global_1572887->f_266.f_86 == 17)
		{
			return false;
		}
		if (Global_1572887->f_266.f_86 == 18)
		{
			return bVar16;
		}
		if (Global_1572887->f_266.f_86 == 19)
		{
			return bVar16;
		}
		if (Global_1572887->f_266.f_86 == 20)
		{
			return bVar16;
		}
		if (Global_1572887->f_266.f_86 == 21)
		{
			return bVar16;
		}
		if (Global_1572887->f_266.f_86 == 22)
		{
			return bVar16;
		}
		if (Global_1572887->f_266.f_86 == 23)
		{
			return bVar16;
		}
		if (Global_1572887->f_266.f_86 == 24)
		{
			return bVar16;
		}
	}
	if (Global_1572887->f_266.f_88 != 0)
	{
		Var17 = { func_368(player_id()) };
		bVar24 = network_are_handles_the_same(&(Global_1572887->f_266.f_75), &Var17);
		bVar25 = false;
		if (Global_1572887->f_266 > 0)
		{
			bVar25 = true;
		}
		bVar26 = !func_252(Global_1572887->f_266.f_89, 524288);
		bVar27 = !func_252(Global_1572887->f_266.f_89, 2);
		bVar28 = func_252(Global_1572887->f_266.f_89, 2);
		bVar29 = func_252(Global_1572887->f_266.f_89, 1);
		bVar30 = is_durango_version();
		bVar31 = (bVar24 && (bVar25 || bVar29));
		bVar32 = (bVar31 && !bVar30);
		bVar33 = ((bVar26 && bVar27) && !bVar24);
		if (func_252(Global_1572887->f_266.f_88, 1))
		{
			return bVar31;
		}
		if (func_252(Global_1572887->f_266.f_88, 2))
		{
			return bVar31;
		}
		if (func_252(Global_1572887->f_266.f_88, 4))
		{
			return bVar31;
		}
		if (func_252(Global_1572887->f_266.f_88, 32))
		{
			return (bVar31 || bVar33);
		}
		if (func_252(Global_1572887->f_266.f_88, 64))
		{
			return bVar31;
		}
		if (func_252(Global_1572887->f_266.f_88, 8))
		{
			return bVar31;
		}
		if (func_252(Global_1572887->f_266.f_88, 16))
		{
			return bVar31;
		}
		if (func_252(Global_1572887->f_266.f_88, 128))
		{
			return bVar31;
		}
		if (func_252(Global_1572887->f_266.f_88, 512))
		{
			return bVar31;
		}
		if (func_252(Global_1572887->f_266.f_88, 8388608))
		{
			return bVar31;
		}
		if (func_252(Global_1572887->f_266.f_88, 1024))
		{
			return bVar32;
		}
		if (func_252(Global_1572887->f_266.f_88, 2048))
		{
			return bVar32;
		}
		if (func_252(Global_1572887->f_266.f_88, 4096))
		{
			return (bVar33 || bVar33);
		}
		if (func_252(Global_1572887->f_266.f_88, 8192))
		{
			return bVar31;
		}
		if (func_252(Global_1572887->f_266.f_88, 16384))
		{
			return bVar31;
		}
		if (func_252(Global_1572887->f_266.f_88, 32768))
		{
			return (bVar31 || bVar33);
		}
		if (func_252(Global_1572887->f_266.f_88, 65536))
		{
			return bVar31;
		}
		if (func_252(Global_1572887->f_266.f_88, 262144))
		{
			return bVar31;
		}
		if (func_252(Global_1572887->f_266.f_88, 524288))
		{
			return bVar31;
		}
		if (func_252(Global_1572887->f_266.f_88, 2097152))
		{
			return bVar31;
		}
		if (func_252(Global_1572887->f_266.f_88, 4194304))
		{
			return false;
		}
		if (func_252(Global_1572887->f_266.f_88, 16777216))
		{
			return false;
		}
		if (func_252(Global_1572887->f_266.f_88, 256))
		{
			return false;
		}
		if (func_252(Global_1572887->f_266.f_88, 1048576))
		{
			return (bVar31 && bVar28);
		}
		if (func_252(Global_1572887->f_266.f_88, 131072))
		{
			return false;
		}
	}
	return false;
}

void func_251(int iParam0)
{
	Global_1572887->f_266.f_84 = iParam0;
}

bool func_252(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_253(int iParam0)
{
	func_404(&(Global_1572887->f_266.f_63), iParam0);
}

void func_254()
{
	Global_1940144->f_105 = -1;
	Global_1940144->f_105.f_1 = 0;
}

bool func_255(int iParam0)
{
	return func_252(Global_1572887->f_266.f_64, iParam0);
}

void func_256(var uParam0)
{
}

char* func_257()
{
	Var0 = { func_368(player_id()) };
	bVar7 = false;
	bVar8 = false;
	if (((Global_1572887->f_266.f_2 == 3 || Global_1572887->f_266.f_2 == 1) || func_252(Global_1572887->f_266.f_89, 2)) || func_252(Global_1572887->f_266.f_90, 8))
	{
		bVar7 = true;
	}
	if (network_is_handle_valid(&(Global_1572887->f_266.f_68)) && network_is_handle_valid(&Var0))
	{
		bVar8 = network_are_handles_the_same(&(Global_1572887->f_266.f_68), &Var0);
	}
	if (func_255(1))
	{
		return "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_TARGET";
	}
	if (func_255(2))
	{
		return "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINER";
	}
	if (func_255(4))
	{
		return "NT_INV_INCOMPATIBLE_LOBBY_LOAD_FAILURE";
	}
	if (func_255(4096))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_255(8192))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_255(1024))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_255(16384))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_255(65536))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_255(2048))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_255(32768))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_255(64))
	{
		return "NT_INV_INCOMPATIBLE_NOT_IN_SESSION";
	}
	if (func_255(8))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_255(16))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_255(32))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_255(128))
	{
		return func_405(bVar7, "NT_INV_IN_SESSION", "NT_INV_INCOMPATIBLE_ALREADY_IN_SESSION");
	}
	if (func_255(256))
	{
		return func_405(bVar7, "NT_INV_LEAVE_WARNING_JIP", "NT_INV_LEAVE_WARNING");
	}
	if (func_255(512))
	{
		return func_405(bVar7, "NT_INV_LEAVE_WARNING_POSSE_JIP", "NT_INV_LEAVE_WARNING_POSSE");
	}
	if (func_255(131072))
	{
		return "MG_NO_MONEY_INV";
	}
	if (func_255(262144))
	{
		return "MG_ALERT_GANGLF";
	}
	if (func_255(524288))
	{
		return "MG_ALERT_GANGBR";
	}
	if (func_255(1048576))
	{
		return "MG_ALERT_BANNED2";
	}
	if (func_255(2097152))
	{
		return "MG_ALERT_CAPPED";
	}
	if (func_255(4194304))
	{
		return "MG_ALERT_CAPPED";
	}
	if (func_255(8388608))
	{
		return "MG_ALERT_CAPPED";
	}
	if (func_255(16777216))
	{
		return "MG_ALERT_PRIV_CAP";
	}
	if (func_255(33554432))
	{
		return "MG_ALERT_INV_MAINT";
	}
	if (func_255(67108864))
	{
		return "MG_ALERT_WANTED";
	}
	if (func_255(134217728))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_255(268435456))
	{
		return "NT_INV_INCOMPATIBLE_PLAYER_RE_ROLL";
	}
	if (func_255(536870912))
	{
		return "JAIL_ALT_BODY";
	}
	if (func_255(1073741824))
	{
		return "MG_ALERT_GANGLF";
	}
	if (func_252(Global_1572887->f_266.f_88, 1))
	{
		return "NT_INV_INCOMPATIBLE_MULTIPLAYER_LOCKED";
	}
	if (func_252(Global_1572887->f_266.f_88, 1024))
	{
		return "NT_INV_INCOMPATIBLE_MULTIPLAYER_PRIVILEGE";
	}
	if (func_252(Global_1572887->f_266.f_88, 2048))
	{
		return "NT_INV_INCOMPATIBLE_USER_CONTENT_PRIVILEGE";
	}
	if (func_252(Global_1572887->f_266.f_88, 4096))
	{
		return "NT_INV_INCOMPATIBLE_COMMUNICATION_PRIVILEGE";
	}
	if (func_252(Global_1572887->f_266.f_88, 8192))
	{
		return "NT_INV_INCOMPATIBLE_INACTIVE_PRIVILEGE";
	}
	if (func_252(Global_1572887->f_266.f_88, 16384))
	{
		return "NT_INV_INCOMPATIBLE_USER_CONTENT_PRIVILEGE_REMOTE";
	}
	if (func_252(Global_1572887->f_266.f_88, 512))
	{
		return "NT_INV_INCOMPATIBLE";
	}
	if (func_252(Global_1572887->f_266.f_88, 8388608))
	{
		return "NT_INV_INCOMPATIBLE_AIM";
	}
	if (func_252(Global_1572887->f_266.f_88, 2))
	{
		return "NT_INV_INCOMPATIBLE_LOCAL_NOT_IN_MULTIPLAYER";
	}
	if (func_252(Global_1572887->f_266.f_88, 4))
	{
		return "NT_INV_INCOMPATIBLE_NOT_IN_SESSION";
	}
	if (func_252(Global_1572887->f_266.f_88, 8))
	{
		return "NT_INV_POLICIES_NEED_ACCEPTING";
	}
	if (func_252(Global_1572887->f_266.f_88, 16))
	{
		return "NT_INV_POLICIES_DOWNLOAD_FAILED";
	}
	if (func_252(Global_1572887->f_266.f_88, 32))
	{
		return func_405(bVar8, "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_TARGET", "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINER");
	}
	if (func_252(Global_1572887->f_266.f_88, 64))
	{
		return func_405(bVar7, "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINING_PLAYER", "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINER");
	}
	if (func_252(Global_1572887->f_266.f_88, 128))
	{
		return "NT_INV_INCOMPATIBLE_JOIN_TO_LOCAL";
	}
	if (func_252(Global_1572887->f_266.f_88, 32768))
	{
		return func_405(bVar8, "NT_INV_INCOMPATIBLE_REP_TARGET", "NT_INV_INCOMPATIBLE_REP_JOINER");
	}
	if (func_252(Global_1572887->f_266.f_88, 65536))
	{
		return func_405(bVar7, "NT_INV_IN_SESSION", "NT_INV_INCOMPATIBLE_ALREADY_IN_SESSION");
	}
	if (func_252(Global_1572887->f_266.f_88, 262144))
	{
		return "NT_INV_INCOMPATIBLE_NOT_FRIENDS";
	}
	if (func_252(Global_1572887->f_266.f_88, 524288))
	{
		return "NT_INV_INCOMPATIBLE_PRIVATE_SESSION";
	}
	if (func_252(Global_1572887->f_266.f_88, 2097152))
	{
		return "NT_INV_INCOMPATIBLE_IN_PUBLIC_POKER";
	}
	if (func_252(Global_1572887->f_266.f_88, 4194304))
	{
	}
	if (func_252(Global_1572887->f_266.f_88, 16777216))
	{
	}
	if (func_252(Global_1572887->f_266.f_88, 256))
	{
	}
	if (func_252(Global_1572887->f_266.f_88, 1048576))
	{
		return "NT_INV_INCOMPATIBLE_BLOCKED_BY_JOIN_TARGET";
	}
	if (func_252(Global_1572887->f_266.f_88, 131072))
	{
	}
	if (Global_1572887->f_266.f_86 == 3)
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT_RESULT";
	}
	if (Global_1572887->f_266.f_86 == 4)
	{
		return func_405(bVar7, "NT_INV_IN_SESSION", "NT_INV_INCOMPATIBLE_ALREADY_IN_SESSION");
	}
	if (Global_1572887->f_266.f_86 == 5)
	{
		return "NT_INV_INCOMPATIBLE_INVITES_DISABLED";
	}
	if (Global_1572887->f_266.f_86 == 6)
	{
		return "NT_INV_INCOMPATIBLE_INVITES_DISABLED";
	}
	if (Global_1572887->f_266.f_86 == 7)
	{
		return "NT_INV_INCOMPATIBLE_DISCRIMINATOR";
	}
	if (Global_1572887->f_266.f_86 == 8)
	{
		return "NT_INV_INCOMPATIBLE_INSTANCED";
	}
	if (Global_1572887->f_266.f_86 == 9)
	{
		return "NT_INV_INCOMPATIBLE_VALIDATION_INVITEE";
	}
	if (Global_1572887->f_266.f_86 == 10)
	{
		return "NT_INV_INCOMPATIBLE_PRIVATE_SESSION";
	}
	if (Global_1572887->f_266.f_86 == 11)
	{
	}
	if (Global_1572887->f_266.f_86 == 12)
	{
		return "NT_INV_INCOMPATIBLE_INVITES_BLOCKED";
	}
	if (Global_1572887->f_266.f_86 == 13)
	{
		return "NT_INV_INCOMPATIBLE_JOIN_BLOCKED";
	}
	if (Global_1572887->f_266.f_86 == 14)
	{
		return "NT_INV_INCOMPATIBLE_HOST_INVITES_ONLY";
	}
	if (Global_1572887->f_266.f_86 == 15)
	{
		return "NT_INV_FAILED_SESSION_FULL";
	}
	if (Global_1572887->f_266.f_86 == 16)
	{
		return "NT_INV_FAILED_INVITER_CLEANED_UP";
	}
	if (Global_1572887->f_266.f_86 == 17)
	{
	}
	if (Global_1572887->f_266.f_86 == 18)
	{
		return "NT_INV_FAILED_NO_LONGER_IN_GANG";
	}
	if (Global_1572887->f_266.f_86 == 19)
	{
		return "NT_INV_FAILED_ADD_TO_GANG";
	}
	if (Global_1572887->f_266.f_86 == 20)
	{
		return "NT_INV_FAILED_GANG_CHANGED";
	}
	if (Global_1572887->f_266.f_86 == 21)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887->f_266.f_86 == 22)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887->f_266.f_86 == 23)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887->f_266.f_86 == 24)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887->f_266.f_66 == 0)
	{
		return "NT_INV_INCOMPATIBLE_REASON_OTHER";
	}
	if (Global_1572887->f_266.f_66 == 1)
	{
		return "NT_INV_INCOMPATIBLE_REASON_SYSTEM_UPDATE";
	}
	if (Global_1572887->f_266.f_66 == 2)
	{
		return "NT_INV_INCOMPATIBLE_REASON_GAME_UPDATE";
	}
	if (Global_1572887->f_266.f_66 == 3)
	{
		return "NT_INV_INCOMPATIBLE_REASON_SIGNED_OUT";
	}
	if (Global_1572887->f_266.f_66 == 4)
	{
		return "NT_INV_INCOMPATIBLE_AGE";
	}
	if (Global_1572887->f_266.f_66 == 5)
	{
		return "NT_INV_INCOMPATIBLE_REASON_CONNECTION";
	}
	return "NT_INV_FAILED_GENERIC";
}

int func_258()
{
	if (func_255(4096))
	{
		return 27100000;
	}
	if (func_255(8192))
	{
		return 27110000;
	}
	if (func_255(1024))
	{
		return 27120000;
	}
	if (func_255(16384))
	{
		return 27130000;
	}
	if (func_255(65536))
	{
		return 27140000;
	}
	if (func_255(2048))
	{
		return 27150000;
	}
	if (func_255(32768))
	{
		return 27160000;
	}
	if (func_255(8))
	{
		return 27170000;
	}
	if (func_255(16))
	{
		return 27180000;
	}
	if (func_255(32))
	{
		return 27190000;
	}
	if (func_255(131072))
	{
		return 27300000;
	}
	if (func_255(262144))
	{
		return 27310000;
	}
	if (func_255(524288))
	{
		return 27320000;
	}
	if (func_255(1048576))
	{
		return 27330000;
	}
	if (func_255(2097152))
	{
		return 27340000;
	}
	if (func_255(4194304))
	{
		return 27350000;
	}
	if (func_255(8388608))
	{
		return 27360000;
	}
	if (func_255(16777216))
	{
		return 27370000;
	}
	if (func_255(33554432))
	{
		return 27380000;
	}
	if (func_255(67108864))
	{
		return 27390000;
	}
	if (func_255(134217728))
	{
		return 27400000;
	}
	if (func_255(1073741824))
	{
		return 27410000;
	}
	return -1;
}

int func_259(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_260(bool bParam0)
{
	if (Global_1071686->f_28773.f_1 != get_id_of_this_thread() && !bParam0)
	{
		return;
	}
	if (Global_1071686->f_28773.f_1 == 0)
	{
		return;
	}
	func_404(&(Global_1071686->f_28773.f_2), 2);
}

int func_261()
{
	return Global_1051252->f_12;
}

void func_262(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam0)
	{
		func_338(1);
		if (bParam1)
		{
			func_338(4);
		}
		else
		{
			func_304(4);
		}
		if (bParam3)
		{
			func_338(8);
		}
		else
		{
			func_304(8);
		}
		if (bParam4)
		{
			func_338(16);
		}
		else
		{
			func_304(16);
		}
	}
	else
	{
		func_338(2);
		if (bParam1)
		{
			func_338(4);
		}
		else
		{
			func_304(4);
		}
		if (bParam3)
		{
			func_338(8);
		}
		else
		{
			func_304(8);
		}
		if (bParam2)
		{
			func_338(128);
		}
		else
		{
			func_304(128);
		}
	}
}

bool func_263(int iParam0)
{
	if (iParam0 == 255)
	{
		return func_406();
	}
	return func_379(64, iParam0);
}

char* func_264(char* sParam0, int iParam1)
{
	sParam0 = _format_player_name_string(sParam0);
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_407(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

var func_265(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

bool func_266(struct<17> Param0, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, int iParam22)
{
	return func_252(Param0.f_16, iParam22);
}

bool func_267(int iParam0)
{
	return func_252(Global_1572887->f_266.f_63, iParam0);
}

bool func_268()
{
	return (Global_1296851->f_2.f_1 == 2 || Global_1296851->f_2.f_1 == 1);
}

void func_269(int iParam0)
{
	func_404(&(Global_1572887->f_266.f_64), iParam0);
}

bool func_270()
{
	return Global_1900736->f_67;
}

bool func_271()
{
	return Global_263042[&Global_1296859] > 2;
}

int func_272()
{
	return Global_1572887->f_266.f_2;
}

bool func_273(bool bParam0)
{
	Var22.f_1 = -1;
	Var22.f_2 = -1;
	Var22.f_3 = -1;
	Var22.f_3.f_1 = -1;
	if (bParam0)
	{
		Var22 = { func_408() };
		iVar33 = func_409();
		if (network_is_player_active(iVar33))
		{
			iVar34 = iVar33;
			if (func_410(iVar34))
			{
				func_404(&(Var22.f_10), 4);
			}
			else
			{
				func_411(&(Var22.f_10), 4);
			}
			Var22 = func_412(iVar34);
			Var22.f_1 = func_413(iVar34);
			Var22.f_2 = func_414(iVar34);
			Var22.f_3 = { func_415(iVar34) };
		}
	}
	else
	{
		Var0 = { func_294() };
		if (_0xd1ffb246f4e088ac(Var0.f_15))
		{
			_0xc0cffda87c2c163d(_0x27b1ae4d8c652f08(Var0.f_15), &Var22, 11);
		}
	}
	iVar35 = func_388(Var22.f_3);
	Global_1138962->f_143 = iVar35;
	if (Var22 == 3)
	{
		func_253(8192);
		iVar36 = func_416(iVar35);
		if (!iVar36 == 0)
		{
			if (iVar36 == 5)
			{
				func_269(262144);
			}
			else if (iVar36 == 8)
			{
				func_269(1048576);
			}
			else if (iVar36 == 9)
			{
				func_269(2097152);
			}
			else if (iVar36 == 10)
			{
				func_269(4194304);
			}
			else if (iVar36 == 11)
			{
				func_269(8388608);
			}
			else if (iVar36 == 12)
			{
				func_269(16777216);
			}
			else if (iVar36 == 14)
			{
				func_269(33554432);
			}
			else if (iVar36 == 15)
			{
				func_269(67108864);
			}
			else if (iVar36 == 6)
			{
				func_269(131072);
			}
			else if (iVar36 == 7)
			{
				func_269(524288);
			}
			return false;
		}
	}
	return true;
}

bool func_274(bool bParam0)
{
	iVar0 = func_259(bParam0, Global_1901947->f_1.f_22, Global_1901947->f_1.f_21);
	return (get_game_timer() - Global_1572887->f_266.f_62) > iVar0;
}

bool func_275()
{
	if (&Global_1051139)
	{
		return false;
	}
	if (func_417(&iVar0))
	{
		func_418(3, 0, 1, 0, -1, 1, iVar0);
		return false;
	}
	return true;
}

void func_276(int iParam0)
{
	_0xc08aff658b2e51da(&iVar0);
	if (iVar0 != 0)
	{
		func_404(&(Global_1194053->f_3), 32);
		func_404(&(Global_1194053->f_4), 12);
		Global_1194053->f_498 = iVar0;
		if (network_is_player_active(player_id()) && _0x424b17a7dc5c90bc(player_id()))
		{
			func_404(&(Global_1194053->f_4), 2);
		}
		_0xc08bff658b2e51da(0);
		Global_1194053->f_5[5] = 0;
		func_404(Global_1194053->f_5[5], 1);
	}
	Global_1194053->f_5[3] = 0;
	func_404(Global_1194053->f_5[3], 1);
	iVar1 = _0x901e0dc25080c8b9(player_id());
	if (!_0xd6f6acf4392187fb(iVar1))
	{
		func_404(Global_1194053->f_5[3], 6);
		return;
	}
	if (!_0x0f99f6436528a089(iVar1))
	{
		func_404(Global_1194053->f_5[3], 6);
		return;
	}
	_0x0a04a07bc3074edb(iParam0);
}

void func_277()
{
	Global_1572887->f_266.f_92 = 0;
}

void func_278()
{
	Global_1071686->f_28662.f_108 = get_game_timer();
}

void func_279()
{
	if (!Global_1102219->f_16)
	{
		return;
	}
	Global_1071686->f_28662.f_5 = 1;
	_0x531a78d6bf27014b("rdro_gamemode_transition_sounds");
	_0x531a78d6bf27014b("rdro_gamemode_generic_sounds");
}

bool func_280()
{
	return Global_1071686->f_28662.f_65.f_42 != 0;
}

bool func_281()
{
	if (get_interior_from_entity(player_ped_id()) == get_interior_at_coords(func_420(func_419())))
	{
		return true;
	}
	return false;
}

void func_282(int iParam0)
{
	func_411(&(Global_1572887->f_266.f_63), iParam0);
}

void func_283(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	if (bParam0)
	{
		Global_1071686->f_28662.f_65.f_28 = 1;
		Global_1071686->f_28662.f_65.f_29 = iParam3;
		Global_1071686->f_28662.f_65.f_26 = iParam6;
		Global_1071686->f_28662.f_65.f_27 = iParam8;
		if (bParam7)
		{
			set_bit(&(Global_1071686->f_28662.f_65.f_8), 18);
		}
	}
	else
	{
		Global_1071686->f_28662.f_65.f_30 = 1;
		Global_1071686->f_28662.f_65.f_33 = !bParam1;
		Global_1071686->f_28662.f_65.f_31 = iParam2;
		Global_1071686->f_28662.f_65.f_32 = iParam4;
		Global_1071686->f_28662.f_65.f_35 = iParam5;
		if (is_bit_set(Global_1071686->f_28662.f_65.f_8, 18))
		{
			clear_bit(&(Global_1071686->f_28662.f_65.f_8), 18);
		}
	}
}

void func_284(bool bParam0)
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

bool func_285()
{
	return func_342(1, 255);
}

int func_286(int iParam0)
{
	if (func_369(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_287(int iParam0, int iParam1)
{
	if (!func_421(iParam0, iParam1))
	{
		set_bit(Global_1071686->f_22538.f_385[iParam0], iParam1);
		Global_1071686->f_22538.f_385[iParam0]->f_1[iParam1] = get_id_of_this_thread();
		func_422();
	}
}

bool func_288()
{
	if (Global_1071686->f_28662.f_65.f_42 >= 9)
	{
		return true;
	}
	return false;
}

bool func_289()
{
	iVar0 = get_game_timer();
	iVar1 = (iVar0 - Global_1071686->f_28662.f_108);
	if (iVar1 < Global_1901947->f_1.f_39)
	{
		return false;
	}
	return true;
}

void func_290(bool bParam0)
{
	if (func_423())
	{
		Global_1958008 = 1;
	}
	if (func_424(-92416669))
	{
	}
	if (bParam0 && (Global_1940258->f_38 == -1016714371 || Global_1940258->f_38 == 332793555))
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		Global_1940258->f_38 = -1569615261;
	}
}

int func_291()
{
	return Global_1915715->f_20241;
}

void func_292(int iParam0, bool bParam1)
{
	if (!func_425(iParam0))
	{
		return;
	}
	if ((bParam1 && func_426(iParam0, 512)) || (!bParam1 && !func_426(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_427(iParam0, 512);
	}
	else
	{
		func_428(iParam0, 512);
	}
	if (func_308(iParam0))
	{
		_0x9b4e793b1cb6550a();
	}
}

void func_293()
{
	iVar0 = player_ped_id();
	iVar1 = get_mount(iVar0);
	if (does_entity_exist(iVar1) && !is_entity_dead(iVar1))
	{
		task_dismount_animal(iVar0, 0, 0, 0, 0, 0);
	}
}

struct<22> func_294()
{
	return Global_1572887->f_266.f_28;
}

void func_295(var uParam0)
{
	Global_1572887->f_266.f_50 = { *uParam0 };
}

void func_296()
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (_does_thread_exist(Global_1196898->f_78[iVar0]->f_5))
		{
			_0x7de4643157ad646c(Global_1196898->f_78[iVar0]->f_5);
		}
		if (_does_thread_exist(Global_1196898->f_78[iVar0]->f_4))
		{
			_0x7de4643157ad646c(Global_1196898->f_78[iVar0]->f_4);
		}
		iVar0++;
	}
}

bool func_297()
{
	return (func_429() != 0 || func_430(1));
}

int func_298(int iParam0)
{
	if (func_431())
	{
		return 0;
	}
	if (!func_297())
	{
		return 0;
	}
	if (func_432())
	{
		func_433(2);
	}
	else
	{
		func_433(1);
	}
	func_434(iParam0);
	return 1;
}

bool func_299()
{
	if (!_0x2a8112a974de1ef6())
	{
		return false;
	}
	if (!network_have_online_privileges())
	{
		return false;
	}
	if (!network_can_access_multiplayer(&uVar0))
	{
		return false;
	}
	return true;
}

void func_300()
{
	func_67(64);
	func_68();
	func_69(-1050153785, -2030542394, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	func_24(3);
	do_screen_fade_out(0);
}

bool func_301()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_4;
}

void func_302()
{
	switch (Global_1572887->f_266.f_2)
	{
		case 0:
		case 2:
		case 4:
			func_435(2);
			break;
		case 1:
		case 3:
		case 5:
			func_435(3);
			break;
	}
}

int func_303()
{
	if (func_274(1))
	{
		func_269(1024);
		return 2;
	}
	if (!func_12())
	{
		func_269(2);
		func_253(2);
		func_75(0);
		return 2;
	}
	if (Global_1071686->f_28778)
	{
		func_269(268435456);
		func_253(2);
		return 2;
	}
	if (func_267(16384))
	{
		return 2;
	}
	iVar0 = func_436();
	return iVar0;
}

void func_304(int iParam0)
{
	if (func_337(iParam0))
	{
		func_437(&(Global_1071686->f_28662.f_22.f_1), iParam0);
	}
}

void func_305(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_438(iParam0);
	if (!func_439(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_440(128) && !func_441(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_442() == 4)
	{
		func_345(18);
	}
	func_443(1024);
}

bool func_306(int iParam0)
{
	return !func_232(iParam0);
}

void func_307(bool bParam0)
{
	if (!bParam0)
	{
		func_345(18);
	}
	else
	{
		func_286(18);
	}
}

bool func_308(int iParam0)
{
	if (func_444())
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

void func_309(bool bParam0, int iParam1, bool bParam2)
{
	if (func_301())
	{
		if (func_445(255))
		{
			if (!func_342(39, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_446(Global_1893587->f_2) && func_447(Global_1893587->f_2))
		{
			func_448(Global_1893587->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1893587->f_7 = iParam1;
				func_449(16);
			}
		}
		else if (func_446(Global_1893587->f_2) && !func_450(Global_1893587->f_2, 2))
		{
			bParam0 = true;
		}
	}
	if (bParam0)
	{
		if (!is_screen_faded_out())
		{
		}
		Global_1893587->f_7 = 0;
		func_451(16);
		func_452(bParam2);
		if (bVar0)
		{
			func_451(1);
		}
	}
}

bool func_310(int iParam0, int iParam1)
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

void func_311()
{
	if (Global_1071686->f_28773.f_1 != 0)
	{
		return;
	}
	func_404(&(Global_1071686->f_28773.f_2), 1);
	Global_1071686->f_28773.f_1 = get_id_of_this_thread();
}

bool func_312()
{
	return Global_1071686->f_28773 >= 3;
}

void func_313()
{
	if (_get_global_block_can_be_accessed(1) && func_453(524288))
	{
		return;
	}
	_0xab0d553fe20a6e25(0f);
	set_scenario_ped_density_multiplier_this_frame(0f);
	_0xf45e46deecf7df6e(0, 0, 0, -1, -1);
	_0xc0258742b034dfaf(0f);
	set_vehicle_density_multiplier_this_frame(0f);
	set_random_vehicle_density_multiplier_this_frame(0f);
	set_parked_vehicle_density_multiplier_this_frame(0f);
	set_disable_random_trains_this_frame(true);
}

int func_314(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_454() && !bParam3)
	{
		return 0;
	}
	if (!bParam2)
	{
		func_73(0);
	}
	func_455();
	if (func_456(255, 0))
	{
		if (_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())) != player_id())
		{
			if (!bParam2 && bParam1)
			{
				func_276(1);
			}
		}
	}
	if (network_is_session_active())
	{
		_0x0ae241a4a9adeeec(0);
	}
	func_457();
	func_458(21);
	Global_1572887->f_106.f_91.f_1 = Global_1572887->f_106.f_9;
	Global_1572887->f_106.f_91.f_2 = iParam0;
	Global_1572887->f_106.f_91.f_4 = (get_game_timer() - Global_1572887->f_106.f_76);
	func_459();
	return 1;
}

void func_315()
{
	func_411(&(Global_1572887->f_7), 1);
	func_404(&(Global_1572887->f_7), 1073741824);
	func_460();
}

void func_316()
{
	iVar0 = get_hash_key("net_ugc_end_flow");
	_0x7423f7835770f619(iVar0);
	iVar0 = get_hash_key("mc_transition_results");
	_0x7423f7835770f619(iVar0);
	iVar0 = get_hash_key("mc_transition_cutscene");
	_0x7423f7835770f619(iVar0);
	iVar0 = get_hash_key("net_mc_vs_mission_intro");
	_0x7423f7835770f619(iVar0);
	iVar0 = get_hash_key("net_mission_intro_story_gvo");
	_0x7423f7835770f619(iVar0);
}

void func_317()
{
	_0xc505036a35afd01b(false);
	if (is_screen_faded_out() || is_screen_fading_out())
	{
		do_screen_fade_in(0);
	}
	func_253(4);
	func_200(23);
}

struct<9> func_318()
{
	return Global_1572887->f_266.f_3;
}

struct<16> func_319()
{
	return Global_1572887->f_266.f_12;
}

void func_320()
{
	if (!func_332())
	{
		func_461(Global_1296859->f_17);
	}
}

void func_321(int iParam0)
{
	Global_1572887->f_266.f_61 = iParam0;
}

bool func_322()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_3;
}

bool func_323()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_5;
}

int func_324()
{
	return &Global_262155;
}

bool func_325()
{
	return Global_1071686->f_28662.f_22.f_3 != 0;
}

void func_326(bool bParam0)
{
	if (!bParam0)
	{
		func_345(19);
	}
	else
	{
		func_286(19);
	}
}

int func_327()
{
	return Global_1572887->f_266.f_67;
}

bool func_328()
{
	return func_462(1024);
}

int func_329()
{
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0 = { func_408() };
	bVar11 = _0xf0c0c94b404206fa() == 4;
	iVar12 = func_409();
	if (network_is_player_active(iVar12))
	{
		iVar13 = iVar12;
		Var0.f_10 = func_463(iVar13);
		Var0 = func_412(iVar13);
		Var0.f_1 = func_413(iVar13);
		Var0.f_2 = func_414(iVar13);
		Var0.f_3 = { func_415(iVar13) };
		Var0.f_9 = func_464(iVar13);
	}
	if (!func_252(Var0.f_10, 1))
	{
		return 0;
	}
	if ((Var0 == 0 && Var0.f_1 == -1) && !func_465(Var0.f_3))
	{
		return 2;
	}
	if (!func_252(Var0.f_10, 4) && !bVar11)
	{
		return 2;
	}
	switch (Var0)
	{
		case 3:
			if (func_272() == 2)
			{
				if (!func_466())
				{
					return 0;
				}
			}
			if (!func_273(1))
			{
				func_253(4);
				func_253(4096);
				return 2;
			}
			if (!func_467(Var0.f_3))
			{
				return 0;
			}
			break;
		case 2:
			if (func_236(iVar12, 4096))
			{
				return 2;
			}
			break;
	}
	switch (func_272())
	{
		case 0:
		case 2:
			func_468(4);
			break;
		case 1:
		case 3:
		case 5:
			func_468(9);
			break;
		case 4:
			func_468(8);
			break;
	}
	func_469(Var0, Var0.f_1, Var0.f_3, Var0.f_2, 0, Var0.f_9);
	return 1;
}

void func_330()
{
	Global_1572887->f_266.f_92 = 1;
}

void func_331(int iParam0)
{
	func_404(&(Global_1572887->f_106.f_15), iParam0);
}

bool func_332()
{
	if (!func_267(256))
	{
		return false;
	}
	set_entity_coords(player_ped_id(), get_entity_coords(player_ped_id(), false, false), false, false, true, true);
	iVar0 = get_random_int_in_range(1, 5);
	iVar1 = func_470(iVar0);
	iVar2 = func_471(iVar1);
	func_472(iVar2, 0);
	return true;
}

void func_333(bool bParam0)
{
	if (!bParam0)
	{
		func_345(25);
	}
	else
	{
		func_286(25);
	}
}

void func_334(bool bParam0)
{
	if (!bParam0)
	{
		func_345(20);
	}
	else
	{
		func_286(20);
	}
}

void func_335(int iParam0, bool bParam1)
{
	if (func_473(_0x901e0dc25080c8b9(iParam0)))
	{
		bVar0 = func_474(iParam0);
	}
	else
	{
		bVar0 = _0xc0474c8bcf6787ad(_0x901e0dc25080c8b9(iParam0));
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			func_347(1);
		}
		else
		{
			func_475();
		}
	}
}

bool func_336()
{
	iVar0 = get_player_ped(Global_1572887->f_266.f_61);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	if (func_232(255))
	{
		func_307(1);
		return false;
	}
	vVar1 = { get_entity_coords(iVar0, false, false) };
	vVar1.f_2 = _get_heightmap_bottom_z_for_position(vVar1.x, vVar1.y);
	vVar4 = { vVar1 };
	vVar4.f_2 = (vVar4.z + 7f);
	if (get_ground_z_for_3d_coord(vVar4, &uVar7, false))
	{
		vVar1.f_2 = uVar7;
	}
	fVar11 = (IntToFloat(get_random_int_in_range(0, 359)) * 1f);
	if (!func_476(&vVar8, &fVar11))
	{
		vVar8 = { (Global_1071686->f_23887.f_366[get_random_int_in_range(0, 15)])->f_2 };
	}
	func_307(0);
	func_326(0);
	func_477(vVar1, fVar11, vVar8, fVar11, 5f, 20f, 1, 1, 1, 1);
	return true;
}

bool func_337(int iParam0)
{
	return func_478(Global_1071686->f_28662.f_22.f_1, iParam0);
}

void func_338(int iParam0)
{
	func_479(&(Global_1071686->f_28662.f_22.f_1), iParam0);
}

bool func_339()
{
	if (func_327() != 2)
	{
		return false;
	}
	if (!func_12())
	{
		return false;
	}
	if (func_267(2048))
	{
		return true;
	}
	if (func_252(Global_1572887->f_266.f_65, 1342177410))
	{
		return false;
	}
	if (Global_1572887->f_266.f_87 != 2 && Global_1572887->f_266.f_65 == 0)
	{
		return false;
	}
	if (func_252(Global_1572887->f_266.f_88, 65536))
	{
		return false;
	}
	return true;
}

int func_340(int iParam0, int iParam1, int iParam2)
{
	if (Global_1572887->f_360.f_4 != 0)
	{
		return 0;
	}
	if (Global_1572887->f_266 >= 6 && Global_1572887->f_266 < 23)
	{
		return 0;
	}
	Global_1572887->f_360.f_4 = 2;
	Global_1572887->f_360.f_5 = (Global_1572887->f_360.f_5 || iParam1);
	Global_1572887->f_360.f_6 = iParam0;
	Global_1572887->f_360.f_25 = iParam2;
	Global_1572887->f_360.f_26 = 0;
	if (func_252(iParam1, 128))
	{
		func_411(&(Global_1572887->f_360.f_5), 2);
	}
	return 1;
}

void func_341(bool bParam0, bool bParam1)
{
	if (func_343(255) == 4)
	{
		return;
	}
	if (func_480(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_345(0);
	}
	else
	{
		if (bParam1)
		{
			func_305(0, 0, 0, 1);
		}
		func_286(0);
		func_481(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_482(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_483(Global_1102219->f_3849, 36);
	func_484(Global_1102219->f_3888, 36);
}

bool func_342(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_214(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_485())
	{
		return func_214(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_214(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

int func_343(int iParam0)
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

void func_344(bool bParam0)
{
	if (!bParam0)
	{
		func_345(23);
	}
	else
	{
		func_286(23);
	}
}

int func_345(int iParam0)
{
	if (func_486(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_346(int iParam0, int iParam1, bool bParam2)
{
	if (func_421(iParam0, iParam1) && (!bParam2 || &Global_1071686->f_22538.f_385[iParam0]->f_1[iParam1] == get_id_of_this_thread()))
	{
		clear_bit(Global_1071686->f_22538.f_385[iParam0], iParam1);
		Global_1071686->f_22538.f_385[iParam0]->f_1[iParam1] = 0;
		func_422();
	}
}

void func_347(bool bParam0)
{
	if (func_462(1024))
	{
		func_487(1, 1);
		func_488(1024);
		if (bParam0)
		{
			Var0.f_2 = 0;
			Var0.f_3 = get_hash_key("IB_ACCEPT");
			Var0.f_3.f_3 = 0;
			Global_1194053->f_121.f_1 = func_489(&Var0, "NG_PP_JOIN_FAIL_TITLE", "NG_PP_JOIN_FAIL_SUBH", 0, 0, 1);
		}
	}
}

void func_348()
{
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		Var9 = { *Global_1940311->f_242.f_14[iVar0] };
		iVar1 = _databinding_read_data_int(Var9.f_26);
		if (iVar1 != 1)
		{
		}
		else
		{
			iVar48 = _0x27b1ae4d8c652f08(_databinding_read_data_int(Var9.f_27));
			if (!_0x16efb123c4451032(iVar48, &uVar2))
			{
			}
			else if (network_is_gamer_in_my_session(&uVar2))
			{
				func_490(Var9);
			}
		}
		iVar0++;
	}
}

void func_349()
{
	func_491(0);
}

bool func_350(var uParam0)
{
	return func_239(*uParam0, 1);
}

bool func_351(var uParam0)
{
	return func_239(*uParam0, 2);
}

int func_352(int iParam0)
{
	return get_time_difference(iParam0, get_network_time_accurate());
}

int func_353(char* sParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	iVar0 = int_to_playerindex(iParam1);
	if (!network_is_player_active(iVar0))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	iVar2 = func_492(iParam1, iParam2);
	switch (iParam2)
	{
		case 0:
			network_handle_from_player(int_to_playerindex(iParam1), &uVar3);
			if (!network_is_handle_valid(&uVar3))
			{
				return 1;
			}
			StringCopy(sParam0, _0xb5c4b18b12a2af23(&uVar3, iParam2), 128);
			return 4;
		case 1:
		case 2:
			switch (iVar2)
			{
				case 0:
				default:
					return 1;
					return 2;
				case 1:
					return 3;
				case 2:
					iVar10 = func_493(iParam2);
					iVar1 = _local_player_pedshot_texture_download_request(iParam1, iVar10);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_494(iParam1, iParam2, 0);
						return 1;
					}
					func_495(iParam1, iParam2, iVar1);
					func_494(iParam1, iParam2, 3);
					break;
				case 3:
					iVar1 = func_496(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_494(iParam1, iParam2, 0);
						return 1;
					}
					iVar11 = _get_status_of_texture_download(iVar1);
					switch (iVar11)
					{
						case 0:
							func_494(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_494(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_496(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_494(iParam1, iParam2, 0);
						return 1;
					}
					sVar12 = texture_download_get_name(iVar1);
					if (_0x375f5870a7b8bec1(sVar12))
					{
						return 3;
					}
					func_494(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_496(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_494(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, texture_download_get_name(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

int func_354()
{
	return Global_1139381->f_5079.f_325;
}

void func_355(int iParam0)
{
	Var0.f_3 = 0;
	Var0.f_1 = 1;
	Var0 = 2;
	_0x31010318ba9897ac(&(Var0.f_2), iParam0);
	func_497(&Var0);
}

void func_356(var uParam0, bool bParam1)
{
	if (bParam1 || !func_350(uParam0))
	{
		func_498(uParam0);
	}
}

char* func_357(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

bool func_358(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return network_is_handle_valid(&uParam0);
}

void func_359(char* sParam0, var uParam1, int iParam2, char* sParam3, bool bParam4)
{
	bVar1 = true;
	iVar2 = get_hash_key(sParam3);
	switch (iParam2)
	{
		case 17:
			func_52(_create_var_string(42, "GF_FEUD_HELP_MEMBER_REQUEST_PLF", func_264(get_player_name(sParam0->f_48), 109029619), func_499(sParam0->f_47, 1, 0)), Global_1901947->f_308.f_168, 0, 0, 0, 1);
			if (bParam4)
			{
				uParam1->f_20 = 1700592256;
				uParam1->f_21 = 1434360011;
				uParam1->f_31.f_6 = 1700592256;
				uParam1->f_31.f_7 = 1434360011;
				uParam1->f_31.f_21 = 1;
			}
			else
			{
				uParam1->f_20 = iVar2;
				uParam1->f_21 = iVar2;
				uParam1->f_31.f_6 = iVar2;
				uParam1->f_31.f_7 = iVar2;
				uParam1->f_31.f_21 = 0;
			}
			uParam1->f_25.f_2 = sParam0->f_47;
			uParam1->f_25.f_1 = sParam0->f_48;
			uParam1->f_24 = 17;
			uParam1->f_16 = _create_var_string(10, "GF_FEUD_REQUEST_TITLE", func_264(get_player_name(sParam0->f_48), 109029619));
			uParam1->f_17 = _create_var_string(10, "GF_FEUD_REQUEST_LEADER_BODY", func_499(sParam0->f_47, 1, 0));
			uParam1->f_23 = 120;
			uParam1->f_30 = _0x9c725d149622bfde(0);
			uParam1->f_29 = "IB_GAMERCARD";
			uParam1->f_28 = 4;
			uParam1->f_31.f_2 = func_264(get_player_name(sParam0->f_48), 109029619);
			uParam1->f_31.f_3 = _create_var_string(10, "GF_FEUD_TOAST_OPT_IN_TITLE", "GF_FEUD_POSSE_LEADER_FEUD");
			uParam1->f_31.f_17 = "HUD_Toast_Soundset";
			uParam1->f_31.f_18 = "Toast_On";
			uParam1->f_22 = 1;
			break;
		case 16:
			func_52(_create_var_string(42, "GF_FEUD_HELP_MEMBER_REQUEST_PF", func_264(get_player_name(sParam0->f_48), 109029619), func_499(sParam0->f_47, 1, 0)), Global_1901947->f_308.f_168, 0, 0, 0, 1);
			if (bParam4)
			{
				uParam1->f_20 = 1700592256;
				uParam1->f_21 = 1434360011;
				uParam1->f_31.f_6 = 1700592256;
				uParam1->f_31.f_7 = 1434360011;
				uParam1->f_31.f_21 = 1;
			}
			else
			{
				uParam1->f_20 = iVar2;
				uParam1->f_21 = iVar2;
				uParam1->f_31.f_6 = iVar2;
				uParam1->f_31.f_7 = iVar2;
				uParam1->f_31.f_21 = 0;
			}
			uParam1->f_25.f_2 = sParam0->f_47;
			uParam1->f_25.f_1 = sParam0->f_48;
			uParam1->f_24 = 16;
			uParam1->f_16 = _create_var_string(10, "GF_FEUD_REQUEST_TITLE", func_264(get_player_name(sParam0->f_48), 109029619));
			uParam1->f_17 = _create_var_string(10, "GF_FEUD_REQUEST_BODY", func_499(sParam0->f_47, 1, 0));
			uParam1->f_23 = 120;
			uParam1->f_30 = _0x9c725d149622bfde(0);
			uParam1->f_29 = "IB_GAMERCARD";
			uParam1->f_28 = 4;
			uParam1->f_31.f_2 = func_264(get_player_name(sParam0->f_48), 109029619);
			uParam1->f_31.f_3 = _create_var_string(10, "GF_FEUD_TOAST_OPT_IN_TITLE", "GF_FEUD_POSSE_FEUD");
			uParam1->f_31.f_17 = "HUD_Toast_Soundset";
			uParam1->f_31.f_18 = "Toast_On";
			uParam1->f_22 = 1;
			break;
		case 8:
			sVar0 = func_500(sParam0->f_12.f_16.f_4, &bVar1);
			if (bVar1)
			{
				if (bParam4)
				{
					uParam1->f_20 = 1700592256;
					uParam1->f_21 = 1434360011;
					uParam1->f_31.f_6 = 1700592256;
					uParam1->f_31.f_7 = 1434360011;
					uParam1->f_31.f_21 = 1;
				}
				else
				{
					uParam1->f_20 = iVar2;
					uParam1->f_21 = iVar2;
					uParam1->f_31.f_6 = iVar2;
					uParam1->f_31.f_7 = iVar2;
					uParam1->f_31.f_21 = 0;
				}
				uParam1->f_24 = 8;
				uParam1->f_25 = Global_1071686->f_16;
				uParam1->f_25.f_1 = sParam0->f_48;
				uParam1->f_25.f_2 = sParam0->f_47;
				uParam1->f_16 = _create_var_string(2, sVar0);
				uParam1->f_17 = func_502(_create_var_string(10, "CHALLENGE_NOTICE_SUB_INFO", func_501(sParam0->f_48)), 109029619);
				uParam1->f_23 = (Global_1901947->f_308.f_169 / 1000);
				uParam1->f_30 = _0x9c725d149622bfde(0);
				uParam1->f_29 = "IB_GAMERCARD";
				uParam1->f_28 = 4;
				uParam1->f_31.f_2 = func_264(get_player_name(sParam0->f_48), 109029619);
				uParam1->f_31.f_3 = _create_var_string(2, func_504(func_503(sParam0->f_12)));
				uParam1->f_31.f_17 = "HUD_Toast_Soundset";
				uParam1->f_31.f_18 = "Toast_On";
				uParam1->f_22 = 1;
			}
			break;
		case 20:
			if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(sParam0->f_49)) == 1)
			{
				func_52(_create_var_string(10, "PARLEY_HELP_REQUESTED_SOLO", func_264(get_player_name(sParam0->f_48), 109029619)), 10000, 0, 0, 0, 1);
			}
			else
			{
				func_52(_create_var_string(10, "PARLEY_HELP_REQUESTED", func_264(get_player_name(sParam0->f_48), 109029619)), 10000, 0, 0, 0, 1);
			}
			if (bParam4)
			{
				uParam1->f_20 = 1700592256;
				uParam1->f_21 = 1434360011;
				uParam1->f_31.f_6 = 1700592256;
				uParam1->f_31.f_7 = 1434360011;
				uParam1->f_31.f_21 = 1;
			}
			else
			{
				uParam1->f_20 = iVar2;
				uParam1->f_21 = iVar2;
				uParam1->f_31.f_6 = iVar2;
				uParam1->f_31.f_7 = iVar2;
				uParam1->f_31.f_21 = 0;
			}
			uParam1->f_25 = sParam0->f_48;
			uParam1->f_25.f_1 = sParam0->f_49;
			uParam1->f_24 = 20;
			uParam1->f_16 = _create_var_string(10, "PARLEY_REQUEST_TITLE", func_264(get_player_name(sParam0->f_48), 109029619));
			if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(sParam0->f_49)) > 1)
			{
				uParam1->f_17 = _create_var_string(10, "PARLEY_REQUEST_BODY_GANG", func_264(get_player_name(sParam0->f_49), 109029619));
			}
			else
			{
				uParam1->f_17 = _create_var_string(10, "PARLEY_REQUEST_BODY", func_264(get_player_name(sParam0->f_49), 109029619));
			}
			uParam1->f_23 = 120;
			uParam1->f_31.f_2 = _create_var_string(2, "PARLEY_TOAST_OPT_IN");
			uParam1->f_31.f_3 = _create_var_string(2, "PARLEY_TOAST_OPT_IN_BODY");
			uParam1->f_31.f_17 = "HUD_Toast_Soundset";
			uParam1->f_31.f_18 = "Toast_On";
			uParam1->f_22 = 1;
			break;
	}
}

void func_360(char* sParam0, var uParam1, char* sParam2, bool bParam3)
{
	iVar0 = _0x27b1ae4d8c652f08(sParam0->f_11);
	sVar1 = func_264(_0xe59f4924bd3a718d(iVar0), 636925055);
	iVar2 = get_hash_key(sParam2);
	uParam1->f_24 = 1;
	uParam1->f_25 = sParam0->f_11;
	uParam1->f_16 = sVar1;
	uParam1->f_30 = _0x9c725d149622bfde(0);
	uParam1->f_29 = "IB_GAMERCARD";
	uParam1->f_28 = 2;
	if (is_string_null_or_empty(&(sParam0->f_8)))
	{
		Var3.f_1 = -1;
		Var3.f_2 = -1;
		Var3.f_3 = -1;
		Var3.f_3.f_1 = -1;
		_0xc0cffda87c2c163d(iVar0, &Var3, 11);
		if (Var3 == 3)
		{
			iVar14 = func_388(Var3.f_3);
			uParam1->f_17 = _create_var_string(10, "NT_INV_RCV_BODY_INFO", func_390(func_389(iVar14)));
			uParam1->f_31.f_3 = _create_var_string(10, "NM_TI_VIEW_INVITE_SUBTYPE", func_390(func_389(iVar14)));
			uParam1->f_31.f_4 = _create_var_string(2, "NM_TI_VIEW_INVITE");
		}
		else
		{
			uParam1->f_17 = _create_var_string(42, "NT_INV_BODY_INFO", func_264(sParam0, 109029619), "LANDING_FREEROAM_TITLE");
			uParam1->f_31.f_3 = _create_var_string(2, "NT_INV_FM_CONTENT");
			uParam1->f_31.f_4 = _create_var_string(2, "NM_TI_VIEW_INVITE");
		}
	}
	else if (func_11() != -1)
	{
		iVar15 = func_391(get_hash_key(&(sParam0->f_8)));
		if (iVar15 != -1)
		{
			iVar16 = Global_265377->f_4[iVar15]->f_29;
			if (iVar16 == -504335712)
			{
				sVar17 = _create_var_string(2, func_392(Global_265377->f_4[iVar15]->f_31));
			}
			else if (iVar16 == 395262693)
			{
				sVar17 = _create_var_string(2, func_393(Global_265377->f_4[iVar15]->f_31));
			}
			else if (iVar16 == -933924539)
			{
				sVar17 = _create_var_string(2, func_394(Global_265377->f_4[iVar15]->f_31));
			}
			uParam1->f_17 = _create_var_string(10, "NT_INV_RCV_BODY_INFO", sVar17);
			uParam1->f_31.f_3 = _create_var_string(10, "NM_TI_VIEW_INVITE_SUBTYPE", sVar17);
			uParam1->f_31.f_4 = _create_var_string(2, "NM_TI_VIEW_INVITE");
		}
	}
	uParam1->f_31.f_2 = sVar1;
	uParam1->f_31.f_17 = "HUD_Toast_Soundset";
	uParam1->f_31.f_18 = "Toast_On";
	uParam1->f_23 = Global_1901947->f_1.f_23;
	uParam1->f_22 = 1;
	if (bParam3)
	{
		uParam1->f_20 = 1700592256;
		uParam1->f_21 = 1434360011;
		uParam1->f_31.f_6 = 1700592256;
		uParam1->f_31.f_7 = 1434360011;
		uParam1->f_31.f_21 = 1;
	}
	else
	{
		uParam1->f_20 = iVar2;
		uParam1->f_21 = iVar2;
		uParam1->f_31.f_6 = iVar2;
		uParam1->f_31.f_7 = iVar2;
		uParam1->f_31.f_21 = 0;
	}
}

var func_361(struct<32> Param0, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52)
{
	iVar0 = func_505();
	iVar1 = get_cloud_time_as_int();
	iVar2 = (iVar1 + Param0.f_23);
	_int_to_string(iVar1, "%i", &cVar11);
	Global_1940311->f_242.f_1188++;
	StringCopy(&cVar3, "Invite_Root_", 64);
	StringConCat(&cVar3, &cVar11, 64);
	StringConCat(&cVar3, "_", 64);
	StringIntConCat(&cVar3, Global_1940311->f_242.f_1188, 64);
	func_506(Global_1940311->f_242.f_14[iVar0], Global_1940311->f_242.f_4, cVar3, Param0);
	Global_1940311->f_242.f_14[iVar0]->f_35 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_362(84), Global_1940311->f_242.f_1188);
	Global_1940311->f_242.f_14[iVar0]->f_37 = _databinding_add_data_bool(&(Global_1940311->f_242.f_14[iVar0]), func_362(85), 1);
	Global_1940311->f_242.f_14[iVar0]->f_38 = _databinding_add_data_bool(&(Global_1940311->f_242.f_14[iVar0]), func_362(86), 0);
	Global_1940311->f_242.f_14[iVar0]->f_33 = _databinding_add_data_bool(&(Global_1940311->f_242.f_14[iVar0]), func_362(74), Param0.f_30);
	if (Param0.f_30)
	{
		Global_1940311->f_242.f_14[iVar0]->f_32 = _databinding_add_data_string(&(Global_1940311->f_242.f_14[iVar0]), func_362(72), Param0.f_29);
		Global_1940311->f_242.f_14[iVar0]->f_31 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_362(75), Param0.f_28);
	}
	Global_1940311->f_242.f_14[iVar0]->f_26 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_362(87), Param0.f_24);
	iVar15 = 0;
	Global_1940311->f_242.f_14[iVar0]->f_34 = _databinding_add_data_bool_by_hash(&(Global_1940311->f_242.f_14[iVar0]), 707094655, iVar15);
	Global_1940311->f_242.f_14[iVar0]->f_27 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_362(50), Param0.f_25);
	Global_1940311->f_242.f_14[iVar0]->f_28 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_362(51), Param0.f_25.f_1);
	Global_1940311->f_242.f_14[iVar0]->f_29 = _databinding_add_data_gang_id(&(Global_1940311->f_242.f_14[iVar0]), func_362(88), Param0.f_25.f_2);
	Global_1940311->f_242.f_14[iVar0]->f_25 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_362(89), iVar2);
	Global_1940311->f_242.f_14[iVar0]->f_24 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_362(90), Param0.f_22);
	func_507(Global_1940311->f_242.f_1186 + 1);
	if (Global_1940311->f_242.f_1188 == 2147483647)
	{
		Global_1940311->f_242.f_1188 = 0;
	}
	if (func_508(Param0.f_24))
	{
		Param0.f_31 = 5;
		Param0.f_31.f_1 = 1;
		Param0.f_31.f_13 = 778915895;
		Param0.f_31.f_14 = &Global_1940311->f_242.f_14[iVar0];
		iVar16 = func_509(&(Param0.f_31));
		Global_1940311->f_242.f_14[iVar0]->f_36 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_362(91), iVar16);
	}
	iVar17 = func_510();
	if (iVar17 == 0 || Param0.f_22 == iVar17)
	{
		Global_1940311->f_242.f_1187++;
		_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1940311->f_242.f_5, 0, "pm_invite_item", &(Global_1940311->f_242.f_14[iVar0]));
	}
	return &(Global_1940311->f_242.f_14[iVar0]);
}

char* func_362(int iParam0)
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

void func_363(char* sParam0, var uParam1)
{
	switch (sParam0->f_63)
	{
		case 8:
		case 16:
		case 17:
			Global_1288655->f_40[Global_1288655->f_73] = uParam1;
			Global_1288655->f_73 = (Global_1288655->f_73 + 1 % 32);
			break;
	}
}

bool func_364(var uParam0)
{
	if (!*uParam0)
	{
		return false;
	}
	switch (uParam0->f_16.f_4)
	{
		case 72:
		case 74:
			return true;
		default:
			break;
	}
	return false;
}

void func_365(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	func_511();
	Global_1071686->f_16.f_2 = iParam1;
	Global_1071686->f_16.f_2.f_2 = uParam0->f_16.f_2;
}

bool func_366(var uParam0)
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

bool func_367(int iParam0)
{
	if (!&Global_1901847->f_66[iParam0])
	{
		if (!func_512(Global_1901847->f_3[iParam0]))
		{
			func_191(Global_1901847->f_3[iParam0], 0, 0);
		}
		Global_1901847->f_66[iParam0] = 1;
	}
	else if (func_64(Global_1901847->f_3[iParam0], func_513(iParam0), 0))
	{
		func_63(Global_1901847->f_3[iParam0]);
		return true;
	}
	return false;
}

struct<7> func_368(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

bool func_369(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

void func_370(int iParam0, int iParam1)
{
	if (Global_1572864->f_17 != 0)
	{
		return;
	}
	Global_1572864->f_17 = iParam0;
	Global_1572864->f_18 = iParam1;
}

void func_371(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 41, "nssd_sStableInventory");
	iVar0 = 0;
	_0x81f4e92be3958364(uParam0, 33, "nssd_MountItemGUID_array");
	iVar0 = 0;
	while (iVar0 <= (8 - 1))
	{
		StringCopy(&cVar1, "nssd_StableMountGUID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 4, &cVar1);
		StringCopy(&cVar1, "nssd_StableItemGUID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		StringConCat(&cVar1, "_data1", 64);
		_0x529b9ccd0972af4d((*uParam0)[iVar0], &cVar1);
		StringCopy(&cVar1, "nssd_StableItemGUID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		StringConCat(&cVar1, "_data2", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_1), &cVar1);
		StringCopy(&cVar1, "nssd_StableItemGUID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		StringConCat(&cVar1, "_data3", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_2), &cVar1);
		StringCopy(&cVar1, "nssd_StableItemGUID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		StringConCat(&cVar1, "_data4", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_3), &cVar1);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xb25b5a375be5be26(&(uParam0->f_33), "nssd_eFeeState");
	_0x529b9ccd0972af4d(&(uParam0->f_34), "nssd_iFeesTimer");
	iVar0 = 0;
	_0x81f4e92be3958364(&(uParam0->f_35), 6, "nssd_iReservedStats_array");
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		StringCopy(&cVar1, "nssd_iReservedStats_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0x529b9ccd0972af4d(uParam0->f_35[iVar0], &cVar1);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

void func_372(var uParam0, char* sParam1)
{
	_0x443174c20b8b9e7f(uParam0, 54, sParam1);
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sStableBonding", 64);
	_0x443174c20b8b9e7f(uParam0, 4, &cVar1);
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sHorseGUID_data1", 64);
	_0x529b9ccd0972af4d(uParam0, &cVar1);
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sHorseGUID_data2", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_1), &cVar1);
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sHorseGUID_data3", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_2), &cVar1);
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sHorseGUID_data4", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_3), &cVar1);
	_0xe0b45e983bfc0768();
	iVar0 = 0;
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_fHorseEventXP", 64);
	_0x81f4e92be3958364(&(uParam0->f_4), 25, &cVar1);
	iVar0 = 0;
	while (iVar0 < 24)
	{
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_fHorseEventXP_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0x35defecae36d4fae(uParam0->f_4[iVar0], &cVar1);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	iVar0 = 0;
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sCoreData_array", 64);
	_0x81f4e92be3958364(&(uParam0->f_29), 9, &cVar1);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sCoreData_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0x443174c20b8b9e7f(uParam0->f_29[iVar0], 4, &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sCoreData_iValue_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0x529b9ccd0972af4d(uParam0->f_29[iVar0], &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sCoreData_fValueBuffer_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0x35defecae36d4fae(&(uParam0->f_29[iVar0]->f_1), &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sCoreData_fDrainBuffer_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0x35defecae36d4fae(&(uParam0->f_29[iVar0]->f_2), &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sCoreData_iLastGameTime_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0x529b9ccd0972af4d(&(uParam0->f_29[iVar0]->f_3), &cVar1);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	iVar0 = 0;
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sEfficiencyData_array", 64);
	_0x81f4e92be3958364(&(uParam0->f_38), 13, &cVar1);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0x443174c20b8b9e7f(uParam0->f_38[iVar0], 4, &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_iValue_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0x529b9ccd0972af4d(uParam0->f_38[iVar0], &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_fValueBuffer_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0x35defecae36d4fae(&(uParam0->f_38[iVar0]->f_1), &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_fDrainBuffer_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0x35defecae36d4fae(&(uParam0->f_38[iVar0]->f_2), &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_iLastGameTime_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0x529b9ccd0972af4d(&(uParam0->f_38[iVar0]->f_3), &cVar1);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_vLastHitch", 64);
	func_215(&(uParam0->f_51), &cVar1);
	_0xe0b45e983bfc0768();
}

void func_373(var uParam0, struct<8> Param1)
{
	Var9 = { Param1 };
	StringConCat(&Var9, "PortableList", 64);
	_0x81f4e92be3958364(uParam0, 26, &Var9);
	iVar0 = 0;
	while (iVar0 < 25)
	{
		Var1 = { Var9 };
		StringIntConCat(&Var1, iVar0, 64);
		_0x529b9ccd0972af4d((*uParam0)[iVar0], &Var1);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	Var9 = { Param1 };
	StringConCat(&Var9, "PortableArraySize", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_26), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "OutfitSlotCount", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_27), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iHatSlotCount", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_28), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iBigMaskSlotCount", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_29), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iSmallMaskSlotCount", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_30), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iGloveSlotCount", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_31), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iBadgeSlotCount", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_32), &Var9);
}

void func_374(var uParam0, struct<8> Param1, int iParam9)
{
	Var8 = { Param1 };
	StringConCat(&Var8, "Data", 64);
	StringIntConCat(&Var8, iParam9, 64);
	_0x443174c20b8b9e7f(uParam0, 120, &Var8);
	Var0 = { Var8 };
	StringConCat(&Var0, "_eFlags", 64);
	_0xb25b5a375be5be26(uParam0, &Var0);
	Var0 = { Var8 };
	StringConCat(&Var0, "_Components", 64);
	func_514(&(uParam0->f_1), Var0);
	_0xe0b45e983bfc0768();
}

void func_375(var uParam0, struct<8> Param1)
{
	Var17 = { Param1 };
	_0x443174c20b8b9e7f(uParam0, 380, &Param1);
	StringConCat(&Var17, "_BaseLayer", 64);
	_0x443174c20b8b9e7f(uParam0, 5, &Var17);
	Var1 = { Var17 };
	StringConCat(&Var1, "_drawable", 64);
	_0x529b9ccd0972af4d(uParam0, &Var1);
	Var1 = { Var17 };
	StringConCat(&Var1, "_albedo", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_1), &Var1);
	Var1 = { Var17 };
	StringConCat(&Var1, "_normal", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_2), &Var1);
	Var1 = { Var17 };
	StringConCat(&Var1, "_material", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_3), &Var1);
	Var1 = { Var17 };
	StringConCat(&Var1, "_tag", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_4), &Var1);
	_0xe0b45e983bfc0768();
	Var17 = { Param1 };
	StringConCat(&Var17, "_Layers", 64);
	_0x81f4e92be3958364(&(uParam0->f_5), 375, &Var17);
	iVar0 = 0;
	while (iVar0 < 22)
	{
		Var1 = { Param1 };
		StringConCat(&Var1, "_Layer", 64);
		StringIntConCat(&Var1, iVar0, 64);
		_0x8e8ffb9e4ad051d2(uParam0->f_5[iVar0], 17, &Var1, 17);
		Var9 = { Var1 };
		StringConCat(&Var9, "_LayerHash", 64);
		_0x529b9ccd0972af4d(uParam0->f_5[iVar0], &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_LayerPriority", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_5[iVar0]->f_1), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_Albedo", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_5[iVar0]->f_2), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_Normal", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_5[iVar0]->f_3), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_Material", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_5[iVar0]->f_4), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_SheetGridIndex", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_5[iVar0]->f_5), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_ModTexture", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_5[iVar0]->f_6), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_ModChannel", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_5[iVar0]->f_7), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_Palette", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_5[iVar0]->f_8), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_tint0", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_5[iVar0]->f_9), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_tint1", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_5[iVar0]->f_10), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_tint2", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_5[iVar0]->f_11), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_TexAlpha", 64);
		_0x35defecae36d4fae(&(uParam0->f_5[iVar0]->f_12), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_ModAlpha", 64);
		_0x35defecae36d4fae(&(uParam0->f_5[iVar0]->f_13), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_TexRough", 64);
		_0x35defecae36d4fae(&(uParam0->f_5[iVar0]->f_14), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_BlendType", 64);
		_0xb25b5a375be5be26(&(uParam0->f_5[iVar0]->f_15), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_LayerType", 64);
		_0xb25b5a375be5be26(&(uParam0->f_5[iVar0]->f_16), &Var9);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

void func_376(var uParam0, struct<8> Param1)
{
	Var8 = { Param1 };
	_0x443174c20b8b9e7f(uParam0, 2, &Var8);
	Var0 = { Var8 };
	StringConCat(&Var0, "iLocationIndex", 64);
	_0x529b9ccd0972af4d(uParam0, &Var0);
	Var0 = { Var8 };
	StringConCat(&Var0, "iVariation", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_1), &Var0);
	_0xe0b45e983bfc0768();
}

void func_377(var uParam0, struct<8> Param1)
{
	_0x443174c20b8b9e7f(uParam0, 7, &Param1);
	Var0 = { Param1 };
	StringConCat(&Var0, ".iNxtIndex", 64);
	_0x529b9ccd0972af4d(uParam0, &Var0);
	Var0 = { Param1 };
	StringConCat(&Var0, ".iFavEm", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_1), &Var0);
	Var0 = { Param1 };
	StringConCat(&Var0, ".emArray", 64);
	_0x81f4e92be3958364(&(uParam0->f_2), 5, &Var0);
	iVar8 = 0;
	while (iVar8 <= 3)
	{
		Var0 = { Var0 };
		StringConCat(&Var0, ".em_", 64);
		StringIntConCat(&Var0, iVar8, 64);
		_0xb25b5a375be5be26(uParam0->f_2[iVar8], &Var0);
		iVar8++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

char* func_378(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "tooltips/tooltip(%i)";
		case 1:
			return "tooltips/tooltip";
		case 2:
			return ":label";
		case 3:
			return ":duration";
		case 4:
			return ":onlyInSP";
		case 5:
			return ":onlyInMP";
		case 6:
			return ":requiredMissionID";
	}
	return "";
}

bool func_379(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

int func_380()
{
	return Global_1138962->f_137;
}

void func_381(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_241() - fParam1);
	func_515(uParam0, 1);
	func_516(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_382()
{
	return Global_1572887->f_266 > 0;
}

void func_383(int iParam0)
{
	iVar0 = _0x27b1ae4d8c652f08(iParam0);
	StringCopy(&(Var1.f_7), _0xe59f4924bd3a718d(iVar0), 64);
	_0x16efb123c4451032(iVar0, &Var1);
	StringCopy(&(Var1.f_17), _0xe79ba3bc265895da(iVar0), 24);
	Var1.f_15 = iParam0;
	Var1.f_21 = _0x5ed39da62beb1330(iVar0);
	func_517(&Var1);
}

void func_384(bool bParam0)
{
	if (bParam0)
	{
		func_253(128);
	}
	if (func_11() == 0)
	{
		func_75(2);
	}
	func_200(1);
}

bool func_385(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_342(36, iParam0);
}

bool func_386()
{
	return is_dlc_present(-1762644250);
}

bool func_387(struct<18> Param0, var uParam18, var uParam19, var uParam20, var uParam21, int iParam22)
{
	iVar0 = func_518();
	if (iVar0 == -1)
	{
		return false;
	}
	*Global_1071686->f_16.f_356[iVar0] = { Param0.f_7 };
	Global_1071686->f_16.f_356[iVar0]->f_8 = { Param0.f_17 };
	Global_1071686->f_16.f_356[iVar0]->f_11 = Param0.f_15;
	Global_1071686->f_16.f_356[iVar0]->f_61 = 1;
	Global_1071686->f_16.f_356[iVar0]->f_63 = iParam22;
	func_356(&(Global_1071686->f_16.f_356[iVar0]->f_50), 1);
	return true;
}

int func_388(struct<2> Param0)
{
	if (func_519(Param0) != 5)
	{
		return -1;
	}
	return func_520(Param0);
}

int func_389(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 2;
		default:
			break;
	}
	return -1;
}

char* func_390(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJACK";
		case 1:
			return "MG_DOMIN";
		case 2:
			return "MG_POKER";
		case 3:
			return "MG_FILLET";
		case 4:
			return "MG_MILKING_COW";
		case 5:
			return "MG_CLEAN_STALLS";
		case 6:
			return "MG_FENCE_BUILDING";
	}
	return "Unknown Minigame";
}

int func_391(int iParam0)
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

char* func_392(int iParam0)
{
	switch (iParam0)
	{
		case -1759663922:
			return "UGC_MST_STRY";
		case -318976023:
			return "UGC_MST_LGNDB";
		case 772881414:
			return "UGC_MST_MNSHN";
		case 603385332:
			return "UGC_MST_DEL";
		case 534981680:
			return "UGC_MST_ESCF";
		case -915869673:
			return "UGC_MST_TTYG";
		case -360644098:
			return "UGC_MST_TTYT";
		case 1520184724:
			return "UGC_MST_AFGPO";
		case -777132493:
			return "UGC_MST_PDR";
		case -163684180:
			return "UGC_MST_SOW";
		case -1649482077:
			return "UGC_MST_UIS";
		case -698288936:
			return "UGC_MST_PROT";
		case 909765192:
			return "UGC_MST_PDH";
		case 604251967:
			return "UGC_MST_FOU";
		case 1078150940:
			return "UGC_MST_AWIP";
		case 482206342:
			return "UGC_MST_LEG";
		default:
			break;
	}
	return "Invalid MISSION_SUB_TYPE";
}

char* func_393(int iParam0)
{
	switch (iParam0)
	{
		case 1816768801:
			return "GST_DEATHMATCH";
		case -533426613:
			return "GST_DEATHMATCH_TEAM";
		case -1918441640:
			return "GST_DEATHMATCH_LTS";
		case -457802746:
			return "GST_DEATHMATCH_FTB";
		case 1788958412:
			return "GST_DEATHMATCH_PITP";
		case 1153715636:
			return "GST_DEATHMATCH_LMS";
		case 424482930:
			return "GST_DEATHMATCH_MM";
		case 1272390114:
			return "GST_DEATHMATCH_WOC";
		case -1581094459:
			return "GST_DEATHMATCH_EXC";
		case 1842544025:
			return "GST_DEATHMATCH_TLG";
		case -632356431:
			return "GST_DEATHMATCH_TTLG";
		case -559809431:
			return "GST_DEATHMATCH_HT";
		case 1175500245:
			return "GST_DEATHMATCH_TFTB";
		case -1437925683:
			return "GST_DEATHMATCH_TWOC";
		case -548018579:
			return "GST_DEATHMATCH_EC";
		case 10577687:
			return "GST_DEATHMATCH_MC";
		case -222655798:
			return "GST_DEATHMATCH_GR";
		case -725256130:
			return "GST_DEATHMATCH_TGR";
		default:
			break;
	}
	return "Invalid DEATHMATCH_SUB_TYPE";
}

char* func_394(int iParam0)
{
	switch (iParam0)
	{
		case -784189810:
			return "GST_RACE_STANDA";
		case 1579717899:
			return "GST_RACE_COMBAT";
		case -63669280:
			return "GST_RACE_DUALCO";
		case 851921060:
			return "GST_RACE_ELIM";
		case 2028478397:
			return "GST_RACE_SURVIV";
		case 1457860192:
			return "GST_RACE_TIMECP";
		case -79999383:
			return "GST_RACE_GOLDRU";
		case -1957416901:
			return "GST_RACE_RUNAWT";
		case 218185167:
			return "GST_RACE_TARRAC";
		case 1744858848:
			return "GST_RACE_OPERAC";
		case -1185533313:
			return "GST_RACE_OPTARA";
		default:
			break;
	}
	return "Invalid RACE_SUB_TYPE";
}

void func_395(var uParam0)
{
	func_521(uParam0);
	func_521(&(uParam0->f_7));
}

void func_396(var uParam0)
{
	Global_1572887->f_266.f_12 = { *uParam0 };
}

void func_397(int iParam0, int iParam1)
{
	iVar0 = 29;
	while (iVar0 >= 0)
	{
		Var2 = { *Global_1940311->f_242.f_14[iVar0] };
		iVar1 = _databinding_read_data_int(Var2.f_26);
		iVar41 = iVar1;
		if (iParam0 != iVar41)
		{
		}
		else
		{
			iVar1 = _databinding_read_data_int(Var2.f_27);
			if (iParam1 != iVar1)
			{
			}
			else
			{
				func_490(Var2);
			}
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_398(int iParam0)
{
}

void func_399(var uParam0)
{
	func_521(uParam0);
}

void func_400(var uParam0)
{
	Global_1572887->f_266.f_3 = { *uParam0 };
}

bool func_401(struct<9> Param0, int iParam9)
{
	return func_252(Param0.f_8, iParam9);
}

int func_402()
{
	return Global_1572887->f_266;
}

void func_403(var uParam0)
{
}

void func_404(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

char* func_405(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_406()
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
	if (func_440(2048))
	{
		return 1;
	}
	if (func_439(1))
	{
		return 1;
	}
	if (Global_1102219->f_26.f_3337 != 0)
	{
		return 1;
	}
	return 0;
}

char* func_407(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

struct<11> func_408()
{
	return Global_1572887->f_266.f_50;
}

int func_409()
{
	return Global_1572887->f_266.f_61;
}

bool func_410(int iParam0)
{
	return func_252((*Global_1056141)[iParam0]->f_187.f_10, 4);
}

void func_411(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

var func_412(int iParam0)
{
	return (*Global_1056141)[iParam0]->f_187;
}

var func_413(int iParam0)
{
	return (*Global_1056141)[iParam0]->f_187.f_1;
}

var func_414(int iParam0)
{
	return (*Global_1056141)[iParam0]->f_187.f_2;
}

struct<2> func_415(int iParam0)
{
	return (*Global_1056141)[iParam0]->f_187.f_3;
}

int func_416(int iParam0)
{
	if (iParam0 == -1)
	{
		return 1;
	}
	if (func_522())
	{
		return 2;
	}
	if (func_523(iParam0))
	{
	}
	Var0 = { func_524() };
	if (func_465(Var0))
	{
		return 4;
	}
	if (func_525(iParam0))
	{
		return 8;
	}
	if (func_526(iParam0))
	{
		return 11;
	}
	if (func_527(iParam0, 700892038))
	{
		return 7;
	}
	else if (func_527(iParam0, -1038316793))
	{
		return 10;
	}
	else if (func_527(iParam0, 1485265289))
	{
		return 9;
	}
	else if (func_527(iParam0, 430260396))
	{
		return 12;
	}
	if (func_528(iParam0))
	{
		return 14;
	}
	if (func_529(player_id(), 1, 0, 1))
	{
		return 15;
	}
	iVar2 = func_530(iParam0, 1);
	if (iVar2 <= 0)
	{
		return -1;
	}
	else if (!func_531(iVar2))
	{
		return 6;
	}
	if (_0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())))
	{
		if (_0x424b17a7dc5c90bc(player_id()))
		{
			if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) > (func_532(func_389(iParam0)) - 1))
			{
				return 5;
			}
		}
	}
	return 0;
}

bool func_417(int iParam0)
{
	if (_get_number_of_references_of_script_with_name_hash(1814880805) > 0)
	{
		*iParam0 = 1814880805;
		return true;
	}
	else if (_get_number_of_references_of_script_with_name_hash(-814065802) > 0)
	{
		*iParam0 = -814065802;
		return true;
	}
	else if (_get_number_of_references_of_script_with_name_hash(-701235215) > 0)
	{
		*iParam0 = -701235215;
		return true;
	}
	return false;
}

void func_418(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	if (&Global_1051139)
	{
		return;
	}
	Global_1051139->f_2 = iParam0;
	Global_1051139->f_3 = iParam1;
	Global_1051139->f_4 = iParam2;
	Global_1051139->f_6 = iParam3;
	Global_1051139->f_5 = iParam4;
	if (!bParam5)
	{
		iVar0 = get_hash_of_this_script_name();
	}
	else
	{
		iVar0 = iParam6;
	}
	Global_1051139->f_1 = iVar0;
	Global_1051139 = 1;
}

int func_419()
{
	return Global_1138962->f_143;
}

Vector3 func_420(int iParam0)
{
	if (iParam0 == -1)
	{
	}
	Var0 = { func_533(iParam0) };
	if (func_480(Var0.f_5))
	{
	}
	return Var0.f_5;
}

bool func_421(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_1071686->f_22538.f_385[iParam0]), iParam1);
}

void func_422()
{
	_0x20f4cb76689acdbc(&(Global_1071686->f_21416.f_260));
}

bool func_423()
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

bool func_424(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939493->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1939493)[iVar0]->f_10)))
		{
			func_534(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_425(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

bool func_426(int iParam0, int iParam1)
{
	if (!func_425(iParam0))
	{
		return false;
	}
	if (func_11() == -1)
	{
		return (Global_1915715->f_3[iParam0]->f_6 && iParam1) != 0;
	}
	else
	{
		return (Global_1051439->f_72[iParam0]->f_1 && iParam1) != 0;
	}
	return false;
}

void func_427(int iParam0, int iParam1)
{
	if (!func_425(iParam0))
	{
		return;
	}
	if (func_11() == -1)
	{
		Global_1915715->f_3[iParam0]->f_6 = (Global_1915715->f_3[iParam0]->f_6 || iParam1);
	}
	else
	{
		Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 || iParam1);
	}
}

void func_428(int iParam0, int iParam1)
{
	if (!func_425(iParam0))
	{
		return;
	}
	if (func_11() == -1)
	{
		Global_1915715->f_3[iParam0]->f_6 = (Global_1915715->f_3[iParam0]->f_6 - (Global_1915715->f_3[iParam0]->f_6 && iParam1));
	}
	else
	{
		Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 - (Global_1051439->f_72[iParam0]->f_1 && iParam1));
	}
}

int func_429()
{
	return Global_1301323->f_150;
}

bool func_430(int iParam0)
{
	return (Global_1301323->f_288.f_2 && iParam0) != 0;
}

bool func_431()
{
	return func_535() != 0;
}

bool func_432()
{
	iVar0 = func_536();
	if (!_does_thread_exist(iVar0))
	{
		return false;
	}
	return is_thread_active(iVar0, false);
}

void func_433(int iParam0)
{
	Global_1301323->f_288 = iParam0;
}

void func_434(int iParam0)
{
	Global_1301323->f_288.f_1 = iParam0;
}

void func_435(int iParam0)
{
	iVar0 = get_id_of_this_thread();
	if (_does_thread_exist(Global_1940144->f_105.f_1) && Global_1940144->f_105.f_1 != iVar0)
	{
		return;
	}
	Global_1940144->f_105.f_1 = iVar0;
	Global_1940144->f_105 = iParam0;
}

int func_436()
{
	if (Global_1572887->f_266.f_88 != 0)
	{
		return 2;
	}
	if (Global_1572887->f_266.f_66 != -1)
	{
		return 2;
	}
	if (Global_1572887->f_266.f_86 > 2 || Global_1572887->f_266.f_87 > 2)
	{
		return 2;
	}
	if (Global_1572887->f_266.f_86 == 2)
	{
		Global_1572887->f_266.f_86 = 0;
		Global_1572887->f_266.f_87 = 0;
		return 1;
	}
	return 0;
}

void func_437(var uParam0, int iParam1)
{
	func_537(uParam0, iParam1);
}

void func_438(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

bool func_439(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_440(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_441(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

int func_442()
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

void func_443(int iParam0)
{
	if (func_538(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

bool func_444()
{
	return (Global_1915715->f_20637 || Global_1915715->f_22504.f_1);
}

bool func_445(int iParam0)
{
	return func_342(27, iParam0);
}

bool func_446(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_447(int iParam0)
{
	if (!func_446(iParam0))
	{
		return false;
	}
	return func_450(iParam0, 8);
}

void func_448(int iParam0, int iParam1)
{
	if (!func_446(iParam0))
	{
		return;
	}
	(*Global_1887339)[iParam0]->f_20 = iParam1;
}

void func_449(int iParam0)
{
	Global_1893587 = (Global_1893587 || iParam0);
}

bool func_450(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_8123[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_19674[iParam0] && iParam1) != 0;
}

void func_451(int iParam0)
{
	Global_1893587 = (&Global_1893587 - (Global_1893587 && iParam0));
}

bool func_452(bool bParam0)
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_450(iVar1, 1))
		{
			if (does_script_exist(&((*Global_1887339)[iVar1]->f_27)))
			{
				set_script_as_no_longer_needed(&((*Global_1887339)[iVar1]->f_27));
			}
		}
		if ((*Global_1887339)[iVar1]->f_10 != 0)
		{
			if (is_thread_active((*Global_1887339)[iVar1]->f_10, false))
			{
				if (func_11() == -1)
				{
					force_cleanup_for_thread_with_this_id((*Global_1887339)[iVar1]->f_10, 523);
				}
				else if (!_0x30bed53646c86d11((*Global_1887339)[iVar1]->f_10))
				{
					_0x7de4643157ad646c((*Global_1887339)[iVar1]->f_10);
				}
			}
			else if (func_450(iVar1, 2))
			{
				if (func_11() == -1)
				{
					force_cleanup_for_all_threads_with_this_name(&((*Global_1887339)[iVar1]->f_27), 523);
				}
				else
				{
					_0x7423f7835770f619(get_hash_key(&((*Global_1887339)[iVar1]->f_27)));
				}
			}
			if (!_does_thread_exist((*Global_1887339)[iVar1]->f_10))
			{
				(*Global_1887339)[iVar1]->f_10 = 0;
				func_539(iVar1, 11);
			}
			else
			{
				bVar0 = true;
			}
		}
		else if (bParam0)
		{
			if (func_450(iVar1, 1))
			{
				func_539(iVar1, 1);
			}
		}
		iVar1++;
	}
	return !bVar0;
}

bool func_453(int iParam0)
{
	return (Global_265377->f_124517.f_135 && iParam0) != 0;
}

bool func_454()
{
	return func_540() > 11;
}

void func_455()
{
	if (_is_app_active(1433015236))
	{
		_close_app_by_hash(1433015236);
	}
}

bool func_456(int iParam0, bool bParam1)
{
	bVar0 = false;
	if (iParam0 == 255)
	{
		bVar0 = true;
		iParam0 = func_485();
	}
	else if (iParam0 == func_485())
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

void func_457()
{
	Global_1956200->f_1431.f_108 = 0;
	Global_1956200->f_1431.f_108.f_1 = 0f;
	Global_1956200->f_1431.f_108.f_3 = 0f;
	Global_1956200->f_1431.f_108.f_2 = 0f;
	Global_1956200->f_1431.f_108.f_4 = 0f;
	Global_1956200->f_1431.f_108.f_6 = 0f;
	Global_1956200->f_1431.f_108.f_5 = 0f;
}

void func_458(int iParam0)
{
	Global_1572887->f_106.f_75 = iParam0;
}

void func_459()
{
	if (Global_1572887->f_106.f_91)
	{
		return;
	}
	Global_1572887->f_106.f_91 = 1;
	_0x4c08d2b6d8be17e4(Global_1572887->f_106.f_91.f_1, Global_1572887->f_106.f_91.f_2, Global_1572887->f_106.f_91.f_3, Global_1572887->f_106.f_91.f_4, Global_1572887->f_106.f_91.f_5, &(Global_1572887->f_106.f_91.f_6));
}

void func_460()
{
	if (func_11() == -1)
	{
		return;
	}
	iVar0 = &Global_1296859;
	if (func_252(Global_1572887->f_7, 1))
	{
		func_404(&((*Global_1056141)[iVar0]->f_187.f_10), 4);
	}
	else
	{
		func_411(&((*Global_1056141)[iVar0]->f_187.f_10), 4);
	}
	(*Global_1056141)[iVar0]->f_187 = Global_1572887->f_106;
	(*Global_1056141)[iVar0]->f_187.f_1 = Global_1572887->f_106.f_9;
	(*Global_1056141)[iVar0]->f_187.f_2 = Global_1572887->f_106.f_10;
	(*Global_1056141)[iVar0]->f_187.f_3 = { Global_1572887->f_106.f_11 };
	(*Global_1056141)[iVar0]->f_187.f_8 = Global_1572887->f_106.f_13;
	(*Global_1056141)[iVar0]->f_187.f_5 = { Global_1572887->f_360 };
	(*Global_1056141)[iVar0]->f_187.f_9 = Global_1572887->f_106.f_74;
	if (func_541(1024))
	{
		func_404(&((*Global_1056141)[iVar0]->f_187.f_10), 2);
	}
	else
	{
		func_411(&((*Global_1056141)[iVar0]->f_187.f_10), 2);
	}
}

void func_461(vector3 vParam0)
{
	vVar2 = { vParam0 };
	iVar0 = func_542(vParam0);
	if (iVar0 != -1)
	{
		iVar1 = (*Global_1887339)[iVar0]->f_5;
		if (_does_volume_exist(iVar1))
		{
			vVar2 = { _0xf70f00013a62f866(iVar1) };
		}
	}
	else
	{
		fVar5 = (IntToFloat(get_random_int_in_range(0, 359)) * 1f);
		if (!func_476(&vVar2, &fVar5))
		{
			vVar2 = { (Global_1071686->f_23887.f_366[get_random_int_in_range(0, 15)])->f_2 };
		}
	}
	vVar6.x = get_random_float_in_range(-3f, 3f);
	vVar6.f_1 = get_random_float_in_range(-3f, 3f);
	vVar2 = { vVar2 + vVar6 };
	vParam0 = { vParam0 + vVar6 };
	func_477(vVar2, 0f, vParam0, 0f, -1082130432, -1082130432, 1, 1, 1, 1);
	func_543(0);
}

bool func_462(int iParam0)
{
	return func_252(Global_1194053->f_3, iParam0);
}

var func_463(int iParam0)
{
	return (*Global_1056141)[iParam0]->f_187.f_10;
}

var func_464(int iParam0)
{
	return (*Global_1056141)[iParam0]->f_187.f_9;
}

bool func_465(struct<2> Param0)
{
	if (!func_544(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_545(Param0))
	{
		return false;
	}
	return true;
}

bool func_466()
{
	if (&Global_1138962 == 2)
	{
		return true;
	}
	return false;
}

bool func_467(struct<2> Param0)
{
	iVar0 = func_388(Param0);
	vVar2 = { func_546(iVar0, &uVar1) };
	if (func_480(vVar2))
	{
		return false;
	}
	if (func_232(255))
	{
		return false;
	}
	func_547(4);
	func_333(1);
	func_326(1);
	func_307(1);
	func_548(vVar2, uVar1, 1);
	func_547(16);
	return true;
}

void func_468(int iParam0)
{
	Global_1572887->f_106.f_14 = iParam0;
}

int func_469(int iParam0, int iParam1, struct<2> Param2, int iParam4, int iParam5, var uParam6)
{
	if (!func_549(iParam0, iParam1))
	{
		return 0;
	}
	func_550();
	func_551(iParam0, iParam1, iParam4, 1);
	func_552(Param2, 1);
	func_553(iParam5);
	func_458(14);
	func_554(uParam6, 1);
	func_555();
	if (func_465(Param2))
	{
		func_556(Param2);
	}
	return 1;
}

int func_470(int iParam0)
{
	iVar0 = get_random_int_in_range(0, 65536);
	switch (iParam0)
	{
		case 0:
			iVar1 = (iVar0 % 2);
			switch (iVar1)
			{
				case 0:
					return 6;
				case 1:
					return 7;
				default:
					break;
			}
			break;
		case 1:
			iVar1 = (iVar0 % 3);
			switch (iVar1)
			{
				case 0:
					return 0;
				case 1:
					return 2;
				case 2:
					return 11;
				default:
					break;
			}
			break;
		case 3:
			iVar1 = (iVar0 % 3);
			switch (iVar1)
			{
				case 0:
					return 3;
				case 1:
					return 9;
				case 2:
					return 10;
				default:
					break;
			}
			break;
		case 4:
			iVar1 = (iVar0 % 3);
			switch (iVar1)
			{
				case 0:
					return 1;
				case 1:
					return 4;
				case 2:
					return 12;
				default:
					break;
			}
			break;
		case 2:
			iVar1 = (iVar0 % 4);
			switch (iVar1)
			{
				case 0:
					return 13;
				case 1:
					return 14;
				case 2:
					return 15;
				case 3:
					return 16;
				default:
					break;
			}
			break;
		case 5:
			return 8;
	}
	return -1;
}

int func_471(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		iParam0 = get_random_int_in_range(0, 17);
	}
	if (iParam0 == 8)
	{
		iParam0 = 9;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = get_random_int_in_range(0, 10 + 1);
			break;
		case 1:
			iVar0 = get_random_int_in_range(11, 30 + 1);
			break;
		case 2:
			iVar0 = get_random_int_in_range(31, 34 + 1);
			break;
		case 3:
			iVar0 = get_random_int_in_range(35, 38 + 1);
			break;
		case 4:
			iVar0 = get_random_int_in_range(39, 41 + 1);
			break;
		case 5:
			iVar0 = get_random_int_in_range(42, 61 + 1);
			break;
		case 6:
			iVar0 = get_random_int_in_range(53, 61 + 1);
			break;
		case 7:
			iVar0 = get_random_int_in_range(42, 52 + 1);
			break;
		case 8:
			iVar0 = get_random_int_in_range(62, 66 + 1);
			break;
		case 9:
			iVar0 = get_random_int_in_range(67, 81 + 1);
			break;
		case 10:
			iVar0 = get_random_int_in_range(82, 98 + 1);
			break;
		case 11:
			iVar0 = get_random_int_in_range(99, 112 + 1);
			break;
		case 12:
			iVar0 = get_random_int_in_range(113, 119 + 1);
			break;
		case 13:
			iVar0 = get_random_int_in_range(120, 122 + 1);
			break;
		case 14:
			iVar0 = get_random_int_in_range(123, 126 + 1);
			break;
		case 15:
			iVar0 = get_random_int_in_range(127, 134 + 1);
			break;
		case 16:
			iVar0 = get_random_int_in_range(135, 138 + 1);
			break;
	}
	iVar1 = iVar0;
	if (iVar1 == 8)
	{
		iVar1 = 5;
	}
	if (iVar1 == 55)
	{
		iVar1 = 45;
	}
	return iVar1;
}

void func_472(int iParam0, bool bParam1)
{
	if (!func_476(&(Var30.f_6), &Var30))
	{
		Var30.f_6 = { (Global_1071686->f_23887.f_366[get_random_int_in_range(0, 15)])->f_2 };
		Var30 = (IntToFloat(get_random_int_in_range(0, 359)) * 1f);
	}
	Var30.f_5 = 1;
	func_286(88);
	if (func_557(iParam0, &uVar0))
	{
		func_558(&uVar0, &Var30, 1, 1, 1);
		if (bParam1)
		{
			func_345(0);
		}
		return;
	}
	func_559(Var30.f_6, Var30, -1082130432, -1082130432, 1, 1, 1);
	if (bParam1)
	{
		func_345(0);
	}
}

bool func_473(int iParam0)
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
			Var2 = { func_368(iVar0) };
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

int func_474(int iParam0)
{
	if (Global_1194053->f_1 == 6 || Global_1194053->f_1 == 7)
	{
		return 1;
	}
	if (!network_is_player_active(iParam0))
	{
		return 0;
	}
	if (_0x0f99f6436528a089(_0x901e0dc25080c8b9(iParam0)) && _0x7933754f260b428a(iParam0) > 0)
	{
		return 0;
	}
	Var0 = { func_368(iParam0) };
	Var7.f_18 = 10;
	iVar106 = 0;
	while (iVar106 <= (_0xc084ff658b2e61da(&Var0) - 1))
	{
		if (_0xc084ff658b2e71da(&Var0, iVar106, &Var7))
		{
			if (Var7.f_9 == 1 && Var7 != 0)
			{
				if (func_560(Var7))
				{
					func_561(2);
					return func_562(Var7, 0);
				}
				else if (Var7.f_17 < 10)
				{
					Global_1194053->f_14 = { Var0 };
					Global_1194053->f_14.f_7 = Var7;
					Global_1194053->f_14.f_9 = _0x901e0dc25080c8b9(iParam0);
					func_563(6);
					func_564(32);
					func_561(2);
					if (_0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())))
					{
						_0x0a04a07bc3074edb(_0x424b17a7dc5c90bc(player_id()));
					}
					return 1;
				}
			}
		}
		iVar106++;
	}
	return 0;
}

void func_475()
{
	if (func_462(1024))
	{
		func_488(1024);
	}
}

bool func_476(var uParam0, float fParam1)
{
	uVar0 = &Global_1071686->f_23887.f_366[get_random_int_in_range(0, 15)];
	iVar1 = func_565(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = get_random_int_in_range(0, iVar1);
		if (func_566(uVar0, iVar2, uParam0, fParam1))
		{
			return true;
		}
	}
	return false;
}

void func_477(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, float fParam9, bool bParam10, int iParam11, int iParam12, int iParam13)
{
	if (func_343(255) == 4)
	{
		return;
	}
	if (func_480(vParam0))
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
		func_305(0, 0, 0, 1);
	}
	func_286(0);
	func_286(3);
	Global_1102219->f_3919 = iParam11;
	Global_1102219->f_3920 = iParam12;
	Global_1102219->f_3921 = iParam13;
	func_481(&(Global_1102219->f_3849));
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
	func_482(&(Global_1102219->f_3888));
	Global_1102219->f_3888.f_6 = { vParam4 };
	Global_1102219->f_3888 = fParam7;
	Global_1102219->f_3888.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_483(Global_1102219->f_3849, 36);
	func_484(Global_1102219->f_3888, 36);
}

bool func_478(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_479(var uParam0, int iParam1)
{
	func_567(uParam0, iParam1);
}

bool func_480(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_481(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_482(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_483(struct<29> Param0, var uParam29, int iParam30)
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

void func_484(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

int func_485()
{
	return Global_1102219->f_3672;
}

bool func_486(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

int func_487(bool bParam0, bool bParam1)
{
	if (network_is_player_active(player_id()))
	{
		bVar0 = _0x424b17a7dc5c90bc(player_id());
		if (_0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())))
		{
			if (bVar0)
			{
				_0x0a04a07bc3074edb(1);
			}
			else
			{
				_0x0a04a07bc3074edb(0);
			}
		}
	}
	if (Global_1194053->f_492 != -1 && &Global_1194053->f_503[Global_1194053->f_492] != 0)
	{
		Var2 = { func_568() };
		if (func_358(Global_1194053->f_503[Global_1194053->f_492]->f_19) && func_358(Var2))
		{
			bVar1 = network_are_handles_the_same(&(Global_1194053->f_503[Global_1194053->f_492]->f_19), &Var2);
		}
	}
	if (_0xc08bff658b2e51da(0))
	{
		func_569(bVar1, bParam0);
		if (bParam1)
		{
			func_570();
		}
		return 1;
	}
	return 0;
}

void func_488(int iParam0)
{
	func_411(&(Global_1194053->f_3), iParam0);
}

var func_489(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = sParam1;
	Var0.f_3 = sParam2;
	uVar4 = _0x339e16b41780fc35(uParam0, &Var0, iParam5);
	return uVar4;
}

void func_490(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0))
	{
		return;
	}
	_databinding_remove_binding_array_item_by_data_context_id(Global_1940311->f_242.f_5, uParam0);
	func_571(uParam0);
	_databinding_remove_data_entry(uParam0);
	func_507((Global_1940311->f_242.f_1186 - 1));
}

void func_491(bool bParam0)
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

int func_492(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		return -1;
	}
	return &(Global_1139381->f_5079[iParam0]->f_5[iParam1]);
}

int func_493(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return 2;
			return 2;
		case 2:
			return 3;
	}
}

void func_494(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		return;
	}
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	Global_1139381->f_5079[iParam0]->f_5[iParam1] = iParam2;
}

void func_495(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	(*Global_1139381->f_5079[iParam0])[iParam1] = iParam2;
}

int func_496(int iParam0, int iParam1)
{
	if (iParam1 <= -1)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return 0;
	}
	return Global_1139381->f_5079[iParam0][iParam1];
}

void func_497(var uParam0)
{
	vVar0 = -1;
	vVar0.f_1 = get_cloud_time_as_int();
	switch (*uParam0)
	{
		case 0:
			vVar0.x = 0;
			_0x31010318ba9897ac(&(vVar0.f_2), network_player_id_to_int());
			func_572(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			_0x20f4cb76689acdbc(&(vVar0.f_2));
			func_572(vVar0);
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
				func_573(&Var6, uVar5);
				Jump @392; //curOff = 221
				if (!_0x179a6f0ee2e79026(&(uParam0->f_2)))
				{
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				func_572(vVar0);
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
					func_573(&Var14, uVar5);
				}
			}
			default:
				break;
	}
}

void func_498(var uParam0)
{
	func_574(uParam0, 0);
}

char* func_499(int iParam0, bool bParam1, int iParam2)
{
	sVar0 = "Invalid Posse";
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return sVar0;
	}
	iVar1 = _0x4be6c13a45cca8ec(iParam0);
	if (network_is_player_active(iVar1))
	{
		if (func_473(iParam0))
		{
			iVar2 = iVar1;
			if (iVar2 >= 0 && iVar2 < 32)
			{
				if (Global_1102219->f_17 != (*Global_1100469)[iVar2]->f_17)
				{
					sVar0 = func_575(iParam0, bParam1, iParam2);
					return sVar0;
				}
			}
			if (!_0x595f028698072dd9(-1) && is_orbis_version())
			{
				sVar0 = func_575(iParam0, bParam1, iParam2);
			}
			else
			{
				Var3 = { func_368(iVar1) };
				iVar21 = 0;
				while (iVar21 <= (_0xc084ff658b2e61da(&Var3) - 1))
				{
					if (_0xc084ff658b2e81da(&Var3, iVar21, &Var10) && Var10.f_9)
					{
						iVar20 = 1;
						if (iParam2 == 0)
						{
							sVar0 = func_502(func_576(Var10.f_1), 109029619);
						}
						else
						{
							sVar0 = func_502(func_576(Var10.f_1), iParam2);
						}
					}
					else
					{
						iVar21++;
					}
				}
				if (iVar20 == 0)
				{
					return func_575(iParam0, bParam1, iParam2);
				}
				if (func_577(func_576(Var10.f_1)))
				{
					if (bParam1 == 1 && func_578(iVar1, sVar0))
					{
						sVar0 = func_575(iParam0, bParam1, iParam2);
					}
				}
				else
				{
					func_575(iParam0, bParam1, iParam2);
				}
			}
		}
		else
		{
			sVar0 = func_575(iParam0, bParam1, iParam2);
		}
	}
	return sVar0;
}

char* func_500(int iParam0, bool bParam1)
{
	sVar0 = "";
	*bParam1 = 0;
	if (iParam0 == 80)
	{
		sVar0 = "GF_FEUD_POSSE_LEADER_FEUD";
		*bParam1 = 1;
	}
	if (iParam0 == 81)
	{
		sVar0 = "GF_FEUD_POSSE_FEUD";
		*bParam1 = 1;
	}
	if (iParam0 == 85)
	{
		sVar0 = "GF_FEUD_FEUD";
		*bParam1 = 1;
	}
	if (iParam0 == 82)
	{
		sVar0 = "GF_FEUD_POSSE_INFIGHTING";
		*bParam1 = 1;
	}
	return sVar0;
}

char* func_501(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return "";
	}
	if (!network_is_player_active(iParam0))
	{
		return "";
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return "";
	}
	return func_579(iVar0);
}

char* func_502(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_407(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

struct<8> func_503(struct<17> Param0, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	StringCopy(&cVar0, "GAME_INVITE_HEADER", 64);
	switch (Param0.f_16.f_4)
	{
		case 69:
		case 70:
			cVar0 = { func_580(Param0.f_16.f_7) };
			break;
		case 72:
			iVar8 = func_391(Param0.f_16.f_7);
			if (iVar8 != -1)
			{
				cVar0 = { Global_265377->f_4[iVar8]->f_7 };
			}
			else
			{
				cVar0 = { func_581(Param0.f_16.f_14) };
			}
			break;
		case 96:
			StringCopy(&cVar0, "MG_INVITE_HEADER", 64);
			break;
		case 80:
			StringCopy(&cVar0, "GF_FEUD_TOAST_OPT_IN_PLFEUD", 64);
			break;
		case 81:
			StringCopy(&cVar0, "GF_FEUD_TOAST_OPT_IN_PFEUD", 64);
			break;
		case 85:
			StringCopy(&cVar0, "GF_FEUD_TOAST_OPT_IN_FEUD", 64);
			break;
	}
	return cVar0;
}

char* func_504(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_505()
{
	iVar1 = Global_1296859->f_21;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Var2 = { *Global_1940311->f_242.f_14[iVar0] };
		iVar41 = _databinding_read_data_int(Var2.f_25);
		if (iVar41 < iVar1)
		{
			if (func_582(Var2))
			{
				func_490(Var2);
			}
			return iVar0;
		}
		iVar0++;
	}
	return func_583();
}

void func_506(var uParam0, var uParam1, char[32] cParam2, struct<22> Param10)
{
	func_584(uParam0, uParam1, cParam2, Param10);
	uParam0->f_18 = _databinding_add_data_string(*uParam0, func_362(15), Param10.f_16);
	uParam0->f_19 = _databinding_add_data_string(*uParam0, func_362(17), Param10.f_17);
	uParam0->f_20 = _databinding_add_data_hash(*uParam0, func_362(3), Param10.f_18);
	uParam0->f_21 = _databinding_add_data_hash(*uParam0, func_362(4), Param10.f_19);
	uParam0->f_22 = _databinding_add_data_hash(*uParam0, func_362(5), Param10.f_20);
	uParam0->f_23 = _databinding_add_data_hash(*uParam0, func_362(6), Param10.f_21);
}

void func_507(int iParam0)
{
	Global_1940311->f_242.f_1186 = iParam0;
	_databinding_write_data_string(Global_1940311->f_242.f_6, _0x2b6846401d68e563(to_float(Global_1940311->f_242.f_1186), 0));
}

bool func_508(var uParam0)
{
	return true;
}

int func_509(var uParam0)
{
	if (is_string_null_or_empty(uParam0->f_2))
	{
		return 0;
	}
	else if (is_string_null_or_empty(uParam0->f_3))
	{
		return 0;
	}
	else if (uParam0->f_6 == 0)
	{
		return 0;
	}
	else if (uParam0->f_7 == 0)
	{
		return 0;
	}
	if (uParam0->f_13 == 778915895)
	{
		if (Global_1896738->f_384)
		{
			uParam0->f_4 = _create_var_string(2, "NM_TI_VIEW_INVITE");
		}
		else
		{
			uParam0->f_4 = _create_var_string(2, "NM_TI_ACCEPT_INVITE");
		}
	}
	if (*uParam0 == 5)
	{
		return func_585(func_502(uParam0->f_2, 109029619), func_502(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 6)
	{
		return func_586(func_502(uParam0->f_2, 109029619), func_502(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 1)
	{
		return func_587(func_502(uParam0->f_2, 109029619), func_502(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 3)
	{
		return func_588(func_502(uParam0->f_2, 109029619), func_502(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 2)
	{
		return func_589(func_502(uParam0->f_2, 109029619), func_502(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 4)
	{
		return func_590(func_502(uParam0->f_2, 109029619), func_502(uParam0->f_3, 109029619), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 0)
	{
		return func_265(func_502(uParam0->f_2, 109029619), func_502(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	return 0;
}

int func_510()
{
	return Global_1940311->f_242.f_1185;
}

void func_511()
{
	if (func_591() == -1)
	{
		return;
	}
	func_490(Global_1071686->f_16.f_2.f_1);
	vVar0 = -1;
	Global_1071686->f_16.f_2 = { vVar0 };
}

bool func_512(var uParam0)
{
	return uParam0->f_1;
}

int func_513(int iParam0)
{
	return 60000;
}

void func_514(var uParam0, struct<8> Param1)
{
	_0x443174c20b8b9e7f(uParam0, 119, &Param1);
	Var1 = { Param1 };
	StringConCat(&Var1, "_iOutfitHash", 64);
	_0x529b9ccd0972af4d(uParam0, &Var1);
	Var1 = { Param1 };
	StringConCat(&Var1, "_Array", 64);
	_0x81f4e92be3958364(&(uParam0->f_1), 118, &Var1);
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		Var1 = { Param1 };
		StringConCat(&Var1, "_Array_Idx", 64);
		StringIntConCat(&Var1, iVar0, 64);
		_0x443174c20b8b9e7f(uParam0->f_1[iVar0], 3, &Var1);
		Var9 = { Var1 };
		StringConCat(&Var9, "_CompHash", 64);
		_0x529b9ccd0972af4d(uParam0->f_1[iVar0], &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_WearHash", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_1[iVar0]->f_1), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_eFlags", 64);
		_0xb25b5a375be5be26(&(uParam0->f_1[iVar0]->f_2), &Var9);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

void func_515(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_516(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_517(var uParam0)
{
	Global_1572887->f_266.f_28 = { *uParam0 };
}

int func_518()
{
	Var1.f_12.f_8 = -1;
	Var1.f_12.f_8.f_1 = -1;
	Var1.f_12.f_16.f_12 = -1;
	Var1.f_12.f_16.f_12.f_1 = -1;
	Var1.f_12.f_16.f_14 = 255;
	Var1.f_12.f_16.f_15 = 255;
	Var1.f_57 = -1;
	Var1.f_57.f_1 = -1;
	Var1.f_59 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_1071686->f_16.f_356[iVar0]->f_60 == 0 && !Global_1071686->f_16.f_356[iVar0]->f_61)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (_0x59fa676177dbe4c9(Global_1071686->f_16.f_356[iVar0]->f_60) == 6)
		{
			*Global_1071686->f_16.f_356[iVar0] = { Var1 };
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_519(var uParam0, var uParam1)
{
	return uParam0;
}

int func_520(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_592(Param0, &vVar0))
	{
		return vVar0.z;
	}
	return -1;
}

void func_521(var uParam0)
{
}

bool func_522()
{
	return &Global_1138962 == 3;
}

bool func_523(int iParam0)
{
	return Global_1138962->f_1[iParam0]->f_14 == 2;
}

struct<2> func_524()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_593(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_593(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

bool func_525(int iParam0)
{
	if (_network_has_player_been_banned())
	{
		return true;
	}
	if (network_has_ros_privilege(7))
	{
		return true;
	}
	return false;
}

bool func_526(int iParam0)
{
	if (!func_594(iParam0))
	{
		return false;
	}
	if (Global_1139108->f_6)
	{
		return true;
	}
	return false;
}

int func_527(int iParam0, int iParam1)
{
	return func_595(iParam0, iParam1, &uVar0);
}

bool func_528(int iParam0)
{
	return false;
}

bool func_529(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_596(bParam1, bParam2, bParam3);
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

int func_530(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	uVar0 = func_597(iParam0, iParam1);
	return uVar0;
}

bool func_531(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_11() == 0)
	{
		return func_598(iParam0);
	}
	return iParam0 <= func_599();
}

int func_532(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 6;
		default:
			break;
	}
	return 1;
}

struct<10> func_533(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	func_601(func_600(iParam0), &Var0);
	return Var0;
}

void func_534(int iParam0)
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

int func_535()
{
	return Global_1301323->f_288;
}

int func_536()
{
	return Global_1301323->f_150.f_4;
}

void func_537(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_538(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

void func_539(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0] = (&Global_8123[iParam0] - (Global_8123[iParam0] && iParam1));
		return;
	}
	Global_1071686->f_19674[iParam0] = (&Global_1071686->f_19674[iParam0] - (Global_1071686->f_19674[iParam0] && iParam1));
}

int func_540()
{
	return Global_1572887->f_106.f_75;
}

bool func_541(int iParam0)
{
	return (Global_1572887->f_106.f_15 && iParam0) != 0;
}

int func_542(vector3 vParam0)
{
	iVar0 = -1;
	fVar1 = 999999.9f;
	if (func_480(vParam0))
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
	if (func_446(iVar0))
	{
	}
	else
	{
		iVar0 = -1;
	}
	return iVar0;
}

void func_543(bool bParam0)
{
	if (!bParam0)
	{
		func_345(15);
	}
	else
	{
		func_286(15);
	}
}

bool func_544(int iParam0)
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

int func_545(int iParam0)
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

Vector3 func_546(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 109.6245f;
			return -811.0934f, -1316.408f, 42.678f;
		case 1:
			*uParam1 = 164.0893f;
			return 2631.803f, -1224.319f, 52.3804f;
		case 2:
			*uParam1 = 333.5677f;
			return -328.6093f, -359.6321f, 87.0844f;
		case 3:
			*uParam1 = 301.7008f;
			return -5512.288f, -2914.685f, 0.6403f;
		case 4:
			*uParam1 = 25.8346f;
			return -303.778f, 799.1457f, 118.0019f;
		default:
			break;
	}
	return func_602(iParam0);
}

void func_547(int iParam0)
{
	if (!func_478(Global_1138962->f_145, iParam0))
	{
		func_479(&(Global_1138962->f_145), iParam0);
	}
}

void func_548(vector3 vParam0, var uParam3, bool bParam4)
{
	if (func_603(vParam0, uParam3))
	{
		func_341(1, bParam4);
	}
}

bool func_549(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam0 == 3)
	{
		return iParam1 != -1;
	}
	return iParam1 != 0;
}

void func_550()
{
	if (network_is_player_active(player_id()))
	{
		if (func_379(1048576, player_id()) || Global_1296851->f_2.f_1 == 2)
		{
			func_604();
		}
	}
	if (_get_wanted_intensity_for_player(Global_1296859->f_10) > 0)
	{
		if (func_605())
		{
			func_606();
		}
		func_607();
	}
}

void func_551(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_1572887->f_106 = iParam0;
	Global_1572887->f_106.f_9 = iParam1;
	Global_1572887->f_106.f_10 = iParam2;
	if (bParam3)
	{
		func_460();
	}
}

void func_552(struct<2> Param0, bool bParam2)
{
	Global_1572887->f_106.f_11 = { Param0 };
	if (bParam2)
	{
		func_460();
	}
}

void func_553(int iParam0)
{
	Global_1572887->f_106.f_13 = iParam0;
}

void func_554(var uParam0, bool bParam1)
{
	Global_1572887->f_106.f_74 = uParam0;
	if (bParam1)
	{
		func_460();
	}
}

void func_555()
{
	func_404(&(Global_1572887->f_7), 1);
	func_404(&(Global_1572887->f_7), 1073741824);
	func_460();
}

int func_556(struct<2> Param0)
{
	if (func_608())
	{
		return 0;
	}
	if (!func_465(Param0))
	{
		return 0;
	}
	*Global_1051213 = { Param0 };
	return 1;
}

bool func_557(int iParam0, var uParam1)
{
	if (!func_446(iParam0))
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

void func_558(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	if (func_343(255) == 4)
	{
		return;
	}
	if (bParam3)
	{
		if (func_480(uParam0->f_17.f_6))
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
	if (func_480(uParam1->f_6))
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
	func_286(0);
	func_286(3);
	Global_1102219->f_3919 = iParam2;
	Global_1102219->f_3920 = bParam3;
	Global_1102219->f_3921 = iParam4;
	func_481(&(Global_1102219->f_3849));
	Global_1102219->f_3849 = { *uParam0 };
	func_482(&(Global_1102219->f_3888));
	Global_1102219->f_3888 = { *uParam1 };
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_483(Global_1102219->f_3849, 36);
	func_484(Global_1102219->f_3888, 36);
}

void func_559(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8)
{
	vVar0 = { get_entity_coords(player_ped_id(), false, false) };
	iVar3 = iParam3;
	if (!func_609(Global_1296859->f_17, &vVar0, &iVar3))
	{
		vVar0 = { get_entity_coords(player_ped_id(), false, false) };
		iVar3 = iParam3;
	}
	func_477(vParam0, iParam3, vVar0, iVar3, iParam4, iParam5, iParam6, iParam7, fParam8, 1);
}

bool func_560(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (_0xc088ff658b2e51da() - 1))
	{
		if (&Global_1194053->f_503[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_561(int iParam0)
{
	if (func_610(iParam0, 1))
	{
		func_611(iParam0);
	}
	func_612(iParam0, 1);
}

int func_562(int iParam0, int iParam1)
{
	if (Global_1194053->f_1 != 0)
	{
		return 1;
	}
	if (_0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())))
	{
		if (_0x424b17a7dc5c90bc(player_id()))
		{
			_0x0a04a07bc3074edb(1);
		}
		else
		{
			_0x0a04a07bc3074edb(0);
		}
	}
	func_613(iParam0);
	iVar0 = _0xc088ff658b2e51da();
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (&Global_1194053->f_503[iVar1] == iParam0)
		{
			Global_1194053->f_492 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	Global_1194053->f_14 = { Global_1194053->f_503[Global_1194053->f_492]->f_19 };
	Global_1194053->f_14.f_7 = iParam0;
	if (network_is_gamer_in_my_session(&(Global_1194053->f_14)))
	{
		iVar2 = network_get_player_from_gamer_handle(&(Global_1194053->f_14));
		if (network_is_player_active(iVar2))
		{
			iVar3 = _0x901e0dc25080c8b9(iVar2);
			Global_1194053->f_14.f_9 = iVar3;
		}
	}
	func_563(4);
	func_564(32);
	func_561(4);
	Var4 = { func_568() };
	if (network_are_handles_the_same(&(Global_1194053->f_503[iVar1]->f_19), &Var4) && iParam1 == 1)
	{
		func_564(16);
	}
	return 1;
}

void func_563(int iParam0)
{
	Global_1194053->f_1 = iParam0;
}

void func_564(int iParam0)
{
	func_404(&(Global_1194053->f_3), iParam0);
}

int func_565(var uParam0)
{
	Var0 = Global_1071686->f_23887.f_366.f_4085;
	Var0.f_2 = 1593794963;
	Var0.f_3 = uParam0;
	return _datafile_get_num_nodes(&Var0);
}

bool func_566(var uParam0, int iParam1, var uParam2, float fParam3)
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

void func_567(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<7> func_568()
{
	network_get_local_handle(&Var0);
	return Var0;
}

void func_569(bool bParam0, bool bParam1)
{
	if (network_is_session_active())
	{
		if (Global_1194053->f_492 != -1)
		{
			Var0.f_4 = 11;
			Var0.f_7 = &Global_1194053->f_503[Global_1194053->f_492];
			Var0.f_5 = Global_1296859->f_15;
			Var0.f_9 = bParam0;
			Var0.f_10 = bParam1;
			func_614(&Var0);
			func_561(5);
		}
	}
	else if (Global_1194053->f_492 != -1)
	{
		func_615(&(Global_1194053->f_503[Global_1194053->f_492]), bParam0, bParam1);
	}
}

void func_570()
{
	vVar0 = { func_616(255) };
	if (vVar0.z != 0)
	{
		iVar3 = func_617(player_id());
		if ((iVar3 != -1 && (*Global_1131196)[iVar3]->f_9 == player_id()) && func_618(&vVar0))
		{
			func_619(vVar0.y, -1896177107, 0, 0);
			return;
		}
	}
}

void func_571(var uParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(uParam0, func_362(91));
	if (func_620(iVar0))
	{
		_0x2f901291ef177b02(iVar0, 1);
	}
}

void func_572(vector3 vParam0)
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

void func_573(var uParam0, var uParam1)
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

void func_574(var uParam0, int iParam1)
{
	uParam0->f_1 = get_network_time_accurate();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = get_time_offset(uParam0->f_1, iParam1);
	}
	func_515(uParam0, 1);
	func_516(uParam0, 2);
	uParam0->f_2 = 0;
}

char* func_575(int iParam0, bool bParam1, int iParam2)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return "";
	}
	if (!network_is_player_active(_0x4be6c13a45cca8ec(iParam0)))
	{
		return "";
	}
	if (bParam1)
	{
		if (iParam2 == 0)
		{
			return _create_var_string(10, "NM_POSSE_NAME_DEFAULT", func_264(get_player_name(_0x4be6c13a45cca8ec(iParam0)), 109029619));
		}
		else
		{
			sVar0 = _create_var_string(10, "NM_POSSE_NAME_DEFAULT", func_264(get_player_name(_0x4be6c13a45cca8ec(iParam0)), 109029619));
			return func_407(sVar0, iParam2);
		}
	}
	if (iParam2 == 0)
	{
		return _create_var_string(10, "NM_POSSE_NAME_DEFAULT", get_player_name(_0x4be6c13a45cca8ec(iParam0)));
	}
	sVar0 = _create_var_string(10, "NM_POSSE_NAME_DEFAULT", get_player_name(_0x4be6c13a45cca8ec(iParam0)));
	return func_407(sVar0, iParam2);
}

char* func_576(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

bool func_577(char* sParam0)
{
	return _0xd4022c7286b0dfa2(sParam0, 100, 22);
}

bool func_578(int iParam0, char* sParam1)
{
	sVar0 = get_player_name(iParam0);
	iVar1 = get_length_of_literal_string(sVar0);
	if (compare_strings(sVar0, sParam1, false, iVar1) == 0)
	{
		return true;
	}
	return false;
}

char* func_579(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_342(40, iParam0))
		{
			return _0xd8402b858f4ddd88(&(Global_1102219->f_12), get_length_of_literal_string(&(Global_1102219->f_12)));
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
	if (!&Global_1296859->f_22[iParam0])
	{
		return sVar0;
	}
	if (func_342(40, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1100469)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1100469)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1296859->f_154[iParam0]));
}

struct<8> func_580(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_42;
}

struct<8> func_581(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1296859->f_10;
	}
	return (*Global_263042)[iParam0]->f_1.f_37;
}

bool func_582(struct<38> Param0, var uParam38)
{
	if (!_databinding_is_data_id_valid(Param0.f_37))
	{
		return _databinding_is_data_id_valid(Param0);
	}
	return _databinding_read_data_bool(Param0.f_37);
}

int func_583()
{
	iVar4 = _databinding_read_data_int(Global_1940311->f_242.f_14[0]->f_25);
	iVar5 = _databinding_read_data_int(Global_1940311->f_242.f_14[0]->f_35);
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = _databinding_read_data_int(Global_1940311->f_242.f_14[iVar0]->f_25);
		iVar2 = _databinding_read_data_int(Global_1940311->f_242.f_14[iVar0]->f_35);
		if (iVar1 < iVar4)
		{
			iVar3 = iVar0;
			iVar4 = iVar1;
			iVar5 = iVar2;
		}
		else if (iVar1 == iVar4)
		{
			if (iVar2 < iVar5)
			{
				iVar3 = iVar0;
				iVar4 = iVar1;
				iVar5 = iVar2;
			}
		}
		iVar0++;
	}
	func_490(&(Global_1940311->f_242.f_14[iVar3]));
	return iVar3;
}

void func_584(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = _databinding_add_data_container(uParam1, &cParam2);
	uParam0->f_1 = _databinding_add_data_bool(*uParam0, func_362(0), Param10);
	uParam0->f_2 = _databinding_add_data_bool(*uParam0, func_362(1), Param10.f_1);
	uParam0->f_3 = _databinding_add_data_hash(*uParam0, func_362(2), Param10.f_2);
	uParam0->f_4 = _databinding_add_data_hash(*uParam0, func_362(54), Param10.f_3);
	uParam0->f_5 = _databinding_add_data_hash(*uParam0, func_362(55), Param10.f_4);
	uParam0->f_7 = _databinding_add_data_hash(*uParam0, func_362(57), Param10.f_5);
	uParam0->f_6 = _databinding_add_data_hash(*uParam0, func_362(56), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = -672301300;
	}
	uParam0->f_8 = _databinding_add_data_hash(*uParam0, func_362(58), Param10.f_7);
	uParam0->f_9 = _databinding_add_data_bool(*uParam0, func_362(59), Param10.f_8);
	uParam0->f_10 = _databinding_add_data_bool(*uParam0, func_362(60), Param10.f_9);
	uParam0->f_11 = _databinding_add_data_hash(*uParam0, func_362(61), Param10.f_10);
	uParam0->f_13 = _databinding_add_data_hash(*uParam0, func_362(67), Param10.f_11);
	uParam0->f_12 = _databinding_add_data_hash(*uParam0, func_362(62), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = -672301300;
	}
	uParam0->f_14 = _databinding_add_data_hash(*uParam0, func_362(64), Param10.f_13);
	uParam0->f_15 = _databinding_add_data_bool(*uParam0, func_362(65), Param10.f_14);
	uParam0->f_16 = _databinding_add_data_bool(*uParam0, func_362(66), Param10.f_15);
}

var func_585(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16)
{
	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_9 = uParam4;
	Var0.f_9.f_1 = uParam5;
	Var0.f_9.f_2 = uParam6;
	Var0.f_9.f_3 = uParam7;
	Var0.f_4.f_2 = uParam15;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = uParam16;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_586(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19)
{
	Var0 = -2;
	Var0 = uParam11;
	Var0.f_1 = uParam12;
	Var0.f_2 = uParam13;
	Var0.f_3 = iParam15;
	Var0.f_9 = uParam7;
	Var0.f_9.f_1 = uParam8;
	Var0.f_9.f_2 = uParam9;
	Var0.f_9.f_3 = uParam10;
	Var0.f_4.f_2 = uParam18;
	Var13.f_9 = 1;
	Var13 = uParam14;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = uParam19;
	uVar23 = _show_notification(&Var0, &Var13, iParam16, iParam17);
	return uVar23;
}

var func_587(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13)
{
	Var0 = -2;
	Var0 = uParam7;
	Var0.f_1 = uParam8;
	Var0.f_2 = uParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = uParam4;
	Var0.f_4.f_1 = uParam6;
	Var0.f_4.f_2 = uParam5;
	Var13.f_7 = 1;
	Var13 = uParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = 1;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

var func_588(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16)
{
	Var0 = -2;
	Var0 = uParam10;
	Var0.f_1 = uParam11;
	Var0.f_2 = uParam12;
	Var0.f_3 = iParam14;
	Var0.f_4 = uParam7;
	Var0.f_4.f_1 = uParam9;
	Var0.f_4.f_2 = uParam8;
	Var13.f_9 = 1;
	Var13 = uParam13;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = 1;
	uVar23 = _show_notification(&Var0, &Var13, iParam15, iParam16);
	return uVar23;
}

var func_589(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
{
	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = 1;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_590(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
{
	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = uParam2;
	Var13.f_4 = uParam3;
	Var13.f_5 = uParam4;
	Var13.f_7 = 1;
	uVar21 = _0x3f9fddba79117c69(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

int func_591()
{
	return Global_1071686->f_16.f_2;
}

bool func_592(struct<2> Param0, char* sParam2)
{
	if (!func_465(Param0))
	{
		return false;
	}
	func_621(sParam2);
	switch (Param0)
	{
		case 2:
			_copy_memory(sParam2, Global_1071686->f_636[Param0.f_1], 3);
			return true;
		case 3:
			_copy_memory(sParam2, Global_1071686->f_636.f_602[Param0.f_1], 3);
			return true;
		case 4:
			_copy_memory(sParam2, Global_1071686->f_636.f_2104[Param0.f_1], 3);
			return true;
		case 5:
			_copy_memory(sParam2, Global_1071686->f_636.f_12606[Param0.f_1], 3);
			return true;
		case 6:
			_copy_memory(sParam2, Global_1071686->f_636.f_12908[Param0.f_1], 3);
			return true;
		case 7:
			_copy_memory(sParam2, Global_1071686->f_636.f_15910[Param0.f_1], 3);
			return true;
		case 8:
			_copy_memory(sParam2, Global_1071686->f_636.f_16512[Param0.f_1], 3);
			return true;
		default:
			break;
	}
	return false;
}

struct<2> func_593(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_594(int iParam0)
{
	return Global_1138962->f_1[iParam0]->f_1 == 2;
}

int func_595(int iParam0, int iParam1, var uParam2)
{
	iVar1 = _0x15e90b6a993017aa();
	if (!func_594(iParam0))
	{
		return 0;
	}
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (_0x10342cc82e8356e9(iVar0, uParam2))
		{
			if (uParam2->f_2 == iParam1)
			{
				func_622(uParam2->f_1, iParam0);
				if (*uParam2 == 1)
				{
					if (uParam2->f_3 > Global_1139108->f_7)
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_596(bool bParam0, bool bParam1, bool bParam2)
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

var func_597(int iParam0, int iParam1)
{
	return Global_1138962->f_1[iParam0]->f_15[iParam1]->f_1;
}

bool func_598(int iParam0)
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

int func_599()
{
	if (func_11() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

int func_600(int iParam0)
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

int func_601(int iParam0, var uParam1)
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

Vector3 func_602(int iParam0)
{
	return Global_1138962->f_1[iParam0]->f_7;
}

bool func_603(vector3 vParam0, var uParam3)
{
	if (func_480(vParam0))
	{
		return false;
	}
	if (func_343(255) == 4)
	{
		return false;
	}
	if (func_342(4, 255))
	{
	}
	func_286(4);
	func_623(&(Global_1102219->f_3879));
	Global_1102219->f_3879.f_6 = { vParam0 };
	Global_1102219->f_3879 = uParam3;
	Global_1102219->f_3879.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_624(Global_1102219->f_3879, 36);
	return true;
}

void func_604()
{
	if (!_0x424b17a7dc5c90bc(Global_1296859->f_10))
	{
		return;
	}
	iVar0 = func_625();
	if (iVar0 > 0)
	{
		func_626(-1228177771, iVar0, 0);
	}
}

bool func_605()
{
	return (func_529(Global_1296859->f_10, 1, 0, 1) && func_627() > 0);
}

void func_606()
{
	if (!_0x424b17a7dc5c90bc(Global_1296859->f_10))
	{
		return;
	}
	iVar0 = func_627();
	if (iVar0 > 0)
	{
		func_628(iVar0, 0, -142743235, 0);
	}
}

void func_607()
{
	iVar0 = player_id();
	_0x062b4a4a3396351d(iVar0);
	func_629();
}

bool func_608()
{
	return func_465(*Global_1051213);
}

bool func_609(vector3 vParam0, var uParam3, int iParam4)
{
	uVar0 = &Global_1071686->f_23887.f_366[func_630(vParam0)];
	iVar1 = func_565(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = get_random_int_in_range(0, iVar1);
		if (func_566(uVar0, iVar2, uParam3, iParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_610(int iParam0, int iParam1)
{
	return func_252(&(Global_1194053->f_5[iParam0]), iParam1);
}

void func_611(int iParam0)
{
	Global_1194053->f_5[iParam0] = 0;
}

void func_612(int iParam0, int iParam1)
{
	func_404(Global_1194053->f_5[iParam0], iParam1);
}

void func_613(int iParam0)
{
	Global_17411.f_55.f_14.f_4 = iParam0;
}

void func_614(var uParam0)
{
	*uParam0 = 23;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	uVar0 = func_631(0, 8);
	trigger_script_event(1, uParam0, 11, 40, &uVar0);
}

void func_615(var uParam0, bool bParam1, bool bParam2)
{
	if (func_632(1))
	{
		return;
	}
	Global_1194053->f_498 = uParam0;
	func_633(1);
	if (bParam2)
	{
		func_633(4);
	}
	if (bParam1)
	{
		func_633(2);
	}
}

Vector3 func_616(int iParam0)
{
	if (iParam0 == 255)
	{
		return (*Global_1134390)[func_485()]->f_38;
	}
	return (*Global_1134390)[iParam0]->f_38;
}

int func_617(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

bool func_618(var uParam0)
{
	if (func_634(32) && func_635(uParam0->f_2))
	{
		return false;
	}
	if (*uParam0 > 4)
	{
		return true;
	}
	return false;
}

int func_619(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	vVar0.f_2 = -2;
	vVar0.f_1 = uParam0;
	vVar0.x = func_636(iParam1);
	Global_1132288->f_2036.f_3 = bParam2;
	if (bParam2)
	{
		if (!func_637(vVar0, 1))
		{
			return 0;
		}
		func_638(1);
	}
	if (func_639(vVar0, 0))
	{
		if (iParam3 == 0)
		{
			func_640(vVar0.y);
		}
		return 1;
	}
	return 0;
}

bool func_620(int iParam0)
{
	return iParam0 != 0;
}

void func_621(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_622(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return (iParam0 == -471827042 || iParam0 == -92667149);
		default:
			break;
	}
	return iParam0 == -92667149;
}

void func_623(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_624(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

int func_625()
{
	iVar0 = Global_1296851->f_2.f_4;
	if (!func_531(iVar0))
	{
		iVar0 = _network_get_cash_balance();
	}
	return iVar0;
}

int func_626(int iParam0, int iParam1, int iParam2)
{
	return func_641(iParam0, iParam1, iParam2);
}

int func_627()
{
	iVar0 = func_642(120839576, 59806960, 1, 0, 1, 0);
	if (!func_531(iVar0))
	{
		iVar0 = _network_get_cash_balance();
	}
	return iVar0;
}

int func_628(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	iVar0 = -1;
	Var1 = { func_643(2084597891, 1, 0) };
	Var6 = { func_644(2084597891, Var1, Var1.f_4, iParam0, 1) };
	Var6.f_12 = iParam2;
	iVar0 = func_645(1702063850, &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var22.f_7 = -142743235;
		Var22.f_16 = -1;
		StringCopy(&(Var22.f_12), sParam1, 32);
		func_646(iVar0, Var22);
	}
	return iVar0;
}

void func_629()
{
	_0x748c5f51a18cb8f0(0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_647(iVar0))
		{
			func_648(iVar0);
		}
		iVar0++;
	}
	_0x748c5f51a18cb8f0(1);
}

int func_630(vector3 vParam0)
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

var func_631(int iParam0, int iParam1)
{
	return func_649(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

bool func_632(int iParam0)
{
	return func_252(Global_1194053->f_4, iParam0);
}

void func_633(int iParam0)
{
	func_404(&(Global_1194053->f_4), iParam0);
}

bool func_634(int iParam0)
{
	return func_478((*Global_1134390)[network_player_id_to_int()]->f_73, iParam0);
}

bool func_635(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (&Global_1132288->f_2020[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_636(int iParam0)
{
	switch (iParam0)
	{
		case -1896177107:
			return 4;
		case 2042309940:
			return 7;
		default:
			break;
	}
	return -1;
}

bool func_637(struct<2> Param0, var uParam2, int iParam3)
{
	if (func_650())
	{
		return false;
	}
	if (func_651(Param0.f_1, Param0))
	{
		return false;
	}
	if (!func_652(iParam3, 1))
	{
		return false;
	}
	if (func_653())
	{
		return false;
	}
	if (func_634(64))
	{
		if (!func_655(func_654(Param0), 1, 59806960))
		{
			return false;
		}
	}
	return true;
}

void func_638(int iParam0)
{
	Global_1132288->f_2027.f_5 = iParam0;
}

bool func_639(vector3 vParam0, int iParam3)
{
	if (vParam0.x < 4)
	{
		vParam0.x = 4;
	}
	if (!func_652(0, 1))
	{
		return false;
	}
	(*Global_1134390)[network_player_id_to_int()]->f_33 = { vParam0 };
	(*Global_1134390)[network_player_id_to_int()]->f_33.f_3 = get_random_int_in_range(0, 65536);
	func_656();
	if (iParam3 == 1)
	{
		func_657(2);
	}
	else
	{
		Global_1137047->f_330.f_6 = 1;
		func_658(2);
	}
	if (!func_659(network_player_id_to_int()))
	{
		func_658(8);
		func_660();
	}
	if (!func_661(4) && (func_661(8) || func_661(16)))
	{
		func_657(4);
	}
	else
	{
		func_658(4);
	}
	if (func_478(Global_1137047->f_8, 1))
	{
		func_657(1);
	}
	else
	{
		func_658(1);
	}
	func_662(6);
	return true;
}

void func_640(int iParam0)
{
	if (!func_634(64))
	{
		return;
	}
	switch (iParam0)
	{
		case 1357161730:
			iVar0 = -920598405;
			break;
		case 1581179681:
			iVar0 = -809127215;
			break;
		case -215258135:
			iVar0 = 736160934;
			break;
		case -987049424:
			iVar0 = -232950171;
			break;
		case 892234183:
			iVar0 = -348618743;
			break;
		case -1554232707:
			iVar0 = 210917480;
			break;
		case -682748:
			iVar0 = 326175668;
			break;
		case 1538293636:
			iVar0 = 131399519;
			break;
		case -1992167326:
			iVar0 = -53531786;
			break;
		case -1884014371:
			iVar0 = 779743808;
			break;
		case -1871413878:
			iVar0 = 662806622;
			break;
		case 1483778247:
			iVar0 = 687704893;
			break;
		case -724534761:
			iVar0 = 1706859953;
			break;
		default:
			return;
	}
	func_664(func_663(1307101198, iVar0), 1);
}

int func_641(int iParam0, int iParam1, int iParam2)
{
	if (Global_1248240->f_8903.f_97 >= 10)
	{
		return -1;
	}
	if (iParam0 == 1393257577)
	{
		iVar0 = Global_1248240->f_8903.f_99;
		iVar1 = Global_1248240->f_8903.f_97;
		while (iVar1 > 0)
		{
			iVar0 = (iVar0 - 1);
			if (iVar0 < 0)
			{
				iVar0 = 9;
			}
			if (&Global_1248240->f_8903.f_16[iVar0] == iParam0)
			{
				return -1;
			}
			iVar1 = (iVar1 - 1);
		}
	}
	iVar2 = Global_1248240->f_8903.f_99;
	Global_1248240->f_8903.f_16[iVar2] = iParam0;
	Global_1248240->f_8903.f_16[iVar2]->f_5 = iParam2;
	Global_1248240->f_8903.f_16[iVar2]->f_6 = iParam1;
	Global_1248240->f_8903.f_97++;
	Global_1248240->f_8903.f_99 = (Global_1248240->f_8903.f_99 + 1 % 10);
	return iVar2;
}

int func_642(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && iParam1 == -915411861) && func_665(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_666(iParam0))
	{
		return func_668(func_667(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_669(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

struct<5> func_643(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_670(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_671(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_672(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_673(bParam1) };
			if (bParam2 && func_674(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_675(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_675(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_676(iParam0, &Var6, 1728382685))
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
			Var0 = { func_677(bParam1) };
			switch (func_678(iParam0))
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
			if (func_679(iParam0, -1823706425))
			{
				Var0 = { func_672(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_679(iParam0, -1483207246))
			{
				Var0 = { func_672(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_672(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_679(iParam0, -1653629781))
			{
				Var0 = { func_672(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_680(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_679(iParam0, -1653629781))
			{
				Var0 = { func_672(1384535894, Var0, 1784584921, bParam1) };
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

struct<16> func_644(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_672(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_681(iParam0, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_1() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_645(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_682(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_684(func_683(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_685(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_646(int iParam0, struct<17> Param1)
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
			if (Global_1293346->f_20.f_1[iVar0]->f_1 == 1 || Global_1293346->f_20.f_1[iVar0]->f_1 == 5)
			{
				Global_1293346->f_20.f_1[iVar0]->f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

bool func_647(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

void func_648(int iParam0)
{
	_0x748c5f51a18cb8f0(0);
	if (!func_647(iParam0))
	{
		return;
	}
	func_686(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_446(iVar0))
		{
			if (func_688(func_687(iVar0, 1, 1)) == iParam0)
			{
				func_689(iVar0, 0);
				func_690(iVar0, 0, 350);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (func_691(iVar1))
		{
			if (func_692(iVar1) == iParam0)
			{
				func_693(iVar1, 0);
			}
		}
		iVar1++;
	}
	_0x748c5f51a18cb8f0(1);
}

var func_649(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_261() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_694());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_694());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_694());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_695(get_player_team(iVar5)));
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
			if (func_385(iVar2))
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
				if (iVar9 & 8192 != 0 && func_343(iVar2) != 1)
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
					if (!func_696(iVar10))
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

bool func_650()
{
	bVar0 = (((Global_1132288->f_2019 == 2 || (Global_1132288->f_2019 >= 6 && Global_1132288->f_2019 <= 11)) || Global_1132288->f_2019 == 12) || (Global_1132288->f_2019 >= 13 && Global_1132288->f_2019 <= 19));
	return bVar0;
}

bool func_651(int iParam0, int iParam1)
{
	iVar0 = _0x901e0dc25080c8b9(player_id());
	vVar1 = { func_698(func_697(iVar0)) };
	return (vVar1.y == iParam0 && iParam1 == vVar1.x);
}

bool func_652(int iParam0, int iParam1)
{
	if ((!func_322() || !network_is_game_in_progress()) || !network_is_session_active())
	{
		return false;
	}
	if (!func_634(16))
	{
		return false;
	}
	if (func_12())
	{
		if (!_unlock_is_unlocked(-75008140))
		{
			return false;
		}
	}
	if (!func_699())
	{
		return false;
	}
	if (func_700(16))
	{
		return false;
	}
	iVar0 = _0x901e0dc25080c8b9(player_id());
	if (iParam1 == 1 && (!_0xd6f6acf4392187fb(iVar0) || !_0x424b17a7dc5c90bc(player_id())))
	{
		return false;
	}
	if (iParam0 == 1 && func_478(Global_1137047->f_8, 1))
	{
		return false;
	}
	if (func_701())
	{
		return false;
	}
	return true;
}

bool func_653()
{
	return Global_1132288->f_2027.f_7 == 3;
}

int func_654(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -1975753417;
		case 7:
			return -142724881;
		default:
			break;
	}
	return 0;
}

bool func_655(int iParam0, int iParam1, int iParam2)
{
	iVar0 = (func_702(iParam0, 0, iParam2) * iParam1);
	bVar1 = false;
	if (iVar0 == 0)
	{
	}
	if (iVar0 >= 0)
	{
		bVar1 = func_531(iVar0);
	}
	return bVar1;
}

void func_656()
{
	(*Global_1134390)[network_player_id_to_int()]->f_33.f_4 = 0;
}

void func_657(int iParam0)
{
	func_479(&((*Global_1134390)[network_player_id_to_int()]->f_33.f_4), iParam0);
}

void func_658(int iParam0)
{
	func_437(&((*Global_1134390)[network_player_id_to_int()]->f_33.f_4), iParam0);
}

bool func_659(int iParam0)
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

void func_660()
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

bool func_661(int iParam0)
{
	return func_478(Global_1137047->f_8, iParam0);
}

void func_662(int iParam0)
{
	Global_1132288->f_2019 = iParam0;
}

struct<2> func_663(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_664(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_665(int iParam0, int iParam1)
{
	if (!func_703(iParam0, 0))
	{
		return false;
	}
	if (func_666(iParam0))
	{
		return func_704(func_667(iParam0, 0), iParam1, 0);
	}
	return _0xdee7b3c76ed664be(iParam0, iParam1) > 0;
}

bool func_666(int iParam0)
{
	if (func_705(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_667(int iParam0, bool bParam1)
{
	if (!func_703(iParam0, 0))
	{
		return func_707(func_706(iParam0), bParam1);
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

int func_668(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_708(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_669(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_703(iParam0, 0))
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
		func_709(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

struct<4> func_670(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_710(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_672(1328661203, func_1(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_672(1328661203, func_1(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_672(1328661203, func_1(), -1591664384, bParam0);
}

int func_671(int iParam0)
{
	if (!func_703(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_672(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_703(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_710(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_673(bool bParam0)
{
	iVar0 = func_710(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_672(923904168, func_670(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_672(923904168, func_670(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_672(923904168, func_670(bParam0), -740156546, 0);
}

bool func_674(int iParam0, bool bParam1)
{
	if (func_678(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_711();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_675(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_712(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_676(int iParam0, var uParam1, int iParam2)
{
	if (func_713(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_677(bool bParam0)
{
	iVar0 = func_710(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_672(271701509, func_670(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_672(271701509, func_670(bParam0), 12999093, 0);
}

int func_678(int iParam0)
{
	if (!func_703(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_679(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_678(iParam0);
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
			if (func_714(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_680(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_715(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_681(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

bool func_682(int iParam0, var uParam1)
{
	uVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_716(uParam1->f_8, iParam0, uVar0, 2048) || func_716(uParam1->f_8, iParam0, uVar0, 32768)) || func_716(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_716(uParam1->f_8, iParam0, uVar0, 4) || func_716(uParam1->f_8, iParam0, uVar0, 256)) || func_716(uParam1->f_8, iParam0, uVar0, 65536)) || func_716(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_716(uParam1->f_8, iParam0, uVar0, 1) || func_716(uParam1->f_8, iParam0, uVar0, 8)) || func_716(uParam1->f_8, iParam0, uVar0, 65536)) || func_716(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_716(uParam1->f_8, iParam0, uVar0, 1) || func_716(uParam1->f_8, iParam0, uVar0, 16)) || func_716(uParam1->f_8, iParam0, uVar0, 2)) || func_716(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_716(uParam1->f_8, iParam0, uVar0, 8) || func_716(uParam1->f_8, iParam0, uVar0, 4096)) || func_716(uParam1->f_8, iParam0, uVar0, 256)) || func_716(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_683(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_684(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_717(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_717(iParam1, 2, 0, 0);
	return -1;
}

int func_685(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_717(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

void func_686(int iParam0, bool bParam1)
{
	if (!func_647(iParam0))
	{
		return;
	}
	if (func_718(iParam0, 2) && !bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_719(iParam0, 1);
	}
	else
	{
		func_720(iParam0, 1);
	}
	func_721(iParam0, bParam1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_692(iVar0) == iParam0)
		{
			func_693(iVar0, 0);
		}
		iVar0++;
	}
}

int func_687(int iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 81:
			if (func_722(iParam0))
			{
				return 305496830;
			}
			else
			{
				return -1482428221;
			}
			break;
		case 111:
			if (func_722(iParam0))
			{
				return -1323821455;
			}
			else
			{
				return -1994249944;
			}
			break;
		case 5:
			if (func_11() != -1 && func_723() == 1339372314)
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
			if (!bParam1 || func_11() != -1)
			{
				return 1624541293;
			}
			if (func_724(44))
			{
				return 1624541293;
			}
			else
			{
				return 1716860278;
			}
			break;
		case 98:
			if (func_11() != -1)
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
			if (func_11() != -1)
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
			if (func_11() != -1)
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
			if (func_11() != -1)
			{
				return -877373104;
			}
			if (!bParam1)
			{
				return 1024208566;
			}
			if (func_724(44))
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
		iVar0 = func_725(iParam0);
		if (iVar0 != -1)
		{
			return func_726(iVar0, bParam1);
		}
	}
	return 0;
}

int func_688(int iParam0)
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

void func_689(int iParam0, bool bParam1)
{
	if (!func_446(iParam0))
	{
		return;
	}
	bVar0 = func_450(iParam0, 67108864);
	if (bParam1)
	{
		if (!bVar0)
		{
			func_728(iParam0, func_727());
			func_729(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_539(iParam0, 67108864);
		func_728(iParam0, -15);
	}
	func_730(iParam0);
}

void func_690(int iParam0, bool bParam1, int iParam2)
{
	if (!func_446(iParam0))
	{
		return;
	}
	if (func_731(iParam0) && !bParam1)
	{
		return;
	}
	if (_does_volume_exist((*Global_1887339)[iParam0]->f_6))
	{
		iVar0 = (*Global_1887339)[iParam0]->f_6;
	}
	else
	{
		iVar0 = func_732(iParam0);
	}
	bVar1 = func_450(iParam0, 33554432);
	if (bParam1)
	{
		iVar2 = func_733(iParam0);
		if (iParam2 > iVar2)
		{
			func_734(iParam0, func_727());
			func_735(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_729(iParam0, 33554432);
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
		func_539(iParam0, 33554432);
		func_734(iParam0, -15);
		if (_does_volume_exist(iVar0))
		{
			_0xf2a2177ac848b3a8(iVar0, 1, 1);
		}
	}
	func_736(iParam0);
}

bool func_691(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_692(int iParam0)
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

void func_693(int iParam0, bool bParam1)
{
	if (!func_691(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_737(iParam0, 1);
	}
	else
	{
		if (func_738(iParam0))
		{
			return;
		}
		func_739(iParam0, 1);
	}
	func_740(iParam0, bParam1);
}

char* func_694()
{
	return "unnamed";
}

int func_695(int iParam0)
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

bool func_696(int iParam0)
{
	if (func_741(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_742(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

int func_697(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return -1;
	}
	if (iParam0 == _0x901e0dc25080c8b9(player_id()))
	{
		return func_617(player_id());
	}
	return func_743(_0x4be6c13a45cca8ec(iParam0));
}

Vector3 func_698(int iParam0)
{
	if (!func_744(iParam0))
	{
		return vVar0;
	}
	return (*Global_1131196)[iParam0]->f_1;
}

bool func_699()
{
	return !func_634(2);
}

bool func_700(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_701()
{
	iVar0 = func_617(player_id());
	if (iVar0 != -1)
	{
		if ((*Global_1131196)[iVar0]->f_18.f_1 != 0 && func_478((*Global_1131196)[iVar0]->f_18, 1))
		{
			return true;
		}
	}
	return false;
}

int func_702(int iParam0, bool bParam1, int iParam2)
{
	if (!func_703(iParam0, 0))
	{
		return 0;
	}
	return func_642(iParam0, iParam2, 1, bParam1, 1, 0);
}

bool func_703(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_704(int iParam0, int iParam1, bool bParam2)
{
	if (!func_745(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_746(iParam0, iParam1);
	}
	return true;
}

int func_705(int iParam0, int iParam1)
{
	if (!func_703(iParam0, 0))
	{
		return func_747(func_706(iParam0), iParam1);
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

int func_706(int iParam0)
{
	return iParam0;
}

int func_707(int iParam0, bool bParam1)
{
	if (!func_748(iParam0, 2))
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

bool func_708(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_745(iParam0))
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
		func_749(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

void func_709(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_678(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_710(bool bParam0)
{
	if (func_11() == -1)
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

bool func_711()
{
	return (func_750(-1185145312, 0, 0, 0) > 0 && func_751(func_672(889965687, func_670(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_712(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_703(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_681(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_672(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_710(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_710(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_713(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_710(0);
	*uParam1 = { func_672(iParam0, func_673(0), iParam3, 0) };
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

bool func_714(int iParam0, int iParam1, int iParam2)
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

bool func_715(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_710(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_716(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_478(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_717(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_752(iParam0, iParam1, iParam2, iParam3);
}

bool func_718(int iParam0, int iParam1)
{
	if (!func_647(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_190[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1071686->f_21325[iParam0]->f_5 && iParam1) != 0;
}

void func_719(int iParam0, int iParam1)
{
	if (!func_647(iParam0))
	{
		return;
	}
	if (!func_718(iParam0, iParam1))
	{
	}
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_190[iParam0]->f_5 = (Global_39.f_190[iParam0]->f_5 || iParam1);
		return;
	}
	Global_1071686->f_21325[iParam0]->f_5 = (Global_1071686->f_21325[iParam0]->f_5 || iParam1);
}

void func_720(int iParam0, int iParam1)
{
	if (!func_647(iParam0))
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

void func_721(int iParam0, bool bParam1)
{
	if (!func_647(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_754(func_753(iParam0));
	}
	else
	{
		func_755(func_753(iParam0));
	}
}

bool func_722(int iParam0)
{
	if (!func_446(iParam0))
	{
		return false;
	}
	return func_450(iParam0, 33554432);
}

int func_723()
{
	return Global_1939161->f_26;
}

bool func_724(int iParam0)
{
	if (!func_756(iParam0))
	{
		return false;
	}
	return func_757(iParam0);
}

int func_725(int iParam0)
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

int func_726(int iParam0, bool bParam1)
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
			if (!bParam1 || func_11() != -1)
			{
				return -1308265478;
			}
			if (func_724(44))
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
			if (!bParam1 || func_11() != -1)
			{
				return -650528936;
			}
			if (func_724(44))
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
			if (!bParam1 || func_11() != -1)
			{
				return -877373104;
			}
			if (func_724(44))
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

int func_727()
{
	return &Global_1902818;
}

void func_728(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1071686->f_19674[iParam0]->f_2 = iParam1;
}

void func_729(int iParam0, int iParam1)
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

void func_730(int iParam0)
{
	if (!func_446(iParam0))
	{
		return;
	}
	if (func_758(iParam0))
	{
		func_759(iParam0);
	}
	else
	{
		func_760(iParam0);
	}
}

bool func_731(int iParam0)
{
	if (!func_446(iParam0))
	{
		return false;
	}
	return func_450(iParam0, 16777216);
}

int func_732(int iParam0)
{
	if (!func_446(iParam0))
	{
		return 0;
	}
	return (*Global_1887339)[iParam0]->f_4;
}

int func_733(int iParam0)
{
	if (!func_446(iParam0))
	{
		return 0;
	}
	iVar0 = func_761(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	iVar1 = func_763(func_762(iParam0));
	iVar2 = (iVar0 - iVar1);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	return iVar2;
}

void func_734(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0]->f_1 = iParam1;
		return;
	}
	Global_1071686->f_19674[iParam0]->f_1 = iParam1;
}

void func_735(int iParam0, int iParam1)
{
	if (!func_446(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	Global_8123[iParam0]->f_3 = iParam1;
}

void func_736(int iParam0)
{
	if (!func_446(iParam0))
	{
		return;
	}
	if (func_722(iParam0) && func_764(iParam0))
	{
		func_754(func_765(iParam0, 0));
	}
	else
	{
		func_755(func_765(iParam0, 0));
	}
}

void func_737(int iParam0, int iParam1)
{
	if (!func_691(iParam0))
	{
		return;
	}
	if (!func_766(iParam0, iParam1))
	{
	}
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_263[iParam0] = (Global_39.f_263[iParam0] || iParam1);
		return;
	}
	Global_1071686->f_21398[iParam0] = (Global_1071686->f_21398[iParam0] || iParam1);
}

bool func_738(int iParam0)
{
	if (!func_691(iParam0))
	{
		return false;
	}
	return func_766(iParam0, 2);
}

void func_739(int iParam0, int iParam1)
{
	if (!func_691(iParam0))
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

void func_740(int iParam0, bool bParam1)
{
	if (!func_691(iParam0))
	{
		return;
	}
	if (iParam0 == 8)
	{
		return;
	}
	iVar0 = func_767(iParam0);
	if (bParam1)
	{
		func_754(iVar0);
	}
	else
	{
		func_755(iVar0);
	}
}

bool func_741(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_742(int iParam0)
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
		func_768(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_769(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

int func_743(int iParam0)
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

bool func_744(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

bool func_745(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

bool func_746(int iParam0, int iParam1)
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

int func_747(int iParam0, int iParam1)
{
	if (!func_748(iParam0, 2))
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

bool func_748(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

void func_749(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_678(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_750(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_770(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_710(bParam1), iParam0, iParam3);
}

int func_751(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_771(&uParam0, iParam4, bParam5, iParam6);
}

void func_752(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_772(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

int func_753(int iParam0)
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

void func_754(int iParam0)
{
	if (func_206(iParam0) == 62)
	{
		_0x563fcb6620523917(-1145496915, -1482012664);
		_0x563fcb6620523917(-1043953850, -1482012664);
		_0x563fcb6620523917(-1783502982, -1482012664);
	}
	else
	{
		iVar0 = -1482012664;
		if (((func_207(iParam0) == 4 || func_207(iParam0) == 12) || func_692(func_207(iParam0)) == 4) || (func_766(func_207(iParam0), 8) && ((func_207(iParam0) == 2 || func_207(iParam0) == 0) || func_207(iParam0) == 10)))
		{
			iVar0 = -1305340593;
		}
		_0x563fcb6620523917(iParam0, iVar0);
	}
}

void func_755(int iParam0)
{
	if (func_206(iParam0) == 62)
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

bool func_756(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_757(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_39.f_3643[iVar1]), iVar2);
}

bool func_758(int iParam0)
{
	if (!func_446(iParam0))
	{
		return false;
	}
	return func_450(iParam0, 67108864);
}

void func_759(int iParam0)
{
	StringCopy(&cVar0, func_95(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_504(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_760(int iParam0)
{
	StringCopy(&cVar0, func_95(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_504(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

int func_761(int iParam0)
{
	if (!func_446(iParam0))
	{
		return 0;
	}
	if (func_731(iParam0))
	{
		return -1;
	}
	return Global_8123[iParam0]->f_3;
}

int func_762(int iParam0)
{
	if (!func_446(iParam0))
	{
		return -15;
	}
	if (Global_1572887->f_13 == -1)
	{
		return Global_8123[iParam0]->f_1;
	}
	return Global_1071686->f_19674[iParam0]->f_1;
}

int func_763(int iParam0)
{
	if (!func_773(iParam0))
	{
		return 0;
	}
	func_774(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	fVar6 = ((((((to_float(iVar0) / 60f) + to_float(iVar1)) + (to_float(iVar2) * 60f)) + ((to_float(iVar3) * 24f) * 60f)) + (((to_float(iVar4) * 30.4375f) * 24f) * 60f)) + (((to_float(iVar5) * 365.25f) * 24f) * 60f));
	iVar7 = round(fVar6);
	return iVar7;
}

bool func_764(int iParam0)
{
	if (!func_446(iParam0))
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

int func_765(int iParam0, bool bParam1)
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

bool func_766(int iParam0, int iParam1)
{
	if (!func_691(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_263[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_21398[iParam0] && iParam1) != 0;
}

int func_767(int iParam0)
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

void func_768(int iParam0)
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
	func_769(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_769(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

bool func_770(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_771(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_775(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_772(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_776(&(uParam0->f_4));
}

bool func_773(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_777(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_778(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_779(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_780(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_781(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_782(iParam0);
	if (iVar5 < 1 || iVar5 > func_783(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_774(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_784(func_727(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

bool func_775(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_710(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_715(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

void func_776(var uParam0)
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

int func_777(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_778(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_779(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_780(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_259(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_781(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_782(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_783(int iParam0, int iParam1)
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

void func_784(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_785(iParam0, iParam1, 1))
	{
		iVar0 = func_781(iParam1);
		iVar1 = func_780(iParam0);
		iVar2 = (func_780(iParam0) - func_780(iParam1));
		iVar3 = (func_781(iParam0) - func_781(iParam1));
		iVar4 = (func_782(iParam0) - func_782(iParam1));
		iVar5 = (func_779(iParam0) - func_779(iParam1));
		iVar6 = (func_778(iParam0) - func_778(iParam1));
		iVar7 = (func_777(iParam0) - func_777(iParam1));
	}
	else
	{
		iVar0 = func_781(iParam0);
		iVar1 = func_780(iParam1);
		iVar2 = (func_780(iParam1) - func_780(iParam0));
		iVar3 = (func_781(iParam1) - func_781(iParam0));
		iVar4 = (func_782(iParam1) - func_782(iParam0));
		iVar5 = (func_779(iParam1) - func_779(iParam0));
		iVar6 = (func_778(iParam1) - func_778(iParam0));
		iVar7 = (func_777(iParam1) - func_777(iParam0));
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
		iVar4 = (iVar4 + func_783(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_786(to_float(iVar0 + 1), 0f, 12f));
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

bool func_785(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_773(iParam1) || !func_773(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

float func_786(float fParam0, float fParam1, float fParam2)
{
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

