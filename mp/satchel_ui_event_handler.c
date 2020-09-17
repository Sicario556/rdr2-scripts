void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	network_set_script_is_safe_for_network_game();
	set_this_script_can_be_paused(false);
	func_1(1);
	func_2();
	func_3();
	while (Global_1940144->f_80.f_4)
	{
		func_3();
		wait(0);
	}
	func_4(&uVar0);
	func_5();
	if (has_force_cleanup_occurred(4))
	{
		func_6(&uVar0);
	}
	func_7(1);
	bVar5 = _get_ped_crouch_movement(Global_34);
	bVar6 = func_8(2);
	while (true)
	{
		if (((is_ped_falling(Global_34) || _0x3e592d0486dec0f6(Global_34)) || is_player_being_arrested(get_player_index(), true)) || _is_ped_hogtied(Global_34))
		{
			func_9(0);
		}
		_uiprompt_enable_prompt_type_this_frame(0);
		if ((_get_ped_crouch_movement(Global_34) != bVar5 && !Global_1940311->f_6) && func_10(Global_1940311->f_10893, 1224357681) != 0)
		{
			func_11(func_10(Global_1940311->f_10893, 1224357681));
			bVar5 = !bVar5;
		}
		if (bVar6 && !func_12(Global_34))
		{
			func_2();
			func_1(1);
			func_3();
			bVar6 = false;
		}
		if (Global_1940311->f_4)
		{
			func_13();
			func_14();
			func_15(Global_1940311->f_10892);
			if (Global_1940311->f_34 != 0)
			{
				func_11(Global_1940311->f_34);
			}
			func_5();
			if (Global_1940311->f_10901 != 0 && !func_16())
			{
				func_17(Global_1940311->f_10901, &(Var1.f_3));
			}
			Global_1940311->f_4 = 0;
			Global_1940311->f_34 = 0;
		}
		if (func_18())
		{
			func_17(Global_1940311->f_10901, &(Var1.f_3));
			func_5();
			func_19(0);
			Global_1940311->f_6 = 0;
		}
		while (_event_manager_is_event_pending(iLocal_20))
		{
			if (_event_manager_peek_event(iLocal_20, &Var1))
			{
				Global_1940311->f_6 = 0;
				switch (Var1)
				{
					case -1740156697:
						Global_1940311->f_10901 = Var1.f_1;
						if (!func_16())
						{
							switch (Var1.f_2)
							{
								case -1287062382:
									func_20(Var1.f_1, &(Var1.f_3));
									break;
								case -1706653313:
								case 1086195311:
									_0xd962f8579d702db5();
									func_17(Var1.f_1, &(Var1.f_3));
									break;
								case -1715238242:
									_0xd962f8579d702db5();
									func_21(Var1.f_1, &(Var1.f_3));
									break;
							}
						}
						else
						{
							func_5();
							_0xd962f8579d702db5();
						}
						func_22(Var1.f_2);
						func_7(2);
						_event_manager_pop_event(iLocal_20);
						break;
					case -722926211:
					case 703281244:
						func_23();
						func_5();
						_0xd962f8579d702db5();
						_event_manager_pop_event(iLocal_20);
						break;
					case -1203660660:
						switch (Var1.f_2)
						{
							case -1706653313:
							case -594808149:
							case 1086195311:
								if (func_24() || func_25())
								{
									if (func_26(Global_1940311->f_10893, 0, 0, 0, 1, 0, 0))
									{
										func_9(0);
									}
								}
								else if (func_27())
								{
								}
								else if (!func_28(0))
								{
									func_29();
								}
								func_7(4);
								break;
							case -1193234750:
								func_30(Global_1940311->f_10893, 1);
								break;
							case 301804921:
								if (func_28(0))
								{
									func_7(32);
								}
								else
								{
									func_31(Global_1940311->f_10893);
								}
								break;
							case 1329361007:
								func_7(64);
								break;
						}
						_event_manager_pop_event(iLocal_20);
						break;
					case 922460030:
						func_7(16);
						_event_manager_pop_event(iLocal_20);
						break;
					case -2075827635:
						func_7(8);
						_event_manager_pop_event(iLocal_20);
						break;
					default:
						_event_manager_pop_event(iLocal_20);
						break;
				}
			}
		}
		wait(0);
	}
	func_6(&uVar0);
	terminate_this_thread();
}

void func_1(bool bParam0)
{
	func_32();
	bVar0 = func_33(1);
	if (func_35(1, 10329) != bVar0)
	{
		if (!Global_1940144->f_80.f_1)
		{
			Global_1940144->f_80.f_1 = 1;
		}
	}
	bVar0 = func_33(2);
	if (func_35(2, 10407) != bVar0)
	{
		if (!Global_1940144->f_80.f_1)
		{
			Global_1940144->f_80.f_1 = 1;
		}
	}
	bVar0 = func_33(65536);
	if (func_35(65536, 10420) != bVar0)
	{
		if (!Global_1940144->f_80.f_1)
		{
			Global_1940144->f_80.f_1 = 1;
		}
	}
	bVar0 = func_33(1048576);
	if (func_35(1048576, 10433) != bVar0)
	{
		if (!Global_1940144->f_80.f_1)
		{
			Global_1940144->f_80.f_1 = 1;
		}
	}
	bVar0 = (func_33(4) || func_33(8));
	if (!func_39())
	{
		func_40(4);
		func_40(8);
		bVar0 = false;
	}
	else
	{
		bVar1 = false;
		bVar2 = false;
		if (func_41(81053684) || func_42(4))
		{
			func_40(4);
		}
		else
		{
			bVar1 = true;
		}
		if (func_41(-525676072) || func_42(8))
		{
			func_40(8);
		}
		else
		{
			bVar2 = true;
		}
		if (bVar1 || bVar2)
		{
			if (func_44(0, func_43()))
			{
				if (!bVar0)
				{
					Global_1940144->f_80.f_1 = 1;
				}
				if (bVar1)
				{
					func_45(4);
				}
				if (bVar2)
				{
					func_45(8);
				}
			}
			else
			{
				func_40(4);
				func_40(8);
				if (bVar0)
				{
					Global_1940144->f_80.f_1 = 1;
				}
			}
		}
	}
	bVar0 = func_33(16);
	if (func_35(16, 11569) != bVar0)
	{
		if (!Global_1940144->f_80.f_1)
		{
			Global_1940144->f_80.f_1 = 1;
		}
	}
	bVar0 = func_33(256);
	if (func_35(256, 11582) != bVar0)
	{
		if (!Global_1940144->f_80.f_1)
		{
			Global_1940144->f_80.f_1 = 1;
		}
	}
	bVar0 = func_33(512);
	if (func_35(512, 11595) != bVar0)
	{
		if (!Global_1940144->f_80.f_1)
		{
			Global_1940144->f_80.f_1 = 1;
		}
	}
	bVar0 = func_33(1024);
	if (func_35(1024, 11608) != bVar0)
	{
		if (!Global_1940144->f_80.f_1)
		{
			Global_1940144->f_80.f_1 = 1;
		}
	}
	if (((((func_50() || func_51()) || func_52()) || func_53()) || func_54()) || bParam0)
	{
		bVar0 = func_33(8192);
		if (func_35(8192, 11703) != bVar0)
		{
			if (!Global_1940144->f_80.f_1)
			{
				Global_1940144->f_80.f_1 = 1;
			}
		}
		bVar0 = func_33(64);
		if (func_35(64, 11716) != bVar0)
		{
			if (!Global_1940144->f_80.f_1)
			{
				Global_1940144->f_80.f_1 = 1;
			}
		}
		bVar0 = func_33(131072);
		if (func_35(131072, 11716) != bVar0)
		{
			if (!Global_1940144->f_80.f_1)
			{
				Global_1940144->f_80.f_1 = 1;
			}
		}
		bVar0 = func_33(32);
		if (func_35(32, 11729) != bVar0)
		{
			if (!Global_1940144->f_80.f_1)
			{
				Global_1940144->f_80.f_1 = 1;
			}
		}
		bVar0 = func_33(128);
		if (func_35(128, 11742) != bVar0)
		{
			if (!Global_1940144->f_80.f_1)
			{
				Global_1940144->f_80.f_1 = 1;
			}
		}
		bVar0 = func_33(262144);
		if (func_35(262144, 11755) != bVar0)
		{
			if (!Global_1940144->f_80.f_1)
			{
				Global_1940144->f_80.f_1 = 1;
			}
		}
		bVar0 = func_33(2048);
		if (func_35(2048, 11768) != bVar0)
		{
			if (!Global_1940144->f_80.f_1)
			{
				Global_1940144->f_80.f_1 = 1;
			}
		}
		bVar0 = func_33(32768);
		if (func_35(32768, 11781) != bVar0)
		{
			if (!Global_1940144->f_80.f_1)
			{
				Global_1940144->f_80.f_1 = 1;
			}
		}
		bVar0 = func_33(4096);
		if (func_35(4096, 11794) != bVar0)
		{
			if (!Global_1940144->f_80.f_1)
			{
				Global_1940144->f_80.f_1 = 1;
			}
		}
		bVar0 = func_33(524288);
		if (func_35(524288, 11807) != bVar0)
		{
			if (!Global_1940144->f_80.f_1)
			{
				Global_1940144->f_80.f_1 = 1;
			}
		}
	}
	func_64();
}

void func_2()
{
	Global_1940144->f_80.f_4 = 0;
	Global_1940144->f_80 = 0;
}

void func_3()
{
	if ((get_frame_count() % 3) == 0 || Global_1940144->f_80)
	{
		if (func_54() || (((func_50() || func_51()) || func_52()) || func_53()))
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
				if (func_65())
				{
					Global_1940144->f_80.f_4 = 0;
					Global_1940144->f_80 = 1;
					if (Global_1940144->f_80.f_1)
					{
						func_66(1, 1, 0);
					}
					Global_1940144->f_80.f_1 = 0;
					Global_1940144->f_80.f_2 = 0;
					Global_1940144->f_80.f_3 = get_frame_count();
				}
			}
		}
		else if (!bVar0)
		{
			if (func_67())
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

int func_4(var uParam0)
{
	if (func_68() == -1)
	{
		func_69();
	}
	(*Global_1913640)[0] = 0;
	func_70(uParam0);
	return 1;
}

void func_5()
{
	if (func_16())
	{
		_0xd962f8579d702db5();
		_0x75cfac49301e134f(Global_1940311->f_10917, 0, 0);
		_databinding_write_data_hash_string(Global_1940311->f_10910, func_71(Global_1940311->f_10892));
		_databinding_write_data_hash_string(Global_1940311->f_10911, func_72(Global_1940311->f_10892));
		_databinding_write_data_bool(Global_1940311->f_10930, false);
		_databinding_write_data_bool(Global_1940311->f_10926, false);
		if (func_28(0) || func_73())
		{
			_databinding_write_data_string(Global_1940311->f_10912, "");
		}
		if (func_74(29))
		{
			_databinding_write_data_string(Global_1940311->f_10916, _get_label_text_by_hash(818738914));
		}
		else
		{
			func_75(Global_1940311->f_10892);
		}
	}
}

void func_6(var uParam0)
{
	_0xd962f8579d702db5();
	Global_1940311->f_6 = 0;
	Global_1940311->f_38 = 0;
	Global_1940311->f_33 = -1;
	Global_1940311->f_34 = 0;
	Global_1940311->f_10897 = 0;
	Global_1940311->f_10896 = 0;
	func_76(822208792);
	func_77(0);
	func_78(0);
	func_79(uParam0);
	if (!_0x038b1f1674f0e242(Global_34))
	{
		func_80(0);
	}
	func_81(1);
	func_67();
	terminate_this_thread();
}

void func_7(int iParam0)
{
	Global_1940311->f_10866 = (Global_1940311->f_10866 || iParam0);
}

bool func_8(int iParam0)
{
	return func_82(Global_1940144->f_7, iParam0);
}

void func_9(bool bParam0)
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

int func_10(int iParam0, int iParam1)
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

void func_11(int iParam0)
{
	uVar0 = iParam0;
	Global_1940311->f_10900 = 0;
	func_84(Global_1940311->f_10883[func_83(Global_1940311->f_10892)], iParam0);
	_databinding_set_templated_ui_item_list_size(Global_1940311->f_10906, Global_1940311->f_10900);
	func_85(Global_1940311->f_33);
	Global_1940311->f_10891 = uVar0;
}

bool func_12(int iParam0)
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

void func_13()
{
	Global_1940311->f_10900 = 0;
	if (Global_1940311->f_10891 != -1)
	{
		iVar0 = Global_1940311->f_10891;
		func_84(Global_1940311->f_10883[func_83(Global_1940311->f_10892)], iVar0);
		_databinding_set_templated_ui_item_list_size(Global_1940311->f_10906, Global_1940311->f_10900);
	}
	uVar1 = _databinding_get_data_container_from_path("Satchel");
	bVar2 = Global_1940311->f_10900 <= false;
	_databinding_add_data_bool(uVar1, "FolderEmpty", bVar2);
}

bool func_14()
{
	if ((func_86() || func_88(Global_34, func_87(7), 1)) || (!(func_89(7) || func_90(7)) && func_28(0)))
	{
		return (func_91(0, -1591664384) && func_91(1, 724026534));
	}
	return func_91(0, -1591664384);
}

void func_15(int iParam0)
{
	Var0 = { *Global_1940311->f_10883[Global_1940311->f_10890] };
	Var2.f_9 = -1591664384;
	if (!func_92())
	{
		func_93(0);
	}
	Global_1940311->f_10899 = 0;
	Global_1940311->f_38.f_203 = 0;
	if (Global_1940311->f_10902)
	{
		_databinding_set_templated_ui_item_list_size(Global_1940311->f_10905, Global_1940311->f_10899);
		Global_1940311->f_10902 = 0;
	}
	_databinding_write_data_hash_string(Global_1940311->f_10914, func_71(iParam0));
	if (!func_28(0) && !func_73())
	{
		func_94(func_83(iParam0), &Var0, &Var2, iParam0);
	}
	func_95();
	if (Global_1940311->f_10892 == -283002878)
	{
		func_96();
	}
	else if (Global_1940311->f_10892 == -889932290)
	{
		func_97();
	}
	else if (Global_1940311->f_10892 == -693134279)
	{
		func_98();
	}
	else
	{
		if (Global_1940311->f_10892 == -182626652 || Global_1940311->f_10892 == 1783698482)
		{
			if ((Global_1915715->f_20241 == 38 || Global_1915715->f_20241 == 2) && func_28(0))
			{
				func_98();
			}
		}
		func_99(func_83(iParam0), &Var0, &Var2, iParam0);
		if ((Global_1940311->f_10892 == -182626652 && (((Global_1915715->f_20241 == 10 || Global_1915715->f_20241 == 16) || Global_1915715->f_20241 == 15) || Global_1915715->f_20241 == 29)) || (Global_1940311->f_10892 == -693134279 && Global_1915715->f_20241 == 2))
		{
			if (func_86())
			{
				Var0 = { *Global_1940311->f_10883[1] };
				func_99(1, &Var0, &Var2, iParam0);
			}
			else if (func_100())
			{
				Var0 = { *Global_1940311->f_10883[2] };
				func_99(2, &Var0, &Var2, iParam0);
			}
		}
		func_101();
		func_96();
		func_97();
		func_102();
	}
	_databinding_set_templated_ui_item_list_size(Global_1940311->f_10905, Global_1940311->f_10899);
	func_85(0);
}

bool func_16()
{
	return Global_1940311->f_38.f_203 <= 0;
}

void func_17(int iParam0, var uParam1)
{
	func_103();
	if (func_18())
	{
		func_19(0);
		if (Global_1940311->f_6)
		{
			uVar1 = _databinding_get_data_container_from_child_index(Global_1940311->f_10906, Global_1940311->f_10901);
			iVar0 = func_104(&uVar1);
		}
		else
		{
			uVar1 = _databinding_get_data_container_from_child_index(Global_1940311->f_10905, Global_1940311->f_10901);
		}
		if (!func_105(iVar0, 0))
		{
			iVar0 = func_106(uVar1);
		}
	}
	else
	{
		if (Global_1940311->f_6)
		{
			iVar0 = func_104(uParam1);
		}
		if (!func_105(iVar0, 0))
		{
			iVar0 = func_106(*uParam1);
		}
	}
	if (func_106(*uParam1) == iVar0)
	{
		func_107(iVar0, uParam1);
	}
	func_108(0, iVar0);
	func_103();
	func_85(iParam0);
}

bool func_18()
{
	return Global_1940311->f_10;
}

void func_19(int iParam0)
{
	Global_1940311->f_10 = iParam0;
}

void func_20(int iParam0, var uParam1)
{
	if (iParam0 != Global_1940311->f_10890)
	{
		func_109(iParam0, uParam1);
	}
}

void func_21(var uParam0, var uParam1)
{
	Global_1940311->f_33 = uParam0;
	iVar0 = _databinding_read_data_hash_string_from_parent(*uParam1, "label");
	func_110(iVar0, uParam1);
	iVar1 = iVar0;
	func_11(iVar1);
	if (func_105(Global_1940311->f_10893, 0))
	{
		if (Global_1940311->f_10892 == 1783698482 || func_111(Global_1940311->f_10893, 474910316))
		{
			_databinding_write_data_string(Global_1940311->f_10916, "");
			func_112(Global_1940311->f_10893, 56759509);
			func_112(Global_1940311->f_10893, 1632674359);
			func_112(Global_1940311->f_10893, 2145533727);
			func_112(Global_1940311->f_10893, -623226361);
			func_112(Global_1940311->f_10893, 332438661);
			func_112(Global_1940311->f_10893, -1658668866);
			func_112(Global_1940311->f_10893, 1997097980);
			func_112(Global_1940311->f_10893, 90781239);
			func_112(Global_1940311->f_10893, -1874365462);
			func_112(Global_1940311->f_10893, 920487791);
			func_112(Global_1940311->f_10893, -668555046);
			func_112(Global_1940311->f_10893, -839148413);
			func_112(Global_1940311->f_10893, 10424351);
			func_112(Global_1940311->f_10893, -1452445456);
			func_112(Global_1940311->f_10893, 773314749);
			func_112(Global_1940311->f_10893, -246025274);
			func_112(Global_1940311->f_10893, -41527693);
		}
	}
	else if (Global_1940311->f_10892 == 1783698482 || Global_1940311->f_10892 == -693134279)
	{
		iVar2 = iVar0;
		if (iVar2 != 0)
		{
			if (Global_1940311->f_10892 != -693134279)
			{
				func_113();
			}
			Var3.f_2 = 5;
			Var3.f_18 = 8;
			func_114(iVar2, &Var3);
			_databinding_write_data_hash_string(Global_1940311->f_10911, Var3.f_1);
			if (!func_28(0) && iVar2 == weekly_collectible_get_item_set_buy_award(1332470872, 0))
			{
				_databinding_write_data_bool(Global_1940311->f_10920, false);
				_databinding_write_data_bool(Global_1940311->f_10921, false);
			}
		}
	}
}

void func_22(int iParam0)
{
	if (iParam0 != -1715238242)
	{
		Global_1940311->f_10891 = -1;
	}
}

void func_23()
{
	uVar0 = Global_1940311->f_10868;
	func_115(uVar0);
}

bool func_24()
{
	if (func_116(Global_34, 0))
	{
		if (_is_ped_using_scenario_hash(Global_34, 1855656219))
		{
			return true;
		}
	}
	return false;
}

bool func_25()
{
	if (Global_1940311->f_36 == 3)
	{
		return true;
	}
	return false;
}

bool func_26(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_25())
	{
		Global_1940311->f_10894 = iParam0;
		func_117(iParam0, 1, -142743235, 0, 0);
		return false;
	}
	if (!func_118(iParam0, bParam4))
	{
		return false;
	}
	if (func_119(iParam0))
	{
		return false;
	}
	if (_0xec7e480ff8bd0bed(Global_34) && !has_anim_event_fired(Global_34, 108107462))
	{
		return false;
	}
	bVar28 = true;
	iVar29 = 1;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (iParam0 == -418848773)
	{
		_launch_app_with_entry("player_menu", "mp_moonshine_selection");
	}
	if (func_120(iParam0))
	{
		Global_1913502 = iParam0;
		Global_1913693 = get_game_timer();
		Global_1913503 = get_game_timer() + 3000;
		return true;
	}
	if (func_111(iParam0, -2081717885))
	{
		func_121(iParam0, Var10, Var0, uVar27, bVar28, iVar29);
	}
	else if (func_111(iParam0, -1909684001))
	{
		func_122(iParam0, Var10, Var0, bVar28, iVar29);
	}
	else if (func_111(iParam0, 587975446))
	{
		func_123(iParam0, Var10);
	}
	else if (func_111(iParam0, 566155764))
	{
		if (!func_124(iParam0))
		{
			return false;
		}
	}
	if (func_125(iParam0, bParam5, bParam6, bParam1))
	{
		Global_1913502 = iParam0;
		Global_1913693 = get_game_timer();
		return true;
	}
	if (func_111(iParam0, -1227898937))
	{
		Var0.f_2 = iParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_126(Var10, 1);
		iVar29 = 0;
		bVar28 = false;
	}
	else if ((func_111(iParam0, -1472964441) || func_111(iParam0, -228153877)) || func_111(iParam0, 566155764))
	{
	}
	else if (func_111(iParam0, 1919582297))
	{
		if (((func_127() || is_ped_active_in_scenario(Global_34, 1)) || _0x0c3cb2e600c8977d(Global_34, 1)) || !is_ped_on_foot(Global_34))
		{
			return false;
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
		func_126(Var10, 0);
		bVar28 = false;
	}
	else if (func_128(iParam0))
	{
		Var0.f_3 = 0;
		Var0.f_1 = iParam0;
		Var0.f_2 = 0;
		Var0 = func_129(Global_1071686->f_28357.f_11.f_67);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_126(Var10, 0);
		iVar29 = 1;
	}
	else if (func_130(iParam0) == -1037537535)
	{
		if (!func_131(iParam0))
		{
			func_132("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
			return iVar29;
		}
		iVar32 = func_133(iParam0);
		switch (iVar32)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				bVar30 = func_134();
				break;
			default:
				bVar30 = true;
				break;
		}
		if (!bVar30)
		{
			if (func_135(player_id()))
			{
				func_132("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_132("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return iVar29;
		}
		if (iVar32 == -999503751)
		{
			if (Global_1952637->f_1675 != iParam0)
			{
				func_136(20, iParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (iVar32)
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_137(iParam0, 0);
					return iVar29;
				case -2061583405:
					func_138(iParam0);
					func_136(35, 0, 0, 0, 0);
					return true;
				case -1719060085:
					if (iParam0 == &Global_1952637->f_1675.f_1[23])
					{
						func_139(Global_34, 260271636, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						_0xcb9401f918cb0f75(Global_34, "PlayUnequipGlovesFidget", 1, 15);
						func_140(iParam0, 0, 0);
						return true;
					}
					else
					{
						_0xcb9401f918cb0f75(Global_34, "PlayEquipGlovesFidget", 1, 15);
						func_140(iParam0, 1, 0);
					}
					break;
				case 119907797:
				case 1388798186:
					if (iParam0 == &Global_1952637->f_1675.f_1[10])
					{
						func_139(Global_34, &(Global_1952637->f_83[10]), 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						func_140(iParam0, 0, 0);
						return true;
					}
					else
					{
						func_140(iParam0, 1, 0);
						func_141(-2061583405, 0);
						if (iVar32 == 1388798186)
						{
							func_141(119907797, 0);
						}
						else if (iVar32 == 119907797)
						{
							func_141(1388798186, 0);
						}
					}
					break;
				default:
					if (!func_111(iParam0, 160827531))
					{
					}
					else
					{
						func_137(iParam0, 0);
					}
					break;
			}
			func_139(Global_34, iParam0, 0, -358215195, 1, 1, 1, 0, 0, 1, 1);
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1259508039:
				func_9(1);
				break;
			case -727924611:
				if (func_68() != -1)
				{
				}
				else if (!func_131(iParam0))
				{
					func_132("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar30 = func_142(7, iParam0);
					bVar31 = func_142(1, iParam0);
					if (bVar31 && !bVar30)
					{
						if (does_blip_exist(Global_17332))
						{
							remove_blip(&Global_17332);
						}
						Global_17332 = _0x3e593df9c2962ec6(-1925605092);
						_blip_set_modifier(Global_17332, 673950256);
						func_132(_create_var_string(0, -1680440926, Global_17332), 10000, 0, 0, 0, 1);
					}
					else if (!func_143(7))
					{
						func_132("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar30)
					{
						if (func_88(Global_34, func_87(7), 0))
						{
							func_132("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (does_blip_exist(Global_17332))
							{
								remove_blip(&Global_17332);
							}
							Global_17332 = _0x3e593df9c2962ec6(-1925605092);
							_blip_set_modifier(Global_17332, 673950256);
							func_132(_create_var_string(0, -482898802, Global_17332), 10000, 0, 0, 0, 1);
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
							func_126(Var10, 0);
						}
						Jump @2396; //curOff = 1778
						func_144();
						Jump @2396; //curOff = 1785
						if (func_131(-1838434463))
						{
							if (func_145(1, 1))
							{
								func_146(2, 1);
							}
							else if (func_147(1))
							{
								func_132("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
							}
							else if (func_148())
							{
								func_132("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
							}
							else
							{
								if (_0x424b17a7dc5c90bc(player_id()))
								{
									func_149();
								}
								else
								{
									func_132("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								}
								func_150(_0x901e0dc25080c8b9(player_id()));
							}
						}
						else if (!_0x424b17a7dc5c90bc(player_id()))
						{
							func_132("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
							func_150(_0x901e0dc25080c8b9(player_id()));
						}
						else if (func_148())
						{
							func_132("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_132("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
						}
						Jump @2396; //curOff = 2006
						if (!_is_weapon_binoculars(func_151(Global_34, 1, 0, 0)))
						{
							set_current_ped_weapon(Global_34, iParam0, false, 0, false, false);
						}
						return true;
						Jump @2396; //curOff = 2044
						if (func_151(Global_34, 1, 0, 0) != iParam0)
						{
							set_current_ped_weapon(Global_34, iParam0, false, 0, false, false);
						}
						return true;
						Jump @2396; //curOff = 2079
						Jump @2396; //curOff = 2082
						func_152(535, 1);
						Jump @2396; //curOff = 2093
						func_153(1);
						Jump @2396; //curOff = 2101
						_task_item_interaction(player_ped_id(), -569063887, 1928812891, 1, 0, -1082130432);
						bVar28 = false;
						return true;
						Jump @2396; //curOff = 2136
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
							func_126(Var10, 0);
						}
						return true;
						Jump @2396; //curOff = 2212
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
							func_126(Var10, 0);
						}
						return true;
						Jump @2396; //curOff = 2342
						if ((*Global_1138048)[player_id()]->f_4)
						{
							func_132("NET_WCAMP_OWNER_CAMP_RUNNING", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_154();
						}
						return true;
						Jump @2396; //curOff = 2387
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

bool func_27()
{
	if (Global_1940311->f_36 == 1 || Global_1940311->f_36 == 2)
	{
		return true;
	}
	return false;
}

bool func_28(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

void func_29()
{
	if (func_130(Global_1940311->f_10893) == 2085633299)
	{
		Global_1940144->f_41 = Global_1940311->f_10893;
	}
	else
	{
		Global_1940144->f_42 = Global_1940311->f_10893;
	}
	bVar0 = true;
	if (func_133(Global_1940311->f_10893) == -854348463)
	{
		Var1 = { func_155(Global_1940311->f_10893, 0, 0) };
		Var6 = { func_156(Global_1940311->f_10893, Var1, Var1.f_4, 0) };
		func_157(Var6, 1, 0);
		bVar10 = func_158(0);
		if (func_68() == 0)
		{
			bVar10 = true;
		}
		if (Global_1940311->f_10892 == -156634416)
		{
			func_66(bVar10, 0, -883547903);
		}
		else
		{
			func_66(bVar10, 1, 0);
		}
		bVar0 = true;
	}
	else if (Global_1940311->f_10893 == -898386032)
	{
		func_159();
		bVar0 = false;
	}
	else if ((func_133(Global_1940311->f_10893) == 81053684 || func_133(Global_1940311->f_10893) == -525676072) || func_111(Global_1940311->f_10893, 160827531))
	{
		func_137(Global_1940311->f_10893, 0);
		bVar0 = false;
	}
	else if (func_111(Global_1940311->f_10893, 316290104))
	{
		if (func_160(Global_1940311->f_10893, 0, 0) >= 0)
		{
			bVar0 = true;
		}
	}
	else if (func_161(Global_1940311->f_10893, 1, 0))
	{
	}
	else if (func_111(Global_1940311->f_10893, -1242251796))
	{
		func_164(Global_1940311->f_10893, func_163(func_162(0)));
	}
	else if (((func_111(Global_1940311->f_10893, -1472964441) && func_165(Global_1940311->f_10893)) && func_166()) && !func_167(Global_1940311->f_10893))
	{
		func_168();
		func_169(Global_17411.f_2966.f_17, 1, 0, -142743235);
		if (func_26(Global_1940311->f_10893, 0, 0, 0, 1, 0, 0))
		{
			bVar0 = false;
		}
	}
	else if (func_26(Global_1940311->f_10893, 0, 0, 0, 1, 0, 0))
	{
		bVar0 = false;
	}
	if (func_25())
	{
		bVar0 = false;
	}
	Global_1940311->f_10894 = Global_1940311->f_10893;
	func_9(bVar0);
	func_93(0);
}

void func_30(int iParam0, int iParam1)
{
	if (!func_105(iParam0, 0))
	{
		return;
	}
	if (((func_111(iParam0, -1472964441) && func_165(iParam0)) && func_166()) && func_167(iParam0))
	{
		func_168();
		if (func_170() == 1061777683)
		{
			func_13();
			if (Global_1940311->f_10900 <= 0)
			{
				Global_1940311->f_10902 = 1;
				func_15(1061777683);
				_uistatemachine_request_transition(-4058091, 1921928004);
			}
		}
	}
	if (!func_171(iParam0, iParam1, 0, -327174699))
	{
		if (!func_172(iParam0, iParam1, 0, 1, -327174699))
		{
		}
	}
	func_66(1, 1, func_10(iParam0, 1224357681));
}

void func_31(int iParam0)
{
	func_30(iParam0, func_173(func_162(0), iParam0, 0, 1, 1));
}

void func_32()
{
	if (does_entity_exist(Global_34))
	{
		if (func_174(Global_34))
		{
			Global_1940144->f_7 |= 1;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 1);
		}
		if (func_12(Global_34))
		{
			Global_1940144->f_7 |= 2;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 2);
		}
		if (func_175(Global_34, 713668775))
		{
			Global_1940144->f_7 |= 4;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 4);
		}
		if (func_176(Global_34))
		{
			Global_1940144->f_7 |= 8;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 8);
		}
		if (func_68() == 0)
		{
			if (func_145(1, 1))
			{
				Global_1940144->f_7 |= 16;
			}
			else
			{
				Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 16);
			}
			if (func_177(0))
			{
				Global_1940144->f_7 |= 268435456;
			}
			else
			{
				Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 268435456);
			}
		}
		else if (func_178(0, 1))
		{
			Global_1940144->f_7 |= 16;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 16);
		}
		if (!func_179(0))
		{
			Global_1940144->f_7 |= 32;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 32);
		}
		if (!func_180(0))
		{
			Global_1940144->f_7 |= 512;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 512);
		}
		if (!func_181(0))
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
		if (func_68() == 0 && _0xb655db7582aec805(Global_34))
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
		if (func_182() || func_183())
		{
			fVar0 = 50f;
		}
		if ((Global_1940258->f_18 || _0xc8b29d18022ea2b7(Global_34)) || func_184(fVar0, 1024))
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
		if (_0x3ab6c7b0bb0df4b1(Global_34, -1) || func_175(Global_34, 1369124074))
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
		if (func_185())
		{
			Global_1940144->f_7 |= 33554432;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 33554432);
		}
		if (func_186(0))
		{
			Global_1940144->f_7 |= 524288;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 524288);
		}
		if (func_187(0))
		{
			Global_1940144->f_7 |= 262144;
		}
		else
		{
			Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 262144);
		}
		if (func_188(Global_34))
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
		if (func_189(iVar1))
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
	if ((func_190() || func_191()) || (func_192(0, 0, 1) && !func_193()))
	{
		Global_1940144->f_7 = (Global_1940144->f_7 - Global_1940144->f_7 & 2097152);
	}
	else
	{
		Global_1940144->f_7 |= 2097152;
	}
	if (func_194())
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

bool func_33(int iParam0)
{
	return func_195(iParam0);
}

int func_34()
{
	return 234348672;
}

int func_35(int iParam0, int iParam1)
{
	if (func_42(iParam0))
	{
		func_40(iParam0);
		return 0;
	}
	else
	{
		Stack.Push(0);
		Call_Loc(iParam1);
		if (func_44(StackVal, StackVal))
		{
			func_45(iParam0);
			return 1;
		}
		else
		{
			func_40(iParam0);
			return 0;
		}
	}
	return 0;
}

int func_36()
{
	return 234339543;
}

int func_37()
{
	return 225949718;
}

int func_38()
{
	return 206022678;
}

bool func_39()
{
	return func_196();
}

void func_40(int iParam0)
{
	func_197(&(Global_1940144->f_38), iParam0);
}

bool func_41(int iParam0)
{
	return func_199(func_198(iParam0));
}

bool func_42(int iParam0)
{
	return (Global_1940144->f_39 && iParam0) != 0;
}

int func_43()
{
	return func_200();
}

bool func_44(bool bParam0, int iParam1)
{
	if ((Global_1940258->f_6 || is_ped_dead_or_dying(Global_34, true)) || is_entity_dead(Global_34))
	{
		return false;
	}
	if (func_68() == 0)
	{
		if (func_8(131072))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 1))
	{
		if (func_8(1024))
		{
			return false;
		}
	}
	if (Global_1940258->f_16)
	{
		return false;
	}
	if (!func_201(iParam1, 2) && func_8(32))
	{
		return false;
	}
	if (!func_201(iParam1, 4))
	{
		if (func_8(4096))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 8) && func_8(512))
	{
		return false;
	}
	if (!func_201(iParam1, 512) && !func_202(bParam0))
	{
		return false;
	}
	if (!func_201(iParam1, 262144) && !func_203(bParam0, func_201(iParam1, 524288)))
	{
		return false;
	}
	if (!func_201(iParam1, 64) && !func_204(bParam0, iParam1, 1))
	{
		return false;
	}
	if (!func_201(iParam1, 128))
	{
		if (func_205(Global_34, 1868526510) || is_ped_on_mount(Global_34))
		{
			if (bParam0)
			{
				func_132("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_201(iParam1, 16))
	{
		if (func_206(Global_34))
		{
			iVar0 = get_mount(Global_34);
			if (!func_207(iVar0, 1))
			{
				if (bParam0)
				{
					func_132("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
				}
				return false;
			}
		}
	}
	if (!func_201(iParam1, 256) && func_8(8192))
	{
		return false;
	}
	if (!func_201(iParam1, 1024) && func_8(65536))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!func_201(iParam1, 2048))
	{
		if (func_8(32768))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 4096))
	{
		if (func_8(16384))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 8192))
	{
		if (!func_8(16))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 67108864))
	{
		if (!func_8(268435456))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 16384))
	{
		if (func_8(256))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 32768))
	{
		if (func_54())
		{
			if (bParam0)
			{
				func_132("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_201(iParam1, 131072))
	{
		if (!func_8(524288))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 65536))
	{
		if (!func_8(262144))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 1048576))
	{
		if (!func_8(2097152))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 2097152))
	{
		if (!func_8(8388608))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 4194304))
	{
		if (!func_8(16777216))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 8388608))
	{
		if (func_8(33554432))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 16777216))
	{
		if (func_8(67108864))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 33554432))
	{
		if (func_8(134217728))
		{
			return false;
		}
	}
	if (func_8(64))
	{
		return false;
	}
	else if (func_8(128))
	{
		return false;
	}
	else if (func_8(1048576))
	{
		return false;
	}
	else if (func_8(4))
	{
		return false;
	}
	if (!func_201(iParam1, 134217728))
	{
		if (func_208(256))
		{
			return false;
		}
	}
	return true;
}

void func_45(int iParam0)
{
	func_209(&(Global_1940144->f_38), iParam0);
}

int func_46()
{
	return 234086528;
}

int func_47()
{
	return 232439799;
}

int func_48()
{
	return 232341495;
}

int func_49()
{
	return 232407015;
}

var func_50()
{
	return Global_1940144->f_10;
}

var func_51()
{
	return Global_1940144->f_11;
}

var func_52()
{
	return Global_1940144->f_12;
}

var func_53()
{
	return Global_1940144->f_13;
}

bool func_54()
{
	return (Global_1940311->f_1 || &Global_1940311 == 1);
}

int func_55()
{
	return 234596352;
}

int func_56()
{
	return 226211840;
}

int func_57()
{
	return 234596496;
}

int func_58()
{
	return 217554935;
}

int func_59()
{
	return 150191252;
}

int func_60()
{
	return 233516164;
}

int func_61()
{
	return 234596496;
}

int func_62()
{
	return 99859463;
}

int func_63()
{
	return 234350720;
}

void func_64()
{
	Global_1940144->f_39 = 0;
}

bool func_65()
{
	if (func_28(0) || func_73())
	{
		return true;
	}
	iVar0 = func_210(0);
	if (func_211(iVar0, 0, 0, 0))
	{
		func_212(iVar0);
		return true;
	}
	return false;
}

void func_66(bool bParam0, bool bParam1, int iParam2)
{
	Global_1940311->f_4 = bParam0;
	Global_1940311->f_34 = iParam2;
	if (bParam1 || (func_213() && iParam2 == 0))
	{
		func_19(1);
		func_214(1);
	}
}

bool func_67()
{
	iVar0 = func_210(0);
	if (func_211(iVar0, 1, 0, 0))
	{
		func_212(iVar0);
		return true;
	}
	return false;
}

int func_68()
{
	return Global_1572887->f_13;
}

void func_69()
{
	func_215(-893403924, &(Global_1940311->f_10931), 600, -1, 0, 0);
	func_216();
}

int func_70(var uParam0)
{
	bVar0 = func_28(0);
	bVar1 = func_73();
	bVar2 = false;
	if (((!bVar0 && !bVar1) && Global_1940311->f_10892 != -156634416) && Global_1940311->f_10892 != 1061777683)
	{
		bVar2 = true;
	}
	Global_1940311->f_10902 = 1;
	Global_1940311->f_10905 = _databinding_get_data_container_from_path("satchel_menu_items");
	Global_1940311->f_10906 = _databinding_get_data_container_from_path("satchel_list_items");
	*uParam0 = _databinding_add_data_container_from_path("", "Satchel");
	Global_1940311->f_10919 = _databinding_add_data_hash(*uParam0, "PromptSelectLabel", -31549930);
	Global_1940311->f_10920 = _databinding_add_data_bool(*uParam0, "PromptSelectEnabled", true);
	Global_1940311->f_10921 = _databinding_add_data_bool(*uParam0, "PromptSelectVisible", true);
	Global_1940311->f_10922 = _databinding_add_data_hash(*uParam0, "PromptHoldSelectLabel", -1896040097);
	Global_1940311->f_10923 = _databinding_add_data_bool(*uParam0, "PromptHoldSelectEnabled", false);
	Global_1940311->f_10924 = _databinding_add_data_bool(*uParam0, "PromptHoldSelectVisible", false);
	Global_1940311->f_10927 = _databinding_add_data_string(*uParam0, "PromptDiscardAllLabel", _get_label_text_by_hash(140984675));
	Global_1940311->f_10925 = _databinding_add_data_bool(*uParam0, "PromptDiscardAllEnabled", bVar2);
	Global_1940311->f_10926 = _databinding_add_data_bool(*uParam0, "PromptDiscardAllVisible", bVar2);
	Global_1940311->f_10930 = _databinding_add_data_bool(*uParam0, "PromptDropVisibile", bVar2);
	Global_1940311->f_10928 = _databinding_add_data_hash(*uParam0, "PromptSendLabel", -31549930);
	if ((func_68() == -1 && func_28(0)) && Global_1915715->f_20241 == 2)
	{
		Global_1940311->f_10929 = _databinding_add_data_bool(*uParam0, "PromptSendAllVisible", true);
	}
	else
	{
		Global_1940311->f_10929 = _databinding_add_data_bool(*uParam0, "PromptSendAllVisible", false);
	}
	uVar3 = _databinding_add_data_container(*uParam0, "Selected");
	Global_1940311->f_10910 = _databinding_add_data_hash(uVar3, "Name", 0);
	Global_1940311->f_10911 = _databinding_add_data_hash(uVar3, "Description", 0);
	if (func_28(0) || func_24())
	{
		Global_1940311->f_10912 = _databinding_add_data_string(uVar3, "Price", "");
	}
	else
	{
		Global_1940311->f_10912 = _databinding_add_data_bool(uVar3, "Price", false);
	}
	if ((func_68() == -1 && func_28(0)) && Global_1915715->f_20241 == 2)
	{
		Global_1940311->f_10913 = _databinding_add_data_string(uVar3, "PriceLabel", "SHOP_SEND");
	}
	else if (Global_1915715->f_20241 == 29)
	{
		Global_1940311->f_10913 = _databinding_add_data_string(uVar3, "PriceLabel", "MATERIAL_VALUE");
	}
	else
	{
		Global_1940311->f_10913 = _databinding_add_data_string(uVar3, "PriceLabel", "SHOP_VALUE");
	}
	Global_1940311->f_10914 = _databinding_add_data_hash(uVar3, "Category", 0);
	Global_1940311->f_10908 = _databinding_add_data_int(uVar3, "DefaultCategoryIndex", 0);
	Global_1940311->f_10909 = _databinding_add_data_int(uVar3, "CategoryIndex", func_217());
	Global_1940311->f_10907 = _databinding_add_data_int(uVar3, "CategoryCount", 0);
	Global_1940311->f_10915 = _databinding_add_data_string(uVar3, "IndexDescription", "");
	Global_1940311->f_10916 = _databinding_add_data_string(uVar3, "Tip", "");
	Global_1940311->f_10917 = _0x9d21b185abc2dbc4(uVar3, "effects", 0, 0);
	Global_1940311->f_10918 = _databinding_add_data_hash(uVar3, "Folder", 0);
	Global_1940311->f_10904 = _databinding_get_data_container_from_path("satchel_category_items");
	func_218(Global_1940311->f_10904);
	_databinding_set_templated_ui_item_list_size(Global_1940311->f_10904, Global_1940311->f_10867);
	uVar4 = _databinding_add_ui_item_list(*uParam0, "Collections");
	iVar5 = 485071447;
	if (func_219(-593948563))
	{
		iVar5 = -1401261769;
	}
	iVar6 = func_220(uVar4, "player", iVar5, "ALL SATCHEL EXCLUDING CLOTHING", -1591664384);
	if (iVar6 < 0)
	{
		return 0;
	}
	if ((func_86() || func_88(Global_34, func_87(7), 1)) || (!(func_89(7) || func_90(7)) && func_28(0)))
	{
		func_220(uVar4, "saddle", -1186165261, "ALL EXCLUDING CLOTHING", 724026534);
	}
	func_109(iVar6, &uVar3);
	if (Global_1940311->f_8)
	{
		func_221(Global_1940311->f_10892);
		func_222(Global_1940311->f_10892, &uVar3, 0);
		func_66(1, 0, 0);
	}
	else
	{
		func_66(func_223(), 0, 0);
	}
	Global_1940311->f_8 = 0;
	return 1;
}

int func_71(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1346594033;
		case -1559802791:
			return -352057134;
		case -1268291907:
			return 845736308;
		case -96974025:
			return -2057617490;
		case -1666604090:
			return 991808728;
		case 1561961676:
			return -92112048;
		case -156634416:
			return 2047707540;
		case 1061777683:
			return -36657802;
		case 1783698482:
			return -1236163301;
		case -283002878:
			return 262409577;
		case -889932290:
			return 668180388;
		case -2074770370:
			return 1643818657;
		case -693134279:
			return -1077706770;
		case -182626652:
			if ((Global_1915715->f_20638 || Global_1915715->f_22504.f_1) && (Global_1915715->f_20241 == 16 || Global_1915715->f_20241 == 29))
			{
				return -332450398;
			}
			else
			{
				return -161395681;
			}
			break;
	}
	return 0;
}

int func_72(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1315938069;
		case -1559802791:
			return -1694952718;
		case -1268291907:
			return 1510785758;
		case -96974025:
			return 392871877;
		case -1666604090:
			return 92275361;
		case 1561961676:
			return 983460938;
		case -156634416:
			return -1579183876;
		case 1061777683:
			return -419081072;
		case 1783698482:
			return 2061483699;
		case -283002878:
			return -1202687131;
		case -889932290:
			return -1875341370;
		case -2074770370:
			return 89311517;
		case -693134279:
			return 1001811369;
		case -182626652:
			if (Global_1915715->f_20241 == 29)
			{
				return 89311517;
			}
			else
			{
				return 288697952;
			}
			break;
	}
	return 0;
}

bool func_73()
{
	if (((Global_1940311->f_36 == 1 || Global_1940311->f_36 == 2) || func_24()) || func_25())
	{
		return true;
	}
	return false;
}

bool func_74(int iParam0)
{
	if (func_224())
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case -2074770370:
			_databinding_write_data_string(Global_1940311->f_10916, _get_label_text_by_hash(818738914));
			break;
		case -693134279:
			_databinding_write_data_string(Global_1940311->f_10916, _get_label_text_by_hash(-402412948));
			break;
		case -182626652:
			_databinding_write_data_string(Global_1940311->f_10916, _get_label_text_by_hash(-456150746));
			break;
		default:
			_databinding_write_data_string(Global_1940311->f_10916, "");
			break;
	}
	return 0;
}

void func_76(int iParam0)
{
	Global_1940311->f_37 = iParam0;
}

void func_77(int iParam0)
{
	Global_1940311->f_36 = iParam0;
}

void func_78(int iParam0)
{
	Global_1940311->f_11 = iParam0;
}

void func_79(var uParam0)
{
	display_radar(true);
	Global_1940311->f_1 = 0;
	func_225();
	func_226(uParam0);
	_0xd962f8579d702db5();
	_show_player_cores(false);
	_show_horse_cores(false);
	if (func_68() == -1)
	{
	}
	else
	{
		while (!func_227(0, 0) && iVar0 < 15)
		{
			iVar0++;
			disable_control_action(0, -1292666904, false);
			wait(0);
		}
	}
}

void func_80(int iParam0)
{
	(*Global_1913674)[iParam0]->f_1 = 3;
	(*Global_1913674)[iParam0] = 0;
	(*Global_1913674)[iParam0]->f_5 = 0;
}

void func_81(int iParam0)
{
	Global_1940311->f_10866 = (Global_1940311->f_10866 - (Global_1940311->f_10866 && iParam0));
}

bool func_82(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_83(int iParam0)
{
	switch (iParam0)
	{
		case -283002878:
			return 1;
		case -889932290:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_84(var uParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	iVar14 = 0;
	iVar14 = (*uParam0 - 1);
	while (iVar14 >= 0)
	{
		if (!func_228(&Var0, iVar14, func_83(Global_1940311->f_10892), *uParam0))
		{
		}
		else if (func_229(Var0.f_9))
		{
		}
		else if (!func_230(Var0.f_4, iParam1))
		{
		}
		else if (!func_231(Var0.f_4))
		{
		}
		else if (func_28(0))
		{
			if (!func_105(Var0.f_4, 0) || Var0.f_11 <= 0)
			{
			}
			else
			{
				if (Global_1940311->f_10893 == 0)
				{
					func_93(Var0.f_4);
				}
				func_232(Var0);
			}
			iVar14 = (iVar14 + -1);
		}
	}
}

void func_85(int iParam0)
{
	if (Global_1940311->f_38.f_203 > 16)
	{
		if (Global_1940311->f_6)
		{
			_databinding_write_data_string(Global_1940311->f_10915, _create_var_string(2, "ENTRY_COUNTER", iParam0 + 1, Global_1940311->f_10900));
		}
		else
		{
			_databinding_write_data_string(Global_1940311->f_10915, _create_var_string(2, "ENTRY_COUNTER", iParam0 + 1, Global_1940311->f_38.f_203));
		}
	}
	else
	{
		_databinding_write_data_string(Global_1940311->f_10915, "");
	}
}

bool func_86()
{
	if (func_28(0))
	{
		iVar0 = func_162(0);
		if (((!does_entity_exist(iVar0) || is_entity_dead(iVar0)) || is_ped_injured(iVar0)) || !network_has_control_of_entity(iVar0))
		{
			return false;
		}
		if (!func_233(Global_1915715->f_20241.f_1))
		{
			return false;
		}
		if (func_234(Global_1915715->f_20241.f_1, iVar0))
		{
			return true;
		}
	}
	else
	{
		if (func_68() == -1)
		{
			if (func_235(Global_34))
			{
				iVar0 = get_mount(Global_34);
			}
			else if (func_236(-283002878))
			{
				return true;
			}
		}
		else
		{
			iVar0 = _0xf49f14462f0ae27c(get_player_index());
		}
		if (((!does_entity_exist(iVar0) || is_entity_dead(iVar0)) || is_ped_injured(iVar0)) || !network_has_control_of_entity(iVar0))
		{
			return false;
		}
		if (func_237(iVar0, 0, 1) < 1.7f || func_236(-283002878))
		{
			return true;
		}
	}
	return false;
}

int func_87(int iParam0)
{
	iParam0 = func_238(iParam0);
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

bool func_88(int iParam0, int iParam1, bool bParam2)
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

int func_89(int iParam0)
{
	iParam0 = func_238(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_239(iParam0))
	{
		return 0;
	}
	iVar0 = func_87(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_90(int iParam0)
{
	iParam0 = func_238(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_239(iParam0))
	{
		return 0;
	}
	iVar0 = func_87(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
	}
	vVar1 = { get_entity_coords(iVar0, true, false) };
	vVar4 = { get_entity_coords(Global_34, true, false) };
	if (func_240(vVar1, vVar4) > func_241(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_91(int iParam0, int iParam1)
{
	if (!func_242(Global_1940311->f_10883[iParam0]->f_1))
	{
		return false;
	}
	return func_243("ALL EXCLUDING CLOTHING", &(Global_1940311->f_10883[iParam0]->f_1), Global_1940311->f_10883[iParam0], iParam1, 0);
}

bool func_92()
{
	return Global_1940311->f_9;
}

void func_93(int iParam0)
{
	Global_1940311->f_10893 = iParam0;
}

void func_94(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (Global_1940311->f_10892 == 0)
	{
		return;
	}
	iVar1 = 0;
	if (iParam3 == 0 && *uParam1 > 16)
	{
		iVar1 = (*uParam1 - 16);
	}
	iVar0 = 0;
	while (iVar0 < Global_1940311->f_38.f_1)
	{
		Global_1940311->f_38.f_2[iVar0] = 0;
		Global_1940311->f_38.f_2[iVar0]->f_1 = 0;
		iVar0++;
	}
	Global_1940311->f_38.f_1 = 0;
	iVar0 = 0;
	if (*uParam1 > 0)
	{
		iVar0 = (*uParam1 - 1);
		while (iVar0 >= iVar1)
		{
			if (!func_228(uParam2, iVar0, uParam1->f_1, *uParam1))
			{
			}
			else if (!func_244(uParam2, iParam3))
			{
			}
			else
			{
				func_245(uParam2->f_4);
			}
			iVar0 = (iVar0 + -1);
		}
	}
}

void func_95()
{
	Global_1940311->f_10897 = 0;
	Global_1940311->f_10896 = 0;
	if (func_246())
	{
		if (_is_ped_carrying(Global_34))
		{
			iVar2 = create_itemset(false);
			find_all_attached_carriable_entities(Global_34, iVar2);
			if (is_itemset_valid(iVar2))
			{
				iVar3 = get_itemset_size(iVar2);
				iVar4 = 0;
				while (iVar4 < iVar3)
				{
					iVar0 = _get_entity_from_item(get_indexed_item_in_itemset(iVar4, iVar2));
					if (!does_entity_exist(iVar0))
					{
					}
					else
					{
						iVar1 = func_247(iVar0);
						if (func_231(iVar1))
						{
							Global_1940311->f_10897 = iVar0;
							Global_1940311->f_10896 = iVar1;
						}
					}
					iVar4++;
				}
				destroy_itemset(iVar2);
			}
		}
	}
}

void func_96()
{
	bVar0 = false;
	bVar1 = false;
	if (func_28(0))
	{
		iVar2 = func_248();
		if (((iVar2 == 10 || iVar2 == 15) || iVar2 == 29) || iVar2 == 16)
		{
			if (Global_1940311->f_10892 == -283002878 || (Global_1940311->f_10892 == -182626652 && func_86()))
			{
				bVar0 = true;
			}
		}
		else if (func_248() == 16)
		{
			if (Global_1940311->f_10892 == -283002878 || Global_1940311->f_10892 == -182626652)
			{
				bVar0 = true;
			}
		}
		else if (func_248() == 2 && Global_1940311->f_10892 == -693134279)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			bVar1 = true;
		}
	}
	else if (Global_1940311->f_10892 == -283002878)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_68() == 0)
		{
			func_249(1, bVar1);
		}
		else if (func_248() == 16)
		{
			func_250(1, 1);
		}
		else
		{
			func_249(1, 1);
		}
	}
}

void func_97()
{
	bVar0 = false;
	if (func_28(0))
	{
		iVar1 = func_248();
		if (((iVar1 == 10 || iVar1 == 15) || iVar1 == 29) || iVar1 == 16)
		{
			if (Global_1940311->f_10892 == -889932290 || (Global_1940311->f_10892 == -182626652 && func_100()))
			{
				bVar0 = true;
			}
		}
		else if (func_248() == 16)
		{
			if (Global_1940311->f_10892 == -889932290 || Global_1940311->f_10892 == -182626652)
			{
				bVar0 = true;
			}
		}
		else if (func_248() == 2 && Global_1940311->f_10892 == -693134279)
		{
			bVar0 = true;
		}
	}
	else if (Global_1940311->f_10892 == -889932290)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_68() == 0)
		{
			func_251(1);
		}
	}
}

void func_98()
{
	if ((Global_1940311->f_10892 == 1783698482 || Global_1940311->f_10892 == -693134279) || ((Global_1915715->f_20241 == 38 && func_28(0)) && Global_1940311->f_10892 == -182626652))
	{
		if (func_252(0) && _0x6bab7aced1017204(-534000547, 0))
		{
			func_253(weekly_collectible_get_item_set_buy_award(1332470872, 0));
		}
	}
	if (func_254(56759509))
	{
		func_253(_0xcc644bc1dd655269(56759509, 0));
	}
	if (func_254(2145533727))
	{
		func_253(_0xcc644bc1dd655269(2145533727, 0));
	}
	if (func_254(1632674359))
	{
		func_253(_0xcc644bc1dd655269(1632674359, 0));
	}
	if (func_254(332438661))
	{
		func_253(_0xcc644bc1dd655269(332438661, 0));
	}
	if (func_254(-1452445456))
	{
		func_253(_0xcc644bc1dd655269(-1452445456, 0));
	}
	if (func_254(-623226361))
	{
		func_253(_0xcc644bc1dd655269(-623226361, 0));
	}
	if (func_254(-1874365462))
	{
		func_253(_0xcc644bc1dd655269(-1874365462, 0));
	}
	if (func_254(-1658668866))
	{
		func_253(_0xcc644bc1dd655269(-1658668866, 0));
	}
	if (func_254(1997097980))
	{
		func_253(_0xcc644bc1dd655269(1997097980, 0));
	}
	if (func_254(90781239))
	{
		func_253(_0xcc644bc1dd655269(90781239, 0));
	}
	if (func_254(920487791))
	{
		func_253(_0xcc644bc1dd655269(920487791, 0));
	}
	if (func_254(-668555046))
	{
		func_253(_0xcc644bc1dd655269(-668555046, 0));
	}
	if (func_254(-839148413))
	{
		func_253(_0xcc644bc1dd655269(-839148413, 0));
	}
	if (func_254(10424351))
	{
		func_253(_0xcc644bc1dd655269(10424351, 0));
	}
	if (func_254(773314749))
	{
		func_253(_0xcc644bc1dd655269(773314749, 0));
	}
	if (func_254(-246025274))
	{
		func_253(_0xcc644bc1dd655269(-246025274, 0));
	}
	if (func_254(-41527693))
	{
		func_253(_0xcc644bc1dd655269(-41527693, 0));
	}
}

void func_99(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		func_255(uParam2, iParam3);
	}
	else
	{
		iVar1 = 0;
		if (*uParam1 > 0)
		{
			iVar0 = (*uParam1 - 1);
			while (iVar0 >= 0)
			{
				if (!func_228(uParam2, iVar0, uParam1->f_1, *uParam1))
				{
				}
				else if (!func_244(uParam2, iParam3))
				{
				}
				else
				{
					func_256(*uParam2, 0);
					iVar1++;
					if (iParam3 == 0 && iVar1 >= 16)
					{
					}
					else
					{
						iVar0 = (iVar0 + -1);
					}
				}
			}
		}
	}
}

bool func_100()
{
	if (func_68() == -1)
	{
		return false;
	}
	if (!func_257())
	{
		return false;
	}
	iVar0 = _0xb9050a97594c8832(player_id());
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (func_258(iVar0))
	{
		return false;
	}
	if (func_28(0))
	{
		if (func_259(Global_1915715->f_20241.f_1, iVar0))
		{
			return true;
		}
	}
	else if (func_237(iVar0, 0, 1) < 3.7f || func_236(-889932290))
	{
		return true;
	}
	return false;
}

void func_101()
{
	switch (Global_1940311->f_10892)
	{
		case -156634416:
			func_260();
			break;
		case 1561961676:
			break;
	}
}

void func_102()
{
	if (func_105(Global_1940311->f_10896, 0) && (!func_86() || func_173(func_162(0), Global_1940311->f_10896, 0, 1, 1) == 0))
	{
		func_261(Global_1940311->f_10896, 0, 1);
	}
}

void func_103()
{
	if (!func_105(Global_1940311->f_10893, 0))
	{
		Global_1940311->f_6 = 0;
	}
	else if ((((func_10(Global_1940311->f_10893, 1224357681) != 0 && Global_1940311->f_10892 != 0) && Global_1940311->f_10892 != -2074770370) && !Global_1915715->f_20638) && !Global_1915715->f_22504.f_1)
	{
		Global_1940311->f_6 = 1;
	}
	else
	{
		Global_1940311->f_6 = 0;
	}
}

int func_104(var uParam0)
{
	iVar0 = Global_1940311->f_10893;
	iVar1 = _databinding_read_data_hash_string_from_parent(*uParam0, "item");
	if (!func_105(Global_1940311->f_10893, 0) || iVar1 != Global_1940311->f_10893)
	{
		iVar0 = iVar1;
	}
	if (func_111(iVar0, -189374246))
	{
		func_262();
		_databinding_write_data_hash_string(Global_1940311->f_10910, _databinding_read_data_hash_string_from_parent(*uParam0, "label"));
		_databinding_write_data_hash_string(Global_1940311->f_10911, func_263(iVar0));
	}
	return iVar0;
}

bool func_105(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_106(var uParam0)
{
	uVar0 = _databinding_read_data_hash_string_from_parent(uParam0, "label");
	return uVar0;
}

void func_107(int iParam0, var uParam1)
{
	bVar0 = true;
	if (func_105(iParam0, 0))
	{
		if (func_111(iParam0, 1147021565))
		{
			if (Global_1940311->f_10892 == -283002878)
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (!func_28(0))
			{
				iVar2 = func_264(iParam0);
				if (func_111(iParam0, 1573112293) && !func_265(iVar2))
				{
					bVar0 = false;
					_0xd962f8579d702db5();
				}
				else
				{
					_0x7e2c766adb2c5f1a(iParam0, iVar1);
				}
			}
		}
		func_266(iParam0, uParam1);
		bVar3 = false;
		bVar4 = func_267(iParam0);
		bVar5 = false;
		bVar6 = false;
		bVar7 = false;
		iVar8 = 0;
		if ((func_111(iParam0, -1472964441) && func_165(iParam0)) && !func_28(0))
		{
			bVar5 = true;
			if (func_166())
			{
				if (func_167(iParam0))
				{
					_databinding_write_data_bool(Global_1940311->f_10921, false);
					_databinding_write_data_bool(Global_1940311->f_10920, false);
					if (!func_268())
					{
						bVar4 = true;
						bVar6 = true;
					}
				}
				else
				{
					iVar8 = func_269(iParam0, 1);
					if (iVar8 == 0 || iVar8 == 2)
					{
						_databinding_write_data_bool(Global_1940311->f_10921, false);
						_databinding_write_data_hash_string(Global_1940311->f_10922, -31549930);
						_databinding_write_data_bool(Global_1940311->f_10923, true);
						_databinding_write_data_bool(Global_1940311->f_10924, true);
					}
					else
					{
						_databinding_write_data_bool(Global_1940311->f_10920, false);
					}
					bVar7 = true;
				}
			}
			else
			{
				iVar8 = func_269(iParam0, 1);
				if (iVar8 != 0)
				{
					_databinding_write_data_bool(Global_1940311->f_10920, false);
				}
			}
		}
		if (func_10(iParam0, 1224357681) == -1529210462 || func_10(iParam0, 1224357681) == -1414243429)
		{
			_databinding_write_data_hash_string(Global_1940311->f_10919, 1155235276);
		}
		iVar9 = 0;
		iVar10 = 0;
		iVar11 = 0;
		iVar13 = 0;
		iVar14 = 0;
		iVar9 = func_270(iParam0, 0, 0, 0);
		if (func_86())
		{
			iVar10 = func_271(_0xf49f14462f0ae27c(player_id()), iParam0);
			if (iVar10 > 0)
			{
				iVar15 = 0;
				while (iVar15 < 3)
				{
					if (Global_1904087->f_113[iVar15]->f_1 == iParam0)
					{
						if (does_entity_exist(Global_1291734->f_938.f_245[iVar15]->f_3))
						{
							iVar13++;
							if (network_has_control_of_entity(Global_1291734->f_938.f_245[iVar15]->f_3))
							{
								iVar14++;
							}
						}
					}
					iVar15++;
				}
			}
		}
		if (func_100())
		{
			iVar11 = func_272(iParam0, 1);
		}
		if (iParam0 == Global_1940311->f_10896)
		{
			iVar9++;
			iVar13++;
			if (does_entity_exist(Global_1940311->f_10897))
			{
				if (network_has_control_of_entity(Global_1940311->f_10897))
				{
					iVar14++;
				}
			}
		}
		iVar12 = ((iVar9 + iVar10) + iVar11);
		iVar16 = func_273(iParam0, 0);
		_databinding_write_data_hash_string(Global_1940311->f_10910, func_274(iParam0));
		_databinding_write_data_hash_string(Global_1940311->f_10911, func_263(iParam0));
		if (bVar4)
		{
			if (iVar14 > 0 || iVar13 <= 0)
			{
				_databinding_write_data_bool(Global_1940311->f_10930, true);
			}
			else
			{
				_databinding_write_data_bool(Global_1940311->f_10930, false);
				bVar4 = false;
			}
		}
		else
		{
			_databinding_write_data_bool(Global_1940311->f_10930, false);
		}
		if (bVar4 && iVar12 > 1)
		{
			bVar3 = true;
		}
		_databinding_write_data_bool(Global_1940311->f_10926, bVar3);
		_databinding_write_data_bool(Global_1940311->f_10925, (bVar3 && iVar14 == iVar13));
		bVar17 = true;
		if (func_28(0) || func_73())
		{
			fVar18 = (to_float(func_275(iParam0)) / 100f);
			fVar19 = (to_float(func_277(func_276(iParam0), 770694722)) / 100f);
			if (((func_111(iParam0, 1064293907) || _0x245d07651b1d183b(iParam0, 1073741824)) || func_111(iParam0, -1257428961)) || func_111(iParam0, 173360570))
			{
				if (func_278())
				{
					fVar19 = (fVar19 * 1.25f);
				}
			}
			else if ((_0x245d07651b1d183b(iParam0, 268435456) || _0x245d07651b1d183b(iParam0, 134217728)) || func_111(iParam0, 1888974372))
			{
				fVar19 = (fVar19 * 0.4f);
			}
			else if (func_111(iParam0, 1286414894) || func_111(iParam0, 1686880204))
			{
				fVar19 = (fVar19 * 0.6f);
			}
			if (Global_1915715->f_20241 == 2)
			{
				_databinding_write_data_string(Global_1940311->f_10912, _create_var_string(10, "SEND_ITEM_VALUE", func_279(_0x2b6846401d68e563(fVar18, 2), 109029619)));
			}
			else if (Global_1915715->f_20241 == 29)
			{
				_databinding_write_data_string(Global_1940311->f_10912, func_279(_0x2b6846401d68e563(fVar19, 2), 109029619));
			}
			else
			{
				_databinding_write_data_string(Global_1940311->f_10912, _create_var_string(10, "SHOP_ITEM_VALUE", func_279(_0x2b6846401d68e563(fVar18, 2), 109029619)));
			}
			if (!func_280(iParam0, Global_1915715->f_20241.f_1) && !func_73())
			{
				bVar17 = false;
			}
			if (func_248() == 29 && func_281(iParam0))
			{
				bVar17 = false;
			}
		}
		if (bVar5)
		{
			_databinding_write_data_string(Global_1940311->f_10916, _create_var_string(2, "SATCHEL_TIP_UNIQUE"));
			if (bVar6)
			{
				_databinding_write_data_string(Global_1940311->f_10916, _create_var_string(2, "SATCHEL_TIP_COLLECTORS_MAP_DISCARD"));
			}
			else if (bVar7)
			{
				if (iVar8 == 0 || iVar8 == 2)
				{
					_databinding_write_data_string(Global_1940311->f_10916, _create_var_string(2, "SATCHEL_TIP_COLLECTORS_MAP"));
				}
				else
				{
					_databinding_write_data_string(Global_1940311->f_10916, _create_var_string(2, func_282(iVar8)));
				}
			}
			else if (iVar8 != 0)
			{
				_databinding_write_data_string(Global_1940311->f_10916, _create_var_string(2, func_282(iVar8)));
			}
		}
		else if (-492264119 == iParam0 && !func_283())
		{
			_databinding_write_data_string(Global_1940311->f_10916, _create_var_string(2, "SATCHEL_TIP_CANT_READ_LETTER"));
		}
		else if (bVar17)
		{
			if (iVar16 > 1)
			{
				if ((func_248() == 38 && func_105(iParam0, 0)) && func_111(iParam0, 474910316))
				{
					_databinding_write_data_string(Global_1940311->f_10916, "");
					func_112(iParam0, 56759509);
					func_112(iParam0, 1632674359);
					func_112(iParam0, 2145533727);
					func_112(iParam0, -623226361);
					func_112(iParam0, 332438661);
					func_112(iParam0, -1658668866);
					func_112(iParam0, 1997097980);
					func_112(iParam0, 90781239);
					func_112(iParam0, -1874365462);
					func_112(iParam0, 920487791);
					func_112(iParam0, -668555046);
					func_112(iParam0, -839148413);
					func_112(iParam0, 10424351);
					func_112(iParam0, -1452445456);
					func_112(iParam0, 773314749);
					func_112(iParam0, -246025274);
					func_112(iParam0, -41527693);
				}
				else if (iVar12 >= iVar16)
				{
					_databinding_write_data_string(Global_1940311->f_10916, _create_var_string(2, "SATCHEL_TIP_CAPACITY_FULL", iVar12, iVar16));
				}
				else
				{
					_databinding_write_data_string(Global_1940311->f_10916, _create_var_string(2, "SATCHEL_TIP_CAPACITY", iVar12, iVar16));
				}
			}
			else if (iVar16 == 1)
			{
				_databinding_write_data_string(Global_1940311->f_10916, _create_var_string(2, "SATCHEL_TIP_UNIQUE"));
			}
			else
			{
				_databinding_write_data_string(Global_1940311->f_10916, _create_var_string(2, "SATCHEL_TIP_INFINITE", iVar12));
			}
		}
		else if (func_248() == 2)
		{
			_databinding_write_data_string(Global_1940311->f_10916, "");
		}
		else if (func_248() == 29)
		{
			if (func_281(iParam0))
			{
				_databinding_write_data_string(Global_1940311->f_10916, _create_var_string(2, "SHOP_H_NOT_SKINNED_ITEM"));
			}
			else
			{
				_databinding_write_data_string(Global_1940311->f_10916, _create_var_string(2, "SHOP_H_NOT_ACCEPTED_CRIPPS"));
			}
		}
		else if ((func_284(func_248()) && does_entity_exist(Global_1051439->f_72[func_248()]->f_20)) && !is_ped_male(Global_1051439->f_72[func_248()]->f_20))
		{
			_databinding_write_data_string(Global_1940311->f_10916, _create_var_string(2, "SHOP_H_NOT_ACCEPTED_ITEM_F"));
		}
		else
		{
			_databinding_write_data_string(Global_1940311->f_10916, _create_var_string(2, "SHOP_H_NOT_ACCEPTED_ITEM"));
		}
	}
	else
	{
		iVar20 = iParam0;
		if (func_285(iVar20))
		{
			fVar21 = (to_float(func_286(iVar20)) / 100f);
			_databinding_write_data_hash_string(Global_1940311->f_10910, iVar20);
			Var22.f_2 = 5;
			Var22.f_18 = 8;
			if (_0xf8d09ef8ce61d7bf(iVar20, &Var22))
			{
				_databinding_write_data_hash_string(Global_1940311->f_10911, Var22.f_1);
			}
			else
			{
				_databinding_write_data_hash_string(Global_1940311->f_10911, 0);
			}
			if (func_28(0))
			{
				_databinding_write_data_string(Global_1940311->f_10912, _create_var_string(10, "SHOP_ITEM_VALUE", func_279(_0x2b6846401d68e563(fVar21, 2), 109029619)));
			}
			else
			{
				_databinding_write_data_string(Global_1940311->f_10912, "");
			}
			if (iVar20 == weekly_collectible_get_item_set_buy_award(1332470872, 0))
			{
				func_113();
			}
			else
			{
				iVar57 = _0x9adee485726025d4(iVar20);
				if (iVar57 != 0)
				{
					func_287(iVar20);
				}
			}
		}
		else
		{
			_databinding_write_data_hash_string(Global_1940311->f_10910, func_71(Global_1940311->f_10892));
			_databinding_write_data_hash_string(Global_1940311->f_10911, func_72(Global_1940311->f_10892));
			_databinding_write_data_string(Global_1940311->f_10916, "");
		}
	}
	if (!bVar0)
	{
		_0x75cfac49301e134f(Global_1940311->f_10917, 0, 0);
	}
	else
	{
		_0x75cfac49301e134f(Global_1940311->f_10917, iParam0, 0);
	}
	func_93(iParam0);
}

void func_108(int iParam0, int iParam1)
{
	if (!func_105(iParam1, 0))
	{
		return;
	}
	if ((!func_111(iParam1, 747873593) && !func_111(iParam1, -1661502552)) && !func_111(iParam1, 2108217528))
	{
		return;
	}
	if (iParam1 != Global_1913674[iParam0])
	{
		(*Global_1913674)[iParam0]->f_1 = 3;
		(*Global_1913674)[iParam0] = iParam1;
		(*Global_1913674)[iParam0]->f_5 = 0;
	}
}

void func_109(int iParam0, var uParam1)
{
	Global_1940311->f_10890 = iParam0;
	if (func_25())
	{
		if (_is_ped_carrying(Global_34) == 0)
		{
			func_221(-1559802791);
		}
	}
	if (func_24())
	{
		func_221(-2074770370);
	}
	func_222(Global_1940311->f_10892, uParam1, 0);
}

void func_110(int iParam0, var uParam1)
{
	_databinding_write_data_hash_string(Global_1940311->f_10910, iParam0);
	_databinding_write_data_hash_string(Global_1940311->f_10911, func_288(iParam0));
	_databinding_write_data_hash_string(Global_1940311->f_10918, iParam0);
	func_93(0);
	_0x75cfac49301e134f(Global_1940311->f_10917, 0, 0);
	_databinding_write_data_string(Global_1940311->f_10916, "");
	_databinding_write_data_bool(Global_1940311->f_10930, false);
	_databinding_write_data_bool(Global_1940311->f_10926, false);
	_databinding_write_data_bool(Global_1940311->f_10925, false);
	func_289(uParam1);
}

bool func_111(int iParam0, int iParam1)
{
	if (!func_105(iParam0, 0))
	{
		return func_291(func_290(iParam0), iParam1);
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

int func_112(int iParam0, int iParam1)
{
	iVar0 = _0xcc644bc1dd655269(iParam1, 0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_292(iVar0, -489628648, &Var1, &iVar32, 0, 1))
	{
		return 0;
	}
	iVar33 = 0;
	while (iVar33 < iVar32)
	{
		if (&Var1[iVar33] == 0)
		{
		}
		else
		{
			if (&Var1[iVar33] == iParam0)
			{
				bVar36 = true;
			}
			iVar33++;
		}
	}
	if (!bVar36)
	{
		return 0;
	}
	iVar33 = 0;
	while (iVar33 < iVar32)
	{
		if (func_293(&(Var1[iVar33]), 1))
		{
			iVar34++;
		}
		iVar35++;
		iVar33++;
	}
	if (iVar34 >= iVar35)
	{
		_databinding_write_data_string(Global_1940311->f_10916, _create_var_string(2, "SATCHEL_TIP_COLLECTION_COMPLETE", iVar34, iVar35));
	}
	else
	{
		_databinding_write_data_string(Global_1940311->f_10916, _create_var_string(2, "SATCHEL_TIP_COLLECTION", iVar34, iVar35));
	}
	return 1;
}

int func_113()
{
	iVar0 = weekly_collectible_get_item_set_buy_award(1332470872, 0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_292(iVar0, -489628648, &Var1, &iVar32, 0, 1))
	{
		return 0;
	}
	iVar33 = 0;
	while (iVar33 < iVar32)
	{
		if (func_293(&(Var1[iVar33]), 1))
		{
			iVar34++;
		}
		iVar35++;
		iVar33++;
	}
	if (iVar34 >= iVar35)
	{
		_databinding_write_data_string(Global_1940311->f_10916, _create_var_string(2, "SATCHEL_TIP_COLLECTION_COMPLETE", iVar34, iVar35));
	}
	else
	{
		_databinding_write_data_string(Global_1940311->f_10916, _create_var_string(2, "SATCHEL_TIP_COLLECTION", iVar34, iVar35));
	}
	return 1;
}

bool func_114(int iParam0, var uParam1)
{
	return _0xf8d09ef8ce61d7bf(iParam0, uParam1);
}

void func_115(int iParam0)
{
	Global_1940311->f_10868 = _databinding_read_data_int(Global_1940311->f_10909);
	iVar0 = &Global_1940311->f_10869[Global_1940311->f_10868];
	if (iVar0 != Global_1940311->f_10892)
	{
		Global_1940311->f_38.f_203 = 0;
		Global_1940311->f_10890 = func_83(iVar0);
		uVar1 = _databinding_get_data_container_from_child_index(Global_1940311->f_10904, iParam0);
		_databinding_write_data_bool_from_parent(uVar1, "CurrentCategory", false);
		uVar2 = _databinding_get_data_container_from_child_index(Global_1940311->f_10904, Global_1940311->f_10868);
		_databinding_write_data_bool_from_parent(uVar2, "CurrentCategory", true);
		func_222(iVar0, &uVar2, 0);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < Global_1940311->f_10867)
		{
			uVar4 = _databinding_get_data_container_from_child_index(Global_1940311->f_10904, iVar3);
			bVar5 = _databinding_read_data_bool_from_parent(uVar4, "CurrentCategory");
			bVar6 = !&Global_1940311->f_10869[iVar3] != Global_1940311->f_10892;
			if (bVar5 != bVar6)
			{
				_databinding_write_data_bool_from_parent(uVar4, "CurrentCategory", bVar6);
			}
			iVar3++;
		}
		Global_1940311->f_10890 = func_83(Global_1940311->f_10892);
	}
}

bool func_116(int iParam0, int iParam1)
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
	if (func_82(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_82(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_82(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_82(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_82(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_82(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_82(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_82(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_117(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_294(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_295(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_155(iParam0, bParam4, 0) };
	Var6 = { func_156(iParam0, Var1, Var1.f_4, bParam4) };
	return func_296(iParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

bool func_118(int iParam0, bool bParam1)
{
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	if (Global_1940311->f_7)
	{
		return false;
	}
	if (((iParam0 != 1259508039 && iParam0 != -1838434463) && iParam0 != 2019377485) && bParam1)
	{
		iVar0 = func_297(iParam0);
		if (func_111(iParam0, 1147021565))
		{
			iVar0 |= 64;
		}
		if (!func_44(1, iVar0))
		{
			return false;
		}
	}
	if (iParam0 == -1448210800 || iParam0 == -2035110427)
	{
		if (func_190())
		{
			return false;
		}
	}
	if (!func_293(iParam0, 1))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

bool func_119(int iParam0)
{
	if (func_128(iParam0))
	{
		return false;
	}
	if (!_0x3d10d7179d7034af(func_210(0), iParam0, func_28(0)))
	{
		return false;
	}
	switch (iParam0)
	{
		case -1838434463:
		case 2019377485:
			func_178(1, 1);
			_0x565eaa726b2ce3b7(0);
			return true;
		case 1807503187:
			if (func_298() != -1)
			{
				func_132(func_299(), 10000, 0, 0, 0, 1);
				func_300(-1);
			}
			break;
	}
	return true;
}

bool func_120(int iParam0)
{
	if (iParam0 == 17745825)
	{
		StringCopy(&(Var0.f_10), "legendary_animal_map", 32);
		Var0.f_14 = 512;
		func_126(Var0, 0);
		return true;
	}
	return false;
}

void func_121(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, bool bParam28, int iParam29)
{
}

void func_122(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
}

void func_123(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
}

bool func_124(int iParam0)
{
	if (func_68() == 0 && func_302(func_301(iParam0), 1, 0) != 0)
	{
		func_132("NET_ALOOT_HELP_OPEN_FAIL", 10000, 0, 0, 0, 1);
		return false;
	}
	return true;
}

bool func_125(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_303(iParam0, bParam1, 0, 0, -1082130432))
	{
		Global_1913503 = get_game_timer() + 3000;
		return true;
	}
	switch (func_10(iParam0, -949239683))
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
				if (!func_304())
				{
					if (func_305(&Global_34))
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
					func_132("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
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
					func_306(iParam0);
				}
				else
				{
					func_307(iParam0);
				}
				return true;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_308(iParam0, 1);
				return true;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_309(iParam0, 1);
				return true;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				func_310(iParam0);
				return true;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_306(iParam0);
				}
				else
				{
					func_311(iParam0);
				}
				return true;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_306(iParam0);
				}
				else
				{
					func_312(iParam0);
				}
				return true;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_306(iParam0);
				}
				else
				{
					func_313(iParam0);
				}
				return true;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_306(iParam0);
				}
				else
				{
					func_314(iParam0);
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
				func_315(iParam0);
				return true;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_316(iParam0);
				return true;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_317(iParam0);
				return true;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_306(iParam0);
				return true;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_318(iParam0, bParam3);
				return true;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_319(iParam0, bParam3);
				return true;
			}
			break;
	}
	return false;
}

void func_126(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1939493->f_161 >= 10)
	{
		return;
	}
	if (!func_320(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_321(&(Param0.f_10)))
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
			func_322(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_127()
{
	return Global_1893587 & 2 != 0;
}

bool func_128(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	if (func_130(iParam0) == -1650247667)
	{
		return true;
	}
	return false;
}

int func_129(int iParam0)
{
	return func_323(iParam0);
}

int func_130(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_131(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (func_130(iParam0) == -1037537535)
	{
		if (func_133(iParam0) == -999503751)
		{
		}
	}
	return true;
}

var func_132(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_133(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_134()
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

bool func_135(int iParam0)
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

void func_136(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_324(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_325(Var0);
}

int func_137(int iParam0, bool bParam1)
{
	if (!func_196())
	{
		return 0;
	}
	if (!func_326(iParam0))
	{
		return 0;
	}
	if (func_327(iParam0))
	{
		iVar0 = 0;
		if ((func_133(iParam0) == 81053684 || func_111(iParam0, 160827531)) && !func_111(iParam0, -1303648999))
		{
			if (bParam1)
			{
				func_209(&iVar0, 2);
			}
		}
		return func_328(iParam0, iVar0);
	}
	return 0;
}

void func_138(int iParam0)
{
	iVar0 = 10;
	iVar1 = &Global_1952637->f_1675.f_1[iVar0];
	if (iVar1 == iParam0)
	{
		_0xcb9401f918cb0f75(Global_34, "PlayUnequipHatFidget", 1, 15);
		func_139(Global_34, -2065815962, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
		func_140(iParam0, 0, 0);
		return;
	}
	_0xcb9401f918cb0f75(Global_34, "PlayEquipHatFidget", 1, 15);
	func_139(Global_34, iParam0, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
	if (func_329(32768))
	{
		knock_off_ped_prop(Global_34, false, true, false, true);
		func_330();
		func_324(128);
		return;
	}
	if (iVar1 == &Global_1952637->f_83[iVar0])
	{
		func_140(iParam0, 1, 0);
		return;
	}
	if (func_331(-2061583405, 0))
	{
		if (func_219(iVar1))
		{
			func_140(iVar1, 0, 0);
		}
		else
		{
			func_332(iVar1, 1, 1, 0, 0, 0);
		}
		func_140(iParam0, 1, 0);
		return;
	}
	if (func_219(iVar1))
	{
		func_140(iVar1, 0, 0);
		func_140(iParam0, 1, 0);
	}
	else if (func_219(iParam0))
	{
		if (iParam0 != func_333(0))
		{
			func_334(iParam0, iVar1, 0, 0, 0);
			func_140(iParam0, 0, 0);
			func_140(iVar1, 0, 0);
		}
		else
		{
			knock_off_ped_prop(Global_34, false, true, false, true);
			func_324(128);
			func_140(iParam0, 1, 0);
		}
	}
}

int func_139(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_155(iParam1, 1, 0) };
		iParam3 = func_335(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_337(iParam1, iParam2, func_336(iParam3, 1), bParam4, 1, 0, 1))
	{
		return 0;
	}
	func_338(1, bParam5, bParam9, 1);
	if (bParam10)
	{
		if (func_339(iParam1, 0))
		{
			func_340(&(Global_1952637->f_1675.f_1[func_336(iParam3, 1)]), 0, 0);
		}
		else
		{
			func_340(iParam1, 1, 0);
		}
	}
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam7 && iParam1 != &Global_1952637->f_83[func_336(iParam3, 1)])
			{
				func_136(27, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_329(32768))
			{
				func_330();
				func_136(21, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return 1;
	}
	iVar5 = func_341(iParam3);
	if (bParam4)
	{
		iVar5 |= 2;
	}
	if (bParam8)
	{
		func_342(&iVar5, 4);
	}
	if (is_ped_a_player(iParam0))
	{
		func_136(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_136(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_140(int iParam0, int iParam1, bool bParam2)
{
	Var0 = { func_155(iParam0, bParam2, 0) };
	Var5 = { func_156(iParam0, Var0, Var0.f_4, bParam2) };
	if (func_343(iParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_210(bParam2), &Var5, iParam1);
}

int func_141(int iParam0, bool bParam1)
{
	iVar2 = 0;
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar7))
	{
		return 0;
	}
	Var8 = { func_156(889965687, func_344(bParam1), 1034665895, bParam1) };
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_3334.f_26)
	{
		iVar1 = &Global_1952637->f_3334[iVar0];
		if (func_133(iVar1) == iParam0 || (iParam0 == 81053684 && func_111(iVar1, 160827531)))
		{
			Var3 = { func_156(iVar1, Var8, iVar7, bParam1) };
			if (_0x70e3a884ed000a01(func_210(bParam1), &Var3))
			{
				iVar2 = iVar1;
				_0x65a5f70f4a292ebe(func_210(bParam1), &Var3, 0);
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_142(int iParam0, int iParam1)
{
	iParam0 = func_238(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_87(iParam0);
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
	if (func_345(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_143(int iParam0)
{
	iParam0 = func_238(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_87(iParam0);
	if (!does_entity_exist(iVar0))
	{
		if (iParam0 == func_346())
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

void func_144()
{
	if (func_347())
	{
		return;
	}
	if (func_348(8))
	{
		switch (Global_1051439->f_3629)
		{
			case 0:
				if (func_348(16))
				{
					if (is_ped_using_any_scenario(Global_34))
					{
						_0xf1c03a5352243a30(Global_34);
						clear_ped_tasks(Global_34, 1, 0);
					}
					func_349(16);
				}
				func_350(1);
				break;
			case 1:
				if (is_ped_using_any_scenario(Global_34))
				{
				}
				else
				{
					func_349(8);
					func_350(0);
				}
		}
		return;
	}
	if (func_351())
	{
		_task_item_interaction(player_ped_id(), 1807503187, -2005122350, 1, 0, -1082130432);
		Global_1915715->f_22504.f_1 = 1;
		Global_1051439->f_43 = 0;
		func_352();
	}
	else
	{
		iVar0 = func_354(func_353());
		if (iVar0 != -1)
		{
			func_132(func_299(), 10000, 0, 0, 0, 1);
			Global_1051439->f_3628 = 0;
			Global_1051439->f_3629 = 0;
			func_355(0);
			func_300(-1);
		}
	}
}

bool func_145(int iParam0, int iParam1)
{
	if ((!func_356() || !network_is_game_in_progress()) || !network_is_session_active())
	{
		return false;
	}
	if (!func_357(16))
	{
		return false;
	}
	if (func_358())
	{
		if (!_unlock_is_unlocked(-75008140))
		{
			return false;
		}
	}
	if (!func_359())
	{
		return false;
	}
	if (func_360(16))
	{
		return false;
	}
	iVar0 = _0x901e0dc25080c8b9(player_id());
	if (iParam1 == 1 && (!_0xd6f6acf4392187fb(iVar0) || !_0x424b17a7dc5c90bc(player_id())))
	{
		return false;
	}
	if (iParam0 == 1 && func_82(Global_1137047->f_8, 1))
	{
		return false;
	}
	if (func_148())
	{
		return false;
	}
	return true;
}

int func_146(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_361();
	}
	if (!func_362(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_363(iParam0);
	Global_1896738->f_386 = 1;
	Global_1896738->f_387 = bParam1;
	return 1;
}

bool func_147(int iParam0)
{
	return func_82(Global_1137047->f_8, iParam0);
}

bool func_148()
{
	iVar0 = func_364(player_id());
	if (iVar0 != -1)
	{
		if ((*Global_1131196)[iVar0]->f_18.f_1 != 0 && func_82((*Global_1131196)[iVar0]->f_18, 1))
		{
			return true;
		}
	}
	return false;
}

void func_149()
{
	Var0 = { func_365(0) };
	if (func_366(Var0))
	{
		if (Var0 == 6)
		{
			iVar2 = func_367(player_id(), 0);
			if (iVar2 != -1)
			{
				if (func_368(iVar2) == -785841056)
				{
					func_132("GC_SELECT_FAIL_POSSE_VERSUS", 10000, 0, 0, 0, 1);
				}
				else if (iVar2 == 1)
				{
					func_132("GC_SELECT_FAIL_CHALLENGE", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_132("GC_SELECT_FAIL_EVENT", 10000, 0, 0, 0, 1);
				}
			}
		}
		else
		{
			func_132("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
		}
	}
}

void func_150(int iParam0)
{
	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_6 = iParam0;
	Var0.f_4 = 56;
	func_370(Var0, func_369(0, 8), 0, 0);
}

int func_151(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_152(int iParam0, bool bParam1)
{
	func_371(iParam0, &iVar0, &iVar1);
	if (!func_372(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_373(iVar0, iVar1);
}

void func_153(bool bParam0)
{
	if ((func_68() != -1 || !bParam0) || func_235(Global_34))
	{
		func_374();
		return;
	}
}

void func_154()
{
	iVar0 = player_id();
	func_375(1, iVar0);
}

struct<5> func_155(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_344(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_130(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_156(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_376(bParam1) };
			if (bParam2 && func_377(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_378(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_378(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_379(iParam0, &Var6, 1728382685))
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
			Var0 = { func_380(bParam1) };
			switch (func_133(iParam0))
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
			if (func_381(iParam0, -1823706425))
			{
				Var0 = { func_156(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_381(iParam0, -1483207246))
			{
				Var0 = { func_156(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_156(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_381(iParam0, -1653629781))
			{
				Var0 = { func_156(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_382(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_381(iParam0, -1653629781))
			{
				Var0 = { func_156(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_156(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_105(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_210(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_157(struct<4> Param0, int iParam4, bool bParam5)
{
	if (!func_158(0))
	{
		return func_383(&Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_382(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_210(bParam5), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_158(bool bParam0)
{
	if (func_68() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_210(bParam0));
}

void func_159()
{
	if (!func_44(1, 124032))
	{
		return;
	}
	iVar0 = _0xda37a053c1522f5d(Global_34, 0, 0, 0);
	if (func_384(iVar0))
	{
		func_386(1, iVar0, func_385());
	}
	else
	{
		func_132("HELP_CANNOT_USE_GUN_OIL", 10000, 0, 0, 0, 1);
	}
}

int func_160(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = -1;
	iVar1 = func_387(iParam0);
	iVar2 = func_388(iParam0);
	if (iVar2 != 0)
	{
		if (!func_158(0) || func_389())
		{
			if (bParam2)
			{
				func_391(func_390(149041100, -1740237568), 1);
				return func_392(iVar2, iVar1, iParam0, iParam1);
			}
			Var3 = { func_155(iParam0, 1, 0) };
			Var8 = { func_156(iParam0, Var3, Var3.f_4, 1) };
			iVar12 = func_393(iParam0, &Var8, 1, -142743235, 0, 1);
			if (iVar12 != -1)
			{
				Var13.f_7 = -142743235;
				Var13.f_16 = -1;
				Var13 = 1;
				Var13.f_3 = 1;
				func_394(iVar12, Var13);
			}
			return 0;
		}
		if (func_169(iParam0, 1, 1, -142743235))
		{
			iVar0 = func_392(iVar2, iVar1, iParam0, iParam1);
		}
	}
	return iVar0;
}

bool func_161(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == 1453752912 || iParam0 == -1429211481)
	{
		return false;
	}
	if (func_111(iParam0, -887064662) || func_111(iParam0, -839724752))
	{
		if (bParam2)
		{
			return func_111(iParam0, -1238310989);
		}
		else if (bParam1)
		{
			return !func_111(iParam0, -1238310989);
		}
		else
		{
			return true;
		}
	}
	return false;
}

int func_162(int iParam0)
{
	return _0xf49f14462f0ae27c(get_player_index());
}

int func_163(int iParam0)
{
	return iParam0;
}

int func_164(int iParam0, int iParam1)
{
	if (func_68() == -1)
	{
		if (func_395(iParam0, iParam1))
		{
			return 1;
		}
		return 0;
	}
	if (func_68() == 0)
	{
		if (func_395(iParam0, iParam1))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

bool func_165(int iParam0)
{
	if (func_111(iParam0, 566155764))
	{
		return false;
	}
	if (func_111(iParam0, 2028734248))
	{
		return true;
	}
	return false;
}

bool func_166()
{
	return Global_17411.f_2966.f_21;
}

bool func_167(int iParam0)
{
	if (Global_17411.f_2966.f_17 == iParam0)
	{
		return true;
	}
	return false;
}

void func_168()
{
	func_396(&(Global_17411.f_2966), 3);
}

bool func_169(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	if (iParam3 == -142743235)
	{
		if (func_397(iParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_398(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = get_ped_ammo_by_type(Global_34, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return false;
		}
		_remove_ammo_from_ped_by_type(Global_34, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_399(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return false;
	}
	if (!func_293(iParam0, 1))
	{
		return false;
	}
	Var5 = { func_400(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_270(iParam0, 0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_270(iParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_169(iParam0, func_270(iParam0, 0, 0, 0), bParam2, iParam3);
			return false;
		}
	}
	if (func_130(iParam0) == -427144552)
	{
		if (!func_401(iParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_117(iParam0, iParam1, iParam3, bParam2, 0))
	{
		return false;
	}
	else
	{
		Var7 = { func_155(iParam0, 0, 0) };
		if (func_158(0) && Var7.f_4 == 1084182731)
		{
			func_66(1, 0, 0);
		}
	}
	if (iParam0 == -569063887)
	{
		Global_1940144->f_21 = 0;
	}
	if (!func_158(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_399(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return true;
}

int func_170()
{
	return Global_1940311->f_10892;
}

bool func_171(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iParam1 = func_402(iParam0, iParam1, 1, 1, -142743235, 0, 1);
	if (iParam1 <= 0)
	{
		return true;
	}
	return func_403(iParam0, iParam1, bParam2, iParam3);
}

bool func_172(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	if (bParam3)
	{
		if (!func_257())
		{
			return false;
		}
	}
	if (!func_404(iParam0, iParam1, iParam4, iParam2, 1))
	{
		return false;
	}
	func_405();
	return true;
}

int func_173(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_270(iParam1, bParam2, 0, 0);
	iVar0 = (iVar0 + func_271(iParam0, iParam1));
	if (bParam3)
	{
		iVar0 = (iVar0 + func_272(iParam1, bParam4));
	}
	return iVar0;
}

bool func_174(int iParam0)
{
	return (func_406(iParam0, 4) || func_406(iParam0, 5));
}

bool func_175(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_176(int iParam0)
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

bool func_177(bool bParam0)
{
	iVar0 = player_id();
	iVar1 = iVar0;
	if ((*Global_1138048)[iVar1]->f_4)
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_in_combat(Global_34, 0))
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_IN_COMBAT", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_407(player_id(), 1, 1, 0))
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_WANTED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_active_in_scenario(Global_34, 1))
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_408(-608558181) || _get_number_of_references_of_script_with_name_hash(-608558181) > 0)
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_minigame_in_progress())
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if ((((is_ped_in_any_vehicle(Global_34, false) || (!is_ped_ragdoll(Global_34) && is_ped_on_vehicle(Global_34, false))) || is_ped_in_any_boat(Global_34)) || is_player_riding_train(player_id())) || is_ped_jacking(Global_34))
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_192(0, 1, 1) && !func_409(1))
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_MISSIONS", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_410())
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_CAMERA", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_208(8))
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_ALREADY_IN_A_CAMP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_12(Global_34))
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_any_hostile_ped_near_point(Global_34, Global_35, 10f))
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_HOSTILE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_411())
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_interior_scene())
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (Global_1915715->f_20637 || Global_1915715->f_22504.f_1)
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_178(int iParam0, int iParam1)
{
	return _databinding_read_data_bool(Global_1940311->f_1433.f_54.f_85);
}

bool func_179(bool bParam0)
{
	if (_is_ped_hogtied(Global_34))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_HOGTIED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (_is_ped_hogtying(Global_34))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_HOGTYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (_is_ped_lassoed(Global_34))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_LASSOED", 10000, 0, 0, 0, 1);
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

bool func_180(bool bParam0)
{
	if (_is_ped_sliding(Global_34))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_SLIDING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_swimming(Global_34))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_SWIMMING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_climbing(Global_34))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_CLIMBING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_176(Global_34))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_SLEEPING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_falling(Global_34))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (_0x3e592d0486dec0f6(Global_34))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_ragdoll(Global_34))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_vaulting(Global_34))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_JUMPING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_getting_up(Global_34))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_181(bool bParam0)
{
	if (is_ped_hanging_on_to_vehicle(Global_34))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_HANGING_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_182()
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
	if (!func_366(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_183()
{
	return Global_1248240->f_9296 != -1;
}

bool func_184(float fParam0, int iParam1)
{
	if (((is_ped_in_combat(Global_34, 0) || is_ped_in_melee_combat(Global_34)) || func_201(iParam1, 1024)) && _0x336b3d200ab007cb(Global_34, Global_35, fParam0, iParam1) > 0)
	{
		return true;
	}
	return false;
}

bool func_185()
{
	return _0x2942457417a5fd24(Global_34) >= 1f;
}

bool func_186(bool bParam0)
{
	iVar0 = func_412();
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
			func_132("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!func_189(iVar0))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!is_entity_dead(iVar0) && !is_ped_in_writhe(iVar0))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!_0xd543d3a8fde4f185(Global_34, iVar0))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_187(bool bParam0)
{
	if (is_ped_on_mount(Global_34))
	{
		return true;
	}
	else if (_0x3ee1f7a8c32f24e1(get_player_index(), &iVar0, 0, 0))
	{
		if (!func_189(iVar0))
		{
			if (bParam0)
			{
				func_132("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (does_entity_exist(_0xe4770da1b8ff4fd1(get_ped_index_from_entity_index(iVar0))))
		{
			if (bParam0)
			{
				func_132("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (is_ped_in_writhe(get_ped_index_from_entity_index(iVar0)))
		{
			if (bParam0)
			{
				func_132("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (func_237(iVar0, 1, 1) > 2f)
		{
			if (bParam0)
			{
				func_132("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (!_0xd543d3a8fde4f185(Global_34, get_ped_index_from_entity_index(iVar0)))
		{
			if (bParam0)
			{
				func_132("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		return true;
	}
	iVar1 = _0x0501d52d24ea8934(1);
	if (!func_189(iVar1))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_in_writhe(iVar1))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (does_entity_exist(_0xe4770da1b8ff4fd1(iVar1)))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!_0xd543d3a8fde4f185(Global_34, iVar1))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_188(int iParam0)
{
	return func_406(iParam0, 7);
}

bool func_189(int iParam0)
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

bool func_190()
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

bool func_191()
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

bool func_192(int iParam0, bool bParam1, bool bParam2)
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
		if (func_182())
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
	if (iParam0 == 0 && func_366(func_365(0)))
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
	switch (func_413(func_365(0)))
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

bool func_193()
{
	return Global_1913694->f_1578;
}

bool func_194()
{
	if ((func_182() || Global_1572887->f_106.f_75 > 10) || func_414())
	{
		if ((!func_415() && Global_265377->f_124517.f_71.f_21.f_2 != -504335712) && !func_416(Global_265377->f_124517.f_71.f_21.f_3))
		{
			return true;
		}
	}
	return false;
}

bool func_195(int iParam0)
{
	return func_82(Global_1940144->f_38, iParam0);
}

bool func_196()
{
	return Global_1952637->f_3484;
}

void func_197(var uParam0, int iParam1)
{
	func_417(uParam0, iParam1);
}

int func_198(int iParam0)
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

bool func_199(int iParam0)
{
	return (Global_1952637->f_3334.f_33.f_6 && iParam0) != 0;
}

int func_200()
{
	return 234339573;
}

bool func_201(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_202(bool bParam0)
{
	if (func_8(1))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_8(2) && get_game_timer() >= Global_17388)
	{
		if (bParam0)
		{
			iVar0 = func_418(Global_34);
			if (iVar0 != 0)
			{
				if (_0x9a100f1cf4546629(iVar0))
				{
					func_132("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return false;
				}
			}
			func_132("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_8(4194304))
	{
		return false;
	}
	return true;
}

bool func_203(bool bParam0, bool bParam1)
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
			func_132("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_204(bool bParam0, int iParam1, bool bParam2)
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
					func_132("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return false;
			case -1988548788:
			case 518773733:
			case 742064790:
			case 749266870:
				if (bParam0)
				{
					func_132("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return false;
		}
		if (!func_201(iParam1, 32) && !is_ped_on_mount(Global_34))
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

bool func_205(int iParam0, int iParam1)
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

bool func_206(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return _is_ped_getting_into_a_mount_seat(iParam0, true);
	}
	return false;
}

bool func_207(int iParam0, bool bParam1)
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

bool func_208(int iParam0)
{
	return (Global_1958000 && iParam0) != 0;
}

void func_209(int iParam0, int iParam1)
{
	func_419(iParam0, iParam1);
}

int func_210(bool bParam0)
{
	if (func_68() == -1)
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

bool func_211(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_420(Global_34))
	{
		bParam2 = true;
	}
	iVar0 = -1;
	iVar2 = 0;
	Var3.f_9 = -1591664384;
	if (Global_1940144->f_80.f_2 == 0)
	{
		iVar0 = _0xbb7f968675b34b0c(func_210(0), 32, &iVar1);
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
					if (!func_228(&Var3, iVar2, iVar0, iVar1))
					{
					}
					else if (!func_421(Var3))
					{
					}
					else if (bParam1)
					{
						func_422(iParam0, Var3.f_4, 1);
					}
					else if (bParam2)
					{
						func_422(iParam0, Var3.f_4, 0);
					}
					else if (Var3.f_4 != 1259508039)
					{
						func_422(iParam0, Var3.f_4, func_423(Var3.f_4));
					}
					iVar2++;
				}
			}
			func_242(iVar0);
		}
	}
	Var17 = { func_424(0, 1084182731, -1591664384, -1591664384, 0, 0, 0) };
	if (func_425(&Var17, &iVar0, &iVar1, bParam3))
	{
		if (Global_1940144->f_80.f_2 > iVar1)
		{
			func_242(iVar0);
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
				func_242(iVar0);
				return false;
			}
			if (func_228(&Var3, iVar2, iVar0, iVar1))
			{
				if (!func_421(Var3))
				{
				}
				else if (bParam1)
				{
					func_422(iParam0, Var3.f_4, 1);
				}
				else if (bParam2)
				{
					func_422(iParam0, Var3.f_4, 0);
				}
				else if (Var3.f_4 != 1259508039)
				{
					func_422(iParam0, Var3.f_4, func_423(Var3.f_4));
				}
			}
			iVar2++;
		}
		func_242(iVar0);
	}
	return true;
}

void func_212(int iParam0)
{
	func_422(iParam0, -160924582, func_33(32));
	func_422(iParam0, 1652431022, func_33(32));
	func_422(iParam0, -1016714371, func_33(64));
	func_422(iParam0, 332793555, func_33(131072));
	func_422(iParam0, -1516555556, func_33(1024));
	func_422(iParam0, -862059856, (func_33(32768) && !func_208(256)));
	func_422(iParam0, 1401465909, func_33(524288));
	func_426(iParam0, func_33(8192));
	func_427(iParam0, func_33(128));
	func_422(iParam0, -1115561122, func_33(262144));
	func_428(iParam0, func_33(4));
	func_429(iParam0, func_33(8));
	func_430(iParam0, func_33(1));
}

bool func_213()
{
	if ((Global_1940311->f_10901 != (Global_1940311->f_38.f_203 - 1) || func_173(func_162(0), Global_1940311->f_10893, 0, 1, 1) > 0) || Global_1940311->f_10901 == 15)
	{
		return true;
	}
	func_103();
	if (Global_1940311->f_6)
	{
		return true;
	}
	return false;
}

void func_214(int iParam0)
{
	Global_1940311->f_9 = iParam0;
}

int func_215(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
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
			bVar1 = func_227(bParam4, bParam5);
		}
		iVar0++;
		wait(0);
	}
	if (Global_1572887->f_13 != -1)
	{
		bVar1 = func_227(bParam4, bParam5);
	}
	if (bVar1)
	{
		func_431();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	return 1;
}

void func_216()
{
	if (func_68() == -1)
	{
		if (!func_432(18, &(Global_1940311->f_10931)))
		{
			return;
		}
	}
	_datafile_register_query(Global_1940311->f_10931, 0, "satchel_elements/name(id=%x):texture0");
	_datafile_register_query(Global_1940311->f_10931, 1, "satchel_elements/name(id=%x):texturedictionary0");
	_datafile_register_query(Global_1940311->f_10931, 2, "satchel_elements/name(id=%x):name0");
	_datafile_register_query(Global_1940311->f_10931, 3, "satchel_elements/name(id=%x):description0");
	_datafile_register_query(Global_1940311->f_10931, 4, "satchel_elements/name(id=%x):category0");
	_datafile_register_query(Global_1940311->f_10931, 5, "satchel_elements/name(id=%x):colorid0");
}

int func_217()
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (&Global_1940311->f_10869[iVar0] == Global_1940311->f_10892)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

void func_218(var uParam0)
{
	Global_1940311->f_10867 = 0;
	if (!Global_1940311->f_8)
	{
		func_221(0);
		func_433();
	}
	else if (((((Global_1940311->f_10892 != -2074770370 && Global_1940311->f_10892 != -283002878) && Global_1940311->f_10892 != -889932290) && Global_1940311->f_10892 != 822208792) && Global_1940311->f_10892 != -182626652) && Global_1940311->f_10892 != -693134279)
	{
		func_76(Global_1940311->f_10892);
	}
	else
	{
		func_221(0);
		func_433();
	}
	func_434(uParam0, 0, "ALL EXCLUDING CLOTHING", 443945499);
	func_434(uParam0, -1666604090, "Provisions", 2049523496);
	func_434(uParam0, -96974025, "Remedies", -607937119);
	func_434(uParam0, -1268291907, "Ingredients", 1063323264);
	func_434(uParam0, -1559802791, "Materials", -2096783589);
	func_434(uParam0, -156634416, "Kit", -461468653);
	func_434(uParam0, 1561961676, "Valuables", -2043887681);
	func_434(uParam0, 1061777683, "Documents", 1761254900);
	if (func_293(-1733092640, 1))
	{
		func_434(uParam0, 1783698482, "Collections", -1401643540);
	}
	func_435(uParam0);
	func_436(uParam0);
	func_437(uParam0);
	if (func_28(0))
	{
		if (func_248() == 2)
		{
			func_221(-693134279);
		}
		else
		{
			func_221(-182626652);
		}
	}
	else if (func_236(-283002878))
	{
		func_221(-283002878);
	}
	_databinding_write_data_int(Global_1940311->f_10907, Global_1940311->f_10867);
	_databinding_write_data_int(Global_1940311->f_10909, func_217());
}

bool func_219(int iParam0)
{
	return func_438(iParam0, &uVar0);
}

int func_220(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	iVar0 = Global_1940311->f_10882;
	if (iVar0 >= 3)
	{
		return -1;
	}
	if (!func_243(sParam3, &(Global_1940311->f_10883[iVar0]->f_1), Global_1940311->f_10883[iVar0], iParam4, 0))
	{
		return -1;
	}
	Global_1940311->f_10882++;
	uVar1 = _databinding_add_data_container(uParam0, sParam1);
	_databinding_add_data_hash(uVar1, "label", iParam2);
	_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0, -1, -1287062382, uVar1);
	return iVar0;
}

void func_221(int iParam0)
{
	if (Global_1940311->f_10892 != iParam0)
	{
		Global_1940311->f_10892 = iParam0;
		Global_1940311->f_10902 = 1;
	}
	iVar0 = func_217();
	_databinding_write_data_int(Global_1940311->f_10909, iVar0);
	_databinding_write_data_int(Global_1940311->f_10908, iVar0);
	func_439((Global_1940311->f_10892 != -283002878 && Global_1940311->f_10892 != -889932290));
}

void func_222(int iParam0, var uParam1, bool bParam2)
{
	func_221(iParam0);
	if (!bParam2)
	{
		func_15(iParam0);
	}
}

bool func_223()
{
	if (Global_1940311->f_37 == 0)
	{
		Global_1940311->f_10868 = 0;
	}
	else
	{
		iVar0 = Global_1940311->f_10868;
		iVar1 = (Global_1940311->f_10867 - 1);
		switch (Global_1940311->f_37)
		{
			case -2074770370:
			case -693134279:
			case -182626652:
				Global_1940311->f_10868 = iVar1;
				break;
		}
		if (Global_1940311->f_37 == -283002878)
		{
			if (func_28(0))
			{
				Global_1940311->f_10868 = (iVar1 - 1);
			}
			else
			{
				Global_1940311->f_10868 = iVar1;
			}
		}
		func_115(iVar0);
		return true;
	}
	return false;
}

bool func_224()
{
	return (Global_1915715->f_20637 || Global_1915715->f_22504.f_1);
}

void func_225()
{
	if (Global_1572887->f_13 == -1)
	{
		return;
	}
	Global_1071686->f_2 = 0;
}

void func_226(var uParam0)
{
	_databinding_remove_data_entry(*uParam0);
	while (Global_1940311->f_10882 > 0)
	{
		Global_1940311->f_10882 = (Global_1940311->f_10882 - 1);
		func_242(Global_1940311->f_10883[Global_1940311->f_10882]->f_1);
	}
}

bool func_227(bool bParam0, bool bParam1)
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

bool func_228(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_229(int iParam0)
{
	switch (iParam0)
	{
		case -1649851713:
		case -997505963:
		case 1005272:
		case 348853959:
		case 359221401:
		case 1045621973:
		case 1463321587:
		case 1583044470:
		case 1651573695:
			return true;
	}
	return false;
}

bool func_230(int iParam0, int iParam1)
{
	return iParam1 == func_10(iParam0, 1224357681);
}

bool func_231(int iParam0)
{
	if (Global_1940311->f_14.f_16 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_1940311->f_14.f_16)
		{
			if (&Global_1940311->f_14[iVar0] != iParam0)
			{
			}
			else if (Global_1940311->f_14[iVar0]->f_1 & 1 != 0)
			{
				return false;
			}
			iVar0++;
		}
	}
	switch (iParam0)
	{
		case -776155824:
		case -45650221:
		case 1715058708:
			return false;
	}
	if (func_111(iParam0, 1989861793) && func_343(func_440(iParam0), func_344(1), 1084182731, 0, 0, 0) > 0)
	{
		return false;
	}
	if (func_28(0))
	{
		if (Global_1940311->f_10892 == -182626652 && !func_280(iParam0, Global_1915715->f_20241.f_1))
		{
			return false;
		}
		switch (Global_1915715->f_20241)
		{
			case 2:
				if (!func_441(iParam0))
				{
					return false;
				}
				break;
		}
	}
	if (func_111(iParam0, -805003139))
	{
		if (!_unlock_is_visible(iParam0))
		{
			return false;
		}
	}
	if (func_130(iParam0) == -2130996531)
	{
		if (!func_111(iParam0, -1540973036) && !func_111(iParam0, 1192444843))
		{
			return false;
		}
		else if (iParam0 == 1872063208 || iParam0 == 1309979101)
		{
			return false;
		}
	}
	return true;
}

void func_232(struct<12> Param0, var uParam12, var uParam13)
{
	if (func_105(Param0.f_4, 0))
	{
		iVar0 = func_442(Param0.f_4);
		if (iVar0 == 0)
		{
			iVar0 = func_274(Param0.f_4);
		}
		uVar1 = _databinding_get_data_container_from_child_index(Global_1940311->f_10906, Global_1940311->f_10900);
		uVar2 = uVar1;
		bVar3 = func_443(Param0.f_4);
		if (func_111(Param0.f_4, 1397200408))
		{
			Param0.f_10 = 1;
		}
		if (func_294(Param0.f_4, -455129387) != 0)
		{
			iVar4 = func_343(Param0.f_4, Param0.f_5, Param0.f_9, 0, 0, 0);
			if (Param0.f_9 != 1084182731 && iVar4 > Param0.f_11)
			{
				return;
			}
			Param0.f_11 = iVar4;
		}
		iVar5 = 109029619;
		if (func_444(Param0.f_4))
		{
			if (func_111(Param0.f_4, 1816585950))
			{
				iVar5 = -1777836132;
			}
		}
		else if (func_445(Param0.f_4))
		{
			iVar5 = -1777836132;
		}
		_databinding_write_data_script_variables(0, uVar2, iVar0, Param0.f_11, Param0.f_10, bVar3, iVar5, Param0.f_4);
		Global_1940311->f_10900++;
	}
}

bool func_233(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

bool func_234(int iParam0, int iParam1)
{
	iVar0 = func_446(iParam0);
	if (!func_284(iVar0))
	{
		return false;
	}
	vVar1 = { Global_1051439->f_72[iVar0]->f_3 };
	if (iParam0 == 154)
	{
		vVar1 = { func_447(get_player_index()) };
	}
	if (func_448(vVar1))
	{
		return false;
	}
	fVar4 = func_449(iParam0);
	if ((iVar0 == 10 || iVar0 == 15) || iVar0 == 29)
	{
		fVar5 = func_450(iParam1, vVar1, 0);
		if (fVar5 < fVar4)
		{
			return true;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_450(iParam1, vVar1, 0) < fVar4)
		{
			return true;
		}
	}
	return false;
}

bool func_235(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

bool func_236(int iParam0)
{
	if (iParam0 == Global_1940311->f_37)
	{
		return true;
	}
	return false;
}

float func_237(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_451(Global_34, iParam0, bParam1, bParam2);
}

int func_238(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_281;
	}
	return iParam0;
}

bool func_239(int iParam0)
{
	iParam0 = func_238(iParam0);
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

float func_240(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_241(int iParam0)
{
	iParam0 = func_238(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_452(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_453(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_453(iParam0) + 1;
	fVar6 = func_454(iParam0);
	fVar7 = to_float(func_455(iVar0, iVar1));
	fVar8 = to_float(func_455(iVar0, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_456(fVar3, fVar4, fVar11);
	return fVar12;
}

bool func_242(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (!_0x42a2f33a1942e865(iParam0))
	{
		return false;
	}
	return true;
}

bool func_243(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_210(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_244(var uParam0, int iParam1)
{
	if (func_229(uParam0->f_9))
	{
		return false;
	}
	if (!func_421(*uParam0))
	{
		return false;
	}
	if (!func_457(uParam0->f_4, iParam1, 0))
	{
		return false;
	}
	if (!func_231(uParam0->f_4))
	{
		return false;
	}
	if (func_28(0))
	{
		if (!func_105(uParam0->f_4, 0))
		{
			return false;
		}
		if (func_389())
		{
			iVar0 = func_458(uParam0->f_4, 1, 0, 0);
			if (iVar0 < func_343(uParam0->f_4, uParam0->f_5, uParam0->f_9, 0, 0, 0))
			{
				uParam0->f_11 = iVar0;
			}
		}
		if (uParam0->f_11 <= 0)
		{
			return false;
		}
	}
	if (Global_1940311->f_10893 == 0 && !func_92())
	{
		func_93(uParam0->f_4);
	}
	else
	{
		func_214(0);
	}
	return true;
}

void func_245(int iParam0)
{
	iVar0 = func_10(iParam0, 1224357681);
	bVar1 = func_443(iParam0);
	if (func_459(iVar0))
	{
		if (Global_1940311->f_38.f_1 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_1940311->f_38.f_1)
			{
				if (iVar0 == &Global_1940311->f_38.f_2[iVar2])
				{
					func_460(iVar2, 1);
					return;
				}
				iVar2++;
			}
			func_461(iVar0, bVar1);
		}
		else
		{
			func_461(iVar0, bVar1);
		}
	}
}

bool func_246()
{
	if (Global_1940311->f_10892 == -182626652)
	{
		switch (func_248())
		{
			case 10:
			case 15:
			case 16:
			case 29:
				return true;
		}
	}
	else if (Global_1940311->f_10892 == -2074770370)
	{
		return func_25();
	}
	else if (Global_1940311->f_10892 == -693134279)
	{
		return true;
	}
	return false;
}

int func_247(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (_0x9a100f1cf4546629(iParam0) || _0xc346a546612c49a9(iParam0))
	{
		iVar0 = func_462(&iParam0);
		if (!func_105(iVar0, 0))
		{
			iVar0 = func_463(iParam0);
		}
	}
	else
	{
		iVar0 = func_463(iParam0);
	}
	return iVar0;
}

int func_248()
{
	return Global_1915715->f_20241;
}

int func_249(bool bParam0, bool bParam1)
{
	if (Global_1901947->f_681.f_31)
	{
		return 0;
	}
	if (func_68() == 0)
	{
		iVar0 = _0xf49f14462f0ae27c(get_player_index());
	}
	else
	{
		iVar0 = func_162(0);
	}
	func_464(&iVar0, &uVar1, bParam0, bParam1);
	return uVar1;
}

int func_250(bool bParam0, bool bParam1)
{
	iVar0 = 0;
	iVar1 = func_87(0);
	iVar2 = func_87(1);
	func_464(&iVar1, &iVar0, bParam0, bParam1);
	func_464(&iVar2, &iVar0, bParam0, bParam1);
	return iVar0;
}

int func_251(bool bParam0)
{
	if (Global_1901947->f_681.f_32)
	{
		return 0;
	}
	if (func_68() == 0)
	{
		iVar0 = _0xb9050a97594c8832(get_player_index());
		if (!does_entity_exist(iVar0))
		{
			return 0;
		}
		if (func_243("ALL SATCHEL EXCLUDING CLOTHING", &iVar2, &iVar3, -2015960939, 1))
		{
			if (iVar3 < 1)
			{
			}
			else
			{
				Var5.f_9 = -1591664384;
				iVar4 = 0;
				while (iVar4 < iVar3)
				{
					if (!func_228(&Var5, iVar4, iVar2, iVar3))
					{
					}
					else if (!func_105(Var5.f_4, 0))
					{
					}
					else if (Var5.f_4 == 1259508039)
					{
					}
					else
					{
						iVar1++;
						if (bParam0)
						{
							if (!func_231(Var5.f_4))
							{
							}
							else
							{
								func_256(Var5, 1);
							}
						}
					}
					iVar4++;
				}
			}
			func_242(iVar2);
		}
		return iVar1;
	}
	return 0;
}

int func_252(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < weekly_collectible_get_num_items_in_set(1332470872, iParam0))
	{
		if (weekly_collectible_get_item_in_set(1332470872, iParam0, iVar0, &iVar1, &iVar2))
		{
			if (func_105(iVar1, 0))
			{
				iVar3 = func_270(iVar1, 0, 0, 0);
				if (iVar3 < iVar2)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_253(int iParam0)
{
	if (!func_285(iParam0))
	{
		return;
	}
	Var0.f_9 = -1591664384;
	Var0.f_11 = func_465(iParam0);
	iVar14 = iParam0;
	func_466(iParam0, &uVar15, 0, 0, 0, 0);
	if (!func_28(0))
	{
		func_467(-1715238242, iVar14, &uVar15, 1, Var0.f_11, 0, 0, 109029619);
	}
	else
	{
		func_467(-1553587059, iVar14, &uVar15, 1, Var0.f_11, 0, 0, 109029619);
	}
	Global_1940311->f_38.f_203++;
}

bool func_254(int iParam0)
{
	if (!func_293(-1733092640, 1))
	{
		return false;
	}
	iVar0 = _0xcc644bc1dd655269(iParam0, 0);
	if (!func_285(iVar0))
	{
		return false;
	}
	if (func_468(iVar0, -489628648, &uVar1, 1, 0))
	{
		return true;
	}
	return false;
}

void func_255(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		iVar19 = _0xbb7f968675b34b0c(func_210(0), 32, &iVar18);
		if (iVar19 < 0)
		{
			return;
		}
		if (iVar18 > 0)
		{
			iVar17 = 0;
			while (iVar17 < 32)
			{
				if (!func_228(uParam0, iVar17, iVar19, iVar18))
				{
				}
				else if (!func_105(uParam0->f_4, 0))
				{
				}
				else if (!func_244(uParam0, iParam1))
				{
				}
				else if (func_469(uParam0->f_4, &uVar0, iVar20))
				{
				}
				else
				{
					uVar0[iVar20] = uParam0->f_4;
					iVar20++;
					if (iVar20 >= 16)
					{
					}
					else
					{
						iVar17++;
					}
					func_470(&uVar0);
					func_471(&uVar0);
					func_242(iVar19);
				}
			}
		}
	}
}

void func_256(struct<12> Param0, var uParam12, var uParam13, bool bParam14)
{
	if (func_105(Param0.f_4, 0))
	{
		bVar0 = func_443(Param0.f_4);
		if (func_73() || (func_472() && !bVar0))
		{
			return;
		}
		iVar1 = func_274(Param0.f_4);
		bVar2 = _item_database_is_overpowered_item(Param0.f_4);
		vVar3 = { func_473(Param0.f_4) };
		iVar6 = func_474(Param0.f_4);
		if (!bParam14 && func_294(Param0.f_4, -455129387) != 0)
		{
			iVar7 = func_343(Param0.f_4, Param0.f_5, Param0.f_9, 0, 0, 0);
			if (Param0.f_9 != 1084182731 && iVar7 > Param0.f_11)
			{
				return;
			}
			Param0.f_11 = iVar7;
		}
		func_475(&Param0);
		iVar8 = 109029619;
		if (func_444(Param0.f_4))
		{
			if (func_111(Param0.f_4, 1816585950))
			{
				iVar8 = -1777836132;
			}
		}
		else if (func_445(Param0.f_4))
		{
			iVar8 = -1777836132;
		}
		func_467(-1553587059, iVar1, &vVar3, bVar0, Param0.f_11, bVar2, iVar6, iVar8);
		Global_1940311->f_38.f_203++;
	}
}

bool func_257()
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
	if (!func_476(iVar0))
	{
		return false;
	}
	return true;
}

bool func_258(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_dead(iParam0))
		{
			return true;
		}
		else if (!is_vehicle_driveable(iParam0, false, false))
		{
			if (!is_entity_on_fire(iParam0))
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_259(int iParam0, int iParam1)
{
	iVar0 = func_446(iParam0);
	if (!func_284(iVar0))
	{
		return false;
	}
	vVar1 = { Global_1051439->f_72[iVar0]->f_3 };
	if (iVar0 == 29)
	{
		vVar1 = { func_447(get_player_index()) };
	}
	if (func_448(vVar1))
	{
		return false;
	}
	fVar4 = func_449(iParam0);
	if ((iVar0 == 10 || iVar0 == 15) || iVar0 == 29)
	{
		fVar5 = func_450(iParam1, vVar1, 0);
		if (fVar5 < fVar4)
		{
			return true;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_450(iParam1, vVar1, 0) < fVar4)
		{
			return true;
		}
	}
	return false;
}

void func_260()
{
	if (func_248() != 2)
	{
		if (func_293(-160924582, 1))
		{
			func_261(-160924582, 0, 0);
		}
		if (func_293(1652431022, 1))
		{
			func_261(1652431022, 0, 0);
		}
		if (func_293(-1016714371, 1))
		{
			func_261(-1016714371, 0, 0);
		}
		if (func_293(332793555, 1))
		{
			func_261(332793555, 0, 0);
		}
		if (func_293(-1838434463, 1))
		{
			func_261(-1838434463, 0, 0);
		}
		else if (func_293(2019377485, 1))
		{
			func_261(2019377485, 0, 0);
		}
		else if (func_293(-1115561122, 1))
		{
			func_261(-1115561122, 0, 0);
		}
		func_477();
	}
}

void func_261(int iParam0, bool bParam1, int iParam2)
{
	Var0.f_9 = -1591664384;
	Var0.f_4 = iParam0;
	Var0.f_11 = 1;
	if (!bParam1)
	{
		func_256(Var0, iParam2);
	}
	else
	{
		func_232(Var0);
	}
}

void func_262()
{
	_databinding_write_data_bool(Global_1940311->f_10924, false);
	_databinding_write_data_bool(Global_1940311->f_10923, false);
	_databinding_write_data_bool(Global_1940311->f_10920, false);
	_databinding_write_data_bool(Global_1940311->f_10921, false);
}

int func_263(int iParam0)
{
	iVar0 = func_264(iParam0);
	if ((iVar0 != 0 && !func_478(func_264(iParam0))) && !func_479(func_264(iParam0)))
	{
		if (!func_265(iVar0))
		{
			return -1994084079;
		}
	}
	return func_480(iParam0);
}

int func_264(int iParam0)
{
	switch (iParam0)
	{
		case 1433048902:
			return 2;
		case -1602657245:
			return 4;
		case -1991037110:
			return 5;
		case 1047281747:
			return 6;
		case -398744080:
			return 7;
		case -1066874997:
			return 8;
		case -2085219828:
			return 11;
		case 2064962445:
			return 12;
		case -1620920647:
			return 15;
		case -1664530975:
			return 16;
		case -597058368:
			return 21;
		case 128702355:
			return 24;
		case -2051332199:
			return 27;
		case 546981776:
			return 28;
		case -2013384490:
			return 29;
		case 228922461:
			return 30;
		case -746674788:
			return 32;
		case 599861917:
			return 34;
		case -1781387050:
			return 35;
		case 2006811763:
			return 38;
		case -90546043:
			return 39;
		case 1216456215:
			return 49;
		case 746300881:
			return 50;
		case -435006002:
			return 51;
		case -624139784:
			return 52;
		case -529638012:
			return 53;
		case 1338475089:
			return 40;
		case 2605459:
			return 41;
		case 1071702353:
			return 42;
		case -1183422860:
			return 43;
		case -1957546791:
			return 44;
		case -589542533:
			return 45;
		case -1776738559:
			return 46;
		case 1602215994:
			return 47;
		case -396757268:
			return 48;
	}
	return 0;
}

bool func_265(int iParam0)
{
	if (!func_481(iParam0))
	{
		return false;
	}
	return func_482(iParam0, 4, 1);
}

void func_266(int iParam0, var uParam1)
{
	if (func_73())
	{
		func_483(1);
		if (func_24())
		{
			_databinding_write_data_hash_string(func_484(), 75706034);
		}
		else
		{
			_databinding_write_data_hash_string(func_484(), -31549930);
		}
		_databinding_write_data_bool(Global_1940311->f_10924, true);
	}
	else if (func_28(0) || func_73())
	{
		if (_databinding_read_data_bool(Global_1940311->f_10921))
		{
			_databinding_write_data_bool(Global_1940311->f_10920, _databinding_read_data_bool_from_parent(*uParam1, "focusable"));
		}
	}
	else
	{
		func_485(iParam0);
		_databinding_write_data_hash_string(func_484(), func_486(iParam0));
		func_487(iParam0, uParam1);
	}
}

int func_267(int iParam0)
{
	if (func_268())
	{
		return 0;
	}
	if (Global_1940311->f_10895 == iParam0)
	{
		return 0;
	}
	if (!func_28(0) && !func_73())
	{
		if ((((func_273(iParam0, 0) == 1 || func_111(iParam0, 1291597743)) || func_111(iParam0, -928967997)) || func_111(iParam0, 747873593)) || func_111(iParam0, -189374246))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool func_268()
{
	return Global_1940311->f_11;
}

int func_269(int iParam0, bool bParam1)
{
	if (!func_165(iParam0))
	{
		return 0;
	}
	if (func_192(0, 0, 1))
	{
		return 1;
	}
	if (iParam0 == -171130052)
	{
		if (!func_293(85134332, 1))
		{
			return 3;
		}
	}
	else if ((iParam0 == 1133082501 || iParam0 == -944411166) || iParam0 == 1850181232)
	{
		if (!func_293(-862059856, 1))
		{
			return 4;
		}
	}
	if (iParam0 == -1820411463)
	{
		if (!func_293(-862059856, 1))
		{
			return 4;
		}
		else if (!func_488())
		{
			return 5;
		}
	}
	if (bParam1)
	{
		if (Global_17411.f_2966 > 0)
		{
			return 2;
		}
	}
	return 0;
}

int func_270(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_130(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_398(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_489(iParam0, 0);
	}
	if (func_294(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_210(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_490(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_210(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_271(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (func_491(iParam1))
		{
			iVar0 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (Global_1904087->f_113[iVar1]->f_1 == iParam1)
				{
					iVar0++;
				}
				iVar1++;
			}
			return iVar0;
		}
		else
		{
			return func_492(_inventory_get_ped_inventory_id(iParam0), iParam1);
		}
	}
	return 0;
}

int func_272(int iParam0, bool bParam1)
{
	if (!bParam1 || func_257())
	{
		return func_343(iParam0, func_344(1), -2015960939, 1, 1, 0);
	}
	return 0;
}

int func_273(int iParam0, bool bParam1)
{
	Var0 = { func_155(iParam0, 0, 0) };
	return func_493(iParam0, &Var0, 0, bParam1);
}

int func_274(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_494(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

int func_275(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	if (func_68() == 0)
	{
		iVar1 = 0;
		if (func_133(iParam0) == -1553950009)
		{
			iVar1 = func_495(iParam0, 1);
		}
		else
		{
			switch (Global_1915715->f_20241)
			{
				case 10:
					if (func_111(iParam0, 1010929620))
					{
						iVar1 = func_496(iParam0);
					}
					break;
				case 15:
					iVar1 = func_497(iParam0);
					break;
			}
		}
		if (iVar1 != 0 && _0xef254f1a4c08b7e6(iVar1))
		{
			iVar0 = func_277(iVar1, 2084597891);
		}
		else
		{
			iVar0 = func_498(iParam0, 816454899, 1, 0);
		}
	}
	else
	{
		fVar2 = 1f;
		fVar3 = 1f;
		iVar4 = Global_1915715->f_20241.f_1;
		iVar5 = Global_1915715->f_20241;
		if (func_233(iVar4) && func_284(iVar5))
		{
			if (iVar5 == 10 || iVar5 == 15)
			{
				fVar3 = func_499(iVar4, iParam0);
			}
			fVar2 = func_500(&(Global_1915715->f_3[iVar5]->f_36), iParam0);
		}
		fVar6 = (fVar2 + fVar3);
		if (fVar2 <= 0f)
		{
			return 0;
		}
		fVar6 = (fVar6 - IntToFloat(floor(fVar6)));
		iVar7 = func_498(iParam0, 816454899, 1, 0);
		iVar0 = floor((to_float(iVar7) + (to_float(iVar7) * fVar6)));
	}
	if (iVar0 <= 0)
	{
		return 0;
	}
	return iVar0;
}

int func_276(int iParam0)
{
	switch (iParam0)
	{
		case 1237770824:
			return -2059491326;
		case -858567048:
			return -2054061821;
		case 529305859:
			return -2054061821;
		case -725003445:
			return -276530555;
		case -407659715:
			return -276530555;
		case 967601061:
			return 1786362058;
		case 895033262:
			return 1786362058;
		case -1424697962:
			return -1925097470;
		case -1643384846:
			return -1925097470;
		case 915880986:
			return -1925097470;
		case -738999731:
			return -179784009;
		case 566023444:
			return -179784009;
		case -1956973834:
			return -179784009;
		case -593311590:
			return -549843543;
		case 765085831:
			return -549843543;
		case 2094730711:
			return -549843543;
		case -662726703:
			return 547453549;
		case 1760886130:
			return 547453549;
		case -847420802:
			return 547453549;
		case 1988467099:
			return -185670568;
		case -674590015:
			return -185670568;
		case -1243653490:
			return -185670568;
		case 1432949803:
			return -68530554;
		case 563848610:
			return -68530554;
		case -1457420231:
			return -68530554;
		case 924882045:
			return -1882667332;
		case 1415608202:
			return -1882667332;
		case -1480423460:
			return -1882667332;
		case -1188120304:
			return -549843543;
		case 1978734761:
			return -549843543;
		case -1814593136:
			return -549843543;
		case -983831788:
			return 251523924;
		case -2120099592:
			return 251523924;
		case 1848456619:
			return 251523924;
		case 992366796:
			return 128689452;
		case -244657613:
			return 128689452;
		case -1310590179:
			return 128689452;
		case -1252472243:
			return -795926005;
		case -980016656:
			return -795926005;
		case -2026210939:
			return -795926005;
		case -1969404854:
			return 1766735806;
		case 1948158930:
			return 1766735806;
		case 183958842:
			return 1766735806;
		case 905173572:
			return -1260301848;
		case -1323780599:
			return -1260301848;
		case -532099639:
			return -1260301848;
		case -2139551030:
			return 362062697;
		case 1607144310:
			return 362062697;
		case -758005668:
			return 362062697;
		case -832850511:
			return -557557374;
		case -1586332975:
			return -557557374;
		case 1857501916:
			return -557557374;
		case -867655342:
			return 2145928766;
		case 991092621:
			return 2145928766;
		case 80093385:
			return 2145928766;
		case 1626949878:
			return 2103138183;
		case -1722483116:
			return 2103138183;
		case 871746664:
			return 2103138183;
		case -161524199:
			return 1176634776;
		case 156979555:
			return 1176634776;
		case -1739474417:
			return 1176634776;
		case -1888757291:
			return -48308129;
		case 995863399:
			return -48308129;
		case 894877715:
			return -48308129;
		case 1310120320:
			return -234392368;
		case -1228376431:
			return -234392368;
		case 322141256:
			return -234392368;
		case 59384454:
			return 489332694;
		case -110353515:
			return 489332694;
		case -1905834457:
			return 489332694;
		case -1837840093:
			return -972505668;
		case 58634176:
			return -972505668;
		case 472142656:
			return -972505668;
		case 1001171791:
			return -1482721140;
		case 1210345318:
			return -1482721140;
		case 1023080408:
			return -1482721140;
		case -1422869557:
			return 1943206759;
		case -1378812236:
			return 1943206759;
		case 399553313:
			return 1943206759;
		case 651035143:
			return -479944273;
		case 2013022756:
			return -479944273;
		case 1011003885:
			return -479944273;
		case -1490884871:
			return -1900245017;
		case 306916738:
			return 996737485;
		case 724563284:
			return -317318063;
		case 1917027383:
			return -1179145184;
		case -855052577:
			return 49841414;
		case -5376850:
			return 1853004765;
		case 1338219162:
			return -613244561;
		case -1538397860:
			return 998459086;
		case 193037129:
			return -1185304294;
		case 1416872916:
			return 1606770041;
		case 1500919793:
			return 592705199;
		case 1042542561:
			return 1001427351;
		case 1570826681:
			return -2134757665;
		case 56657913:
			return 1296165525;
		case 877935135:
			return -1389099466;
		case -39646495:
			return -1389099466;
		case -1186289527:
			return -1389099466;
		case -1882344824:
			return 2032362047;
		case -1134447619:
			return 2032362047;
		case -1640704323:
			return 2032362047;
		case -246542229:
			return -600158588;
		case -529454751:
			return -600158588;
		case 1582593525:
			return -600158588;
		case -1347000030:
			return -348997013;
		case -505583391:
			return -348997013;
		case -46978629:
			return -348997013;
		case -1559227925:
			return -855155400;
		case 1562528937:
			return -855155400;
		case 1645887374:
			return -855155400;
		case -1440794801:
			return 1743453709;
		case 2144711797:
			return 1743453709;
		case -1471526136:
			return 1743453709;
		case 2105263879:
			return -1910050550;
		case -905842006:
			return -1910050550;
		case 718825539:
			return -1910050550;
		case 1613453781:
			return -1634769991;
		case -1030182399:
			return -1634769991;
		case 1191274340:
			return -1634769991;
		case -1060737769:
			return 556997951;
		case 553310445:
			return 556997951;
		case 987967309:
			return 556997951;
		case 1418092959:
			return 727714355;
		case -1315697778:
			return 727714355;
		case -1838865945:
			return 727714355;
		case -1464585113:
			return -71380070;
		case -610456424:
			return -71380070;
		case -284151822:
			return -71380070;
		case -1670544626:
			return -729503995;
		case 1290960696:
			return -729503995;
		case -266273535:
			return -729503995;
		case 1717601520:
			return 1786644138;
		case 430397370:
			return 1786644138;
		case 1913571052:
			return 1786644138;
		case -1356230367:
			return -1466769106;
		case 1417331079:
			return -1466769106;
		case 16287711:
			return -1466769106;
		case 1884610748:
			return -2079514583;
		case 746558492:
			return -2079514583;
		case -884124246:
			return -2079514583;
		case -2040522845:
			return -409309194;
		case -1224510844:
			return -409309194;
		case -892811627:
			return -409309194;
		case 339620522:
			return 2020893799;
		case 1770451033:
			return 2020893799;
		case 1334837390:
			return 2020893799;
		case -245335326:
			return 195131818;
		case -1999212658:
			return 195131818;
		case -593435395:
			return 195131818;
		case -935543049:
			return 1445465787;
		case 1772544356:
			return 1445465787;
		case -1772126340:
			return 1445465787;
		case 862898895:
			return -1817406451;
		case 756657535:
			return -1817406451;
		case 1997845858:
			return -1817406451;
		case 1846915545:
			return 1521192478;
		case -1816929509:
			return 1521192478;
		case -1930144509:
			return 1521192478;
		case -1017987135:
			return -1517999735;
		case 2058475216:
			return -1517999735;
		case -1726572562:
			return -1517999735;
		case -1866642239:
			return -2084641708;
		case -1508120809:
			return -2084641708;
		case 1197831625:
			return -2084641708;
		case 434924608:
			return -1125378664;
		case 1666393029:
			return -1125378664;
		case -1007681885:
			return -1125378664;
		case 1761263432:
			return 708951363;
		case -1788506246:
			return 708951363;
		case -1909348309:
			return 708951363;
		case -1015531226:
			return 714611525;
		case -581619522:
			return 714611525;
		case -824902132:
			return 714611525;
		case -545447034:
			return 1699761828;
		case -1824684934:
			return 1699761828;
		case -861854914:
			return 1699761828;
		case -1290897778:
			return -158140634;
		case -350704687:
			return -158140634;
		case 765892430:
			return -158140634;
		case -1011598664:
			return 1272884971;
		case -177476569:
			return 1272884971;
		case 980653387:
			return 1272884971;
		case 1925728375:
			return -1552076723;
		case -1080457688:
			return -1552076723;
		case 416630124:
			return -1552076723;
		case -899751553:
			return -334414989;
		case 1742676369:
			return -334414989;
		case 431501574:
			return -334414989;
		case 1489051752:
			return -352732121;
		case -1705499323:
			return -352732121;
		case 2126795269:
			return -352732121;
		case 102446365:
			return 117556329;
		case -1927342740:
			return 117556329;
		case -2013445740:
			return 117556329;
		case 1323485831:
			return 469453151;
		case -914779013:
			return 469453151;
		case -365111821:
			return 469453151;
		case -1073614594:
			return 621465116;
		case -410900360:
			return 621465116;
		case 2060013792:
			return 621465116;
		case 748665395:
			return -523607607;
		case 351048413:
			return -523607607;
		case 441195430:
			return -523607607;
		case -581931638:
			return 1662628197;
		case -1528265128:
			return 1662628197;
		case 581032175:
			return 1662628197;
		case 157917500:
			return 2084847747;
		case -936537044:
			return 2084847747;
		case 101495387:
			return 2084847747;
		case -100913452:
			return 1656226638;
		case 72307351:
			return 1656226638;
		case -318217782:
			return 1656226638;
		case 313332607:
			return -1608525320;
		case -1867587109:
			return -1608525320;
		case 182158309:
			return -1608525320;
		case 444160793:
			return 1717540687;
		case 1205453831:
			return 1717540687;
		case 1815539745:
			return 1717540687;
		case -124539232:
			return 1622797153;
		case -2123600216:
			return 1622797153;
		case -146690338:
			return 1622797153;
		case -1836227998:
			return -252750557;
		case 619479575:
			return -252750557;
		case -1610329427:
			return -252750557;
		case -929322235:
			return 513869240;
		case -548076717:
			return 513869240;
		case -1444929945:
			return 513869240;
		case 493457089:
			return -482152318;
		case -479485786:
			return -482152318;
		case -281211381:
			return -482152318;
		case 1641833719:
			return -329015022;
		case -314933180:
			return -329015022;
		case 27838955:
			return -329015022;
		case -843795569:
			return 340488205;
		case 1496267371:
			return 340488205;
		case -1403731492:
			return 340488205;
		case 718631967:
			return 1228602887;
		case -1394561808:
			return -1749311280;
		case 2057052401:
			return -770230168;
		case 1712162117:
			return -1761903019;
		case -1947512511:
			return -202898890;
		case -940597120:
			return -324172879;
		case 329729070:
			return 221026557;
		case 1577881214:
			return 2055874470;
		case 452896739:
			return 1383597214;
		case 1235898535:
			return -695920779;
		case 544782507:
			return 1864240538;
		case 1761014306:
			return 135251025;
		case 376217292:
			return -1380974753;
		case 833141409:
			return 1918940015;
		case -2048623764:
			return 1606360364;
		case 844750136:
			return 949154977;
		case 1844178035:
			return 1327585677;
		case -31982783:
			return -424223638;
		case -222563712:
			return -817814915;
		case -1240764968:
			return 1324361660;
		case -1765601:
			return -1740875511;
		case -1067479455:
			return -1114206422;
		case 1607779195:
			return 1129016218;
		case -2068566007:
			return 74265533;
		case -691071886:
			return -1687205102;
		case 511857907:
			return -2112352640;
		case 945172939:
			return -1179922595;
		case -1181539987:
			return -1777044066;
		case -832559263:
			return -427774472;
		case -902591026:
			return -862133853;
		case 1462133097:
			return -153093028;
		case 2085530337:
			return 1961151934;
		case 1017109217:
			return -1429428300;
		case 1374722424:
			return 641025903;
		case 800967980:
			return 1014343203;
		case -661323467:
			return -977684174;
		case -1397737565:
			return 753992067;
		case 1360914301:
			return 975102591;
		case -1764134917:
			return -742266708;
		case 1252810290:
			return 1002050200;
		case -1618402788:
			return 970250315;
		case -1065098050:
			return 913562114;
		case 1503728435:
			return 1415886451;
		case 281887510:
			return 1244458697;
		case -164081697:
			return 322165109;
		case -1161319399:
			return -2083991045;
		case -1625078531:
			return 709722347;
		case 1806153689:
			return 709722347;
		case -802026654:
			return 709722347;
		case -1475338121:
			return 2068018854;
		case -1243878166:
			return 2068018854;
		case -2102079544:
			return 2068018854;
		case 361430638:
			return 144513283;
		case -1726837022:
			return 144513283;
		case 27448453:
			return 144513283;
		case -463248330:
			return -78603574;
		case 959196213:
			return -78603574;
		case -467109021:
			return -78603574;
		case 1292673537:
			return 956393401;
		case 957520252:
			return 956393401;
		case 143941906:
			return 956393401;
		case 663376218:
			return -1604538436;
		case 1083865179:
			return -1604538436;
		case 1490032862:
			return -1604538436;
		case -2059726619:
			return -1583116953;
		case -1569450319:
			return -1583116953;
		case 854596618:
			return -1583116953;
		case 1795984405:
			return 1995645004;
		case 1796037447:
			return 1995645004;
		case -476045512:
			return 1995645004;
		case -1858513856:
			return 439094686;
		case 1248540072:
			return 439094686;
		case 2116849039:
			return 439094686;
		case -702790226:
			return 1069834732;
		case 1603936352:
			return 1069834732;
		case -868657362:
			return 1069834732;
		case -237756948:
			return -1508151163;
		case -1730060063:
			return -1508151163;
		case -591117838:
			return -1508151163;
		case -53270317:
			return 854098596;
		case 9293261:
			return 854098596;
		case -336086818:
			return 854098596;
		case -1791452194:
			return 1467162138;
		case 1914602340:
			return 1467162138;
		case 459744337:
			return 1467162138;
		case -845037222:
			return 1322026128;
		case 334093551:
			return 1322026128;
		case 1150594075:
			return 1322026128;
		case -794277189:
			return 711086189;
		case -1558096473:
			return 711086189;
		case 1150939141:
			return 711086189;
		case -1035515486:
			return -1334624683;
		case -662178186:
			return -1334624683;
		case -1827027577:
			return -1334624683;
		case -1332163079:
			return 2118150058;
		case 2053771712:
			return 2118150058;
		case 1181652728:
			return 2118150058;
		case 500722008:
			return 1889550255;
		case 1647012424:
			return 1889550255;
		case 238733925:
			return 1889550255;
		case -1648383828:
			return 1684561350;
		case 699990316:
			return 1684561350;
		case 1710714415:
			return 1684561350;
		case 463481876:
			return 1763709491;
		case 2136062430:
			return 1763709491;
		case 95044528:
			return 1763709491;
		case 1677266727:
			return 1828340319;
		case -2066910871:
			return 1828340319;
		case 1204918860:
			return 1828340319;
		case 1963510418:
			return 344414895;
		case -99092070:
			return 344414895;
		case -1379330323:
			return 344414895;
		case -217731719:
			return -1875079046;
		case 1868576868:
			return -1875079046;
		case 1636891382:
			return -1875079046;
		case 2022921849:
			return -1273558742;
		case -1912460485:
			return -1273558742;
		case -771861010:
			return -1273558742;
		case 659601266:
			return -839975185;
		case 462348928:
			return -839975185;
		case 1208128650:
			return -839975185;
		case -475820303:
			return -401745683;
		case 1627318551:
			return -401745683;
		case 416535067:
			return -401745683;
		case 1969175294:
			return -2096730839;
		case 1584468323:
			return -2096730839;
		case -395646254:
			return -2096730839;
		case -1102272634:
			return 1871609823;
		case -308965548:
			return 1871609823;
		case -57190831:
			return 1871609823;
		case -1544126829:
			return -1028335922;
		case -983605026:
			return -1028335922;
		case 554578289:
			return -1028335922;
		case -923552142:
			return 172698521;
		case 1340414242:
			return 172698521;
		case 149018327:
			return 172698521;
		case -305970307:
			return 212330241;
		case 1992476687:
			return 212330241;
		case -1178296218:
			return 212330241;
		case -269786196:
			return -555536739;
		case -378416954:
			return -555536739;
		case -409451878:
			return -555536739;
		case 1466150167:
			return -1896091463;
		case 1729948479:
			return -1896091463;
		case -1317365569:
			return -1896091463;
		case 119626970:
			return 1854095100;
		case -1731566944:
			return 1854095100;
		case 1925227409:
			return 1854095100;
		case 624262971:
			return 1690246594;
		case 1681193300:
			return 1690246594;
		case 1126133763:
			return 1690246594;
		case -1610025835:
			return -885435577;
		case 995830478:
			return -885435577;
		case -896290892:
			return -885435577;
		case 653400939:
			return -1923252111;
		case 85441452:
			return -1923252111;
		case 1145777975:
			return -1923252111;
		case 2016225967:
			return -470304000;
		case 1637109059:
			return -1074986502;
		case 2093098109:
			return -1042059910;
		case -884176343:
			return 1234479911;
		case -800510665:
			return -591134272;
		case 252433530:
			return 2092024647;
		case 236757114:
			return -1902618794;
		case -827518870:
			return -330669109;
		case 1367447057:
			return -578894284;
		case -2092697195:
			return -1884018016;
		case -2043601589:
			return 2049850175;
		case 1758585485:
			return -1949114744;
		case 1527400190:
			return -710315468;
		case 1493601140:
			return 1242869591;
		case -885592109:
			return -1170632889;
		case -1282621313:
			return -393778206;
		case -70954328:
			return 110440596;
		case -1378208045:
			return -672378045;
		case 1450608653:
			return -364251138;
		case 1543592331:
			return 1729475114;
		case 1842740532:
			return 963696353;
		case 2004357248:
			return -2103416513;
		case -229670230:
			return 1438015400;
		case 546758456:
			return -1954723019;
		case 1888419655:
			return 906666065;
		case -2040849706:
			return 2129552482;
		case 2014346813:
			return 559753509;
		case -1638839614:
			return 865783200;
		case 1705186999:
			return 393871699;
		case -1821314478:
			return 683975656;
		case -1434083213:
			return -99694979;
		case 1785697286:
			return 1870161468;
		case 1891164848:
			return -637307085;
		case -1283104686:
			return -1156529631;
		case -1182590809:
			return 1590950150;
		case 1011908603:
			return 1619300873;
		case 1202949852:
			return -64299595;
		case -1220574585:
			return -1836028969;
		case 1739856087:
			return 85710394;
		case -1932727774:
			return -1655807359;
		case 258865203:
			return -1962643264;
		case 1097274212:
			return 232569057;
		case 448991078:
			return 1199221978;
		case -1624242931:
			return -1797419634;
		case -1924159110:
			return 2065655105;
		case -1621144167:
			return 1825917101;
		case -1061253029:
			return 1593945350;
		case 1181154860:
			return -1224696681;
		case 1418435161:
			return -1575718189;
		case 1511236969:
			return 793611591;
		case 121494806:
			return 902257336;
		case -251416414:
			return -364133422;
		case -1787430524:
			return -605083879;
		case -260181673:
			return 732434481;
		case -1087205695:
			return -700390032;
		case -857265622:
			return -932263476;
		case -1572330336:
			return 751785819;
		case -1249752300:
			return -1395009678;
		case -940052481:
			return -633621963;
		case -308200059:
			return -853038002;
		case -1218522879:
			return -618837959;
		case 923422806:
			return -1297877177;
		case 832214437:
			return 1827754323;
		case 397926876:
			return 2134308318;
		case 219794592:
			return 1349228616;
		case -1061362634:
			return 1303473658;
		case 1728819413:
			return 394330510;
		case 1009802015:
			return 1244718829;
		case -420237085:
			return 115722091;
		case -1195518864:
			return -183098420;
		case -159428614:
			return 2055286420;
		case 1276143905:
			return -2037558216;
		case -1262044528:
			return -1798573899;
		case -963027403:
			return 872099605;
		case 739090883:
			return -874157148;
		case 1043121665:
			return 346258719;
		case -634716689:
			return -427089681;
		case 2088901891:
			return 839022204;
		case 836208559:
			return 999131546;
		case 1600479946:
			return 1300573577;
		case -675142890:
			return 1144711679;
		case -906131571:
			return 878987858;
		case -591844128:
			return 708589058;
		case -1946740647:
			return 700750583;
		case -1548204069:
			return -1885772129;
		case -907373381:
			return 2094711074;
		default:
			break;
	}
	return 0;
}

int func_277(int iParam0, int iParam1)
{
	if (!_0xef254f1a4c08b7e6(iParam0))
	{
		return 0;
	}
	if (!func_105(iParam1, 0))
	{
		return 0;
	}
	iVar4 = _0x3faa928a79591761(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		if (!_0x121d2005dd64496b(iParam0, iVar0, &Var1))
		{
		}
		else if (Var1 == iParam1)
		{
			return Var1.f_1;
		}
		iVar0++;
	}
	return 0;
}

bool func_278()
{
	return Global_1146212->f_21645[64]->f_208;
}

char* func_279(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_501(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_280(int iParam0, int iParam1)
{
	if (iParam1 == 119)
	{
		return func_502(iParam0);
	}
	return func_503(iParam0, iParam1);
}

bool func_281(int iParam0)
{
	if (func_504(iParam0, &uVar0))
	{
		return true;
	}
	if (!func_505(iParam0))
	{
		return false;
	}
	if (_is_ped_carrying(Global_34))
	{
		func_506(Global_34, &uVar2, 1);
		iVar1 = func_507(&(uVar2[0]));
		if (iVar1 == iParam0)
		{
			if (_0x8de41e9902e85756(&(uVar2[0])))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	iVar4 = _0xf49f14462f0ae27c(player_id());
	if ((does_entity_exist(iVar4) && !is_entity_dead(iVar4)) && _is_ped_carrying(iVar4))
	{
		func_506(iVar4, &iVar5, 3);
		iVar9 = 0;
		while (iVar9 < iVar5)
		{
			if (!does_entity_exist(&(iVar5[iVar9])))
			{
			}
			else
			{
				iVar1 = func_462(iVar5[iVar9]);
				if (iVar1 == iParam0)
				{
					if (_0x8de41e9902e85756(&(iVar5[iVar9])))
					{
						return true;
					}
				}
			}
			iVar9++;
		}
	}
	return false;
}

char* func_282(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "COLLECTIBLE_MAP_ON_MISSION";
		case 2:
			return "COLLECTIBLE_MAP_ACTIVE_MAP";
		case 3:
			return "COLLECTIBLE_MAP_SPADE_MISSING";
		case 4:
			return "COLLECTIBLE_MAP_METAL_DETECTOR_MISSING";
		case 5:
			return "COLLECTIBLE_MAP_SEARCH_ITEMS_NOT_AVAILABLE";
	}
	return "NET_COLLECTIBLE_OPEN_MAP_RESULT_NONE";
}

bool func_283()
{
	iVar0 = _0x901e0dc25080c8b9(player_id());
	if (_0xd6f6acf4392187fb(iVar0))
	{
		if (!_0x424b17a7dc5c90bc(player_id()))
		{
			return false;
		}
	}
	if (!func_508(player_id(), 0))
	{
		return false;
	}
	return true;
}

bool func_284(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

bool func_285(int iParam0)
{
	return iParam0 != 0;
}

int func_286(int iParam0)
{
	return func_277(iParam0, 2084597891);
}

int func_287(int iParam0)
{
	if (!func_292(iParam0, -489628648, &Var0, &iVar31, 0, 1))
	{
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (func_293(&(Var0[iVar32]), 1))
		{
			iVar33++;
		}
		iVar34++;
		iVar32++;
	}
	if (iVar33 >= iVar34)
	{
		_databinding_write_data_string(Global_1940311->f_10916, _create_var_string(2, "SATCHEL_TIP_COLLECTION_COMPLETE", iVar33, iVar34));
	}
	else
	{
		_databinding_write_data_string(Global_1940311->f_10916, _create_var_string(2, "SATCHEL_TIP_COLLECTION", iVar33, iVar34));
	}
	return 1;
}

int func_288(int iParam0)
{
	if (!_0x7907969497ea92f5(Global_1940311->f_10931))
	{
		return 0;
	}
	Var0 = Global_1940311->f_10931;
	Var0.f_2 = 3;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_289(var uParam0)
{
	func_483(0);
	_databinding_write_data_hash_string(func_484(), 327167317);
	_databinding_write_data_bool(func_509(), _databinding_read_data_bool_from_parent(*uParam0, "focusable"));
}

int func_290(int iParam0)
{
	return iParam0;
}

int func_291(int iParam0, int iParam1)
{
	if (!func_510(iParam0, 2))
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

bool func_292(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_511(iParam0))
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
		func_512(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_293(int iParam0, int iParam1)
{
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_130(iParam0);
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
			if (!func_513(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_514(iParam0))
			{
				return true;
			}
			break;
	}
	return func_270(iParam0, 0, 0, 0) >= iParam1;
}

int func_294(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_295(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_515(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_294(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_158(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_516(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_517(iParam0, Var1[iVar63]) };
			Var65.f_12 = iParam2;
			iVar64 = func_518(1702063850, &Var65, 1);
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
			func_394(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!_0xb4158c8c9a3b5dce(func_210(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_296(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_515(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_382(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_158(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_68() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_518(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_394(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_210(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_297(int iParam0)
{
	if (func_111(iParam0, 1573112293))
	{
		return func_519(iParam0);
	}
	if (func_520(iParam0))
	{
		return func_63();
	}
	switch (func_133(iParam0))
	{
		case -77448735:
			if (func_521(iParam0))
			{
				return func_519(iParam0);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_519(iParam0);
		case -1520388130:
		case 1802292908:
			return func_46();
		case -2061583405:
		case 81053684:
		case 1477698721:
			return func_200();
		case -525676072:
			return func_200();
		case 1779021115:
			if (iParam0 == -1016714371 || iParam0 == 332793555)
			{
				return func_56();
			}
			return func_57();
		case -1823706425:
			if (iParam0 == -1115561122)
			{
				return func_59();
			}
			else
			{
				return func_58();
			}
			break;
		case -854348463:
			return func_55();
		case -2101244071:
		case 664784405:
		case 874188557:
		case 2020212423:
			return func_522();
		default:
			if (func_105(iParam0, 0))
			{
				if (func_111(iParam0, 1919582297))
				{
					return func_62();
				}
				else if (iParam0 == -2035110427 || iParam0 == -1448210800)
				{
					return func_60();
				}
				else if (iParam0 == -1516555556)
				{
					return func_49();
				}
				else if (func_111(iParam0, 1147021565))
				{
					return func_36();
				}
			}
			return func_34();
	}
	return func_34();
}

int func_298()
{
	return Global_1915715->f_22504.f_5;
}

char* func_299()
{
	iVar0 = func_298();
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
			Var1 = { func_365(0) };
			if (!func_366(Var1))
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			iVar3 = func_523(&Var1, 1);
			if (iVar3 == -1)
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			if (!func_524(iVar3, 461218520, 1))
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			return func_526(func_525(iVar3, 461218520));
	}
	return "";
}

void func_300(int iParam0)
{
	Global_1915715->f_22504.f_5 = iParam0;
}

int func_301(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (func_527(iVar0, iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_302(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_528(iParam0))
	{
		return 1;
	}
	if (!func_529(iParam0))
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
	if (!bParam2 && !func_530(iParam0))
	{
		return 3;
	}
	if (func_531(iParam0) && !func_415())
	{
		return 4;
	}
	return 0;
}

bool func_303(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	switch (func_10(iParam0, -949239683))
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

bool func_304()
{
	return Global_1952637->f_1675.f_1[1]->f_1 == -282754472;
}

bool func_305(var uParam0)
{
	if (!does_entity_exist(*uParam0) || is_entity_dead(*uParam0))
	{
		return false;
	}
	if (func_532(*uParam0, -1725579161, 0))
	{
		return true;
	}
	return false;
}

void func_306(int iParam0)
{
	iVar0 = 406178289;
	switch (func_533())
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
		if (func_111(iParam0, 1573112293))
		{
			func_534(func_264(iParam0), 1, 1);
		}
		func_535(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

void func_307(int iParam0)
{
	iVar0 = 16939881;
	switch (func_533())
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
		func_535(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

void func_308(int iParam0, bool bParam1)
{
	iVar0 = -45077177;
	switch (func_533())
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
		func_535(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

void func_309(int iParam0, bool bParam1)
{
	iVar0 = 1700817728;
	switch (func_533())
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
		func_535(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

void func_310(int iParam0)
{
	iVar0 = -362580870;
	switch (func_533())
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
		func_535(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

void func_311(int iParam0)
{
	iVar0 = 2105609037;
	switch (func_533())
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
		func_535(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

void func_312(int iParam0)
{
	iVar0 = 1964324114;
	switch (func_533())
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
		func_535(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

void func_313(int iParam0)
{
	iVar0 = -1530144981;
	switch (func_533())
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
		func_535(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

void func_314(int iParam0)
{
	iVar0 = -1074475556;
	switch (func_533())
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
		func_535(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

void func_315(int iParam0)
{
	iVar0 = 1076410848;
	switch (func_533())
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
		func_535(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

void func_316(int iParam0)
{
	iVar0 = 1516413548;
	switch (func_533())
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
		func_535(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

void func_317(int iParam0)
{
	iVar0 = -1454586679;
	switch (func_533())
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
		func_535(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

void func_318(int iParam0, bool bParam1)
{
	iVar0 = 1934039819;
	switch (func_533())
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
		if (!func_535(Global_34, iParam0, iVar0, 1, 0) && bParam1)
		{
			func_536(iParam0);
			func_169(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

void func_319(int iParam0, bool bParam1)
{
	iVar0 = -1054661625;
	switch (func_533())
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
		if (!func_535(Global_34, iParam0, iVar0, 1, bParam1) && bParam1)
		{
			func_536(iParam0);
			func_169(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

bool func_320(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_321(char* sParam0)
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

void func_322(int iParam0)
{
	if (func_320(iParam0, 1))
	{
		func_537(1);
	}
}

int func_323(int iParam0)
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

void func_324(int iParam0)
{
	Global_1952637 = (Global_1952637 || iParam0);
}

void func_325(struct<4> Param0)
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
			if (func_538(Param0))
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
			func_539(Param0);
			*Global_1952637->f_736[Global_1952637->f_924] = { Param0 };
			Global_1952637->f_918++;
			Global_1952637->f_924 = (Global_1952637->f_924 + 1 % 25);
			func_324(8);
			break;
		case 24:
		case 25:
			if (Global_1952637->f_919 >= 25)
			{
				return;
			}
			if (func_538(Param0))
			{
				return;
			}
			func_539(Param0);
			*Global_1952637->f_635[Global_1952637->f_919] = { Param0 };
			Global_1952637->f_919++;
			func_324(8);
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
			if (func_538(Param0))
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
			func_539(Param0);
			*Global_1952637->f_837[Global_1952637->f_922] = { Param0 };
			Global_1952637->f_920++;
			Global_1952637->f_922 = (Global_1952637->f_922 + 1 % 20);
			func_324(8);
			break;
			break;
	}
}

bool func_326(int iParam0)
{
	if (func_540())
	{
		return false;
	}
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	if (!func_293(iParam0, 1))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

bool func_327(int iParam0)
{
	return func_541(iParam0);
}

int func_328(int iParam0, int iParam1)
{
	bVar3 = func_542(iParam0);
	if (func_133(iParam0) == -525676072 || func_111(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_543(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_544();
			}
			else
			{
				iVar0 = func_545();
			}
		}
		else if (bVar1)
		{
			iVar0 = func_546();
		}
		else
		{
			iVar0 = func_547();
		}
	}
	else if (func_548(&iVar2))
	{
		if (func_111(iVar2, -1303648999) || func_133(iVar2) == -525676072)
		{
			iVar0 = func_544();
		}
		else
		{
			iVar0 = func_545();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_546();
	}
	else
	{
		iVar0 = func_547();
	}
	if (iVar0 != 0)
	{
		Global_1952637->f_3483 = get_game_timer();
		_task_item_interaction(Global_34, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

bool func_329(int iParam0)
{
	return (Global_1952637 && iParam0) != 0;
}

void func_330()
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
	func_549(32768);
	func_550(1108822547, 8, 6);
}

bool func_331(int iParam0, bool bParam1)
{
	return func_551(iParam0, 0) < func_552(iParam0, bParam1);
}

void func_332(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar0 = func_133(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			if (func_111(iParam0, 1584357097))
			{
				return;
			}
			bVar1 = func_553(iParam0, &(Global_1952637->f_3334.f_28), Global_1952637->f_3334.f_33.f_1, bParam1, bParam5);
			break;
		case 81053684:
			bVar1 = func_553(iParam0, &(Global_1952637->f_3334.f_30), 1, bParam1, bParam5);
			break;
		case -999503751:
			bVar1 = func_553(iParam0, &(Global_1952637->f_3334.f_27), Global_1952637->f_3334.f_33, bParam1, bParam5);
			break;
		case -525676072:
			bVar1 = func_553(iParam0, &(Global_1952637->f_3334.f_29), Global_1952637->f_3334.f_33.f_2, bParam1, bParam5);
			break;
		case -1719060085:
			bVar1 = func_553(iParam0, &(Global_1952637->f_3334.f_31), 1, bParam1, bParam5);
			break;
		case 119907797:
			bVar1 = func_553(iParam0, &(Global_1952637->f_3334.f_32), 1, bParam1, bParam5);
			break;
		case 1388798186:
			bVar1 = func_553(iParam0, &(Global_1952637->f_3334.f_33.f_7), 1, bParam1, bParam5);
			break;
		default:
			if (func_111(iParam0, 160827531))
			{
				bVar1 = func_553(iParam0, &(Global_1952637->f_3334.f_30), 1, bParam1, bParam5);
			}
			break;
	}
	if (!bVar1)
	{
		return;
	}
	func_554();
	if (func_41(iVar0) || (iVar0 != -999503751 && func_111(iParam0, -166674229)))
	{
		_0x766315a564594401(func_210(bParam5), iParam0, 0);
	}
	func_140(iParam0, iParam3, bParam5);
	if (bParam4)
	{
		func_555(1, iParam0);
	}
	if (bParam2)
	{
		func_556(0, 0);
	}
}

int func_333(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_557();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

void func_334(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (func_558(iParam0, iParam1))
	{
		func_559(iParam0, iParam1, 1, bParam2, iParam3, bParam4);
		return;
	}
}

int func_335(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1952637->f_83[iVar0]->f_9 == iParam0)
		{
			return func_560(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_336(int iParam0, int iParam1)
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

bool func_337(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_561();
	if (iParam2 == 39)
	{
		Var0 = { func_155(iParam0, 1, 0) };
		iParam2 = func_336(func_335(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_329(32768) && iParam2 == 10)
	{
		func_562(1108822547);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	if (func_339(iParam0, 1))
	{
		func_563(&(Global_1952637->f_1556), &iParam0, iParam2, bParam5);
	}
	if (bParam6)
	{
		func_564(iParam2);
	}
	func_565(iParam2, iVar5);
	func_566(Global_1952637->f_1556.f_1[iParam2], 4, 6);
	func_566(Global_1952637->f_1675.f_1[iParam2], 4, 6);
	func_567(&(Global_1952637->f_1556), iParam0, iParam2, 1, iVar5);
	if (iParam1 == 0)
	{
		iParam1 = Global_1952637->f_1556.f_1[iParam2]->f_1;
	}
	Global_1952637->f_1556.f_1[iParam2] = iParam0;
	Global_1952637->f_1556.f_1[iParam2]->f_1 = func_568(iParam0, iParam2, iParam1);
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1952637->f_2897)
		{
			if (&Global_1952637->f_2897.f_2[iVar6] >= 0 && &Global_1952637->f_2897.f_2[iVar6] < 39)
			{
				Global_1952637->f_2764[&Global_1952637->f_2897.f_2[iVar6]] = 0;
				Global_1952637->f_2764[&Global_1952637->f_2897.f_2[iVar6]]->f_1 = 0;
				func_550(func_560(&(Global_1952637->f_2897.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_338(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	func_569(&(Global_1952637->f_2897), bParam0, bParam1, bParam2, bParam3);
}

bool func_339(int iParam0, bool bParam1)
{
	if (!func_105(iParam0, 0))
	{
	}
	if (!bParam1 && (iParam0 == -1713496139 || iParam0 == -598283164))
	{
		return false;
	}
	if (func_111(iParam0, 265372629))
	{
		return true;
	}
	return false;
}

bool func_340(int iParam0, int iParam1, bool bParam2)
{
	Var4 = { func_155(iParam0, bParam2, 0) };
	if (func_339(iParam0, 0))
	{
		iVar9 = func_570(Var4, Var4.f_4, bParam2, -1);
		if (iVar9 != 0)
		{
			Var4 = { func_155(iVar9, bParam2, 0) };
			Var0 = { func_156(iVar9, Var4, Var4.f_4, bParam2) };
			return func_157(Var0, 0, bParam2);
		}
		return true;
	}
	Var0 = { func_156(iParam0, Var4, Var4.f_4, bParam2) };
	return func_157(Var0, iParam1, bParam2);
}

int func_341(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_336(iParam0, 1);
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

void func_342(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_343(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_294(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_156(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_210(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_210(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

struct<4> func_344(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_210(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_156(1328661203, func_385(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_156(1328661203, func_385(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_156(1328661203, func_385(), -1591664384, bParam0);
}

bool func_345(int iParam0)
{
	iParam0 = func_238(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_87(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return false;
	}
	if (func_571(iVar0))
	{
		return true;
	}
	return false;
}

int func_346()
{
	return Global_39.f_281.f_3222;
}

bool func_347()
{
	return Global_1915715->f_22504.f_1;
}

bool func_348(int iParam0)
{
	return (Global_1051439->f_3628 && iParam0) != 0;
}

void func_349(int iParam0)
{
	Global_1051439->f_3628 = (Global_1051439->f_3628 - (Global_1051439->f_3628 && iParam0));
}

void func_350(int iParam0)
{
	Global_1051439->f_3629 = iParam0;
}

bool func_351()
{
	return Global_1915715->f_22504;
}

void func_352()
{
	_0x2804658eb7d8a50b(4, 666989068);
}

bool func_353()
{
	return func_348(4);
}

int func_354(bool bParam0)
{
	if (!func_572())
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
	if ((func_184(1106247680, 0) || _is_ped_hogtied(Global_34)) || _is_ped_hogtying(Global_34))
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
	if (func_573(255))
	{
		return 3;
	}
	if (is_minigame_in_progress())
	{
		return 44;
	}
	if ((Global_1108365->f_935.f_28 != -1 && Global_1108365->f_935.f_28 != 6) && Global_1108365->f_935.f_28 != 8)
	{
		if (func_574(Global_1108365->f_935.f_28))
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
	if (func_575())
	{
		return 43;
	}
	return -1;
}

void func_355(int iParam0)
{
	if (!func_353())
	{
		func_576(1);
	}
	Global_1051439->f_3630 = iParam0;
	iVar0 = func_354(1);
	if (iVar0 != -1)
	{
		func_300(iVar0);
		func_577(0);
	}
	else
	{
		func_577(1);
	}
}

bool func_356()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_3;
}

bool func_357(int iParam0)
{
	return func_82((*Global_1134390)[network_player_id_to_int()]->f_73, iParam0);
}

bool func_358()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_359()
{
	return !func_357(2);
}

bool func_360(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

void func_361()
{
	if (!_is_any_app_running())
	{
		return;
	}
	_close_all_apps();
}

bool func_362(bool bParam0, bool bParam1, bool bParam2)
{
	bVar0 = func_579(bParam2, func_578(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_363(int iParam0)
{
	Global_1896738->f_390 = iParam0;
}

int func_364(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

struct<2> func_365(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_366(struct<2> Param0)
{
	if (!func_580(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_581(Param0))
	{
		return false;
	}
	return true;
}

int func_367(int iParam0, bool bParam1)
{
	if (network_is_player_active(iParam0))
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if (Global_1196339->f_1[iVar1]->f_1 != -1 && func_582(iVar1, 64, iVar0))
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

int func_368(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return &(Global_1196898->f_1[iParam0]);
}

var func_369(int iParam0, int iParam1)
{
	return func_583(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_370(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
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
				func_584(&(Global_1071686->f_23044), Var0);
				return;
			}
		}
	}
	trigger_script_event(1, &Param0, 19, 5, &uParam19);
}

void func_371(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_372(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_585(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_586(iParam0))
	{
		return false;
	}
	if (func_587(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_588(iParam0, 1)) || func_589(32768))
	{
		if (!func_588(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_590())
	{
		return false;
	}
	return true;
}

void func_373(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

void func_374()
{
	Global_1913694->f_1583 = get_game_timer();
	Global_1913694->f_1581 = 1;
}

void func_375(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	(*Global_1138048)[iVar0]->f_7 = ((*Global_1138048)[iVar0]->f_7 || iParam0);
}

struct<4> func_376(bool bParam0)
{
	iVar0 = func_210(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_156(923904168, func_344(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_156(923904168, func_344(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_156(923904168, func_344(bParam0), -740156546, 0);
}

bool func_377(int iParam0, bool bParam1)
{
	if (func_133(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_591();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_378(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_343(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_379(int iParam0, var uParam1, int iParam2)
{
	if (func_592(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_380(bool bParam0)
{
	iVar0 = func_210(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_156(271701509, func_344(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_156(271701509, func_344(bParam0), 12999093, 0);
}

bool func_381(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_133(iParam0);
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
			if (func_593(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_382(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_594(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_383(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_382(*uParam0, &Var1, 1, 0, -1))
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
	iVar15 = func_130(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_595(*uParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_596(-1230526146, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2072933068)
	{
		Var44 = { func_597(*uParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_598(-1230526146, &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var69 = { func_599(*uParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_600(-1230526146, &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_601(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_518(-1230526146, &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_384(int iParam0)
{
	return func_130(iParam0) == -427144552;
}

struct<4> func_385()
{
	return Var0;
}

void func_386(int iParam0, int iParam1, struct<4> Param2)
{
	disable_control_action(0, -822242784, false);
	if (is_ped_on_mount(Global_34) && !func_206(Global_34))
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
		iVar0 = iParam1;
		if (!Global_1940144->f_9 && !_0x4912dfe492db98cd(Global_34, "inInspectionMode"))
		{
			_task_item_interaction_3(player_ped_id(), iVar0, &Param2, 0, 0, 0, -1082130432);
			Global_1940144->f_8 = 1;
			Global_1940144->f_66 = { Param2 };
		}
	}
}

int func_387(int iParam0)
{
	if (func_111(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_111(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_111(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_388(int iParam0)
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

bool func_389()
{
	if (_inventory_get_ped_inventory_id(player_ped_id()) != 3)
	{
		return false;
	}
	return _0xfc7563f482781a3d();
}

struct<2> func_390(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_391(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_392(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_158(0) || func_389())
	{
		iVar0 = iParam0;
		Var1.f_1 = 10;
		func_603(iParam1, func_602(iParam2), &Var1, 1);
		if (func_604(iVar0, &Var1, 0, 0))
		{
		}
		func_152(501, 0);
		return 0;
	}
	_0xb29c553ba582d09e(&uVar13, iParam0, iParam1, func_602(iParam2));
	iVar29 = 0;
	while (iVar29 < 15)
	{
		if ((func_105(&(uVar13[iVar29]), 0) && !func_111(&(uVar13[iVar29]), 1286414894)) && !&uVar13[iVar29] == iParam2)
		{
			func_605(&(uVar13[iVar29]), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			if (iParam3 != 0)
			{
				if (iParam3 == &uVar13[iVar29])
				{
					iVar30++;
				}
			}
			else
			{
				iVar30++;
			}
		}
		iVar29++;
	}
	func_66(func_158(0), 0, 0);
	return iVar30;
}

int func_393(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return -1;
	}
	if (func_515(iParam0))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_382(*uParam1, &Var0, 1, 0, -1))
	{
		return -1;
	}
	if (Var0.f_13)
	{
		return -1;
	}
	if (iParam2 < 0)
	{
		iParam2 = Var0.f_11;
	}
	else if (iParam2 > Var0.f_11)
	{
		iParam2 = Var0.f_11;
	}
	Var14 = { func_601(&Var0, 0) };
	Var14.f_9 = iParam2;
	Var14.f_12 = iParam3;
	iVar30 = -1;
	iVar30 = func_518(1702063850, &Var14, bParam5);
	if (bParam4 && iVar30 != -1)
	{
		Var31.f_7 = -142743235;
		Var31.f_16 = -1;
		Var31 = 1;
		func_394(iVar30, Var31);
	}
	return iVar30;
}

void func_394(int iParam0, struct<17> Param1)
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

bool func_395(int iParam0, int iParam1)
{
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	if (func_606(iParam0))
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
	if (func_606(iParam0) && is_ped_in_writhe(iVar0))
	{
		if (func_607(iVar0, iParam0))
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
	if (func_608() == 1)
	{
		func_609(iVar0);
		func_610(iParam0);
		func_611(1);
	}
	else
	{
		return false;
	}
	return true;
}

void func_396(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_397(int iParam0)
{
	return func_130(iParam0) == 2085633299;
}

int func_398(int iParam0, int iParam1)
{
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_130(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_111(iParam0, 1399091007))
	{
		func_612(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_399(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_105(iParam0, 0))
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
	if (!func_613() || bParam6)
	{
		func_614(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_615(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam0 == 1701457723)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_615(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_616(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_130(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if (((((((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038) && iParam0 != 446901936) && iParam0 != -228768324) && iParam0 != 34372170) && iParam0 != 963726415) && iParam0 != 1701457723)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	iVar12 = func_133(iParam0);
	if (((((((iVar6 == -1013984273 || iVar6 == 658570475) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_617(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	if (func_111(iParam0, 474910316))
	{
		sVar17 = func_618(iParam0);
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
	if (func_111(iParam0, 1816585950))
	{
		iVar13 = 76603059;
	}
	if (func_445(iParam0))
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
	iVar18 = func_274(iParam0);
	if ((func_619(iVar12) && func_111(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_442(iParam0);
	}
	else if (func_130(iParam0) == -1037537535)
	{
		iVar19 = func_620(iParam0);
		if (func_105(iVar19, 0))
		{
			iVar18 = func_274(iVar19);
		}
	}
	if (func_621(iParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_622(iParam0, -915411861, &iVar20, 0);
		iVar1 = ceil((to_float(iVar1) / to_float(iVar20)));
		iParam1 = ceil((to_float(iParam1) / to_float(iVar20)));
	}
	sVar21 = func_501(_create_var_string(10, &cVar2, _create_var_string(0, iVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = _create_var_string(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != -1713496139) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != 1733464892) && iParam0 != -598283164)) || (iVar12 == 252325943 && iParam0 != -860557048)) || (iVar12 == -636562458 && iParam0 != -2087489409))
	{
		sVar21 = _create_var_string(0, func_623(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_624(iParam0, &cVar22))
		{
			sVar21 = func_279(func_625(cVar22), 109029619);
		}
	}
	func_626(sVar21, Var7.f_1, get_hash_key(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

struct<2> func_400(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
		return Var0;
	}
	if (func_111(iParam0, -305066475))
	{
		if (func_68() == -1)
		{
			if (func_111(iParam0, -537818634))
			{
				return func_627(189951448);
			}
			else
			{
				return func_627(1176172851);
			}
		}
	}
	else if (func_111(iParam0, -537818634))
	{
		return func_627(-963660207);
	}
	if (func_111(iParam0, 2084895747))
	{
		return func_627(1694039471);
	}
	return Var2;
}

bool func_401(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_424(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_628(&Var0, func_376(0));
	}
	if (!func_425(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_228(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_296(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_242(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

int func_402(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_162(0);
	if (does_entity_exist(iVar0))
	{
		iVar1 = func_629(iVar0, iParam0);
		if (iVar1 > 0)
		{
			if (iParam1 < iVar1)
			{
				iVar1 = iParam1;
			}
			iParam1 = (iParam1 - iVar1);
			func_630(&iVar0, iParam0, &iVar1, bParam3, iParam4, iParam5);
			iParam1 = (iParam1 + iVar1);
		}
	}
	iParam1 = func_631(player_ped_id(), iParam0, iParam1, bParam2, iParam5);
	if (iParam1 <= 0)
	{
		return iParam1;
	}
	return iParam1;
}

int func_403(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iVar0 = func_270(iParam0, 0, 0, 0);
	if (iVar0 >= iParam1)
	{
		iVar1 = iParam1;
	}
	else
	{
		iVar1 = iVar0;
		iVar2 = (iParam1 - iVar1);
	}
	if (iVar1 > 0)
	{
		if (!func_169(iParam0, iVar1, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_632(iParam0, iVar1, 0);
		}
	}
	if (iVar2 > 0)
	{
		if (!func_633(iParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_632(iParam0, iVar1, 0);
		}
		if (!bParam2)
		{
			func_132("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

bool func_404(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_344(bParam4) };
	Var0.f_4 = -2015960939;
	Var5 = { func_156(iParam0, Var0, Var0.f_4, bParam4) };
	return func_296(iParam0, &Var5, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_405()
{
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if ((*Global_1248240)[iVar0]->f_632 != 0)
		{
			iVar1 = func_634((*Global_1248240)[iVar0]->f_632, 1);
			(*Global_1248240)[iVar0]->f_631 = iVar1;
		}
		iVar0++;
	}
}

int func_406(int iParam0, int iParam1)
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

int func_407(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_635(bParam1, bParam2, bParam3);
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

bool func_408(int iParam0)
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

bool func_409(int iParam0)
{
	return (Global_1915692->f_22 && iParam0) != 0;
}

bool func_410()
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

bool func_411()
{
	return (Global_1893587 & 1 != 0 && func_636() != -1);
}

int func_412()
{
	return -1;
}

int func_413(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_414()
{
	return func_366(*Global_1051213);
}

bool func_415()
{
	return func_637(func_365(0));
}

bool func_416(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

void func_417(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_418(int iParam0)
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

void func_419(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_420(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = func_638();
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

bool func_421(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if ((((Param0.f_9 != 1084182731 && Param0.f_9 != -140655024) && Param0.f_9 != -1162387149) && Param0.f_9 != 1784584921) && Param0.f_9 != -511891179)
	{
		Var0.f_9 = -1591664384;
		if (!func_382(Param0.f_5, &Var0, 1, 0, -1))
		{
			return false;
		}
		if (!func_111(Var0.f_4, 1093867179))
		{
			return false;
		}
	}
	iVar14 = func_130(Param0.f_4);
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
			switch (func_133(Param0.f_4))
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
					if (func_111(Param0.f_4, 160827531))
					{
						return true;
					}
					return false;
				default:
					return false;
			}
			break;
	}
	if (func_133(Param0.f_4) == -829303394)
	{
		return false;
	}
	return true;
}

void func_422(int iParam0, int iParam1, bool bParam2)
{
	if (func_105(iParam1, 0))
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

bool func_423(int iParam0)
{
	return func_639(func_133(iParam0), iParam0);
}

struct<14> func_424(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

bool func_425(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_210(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

void func_426(int iParam0, bool bParam1)
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
	func_640(iParam0, Var0, bParam1, 0);
}

void func_427(int iParam0, bool bParam1)
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
	func_640(iParam0, Var0, bParam1, 0);
}

void func_428(int iParam0, bool bParam1)
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
	func_640(iParam0, Var0, bParam1, 0);
}

void func_429(int iParam0, bool bParam1)
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
	func_640(iParam0, Var0, bParam1, 0);
}

void func_430(int iParam0, bool bParam1)
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
	func_640(iParam0, Var0, bParam1, 0);
}

void func_431()
{
	terminate_this_thread();
}

bool func_432(int iParam0, var uParam1)
{
	if (!func_641(iParam0))
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

void func_433()
{
	iVar0 = func_642();
	if (func_642() == 822208792)
	{
		iVar0 = 0;
	}
	if (func_28(0))
	{
		if (func_248() == 2)
		{
			iVar0 = -693134279;
		}
		else
		{
			iVar0 = -182626652;
		}
	}
	if (func_73())
	{
		iVar0 = -2074770370;
	}
	func_76(iVar0);
}

void func_434(var uParam0, int iParam1, char* sParam2, char* sParam3)
{
	uVar0 = _databinding_get_data_container_from_child_index(uParam0, Global_1940311->f_10867);
	bVar1 = func_236(iParam1);
	iVar2 = iParam1;
	uVar3 = uVar0;
	if (bVar1)
	{
		_databinding_write_data_int(Global_1940311->f_10908, Global_1940311->f_10867);
		Global_1940311->f_10868 = Global_1940311->f_10867;
	}
	_databinding_write_data_script_variables(8, uVar3, sParam2, sParam3, iVar2, bVar1);
	Global_1940311->f_10869[Global_1940311->f_10867] = iParam1;
	Global_1940311->f_10867++;
}

void func_435(var uParam0)
{
	if (func_86())
	{
		func_434(uParam0, -283002878, "Horse", 771764772);
	}
}

void func_436(var uParam0)
{
	if (func_100())
	{
		func_434(uParam0, -889932290, "Wagon", 771764772);
	}
}

void func_437(var uParam0)
{
	if (func_28(0))
	{
		if (func_248() == 2)
		{
			func_434(uParam0, -693134279, "Send", -1346803962);
		}
		else
		{
			func_434(uParam0, -182626652, "Sell", -1523466777);
		}
	}
	else if (func_73())
	{
		func_434(uParam0, -2074770370, "Donations", -1966717115);
	}
}

bool func_438(int iParam0, var uParam1)
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

void func_439(bool bParam0)
{
	if (bParam0)
	{
		_show_player_cores(true);
		_show_horse_cores(false);
	}
	else
	{
		_show_player_cores(false);
		_show_horse_cores(true);
	}
}

int func_440(int iParam0)
{
	if (!func_111(iParam0, 1989861793))
	{
		return 0;
	}
	iVar0 = func_495(iParam0, 0);
	if (!_0xef254f1a4c08b7e6(iVar0))
	{
		return 0;
	}
	iVar5 = _0x3faa928a79591761(iVar0);
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (!_0x121d2005dd64496b(iVar0, iVar4, &iVar1))
		{
		}
		else if (func_111(iVar1, 1989861793))
		{
			return iVar1;
		}
		iVar4++;
	}
	return 0;
}

bool func_441(int iParam0)
{
	iVar0 = iParam0;
	if (!func_285(iVar0))
	{
		return false;
	}
	if (((((((((((((iVar0 == _0xcc644bc1dd655269(-623226361, 0) || iVar0 == _0xcc644bc1dd655269(-1452445456, 0)) || iVar0 == _0xcc644bc1dd655269(332438661, 0)) || iVar0 == _0xcc644bc1dd655269(1632674359, 0)) || iVar0 == _0xcc644bc1dd655269(56759509, 0)) || iVar0 == _0xcc644bc1dd655269(2145533727, 0)) || iVar0 == _0xcc644bc1dd655269(-1874365462, 0)) || iVar0 == _0xcc644bc1dd655269(-1658668866, 0)) || iVar0 == _0xcc644bc1dd655269(90781239, 0)) || iVar0 == _0xcc644bc1dd655269(1997097980, 0)) || iVar0 == _0xcc644bc1dd655269(920487791, 0)) || iVar0 == _0xcc644bc1dd655269(-668555046, 0)) || iVar0 == _0xcc644bc1dd655269(-839148413, 0)) || iVar0 == _0xcc644bc1dd655269(10424351, 0))
	{
		return true;
	}
	return false;
}

int func_442(int iParam0)
{
	if (!func_105(iParam0, 0))
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

bool func_443(int iParam0)
{
	if (func_27())
	{
		return func_457(iParam0, -2074770370, 0);
	}
	else if (func_24())
	{
		if (func_111(iParam0, 96549393))
		{
			return false;
		}
		if (func_111(iParam0, -111938901) || func_10(iParam0, -949239683) == -1337515701)
		{
			return true;
		}
		if (func_111(iParam0, -121341956))
		{
			return true;
		}
		return false;
	}
	else if (func_25())
	{
		if (((((((func_111(iParam0, 1765172170) || func_111(iParam0, -458578204)) || func_111(iParam0, -1919515848)) || func_111(iParam0, 1443104131)) || func_111(iParam0, 1490540191)) || func_111(iParam0, 1573112293)) || func_111(iParam0, 1939071949)) || func_111(iParam0, 845883585))
		{
			return false;
		}
		if (((!func_111(iParam0, -887064662) && !func_111(iParam0, -839724752)) && !func_111(iParam0, -1457797660)) && !func_111(iParam0, 1286414894))
		{
			return false;
		}
		if (func_643(iParam0) == 0)
		{
			return false;
		}
	}
	if (func_28(0))
	{
		if (Global_1915715->f_20241 == 2)
		{
			return true;
		}
		else if (!func_280(iParam0, Global_1915715->f_20241.f_1))
		{
			return false;
		}
		else if (Global_1915715->f_20241 == 29)
		{
			if (func_281(iParam0))
			{
				return false;
			}
		}
		else if (Global_1915715->f_20241 == 10)
		{
		}
	}
	if (func_111(iParam0, 949916894) || iParam0 == -569063887)
	{
		if (!func_423(iParam0))
		{
			return false;
		}
	}
	if (_0x3d10d7179d7034af(func_210(0), iParam0, func_28(0)))
	{
		return false;
	}
	if ((func_68() == 0 && func_111(iParam0, -1551542038)) && !func_359())
	{
		return false;
	}
	if (func_111(iParam0, -1242251796))
	{
		if (is_ped_on_mount(player_ped_id()) && _0x4e76cb57222a00e5(player_ped_id()) != -1)
		{
			return false;
		}
		iVar0 = get_mount(player_ped_id());
		if (does_entity_exist(iVar0))
		{
			if (iVar0 != _0xf49f14462f0ae27c(get_player_index()))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_444(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	return func_133(iParam0) == 1802292908;
}

bool func_445(int iParam0)
{
	if (func_111(iParam0, -189374246))
	{
		if (((func_644(iParam0, -1305775593) || func_644(iParam0, 1384151091)) || func_644(iParam0, 2075388272)) || func_644(iParam0, -1738780413))
		{
			return true;
		}
	}
	if (func_111(iParam0, -753854379) || func_111(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

int func_446(int iParam0)
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

Vector3 func_447(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

bool func_448(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_449(int iParam0)
{
	iVar0 = func_446(iParam0);
	switch (iVar0)
	{
		case 10:
			return 10f;
		case 29:
			return 70f;
		case 2:
			return 75f;
		case 15:
			if (iParam0 == 63)
			{
				return 40f;
			}
			else
			{
				return 25f;
			}
			break;
	}
	return 10f;
}

float func_450(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_451(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_452(int iParam0)
{
	iParam0 = func_238(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_39.f_281.f_1[iParam0]->f_9;
}

int func_453(int iParam0)
{
	iParam0 = func_238(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_39.f_281.f_1[iParam0]->f_398;
}

float func_454(int iParam0)
{
	iParam0 = func_238(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_39.f_281.f_1[iParam0]->f_398.f_1;
}

int func_455(int iParam0, int iParam1)
{
	if (!is_model_valid(iParam0))
	{
		iParam0 = 1074477367;
	}
	iVar0 = get_default_attribute_points_needed_for_rank(iParam0, 7, iParam1);
	return iVar0;
}

float func_456(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_457(int iParam0, int iParam1, bool bParam2)
{
	bVar0 = false;
	if ((iParam1 == 0 || func_28(0)) || bParam2)
	{
		bVar0 = true;
	}
	if (!bParam2)
	{
		if ((!func_105(iParam0, 0) || iParam0 == 1259508039) || iParam0 == -727924611)
		{
			return false;
		}
	}
	if (!bVar0 && func_645(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case -889932290:
		case -283002878:
		case 0:
			if (!func_28(0))
			{
				if (iParam0 == 1807503187)
				{
					return true;
				}
				if (((((((((((func_457(iParam0, -1559802791, 1) || func_457(iParam0, -1268291907, 1)) || func_457(iParam0, -96974025, 1)) || func_457(iParam0, -1666604090, 1)) || func_457(iParam0, 1561961676, 1)) || func_457(iParam0, -156634416, 1)) || func_457(iParam0, 1061777683, 1)) || func_457(iParam0, -2074770370, 1)) || func_457(iParam0, -693134279, 1)) || func_457(iParam0, -182626652, 1)) || func_457(iParam0, 1783698482, 1)) || func_646(iParam0))
				{
					return true;
				}
			}
			else
			{
				return true;
			}
			break;
		case -1559802791:
			return func_111(iParam0, 1422457563);
		case -1268291907:
			return (func_111(iParam0, 1360707454) && !func_111(iParam0, 474910316));
		case -96974025:
			return (func_111(iParam0, 1009210113) && !func_111(iParam0, 474910316));
		case -1666604090:
			return (func_111(iParam0, -193035453) && !func_111(iParam0, 474910316));
		case 1561961676:
			if (func_111(iParam0, -111938901) && !func_111(iParam0, 474910316))
			{
				return true;
			}
			else if (func_111(iParam0, -189374246) || func_111(iParam0, -1257428961))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case -156634416:
			return (func_111(iParam0, -928967997) && !func_111(iParam0, 474910316));
		case 1061777683:
			return (func_111(iParam0, 747873593) && !func_111(iParam0, 474910316));
		case 1783698482:
			return ((func_111(iParam0, 474910316) && !func_28(0)) && func_647(iParam0));
		case -2074770370:
			if (Global_1940311->f_36 == 1 || Global_1940311->f_36 == 2)
			{
				return func_648(iParam0, iParam1);
			}
			else if (func_10(iParam0, -949239683) == -1337515701 && iParam0 != -780677328)
			{
				return true;
			}
			else
			{
				return func_111(iParam0, -111938901);
			}
			break;
		case -693134279:
			return func_616(iParam0, 8388608);
		case -182626652:
			if (func_280(iParam0, Global_1915715->f_20241.f_1))
			{
				func_422(func_210(0), iParam0, 1);
				return true;
			}
			break;
	}
	return false;
}

int func_458(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_649(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_210(bParam1), iParam0, iParam3);
}

bool func_459(int iParam0)
{
	return iParam0 != 0;
}

void func_460(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_1940311->f_38.f_2[iParam0]->f_1 = bParam1;
	}
}

void func_461(int iParam0, bool bParam1)
{
	iVar0 = Global_1940311->f_38.f_1;
	func_650(iVar0, iParam0);
	func_460(iVar0, bParam1);
	if (func_73())
	{
		if (!func_651(iVar0))
		{
			func_652(iVar0);
			return;
		}
	}
	func_653(iParam0);
}

int func_462(int iParam0)
{
	if (!does_entity_exist(*iParam0))
	{
		return 0;
	}
	iVar0 = get_ped_index_from_entity_index(*iParam0);
	return func_654(iVar0);
}

int func_463(int iParam0)
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
			iVar0 = func_654(get_ped_index_from_entity_index(iParam0));
		}
	}
	return iVar0;
}

void func_464(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	iVar0 = 0;
	bVar1 = false;
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2.f_1 = 1084182731;
	iVar16 = -1;
	iVar19 = _inventory_get_ped_inventory_id(*iParam0);
	Var20.f_9 = -1591664384;
	if (func_655(iVar19, &Var2, &iVar16, &iVar17))
	{
		iVar18 = 0;
		iVar18 = 0;
		while (iVar18 < iVar17)
		{
			if (func_228(&Var20, iVar18, iVar16, iVar17))
			{
				if (func_105(Var20.f_4, 0) && Var20.f_4 != 1259508039)
				{
					if (bParam3 && func_491(Var20.f_4))
					{
						bVar1 = false;
						Var20.f_11 = 0;
						iVar34 = 0;
						while (iVar34 < 3)
						{
							if (!is_bit_set(iVar0, iVar34))
							{
								if (Global_1904087->f_113[iVar34]->f_1 == Var20.f_4)
								{
									if (does_entity_exist(Global_1291734->f_938.f_245[iVar34]->f_3))
									{
										if (network_has_control_of_entity(Global_1291734->f_938.f_245[iVar34]->f_3))
										{
											*iParam1++;
											Var20.f_11++;
											bVar1 = true;
											set_bit(&iVar0, iVar34);
										}
									}
								}
							}
							iVar34++;
						}
						if ((bVar1 && bParam2) && func_231(Var20.f_4))
						{
							func_256(Var20, 1);
						}
					}
					else
					{
						*iParam1++;
						if (bParam2 && func_231(Var20.f_4))
						{
							func_256(Var20, 1);
						}
					}
				}
			}
			iVar18++;
		}
		func_242(iVar16);
	}
}

int func_465(int iParam0)
{
	if (!func_285(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	if (func_292(iParam0, -489628648, &Var2, &iVar1, 0, 1))
	{
		iVar0 = 99;
		iVar33 = 0;
		while (iVar33 < iVar1)
		{
			if (&Var2[iVar33] == 0)
			{
			}
			else
			{
				iVar34 = func_270(&(Var2[iVar33]), 0, 0, 0);
				if (iVar34 < iVar0)
				{
					iVar0 = iVar34;
				}
				iVar33++;
			}
		}
	}
	if (iVar0 < 1)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_466(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (_0xf8d09ef8ce61d7bf(iParam0, &Var3))
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
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_467(int iParam0, char* sParam1, int iParam2, bool bParam3, char* sParam4, bool bParam5, char* sParam6, char* sParam7)
{
	uVar0 = _databinding_get_data_container_from_child_index(Global_1940311->f_10905, Global_1940311->f_10899);
	uVar1 = uVar0;
	_databinding_write_data_script_variables(0, uVar1, sParam1, iParam2->f_1, *iParam2, sParam4, bParam3, bParam5, sParam6, sParam7);
	_databinding_set_templated_ui_item_hash_alias(Global_1940311->f_10905, Global_1940311->f_10899, iParam0);
	Global_1940311->f_10899++;
}

bool func_468(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (!func_292(iParam0, iParam1, &Var0, &iVar31, 0, 1))
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
				if (!bParam4 && !func_656(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else if (&Var0[iVar32] == 773203532)
			{
				if (!bParam4 && !func_657(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_658(iVar34, &(Var0[iVar32]));
				if (iVar33 != 0)
				{
					iVar35 = func_659(&(Var0[iVar32]), iVar33);
				}
				else
				{
					iVar35 = func_270(&(Var0[iVar32]), 0, bParam3, 1);
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

bool func_469(int iParam0, var uParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (uParam1[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_470(var uParam0)
{
}

void func_471(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_660(uParam0[iVar0], func_173(func_162(0), uParam0[iVar0], 0, 1, 1), 0, 0);
		iVar0++;
	}
}

bool func_472()
{
	if (func_224())
	{
		if (Global_1915715->f_20241 == 29)
		{
			return true;
		}
	}
	return false;
}

Vector3 func_473(var uParam0)
{
	if (!func_661(uParam0, &vVar0, 805880880, 0, 0, -401018458))
	{
		vVar0.f_1 = -546782298;
		vVar0.x = -1102349958;
	}
	return vVar0;
}

int func_474(int iParam0)
{
	if (!_0x245d07651b1d183b(iParam0, 1879048192))
	{
		return 0;
	}
	if (_0x245d07651b1d183b(iParam0, 268435456))
	{
		return 1;
	}
	if (_0x245d07651b1d183b(iParam0, 536870912))
	{
		return 2;
	}
	return 3;
}

void func_475(var uParam0)
{
	if ((uParam0->f_4 == Global_1940311->f_10896 && func_86()) && func_173(func_162(0), Global_1940311->f_10896, 0, 1, 1) > 0)
	{
		uParam0->f_11++;
	}
}

bool func_476(int iParam0)
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

void func_477()
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
	func_662(&Var0, 0, 1, 0);
}

bool func_478(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 22:
		case 23:
		case 25:
		case 26:
		case 31:
		case 33:
		case 36:
		case 37:
			return true;
		default:
			return false;
	}
	return false;
}

bool func_479(int iParam0)
{
	switch (iParam0)
	{
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
			return true;
	}
	return false;
}

int func_480(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	return _0xa4550fe9c512e3dd(iParam0);
}

bool func_481(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_482(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_481(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887->f_13 != -1)
	{
		return (Global_17411[iParam0] && iParam1) != 0;
	}
	return (Global_39.f_4667[iParam0] && iParam1) != 0;
}

void func_483(bool bParam0)
{
	_databinding_write_data_bool(Global_1940311->f_10924, bParam0);
	_databinding_write_data_bool(Global_1940311->f_10923, bParam0);
	_databinding_write_data_bool(Global_1940311->f_10920, !bParam0);
	_databinding_write_data_bool(Global_1940311->f_10921, !bParam0);
}

var func_484()
{
	if (_databinding_read_data_bool(Global_1940311->f_10924))
	{
		return Global_1940311->f_10922;
	}
	return Global_1940311->f_10919;
}

void func_485(int iParam0)
{
	if (func_133(iParam0) == -854348463)
	{
		func_483(0);
	}
	else if ((((((((((((((((((func_111(iParam0, 1101678925) || func_111(iParam0, 1686880204)) || func_111(iParam0, 173360570)) || func_111(iParam0, -121341956)) || func_111(iParam0, 2000026003)) || func_111(iParam0, -1540973036)) || func_111(iParam0, 1192444843)) || func_111(iParam0, -189374246)) || func_10(iParam0, 1224357681) == 1728734446) || (func_505(iParam0) && !func_111(iParam0, 316290104))) || ((func_68() == 0 && func_161(iParam0, 1, 0)) && !func_111(iParam0, 316290104))) || iParam0 == -601932535) || iParam0 == -898386032) || iParam0 == 1305393429) || iParam0 == 85134332) || iParam0 == -1077794372) || iParam0 == 894654881) || iParam0 == -1939515319) || iParam0 == 273608212)
	{
		func_262();
	}
	else if ((func_133(iParam0) == 1802292908 && func_10(iParam0, -949239683) == 0) && !iParam0 == -569063887)
	{
		func_262();
	}
	else if (func_505(iParam0))
	{
		if (func_111(iParam0, 316290104))
		{
			func_483(1);
		}
		else
		{
			func_483(1);
		}
	}
	else if (func_111(iParam0, 316290104) || func_161(iParam0, 1, 0))
	{
		func_483(1);
	}
	else
	{
		func_483(0);
	}
}

int func_486(int iParam0)
{
	if (_databinding_read_data_bool(Global_1940311->f_10924))
	{
		if (func_111(iParam0, 316290104))
		{
			return -1896040097;
		}
		else if (func_161(iParam0, 1, 0))
		{
			return -2086473757;
		}
	}
	else if (func_111(iParam0, 1147021565))
	{
		if (func_111(iParam0, -1242251796))
		{
			return -31549930;
		}
		switch (func_10(iParam0, -949239683))
		{
			case -273840653:
			case 238865292:
			case 999632878:
			case 1130235258:
			case 1177617310:
				return -1925143884;
			case -1915958659:
			case -809056541:
			case 89124942:
			case 1451036371:
			case 1859991422:
			case 1891031775:
				return 356040554;
			case -1919515848:
			case -262371497:
			case 845883585:
			case 1443104131:
				return -31549930;
		}
	}
	else if (func_10(iParam0, 1224357681) == -883547903)
	{
		return -1948542959;
	}
	else if (iParam0 == -241666815)
	{
		return 356040554;
	}
	return -31549930;
}

void func_487(int iParam0, var uParam1)
{
	bVar0 = true;
	switch (func_133(iParam0))
	{
		case -1793506273:
		case 235313564:
		case 320213863:
			if (((!func_111(iParam0, 949916894) && !func_111(iParam0, 747873593)) && !func_10(iParam0, -949239683) == -1337515701) && !func_111(iParam0, 1147021565))
			{
				bVar0 = false;
			}
			break;
	}
	if (func_130(iParam0) == -1533212827)
	{
		bVar0 = false;
	}
	if (85134332 == iParam0)
	{
		bVar0 = false;
	}
	if (-492264119 == iParam0 && !func_283())
	{
		bVar0 = false;
	}
	if (func_10(iParam0, -949239683) == -1337515701)
	{
		Var1.f_9 = -1591664384;
		Var15 = { func_155(iParam0, 0, 0) };
		if (func_663(Var15, -1162387149, &Var1, 0, -1))
		{
			if (Var1.f_4 == iParam0)
			{
				bVar0 = false;
			}
		}
	}
	if (func_111(iParam0, 316290104))
	{
		bVar0 = true;
	}
	else if (func_161(iParam0, 1, 0))
	{
		if (func_68() == 0)
		{
			bVar0 = false;
		}
		else
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
		}
	}
	if (!_databinding_read_data_bool_from_parent(*uParam1, "focusable"))
	{
		bVar0 = false;
	}
	if (is_bit_set(&Global_1051125, 0) && func_111(iParam0, 1573112293))
	{
		bVar0 = false;
	}
	if (!_databinding_read_data_bool(Global_1940311->f_10924) && !_databinding_read_data_bool(Global_1940311->f_10921))
	{
		bVar0 = false;
	}
	_databinding_write_data_bool(func_509(), bVar0);
}

bool func_488()
{
	if (!((_unlock_is_visible(-474252899) || _unlock_is_visible(294305054)) || _unlock_is_visible(-296143697)))
	{
		return false;
	}
	else if (!_unlock_is_visible(-1820411463))
	{
		return false;
	}
	return true;
}

int func_489(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_424(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_628(&Var0, func_376(0));
	}
	if (!func_425(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_242(iVar14);
	return uVar15;
}

struct<4> func_490(int iParam0, bool bParam1)
{
	Var0 = { func_155(iParam0, bParam1, 0) };
	return func_156(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_491(int iParam0)
{
	if (!func_621(iParam0, 1955773996))
	{
		return false;
	}
	if (!func_664(iParam0, 1))
	{
		return false;
	}
	return true;
}

int func_492(int iParam0, int iParam1)
{
	if (!func_105(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_665(iParam0, iParam1) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	iVar4 = _0xc97e0d2302382211(iParam0, &Var0, 0);
	return iVar4;
}

int func_493(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_105(iParam0, 0) && !func_510(func_290(iParam0), 2))
	{
		return 0;
	}
	if (func_130(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_294(iParam0, -455129387) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_210(bParam3), iParam0);
}

int func_494(int iParam0)
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

int func_495(int iParam0, bool bParam1)
{
	if (!func_105(iParam0, 0))
	{
		return func_666(func_290(iParam0), bParam1);
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

int func_496(int iParam0)
{
	switch (iParam0)
	{
		case -802026654:
			return -113609972;
		case 1806153689:
			return 940277804;
		case -1625078531:
			return -2021981862;
		case -2102079544:
			return -2035151058;
		case -1243878166:
			return -654359890;
		case -1475338121:
			return -395420997;
		case 27448453:
			return -1493288070;
		case -1726837022:
			return -710989256;
		case 361430638:
			return -47986288;
		case -467109021:
			return 803974758;
		case 959196213:
			return 373952588;
		case -463248330:
			return 1242607258;
		case 143941906:
			return 1997574525;
		case 957520252:
			return -1985838637;
		case 1292673537:
			return -1813237797;
		case -2059726619:
			return -2016089088;
		case -1569450319:
			return 2146572053;
		case 854596618:
			return -1839367994;
		case 1490032862:
			return -1091189928;
		case 1083865179:
			return -1635115397;
		case 663376218:
			return -2042006570;
		case 2116849039:
			return -1314791863;
		case 1248540072:
			return -1823555382;
		case -1858513856:
			return -1940860112;
		case -868657362:
			return 1415794275;
		case 1603936352:
			return 125158553;
		case -702790226:
			return -653766286;
		case -591117838:
			return 1895811321;
		case -1730060063:
			return 299919606;
		case -237756948:
			return 753379773;
		case -1618402788:
			return 1352867568;
		case -336086818:
			return 1097784084;
		case 9293261:
			return -1943430854;
		case -53270317:
			return 182141962;
		case 459744337:
			return -1468691308;
		case 1914602340:
			return -57484815;
		case -1791452194:
			return 1946049104;
		case 1150594075:
			return 1185884283;
		case 334093551:
			return -321839561;
		case -845037222:
			return -2120314726;
		case 1150939141:
			return -1364771053;
		case -1558096473:
			return 1278304830;
		case -794277189:
			return -1708243835;
		case -1827027577:
			return -396086695;
		case -662178186:
			return -1091137361;
		case -1035515486:
			return -354836003;
		case 1181652728:
			return -861596076;
		case 2053771712:
			return 205905613;
		case -1332163079:
			return -1196787069;
		case 238733925:
			return 881436265;
		case 1647012424:
			return -2014005467;
		case 500722008:
			return 1738298985;
		case -732511557:
			return 1211835284;
		case 1855671180:
			return 1658545555;
		case -564530632:
			return 2004662589;
		case 95044528:
			return 432134278;
		case 2136062430:
			return 56287881;
		case 463481876:
			return 2038260929;
		case 1710714415:
			return -292516362;
		case 699990316:
			return 1097330746;
		case -1648383828:
			return -1664486394;
		case 1204918860:
			return 715839674;
		case -2066910871:
			return -1754534999;
		case 1677266727:
			return -224255707;
		case -1379330323:
			return 1582863244;
		case -99092070:
			return 1014727010;
		case 1963510418:
			return -493748684;
		case 1636891382:
			return -506979242;
		case 1868576868:
			return 1790050043;
		case -217731719:
			return -420589518;
		case -771861010:
			return 1740405833;
		case -1912460485:
			return -294760237;
		case 2022921849:
			return 399589289;
		case 416535067:
			return -779978170;
		case 1627318551:
			return -1474732778;
		case -475820303:
			return -859460682;
		case 1208128650:
			return -37721227;
		case 462348928:
			return -2119897246;
		case 659601266:
			return -1197044283;
		case -395646254:
			return 286691937;
		case 1584468323:
			return -876261935;
		case 1969175294:
			return 695977222;
		case -57190831:
			return -1126723863;
		case -308965548:
			return 755838510;
		case -1102272634:
			return -871797197;
		case 554578289:
			return 1445549666;
		case -983605026:
			return -954694400;
		case -1544126829:
			return -327638924;
		case 149018327:
			return 608806106;
		case 1340414242:
			return 445332351;
		case -923552142:
			return 391928970;
		case -1178296218:
			return 683327822;
		case 1992476687:
			return -217595210;
		case -305970307:
			return 334167008;
		case -476045512:
			return 311086070;
		case 1796037447:
			return 1413149376;
		case 1795984405:
			return -1469642502;
		case -409451878:
			return -146398768;
		case -378416954:
			return -357528239;
		case -269786196:
			return -1936951665;
		case -1317365569:
			return -85737661;
		case 1729948479:
			return 1710562692;
		case 1466150167:
			return -1912945257;
		case 1925227409:
			return -2035397573;
		case -1731566944:
			return 1925504740;
		case 119626970:
			return -1261342366;
		case 1126133763:
			return 498542642;
		case 1681193300:
			return 1958005095;
		case 624262971:
			return 1942918539;
		case 1145777975:
			return -16864021;
		case 85441452:
			return 781168718;
		case 653400939:
			return -630360032;
		case 1006434513:
			return 1888465490;
		case -151356522:
			return -543054460;
		case 306916738:
			return -1037558485;
		case 724563284:
			return 71874057;
		case -1824685471:
			return 827985446;
		case 1917027383:
			return 652886453;
		case 803930024:
			return -1039971240;
		case -855052577:
			return -1106747914;
		case 1111663869:
			return -550722674;
		case -5376850:
			return -1444987366;
		case 1425358430:
			return -1471435589;
		case 1338219162:
			return 1193731881;
		case 1297433586:
			return -1017619862;
		case -1538397860:
			return -1698910498;
		case -293259613:
			return -1134347623;
		case 193037129:
			return -719421785;
		case 588902637:
			return -1406416279;
		case 1416872916:
			return 482295805;
		case -861419347:
			return -520151885;
		case 1500919793:
			return 1901018987;
		case 357567274:
			return 935219765;
		case 1042542561:
			return -615433613;
		case 683583793:
			return -1149578066;
		case 56657913:
			return 1228716113;
		case -1202625002:
			return -1898963991;
		case 1570826681:
			return -763965887;
		case 485620834:
			return -91027264;
		case 785407605:
			return 998052367;
		case 727522818:
			return -1841069460;
		case 563848610:
			return 319613183;
		case -1457420231:
			return 89885133;
		case 1432949803:
			return -236264927;
		case -2120099592:
			return -661841886;
		case 1848456619:
			return 882369722;
		case -983831788:
			return 230068405;
		case -1134447619:
			return 708397125;
		case -1640704323:
			return 1663105645;
		case -1882344824:
			return 2104496586;
		case -1323780599:
			return -867628281;
		case -532099639:
			return -1127988903;
		case 905173572:
			return 1177722124;
		case 991092621:
			return 2095431713;
		case 80093385:
			return -1946085310;
		case -867655342:
			return -50004308;
		case -738999731:
			return 1066632230;
		case 566023444:
			return -1593775395;
		case -1956973834:
			return -1462436745;
		case -110353515:
			return 128688729;
		case -1905834457:
			return 1036479497;
		case 59384454:
			return 525245761;
		case 1948158930:
			return 1434203725;
		case 183958842:
			return -540853698;
		case -1969404854:
			return -817013819;
		case -1586332975:
			return 222702434;
		case 1857501916:
			return -372998867;
		case -832850511:
			return -1765786196;
		case 995863399:
			return -597920617;
		case 894877715:
			return -986217609;
		case -1888757291:
			return 1591915275;
		case -1974778216:
			return 434164104;
		case -210676278:
			return 2010460530;
		case -381243381:
			return 798445127;
		case -529454751:
			return -1512781803;
		case 1582593525:
			return 1951854232;
		case -246542229:
			return 685557689;
		case -1030182399:
			return -655396129;
		case 1191274340:
			return -138348534;
		case 1613453781:
			return -615195506;
		case -610456424:
			return -1143073531;
		case -284151822:
			return -76512165;
		case -1464585113:
			return 435345037;
		case -1999212658:
			return 566505619;
		case -593435395:
			return 2061704444;
		case -245335326:
			return -420922520;
		case 2058475216:
			return 1402000467;
		case -1726572562:
			return -571080009;
		case -1017987135:
			return 1856405476;
		case -1788506246:
			return 234473853;
		case -1909348309:
			return -459025832;
		case 1761263432:
			return -1538065056;
		case -1824684934:
			return 1513811193;
		case -861854914:
			return -376064362;
		case -545447034:
			return 1362644733;
		case -350704687:
			return 1527066094;
		case 765892430:
			return -1135994830;
		case -1290897778:
			return -411118339;
		case -1080457688:
			return 1934921511;
		case 416630124:
			return -1664302460;
		case 1925728375:
			return -1370325893;
		case 313332607:
			return -1597885804;
		case 182158309:
			return -82035689;
		case -1867587109:
			return 399214021;
		case -100913452:
			return 333629896;
		case 72307351:
			return 354443590;
		case -318217782:
			return -1043338230;
		case -2123600216:
			return -591593823;
		case -146690338:
			return 1914687828;
		case -124539232:
			return -728170563;
		case 1496267371:
			return 1026974357;
		case -1403731492:
			return 1847023377;
		case -843795569:
			return -102918483;
		case -1643384846:
			return -749802886;
		case 915880986:
			return 1171297014;
		case -1424697962:
			return 1888858793;
		case 1760886130:
			return 696072937;
		case -847420802:
			return 1744784728;
		case -662726703:
			return -191973744;
		case -674590015:
			return 1013351618;
		case -1243653490:
			return 930648145;
		case 1988467099:
			return -218437162;
		case 1415608202:
			return -1654489460;
		case -1480423460:
			return 1362828838;
		case 924882045:
			return 1558424746;
		case 2094730711:
			return 1074454855;
		case -593311590:
			return 661991465;
		case 765085831:
			return 217385405;
		case -244657613:
			return 1863856147;
		case -1310590179:
			return -1783404197;
		case 992366796:
			return 127122;
		case -980016656:
			return 1568268202;
		case -2026210939:
			return -907802863;
		case -1252472243:
			return 1885588858;
		case 1607144310:
			return 2135346669;
		case -758005668:
			return 1564672281;
		case -2139551030:
			return -149209420;
		case -1722483116:
			return 431321694;
		case 871746664:
			return 2054544328;
		case 1626949878:
			return 961836667;
		case 156979555:
			return 487431050;
		case -1739474417:
			return -1103475665;
		case -161524199:
			return 322947093;
		case 58634176:
			return 1204808018;
		case 472142656:
			return -2033244642;
		case -1837840093:
			return 981960619;
		case 1210345318:
			return 1448526072;
		case 1023080408:
			return 1393502004;
		case 1001171791:
			return -1266905662;
		case -1378812236:
			return -2080399983;
		case 399553313:
			return 33483590;
		case -1422869557:
			return -1838135661;
		case 2013022756:
			return -1573277590;
		case 1011003885:
			return 261129135;
		case 651035143:
			return 1243458250;
		case -39646495:
			return -185030876;
		case -1186289527:
			return 1317537296;
		case 877935135:
			return 1018367377;
		case -505583391:
			return 824037606;
		case -46978629:
			return -1731017100;
		case -1347000030:
			return 1615937768;
		case 1562528937:
			return -251297033;
		case 1645887374:
			return -759993020;
		case -1559227925:
			return -1625595431;
		case 2144711797:
			return 1402002731;
		case -1471526136:
			return -893738363;
		case -1440794801:
			return 1168912955;
		case -905842006:
			return -883362976;
		case 718825539:
			return 439065517;
		case 2105263879:
			return 2028934772;
		case 553310445:
			return 1635254052;
		case 987967309:
			return -1876315724;
		case -1060737769:
			return 2125035709;
		case -1315697778:
			return -688961870;
		case -1838865945:
			return -1534250051;
		case 1418092959:
			return -121066912;
		case 1772544356:
			return -1571202765;
		case -1772126340:
			return 1007184712;
		case -935543049:
			return 750199142;
		case 1290960696:
			return 223717659;
		case -266273535:
			return 25399937;
		case -1670544626:
			return -1970088555;
		case 430397370:
			return -555756782;
		case 1913571052:
			return 1373687372;
		case 1717601520:
			return -595937662;
		case 1417331079:
			return -383405751;
		case 16287711:
			return -827185700;
		case -1356230367:
			return -835681068;
		case 746558492:
			return 1758422954;
		case -884124246:
			return -1350812151;
		case 1884610748:
			return -971769000;
		case -1224510844:
			return 232508262;
		case -892811627:
			return -1733134177;
		case -2040522845:
			return 1122586172;
		case 1770451033:
			return -1735702522;
		case 1334837390:
			return 859638047;
		case 339620522:
			return -2079288781;
		case 1997845858:
			return -1007285267;
		case 756657535:
			return 281050817;
		case 862898895:
			return -2005182834;
		case -1816929509:
			return -1716047352;
		case -1930144509:
			return -860252225;
		case 1846915545:
			return -825143744;
		case -1508120809:
			return -19626769;
		case 1197831625:
			return -2135500076;
		case -1866642239:
			return 1818491588;
		case 1666393029:
			return 1492572787;
		case -1007681885:
			return 1750541244;
		case 434924608:
			return -182749690;
		case 1978734761:
			return -874350081;
		case -1814593136:
			return -1243014409;
		case -1188120304:
			return -1312925436;
		case -581619522:
			return -1354257753;
		case -824902132:
			return 610016221;
		case -1015531226:
			return -898492052;
		case -177476569:
			return 721113188;
		case 980653387:
			return -1900079889;
		case -1011598664:
			return -1717931006;
		case 431501574:
			return -1752692172;
		case 1742676369:
			return 728009189;
		case -899751553:
			return 393351033;
		case -1705499323:
			return -755636829;
		case 2126795269:
			return -1849715375;
		case 1489051752:
			return -751278632;
		case -1927342740:
			return -2061292617;
		case -2013445740:
			return 927949229;
		case 102446365:
			return -1371828520;
		case -365111821:
			return -1153167846;
		case -914779013:
			return 674701766;
		case 1323485831:
			return 1934089692;
		case -1528265128:
			return 1607434899;
		case 581032175:
			return -979794154;
		case -581931638:
			return 973446589;
		case 2060013792:
			return 184660339;
		case -410900360:
			return -482133347;
		case -1073614594:
			return -498483069;
		case 1442025993:
			return 1217842783;
		case -142632645:
			return 432212831;
		case -2048519180:
			return 452336188;
		case 351048413:
			return 1979660764;
		case 441195430:
			return 471441354;
		case 748665395:
			return -1694997273;
		case -936537044:
			return -928742863;
		case 101495387:
			return 623939807;
		case 157917500:
			return -650616528;
		case 619479575:
			return 834057600;
		case -1610329427:
			return -823379321;
		case -1836227998:
			return -1155190042;
		case -548076717:
			return -1215385959;
		case -1444929945:
			return -2021366376;
		case -929322235:
			return 909323574;
		case -479485786:
			return 371810529;
		case -281211381:
			return 2081548585;
		case 493457089:
			return 1601387810;
		case -1228376431:
			return -989449592;
		case 322141256:
			return -1089443869;
		case 1310120320:
			return -1569242066;
		case -314933180:
			return 1971632203;
		case 27838955:
			return 714162759;
		case 1641833719:
			return 160408746;
		case -2115566177:
			return -1242547752;
		case -1886936864:
			return -1340101181;
		case 777641606:
			return -1603006868;
		case 1815502722:
			return 72669789;
		case 1518910503:
			return 1721048796;
		case 1020297399:
			return 1412594203;
		case -438328437:
			return -217402064;
		case -132069363:
			return 26497603;
		case 1718756614:
			return 524914097;
		case 616254818:
			return -1784221863;
		case 1586020612:
			return 1721340223;
		case 1892902297:
			return 2014983232;
		case 1920759986:
			return 1210657277;
		case 1683741809:
			return 1484245658;
		case 403588059:
			return -1304035787;
		case -352805801:
			return 199331010;
		case 1491466288:
			return 765055026;
		case -1066678466:
			return 1788037640;
		case -375348364:
			return 1418722292;
		case -101301217:
			return 1102632518;
		case 213936563:
			return 1878373059;
		case 897866285:
			return -495171328;
		case 1135507073:
			return 1156746735;
		case -1671125008:
			return 1966632570;
		default:
			break;
	}
	return 0;
}

int func_497(int iParam0)
{
	switch (iParam0)
	{
		case -827518870:
			return 1737301198;
		case 1367447057:
			return -1786971987;
		case -2092697195:
			return -1408358961;
		case -2043601589:
			return 2128665752;
		case 1758585485:
			return 1841511005;
		case 1527400190:
			return 1549277063;
		case 1493601140:
			return 1393748763;
		case -885592109:
			return 544769519;
		case -1282621313:
			return 774971744;
		case -70954328:
			return -744009123;
		case -1378208045:
			return -1682808204;
		case 1450608653:
			return 2054234098;
		case 1543592331:
			return 1922044680;
		case 1842740532:
			return 2145332646;
		case 2004357248:
			return 1308510689;
		case -229670230:
			return -952513206;
		case 546758456:
			return -1264506855;
		case 1888419655:
			return -1561393995;
		case -2040849706:
			return -2115797779;
		case 2014346813:
			return 1891949232;
		case -1638839614:
			return 1593292566;
		case 1705186999:
			return 1461107206;
		case -1821314478:
			return 1201281805;
		case -1434083213:
			return 1970304697;
		case 1785697286:
			return 1164491261;
		case 1891164848:
			return 1446763677;
		case -1283104686:
			return -1298448148;
		case -1182590809:
			return -1735939928;
		case 1011908603:
			return -1926107629;
		case 1202949852:
			return -346963495;
		case -1220574585:
			return -1966419150;
		case 1739856087:
			return 555279871;
		case -1932727774:
			return 256434231;
		case 258865203:
			return -503159532;
		case 1097274212:
			return -251683498;
		case 448991078:
			return 964465987;
		case -1624242931:
			return 1599024134;
		case -1924159110:
			return -616698490;
		case -1621144167:
			return -1132220398;
		case -1061253029:
			return 1995351273;
		case 1181154860:
			return -1619790277;
		case 1418435161:
			return 967060121;
		case 1511236969:
			return 1263980030;
		case 121494806:
			return -1465574082;
		case -251416414:
			return 1916317794;
		case -1787430524:
			return -999893823;
		case -260181673:
			return -2040203687;
		case -1087205695:
			return 726253600;
		case -857265622:
			return 588492724;
		case -1572330336:
			return 661620688;
		case -1249752300:
			return -1722651740;
		case -940052481:
			return -1980773153;
		case -308200059:
			return -910932346;
		case -1218522879:
			return 259609103;
		case 923422806:
			return -295170067;
		case 832214437:
			return 803542225;
		case 397926876:
			return -328167959;
		case 219794592:
			return 1311920491;
		case -1061362634:
			return -987379013;
		case 1728819413:
			return -632031977;
		case 1009802015:
			return -374238254;
		case -420237085:
			return 351245498;
		case -1195518864:
			return 1124298977;
		case -159428614:
			return 871944908;
		case 1276143905:
			return 1045565446;
		case -1262044528:
			return 1964539282;
		case -963027403:
			return 769814315;
		case 739090883:
			return -2113905148;
		case 1043121665:
			return 347177840;
		case -634716689:
			return 1609243098;
		case 2088901891:
			return -2012858293;
		case 836208559:
			return -1705059076;
		case 1600479946:
			return 439245973;
		case -675142890:
			return 2105504738;
		case -906131571:
			return 924542747;
		case -591844128:
			return 701582471;
		case -1946740647:
			return -666885817;
		case -1548204069:
			return -1365586435;
		case -907373381:
			return -1160452495;
		default:
			break;
	}
	switch (iParam0)
	{
		case -802026654:
			return -729940969;
		case 1806153689:
			return 141813558;
		case -1625078531:
			return 1963533652;
		case -2102079544:
			return 1117271069;
		case -1243878166:
			return 1519472001;
		case -1475338121:
			return 182553822;
		case 2093098109:
			return -1852874823;
		case 1237770824:
			return -150332788;
		case 252433530:
			return 1709152297;
		case 27448453:
			return 1273594044;
		case -1726837022:
			return -454793815;
		case 361430638:
			return 673699503;
		case 718631967:
			return 1754189413;
		case -467109021:
			return -1290349264;
		case 959196213:
			return 1147391076;
		case -463248330:
			return 1886042555;
		case -800510665:
			return 105310482;
		case -1394561808:
			return 602510756;
		case 143941906:
			return -213803059;
		case 957520252:
			return 577741466;
		case 1292673537:
			return -64816897;
		case -2059726619:
			return -1790213107;
		case -1569450319:
			return 140548906;
		case 854596618:
			return 538248064;
		case 1696599540:
			return 416375309;
		case 1252810290:
			return 751278189;
		case 236757114:
			return 2089437645;
		case 1490032862:
			return -394567432;
		case 1083865179:
			return -317450551;
		case 663376218:
			return -1616683815;
		case 2057052401:
			return 998362875;
		case -1947512511:
			return 915240180;
		case 2116849039:
			return -421637077;
		case 1248540072:
			return -2025148846;
		case -1858513856:
			return 1555730333;
		case -884176343:
			return 934266484;
		case -832559263:
			return 2052325776;
		case 529305859:
			return 515017930;
		case -868657362:
			return -1822857932;
		case 1603936352:
			return -1661833274;
		case -702790226:
			return 75788492;
		case -591117838:
			return -1740575947;
		case -1730060063:
			return -1305999829;
		case -237756948:
			return -317313952;
		case -1618402788:
			return 305994581;
		case -336086818:
			return 1719491621;
		case 9293261:
			return 711968992;
		case -53270317:
			return -2807153;
		case -1065098050:
			return 1715192274;
		case 329729070:
			return 1543866786;
		case 452896739:
			return -1873585305;
		case 1235898535:
			return -662932093;
		case -940597120:
			return 109373257;
		case 544782507:
			return 1876858085;
		case 1712162117:
			return -155545682;
		case 459744337:
			return -845846009;
		case 1914602340:
			return -2085506453;
		case -1791452194:
			return 232078681;
		case 1150594075:
			return -975719856;
		case 334093551:
			return 1348773445;
		case -845037222:
			return 66210245;
		case 1150939141:
			return -175228229;
		case -1558096473:
			return -998078564;
		case -794277189:
			return 973957142;
		case 376217292:
			return -257934339;
		case -1827027577:
			return -325167203;
		case -662178186:
			return 287595526;
		case -1035515486:
			return 1645648597;
		case 833141409:
			return -1324308768;
		case -2048623764:
			return 1105699934;
		case 1637109059:
			return -2141386199;
		case 844750136:
			return 720338807;
		case 281887510:
			return -1015436070;
		case -164081697:
			return 254756397;
		case -1161319399:
			return 642877259;
		case -407659715:
			return -366421835;
		case 1181652728:
			return -1721580072;
		case 2053771712:
			return -560324616;
		case -1332163079:
			return -506698333;
		case 238733925:
			return 2001831582;
		case 1647012424:
			return -308176910;
		case 500722008:
			return 709570394;
		case -732511557:
			return -626746681;
		case 1855671180:
			return 1916142044;
		case -564530632:
			return -1701132833;
		case 95044528:
			return 1497343107;
		case 2136062430:
			return 1924021902;
		case 463481876:
			return 1367123410;
		case 1710714415:
			return -1252121718;
		case 699990316:
			return 1439503490;
		case -1648383828:
			return 2075605647;
		case 1844178035:
			return 874416043;
		case -31982783:
			return 1441079450;
		case -222563712:
			return 872004206;
		case 1204918860:
			return 1251011851;
		case -2066910871:
			return -617676900;
		case 1677266727:
			return -811158466;
		case -1379330323:
			return 443733012;
		case -99092070:
			return -393194118;
		case 1963510418:
			return 189129655;
		case 696159276:
			return 710582811;
		case -1240764968:
			return -1604182722;
		case 895033262:
			return -1933370531;
		case 1636891382:
			return 2143881314;
		case 1868576868:
			return 261464608;
		case -217731719:
			return 533169045;
		case -771861010:
			return 1559256431;
		case -1912460485:
			return -664455397;
		case 2022921849:
			return 1321025026;
		case 416535067:
			return 1078802600;
		case 1627318551:
			return 75907104;
		case -475820303:
			return 2076872795;
		case -1765601:
			return 2038781126;
		case -1067479455:
			return -994580234;
		case 1208128650:
			return 1453304549;
		case 462348928:
			return 2037563793;
		case 659601266:
			return -984195334;
		case 1503728435:
			return -102667065;
		case -395646254:
			return 766738878;
		case 1584468323:
			return -439771682;
		case 1969175294:
			return 1987222394;
		case 1577881214:
			return 2006254811;
		case 1607779195:
			return -515812748;
		case -2068566007:
			return 650331389;
		case -691071886:
			return 319232918;
		case -57190831:
			return 44257110;
		case -308965548:
			return 1513760857;
		case -1102272634:
			return 1351967896;
		case 511857907:
			return 840821070;
		case 554578289:
			return 1736690424;
		case -983605026:
			return -484605156;
		case -1544126829:
			return 671730736;
		case 945172939:
			return 1291827453;
		case 149018327:
			return -563629672;
		case 1340414242:
			return 1610805859;
		case -923552142:
			return 1193711685;
		case -1178296218:
			return -1589890131;
		case 1992476687:
			return 172710122;
		case -305970307:
			return -373561552;
		case -476045512:
			return -1697884196;
		case 1796037447:
			return -511225893;
		case 1795984405:
			return -1361338784;
		case -409451878:
			return -2132052800;
		case -378416954:
			return 1075249;
		case -269786196:
			return 563724690;
		case -1181539987:
			return 1784173995;
		case -902591026:
			return 1356124641;
		case 1462133097:
			return -2006574994;
		case 1017109217:
			return -1804893584;
		case -1317365569:
			return 852477829;
		case 1729948479:
			return 492443708;
		case 1466150167:
			return -473984871;
		case 1925227409:
			return -1754474288;
		case -1731566944:
			return 643377789;
		case 119626970:
			return 1803121683;
		case 1126133763:
			return -661883621;
		case 1681193300:
			return -926826161;
		case 624262971:
			return 620515243;
		case 1374722424:
			return -839229372;
		case 800967980:
			return 1147065893;
		case 2085530337:
			return 1100436208;
		case -896290892:
			return 1892048883;
		case 995830478:
			return -161210360;
		case -1610025835:
			return 516276755;
		case 2016225967:
			return 766814122;
		case -661323467:
			return 457527259;
		case -1397737565:
			return 527405344;
		case 1761014306:
			return 1728967914;
		case 1145777975:
			return 932384479;
		case 85441452:
			return 1180333503;
		case 653400939:
			return 993930516;
		case -1764134917:
			return 287596349;
		case 1360914301:
			return -1125201769;
		default:
			break;
	}
	switch (iParam0)
	{
		case 1006434513:
			return -2006827790;
		case -151356522:
			return 1062068465;
		case 306916738:
			return 1196662225;
		case 724563284:
			return 1870328732;
		case -1824685471:
			return 707201280;
		case 1917027383:
			return -1473598265;
		case 803930024:
			return -1084421789;
		case -855052577:
			return 1756638081;
		case 1111663869:
			return 1321469365;
		case -5376850:
			return -1803638668;
		case 1425358430:
			return -1221284958;
		case 1338219162:
			return -191086281;
		case 1297433586:
			return -6716069;
		case -1538397860:
			return 670163126;
		case -293259613:
			return -1112301401;
		case 193037129:
			return -1532517667;
		case 588902637:
			return 1728443538;
		case 1416872916:
			return -43253473;
		case -861419347:
			return 699462615;
		case 1500919793:
			return -1750520428;
		case 357567274:
			return 219352253;
		case 1042542561:
			return 166032929;
		case 683583793:
			return -2035446565;
		case 56657913:
			return 1468262744;
		case -1202625002:
			return -702150099;
		case 1570826681:
			return -982559496;
		case 485620834:
			return -1009657226;
		case 785407605:
			return 1712149826;
		case 727522818:
			return 137308405;
		case 563848610:
			return -2017882358;
		case -1457420231:
			return -684493390;
		case 1432949803:
			return 1002602374;
		case -2120099592:
			return -1483430189;
		case 1848456619:
			return -1002611416;
		case -983831788:
			return -988437272;
		case -1134447619:
			return 1912274811;
		case -1640704323:
			return -1103469855;
		case -1882344824:
			return 602224616;
		case -1323780599:
			return -1786026048;
		case -532099639:
			return 1267576255;
		case 905173572:
			return -93762301;
		case 991092621:
			return 1560746874;
		case 80093385:
			return 456481242;
		case -867655342:
			return -913993577;
		case -738999731:
			return 719164880;
		case 566023444:
			return -3379701;
		case -1956973834:
			return 2029277432;
		case -110353515:
			return 1940135629;
		case -1905834457:
			return -1001259776;
		case 59384454:
			return 1633965430;
		case 1948158930:
			return 369737235;
		case 183958842:
			return -926789976;
		case -1969404854:
			return 1733620897;
		case -1586332975:
			return -1691123411;
		case 1857501916:
			return 1668855076;
		case -832850511:
			return 193838959;
		case 995863399:
			return -396770599;
		case 894877715:
			return 507273585;
		case -1888757291:
			return 2132202059;
		case -1974778216:
			return 1999319663;
		case -210676278:
			return -738256282;
		case -381243381:
			return 1859995253;
		case -529454751:
			return -1406486282;
		case 1582593525:
			return -1800293671;
		case -246542229:
			return -1517895381;
		case -1030182399:
			return 446238129;
		case 1191274340:
			return -1392581698;
		case 1613453781:
			return -1221148056;
		case -610456424:
			return 1513566869;
		case -284151822:
			return -1951931021;
		case -1464585113:
			return -161231515;
		case -1999212658:
			return 364033016;
		case -593435395:
			return -537899065;
		case -245335326:
			return 401461100;
		case 2058475216:
			return 1223809963;
		case -1726572562:
			return 944110311;
		case -1017987135:
			return -1492480176;
		case -1788506246:
			return 1280054159;
		case -1909348309:
			return -373224618;
		case 1761263432:
			return -641533288;
		case -1824684934:
			return 75052460;
		case -861854914:
			return 1245805785;
		case -545447034:
			return 1046531369;
		case -350704687:
			return -974080310;
		case 765892430:
			return 81120984;
		case -1290897778:
			return -1985659799;
		case -1080457688:
			return -783858773;
		case 416630124:
			return 225754854;
		case 1925728375:
			return -1809464590;
		case 313332607:
			return -1598922009;
		case 182158309:
			return 275412539;
		case -1867587109:
			return -1705997274;
		case -100913452:
			return -580638205;
		case 72307351:
			return -70837723;
		case -318217782:
			return -1829279760;
		case -2123600216:
			return -82403140;
		case -146690338:
			return 1862079367;
		case -124539232:
			return 2047450143;
		case 1496267371:
			return -1432602913;
		case -1403731492:
			return -644660892;
		case -843795569:
			return -946834167;
		case -1643384846:
			return 1800041756;
		case 915880986:
			return -43847478;
		case -1424697962:
			return -2091042332;
		case 1760886130:
			return -64154430;
		case -847420802:
			return -2146679785;
		case -662726703:
			return 1440511737;
		case -674590015:
			return 2106477246;
		case -1243653490:
			return 1238836439;
		case 1988467099:
			return 715588111;
		case 1415608202:
			return -1913114484;
		case -1480423460:
			return 651914172;
		case 924882045:
			return 32080080;
		case 2094730711:
			return 1049493474;
		case -593311590:
			return -501826187;
		case 765085831:
			return 64971655;
		case -244657613:
			return -1894912735;
		case -1310590179:
			return 763480295;
		case 992366796:
			return -1878430686;
		case -980016656:
			return 613844620;
		case -2026210939:
			return 920173178;
		case -1252472243:
			return 596420802;
		case 1607144310:
			return 1605888983;
		case -758005668:
			return 788459402;
		case -2139551030:
			return -1216606326;
		case -1722483116:
			return 1292597331;
		case 871746664:
			return -1149750759;
		case 1626949878:
			return -1396948758;
		case 156979555:
			return 1289050487;
		case -1739474417:
			return -1872286321;
		case -161524199:
			return -975908522;
		case 58634176:
			return -409367013;
		case 472142656:
			return 779088744;
		case -1837840093:
			return 1711042298;
		case 1210345318:
			return -1413161219;
		case 1023080408:
			return 1182246979;
		case 1001171791:
			return -985527980;
		case -1378812236:
			return -72615570;
		case 399553313:
			return 1665004985;
		case -1422869557:
			return 21034941;
		case 2013022756:
			return -648011160;
		case 1011003885:
			return 171702437;
		case 651035143:
			return -1827280206;
		case -39646495:
			return 1034372784;
		case -1186289527:
			return -71154754;
		case 877935135:
			return 655003317;
		case -505583391:
			return 537980983;
		case -46978629:
			return -1283272411;
		case -1347000030:
			return -1362831402;
		case 1562528937:
			return 1214467902;
		case 1645887374:
			return 1102758634;
		case -1559227925:
			return 965680356;
		case 2144711797:
			return -497486600;
		case -1471526136:
			return 2123917083;
		case -1440794801:
			return -747843967;
		case -905842006:
			return 215558127;
		case 718825539:
			return -448269050;
		case 2105263879:
			return -465284970;
		case 553310445:
			return -112530487;
		case 987967309:
			return 1058515088;
		case -1060737769:
			return 1081153967;
		case -1315697778:
			return -684605659;
		case -1838865945:
			return 694612862;
		case 1418092959:
			return 818552661;
		case 1772544356:
			return 869821653;
		case -1772126340:
			return -1558848228;
		case -935543049:
			return -2024255176;
		case 1290960696:
			return -1772716910;
		case -266273535:
			return 1214255904;
		case -1670544626:
			return 159219251;
		case 430397370:
			return 725440584;
		case 1913571052:
			return -1035022170;
		case 1717601520:
			return -1206378980;
		case 1417331079:
			return -1877144237;
		case 16287711:
			return -962097996;
		case -1356230367:
			return -1722580089;
		case 746558492:
			return 2029769794;
		case -884124246:
			return -635036270;
		case 1884610748:
			return 831089430;
		case -1224510844:
			return -2135979865;
		case -892811627:
			return 1915095215;
		case -2040522845:
			return 549704977;
		case 1770451033:
			return 1967237703;
		case 1334837390:
			return 793462056;
		case 339620522:
			return 1799595146;
		case 1997845858:
			return -1434842719;
		case 756657535:
			return -339256624;
		case 862898895:
			return -175125903;
		case -1816929509:
			return 1766675716;
		case -1930144509:
			return 1176560958;
		case 1846915545:
			return -1017734953;
		case -1508120809:
			return 1301232714;
		case 1197831625:
			return 1715317931;
		case -1866642239:
			return 484920071;
		case 1666393029:
			return 1943993797;
		case -1007681885:
			return 1077656284;
		case 434924608:
			return 1677116399;
		case 1978734761:
			return 914114641;
		case -1814593136:
			return -2022525106;
		case -1188120304:
			return -814448540;
		case -581619522:
			return 741087971;
		case -824902132:
			return 182568440;
		case -1015531226:
			return -1010591546;
		case -177476569:
			return 2138711331;
		case 980653387:
			return -738750296;
		case -1011598664:
			return -1864268272;
		case 431501574:
			return 579112106;
		case 1742676369:
			return -899794521;
		case -899751553:
			return 64674852;
		case -1705499323:
			return 744947689;
		case 2126795269:
			return -955879408;
		case 1489051752:
			return -334450814;
		case -1927342740:
			return -54533226;
		case -2013445740:
			return 351539261;
		case 102446365:
			return 1499766071;
		case -365111821:
			return -2059559175;
		case -914779013:
			return 1261953498;
		case 1323485831:
			return -278084343;
		case -1528265128:
			return -1299605277;
		case 581032175:
			return 1486754346;
		case -581931638:
			return -535872870;
		case 2060013792:
			return 64899457;
		case -410900360:
			return 404778336;
		case -1073614594:
			return -365574371;
		case 1442025993:
			return -2040509534;
		case -142632645:
			return -1855203366;
		case -2048519180:
			return 840225041;
		case 351048413:
			return -1326666930;
		case 441195430:
			return -768854386;
		case 748665395:
			return -1447829381;
		case -936537044:
			return -954430157;
		case 101495387:
			return 1011639849;
		case 157917500:
			return -1049843758;
		case 619479575:
			return 1871055552;
		case -1610329427:
			return 1016504142;
		case -1836227998:
			return -2048967430;
		case -548076717:
			return -1555436909;
		case -1444929945:
			return 360646178;
		case -929322235:
			return -1976493300;
		case -479485786:
			return -226591008;
		case -281211381:
			return -302032060;
		case 493457089:
			return -687553153;
		case -1228376431:
			return -1776607096;
		case 322141256:
			return 1394617857;
		case 1310120320:
			return 775708056;
		case -314933180:
			return -1193980640;
		case 27838955:
			return -542292419;
		case 1641833719:
			return 72574110;
		default:
			break;
	}
	return 0;
}

int func_498(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_667(iParam0, iParam1, &Var0, &iVar21, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar22 = 0;
	while (iVar22 < iVar21)
	{
		if (&Var0[iVar22] == 2084597891)
		{
			return Var0[iVar22]->f_1;
		}
		else if (&Var0[iVar22] == 0)
		{
		}
		else
		{
			iVar22++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

float func_499(int iParam0, int iParam1)
{
	fVar0 = 1f;
	if (!func_105(iParam1, 0))
	{
		return fVar0;
	}
	if (!func_668(iParam0, iParam1, &fVar0))
	{
	}
	return fVar0;
}

float func_500(var uParam0, int iParam1)
{
	fVar1 = 1f;
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		bVar2 = false;
		switch ((*uParam0)[iVar0]->f_1)
		{
			case 1:
				if (iParam1 == (*uParam0)[iVar0]->f_2)
				{
					return (*uParam0)[iVar0]->f_6;
				}
				break;
			case 2:
				if (func_130(iParam1) == (*uParam0)[iVar0]->f_3)
				{
					bVar2 = true;
				}
				break;
			case 3:
				fVar3 = to_float(func_669(iParam1, -915411861, 1, 0, 1, 0));
				if ((*uParam0)[iVar0]->f_5 <= 0f)
				{
					fVar4 = (fVar3 + 1f);
				}
				else
				{
					fVar4 = (*uParam0)[iVar0]->f_5;
				}
				if (fVar3 <= fVar4 && fVar3 >= (*uParam0)[iVar0]->f_4)
				{
					bVar2 = true;
				}
				break;
			case 4:
				bVar2 = true;
				break;
			case 0:
				break;
		}
		if (bVar2)
		{
			fVar1 = (fVar1 * (*uParam0)[iVar0]->f_6);
		}
		iVar0++;
	}
	return fVar1;
}

char* func_501(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_502(int iParam0)
{
	iVar0 = 0;
	iVar1 = Global_1915715->f_20646.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar1 < 200)
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (&Global_1915715->f_20646.f_1010[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_503(int iParam0, int iParam1)
{
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = func_446(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_432(6, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -815325344;
	Var0.f_3 = func_670(iVar5);
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		iVar6 = iParam0;
		Var0.f_2 = 549615901;
		Var0.f_3 = iVar6;
		if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_504(int iParam0, int iParam1)
{
	*iParam1 = func_671(iParam0);
	return *iParam1 != 0;
}

bool func_505(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
	}
	if (func_111(iParam0, 1286414894))
	{
		return true;
	}
	return false;
}

int func_506(int iParam0, int iParam1, int iParam2)
{
	if (!_is_ped_carrying(iParam0))
	{
		return iVar4;
	}
	iVar0 = create_itemset(true);
	find_all_attached_carriable_entities(iParam0, iVar0);
	iVar3 = get_itemset_size(iVar0);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		iVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar2, iVar0));
		if (!does_entity_exist(iVar1))
		{
		}
		else
		{
			(*iParam1)[iVar4] = iVar1;
			iVar4++;
			if (iVar4 == iParam2)
			{
			}
			else
			{
				iVar2++;
			}
			destroy_itemset(iVar0);
			return iVar4;
		}
	}
}

int func_507(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (_0x9a100f1cf4546629(iParam0) || _0xc346a546612c49a9(iParam0))
	{
		iVar0 = func_462(&iParam0);
		if (!func_105(iVar0, 0))
		{
			iVar0 = func_463(iParam0);
		}
	}
	else
	{
		iVar0 = func_463(iParam0);
	}
	return iVar0;
}

bool func_508(int iParam0, bool bParam1)
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
			func_132("GC_H_PLACE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	iVar1 = _0x901e0dc25080c8b9(iParam0);
	if (func_673(func_672(iVar1)))
	{
		return true;
	}
	if (bParam1)
	{
		func_132("GC_H_PLACE", 10000, 0, 0, 0, 1);
	}
	return false;
}

var func_509()
{
	if (_databinding_read_data_bool(Global_1940311->f_10924))
	{
		return Global_1940311->f_10923;
	}
	return Global_1940311->f_10920;
}

bool func_510(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

bool func_511(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

void func_512(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_133(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_513(int iParam0, int iParam1)
{
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_398(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_243("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_228(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_674(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_242(iVar1);
				return true;
			}
			iVar3++;
		}
		func_242(iVar1);
	}
	return false;
}

bool func_514(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_133(iParam0);
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
	iVar1 = func_675(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_676(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_677(iParam0);
	iVar2 = func_676(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

bool func_515(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_516(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return false;
	}
	else if (*uParam0 != 10)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_294(iParam2, -455129387);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!_0xd1555fbc96c88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_678(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_517(int iParam0, var uParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_156(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_518(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_679(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_681(func_680(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_682(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

int func_519(int iParam0)
{
	if (func_105(iParam0, 0))
	{
		if (func_111(iParam0, -1242251796))
		{
			if (func_111(iParam0, 2060589226))
			{
				return func_48();
			}
			return func_47();
		}
		else if (func_111(iParam0, 1919582297))
		{
			return func_62();
		}
		else if (func_111(iParam0, 1647670816))
		{
			return func_683();
		}
		else if (func_111(iParam0, 1147021565))
		{
			return func_36();
		}
	}
	if (Global_1940144->f_12)
	{
		return func_47();
	}
	else
	{
		return func_36();
	}
	return func_36();
}

bool func_520(int iParam0)
{
	return (iParam0 == 1401465909 || iParam0 == -1733092640);
}

bool func_521(int iParam0)
{
	if ((((((((((func_111(iParam0, 1147021565) || func_111(iParam0, -136654233)) || func_111(iParam0, -524514947)) || func_111(iParam0, -1238310989)) || func_111(iParam0, 1765172170)) || func_111(iParam0, 1490540191)) || func_111(iParam0, 1573112293)) || func_111(iParam0, -1242251796)) || func_111(iParam0, 1919582297)) || func_111(iParam0, -2085281117)) || iParam0 == -1994237933)
	{
		return true;
	}
	return false;
}

int func_522()
{
	return 167247871;
}

int func_523(int iParam0, int iParam1)
{
	if (!func_366(*iParam0))
	{
		return -1;
	}
	iVar0 = -1;
	iVar5 = func_684(*iParam0);
	switch (*iParam0)
	{
		case 4:
			iVar2 = iVar5;
			iVar1 = func_685(iVar2);
			if (iVar1 == -1)
			{
			}
			else
			{
				iVar0 = func_686(iVar1);
			}
			break;
		case 3:
			iVar3 = func_687(iVar5);
			iVar4 = func_688(iVar3);
			if (iVar4 == -1)
			{
			}
			else
			{
				iVar0 = func_689(iVar4);
			}
			break;
		default:
			break;
	}
	return iVar0;
}

bool func_524(int iParam0, int iParam1, bool bParam2)
{
	return !_0x375f5870a7b8bec1(func_526(func_690(iParam0, iParam1, bParam2)));
}

struct<8> func_525(int iParam0, int iParam1)
{
	return func_690(iParam0, iParam1, 1);
}

char* func_526(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

bool func_527(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&Global_1211392->f_48[iParam0]->f_18[iVar0] != 0 && &Global_1211392->f_48[iParam0]->f_18[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_528(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 50);
}

bool func_529(int iParam0)
{
	if (Global_17411.f_2966 == 1)
	{
		if (iParam0 == -1)
		{
			return false;
		}
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_17411.f_2966.f_1[iVar1]->f_4 == 0)
			{
			}
			else if (func_448(Global_17411.f_2966.f_1[iVar1]->f_1))
			{
			}
			else
			{
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (func_448((*Global_1211392->f_48[iParam0])[iVar2]->f_1))
					{
					}
					else
					{
						fVar0 = func_240(Global_17411.f_2966.f_1[iVar1]->f_1, (*Global_1211392->f_48[iParam0])[iVar2]->f_1);
						if (fVar0 < 300f)
						{
							return false;
						}
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	if (func_691(4))
	{
		return false;
	}
	if (func_415())
	{
		return true;
	}
	if (func_692())
	{
		return false;
	}
	if (func_693(1, 255))
	{
		return false;
	}
	if (func_366(func_694()) && Global_1211392->f_1.f_20 != 3)
	{
		return false;
	}
	return true;
}

bool func_530(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&Global_1211392->f_48[iParam0]->f_18[iVar0] != 0 && func_293(&(Global_1211392->f_48[iParam0]->f_18[iVar0]), 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_531(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&Global_1211392->f_48[iParam0]->f_18[iVar0] != 0 && func_695(&(Global_1211392->f_48[iParam0]->f_18[iVar0])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_532(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!does_entity_exist(iParam0))
		{
			return false;
		}
	}
	return _is_metaped_using_component(iParam0, iParam1);
}

int func_533()
{
	if (_is_ped_carrying(Global_34))
	{
		return 1;
	}
	if (get_current_ped_weapon(Global_34, &iVar0, true, 0, false))
	{
	}
	if (get_current_ped_weapon(Global_34, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == -1569615261)
	{
		if (iVar0 == -1569615261)
		{
			return 1;
		}
		else if ((((is_weapon_valid(iVar0) && _is_weapon_two_handed(iVar0)) && !func_696(iVar0)) && !_is_ped_getting_into_a_mount_seat(Global_34, true)) && !(is_ped_in_any_vehicle(Global_34, false) && !_0xa24c1d341c6e0d53(1, 0, 0)))
		{
			return 3;
		}
		else if (_is_weapon_binoculars(iVar0))
		{
			return 1;
		}
		else if ((is_weapon_valid(iVar0) && func_696(iVar0)) || _is_weapon_lasso(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == -1569615261)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_534(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_697(iParam0);
	iVar1 = func_264(iVar0);
	if (iVar1 != iParam0)
	{
		func_698(iVar1, 4);
	}
	if (!func_481(iParam0))
	{
		return;
	}
	if (func_265(iParam0))
	{
		return;
	}
	func_698(iParam0, 4);
	func_699(iParam0, bParam1);
	if (!func_700(iParam0))
	{
		func_701(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_192(0, 0, 1))
		{
			func_702(1, 6);
		}
	}
}

bool func_535(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (_0x2d19bc4df626cbe7(iParam0, iParam1, iParam2, iParam3))
	{
		_task_item_interaction(iParam0, iParam1, iParam2, iParam3, 0, -1082130432);
		Global_1940144->f_26 = 1;
		return true;
	}
	_0xd962f8579d702db5();
	return false;
}

void func_536(int iParam0)
{
	Var0.f_1 = 20;
	if ((func_111(iParam0, 1573112293) || func_111(iParam0, 672467738)) || func_111(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_130(iParam0) == 2085633299)
	{
		_item_database_fillout_item_effects_ids(iParam0, &Var0);
		_0xd962f8579d702db5();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!_item_database_fillout_item_effects_id_info(&(Var0.f_1[iVar29]), &Var22))
			{
			}
			else if (-943921969 == Var22.f_1)
			{
				fVar30 = func_703(0, Var22.f_2);
				func_704(Var22.f_2);
				bVar39 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				fVar31 = func_703(2, Var22.f_2);
				func_705(Var22.f_2, 0);
				bVar38 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				fVar32 = func_703(1, Var22.f_2);
				func_706(Var22.f_2);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = func_707(to_float(Var22.f_2), Var22.f_5);
				func_708(0, fVar33, 1, 1, bVar37);
				bVar39 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = func_707(to_float(Var22.f_2), Var22.f_5);
				func_708(2, fVar34, 1, 1, bVar37);
				bVar38 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = func_707(to_float(Var22.f_2), Var22.f_5);
				func_708(1, fVar35, 1, 1, bVar37);
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = func_709(to_float(Var22.f_3), Var22.f_4);
				func_710(19, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = func_709(to_float(Var22.f_3), Var22.f_4);
				func_710(20, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = func_709(to_float(Var22.f_3), Var22.f_4);
				func_710(18, fVar36, 1, 1);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_709(to_float(Var22.f_3), Var22.f_4);
				func_710(0, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_709(to_float(Var22.f_3), Var22.f_4);
				func_710(2, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_709(to_float(Var22.f_3), Var22.f_4);
				func_710(1, fVar36, 1, 1);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_711(to_float(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar39 || func_111(iParam0, -537818634))
		{
			func_391(func_627(-704089207), 1);
		}
		if (func_111(iParam0, -1457797660))
		{
			func_391(func_627(-1909697259), 1);
		}
		if (bVar38)
		{
			func_391(func_627(704570463), 1);
		}
		switch (iParam0)
		{
			case -1735850413:
			case -241345764:
				chal_add_goal_progress_int(-1823988672, 1517929953, 1);
				break;
		}
		_0x0e1db1f8f5b561dc(fVar30, fVar32, fVar31, round((fVar33 / 2f)), round((fVar35 / 2f)), round((fVar34 / 2f)));
	}
}

void func_537(int iParam0)
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

bool func_538(int iParam0)
{
	return &Global_1952637->f_595[iParam0] > 0;
}

void func_539(int iParam0)
{
	Global_1952637->f_595[iParam0] = &Global_1952637->f_595[iParam0] + 1;
}

bool func_540()
{
	if (Global_1952637->f_3485)
	{
		return true;
	}
	if (absi((get_game_timer() - Global_1952637->f_3483)) < 1250)
	{
		return true;
	}
	if (func_712())
	{
		return true;
	}
	if (_0xec7e480ff8bd0bed(Global_34))
	{
		return true;
	}
	return false;
}

int func_541(int iParam0)
{
	iVar0 = func_133(iParam0);
	if (((iVar0 == 81053684 || iVar0 == -525676072) || func_111(iParam0, 160827531)) || func_111(iParam0, -1303648999))
	{
		return 1;
	}
	return 0;
}

int func_542(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_548(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_543(int iParam0)
{
	if (-1829635046 == func_713(81053684))
	{
		if (func_548(iParam0))
		{
			return true;
		}
	}
	else if (func_714(-525676072, iParam0) || func_111(func_715(1742327865), -1303648999))
	{
		if (func_548(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_544()
{
	iVar0 = 1549701178;
	switch (func_533())
	{
		case 0:
			iVar0 = 1549701178;
			break;
		case 3:
			iVar0 = 949387044;
			break;
		case 1:
			iVar0 = -22529868;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_545()
{
	iVar0 = 614608656;
	switch (func_533())
	{
		case 0:
			iVar0 = 614608656;
			break;
		case 3:
			iVar0 = -1290316291;
			break;
		case 1:
			iVar0 = 1918034163;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_546()
{
	iVar0 = -1832677570;
	switch (func_533())
	{
		case 0:
			iVar0 = -1832677570;
			break;
		case 3:
			iVar0 = -362314920;
			break;
		case 1:
			iVar0 = -1336137422;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_547()
{
	iVar0 = 1623252156;
	switch (func_533())
	{
		case 0:
			iVar0 = 1623252156;
			break;
		case 3:
			iVar0 = -1469902924;
			break;
		case 1:
			iVar0 = 170763280;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

bool func_548(int iParam0)
{
	if (func_714(81053684, iParam0))
	{
		return true;
	}
	if (func_714(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

void func_549(int iParam0)
{
	Global_1952637 = (&Global_1952637 - (Global_1952637 && iParam0));
}

void func_550(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_336(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_336(iParam0, 1)])->f_11 - ((Global_1952637->f_83[func_336(iParam0, 1)])->f_11 && iParam1));
}

int func_551(int iParam0, bool bParam1)
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
				return func_716();
			}
			break;
	}
	return 0;
}

int func_552(int iParam0, bool bParam1)
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

int func_553(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
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
	if (func_438(iVar1, &uVar0))
	{
		return 0;
	}
	if (!func_717(iParam0, 0))
	{
		return 0;
	}
	if (bParam3 && !func_718(iParam0, 0, bParam4))
	{
		return 0;
	}
	Global_1952637->f_3334[Global_1952637->f_3334.f_26] = iVar1;
	Global_1952637->f_3334.f_26++;
	*uParam1++;
	return 1;
}

void func_554()
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

void func_555(bool bParam0, int iParam1)
{
	if (!func_105(iParam1, 0))
	{
		return;
	}
	iVar7 = -1;
	if (!func_617(iParam1, &Var0, 805880880, 0, 0, -401018458))
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
		iVar7 = func_719(iParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_720(4, iVar7))
		{
			sVar3 = "OUTFIT_STORED_LITERAL";
			sVar5 = func_526(func_721(iVar7));
		}
		else
		{
			iVar8 = func_620(iParam1);
			if (func_105(iVar8, 0))
			{
				iParam1 = iVar8;
			}
			sVar3 = "ITEM_STORED";
			sVar5 = _create_var_string(0, func_274(iParam1));
		}
	}
	else
	{
		sVar4 = "Transaction_Positive";
		iVar6 = 109029619;
		iVar7 = func_719(iParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_720(4, iVar7))
		{
			sVar3 = "OUTFIT_REMOVED_LITERAL";
			sVar5 = func_526(func_721(iVar7));
		}
		else
		{
			iVar9 = func_620(iParam1);
			if (func_105(iVar9, 0))
			{
				iParam1 = iVar9;
			}
			sVar3 = "ITEM_REMOVED";
			sVar5 = _create_var_string(0, func_274(iParam1));
		}
	}
	sVar10 = func_501(_create_var_string(10, sVar3, sVar5), iVar6);
	func_626(sVar10, Var0.f_1, get_hash_key(Var0), 0, iVar6, "Transaction_Feed_Sounds", sVar4, 0, 1);
}

void func_556(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_722();
	}
	if (bParam0)
	{
		func_324(8);
		func_324(512);
	}
	else
	{
		func_324(8);
		func_324(16);
	}
}

int func_557()
{
	return Global_1952637->f_1;
}

bool func_558(int iParam0, int iParam1)
{
	iVar0 = func_133(iParam1);
	iVar1 = func_133(iParam0);
	if (iVar0 == iVar1)
	{
		return true;
	}
	if (func_723(iParam1) && func_723(iParam0))
	{
		return true;
	}
	return false;
}

void func_559(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	func_724(iParam0, 0, 0, bParam3, bParam5);
	func_332(iParam1, 1, bParam2, iParam4, bParam3, bParam5);
}

int func_560(int iParam0, int iParam1)
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

void func_561()
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

void func_562(int iParam0)
{
	func_550(iParam0, 8, 6);
}

void func_563(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if ((*iParam1 == 832230214 || *iParam1 == 30652334) || *iParam1 == 750544038)
		{
			iVar0 = 16;
			if (func_133(&(uParam0->f_1[iVar0])) != 1882579758)
			{
				return;
			}
			iVar1 = func_725(&(uParam0->f_1[iVar0]));
			if (iVar1 != 0 && iVar1 != &Global_1952637->f_83[iParam2])
			{
				*iParam1 = iVar1;
				return;
			}
		}
		if (!func_726(*iParam1, iParam2))
		{
			*iParam1 = &Global_1952637->f_1675.f_1[iParam2];
			return;
		}
	}
	*iParam1 = &Global_1952637->f_83[iParam2];
}

void func_564(int iParam0)
{
	func_727(&(Global_1952637->f_2897), iParam0);
}

void func_565(int iParam0, int iParam1)
{
	if (iParam1 & 8 != 0)
	{
		return;
	}
	func_728(&(Global_1952637->f_2897), iParam0, iParam1);
}

void func_566(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_567(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	iVar0 = iParam1;
	bVar1 = func_339(iVar0, 1);
	if (bParam3 && func_111(&(uParam0->f_1[iParam2]), 343781202))
	{
		func_729(uParam0, &(uParam0->f_1[iParam2]));
	}
	switch (func_560(iParam2, 1))
	{
		case -1130352927:
			func_730(uParam0, iVar0, iParam2, iParam4);
			break;
		case 1367443060:
			func_731(uParam0, iVar0, iParam2);
			break;
		case -338487716:
			func_732(uParam0, iVar0, bVar1, iParam4);
			break;
		case 1108822547:
			func_733(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1742327865:
			func_734(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1250092473:
			func_735(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -893163968:
			func_736(uParam0, bVar1, iVar0, iParam4);
			break;
		case -450913544:
			func_737(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -1197751823:
			func_738(uParam0, bVar1, iVar0, iParam4);
			break;
		case 304805134:
			func_739(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1145151482:
			func_740(uParam0, bVar1, iParam4);
			break;
		case -207860920:
			func_741(uParam0, bVar1, iVar0, iParam4);
			break;
		case -426430150:
			func_742(uParam0, bVar1, iParam4);
			break;
		case 788010710:
			func_743(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1958421083:
			func_744(uParam0, bVar1, iVar0, iParam4);
			break;
		case -1944638739:
			func_745(uParam0, bVar1, iVar0, iParam4);
			break;
	}
}

int func_568(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (func_557() == 24043185)
	{
		iVar0 = 1;
	}
	if (iParam2 == 289238755)
	{
		return 289238755;
	}
	if (iParam2 != 0 && func_746(iParam0, iVar0, iParam2) != -1)
	{
		return iParam2;
	}
	if (func_747(iParam0, func_560(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_569(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	if (func_329(4718592))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_748(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (bParam4)
	{
		bVar1 = false;
		if (Global_1952637->f_1675 != 491602716 || !func_720(2, -1))
		{
			bVar1 = true;
		}
		else if (!func_111(Global_1952637->f_1675, -166674229) && (Global_1952637->f_1675 != 491602716 || !func_720(2, -1)))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			Global_1952637->f_1675 = 491602716;
			Global_1952637->f_1556 = 491602716;
			func_749(-1, 0, 6);
			func_136(27, 0, 65536, 0, 0);
		}
	}
	if (bParam3)
	{
		func_556(0, 1);
	}
}

int func_570(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_750(&uParam0, iParam4, bParam5, iParam6);
}

bool func_571(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (func_451(Global_34, iParam0, 0, 1) < 2f && _0xd543d3a8fde4f185(Global_34, iParam0))
	{
		return true;
	}
	return false;
}

bool func_572()
{
	if (!_unlock_is_unlocked(-1624899219))
	{
		func_300(2);
		return false;
	}
	if (!func_358())
	{
		func_300(9);
		return false;
	}
	if (Global_1051439->f_72[34]->f_1 & 128 != 0)
	{
		func_300(3);
		return false;
	}
	Var0 = { func_365(0) };
	if (func_366(Var0))
	{
		iVar2 = -1;
		switch (Var0)
		{
			case 6:
				iVar3 = func_367(player_id(), 0);
				if (iVar3 != -1)
				{
					iVar2 = func_751(iVar3);
				}
				break;
			case 3:
			case 4:
				iVar4 = func_523(&Var0, 0);
				if (iVar4 != -1)
				{
					if (func_524(iVar4, 461218520, 0))
					{
						iVar2 = 46;
					}
				}
				break;
		}
		if (iVar2 != -1)
		{
			func_300(iVar2);
			return false;
		}
	}
	if (func_194())
	{
		func_300(4);
		return false;
	}
	if (func_693(4, network_player_id_to_int()) && Global_1051439->f_72[34]->f_49 & 1073741824 == 0)
	{
		func_300(5);
		return false;
	}
	if (func_752(131072, 255))
	{
		func_300(7);
		return false;
	}
	if (func_753())
	{
		func_300(8);
		return false;
	}
	return true;
}

bool func_573(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_3 & 32 != 0;
	}
	return func_752(32, iParam0);
}

bool func_574(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return true;
	}
	return false;
}

bool func_575()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

void func_576(bool bParam0)
{
	if (bParam0)
	{
		func_754(4);
	}
	else
	{
		func_349(4);
	}
}

void func_577(bool bParam0)
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

bool func_578()
{
	return Global_1915715->f_20643;
}

int func_579(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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
	if (func_755())
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

bool func_580(int iParam0)
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

int func_581(int iParam0)
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

bool func_582(int iParam0, int iParam1, int iParam2)
{
	return func_82((*Global_1196567)[iParam2][iParam0], iParam1);
}

var func_583(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_756() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_757());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_757());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_757());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_758(get_player_team(iVar5)));
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
			if (func_759(iVar2))
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
				if (iVar9 & 8192 != 0 && func_760(iVar2) != 1)
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
					if (!func_761(iVar10))
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

int func_584(var uParam0, struct<21> Param1)
{
	if (!func_762(uParam0))
	{
		return 0;
	}
	*uParam0->f_2[*uParam0] = { Param1 };
	*uParam0++;
	return 1;
}

bool func_585(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_586(int iParam0)
{
	if (func_588(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_587(int iParam0)
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

bool func_588(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_589(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_590()
{
	if (!func_358())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

bool func_591()
{
	return (func_458(-1185145312, 0, 0, 0) > 0 && func_570(func_156(889965687, func_344(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_592(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_210(0);
	*uParam1 = { func_156(iParam0, func_376(0), iParam3, 0) };
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

bool func_593(int iParam0, int iParam1, int iParam2)
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

bool func_594(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_210(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

struct<28> func_595(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_210(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_601(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_596(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_679(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_681(func_763(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_682(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_597(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_210(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_601(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_598(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_681(func_764(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_682(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_599(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_210(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_601(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_600(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_679(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_681(func_765(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_682(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_601(var uParam0, bool bParam1)
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
		Var0.f_15 = func_294(uParam0->f_4, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_385() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_602(int iParam0)
{
	if (func_111(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_111(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_111(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

struct<12> func_603(int iParam0, int iParam1, var uParam2, bool bParam3)
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
		func_766(uParam2, 1528001899);
	}
	else
	{
		func_766(uParam2, 1884295263);
	}
	func_766(uParam2, iVar0);
	return *uParam2;
}

bool func_604(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (0 == iParam0)
	{
		return false;
	}
	return func_767(iParam0, uParam1, &uVar0, iParam2, iParam3);
}

int func_605(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	if (!func_768(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_769(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_770(iParam0, bParam2);
	iVar2 = 0;
	if (func_130(iParam0) == -1037537535)
	{
		if (!func_111(iParam0, 866047851) && !func_111(iParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_616(iParam0, 8388608) && !func_771(27))
	{
		func_772(27);
	}
	func_773(iParam0);
	if (!bVar3)
	{
		if (func_111(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			iVar1 = func_775(func_774(iParam0, 1), 0);
			if (is_weapon_valid(iVar1))
			{
				if (func_68() == -1)
				{
					func_776(iVar1);
				}
				if (func_158(0) && func_777(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_778(iParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_779(iParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_130(iParam0) == -427144552)
		{
			if (!func_780(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_130(iParam0) == 307971639 && func_649(iParam0))
		{
			if (!func_781(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_111(iParam0, -103750053))
		{
			func_391(func_782(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_391(func_390(-717883113, 2091222383), iVar0);
		}
		else if (func_111(iParam0, -121341956) && !func_111(iParam0, 606799272))
		{
			if (iParam0 != 191707516)
			{
				func_152(536, 0);
			}
			if (func_111(iParam0, -2017733358) || func_111(iParam0, -1369131378))
			{
			}
		}
		else if (func_111(iParam0, -136654233))
		{
			if (func_111(iParam0, -1021472396))
			{
			}
		}
		else if (func_111(iParam0, -1466706512) && func_111(iParam0, 1147021565))
		{
			func_152(519, 0);
		}
		else if (func_111(iParam0, 1147021565) && func_111(iParam0, -524514947))
		{
		}
		else if (func_111(iParam0, 554195525))
		{
		}
		else if (func_111(iParam0, 589988438))
		{
			if (func_783())
			{
				func_784(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_111(iParam0, 787083290) && func_111(iParam0, 949916894))
		{
			func_785(iParam0);
		}
		else if (func_111(iParam0, -1718133314))
		{
			func_786(iParam0);
		}
		else if (func_111(iParam0, -1738650224))
		{
			func_787(iParam0);
		}
		else if (func_111(iParam0, -1112814642) && func_111(iParam0, 949916894))
		{
			func_788(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1940144->f_21 = 0;
		}
		else if (func_111(iParam0, 1841149704))
		{
			func_789();
		}
		else if (func_111(iParam0, -1979000645))
		{
		}
		else if (func_111(iParam0, 606799272))
		{
		}
		else if (func_111(iParam0, -1112814642) && func_111(iParam0, -1697809989))
		{
		}
		else if (func_111(iParam0, -2017733358) || func_111(iParam0, -1369131378))
		{
		}
		else if (func_111(iParam0, -1921346699))
		{
			return 0;
		}
		else if (func_111(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_293(215778062, 1))
					{
						func_605(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_293(670273567, 1))
					{
						func_605(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_293(-967317137, 1))
					{
						func_605(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_293(526074061, 1))
					{
						func_605(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_293(-1045488665, 1))
					{
						func_605(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_293(471514780, 1))
					{
						func_605(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_111(iParam0, -839724752) && func_616(iParam0, 4))
		{
		}
		else if (func_111(iParam0, 1399091007))
		{
			func_790(iParam0, &iVar2);
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
				func_791(272, func_274(-21093309), 0);
				break;
			case 204375141:
				func_791(270, func_274(204375141), 0);
				break;
			case -417963070:
				func_791(271, func_274(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_792(685, 1934060482, 1, 1);
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
					func_792(685, 1110018439, 1, 1);
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
					func_792(685, 1408511260, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_792(685, -1228016946, 1, 1);
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
					func_792(686, -103579, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_792(686, -1531530025, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case 80178851:
				func_152(526, 0);
				break;
			case 1613651027:
				func_152(529, 0);
				break;
			case -885810591:
				break;
			case -601932535:
				if (func_771(1))
				{
					func_152(522, 0);
				}
				break;
			case -898386032:
				func_152(521, 0);
				break;
			case -2035110427:
				if (func_68() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_152(534, 0);
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
		func_793(&iVar5);
		if (!func_779(iVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_158(0))
		{
			return 1;
		}
		if (func_130(iParam0) == -1037537535)
		{
			func_794(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_158(0) && !func_389())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_34, 0, 0, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_605(&(Var6.f_1[iVar29]), &(Var6.f_12[iVar29]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_795(iVar2, 0);
		}
	}
	Var30 = { func_400(iParam0) };
	if (_stat_id_is_valid(&Var30))
	{
		_0x6a0184e904cdf25e(&Var30, iVar0);
	}
	func_796(iParam0);
	if (fParam6 > 0f)
	{
		if (func_111(iParam0, -839724752))
		{
			func_797(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_399(iParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

bool func_606(int iParam0)
{
	switch (iParam0)
	{
		case -1795542128:
		case 1627068364:
			return true;
	}
	return false;
}

bool func_607(int iParam0, int iParam1)
{
	_0xd962f8579d702db5();
	if (!does_entity_exist(Global_34))
	{
		return false;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
		return false;
	}
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_ped_in_writhe(iParam0))
	{
		return false;
	}
	if (_0x7fc84e85d98f063d(Global_34))
	{
		return false;
	}
	set_ped_config_flag(Global_34, 176, true);
	clear_ped_tasks(Global_34, 1, 0);
	task_revive_target(Global_34, iParam0, iParam1);
	return true;
}

int func_608()
{
	return &Global_1904628;
}

void func_609(int iParam0)
{
	Global_1904628->f_2 = iParam0;
}

void func_610(int iParam0)
{
	Global_1904628->f_1 = iParam0;
}

void func_611(int iParam0)
{
	Global_1904628->f_5 = iParam0;
}

void func_612(int iParam0, int iParam1, var uParam2)
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

bool func_613()
{
	return !&Global_1913504;
}

void func_614(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

char* func_615(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_616(int iParam0, int iParam1)
{
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_617(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_618(int iParam0)
{
	if (func_111(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_111(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_111(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_111(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_111(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_111(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_111(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_111(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_111(iParam0, -352095726) || func_111(iParam0, -2014783736)) || func_111(iParam0, -545064757)) || func_111(iParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_619(int iParam0)
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

int func_620(int iParam0)
{
	iVar0 = func_798(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_799(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_800(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (_0x8750f69a720c2e41(iVar11, iVar13, &iVar14) && func_801(iVar14))
			{
				func_802(iVar11);
				return iVar14;
			}
			iVar13++;
		}
		func_802(iVar11);
	}
	return 0;
}

bool func_621(int iParam0, int iParam1)
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

int func_622(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_105(iParam0, 0) && !func_510(func_290(iParam0), 2))
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

int func_623(int iParam0, int iParam1)
{
	iVar0 = func_803(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_624(int iParam0, char* sParam1)
{
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_804(iParam0), 128);
	iVar0 = get_length_of_literal_string(sParam1);
	if (!func_805(iParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_806(iParam0), 128);
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

char* func_625(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

var func_626(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_807(sParam0, sParam1, iParam2);
	return uVar20;
}

struct<2> func_627(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_628(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_629(int iParam0, int iParam1)
{
	if (func_491(iParam1))
	{
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_1904087->f_113[iVar0]->f_1 == iParam1)
			{
				if (does_entity_exist(Global_1291734->f_938.f_245[iVar0]->f_3))
				{
					if (network_has_control_of_entity(Global_1291734->f_938.f_245[iVar0]->f_3))
					{
						iVar1++;
					}
				}
			}
			iVar0++;
		}
		return iVar1;
	}
	return func_271(iParam0, iParam1);
}

int func_630(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	if (!does_entity_exist(*iParam0))
	{
		return 0;
	}
	if (func_808(*iParam0, iParam1, *iParam2, bParam3, iParam4))
	{
		Var0 = { func_400(iParam1) };
		if (_stat_id_is_valid(&Var0))
		{
			_0xbd861ae8a5181ed7(&Var0, *iParam2);
		}
		*iParam2 = func_631(*iParam0, iParam1, *iParam2, 1, iParam5);
		if (*iParam2 > 0)
		{
			if (func_809(iParam1))
			{
				if (!func_810(0, iParam1, *iParam2))
				{
				}
				if (func_811(player_id(), 1, 0))
				{
					_0x18ff3110cf47115d(*iParam0, 32, 1);
				}
				else
				{
					_0x18ff3110cf47115d(*iParam0, 32, 0);
				}
				*iParam2 = func_812(*iParam0, iParam1, *iParam2);
			}
		}
		*iParam2 = 0;
		func_66(1, 0, 0);
		return 1;
	}
	return 0;
}

int func_631(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_is_ped_carrying(iParam0))
	{
		return iParam2;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iParam0, iVar1);
	iVar4 = get_itemset_size(iVar1);
	Var6.f_10 = 10;
	iVar3 = 0;
	while (iVar3 < iVar4)
	{
		if (iParam2 == 0)
		{
		}
		else
		{
			iVar2 = _get_entity_from_item(get_indexed_item_in_itemset(iVar3, iVar1));
			if (!does_entity_exist(iVar2))
			{
			}
			else if (!network_has_control_of_entity(iVar2))
			{
			}
			else
			{
				iVar0 = func_507(iVar2);
				if (!func_504(iVar0, &uVar102))
				{
					if (is_entity_a_ped(iVar2))
					{
						if ((iParam4 == 2 && _0x8de41e9902e85756(iVar2)) || (iParam4 == 1 && !_0x8de41e9902e85756(iVar2)))
						{
						}
						else if (iVar0 == iParam1)
						{
							if (iParam0 == _0xf49f14462f0ae27c(player_id()))
							{
								iVar5 = 0;
								while (iVar5 < 3)
								{
									if (Global_1291734->f_938.f_245[iVar5]->f_3 == iVar2)
									{
										func_813(&Var6, Global_1904087->f_113[iVar5]);
									}
									else
									{
										iVar5++;
									}
								}
							}
							if (bParam3)
							{
								if (Global_1915715->f_20638 || Global_1915715->f_22504.f_1)
								{
									if (Global_1915715->f_20241 == 29 && is_entity_a_ped(iVar2))
									{
										if (func_111(iVar0, -753854379) || func_111(iVar0, 173360570))
										{
											_set_ped_damage(get_ped_index_from_entity_index(iVar2), 2);
										}
										_0x831bf01c56149a8a(get_ped_index_from_entity_index(iVar2));
									}
									if (iParam0 == player_ped_id())
									{
										func_399(iVar0, -1, 0, 1, 0, 0, 0);
									}
								}
								_0x0d0db2b6af19a987(&iVar2);
							}
							else
							{
								_0xed00d72f81cf7278(iVar2, 0, 0);
							}
							iParam2 = (iParam2 - 1);
						}
						iVar3++;
						destroy_itemset(iVar1);
						return iParam2;
					}
				}
			}
		}
	}
}

void func_632(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1915715->f_20637)
	{
		if (Global_1915715->f_20241 == 29)
		{
			if (func_505(iParam0))
			{
				iVar1 = 0;
				if (bParam2)
				{
					switch (func_814(iParam0))
					{
						case 2:
							iVar1 = 1;
							break;
						case 4:
							iVar1 = 3;
							break;
						case 8:
							iVar1 = 4;
							break;
					}
				}
				iVar0 = 0;
				while (iVar0 <= (iParam1 - 1))
				{
					_0x7c2abf6e556b21fc(func_815(iParam0), iVar1, func_111(iParam0, 1064293907), 0);
					iVar0++;
				}
			}
		}
	}
}

bool func_633(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0 = { func_400(iParam0) };
	if (_stat_id_is_valid(&Var0))
	{
		_0xbd861ae8a5181ed7(&Var0, iParam1);
	}
	func_816(iParam0, iParam1);
	return func_817(iParam0, iParam1, bParam2, iParam3);
}

int func_634(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_818(iParam0);
	if (iVar0 <= 0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (func_819(&Var3))
	{
		if (Var3.f_1 != 0)
		{
			if (func_820(Var3.f_1, &iVar1, bParam1))
			{
				iVar2 = (iVar2 + iVar1);
			}
		}
	}
	return iVar2;
}

int func_635(bool bParam0, bool bParam1, bool bParam2)
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

int func_636()
{
	return Global_1893587->f_2;
}

bool func_637(struct<2> Param0)
{
	return func_821(Param0, 1, 4);
}

int func_638()
{
	return Global_1903136->f_379;
}

bool func_639(int iParam0, int iParam1)
{
	if (func_111(iParam1, 1573112293))
	{
		return func_822(iParam1);
	}
	if (func_520(iParam1))
	{
		return func_195(524288);
	}
	switch (iParam0)
	{
		case -77448735:
			if (func_521(iParam1))
			{
				return func_822(iParam1);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_822(iParam1);
		case -1520388130:
		case 1802292908:
			return func_195(16);
		case 81053684:
		case 1477698721:
			return func_195(4);
		case -525676072:
			return func_195(8);
		case 1779021115:
			if (func_105(iParam1, 0))
			{
				if (iParam1 == -1016714371)
				{
					return func_195(64);
				}
				if (iParam1 == 332793555)
				{
					return func_195(131072);
				}
			}
			return func_195(32);
		case -1823706425:
			if (iParam1 == -1115561122)
			{
				return func_195(262144);
			}
			else
			{
				return func_195(128);
			}
			break;
		case -854348463:
			return func_195(8192);
		default:
			if (func_105(iParam1, 0))
			{
				if (func_111(iParam1, 1919582297))
				{
					return func_195(4096);
				}
				else if (iParam1 == -2035110427 || iParam1 == -1448210800)
				{
					return func_195(2048);
				}
				else if (iParam1 == -1516555556)
				{
					return func_195(1024);
				}
				else if (func_111(iParam1, 1147021565))
				{
					return func_195(2);
				}
			}
			return func_195(1);
	}
	return func_195(1);
}

void func_640(int iParam0, var uParam1, bool bParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, bool bParam15, bool bParam16)
{
	iVar0 = -1;
	Var3.f_9 = -1591664384;
	if (func_425(&uParam1, &iVar0, &iVar1, bParam16))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_228(&Var3, iVar2, iVar0, iVar1))
			{
				func_422(iParam0, Var3.f_4, bParam15);
			}
			iVar2++;
		}
	}
	func_242(iVar0);
}

bool func_641(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_642()
{
	return Global_1940311->f_37;
}

int func_643(int iParam0)
{
	if (func_616(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_644(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1224357681))
	{
		return 1;
	}
	return 0;
}

bool func_645(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1940311->f_38.f_1)
	{
		if (func_230(iParam0, &(Global_1940311->f_38.f_2[iVar0])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_646(int iParam0)
{
	if (func_111(iParam0, -839724752))
	{
		return func_111(iParam0, 1937586541);
	}
	return false;
}

bool func_647(int iParam0)
{
	if ((((((((((((((((func_823(iParam0, 56759509) || func_823(iParam0, 2145533727)) || func_823(iParam0, 1632674359)) || func_823(iParam0, 332438661)) || func_823(iParam0, -1452445456)) || func_823(iParam0, -623226361)) || func_823(iParam0, -1874365462)) || func_823(iParam0, -1658668866)) || func_823(iParam0, 1997097980)) || func_823(iParam0, 90781239)) || func_823(iParam0, 920487791)) || func_823(iParam0, -668555046)) || func_823(iParam0, -839148413)) || func_823(iParam0, 10424351)) || func_823(iParam0, 773314749)) || func_823(iParam0, -246025274)) || func_823(iParam0, -41527693))
	{
		return true;
	}
	return false;
}

int func_648(int iParam0, int iParam1)
{
	switch (Global_1940311->f_36)
	{
		case 1:
			if (iParam1 == -2074770370)
			{
				if ((func_111(iParam0, -887064662) || func_111(iParam0, -839724752)) || func_111(iParam0, -136654233))
				{
					return 1;
				}
			}
			break;
		case 2:
			if (iParam1 == -2074770370)
			{
				if ((((((((func_111(iParam0, -887064662) || func_111(iParam0, -839724752)) || func_111(iParam0, -136654233)) || func_111(iParam0, 554195525)) || func_111(iParam0, -1238310989)) || func_111(iParam0, 2127114599)) || func_111(iParam0, -1864584831)) || func_111(iParam0, 1068498601)) || func_111(iParam0, 1967571132))
				{
					return 1;
				}
			}
			break;
		default:
			break;
	}
	return 0;
}

bool func_649(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

void func_650(int iParam0, int iParam1)
{
	Global_1940311->f_38.f_2[iParam0] = iParam1;
}

bool func_651(int iParam0)
{
	return Global_1940311->f_38.f_2[iParam0]->f_1;
}

void func_652(int iParam0)
{
	Global_1940311->f_38.f_2[iParam0] = 0;
	Global_1940311->f_38.f_2[iParam0]->f_1 = 0;
}

void func_653(int iParam0)
{
	iVar0 = iParam0;
	Var1.f_1 = func_824(iVar0);
	Var1 = func_825(iVar0);
	iVar4 = 1;
	iVar5 = func_826(iVar0);
	iVar6 = _0xcc644bc1dd655269(iVar5, 0);
	if (func_285(iVar6))
	{
		iVar4 = func_465(iVar6);
	}
	iVar7 = func_827(iVar0);
	if (iVar7 == 0)
	{
		iVar7 = 109029619;
	}
	func_467(-1715238242, iParam0, &Var1, func_828(iParam0), iVar4, 0, 0, iVar7);
	Global_1940311->f_38.f_203++;
	Global_1940311->f_38.f_1++;
}

int func_654(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	iVar1 = _get_ped_damage(iVar0);
	iVar2 = func_829(iVar0);
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
			iVar6 = func_830(iVar5);
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

bool func_655(int iParam0, var uParam1, int iParam2, int iParam3)
{
	*iParam2 = _0x640f890c3e5a3ffd(iParam0, uParam1, iParam3);
	if (*iParam2 >= 0)
	{
		return true;
	}
	return false;
}

bool func_656(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_68() == 0)
	{
		return func_831(iParam0);
	}
	return iParam0 <= func_832();
}

bool func_657(int iParam0)
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

int func_658(int iParam0, int iParam1)
{
	if (iParam0 == 15 && func_111(iParam1, -2051813666))
	{
		return 1;
	}
	return 0;
}

int func_659(int iParam0, int iParam1)
{
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_344(0) };
	Var0.f_4 = func_833(iParam1);
	Var5 = { func_156(iParam0, Var0, Var0.f_4, 0) };
	if (!_0xb881ca836cc4b6d4(&Var5))
	{
		return 0;
	}
	iVar9 = _0xc97e0d2302382211(func_210(0), &Var5, 0);
	return iVar9;
}

void func_660(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	Var0.f_4 = uParam0;
	Var0.f_11 = iParam1;
	if (!bParam2)
	{
		func_256(Var0, iParam3);
	}
	else
	{
		func_232(Var0);
	}
}

bool func_661(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_662(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = -1;
	Var3.f_9 = -1591664384;
	if (func_425(uParam0, &iVar0, &iVar1, bParam1))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_228(&Var3, iVar2, iVar0, iVar1))
			{
				if (!func_244(&Var3, 0))
				{
				}
				else if (bParam2)
				{
					func_261(Var3.f_4, bParam3, 0);
				}
				else
				{
					func_245(Var3.f_4);
				}
			}
			iVar2++;
		}
	}
	func_242(iVar0);
}

bool func_663(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	return func_834(&uParam0, iParam4, uParam5, bParam6, iParam7);
}

bool func_664(int iParam0, int iParam1)
{
	iVar0 = func_835(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 > iParam1;
}

struct<4> func_665(int iParam0, int iParam1)
{
	Var0 = { func_836(iParam0) };
	return func_837(iParam0, iParam1, Var0, Var0.f_4);
}

int func_666(int iParam0, bool bParam1)
{
	if (!func_510(iParam0, 2))
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

bool func_667(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 10;
	if (!_item_database_fillout_sell_price(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (!bParam5)
	{
	}
	*iParam3 = Var0.f_3;
	if (*uParam2 < Var0.f_3)
	{
		return false;
	}
	iVar25 = 0;
	while (iVar25 < Var0.f_3)
	{
		if (!bParam5)
		{
		}
		*(*uParam2)[iVar25] = { *Var0.f_4[iVar25] };
		iVar25++;
	}
	if (bParam4)
	{
		func_838(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_668(int iParam0, int iParam1, float fParam2)
{
	*fParam2 = 1f;
	if (!func_233(iParam0))
	{
		return false;
	}
	if (!func_105(iParam1, 0))
	{
		return false;
	}
	if (!func_432(22, &Var0))
	{
		return false;
	}
	Var0.f_2 = -1023752283;
	Var0.f_3 = iParam1;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		iVar6 = func_839(iParam0);
		func_840(iVar6, &uVar5);
		Var0.f_2 = uVar5;
		_datafile_get_float(fParam2, &Var0);
		if (*fParam2 < 1f)
		{
			*fParam2 = 1f;
		}
		return true;
	}
	return false;
}

int func_669(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && iParam1 == -915411861) && func_841(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_842(iParam0))
	{
		return func_843(func_495(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_844(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

int func_670(int iParam0)
{
	if (func_68() != -1)
	{
		if (Global_1071686->f_12)
		{
			if (iParam0 == 3)
			{
				return -1033589769;
			}
		}
	}
	return func_845(iParam0);
}

int func_671(int iParam0)
{
	switch (iParam0)
	{
		case 1908704263:
			return 915880986;
		case -2112217546:
			return -1424697962;
		case -1745255175:
			return -1643384846;
		case -237368063:
			return -847420802;
		case 1598967299:
			return -662726703;
		case -1809464109:
			return 1760886130;
		case -165201917:
			return -1243653490;
		case 815147738:
			return 1988467099;
		case 1287583539:
			return -674590015;
		case -2126985311:
			return -1480423460;
		case -1268352491:
			return 924882045;
		case -1940225526:
			return 1415608202;
		case -212307068:
			return -593311590;
		case 355421032:
			return 765085831;
		case 1657729714:
			return 2094730711;
		case 1350692346:
			return -1310590179;
		case -257850294:
			return 992366796;
		case -918541014:
			return -244657613;
		case -947573795:
			return -2026210939;
		case -2068302756:
			return -1252472243;
		case 1650829985:
			return -980016656;
		case -1808044035:
			return -758005668;
		case -1952647655:
			return -2139551030;
		case 1293221440:
			return 1607144310;
		case -642946194:
			return 80093385;
		case 819214075:
			return -867655342;
		case -858652427:
			return 991092621;
		case 395625948:
			return 871746664;
		case -2063800922:
			return 1626949878;
		case -2117103642:
			return -1722483116;
		case -1583694057:
			return -1739474417;
		case -1550918713:
			return -161524199;
		case 836539658:
			return 156979555;
		case 773062352:
			return 322141256;
		case 1306100270:
			return 1310120320;
		case -1063194668:
			return -1228376431;
		case 337839068:
			return 472142656;
		case -1426520714:
			return -1837840093;
		case -1456429189:
			return 58634176;
		case -2032809253:
			return 1023080408;
		case 781728005:
			return 1001171791;
		case 1202409779:
			return 1210345318;
		case 1520877300:
			return 399553313;
		case -1736624361:
			return -1422869557;
		case 719465997:
			return -1378812236;
		case -361486526:
			return 1011003885;
		case -765274711:
			return 651035143;
		case -887205673:
			return 2013022756;
		case -784020903:
			return -1186289527;
		case -886117938:
			return 877935135;
		case -1416771220:
			return -39646495;
		case 1648676911:
			return 1582593525;
		case 2103833563:
			return -246542229;
		case -831636369:
			return -529454751;
		case -852290935:
			return -46978629;
		case -1870415962:
			return -1347000030;
		case -788684109:
			return -505583391;
		case 1416435145:
			return 1645887374;
		case -1483088274:
			return -1559227925;
		case -791867098:
			return 1562528937;
		case -1689552552:
			return -1471526136;
		case -1850779170:
			return -1440794801;
		case -121487803:
			return 2144711797;
		case -1280499288:
			return 718825539;
		case 820245961:
			return 2105263879;
		case -889526774:
			return -905842006;
		case -521025998:
			return 1191274340;
		case 1583031244:
			return 1613453781;
		case -2115599211:
			return -1030182399;
		case -767176802:
			return 987967309;
		case -750945821:
			return -1060737769;
		case -2135749211:
			return 553310445;
		case 2063108046:
			return -1838865945;
		case 1299111759:
			return 1418092959;
		case 1595322723:
			return -1315697778;
		case 784918835:
			return -1772126340;
		case -676310905:
			return -935543049;
		case -1719545959:
			return 1772544356;
		case -2142423934:
			return -266273535;
		case 747751566:
			return -1670544626;
		case -1942682403:
			return 1290960696;
		case 1018433784:
			return 1913571052;
		case -796185392:
			return 1717601520;
		case -49549406:
			return 430397370;
		case 857788498:
			return 16287711;
		case 1223148871:
			return -1356230367;
		case 939407236:
			return 1417331079;
		case 1608778431:
			return -884124246;
		case -2033821082:
			return 1884610748;
		case -993340234:
			return 746558492;
		case -1861062075:
			return -892811627;
		case 1645001514:
			return -2040522845;
		case 782371031:
			return -1224510844;
		case 1255529169:
			return 1334837390;
		case 70898308:
			return 339620522;
		case -1050350982:
			return 1770451033;
		case 581781784:
			return 756657535;
		case -1363330863:
			return 862898895;
		case -1780911288:
			return 1997845858;
		case 1018306802:
			return -1930144509;
		case 1615521415:
			return 1846915545;
		case -1499066338:
			return -1816929509;
		case 1711081908:
			return 1197831625;
		case -164705:
			return -1866642239;
		case -2044044647:
			return -1508120809;
		case -859583379:
			return -1007681885;
		case -759504052:
			return 434924608;
		case 700225820:
			return 1666393029;
		case 136458586:
			return -1814593136;
		case 799105420:
			return -1188120304;
		case -481655757:
			return 1978734761;
		case 484160931:
			return -824902132;
		case 1010699907:
			return -1015531226;
		case 1550264248:
			return -581619522;
		case -371992731:
			return -861854914;
		case 1090294483:
			return -545447034;
		case -274175035:
			return -1824684934;
		case -1064414912:
			return 980653387;
		case -2091620305:
			return -1011598664;
		case -468684824:
			return -177476569;
		case 1668870118:
			return 416630124;
		case -534004020:
			return 1925728375;
		case -2126925270:
			return -1080457688;
		case 2008380517:
			return 1742676369;
		case -510697884:
			return -899751553;
		case -955209948:
			return 431501574;
		case 1459836898:
			return 2126795269;
		case 303969766:
			return 1489051752;
		case -1707588662:
			return -1705499323;
		case -1224075784:
			return -2013445740;
		case -1806671048:
			return 102446365;
		case 749765420:
			return -1927342740;
		case 462936163:
			return -410900360;
		case -8888941:
			return -1073614594;
		case 1640227110:
			return 2060013792;
		case -1241188722:
			return 581032175;
		case -1030962659:
			return -581931638;
		case 112552982:
			return -1528265128;
		case -1599578931:
			return -142632645;
		case 1296331626:
			return -2048519180;
		case -1256398198:
			return 1442025993;
		case 1297800973:
			return 441195430;
		case 1772582754:
			return 748665395;
		case -1459876379:
			return 351048413;
		case 1127406863:
			return -914779013;
		case 1779996957:
			return 1323485831;
		case 1885306923:
			return -365111821;
		case 1244107697:
			return 101495387;
		case -1201555940:
			return 157917500;
		case -668487833:
			return -936537044;
		case -1178150148:
			return -1610329427;
		case 1171158615:
			return -1836227998;
		case -2123554124:
			return 619479575;
		case 1806705761:
			return -1444929945;
		case 404581836:
			return -929322235;
		case 987197489:
			return -548076717;
		case -1259715647:
			return -281211381;
		case -1716717840:
			return 493457089;
		case -196277007:
			return -479485786;
		case -2064457926:
			return 27838955;
		case 561267454:
			return 1641833719;
		case 686253083:
			return -314933180;
		case -2115566177:
			return -827518870;
		case -1886936864:
			return 1367447057;
		case 777641606:
			return -2092697195;
		case 1815502722:
			return -2043601589;
		case 1518910503:
			return 1758585485;
		case 1020297399:
			return 1527400190;
		case -438328437:
			return 1493601140;
		case -132069363:
			return -885592109;
		case 1718756614:
			return -1282621313;
		case 616254818:
			return -70954328;
		case 1586020612:
			return -1378208045;
		case 1892902297:
			return 1450608653;
		case 1920759986:
			return 1543592331;
		case 1683741809:
			return 1842740532;
		case 403588059:
			return 2004357248;
		case -352805801:
			return -229670230;
		case 1491466288:
			return 546758456;
		case -1066678466:
			return 1888419655;
		case -375348364:
			return -2040849706;
		case -101301217:
			return 2014346813;
		case 213936563:
			return -1638839614;
		case 897866285:
			return 1705186999;
		case 1135507073:
			return -1821314478;
		case -1671125008:
			return -1434083213;
		default:
			break;
	}
	return 0;
}

int func_672(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return -1;
	}
	if (iParam0 == _0x901e0dc25080c8b9(player_id()))
	{
		return func_364(player_id());
	}
	return func_846(_0x4be6c13a45cca8ec(iParam0));
}

bool func_673(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

bool func_674(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_675(int iParam0)
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

int func_676(var uParam0, int iParam1)
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

int func_677(int iParam0)
{
	iVar0 = func_133(iParam0);
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

bool func_678(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = 0;
	if (*uParam0 != 10)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam2 < 1)
		{
			Jump @253; //curOff = 37
		}
		else if ((*uParam0)[iVar0]->f_4 == 0)
		{
			Jump @244; //curOff = 55
		}
		else if ((*uParam0)[iVar0]->f_5 == 0)
		{
			Jump @244; //curOff = 73
		}
		else if (func_847((*uParam0)[iVar0]))
		{
		}
		else
		{
			if (iVar0 != *iParam1)
			{
				*(*uParam0)[*iParam1] = { *(*uParam0)[iVar0] };
				(*uParam0)[*iParam1]->f_4 = (*uParam0)[iVar0]->f_4;
			}
			if ((*uParam0)[iVar0]->f_5 > iParam2)
			{
				(*uParam0)[*iParam1]->f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				(*uParam0)[*iParam1]->f_5 = (*uParam0)[iVar0]->f_5;
				iParam2 = (iParam2 - (*uParam0)[*iParam1]->f_5);
			}
			if (iVar0 > *iParam1)
			{
				*(*uParam0)[iVar0] = { func_385() };
				(*uParam0)[iVar0]->f_4 = 0;
				(*uParam0)[iVar0]->f_5 = 0;
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam3 && iParam2 > 0)
	{
		*iParam1 = 0;
		return false;
	}
	return true;
}

bool func_679(int iParam0, var uParam1)
{
	iVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_848(uParam1->f_8, iParam0, iVar0, 2048) || func_848(uParam1->f_8, iParam0, iVar0, 32768)) || func_848(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_848(uParam1->f_8, iParam0, iVar0, 4) || func_848(uParam1->f_8, iParam0, iVar0, 256)) || func_848(uParam1->f_8, iParam0, iVar0, 65536)) || func_848(uParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_848(uParam1->f_8, iParam0, iVar0, 1) || func_848(uParam1->f_8, iParam0, iVar0, 8)) || func_848(uParam1->f_8, iParam0, iVar0, 65536)) || func_848(uParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_848(uParam1->f_8, iParam0, iVar0, 1) || func_848(uParam1->f_8, iParam0, iVar0, 16)) || func_848(uParam1->f_8, iParam0, iVar0, 2)) || func_848(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_848(uParam1->f_8, iParam0, iVar0, 8) || func_848(uParam1->f_8, iParam0, iVar0, 4096)) || func_848(uParam1->f_8, iParam0, iVar0, 256)) || func_848(uParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_680(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_681(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_849(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_849(iParam1, 2, 0, 0);
	return -1;
}

int func_682(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_849(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_683()
{
	return 230145239;
}

int func_684(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_850(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_685(int iParam0)
{
	iVar0 = -1;
	if (func_851(&Var1, iParam0))
	{
		iVar0 = ((func_852() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_686(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (*Global_1257541)[iParam0]->f_1;
}

int func_687(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1336837986;
		case 1:
			return 2124631622;
		case 2:
			return -66250361;
		case 3:
			return 1443764480;
		case 4:
			return -668110249;
		case 5:
			return -1381389849;
		case 6:
			return 536699577;
		case 7:
			return 541147288;
		case 8:
			return 377122918;
		case 9:
			return 1158195437;
		case 10:
			return -1261475678;
		case 11:
			return -621956193;
		case 12:
			return 1081776803;
		case 13:
			return -218697175;
		case 14:
			return -867762478;
		case 15:
			return 602097925;
		case 16:
			return 1724417419;
		case 17:
			return -728200180;
		case 18:
			return 1404415665;
		case 20:
			return 339077182;
		case 21:
			return 650120418;
		case 28:
			return 1695693301;
		case 19:
			return -1809176396;
		case 22:
			return 349772825;
		case 23:
			return 1657045547;
		case 24:
			return -590482787;
		case 25:
			return -1711308722;
		case 26:
			return -409129282;
		case 27:
			return -1790985606;
		case 30:
			return 1518877519;
		default:
			break;
	}
	return 0;
}

var func_688(int iParam0)
{
	iVar0 = func_854(0, (func_853() - 1), &iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_855(iVar0);
}

int func_689(int iParam0)
{
	return &(Global_1109804->f_5737[iParam0]);
}

struct<8> func_690(int iParam0, int iParam1, bool bParam2)
{
	if (!func_856(iParam0))
	{
		return Var5;
	}
	if (!func_857(&Var0))
	{
		return Var5;
	}
	if (!func_858(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_858(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_858(Var0, &(Var0.f_1), 19, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_858(Var0, &(Var0.f_1), 21, iParam1, 0, bParam2))
	{
		if (bParam2)
		{
		}
		return Var5;
	}
	return func_859(Var0);
}

bool func_691(int iParam0)
{
	return func_82(Global_1211392->f_1196, iParam0);
}

bool func_692()
{
	return Global_263042[&Global_1296859] > 2;
}

bool func_693(int iParam0, int iParam1)
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

struct<2> func_694()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_365(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_365(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

bool func_695(int iParam0)
{
	if (func_860(iParam0) == -1)
	{
		return false;
	}
	return true;
}

bool func_696(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_697(int iParam0)
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

void func_698(int iParam0, int iParam1)
{
	if (!func_481(iParam0))
	{
		return;
	}
	if (func_68() != -1)
	{
		Global_17411[iParam0] = (Global_17411[iParam0] || iParam1);
		return;
	}
	Global_39.f_4667[iParam0] = (Global_39.f_4667[iParam0] || iParam1);
}

void func_699(int iParam0, bool bParam1)
{
	if (!func_481(iParam0))
	{
		return;
	}
	if (func_861(iParam0))
	{
		return;
	}
	func_698(iParam0, 2);
	if (bParam1)
	{
		if (!func_192(0, 0, 1))
		{
			if (func_68() == -1)
			{
				func_702(1, 6);
			}
			else
			{
				func_862(1, 1017438712);
			}
		}
	}
}

bool func_700(int iParam0)
{
	if (!func_481(iParam0))
	{
		return false;
	}
	return func_482(iParam0, 1, 1);
}

void func_701(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_481(iParam0))
	{
		return;
	}
	if (func_700(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_478(iParam0);
	}
	if (!bParam1)
	{
		func_863(iParam0);
	}
	func_698(iParam0, 1);
	func_699(iParam0, 1);
	if (bParam2)
	{
		if (!func_192(0, 0, 1))
		{
			func_702(1, 6);
		}
	}
}

void func_702(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_864(&Global_0, 8);
	}
	if (!func_865() || func_68() != -1)
	{
		return;
	}
	func_864(&Global_0, 1);
}

float func_703(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		fVar3 = (fVar2 - fVar1);
		return (fVar3 / 2f);
	}
	switch (iParam0)
	{
		case 0:
			fVar1 = to_float(get_entity_health(Global_34));
			fVar2 = to_float(get_entity_max_health(Global_34, false));
			iVar0 = 50;
			break;
		case 1:
			fVar1 = _get_ped_stamina(Global_34);
			fVar2 = _get_ped_max_stamina(Global_34);
			iVar0 = 8;
			break;
		case 2:
			fVar1 = _0xa81d24ae0af99a5e(get_player_index());
			fVar2 = _0x592f58bc4d2a2cf3(get_player_index(), 0);
			iVar0 = 14;
			break;
	}
	fVar4 = (IntToFloat((iVar0 * iParam1)) + fVar1);
	if (fVar4 > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	else
	{
		fVar3 = (fVar4 - fVar1);
	}
	return (fVar3 / 2f);
}

void func_704(int iParam0)
{
	iVar0 = player_ped_id();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = _0x16f2c8c084ab2092(iVar0);
	}
	iVar1 = func_866(2);
	func_867(to_float((iParam0 * iVar1)), 0);
}

void func_705(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = 10;
	}
	iVar0 = func_868(2);
	func_869(to_float((iParam0 * iVar0)), 0, bParam1);
}

void func_706(int iParam0)
{
	iVar0 = player_ped_id();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = _0xfc3b580c4380b5b7(iVar0);
	}
	iVar1 = func_870(2);
	func_871(to_float((iParam0 * iVar1)), 0);
}

float func_707(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 100f);
	}
	return ((fParam0 / 8f) * 100f);
}

void func_708(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (bParam4)
	{
		fParam1 = func_872(iParam0, fParam1, 1);
	}
	func_874(iParam0, (func_873(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_709(float fParam0, int iParam1)
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

int func_710(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(player_ped_id()))
	{
		return 0;
	}
	return func_875(iParam0, fParam1, bParam2, bParam3);
}

void func_711(float fParam0, bool bParam1)
{
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (func_876())
	{
		func_877(fParam0, 0);
	}
	if (bParam1)
	{
		Global_17411.f_55.f_2439.f_41++;
		if (5 == Global_17411.f_55.f_2439.f_41)
		{
			func_152(109, 0);
		}
	}
}

bool func_712()
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

int func_713(int iParam0)
{
	iVar0 = func_336(func_878(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1952637->f_1675.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_714(int iParam0, int iParam1)
{
	iVar1 = func_336(func_878(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1952637->f_1675.f_1[iVar1] != 0 && &Global_1952637->f_1675.f_1[iVar1] != &Global_1952637->f_83[iVar1])
	{
		iVar0 = &Global_1952637->f_1675.f_1[iVar1];
		if (func_133(iVar0) == iParam0 || (iParam0 == 81053684 && func_111(iVar0, 160827531)))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_715(int iParam0)
{
	return &(Global_1952637->f_1675.f_1[func_336(iParam0, 1)]);
}

int func_716()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_3334.f_26)
	{
		iVar1 = &Global_1952637->f_3334[iVar0];
		if (func_133(iVar1) == -999503751)
		{
			if (func_879() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_717(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		iParam1 = func_880(0);
	}
	if (func_133(iParam0) == -999503751 && func_719(iParam0) != -1)
	{
		return true;
	}
	if (iParam1 == 2026485318)
	{
		return func_111(iParam0, -287432114);
	}
	else if (iParam1 == 24043185)
	{
		return func_111(iParam0, -133342564);
	}
	return false;
}

bool func_718(int iParam0, int iParam1, bool bParam2)
{
	Var0 = { func_155(iParam0, bParam2, 0) };
	Var5 = { func_156(iParam0, Var0, Var0.f_4, bParam2) };
	if (func_343(iParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_210(bParam2), &Var5, iParam1);
	return true;
}

int func_719(int iParam0)
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

bool func_720(int iParam0, int iParam1)
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

struct<8> func_721(int iParam0)
{
	if (func_720(4, iParam0))
	{
		return *Global_17411.f_2625[iParam0];
	}
	StringCopy(&cVar0, _get_label_text_by_hash(func_881(iParam0)), 64);
	return cVar0;
}

void func_722()
{
	Global_1952637->f_1057 = 0;
}

int func_723(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	if (func_111(iParam0, 160827531) || func_133(iParam0) == 81053684)
	{
		return 1;
	}
	return 0;
}

void func_724(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bVar0 = false;
	switch (func_133(iParam0))
	{
		case -2061583405:
			bVar0 = func_882(iParam0, &(Global_1952637->f_3334.f_28), bParam4);
			break;
		case 81053684:
			bVar0 = func_882(iParam0, &(Global_1952637->f_3334.f_30), bParam4);
			break;
		case -999503751:
			bVar0 = func_882(iParam0, &(Global_1952637->f_3334.f_27), bParam4);
			if (func_111(iParam0, -166674229))
			{
				Var1.f_1 = 39;
				if (func_883(&Var1, iParam0, &uVar120, 0, 1, 0, 0, 0, 1, 8))
				{
					iVar121 = 0;
					while (iVar121 < 39)
					{
						iVar122 = &Var1.f_1[iVar121];
						if (func_105(iVar122, 0))
						{
							func_724(iVar122, 0, 0, 0, 0);
						}
						iVar121++;
					}
				}
			}
			break;
		case -525676072:
			bVar0 = func_882(iParam0, &(Global_1952637->f_3334.f_29), bParam4);
			break;
		case -1719060085:
			bVar0 = func_882(iParam0, &(Global_1952637->f_3334.f_31), bParam4);
			break;
		case 119907797:
			bVar0 = func_882(iParam0, &(Global_1952637->f_3334.f_32), bParam4);
			break;
		case 1388798186:
			bVar0 = func_882(iParam0, &(Global_1952637->f_3334.f_33.f_7), bParam4);
			break;
		default:
			if (func_111(iParam0, 160827531))
			{
				bVar0 = func_882(iParam0, &(Global_1952637->f_3334.f_30), bParam4);
			}
			break;
	}
	if (bParam3 && bVar0)
	{
		func_555(0, iParam0);
	}
	if (bParam2)
	{
		func_554();
	}
	if (bParam1)
	{
		func_556(0, 0);
	}
}

int func_725(int iParam0)
{
	func_884(&uVar1, 9044914, iParam0, 0, 0, 0);
	_0x91ded5dd64bb2691(&uVar1);
	while (_0xed4413cee1bf142c(&uVar1))
	{
		if (!_0x44b3a36933ac009c(&uVar0, &uVar1, -1168434056))
		{
			return 0;
		}
		return uVar0;
	}
	return 0;
}

bool func_726(int iParam0, int iParam1)
{
	iVar0 = func_133(&(Global_1952637->f_1675.f_1[iParam1]));
	if (func_133(iParam0) == iVar0)
	{
		return true;
	}
	else if (iParam0 == -992705550)
	{
		return func_111(&(Global_1952637->f_1675.f_1[iParam1]), 160827531);
	}
	else if (iParam0 == 491480257)
	{
		return (iVar0 == -2061583405 || iVar0 == 2086043523);
	}
	else if (iParam0 == -1789518572)
	{
		return iVar0 == -923693316;
	}
	else if (iParam0 == -275040139)
	{
		return iVar0 == 1882579758;
	}
	return false;
}

void func_727(var uParam0, int iParam1)
{
	Var2 = 39;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		*Global_1952637->f_2897.f_35[iVar0] = { Var2 };
		if (iVar0 < *uParam0)
		{
			if ((func_885(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_885(uParam0->f_2[iVar0], 1))
				{
					func_886(uParam0->f_2[iVar0], 2, 6);
				}
				*Global_1952637->f_2897.f_35[iVar1] = { *uParam0->f_2[iVar0] };
				iVar1++;
				*uParam0->f_2[iVar0] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*uParam0->f_2[iVar0] = { *Global_1952637->f_2897.f_35[iVar0] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_728(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 16)
	{
		return;
	}
	if (!func_887(uParam0, 1))
	{
		func_888(uParam0, 1);
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

void func_729(var uParam0, var uParam1)
{
	Var0 = func_889(0);
	Var0.f_1 = uParam1;
	Var0.f_3 = 0;
	_0x91ded5dd64bb2691(&Var0);
	if (!_0xed4413cee1bf142c(&Var0))
	{
		return;
	}
	while (_0xed4413cee1bf142c(&Var0))
	{
		if (!_0x44b3a36933ac009c(&iVar7, &Var0, 1409451727))
		{
		}
		else
		{
			iVar8 = func_336(iVar7, 1);
			if (iVar8 < 0 || iVar8 > 39)
			{
			}
			else if (!_0x44b3a36933ac009c(&iVar7, &Var0, 1373051002))
			{
			}
			else if (&uParam0->f_1[iVar8] != iVar7)
			{
			}
			else
			{
				uParam0->f_1[iVar8] = &Global_1952637->f_83[iVar8];
				uParam0->f_1[iVar8]->f_1 = 0;
				func_565(iVar8, 0);
			}
		}
	}
}

void func_730(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == -230310728 || iParam1 == 1326838792)
	{
		uParam0->f_1[iParam2]->f_1 = 289238755;
	}
	else if (uParam0->f_1[iParam2]->f_1 == 289238755)
	{
		uParam0->f_1[iParam2]->f_1 = 1155669136;
	}
	iVar0 = 10;
	iVar1 = func_133(&(uParam0->f_1[iVar0]));
	if (iVar1 == 119907797)
	{
		if (func_111(iParam1, 458991572))
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_565(iVar0, iParam3);
		}
	}
	else if (iVar1 == 2086043523)
	{
		if (func_111(iParam1, -93469181))
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_565(iVar0, iParam3);
		}
	}
	iVar0 = 11;
	if (func_111(&(uParam0->f_1[iVar0]), -1446529222) && func_111(iParam1, -93469181))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 12;
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_111(iParam1, -93469181)) && func_111(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
}

void func_731(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == 1733464892)
	{
		uParam0->f_1[iParam2]->f_1 = 289238755;
	}
	else if (uParam0->f_1[iParam2]->f_1 == 289238755)
	{
		uParam0->f_1[iParam2]->f_1 = 1155669136;
	}
}

void func_732(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2)
	{
		return;
	}
	iVar0 = 12;
	iVar1 = &uParam0->f_1[iVar0];
	if (!func_339(iVar1, 0) && func_111(iVar1, -180472385))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 10;
	iVar1 = &uParam0->f_1[iVar0];
	if ((iVar1 != &Global_1952637->f_83[iVar0] && func_133(iVar1) == 2086043523) && func_111(iParam1, -93469181))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
}

void func_733(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_133(iParam2))
	{
		case -525676072:
			func_890(uParam0, bParam1, iParam3);
			break;
		case 2086043523:
			func_891(uParam0, bParam1, iParam3);
			break;
	}
}

void func_734(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 18;
	if (func_133(&(uParam0->f_1[iVar0])) == 912453393)
	{
		func_565(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	if (func_133(iParam2) == 81053684 || func_111(iParam2, 160827531))
	{
		func_892(uParam0, bParam1, iParam3);
	}
	iVar0 = 11;
	if (func_111(iParam2, -180472385) && !func_339(&(uParam0->f_1[iVar0]), 0))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
	if (func_111(iParam2, -1303648999))
	{
		return;
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0]->f_1 == 1530758430)
	{
		uParam0->f_1[iVar0]->f_1 = 1155669136;
		func_565(iVar0, iParam3);
		iVar0 = 20;
		if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
		{
			func_565(iVar0, iParam3);
		}
	}
	else if (uParam0->f_1[iVar0]->f_1 == 1334603721)
	{
		uParam0->f_1[iVar0]->f_1 = -1539589426;
		func_565(iVar0, iParam3);
		iVar0 = 20;
		if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
		{
			func_565(iVar0, iParam3);
		}
	}
}

void func_735(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = 12;
	iVar1 = 0;
	if (func_557() == 24043185)
	{
		iVar1 = 1;
	}
	if (2056714954 == _get_ped_component_category(&(uParam0->f_1[iVar0]), iVar1, true))
	{
		if ((bParam1 || func_111(iParam2, 1872585553)) || func_133(iParam2) == 1882579758)
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_565(iVar0, iParam4);
		}
	}
	iVar0 = 17;
	if (!func_339(&(uParam0->f_1[iVar0]), 0) && func_111(iParam2, 1467402774))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam4);
	}
	iVar0 = 29;
	if (!func_339(&(uParam0->f_1[iVar0]), 0) && func_111(iParam2, 1126863852))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam4);
	}
	iVar0 = 34;
	iVar2 = &uParam0->f_1[iVar0];
	if (func_133(iVar2) == 1759215194 && func_133(iParam2) == 1882579758)
	{
		uParam0->f_1[iVar0] = func_725(iParam2);
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam4);
	}
	else if (func_893(iVar2, bParam1, iVar1))
	{
		iVar2 = &uParam0->f_1[18];
		iVar3 = 0;
		if (func_133(iVar2) == 912453393 && func_894(32))
		{
			iVar3 |= 1;
		}
		if (func_111(iParam2, 525391395))
		{
			iVar3 |= 2;
		}
		iVar2 = func_895(Global_1952637->f_83[iVar0]->f_9, iVar3);
		if (iVar2 != 0)
		{
			uParam0->f_1[iVar0] = iVar2;
			uParam0->f_1[iVar0]->f_1 = 0;
			func_565(iVar0, iParam4);
			func_743(uParam0, 0, iVar2, iParam4);
		}
	}
	iVar0 = 21;
	if (func_339(&(uParam0->f_1[iVar0]), 0))
	{
		return;
	}
	func_565(iVar0, iParam4);
	if (uParam0->f_1[iParam3]->f_1 == -1539589426 || uParam0->f_1[iParam3]->f_1 == 1334603721)
	{
		return;
	}
	if (uParam0->f_1[iParam3]->f_1 == 0 || uParam0->f_1[iParam3]->f_1 == 1155669136)
	{
		if (func_746(iParam2, iVar1, -1539589426) >= 0)
		{
			uParam0->f_1[iParam3]->f_1 = -1539589426;
			return;
		}
	}
	if (func_746(iParam2, iVar1, 1334603721) >= 0)
	{
		uParam0->f_1[iParam3]->f_1 = 1334603721;
	}
}

void func_736(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_111(iParam2, 358628372))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
}

void func_737(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	switch (func_133(iParam2))
	{
		case 698653232:
			func_896(uParam0, bParam1, iParam2, iParam4);
			break;
		case 912453393:
			func_897(uParam0, bParam1, iParam3, iParam4);
			break;
	}
}

void func_738(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_133(iParam2))
	{
		case -1080198344:
		case 1868067663:
			func_898(uParam0, bParam1, iParam2, iParam3);
			break;
		case 294388917:
			func_899(uParam0, bParam1, iParam2, iParam3);
			break;
	}
}

void func_739(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 18;
	if (func_133(&(uParam0->f_1[iVar0])) == 912453393)
	{
		func_565(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar1 = 0;
	if (func_557() == 24043185)
	{
		iVar1 = 1;
	}
	iVar0 = 23;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_111(iParam2, 1537768121))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_565(iVar0, iParam3);
		if (uParam0->f_1[iVar0]->f_1 == -1539589426 || uParam0->f_1[iVar0]->f_1 == 1334603721)
		{
			return;
		}
		if (uParam0->f_1[iVar0]->f_1 == 0 || uParam0->f_1[iVar0]->f_1 == 1155669136)
		{
			if (func_746(&(uParam0->f_1[iVar0]), iVar1, -1539589426) >= 0)
			{
				uParam0->f_1[iVar0]->f_1 = -1539589426;
				return;
			}
		}
		if (func_746(&(uParam0->f_1[iVar0]), iVar1, 1334603721) >= 0)
		{
			uParam0->f_1[iVar0]->f_1 = 1334603721;
		}
	}
}

void func_740(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 21;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_111(&(uParam0->f_1[iVar0]), 1537768121))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam2);
	}
}

void func_741(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	if (func_900(99217379) && func_111(iParam2, -1230785684))
	{
		iVar0 = 27;
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 32;
	if (!func_339(&(uParam0->f_1[iVar0]), 0) && func_111(iParam2, 1016511012))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
}

void func_742(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_111(&(uParam0->f_1[iVar0]), 358628372))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam2);
	}
}

void func_743(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_133(iParam2))
	{
		case 1759215194:
			func_901(uParam0, iParam3);
			break;
		case 1223979091:
		case 2047428024:
			func_902(uParam0, bParam1, iParam2, iParam3);
			break;
		case 684307653:
			func_903(uParam0, bParam1, iParam2, iParam3);
			break;
		case 502936876:
			func_904(uParam0, bParam1, iParam3);
			break;
		case -1740828670:
			func_905(uParam0, bParam1, iParam2, iParam3);
			break;
		case 344283346:
			func_906(uParam0, bParam1, iParam3);
			break;
	}
}

void func_744(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_133(iParam2))
	{
		case 1769055947:
			func_907(uParam0, bParam1, iParam2, iParam3);
			break;
		case -923693316:
			func_908(uParam0, bParam1, iParam2, iParam3);
			break;
	}
}

void func_745(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		func_909(uParam0, iParam3, 0, 1);
		return;
	}
	iVar0 = 35;
	iVar1 = &uParam0->f_1[iVar0];
	if ((func_111(iParam2, 813132419) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0]) && func_133(iVar1) == -923693316)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
	if ((func_111(iParam2, -1650340550) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0]) && func_133(iVar1) == 1769055947)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 37;
	if (func_111(iParam2, -1278198125) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
}

int func_746(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < _0xffcc2db2d9953401(iParam0, iParam1, 1))
	{
		if (_0x6243635af2f1b826(iParam0, iVar0, iParam1, 1) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_747(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_748(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1952637->f_1675.f_1[iParam0] = { *Global_1952637->f_1556.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	func_910(Global_1952637->f_1675.f_1[iParam0], iParam0, Global_17411.f_55.f_644.f_1777);
}

void func_749(int iParam0, bool bParam1, int iParam2)
{
	func_911(&(Global_1952637->f_1556), iParam0);
	func_912(2, iParam0, 6);
	if (bParam1)
	{
		func_556(0, 1);
	}
}

int func_750(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_834(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_751(int iParam0)
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
	if (func_368(iParam0) == -785841056)
	{
		return 37;
	}
	return 23;
}

bool func_752(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

bool func_753()
{
	iVar0 = get_frame_count();
	return (Global_1051439->f_3259 == iVar0 || Global_1051439->f_3259 == (iVar0 - 1));
}

void func_754(int iParam0)
{
	Global_1051439->f_3628 = (Global_1051439->f_3628 || iParam0);
}

bool func_755()
{
	return (_does_anim_scene_exist(Global_26538) && _is_anim_scene_started(Global_26538, false));
}

int func_756()
{
	return Global_1051252->f_12;
}

char* func_757()
{
	return "unnamed";
}

int func_758(int iParam0)
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

bool func_759(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_913(36, iParam0);
}

int func_760(int iParam0)
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

bool func_761(int iParam0)
{
	if (func_914(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_915(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

bool func_762(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

bool func_763(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 28, uParam2, 0);
}

bool func_764(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 25, uParam2, 0);
}

bool func_765(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

void func_766(var uParam0, int iParam1)
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

int func_767(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_916(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_917(uParam2, iParam0, Var1);
	return 1;
}

bool func_768(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_68() == -1)
	{
		if (func_384(iParam0) && func_918(iParam0))
		{
			func_919(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_769(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_920(iParam0, iParam1);
	Var0 = { func_155(iParam0, 0, 1) };
	iVar5 = func_493(iParam0, &Var0, 0, 0);
	iVar6 = func_458(iParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_111(iParam0, -2051813666))
		{
			func_152(674, 1);
		}
		else if (func_68() == -1)
		{
			func_152(673, 0);
		}
	}
	if (func_921(iParam0, &Var0, *iParam1, 0, 0, -1, 0))
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

void func_770(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_922())
	{
		return;
	}
	switch (func_10(iParam0, -949239683))
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

bool func_771(int iParam0)
{
	if (!func_923(iParam0))
	{
		return false;
	}
	return func_924(iParam0);
}

void func_772(int iParam0)
{
	if (!func_923(iParam0))
	{
		return;
	}
	func_925(iParam0);
	func_926(iParam0);
}

void func_773(int iParam0)
{
	if (func_111(iParam0, -1522723129))
	{
		func_927(-848633709, 0, 255, 0, 0);
	}
	else if (func_111(iParam0, -283942357))
	{
		func_927(-981153234, 0, 255, 0, 0);
	}
	else if (func_111(iParam0, 683680997))
	{
		func_927(-756350192, 0, 255, 0, 0);
	}
	else if (func_111(iParam0, 1307628809))
	{
		func_927(603094518, 0, 255, 0, 0);
	}
}

int func_774(int iParam0, bool bParam1)
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
	if (func_105(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_928(iVar0) || func_929(iVar0))
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

int func_775(int iParam0, bool bParam1)
{
	if (!func_105(iParam0, 0))
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

void func_776(int iParam0)
{
	if (Global_1572887->f_13 != -1)
	{
		return;
	}
	if (!func_674(iParam0))
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

bool func_777(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_155(iParam0, 0, 1) };
		if (func_378(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_379(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_156(iParam0, Var0, Var0.f_4, 0) };
				func_296(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_158(0))
	{
		_give_weapon_to_ped_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!has_ped_got_weapon(Global_34, iParam0, 0, false))
		{
			return false;
		}
		func_778(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
		func_930(iParam0, iParam1);
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

bool func_778(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_649(iParam0))
	{
		return false;
	}
	if (!func_158(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_34, iParam0, iParam1, iParam2);
	return true;
}

int func_779(int iParam0, int iParam1, int iParam2)
{
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_294(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_931(iParam0, iParam1, iParam2);
	}
	Var1 = { func_155(iParam0, 0, 1) };
	Var6 = { func_156(iParam0, Var1, Var1.f_4, 0) };
	return func_932(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

bool func_780(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_775(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_68() == -1)
		{
			func_776(iVar0);
			if (iParam1 == 1248274121)
			{
				func_933(iVar0);
			}
		}
		if (!func_921(iParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_919(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_934(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_777(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || _is_weapon_binoculars(iVar0))
			{
				func_777(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_lasso(iVar0))
			{
				func_777(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_935())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_936(iVar0))
				{
					func_777(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_777(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_937(Global_34, 2, 0, 1);
				if ((((func_674(iVar7) && !Global_26640) && iVar7 != iVar0) && !func_293(-1185145312, 1)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_34, iVar7);
				}
				if (func_674(iVar7) && func_293(-1185145312, 1))
				{
					if (!func_777(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_777(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_777(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_152(515, 1);
	}
	return true;
}

int func_781(int iParam0, int iParam1, int iParam2)
{
	if (!func_649(iParam0))
	{
		return 0;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_34, iParam0);
	if (func_674(iVar4))
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
		func_791(func_938(iParam0), func_274(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_158(0))
	{
		if (func_778(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_779(iParam0, *iParam1, iParam2);
	}
	return 0;
}

struct<2> func_782(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

bool func_783()
{
	return false;
}

int func_784(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	if (func_68() == 0)
	{
		func_795(iParam0, 0);
		return 0;
	}
	iVar0 = func_939(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_940(iVar0, sParam4, iParam5, 0);
	}
	func_941(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_785(int iParam0)
{
}

void func_786(int iParam0)
{
}

void func_787(int iParam0)
{
}

void func_788(int iParam0)
{
}

void func_789()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_790(int iParam0, int iParam1)
{
	func_612(iParam0, iParam1, &uVar0);
}

void func_791(int iParam0, int iParam1, bool bParam2)
{
	func_371(iParam0, &iVar0, &iVar1);
	if (!func_372(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_588(iParam0, 1024))
	{
		return;
	}
	func_373(iVar0, iVar1);
	Global_1904651->f_33[iParam0]->f_3[0] = iParam1;
	Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 2;
}

void func_792(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_371(iParam0, &iVar0, &iVar1);
	if (!func_372(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_588(iParam0, 1024))
	{
		return;
	}
	func_373(iVar0, iVar1);
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

void func_793(int iParam0)
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

void func_794(int iParam0)
{
	if (func_68() != -1)
	{
		return;
	}
}

int func_795(int iParam0, int iParam1)
{
	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_766(&Var4, 1356624740);
	return func_767(iParam0, &Var4, &uVar0, iParam1, 0);
}

void func_796(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			break;
	}
}

void func_797(int iParam0, char* sParam1)
{
	sVar0 = func_942(Global_1903071->f_37);
	func_626(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_943(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_798(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	iVar6 = _0x8870895ba5ed9385(iParam0, -442898163, &uVar0);
	if (iVar6 > 0)
	{
		return &(uVar0[0]);
	}
	return 0;
}

struct<10> func_799(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_800(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_801(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
	}
	if (func_111(iParam0, -393037696))
	{
		return 1;
	}
	return 0;
}

int func_802(int iParam0)
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

int func_803(int iParam0, int iParam1)
{
	iVar41 = 0;
	if (_item_database_fillout_tag_data(iParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if (Var0[iVar43]->f_1 == iParam1)
			{
				iVar41 = &Var0[iVar43];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

char* func_804(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_274(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

bool func_805(int iParam0)
{
	if (func_133(iParam0) == -126813555 || func_133(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

char* func_806(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_442(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

void func_807(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_808(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_944(_inventory_get_ped_inventory_id(iParam0), iParam1, iParam2, bParam3, iParam4);
}

bool func_809(int iParam0)
{
	if (!func_945(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 77)
	{
		iVar1 = func_946(iVar0, 1);
		iVar2 = iVar1;
		if (iParam0 == iVar2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_810(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_238(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_947(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = func_948(iVar0, 1);
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
				if (!func_949(iVar3, 0))
				{
				}
				Global_1904087->f_402[iVar1] = (&Global_1904087->f_402[iVar1] - iVar3);
				return true;
			}
		}
	}
	return false;
}

bool func_811(int iParam0, int iParam1, bool bParam2)
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
	return func_950(iVar0, bParam2) >= func_951(bParam2);
}

int func_812(int iParam0, int iParam1, int iParam2)
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

void func_813(var uParam0, var uParam1)
{
	_copy_memory(uParam1, uParam0, 96);
}

int func_814(int iParam0)
{
	if (func_504(iParam0, &iVar1))
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

int func_815(int iParam0)
{
	switch (iParam0)
	{
		case -151356522:
		case 1006434513:
			return 158537911;
		case 306916738:
		case 1481288777:
			return -1062286052;
		case -1824685471:
		case 724563284:
			return -785236358;
		case 803930024:
		case 1917027383:
			return -1450728546;
		case -855052577:
		case 1111663869:
			return -1295437670;
		case -5376850:
		case 1425358430:
			return 1767657451;
		case 1297433586:
		case 1338219162:
			return -1222065966;
		case -1538397860:
		case -293259613:
			return -897542141;
		case 193037129:
		case 588902637:
			return -1458047097;
		case -861419347:
		case 1416872916:
			return -1713740144;
		case 357567274:
		case 1500919793:
			return -1518011865;
		case 683583793:
		case 1042542561:
			return -1268607968;
		case -1202625002:
		case 56657913:
			return -1666587802;
		case 485620834:
		case 1570826681:
			return 759956813;
		case 727522818:
		case 785407605:
			return -129858069;
		case -1457420231:
		case 563848610:
		case 1432949803:
			return 783089120;
		case -2120099592:
		case -983831788:
		case 1848456619:
			return 1516275256;
		case -1882344824:
		case -1640704323:
		case -1134447619:
			return 1339926283;
		case -1323780599:
		case -532099639:
		case 905173572:
			return -1273168083;
		case -867655342:
		case 80093385:
		case 991092621:
			return 1677450645;
		case -1956973834:
		case -738999731:
		case 566023444:
			return -1906789582;
		case -1905834457:
		case -110353515:
		case 59384454:
			return 613321581;
		case 444160793:
		case 1205453831:
		case 1815539745:
			return -581264978;
		case -1969404854:
		case 183958842:
		case 1948158930:
			return 1075520399;
		case -1586332975:
		case -832850511:
		case 1857501916:
			return -2045434273;
		case -1888757291:
		case 894877715:
		case 995863399:
			return 1220494366;
		case -1974778216:
		case -381243381:
		case -210676278:
			return 1798104140;
		case -529454751:
		case -246542229:
		case 1582593525:
			return 1735171971;
		case -1030182399:
		case 1191274340:
		case 1613453781:
			return 843200239;
		case -1464585113:
		case -610456424:
		case -284151822:
			return 562612880;
		case -1999212658:
		case -593435395:
		case -245335326:
			return 1948286917;
		case -1726572562:
		case -1017987135:
		case 2058475216:
			return -756458312;
		case -1909348309:
		case -1788506246:
		case 1761263432:
			return -705312705;
		case -1824684934:
		case -861854914:
		case -545447034:
			return 886059398;
		case -1290897778:
		case -350704687:
		case 765892430:
			return 2018874380;
		case -1080457688:
		case 416630124:
		case 1925728375:
			return -1181288733;
		case -1867587109:
		case 182158309:
		case 313332607:
			return -143561573;
		case -318217782:
		case -100913452:
		case 72307351:
			return 395345271;
		case -2123600216:
		case -146690338:
		case -124539232:
			return 725092441;
		case -1403731492:
		case -843795569:
		case 1496267371:
			return -391309265;
		case -1643384846:
		case -1424697962:
		case 915880986:
			return -1472826885;
		case -847420802:
		case -662726703:
		case 1760886130:
			return -43987615;
		case -1243653490:
		case -674590015:
		case 1988467099:
			return 597440621;
		case -1480423460:
		case 924882045:
		case 1415608202:
			return 1297902195;
		case -593311590:
		case 765085831:
		case 2094730711:
			return -1427844561;
		case -1310590179:
		case -244657613:
		case 992366796:
			return -1055552242;
		case -2026210939:
		case -1252472243:
		case -980016656:
			return -1847199476;
		case -2139551030:
		case -758005668:
		case 1607144310:
			return 2059272711;
		case -1722483116:
		case 871746664:
		case 1626949878:
			return -1071812884;
		case -1739474417:
		case -161524199:
		case 156979555:
			return -564442545;
		case -1228376431:
		case 322141256:
		case 1310120320:
			return -1923720634;
		case -1837840093:
		case 58634176:
		case 472142656:
			return -510702611;
		case 1001171791:
		case 1023080408:
		case 1210345318:
			return -1350246467;
		case -1422869557:
		case -1378812236:
		case 399553313:
			return 2104011353;
		case 651035143:
		case 1011003885:
		case 2013022756:
			return 1157397403;
		case -1186289527:
		case -39646495:
		case 877935135:
			return -1003674917;
		case -1347000030:
		case -505583391:
		case -46978629:
			return 365206122;
		case -1559227925:
		case 1562528937:
		case 1645887374:
			return 731537518;
		case -1471526136:
		case -1440794801:
		case 2144711797:
			return 524696643;
		case -905842006:
		case 718825539:
		case 2105263879:
			return 768271981;
		case -1060737769:
		case 553310445:
		case 987967309:
			return -1453172462;
		case -1838865945:
		case -1315697778:
		case 1418092959:
			return 1053713682;
		case -1772126340:
		case -935543049:
		case 1772544356:
			return -905573570;
		case -1670544626:
		case -266273535:
		case 1290960696:
			return 313926162;
		case 430397370:
		case 1717601520:
		case 1913571052:
			return 184430925;
		case -1356230367:
		case 16287711:
		case 1417331079:
			return 1623821606;
		case -884124246:
		case 746558492:
		case 1884610748:
			return -454952368;
		case -2040522845:
		case -1224510844:
		case -892811627:
			return -1315516671;
		case 339620522:
		case 1334837390:
		case 1770451033:
			return 238849077;
		case 756657535:
		case 862898895:
		case 1997845858:
			return -943371758;
		case -1930144509:
		case -1816929509:
		case 1846915545:
			return -10873946;
		case -1866642239:
		case -1508120809:
		case 1197831625:
			return -1523680261;
		case -1007681885:
		case 434924608:
		case 1666393029:
			return 915670869;
		case -1814593136:
		case -1188120304:
		case 1978734761:
			return -868889795;
		case -1015531226:
		case -824902132:
		case -581619522:
			return -1592962144;
		case -1011598664:
		case -177476569:
		case 980653387:
			return -262717989;
		case -899751553:
		case 431501574:
		case 1742676369:
			return 1398366530;
		case -1705499323:
		case 1489051752:
		case 2126795269:
			return -1427844561;
		case -2013445740:
		case -1927342740:
		case 102446365:
			return -998653403;
		case -1073614594:
		case -410900360:
		case 2060013792:
			return -946474842;
		case -1528265128:
		case -581931638:
		case 581032175:
			return -547357240;
		case -2048519180:
		case -142632645:
		case 1442025993:
			return -518676029;
		case 351048413:
		case 441195430:
		case 748665395:
			return -764925634;
		case -914779013:
		case -365111821:
		case 1323485831:
			return -946474842;
		case -936537044:
		case 101495387:
		case 157917500:
			return -2050228659;
		case -1836227998:
		case -1610329427:
		case 619479575:
			return -2087684184;
		case -1444929945:
		case -929322235:
		case -548076717:
			return 288450344;
		case -479485786:
		case -281211381:
		case 493457089:
			return 848629876;
		case -314933180:
		case 27838955:
		case 1641833719:
			return -439919843;
		default:
			break;
	}
	return -1740237568;
}

void func_816(int iParam0, int iParam1)
{
	if (func_68() == -1)
	{
		iVar0 = func_87(7);
	}
	else
	{
		iVar0 = _0xf49f14462f0ae27c(player_id());
	}
	func_812(iVar0, iParam0, iParam1);
}

bool func_817(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_344(0) };
	Var0.f_4 = 724026534;
	Var5 = { func_156(iParam0, Var0, Var0.f_4, 0) };
	return func_296(iParam0, &Var5, &Var0, iParam1, iParam3, bParam2, 0);
}

int func_818(int iParam0)
{
	if (Local_0.f_12)
	{
		func_952();
	}
	func_953(&Local_0);
	func_954(&Local_0);
	switch (iParam0)
	{
		case 1110710183:
			if (((((!func_955(&Local_0, -1837840093) || !func_955(&Local_0, 472142656)) || !func_955(&Local_0, 58634176)) || !func_955(&Local_0, -1426520714)) || !func_955(&Local_0, 337839068)) || !func_955(&Local_0, -1456429189))
			{
			}
			break;
		case 1755643085:
			if (((((!func_955(&Local_0, 1846915545) || !func_955(&Local_0, -1930144509)) || !func_955(&Local_0, -1816929509)) || !func_955(&Local_0, 1615521415)) || !func_955(&Local_0, 1018306802)) || !func_955(&Local_0, -1499066338))
			{
			}
			break;
		case -2011226991:
			if (((((!func_955(&Local_0, 619479575) || !func_955(&Local_0, -1836227998)) || !func_955(&Local_0, -1610329427)) || !func_955(&Local_0, 1171158615)) || !func_955(&Local_0, -1178150148)) || !func_955(&Local_0, -2123554124))
			{
			}
			break;
		case 252669332:
			if (((((!func_955(&Local_0, 877935135) || !func_955(&Local_0, -1186289527)) || !func_955(&Local_0, -39646495)) || !func_955(&Local_0, -886117938)) || !func_955(&Local_0, -784020903)) || !func_955(&Local_0, -1416771220))
			{
			}
			break;
		case -1003616053:
			if ((!func_955(&Local_0, 1001171791) || !func_955(&Local_0, 1023080408)) || !func_955(&Local_0, 1210345318))
			{
			}
			break;
		case 1205982615:
			if ((!func_955(&Local_0, -1252472243) || !func_955(&Local_0, -2026210939)) || !func_955(&Local_0, -980016656))
			{
			}
			break;
		case -407730502:
			if ((!func_955(&Local_0, -929322235) || !func_955(&Local_0, -1444929945)) || !func_955(&Local_0, -548076717))
			{
			}
			break;
		case 412583060:
			if ((!func_955(&Local_0, -1332163079) || !func_955(&Local_0, 1181652728)) || !func_955(&Local_0, 2053771712))
			{
			}
			break;
		case -2004866590:
			if ((!func_955(&Local_0, -1625078531) || !func_955(&Local_0, -802026654)) || !func_955(&Local_0, 1806153689))
			{
			}
			break;
		case -593056309:
			if ((!func_955(&Local_0, 1191274340) || !func_955(&Local_0, 1613453781)) || !func_955(&Local_0, -1030182399))
			{
			}
			break;
		case -1258513246:
			if ((!func_955(&Local_0, -591117838) || !func_955(&Local_0, -1730060063)) || !func_955(&Local_0, -237756948))
			{
			}
			break;
	}
	iVar0 = func_956(&Local_0);
	Local_0.f_12 = 1;
	return iVar0;
}

bool func_819(var uParam0)
{
	if (!func_957())
	{
		return false;
	}
	*uParam0 = Local_0.f_11;
	uParam0->f_1 = &Local_0[*uParam0];
	Local_0.f_11++;
	return true;
}

bool func_820(int iParam0, int iParam1, bool bParam2)
{
	*iParam1 = 0;
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	if (!bParam2 || func_257())
	{
		*iParam1 = func_343(iParam0, func_344(1), -2015960939, 1, 1, 0);
		return *iParam1 > 0;
	}
	return false;
}

bool func_821(struct<2> Param0, int iParam2, int iParam3)
{
	if (!func_366(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_958(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_822(int iParam0)
{
	if (func_105(iParam0, 0))
	{
		if (iParam0 == -1939515319)
		{
			return func_195(1048576);
		}
		if (func_111(iParam0, -1242251796))
		{
			if (func_111(iParam0, 2060589226))
			{
				return func_195(512);
			}
			return func_195(256);
		}
		else if (func_111(iParam0, 1919582297))
		{
			return func_195(4096);
		}
		else if (func_111(iParam0, 1647670816))
		{
			return func_195(16384);
		}
		else if (func_111(iParam0, 1147021565))
		{
			if (((iParam0 != -187002287 && iParam0 != -1004468971) && iParam0 != -1706054699) && iParam0 != -605086052)
			{
				return func_195(2);
			}
			else
			{
				return func_195(65536);
			}
		}
	}
	if (Global_1940144->f_12)
	{
		return func_195(256);
	}
	else
	{
		return func_195(2);
	}
	return func_195(2);
}

int func_823(int iParam0, int iParam1)
{
	iVar0 = _0xcc644bc1dd655269(iParam1, 0);
	if (!func_285(iVar0))
	{
		return 0;
	}
	iVar1 = _0xf540239f9937033b(iVar0, -489628648);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (_0xf27f01bbf5acd3f3(iVar0, -489628648, iVar2, Var3[iVar2]))
		{
			if (func_105(&(Var3[iVar2]), 0) && &Var3[iVar2] == iParam0)
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_824(int iParam0)
{
	if (!_0x7907969497ea92f5(Global_1940311->f_10931))
	{
		return 0;
	}
	Var0 = Global_1940311->f_10931;
	Var0.f_2 = 1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

int func_825(int iParam0)
{
	if (!_0x7907969497ea92f5(Global_1940311->f_10931))
	{
		return 0;
	}
	Var0 = Global_1940311->f_10931;
	Var0.f_2 = 0;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

int func_826(int iParam0)
{
	if (!_0x7907969497ea92f5(Global_1940311->f_10931))
	{
		return 0;
	}
	Var0 = Global_1940311->f_10931;
	Var0.f_2 = 4;
	Var0.f_3 = iParam0;
	_datafile_get_string(&uVar5, &Var0);
	return get_hash_key(&uVar5);
}

int func_827(int iParam0)
{
	if (!_0x7907969497ea92f5(Global_1940311->f_10931))
	{
		return 0;
	}
	Var0 = Global_1940311->f_10931;
	Var0.f_2 = 5;
	Var0.f_3 = iParam0;
	_datafile_get_string(&uVar5, &Var0);
	return get_hash_key(&uVar5);
}

bool func_828(int iParam0)
{
	if (func_959(iParam0))
	{
		return func_33(16);
	}
	else if (func_960(iParam0))
	{
		return func_961();
	}
	else if (func_962(iParam0))
	{
		return func_33(2);
	}
	return true;
}

int func_829(int iParam0)
{
	iVar0 = 2;
	if (!does_entity_exist(iParam0))
	{
		return iVar0;
	}
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
	return iVar0;
}

int func_830(int iParam0)
{
	switch (iParam0)
	{
		case 915880986:
			return 1908704263;
		case -1424697962:
			return -2112217546;
		case -1643384846:
			return -1745255175;
		case -847420802:
			return -237368063;
		case -662726703:
			return 1598967299;
		case 1760886130:
			return -1809464109;
		case -1243653490:
			return -165201917;
		case 1988467099:
			return 815147738;
		case -674590015:
			return 1287583539;
		case -1480423460:
			return -2126985311;
		case 924882045:
			return -1268352491;
		case 1415608202:
			return -1940225526;
		case -593311590:
			return -212307068;
		case 765085831:
			return 355421032;
		case 2094730711:
			return 1657729714;
		case -1310590179:
			return 1350692346;
		case 992366796:
			return -257850294;
		case -244657613:
			return -918541014;
		case -2026210939:
			return -947573795;
		case -1252472243:
			return -2068302756;
		case -980016656:
			return 1650829985;
		case -758005668:
			return -1808044035;
		case -2139551030:
			return -1952647655;
		case 1607144310:
			return 1293221440;
		case 80093385:
			return -642946194;
		case -867655342:
			return 819214075;
		case 991092621:
			return -858652427;
		case 871746664:
			return 395625948;
		case 1626949878:
			return -2063800922;
		case -1722483116:
			return -2117103642;
		case -1739474417:
			return -1583694057;
		case -161524199:
			return -1550918713;
		case 156979555:
			return 836539658;
		case 322141256:
			return 773062352;
		case 1310120320:
			return 1306100270;
		case -1228376431:
			return -1063194668;
		case 472142656:
			return 337839068;
		case -1837840093:
			return -1426520714;
		case 58634176:
			return -1456429189;
		case 1023080408:
			return -2032809253;
		case 1001171791:
			return 781728005;
		case 1210345318:
			return 1202409779;
		case 399553313:
			return 1520877300;
		case -1422869557:
			return -1736624361;
		case -1378812236:
			return 719465997;
		case 1011003885:
			return -361486526;
		case 651035143:
			return -765274711;
		case 2013022756:
			return -887205673;
		case -1186289527:
			return -784020903;
		case 877935135:
			return -886117938;
		case -39646495:
			return -1416771220;
		case 1582593525:
			return 1648676911;
		case -246542229:
			return 2103833563;
		case -529454751:
			return -831636369;
		case -46978629:
			return -852290935;
		case -1347000030:
			return -1870415962;
		case -505583391:
			return -788684109;
		case 1645887374:
			return 1416435145;
		case -1559227925:
			return -1483088274;
		case 1562528937:
			return -791867098;
		case -1471526136:
			return -1689552552;
		case -1440794801:
			return -1850779170;
		case 2144711797:
			return -121487803;
		case 718825539:
			return -1280499288;
		case 2105263879:
			return 820245961;
		case -905842006:
			return -889526774;
		case 1191274340:
			return -521025998;
		case 1613453781:
			return 1583031244;
		case -1030182399:
			return -2115599211;
		case 987967309:
			return -767176802;
		case -1060737769:
			return -750945821;
		case 553310445:
			return -2135749211;
		case -1838865945:
			return 2063108046;
		case 1418092959:
			return 1299111759;
		case -1315697778:
			return 1595322723;
		case -1772126340:
			return 784918835;
		case -935543049:
			return -676310905;
		case 1772544356:
			return -1719545959;
		case -266273535:
			return -2142423934;
		case -1670544626:
			return 747751566;
		case 1290960696:
			return -1942682403;
		case 1913571052:
			return 1018433784;
		case 1717601520:
			return -796185392;
		case 430397370:
			return -49549406;
		case 16287711:
			return 857788498;
		case -1356230367:
			return 1223148871;
		case 1417331079:
			return 939407236;
		case -884124246:
			return 1608778431;
		case 1884610748:
			return -2033821082;
		case 746558492:
			return -993340234;
		case -892811627:
			return -1861062075;
		case -2040522845:
			return 1645001514;
		case -1224510844:
			return 782371031;
		case 1334837390:
			return 1255529169;
		case 339620522:
			return 70898308;
		case 1770451033:
			return -1050350982;
		case 756657535:
			return 581781784;
		case 862898895:
			return -1363330863;
		case 1997845858:
			return -1780911288;
		case -1930144509:
			return 1018306802;
		case 1846915545:
			return 1615521415;
		case -1816929509:
			return -1499066338;
		case 1197831625:
			return 1711081908;
		case -1866642239:
			return -164705;
		case -1508120809:
			return -2044044647;
		case -1007681885:
			return -859583379;
		case 434924608:
			return -759504052;
		case 1666393029:
			return 700225820;
		case -1814593136:
			return 136458586;
		case -1188120304:
			return 799105420;
		case 1978734761:
			return -481655757;
		case -824902132:
			return 484160931;
		case -1015531226:
			return 1010699907;
		case -581619522:
			return 1550264248;
		case -861854914:
			return -371992731;
		case -545447034:
			return 1090294483;
		case -1824684934:
			return -274175035;
		case 980653387:
			return -1064414912;
		case -1011598664:
			return -2091620305;
		case -177476569:
			return -468684824;
		case 416630124:
			return 1668870118;
		case 1925728375:
			return -534004020;
		case -1080457688:
			return -2126925270;
		case 1742676369:
			return 2008380517;
		case -899751553:
			return -510697884;
		case 431501574:
			return -955209948;
		case 2126795269:
			return 1459836898;
		case 1489051752:
			return 303969766;
		case -1705499323:
			return -1707588662;
		case -2013445740:
			return -1224075784;
		case 102446365:
			return -1806671048;
		case -1927342740:
			return 749765420;
		case -410900360:
			return 462936163;
		case -1073614594:
			return -8888941;
		case 2060013792:
			return 1640227110;
		case 581032175:
			return -1241188722;
		case -581931638:
			return -1030962659;
		case -1528265128:
			return 112552982;
		case -142632645:
			return -1599578931;
		case -2048519180:
			return 1296331626;
		case 1442025993:
			return -1256398198;
		case 441195430:
			return 1297800973;
		case 748665395:
			return 1772582754;
		case 351048413:
			return -1459876379;
		case -914779013:
			return 1127406863;
		case 1323485831:
			return 1779996957;
		case -365111821:
			return 1885306923;
		case 101495387:
			return 1244107697;
		case 157917500:
			return -1201555940;
		case -936537044:
			return -668487833;
		case -1610329427:
			return -1178150148;
		case -1836227998:
			return 1171158615;
		case 619479575:
			return -2123554124;
		case -1444929945:
			return 1806705761;
		case -929322235:
			return 404581836;
		case -548076717:
			return 987197489;
		case -281211381:
			return -1259715647;
		case 493457089:
			return -1716717840;
		case -479485786:
			return -196277007;
		case 27838955:
			return -2064457926;
		case 1641833719:
			return 561267454;
		case -314933180:
			return 686253083;
		case -827518870:
			return -2115566177;
		case 1367447057:
			return -1886936864;
		case -2092697195:
			return 777641606;
		case -2043601589:
			return 1815502722;
		case 1758585485:
			return 1518910503;
		case 1527400190:
			return 1020297399;
		case 1493601140:
			return -438328437;
		case -885592109:
			return -132069363;
		case -1282621313:
			return 1718756614;
		case -70954328:
			return 616254818;
		case -1378208045:
			return 1586020612;
		case 1450608653:
			return 1892902297;
		case 1543592331:
			return 1920759986;
		case 1842740532:
			return 1683741809;
		case 2004357248:
			return 403588059;
		case -229670230:
			return -352805801;
		case 546758456:
			return 1491466288;
		case 1888419655:
			return -1066678466;
		case -2040849706:
			return -375348364;
		case 2014346813:
			return -101301217;
		case -1638839614:
			return 213936563;
		case 1705186999:
			return 897866285;
		case -1821314478:
			return 1135507073;
		case -1434083213:
			return -1671125008;
		default:
			break;
	}
	return 0;
}

bool func_831(int iParam0)
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

int func_832()
{
	if (func_68() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

int func_833(int iParam0)
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

bool func_834(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_210(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_594(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

int func_835(int iParam0)
{
	if (!_item_database_fillout_satchel_data(iParam0, &uVar0))
	{
		return -1;
	}
	return uVar0;
}

struct<5> func_836(int iParam0)
{
	Var0 = { func_837(iParam0, 1328661203, func_385(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_837(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	if (!func_105(iParam1, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

void func_838(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 10)
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
		Var21[iVar0] = uParam2[iVar0];
		Var21[iVar0]->f_1 = 1f;
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
							if (&Var21[iVar0] == Var19)
							{
								Var21[iVar0]->f_1 = (Var21[iVar0]->f_1 + (Var19.f_1 - 1f));
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
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (Var21[iVar0]->f_1 != 1f)
		{
			(*uParam2)[iVar0]->f_1 = floor((IntToFloat((*uParam2)[iVar0]->f_1) * (Var21[iVar0]->f_1 / 1f)));
		}
		iVar0++;
	}
}

int func_839(int iParam0)
{
	return func_964(func_963(iParam0));
}

void func_840(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = -153135980;
			break;
		case 1:
			*uParam1 = 12851681;
			break;
		case 2:
			*uParam1 = 1386325051;
			break;
		case 3:
			*uParam1 = 43722464;
			break;
		case 4:
			*uParam1 = -581476215;
			break;
		case 5:
			*uParam1 = -1906982261;
			break;
		case 9:
			*uParam1 = -1035806543;
			break;
		case 10:
			*uParam1 = 1579284209;
			break;
		case 11:
			*uParam1 = -1172613177;
			break;
		case 12:
			*uParam1 = 495869290;
			break;
		case 16:
			*uParam1 = -1382561665;
			break;
		case 15:
			*uParam1 = 684071069;
			break;
		case 14:
			*uParam1 = 1357371535;
			break;
		case 13:
			*uParam1 = -1221865546;
			break;
	}
}

bool func_841(int iParam0, int iParam1)
{
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	if (func_842(iParam0))
	{
		return func_965(func_495(iParam0, 0), iParam1, 0);
	}
	return _0xdee7b3c76ed664be(iParam0, iParam1) > 0;
}

bool func_842(int iParam0)
{
	if (func_111(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_843(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_292(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_844(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_105(iParam0, 0))
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
		func_966(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_845(int iParam0)
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

int func_846(int iParam0)
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

bool func_847(var uParam0)
{
	if (!func_967(uParam0))
	{
		return false;
	}
	return _0x0137c77a2ec64536(uParam0);
}

int func_848(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_82(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_849(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_968(iParam0, iParam1, iParam2, iParam3);
}

bool func_850(struct<2> Param0, var uParam2)
{
	if (!func_366(Param0))
	{
		return false;
	}
	func_969(uParam2);
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

bool func_851(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

int func_852()
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

int func_853()
{
	return Global_1109804->f_5737.f_632;
}

int func_854(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam1)
	{
		return -1;
	}
	iVar0 = ((iParam0 + iParam1) / 2);
	if (*iParam2 < &Global_1109804->f_5737.f_451[iVar0])
	{
		return func_854(iParam0, (iVar0 - 1), iParam2);
	}
	if (*iParam2 > &Global_1109804->f_5737.f_451[iVar0])
	{
		return func_854(iVar0 + 1, iParam1, iParam2);
	}
	return iVar0;
}

var func_855(int iParam0)
{
	return Global_1109804->f_5737.f_451[iParam0]->f_1;
}

bool func_856(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 70);
}

bool func_857(var uParam0)
{
	uVar0 = func_970();
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

bool func_858(struct<5> Param0, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	Param0.f_2 = iParam6;
	Param0.f_3 = iParam7;
	Param0.f_4 = iParam8;
	if (!_datafile_get_data_node_index(bParam5, &Param0))
	{
		return false;
	}
	return true;
}

struct<8> func_859(struct<5> Param0)
{
	return func_971(Param0, 52, 1);
}

int func_860(int iParam0)
{
	switch (iParam0)
	{
		case -934992753:
		case -841961450:
		case 451529179:
		case 612720002:
		case 847313273:
			return 0;
		case -1640936415:
		case -1069379473:
		case -737921038:
		case -447391084:
		case -148898263:
			return 1;
		case -1577213137:
		case -1100096485:
		case -1094001463:
		case -863930314:
		case -862160776:
			return 2;
		case -1809751726:
		case 640288085:
		case 931276805:
		case 1236716654:
		case 1855821387:
			return 3;
		default:
			break;
	}
	return -1;
}

bool func_861(int iParam0)
{
	if (!func_481(iParam0))
	{
		return false;
	}
	return func_482(iParam0, 2, 1);
}

int func_862(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_972())
	{
		return 0;
	}
	if (!func_358())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_864(&Global_0, 8);
	}
	func_864(&Global_0, 1);
	return 1;
}

void func_863(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_152(239, 0);
			break;
		case 16:
			func_152(240, 0);
			break;
		case 34:
			func_152(241, 0);
			break;
		case 52:
			func_152(242, 0);
			break;
		case 2:
			func_152(243, 0);
			break;
		case 3:
			func_152(244, 0);
			break;
		case 53:
			func_152(245, 0);
			break;
		case 15:
			func_152(246, 0);
			break;
		case 24:
			func_152(247, 0);
			break;
		case 38:
			func_152(248, 0);
			break;
		case 27:
			func_152(249, 0);
			break;
		case 13:
			func_152(250, 0);
			break;
		case 19:
			func_152(251, 0);
			break;
		case 20:
			func_152(252, 0);
			break;
		case 35:
			func_152(253, 0);
			break;
		case 39:
			func_152(254, 0);
			break;
		case 50:
			func_152(255, 0);
			break;
		case 7:
			func_152(256, 0);
			break;
		case 21:
			func_152(257, 0);
			break;
		case 18:
			func_152(258, 0);
			break;
		case 6:
			func_152(259, 0);
			break;
		case 30:
			func_152(260, 0);
			break;
		case 49:
			func_152(261, 0);
			break;
		case 11:
			break;
		case 4:
			func_152(263, 0);
			break;
		case 8:
			func_152(264, 0);
			break;
		case 29:
			func_152(265, 0);
			break;
		case 32:
			func_152(266, 0);
			break;
		case 12:
			func_152(267, 0);
			break;
		case 28:
			func_152(268, 0);
			break;
		case 51:
			func_152(269, 0);
			break;
	}
}

void func_864(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_865()
{
	return true;
	if (Global_1572887->f_13 == 0)
	{
		return true;
	}
	return Global_39.f_1;
}

int func_866(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_973(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200->f_1546;
		case 1:
			return Global_1956200->f_1565.f_136;
		default:
			break;
	}
	return -1;
}

void func_867(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859->f_8;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	_0x835f131e7dc8f97a(iParam1, fParam0, 0, 0);
}

int func_868(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_973(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200->f_1546.f_1;
		case 1:
			return Global_1956200->f_1565.f_136.f_1;
		default:
			break;
	}
	return -1;
}

void func_869(float fParam0, bool bParam1, bool bParam2)
{
	iVar0 = player_id();
	if (fParam0 > 0f && func_974(iVar0))
	{
		return;
	}
	iVar1 = player_ped_id();
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	if ((_0xb16223cb7da965f0(iVar0) && fParam0 > 0f) && !bParam2)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = _0xab3773e7aa1e9dcc(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		_0x5a498fca232f71e1(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		_0x51345ae20f22c261(iVar0, fParam0, 0, 0, 1);
	}
	else
	{
		_0x200114e99552462b(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		_0x5a498fca232f71e1(iVar0, fVar2);
	}
}

int func_870(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_973(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200->f_1546.f_2;
		case 1:
			return Global_1956200->f_1565.f_136.f_2;
		default:
			break;
	}
	return -1;
}

void func_871(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859->f_8;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	_charge_ped_stamina(iParam1, fParam0);
}

float func_872(int iParam0, float fParam1, bool bParam2)
{
	iVar0 = func_975();
	func_976(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_977(iParam0, 2);
	if (func_979(iVar0, func_978(iParam0, 2), 1))
	{
		func_980(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_152(103, bParam2);
		return 0f;
	}
	func_981(iParam0, func_975(), 2);
	func_980(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_873(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_973(2);
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

int func_874(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (iParam5 == 2)
	{
		iParam5 = func_973(2);
	}
	iVar0 = player_ped_id();
	if (func_982(iVar0, iParam0, fParam1))
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
			func_983(iParam0, 7000, iParam5);
		}
		func_984(iVar0, iParam0, fParam1);
		func_985(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

int func_875(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	iVar1 = player_ped_id();
	if (fParam1 == -1f)
	{
		if (func_986(iParam0))
		{
			fParam1 = 30f;
		}
		else
		{
			fParam1 = 30f;
		}
	}
	else if (fParam1 <= 0f)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				sVar0 = func_987(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_704(-1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_987(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_988(1775828486);
			func_706(-1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_987(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_705(-1, 0);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2] = fParam1;
			break;
		case 19:
			func_988(350943398);
			func_989(0, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0]->f_1 = fParam1;
			break;
		case 18:
			func_989(1, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1]->f_1 = fParam1;
			break;
		case 20:
			func_989(2, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2]->f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_876()
{
	if (Global_1956200->f_1431.f_107 == -15)
	{
		return true;
	}
	return func_990(Global_1956200->f_1431.f_107, 0);
}

void func_877(float fParam0, int iParam1)
{
	fVar0 = func_991(13, 2);
	iVar1 = func_992(fVar0);
	fVar0 = (fVar0 + fParam0);
	fVar0 = func_993(fVar0, 0f, 100f);
	iVar2 = func_992(fVar0);
	if (iVar1 != iVar2)
	{
		Global_1956200->f_1431.f_107 = func_975();
		func_994(&(Global_1956200->f_1431.f_107), 0, 0, 1, 0, 0, 0, 0);
	}
	func_995(13, fVar0, 2);
	Global_1956200->f_1431.f_99 = iParam1;
}

int func_878(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_335(iVar0);
}

int func_879()
{
	return Global_1952637->f_1675;
}

int func_880(bool bParam0)
{
	Var0.f_9 = -1591664384;
	iVar14 = 0;
	Var15 = { func_156(889965687, func_344(1), 1034665895, 1) };
	iVar19 = func_570(Var15, 552979403, 1, -1);
	if (iVar19 != 0)
	{
		if (iVar19 == -1645121954)
		{
			iVar14 = 24043185;
		}
		else if (iVar19 == 897974632)
		{
			iVar14 = 2026485318;
		}
		return iVar14;
	}
	Var22 = { func_424(0, -1591664384, 552979403, -1591664384, 0, 0, 0) };
	if (func_425(&Var22, &iVar20, &iVar21, 1))
	{
		if (iVar21 > 0 && func_228(&Var0, 0, iVar20, iVar21))
		{
			if (Var0.f_4 == -1645121954)
			{
				iVar14 = 24043185;
			}
			else if (Var0.f_4 == 897974632)
			{
				iVar14 = 2026485318;
			}
			else
			{
				func_242(iVar20);
				return 0;
			}
			if (bParam0)
			{
				func_157(Var0, 1, 0);
			}
			func_242(iVar20);
			return iVar14;
		}
		func_242(iVar20);
	}
	return 0;
}

int func_881(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 217155793;
		case 2:
			return 97391779;
		case 3:
			return -808817534;
		case 4:
			return 1270922359;
		case 5:
			return -2011879201;
		case 6:
			return -1063340820;
		case 7:
			return 2127262701;
		case 8:
			return -1323870201;
		case 9:
			return 1632140501;
		case 10:
			return 967218463;
		default:
			break;
	}
	return 0;
}

bool func_882(int iParam0, var uParam1, bool bParam2)
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
		func_718(iParam0, 1, bParam2);
	}
	return bVar1;
}

bool func_883(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9)
{
	iVar11 = 0;
	Var4 = func_889(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	_0x91ded5dd64bb2691(&Var4);
	if (!_0xed4413cee1bf142c(&Var4))
	{
		return false;
	}
	_0xa63cd20f19b961ab(&bVar2, &Var4, -1516819610);
	_0x44b3a36933ac009c(&iVar0, &Var4, 2049745650);
	*uParam2 = bVar2;
	if (!bVar2 && !bParam3)
	{
		func_997(uParam0, func_996(iVar0), 1, 1, bParam7);
	}
	if (bVar2)
	{
		if (iParam9 != 8)
		{
			func_564(-1);
		}
		if (_0x44b3a36933ac009c(&iVar0, &Var4, -1212855483))
		{
			iVar11 = func_996(iVar0);
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
			iVar1 = func_336(iVar3, 1);
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
					func_998(iVar3, 16, 6);
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
							if (func_999(iVar3) && func_747(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1001(uParam0, iVar11, func_1000(iParam1) != 0, iParam9);
						}
					}
					else if ((((func_557() == 24043185 && &uParam0->f_1[iVar1] == &Global_1952637->f_83[iVar1]) && func_1000(&(uParam0->f_1[34])) == 0) && !func_329(32)) && !func_329(64))
					{
						uParam0->f_1[iVar1] = func_895(-1293064293, 0);
						uParam0->f_1[iVar1]->f_1 = 1155669136;
						func_567(uParam0, &(uParam0->f_1[iVar1]), iVar1, 0, iParam9);
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

void func_884(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_885(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_886(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_887(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_888(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_889(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_557();
	}
	if (iParam0 == 2026485318)
	{
		return -1806335803;
	}
	else if (iParam0 == 24043185)
	{
		return -971050805;
	}
	return 0;
}

void func_890(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	iVar1 = &uParam0->f_1[iVar0];
	if (func_111(iVar1, 160827531) || func_133(iVar1) == 81053684)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam2);
	}
}

void func_891(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 11;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_111(&(uParam0->f_1[iVar0]), -93469181))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam2);
	}
}

void func_892(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 10;
	if (-525676072 == func_133(&(uParam0->f_1[iVar0])))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam2);
	}
}

bool func_893(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_133(iParam0);
	if (iParam2 == 0)
	{
		return (iVar0 == 1759215194 || iVar0 == 344283346);
	}
	return (!bParam1 && (iVar0 == -1740828670 || iVar0 == 344283346));
}

bool func_894(int iParam0)
{
	return (Global_17411.f_55.f_644.f_1734 && iParam0) != 0;
}

int func_895(int iParam0, int iParam1)
{
	iVar2 = 0;
	Var3 = { func_424(0, -1591664384, iParam0, -1591664384, 0, 0, 0) };
	if (func_425(&Var3, &iVar0, &iVar1, 1))
	{
		if (iVar1 > 0)
		{
			iVar2 = func_1002(iVar0, iVar1, iParam1);
		}
		func_242(iVar0);
	}
	return iVar2;
}

void func_896(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_111(iParam2, -1527414429)) && !func_111(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 16;
	if ((uParam0->f_1[iVar0]->f_1 == 1530758430 || uParam0->f_1[iVar0]->f_1 == 1334603721) && func_111(iParam2, -985549034))
	{
		if (uParam0->f_1[iVar0]->f_1 == 1530758430)
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
			func_565(iVar0, iParam3);
		}
		else if (uParam0->f_1[iVar0]->f_1 == 1334603721)
		{
			uParam0->f_1[iVar0]->f_1 = -1539589426;
			func_565(iVar0, iParam3);
		}
	}
}

void func_897(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
	if (uParam0->f_1[iParam2]->f_1 != -2081918609)
	{
		iVar0 = 34;
		iVar1 = &uParam0->f_1[iVar0];
		if (func_111(iVar1, 1583165364))
		{
			uParam0->f_1[iParam2]->f_1 = -2081918609;
			func_565(iParam2, iParam3);
		}
		else
		{
			iVar0 = 35;
			iVar1 = &uParam0->f_1[iVar0];
			if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && 1769055947 == func_133(iVar1))
			{
				uParam0->f_1[iParam2]->f_1 = -2081918609;
				func_565(iParam2, iParam3);
			}
		}
	}
}

void func_898(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 16;
	func_565(iVar0, iParam3);
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_565(iVar0, iParam3);
	}
	if (bParam1)
	{
		iVar0 = 21;
		if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
		{
			func_565(iVar0, iParam3);
			func_739(uParam0, 0, &(uParam0->f_1[iVar0]), iParam3);
		}
		return;
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_111(iParam2, 1126863852))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_111(iParam2, -985549034))
	{
		if (uParam0->f_1[iVar0]->f_1 == 1530758430)
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
		}
		else if (uParam0->f_1[iVar0]->f_1 == 1334603721)
		{
			uParam0->f_1[iVar0]->f_1 = -1539589426;
		}
	}
	iVar0 = 12;
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_111(iParam2, -1527414429)) && !func_111(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
}

void func_899(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_565(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && !func_111(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 13;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 25;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_111(iParam2, 675650051))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
}

bool func_900(int iParam0)
{
	return &Global_1952637->f_1675.f_1[func_336(iParam0, 1)] != &Global_1952637->f_83[func_336(iParam0, 1)];
}

void func_901(var uParam0, int iParam1)
{
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam1);
	}
	iVar0 = 20;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_565(iVar0, iParam1);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0]->f_1 = 1155669136;
		func_565(iVar0, iParam1);
	}
}

void func_902(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	bVar2 = false;
	iVar3 = 0;
	if (func_557() == 24043185)
	{
		iVar3 = 1;
	}
	if (func_557() == 24043185)
	{
		iVar0 = 16;
		if (&uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0] && func_133(&(uParam0->f_1[18])) != 912453393)
		{
			uParam0->f_1[iVar0] = func_895(Global_1952637->f_83[iVar0]->f_9, 0);
			uParam0->f_1[iVar0]->f_1 = 0;
			func_565(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	func_565(iVar0, iParam3);
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_111(iParam2, -1473580422))
	{
		iVar1 = &uParam0->f_1[iVar0];
		if (func_111(iVar1, 1469783911))
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
		}
		else if (func_746(&(uParam0->f_1[iVar0]), iVar3, -2081918609) != -1)
		{
			uParam0->f_1[iVar0]->f_1 = -2081918609;
		}
		else
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
		}
	}
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		iVar1 = &uParam0->f_1[iVar0];
		if (func_133(iVar1) == 912453393)
		{
			bVar2 = true;
			if (func_111(iParam2, 1583165364))
			{
				uParam0->f_1[iVar0]->f_1 = -2081918609;
				func_565(iVar0, iParam3);
			}
		}
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if (iVar1 != &Global_1952637->f_83[iVar0])
	{
		if (func_133(iVar1) == 1868067663 && func_111(iParam2, -1016441646))
		{
			func_1003(uParam0, iVar0, iParam3);
		}
		else if (bVar2)
		{
			func_565(iVar0, iParam3);
		}
	}
	iVar0 = 34;
	if (1759215194 == func_133(&(uParam0->f_1[iVar0])))
	{
		func_565(16, iParam3);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_111(iParam2, -1650340550))
	{
		iVar1 = &uParam0->f_1[iVar0];
		if (func_133(iVar1) == 1769055947)
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_565(iVar0, iParam3);
		}
	}
}

void func_903(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	if (func_557() == 24043185)
	{
		iVar0 = 16;
		if (&uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0] && func_133(&(uParam0->f_1[18])) != 912453393)
		{
			uParam0->f_1[iVar0] = func_895(Global_1952637->f_83[iVar0]->f_9, 0);
			uParam0->f_1[iVar0]->f_1 = 0;
			func_565(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_111(&(uParam0->f_1[iVar0]), -2093434733))
		{
			func_909(uParam0, iParam3, 1, 0);
		}
		else if (func_111(iParam2, 1718965018))
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
		}
	}
	func_565(iVar0, iParam3);
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_111(iVar1, 1090938458)) && func_111(iParam2, 475297062))
	{
		func_1003(uParam0, iVar0, iParam3);
	}
}

void func_904(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	func_565(36, iParam2);
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam2);
	}
	if (func_557() == 24043185)
	{
		iVar0 = 16;
		if (&uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0])
		{
			iVar0 = 16;
			uParam0->f_1[iVar0] = func_895(Global_1952637->f_83[iVar0]->f_9, 0);
			uParam0->f_1[iVar0]->f_1 = 0;
			func_565(iVar0, iParam2);
		}
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if (iVar1 != &Global_1952637->f_83[iVar0] && func_111(iVar1, 353024991))
	{
		func_1003(uParam0, iVar0, iParam2);
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam2);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && 1769055947 == func_133(&(uParam0->f_1[iVar0])))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam2);
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam2);
	}
}

void func_905(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_133(iVar1) == 294388917)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 18;
	iVar1 = &uParam0->f_1[iVar0];
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_133(iVar1) == 912453393)
		{
			if (uParam0->f_1[iVar0]->f_1 != 1155669136)
			{
				uParam0->f_1[iVar0]->f_1 = 1155669136;
				func_565(iVar0, iParam3);
			}
		}
		else
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_565(iVar0, iParam3);
		}
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_111(&(uParam0->f_1[iVar0]), -2093434733))
		{
			func_909(uParam0, iParam3, 1, 0);
		}
		else if (func_111(iParam2, 1718965018))
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
		}
	}
}

void func_906(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_1003(uParam0, iVar0, iParam2);
	}
	iVar0 = 21;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam2);
	}
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam2);
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam2);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam2);
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam2);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam2);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_111(&(uParam0->f_1[iVar0]), -2093434733))
		{
			func_909(uParam0, iParam2, 1, 0);
		}
		else
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
			func_565(iVar0, iParam2);
		}
	}
}

void func_907(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 34;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0]->f_1 = 1155669136;
		func_565(iVar0, iParam3);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0]->f_1 = -2081918609;
		func_565(iVar0, iParam3);
	}
	iVar0 = 37;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_111(iParam2, -1278198125))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		iVar1 = &uParam0->f_1[iVar0];
		if (912453393 == func_133(iVar1) && uParam0->f_1[iVar0]->f_1 != -2081918609)
		{
			uParam0->f_1[iVar0]->f_1 = -2081918609;
			func_565(iVar0, iParam3);
		}
	}
}

void func_908(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 37;
	if (func_111(iParam2, -1278198125) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam3);
	}
}

void func_909(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 36;
	if (bParam2)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam1);
	}
	iVar0 = 37;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam1);
	}
	iVar0 = 38;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam1);
	}
	iVar0 = 35;
	if (bParam3 && -923693316 == func_133(&(uParam0->f_1[iVar0])))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_565(iVar0, iParam1);
	}
}

void func_910(var uParam0, int iParam1, int iParam2)
{
	*Global_17411.f_55.f_644.f_33[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
}

void func_911(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	Global_17411.f_55.f_644.f_33[iParam1]->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_910(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_912(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		Global_17411.f_55.f_644.f_33[iParam1] = (Global_17411.f_55.f_644.f_33[iParam1] || iParam0);
	}
}

bool func_913(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1004(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_1005())
	{
		return func_1004(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_1004(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_914(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_915(int iParam0)
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
		func_1006(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_1007(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

void func_916(var uParam0)
{
	func_766(uParam0, 143479330);
	if (func_557() == 2026485318)
	{
		func_766(uParam0, 617531372);
	}
	else
	{
		func_766(uParam0, 291123060);
	}
}

void func_917(var uParam0, int iParam1, struct<15> Param2)
{
	if (!func_1008(uParam0))
	{
		return;
	}
	if (Global_1293346->f_2538 < 20)
	{
		Global_1293346->f_2538++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1293346->f_2538.f_1[iVar0] = { *(Global_1293346->f_2538.f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_3.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1293346->f_2538.f_1[(Global_1293346->f_2538 - 1)]) = { Var1 };
}

bool func_918(int iParam0)
{
	if (func_68() != -1)
	{
		return false;
	}
	if (func_616(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_921(iParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_293(iParam0, 1);
}

void func_919(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_130(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_775(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_929(iVar0))
	{
		if (bParam2 || (!has_ped_got_weapon(Global_34, iVar0, 0, false) && func_270(iParam0, 0, 0, 0) == 0))
		{
			if (func_68() == -1)
			{
				func_776(iVar0);
			}
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_399(iParam0, iParam1, 0, 0, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_920(int iParam0, int iParam1)
{
	if (func_111(iParam0, 58855631))
	{
		func_622(iParam0, -915411861, iParam1, 1);
	}
}

bool func_921(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_1009(&iParam0);
	if (!func_105(iParam0, 0) && !func_510(func_290(iParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_294(iParam0, -455129387) == 0)
	{
		bParam3 = true;
	}
	if (func_384(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		Var0 = { func_376(0) };
		Var4.f_9 = -1591664384;
		if (!func_378(iParam0, &Var0, 1728382685, 0, 0))
		{
			return false;
		}
		else if (func_379(iParam0, &Var4, 1728382685))
		{
			return false;
		}
		if (func_377(iParam0, 1))
		{
			if (!func_378(iParam0, &Var0, -649335959, 0, 0))
			{
				return false;
			}
			else if (func_379(iParam0, &Var4, -649335959))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_493(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_343(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_922()
{
	if (((((!_0x3ab6c7b0bb0df4b1(Global_34, -1) && !is_ped_using_any_scenario(Global_34)) && !func_175(Global_34, 1369124074)) && !func_175(Global_34, 713668775)) && !_0xec7e480ff8bd0bed(Global_34)) && !is_ped_in_any_vehicle(Global_34, false))
	{
		return true;
	}
	return false;
}

bool func_923(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_924(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_39.f_3643[iVar1]), iVar2);
}

void func_925(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_39.f_3643[iVar1];
	set_bit(&uVar3, iVar2);
	Global_39.f_3643[iVar1] = uVar3;
}

void func_926(int iParam0)
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
			func_1010(1);
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
			func_1011(1);
			break;
		case 18:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1011(2);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1011(3);
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
			func_1012(1);
			break;
		case 33:
			func_1013(1);
			break;
		case 34:
			func_1014(1);
			break;
		case 35:
			break;
		case 36:
			func_1015(0);
			break;
		case 37:
			func_1016(0);
			break;
		case 38:
			func_1017(0);
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
			if (func_865() && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_1018("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_152(677, 0);
			break;
		case 3:
			if (func_865() && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_1018("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_152(678, 0);
			break;
		case 4:
			if (func_865() && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_1018("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_152(679, 0);
			break;
		case 5:
			if (func_865() && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_1018("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_152(680, 0);
			break;
		case 23:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			break;
		case 47:
			if (func_68() == -1)
			{
				if (!func_293(1013902307, 1))
				{
					func_779(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_68() == -1)
			{
				if (!func_293(1013902307, 1))
				{
					func_779(1013902307, 1, 752097756);
				}
				if (!func_293(142640135, 1))
				{
					func_779(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			if (func_68() == -1)
			{
				if (!func_293(786809402, 1))
				{
					func_779(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_68() == -1)
			{
				if (!func_293(786809402, 1))
				{
					func_779(786809402, 1, 752097756);
				}
				if (!func_293(-518019409, 1))
				{
					func_779(-518019409, 1, 752097756);
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

int func_927(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_1019(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

bool func_928(int iParam0)
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

bool func_929(int iParam0)
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

void func_930(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar2 = func_1020(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_34, iParam0, iVar2);
		if (get_max_ammo(Global_34, &iVar1, iParam0) && get_ammo_in_ped_weapon(Global_34, iParam0) > iVar1)
		{
			set_ped_ammo(Global_34, iParam0, iVar1);
		}
	}
}

int func_931(int iParam0, int iParam1, int iParam2)
{
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_294(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_155(iParam0, 0, 0) };
	if (func_921(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_158(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_210(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_932(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_921(iParam0, uParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_158(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_210(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_933(int iParam0)
{
	if (!is_weapon_valid(iParam0))
	{
		return;
	}
	if (!does_entity_exist(Global_34) || Global_1940258->f_6)
	{
		return;
	}
	if (_is_weapon_bow(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (_is_weapon_pistol(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (_is_weapon_revolver(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (_is_weapon_rifle(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (_is_weapon_shotgun(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	decor_set_int(Global_34, sVar0, iParam0);
	iVar2 = func_975();
	func_994(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_34, sVar1, iVar2);
}

int func_934(int iParam0)
{
	if (func_696(iParam0))
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

bool func_935()
{
	return false;
}

bool func_936(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_937(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_938(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_771(49))
			{
				if (!func_771(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_771(50))
			{
				if (!func_771(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

int func_939(int iParam0, bool bParam1, int iParam2)
{
	if (func_68() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_293(1811977508, 1))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	_0x48e4d50f87a96aa5(Global_34, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_105(iVar25, 0) && func_111(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_940(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		if (bParam3)
		{
			func_1021(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_626(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_941(int iParam0, bool bParam1, float fParam2, int iParam3)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1022() || func_1023())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_626(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_626(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, 752097756);
		func_391(func_627(1644987397), iVar1);
	}
}

char* func_942(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_943(int iParam0)
{
	if (!func_661(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

int func_944(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!func_105(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!func_1024(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { func_400(iParam1) };
	if (_stat_id_is_valid(&Var3))
	{
		if ((func_492(iParam0, iParam1) - iParam2) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var3, iParam2);
		}
		else if ((func_492(iParam0, iParam1) - iParam2) < 0)
		{
			func_944(iParam0, iParam1, func_270(iParam1, 0, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_1025(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!bParam3 && iParam1 != 1309979101)
	{
		func_399(iParam1, -iParam2, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

bool func_945(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	return (func_111(iParam0, 1686880204) || _0x4aef1fb5b9011d75(iParam0));
}

int func_946(int iParam0, int iParam1)
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

int func_947(int iParam0)
{
	if (!func_809(iParam0))
	{
		return 0;
	}
	return iParam0;
}

int func_948(int iParam0, int iParam1)
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

bool func_949(int iParam0, bool bParam1)
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
	if (func_950(iVar1, bParam1) == 0)
	{
		return false;
	}
	iVar2 = iParam0;
	if (iVar2 > func_950(iVar1, bParam1))
	{
		iVar2 = func_950(iVar1, bParam1);
	}
	if (!bParam1)
	{
		(*Global_1291106)[iVar1]->f_7 = ((*Global_1291106)[iVar1]->f_7 - iVar2);
	}
	else
	{
		(*Global_1291106)[iVar1]->f_8 = ((*Global_1291106)[iVar1]->f_8 - iVar2);
	}
	if (func_950(iVar1, bParam1) < 0)
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
	else if (func_950(iVar1, bParam1) > func_951(bParam1))
	{
		if (!bParam1)
		{
			(*Global_1291106)[iVar1]->f_7 = func_951(bParam1);
		}
		else
		{
			(*Global_1291106)[iVar1]->f_8 = func_951(bParam1);
		}
	}
	return true;
}

int func_950(int iParam0, bool bParam1)
{
	return func_1026(bParam1, (*Global_1291106)[iParam0]->f_8, (*Global_1291106)[iParam0]->f_7);
}

int func_951(bool bParam0)
{
	return func_1026(bParam0, Global_1901947->f_681.f_30, Global_1901947->f_681.f_29);
}

void func_952()
{
	Var0 = 7;
	Var0.f_8 = -1;
	_copy_memory(&Local_0, &Var0, 13);
}

void func_953(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

int func_954(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			uParam0->f_8 = 0;
			break;
		case 1:
			uParam0->f_8 = (uParam0->f_10 - 1);
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_955(var uParam0, int iParam1)
{
	if (!func_1027(uParam0))
	{
		return false;
	}
	if (iParam1 != 0)
	{
		(*uParam0)[uParam0->f_8] = iParam1;
		if (!func_1028(uParam0))
		{
		}
		return true;
	}
	return false;
}

int func_956(var uParam0)
{
	iVar0 = 0;
	switch (uParam0->f_9)
	{
		case 0:
			return uParam0->f_8;
		case 1:
			iVar0 = ((uParam0->f_10 - uParam0->f_8) - 1);
			if (iVar0 < 0)
			{
				iVar0 = 0;
			}
			else if (iVar0 != uParam0->f_10)
			{
			}
			break;
	}
	return iVar0;
}

bool func_957()
{
	if (Local_0.f_11 < 0 || Local_0.f_11 >= 7)
	{
		return false;
	}
	if (Local_0.f_9 == 0)
	{
		if (Local_0.f_11 >= func_956(&Local_0))
		{
			return false;
		}
	}
	return true;
}

int func_958(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_684(Param0);
	}
	return -1;
}

bool func_959(int iParam0)
{
	switch (iParam0)
	{
		case -1894830400:
		case -1661502552:
		case -1460119729:
		case -1434186802:
		case -1274632976:
		case -1021077955:
		case -766632829:
		case -753201933:
		case -226501431:
		case 106537031:
		case 335574348:
		case 758990751:
		case 938635888:
		case 1130538400:
		case 1940412283:
		case 2108217528:
			return true;
	}
	if (func_1029(iParam0))
	{
		return true;
	}
	return false;
}

bool func_960(int iParam0)
{
	switch (iParam0)
	{
		case -883547903:
			return true;
	}
	return false;
}

bool func_961()
{
	return func_33(1);
}

bool func_962(int iParam0)
{
	switch (iParam0)
	{
		case -1434404074:
		case -1304157067:
		case -1153279214:
		case -907263478:
		case -863446379:
		case -743230903:
		case -592101023:
		case -193281342:
		case -182347589:
		case 13054047:
		case 178390301:
		case 634557535:
		case 707002774:
		case 1056119646:
		case 1365509591:
			return true;
	}
	return false;
}

int func_963(int iParam0)
{
	if (!func_233(iParam0))
	{
		return -1;
	}
	if (iParam0 == 40 && func_636() == 139)
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

int func_964(int iParam0)
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

bool func_965(int iParam0, int iParam1, bool bParam2)
{
	if (!func_511(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_1030(iParam0, iParam1);
	}
	return true;
}

void func_966(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_133(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_967(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_968(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_1031(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

void func_969(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

var func_970()
{
	return Global_1071686->f_28448[32]->f_3;
}

struct<8> func_971(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_string(&Var0, &vParam0))
	{
	}
	return Var0;
}

bool func_972()
{
	return !Global_1572887->f_9;
}

int func_973(int iParam0)
{
	return func_1033(func_1032(iParam0));
}

bool func_974(int iParam0)
{
	fVar0 = (func_1034(iParam0) - _0xdf66a37936d5f3d9(iParam0));
	return fVar0 <= 1f;
}

int func_975()
{
	return &Global_1902818;
}

void func_976(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_1035(*iParam0);
	iVar1 = func_1036(*iParam0);
	iVar2 = func_1037(*iParam0);
	iVar3 = func_1038(*iParam0);
	iVar4 = func_1039(*iParam0);
	iVar5 = func_1040(*iParam0);
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
		iVar7 = func_1041(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_1042(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_977(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_973(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200->f_1431.f_6[iParam0]->f_2;
		case 1:
			return Global_1956200->f_1565.f_2.f_6[iParam0]->f_2;
		default:
			break;
	}
	return -1;
}

int func_978(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_973(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200->f_1431.f_6[iParam0]->f_1;
		case 1:
			return Global_1956200->f_1565.f_2.f_6[iParam0]->f_1;
		default:
			break;
	}
	return -15;
}

bool func_979(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1043(iParam1) || !func_1043(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_980(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_973(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_6[iParam0]->f_2 = iParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_6[iParam0]->f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_981(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_973(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_6[iParam0]->f_1 = iParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_6[iParam0]->f_1 = iParam1;
			break;
		default:
			break;
	}
}

bool func_982(int iParam0, int iParam1, float fParam2)
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
	_set_attribute_core_value(iParam0, func_1044(iParam1), ceil(fParam2));
	return true;
}

void func_983(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_973(2);
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

void func_984(int iParam0, int iParam1, float fParam2)
{
	sVar0 = func_1045(iParam1);
	if (!is_string_null_or_empty(sVar0))
	{
		_0x437c08db4febe2bd(iParam0, func_1046(iParam1), fParam2, -1);
	}
}

void func_985(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (iParam3 == 2)
	{
		iParam3 = func_973(2);
	}
	uVar0 = Global_1296859->f_21;
	func_1047(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_1048(iParam0, uVar0, iParam3);
	}
}

bool func_986(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 0:
			return true;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

char* func_987(int iParam0)
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

void func_988(int iParam0)
{
	iVar1 = Global_1146212->f_47689.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = &Global_1146212->f_47689.f_1[iVar2];
		iVar3 = func_1049(iVar0, 1);
		if (&Global_1146212->f_35859.f_919[iVar3] == iParam0)
		{
			func_1050(iVar0);
			Global_1146212->f_47689.f_1.f_42 = (Global_1146212->f_47689.f_1.f_42 - 1);
		}
		else
		{
			*Var6[iVar4] = { *Global_1146212->f_47689.f_1[iVar2] };
			iVar4++;
		}
		iVar2++;
	}
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		*Global_1146212->f_47689.f_1[iVar5] = { *Var6[iVar5] };
		iVar5++;
	}
}

void func_989(int iParam0, bool bParam1, bool bParam2)
{
	func_874(iParam0, 100f, bParam1, bParam2, 1, 2);
}

bool func_990(int iParam0, bool bParam1)
{
	return func_979(func_975(), iParam0, bParam1);
}

float func_991(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_973(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1956200->f_1431.f_26[iParam0]);
		case 1:
			return &(Global_1956200->f_1565.f_2.f_26[iParam0]);
		default:
			break;
	}
	return -1f;
}

int func_992(float fParam0)
{
	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 100f);
	return round(((fVar0 / 100f) * to_float(10)));
}

float func_993(float fParam0, float fParam1, float fParam2)
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

void func_994(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_1035(*iParam0);
	iVar1 = func_1036(*iParam0);
	iVar2 = func_1037(*iParam0);
	iVar3 = func_1038(*iParam0);
	iVar4 = func_1039(*iParam0);
	iVar5 = func_1040(*iParam0);
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
	iVar6 = func_1041(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1041(iVar1, iVar0);
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
	func_1042(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_995(int iParam0, float fParam1, int iParam2)
{
	if (!func_1051(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_973(2);
	}
	func_1052(iParam0, fParam1, iParam2);
	if (!is_entity_dead(Global_1296859->f_8))
	{
		set_attribute_points(Global_1296859->f_8, iParam0, floor(fParam1));
	}
	return 1;
}

int func_996(int iParam0)
{
	switch (iParam0)
	{
		case 708211766:
			return 1;
		case -1815871154:
			return 2;
		case 1053922635:
			return 4;
		case -1248203249:
			return 8;
		case -1275860049:
			return 16;
		case -473313046:
			return 32;
		case 1009605579:
			return 64;
		case -92538845:
			return 256;
		case 350097565:
			return 512;
		case 346761890:
			return 1024;
		case -915377750:
			return 2048;
		case -1283403230:
			return 4096;
		case 1024778115:
			return 8192;
		case 75507907:
			return 16384;
		case -1678578495:
			return 32768;
		case -1925540957:
			return 65536;
		case -1932005642:
			return 131072;
		case -803648582:
			return 128;
		case 351949263:
			return 262144;
		case -597281578:
			return 524288;
		case 465720259:
			return 1048576;
		case 396349281:
			return 2097152;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 2160;
		case -141044514:
			return 8304;
		case 884232794:
			return 16496;
		case 836721350:
			return 40960;
		case -1062102573:
			return 65601;
		case -884591393:
			return 96;
		case -1886898087:
			return 32880;
		case -1629261761:
			return 2049;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_997(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1053(uParam0->f_1[iVar0], 2))
		{
			if (func_1054(iVar0, iParam1))
			{
				vVar4 = { func_1055(iVar0, -1) };
				if (((!bParam4 && vVar4.x != &Global_1952637->f_83[iVar0]) && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1056(iVar0, 4))
				{
					func_1057(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_1058(iVar0, 4, 6);
				}
				Jump @205; //curOff = 171
				if (bParam2)
				{
					vVar1.x = &Global_1952637->f_83[iVar0];
					*uParam0->f_1[iVar0] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

void func_998(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_336(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_336(iParam0, 1)])->f_11 || iParam1);
}

bool func_999(int iParam0)
{
	Global_1952637->f_1043.f_2 = 0;
	iVar0 = 1226838104;
	func_884(&(Global_1952637->f_1043), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1952637->f_1043));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1952637->f_1043), 1409451727))
	{
		return false;
	}
	return true;
}

int func_1000(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	iVar6 = _0x8870895ba5ed9385(iParam0, 761377030, &uVar0);
	if (iVar6 > 0)
	{
		return &(uVar0[0]);
	}
	return 0;
}

void func_1001(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_111(&(uParam0->f_1[34]), -166674229))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar1 = func_1056(iVar0, 16);
		if (bVar1)
		{
			func_1057(iVar0, 16, 9);
		}
		if (&Global_1952637->f_83[iVar0]->f_3[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
		{
		}
		else
		{
			if (bVar1)
			{
				func_565(iVar0, iParam3);
			}
			if (!bParam2 && func_1000(&(uParam0->f_1[iVar0])) != 0)
			{
			}
			else if (func_1054(iVar0, iParam1) && !bVar1)
			{
				uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
				uParam0->f_1[iVar0]->f_1 = 0;
				func_567(uParam0, &(uParam0->f_1[iVar0]), iVar0, 1, iParam3);
				func_565(iVar0, iParam3);
			}
			else if (bVar1 && !bParam2)
			{
				func_567(uParam0, &(uParam0->f_1[iVar0]), iVar0, 0, iParam3);
			}
		}
		iVar0++;
	}
}

int func_1002(int iParam0, int iParam1, int iParam2)
{
	Var1.f_9 = -1591664384;
	iVar16 = 0;
	if (func_557() == 24043185)
	{
		iVar16 = 1;
	}
	iParam2 |= 28;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (!func_228(&Var1, iVar0, iParam0, iParam1))
		{
		}
		else if (_get_ped_component_category(Var1.f_4, iVar16, true) == 0)
		{
			if ((Var1.f_4 != 1733464892 && Var1.f_4 != 1326838792) && Var1.f_4 != -230310728)
			{
			}
			else if (func_1000(Var1.f_4) != 0)
			{
			}
			else if (func_111(Var1.f_4, -166674229))
			{
			}
			else if (func_111(Var1.f_4, 525391395))
			{
			}
			else
			{
				iVar15 = func_133(Var1.f_4);
				if (func_1060(iParam2, func_1059(iVar15)))
				{
				}
				else
				{
					return Var1.f_4;
				}
			}
			iVar0++;
			return 0;
		}
	}
}

void func_1003(var uParam0, int iParam1, int iParam2)
{
	if (func_111(&(uParam0->f_1[iParam1]), 343781202))
	{
		func_729(uParam0, &(uParam0->f_1[iParam1]));
	}
	else
	{
		uParam0->f_1[iParam1] = &Global_1952637->f_83[iParam1];
		uParam0->f_1[iParam1]->f_1 = 0;
		func_565(iParam1, iParam2);
	}
}

bool func_1004(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_1005()
{
	return Global_1102219->f_3672;
}

void func_1006(int iParam0)
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
	func_1007(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_1007(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

bool func_1008(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_1009(int iParam0)
{
	if (!func_105(*iParam0, 0))
	{
		return 0;
	}
	if (!func_1061(*iParam0))
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

void func_1010(bool bParam0)
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

void func_1011(int iParam0)
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

void func_1012(bool bParam0)
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

void func_1013(bool bParam0)
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

void func_1014(bool bParam0)
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

void func_1015(bool bParam0)
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

void func_1016(bool bParam0)
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

void func_1017(bool bParam0)
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

var func_1018(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

int func_1019(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_1062(iParam2, -372840566);
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
	func_1063(uParam1, iParam0, Var3);
	return 1;
}

int func_1020(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_1021(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1064())
	{
		Global_1913504->f_125 = get_game_timer();
		Global_1913504->f_126 = iParam1;
	}
	Global_1913504->f_127 = (Global_1913504->f_127 + iParam0);
}

bool func_1022()
{
	return _unlock_is_unlocked(-121456797);
}

bool func_1023()
{
	return is_dlc_present(-2112896652);
}

bool func_1024(int iParam0, int iParam1, int iParam2)
{
	if (!func_105(iParam1, 0))
	{
		return false;
	}
	return func_492(iParam0, iParam1) >= iParam2;
}

int func_1025(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!func_105(iParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_836(iParam0) };
	Var5 = { func_837(iParam0, iParam1, Var0, Var0.f_4) };
	return func_1065(iParam0, iParam1, &Var5, iParam2, iParam3, bParam4);
}

int func_1026(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_1027(var uParam0)
{
	if (uParam0->f_8 < 0 || uParam0->f_8 >= 7)
	{
		return false;
	}
	return true;
}

bool func_1028(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			uParam0->f_8++;
			break;
		case 1:
			if (uParam0->f_10 <= 0)
			{
				return false;
			}
			uParam0->f_8 = (uParam0->f_8 - 1);
			break;
		default:
			return false;
	}
	return true;
}

bool func_1029(int iParam0)
{
	switch (iParam0)
	{
		case -1943756076:
		case -763325020:
		case -687000066:
		case -280003847:
		case -258175882:
		case 433947044:
		case 469223329:
		case 1014101275:
		case 1054139581:
		case 1447083768:
		case 1499469209:
		case 2078973319:
			return true;
	}
	return false;
}

bool func_1030(int iParam0, int iParam1)
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
			while (iScriptParam_0 < iLocal_477)
			{
				uVar472 = &Var0[iLocal_478]->f_36[iScriptParam_0];
				if (iLocal_476 == 0)
				{
				}
				else if (!_unlock_is_unlocked(iLocal_476))
				{
					return true;
				}
				iVar475 = iScriptParam_0 + 1;
			}
		}
		iVar474 = iLocal_478 + 1;
	}
	return false;
}

void func_1031(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_1066(&(uParam0->f_4));
}

bool func_1032(int iParam0)
{
	return func_1004(&(Global_1956200->f_1565), iParam0, 1);
}

int func_1033(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

float func_1034(int iParam0)
{
	return (_0x592f58bc4d2a2cf3(iParam0, 0) - IntToFloat(func_1067(2)));
}

int func_1035(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1026(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_1036(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_1037(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_1038(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_1039(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_1040(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_1041(int iParam0, int iParam1)
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

void func_1042(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1068(iParam0, iParam6);
	func_1069(iParam0, iParam5);
	func_1070(iParam0, iParam4);
	func_1071(iParam0, iParam3);
	func_1072(iParam0, iParam2);
	func_1073(iParam0, iParam1);
}

bool func_1043(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_1040(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_1039(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_1038(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_1035(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_1036(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_1037(iParam0);
	if (iVar5 < 1 || iVar5 > func_1041(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_1044(int iParam0)
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

char* func_1045(int iParam0)
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

char* func_1046(int iParam0)
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

void func_1047(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_973(2);
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

void func_1048(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_973(2);
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

int func_1049(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
		case -2059285007:
			return 167;
		case -2006026692:
			return 176;
		case -1993903481:
			return 124;
		case -1970041458:
			return 142;
		case -1935700575:
			return 136;
		case -1927422497:
			return 127;
		case -1920464018:
			return 58;
		case -1919393558:
			return 27;
		case -1857550353:
			return 173;
		case -1855662261:
			return 55;
		case -1840995238:
			return 15;
		case -1835722213:
			return 88;
		case -1790318144:
			return 106;
		case -1786033368:
			return 62;
		case -1767968552:
			return 86;
		case -1767662471:
			return 32;
		case -1729980669:
			return 108;
		case -1729554078:
			return 49;
		case -1727526861:
			return 109;
		case -1722264360:
			return 18;
		case -1719665775:
			return 37;
		case -1716981503:
			return 107;
		case -1697567574:
			return 72;
		case -1685270562:
			return 181;
		case -1631930150:
			return 166;
		case -1629969648:
			return 174;
		case -1605880447:
			return 120;
		case -1575244501:
			return 61;
		case -1551628748:
			return 74;
		case -1543433893:
			return 70;
		case -1539337723:
			return 121;
		case -1525401254:
			return 64;
		case -1525233154:
			return 47;
		case -1491472827:
			return 94;
		case -1486927560:
			return 112;
		case -1480068681:
			return 50;
		case -1478178768:
			return 148;
		case -1465202595:
			return 104;
		case -1459368569:
			return 116;
		case -1431848307:
			return 76;
		case -1418298797:
			return 155;
		case -1391865428:
			return 171;
		case -1378468884:
			return 60;
		case -1291022662:
			return 117;
		case -1288042557:
			return 19;
		case -1248720641:
			return 7;
		case -1229834518:
			return 89;
		case -1223791123:
			return 79;
		case -1209874968:
			return 45;
		case -1197630873:
			return 153;
		case -1196069774:
			return 180;
		case -1181880939:
			return 80;
		case -1170784825:
			return 38;
		case -1125028284:
			return 137;
		case -1123356036:
			return 147;
		case -1100659165:
			return 6;
		case -1089821002:
			return 85;
		case -1084890102:
			return 172;
		case -1080696981:
			return 92;
		case -1010031245:
			return 39;
		case -992423055:
			return 157;
		case -979738281:
			return 77;
		case -931294997:
			return 111;
		case -920221586:
			return 110;
		case -900877140:
			return 30;
		case -885737328:
			return 114;
		case -885646667:
			return 67;
		case -837774766:
			return 78;
		case -813902658:
			return 182;
		case -799500009:
			return 145;
		case -751329575:
			return 139;
		case -711254121:
			return 132;
		case -660114191:
			return 31;
		case -649929946:
			return 53;
		case -636552746:
			return 123;
		case -587737142:
			return 71;
		case -546870456:
			return 159;
		case -521477124:
			return 82;
		case -481051896:
			return 135;
		case -425216802:
			return 17;
		case -415437740:
			return 103;
		case -415250715:
			return 144;
		case -392183396:
			return 90;
		case -343572565:
			return 21;
		case -340578116:
			return 169;
		case -286632741:
			return 8;
		case -267135864:
			return 138;
		case -233204301:
			return 105;
		case -203268054:
			return 143;
		case -161625840:
			return 177;
		case -126580932:
			return 0;
		case -117284255:
			return 122;
		case -60432888:
			return 44;
		case -56802666:
			return 102;
		case -47513954:
			return 99;
		case -46116991:
			return 163;
		case -35033037:
			return 133;
		case -33431232:
			return 12;
		case -29822088:
			return 40;
		case 0:
			return 1;
		case 1213703:
			return 154;
		case 54499763:
			return 98;
		case 111084081:
			return 56;
		case 114587291:
			return 29;
		case 149216078:
			return 57;
		case 168336706:
			return 149;
		case 173401469:
			return 100;
		case 180714777:
			return 81;
		case 268103762:
			return 97;
		case 282858309:
			return 183;
		case 320758674:
			return 158;
		case 352539363:
			return 179;
		case 362862598:
			return 170;
		case 398279342:
			return 34;
		case 408582472:
			return 5;
		case 420477860:
			return 25;
		case 456199285:
			return 168;
		case 509781427:
			return 93;
		case 550487527:
			return 35;
		case 576694808:
			return 175;
		case 638586808:
			return 118;
		case 659100749:
			return 59;
		case 666050502:
			return 65;
		case 698214003:
			return 2;
		case 713106899:
			return 36;
		case 780689752:
			return 3;
		case 791791441:
			return 125;
		case 797908556:
			return 42;
		case 798283666:
			return 141;
		case 807983049:
			return 150;
		case 839199173:
			return 91;
		case 846387993:
			return 14;
		case 852774198:
			return 113;
		case 878491929:
			return 33;
		case 887717126:
			return 66;
		case 926420921:
			return 51;
		case 946848176:
			return 68;
		case 952755846:
			return 24;
		case 955999834:
			return 134;
		case 956867472:
			return 9;
		case 1036630721:
			return 10;
		case 1037792287:
			return 140;
		case 1052684812:
			return 87;
		case 1075856357:
			return 95;
		case 1078589127:
			return 46;
		case 1095779900:
			return 22;
		case 1110815339:
			return 152;
		case 1138017610:
			return 11;
		case 1156950836:
			return 83;
		case 1195903441:
			return 52;
		case 1278022357:
			return 48;
		case 1281707602:
			return 164;
		case 1323028278:
			return 41;
		case 1374979106:
			return 28;
		case 1405624312:
			return 146;
		case 1444077748:
			return 23;
		case 1449867002:
			return 162;
		case 1498983922:
			return 84;
		case 1547488310:
			return 161;
		case 1554410187:
			return 73;
		case 1585362808:
			return 16;
		case 1636352616:
			return 151;
		case 1662680949:
			return 178;
		case 1698995037:
			return 4;
		case 1769731136:
			return 115;
		case 1801131110:
			return 75;
		case 1806354060:
			return 96;
		case 1811663962:
			return 131;
		case 1828803907:
			return 20;
		case 1829805500:
			return 54;
		case 1830494920:
			return 101;
		case 1838787462:
			return 129;
		case 1865781806:
			return 165;
		case 1899963938:
			return 63;
		case 1900141702:
			return 156;
		case 1903067887:
			return 126;
		case 1907663129:
			return 43;
		case 2040423027:
			return 128;
		case 2050123975:
			return 130;
		case 2096770678:
			return 119;
		case 2110112797:
			return 69;
		case 2119170919:
			return 160;
		case 2132307595:
			return 26;
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

int func_1050(int iParam0)
{
	if (!func_1074(iParam0))
	{
		return 0;
	}
	iVar0 = func_1049(iParam0, 1);
	if (!func_1075(&(Global_1146212->f_35859.f_919[iVar0])))
	{
		return 1;
	}
	iVar3 = func_1076(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859[iVar3]->f_5)
	{
		iVar1 = Global_1146212->f_35859[iVar3][iVar4];
		switch (func_1077(iParam0, iVar1))
		{
			case 0:
				func_1078(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1146212->f_35859.f_11700)
				{
					if (&Global_1146212->f_35859.f_9503[iVar5] != iVar1 || Global_1146212->f_35859.f_9503[iVar5]->f_1 != iParam0)
					{
					}
					else
					{
						func_1078(iVar1, iParam0, iVar4);
						func_1079(Global_1146212->f_35859.f_9503[iVar5]);
						Global_1146212->f_35859.f_11700 = (Global_1146212->f_35859.f_11700 - 1);
						*Global_1146212->f_35859.f_9503[iVar5] = { *Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700] };
						func_1079(Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_1080(iVar1, 1);
				func_1081(iVar2, -1);
				if (Global_1146212->f_35859.f_3116[iVar2]->f_29 <= 0)
				{
					func_1082(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1146212->f_35859.f_9502)
					{
						if (&Global_1146212->f_35859.f_9302[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1146212->f_35859.f_9302[iVar6] = -1;
							Global_1146212->f_35859.f_9502 = (Global_1146212->f_35859.f_9502 - 1);
							Global_1146212->f_35859.f_9302[iVar6] = &Global_1146212->f_35859.f_9302[Global_1146212->f_35859.f_9502];
							Global_1146212->f_35859.f_9302[Global_1146212->f_35859.f_9502] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1146212->f_35859.f_919[iVar0] = -1;
			func_1083(Global_1146212->f_35859.f_919[iVar0]);
			return 1;
		}

bool func_1051(int iParam0)
{
	if (func_986(iParam0))
	{
		return true;
	}
	else if (func_1084(iParam0))
	{
		return true;
	}
	return false;
}

void func_1052(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_973(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_26[iParam0] = fParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_26[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

bool func_1053(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_1054(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return (Global_1952637->f_83[iParam0]->f_10 && iParam1) != 0;
}

Vector3 func_1055(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	return *Global_17411.f_55.f_644.f_33[iParam1]->f_1.f_1[iParam0];
}

bool func_1056(int iParam0, int iParam1)
{
	return (Global_1952637->f_83[iParam0]->f_11 && iParam1) != 0;
}

void func_1057(int iParam0, int iParam1, int iParam2)
{
	Global_1952637->f_83[iParam0]->f_11 = (Global_1952637->f_83[iParam0]->f_11 - (Global_1952637->f_83[iParam0]->f_11 && iParam1));
}

void func_1058(int iParam0, int iParam1, int iParam2)
{
	Global_1952637->f_83[iParam0]->f_11 = (Global_1952637->f_83[iParam0]->f_11 || iParam1);
}

int func_1059(int iParam0)
{
	switch (iParam0)
	{
		case 502936876:
			return 1;
		case 684307653:
			return 2;
		case 1759215194:
			return 4;
		case -1740828670:
			return 8;
		case 344283346:
			return 16;
		default:
			break;
	}
	return 0;
}

bool func_1060(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_1061(int iParam0)
{
	return func_111(iParam0, 1279601681);
}

void func_1062(int iParam0, int iParam1)
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

void func_1063(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_1008(uParam0))
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

bool func_1064()
{
	return Global_1913504->f_127 == 0;
}

int func_1065(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_515(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1085(iParam0, *uParam2, &Var0, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!_0x3e4e811480b3ae79(iParam0, uParam2, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_1066(var uParam0)
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

int func_1067(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_866(2) * 2;
		case 1:
			return func_870(2) * 2;
		case 2:
			return func_868(2) * 2;
		default:
			break;
	}
	return -1;
}

void func_1068(int iParam0, int iParam1)
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

void func_1069(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1070(int iParam0, int iParam1)
{
	iVar0 = func_1036(*iParam0);
	iVar1 = func_1035(*iParam0);
	if (iParam1 < 1 || iParam1 > func_1041(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1071(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1072(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1073(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

bool func_1074(int iParam0)
{
	iVar0 = func_1049(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_1075(int iParam0)
{
	iVar0 = func_1076(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

int func_1076(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2137819446:
			return 100;
		case -2131931188:
			return 136;
		case -2130179962:
			return 63;
		case -2082434331:
			return 152;
		case -2059502051:
			return 65;
		case -2056449621:
			return 93;
		case -2038430863:
			return 151;
		case -1973221270:
			return 64;
		case -1969715419:
			return 35;
		case -1968787770:
			return 6;
		case -1957895818:
			return 56;
		case -1952291530:
			return 139;
		case -1950424573:
			return 54;
		case -1910888845:
			return 110;
		case -1883405573:
			return 78;
		case -1844803100:
			return 80;
		case -1831687141:
			return 62;
		case -1810408560:
			return 73;
		case -1805785047:
			return 41;
		case -1759910473:
			return 25;
		case -1756646040:
			return 92;
		case -1741565123:
			return 47;
		case -1609480552:
			return 61;
		case -1596526341:
			return 3;
		case -1573606823:
			return 49;
		case -1510695159:
			return 148;
		case -1504620904:
			return 107;
		case -1462866101:
			return 111;
		case -1405836475:
			return 55;
		case -1360021450:
			return 9;
		case -1356583879:
			return 137;
		case -1246069683:
			return 124;
		case -1242362177:
			return 46;
		case -1235458416:
			return 74;
		case -1234968784:
			return 69;
		case -1234548949:
			return 7;
		case -1143906885:
			return 131;
		case -1140308479:
			return 143;
		case -1105699593:
			return 153;
		case -1047626954:
			return 118;
		case -1008191715:
			return 1;
		case -985141745:
			return 79;
		case -980934770:
			return 125;
		case -974857798:
			return 140;
		case -914097888:
			return 132;
		case -900341092:
			return 142;
		case -859661758:
			return 60;
		case -821191074:
			return 115;
		case -810885450:
			return 40;
		case -750368411:
			return 48;
		case -691826426:
			return 77;
		case -608746625:
			return 17;
		case -567710817:
			return 2;
		case -565327488:
			return 72;
		case -559775780:
			return 121;
		case -549372097:
			return 59;
		case -455491084:
			return 85;
		case -447950391:
			return 94;
		case -418060375:
			return 4;
		case -391691334:
			return 68;
		case -375368707:
			return 58;
		case -357713093:
			return 128;
		case -336340230:
			return 119;
		case -309456186:
			return 10;
		case -300915357:
			return 146;
		case -252777454:
			return 135;
		case -193167881:
			return 127;
		case -190717545:
			return 30;
		case -179898515:
			return 122;
		case -179343615:
			return 150;
		case -132268497:
			return 141;
		case -120658935:
			return 67;
		case -97080319:
			return 43;
		case -93340399:
			return 106;
		case -2338369:
			return 39;
		case -1:
			return 0;
		case 18275459:
			return 8;
		case 47725914:
			return 11;
		case 130533095:
			return 126;
		case 151887407:
			return 18;
		case 153569762:
			return 44;
		case 158579484:
			return 117;
		case 163503896:
			return 101;
		case 183566846:
			return 15;
		case 193887912:
			return 113;
		case 225804550:
			return 133;
		case 267361268:
			return 86;
		case 272084311:
			return 71;
		case 312483235:
			return 29;
		case 349431355:
			return 105;
		case 350943398:
			return 102;
		case 383280474:
			return 12;
		case 467901857:
			return 51;
		case 508502713:
			return 134;
		case 548902645:
			return 109;
		case 549687162:
			return 145;
		case 591249118:
			return 28;
		case 611341556:
			return 16;
		case 618168626:
			return 26;
		case 620773281:
			return 98;
		case 668358831:
			return 149;
		case 677513315:
			return 45;
		case 713112284:
			return 50;
		case 722162219:
			return 88;
		case 730253571:
			return 36;
		case 731266401:
			return 90;
		case 785001351:
			return 144;
		case 793035862:
			return 81;
		case 802887669:
			return 114;
		case 808176588:
			return 116;
		case 828060856:
			return 38;
		case 837742789:
			return 70;
		case 900184247:
			return 21;
		case 924932702:
			return 14;
		case 969398724:
			return 89;
		case 1014273190:
			return 96;
		case 1033330939:
			return 82;
		case 1034286944:
			return 87;
		case 1123546272:
			return 104;
		case 1130659268:
			return 123;
		case 1138545953:
			return 20;
		case 1157170123:
			return 75;
		case 1159895828:
			return 31;
		case 1296512587:
			return 97;
		case 1377989036:
			return 19;
		case 1423325819:
			return 32;
		case 1476796894:
			return 24;
		case 1486559056:
			return 129;
		case 1493749872:
			return 112;
		case 1500545235:
			return 138;
		case 1507470319:
			return 83;
		case 1543468593:
			return 147;
		case 1568867811:
			return 57;
		case 1625043854:
			return 22;
		case 1667258255:
			return 33;
		case 1695199279:
			return 130;
		case 1699722938:
			return 13;
		case 1746978940:
			return 84;
		case 1764814366:
			return 95;
		case 1767031434:
			return 120;
		case 1775828486:
			return 103;
		case 1830439946:
			return 23;
		case 1851839077:
			return 99;
		case 1860260195:
			return 66;
		case 1885285188:
			return 52;
		case 1905466026:
			return 27;
		case 1925734249:
			return 76;
		case 1938325642:
			return 5;
		case 2079700825:
			return 42;
		case 2081475118:
			return 37;
		case 2093509505:
			return 34;
		case 2100718034:
			return 108;
		case 2117355246:
			return 53;
		case 2146493981:
			return 91;
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

int func_1077(int iParam0, int iParam1)
{
	iVar0 = func_1086(iParam0);
	iVar1 = &Global_1296859;
	iVar2 = func_1080(iParam1, 1);
	switch (Global_1146212->f_35859.f_3116[iVar2]->f_1)
	{
		case -1912291748:
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case -619998507:
		case -594821844:
		case 348502922:
		case 1002704651:
		case 1270499458:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_1078(int iParam0, int iParam1, int iParam2)
{
	if (!func_1074(iParam1))
	{
		return 0;
	}
	if (!func_1087(iParam0))
	{
		return 0;
	}
	iVar0 = func_1080(iParam0, 1);
	func_1088(iParam0, iParam1, iParam2);
	if (func_1089(*Global_1146212->f_35859.f_3116[iVar0]) && func_1090(iParam0, Global_1146212->f_35859.f_3116[iVar0]->f_4))
	{
		vVar1 = { func_1091(Global_1146212->f_35859.f_3116[iVar0]->f_4) };
		if (func_1092(vVar1))
		{
			if (func_1093(vVar1.x, vVar1.y, vVar1.z))
			{
				func_1094(Global_1146212->f_35859.f_3116[iVar0]->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_1095(Global_1146212->f_35859.f_3116[iVar0]->f_4);
			}
		}
		else
		{
			func_1095(Global_1146212->f_35859.f_3116[iVar0]->f_4);
		}
	}
	return 1;
}

void func_1079(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_1080(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2139291255:
			return 145;
		case -2133203822:
			return 108;
		case -2119961771:
			return 90;
		case -2117138640:
			return 79;
		case -2115524796:
			return 60;
		case -2108980762:
			return 137;
		case -2088744988:
			return 91;
		case -2056483403:
			return 75;
		case -2019073637:
			return 198;
		case -2008161946:
			return 26;
		case -2006179687:
			return 180;
		case -1961023994:
			return 92;
		case -1958950493:
			return 194;
		case -1954641284:
			return 28;
		case -1946267644:
			return 130;
		case -1925826694:
			return 49;
		case -1920322236:
			return 22;
		case -1886192107:
			return 55;
		case -1854279248:
			return 6;
		case -1853627206:
			return 134;
		case -1851126253:
			return 29;
		case -1847886830:
			return 16;
		case -1841577353:
			return 112;
		case -1840959475:
			return 106;
		case -1808210911:
			return 30;
		case -1803458707:
			return 8;
		case -1761885354:
			return 111;
		case -1749044999:
			return 96;
		case -1698597704:
			return 45;
		case -1631537135:
			return 63;
		case -1599892133:
			return 38;
		case -1514337705:
			return 188;
		case -1498884346:
			return 156;
		case -1448841146:
			return 50;
		case -1445919747:
			return 117;
		case -1441068914:
			return 39;
		case -1426414385:
			return 182;
		case -1421504146:
			return 109;
		case -1419242781:
			return 33;
		case -1394912816:
			return 199;
		case -1391351739:
			return 166;
		case -1378028573:
			return 27;
		case -1370534631:
			return 110;
		case -1327315394:
			return 1;
		case -1311380047:
			return 46;
		case -1299791944:
			return 2;
		case -1280685390:
			return 132;
		case -1268916163:
			return 119;
		case -1256990268:
			return 76;
		case -1139172958:
			return 61;
		case -1112015628:
			return 173;
		case -1094465110:
			return 47;
		case -1038422902:
			return 74;
		case -1011126213:
			return 31;
		case -964953325:
			return 123;
		case -955252868:
			return 124;
		case -932897324:
			return 11;
		case -931584677:
			return 103;
		case -925634234:
			return 21;
		case -750441842:
			return 184;
		case -749371485:
			return 164;
		case -649515024:
			return 142;
		case -624920400:
			return 81;
		case -612675573:
			return 148;
		case -572117096:
			return 193;
		case -562496675:
			return 57;
		case -562150430:
			return 181;
		case -560965516:
			return 48;
		case -554207528:
			return 59;
		case -539762089:
			return 97;
		case -529396121:
			return 185;
		case -454200664:
			return 104;
		case -440727241:
			return 19;
		case -423133485:
			return 133;
		case -403292810:
			return 113;
		case -398496662:
			return 23;
		case -343145237:
			return 160;
		case -342633876:
			return 5;
		case -334674962:
			return 13;
		case -332283977:
			return 66;
		case -306011710:
			return 4;
		case -280832639:
			return 51;
		case -276166656:
			return 172;
		case -269291543:
			return 68;
		case -254950601:
			return 152;
		case -242870769:
			return 163;
		case -206787059:
			return 35;
		case -164741307:
			return 105;
		case -158245263:
			return 41;
		case -147416760:
			return 155;
		case -124368414:
			return 197;
		case -106398498:
			return 153;
		case -97000889:
			return 86;
		case -91604267:
			return 169;
		case -1:
			return 0;
		case 25589062:
			return 56;
		case 39330853:
			return 125;
		case 78014060:
			return 9;
		case 81243326:
			return 69;
		case 141777963:
			return 15;
		case 183131704:
			return 177;
		case 200623432:
			return 64;
		case 221495846:
			return 175;
		case 224471061:
			return 98;
		case 233412256:
			return 77;
		case 275909046:
			return 151;
		case 279713143:
			return 171;
		case 285724035:
			return 54;
		case 302482713:
			return 136;
		case 347710188:
			return 89;
		case 350341162:
			return 127;
		case 447464746:
			return 129;
		case 558636891:
			return 187;
		case 570385280:
			return 196;
		case 593083875:
			return 80;
		case 634217179:
			return 150;
		case 639606025:
			return 70;
		case 654960265:
			return 95;
		case 668064801:
			return 195;
		case 671416267:
			return 107;
		case 673708797:
			return 139;
		case 694721787:
			return 20;
		case 702532569:
			return 82;
		case 720207812:
			return 178;
		case 724367341:
			return 65;
		case 726043209:
			return 58;
		case 728769635:
			return 83;
		case 756791452:
			return 149;
		case 763061271:
			return 18;
		case 775646007:
			return 102;
		case 783509408:
			return 170;
		case 794883372:
			return 186;
		case 805902559:
			return 84;
		case 817456409:
			return 100;
		case 835146902:
			return 192;
		case 841152146:
			return 93;
		case 886162534:
			return 131;
		case 937140932:
			return 183;
		case 997052462:
			return 157;
		case 1034295275:
			return 17;
		case 1040501041:
			return 122;
		case 1093424641:
			return 115;
		case 1139016431:
			return 34;
		case 1144080006:
			return 32;
		case 1171151366:
			return 43;
		case 1175961229:
			return 138;
		case 1193587137:
			return 176;
		case 1201719505:
			return 42;
		case 1203687692:
			return 10;
		case 1208331227:
			return 12;
		case 1211076549:
			return 73;
		case 1256374770:
			return 165;
		case 1265311313:
			return 36;
		case 1268462011:
			return 37;
		case 1294394742:
			return 190;
		case 1295163466:
			return 114;
		case 1300622865:
			return 99;
		case 1305406380:
			return 162;
		case 1312155508:
			return 144;
		case 1324420970:
			return 25;
		case 1328995848:
			return 88;
		case 1336349861:
			return 143;
		case 1336429519:
			return 140;
		case 1390582854:
			return 94;
		case 1413720692:
			return 168;
		case 1433853218:
			return 85;
		case 1452940977:
			return 87;
		case 1462245043:
			return 154;
		case 1480202237:
			return 189;
		case 1482822775:
			return 146;
		case 1514854451:
			return 191;
		case 1522457772:
			return 147;
		case 1523275824:
			return 62;
		case 1524301922:
			return 78;
		case 1557116130:
			return 126;
		case 1557362410:
			return 116;
		case 1578015076:
			return 72;
		case 1578708778:
			return 67;
		case 1596748830:
			return 101;
		case 1608803012:
			return 128;
		case 1644017723:
			return 158;
		case 1687654048:
			return 71;
		case 1704907062:
			return 179;
		case 1726722300:
			return 135;
		case 1744707601:
			return 3;
		case 1746613639:
			return 121;
		case 1767173923:
			return 141;
		case 1798083308:
			return 24;
		case 1813411238:
			return 167;
		case 1835150954:
			return 40;
		case 1903955831:
			return 7;
		case 1913593527:
			return 53;
		case 1930815945:
			return 118;
		case 1938151130:
			return 44;
		case 1976949991:
			return 161;
		case 2028487040:
			return 52;
		case 2051020894:
			return 174;
		case 2081856931:
			return 120;
		case 2113464199:
			return 159;
		case 2126590447:
			return 14;
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

void func_1081(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = (Global_1146212->f_35859.f_3116[iParam0]->f_29 + iParam1);
}

void func_1082(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = iParam1;
}

void func_1083(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0]->f_1 = 0;
		iVar0++;
	}
}

bool func_1084(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return true;
		case 13:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1085(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam1))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(iParam0, &uParam1, iParam5, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1086(int iParam0)
{
	if (func_1096(iParam0))
	{
		return (func_1097(iParam0) % 32);
	}
	return &Global_1296859;
}

bool func_1087(int iParam0)
{
	iVar0 = func_1080(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

int func_1088(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1049(iParam1, 1);
	iVar1 = func_1080(iParam0, 1);
	iVar2 = func_1076(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	if (Global_1146212->f_35859[iVar2][iParam2] != iParam0)
	{
		return 0;
	}
	if (!&Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2])
	{
		return 1;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2] = 0;
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859.f_3116[iVar1]->f_16)
	{
		iVar3 = &Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4];
		iVar5 = func_1098(iVar3, 1);
		if (!func_1099(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = (&Global_1146212->f_2169[iVar5]->f_1[iVar1] - 1);
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 - func_1100(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_1101(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_1102(iVar6))
		{
		}
		else
		{
			iVar8 = func_1103(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = (Global_1146212->f_21645[iVar8][iVar1] - 1);
			if (Global_1146212->f_21645[iVar8][iVar1] <= 0)
			{
				_0xb909149f2bb5f6da(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			}
			if (!_0x80e9c316ef84dd81(&(Global_1146212->f_21645[iVar8]->f_200)))
			{
				Global_1146212->f_21645[iVar8]->f_208 = 0;
				func_1104(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_1089(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_1090(int iParam0, int iParam1)
{
	if (!func_1087(iParam0))
	{
		return false;
	}
	if (!func_1105(iParam1))
	{
		return false;
	}
	iVar0 = func_1106(iParam1, 1);
	return &Global_1146212->f_35859.f_9286[iVar0] == iParam0;
}

Vector3 func_1091(int iParam0)
{
	iVar0 = func_1107(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *Global_1146212->f_35859.f_9503[iVar0];
}

bool func_1092(vector3 vParam0)
{
	if (!func_1087(vParam0.x))
	{
		return false;
	}
	if (!func_1074(vParam0.y))
	{
		return false;
	}
	if (!func_1108(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_1093(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1049(iParam1, 1);
	iVar1 = func_1080(iParam0, 1);
	iVar2 = func_1076(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	if (Global_1146212->f_35859[iVar2][iParam2] != iParam0)
	{
		return false;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2]->f_1 = Global_1296859->f_21;
	if (&Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2])
	{
		return true;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2] = 1;
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859.f_3116[iVar1]->f_16)
	{
		iVar3 = &Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4];
		iVar5 = func_1098(iVar3, 1);
		if (!func_1099(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = &Global_1146212->f_2169[iVar5]->f_1[iVar1] + 1;
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 + func_1100(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_1109(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_1102(iVar6))
		{
		}
		else if (!func_1110(Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7]))
		{
		}
		else
		{
			iVar8 = func_1103(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = Global_1146212->f_21645[iVar8][iVar1] + 1;
			_0xe84aac1b22a73e99(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			if (!Global_1146212->f_21645[iVar8]->f_208)
			{
				Global_1146212->f_21645[iVar8]->f_208 = 1;
				func_1111(iVar6);
			}
		}
		iVar7++;
	}
	func_1112(Global_1146212->f_35859.f_3116[iVar1]->f_2);
	return true;
}

void func_1094(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_1105(iParam0))
	{
		return;
	}
	iVar0 = func_1106(iParam0, 1);
	if (!func_1087(iParam1))
	{
		return;
	}
	if (!func_1074(iParam2))
	{
		return;
	}
	if (!func_1108(iParam3))
	{
		return;
	}
	Global_1146212->f_35859.f_9286[iVar0] = iParam1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = iParam2;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = iParam3;
}

void func_1095(int iParam0)
{
	if (!func_1105(iParam0))
	{
		return;
	}
	iVar0 = func_1106(iParam0, 1);
	Global_1146212->f_35859.f_9286[iVar0] = -1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = 0;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = -1;
}

bool func_1096(int iParam0)
{
	iVar0 = func_1049(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

int func_1097(int iParam0)
{
	iVar0 = func_1049(iParam0, 1);
	if (func_1096(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_1113(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_1114(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_1115(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_1116(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_1117(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_1118(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_1098(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2123992989:
			return 59;
		case -1988557796:
			return 49;
		case -1936069272:
			return 47;
		case -1926692092:
			return 42;
		case -1846416021:
			return 58;
		case -1721745367:
			return 2;
		case -1701192079:
			return 41;
		case -1659620438:
			return 50;
		case -1607530002:
			return 64;
		case -1589052195:
			return 37;
		case -1575020444:
			return 94;
		case -1572802418:
			return 71;
		case -1514969696:
			return 78;
		case -1397050499:
			return 53;
		case -1349331938:
			return 43;
		case -1345921497:
			return 29;
		case -1309904053:
			return 22;
		case -1290490489:
			return 7;
		case -1202225775:
			return 56;
		case -1080116020:
			return 23;
		case -1079033682:
			return 46;
		case -1059185085:
			return 25;
		case -1003690472:
			return 51;
		case -851757466:
			return 67;
		case -744806636:
			return 52;
		case -516489227:
			return 11;
		case -514416345:
			return 66;
		case -484540420:
			return 36;
		case -483049716:
			return 75;
		case -400566333:
			return 14;
		case -391623459:
			return 73;
		case -377364039:
			return 60;
		case -374018223:
			return 62;
		case -349428415:
			return 39;
		case -231535884:
			return 15;
		case -201802680:
			return 1;
		case -85606741:
			return 65;
		case -77989269:
			return 83;
		case -1:
			return 0;
		case 66478954:
			return 93;
		case 91687087:
			return 79;
		case 146438590:
			return 90;
		case 194431787:
			return 61;
		case 198507096:
			return 72;
		case 222365748:
			return 85;
		case 295732030:
			return 40;
		case 340029732:
			return 70;
		case 374652900:
			return 89;
		case 410940916:
			return 92;
		case 447408404:
			return 81;
		case 515706097:
			return 5;
		case 527883710:
			return 44;
		case 549685826:
			return 63;
		case 641300611:
			return 88;
		case 696211072:
			return 30;
		case 778435476:
			return 19;
		case 808428606:
			return 4;
		case 854463919:
			return 86;
		case 857703729:
			return 48;
		case 874892169:
			return 95;
		case 886907851:
			return 16;
		case 920214733:
			return 91;
		case 995847993:
			return 68;
		case 1061744811:
			return 6;
		case 1149992366:
			return 27;
		case 1221256507:
			return 8;
		case 1247001946:
			return 76;
		case 1275912274:
			return 45;
		case 1333289277:
			return 20;
		case 1341193408:
			return 10;
		case 1356998909:
			return 80;
		case 1447875596:
			return 82;
		case 1495919075:
			return 74;
		case 1509485650:
			return 17;
		case 1546732394:
			return 34;
		case 1572090083:
			return 55;
		case 1608132015:
			return 38;
		case 1664203120:
			return 32;
		case 1679987408:
			return 54;
		case 1727267699:
			return 69;
		case 1728485678:
			return 28;
		case 1742416595:
			return 3;
		case 1766148221:
			return 77;
		case 1768495249:
			return 21;
		case 1900095956:
			return 18;
		case 1946296046:
			return 12;
		case 1968069853:
			return 24;
		case 1997267529:
			return 31;
		case 2000631014:
			return 84;
		case 2019620375:
			return 57;
		case 2037894795:
			return 9;
		case 2048982041:
			return 33;
		case 2063781084:
			return 13;
		case 2082272090:
			return 35;
		case 2089824257:
			return 26;
		case 2128780735:
			return 87;
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

bool func_1099(int iParam0)
{
	iVar0 = func_1098(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

float func_1100(var uParam0)
{
	if (uParam0->f_2 != 0)
	{
		fVar0 = func_1119(794259616, uParam0->f_2, uParam0->f_1, "");
		return fVar0;
	}
	return uParam0->f_1;
}

void func_1101(int iParam0)
{
	if (!func_1099(iParam0))
	{
		return;
	}
	iVar0 = func_1098(iParam0, 1);
	if (!func_1120(&(Global_1146212->f_2169[iVar0])))
	{
		return;
	}
	(*(*Global_1146212)[&Global_1146212->f_2169[iVar0]])[iVar0] = ((*Global_1146212)[&Global_1146212->f_2169[iVar0]][iVar0] - 1);
	if ((*Global_1146212)[&Global_1146212->f_2169[iVar0]][iVar0] > 0)
	{
		return;
	}
	(*(*Global_1146212)[&Global_1146212->f_2169[iVar0]])[iVar0] = 0;
	Global_1146212->f_2169[iVar0]->f_204 = 0;
	if (!func_1121(Global_1146212->f_2169[iVar0]->f_203))
	{
		return;
	}
	iVar1 = func_1122(Global_1146212->f_2169[iVar0]->f_203, 1);
	(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] = (&(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] - 1);
	if (&(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] > 0)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < Global_1146212->f_47561[iVar1]->f_23)
	{
		if (Global_1146212->f_47561[iVar1][iVar2] != &Global_1146212->f_2169[iVar0])
		{
		}
		else
		{
			(*Global_1146212->f_47561[iVar1])[iVar2] = -1;
			Global_1146212->f_47561[iVar1]->f_23 = (Global_1146212->f_47561[iVar1]->f_23 - 1);
			(*Global_1146212->f_47561[iVar1])[iVar2] = Global_1146212->f_47561[iVar1][Global_1146212->f_47561[iVar1]->f_23];
			(*Global_1146212->f_47561[iVar1])[Global_1146212->f_47561[iVar1]->f_23] = -1;
		}
		else
		{
			iVar2++;
		}
	}
}

bool func_1102(int iParam0)
{
	iVar0 = func_1103(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_1103(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2116044775:
			return 52;
		case -2103256604:
			return 12;
		case -2073453362:
			return 11;
		case -2041025962:
			return 64;
		case -1930487908:
			return 2;
		case -1913155192:
			return 41;
		case -1771755729:
			return 28;
		case -1751121159:
			return 53;
		case -1730553768:
			return 3;
		case -1655894020:
			return 25;
		case -1651690657:
			return 65;
		case -1604680733:
			return 10;
		case -1583192324:
			return 66;
		case -1511575465:
			return 34;
		case -1486292178:
			return 67;
		case -1328991329:
			return 5;
		case -1136429013:
			return 45;
		case -1115905480:
			return 31;
		case -1026481003:
			return 6;
		case -966751997:
			return 13;
		case -824728332:
			return 33;
		case -718742742:
			return 59;
		case -698163919:
			return 32;
		case -662966589:
			return 1;
		case -549693655:
			return 14;
		case -488644714:
			return 4;
		case -430422799:
			return 36;
		case -350459285:
			return 68;
		case -268774736:
			return 40;
		case -220644763:
			return 26;
		case -199042163:
			return 60;
		case -191252842:
			return 22;
		case -166765081:
			return 55;
		case -106166013:
			return 19;
		case -1:
			return 0;
		case 50982971:
			return 17;
		case 125946764:
			return 20;
		case 367160929:
			return 61;
		case 482459685:
			return 24;
		case 492808644:
			return 18;
		case 539654946:
			return 23;
		case 656937467:
			return 39;
		case 692490127:
			return 15;
		case 718630298:
			return 56;
		case 785261183:
			return 48;
		case 793826854:
			return 21;
		case 892655276:
			return 46;
		case 907911269:
			return 27;
		case 955977457:
			return 43;
		case 966561884:
			return 7;
		case 988751276:
			return 30;
		case 1037859088:
			return 51;
		case 1066450193:
			return 54;
		case 1159158432:
			return 62;
		case 1204983685:
			return 37;
		case 1242495215:
			return 9;
		case 1254069395:
			return 63;
		case 1341326366:
			return 58;
		case 1348456703:
			return 35;
		case 1398483650:
			return 50;
		case 1442295985:
			return 38;
		case 1527078018:
			return 42;
		case 1565429580:
			return 57;
		case 1696309427:
			return 44;
		case 1870637439:
			return 16;
		case 1898374676:
			return 49;
		case 2067881273:
			return 8;
		case 2093700568:
			return 47;
		case 2113555978:
			return 29;
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

void func_1104(int iParam0)
{
	iVar0 = player_ped_id();
	iVar1 = player_id();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_1123();
			break;
		case -2103256604:
			func_1124();
			break;
		case 692490127:
			_remove_ped_wound_effect(iVar0, 0f);
			break;
		case 50982971:
			_0xa5950e16b8f31052(iVar0, 0, 0);
			_0xc5cb91d65852ed7e(func_1125(iParam0));
			break;
		case 1870637439:
			_0xc5cb91d65852ed7e(func_1125(iParam0));
			break;
		case 492808644:
			_0xc5cb91d65852ed7e(func_1125(iParam0));
			break;
		case 125946764:
			_0x3fc4c027fd0936f4(5);
			func_152(105, 1);
			break;
		case -106166013:
			_0xc5cb91d65852ed7e(func_1125(iParam0));
			break;
		case 1204983685:
			disable_attribute_overpower(iVar0, 0);
			disable_attribute_overpower(iVar0, 19);
			disable_attribute_overpower(iVar0, 1);
			disable_attribute_overpower(iVar0, 18);
			break;
		case 1442295985:
			_0x442b4347b6ec36e8(iVar0, 0, true);
			break;
		case 656937467:
			_0x3fc4c027fd0936f4(15);
			break;
		case -430422799:
			disable_attribute_overpower(iVar0, 0);
			disable_attribute_overpower(iVar0, 19);
			break;
		case 539654946:
			_0x5f8e0303c229c84b(iVar1, "");
			break;
		case -1655894020:
		case 482459685:
		case 907911269:
			func_1127(func_1126(iParam0));
			break;
		case -1771755729:
		case -220644763:
			_0x768e81ae285a4b67(iVar1, 0);
			_0xe910932f4b30be23(iVar1);
			_0x0e9057a9da78d0f8(iVar1, 8);
			_0x263d69767f76059c(iVar1, 0);
			break;
		case 2113555978:
			_0xaf4d239b8903fcbe();
			_0x768e81ae285a4b67(iVar1, 0);
			_0xe910932f4b30be23(iVar1);
			_0x0e9057a9da78d0f8(iVar1, 8);
			_0x263d69767f76059c(iVar1, 0);
			break;
		case 785261183:
			_0xce285a4413b00b7f(iVar1, 1);
			break;
		case 1898374676:
			_0x39363dfd04e91496(iVar1, 0);
			break;
		case 1398483650:
			_0xdfc85c5199045026(iVar1, 1f);
			_0x6fa957d1b55941c1(iVar1, -1f);
			break;
		case 793826854:
			func_1128();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_1120(17);
			break;
		case -824728332:
			func_1120(16);
			break;
	}
}

bool func_1105(int iParam0)
{
	iVar0 = func_1106(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_1106(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1290685708:
			return 1;
		case -1038992817:
			return 5;
		case -950874556:
			return 4;
		case -290151400:
			return 3;
		case 0:
			return 0;
		case 1938826026:
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

int func_1107(int iParam0)
{
	iVar0 = func_1129(iParam0);
	Var1.f_3 = 1065353216;
	Var1.f_5 = -1;
	Var1.f_6 = 3;
	Var1.f_6.f_1 = -1;
	Var1.f_6.f_1.f_3 = -1;
	Var1.f_6.f_1.f_3.f_3 = -1;
	Var1.f_17 = 5;
	Var32.f_3 = 1065353216;
	Var32.f_5 = -1;
	Var32.f_6 = 3;
	Var32.f_6.f_1 = -1;
	Var32.f_6.f_1.f_3 = -1;
	Var32.f_6.f_1.f_3.f_3 = -1;
	Var32.f_17 = 5;
	iVar63 = -1;
	iVar65 = 0;
	while (iVar65 < Global_1146212->f_35859.f_11700)
	{
		iVar64 = func_1080(&(Global_1146212->f_35859.f_9503[iVar65]), 1);
		if (Global_1146212->f_35859.f_3116[iVar64]->f_4 != iParam0)
		{
		}
		else if (&Global_1146212->f_35859.f_9503[iVar65] == iVar0)
		{
		}
		else if (!func_1130(&(Global_1146212->f_35859.f_9503[iVar65]), Global_1146212->f_35859.f_9503[iVar65]->f_1))
		{
		}
		else
		{
			Var1 = { func_1131(&(Global_1146212->f_35859.f_9503[iVar65])) };
			if (Var1.f_5 > Var32.f_5)
			{
				Var32 = { Var1 };
				iVar63 = iVar65;
			}
		}
		iVar65++;
	}
	return iVar63;
}

bool func_1108(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return true;
}

void func_1109(int iParam0)
{
	if (!func_1099(iParam0))
	{
		return;
	}
	iVar0 = func_1098(iParam0, 1);
	if (!func_1120(&(Global_1146212->f_2169[iVar0])))
	{
		return;
	}
	(*(*Global_1146212)[&Global_1146212->f_2169[iVar0]])[iVar0] = (*Global_1146212)[&Global_1146212->f_2169[iVar0]][iVar0] + 1;
	Global_1146212->f_2169[iVar0]->f_204 = 1;
	if (!func_1121(Global_1146212->f_2169[iVar0]->f_203))
	{
		return;
	}
	iVar1 = func_1122(Global_1146212->f_2169[iVar0]->f_203, 1);
	(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] = &(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] + 1;
	iVar2 = 0;
	while (iVar2 < Global_1146212->f_47561[iVar1]->f_23)
	{
		if (Global_1146212->f_47561[iVar1][iVar2] == &Global_1146212->f_2169[iVar0])
		{
			return;
		}
		iVar2++;
	}
	(*Global_1146212->f_47561[iVar1])[Global_1146212->f_47561[iVar1]->f_23] = &Global_1146212->f_2169[iVar0];
	Global_1146212->f_47561[iVar1]->f_23++;
}

bool func_1110(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		bVar0 = func_1132(794259616, uParam0->f_1, 1, "");
		return bVar0;
	}
	return true;
}

void func_1111(int iParam0)
{
	iVar0 = player_ped_id();
	iVar1 = player_id();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_1123();
			break;
		case -2103256604:
			func_1124();
			break;
		case 692490127:
			_set_ped_wound_effect(iVar0, 2, 2.019411E-41f, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case 50982971:
			_0xa5950e16b8f31052(iVar0, 1, 0);
			animpostfx_play(func_1125(iParam0));
			break;
		case 1870637439:
			animpostfx_play(func_1125(iParam0));
			break;
		case 492808644:
			animpostfx_play(func_1125(iParam0));
			break;
		case 125946764:
			_0xfb6e111908502871(5);
			func_152(104, 1);
			break;
		case -106166013:
			animpostfx_play(func_1125(iParam0));
			break;
		case 1204983685:
			break;
		case 656937467:
			_0xfb6e111908502871(15);
			break;
		case 539654946:
			_0x5f8e0303c229c84b(iVar1, "focusfire");
			break;
		case 482459685:
			iVar2 = func_1126(iParam0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_1133(iParam0, 0));
			func_1134(iVar2, 0, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_1133(iParam0, 1));
			func_1134(iVar2, 1, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_1133(iParam0, 2));
			func_1134(iVar2, 2, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_1133(iParam0, 3));
			func_1134(iVar2, 2, 1, iVar3, 0);
			break;
		case -1655894020:
			iVar2 = func_1126(iParam0);
			func_1134(iVar2, 3, 1, -1, 1);
			break;
		case 907911269:
			iVar2 = func_1126(iParam0);
			func_1134(iVar2, 4, 1, -1, 0);
			break;
		case -220644763:
			_0x768e81ae285a4b67(iVar1, 1014693585);
			_0x2b12b6fc8b8772ab(iVar1, 8);
			_0x131e294ef60160df(iVar1, 0f, 0f, 0f, 1f, 8);
			_0x263d69767f76059c(iVar1, 1);
			break;
		case -1771755729:
			_0x768e81ae285a4b67(iVar1, 1936842089);
			_0x2b12b6fc8b8772ab(iVar1, 8);
			_0x131e294ef60160df(iVar1, 0f, 0f, 0f, 1f, 8);
			_0x263d69767f76059c(iVar1, 1);
			break;
		case 2113555978:
			_0x249cd6b7285536f2(0f, 2f, 2f);
			_0x768e81ae285a4b67(iVar1, 1979474018);
			_0x2b12b6fc8b8772ab(iVar1, 25);
			_0x263d69767f76059c(iVar1, 2);
			break;
		case 785261183:
			_0xce285a4413b00b7f(iVar1, 0);
			break;
		case 1898374676:
			_0x39363dfd04e91496(iVar1, 1);
			break;
		case 1398483650:
			_0xdfc85c5199045026(iVar1, 0.5f);
			_0x6fa957d1b55941c1(iVar1, 2f);
			break;
		case 793826854:
			func_1135();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_1120(17);
			break;
		case -824728332:
			func_1120(16);
			break;
	}
}

void func_1112(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_1136(iParam0);
	if (is_string_null_or_empty(sVar0))
	{
		return;
	}
	sVar1 = func_1137(iParam0);
	if (is_string_null_or_empty(sVar1))
	{
		return;
	}
	_play_sound_from_entity(sVar0, Global_1296859->f_8, sVar1, false, 0, 0);
}

bool func_1113(int iParam0)
{
	iVar0 = func_1049(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_1114(int iParam0)
{
	iVar0 = func_1049(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_1115(int iParam0)
{
	iVar0 = func_1049(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_1116(int iParam0)
{
	iVar0 = func_1049(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_1117(int iParam0)
{
	iVar0 = func_1049(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_1118(int iParam0)
{
	iVar0 = func_1049(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

float func_1119(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	if (func_1138(iParam0, iParam1, &Var0))
	{
		fVar22 = _network_try_access_tunable_float(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = _network_try_access_tunable_float(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

bool func_1120(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	if (_0x8f4f050054005c27(&(Global_1146212->f_2166), iParam0))
	{
		return true;
	}
	if (Global_1146212->f_2165 >= 21)
	{
		return false;
	}
	Global_1146212->f_2143[Global_1146212->f_2165] = iParam0;
	Global_1146212->f_2165++;
	return true;
}

bool func_1121(int iParam0)
{
	iVar0 = func_1122(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_1122(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1745889187:
			return 3;
		case -1016837116:
			return 5;
		case 0:
			return 0;
		case 370243254:
			return 4;
		case 1213888609:
			return 2;
		case 1416591065:
			return 1;
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

void func_1123()
{
	if (Global_1146212->f_21645[3]->f_208)
	{
		bVar0 = true;
	}
	set_ped_config_flag(Global_1296859->f_8, 550, bVar0);
	if (Global_1146212->f_21645[4]->f_208)
	{
		if (!func_82((*Global_1298536)[&Global_1296859]->f_86, 1))
		{
			bVar1 = true;
		}
	}
	set_ped_config_flag(Global_1296859->f_8, 556, bVar1);
}

void func_1124()
{
	bVar0 = false;
	if (Global_1146212->f_21645[12]->f_208)
	{
		bVar0 = true;
	}
	set_ped_config_flag(Global_1296859->f_8, 263, bVar0);
}

char* func_1125(int iParam0)
{
	switch (iParam0)
	{
		case 1870637439:
			return "MP_ArrowDrain";
		case 492808644:
			return "MP_ArrowDisorient";
		case 50982971:
			return "MP_ArrowTracking";
		case -106166013:
			return "MP_MoonshineToxic";
		default:
			break;
	}
	return "";
}

int func_1126(int iParam0)
{
	switch (iParam0)
	{
		case 482459685:
			return -843895567;
		case -1655894020:
			return -1655894020;
		case 907911269:
			return 907911269;
		default:
			break;
	}
	return 0;
}

void func_1127(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((*Global_1193972)[iVar0]->f_5 == iParam0)
		{
			(*Global_1193972)[iVar0]->f_7 = 1;
			(*Global_1193972)[iVar0]->f_5 = 0;
		}
		iVar0++;
	}
}

void func_1128()
{
	set_ped_config_flag(Global_1296859->f_8, 305, false);
	_0x801917e7d7bce418(Global_1296859->f_8);
}

int func_1129(int iParam0)
{
	if (!func_1105(iParam0))
	{
		return -1;
	}
	iVar0 = func_1106(iParam0, 1);
	return &(Global_1146212->f_35859.f_9286[iVar0]);
}

bool func_1130(int iParam0, int iParam1)
{
	if (!func_1087(iParam0))
	{
		return false;
	}
	iVar0 = func_1080(iParam0, 1);
	iVar2 = Global_1146212->f_35859.f_3116[iVar0]->f_4;
	if (func_1089(*Global_1146212->f_35859.f_3116[iVar0]))
	{
		iVar3 = &Global_1146212->f_35859.f_9286[func_1106(iVar2, 1)];
		Var4 = { func_1131(iVar3) };
		if (iVar3 != iParam0 && Global_1146212->f_35859.f_3116[iVar0]->f_5 <= Var4.f_5)
		{
			return false;
		}
	}
	switch (&Global_1146212->f_35859.f_3116[iVar0])
	{
		case -1606735498:
		case -1455211650:
		case -1324410551:
		case -1276912520:
		case -1028878953:
		case -992973338:
		case -971275364:
		case -932644421:
		case -590004554:
		case -528257357:
		case -193993646:
		case -166662497:
		case -23641105:
		case 37083370:
		case 52193493:
		case 180258367:
		case 429965152:
		case 461381338:
		case 522523138:
		case 589907865:
		case 979390476:
		case 1028557598:
		case 1154303630:
		case 1254162401:
		case 1269394302:
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case 1759133423:
		case 1810352391:
		case 1915097582:
		case 1921800945:
		case 2046842849:
		case 2116793692:
			return true;
		case 1245579893:
			if (!func_1139() && !func_1140())
			{
				return false;
			}
			return true;
		case -2010146101:
			if (!func_1139())
			{
				return false;
			}
			return true;
		case -2139108927:
			iVar1 = func_1086(iParam1);
			if (iVar1 == &Global_1296859)
			{
				return false;
			}
			return true;
		case -2129621195:
			iVar1 = func_1086(iParam1);
			if (iVar1 == &Global_1296859)
			{
				return false;
			}
			if (!_0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
			{
				return false;
			}
			if (!_0x81fb74c83c2ed69f(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			return true;
		case 190804938:
			iVar1 = func_1086(iParam1);
			if (!_network_is_player_index_valid(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (iVar1 != &Global_1296859 && !func_761(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (!func_752(512, iVar1))
			{
				return false;
			}
			return true;
		case -1503245593:
			if (!&Global_1956200->f_1716[8])
			{
				return false;
			}
			iVar1 = func_1086(iParam1);
			if (!_network_is_player_index_valid(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (_0x0c31c51168e80365(Global_1296859->f_8) != get_player_ped(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

struct<31> func_1131(int iParam0)
{
	iVar0 = func_1080(iParam0, 1);
	return *Global_1146212->f_35859.f_3116[iVar0];
}

bool func_1132(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	if (func_1138(iParam0, iParam1, &Var0))
	{
		bVar22 = _network_try_access_tunable_bool(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = _network_try_access_tunable_bool(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_1133(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 482459685:
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
				case 1:
					return "CP_CHEST";
				case 2:
					return "CP_R_UpperArm";
				case 3:
					return "CP_L_UpperArm";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_1134(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!does_particle_fx_looped_exist(Global_1193972[iVar0]) && !(*Global_1193972)[iVar0]->f_6)
		{
			(*Global_1193972)[iVar0]->f_5 = iParam0;
			(*Global_1193972)[iVar0]->f_1 = iParam1;
			(*Global_1193972)[iVar0]->f_2 = iParam2;
			(*Global_1193972)[iVar0]->f_3 = iParam3;
			(*Global_1193972)[iVar0]->f_4 = iParam4;
			(*Global_1193972)[iVar0]->f_6 = 1;
			return;
		}
		iVar0++;
	}
}

void func_1135()
{
	set_ped_config_flag(Global_1296859->f_8, 305, true);
	_0x05ce6af4df071d23(Global_1296859->f_8, 0.7f);
}

char* func_1136(int iParam0)
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

char* func_1137(int iParam0)
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

bool func_1138(int iParam0, int iParam1, var uParam2)
{
	Var0 = -178401592;
	Var0.f_1 = iParam0;
	Var0.f_2 = -421429484;
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	_0x91ded5dd64bb2691(&Var0);
	if (_0x44b3a36933ac009c(&iVar7, &Var0, -421429484))
	{
		*uParam2 = iParam0;
		uParam2->f_9 = iParam1;
		StringCopy(&(uParam2->f_1), "", 64);
		StringIntConCat(&(uParam2->f_1), iVar7, 64);
		_0x44b3a36933ac009c(&iVar7, &Var0, 828747869);
		uParam2->f_10.f_3 = func_1141(iVar7);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
		switch (uParam2->f_10.f_3)
		{
			case 0:
				if (!_0x52fc26d2d2fc2987(&(uParam2->f_10), &Var0, -455129387))
				{
				}
				break;
			case 1:
				if (!_0xb2b42607f7867576(&(uParam2->f_10.f_1), &Var0, -455129387))
				{
				}
				break;
			case 2:
				if (!_0xa63cd20f19b961ab(&(uParam2->f_10.f_2), &Var0, -455129387))
				{
				}
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				_0x52fc26d2d2fc2987(&(uParam2->f_14), &Var0, -30349581);
				break;
			case 1:
				_0xb2b42607f7867576(&(uParam2->f_14.f_1), &Var0, -30349581);
				break;
			case 2:
				_0xa63cd20f19b961ab(&(uParam2->f_14.f_2), &Var0, -30349581);
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				_0x52fc26d2d2fc2987(&(uParam2->f_18), &Var0, 1616931012);
				break;
			case 1:
				_0xb2b42607f7867576(&(uParam2->f_18.f_1), &Var0, 1616931012);
				break;
			case 2:
				_0xa63cd20f19b961ab(&(uParam2->f_18.f_2), &Var0, 1616931012);
				break;
		}
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		return true;
	}
	return false;
}

bool func_1139()
{
	return Global_1572887->f_6;
}

bool func_1140()
{
	if (!&Global_1048577)
	{
		return false;
	}
	if (!func_366(func_365(0)))
	{
		return false;
	}
	if (&Global_3145858 != -504335712)
	{
		return false;
	}
	if (func_416(Global_524288->f_40400))
	{
		return true;
	}
	return false;
}

int func_1141(int iParam0)
{
	switch (iParam0)
	{
		case 556453026:
			iVar0 = 0;
			break;
		case -680700887:
			iVar0 = 1;
			break;
		case -945474286:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

