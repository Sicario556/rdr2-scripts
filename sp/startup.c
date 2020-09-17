void __EntryFunction__()
{
	sLocal_0 = "";
	fLocal_8 = 1f;
	fLocal_9 = 1f;
	sLocal_21 = "mech_skin@BUCK_BUTCHER";
	sLocal_22 = "PBL_BASE";
	sLocal_23 = "PBL_DUMP";
	sLocal_24 = "PBL_DROP_IN";
	sLocal_34 = "beat_gang_camp_reminder";
	iLocal_35 = 23;
	func_1();
	func_2();
	wait(0);
	func_3();
	uVar0 = 11;
	while (!func_4(&uVar0))
	{
		wait(0);
	}
	func_5(0);
	if (!Global_40)
	{
	}
	func_6();
	set_player_invincible(player_id(), true);
	while (get_is_loading_screen_active() && func_7(&uLocal_39) < 2)
	{
		func_8();
		wait(0);
	}
	_0xe5ff65cff5160752();
	func_9(0);
	while (true)
	{
		iVar12 = get_clock_hours();
		func_10(iVar12);
		func_11(iVar12);
		func_12(&uLocal_123);
		func_14(func_13() == 3);
		func_15(Global_1899245);
		func_8();
		if (func_16(1024))
		{
			_0x9428447ded71fc7e("Load_Menu_Scenes");
			func_17(1024);
		}
		switch (func_13())
		{
			case 0:
				if (Global_40)
				{
					func_18();
					func_17(4);
				}
				else if (_game_transition_manager_get_mode() == 496295564)
				{
					func_18();
					func_17(4);
				}
				else if (!func_19())
				{
					func_20(1);
				}
				if (func_21() == 1 || func_21() == 0)
				{
					func_22();
					func_9(1);
				}
				else
				{
					func_17(4);
					func_9(2);
				}
				break;
			case 1:
				if (func_23())
				{
					func_17(4);
					func_9(2);
				}
				break;
			case 2:
				func_24();
				if (func_25(func_21()))
				{
					func_9(3);
				}
				break;
			case 3:
				func_26();
				func_27();
				func_28();
				if (func_29())
				{
					func_30();
					func_9(4);
				}
				break;
			case 4:
				if (func_31())
				{
					func_32();
					func_17(4);
					func_17(64);
					func_33();
					if (func_21() == 1)
					{
						func_9(5);
						_0xbc2c927f5c264243(0);
					}
					else if (func_21() == 4)
					{
						func_9(2);
					}
					else if (func_34() != 1)
					{
						func_9(5);
						func_35();
					}
					else
					{
						func_9(2);
					}
				}
				break;
			case 5:
				func_35();
				break;
		}
		wait(0);
	}
}

void func_1()
{
	network_set_script_is_safe_for_network_game();
	_0x3e74a687a73979c6(1);
	_0x6339c1ea3979b5f7("Main_Menu", "Load_Menu_Scenes");
}

void func_2()
{
}

void func_3()
{
	set_fade_in_after_load(false);
	set_fade_in_after_death_arrest(false);
	func_36();
	func_37();
	func_38();
	func_39();
}

bool func_4(var uParam0)
{
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < 11)
	{
		if (func_40(iVar1))
		{
			if (!func_41(iVar1, (*uParam0)[iVar1]))
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

void func_5(bool bParam0)
{
	_set_global_block_can_be_accessed(1, bParam0);
	_set_global_block_can_be_accessed(2, bParam0);
	_set_global_block_can_be_accessed(4, bParam0);
	_set_global_block_can_be_accessed(8, bParam0);
	_set_global_block_can_be_accessed(9, bParam0);
}

void func_6()
{
	func_42();
	func_43();
	_set_guarma_worldhorizon_active(false);
	_0xa657ec9dbc6cc900(-1868977180);
	func_44();
}

int func_7(var uParam0)
{
	return uParam0->f_76;
}

void func_8()
{
	if (get_is_loading_screen_active())
	{
		func_45(&uLocal_39);
	}
	else if (func_46(&uLocal_39))
	{
		func_47(&uLocal_39);
	}
}

void func_9(int iParam0)
{
	Local_36 = iParam0;
	Local_36.f_1 = get_game_timer();
}

void func_10(int iParam0)
{
	if (iParam0 < 6)
	{
		Global_1899516 = 8;
		return;
	}
	if (iParam0 < 12)
	{
		Global_1899516 = 1;
		return;
	}
	if (iParam0 < 18)
	{
		Global_1899516 = 2;
		return;
	}
	Global_1899516 = 4;
}

void func_11(int iParam0)
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
	Global_1899515 = iVar0;
}

void func_12(var uParam0)
{
	if (func_48() == -3)
	{
		return;
	}
	bVar0 = _0x7af1bb4504ea5ed9();
	if (&Global_1956580 != bVar0)
	{
		Global_1956580 = bVar0;
		if (bVar0)
		{
			func_49("COMP_APP_CONNECT", 10000, 0, 0, 0, 1);
		}
		else
		{
			*uParam0 = 0;
			func_50(&(uParam0->f_1));
			func_49("COMP_APP_DISCONNECT", 10000, 0, 0, 0, 1);
		}
		func_51();
	}
	if (&Global_1956580)
	{
		func_52(uParam0);
	}
	func_51();
}

int func_13()
{
	return Local_36;
}

void func_14(bool bParam0)
{
	func_53();
	func_54();
	if (!bParam0)
	{
		return;
	}
	func_55();
	func_56();
}

void func_15(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (!is_orbis_version())
			{
				func_57(3);
			}
			if (func_58())
			{
				func_59(&(Global_1899245->f_1));
				func_57(1);
			}
			break;
		case 1:
			if (func_60(&(Global_1899245->f_1), 10000, 1))
			{
				func_57(2);
			}
			break;
		case 2:
			func_61();
			if (!func_58())
			{
				func_57(0);
			}
			break;
		case 3:
			if (func_58())
			{
				func_62();
			}
			break;
		default:
			func_57(0);
			break;
	}
}

bool func_16(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_17(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 - (Global_1572864->f_3 && iParam0));
}

void func_18()
{
	func_63(4);
	func_20(2);
	if (_get_launch_param_exists(func_64(-448212099)))
	{
		Global_43893 = 1;
	}
	func_65(1785216189, 0);
}

bool func_19()
{
	iVar0 = 0;
	return iVar0;
}

void func_20(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864->f_1 = iParam0;
}

int func_21()
{
	return Global_1572864->f_1;
}

void func_22()
{
	Local_15 = { Var0 };
}

bool func_23()
{
	func_66();
	switch (func_67())
	{
		case 0:
			if (does_entity_exist(player_ped_id()) && !is_entity_dead(player_ped_id()))
			{
				_google_analytics_push_page("/landing");
				set_fade_in_after_load(false);
				set_fade_in_after_death_arrest(false);
				set_player_control(get_player_index(), false, 0, false);
				_0xf239400e16c23e08(2, 0);
				func_68();
				func_69(1);
				func_70();
				func_71();
				func_72(0);
				func_73();
				func_74(-1);
				func_75(1);
			}
			else if (does_entity_exist(player_ped_id()))
			{
				resurrect_ped(player_ped_id());
			}
			break;
		case 1:
			if (func_76())
			{
				func_75(2);
			}
			else if (_0x9eeb007317fa3b9c())
			{
				func_75(2);
				Local_15.f_2 = 4;
			}
			break;
		case 2:
			if (is_screen_faded_out() || func_77())
			{
				if (func_78())
				{
					_clear_launch_params();
					func_79();
				}
				else
				{
					Local_15.f_2 = 1;
					func_63(4);
				}
				if (func_77())
				{
					do_screen_fade_out(0);
				}
				func_20(Local_15.f_2);
				trigger_music_event("stop_title_screen_music");
				_google_analytics_pop_page("/landing");
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

void func_24()
{
	if (!func_16(64))
	{
		return;
	}
	switch (func_80())
	{
		case -1050153785:
			if (func_81(655115506))
			{
				func_82(2);
			}
			else if (func_81(133180145))
			{
				func_82(1);
			}
			else
			{
				func_82(0);
			}
			if (func_81(1651967528))
			{
				Global_31 = 1;
			}
			if (func_81(-84928653))
			{
				Global_33 = 1;
			}
			if (func_81(-2030542394) || _0xfc4165c9165c166f())
			{
				Global_34 = 1;
			}
			else
			{
				Global_34 = 0;
			}
			if (func_81(-1357178860))
			{
				Global_1572887->f_5 = 1;
			}
			else
			{
				Global_1572887->f_5 = 0;
			}
			if (func_81(-88424047))
			{
				Global_30 = 1;
			}
			if (func_81(1306134188))
			{
			}
			if (func_81(1737952409))
			{
			}
			if (func_81(2137301164))
			{
			}
			if (func_81(-159568751))
			{
			}
			break;
		case -1330461529:
			break;
		case -1950263389:
			break;
		case 1495295997:
			break;
		case 1375707186:
			Global_32 = 1;
			Global_1572887->f_5 = 1;
			break;
	}
	func_17(64);
}

bool func_25(int iParam0)
{
	iVar1 = 1024;
	switch (iParam0)
	{
		case 1:
			func_63(4);
			return true;
		case 2:
			sVar0 = func_83(2);
			iVar1 = 1024;
			break;
		case 3:
			sVar0 = func_83(3);
			iVar1 = 25500;
			break;
		case 4:
			sVar0 = func_83(4);
			iVar1 = 1024;
			break;
	}
	if (_get_number_of_references_of_script_with_name_hash(get_hash_key(sVar0)) > 0)
	{
		func_84(iParam0);
		return true;
	}
	if (func_85(sVar0, iVar1))
	{
		func_84(iParam0);
		func_86(iParam0);
		func_32();
		return true;
	}
	return false;
}

void func_26()
{
}

void func_27()
{
}

void func_28()
{
}

bool func_29()
{
	if (func_34() != func_21())
	{
		return true;
	}
	if (func_16(4))
	{
		return true;
	}
	if (func_76())
	{
		func_78();
		do_screen_fade_out(0);
		return true;
	}
	return false;
}

void func_30()
{
	func_36();
	func_17(4);
	_0xa0cefcea390aab9b(0);
	if (func_34() == 3)
	{
		if (_does_thread_exist(Global_1572887->f_14))
		{
			func_63(2048);
		}
	}
	else
	{
		force_cleanup(2);
		func_63(64);
	}
}

bool func_31()
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
			if (func_48() == -1)
			{
				force_cleanup_for_thread_with_this_id(iVar0, 2);
			}
			iVar2 = 0;
			wait(0);
		}
		iVar0 = script_thread_iterator_get_next_thread_id();
	}
	return iVar2;
}

void func_32()
{
	if (func_34() != 2)
	{
		set_script_as_no_longer_needed(func_83(2));
	}
	if (func_34() != 3)
	{
		set_script_as_no_longer_needed(func_83(3));
	}
	if (func_34() != 4)
	{
		set_script_as_no_longer_needed(func_83(4));
	}
}

void func_33()
{
}

int func_34()
{
	return &Global_1572864;
}

void func_35()
{
	sVar0 = _get_launch_param_string();
	if (is_string_null_or_empty(sVar0))
	{
		sVar0 = func_87();
		_0xe98204d3c25ae14c(sVar0);
		return;
	}
	_0xe98204d3c25ae14c(sVar0);
}

void func_36()
{
	func_88();
	func_89();
	func_90();
	_0x11b0a0b282fa9b10(0);
}

void func_37()
{
	sLocal_0 = "startup";
	_0x9bb83c4dd7be0802(&Global_40, 12066, 1, sLocal_0, 94);
	func_91(&(Global_40.f_9));
	func_92(&(Global_40.f_40), "g_savedGlobals.sFlow", 1);
	func_93(&(Global_40.f_1095), "g_savedGlobals.playerHorse", 1);
	func_94(&(Global_40.f_9910));
	func_95(&(Global_40.f_4283));
	func_96(&(Global_40.f_9052));
	func_97(&(Global_40.f_9074));
	func_98(&(Global_40.f_9079));
	func_99(&(Global_40.f_9146));
	func_100(&(Global_40.f_7756));
	func_101(&(Global_40.f_7832), "g_savedGlobals.eTutorialsRun", 1);
	func_102(&(Global_40.f_358));
	func_103(&(Global_40.f_431));
	func_104(&(Global_40.f_7100));
	func_105(&(Global_40.f_450));
	func_106(&(Global_40.f_490));
	func_107(&(Global_40.f_4237));
	func_108(&(Global_40.f_4942));
	func_109(&(Global_40.f_6563));
	func_110(&(Global_40.f_7039));
	func_111(&(Global_40.f_7157));
	func_112(&(Global_40.f_7731));
	func_113(&(Global_40.f_7748));
	func_114(&(Global_40.f_7862), "g_savedGlobals.mapBlipData", 1);
	func_115(&(Global_40.f_8863));
	func_116(&(Global_40.f_9028));
	func_117(&(Global_40.f_9020));
	func_118(&(Global_40.f_9096));
	func_119(&(Global_40.f_9145));
	func_120(&(Global_40.f_9274), "g_savedGlobals.herbs", 1);
	func_121(&(Global_40.f_9319));
	func_122(&(Global_40.f_9384));
	func_123(&(Global_40.f_9422));
	func_124(&(Global_40.f_9479));
	func_125(&(Global_40.f_9536));
	func_126(&(Global_40.f_11943));
	func_127(&(Global_40.f_9571));
	func_128(&(Global_40.f_9632));
	func_129(&(Global_40.f_10991));
	func_130(&(Global_40.f_283));
	func_131(&(Global_40.f_297));
	func_132(&(Global_40.f_7857));
	func_133(&(Global_40.f_9829));
	func_134(&(Global_40.f_11029));
	func_135(&(Global_40.f_11095));
	func_136(&(Global_40.f_11166));
	func_137(&(Global_40.f_7443));
	func_138(&(Global_40.f_9419));
	func_139(&(Global_40.f_11182));
	func_140(&(Global_40.f_11184));
	func_141(&(Global_40.f_11206));
	func_142(&(Global_40.f_11623));
	func_143(&(Global_40.f_11959));
	func_144(&(Global_40.f_11864));
	func_145(&(Global_40.f_11883));
	func_146(&(Global_40.f_11922));
	func_147(&(Global_40.f_9045));
	func_148(&(Global_40.f_12000));
	func_149(&(Global_40.f_12003));
	func_150(&(Global_40.f_12004));
	func_151(&(Global_40.f_12019));
	_0xbb7f4273c186bc4b(&Global_40, "bGameInitialized");
	_0xbb7f4273c186bc4b(&(Global_40.f_1), "bInGameflow");
	_0xbb7f4273c186bc4b(&(Global_40.f_9421), "bUsedFirstPerson");
	func_152(&(Global_40.f_2), "vLastCampPosition");
	_0x35defecae36d4fae(&(Global_40.f_5), "fLastCampHeading");
	func_152(&(Global_40.f_6), "vCurrentCaravanBedPosition");
	_0x529b9ccd0972af4d(&(Global_40.f_7854), "minigameUnlocked");
	_0x529b9ccd0972af4d(&(Global_40.f_7855), "jobUnlocked");
	_0x529b9ccd0972af4d(&(Global_40.f_7856), "procmissionUnlocked");
	_0xb25b5a375be5be26(&(Global_40.f_7729), "wornOutfit");
	_0xb25b5a375be5be26(&(Global_40.f_39), "playerCharacterModel");
	_0xb25b5a375be5be26(&(Global_40.f_449), "lawBountyAchievement");
	_0xb25b5a375be5be26(&(Global_40.f_1093), "eRCMIndexTracked");
	_0x529b9ccd0972af4d(&(Global_40.f_1094), "iRCMsActive");
	_0x529b9ccd0972af4d(&(Global_40.f_7755), "deadeyeLevel");
	_0xbb7f4273c186bc4b(&(Global_40.f_11953), "bAttackedBurial");
	_0x529b9ccd0972af4d(&(Global_40.f_11954), "iMickeyMemory");
	_0x529b9ccd0972af4d(&(Global_40.f_11955), "iStudiedAnimalsNoBinoculars");
	_0x529b9ccd0972af4d(&(Global_40.f_11956), "iLastPayoffTutorialMessage");
	_0x529b9ccd0972af4d(&(Global_40.f_11957), "iSavedBounty");
	_0xbb7f4273c186bc4b(&(Global_40.f_7730), "bHatKnockedOff");
	_0x529b9ccd0972af4d(&(Global_40.f_9273), "iHerbArrLocation");
	_0x529b9ccd0972af4d(&(Global_40.f_11958), "iSPMinigameAchievementTracker");
	_0x529b9ccd0972af4d(&(Global_40.f_11999), "iSPChecksum");
	_0xbb7f4273c186bc4b(&(Global_40.f_7860), "bEndlessSummerInitialized");
	_0x529b9ccd0972af4d(&(Global_40.f_7861), "iMoneyBeforeGuarma");
	StringCopy(&cVar0, "specialWildHorse", 64);
	_0x81f4e92be3958364(&(Global_40.f_11945), 8, &cVar0);
	iVar16 = 0;
	while (iVar16 < Global_40.f_11945)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		_0xb25b5a375be5be26(Global_40.f_11945[iVar16], &Var8);
		iVar16++;
	}
	_0xa844feb5c22c2c74();
	_0xbb7f4273c186bc4b(&(Global_40.f_12017), "bPhotoModeToastDelivered");
	_0xbb7f4273c186bc4b(&(Global_40.f_12018), "bFlacoCabinCigBoxLooted");
	_0xe8346e62fd7fb962();
	sLocal_0 = "SavedDeeds";
	_0x9bb83c4dd7be0802(&Global_12106, 5398, 1, sLocal_0, 1);
	func_153(&Global_12106);
	_0xe8346e62fd7fb962();
	sLocal_0 = "SavedBeats";
	_0x9bb83c4dd7be0802(&Global_17504, 3206, 1, sLocal_0, 1);
	func_154(&Global_17504);
	_0xe8346e62fd7fb962();
	sLocal_0 = "SavedShops";
	_0x9bb83c4dd7be0802(&Global_20710, 2408, 1, sLocal_0, 1);
	func_155(&Global_20710);
	_0xe8346e62fd7fb962();
	sLocal_0 = "SavedRegions";
	_0x9bb83c4dd7be0802(&Global_23118, 1769, 1, sLocal_0, 3);
	func_156(&Global_23118);
	func_157(&(Global_23118.f_1651));
	_0x529b9ccd0972af4d(&(Global_23118.f_1768), "g_savedGlobalsRegions.iInnocentsKilled");
	_0xe8346e62fd7fb962();
	sLocal_0 = "SavedRegionalCharacters";
	_0x9bb83c4dd7be0802(&Global_24887, 1909, 1, sLocal_0, 1);
	func_158(&Global_24887);
	_0xe8346e62fd7fb962();
	sLocal_0 = "SavedPlayerOutfits";
	_0x9bb83c4dd7be0802(&Global_26796, 777, 1, sLocal_0, 1);
	func_159(&Global_26796);
	_0xe8346e62fd7fb962();
	sLocal_0 = "SavedHerbs";
	_0x9bb83c4dd7be0802(&Global_27573, 4501, 1, sLocal_0, 1);
	func_160(&Global_27573);
	_0xe8346e62fd7fb962();
	sLocal_0 = "SavedVignettes";
	_0x9bb83c4dd7be0802(&Global_32074, 4234, 1, sLocal_0, 2);
	func_161(&Global_32074);
	func_162(&(Global_32074.f_2697));
	_0xe8346e62fd7fb962();
	_0xc0abf784590798a9(1);
}

void func_38()
{
	sLocal_0 = "startup";
	_0xed4b0c1057892b2e(&Global_36638, 1466, 0, sLocal_0);
	func_120(&Global_36638, "g_mpSavedGlobals.herbs", 0);
	func_163(&(Global_36638.f_45), "g_mpSavedGlobals.sPersona");
	func_101(&(Global_36638.f_1444), "g_mpSavedGlobals.eTutorialsRun", 0);
	_0xe8346e62fd7fb962();
	_0xc0abf784590798a9(0);
}

void func_39()
{
	request_script(func_83(2));
	request_script(func_83(3));
	request_script(func_83(4));
	func_164();
}

bool func_40(int iParam0)
{
	if (iParam0 != 0 && iParam0 != 3)
	{
		return true;
	}
	return false;
}

bool func_41(int iParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 0:
			if (func_165(iParam0, 1))
			{
				_0xe97240065406cb80(iParam0, 0);
				request_script(func_166(iParam0));
				func_167(uParam1, 1, iParam0);
			}
			else
			{
				func_167(uParam1, 3, iParam0);
				return true;
			}
			break;
		case 1:
			if (has_script_loaded(func_166(iParam0)))
			{
				start_new_script(func_166(iParam0), 128);
				set_script_as_no_longer_needed(func_166(iParam0));
				func_167(uParam1, 2, iParam0);
			}
			break;
		case 2:
			if (_get_number_of_references_of_script_with_name_hash(get_hash_key(func_166(iParam0))) == 0)
			{
				_0xe97240065406cb80(iParam0, 1);
				func_167(uParam1, 3, iParam0);
				return true;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_42()
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
	decor_register("loot_item_amt1", 3);
	decor_register("loot_item_model1", 3);
	decor_register("loot_item_offset1x", 1);
	decor_register("loot_item_offset1y", 1);
	decor_register("loot_item_offset1z", 1);
	decor_register("loot_item_orient1x", 1);
	decor_register("loot_item_orient1y", 1);
	decor_register("loot_item_orient1z", 1);
	decor_register("loot_item_type2", 3);
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
	decor_register("honor_block", 3);
	decor_register("honor_bank", 3);
	decor_register("honor_override", 3);
	decor_register("not_enemy", 2);
	decor_register("bleed_start_time", 3);
	decor_register("instigated_by_player", 2);
	decor_register("wagon_block_honor", 2);
	decor_register("lose_honor_steal_vehicle", 2);
	decor_register("player_greeted", 2);
	decor_register("player_antagonized", 2);
	decor_register("was_antagonized", 2);
	decor_register("injured_woman", 2);
	decor_register("recently_punched", 2);
	decor_register("was_hurt", 2);
	StringCopy(&cVar0, func_168(), 32);
	decor_register(&cVar0, 3);
	StringCopy(&cVar0, func_169(), 32);
	decor_register(&cVar0, 3);
	StringCopy(&cVar0, func_170(), 32);
	decor_register(&cVar0, 3);
	StringCopy(&cVar0, func_171(), 32);
	decor_register(&cVar0, 3);
	StringCopy(&cVar0, func_172(), 32);
	decor_register(&cVar0, 1);
	MemCopy(&cVar0, {func_173()}, 4);
	decor_register(&cVar0, 3);
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
	StringCopy(&cVar0, func_174(), 32);
	decor_register(&cVar0, 2);
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
	_decor_register_2(func_175(), 3, true);
	_decor_register_2(func_176(), 6, true);
	_decor_register_2(func_177(), 3, true);
	_decor_register_2(func_178(), 2, true);
	_decor_register_2(func_179(), 2, true);
	_decor_register_2(func_180(), 3, true);
	_decor_register_2(func_181(), 3, true);
	_decor_register_2(func_182(), 3, true);
	_decor_register_2(func_183(), 3, true);
	_decor_register_2(func_184(), 3, true);
	_decor_register_2(func_185(), 3, true);
	_decor_register_2("bFmeBaseHasWeapon", 2, true);
	_decor_register_2("iMinigameHash", 3, true);
	_decor_register_2("iMinigameSeat", 3, true);
	decor_register("bBeatPed", 2);
	decor_register("bIgnoreLawMissionEntity", 2);
	decor_register("Has_Voice", 2);
	decor_register("bUnarmed", 2);
	decor_register("RANSACK", 2);
	decor_register("bIsCriminal", 2);
	decor_register("bDeadOrAlive", 2);
	decor_register("bReacted_To_Shocking_Event", 2);
	decor_register("REDJ_Witness_Time", 1);
	decor_register("SafeOpened", 2);
	decor_register("TargetHit", 2);
	decor_register("bBeatCriminal", 2);
	decor_register("bIsSpecialPed", 2);
	decor_register("iSpecialPedID", 3);
	decor_register("bPickupThisCorpse", 2);
	decor_register("last_gun_damage_time_in_ms", 3);
	decor_register("grapple_start_time", 3);
	decor_register("grapple_tutorial_played", 2);
	decor_register("worn_tutorial", 2);
	decor_register("propsetName", 4);
	decor_register("witnessCannotBeBribedOrThreatened", 2);
	_decor_register_2("MP_HUD_Bits", 3, true);
	_decor_register_2(func_186(), 3, true);
	_decor_register_2(func_187(), 3, true);
	_decor_register_2(func_188(), 3, true);
	_decor_register_2(func_189(), 3, true);
	_decor_register_2(func_190(), 3, true);
	_decor_register_2(func_191(), 3, true);
	_decor_register_2(func_192(), 2, true);
	_decor_register_2(func_193(), 2, true);
	_decor_register_2(func_194(), 2, true);
	_decor_register_2(func_195(), 3, true);
	_decor_register_2(func_196(), 2, true);
	decor_register("MC_EntityID", 3);
	decor_register("MC_ChasePedID", 3);
	_decor_register_2("iCampFollowerCamp", 3, true);
	decor_register("Camp_Defender_Mount_Location", 3);
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
	_decor_register_2("FFF_Lives", 3, true);
	_decor_register_2("FFF_Time", 3, true);
	_decor_register_2("FFF_Laps", 3, true);
	_decor_register_2("FFF_Rounds", 3, true);
	_decor_register_2("FFF_Seated", 2, true);
	_decor_register_2("PedSeatedForMinigame", 2, true);
	_decor_register_2("MinigameObject", 2, true);
	_decor_register_2("DontGrabThisPedForMinigame", 2, true);
	_decor_register_2(func_197(), 2, true);
	_decor_register_2(func_198(), 3, true);
	_decor_register_2(func_199(), 3, true);
	_decor_register_2(func_200(), 3, true);
	_decor_register_2(func_201(), 3, true);
	_decor_register_2("NetHorseFence_Sold", 2, true);
	decor_register("wagonFenceValue", 3);
	decor_register("ItemSetScriptIndex", 3);
	decor_register("HorseTeamA", 2);
	decor_register("HorseOwnerTeamA", 2);
	decor_register("HorseTeamB", 2);
	decor_register("HorseOwnerTeamB", 2);
	decor_register("HorseScriptCreator", 3);
	decor_register("UsesTracker", 2);
	decor_register("bValidRobber", 2);
	decor_register("STORY_COOP_PED_ID", 3);
	_decor_register_2(func_202(), 3, true);
	_decor_register_2(func_203(), 6, true);
	_decor_register_2("fast_travel_camp_barker", 3, true);
}

void func_43()
{
	func_204();
	func_205();
	func_206();
}

void func_44()
{
	_0xdeee1f265b7ecef5();
}

int func_45(var uParam0)
{
	switch (func_7(uParam0))
	{
		case 0:
			if (func_207(uParam0))
			{
				uParam0->f_81 = _databinding_add_data_container_from_path("", "LoadingScreen");
				uParam0->f_82 = _databinding_add_data_string(uParam0->f_81, "TooltipText", "");
				uParam0->f_83 = _databinding_add_data_bool(uParam0->f_81, "isVisible", 1);
				func_208(uParam0, 1);
				func_209(uParam0, 1);
			}
			else
			{
				func_209(uParam0, 3);
			}
			break;
		case 1:
			uParam0->f_77 = get_game_timer();
			_databinding_write_data_string(uParam0->f_82, uParam0->f_5[uParam0->f_78]);
			func_209(uParam0, 2);
			break;
		case 2:
			if (get_game_timer() >= (uParam0->f_77 + uParam0->f_5[uParam0->f_78]->f_5))
			{
				uParam0->f_78++;
				if (uParam0->f_78 < 10)
				{
					func_209(uParam0, 1);
				}
				else
				{
					func_209(uParam0, 3);
				}
			}
			break;
		case 3:
			func_47(uParam0);
			return 1;
	}
	return 0;
}

bool func_46(var uParam0)
{
	return uParam0->f_80;
}

void func_47(var uParam0)
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
	func_208(uParam0, 0);
}

int func_48()
{
	return Global_1572887->f_12;
}

var func_49(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_50(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_51()
{
	while (!_event_queue_is_empty(-792505136))
	{
		_event_queue_pop(-792505136);
	}
}

void func_52(var uParam0)
{
	iVar0 = 0;
	bVar1 = false;
	if (func_210() || func_211())
	{
		bVar1 = true;
	}
	if (bVar1 != *uParam0)
	{
		*uParam0 = bVar1;
		if (!bVar1)
		{
			func_212(&(uParam0->f_1), 0);
		}
		else if (func_213(&(uParam0->f_1)))
		{
			func_50(&(uParam0->f_1));
		}
	}
	if (!bVar1 && func_213(&(uParam0->f_1)))
	{
		if (func_214(&(uParam0->f_1)) >= 0.5f)
		{
			func_50(&(uParam0->f_1));
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
	func_215(iVar0);
}

void func_53()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		func_216(get_event_at_index(1, iVar0), iVar0);
		iVar0++;
	}
}

void func_54()
{
	switch (Global_1572887->f_164.f_81)
	{
		case 0:
			func_217();
			break;
		case 1:
			func_218();
			break;
		case 2:
			func_219();
			break;
		case 3:
			func_220();
			break;
	}
}

void func_55()
{
	if (Global_1572887->f_164.f_79 == 0)
	{
		return;
	}
	switch (Global_1572887->f_164.f_79)
	{
		case 1:
			if (is_pc_version())
			{
				func_221("NET_SESSION_INV_HEADER", "NT_INV_EXTENDED_PC", -437533031, 1183081869, -2, 0, 0, 0, 0, 1, 1);
				func_222(4);
			}
			else
			{
				func_222(2);
			}
			break;
		case 2:
			func_223();
			func_222(3);
			break;
		case 3:
			if (func_224() == 0)
			{
				return;
			}
			func_222(4);
			break;
		case 4:
			func_222(0);
			break;
	}
}

void func_56()
{
	if (func_16(4))
	{
		func_225();
	}
	switch (Global_1572887->f_164)
	{
		case 0:
			break;
		case 1:
			func_226();
			break;
		case 2:
			func_227();
			break;
		case 4:
			func_228();
			break;
		case 6:
			func_229();
			break;
		case 3:
			func_230();
			break;
		case 5:
			func_231();
			break;
		case 8:
			func_232();
			break;
		case 9:
			func_233();
			break;
		case 10:
			func_234();
			break;
		case 11:
			func_235();
			break;
		case 12:
			func_236();
			break;
		case 13:
			func_237();
			break;
		case 14:
			func_238();
			break;
		case 16:
			func_239();
			break;
		case 17:
			func_240();
			break;
	}
}

void func_57(int iParam0)
{
	Global_1899245 = iParam0;
}

bool func_58()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_1898441[iVar1] != 0)
		{
			Global_1899245->f_132 = iVar1;
			iVar0 = 1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_59(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_60(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_241(uParam0, bParam2, 0);
	if (network_is_game_in_progress() && !bParam2)
	{
		if (absi(get_time_difference(get_network_time(), *uParam0)) >= iParam1)
		{
			func_59(uParam0);
			return true;
		}
	}
	else if (absi(get_time_difference(get_game_timer(), *uParam0)) >= iParam1)
	{
		func_59(uParam0);
		return true;
	}
	return false;
}

void func_61()
{
	if (!is_orbis_version())
	{
		if (func_58())
		{
			func_62();
		}
		return;
	}
	if (Global_1899245->f_132 >= 20 || Global_1899245->f_132 < 0)
	{
		return;
	}
	iVar0 = Global_1899245->f_132;
	if (func_242(Global_1898441[iVar0]))
	{
		func_243(iVar0);
		(*Global_1898441)[iVar0] = 0;
	}
	if (func_244(Global_1898441[iVar0]))
	{
		(*Global_1898441)[iVar0] = 0;
	}
	switch (Global_1898441[iVar0])
	{
		case 1:
		case 2:
		case 4:
		case 5:
			func_245(*(*Global_1898441)[iVar0], iVar0, 1);
			break;
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
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
			func_245(*(*Global_1898441)[iVar0], iVar0, 0);
			break;
	}
	Global_1899245->f_132++;
	if (Global_1899245->f_132 == 42)
	{
		Global_1899245->f_132 = 0;
	}
}

void func_62()
{
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		func_243(iVar0);
		iVar0++;
	}
	func_59(&(Global_1899245->f_1));
}

void func_63(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

char* func_64(int iParam0)
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
		case 1433203589:
			sVar0 = "spawn_location";
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
		case -448212099:
			sVar0 = "benchmark";
			break;
	}
	return sVar0;
}

void func_65(int iParam0, int iParam1)
{
	Global_1572887->f_282 = iParam0;
	Global_1572887->f_282.f_1 = iParam1;
	func_246(28);
}

void func_66()
{
	disable_control_action(2, -668070958, false);
	disable_control_action(2, 1644850270, false);
	disable_control_action(2, 2139949496, false);
	if (func_67() != 0)
	{
		hide_hud_and_radar_this_frame();
	}
}

int func_67()
{
	return Local_15;
}

void func_68()
{
	Global_1572887->f_282.f_1 = 0;
}

void func_69(int iParam0)
{
	_0x704f92b3af20d857(iParam0);
}

void func_70()
{
	if (network_is_in_session())
	{
		if (!_0x424b17a7dc5c90bc(player_id()))
		{
			return;
		}
	}
	if (_0x8fb7c254cfcbf78e(&(Global_1572887->f_252)))
	{
		_0xe72e5c1289bd1f40(&(Global_1572887->f_252));
	}
	Var0.f_5 = 2;
	Var0.f_12 = -1;
	Var0.f_17 = -1;
	Global_1572887->f_252 = { Var0 };
}

void func_71()
{
	func_247();
	func_248(-1);
	func_249(0);
	Global_1572887->f_164.f_61 = 0;
	if (Global_1572887->f_164.f_83 == 2)
	{
		Global_1572887->f_164.f_83 = 0;
	}
}

void func_72(int iParam0)
{
	Global_1572887->f_164.f_64 = iParam0;
}

void func_73()
{
	network_set_rich_presence(0, &uVar0, 1, 0);
}

void func_74(int iParam0)
{
	Global_1572887->f_12 = iParam0;
}

void func_75(int iParam0)
{
	Local_15 = iParam0;
	Local_15.f_1 = get_game_timer();
}

bool func_76()
{
	if (func_250())
	{
		return false;
	}
	bVar0 = false;
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
						func_251(1785216189);
						bVar0 = true;
					}
					else if (vVar1.z == 2143694500)
					{
						_0xac84686c06184b0d("Fade_To_MP", "Load_Menu_Scenes");
						bVar0 = true;
					}
					else if (vVar1.z == 367452774)
					{
						_0xac84686c06184b0d("Fade_To_MP", "Load_Menu_Scenes");
						bVar0 = true;
					}
					else if (vVar1.z == 1317995259)
					{
						_0xac84686c06184b0d("Fade_To_MP", "Load_Menu_Scenes");
						func_251(-1050153785);
						func_252(1306134188);
						bVar0 = true;
					}
					else if (vVar1.z == 425390024)
					{
						network_set_script_ready_for_events(false);
					}
					else if (vVar1.z == 446331713)
					{
						network_set_script_ready_for_events(true);
					}
					else if (vVar1.z == 505720336)
					{
						if (func_34() == 2)
						{
							Global_43893 = 1;
							func_63(128);
							_clear_launch_param(func_64(-448212099));
						}
						else
						{
							func_251(-448212099);
							bVar0 = true;
						}
					}
					break;
			}
		}
		_event_manager_pop_event(-999474433);
	}
	if (!bVar0)
	{
		if (((_is_loading_screen_active() && !_is_app_running(-999474433)) && !_get_launch_param_exists(func_253(1746230403))) && (_game_transition_manager_get_mode() == 0 || _game_transition_manager_get_mode() == 2101404901))
		{
			if (!func_213(&(Local_15.f_3)))
			{
				func_212(&(Local_15.f_3), 0);
			}
			else if (func_214(&(Local_15.f_3)) >= 15f)
			{
				_0xbc2c927f5c264243(0);
			}
		}
		else if (func_213(&(Local_15.f_3)))
		{
			func_50(&(Local_15.f_3));
		}
	}
	return bVar0;
}

bool func_77()
{
	return func_254() > 120000;
}

bool func_78()
{
	if (!_get_launch_param_exists(func_253(1746230403)))
	{
		if (func_80() == 0)
		{
			func_251(1785216189);
			func_246(28);
			return true;
		}
		else
		{
			func_246(28);
			return true;
		}
	}
	func_255(&(Global_1572887->f_282));
	sVar0 = _get_launch_param_value(func_253(1746230403));
	iVar1 = get_hash_key(sVar0);
	if (iVar1 != 0)
	{
		func_251(iVar1);
	}
	if (_get_launch_param_exists(func_253(82543689)))
	{
		sVar0 = _get_launch_param_value(func_253(82543689));
		Global_1572887->f_282.f_3 = func_256(get_hash_key(sVar0));
	}
	if (_get_launch_param_exists(func_253(-1926951471)))
	{
		sVar0 = _get_launch_param_value(func_253(-1926951471));
		Global_1572887->f_282.f_4 = func_257(get_hash_key(sVar0));
	}
	if (_get_launch_param_exists(func_253(-763890493)))
	{
		sVar0 = _get_launch_param_value(func_253(-763890493));
		Global_1572887->f_282.f_5 = func_258(get_hash_key(sVar0));
	}
	if (_get_launch_param_exists(func_253(-875643756)))
	{
		sVar0 = _get_launch_param_value(func_253(-875643756));
		Global_1572887->f_282.f_7 = func_259(get_hash_key(sVar0));
		Global_1572887->f_282.f_6 = -1;
	}
	if (_get_launch_param_exists(func_253(64789430)))
	{
		sVar0 = _get_launch_param_value(func_253(64789430));
		Global_1572887->f_282.f_2 = func_260(get_hash_key(sVar0));
	}
	if (_get_launch_param_exists(func_253(735882532)))
	{
		sVar0 = _get_launch_param_value(func_253(735882532));
		Global_1572887->f_282.f_8 = get_hash_key(sVar0);
	}
	Global_1572887->f_282.f_9 = 0;
	if (_get_launch_param_exists(func_253(-1637816997)))
	{
		sVar0 = _get_launch_param_value(func_253(-1637816997));
		if (string_to_int(sVar0, &(Global_1572887->f_282.f_9)))
		{
		}
	}
	iVar2 = -730035725;
	iVar4 = 0;
	iVar5 = -730035725;
	iVar4 = 0;
	while (iVar4 <= 15)
	{
		iVar2 = (iVar5 + iVar4);
		if (_get_launch_param_exists(func_253(iVar2)))
		{
			sVar0 = _get_launch_param_value(func_253(iVar2));
			iVar3 = get_hash_key(sVar0);
			if (iVar3 != 0)
			{
				func_252(iVar3);
			}
		}
		iVar4++;
	}
	func_246(28);
	return true;
}

void func_79()
{
	switch (func_80())
	{
		case 1785216189:
			Local_15.f_2 = 2;
			break;
		case -448212099:
			Local_15.f_2 = 2;
			_set_launch_param_value(func_64(-448212099), "1");
			break;
		case -1050153785:
			if (!_0x2a8112a974de1ef6())
			{
				Local_15.f_2 = 1;
				func_63(4);
				if (func_81(-2030542394) || _0xfc4165c9165c166f())
				{
					_0xa4484173759749b1();
				}
			}
			else
			{
				Local_15.f_2 = 3;
				func_63(68);
				_0xac84686c06184b0d("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case -1743646234:
			break;
		case -1330461529:
			if (!_0x2a8112a974de1ef6())
			{
				Local_15.f_2 = 1;
				func_63(4);
				if (func_81(-2030542394) || _0xfc4165c9165c166f())
				{
					_0xa4484173759749b1();
				}
			}
			else
			{
				Local_15.f_2 = 3;
				func_63(68);
				_0xac84686c06184b0d("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case -1950263389:
			if (!_0x2a8112a974de1ef6())
			{
				Local_15.f_2 = 1;
				func_63(4);
				if (func_81(-2030542394) || _0xfc4165c9165c166f())
				{
					_0xa4484173759749b1();
				}
			}
			else
			{
				Local_15.f_2 = 3;
				func_63(68);
				_0xac84686c06184b0d("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case 1495295997:
			if (!_0x2a8112a974de1ef6())
			{
				Local_15.f_2 = 1;
				func_63(4);
				if (func_81(-2030542394) || _0xfc4165c9165c166f())
				{
					_0xa4484173759749b1();
				}
			}
			else
			{
				Local_15.f_2 = 3;
				func_63(68);
				_0xac84686c06184b0d("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case 1375707186:
			if (!_0x2a8112a974de1ef6())
			{
				Local_15.f_2 = 1;
				func_63(4);
				if (func_81(-2030542394) || _0xfc4165c9165c166f())
				{
					_0xa4484173759749b1();
				}
			}
			else
			{
				Local_15.f_2 = 3;
				func_63(68);
				_0xac84686c06184b0d("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case -417606870:
			Local_15.f_2 = 4;
			func_63(4);
			_0xac84686c06184b0d("Fade_To_SP", "Load_Menu_Scenes");
			break;
	}
}

int func_80()
{
	return Global_1572887->f_282;
}

bool func_81(int iParam0)
{
	return func_262(Global_1572887->f_282.f_1, func_261(iParam0));
}

void func_82(int iParam0)
{
	Global_1572887->f_13 = iParam0;
}

char* func_83(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "startup_sp";
		case 3:
			return "startup_mp";
		case 4:
			return "startup_clip";
	}
	return "startup_sp";
}

void func_84(int iParam0)
{
	Global_1572864 = iParam0;
}

bool func_85(char* sParam0, int iParam1)
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
	start_new_script(sParam0, iParam1);
	set_script_as_no_longer_needed(sParam0);
	return true;
}

void func_86(int iParam0)
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
			_0xac84686c06184b0d("Fade_To_Editor", "Load_Menu_Scenes");
			break;
	}
}

char* func_87()
{
	StringCopy(&cVar0, "-mode=", 64);
	StringConCat(&cVar0, func_263(func_80()), 64);
	StringCopy(&cVar8, "-char_slot=", 64);
	StringIntConCat(&cVar8, Global_1572887->f_282.f_9, 64);
	switch (func_80())
	{
		case -448212099:
		case 1785216189:
			return _create_var_string(10, "LAUNCH_PARAMS", &cVar0);
		case -1050153785:
			iVar98 = 0;
			iVar99 = 0;
			iVar98 = 0;
			while (iVar98 <= 15)
			{
				iVar97 = func_264(iVar98);
				if (func_81(iVar97) && iVar99 < 10)
				{
					StringCopy(Var16[iVar99], "-arg_", 64);
					StringIntConCat(Var16[iVar99], iVar99, 64);
					StringConCat(Var16[iVar99], "=", 64);
					StringConCat(Var16[iVar99], func_64(iVar97), 64);
					iVar99++;
				}
				iVar98++;
			}
			if (Global_1572887->f_282.f_3 != -1)
			{
				StringCopy(&cVar100, "-region_id=", 64);
				StringConCat(&cVar100, func_265(Global_1572887->f_282.f_3), 64);
				return _create_var_string(174762, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar100, Var16[0], Var16[1], Var16[2], Var16[3], Var16[4]);
			}
			else if (Global_1572887->f_282.f_4 != -1)
			{
				StringCopy(&cVar108, "-district_id=", 64);
				StringConCat(&cVar108, func_266(Global_1572887->f_282.f_4), 64);
				return _create_var_string(174762, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar108, Var16[0], Var16[1], Var16[2], Var16[3], Var16[4]);
			}
			else if (Global_1572887->f_282.f_5 != -1)
			{
				StringCopy(&cVar116, "-state_id=", 64);
				StringConCat(&cVar116, func_267(Global_1572887->f_282.f_5), 64);
				return _create_var_string(174762, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar116, Var16[0], Var16[1], Var16[2], Var16[3], Var16[4]);
			}
			else
			{
				return _create_var_string(43690, "LAUNCH_PARAMS", &cVar0, &cVar8, Var16[0], Var16[1], Var16[2], Var16[3], Var16[4]);
			}
			break;
		case -1743646234:
			return _create_var_string(42, "LAUNCH_PARAMS", &cVar0, &cVar8);
		case -1330461529:
			StringCopy(&cVar124, "-series_id=", 64);
			StringConCat(&cVar124, func_268(Global_1572887->f_282.f_2), 64);
			return _create_var_string(170, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar124);
		case -1950263389:
			StringCopy(&cVar132, "-mission_id=", 64);
			StringConCat(&cVar132, "", 64);
			return _create_var_string(170, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar132);
		case 1495295997:
			StringCopy(&cVar140, "-minigame_id=", 64);
			StringConCat(&cVar140, func_269(Global_1572887->f_282.f_7), 64);
			return _create_var_string(170, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar140);
		case 1375707186:
			return _create_var_string(42, "LAUNCH_PARAMS", &cVar0, &cVar8);
	}
	return "";
}

void func_88()
{
	disable_script_brain_set(1);
}

void func_89()
{
}

void func_90()
{
	disable_script_brain_set(2);
}

void func_91(var uParam0)
{
	_0x8e8ffb9e4ad051d2(uParam0, 30, "saveGameData", 20);
	_0xb25b5a375be5be26(uParam0, "saveGameData.saveGameLocation");
	_0x529b9ccd0972af4d(&(uParam0->f_1), "saveGameData.iSaveGamePropset");
	func_152(&(uParam0->f_2), "saveGameData.vSaveGamePropsetPosition");
	_0x35defecae36d4fae(&(uParam0->f_5), "saveGameData.fSaveGamePropsetHeading");
	_0x529b9ccd0972af4d(&(uParam0->f_6), "saveGameData.iSaveGameScenarioHash");
	func_152(&(uParam0->f_7), "saveGameData.vResetPosition");
	_0x529b9ccd0972af4d(&(uParam0->f_10), "saveGameData.iResetRespawnNode");
	_0x529b9ccd0972af4d(&(uParam0->f_11), "saveGameData.iResetAnimIndex");
	_0xbb7f4273c186bc4b(&(uParam0->f_12), "saveGameData.bForceAltAnim");
	_0x35defecae36d4fae(&(uParam0->f_13), "saveGameData.fResetHeading");
	_0xb25b5a375be5be26(&(uParam0->f_14), "saveGameData.eSavedTOD");
	_0xb25b5a375be5be26(&(uParam0->f_15), "saveGameData.respawnRegion");
	_0x529b9ccd0972af4d(&(uParam0->f_20), "saveGameData.iResetBounty");
	_0x81f4e92be3958364(&(uParam0->f_16), 4, "saveGameData.iRespawnPosHistory");
	iVar0 = 0;
	while (iVar0 < uParam0->f_16)
	{
		StringCopy(&cVar1, "saveGameData.iRespawnPosHistory", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0x529b9ccd0972af4d(uParam0->f_16[iVar0], &cVar1);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0x443174c20b8b9e7f(&(uParam0->f_21), 9, "saveGameData.missionReplayData");
	_0x529b9ccd0972af4d(&(uParam0->f_21), "saveGameData.missionReplayData.iBitStorage");
	_0x81f4e92be3958364(&(uParam0->f_21.f_1), 5, "saveGameData.missionReplayData.iGeneralStorage");
	iVar0 = 0;
	while (iVar0 < uParam0->f_21.f_1)
	{
		StringCopy(&cVar1, "saveGameData.missionReplayData.iGeneralStorage", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0x529b9ccd0972af4d(uParam0->f_21.f_1[iVar0], &cVar1);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0x81f4e92be3958364(&(uParam0->f_21.f_6), 3, "saveGameData.missionReplayData.fGeneralStorage");
	iVar0 = 0;
	while (iVar0 < uParam0->f_21.f_6)
	{
		StringCopy(&cVar1, "saveGameData.missionReplayData.fGeneralStorage", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0x35defecae36d4fae(uParam0->f_21.f_6[iVar0], &cVar1);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
	_0xe0b45e983bfc0768();
}

void func_92(var uParam0, char* sParam1, int iParam2)
{
	_0x443174c20b8b9e7f(uParam0, 243, "flow");
	_0xbb7f4273c186bc4b(uParam0, "flow.isGameflowActive");
	_0xbb7f4273c186bc4b(&(uParam0->f_1), "flow.flowCompleted");
	func_270(&(uParam0->f_2));
	func_271(&(uParam0->f_131));
	_0xe0b45e983bfc0768();
}

void func_93(var uParam0, char* sParam1, int iParam2)
{
	StringCopy(&cVar0, "playerHorse", 64);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eCurrentStableSlot", 64);
	_0x443174c20b8b9e7f(uParam0, 3142, &cVar0);
	_0xb25b5a375be5be26(uParam0, &Var8);
	func_272(&(uParam0->f_1));
	func_273(&(uParam0->f_3054));
	func_274(&(uParam0->f_3134));
	func_275(&(uParam0->f_3135));
	func_276(&(uParam0->f_3140));
	_0xe0b45e983bfc0768();
}

void func_94(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 1081, "postOfficeData");
	StringCopy(&cVar1, "postOfficeData.trackedParcels", 64);
	_0x81f4e92be3958364(uParam0, 1081, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 6, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eMailSendFlags", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eMailReplyFlags", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eSentTime", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_3), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eDeliveryTime", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_4), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eTrackedParcel", 64);
		_0xb25b5a375be5be26((*uParam0)[iVar0], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".bOverrideDeliveryTime", 64);
		_0xbb7f4273c186bc4b(&((*uParam0)[iVar0]->f_5), &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

void func_95(var uParam0)
{
	_0x8e8ffb9e4ad051d2(uParam0, 659, "caravanCamp", 39);
	_0xb25b5a375be5be26(uParam0, "caravanCamp.eCurrentCamp");
	_0xb25b5a375be5be26(&(uParam0->f_1), "caravanCamp.eCurrentCampRegion");
	_0xb25b5a375be5be26(&(uParam0->f_2), "caravanCamp.eCampFlags");
	_0xb25b5a375be5be26(&(uParam0->f_3), "caravanCamp.eCampAppearance");
	_0xb25b5a375be5be26(&(uParam0->f_4), "caravanCamp.eCampSetupState");
	_0xb25b5a375be5be26(&(uParam0->f_5), "caravanCamp.eCampSubstate");
	StringCopy(&cVar0, "caravancamp.activeCampStateTags", 64);
	_0x81f4e92be3958364(&(uParam0->f_6), 301, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_6)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		_0x443174c20b8b9e7f(uParam0->f_6[iVar24], 5, &Var8);
		Var16 = { Var8 };
		StringConCat(&Var16, ".eTag", 64);
		_0xb25b5a375be5be26(uParam0->f_6[iVar24], &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".eExpiry", 64);
		_0xb25b5a375be5be26(&(uParam0->f_6[iVar24]->f_1), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".ePersistence", 64);
		_0xb25b5a375be5be26(&(uParam0->f_6[iVar24]->f_2), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iPriority", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_6[iVar24]->f_3), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".eCategory", 64);
		_0xb25b5a375be5be26(&(uParam0->f_6[iVar24]->f_4), &Var16);
		_0xe0b45e983bfc0768();
		iVar24++;
	}
	_0xa844feb5c22c2c74();
	_0x443174c20b8b9e7f(&(uParam0->f_307), 5, "caravanCamp.sPearsonUnlocks");
	_0x529b9ccd0972af4d(&(uParam0->f_307), "caravanCamp.sPearsonUnlocks.iUnlockedBitset");
	_0x529b9ccd0972af4d(&(uParam0->f_307.f_1), "caravanCamp.sPearsonUnlocks.iItemsCrafted");
	_0x529b9ccd0972af4d(&(uParam0->f_307.f_2), "caravanCamp.sPearsonUnlocks.iAnimalsDonated");
	_0x529b9ccd0972af4d(&(uParam0->f_307.f_3), "caravanCamp.sPearsonUnlocks.iCentsDonated");
	_0x529b9ccd0972af4d(&(uParam0->f_307.f_4), "caravanCamp.sPearsonUnlocks.iTrinkedDonated");
	_0xe0b45e983bfc0768();
	_0x529b9ccd0972af4d(&(uParam0->f_312), "caravanCamp.iCampLevel");
	_0x529b9ccd0972af4d(&(uParam0->f_313), "caravanCamp.iCampChickenCoopLevel");
	_0x529b9ccd0972af4d(&(uParam0->f_314), "caravanCamp.iCampVehicleLevel");
	_0x529b9ccd0972af4d(&(uParam0->f_315), "caravanCamp.iCampToolsLevel");
	_0x529b9ccd0972af4d(&(uParam0->f_316), "caravanCamp.iCampCraftingFireLevel");
	_0x529b9ccd0972af4d(&(uParam0->f_317), "caravanCamp.iCampShavingKitLevel");
	_0x529b9ccd0972af4d(&(uParam0->f_318), "caravanCamp.iCampPearsonLevel");
	_0x529b9ccd0972af4d(&(uParam0->f_319), "caravanCamp.iCampStraussLevel");
	_0x529b9ccd0972af4d(&(uParam0->f_320), "caravanCamp.iCampArthurLevel");
	_0x529b9ccd0972af4d(&(uParam0->f_321), "caravanCamp.iCampTentLevel");
	_0x529b9ccd0972af4d(&(uParam0->f_322), "caravanCamp.iCampHitchLevel");
	_0x529b9ccd0972af4d(&(uParam0->f_323), "caravanCamp.iNumInnocentsKilled");
	_0x529b9ccd0972af4d(&(uParam0->f_324), "caravanCamp.iCampFundsCents");
	_0x529b9ccd0972af4d(&(uParam0->f_325), "caravanCamp.iGangSavingsCents");
	_0x529b9ccd0972af4d(&(uParam0->f_326), "caravanCamp.iBankDebtCents");
	_0x529b9ccd0972af4d(&(uParam0->f_327), "caravanCamp.iCarcassesDonated");
	_0xb25b5a375be5be26(&(uParam0->f_328), "caravanCamp.todCampSupplyDecrement");
	_0xb25b5a375be5be26(&(uParam0->f_329), "caravanCamp.todCampFoodDecrement");
	_0xb25b5a375be5be26(&(uParam0->f_330), "caravanCamp.todNextPlayerStewServe");
	_0xb25b5a375be5be26(&(uParam0->f_331), "caravanCamp.todNextCompanionDonation");
	_0x81f4e92be3958364(&(uParam0->f_332), 3, "caravanCamp.eLastDonationCompanions");
	_0xb25b5a375be5be26(uParam0->f_332[0], "caravanCamp.eLastDonationCompanions0");
	_0xb25b5a375be5be26(uParam0->f_332[1], "caravanCamp.eLastDonationCompanions1");
	_0xa844feb5c22c2c74();
	StringCopy(&cVar0, "caravancamp.eCheckinState", 64);
	_0x81f4e92be3958364(&(uParam0->f_335), 32, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_335)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		_0xb25b5a375be5be26(uParam0->f_335[iVar24], &Var8);
		iVar24++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar0, "caravanCamp.caravanPurchaseList", 64);
	_0x81f4e92be3958364(&(uParam0->f_367), 41, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_367)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		_0x443174c20b8b9e7f(uParam0->f_367[iVar24], 4, &Var8);
		Var16 = { Var8 };
		StringConCat(&Var16, ".eGlobalItemIdx", 64);
		_0xb25b5a375be5be26(uParam0->f_367[iVar24], &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iPurchaseTimer", 64);
		_0xb25b5a375be5be26(&(uParam0->f_367[iVar24]->f_1), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iPurchaseCount", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_367[iVar24]->f_2), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".eShopPurchasedFrom", 64);
		_0xb25b5a375be5be26(&(uParam0->f_367[iVar24]->f_3), &Var16);
		_0xe0b45e983bfc0768();
		iVar24++;
	}
	_0xa844feb5c22c2c74();
	_0x443174c20b8b9e7f(&(uParam0->f_408), 7, "caravanCamp.sCaravanChoreData");
	_0x529b9ccd0972af4d(&(uParam0->f_408), "caravanCamp.sCaravanChoreData.iChoresCompletedBitMask");
	_0xb25b5a375be5be26(&(uParam0->f_408.f_1), "caravanCamp.sCaravanChoreData.todLastChoreCompleted");
	_0x35defecae36d4fae(&(uParam0->f_408.f_2), "caravanCamp.sCaravanChoreData.fMilkAmount");
	_0x35defecae36d4fae(&(uParam0->f_408.f_3), "caravanCamp.sCaravanChoreData.fEggAmount");
	_0x529b9ccd0972af4d(&(uParam0->f_408.f_4), "caravanCamp.sCaravanChoreData.iNumberOfChoresCompletedTotal");
	_0x529b9ccd0972af4d(&(uParam0->f_408.f_5), "caravanCamp.sCaravanChoreData.iTimesCowWasMilkedToday");
	_0xbb7f4273c186bc4b(&(uParam0->f_408.f_6), "caravanCamp.sCaravanChoreData.bStallsCleaned");
	_0xe0b45e983bfc0768();
	_0x443174c20b8b9e7f(&(uParam0->f_415), 25, "caravanCamp.sSupplyGroups");
	StringCopy(&cVar0, "caravanCamp.sSupplyGroups.iGroupItemsRemovedBitset", 64);
	_0x81f4e92be3958364(&(uParam0->f_415), 5, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_415)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		_0x529b9ccd0972af4d(uParam0->f_415[iVar24], &Var8);
		iVar24++;
	}
	_0xa844feb5c22c2c74();
	_0xb25b5a375be5be26(&(uParam0->f_415.f_5), "caravanCamp.sSupplyGroups.todCompanionNextRemoval");
	StringCopy(&cVar0, "caravanCamp.sSupplyGroups.iUnlockHashes", 64);
	_0x81f4e92be3958364(&(uParam0->f_415.f_6), 18, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_415.f_6)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		_0x529b9ccd0972af4d(uParam0->f_415.f_6[iVar24], &Var8);
		iVar24++;
	}
	_0xa844feb5c22c2c74();
	_0x529b9ccd0972af4d(&(uParam0->f_415.f_24), "caravanCamp.sSupplyGroups.iUnlockHashCount");
	_0xe0b45e983bfc0768();
	_0x443174c20b8b9e7f(&(uParam0->f_440), 127, "caravanCamp.sContData");
	StringCopy(&cVar0, "caravanCamp.sContData.sPg", 64);
	_0x81f4e92be3958364(&(uParam0->f_440), 127, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_440)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		_0x443174c20b8b9e7f(uParam0->f_440[iVar24], 63, &Var8);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iCarriedOverCents", 64);
		_0x529b9ccd0972af4d(uParam0->f_440[iVar24], &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".sCont", 64);
		func_277(Var16, &(uParam0->f_440[iVar24]->f_1));
		Var16 = { Var8 };
		StringConCat(&Var16, ".iContributionCount", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_440[iVar24]->f_62), &Var16);
		_0xe0b45e983bfc0768();
		iVar24++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
	_0x443174c20b8b9e7f(&(uParam0->f_567), 7, "caravanCamp.sCampHorseData");
	_0xbb7f4273c186bc4b(&(uParam0->f_567), "caravanCamp.sCampHitchedHorseSavedData.bCampHorseHitched");
	_0xb25b5a375be5be26(&(uParam0->f_567.f_1), "caravanCamp.sCampHitchedHorseSavedData.eCampIndex");
	func_152(&(uParam0->f_567.f_2), "caravanCamp.sCampHitchedHorseSavedData.vHitchedAtCoords");
	_0x35defecae36d4fae(&(uParam0->f_567.f_5), "caravanCamp.sCampHitchedHorseSavedData.fHitchedAtHeading");
	_0x529b9ccd0972af4d(&(uParam0->f_567.f_6), "caravanCamp.sCampHitchedHorseSavedData.iHorseGender");
	_0xe0b45e983bfc0768();
	_0xb25b5a375be5be26(&(uParam0->f_574), "caravanCamp.eLongAbsenceInstancesSeen");
	_0xb25b5a375be5be26(&(uParam0->f_575), "caravanCamp.todLongAbsenceTOD");
	_0x443174c20b8b9e7f(&(uParam0->f_576), 2, "caravanCamp.sCampAmbientStreams");
	_0xb25b5a375be5be26(&(uParam0->f_576.f_1), "caravanCamp.sCampAmbientStreams.todLastStreamPlayed");
	_0x529b9ccd0972af4d(&(uParam0->f_576), "caravanCamp.sCampAmbientStreams.iCounterStreamBeenPlayed");
	_0xe0b45e983bfc0768();
	StringCopy(&cVar0, "caravanCamp.eMiniExchangeQueue", 64);
	_0x81f4e92be3958364(&(uParam0->f_578), 81, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_578)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		_0xb25b5a375be5be26(uParam0->f_578[iVar24], &Var8);
		iVar24++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

void func_96(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 22, "loansharkingData");
	_0x529b9ccd0972af4d(uParam0, "loansharkingData.iLSActiveDebtors");
	_0x81f4e92be3958364(&(uParam0->f_1), 10, "loansharkingData.todLSVictimRespawn");
	iVar0 = 0;
	while (iVar0 < uParam0->f_1)
	{
		StringCopy(&cVar1, "loansharkingData.todLSVictimRespawn", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0xb25b5a375be5be26(uParam0->f_1[iVar0], &cVar1);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0x81f4e92be3958364(&(uParam0->f_11), 10, "loansharkingData.eLSSavedMissionFlags");
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		StringCopy(&cVar1, "loansharkingData.eLSSavedMissionFlags", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0xb25b5a375be5be26(uParam0->f_11[iVar0], &cVar1);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xb25b5a375be5be26(&(uParam0->f_21), "loansharkingData.eLSSavedSystemFlags");
	_0xe0b45e983bfc0768();
}

void func_97(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 5, "bountyhuntingData");
	_0x529b9ccd0972af4d(uParam0, "bountyhuntingData.iBountiesCompleted");
	_0xb25b5a375be5be26(&(uParam0->f_1), "bountyhuntingData.eFlags");
	_0xb25b5a375be5be26(&(uParam0->f_2), "bountyhuntingData.eRCMStage");
	_0xb25b5a375be5be26(&(uParam0->f_3), "bountyhuntingData.iRewardAlive");
	_0xb25b5a375be5be26(&(uParam0->f_4), "bountyhuntingData.iRewardDead");
	_0xe0b45e983bfc0768();
}

void func_98(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 17, "bankRobberyData");
	StringCopy(&cVar0, "bankRobberyData.eFlags", 64);
	_0x81f4e92be3958364(uParam0, 5, &cVar0);
	iVar16 = 0;
	while (iVar16 < *uParam0)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		_0xb25b5a375be5be26((*uParam0)[iVar16], &Var8);
		iVar16++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar0, "bankRobberyData.eStatus", 64);
	_0x81f4e92be3958364(&(uParam0->f_5), 5, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_5)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		_0xb25b5a375be5be26(uParam0->f_5[iVar16], &Var8);
		iVar16++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar0, "bankRobberyData.todLastRobTime", 64);
	_0x81f4e92be3958364(&(uParam0->f_10), 5, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_10)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		_0xb25b5a375be5be26(uParam0->f_10[iVar16], &Var8);
		iVar16++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar0, "bankRobberyData.iCompletedRobberies", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_15), &cVar0);
	_0xbb7f4273c186bc4b(&(uParam0->f_16), "bankRobberyData.bIsBraveClientActive");
	_0xe0b45e983bfc0768();
}

void func_99(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 127, "coachRobbery");
	_0x529b9ccd0972af4d(uParam0, "coachRobbery.iCompletedRobberies");
	_0xb25b5a375be5be26(&(uParam0->f_3), "coachRobbery.eActiveRobbery");
	StringCopy(&cVar0, "coachRobbery.eStatus", 64);
	_0x81f4e92be3958364(&(uParam0->f_4), 15, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_4)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		_0xb25b5a375be5be26(uParam0->f_4[iVar16], &Var8);
		iVar16++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar0, "coachRobbery.eCurrentVariant", 64);
	_0x81f4e92be3958364(&(uParam0->f_19), 15, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_19)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		_0xb25b5a375be5be26(uParam0->f_19[iVar16], &Var8);
		iVar16++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar0, "coachRobbery.eCurrentDifficulty", 64);
	_0x81f4e92be3958364(&(uParam0->f_34), 15, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_34)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		_0xb25b5a375be5be26(uParam0->f_34[iVar16], &Var8);
		iVar16++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar0, "coachRobbery.todCoachRobExp", 64);
	_0x81f4e92be3958364(&(uParam0->f_79), 15, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_79)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		_0xb25b5a375be5be26(uParam0->f_79[iVar16], &Var8);
		iVar16++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar0, "coachRobbery.todCoachRobAct", 64);
	_0x81f4e92be3958364(&(uParam0->f_64), 15, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_64)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		_0xb25b5a375be5be26(uParam0->f_64[iVar16], &Var8);
		iVar16++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar0, "coachRobbery.iTimesOffered", 64);
	_0x81f4e92be3958364(&(uParam0->f_49), 15, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_49)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		_0x529b9ccd0972af4d(uParam0->f_49[iVar16], &Var8);
		iVar16++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar0, "coachRobbery.bNoteHasBeenRead", 64);
	_0x81f4e92be3958364(&(uParam0->f_94), 15, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_94)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		_0xbb7f4273c186bc4b(uParam0->f_94[iVar16], &Var8);
		iVar16++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar0, "coachRobbery.iRobberiesSinceLastPoliceTrap", 64);
	_0x81f4e92be3958364(&(uParam0->f_111), 15, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_111)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		_0x529b9ccd0972af4d(uParam0->f_111[iVar16], &Var8);
		iVar16++;
	}
	_0xa844feb5c22c2c74();
	_0xb25b5a375be5be26(&(uParam0->f_2), "coachRobbery.eCurrentRobberyStr");
	_0xb25b5a375be5be26(&(uParam0->f_1), "coachRobbery.eCurrentRobberyRho");
	_0xb25b5a375be5be26(&(uParam0->f_126), "coachRobbery.eCoachBitflags");
	_0xb25b5a375be5be26(&(uParam0->f_109), "coachRobbery.todCoachRobberyCompleted");
	_0xb25b5a375be5be26(&(uParam0->f_110), "coachRobbery.todTipGivenByFreightWorker");
	_0xe0b45e983bfc0768();
}

void func_100(var uParam0)
{
	StringCopy(&cVar1, "tutorialSaved", 64);
	_0x443174c20b8b9e7f(uParam0, 76, &cVar1);
	StringCopy(&cVar1, "tutorialSaved.sTimedData", 64);
	_0x81f4e92be3958364(uParam0, 76, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 3, &Var9);
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		StringConCat(&Var9, "iTimeLastRun", 64);
		_0x529b9ccd0972af4d((*uParam0)[iVar0], &Var9);
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		StringConCat(&Var9, "iTimesRun", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_1), &Var9);
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		StringConCat(&Var9, "eTutorial", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_2), &Var9);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

void func_101(var uParam0, char* sParam1, int iParam2)
{
	StringCopy(&cVar1, "eTutorialsRun", 64);
	_0x81f4e92be3958364(uParam0, 22, &cVar1);
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

void func_102(var uParam0)
{
	StringCopy(&cVar1, "lawStateData", 64);
	_0x81f4e92be3958364(uParam0, 73, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 12, &Var9);
		cVar17 = { Var9 };
		StringConCat(&cVar17, "iStateBounty", 64);
		_0x529b9ccd0972af4d((*uParam0)[iVar0], &cVar17);
		cVar17 = { Var9 };
		StringConCat(&cVar17, "vLastKnownLocation", 64);
		func_152(&((*uParam0)[iVar0]->f_1), &cVar17);
		cVar17 = { Var9 };
		StringConCat(&cVar17, "fLastKnownRadius", 64);
		_0x35defecae36d4fae(&((*uParam0)[iVar0]->f_4), &cVar17);
		cVar17 = { Var9 };
		StringConCat(&cVar17, "eStateFlags", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_5), &cVar17);
		cVar17 = { Var9 };
		StringConCat(&cVar17, "stateLawMemoryData", 64);
		_0x443174c20b8b9e7f(&((*uParam0)[iVar0]->f_6), 6, &cVar17);
		Var25 = { cVar17 };
		StringConCat(&Var25, "eLastOuftitSeenByLaw", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_6), &Var25);
		Var25 = { cVar17 };
		StringConCat(&Var25, "eSideburnsStyle", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_6.f_1), &Var25);
		Var25 = { cVar17 };
		StringConCat(&Var25, "eChinStyle", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_6.f_2), &Var25);
		Var25 = { cVar17 };
		StringConCat(&Var25, "eMustacheStyle", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_6.f_3), &Var25);
		Var25 = { cVar17 };
		StringConCat(&Var25, "eTimeOutfitLastSeen", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_6.f_4), &Var25);
		Var25 = { cVar17 };
		StringConCat(&Var25, "eAppearanceLawMemoryFlags", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_6.f_5), &Var25);
		_0xe0b45e983bfc0768();
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_103(var uParam0)
{
	StringCopy(&cVar1, "lawDistrictData", 64);
	_0x81f4e92be3958364(uParam0, 18, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 1, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "eLawDistrictFlags", 64);
		_0xb25b5a375be5be26((*uParam0)[iVar0], &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_104(var uParam0)
{
	StringCopy(&cVar1, "caravanEventData", 64);
	_0x81f4e92be3958364(uParam0, 57, &cVar1);
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 8, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iTimesCompleted", 64);
		_0x529b9ccd0972af4d((*uParam0)[iVar0], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iTimesSeen", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iTimesLaunched", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iTimesSpawned", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_3), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".todNextAvailable", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_4), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iGeneric1", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_5), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iGeneric2", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_6), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".bUnlocked", 64);
		_0xbb7f4273c186bc4b(&((*uParam0)[iVar0]->f_7), &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_105(var uParam0)
{
	StringCopy(&cVar1, "pendingRCMStage", 64);
	_0x81f4e92be3958364(uParam0, 40, &cVar1);
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

void func_106(var uParam0)
{
	StringCopy(&cVar1, "rcmDataSaved", 64);
	_0x443174c20b8b9e7f(uParam0, 603, &cVar1);
	StringCopy(&cVar1, "rcmDataSaved.iSavedFloat1", 64);
	_0x81f4e92be3958364(uParam0, 201, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringConCat(&Var9, "_", 64);
		StringIntConCat(&Var9, iVar0, 64);
		_0x35defecae36d4fae((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar1, "rcmDataSaved.iSavedFloat2", 64);
	_0x81f4e92be3958364(&(uParam0->f_201), 201, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_201)
	{
		Var9 = { cVar1 };
		StringConCat(&Var9, "_", 64);
		StringIntConCat(&Var9, iVar0, 64);
		_0x35defecae36d4fae(uParam0->f_201[iVar0], &Var9);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar1, "rcmDataSaved.eRCMSavedFlags", 64);
	_0x81f4e92be3958364(&(uParam0->f_402), 201, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_402)
	{
		Var9 = { cVar1 };
		StringConCat(&Var9, "_", 64);
		StringIntConCat(&Var9, iVar0, 64);
		_0xb25b5a375be5be26(uParam0->f_402[iVar0], &Var9);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

void func_107(var uParam0)
{
	StringCopy(&cVar1, "playerOnlyGreetStack", 64);
	_0x81f4e92be3958364(uParam0, 46, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 3, &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "eRuleset", 64);
		_0xb25b5a375be5be26((*uParam0)[iVar0], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todExpiry", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "bTempDisable", 64);
		_0xbb7f4273c186bc4b(&((*uParam0)[iVar0]->f_2), &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_108(var uParam0)
{
	StringCopy(&cVar1, "companionData", 64);
	_0x81f4e92be3958364(uParam0, 1621, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x8e8ffb9e4ad051d2((*uParam0)[iVar0], 60, &Var9, 21);
		Var17 = { Var9 };
		StringConCat(&Var17, "companionFlags", 64);
		_0xb25b5a375be5be26((*uParam0)[iVar0], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iTrustLevel", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iFollowerLevel", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "companionOutfit", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_3), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "lastWornOutfitOnMission", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_4), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "wornItems", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_5), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "modelCompanion", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_6), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "modelCompanionHorse", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_7), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "immediateGreetOverride", 64);
		_0x443174c20b8b9e7f(&((*uParam0)[iVar0]->f_8), 3, &Var17);
		Var25 = { Var17 };
		StringConCat(&Var25, "eRuleset", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_8), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "todExpiry", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_8.f_1), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "bTempDisable", 64);
		_0xbb7f4273c186bc4b(&((*uParam0)[iVar0]->f_8.f_2), &Var25);
		_0xe0b45e983bfc0768();
		Var17 = { Var9 };
		StringConCat(&Var17, "greetOverrides", 64);
		_0x81f4e92be3958364(&((*uParam0)[iVar0]->f_11), 31, &Var17);
		iVar33 = 0;
		while (iVar33 < 10)
		{
			Var25 = { Var17 };
			StringIntConCat(&Var25, iVar33, 64);
			_0x443174c20b8b9e7f((*uParam0)[iVar0]->f_11[iVar33], 3, &Var25);
			Var25 = { Var17 };
			StringConCat(&Var25, "eRuleset", 64);
			_0xb25b5a375be5be26((*uParam0)[iVar0]->f_11[iVar33], &Var25);
			Var25 = { Var17 };
			StringConCat(&Var25, "todExpiry", 64);
			_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_11[iVar33]->f_1), &Var25);
			Var25 = { Var17 };
			StringConCat(&Var25, "bTempDisable", 64);
			_0xbb7f4273c186bc4b(&((*uParam0)[iVar0]->f_11[iVar33]->f_2), &Var25);
			_0xe0b45e983bfc0768();
			iVar33++;
		}
		_0xa844feb5c22c2c74();
		Var17 = { Var9 };
		StringConCat(&Var17, "eTemporaryMood", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_42), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "ePersistentMood", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_44), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todTemporaryMoodExpiry", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_43), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todLastItemInteraction", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_45), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todLastChore", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_46), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todLastActivity", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_47), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todRoleCooldown", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_48), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "eTimedEventType", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_49), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todTimedEvent", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_50), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "txtSchedule", 64);
		_0x186608a2ac6f9e88(&((*uParam0)[iVar0]->f_51), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "eDeedReservedFor", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_59), &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_109(var uParam0)
{
	StringCopy(&cVar0, "companion_manager", 64);
	_0x443174c20b8b9e7f(uParam0, 476, &cVar0);
	StringConCat(&cVar0, ".itemRequests", 64);
	_0x81f4e92be3958364(uParam0, 271, &cVar0);
	iVar24 = 0;
	while (iVar24 < *uParam0)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar24], 27, &Var8);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eRequest", 64);
		_0xb25b5a375be5be26((*uParam0)[iVar24], &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eRequestItem", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar24]->f_1), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "iNumRequested", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar24]->f_2), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eCompanion", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar24]->f_3), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eHandInType", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar24]->f_4), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eResultType", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar24]->f_5), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "txtConversation", 64);
		_0x5a10d6506b2f2c63(&((*uParam0)[iVar24]->f_6), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "txtThankDialogue", 64);
		_0x5a10d6506b2f2c63(&((*uParam0)[iVar24]->f_9), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "txtHandOverScenePath", 64);
		_0x186608a2ac6f9e88(&((*uParam0)[iVar24]->f_12), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eVignette", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar24]->f_20), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "ePickupReward", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar24]->f_21), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eModelReward", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar24]->f_22), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "iRewardSupplyGroupHash", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar24]->f_23), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eState", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar24]->f_24), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "bHasThankDialoguePlayed", 64);
		_0xbb7f4273c186bc4b(&((*uParam0)[iVar24]->f_25), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "bRewardHelpTextShown", 64);
		_0xbb7f4273c186bc4b(&((*uParam0)[iVar24]->f_26), &cVar16);
		_0xe0b45e983bfc0768();
		iVar24++;
	}
	_0xa844feb5c22c2c74();
	cVar16 = { cVar0 };
	StringConCat(&cVar16, ".iItemRequestCompleteBitset", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_271), &cVar16);
	cVar16 = { cVar0 };
	StringConCat(&cVar16, ".eReturnedJackBook", 64);
	_0xb25b5a375be5be26(&(uParam0->f_272), &cVar16);
	StringCopy(&cVar0, "companion_manager.iNumAvailableActivities", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_273), &cVar0);
	StringCopy(&cVar0, "companion_manager.availableActivities", 64);
	_0x81f4e92be3958364(&(uParam0->f_274), 201, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_274)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		_0x8e8ffb9e4ad051d2(uParam0->f_274[iVar24], 20, &Var8, 20);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eActivity", 64);
		_0xb25b5a375be5be26(uParam0->f_274[iVar24], &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eActivityInstance", 64);
		_0xb25b5a375be5be26(&(uParam0->f_274[iVar24]->f_1), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eHost", 64);
		_0xb25b5a375be5be26(&(uParam0->f_274[iVar24]->f_2), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eParticipants", 64);
		_0xb25b5a375be5be26(&(uParam0->f_274[iVar24]->f_3), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eConditionFlags", 64);
		_0xb25b5a375be5be26(&(uParam0->f_274[iVar24]->f_4), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "vInvitePos", 64);
		func_152(&(uParam0->f_274[iVar24]->f_5), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "vActivityPos", 64);
		func_152(&(uParam0->f_274[iVar24]->f_8), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "bEnabledInFlow", 64);
		_0xbb7f4273c186bc4b(&(uParam0->f_274[iVar24]->f_11), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "bHasBeenLaunched", 64);
		_0xbb7f4273c186bc4b(&(uParam0->f_274[iVar24]->f_12), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "bMustOffer", 64);
		_0xbb7f4273c186bc4b(&(uParam0->f_274[iVar24]->f_13), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "bOfferUntilHasRun", 64);
		_0xbb7f4273c186bc4b(&(uParam0->f_274[iVar24]->f_14), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "bForceLaunch", 64);
		_0xbb7f4273c186bc4b(&(uParam0->f_274[iVar24]->f_15), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eActivityDeed", 64);
		_0xb25b5a375be5be26(&(uParam0->f_274[iVar24]->f_16), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eTODAvailable", 64);
		_0xb25b5a375be5be26(&(uParam0->f_274[iVar24]->f_17), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "iWeight", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_274[iVar24]->f_18), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "iNumTimesOffered", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_274[iVar24]->f_19), &cVar16);
		_0xe0b45e983bfc0768();
		iVar24++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar0, "companion_manager.todHungoverExpiry", 64);
	_0xb25b5a375be5be26(&(uParam0->f_475), &cVar0);
	_0xe0b45e983bfc0768();
}

void func_110(var uParam0)
{
	StringCopy(&cVar1, "activities", 64);
	_0x81f4e92be3958364(uParam0, 61, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 2, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, ".bHasBeenPerformed", 64);
		_0xbb7f4273c186bc4b((*uParam0)[iVar0], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".bHasBeenOffered", 64);
		_0xbb7f4273c186bc4b(&((*uParam0)[iVar0]->f_1), &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_111(var uParam0)
{
	StringCopy(&cVar1, "outfits", 64);
	_0x81f4e92be3958364(uParam0, 286, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 3, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "status", 64);
		_0xb25b5a375be5be26((*uParam0)[iVar0], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "effect", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "tags", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_2), &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_112(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 17, "playerFacialHair");
	StringCopy(&cVar0, "playerFacialHair.facialHair", 64);
	_0x81f4e92be3958364(uParam0, 16, &cVar0);
	iVar24 = 0;
	while (iVar24 < *uParam0)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar24], 5, &Var8);
		Var16 = { Var8 };
		StringConCat(&Var16, ".facialHairLength", 64);
		_0xb25b5a375be5be26((*uParam0)[iVar24], &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".facialHairCut", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar24]->f_1), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".facialHairStyle", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar24]->f_2), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".facialHairNextGrowthTimer", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar24]->f_3), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iNumAcceleratedGrowthCycles", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar24]->f_4), &Var16);
		_0xe0b45e983bfc0768();
		iVar24++;
	}
	_0xa844feb5c22c2c74();
	_0xb25b5a375be5be26(&(uParam0->f_16), "playerFacialHair.eFacialHairFlags");
	_0xe0b45e983bfc0768();
}

void func_113(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 7, "playerHeadHair");
	_0xb25b5a375be5be26(uParam0, "playerHeadHair.ePomadeWearOffTimer");
	_0xb25b5a375be5be26(&(uParam0->f_1), "playerHeadHair.headHairLength");
	_0xb25b5a375be5be26(&(uParam0->f_2), "playerHeadHair.eHeadHairCut");
	_0xb25b5a375be5be26(&(uParam0->f_3), "playerHeadHair.eHeadHairStyle");
	_0xb25b5a375be5be26(&(uParam0->f_4), "playerHeadHair.eHeadHairFlags");
	_0xb25b5a375be5be26(&(uParam0->f_5), "playerHeadHair.headHairNextGrowthTimer");
	_0x529b9ccd0972af4d(&(uParam0->f_6), "playerHeadHair.iNumAcceleratedGrowthCycles");
	_0xe0b45e983bfc0768();
}

void func_114(var uParam0, char* sParam1, int iParam2)
{
	StringCopy(&cVar1, "mapBlipData", 64);
	_0x81f4e92be3958364(uParam0, 1001, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 4, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "blipRegion", 64);
		_0xb25b5a375be5be26((*uParam0)[iVar0], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "blipType", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "blipPackedPosition", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "blipTODFlags", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_3), &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_115(var uParam0)
{
	StringCopy(&cVar1, "discoverableData", 64);
	_0x8e8ffb9e4ad051d2(uParam0, 157, &cVar1, 14);
	StringCopy(&cVar1, "discoverableData.eFlags", 64);
	_0x81f4e92be3958364(uParam0, 144, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0xb25b5a375be5be26((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoEasel_timesViewed", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_145), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "todDiscoEasel_timeStamp", 64);
	_0xb25b5a375be5be26(&(uParam0->f_144), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoEasel_currentlyViewed", 64);
	_0xbb7f4273c186bc4b(&(uParam0->f_147), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoPhonograph_visits", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_146), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoDreamcatchers_bitField", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_148), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoCarriable_iBitField", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_149), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoCarriableMore_iBitField", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_150), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoCarriableArrows_iBitField", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_151), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoLocationVersion_iBitField", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_152), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoLocationMoreVersion_iBitField", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_153), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoLocationOtherVersion_iBitField", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_154), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoCorpse_iBitField", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_155), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoDisable", 64);
	_0xbb7f4273c186bc4b(&(uParam0->f_156), &Var9);
	_0xe0b45e983bfc0768();
}

void func_116(var uParam0)
{
	StringCopy(&cVar1, "showManagerData", 64);
	_0x8e8ffb9e4ad051d2(uParam0, 17, &cVar1, 7);
	StringCopy(&cVar1, "showManagerData.eCurrentShow", 64);
	_0x81f4e92be3958364(uParam0, 6, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0xb25b5a375be5be26((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar1, "showManagerData.TODLastTimeViewed", 64);
	_0x81f4e92be3958364(&(uParam0->f_6), 6, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_6)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0xb25b5a375be5be26(uParam0->f_6[iVar0], &Var9);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar1, "showManagerData.iShowBits", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_12), &cVar1);
	StringCopy(&cVar1, "showManagerData.iTotalShowViews", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_13), &cVar1);
	StringCopy(&cVar1, "showManagerData.iTotalMCViews", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_14), &cVar1);
	StringCopy(&cVar1, "showManagerData.iTotalMagicLanternViews", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_15), &cVar1);
	StringCopy(&cVar1, "showManagerData.iTotalMovieViews", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_16), &cVar1);
	_0xe0b45e983bfc0768();
}

void func_117(var uParam0)
{
	StringCopy(&cVar1, "townSecretData", 64);
	_0x443174c20b8b9e7f(uParam0, 8, &cVar1);
	StringCopy(&cVar1, "townSecretData.eFlags", 64);
	_0x81f4e92be3958364(uParam0, 5, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0xb25b5a375be5be26((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	Var9 = { cVar1 };
	StringConCat(&Var9, "TownSecret_VanHorn_bitfield", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_5), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "iTownSecret_Saint_Denis_bitfield", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_6), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "eStrawberryLastDayUFOSeen", 64);
	_0xb25b5a375be5be26(&(uParam0->f_7), &Var9);
	_0xe0b45e983bfc0768();
}

void func_118(var uParam0)
{
	StringCopy(&cVar1, "eventArea", 64);
	_0x81f4e92be3958364(uParam0, 49, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 12, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "iStage", 64);
		_0x529b9ccd0972af4d((*uParam0)[iVar0], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iForceTransitionStage", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todNextStage", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todCounter", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_3), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "eFlags", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_4), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "eStateFlags", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_5), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iEventAreaCustomData", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_6), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iEventAreaCustomCounter", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_7), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iEventAreaMassacreCount", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_8), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iAggroStage", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_9), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todAggroed", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_10), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todMassacred", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_11), &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_119(var uParam0)
{
	StringCopy(&cVar0, "duelingData", 64);
	_0x443174c20b8b9e7f(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".eFlags", 64);
	_0xb25b5a375be5be26(uParam0, &Var8);
	_0xe0b45e983bfc0768();
}

void func_120(var uParam0, char* sParam1, int iParam2)
{
	StringCopy(&cVar1, "herbs", 64);
	_0x81f4e92be3958364(uParam0, 45, &cVar1);
	iVar0 = 0;
	while (iVar0 < 44)
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

void func_121(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 65, "huntingZoneData");
	StringCopy(&cVar1, "huntingZoneData.sHuntingZoneTypes", 64);
	_0x81f4e92be3958364(uParam0, 65, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 65, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, ".bDiscovered", 64);
		_0xbb7f4273c186bc4b((*uParam0)[iVar0], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".bCompleted", 64);
		_0xbb7f4273c186bc4b(&((*uParam0)[iVar0]->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eLaunchTime", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".bLegendaryHasBeenSkinned", 64);
		_0xbb7f4273c186bc4b(&((*uParam0)[iVar0]->f_3), &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

void func_122(var uParam0)
{
	StringCopy(&cVar1, "propertyData", 64);
	_0x81f4e92be3958364(uParam0, 35, &cVar1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 2, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eFlags", 64);
		_0xb25b5a375be5be26((*uParam0)[iVar0], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eTimeOfDay", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_1), &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_123(var uParam0)
{
	StringCopy(&cVar1, "homeRobberyData", 64);
	_0x81f4e92be3958364(uParam0, 57, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 7, &Var9);
		_0xb25b5a375be5be26((*uParam0)[iVar0], "todNextAvailable");
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_1), "todLastVisited");
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_4), "eFlags");
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_5), "eFlagsPlus");
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_6), "eFlagsSet3");
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_2), "iTimesRobbed");
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_3), "iPlayerCentsLostAtHome");
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_124(var uParam0)
{
	StringCopy(&cVar1, "newspapers.", 64);
	_0x81f4e92be3958364(uParam0, 57, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 4, &Var9);
		_0xb25b5a375be5be26((*uParam0)[iVar0], ".eStatus");
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_1), ".eDynamicStory1");
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_2), ".eDynamicStory2");
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_3), ".eFishingStory");
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_125(var uParam0)
{
	StringCopy(&cVar1, "dynamicArticles.", 64);
	_0x81f4e92be3958364(uParam0, 35, &cVar1);
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

void func_126(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 2, "itemData");
	_0xb25b5a375be5be26(uParam0, "itemData.todSurvivalistActive");
	_0xb25b5a375be5be26(&(uParam0->f_1), "itemData.todChewingGumActive");
	_0xe0b45e983bfc0768();
}

void func_127(var uParam0)
{
	StringCopy(&cVar1, "gangs", 64);
	_0x81f4e92be3958364(uParam0, 61, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 10, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "gangSavedFlags", 64);
		_0xb25b5a375be5be26((*uParam0)[iVar0], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "gangStatus", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iKillsSinceStatusChange", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todLastKill", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_3), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iGenericInt1", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_4), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iNumCampfiresCleared", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_5), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iNumCampfiresSpawned", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_6), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iNumCampfiresSeen", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_7), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iNumCampfiresPersisted", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_8), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iGangEncounterStage", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_9), &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_128(var uParam0)
{
	StringCopy(&cVar1, "gangAmbushesSeen", 64);
	StringCopy(&cVar33, "ambushTrack", 64);
	StringCopy(&cVar9, "gangAmbushesStraight", 64);
	_0x443174c20b8b9e7f(uParam0, 197, "ambush");
	StringCopy(&cVar33, "ambush.ambushTrack", 64);
	_0x81f4e92be3958364(uParam0, 177, &cVar33);
	iVar0 = 0;
	while (iVar0 < 44)
	{
		Var25 = { cVar33 };
		StringIntConCat(&Var25, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 4, &Var25);
		Var17 = { Var25 };
		StringConCat(&Var17, ".iCompletedCount", 64);
		_0x529b9ccd0972af4d((*uParam0)[iVar0], &Var17);
		Var17 = { Var25 };
		StringConCat(&Var17, ".iSeenCount", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_1), &Var17);
		Var17 = { Var25 };
		StringConCat(&Var17, ".iSpawnedCount", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_2), &Var17);
		Var17 = { Var25 };
		StringConCat(&Var17, ".iNextAllowedSpawnMinutes", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_3), &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0x81f4e92be3958364(&(uParam0->f_177), 7, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_177)
	{
		Var17 = { cVar1 };
		StringIntConCat(&Var17, iVar0, 64);
		_0x529b9ccd0972af4d(uParam0->f_177[iVar0], &Var17);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0x81f4e92be3958364(&(uParam0->f_184), 7, &cVar9);
	iVar0 = 0;
	while (iVar0 < uParam0->f_184)
	{
		Var17 = { cVar9 };
		StringIntConCat(&Var17, iVar0, 64);
		_0x529b9ccd0972af4d(uParam0->f_184[iVar0], &Var17);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xb25b5a375be5be26(&(uParam0->f_191), "ambush.eAmbushSavedFlags");
	_0xb25b5a375be5be26(&(uParam0->f_192), "ambush.todLastAmbushTime");
	_0xb25b5a375be5be26(&(uParam0->f_193), "ambush.eLastAmbushGang");
	_0xb25b5a375be5be26(&(uParam0->f_194), "ambush.eLastAmbush");
	_0x529b9ccd0972af4d(&(uParam0->f_195), "ambush.iAmbushesCompleted");
	_0x529b9ccd0972af4d(&(uParam0->f_196), "ambush.iNumRecognizeAmbushesStraight");
	_0xe0b45e983bfc0768();
}

void func_129(var uParam0)
{
	StringCopy(&cVar1, "campfires.iVignetteVariations", 64);
	_0x443174c20b8b9e7f(uParam0, 38, "campfires");
	_0xb25b5a375be5be26(uParam0, "campfires.eFoothillsStoriesSpoken");
	_0xb25b5a375be5be26(&(uParam0->f_1), "campfires.eMountainsStoriesSpoken");
	_0xb25b5a375be5be26(&(uParam0->f_2), "campfires.ePlainsStoriesSpoken");
	_0xb25b5a375be5be26(&(uParam0->f_3), "campfires.eSwampsStoriesSpoken");
	_0x81f4e92be3958364(&(uParam0->f_35), 2, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_35)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x529b9ccd0972af4d(uParam0->f_35[iVar0], &Var9);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar1, "campfires.vCampfireUsedPositions", 64);
	_0x81f4e92be3958364(&(uParam0->f_4), 31, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_4)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f(uParam0->f_4[iVar0], 3, &Var9);
		func_152(uParam0->f_4[iVar0], &Var9);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xb25b5a375be5be26(&(uParam0->f_37), "campfires.eCampSavedFlags");
	_0xe0b45e983bfc0768();
}

void func_130(var uParam0)
{
	StringCopy(&cVar1, "worldStates", 64);
	_0x81f4e92be3958364(uParam0, 14, &cVar1);
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

void func_131(var uParam0)
{
	StringCopy(&cVar1, "worldStateTimers", 64);
	_0x81f4e92be3958364(uParam0, 61, &cVar1);
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

void func_132(var uParam0)
{
	StringCopy(&cVar1, "featureUnlocked", 64);
	_0x81f4e92be3958364(uParam0, 3, &cVar1);
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

void func_133(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 81, "jailData");
	StringCopy(&cVar1, "jailData.sPrisoners", 64);
	_0x81f4e92be3958364(uParam0, 81, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 4, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "eJailRegion", 64);
		_0xb25b5a375be5be26((*uParam0)[iVar0], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "ePrisoner", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "ePrisonerFlag", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "ePrisonerDialogue", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_3), &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

void func_134(var uParam0)
{
	StringCopy(&cVar1, "trainData", 64);
	_0x81f4e92be3958364(uParam0, 66, &cVar1);
	iVar0 = 0;
	while (iVar0 < 13)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 5, &Var9);
		func_152(&((*uParam0)[iVar0]->f_1), "vTrainLoc");
		_0xb25b5a375be5be26((*uParam0)[iVar0], "trainFlags");
		_0xbb7f4273c186bc4b(&((*uParam0)[iVar0]->f_4), "bDirection");
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_135(var uParam0)
{
	_0x8e8ffb9e4ad051d2(uParam0, 71, "playerRPGData", 39);
	StringCopy(&cVar1, "playerRPGData.fPlayerEfficiency", 64);
	_0x81f4e92be3958364(uParam0, 4, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 1, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "fCorePoints", 64);
		_0x35defecae36d4fae((*uParam0)[iVar0], &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar1, "playerRPGData.sAttributeOverpoweredTime", 64);
	_0x81f4e92be3958364(&(uParam0->f_4), 7, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_4)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f(uParam0->f_4[iVar0], 2, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "fTankTime", 64);
		_0x35defecae36d4fae(uParam0->f_4[iVar0], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "fCoreTime", 64);
		_0x35defecae36d4fae(&(uParam0->f_4[iVar0]->f_1), &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar1, "playerRPGData.fAttributePoints", 64);
	_0x81f4e92be3958364(&(uParam0->f_11), 24, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x35defecae36d4fae(uParam0->f_11[iVar0], &Var9);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar1, "playerRPGData.iHonor", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_35), &cVar1);
	StringCopy(&cVar1, "playerRPGData.iHighestHonorRank", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_36), &cVar1);
	StringCopy(&cVar1, "playerRPGData.iLowestHonorRank", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_37), &cVar1);
	StringCopy(&cVar1, "playerRPGData.iHighestBountyHonorReached", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_38), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fDeadeyeAmount", 64);
	_0x35defecae36d4fae(&(uParam0->f_39), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fPlayerWeightLowerLimit", 64);
	_0x35defecae36d4fae(&(uParam0->f_40), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fPlayerWeightUpperLimit", 64);
	_0x35defecae36d4fae(&(uParam0->f_41), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fPlayerTankSickMod", 64);
	_0x35defecae36d4fae(&(uParam0->f_44), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fPlayerStamWeightMod", 64);
	_0x35defecae36d4fae(&(uParam0->f_45), &cVar1);
	StringCopy(&cVar1, "playerRPGData.RPG_TIME_BEFORE_DEADEYECORE_EMPTY", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_46), &cVar1);
	StringCopy(&cVar1, "playerRPGData.RPG_TIME_BEFORE_STAMINACORE_EMPTY", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_47), &cVar1);
	StringCopy(&cVar1, "playerRPGData.RPG_TIME_BEFORE_HEALTHCORE_EMPTY", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_48), &cVar1);
	StringCopy(&cVar1, "playerRPGData.iOverfedTimer", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_42), &cVar1);
	StringCopy(&cVar1, "playerRPGData.bPlayerPoisoned", 64);
	_0xbb7f4273c186bc4b(&(uParam0->f_43), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fGritResist", 64);
	_0x35defecae36d4fae(&(uParam0->f_49), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fInstinctResist", 64);
	_0x35defecae36d4fae(&(uParam0->f_50), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fStrengthResist", 64);
	_0x35defecae36d4fae(&(uParam0->f_51), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fFatResist", 64);
	_0x35defecae36d4fae(&(uParam0->f_52), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fHeatResist", 64);
	_0x35defecae36d4fae(&(uParam0->f_53), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fColdResist", 64);
	_0x35defecae36d4fae(&(uParam0->f_54), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fBonusHealthXP", 64);
	_0x35defecae36d4fae(&(uParam0->f_55), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fBonusDeadeyeXP", 64);
	_0x35defecae36d4fae(&(uParam0->f_56), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fBonusStaminaXP", 64);
	_0x35defecae36d4fae(&(uParam0->f_57), &cVar1);
	StringCopy(&cVar1, "playerRPGData.ePlayerSickness", 64);
	_0xb25b5a375be5be26(&(uParam0->f_67), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fEagleEyeDepleteMod", 64);
	_0x35defecae36d4fae(&(uParam0->f_58), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fEagleEyeRangeBonus", 64);
	_0x35defecae36d4fae(&(uParam0->f_59), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fWeaponDegradeResist", 64);
	_0x35defecae36d4fae(&(uParam0->f_60), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fDamageScaleMelee", 64);
	_0x35defecae36d4fae(&(uParam0->f_61), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fDamageMod", 64);
	_0x35defecae36d4fae(&(uParam0->f_62), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fDamageTakenOnHorseModifier", 64);
	_0x35defecae36d4fae(&(uParam0->f_63), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fBowStaminaModifier", 64);
	_0x35defecae36d4fae(&(uParam0->f_64), &cVar1);
	StringCopy(&cVar1, "playerRPGData.iGrappledKilledBears", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_65), &cVar1);
	StringCopy(&cVar1, "playerRPGData.iTimesEatenFood", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_66), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fHorseBondingXPMod", 64);
	_0x35defecae36d4fae(&(uParam0->f_68), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fHealthRefillMod", 64);
	_0x35defecae36d4fae(&(uParam0->f_69), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fFortifyMod", 64);
	_0x35defecae36d4fae(&(uParam0->f_70), &cVar1);
	_0xe0b45e983bfc0768();
}

void func_136(var uParam0)
{
	StringCopy(&cVar1, "moralChoices", 64);
	_0x81f4e92be3958364(uParam0, 16, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 1, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eChoiceType", 64);
		_0xb25b5a375be5be26((*uParam0)[iVar0], &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_137(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 286, "cacheOutfitData");
	func_278("cachedOutfits", uParam0);
	_0xe0b45e983bfc0768();
}

void func_138(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 2, "playerCampData");
	_0xb25b5a375be5be26(uParam0, "playerCampData.eFlags");
	_0x529b9ccd0972af4d(&(uParam0->f_1), "playerCampData.iNumberOfCamps");
	_0xe0b45e983bfc0768();
}

void func_139(var uParam0)
{
	StringCopy(&cVar0, "jailbreakData", 64);
	_0x443174c20b8b9e7f(uParam0, 2, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "iViewedJailbreaks", 64);
	_0x529b9ccd0972af4d(uParam0, &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "lastViewedJailbreakTime", 64);
	_0xb25b5a375be5be26(&(uParam0->f_1), &Var8);
	_0xe0b45e983bfc0768();
}

void func_140(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 22, "sFishingDataSaved");
	StringCopy(&cVar1, "sFishingDataSaved.eCurrentBaitEquipped", 64);
	_0x81f4e92be3958364(uParam0, 5, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0xb25b5a375be5be26((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar1, "sFishingDataSaved.bHasLegendaryFishBeenCaught", 64);
	_0x81f4e92be3958364(&(uParam0->f_5), 16, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_5)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0xbb7f4273c186bc4b(uParam0->f_5[iVar0], &Var9);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0x529b9ccd0972af4d(&(uParam0->f_21), "sFishingDataSaved.iFishingDataSavedBits");
	_0xe0b45e983bfc0768();
}

void func_141(var uParam0)
{
	StringCopy(&cVar2, "managedTowns", 64);
	_0x81f4e92be3958364(uParam0, 417, &cVar2);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var10 = { cVar2 };
		StringIntConCat(&Var10, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 26, &Var10);
		StringConCat(&Var10, ".eActiveTownStateTags", 64);
		_0x81f4e92be3958364((*uParam0)[iVar0], 26, &Var10);
		iVar1 = 0;
		while (iVar1 < uParam0->f_1)
		{
			Var18 = { Var10 };
			StringIntConCat(&Var18, iVar1, 64);
			_0x443174c20b8b9e7f((*(*uParam0)[iVar0])[iVar1], 5, &Var18);
			Var26 = { Var18 };
			StringConCat(&Var26, ".eTag", 64);
			_0xb25b5a375be5be26((*(*uParam0)[iVar0])[iVar1], &Var26);
			Var26 = { Var18 };
			StringConCat(&Var26, ".eTagPriority", 64);
			_0xb25b5a375be5be26(&((*(*uParam0)[iVar0])[iVar1]->f_1), &Var26);
			Var26 = { Var18 };
			StringConCat(&Var26, ".eTagPersistence", 64);
			_0xb25b5a375be5be26(&((*(*uParam0)[iVar0])[iVar1]->f_2), &Var26);
			Var26 = { Var18 };
			StringConCat(&Var26, ".eCategory", 64);
			_0xb25b5a375be5be26(&((*(*uParam0)[iVar0])[iVar1]->f_3), &Var26);
			Var26 = { Var18 };
			StringConCat(&Var26, ".eTODExpiry", 64);
			_0xb25b5a375be5be26(&((*(*uParam0)[iVar0])[iVar1]->f_4), &Var26);
			_0xe0b45e983bfc0768();
			iVar1++;
		}
		_0xa844feb5c22c2c74();
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_142(var uParam0)
{
	StringCopy(&cVar1, "specialPeds", 64);
	_0x81f4e92be3958364(uParam0, 241, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 8, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "ePedStage", 64);
		_0xb25b5a375be5be26((*uParam0)[iVar0], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "eSavedFlags", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todLastSeen", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todLastEncounter", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_3), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todDeathTime", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_4), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iTimesSeen", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_5), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iInteracts", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_6), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iDeaths", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_7), &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_143(var uParam0)
{
	StringCopy(&cVar1, "dataShacksSaved", 64);
	_0x443174c20b8b9e7f(uParam0, 40, &cVar1);
	StringCopy(&cVar1, "dataShacksSaved.iSavedFloat1", 64);
	_0x81f4e92be3958364(uParam0, 20, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringConCat(&Var9, "_", 64);
		StringIntConCat(&Var9, iVar0, 64);
		_0x35defecae36d4fae((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar1, "dataShacksSaved.iSavedFloat2", 64);
	_0x81f4e92be3958364(&(uParam0->f_20), 20, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_20)
	{
		Var9 = { cVar1 };
		StringConCat(&Var9, "_", 64);
		StringIntConCat(&Var9, iVar0, 64);
		_0x35defecae36d4fae(uParam0->f_20[iVar0], &Var9);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

void func_144(var uParam0)
{
	StringCopy(&cVar1, "hideouts", 64);
	_0x81f4e92be3958364(uParam0, 19, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 2, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "eFlags", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iNumActorsRemaining", 64);
		_0x529b9ccd0972af4d((*uParam0)[iVar0], &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_145(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 39, "sFilletDataSaved");
	StringCopy(&cVar1, "sFilletDataSaved.iBestLaps", 64);
	_0x81f4e92be3958364(uParam0, 13, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x529b9ccd0972af4d((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar1, "sFilletDataSaved.iFastestLap", 64);
	_0x81f4e92be3958364(&(uParam0->f_13), 13, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x529b9ccd0972af4d(uParam0->f_13[iVar0], &Var9);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar1, "sFilletDataSaved.iLongestTime", 64);
	_0x81f4e92be3958364(&(uParam0->f_26), 13, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_26)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x529b9ccd0972af4d(uParam0->f_26[iVar0], &Var9);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

void func_146(var uParam0)
{
	StringCopy(&cVar1, "eBufferedJournalEntryUnlocks", 64);
	_0x81f4e92be3958364(uParam0, 21, &cVar1);
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

void func_147(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 7, "collectiblesData");
	_0xbb7f4273c186bc4b(uParam0, "collectiblesData.bDinoBonesStage2RCM");
	_0xbb7f4273c186bc4b(&(uParam0->f_1), "collectiblesData.bLegendaryFishStage2RCM");
	_0xbb7f4273c186bc4b(&(uParam0->f_2), "collectiblesData.bRockCarvingsStage2RCM");
	_0xbb7f4273c186bc4b(&(uParam0->f_3), "collectiblesData.bTaxidermyStage1RCM");
	_0xbb7f4273c186bc4b(&(uParam0->f_4), "collectiblesData.bCarolinaParakeetExtinction");
	_0xbb7f4273c186bc4b(&(uParam0->f_5), "collectiblesData.bChalTownHoldups");
	_0xbb7f4273c186bc4b(&(uParam0->f_6), "collectiblesData.bTSAnnesburgRiddle");
	_0xe0b45e983bfc0768();
}

void func_148(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 3, "sCheatManagerSaved");
	StringCopy(&cVar1, "sCheatManagerSaved.iUnlockedCheats", 64);
	_0x81f4e92be3958364(uParam0, 3, &cVar1);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x529b9ccd0972af4d((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

void func_149(var uParam0)
{
	StringCopy(&cVar0, "reinforcedequipmentSaved", 64);
	_0x443174c20b8b9e7f(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eEquipmentRewardFlags", 64);
	_0xb25b5a375be5be26(uParam0, &Var8);
	_0xe0b45e983bfc0768();
}

void func_150(var uParam0)
{
	StringCopy(&cVar0, "collectableUiLogSaved", 64);
	_0x443174c20b8b9e7f(uParam0, 13, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiCigCardsSavedFlags", 64);
	_0xb25b5a375be5be26(uParam0, &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiDinoBonesSavedFlags", 64);
	_0xb25b5a375be5be26(&(uParam0->f_1), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiExoticsSavedFlags", 64);
	_0xb25b5a375be5be26(&(uParam0->f_2), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiLegendaryFishSavedFlags", 64);
	_0xb25b5a375be5be26(&(uParam0->f_3), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiParakeetsSavedFlags", 64);
	_0xb25b5a375be5be26(&(uParam0->f_4), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiRockCarvingsSavedFlags", 64);
	_0xb25b5a375be5be26(&(uParam0->f_5), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiTaxidermySavedFlags", 64);
	_0xb25b5a375be5be26(&(uParam0->f_6), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiTHJackHallSavedFlags", 64);
	_0xb25b5a375be5be26(&(uParam0->f_7), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiTHHighStakesSavedFlags", 64);
	_0xb25b5a375be5be26(&(uParam0->f_8), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiTHPoisonTrailSavedFlags", 64);
	_0xb25b5a375be5be26(&(uParam0->f_9), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiTHTresorMortsSavedFlags", 64);
	_0xb25b5a375be5be26(&(uParam0->f_10), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiTHElementalTrailSavedFlags", 64);
	_0xb25b5a375be5be26(&(uParam0->f_11), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiTHLandmarksOfRichesSavedFlags", 64);
	_0xb25b5a375be5be26(&(uParam0->f_12), &Var8);
	_0xe0b45e983bfc0768();
}

void func_151(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 47, "shared");
	func_279(uParam0);
	func_280(&(uParam0->f_2));
	func_281(&(uParam0->f_3));
	func_282(&(uParam0->f_4));
	func_283(&(uParam0->f_5));
	func_284(&(uParam0->f_25));
	func_285(&(uParam0->f_26));
	func_286(&(uParam0->f_27));
	func_287(&(uParam0->f_42));
	func_288(&(uParam0->f_43));
	func_289(&(uParam0->f_44));
	func_290(&(uParam0->f_45));
	_0xe0b45e983bfc0768();
}

void func_152(var uParam0, char* sParam1)
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

void func_153(var uParam0)
{
	StringCopy(&cVar1, "deeds", 64);
	_0x81f4e92be3958364(uParam0, 5398, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 7, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "iDeedPacked", 64);
		_0x529b9ccd0972af4d((*uParam0)[iVar0], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "eStatus", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iCompletionData", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iGenericInt1", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_3), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iGenericInt2", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_4), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iUniqueHashID", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_5), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "lastCompletedTime", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_6), &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_154(var uParam0)
{
	_0x8e8ffb9e4ad051d2(uParam0, 3206, "beatTrackingData", 17);
	_0xb25b5a375be5be26(uParam0, "beatTrackingData.todGangBeatAvailable");
	_0x529b9ccd0972af4d(&(uParam0->f_2), "beatTrackingData.iSpawnedCount");
	_0x529b9ccd0972af4d(&(uParam0->f_3), "beatTrackingData.iSeenCount");
	_0x529b9ccd0972af4d(&(uParam0->f_1), "beatTrackingData.iLaunchedCount");
	_0x529b9ccd0972af4d(&(uParam0->f_4), "beatTrackingData.iCompletedCount");
	_0x529b9ccd0972af4d(&(uParam0->f_11), "beatTrackingData.iHerbalistCampState");
	_0xb25b5a375be5be26(&(uParam0->f_5), "beatTrackingData.eLastCompleted");
	_0xb25b5a375be5be26(&(uParam0->f_6), "beatTrackingData.eLastSeen");
	_0xbb7f4273c186bc4b(&(uParam0->f_9), "beatTrackingData.bCompletedBeatSinceLastMission");
	_0xbb7f4273c186bc4b(&(uParam0->f_10), "beatTrackingData.bSeenBeatSinceLastMission");
	_0xbb7f4273c186bc4b(&(uParam0->f_7), "beatTrackingData.bAmbushSeenSinceLastBeat");
	_0xbb7f4273c186bc4b(&(uParam0->f_8), "beatTrackingData.bCampfireSeenSinceLastBeat");
	StringCopy(&cVar0, "beatTrackingData.iCompletedLocation", 64);
	_0x81f4e92be3958364(&(uParam0->f_12), 30, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_12)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		_0x529b9ccd0972af4d(uParam0->f_12[iVar24], &Var8);
		iVar24++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar0, "beatTrackingData.beatTrack", 64);
	_0x81f4e92be3958364(&(uParam0->f_42), 961, &cVar0);
	iVar24 = 0;
	while (iVar24 < 120)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		_0x443174c20b8b9e7f(uParam0->f_42[iVar24], 8, &Var8);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iTimesCompleted", 64);
		_0x529b9ccd0972af4d(uParam0->f_42[iVar24], &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iTimesSeen", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_42[iVar24]->f_1), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iTimesLaunched", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_42[iVar24]->f_2), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iTimesSpawned", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_42[iVar24]->f_3), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iBeatAvailableAt", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_42[iVar24]->f_4), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".eBeatRarity", 64);
		_0xb25b5a375be5be26(&(uParam0->f_42[iVar24]->f_5), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".bBeatExhausted", 64);
		_0xbb7f4273c186bc4b(&(uParam0->f_42[iVar24]->f_6), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".bUnlocked", 64);
		_0xbb7f4273c186bc4b(&(uParam0->f_42[iVar24]->f_7), &Var16);
		_0xe0b45e983bfc0768();
		iVar24++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar0, "beatTrackingData.beatGeneric", 64);
	_0x81f4e92be3958364(&(uParam0->f_1003), 1081, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_1003)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		_0x443174c20b8b9e7f(uParam0->f_1003[iVar24], 6, &Var8);
		Var16 = { Var8 };
		StringConCat(&Var16, ".ID", 64);
		_0x529b9ccd0972af4d(uParam0->f_1003[iVar24], &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iGeneric1", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_1003[iVar24]->f_1), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iGeneric2", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_1003[iVar24]->f_2), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".eBeatTown", 64);
		_0xb25b5a375be5be26(&(uParam0->f_1003[iVar24]->f_4), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".eBeatTimeOfDay", 64);
		_0xb25b5a375be5be26(&(uParam0->f_1003[iVar24]->f_5), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".mnPedModel", 64);
		_0xb25b5a375be5be26(&(uParam0->f_1003[iVar24]->f_3), &Var16);
		_0xe0b45e983bfc0768();
		iVar24++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar0, "beatTrackingData.beatUsedLocations", 64);
	_0x81f4e92be3958364(&(uParam0->f_2084), 121, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_2084)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		_0x443174c20b8b9e7f(uParam0->f_2084[iVar24], 5, &Var8);
		Var16 = { Var8 };
		StringConCat(&Var16, ".vUsedAtLocation", 64);
		func_152(uParam0->f_2084[iVar24], &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".eBeat", 64);
		_0xb25b5a375be5be26(&(uParam0->f_2084[iVar24]->f_3), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iBeatRestrictionTimeLeft", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_2084[iVar24]->f_4), &Var16);
		_0xe0b45e983bfc0768();
		iVar24++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar0, "beatTrackingData.beatRegionSaved", 64);
	_0x81f4e92be3958364(&(uParam0->f_2205), 1001, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_2205)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		_0x443174c20b8b9e7f(uParam0->f_2205[iVar24], 2, &Var8);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iRegionSeen", 64);
		_0x529b9ccd0972af4d(uParam0->f_2205[iVar24], &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iRegionComplete", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_2205[iVar24]->f_1), &Var16);
		_0xe0b45e983bfc0768();
		iVar24++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

void func_155(var uParam0)
{
	_0x8e8ffb9e4ad051d2(uParam0, 2408, "shopsData", 17);
	StringCopy(&cVar4, "shopsData.iTimesRobbed", 64);
	_0x81f4e92be3958364(&(uParam0->f_1168), 154, &cVar4);
	iVar0 = 0;
	while (iVar0 < uParam0->f_1168)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		_0x529b9ccd0972af4d(uParam0->f_1168[iVar0], &Var12);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar4, "shopsData.todLastRobbed", 64);
	_0x81f4e92be3958364(&(uParam0->f_1322), 154, &cVar4);
	iVar0 = 0;
	while (iVar0 < uParam0->f_1322)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		_0xb25b5a375be5be26(uParam0->f_1322[iVar0], &Var12);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar4, "shopsData.todLastRegisterRobbed", 64);
	_0x81f4e92be3958364(&(uParam0->f_1476), 154, &cVar4);
	iVar0 = 0;
	while (iVar0 < uParam0->f_1476)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		_0xb25b5a375be5be26(uParam0->f_1476[iVar0], &Var12);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar4, "shopsData.todLastVisited", 64);
	_0x81f4e92be3958364(&(uParam0->f_1630), 154, &cVar4);
	iVar0 = 0;
	while (iVar0 < uParam0->f_1630)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		_0xb25b5a375be5be26(uParam0->f_1630[iVar0], &Var12);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar4, "shopsData.todLastEscalation", 64);
	_0x81f4e92be3958364(&(uParam0->f_1784), 154, &cVar4);
	iVar0 = 0;
	while (iVar0 < uParam0->f_1784)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		_0xb25b5a375be5be26(uParam0->f_1784[iVar0], &Var12);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar4, "shopsData.todTimeToResetInjuredOutfit", 64);
	_0x81f4e92be3958364(&(uParam0->f_1938), 154, &cVar4);
	iVar0 = 0;
	while (iVar0 < uParam0->f_1938)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		_0xb25b5a375be5be26(uParam0->f_1938[iVar0], &Var12);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar4, "shopsData.eRobberyFlags", 64);
	_0x81f4e92be3958364(&(uParam0->f_2092), 154, &cVar4);
	iVar0 = 0;
	while (iVar0 < uParam0->f_2092)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		_0xb25b5a375be5be26(uParam0->f_2092[iVar0], &Var12);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar4, "shopsData.eShopFlags", 64);
	_0x81f4e92be3958364(&(uParam0->f_2246), 154, &cVar4);
	iVar0 = 0;
	while (iVar0 < uParam0->f_2246)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		_0xb25b5a375be5be26(uParam0->f_2246[iVar0], &Var12);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0x443174c20b8b9e7f(uParam0, 1168, "shopsData.sPurchaseData");
	StringCopy(&cVar4, "sShopPurchases", 64);
	_0x81f4e92be3958364(uParam0, 1126, &cVar4);
	iVar2 = 25;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 45, &Var12);
		Var36 = { Var12 };
		StringConCat(&Var36, ".eLastItemBoughtFromShop", 64);
		_0xb25b5a375be5be26((*uParam0)[iVar0], &Var36);
		Var36 = { Var12 };
		StringConCat(&Var36, ".eLastItemSoldToShop", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_1), &Var36);
		Var36 = { Var12 };
		StringConCat(&Var36, ".iTotalMoneySpent", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_43), &Var36);
		Var36 = { Var12 };
		StringConCat(&Var36, ".iMoneySpentInSession", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_44), &Var36);
		Var20 = { Var12 };
		StringConCat(&Var20, ".sPurchaseList", 64);
		_0x81f4e92be3958364(&((*uParam0)[iVar0]->f_2), 41, &Var20);
		iVar3 = 10;
		iVar1 = 0;
		while (iVar1 < iVar3)
		{
			Var28 = { Var20 };
			StringIntConCat(&Var28, iVar1, 64);
			_0x443174c20b8b9e7f((*uParam0)[iVar0]->f_2[iVar1], 4, &Var28);
			Var36 = { Var28 };
			StringConCat(&Var36, ".eItem", 64);
			_0xb25b5a375be5be26((*uParam0)[iVar0]->f_2[iVar1], &Var36);
			Var36 = { Var28 };
			StringConCat(&Var36, ".iPurchaseTimer", 64);
			_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_2[iVar1]->f_1), &Var36);
			Var36 = { Var28 };
			StringConCat(&Var36, ".iPurchaseCount", 64);
			_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_2[iVar1]->f_2), &Var36);
			Var36 = { Var28 };
			StringConCat(&Var36, ".eShopPurchasedFrom", 64);
			_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_2[iVar1]->f_3), &Var36);
			_0xe0b45e983bfc0768();
			iVar1++;
		}
		_0xa844feb5c22c2c74();
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar4, "sPurchaseData.sPlayerPurchases", 64);
	_0x81f4e92be3958364(&(uParam0->f_1126), 41, &cVar4);
	iVar2 = uParam0->f_1126;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		_0x443174c20b8b9e7f(uParam0->f_1126[iVar0], 4, &Var12);
		Var36 = { Var12 };
		StringConCat(&Var36, ".eItem", 64);
		_0xb25b5a375be5be26(uParam0->f_1126[iVar0], &Var36);
		Var36 = { Var12 };
		StringConCat(&Var36, ".iPurchaseTimer", 64);
		_0xb25b5a375be5be26(&(uParam0->f_1126[iVar0]->f_1), &Var36);
		Var36 = { Var12 };
		StringConCat(&Var36, ".iPurchaseCount", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_1126[iVar0]->f_2), &Var36);
		Var36 = { Var12 };
		StringConCat(&Var36, ".eShopPurchasedFrom", 64);
		_0xb25b5a375be5be26(&(uParam0->f_1126[iVar0]->f_3), &Var36);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xb25b5a375be5be26(&(uParam0->f_1167), "sPurchaseData.eLastPurchaseReg");
	_0xe0b45e983bfc0768();
	_0xbb7f4273c186bc4b(&(uParam0->f_2400), "shopsData.bPlayerHasBrowsedAnyShop");
	_0xbb7f4273c186bc4b(&(uParam0->f_2401), "shopsData.bHideCatInfoBox");
	_0xbb7f4273c186bc4b(&(uParam0->f_2402), "shopsData.bPurchaseMade");
	_0xbb7f4273c186bc4b(&(uParam0->f_2403), "shopsData.bRCKittyEmeraldViewed");
	_0x529b9ccd0972af4d(&(uParam0->f_2404), "shopsData.iLastHorseSoldTimeStamp");
	_0x529b9ccd0972af4d(&(uParam0->f_2405), "shopsData.iSecondLastHorseSoldTimeStamp");
	_0x529b9ccd0972af4d(&(uParam0->f_2406), "shopsData.iThirdLastHorseSoldTimeStamp");
	_0x529b9ccd0972af4d(&(uParam0->f_2407), "shopsData.iLostLegendaryItemsBitset");
	_0xe0b45e983bfc0768();
}

void func_156(var uParam0)
{
	StringCopy(&cVar1, "regions", 64);
	_0x81f4e92be3958364(uParam0, 1651, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 11, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "eRegionFlags", 64);
		_0xb25b5a375be5be26((*uParam0)[iVar0], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "currentLockdownStartTime", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "currentWantedZoneStartTime", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iLockdownDuration", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_3), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "regionLawMemoryData", 64);
		_0x443174c20b8b9e7f(&((*uParam0)[iVar0]->f_4), 6, &Var17);
		Var25 = { Var17 };
		StringConCat(&Var25, "eLastOuftitSeenByLaw", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_4), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "eSideburnsStyle", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_4.f_1), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "eChinStyle", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_4.f_2), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "eMustacheStyle", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_4.f_3), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "eTimeOutfitLastSeen", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_4.f_4), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "eAppearanceLawMemoryFlags", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_4.f_5), &Var25);
		_0xe0b45e983bfc0768();
		Var17 = { Var9 };
		StringConCat(&Var17, "iInocentsKilledInRegion", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_10), &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_157(var uParam0)
{
	StringCopy(&cVar1, "regionTownFlags", 64);
	_0x443174c20b8b9e7f(uParam0, 117, &cVar1);
	StringCopy(&cVar1, "regionTownFlags.eRegionConversationSaved", 64);
	_0x81f4e92be3958364(uParam0, 111, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0xb25b5a375be5be26((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar1, "regionTownFlags.eRegionConversationCampSave", 64);
	_0x81f4e92be3958364(&(uParam0->f_111), 6, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_111)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0xb25b5a375be5be26(uParam0->f_111[iVar0], &Var9);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

void func_158(var uParam0)
{
	StringCopy(&cVar1, "regionalCharacter", 64);
	_0x81f4e92be3958364(uParam0, 1909, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 2, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "rcFlags", 64);
		_0xb25b5a375be5be26((*uParam0)[iVar0], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todRCDeathTime", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_1), &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_159(var uParam0)
{
	StringCopy(&cVar0, "SPMetaped", 64);
	_0x443174c20b8b9e7f(uParam0, 777, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "PortableWardrobe", 64);
	_0x443174c20b8b9e7f(uParam0, 26, &Var8);
	func_291(uParam0, Var8);
	_0xe0b45e983bfc0768();
	Var8 = { cVar0 };
	StringConCat(&Var8, "OutfitList", 64);
	_0x81f4e92be3958364(&(uParam0->f_26), 601, &Var8);
	iVar16 = 0;
	while (iVar16 <= 4)
	{
		func_292(uParam0->f_26[iVar16], Var8, iVar16);
		iVar16++;
	}
	_0xa844feb5c22c2c74();
	_0x529b9ccd0972af4d(&(uParam0->f_627), "iOutfitHash");
	StringCopy(&Var8, "SingleSavedAppearance", 64);
	func_292(&(uParam0->f_627.f_1), Var8, 0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "PortableSnapshot", 64);
	_0x443174c20b8b9e7f(&(uParam0->f_627.f_121), 26, &Var8);
	func_291(&(uParam0->f_627.f_121), Var8);
	_0xe0b45e983bfc0768();
	_0xb25b5a375be5be26(&(uParam0->f_774), "SPMetaped_eSystemFlags");
	StringCopy(&Var8, "SPMetaped_PlayerType", 64);
	_0xb25b5a375be5be26(&(uParam0->f_775), "SPMetaped_PlayerType");
	_0x529b9ccd0972af4d(&(uParam0->f_776), "SPMetaped_iCurOutfit");
	_0xe0b45e983bfc0768();
}

void func_160(var uParam0)
{
	StringCopy(&cVar2, "herbData", 64);
	_0x81f4e92be3958364(uParam0, 4501, &cVar2);
	iVar0 = 0;
	while (iVar0 < 500)
	{
		Var10 = { cVar2 };
		StringIntConCat(&Var10, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 9, &Var10);
		_0xb25b5a375be5be26((*uParam0)[iVar0], "eHerbType");
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_1), "iHerbPackedLocation");
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_2), "todTimePicked");
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_3), "eHerbFlags");
		StringCopy(&cVar18, "iHerbPatchPlants", 64);
		_0x81f4e92be3958364(&((*uParam0)[iVar0]->f_4), 5, &cVar18);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Var26 = { cVar18 };
			StringIntConCat(&Var26, iVar1, 64);
			_0x529b9ccd0972af4d((*uParam0)[iVar0]->f_4[iVar1], &Var26);
			iVar1++;
		}
		_0xa844feb5c22c2c74();
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_161(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 2697, "campVignettes");
	_0x529b9ccd0972af4d(uParam0, "campVignettes.iTotalVigsSeen");
	_0x529b9ccd0972af4d(&(uParam0->f_1), "campVignettes.iTotalCampfireSeen");
	_0x529b9ccd0972af4d(&(uParam0->f_2), "campVignettes.iTotalWalkAndTalkSeen");
	_0x529b9ccd0972af4d(&(uParam0->f_3), "campVignettes.iTotalMusicSeen");
	StringCopy(&cVar0, "campVignettes.vigData", 64);
	_0x81f4e92be3958364(&(uParam0->f_4), 2693, &cVar0);
	iVar24 = 0;
	while (iVar24 < 673)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		_0x443174c20b8b9e7f(uParam0->f_4[iVar24], 4, &Var8);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iTimesSeen", 64);
		_0x529b9ccd0972af4d(uParam0->f_4[iVar24], &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iTimesLaunched", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_4[iVar24]->f_1), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iTimesSpawned", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_4[iVar24]->f_2), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".bSeen", 64);
		_0xbb7f4273c186bc4b(&(uParam0->f_4[iVar24]->f_3), &Var16);
		_0xe0b45e983bfc0768();
		iVar24++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

void func_162(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 1537, "ambVigData");
	_0x529b9ccd0972af4d(uParam0, "ambVigData.iLaunches");
	_0x529b9ccd0972af4d(&(uParam0->f_1), "ambVigData.iSpawned");
	_0x529b9ccd0972af4d(&(uParam0->f_2), "ambVigData.iSeen");
	_0x529b9ccd0972af4d(&(uParam0->f_3), "ambVigData.iTriggered");
	_0xb25b5a375be5be26(&(uParam0->f_4), "ambVigData.todLaunchTimeHuman");
	_0xb25b5a375be5be26(&(uParam0->f_5), "ambVigData.todLaunchTimeAnimal");
	StringCopy(&cVar0, "ambVigData.sRegisteredVigs", 64);
	_0x81f4e92be3958364(&(uParam0->f_6), 1489, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_6)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		_0x443174c20b8b9e7f(uParam0->f_6[iVar24], 6, &Var8);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".iSeen", 64);
		_0x529b9ccd0972af4d(uParam0->f_6[iVar24], &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".iLaunched", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_6[iVar24]->f_1), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".iSpawned", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_6[iVar24]->f_2), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".iTriggered", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_6[iVar24]->f_3), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".bUnlocked", 64);
		_0xbb7f4273c186bc4b(&(uParam0->f_6[iVar24]->f_4), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".todLaunchTime", 64);
		_0xb25b5a375be5be26(&(uParam0->f_6[iVar24]->f_5), &cVar16);
		_0xe0b45e983bfc0768();
		iVar24++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar0, "ambVigData.sUsedLocs", 64);
	_0x81f4e92be3958364(&(uParam0->f_1495), 41, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_1495)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		_0x443174c20b8b9e7f(uParam0->f_1495[iVar24], 4, &Var8);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "vLoc", 64);
		func_152(&(uParam0->f_1495[iVar24]->f_1), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eVig", 64);
		_0xb25b5a375be5be26(uParam0->f_1495[iVar24], &cVar16);
		_0xe0b45e983bfc0768();
		iVar24++;
	}
	_0xa844feb5c22c2c74();
	_0x529b9ccd0972af4d(&(uParam0->f_1536), "ambVigData.iNumberOfParakeet");
	_0xe0b45e983bfc0768();
}

void func_163(var uParam0, char* sParam1)
{
	_0x8e8ffb9e4ad051d2(uParam0, 1399, "persona", 11);
	_0xb25b5a375be5be26(uParam0, "psna_ePreferredDistrict");
	_0xb25b5a375be5be26(&(uParam0->f_1), "psna_eLastValidRegion");
	func_152(&(uParam0->f_2), "psna_vLastValidPosition");
	func_293(&(uParam0->f_5));
	func_294(&(uParam0->f_15));
	func_295(&(uParam0->f_62));
	func_296(&(uParam0->f_350));
	func_297(&(uParam0->f_1362));
	func_298(&(uParam0->f_1365));
	_0xe0b45e983bfc0768();
}

void func_164()
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (func_40(iVar0))
		{
			request_script(func_166(iVar0));
		}
		iVar0++;
	}
}

bool func_165(int iParam0, bool bParam1)
{
	bVar0 = (iParam0 >= 0 && iParam0 <= 10);
	if (bParam1 && !bVar0)
	{
	}
	return bVar0;
}

char* func_166(int iParam0)
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
	}
	return uVar0;
}

void func_167(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

char* func_168()
{
	return "allyEnum";
}

char* func_169()
{
	return "horseEntityIndex";
}

char* func_170()
{
	return "blipIndex";
}

char* func_171()
{
	return "genericMissionInt";
}

char* func_172()
{
	return "genericMissionFloat";
}

Vector3 func_173()
{
	StringCopy(&cVar0, "eDuelResult", 24);
	return cVar0;
}

char* func_174()
{
	return "cutDeleteMe";
}

char* func_175()
{
	return "brain_id";
}

char* func_176()
{
	return "brain_player";
}

char* func_177()
{
	return "brain_type";
}

char* func_178()
{
	return "brain_isHidden";
}

char* func_179()
{
	return "brain_isDisabled";
}

char* func_180()
{
	return "brain_timeStamp";
}

char* func_181()
{
	return "brain_value";
}

char* func_182()
{
	return "brain_lootable_type";
}

char* func_183()
{
	return "brain_lootable_value";
}

char* func_184()
{
	return "brain_lootable_deed";
}

char* func_185()
{
	return "brain_lootable_id";
}

char* func_186()
{
	return "MP_HUD_Local_Status_Icon";
}

char* func_187()
{
	return "MP_HUD_Local_Secondary_Icon";
}

char* func_188()
{
	return "MP_HUD_Local_Blip_Sprite";
}

char* func_189()
{
	return "MP_HUD_Hide_My_Blip_FOR_TEAMS";
}

char* func_190()
{
	return "MP_HUD_Force_My_Blip_Persistent_For_Teams";
}

char* func_191()
{
	return "MP_HUD_Force_Can_Hear_Teams";
}

char* func_192()
{
	return "fetch_entity";
}

char* func_193()
{
	return "fetch_turned_in";
}

char* func_194()
{
	return "fetch_static_prop_placed_on_ground";
}

char* func_195()
{
	return "fetch_combat_config";
}

char* func_196()
{
	return "chu_vip_ped";
}

char* func_197()
{
	return "NetStableMount";
}

char* func_198()
{
	return "NetStableGUID1";
}

char* func_199()
{
	return "NetStableGUID2";
}

char* func_200()
{
	return "NetStableGUID3";
}

char* func_201()
{
	return "NetStableGUID4";
}

char* func_202()
{
	return "NSS_PLAYER_FLAG";
}

char* func_203()
{
	return "NSS_PLAYER_BOUNTY_CUSTODIAN";
}

void func_204()
{
}

void func_205()
{
}

void func_206()
{
}

bool func_207(var uParam0)
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
	func_299(uParam0);
	uParam0->f_79 = func_300(uParam0, 1);
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
		if (func_301(uParam0, 0))
		{
			if (func_302(uParam0, 2, &Var6))
			{
				if (!is_string_null_or_empty(&Var6))
				{
					MemCopy(&Var128, {Var6}, 4);
					if (func_303(uParam0, 4, &bVar14))
					{
						if (bVar14)
						{
							func_304(&Var128, 1);
						}
					}
					if (func_303(uParam0, 5, &bVar14))
					{
						if (bVar14)
						{
							func_304(&Var128, 2);
						}
					}
					func_305(uParam0, 3, &(Var128.f_5));
					if (func_302(uParam0, 6, &uVar16))
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

void func_208(var uParam0, int iParam1)
{
	uParam0->f_80 = iParam1;
}

void func_209(var uParam0, int iParam1)
{
	uParam0->f_76 = iParam1;
}

int func_210()
{
	if (is_bit_set(Global_1956580->f_1, 4))
	{
		return 0;
	}
	if (is_bit_set(Global_1956580->f_1, 5))
	{
		return 1;
	}
	if (func_48() == 0)
	{
		if (_get_global_block_can_be_accessed(4))
		{
			if (func_306(255))
			{
				return 1;
			}
			if (!_0xdd73c9838ce7181d())
			{
				return 1;
			}
		}
	}
	if (func_307(0))
	{
		return 1;
	}
	if (Global_16)
	{
		return 1;
	}
	if (func_308())
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
	if (func_48() == -1)
	{
		if (func_309((*Global_1835011)[39]->f_1))
		{
			if (_0x66f35dd9d2b58579())
			{
				if (!_0x1204eb53a5fbc63d())
				{
					return 1;
				}
			}
		}
	}
	if (_0x99f92061efe908ba() || func_310(&Global_1935630, 16384))
	{
		return 1;
	}
	if (func_310(&Global_1935630, 4096))
	{
		return 1;
	}
	if (func_310(&Global_1935630, 2048))
	{
		return 1;
	}
	if ((is_screen_faded_out() || is_screen_fading_in()) || is_screen_fading_out())
	{
		return 1;
	}
	return 0;
}

int func_211()
{
	if (is_bit_set(Global_1956580->f_1, 4))
	{
		return 0;
	}
	if (is_bit_set(Global_1956580->f_1, 6))
	{
		return 1;
	}
	if (func_48() == -2)
	{
		return 1;
	}
	if (func_310(&Global_1935630, 4096))
	{
		return 1;
	}
	if (func_310(&Global_1935630, 2048))
	{
		return 1;
	}
	if (!is_screen_faded_in())
	{
		return 1;
	}
	if (_0x99f92061efe908ba() || func_310(&Global_1935630, 16384))
	{
		return 1;
	}
	if (Global_16 || animpostfx_is_running("Title_GameIntro"))
	{
		return 1;
	}
	if (func_311())
	{
		if (is_radar_hidden())
		{
			return 1;
		}
	}
	if (!is_gameplay_cam_rendering())
	{
		if ((!_0x1204eb53a5fbc63d() && !is_cinematic_cam_rendering()) && !func_311())
		{
			return 1;
		}
	}
	if (_0x66f35dd9d2b58579())
	{
		return 1;
	}
	if (func_48() == 0)
	{
		if (_get_global_block_can_be_accessed(4))
		{
			if (func_312(255) > 2 && !func_313(Global_1225639->f_10, 8192))
			{
				return 1;
			}
			else if (func_314(32))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_212(var uParam0, bool bParam1)
{
	if (bParam1 || !func_213(uParam0))
	{
		func_315(uParam0);
	}
}

bool func_213(var uParam0)
{
	return func_316(*uParam0, 1);
}

float func_214(var uParam0)
{
	if (!func_213(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_317(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_318() - uParam0->f_1);
}

void func_215(int iParam0)
{
	if (iParam0 != Global_1956580->f_3)
	{
		_0x74bcceb233ad95b2(612972714, iParam0);
		Global_1956580->f_3 = iParam0;
	}
}

void func_216(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -725272239:
			func_319(iParam1);
			break;
		case 1121131740:
			func_320(iParam1);
			break;
		case 543140406:
			func_321(iParam1);
			break;
		case -2095977185:
			func_322(iParam1);
			break;
		case 809652668:
			func_323(iParam1);
			break;
		case 1860341470:
			func_324();
			break;
		case 516249386:
			func_325(iParam1);
			break;
		case 904577075:
			func_326(iParam1);
			break;
	}
}

void func_217()
{
	if (Global_1572887->f_164.f_62 != 0 && func_327())
	{
		func_328(1);
		return;
	}
	if (Global_1572887->f_164.f_83 > 2 && func_327())
	{
		func_328(1);
		return;
	}
	if (Global_1572887->f_164.f_63 != -1 && func_327())
	{
		func_328(1);
		return;
	}
	if (Global_1572887->f_164.f_84 != 0 && func_327())
	{
		func_328(1);
		return;
	}
	Global_1572887->f_164.f_84 = 0;
}

void func_218()
{
	Global_1572887->f_164.f_86 = get_game_timer();
	Var0.f_2 = 4;
	Var0 = "";
	Var0.f_1 = "";
	Var0.f_2 = 0;
	if (func_329(128) || func_329(256))
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
	else
	{
		Var0.f_3 = get_hash_key("IB_EXIT");
		Var0.f_3.f_1 = 0;
		Var0.f_3.f_2 = 0;
		Var0.f_3.f_3 = 0;
	}
	vVar19.x = 0;
	vVar19.f_1 = "SG_HDNG";
	vVar19.f_2 = func_330();
	Global_1572887->f_164.f_82 = _0x9f2cc2439a04e7ba(&Var0, &vVar19, 1);
	func_328(2);
	func_331(0);
}

void func_219()
{
	if (func_48() == 0)
	{
		if (is_thread_active(Global_1572887->f_14, false))
		{
			if (func_332() > 5)
			{
				if (is_screen_faded_in() || is_screen_fading_in())
				{
					do_screen_fade_out(0);
				}
				func_328(3);
				return;
			}
		}
	}
	if (_0xf8806ec3ff840fdc())
	{
		if (is_screen_faded_out() || is_screen_fading_out())
		{
			do_screen_fade_in(0);
		}
	}
	while (_event_manager_is_event_pending(-1933804684))
	{
		if (_event_manager_peek_event(-1933804684, &vVar5))
		{
			switch (vVar5.x)
			{
				case -1203660660:
					if (vVar5.y == Global_1572887->f_164.f_82)
					{
						if (vVar5.z == 2074623703)
						{
							_event_manager_pop_event(-1933804684);
							bVar0 = true;
						}
						if (vVar5.z == 444632721)
						{
							_event_manager_pop_event(-1933804684);
							bVar2 = true;
						}
						if (vVar5.z == 1400745903)
						{
							_event_manager_pop_event(-1933804684);
							bVar1 = true;
						}
					}
					break;
				case -445432096:
					if (vVar5.y == Global_1572887->f_164.f_82)
					{
						Global_1572887->f_164.f_82 = 0;
						bVar3 = true;
						_event_manager_pop_event(-1933804684);
					}
					break;
			}
		}
		_event_manager_pop_event(-1933804684);
	}
	iVar9 = (get_game_timer() - Global_1572887->f_164.f_86);
	bVar4 = (iVar9 > Global_1899378->f_2.f_14 && Global_1572887->f_164.f_86 != -1);
	if ((((bVar4 || bVar0) || bVar1) || bVar2) || bVar3)
	{
		func_328(3);
		if (func_329(128) || func_329(256))
		{
			if (bVar0)
			{
				do_screen_fade_out(0);
				func_333(8);
			}
			else if ((bVar1 || bVar3) || bVar4)
			{
				func_333(16);
			}
		}
	}
}

void func_220()
{
	if (_get_global_block_can_be_accessed(4))
	{
		if (func_334(255) && !(is_screen_faded_out() || is_screen_fading_out()))
		{
			do_screen_fade_out(0);
		}
	}
	if (Global_1572887->f_164.f_82 != 0)
	{
		_0x00a15b94cba4f76f(Global_1572887->f_164.f_82);
	}
	Global_1572887->f_164.f_82 = 0;
	Global_1572887->f_164.f_62 = 0;
	Global_1572887->f_164.f_84 = 0;
	Global_1572887->f_164.f_83 = 0;
	Global_1572887->f_164.f_63 = -1;
	Global_1572887->f_164.f_86 = -1;
	func_328(0);
}

var func_221(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_222(int iParam0)
{
	Global_1572887->f_164.f_79 = iParam0;
}

void func_223()
{
	*Var0[0] = { Global_1572887->f_164.f_11 };
	*Var0[1] = { Global_1572887->f_164.f_11.f_7 };
	Global_1572887->f_164.f_80 = _0xd66c9e72b3cc4982(&Var0, 2);
}

int func_224()
{
	iVar17 = _0x58cc181719256197(Global_1572887->f_164.f_80, &Var0, 2);
	if (iVar17 == -1)
	{
		return 2;
	}
	else if (iVar17 == 1)
	{
		return 0;
	}
	sVar18 = func_335(Var0[0], 109029619);
	sVar19 = func_335(Var0[1], 109029619);
	sVar20 = _create_var_string(42, "NT_INV_EXTENDED", sVar19, sVar18);
	func_221("NET_SESSION_INV_HEADER", sVar20, -437533031, 1183081869, -2, 0, 0, 1, 0, 1, 1);
	return 1;
}

void func_225()
{
	_0xa4484173759749b1();
	func_331(0);
	func_69(0);
	func_71();
}

void func_226()
{
	func_247();
	func_249(2);
	if (func_336(Global_1572887->f_164.f_27, 131072))
	{
		func_333(8);
		return;
	}
	if (func_337())
	{
		func_338(128);
		return;
	}
	func_333(8);
}

void func_227()
{
	if (func_339())
	{
		func_249(17);
	}
	if (func_340(16))
	{
		func_249(17);
		return;
	}
	if (!func_340(8))
	{
		return;
	}
	func_341(8);
	func_342();
	if (func_48() == -1)
	{
		func_249(4);
		return;
	}
	switch (Global_1572887->f_164.f_1)
	{
		case 2:
			_0x3b82acc3f4b6240c();
			break;
		case 3:
			_0x3b82acc3f4b6240c();
			break;
		case 0:
			Var0 = { func_343() };
			_0xb2cea5105aac8dde(_0x27b1ae4d8c652f08(Var0.f_15));
			break;
		case 1:
			if (_0xe483bb6be686f632(&(Global_1572887->f_164.f_27)) == -1)
			{
				func_249(17);
				return;
			}
			break;
	}
	func_249(3);
}

void func_228()
{
	if (!func_344())
	{
		func_249(17);
		return;
	}
	func_345();
	func_249(6);
}

void func_229()
{
	if (!func_346())
	{
		return;
	}
	if (func_347() == 2 || func_347() == 3)
	{
		_0x3b82acc3f4b6240c();
	}
	else if (func_347() == 0 || func_347() == 1)
	{
		Var0 = { func_343() };
		_0xb2cea5105aac8dde(_0x27b1ae4d8c652f08(Var0.f_15));
	}
	func_249(3);
}

void func_230()
{
	if (!func_344())
	{
		func_333(4);
		func_249(17);
		return;
	}
	switch (func_347())
	{
		case 0:
		case 2:
		case 4:
			break;
		case 1:
		case 3:
			break;
	}
	func_70();
	_0xc505036a35afd01b(true);
	func_247();
	func_249(5);
}

void func_231()
{
	iVar0 = func_348();
	if (iVar0 == 1)
	{
		func_349(1);
		func_350();
		clear_player_wanted_level(player_id());
		func_247();
		func_351(0, 0, 0, 1);
		_0x236905c700fdb54d();
		func_352(1, 1);
		func_249(8);
	}
	else if (iVar0 == 2)
	{
		_0xc505036a35afd01b(false);
		if (is_screen_faded_out() || is_screen_fading_out())
		{
			do_screen_fade_in(0);
		}
		func_333(4);
		func_249(17);
	}
}

void func_232()
{
	_0x236905c700fdb54d();
	if (network_is_in_mp_cutscene())
	{
		network_set_in_mp_cutscene(false, true, 32, true);
	}
	func_247();
	func_249(9);
}

void func_233()
{
	func_247();
	func_331(1);
	func_249(10);
}

void func_234()
{
	disable_all_control_actions(0);
	_0x236905c700fdb54d();
	if (!func_340(1) || network_is_in_tutorial_session())
	{
		func_247();
		func_353();
		func_249(11);
	}
	else if (func_339())
	{
		func_338(16);
		func_249(17);
	}
}

void func_235()
{
	disable_all_control_actions(0);
	_0x236905c700fdb54d();
	if (func_339())
	{
		func_338(16);
		_0xc505036a35afd01b(false);
		if (is_screen_faded_out() || is_screen_fading_out())
		{
			do_screen_fade_in(0);
		}
		func_333(4);
		func_249(17);
	}
	iVar0 = get_script_task_status(Global_1225639->f_8, 501393341, true);
	if (iVar0 == 0 || iVar0 == 1)
	{
		return;
	}
	if (is_ped_on_mount(Global_1225639->f_8))
	{
		func_350();
		return;
	}
	func_354();
	func_331(1);
	func_249(12);
}

void func_236()
{
	disable_all_control_actions(0);
	_0x236905c700fdb54d();
	func_353();
	if (func_339())
	{
		func_338(16);
		_0xc505036a35afd01b(false);
		if (is_screen_faded_out() || is_screen_fading_out())
		{
			do_screen_fade_in(0);
		}
		func_333(4);
		func_249(17);
	}
	Var0 = { func_343() };
	Var22 = { func_355() };
	Var31 = { func_356() };
	switch (func_347())
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
	}
	if (!network_is_gamer_in_my_session(&Var47))
	{
		return;
	}
	func_247();
	func_249(13);
}

void func_237()
{
	disable_all_control_actions(0);
	_0x236905c700fdb54d();
	func_353();
	if (func_339())
	{
		func_338(16);
		_0xc505036a35afd01b(false);
		if (is_screen_faded_out() || is_screen_fading_out())
		{
			do_screen_fade_in(0);
		}
		func_333(4);
		func_249(17);
	}
	Var0 = { func_343() };
	Var22 = { func_355() };
	Var31 = { func_356() };
	switch (func_347())
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
	}
	if (!network_is_gamer_in_my_session(&Var47))
	{
		func_338(8);
		func_357(Global_1225639->f_16);
		func_333(2);
		_0xc505036a35afd01b(false);
		if (is_screen_faded_out() || is_screen_fading_out())
		{
			do_screen_fade_in(0);
		}
		func_333(4);
		func_249(17);
	}
	iVar54 = network_get_player_from_gamer_handle(&Var47);
	if (!_network_is_player_index_valid(iVar54))
	{
		return;
	}
	func_358(iVar54);
	_0x5a91bcef74944e93(iVar54, 30f);
	if (!network_is_game_in_progress())
	{
		return;
	}
	if (!network_is_player_active(iVar54))
	{
		return;
	}
	func_247();
	func_249(14);
}

void func_238()
{
	disable_all_control_actions(0);
	_0x236905c700fdb54d();
	func_353();
	if ((func_359() && func_360()) && (func_312(255) > 0 && func_361() > -1))
	{
		func_249(16);
	}
}

void func_239()
{
	disable_all_control_actions(0);
	_0x236905c700fdb54d();
	func_353();
	if (func_339())
	{
		func_338(16);
		func_249(17);
	}
	iVar0 = Global_1572887->f_164.f_59;
	if (!network_is_player_active(iVar0))
	{
		func_338(8);
		func_362(1);
		func_357(Global_1225639->f_16);
		func_333(2);
		func_333(4);
		func_249(17);
	}
	if (func_312(iVar0) == 0)
	{
		return;
	}
	if (func_363() != 2 && func_334(255))
	{
		return;
	}
	iVar1 = func_364((*Global_1055058)[iVar0]->f_2);
	if (iVar1 == 1)
	{
		_0xc0474c8bcf6787ad(_0x901e0dc25080c8b9(iVar0));
	}
	if (func_365())
	{
		func_366();
		func_333(32);
		func_333(2);
		func_249(17);
		return;
	}
	if ((*Global_262777)[iVar0]->f_1.f_59 != 0)
	{
		iVar1 = func_364((*Global_262777)[iVar0]->f_1.f_59);
	}
	if (iVar1 == 10 || iVar1 == 1)
	{
		if (!func_367(-1, 0))
		{
			return;
		}
		Var2 = { func_368(iVar0) };
		iVar72 = func_369(Var2.f_18, Var2.f_17);
		if (iVar72 == 1)
		{
			return;
		}
		else if (iVar72 == 2)
		{
			func_370(1024);
		}
		if (func_371(iVar0))
		{
			func_333(2);
			func_249(17);
			return;
		}
		else
		{
			func_338(4);
			func_372(1);
			func_72(2);
			func_249(17);
			return;
		}
	}
	if (network_is_in_tutorial_session())
	{
		func_331(0);
		return;
	}
	iVar73 = func_347();
	bVar74 = false;
	if ((iVar73 != 1 && iVar73 != 3) || bVar74)
	{
		if (bVar74)
		{
		}
	}
	if (!func_373())
	{
		return;
	}
	func_333(2);
	func_249(17);
}

void func_240()
{
	disable_all_control_actions(0);
	_0x236905c700fdb54d();
	func_353();
	if (func_340(4))
	{
		if (Global_1572887->f_164.f_81 != 0)
		{
			return;
		}
		if (func_374())
		{
			if ((!func_340(2) && !func_334(255)) && !(is_screen_faded_in() || is_screen_fading_in()))
			{
				do_screen_fade_in(0);
			}
			if (!Global_1225639->f_13 || Global_1225639->f_15 == &Global_1225639)
			{
				func_375(0, 3, 0);
			}
		}
		else if (func_363() != 2 && func_48() == 0)
		{
			if (func_363() == 0)
			{
				func_376(0);
			}
			else if (func_363() == 1)
			{
				func_18();
			}
		}
	}
	if (!func_340(2) && _get_global_block_can_be_accessed(4))
	{
		if (func_334(255))
		{
			return;
		}
		else if (is_screen_faded_out() || is_screen_fading_out())
		{
			func_362(0);
			func_377(1, 1);
		}
	}
	if (_is_loading_screen_active())
	{
		if (!is_screen_faded_out())
		{
			do_screen_fade_out(0);
		}
		shutdown_loading_screen();
	}
	if (Global_1572887->f_164.f_1 == 2 || Global_1572887->f_164.f_1 == 3)
	{
		_0xa4484173759749b1();
	}
	if (!func_340(32))
	{
		func_352(0, 1);
	}
	func_72(2);
	func_331(0);
	func_71();
}

void func_241(var uParam0, bool bParam1, bool bParam2)
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

bool func_242(int iParam0)
{
	if (iParam0 >= 42 || iParam0 <= 0)
	{
		return true;
	}
	return Global_1899202[iParam0] >= 1;
}

void func_243(int iParam0)
{
	if (iParam0 >= 0)
	{
		(*Global_1898441)[iParam0] = 0;
		(*Global_1898441)[iParam0]->f_1 = 0;
		StringCopy(&((*Global_1898441)[iParam0]->f_2), "", 24);
		StringCopy(&((*Global_1898441)[iParam0]->f_18), "", 24);
		StringCopy(&((*Global_1898441)[iParam0]->f_21), "", 24);
		StringCopy(&((*Global_1898441)[iParam0]->f_24), "", 24);
		StringCopy(&((*Global_1898441)[iParam0]->f_27), "", 24);
		StringCopy(&((*Global_1898441)[iParam0]->f_30), "", 64);
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			StringCopy((*Global_1898441)[iParam0]->f_5[iVar0], "", 24);
			iVar0++;
		}
	}
}

bool func_244(var uParam0)
{
	return false;
}

void func_245(struct<25> Param0, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, int iParam38, bool bParam39)
{
	if (!func_378(Param0))
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
	if (bParam39)
	{
		if (!is_string_null_or_empty(&(Param0.f_24)) && !is_string_null_or_empty(Param0.f_5[0]))
		{
			_0x91d657230bc208d2(Param0.f_5[0], &(Param0.f_24));
			Var0 = { func_379(player_id()) };
			if (func_380(Var0))
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
	_0xb16fc7b364d86585();
	func_243(iParam38);
	(*Global_1899202)[Param0] = Global_1899202[Param0] + 1;
}

void func_246(int iParam0)
{
	iVar0 = Global_1572887->f_282.f_1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 15)
	{
		if (is_bit_set(iVar0, iVar1))
		{
		}
		iVar1++;
	}
	if (Global_1572887->f_282.f_2 != -1)
	{
	}
	if (Global_1572887->f_282.f_3 != -1)
	{
	}
	if (Global_1572887->f_282.f_4 != -1)
	{
	}
	if (Global_1572887->f_282.f_5 != -1)
	{
	}
	if (Global_1572887->f_282.f_6 != -1)
	{
	}
	if (Global_1572887->f_282.f_8 != 0)
	{
	}
}

void func_247()
{
	Global_1572887->f_164.f_60 = get_game_timer();
}

void func_248(int iParam0)
{
	Global_1572887->f_164.f_1 = iParam0;
}

void func_249(int iParam0)
{
	Global_1572887->f_164 = iParam0;
}

bool func_250()
{
	return Global_1572887->f_164.f_86 != -1;
}

void func_251(int iParam0)
{
	Global_1572887->f_282 = iParam0;
}

void func_252(int iParam0)
{
	func_381(&(Global_1572887->f_282.f_1), func_261(iParam0));
}

char* func_253(int iParam0)
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
	}
	return sVar0;
}

int func_254()
{
	return (get_game_timer() - Local_15.f_1);
}

void func_255(var uParam0)
{
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	*uParam0 = { Var0 };
}

int func_256(int iParam0)
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
			return 29;
		case 1285083821:
			return 30;
		case -1840907462:
			return 31;
		case 756710130:
			return 32;
		case 388370024:
			return 33;
		case 1092296123:
			return 34;
		case 467491346:
			return 35;
		case -1391584612:
			return 36;
		case -152111346:
			return 37;
		case 1447551317:
			return 38;
		case 153136092:
			return 39;
		case 1304405732:
			return 40;
		case 1074984055:
			return 41;
		case 1087476368:
			return 50;
		case -1768057340:
			return 51;
		case 1218874593:
			return 42;
		case -1438443836:
			return 52;
		case -2036340415:
			return 43;
		case 803939643:
			return 44;
		case -632496195:
			return 53;
		case -965943619:
			return 45;
		case 283532073:
			return 46;
		case -69067491:
			return 47;
		case -1864895118:
			return 48;
		case -1929806571:
			return 54;
		case 1162337247:
			return 28;
		case -698525417:
			return 55;
		case -1149739894:
			return 56;
		case 380507325:
			return 49;
		case 407796241:
			return 57;
		case -152267914:
			return 58;
		case -1675443320:
			return 59;
		case 1940341639:
			return 60;
		case 1846596114:
			return 61;
		case 907708501:
			return 62;
		case 1825644981:
			return 64;
		case 2065937607:
			return 65;
		case -211317417:
			return 66;
		case 1801307910:
			return 67;
		case -4118897:
			return 68;
		case 1853610692:
			return 69;
		case -1574644415:
			return 70;
		case 2133055515:
			return 71;
		case -1413401932:
			return 72;
		case 801090761:
			return 73;
		case 2131218644:
			return 74;
		case 1708823660:
			return 75;
		case 7976942:
			return 76;
		case 2111120505:
			return 77;
		case 176893118:
			return 78;
		case 602306665:
			return 63;
		case 1179148161:
			return 79;
		case 547412068:
			return 80;
		case -1539748801:
			return 81;
		case -1605119912:
			return 82;
		case -884464063:
			return 83;
		case -1420970720:
			return 84;
		case 1017024547:
			return 85;
		case -1204497306:
			return 86;
		case -1621069480:
			return 87;
		case -458604261:
			return 88;
		case -923391614:
			return 89;
		case -689247089:
			return 90;
		case 44049568:
			return 91;
		case 1350259552:
			return 92;
		case -61661574:
			return 93;
		case -725338054:
			return 94;
		case -770123507:
			return 95;
		case 1322486734:
			return 96;
		case -460939553:
			return 97;
		case -1451863552:
			return 98;
		case 713715980:
			return 101;
		case -31204969:
			return 102;
		case -1720064790:
			return 103;
		case 173833068:
			return 99;
		case -1681004136:
			return 100;
		case -532172775:
			return 104;
		case -739067737:
			return 105;
		case -1203133835:
			return 106;
		case -1947411598:
			return 107;
		case -1049753365:
			return 108;
		case -1298718762:
			return 109;
		case -595083064:
			return 110;
		case 884833917:
			return 111;
		case 2141950651:
			return 112;
		case -1437650729:
			return 113;
		case 672925454:
			return 126;
		case 846062774:
			return 127;
		case 1369756178:
			return 120;
		case -736172423:
			return 121;
		case 1597070291:
			return 122;
		case -159501564:
			return 124;
		case -1438809608:
			return 123;
		case -102682392:
			return 125;
		case -81068979:
			return 114;
		case 227618407:
			return 115;
		case 2106043438:
			return 116;
		case -1868356491:
			return 129;
		case -1380256064:
			return 117;
		case -2118469183:
			return 118;
		case -558997834:
			return 119;
		case 658339366:
			return 128;
		default:
			break;
	}
	return -1;
}

int func_257(int iParam0)
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

int func_258(int iParam0)
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

int func_259(int iParam0)
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

int func_260(int iParam0)
{
	switch (iParam0)
	{
		case -1369928329:
			return 0;
		case 2090637823:
			return 2;
		case -1740003396:
			return 3;
		case -2140118397:
			return 4;
		case -141490041:
			return 5;
		case 485273815:
			return 6;
		case 188100165:
			return 7;
		case -840966484:
			return 8;
		case 812079913:
			return 9;
		case 839886685:
			return 10;
		case 1749906378:
			return 11;
		case 1485493317:
			return 12;
		case -1956038143:
			return 13;
		default:
			break;
	}
	return -1;
}

int func_261(int iParam0)
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
			iVar0 = 4;
			break;
		case 1306134188:
			iVar0 = 8;
			break;
		case -1357178860:
			iVar0 = 16;
			break;
		case 133180145:
			iVar0 = 32;
			break;
		case 655115506:
			iVar0 = 64;
			break;
		case 1737952409:
			iVar0 = 128;
			break;
		case 2137301164:
			iVar0 = 256;
			break;
		case -110687166:
			iVar0 = 512;
			break;
		case -2030542394:
			iVar0 = 1024;
			break;
		case -11301188:
			iVar0 = 2048;
			break;
		case -1312679892:
			iVar0 = 4096;
			break;
		case 1433203589:
			iVar0 = 8192;
			break;
		case -61119924:
			iVar0 = 16384;
			break;
		case 2134863183:
			iVar0 = 32768;
			break;
		case -159568751:
			iVar0 = 65536;
			break;
		case -448212099:
			iVar0 = 131072;
			break;
	}
	return iVar0;
}

bool func_262(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

char* func_263(int iParam0)
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
		case -448212099:
			sVar0 = "benchmark";
			break;
	}
	return sVar0;
}

int func_264(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -88424047;
			break;
		case 1:
			iVar0 = 1651967528;
			break;
		case 2:
			iVar0 = -84928653;
			break;
		case 3:
			iVar0 = 1306134188;
			break;
		case 4:
			iVar0 = -1357178860;
			break;
		case 5:
			iVar0 = 133180145;
			break;
		case 6:
			iVar0 = 655115506;
			break;
		case 7:
			iVar0 = 1737952409;
			break;
		case 8:
			iVar0 = 2137301164;
			break;
		case 9:
			iVar0 = -110687166;
			break;
		case 10:
			iVar0 = -2030542394;
			break;
		case 11:
			iVar0 = -11301188;
			break;
		case 12:
			iVar0 = -1312679892;
			break;
		case 13:
			iVar0 = 1433203589;
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
			iVar0 = -448212099;
			break;
	}
	return iVar0;
}

char* func_265(int iParam0)
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
		case 29:
			return "REGION_BGV_WATSONSCABIN";
		case 30:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 31:
			return "REGION_BLU_COPPERHEAD";
		case 32:
			return "REGION_BLU_SISIKA";
		case 33:
			return "REGION_CML_BACCHUSBRIDGE";
		case 34:
			return "REGION_CML_DINO_LADY";
		case 35:
			return "REGION_CML_OLDFORTWALLACE";
		case 36:
			return "REGION_CML_SIXPOINTCABIN";
		case 37:
			return "REGION_GRT_BEECHERS";
		case 38:
			return "REGION_GRT_BLACKWATER";
		case 39:
			return "REGION_GRT_QUAKERS_COVE";
		case 40:
			return "REGION_GRZ_ADLERRANCH";
		case 41:
			return "REGION_GRZ_DEAD_RIVAL";
		case 50:
			return "REGION_GRZ_CALUMETRAVINE";
		case 51:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 42:
			return "REGION_GRZ_CHEZPORTER";
		case 52:
			return "REGION_GRZ_COHUTTA";
		case 43:
			return "REGION_GRZ_COLTER";
		case 44:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 53:
			return "REGION_GRZ_GUNFIGHT";
		case 45:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 46:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 47:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 48:
			return "REGION_GRZ_TEMPEST_RIM";
		case 54:
			return "REGION_GRZ_THELOFT";
		case 55:
			return "REGION_GRE_VETERAN";
		case 56:
			return "REGION_GRZ_WAPITI";
		case 49:
			return "REGION_GRZ_WINTERMINING_TOWN";
		case 57:
			return "REGION_GUA_AGUASDULCES";
		case 58:
			return "REGION_GUA_CAMP";
		case 59:
			return "REGION_GUA_CINCOTORRES";
		case 60:
			return "REGION_GUA_LACAPILLA";
		case 61:
			return "REGION_GUA_MANICATO";
		case 62:
			return "REGION_HRT_ABANDONED_MILL";
		case 64:
			return "REGION_HRT_CARMODYDELL";
		case 65:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 66:
			return "REGION_HRT_CROP_FARM";
		case 67:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 68:
			return "REGION_HRT_DOWNSRANCH";
		case 69:
			return "REGION_HRT_EMERALDRANCH";
		case 70:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 71:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 72:
			return "REGION_HRT_LARNEDSOD";
		case 73:
			return "REGION_HRT_LOONY_CULT";
		case 74:
			return "REGION_HRT_LUCKYSCABIN";
		case 75:
			return "REGION_HRT_SWANSONS_STATION";
		case 76:
			return "REGION_HRT_VALENTINE";
		case 77:
			return "REGION_ROA_ABERDEENPIGFARM";
		case 78:
			return "REGION_ROA_ANNESBURG";
		case 79:
			return "REGION_ROA_BEAVERHOLLOW";
		case 63:
			return "REGION_ROA_BEECHERS_C";
		case 80:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 81:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 82:
			return "REGION_ROA_BUTCHERCREEK";
		case 83:
			return "REGION_ROA_DOVERHILL";
		case 84:
			return "REGION_ROA_HAPPY_FAMILY";
		case 85:
			return "REGION_ROA_ISOLATIONIST";
		case 86:
			return "REGION_ROA_MACLEANSHOUSE";
		case 87:
			return "REGION_ROA_MOSSY_FLATS";
		case 88:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 89:
			return "REGION_ROA_ROCKYSEVEN";
		case 90:
			return "REGION_ROA_TRAPPER";
		case 91:
			return "REGION_ROA_VANHORNMANSION";
		case 92:
			return "REGION_ROA_VANHORNPOST";
		case 93:
			return "REGION_SCM_BRAITHWAITEMANOR";
		case 94:
			return "REGION_SCM_BULGERGLADE";
		case 95:
			return "REGION_SCM_CALIGAHALL";
		case 96:
			return "REGION_SCM_CATFISHJACKSONS";
		case 97:
			return "REGION_SCM_CLEMENSCOVE";
		case 98:
			return "REGION_SCM_CLEMENSPOINT";
		case 99:
			return "REGION_SCM_COMPSONS_STEAD";
		case 100:
			return "REGION_SCM_DAIRY_FARM";
		case 101:
			return "REGION_SCM_HORSE_SHOP";
		case 102:
			return "REGION_SCM_LONNIESSHACK";
		case 103:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 104:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 105:
			return "REGION_SCM_RHODES";
		case 106:
			return "REGION_SCM_SLAVE_PEN";
		case 107:
			return "REGION_TAL_AURORA_BASIN";
		case 108:
			return "REGION_TAL_DEAD_SETTLER";
		case 109:
			return "REGION_TAL_COCHINAY";
		case 110:
			return "REGION_TAL_MANZANITAPOST";
		case 111:
			return "REGION_TAL_PACIFICUNIONRR";
		case 112:
			return "REGION_TAL_TANNERSREACH";
		case 113:
			return "REGION_TAL_TRAPPER";
		case 126:
			return "REGION_HEN_MACFARLANES_RANCH";
		case 127:
			return "REGION_HEN_THIEVES_LANDING";
		case 120:
			return "REGION_CHO_ARMADILLO";
		case 121:
			return "REGION_CHO_COOTS_CHAPEL";
		case 122:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 124:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 123:
			return "REGION_CHO_RILEYS_CHARGE";
		case 125:
			return "REGION_CHO_TWIN_ROCKS";
		case 114:
			return "REGION_GAP_GAPTOOTH_BREACH";
		case 115:
			return "REGION_GAP_TUMBLEWEED";
		case 116:
			return "REGION_GAP_RATHSKELLER_FORK";
		case 129:
			return "REGION_GAP_SOLOMONS_FOLLY";
		case 117:
			return "REGION_RIO_BENEDICT_POINT";
		case 118:
			return "REGION_RIO_FORT_MERCER";
		case 119:
			return "REGION_RIO_PLAIN_VIEW";
		case 128:
			return "REGION_CENTRALUNIONRR";
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

char* func_266(int iParam0)
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

char* func_267(int iParam0)
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

char* func_268(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NET_PLAYLIST_RACE_SERIES";
		case 1:
			return "NET_PLAYLIST_FEATURED_SERIES_001";
		case 2:
			return "NET_PLAYLIST_ADVERSARY_MEDIUM";
		case 3:
			return "NET_PLAYLIST_ADVERSARY_LARGE";
		case 4:
			return "NET_PLAYLIST_GUN_RUSH_TEAMS";
		case 5:
			return "NET_PLAYLIST_GUN_RUSH_FREE_FOR_ALL";
		case 6:
			return "NET_PLAYLIST_NOMINATED_SERIES";
		case 7:
			return "NET_PLAYLIST_NOMINATED_SERIES_SMALL";
		case 8:
			return "NET_PLAYLIST_NOMINATED_SERIES_MEDIUM";
		case 9:
			return "NET_PLAYLIST_NOMINATED_SERIES_LARGE";
		case 10:
			return "NET_PLAYLIST_PRIVATE_SERIES";
		case 11:
			return "NET_PLAYLIST_ORBIS_SERIES_1";
		case 12:
			return "NET_PLAYLIST_ORBIS_SERIES_2";
		case 13:
			return "NET_PLAYLIST_ORBIS_SERIES_3";
		default:
			break;
	}
	return "";
}

char* func_269(int iParam0)
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

void func_270(var uParam0)
{
	StringCopy(&cVar1, "strandSavedVars", 64);
	_0x81f4e92be3958364(uParam0, 129, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 4, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, ".savedBitFlags", 64);
		_0x529b9ccd0972af4d((*uParam0)[iVar0], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".thisCommandPos", 64);
		_0x529b9ccd0972af4d(&((*uParam0)[iVar0]->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".thisCommandHashID", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".thisCommandTOD", 64);
		_0xb25b5a375be5be26(&((*uParam0)[iVar0]->f_3), &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_271(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 112, "controls");
	StringCopy(&cVar1, "controls.syncIDs", 64);
	_0x81f4e92be3958364(uParam0, 105, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0xbb7f4273c186bc4b((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar1, "controls.flagIDs", 64);
	_0x81f4e92be3958364(&(uParam0->f_105), 2, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_105)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0xbb7f4273c186bc4b(uParam0->f_105[iVar0], &Var9);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar1, "controls.intIDs", 64);
	_0x81f4e92be3958364(&(uParam0->f_107), 3, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_107)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x529b9ccd0972af4d(uParam0->f_107[iVar0], &Var9);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar1, "controls.bitsetIDs", 64);
	_0x81f4e92be3958364(&(uParam0->f_110), 2, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_110)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x529b9ccd0972af4d(uParam0->f_110[iVar0], &Var9);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

void func_272(var uParam0)
{
	StringCopy(&cVar0, "sHorseSlotInfo", 64);
	_0x81f4e92be3958364(uParam0, 3053, &cVar0);
	iVar16 = 0;
	while (iVar16 < *uParam0)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		func_382((*uParam0)[iVar16], &Var8);
		iVar16++;
	}
	_0xa844feb5c22c2c74();
}

void func_273(var uParam0)
{
	StringCopy(&cVar0, "sSaddleInfo", 64);
	_0x443174c20b8b9e7f(uParam0, 80, &cVar0);
	cVar8 = { cVar0 };
	StringConCat(&cVar8, ".eSaddleSlot", 64);
	_0xb25b5a375be5be26(uParam0, &cVar8);
	cVar8 = { cVar0 };
	StringConCat(&cVar8, ".eSaddleState", 64);
	_0xb25b5a375be5be26(&(uParam0->f_1), &cVar8);
	cVar8 = { cVar0 };
	StringConCat(&cVar8, ".eDeadOrDroppedTime", 64);
	_0xb25b5a375be5be26(&(uParam0->f_2), &cVar8);
	cVar8 = { cVar0 };
	StringConCat(&cVar8, ".sPeltSkinData", 64);
	_0x81f4e92be3958364(&(uParam0->f_3), 58, &cVar8);
	iVar24 = 0;
	while (iVar24 < 57)
	{
		Var16 = { cVar8 };
		StringIntConCat(&Var16, iVar24, 64);
		func_383(uParam0->f_3[iVar24], &Var16);
		iVar24++;
	}
	_0xa844feb5c22c2c74();
	cVar8 = { cVar0 };
	StringConCat(&cVar8, ".sVisualPeltSkinInfo", 64);
	_0x81f4e92be3958364(&(uParam0->f_61), 16, &cVar8);
	iVar24 = 0;
	while (iVar24 < 3)
	{
		Var16 = { cVar8 };
		StringIntConCat(&Var16, iVar24, 64);
		func_384(uParam0->f_61[iVar24], &Var16);
		iVar24++;
	}
	_0xa844feb5c22c2c74();
	cVar8 = { cVar0 };
	StringConCat(&cVar8, ".vSaddleCoords", 64);
	func_152(&(uParam0->f_77), &cVar8);
	_0xe0b45e983bfc0768();
}

void func_274(var uParam0)
{
	StringCopy(&cVar0, "sHorseBreakingInfo", 64);
	_0x443174c20b8b9e7f(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".bMinigameSuccessful", 64);
	_0xbb7f4273c186bc4b(uParam0, &Var8);
	_0xe0b45e983bfc0768();
}

void func_275(var uParam0)
{
	StringCopy(&cVar0, "sTutorialInfo", 64);
	_0x443174c20b8b9e7f(uParam0, 5, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".iHighestBondLevelReached", 64);
	_0x529b9ccd0972af4d(uParam0, &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".iTimesOverspurred", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_1), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".iTimesRevived", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_2), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".iTimesDirtyOver50Percent", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_3), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".bDeadHorseTutorialShouldRun", 64);
	_0xbb7f4273c186bc4b(&(uParam0->f_4), &Var8);
	_0xe0b45e983bfc0768();
}

void func_276(var uParam0)
{
	StringCopy(&cVar0, "sHorseRaceInfo", 64);
	_0x443174c20b8b9e7f(uParam0, 2, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".bSprintBondingBonusUnlocked", 64);
	_0xbb7f4273c186bc4b(uParam0, &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".bSpeedStatBonusUnlocked", 64);
	_0xbb7f4273c186bc4b(&(uParam0->f_1), &Var8);
	_0xe0b45e983bfc0768();
}

void func_277(struct<8> Param0, var uParam8)
{
	_0x81f4e92be3958364(uParam8, 61, &Param0);
	iVar32 = 0;
	while (iVar32 < *uParam8)
	{
		MemCopy(&cVar0, {Param0}, 16);
		StringIntConCat(&cVar0, iVar32, 128);
		_0x443174c20b8b9e7f((*uParam8)[iVar32], 5, &cVar0);
		Var16 = { cVar0 };
		StringConCat(&Var16, ".iSet", 128);
		_0x529b9ccd0972af4d((*uParam8)[iVar32], &Var16);
		Var16 = { cVar0 };
		StringConCat(&Var16, ".eComp", 128);
		_0xb25b5a375be5be26(&((*uParam8)[iVar32]->f_1), &Var16);
		Var16 = { cVar0 };
		StringConCat(&Var16, ".eIt", 128);
		_0xb25b5a375be5be26(&((*uParam8)[iVar32]->f_2), &Var16);
		Var16 = { cVar0 };
		StringConCat(&Var16, ".eUp", 128);
		_0xb25b5a375be5be26(&((*uParam8)[iVar32]->f_3), &Var16);
		Var16 = { cVar0 };
		StringConCat(&Var16, ".iVal", 128);
		_0x529b9ccd0972af4d(&((*uParam8)[iVar32]->f_4), &Var16);
		_0xe0b45e983bfc0768();
		iVar32++;
	}
	_0xa844feb5c22c2c74();
}

void func_278(char* sParam0, var uParam1)
{
	StringCopy(&cVar1, sParam0, 64);
	_0x81f4e92be3958364(uParam1, 286, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam1)[iVar0], 3, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "status", 64);
		_0xb25b5a375be5be26((*uParam1)[iVar0], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "effect", 64);
		_0xb25b5a375be5be26(&((*uParam1)[iVar0]->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "tags", 64);
		_0xb25b5a375be5be26(&((*uParam1)[iVar0]->f_2), &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_279(var uParam0)
{
	StringCopy(&cVar0, "cards", 64);
	_0x443174c20b8b9e7f(uParam0, 2, "cards");
	StringCopy(&cVar0, "cards.eCardSetRewardFlags", 64);
	_0xb25b5a375be5be26(&(uParam0->f_1), &cVar0);
	_0xb25b5a375be5be26(uParam0, "cards.eMailedCigaretteSets");
	_0xe0b45e983bfc0768();
}

void func_280(var uParam0)
{
	StringCopy(&cVar0, "rockCarvings", 64);
	_0x443174c20b8b9e7f(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eCarvingsRewardFlags", 64);
	_0xb25b5a375be5be26(uParam0, &Var8);
	_0xe0b45e983bfc0768();
}

void func_281(var uParam0)
{
	StringCopy(&cVar0, "dinoBones", 64);
	_0x443174c20b8b9e7f(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eDinoRewardFlags", 64);
	_0xb25b5a375be5be26(uParam0, &Var8);
	_0xe0b45e983bfc0768();
}

void func_282(var uParam0)
{
	StringCopy(&cVar0, "legendaryFish", 64);
	_0x443174c20b8b9e7f(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eLegendaryFishRewardFlags", 64);
	_0xb25b5a375be5be26(uParam0, &Var8);
	_0xe0b45e983bfc0768();
}

void func_283(var uParam0)
{
	StringCopy(&cVar1, "gatorEggs", 64);
	_0x81f4e92be3958364(uParam0, 20, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 1, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "todNestLastCleared", 64);
		_0xb25b5a375be5be26((*uParam0)[iVar0], &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_284(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 1, "egretFeathers");
	StringCopy(&cVar0, "egretFeathers.eFeathersRewardFlags", 64);
	_0xb25b5a375be5be26(uParam0, &cVar0);
	_0xe0b45e983bfc0768();
}

void func_285(var uParam0)
{
	StringCopy(&cVar0, "taxidermyAnimals", 64);
	_0x443174c20b8b9e7f(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eTaxidermyRewardFlags", 64);
	_0xb25b5a375be5be26(uParam0, &Var8);
	_0xe0b45e983bfc0768();
}

void func_286(var uParam0)
{
	StringCopy(&cVar1, "taxidermyMarital", 64);
	_0x81f4e92be3958364(uParam0, 15, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 2, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "todStatuePlacedOnMantle", 64);
		_0xb25b5a375be5be26((*uParam0)[iVar0], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "bPlayerLeftBeechers", 64);
		_0xbb7f4273c186bc4b(&((*uParam0)[iVar0]->f_1), &Var17);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
}

void func_287(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 1, "journalData");
	_0xb25b5a375be5be26(uParam0, "journalData.eFlags");
	_0xe0b45e983bfc0768();
}

void func_288(var uParam0)
{
	StringCopy(&cVar0, "exotics", 64);
	_0x443174c20b8b9e7f(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eExoticStageFlags", 64);
	_0xb25b5a375be5be26(uParam0, &Var8);
	_0xe0b45e983bfc0768();
}

void func_289(var uParam0)
{
	StringCopy(&cVar0, "firstRecipePamphlets", 64);
	_0x443174c20b8b9e7f(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eFirstRecipePamphletFlags", 64);
	_0xb25b5a375be5be26(uParam0, &Var8);
	_0xe0b45e983bfc0768();
}

void func_290(var uParam0)
{
	StringCopy(&cVar0, "treasureHunter", 64);
	_0x443174c20b8b9e7f(uParam0, 2, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "todTreasureHunterTutorial", 64);
	_0xb25b5a375be5be26(uParam0, &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "iNumTreasureHuntLootLocationsFound", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_1), &Var8);
	_0xe0b45e983bfc0768();
}

void func_291(var uParam0, struct<8> Param1)
{
	Var9 = { Param1 };
	StringConCat(&Var9, "PortableList", 64);
	_0x81f4e92be3958364(uParam0, 19, &Var9);
	iVar0 = 0;
	while (iVar0 < 18)
	{
		Var1 = { Var9 };
		StringIntConCat(&Var1, iVar0, 64);
		_0x529b9ccd0972af4d((*uParam0)[iVar0], &Var1);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	Var9 = { Param1 };
	StringConCat(&Var9, "PortableArraySize", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_19), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "OutfitSlotCount", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_20), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iHatSlotCount", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_21), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iBigMaskSlotCount", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_22), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iSmallMaskSlotCount", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_23), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iGloveSlotCount", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_24), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iBadgeSlotCount", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_25), &Var9);
}

void func_292(var uParam0, struct<8> Param1, int iParam9)
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
	func_385(&(uParam0->f_1), Var0);
	_0xe0b45e983bfc0768();
}

void func_293(var uParam0)
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

void func_294(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 47, "psna_sPosse");
	_0xbb7f4273c186bc4b(uParam0, "psna_sPosse_bStandardName");
	_0x4845e7e7643a908c(&(uParam0->f_1), "psna_sPosse_txtGamertag");
	_0x529b9ccd0972af4d(&(uParam0->f_5), "psna_sPosse_iLastPosseID");
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
		_0x529b9ccd0972af4d(&(uParam0->f_6[iVar0]->f_7), &Var17);
		Var17 = { Var1 };
		StringConCat(&Var17, "_sPosseLock", 64);
		_0x443174c20b8b9e7f(uParam0->f_6[iVar0], 7, &Var17);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Year", 64);
		_0x529b9ccd0972af4d(uParam0->f_6[iVar0], &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Month", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_6[iVar0]->f_1), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Day", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_6[iVar0]->f_2), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Hour", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_6[iVar0]->f_3), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Minute", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_6[iVar0]->f_4), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Second", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_6[iVar0]->f_5), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Milliseconds", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_6[iVar0]->f_6), &Var25);
		_0xe0b45e983bfc0768();
		_0xe0b45e983bfc0768();
		StringCopy(&Var17, "", 64);
		StringCopy(&Var25, "", 64);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

void func_295(var uParam0)
{
	_0x443174c20b8b9e7f(uParam0, 288, "nssd_sStable_Data");
	func_386(uParam0);
	_0x81f4e92be3958364(&(uParam0->f_41), 246, "nssd_sStableBonding_array");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&cVar1, "nssd_sStableBonding_array_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		func_387(uParam0->f_41[iVar0], &cVar1);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xb25b5a375be5be26(&(uParam0->f_287), "nssd_eSavedSystemFlags");
	_0xe0b45e983bfc0768();
}

void func_296(var uParam0)
{
	StringCopy(&cVar9, "psna_sClothes", 64);
	_0x443174c20b8b9e7f(uParam0, 1012, &cVar9);
	Var1 = { cVar9 };
	StringConCat(&Var1, "PortableWardrobe", 64);
	_0x443174c20b8b9e7f(uParam0, 26, &Var1);
	func_291(uParam0, Var1);
	_0xe0b45e983bfc0768();
	StringCopy(&Var1, "psna_sClothes_OutfitList", 64);
	_0x81f4e92be3958364(&(uParam0->f_26), 601, &Var1);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_292(uParam0->f_26[iVar0], Var1, iVar0);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&Var1, "psna_sClothes_HeadOverlay", 64);
	func_388(&(uParam0->f_627), Var1);
	_0xb25b5a375be5be26(&(uParam0->f_953), "psna_sClothes_SystemFlags");
	_0xb25b5a375be5be26(&(uParam0->f_954), "psna_sClothes_PlayerType");
	_0x81f4e92be3958364(&(uParam0->f_955), 55, "psna_sClothes_fExpressions");
	iVar0 = 0;
	while (iVar0 < 54)
	{
		Var1 = { cVar9 };
		StringConCat(&Var1, "_fExpression", 64);
		StringIntConCat(&Var1, iVar0, 64);
		_0x35defecae36d4fae(uParam0->f_955[iVar0], &Var1);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0x35defecae36d4fae(&(uParam0->f_1010), "psna_sClothes_fEyeRedness");
	_0x529b9ccd0972af4d(&(uParam0->f_1011), "psna_sClothes_iCurOutfit");
	_0xe0b45e983bfc0768();
}

void func_297(var uParam0)
{
	StringCopy(&cVar9, "psna_sAbandonedLoot", 64);
	_0x443174c20b8b9e7f(uParam0, 3, &cVar9);
	_0x81f4e92be3958364(uParam0, 3, &Var1);
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		Var1 = { cVar9 };
		StringIntConCat(&Var1, iVar0, 64);
		func_389((*uParam0)[iVar0], Var1);
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

void func_298(var uParam0)
{
	StringCopy(&cVar17, "psna_sRpg", 64);
	_0x443174c20b8b9e7f(uParam0, 34, &cVar17);
	StringConCat(&cVar17, "psna_sAttributeData", 64);
	_0x81f4e92be3958364(uParam0, 24, &cVar17);
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		Var1 = { cVar17 };
		StringIntConCat(&Var1, iVar0, 64);
		_0x443174c20b8b9e7f((*uParam0)[iVar0], 1, &Var1);
		StringConCat(&Var1, "fAttributeXP", 64);
		_0x35defecae36d4fae((*uParam0)[iVar0], &Var1);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar17, "psna_sRpg", 64);
	StringConCat(&cVar17, "psna_sAttributeCoreData", 64);
	_0x81f4e92be3958364(&(uParam0->f_24), 10, &cVar17);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Var1 = { cVar17 };
		StringIntConCat(&Var1, iVar0, 64);
		_0x443174c20b8b9e7f(uParam0->f_24[iVar0], 3, &Var1);
		Var9 = { Var1 };
		StringConCat(&Var9, "fCoreValue", 64);
		_0x35defecae36d4fae(uParam0->f_24[iVar0], &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "todDegradeLastFixed", 64);
		_0xb25b5a375be5be26(&(uParam0->f_24[iVar0]->f_1), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "iDegradeCount", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_24[iVar0]->f_2), &Var9);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

void func_299(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		_datafile_register_query(*uParam0, iVar0, func_390(iVar0));
		iVar0++;
	}
}

var func_300(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	uVar0 = _datafile_get_num_nodes(uParam0);
	return uVar0;
}

bool func_301(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	bVar0 = _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
	if (bVar0)
	{
		return true;
	}
	return false;
}

bool func_302(var uParam0, int iParam1, var uParam2)
{
	uParam0->f_2 = iParam1;
	bVar0 = _datafile_get_string(uParam2, uParam0);
	if (bVar0)
	{
		return true;
	}
	return false;
}

bool func_303(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_2 = iParam1;
	bVar0 = _datafile_get_bool(bParam2, uParam0);
	if (bVar0)
	{
		return true;
	}
	return false;
}

void func_304(var uParam0, int iParam1)
{
	uParam0->f_4 = (uParam0->f_4 || iParam1);
}

int func_305(var uParam0, int iParam1, var uParam2)
{
	uParam0->f_2 = iParam1;
	bVar0 = _datafile_get_int(uParam2, uParam0);
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

bool func_306(int iParam0)
{
	if (iParam0 == 255)
	{
		return (Global_1109400->f_4[Global_1109914[24]] && (*Global_1109914)[24]->f_1) == (*Global_1109914)[24]->f_1;
	}
	return func_391(24, iParam0);
}

bool func_307(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_17370;
	}
	return (Global_1914319->f_17370 || Global_1914319->f_18996.f_1);
}

bool func_308()
{
	if (func_48() == 0)
	{
		return false;
	}
	if (animpostfx_is_running("Title_GameIntro") || animpostfx_is_running("Mission_EndCredits"))
	{
		return true;
	}
	if ((animpostfx_is_running("PlayerRPGCore") && func_309((*Global_1835011)[23]->f_1)) || animpostfx_is_running("PlayerHealthPoorCS"))
	{
		return true;
	}
	if (animpostfx_is_running("PlayerSickDoctorsOpinion"))
	{
		return true;
	}
	if ((((((animpostfx_is_running("ChapterTitle_IntroCh01") || animpostfx_is_running("ChapterTitle_IntroCh02")) || animpostfx_is_running("ChapterTitle_IntroCh04")) || animpostfx_is_running("ChapterTitle_IntroCh05")) || animpostfx_is_running("ChapterTitle_IntroCh06")) || animpostfx_is_running("ChapterTitle_IntroCh08Epi01")) || animpostfx_is_running("ChapterTitle_IntroCh09Epi02"))
	{
		return true;
	}
	if (((((((((((((((((((animpostfx_is_running("Title_Gen_FewDaysLater") || animpostfx_is_running("Title_Gen_FewDaysLater_onblack")) || animpostfx_is_running("Title_Gen_FewHoursLater")) || animpostfx_is_running("Title_Gen_FewHoursLater_onblack")) || animpostfx_is_running("Title_Gen_FewMonthsLater")) || animpostfx_is_running("Title_Gen_FewMonthsLater_onblack")) || animpostfx_is_running("Title_Gen_FewWeeksLater")) || animpostfx_is_running("Title_Gen_FewWeeksLater_onblack")) || animpostfx_is_running("Title_Gen_coupledayslater")) || animpostfx_is_running("Title_Gen_coupledayslater_onblack")) || animpostfx_is_running("Title_Gen_couplemonthslater")) || animpostfx_is_running("Title_Gen_couplemonthslater_onblack")) || animpostfx_is_running("Title_Gen_coupleweekslater")) || animpostfx_is_running("Title_Gen_coupleweekslater_onblack")) || animpostfx_is_running("Title_Gen_daylater")) || animpostfx_is_running("Title_Gen_daylater_onblack")) || animpostfx_is_running("Title_Gen_somedaysLater")) || animpostfx_is_running("Title_Gen_somedaysLater_onblack")) || animpostfx_is_running("Title_Gen_someyearsLater")) || animpostfx_is_running("Title_Gen_someyearsLater_onblack"))
	{
		return true;
	}
	return false;
}

bool func_309(int iParam0)
{
	iVar0 = func_392(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_310(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_311()
{
	if (func_48() == -1)
	{
		if (_get_global_block_can_be_accessed(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if ((*Global_1392915)[iVar0]->f_1 != -1)
				{
					if (func_309((*Global_1392915)[iVar0]->f_4))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		return false;
	}
	return false;
}

int func_312(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1225639->f_10;
	}
	return Global_262777[iParam0];
}

bool func_313(int iParam0, int iParam1)
{
	return ((*Global_262777)[iParam0]->f_72 && iParam1) != 0;
}

bool func_314(int iParam0)
{
	return (Global_262148 && iParam0) != 0;
}

void func_315(var uParam0)
{
	func_393(uParam0, 0f);
}

bool func_316(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_317(var uParam0)
{
	return func_316(*uParam0, 2);
}

float func_318()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_319(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 22))
	{
		return;
	}
	if (func_48() != -1 && !func_394())
	{
		return;
	}
	iVar22 = _0x27b1ae4d8c652f08(Var0.f_15);
	if (iVar22 == -1)
	{
		return;
	}
	if (func_336(Var0, 131072))
	{
		func_395(Var0.f_15);
		func_248(0);
		func_333(8);
		_0x981146e5c9ce9250(iVar22);
		func_396(0);
	}
	sVar23 = func_335(_0xe59f4924bd3a718d(iVar22), 636925055);
	Var24 = 1;
	Var24.f_1 = 1;
	Var24.f_2 = 1105014447;
	Var24.f_4 = -1;
	Var24.f_5 = -1134602452;
	Var24.f_6 = 1276832712;
	Var24.f_12 = 1105014447;
	Var24.f_13 = 1105014447;
	Var24.f_16 = 300;
	Var24.f_21 = 1;
	Var24.f_25.f_1 = 1;
	Var24.f_25.f_9 = 1105014447;
	Var24.f_25.f_10 = 8000;
	Var24.f_25.f_11 = 1511356879;
	Var24.f_25.f_18 = 1;
	Var24.f_17 = 1;
	Var24.f_18 = Var0.f_15;
	Var24.f_10 = sVar23;
	Var24.f_14 = 590634476;
	Var24.f_15 = -2010498407;
	Var24.f_24 = _0x9c725d149622bfde(0);
	Var24.f_23 = "IB_GAMERCARD";
	Var24.f_22 = 2;
	if (is_string_null_or_empty(&(Var0.f_17)))
	{
		Var24.f_11 = _create_var_string(42, "NT_INV_BODY_INFO", func_335(&(Var0.f_7), 109029619), "LANDING_FREEROAM_TITLE");
		Var24.f_25.f_3 = _create_var_string(2, "NT_INV_FM_CONTENT");
		Var24.f_25.f_4 = _create_var_string(2, "NM_TI_VIEW_INVITE");
	}
	else if (func_48() != -1)
	{
		iVar68 = func_397(get_hash_key(&(Var0.f_17)));
		if (iVar68 != -1)
		{
			iVar69 = Global_265238->f_4[iVar68]->f_42;
			if (iVar69 == -504335712)
			{
				Var24.f_25.f_3 = _create_var_string(2, "NT_INV_MP_PLAYER_JOIN");
				Var24.f_25.f_4 = _create_var_string(2, "NM_TI_VIEW_INVITE");
				sVar70 = _create_var_string(2, func_398(Global_265238->f_4[iVar68]->f_44));
			}
			else if (iVar69 == 395262693)
			{
				Var24.f_25.f_3 = _create_var_string(2, "NM_TI_VIEW_INVITE_DEATHMATCH");
				Var24.f_25.f_4 = _create_var_string(2, "NM_TI_VIEW_INVITE");
				sVar70 = _create_var_string(2, func_399(Global_265238->f_4[iVar68]->f_44));
			}
			else if (iVar69 == -933924539)
			{
				Var24.f_25.f_3 = _create_var_string(2, "NM_TI_VIEW_INVITE_RACE");
				Var24.f_25.f_4 = _create_var_string(2, "NM_TI_VIEW_INVITE");
				sVar70 = _create_var_string(2, func_400(Global_265238->f_4[iVar68]->f_44));
			}
			Var24.f_11 = _create_var_string(10, "NT_INV_RCV_BODY_INFO", sVar70);
		}
	}
	else
	{
		Var24.f_11 = _create_var_string(42, "NT_INV_BODY_INFO", func_335(&(Var0.f_7), 109029619), "PRES_SET_MODE_MP");
		Var24.f_25.f_3 = _create_var_string(2, "NT_INV_MP_PLAYER_JOIN");
		Var24.f_25.f_4 = _create_var_string(2, "NM_TI_VIEW_INVITE");
	}
	Var24.f_25.f_2 = sVar23;
	Var24.f_25.f_5 = 1700592256;
	Var24.f_25.f_6 = 1434360011;
	Var24.f_25.f_14 = "HUD_Toast_Soundset";
	Var24.f_25.f_15 = "Toast_On";
	Var24.f_16 = Global_1899378->f_2.f_16;
	if (func_401())
	{
		Var24.f_16 = 600;
	}
	func_402(Var24);
}

void func_320(int iParam0)
{
	if (!get_event_data(1, iParam0, &uVar0, 16))
	{
		return;
	}
	if (func_403())
	{
		func_404(&uVar0);
		return;
	}
	if (func_48() != -1 && !func_394())
	{
		func_338(2);
		func_249(17);
		return;
	}
	func_404(&uVar0);
	func_405(&uVar0);
	func_248(4);
	func_396(0);
	func_222(1);
}

void func_321(int iParam0)
{
	if (!get_event_data(1, iParam0, &iVar0, 2))
	{
		return;
	}
	func_406(1, iVar0);
	func_407(&iVar0);
}

void func_322(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 9))
	{
		return;
	}
	if (func_403() && !func_340(16384))
	{
		_0xa4484173759749b1();
		func_408(&Var0);
		return;
	}
	if (network_is_gamer_in_my_session(&Var0))
	{
		_0xa4484173759749b1();
		func_338(64);
		return;
	}
	if (func_48() != -1 && !func_394())
	{
		func_338(2);
		func_249(17);
		_0xa4484173759749b1();
		return;
	}
	if (!func_344())
	{
		func_333(4);
		return;
	}
	func_408(&Var0);
	func_409(&Var0);
	if (func_410(Var0, 2))
	{
		func_248(3);
	}
	else
	{
		func_248(2);
	}
	_0xd3a3c8b9f3bdef81();
	func_341(16384);
	func_396(0);
}

void func_323(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 17))
	{
		return;
	}
	Var17 = { func_379(player_id()) };
	if (func_262(Var0.f_15, 2) || func_262(Var0.f_15, 1))
	{
		if (network_are_handles_the_same(&Var0, &Var17) && !func_403())
		{
			return;
		}
	}
	else if (network_are_handles_the_same(&(Var0.f_7), &Var17) && !func_403())
	{
		return;
	}
	if (network_are_handles_the_same(&Var0, &Var17) && Var0.f_16 == 4)
	{
		return;
	}
	if (func_262(Var0.f_16, 4194304))
	{
		func_333(4);
		func_333(16384);
		func_249(17);
	}
	Global_1572887->f_164.f_84 = Var0.f_16;
	Global_1572887->f_164.f_65 = { Var0 };
	Global_1572887->f_164.f_72 = { Var0.f_7 };
	Global_1572887->f_164.f_85 = Var0.f_15;
}

void func_324()
{
	if (is_orbis_version())
	{
		Global_1572887->f_164.f_63 = _0x74fb3e29e6d10fa9();
	}
}

void func_325(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 16))
	{
		return;
	}
	func_338(16);
	Global_1572887->f_164.f_83 = 3;
	Global_1572887->f_164.f_65 = { Var0 };
	Global_1572887->f_164.f_72 = { Var0.f_7 };
}

void func_326(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 17))
	{
		return;
	}
	Var17 = { func_379(player_id()) };
	bVar24 = network_are_handles_the_same(&Var0, &Var17);
	if (func_262(Var0.f_16, 8) && bVar24)
	{
		return;
	}
	func_411(&Var0);
	Global_1572887->f_164.f_83 = Var0.f_15;
	Global_1572887->f_164.f_65 = { Var0 };
	Global_1572887->f_164.f_72 = { Var0.f_7 };
	if (Global_1572887->f_164.f_83 > 2 && !func_327())
	{
		Global_1572887->f_164.f_83 = 0;
	}
	else if (Global_1572887->f_164.f_83 == 2 && bVar24)
	{
		Global_1572887->f_164.f_83 = 0;
	}
}

bool func_327()
{
	if (Global_1572887->f_164.f_62 != 0)
	{
		return true;
	}
	if (Global_1572887->f_164.f_63 != -1)
	{
		return true;
	}
	if (Global_1572887->f_164.f_83 > 2)
	{
		Var0 = { func_379(player_id()) };
		bVar7 = network_are_handles_the_same(&(Global_1572887->f_164.f_72), &Var0);
		Var8 = { func_379(_0x4be6c13a45cca8ec(Global_1225639->f_14)) };
		bVar15 = network_are_handles_the_same(&(Global_1572887->f_164.f_72), &Var8);
		bVar16 = (bVar7 || bVar15);
		if (func_262(Global_1572887->f_164.f_83, 3))
		{
			return bVar16;
		}
		if (func_262(Global_1572887->f_164.f_83, 4))
		{
			return bVar16;
		}
		if (func_262(Global_1572887->f_164.f_83, 5))
		{
			return bVar16;
		}
		if (func_262(Global_1572887->f_164.f_83, 6))
		{
			return bVar16;
		}
		if (func_262(Global_1572887->f_164.f_83, 7))
		{
			return bVar16;
		}
		if (func_262(Global_1572887->f_164.f_83, 8))
		{
			return bVar16;
		}
		if (func_262(Global_1572887->f_164.f_83, 9))
		{
			return bVar16;
		}
		if (func_262(Global_1572887->f_164.f_83, 10))
		{
			return bVar16;
		}
		if (func_262(Global_1572887->f_164.f_83, 11))
		{
			return false;
		}
		if (func_262(Global_1572887->f_164.f_83, 12))
		{
			return bVar16;
		}
		if (func_262(Global_1572887->f_164.f_83, 13))
		{
			return bVar16;
		}
		if (func_262(Global_1572887->f_164.f_83, 14))
		{
			return bVar16;
		}
		if (func_262(Global_1572887->f_164.f_83, 15))
		{
			return bVar16;
		}
		if (func_262(Global_1572887->f_164.f_83, 16))
		{
			return bVar16;
		}
		if (func_262(Global_1572887->f_164.f_83, 17))
		{
			return false;
		}
		if (func_262(Global_1572887->f_164.f_83, 18))
		{
			return bVar16;
		}
		if (func_262(Global_1572887->f_164.f_83, 19))
		{
			return bVar16;
		}
		if (func_262(Global_1572887->f_164.f_83, 20))
		{
			return bVar16;
		}
		if (func_262(Global_1572887->f_164.f_83, 21))
		{
			return bVar16;
		}
		if (func_262(Global_1572887->f_164.f_83, 22))
		{
			return bVar16;
		}
		if (func_262(Global_1572887->f_164.f_83, 23))
		{
			return bVar16;
		}
		if (func_262(Global_1572887->f_164.f_83, 24))
		{
			return bVar16;
		}
	}
	if (Global_1572887->f_164.f_84 != 0)
	{
		Var17 = { func_379(player_id()) };
		bVar24 = network_are_handles_the_same(&(Global_1572887->f_164.f_72), &Var17);
		bVar25 = false;
		if (Global_1572887->f_164 > 0)
		{
			bVar25 = true;
		}
		bVar26 = !func_262(Global_1572887->f_164.f_85, 524288);
		bVar27 = !func_262(Global_1572887->f_164.f_85, 2);
		bVar28 = func_262(Global_1572887->f_164.f_85, 2);
		bVar29 = func_262(Global_1572887->f_164.f_85, 1);
		bVar30 = is_durango_version();
		bVar31 = (bVar24 && (bVar25 || bVar29));
		bVar32 = (bVar31 && !bVar30);
		bVar33 = ((bVar26 && bVar27) && !bVar24);
		if (func_262(Global_1572887->f_164.f_84, 1))
		{
			return bVar31;
		}
		if (func_262(Global_1572887->f_164.f_84, 2))
		{
			return bVar31;
		}
		if (func_262(Global_1572887->f_164.f_84, 4))
		{
			return bVar31;
		}
		if (func_262(Global_1572887->f_164.f_84, 32))
		{
			return (bVar31 || bVar33);
		}
		if (func_262(Global_1572887->f_164.f_84, 64))
		{
			return bVar31;
		}
		if (func_262(Global_1572887->f_164.f_84, 8))
		{
			return bVar31;
		}
		if (func_262(Global_1572887->f_164.f_84, 16))
		{
			return bVar31;
		}
		if (func_262(Global_1572887->f_164.f_84, 128))
		{
			return bVar31;
		}
		if (func_262(Global_1572887->f_164.f_84, 512))
		{
			return bVar31;
		}
		if (func_262(Global_1572887->f_164.f_84, 8388608))
		{
			return bVar31;
		}
		if (func_262(Global_1572887->f_164.f_84, 1024))
		{
			return bVar32;
		}
		if (func_262(Global_1572887->f_164.f_84, 2048))
		{
			return bVar32;
		}
		if (func_262(Global_1572887->f_164.f_84, 4096))
		{
			return (bVar33 || bVar33);
		}
		if (func_262(Global_1572887->f_164.f_84, 8192))
		{
			return bVar31;
		}
		if (func_262(Global_1572887->f_164.f_84, 16384))
		{
			return bVar31;
		}
		if (func_262(Global_1572887->f_164.f_84, 32768))
		{
			return (bVar31 || bVar33);
		}
		if (func_262(Global_1572887->f_164.f_84, 65536))
		{
			return bVar31;
		}
		if (func_262(Global_1572887->f_164.f_84, 262144))
		{
			return bVar31;
		}
		if (func_262(Global_1572887->f_164.f_84, 524288))
		{
			return bVar31;
		}
		if (func_262(Global_1572887->f_164.f_84, 2097152))
		{
			return bVar31;
		}
		if (func_262(Global_1572887->f_164.f_84, 4194304))
		{
			return false;
		}
		if (func_262(Global_1572887->f_164.f_84, 256))
		{
			return false;
		}
		if (func_262(Global_1572887->f_164.f_84, 1048576))
		{
			return (bVar31 && bVar28);
		}
		if (func_262(Global_1572887->f_164.f_84, 131072))
		{
			return false;
		}
	}
	return false;
}

void func_328(int iParam0)
{
	Global_1572887->f_164.f_81 = iParam0;
}

bool func_329(int iParam0)
{
	return func_262(Global_1572887->f_164.f_62, iParam0);
}

char* func_330()
{
	Var0 = { func_379(player_id()) };
	bVar7 = (Global_1572887->f_164.f_1 == 3 || Global_1572887->f_164.f_1 == 1);
	bVar8 = false;
	if (network_is_handle_valid(&(Global_1572887->f_164.f_65)) && network_is_handle_valid(&Var0))
	{
		bVar8 = network_are_handles_the_same(&(Global_1572887->f_164.f_65), &Var0);
	}
	if (func_329(1))
	{
		return "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_TARGET";
	}
	if (func_329(2))
	{
		return "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINER";
	}
	if (func_329(4))
	{
		return "NT_INV_INCOMPATIBLE_LOBBY_LOAD_FAILURE";
	}
	if (func_329(16))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_329(32))
	{
		return "NT_INV_INCOMPATIBLE_NOT_IN_SESSION";
	}
	if (func_329(8))
	{
		return "NT_INV_INCOMPATIBLE_INVITER_VANISHED";
	}
	if (func_329(64))
	{
		return "NT_INV_INCOMPATIBLE_ALREADY_IN_SESSION";
	}
	if (func_329(128))
	{
		return func_412(bVar7, "NT_INV_LEAVE_WARNING_JIP", "NT_INV_LEAVE_WARNING");
	}
	if (func_329(256))
	{
		return func_412(bVar7, "NT_INV_LEAVE_WARNING_POSSE_JIP", "NT_INV_LEAVE_WARNING_POSSE");
	}
	if (func_262(Global_1572887->f_164.f_84, 1))
	{
		return "NT_INV_INCOMPATIBLE_MULTIPLAYER_LOCKED";
	}
	if (func_262(Global_1572887->f_164.f_84, 1024))
	{
		return "NT_INV_INCOMPATIBLE_MULTIPLAYER_PRIVILEGE";
	}
	if (func_262(Global_1572887->f_164.f_84, 2048))
	{
		return "NT_INV_INCOMPATIBLE_USER_CONTENT_PRIVILEGE";
	}
	if (func_262(Global_1572887->f_164.f_84, 4096))
	{
		return "NT_INV_INCOMPATIBLE_COMMUNICATION_PRIVILEGE";
	}
	if (func_262(Global_1572887->f_164.f_84, 8192))
	{
		return "NT_INV_INCOMPATIBLE_INACTIVE_PRIVILEGE";
	}
	if (func_262(Global_1572887->f_164.f_84, 16384))
	{
		return "NT_INV_INCOMPATIBLE_USER_CONTENT_PRIVILEGE_REMOTE";
	}
	if (func_262(Global_1572887->f_164.f_84, 512))
	{
		return "NT_INV_INCOMPATIBLE";
	}
	if (func_262(Global_1572887->f_164.f_84, 8388608))
	{
		return "NT_INV_AIM";
	}
	if (func_262(Global_1572887->f_164.f_84, 2))
	{
		return "NT_INV_INCOMPATIBLE_LOCAL_NOT_IN_MULTIPLAYER";
	}
	if (func_262(Global_1572887->f_164.f_84, 4))
	{
		return "NT_INV_INCOMPATIBLE_NOT_IN_SESSION";
	}
	if (func_262(Global_1572887->f_164.f_84, 8))
	{
		return "NT_INV_POLICIES_NEED_ACCEPTING";
	}
	if (func_262(Global_1572887->f_164.f_84, 16))
	{
		return "NT_INV_POLICIES_DOWNLOAD_FAILED";
	}
	if (func_262(Global_1572887->f_164.f_84, 32))
	{
		return func_412(bVar8, "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_TARGET", "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINER");
	}
	if (func_262(Global_1572887->f_164.f_84, 64))
	{
		return func_412(bVar7, "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINING_PLAYER", "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINER");
	}
	if (func_262(Global_1572887->f_164.f_84, 128))
	{
		return "NT_INV_INCOMPATIBLE_JOIN_TO_LOCAL";
	}
	if (func_262(Global_1572887->f_164.f_84, 32768))
	{
		return func_412(bVar8, "NT_INV_INCOMPATIBLE_REP_TARGET", "NT_INV_INCOMPATIBLE_REP_JOINER");
	}
	if (func_262(Global_1572887->f_164.f_84, 65536))
	{
		return func_412(bVar7, "NT_INV_IN_SESSION", "NT_INV_INCOMPATIBLE_ALREADY_IN_SESSION");
	}
	if (func_262(Global_1572887->f_164.f_84, 262144))
	{
		return "NT_INV_INCOMPATIBLE_NOT_FRIENDS";
	}
	if (func_262(Global_1572887->f_164.f_84, 524288))
	{
		return "NT_INV_INCOMPATIBLE_PRIVATE_SESSION";
	}
	if (func_262(Global_1572887->f_164.f_84, 2097152))
	{
		return "NT_INV_INCOMPATIBLE_IN_PUBLIC_POKER";
	}
	if (func_262(Global_1572887->f_164.f_84, 4194304))
	{
	}
	if (func_262(Global_1572887->f_164.f_84, 256))
	{
	}
	if (func_262(Global_1572887->f_164.f_84, 1048576))
	{
		return "NT_INV_INCOMPATIBLE_BLOCKED_BY_JOIN_TARGET";
	}
	if (func_262(Global_1572887->f_164.f_84, 131072))
	{
	}
	if (Global_1572887->f_164.f_83 == 3)
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT_RESULT";
	}
	if (Global_1572887->f_164.f_83 == 4)
	{
		return "NT_INV_INCOMPATIBLE_ALREADY_IN_SESSION";
	}
	if (Global_1572887->f_164.f_83 == 5)
	{
		return "NT_INV_INCOMPATIBLE_INVITES_DISABLED";
	}
	if (Global_1572887->f_164.f_83 == 6)
	{
		return "NT_INV_INCOMPATIBLE_INVITES_DISABLED";
	}
	if (Global_1572887->f_164.f_83 == 7)
	{
		return "NT_INV_INCOMPATIBLE_DISCRIMINATOR";
	}
	if (Global_1572887->f_164.f_83 == 8)
	{
		return "NT_INV_INCOMPATIBLE_INSTANCED";
	}
	if (Global_1572887->f_164.f_83 == 9)
	{
		return "NT_INV_INCOMPATIBLE_VALIDATION_INVITEE";
	}
	if (Global_1572887->f_164.f_83 == 10)
	{
		return "NT_INV_INCOMPATIBLE_PRIVATE_SESSION";
	}
	if (Global_1572887->f_164.f_83 == 11)
	{
	}
	if (Global_1572887->f_164.f_83 == 12)
	{
		return "NT_INV_INCOMPATIBLE_INVITES_BLOCKED";
	}
	if (Global_1572887->f_164.f_83 == 13)
	{
		return "NT_INV_INCOMPATIBLE_JOIN_BLOCKED";
	}
	if (Global_1572887->f_164.f_83 == 14)
	{
		return "NT_INV_INCOMPATIBLE_HOST_INVITES_ONLY";
	}
	if (Global_1572887->f_164.f_83 == 15)
	{
		return "NT_INV_FAILED_SESSION_FULL";
	}
	if (Global_1572887->f_164.f_83 == 16)
	{
		return "NT_INV_FAILED_INVITER_CLEANED_UP";
	}
	if (Global_1572887->f_164.f_83 == 17)
	{
	}
	if (Global_1572887->f_164.f_83 == 18)
	{
		return "NT_INV_FAILED_NO_LONGER_IN_GANG";
	}
	if (Global_1572887->f_164.f_83 == 19)
	{
		return "NT_INV_FAILED_ADD_TO_GANG";
	}
	if (Global_1572887->f_164.f_83 == 20)
	{
		return "NT_INV_FAILED_GANG_CHANGED";
	}
	if (Global_1572887->f_164.f_83 == 21)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887->f_164.f_83 == 22)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887->f_164.f_83 == 23)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887->f_164.f_83 == 24)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887->f_164.f_83 == 25)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887->f_164.f_63 == 0)
	{
		return "NT_INV_INCOMPATIBLE_REASON_OTHER";
	}
	if (Global_1572887->f_164.f_63 == 1)
	{
		return "NT_INV_INCOMPATIBLE_REASON_SYSTEM_UPDATE";
	}
	if (Global_1572887->f_164.f_63 == 2)
	{
		return "NT_INV_INCOMPATIBLE_REASON_GAME_UPDATE";
	}
	if (Global_1572887->f_164.f_63 == 3)
	{
		return "NT_INV_INCOMPATIBLE_REASON_SIGNED_OUT";
	}
	if (Global_1572887->f_164.f_63 == 4)
	{
		return "NT_INV_INCOMPATIBLE_AGE";
	}
	if (Global_1572887->f_164.f_63 == 5)
	{
		return "NT_INV_INCOMPATIBLE_REASON_CONNECTION";
	}
	StringCopy(&cVar9, "NetInvUnkErr-", 64);
	StringConCat(&cVar9, "eUIFlags=", 64);
	StringIntConCat(&cVar9, Global_1572887->f_164.f_62, 64);
	StringConCat(&cVar9, ",eResponseFlags=", 64);
	StringIntConCat(&cVar9, Global_1572887->f_164.f_84, 64);
	StringConCat(&cVar9, ",nResult=", 64);
	StringIntConCat(&cVar9, Global_1572887->f_164.f_83, 64);
	return func_413(&cVar9, 109029619);
}

void func_331(bool bParam0)
{
	if (((bParam0 && network_is_game_in_progress()) && !network_is_in_tutorial_session()) && !func_340(1))
	{
		network_start_solo_tutorial_session();
		func_333(1);
	}
	else if (((!bParam0 && network_is_game_in_progress()) && network_is_in_tutorial_session()) && func_340(1))
	{
		network_end_tutorial_session();
		func_341(1);
	}
}

int func_332()
{
	return Global_1051081->f_11;
}

void func_333(int iParam0)
{
	func_381(&(Global_1572887->f_164.f_61), iParam0);
}

bool func_334(int iParam0)
{
	return func_391(1, iParam0);
}

char* func_335(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_414(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_336(struct<17> Param0, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, int iParam22)
{
	return func_262(Param0.f_16, iParam22);
}

bool func_337()
{
	return Global_1898164->f_163;
}

void func_338(int iParam0)
{
	func_381(&(Global_1572887->f_164.f_62), iParam0);
}

bool func_339()
{
	return (get_game_timer() - Global_1572887->f_164.f_60) > Global_1899378->f_2.f_15;
}

bool func_340(int iParam0)
{
	return func_262(Global_1572887->f_164.f_61, iParam0);
}

void func_341(int iParam0)
{
	func_415(&(Global_1572887->f_164.f_61), iParam0);
}

void func_342()
{
	Global_1572887->f_164.f_87 = 0;
}

struct<22> func_343()
{
	return Global_1572887->f_164.f_27;
}

bool func_344()
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

void func_345()
{
	func_63(64);
	func_65(-1050153785, 1024);
	func_20(3);
	do_screen_fade_out(0);
}

bool func_346()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

int func_347()
{
	return Global_1572887->f_164.f_1;
}

int func_348()
{
	if (func_339())
	{
		func_338(16);
		return 2;
	}
	if (!func_394())
	{
		func_338(2);
		return 2;
	}
	return func_416();
}

void func_349(bool bParam0)
{
	if (func_417())
	{
		Global_1357509 = 1;
	}
	if (func_418(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

void func_350()
{
	iVar0 = player_ped_id();
	iVar1 = get_mount(iVar0);
	if (does_entity_exist(iVar1) && !is_entity_dead(iVar1))
	{
		task_dismount_animal(iVar0, 0, 0, 0, 0, 0);
	}
}

void func_351(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_419(iParam0);
	if (!func_420(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_421(128) && !func_422(18))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_423() == 4)
	{
		func_424(17);
	}
	func_425(512);
}

void func_352(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (bParam0)
		{
			_hide_hud_component(128623374);
			toggle_paused_renderphases(false);
		}
		else
		{
			_display_hud_component(128623374);
			toggle_paused_renderphases(true);
		}
	}
}

void func_353()
{
	if (_get_global_block_can_be_accessed(1) && func_426(32768))
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

void func_354()
{
	iVar0 = get_hash_key("net_ugc_end_flow");
	_0x7423f7835770f619(iVar0);
	iVar0 = get_hash_key("mc_transition_results");
	_0x7423f7835770f619(iVar0);
	iVar0 = get_hash_key("mc_transition_cutscene");
	_0x7423f7835770f619(iVar0);
	iVar0 = get_hash_key("net_mc_vs_mission_intro");
	_0x7423f7835770f619(iVar0);
}

struct<9> func_355()
{
	return Global_1572887->f_164.f_2;
}

struct<16> func_356()
{
	return Global_1572887->f_164.f_11;
}

void func_357(vector3 vParam0)
{
	vVar2 = { vParam0 };
	iVar0 = func_427(vParam0);
	if (iVar0 != -1)
	{
		iVar1 = (*Global_1888801)[iVar0]->f_4;
		if (_does_volume_exist(iVar1))
		{
			vVar2 = { _0xf70f00013a62f866(iVar1) };
		}
	}
	vVar5.x = get_random_float_in_range(-3f, 3f);
	vVar5.f_1 = get_random_float_in_range(-3f, 3f);
	vVar2 = { vVar2 + vVar5 };
	vParam0 = { vParam0 + vVar5 };
	func_428(vVar2, 0f, vParam0, 0f, -1082130432, -1082130432, 1, 1, 1, 1);
	func_429(0);
}

void func_358(int iParam0)
{
	Global_1572887->f_164.f_59 = iParam0;
}

int func_359()
{
	if (Global_1572887->f_12 == -1)
	{
		return 0;
	}
	return Global_1058888->f_3;
}

int func_360()
{
	if (Global_1572887->f_12 == -1)
	{
		return 0;
	}
	return Global_1058888->f_5;
}

int func_361()
{
	return &Global_262150;
}

void func_362(bool bParam0)
{
	if (!bParam0)
	{
		func_424(18);
	}
	else
	{
		func_430(18);
	}
}

int func_363()
{
	return Global_1572887->f_164.f_64;
}

int func_364(int iParam0)
{
	return iParam0 & 31;
}

bool func_365()
{
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0 = { func_431() };
	iVar10 = func_432();
	if (network_is_player_active(iVar10))
	{
		iVar11 = iVar10;
		Var0 = func_433(iVar11);
		Var0.f_1 = func_434(iVar11);
		Var0.f_2 = func_435(iVar11);
		Var0.f_3 = func_436(iVar11);
		Var0.f_4 = func_437(iVar11);
	}
	if (!Var0)
	{
		return false;
	}
	switch (Var0.f_1)
	{
		case 2:
			if (func_313(iVar10, 4096))
			{
				return false;
			}
			break;
	}
	func_438(Var0.f_1, Var0.f_2, Var0.f_3, Var0.f_4, 0);
	return true;
}

void func_366()
{
	Global_1572887->f_164.f_87 = 1;
}

bool func_367(int iParam0, bool bParam1)
{
	iVar0 = network_player_id_to_int();
	if (Global_262777[iVar0] <= 0)
	{
		return false;
	}
	if (Global_262777[iVar0] > 2)
	{
		return false;
	}
	if (&Global_1051043 != -1)
	{
		if (iParam0 != &Global_1051043)
		{
			return false;
		}
	}
	if (!bParam1 && func_439(0) == 1)
	{
		return false;
	}
	if (func_440(255))
	{
		return false;
	}
	if (_network_is_player_index_valid((*Global_262777)[iVar0]->f_1) && network_is_player_active((*Global_262777)[iVar0]->f_1))
	{
		return false;
	}
	if ((*Global_262777)[iVar0]->f_1.f_16 == 0)
	{
		return true;
	}
	return false;
}

struct<70> func_368(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1225639->f_10;
	}
	return (*Global_262777)[iParam0]->f_1;
}

int func_369(int iParam0, int iParam1)
{
	uVar0 = func_441(iParam0, iParam1);
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!_0x72b2e00c9bac6789(&uVar0, iVar2))
		{
		}
		else
		{
			iVar1 = int_to_playerindex(iVar2);
			if (func_312(iVar1) == 0)
			{
				return 1;
			}
		}
		iVar2++;
	}
	iVar3 = func_442(uVar0, 8192);
	iVar4 = func_442(uVar0, 65536);
	bVar5 = func_442(uVar0, 4096);
	if ((iVar3 || iVar4) && !bVar5)
	{
		return 2;
	}
	return 3;
}

void func_370(int iParam0)
{
	(*Global_262777)[&Global_1225639]->f_72 = ((*Global_262777)[&Global_1225639]->f_72 || iParam0);
}

bool func_371(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	if (!func_367((*Global_262777)[iParam0]->f_1.f_60, func_443(&((*Global_262777)[iParam0]->f_1), 32768)))
	{
		return false;
	}
	if (func_444(&((*Global_262777)[iParam0]->f_1)))
	{
		return false;
	}
	iVar0 = network_player_id_to_int();
	(*Global_262777)[iVar0]->f_1 = iParam0;
	(*Global_262777)[iVar0]->f_1.f_19 = get_network_time_accurate();
	_0x5a91bcef74944e93(iParam0, 30f);
	return true;
}

void func_372(int iParam0)
{
	_0xc08aff658b2e51da(&iVar0);
	if (iVar0 != 0)
	{
		_0xc08bff658b2e51da(0);
	}
	_0x0a04a07bc3074edb(iParam0);
}

bool func_373()
{
	iVar0 = get_player_ped(Global_1572887->f_164.f_59);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (is_entity_dead(iVar0))
	{
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
	if (!func_445(&vVar8, &fVar11, 0))
	{
		vVar8 = { (Global_1058888->f_43923.f_283[get_random_int_in_range(0, 16)])->f_2 };
	}
	func_428(vVar1, fVar11, vVar8, fVar11, 5f, 20f, 1, 1, 1, 1);
	return true;
}

bool func_374()
{
	if (func_446())
	{
		return true;
	}
	if (Global_1572887->f_164.f_81 == 0)
	{
		return false;
	}
	if (func_363() != 2)
	{
		return false;
	}
	if (Global_1572887->f_164.f_83 != 2)
	{
		return false;
	}
	if (func_262(Global_1572887->f_164.f_84, 65536))
	{
		return false;
	}
	if (!func_394())
	{
		return false;
	}
	return true;
}

int func_375(int iParam0, int iParam1, int iParam2)
{
	if (Global_1572887->f_252.f_4 != 0)
	{
		return 0;
	}
	if (Global_1572887->f_164 > 0 && Global_1572887->f_164 < 17)
	{
		return 0;
	}
	Global_1572887->f_252.f_4 = 2;
	Global_1572887->f_252.f_5 = (Global_1572887->f_252.f_5 || iParam1);
	Global_1572887->f_252.f_6 = iParam0;
	Global_1572887->f_252.f_13 = iParam2;
	Global_1572887->f_252.f_14 = 0;
	return 1;
}

void func_376(int iParam0)
{
	if (iParam0 != 0)
	{
		func_447(iParam0, -1);
	}
	func_63(4);
	func_20(1);
}

void func_377(bool bParam0, bool bParam1)
{
	if (func_448(255) == 4)
	{
		return;
	}
	if (func_449(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_424(0);
	}
	else
	{
		if (bParam1)
		{
			func_351(0, 0, 0, 1);
		}
		func_430(0);
		func_450(&(Global_1109400->f_389));
		Global_1109400->f_389 = 0f;
		Global_1109400->f_389.f_5 = 1;
		Global_1109400->f_389.f_16 = 0;
		Global_1109400->f_389.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1109400->f_389.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109400->f_389.f_17 = { Global_1899378->f_23.f_1, Global_1899378->f_23.f_1, Global_1899378->f_23.f_1 };
		Global_1109400->f_389.f_17.f_9 = -432403087;
		func_451(&(Global_1109400->f_428));
		Global_1109400->f_428.f_6 = { Global_1109400->f_389.f_17.f_6 };
		Global_1109400->f_428 = Global_1109400->f_389;
		Global_1109400->f_428.f_5 = 1;
		if (bParam1)
		{
			Global_1109400->f_22.f_16 = 0;
			Global_1109400->f_22.f_17 = 0;
		}
	}
	func_452(Global_1109400->f_389, 42);
	func_453(Global_1109400->f_428, 42);
}

bool func_378(int iParam0)
{
	if (!&Global_1899245->f_88[iParam0])
	{
		if (!func_454(Global_1899245->f_3[iParam0]))
		{
			func_241(Global_1899245->f_3[iParam0], 0, 0);
		}
		Global_1899245->f_88[iParam0] = 1;
	}
	else if (func_60(Global_1899245->f_3[iParam0], func_455(iParam0), 0))
	{
		func_59(Global_1899245->f_3[iParam0]);
		return true;
	}
	return false;
}

struct<7> func_379(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

bool func_380(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return network_is_handle_valid(&uParam0);
}

void func_381(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_382(var uParam0, char* sParam1)
{
	_0x8e8ffb9e4ad051d2(uParam0, 436, sParam1, 26);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".txtHorseName", 64);
	_0x186608a2ac6f9e88(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eHorseBreed", 64);
	_0xb25b5a375be5be26(&(uParam0->f_8), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eHorseModel", 64);
	_0xb25b5a375be5be26(&(uParam0->f_9), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eGender", 64);
	_0xb25b5a375be5be26(&(uParam0->f_10), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eLossType", 64);
	_0xb25b5a375be5be26(&(uParam0->f_11), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iTimeOfLoss", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_12), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".todTimeOfLoss", 64);
	_0xb25b5a375be5be26(&(uParam0->f_13), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eSlotState", 64);
	_0xb25b5a375be5be26(&(uParam0->f_14), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sCarriedData", 64);
	_0x81f4e92be3958364(&(uParam0->f_15), 283, &cVar0);
	iVar16 = 0;
	while (iVar16 < 3)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		func_456(uParam0->f_15[iVar16], &Var8);
		iVar16++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sPeltSkinData", 64);
	_0x81f4e92be3958364(&(uParam0->f_298), 58, &cVar0);
	iVar16 = 0;
	while (iVar16 < 57)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		func_383(uParam0->f_298[iVar16], &Var8);
		iVar16++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sVisualPeltSkinInfo", 64);
	_0x81f4e92be3958364(&(uParam0->f_356), 16, &cVar0);
	iVar16 = 0;
	while (iVar16 < 3)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		func_384(uParam0->f_356[iVar16], &Var8);
		iVar16++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sBondingData", 64);
	func_457(&(uParam0->f_372), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sHorseCoreData", 64);
	_0x81f4e92be3958364(&(uParam0->f_398), 9, &cVar0);
	iVar16 = 0;
	while (iVar16 < 2)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		func_458(uParam0->f_398[iVar16], &Var8);
		iVar16++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sEfficiencyData", 64);
	_0x81f4e92be3958364(&(uParam0->f_407), 13, &cVar0);
	iVar16 = 0;
	while (iVar16 < 3)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		func_459(uParam0->f_407[iVar16], &Var8);
		iVar16++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sWrithingData", 64);
	func_460(&(uParam0->f_420), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sStableOwnedData", 64);
	func_461(&(uParam0->f_422), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sHorseBurdenData", 64);
	func_462(&(uParam0->f_425), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".vLastCoord", 64);
	func_152(&(uParam0->f_427), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".fLastHeading", 64);
	_0x35defecae36d4fae(&(uParam0->f_430), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iTimeStampDismounted", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_431), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iTimeStampAcquired", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_432), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bHasDefaultSaddle", 64);
	_0xbb7f4273c186bc4b(&(uParam0->f_433), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bPlayerPurchasedHorse", 64);
	_0xbb7f4273c186bc4b(&(uParam0->f_434), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bPlayerBrokeHorse", 64);
	_0xbb7f4273c186bc4b(&(uParam0->f_435), &cVar0);
	_0xe0b45e983bfc0768();
}

void func_383(var uParam0, char* sParam1)
{
	_0x443174c20b8b9e7f(uParam0, 1, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iCount", 64);
	_0x529b9ccd0972af4d(uParam0, &cVar0);
	_0xe0b45e983bfc0768();
}

void func_384(var uParam0, char* sParam1)
{
	_0x443174c20b8b9e7f(uParam0, 5, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".SatchelItem", 64);
	_0xb25b5a375be5be26(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".TextureLookupHash", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_1), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".TextureLookupTint", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_2), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".UnusedPad0", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_3), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".UnusedPad1", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_4), &cVar0);
	_0xe0b45e983bfc0768();
}

void func_385(var uParam0, struct<8> Param1)
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

void func_386(var uParam0)
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

void func_387(var uParam0, char* sParam1)
{
	_0x443174c20b8b9e7f(uParam0, 49, sParam1);
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
	_0x81f4e92be3958364(&(uParam0->f_4), 29, &cVar1);
	iVar0 = 0;
	while (iVar0 <= 27)
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
	StringConCat(&cVar1, "_sEfficiencyData_array", 64);
	_0x81f4e92be3958364(&(uParam0->f_33), 13, &cVar1);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0x443174c20b8b9e7f(uParam0->f_33[iVar0], 4, &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_iValue_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0x529b9ccd0972af4d(uParam0->f_33[iVar0], &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_fValueBuffer_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0x35defecae36d4fae(&(uParam0->f_33[iVar0]->f_1), &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_fDrainBuffer_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0x35defecae36d4fae(&(uParam0->f_33[iVar0]->f_2), &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_iLastGameTime_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_0x529b9ccd0972af4d(&(uParam0->f_33[iVar0]->f_3), &cVar1);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_vLastHitch", 64);
	func_152(&(uParam0->f_46), &cVar1);
	_0xe0b45e983bfc0768();
}

void func_388(var uParam0, struct<8> Param1)
{
	Var17 = { Param1 };
	_0x443174c20b8b9e7f(uParam0, 326, &Param1);
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
	_0x81f4e92be3958364(&(uParam0->f_5), 321, &Var17);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		Var1 = { Param1 };
		StringConCat(&Var1, "_Layer", 64);
		StringIntConCat(&Var1, iVar0, 64);
		_0x443174c20b8b9e7f(uParam0->f_5[iVar0], 16, &Var1);
		Var9 = { Var1 };
		StringConCat(&Var9, "_LayerPriority", 64);
		_0x529b9ccd0972af4d(uParam0->f_5[iVar0], &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_Albedo", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_5[iVar0]->f_1), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_Normal", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_5[iVar0]->f_2), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_Material", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_5[iVar0]->f_3), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_SheetGridIndex", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_5[iVar0]->f_4), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_ModTexture", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_5[iVar0]->f_5), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_ModChannel", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_5[iVar0]->f_6), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_Palette", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_5[iVar0]->f_7), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_tint0", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_5[iVar0]->f_8), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_tint1", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_5[iVar0]->f_9), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_tint2", 64);
		_0x529b9ccd0972af4d(&(uParam0->f_5[iVar0]->f_10), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_TexAlpha", 64);
		_0x35defecae36d4fae(&(uParam0->f_5[iVar0]->f_11), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_ModAlpha", 64);
		_0x35defecae36d4fae(&(uParam0->f_5[iVar0]->f_12), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_TexRough", 64);
		_0x35defecae36d4fae(&(uParam0->f_5[iVar0]->f_13), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_BlendType", 64);
		_0xb25b5a375be5be26(&(uParam0->f_5[iVar0]->f_14), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_LayerType", 64);
		_0xb25b5a375be5be26(&(uParam0->f_5[iVar0]->f_15), &Var9);
		_0xe0b45e983bfc0768();
		iVar0++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

void func_389(var uParam0, struct<8> Param1)
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

char* func_390(int iParam0)
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

bool func_391(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_463(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_464())
	{
		return func_463(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_463(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

int func_392(int iParam0)
{
	if (!func_465(iParam0))
	{
		return -1;
	}
	return func_466(iParam0);
}

void func_393(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_318() - fParam1);
	func_467(uParam0, 1);
	func_468(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_394()
{
	if (Global_1572887->f_12 == 0)
	{
		if (func_469())
		{
			return true;
		}
	}
	return false;
}

void func_395(var uParam0)
{
	iVar0 = _0x27b1ae4d8c652f08(uParam0);
	StringCopy(&(Var1.f_7), _0xe59f4924bd3a718d(iVar0), 64);
	_0x16efb123c4451032(iVar0, &Var1);
	StringCopy(&(Var1.f_17), _0xe79ba3bc265895da(iVar0), 24);
	Var1.f_15 = uParam0;
	Var1.f_21 = _0x5ed39da62beb1330(iVar0);
	Var23.f_2 = -1;
	Var23.f_3 = -1;
	Var23.f_4 = -1;
	func_470(&Var1, &Var23);
}

void func_396(bool bParam0)
{
	if (bParam0)
	{
		func_333(128);
	}
	if (func_48() == 0)
	{
		func_72(2);
	}
	func_249(1);
}

int func_397(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_265238->f_2)
	{
		if (&Global_265238->f_43405[iVar0] == iParam0)
		{
			return iVar0;
		}
		if (Global_265238->f_4[iVar0]->f_41 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_398(int iParam0)
{
	switch (iParam0)
	{
		case -1759663922:
			return "UGC_MST_STRY";
		case 35466036:
			return "UGC_MST_ADV";
		case 868063036:
			return "UGC_MST_LEG";
		case 1165474480:
			return "UGC_MST_LEG";
		case 784676450:
			return "UGC_MST_CTL";
		case -1593102174:
			return "UGC_MST_SGM";
		case 1612828680:
			return "UGC_MST_ALMD";
		case 682133028:
			return "UGC_MST_CHS";
		case 605457060:
			return "UGC_MST_FDH";
		case -1545357213:
			return "UGC_MST_HTF";
		case 1053257180:
			return "UGC_MST_HTS";
		case 916298691:
			return "UGC_MST_HEMD";
		case 1692096074:
			return "UGC_MST_MWTD";
		case -471095244:
			return "UGC_MST_RNSK";
		case -1195756641:
			return "UGC_MST_SEIG";
		case 33547358:
			return "UGC_MST_SLSHR";
		case -557106090:
			return "UGC_MST_TATK";
		case -1824689524:
			return "UGC_MST_SPLY";
		case 858456953:
			return "UGC_MST_RAID";
		case -1768719739:
			return "UGC_MST_PLNDR";
		case 1335816198:
			return "UGC_MST_KOTK";
		case 1046222216:
			return "UGC_MST_DVIP";
		case -1870450715:
			return "UGC_MST_BSMN";
		case -450654273:
			return "UGC_MST_CPWGN";
		case -29139709:
			return "UGC_MST_LNDG";
		case 534981680:
			return "UGC_MST_ESCF";
		case -915869673:
			return "UGC_MST_TTYG";
		case -360644098:
			return "UGC_MST_TTYT";
		case -1528996533:
			return "UGC_MST_HTP";
		case -650766784:
			return "UGC_MST_SRMBL";
		case 1668321463:
			return "UGC_MST_SMGRN";
		case 344911429:
			return "UGC_MST_STNDF";
		case -1854465123:
			return "UGC_MST_HLDOT";
		case -1027343918:
			return "UGC_MST_BLDG";
		case -667027782:
			return "UGC_MST_ARWBL";
		case -806226507:
			return "UGC_MST_BRWL";
		case 1520184724:
			return "UGC_MST_AFGPO";
		case 449718152:
			return "UGC_MST_AFGPP";
		case -872811084:
			return "UGC_MST_GRDN";
		case -528055156:
			return "UGC_MST_DUEL";
		case -707139085:
			return "UGC_MST_FRHM";
		case -1861365556:
			return "UGC_MST_PNTTY";
		case -1422136853:
			return "UGC_MST_RVA";
		case -87902341:
			return "UGC_MST_BAO";
		case 1424000300:
			return "UGC_MST_MNTM";
		case 249583080:
			return "UGC_MST_BTYV";
		case -1436089230:
			return "UGC_MST_TTYTR";
		case -825872693:
			return "UGC_MST_FRSTT";
		case -2088359027:
			return "UGC_MST_MNYG";
		case -2083980169:
			return "UGC_MST_HDLSH";
		case -1084202760:
			return "UGC_MST_PWRBL";
		case 1575764607:
			return "UGC_MST_HRSR";
		case 733436798:
			return "UGC_MST_HRSP";
		case 1419108180:
			return "UGC_MST_PWRW";
		case 313483818:
			return "UGC_MST_JST";
		case -1311152903:
			return "UGC_MST_LOOT";
		case 683859288:
			return "UGC_MST_HEMH";
		case -1725070894:
			return "UGC_MST_PRDTR";
		case -1429156655:
			return "UGC_MST_RNGM";
		case -1735381469:
			return "UGC_MST_WWR";
		case 1934718563:
			return "UGC_MST_BRP";
		case 1682048147:
			return "UGC_MST_STGP";
		case 1430637396:
			return "UGC_MST_MYR";
		case -1482947946:
			return "UGC_MST_WAR";
		case -1495857325:
			return "UGC_MST_DSTR";
		case 1078150940:
			return "UGC_MST_AWIP";
		default:
			break;
	}
	return "Invalid MISSION_SUB_TYPE";
}

char* func_399(int iParam0)
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

char* func_400(int iParam0)
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

bool func_401()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

var func_402(struct<26> Param0, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43)
{
	func_471();
	iVar0 = func_472();
	iVar1 = Global_1898068->f_6;
	iVar2 = (iVar1 + Param0.f_16);
	_int_to_string(iVar1, "%i", &cVar11);
	Global_1935689->f_1225.f_1208++;
	StringCopy(&cVar3, "Invite_Root_", 64);
	StringConCat(&cVar3, &cVar11, 64);
	StringConCat(&cVar3, "_", 64);
	StringIntConCat(&cVar3, Global_1935689->f_1225.f_1208, 64);
	func_473(Global_1935689->f_1225.f_5[iVar0], Global_1935689->f_1225.f_2, cVar3, Param0);
	Global_1935689->f_1225.f_5[iVar0]->f_26 = _databinding_add_data_int(&(Global_1935689->f_1225.f_5[iVar0]), func_474(76), Global_1935689->f_1225.f_1208);
	Global_1935689->f_1225.f_5[iVar0]->f_28 = _databinding_add_data_bool(&(Global_1935689->f_1225.f_5[iVar0]), func_474(77), Param0.f_21);
	Global_1935689->f_1225.f_5[iVar0]->f_29 = _databinding_add_data_bool(&(Global_1935689->f_1225.f_5[iVar0]), func_474(78), 0);
	Global_1935689->f_1225.f_5[iVar0]->f_22 = _databinding_add_data_bool(&(Global_1935689->f_1225.f_5[iVar0]), func_474(62), Param0.f_21);
	Global_1935689->f_1225.f_5[iVar0]->f_25 = _databinding_add_data_bool(&(Global_1935689->f_1225.f_5[iVar0]), func_474(70), Param0.f_24);
	if (Param0.f_24)
	{
		Global_1935689->f_1225.f_5[iVar0]->f_24 = _databinding_add_data_string(&(Global_1935689->f_1225.f_5[iVar0]), func_474(68), Param0.f_23);
		Global_1935689->f_1225.f_5[iVar0]->f_23 = _databinding_add_data_int(&(Global_1935689->f_1225.f_5[iVar0]), func_474(71), Param0.f_22);
	}
	Global_1935689->f_1225.f_5[iVar0]->f_18 = _databinding_add_data_int(&(Global_1935689->f_1225.f_5[iVar0]), func_474(79), Param0.f_17);
	Global_1935689->f_1225.f_5[iVar0]->f_19 = _databinding_add_data_int(&(Global_1935689->f_1225.f_5[iVar0]), func_474(50), Param0.f_18);
	Global_1935689->f_1225.f_5[iVar0]->f_20 = _databinding_add_data_int(&(Global_1935689->f_1225.f_5[iVar0]), func_474(51), Param0.f_18.f_1);
	Global_1935689->f_1225.f_5[iVar0]->f_21 = _databinding_add_data_gang_id(&(Global_1935689->f_1225.f_5[iVar0]), func_474(80), Param0.f_18.f_2);
	Global_1935689->f_1225.f_5[iVar0]->f_17 = _databinding_add_data_int(&(Global_1935689->f_1225.f_5[iVar0]), func_474(81), iVar2);
	func_475(Global_1935689->f_1225.f_1207 + 1);
	if (Global_1935689->f_1225.f_1208 == 2147483647)
	{
		Global_1935689->f_1225.f_1208 = 0;
	}
	if (func_476() && func_477(Param0.f_17))
	{
		if (func_401())
		{
			Param0.f_25 = 0;
		}
		else
		{
			Param0.f_25 = 3;
		}
		Param0.f_25.f_11 = 778915895;
		Param0.f_25.f_12 = &Global_1935689->f_1225.f_5[iVar0];
		iVar15 = func_478(&(Param0.f_25));
		Global_1935689->f_1225.f_5[iVar0]->f_27 = _databinding_add_data_int(&(Global_1935689->f_1225.f_5[iVar0]), func_474(83), iVar15);
	}
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1935689->f_1225.f_3, 0, "pm_invite_item", &(Global_1935689->f_1225.f_5[iVar0]));
	return &(Global_1935689->f_1225.f_5[iVar0]);
}

bool func_403()
{
	return Global_1572887->f_164 > 0;
}

void func_404(var uParam0)
{
	func_479(uParam0);
	func_479(&(uParam0->f_7));
}

void func_405(var uParam0)
{
	Global_1572887->f_164.f_11 = { *uParam0 };
}

void func_406(int iParam0, int iParam1)
{
	iVar0 = 39;
	while (iVar0 >= 0)
	{
		Var2 = { *Global_1935689->f_1225.f_5[iVar0] };
		iVar1 = _databinding_read_data_int(Var2.f_18);
		iVar32 = iVar1;
		if (iParam0 != iVar32)
		{
		}
		else
		{
			iVar1 = _databinding_read_data_int(Var2.f_19);
			if (iParam1 != iVar1)
			{
			}
			else
			{
				func_480(Var2);
			}
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_407(int iParam0)
{
}

void func_408(var uParam0)
{
	func_479(uParam0);
}

void func_409(var uParam0)
{
	Global_1572887->f_164.f_2 = { *uParam0 };
}

bool func_410(struct<9> Param0, int iParam9)
{
	return func_262(Param0.f_8, iParam9);
}

void func_411(var uParam0)
{
}

char* func_412(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

char* func_413(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_414(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_414(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

void func_415(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_416()
{
	if (Global_1572887->f_164.f_84 != 0)
	{
		return 2;
	}
	if (Global_1572887->f_164.f_63 != -1)
	{
		return 2;
	}
	if (Global_1572887->f_164.f_83 > 2)
	{
		return 2;
	}
	if (Global_1572887->f_164.f_83 == 2)
	{
		Global_1572887->f_164.f_83 = 0;
		return 1;
	}
	return 0;
}

bool func_417()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_418(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_481(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_419(int iParam0)
{
	Global_1109400->f_22.f_10 = iParam0;
}

bool func_420(int iParam0)
{
	return (Global_1109400->f_22.f_6 && iParam0) != 0;
}

bool func_421(int iParam0)
{
	return (Global_1109400->f_22.f_8 && iParam0) != 0;
}

bool func_422(int iParam0)
{
	return (Global_1109400->f_4[Global_1109914[iParam0]] && (*Global_1109914)[iParam0]->f_1) == (*Global_1109914)[iParam0]->f_1;
}

int func_423()
{
	if (&Global_1109400 <= 5)
	{
		return &Global_1109400;
	}
	if (&Global_1109400 <= 21)
	{
		return 4;
	}
	if (&Global_1109400 <= 24)
	{
		return 3;
	}
	return 25;
}

int func_424(int iParam0)
{
	if (func_482(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_425(int iParam0)
{
	Global_1109400->f_22.f_8 = (Global_1109400->f_22.f_8 || iParam0);
}

bool func_426(int iParam0)
{
	return (Global_265238->f_79565.f_278 && iParam0) != 0;
}

int func_427(vector3 vParam0)
{
	iVar0 = -1;
	fVar1 = 999999.9f;
	if (func_449(vParam0))
	{
		return -1;
	}
	iVar3 = 0;
	while (iVar3 < Global_1894899->f_161)
	{
		iVar2 = &Global_1894899->f_10[iVar3];
		fVar4 = vdist2(vParam0, (*Global_1888801)[iVar2]->f_6);
		if (fVar4 < fVar1)
		{
			iVar0 = iVar2;
			fVar1 = fVar4;
		}
		iVar3++;
	}
	if (func_483(iVar0))
	{
	}
	else
	{
		iVar0 = -1;
	}
	return iVar0;
}

void func_428(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, float fParam9, bool bParam10, int iParam11, int iParam12, int iParam13)
{
	if (func_448(255) == 4)
	{
		return;
	}
	if (func_449(vParam0))
	{
		return;
	}
	if (fParam8 < 0f && fParam9 < 0f)
	{
		fParam8 = Global_1899378->f_23;
		fParam9 = Global_1899378->f_23.f_1;
	}
	if (fParam8 == 0f && fParam9 == 0f)
	{
		fParam8 = Global_1899378->f_23;
		fParam9 = Global_1899378->f_23.f_1;
	}
	if (fParam9 < fParam8)
	{
		fParam8 = Global_1899378->f_23;
		fParam9 = Global_1899378->f_23.f_1;
	}
	if (bParam10)
	{
		func_351(0, 0, 0, 1);
	}
	func_430(0);
	func_430(3);
	Global_1109400->f_458 = iParam11;
	Global_1109400->f_459 = iParam12;
	Global_1109400->f_460 = iParam13;
	func_450(&(Global_1109400->f_389));
	Global_1109400->f_389 = fParam3;
	Global_1109400->f_389.f_5 = 1;
	Global_1109400->f_389.f_17.f_6 = { vParam0 };
	Global_1109400->f_389.f_17.f_3 = { 0f, 0f, 0f };
	Global_1109400->f_389.f_17 = { fParam9, fParam9, fParam9 };
	Global_1109400->f_389.f_17.f_9 = -432403087;
	if (fParam8 > 1f)
	{
		Global_1109400->f_389.f_16 = 1;
		Global_1109400->f_389.f_6.f_6 = { Global_1109400->f_389.f_17.f_6 };
		Global_1109400->f_389.f_6.f_3 = { 0f, 0f, 0f };
		Global_1109400->f_389.f_6 = { fParam8, fParam8, fParam8 };
		Global_1109400->f_389.f_6.f_9 = -432403087;
	}
	func_451(&(Global_1109400->f_428));
	Global_1109400->f_428.f_6 = { vParam4 };
	Global_1109400->f_428 = fParam7;
	Global_1109400->f_428.f_5 = 1;
	Global_1109400->f_22.f_16 = 0;
	Global_1109400->f_22.f_17 = 0;
	func_452(Global_1109400->f_389, 42);
	func_453(Global_1109400->f_428, 42);
}

void func_429(bool bParam0)
{
	if (!bParam0)
	{
		func_424(14);
	}
	else
	{
		func_430(14);
	}
}

int func_430(int iParam0)
{
	if (func_484(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

struct<10> func_431()
{
	return Global_1572887->f_164.f_49;
}

int func_432()
{
	return Global_1572887->f_164.f_59;
}

var func_433(int iParam0)
{
	return (*Global_1055058)[iParam0]->f_39;
}

var func_434(int iParam0)
{
	return (*Global_1055058)[iParam0]->f_39.f_1;
}

var func_435(int iParam0)
{
	return (*Global_1055058)[iParam0]->f_39.f_2;
}

var func_436(int iParam0)
{
	return (*Global_1055058)[iParam0]->f_39.f_3;
}

var func_437(int iParam0)
{
	return (*Global_1055058)[iParam0]->f_39.f_4;
}

int func_438(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	if (!func_485(iParam0, iParam1))
	{
		return 0;
	}
	func_486(iParam0, iParam1, uParam2);
	func_487(iParam3);
	func_488(iParam4);
	func_489(9);
	func_490();
	if (func_465(iParam3))
	{
		func_491(iParam3);
	}
	return 1;
}

int func_439(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

bool func_440(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		iParam0 = player_id();
	}
	iVar0 = iParam0;
	if (func_312(iParam0) > 2)
	{
		return true;
	}
	if ((*Global_262777)[iVar0]->f_1.f_16 != 0)
	{
		return true;
	}
	if ((*Global_262777)[iVar0]->f_1 != 255)
	{
		return true;
	}
	if ((*Global_262777)[iVar0]->f_1.f_18 != 2147483647)
	{
		return true;
	}
	return false;
}

var func_441(int iParam0, int iParam1)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (iParam0 == 2147483647)
	{
		return uVar0;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (&Global_262150->f_1[iVar1] == iParam0 && (iParam1 == 0 || Global_262150->f_1[iVar1]->f_1 == iParam1))
		{
			return Global_262150->f_1[iVar1]->f_2;
		}
		iVar1++;
	}
	return uVar0;
}

int func_442(var uParam0, int iParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!&Global_1225639->f_21[iVar0])
		{
		}
		else if (!_0x72b2e00c9bac6789(&uParam0, iVar0))
		{
		}
		else if (((*Global_262777)[iVar0]->f_72 && iParam1) != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_443(var uParam0, int iParam1)
{
	return (uParam0->f_20 && iParam1) != 0;
}

bool func_444(var uParam0)
{
	uVar0 = func_441(uParam0->f_18, uParam0->f_17);
	iVar1 = count_player_bits(&uVar0);
	iVar4 = network_player_id_to_int();
	iVar2 = 0;
	while (iVar2 < func_492())
	{
		iVar3 = func_493(iVar2);
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

bool func_445(var uParam0, float fParam1, bool bParam2)
{
	iVar0 = get_random_int_in_range(0, 16);
	if (bParam2)
	{
		iVar1 = 0;
		iVar2 = -1;
		fVar3 = 0f;
		iVar1 = 0;
		while (iVar1 <= 15)
		{
			fVar4 = vdist(Global_1225639->f_16, Global_1058888->f_43923.f_283[iVar1]->f_2);
			if (fVar4 < fVar3 || iVar2 == -1)
			{
				iVar2 = iVar1;
				fVar3 = fVar4;
			}
			iVar1++;
		}
		iVar0 = iVar2;
	}
	iVar0 = &Global_1058888->f_43923.f_283[iVar0];
	iVar5 = func_494(iVar0);
	if (iVar5 <= 0)
	{
		return false;
	}
	else
	{
		iVar6 = get_random_int_in_range(0, iVar5);
		if (func_495(iVar0, iVar6, uParam0, fParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_446()
{
	return func_262(Global_1572887->f_6, 1);
}

void func_447(int iParam0, int iParam1)
{
	Global_1572864->f_16 = iParam0;
	Global_1572864->f_17 = iParam1;
}

int func_448(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1109400->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 25;
	}
	if (&Global_1225639->f_21[iParam0])
	{
		return (*Global_1108178)[iParam0]->f_1;
	}
	return 25;
}

bool func_449(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_450(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_451(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_452(struct<29> Param0, var uParam29, int iParam30)
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

void func_453(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

bool func_454(var uParam0)
{
	return uParam0->f_1;
}

int func_455(int iParam0)
{
	return 60000;
}

void func_456(var uParam0, char* sParam1)
{
	_0x443174c20b8b9e7f(uParam0, 94, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eModel", 64);
	_0xb25b5a375be5be26(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eItem", 64);
	_0xb25b5a375be5be26(&(uParam0->f_1), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eCarriableType", 64);
	_0xb25b5a375be5be26(&(uParam0->f_2), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eCarriableConfigInfo", 64);
	_0xb25b5a375be5be26(&(uParam0->f_3), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".ePedQuality", 64);
	_0xb25b5a375be5be26(&(uParam0->f_4), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".ePedSkinQuality", 64);
	_0xb25b5a375be5be26(&(uParam0->f_5), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".ePedRarity", 64);
	_0xb25b5a375be5be26(&(uParam0->f_6), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eDamageCleanliness", 64);
	_0xb25b5a375be5be26(&(uParam0->f_7), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eOutfit", 64);
	_0xb25b5a375be5be26(&(uParam0->f_8), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iNumMetaAssets", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_9), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sMetaAssetData", 64);
	_0x81f4e92be3958364(&(uParam0->f_10), 81, &cVar0);
	iVar16 = 0;
	while (iVar16 < 10)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		func_496(uParam0->f_10[iVar16], &Var8);
		iVar16++;
	}
	_0xa844feb5c22c2c74();
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iCarcassAge", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_91), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bSkinned", 64);
	_0xbb7f4273c186bc4b(&(uParam0->f_92), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bLegendary", 64);
	_0xbb7f4273c186bc4b(&(uParam0->f_93), &cVar0);
	_0xe0b45e983bfc0768();
}

void func_457(var uParam0, char* sParam1)
{
	_0x443174c20b8b9e7f(uParam0, 26, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iBondLevel", 64);
	_0x529b9ccd0972af4d(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".fBondXP", 64);
	_0x35defecae36d4fae(&(uParam0->f_1), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".fHorseEventXP", 64);
	_0x81f4e92be3958364(&(uParam0->f_2), 24, &cVar0);
	iVar16 = 0;
	while (iVar16 < 23)
	{
		if (iVar16 == -1)
		{
		}
		else
		{
			Var8 = { cVar0 };
			StringIntConCat(&Var8, iVar16, 64);
			_0x35defecae36d4fae(uParam0->f_2[iVar16], &Var8);
		}
		iVar16++;
	}
	_0xa844feb5c22c2c74();
	_0xe0b45e983bfc0768();
}

void func_458(var uParam0, char* sParam1)
{
	_0x443174c20b8b9e7f(uParam0, 4, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iValue", 64);
	_0x529b9ccd0972af4d(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".fValueBuffer", 64);
	_0x35defecae36d4fae(&(uParam0->f_1), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".fDrainBuffer", 64);
	_0x35defecae36d4fae(&(uParam0->f_2), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iLastGameTime", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_3), &cVar0);
	_0xe0b45e983bfc0768();
}

void func_459(var uParam0, char* sParam1)
{
	_0x443174c20b8b9e7f(uParam0, 4, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iValue", 64);
	_0x529b9ccd0972af4d(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".fValueBuffer", 64);
	_0x35defecae36d4fae(&(uParam0->f_1), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".fDrainBuffer", 64);
	_0x35defecae36d4fae(&(uParam0->f_2), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iLastGameTime", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_3), &cVar0);
	_0xe0b45e983bfc0768();
}

void func_460(var uParam0, char* sParam1)
{
	_0x443174c20b8b9e7f(uParam0, 2, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bIsWrithing", 64);
	_0xbb7f4273c186bc4b(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".fWrithingDuration", 64);
	_0x35defecae36d4fae(&(uParam0->f_1), &cVar0);
	_0xe0b45e983bfc0768();
}

void func_461(var uParam0, char* sParam1)
{
	_0x443174c20b8b9e7f(uParam0, 3, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bIsStableOwned", 64);
	_0xbb7f4273c186bc4b(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eShop", 64);
	_0xb25b5a375be5be26(&(uParam0->f_1), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".todStolen", 64);
	_0xb25b5a375be5be26(&(uParam0->f_2), &cVar0);
	_0xe0b45e983bfc0768();
}

void func_462(var uParam0, char* sParam1)
{
	_0x443174c20b8b9e7f(uParam0, 2, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bIsStableOwned", 64);
	_0xbb7f4273c186bc4b(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".todBurdenPlaced", 64);
	_0xb25b5a375be5be26(&(uParam0->f_1), &cVar0);
	_0xe0b45e983bfc0768();
}

bool func_463(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_464()
{
	return Global_1109400->f_245;
}

bool func_465(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_466(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_497(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

void func_467(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_468(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_469()
{
	if (_0xfbe782b3165ac8ec(1377133516))
	{
		return true;
	}
	return false;
}

void func_470(var uParam0, var uParam1)
{
	Global_1572887->f_164.f_27 = { *uParam0 };
	Global_1572887->f_164.f_49 = { *uParam1 };
}

void func_471()
{
	iVar0 = (get_game_timer() / 1000);
	Global_1898068->f_6 = iVar0;
}

int func_472()
{
	iVar1 = Global_1898068->f_6;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		Var2 = { *Global_1935689->f_1225.f_5[iVar0] };
		iVar32 = _databinding_read_data_int(Var2.f_17);
		if (iVar32 < iVar1)
		{
			if (func_498(Var2))
			{
				func_480(Var2);
			}
			return iVar0;
		}
		iVar0++;
	}
	return func_499();
}

void func_473(var uParam0, var uParam1, char[32] cParam2, struct<16> Param10)
{
	func_500(uParam0, uParam1, cParam2, Param10);
	uParam0->f_11 = _databinding_add_data_string(*uParam0, func_474(15), Param10.f_10);
	uParam0->f_12 = _databinding_add_data_string(*uParam0, func_474(17), Param10.f_11);
	uParam0->f_13 = _databinding_add_data_hash(*uParam0, func_474(3), Param10.f_12);
	uParam0->f_14 = _databinding_add_data_hash(*uParam0, func_474(4), Param10.f_13);
	uParam0->f_15 = _databinding_add_data_hash(*uParam0, func_474(5), Param10.f_14);
	uParam0->f_16 = _databinding_add_data_hash(*uParam0, func_474(6), Param10.f_15);
}

char* func_474(int iParam0)
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
			return "dynamic_list_item_extra_bool_field_one_value";
		case 53:
			return "dynamic_list_item_link";
		case 54:
			return "dynamic_list_item_event_channel_hash";
		case 55:
			return "dynamic_list_item_focus_hash";
		case 56:
			return "dynamic_list_item_select_hash";
		case 57:
			return "dynamic_list_item_prompt_text";
		case 58:
			return "dynamic_list_item_prompt_enabled";
		case 59:
			return "dynamic_list_item_prompt_visible";
		case 60:
			return "dynamic_list_item_prompt_option_text";
		case 61:
			return "dynamic_list_item_prompt_option_enabled";
		case 62:
			return "dynamic_list_item_prompt_option_visible";
		case 63:
			return "dynamic_list_item_prompt_option_select_hash";
		case 64:
			return "dynamic_list_item_prompt_toggle_text";
		case 65:
			return "dynamic_list_item_prompt_toggle_enabled";
		case 66:
			return "dynamic_list_item_prompt_toggle_visible";
		case 67:
			return "dynamic_list_item_prompt_toggle_select_hash";
		case 68:
			return "dynamic_list_item_prompt_r3_text";
		case 69:
			return "dynamic_list_item_prompt_r3_enabled";
		case 70:
			return "dynamic_list_item_prompt_r3_visible";
		case 71:
			return "dynamic_list_item_select_r3_select_hash";
		case 72:
			return "mount_collection_index";
		case 73:
			return "dynamic_list_item_rename_prompt_enabled";
		case 74:
			return "dynamic_list_item_rename_prompt_visible";
		case 75:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
		case 76:
			return "invite_unique_id";
		case 77:
			return "invite_tracked";
		case 78:
			return "invite_processed";
		case 79:
			return "invite_script_type";
		case 80:
			return "invite_gang_id";
		case 81:
			return "invite_expiration_time";
		case 82:
			return "invite_filter_type";
		case 83:
			return "invite_feed_message_id";
		default:
			break;
	}
	return "null";
}

void func_475(int iParam0)
{
	Global_1935689->f_1225.f_1207 = iParam0;
	_databinding_write_data_string(Global_1935689->f_1225.f_4, _0x2b6846401d68e563(to_float(Global_1935689->f_1225.f_1207), 0));
}

bool func_476()
{
	return _network_are_online_notifications_shown_in_story_mode();
}

bool func_477(var uParam0)
{
	return true;
}

int func_478(var uParam0)
{
	if (is_string_null_or_empty(uParam0->f_2))
	{
		return 0;
	}
	else if (is_string_null_or_empty(uParam0->f_3))
	{
		return 0;
	}
	else if (uParam0->f_5 == 0)
	{
		return 0;
	}
	else if (uParam0->f_6 == 0)
	{
		return 0;
	}
	if (uParam0->f_11 == 778915895)
	{
		if (Global_1898068->f_3)
		{
			uParam0->f_4 = _create_var_string(2, "NM_TI_VIEW_INVITE");
		}
		else
		{
			uParam0->f_4 = _create_var_string(2, "NM_TI_ACCEPT_INVITE");
		}
	}
	if (*uParam0 == 3)
	{
		return func_501(func_413(uParam0->f_2, 109029619), func_413(uParam0->f_3, 109029619), uParam0->f_5, uParam0->f_6, 1433015236, uParam0->f_12, uParam0->f_11, uParam0->f_13, uParam0->f_10, uParam0->f_14, uParam0->f_15, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_18);
	}
	else if (*uParam0 == 4)
	{
		return func_502(func_413(uParam0->f_2, 109029619), func_413(uParam0->f_3, 109029619), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_9, 1433015236, uParam0->f_12, uParam0->f_11, uParam0->f_13, uParam0->f_10, uParam0->f_14, uParam0->f_15, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_18);
	}
	else if (*uParam0 == 1)
	{
		return func_503(func_413(uParam0->f_2, 109029619), func_413(uParam0->f_3, 109029619), uParam0->f_5, uParam0->f_6, uParam0->f_16, uParam0->f_4, uParam0->f_17, uParam0->f_10, uParam0->f_14, uParam0->f_15, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 2)
	{
		return func_504(func_413(uParam0->f_2, 109029619), func_413(uParam0->f_3, 109029619), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_9, uParam0->f_16, uParam0->f_4, uParam0->f_17, uParam0->f_10, uParam0->f_14, uParam0->f_15, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 0)
	{
		return func_221(func_413(uParam0->f_2, 109029619), func_413(uParam0->f_3, 109029619), uParam0->f_5, uParam0->f_6, uParam0->f_10, uParam0->f_14, uParam0->f_15, uParam0->f_1, 0, 1, 1);
	}
	return 0;
}

void func_479(var uParam0)
{
}

void func_480(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0))
	{
		return;
	}
	_databinding_remove_binding_array_item_by_data_context_id(Global_1935689->f_1225.f_3, uParam0);
	_databinding_write_data_bool(Global_1935689->f_1225.f_1, 0);
	func_505(uParam0);
	_databinding_remove_data_entry(uParam0);
	func_475((Global_1935689->f_1225.f_1207 - 1));
}

void func_481(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (is_string_null_or_empty(&((*Global_1934603)[iParam0]->f_10)))
	{
		return;
	}
	*(*Global_1934603)[iParam0] = { Var0 };
	Global_1934603->f_161 = (Global_1934603->f_161 - 1);
	if (Global_1934603->f_161 < 0)
	{
		Global_1934603->f_161 = 0;
	}
}

bool func_482(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_483(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_484(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_485(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam0 == 3)
	{
		return iParam1 != -1;
	}
	return iParam1 != 0;
}

void func_486(int iParam0, int iParam1, var uParam2)
{
	Global_1572887->f_80 = iParam0;
	Global_1572887->f_80.f_1 = iParam1;
	Global_1572887->f_80.f_2 = uParam2;
	func_506();
}

void func_487(int iParam0)
{
	Global_1572887->f_80.f_3 = iParam0;
	func_506();
}

void func_488(int iParam0)
{
	Global_1572887->f_80.f_4 = iParam0;
}

void func_489(int iParam0)
{
	Global_1572887->f_80.f_63 = iParam0;
}

void func_490()
{
	func_381(&(Global_1572887->f_6), 1);
	func_381(&(Global_1572887->f_6), 1073741824);
	func_506();
}

int func_491(int iParam0)
{
	if (func_507())
	{
		return 0;
	}
	if (!func_465(iParam0))
	{
		return 0;
	}
	Global_1051043 = iParam0;
	return 1;
}

int func_492()
{
	return Global_1109400->f_246;
}

int func_493(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 255;
	}
	return &(Global_1109400->f_248[iParam0]);
}

int func_494(int iParam0)
{
	Var0 = Global_1058888->f_43923.f_283.f_4898;
	Var0.f_2 = 1593794963;
	Var0.f_3 = iParam0;
	return _datafile_get_num_nodes(&Var0);
}

bool func_495(int iParam0, int iParam1, var uParam2, float fParam3)
{
	Var0 = Global_1058888->f_43923.f_283.f_4898;
	Var0.f_2 = 160165798;
	Var0.f_3 = iParam0;
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

void func_496(var uParam0, char* sParam1)
{
	_0x443174c20b8b9e7f(uParam0, 8, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iDrawable", 64);
	_0x529b9ccd0972af4d(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iAlbedo", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_1), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iNormal", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_2), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iMaterial", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_3), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iPalette", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_4), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iTint0", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_5), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iTint1", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_6), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iTint2", 64);
	_0x529b9ccd0972af4d(&(uParam0->f_7), &cVar0);
	_0xe0b45e983bfc0768();
}

int func_497(int iParam0)
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

bool func_498(struct<29> Param0, var uParam29)
{
	return _databinding_read_data_bool(Param0.f_28);
}

int func_499()
{
	iVar4 = _databinding_read_data_int(Global_1935689->f_1225.f_5[0]->f_17);
	iVar5 = _databinding_read_data_int(Global_1935689->f_1225.f_5[0]->f_26);
	iVar0 = 0;
	while (iVar0 < 40)
	{
		iVar1 = _databinding_read_data_int(Global_1935689->f_1225.f_5[iVar0]->f_17);
		iVar2 = _databinding_read_data_int(Global_1935689->f_1225.f_5[iVar0]->f_26);
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
	func_480(&(Global_1935689->f_1225.f_5[iVar3]));
	return iVar3;
}

void func_500(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<10> Param10)
{
	*uParam0 = _databinding_add_data_container(uParam1, &cParam2);
	uParam0->f_1 = _databinding_add_data_bool(*uParam0, func_474(0), Param10);
	uParam0->f_2 = _databinding_add_data_bool(*uParam0, func_474(1), Param10.f_1);
	uParam0->f_3 = _databinding_add_data_hash(*uParam0, func_474(2), Param10.f_2);
	uParam0->f_4 = _databinding_add_data_hash(*uParam0, func_474(53), Param10.f_3);
	uParam0->f_5 = _databinding_add_data_hash(*uParam0, func_474(54), Param10.f_4);
	uParam0->f_6 = _databinding_add_data_hash(*uParam0, func_474(56), Param10.f_5);
	uParam0->f_7 = _databinding_add_data_hash(*uParam0, func_474(55), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = -672301300;
	}
	uParam0->f_8 = _databinding_add_data_hash(*uParam0, func_474(57), Param10.f_7);
	uParam0->f_9 = _databinding_add_data_bool(*uParam0, func_474(58), Param10.f_8);
	uParam0->f_10 = _databinding_add_data_bool(*uParam0, func_474(59), Param10.f_9);
}

var func_501(char* sParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16)
{
	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_9 = iParam4;
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

var func_502(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19)
{
	Var0 = -2;
	Var0 = uParam11;
	Var0.f_1 = uParam12;
	Var0.f_2 = uParam13;
	Var0.f_3 = iParam15;
	Var0.f_9 = iParam7;
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

var func_503(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13)
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
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

var func_504(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16)
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

void func_505(var uParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(uParam0, func_474(83));
	if (func_508(iVar0))
	{
		_0x2f901291ef177b02(iVar0, 1);
	}
}

void func_506()
{
	if (func_48() == -1)
	{
		return;
	}
	iVar0 = &Global_1225639;
	(*Global_1055058)[iVar0]->f_39 = func_262(Global_1572887->f_6, 1);
	(*Global_1055058)[iVar0]->f_39.f_1 = Global_1572887->f_80;
	(*Global_1055058)[iVar0]->f_39.f_2 = Global_1572887->f_80.f_1;
	(*Global_1055058)[iVar0]->f_39.f_3 = Global_1572887->f_80.f_2;
	(*Global_1055058)[iVar0]->f_39.f_4 = Global_1572887->f_80.f_3;
	(*Global_1055058)[iVar0]->f_39.f_8 = Global_1572887->f_80.f_4;
	(*Global_1055058)[iVar0]->f_39.f_5 = { Global_1572887->f_252 };
}

bool func_507()
{
	return &Global_1051043 != -1;
}

bool func_508(int iParam0)
{
	return iParam0 != 0;
}

