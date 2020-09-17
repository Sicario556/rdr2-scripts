void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	Local_18.f_46 = uVar3512;
	if (has_force_cleanup_occurred(2698))
	{
		func_1(&Local_18);
	}
	func_2();
	func_3();
	func_4();
	func_5();
	func_6(&(Local_18.f_1721));
	func_7(&(Local_18.f_1797));
	func_8(&(Local_18.f_1869));
	func_9();
	func_10(&Local_18);
	while (func_11())
	{
		wait(0);
		bVar0 = func_12(16);
		func_13(&(Local_18.f_1721));
		func_13(&(Local_18.f_1797));
		func_13(&(Local_18.f_1869));
		func_13(&(Local_18.f_1934));
		func_14();
		func_15();
		func_16();
		if (!bVar0)
		{
			if (func_17())
			{
				func_18(Local_18.f_3054, Local_18.f_3055, Global_1357549->f_1900);
			}
		}
		switch (Local_18)
		{
			case 0:
				if (func_19())
				{
					func_20(1);
				}
				break;
			case 1:
				func_21(&Local_18);
				func_22();
				func_23();
				func_24();
				func_25();
				func_26();
				func_27(&(Local_18.f_2024), &(Global_40.f_4283.f_415));
				if (!bVar0)
				{
					func_28();
					func_29();
					func_30();
				}
				func_31(&Local_18);
				iVar1 = func_32();
				if (!bVar0 && iVar1 == 1)
				{
					func_33(Local_18.f_45, Local_18.f_46);
					if (func_34(Local_18.f_45))
					{
						func_35(Local_18.f_45, &(Local_18.f_2024));
						func_36(0);
						func_37();
						func_39(func_38(4194304));
					}
				}
				else
				{
					func_40(Local_18.f_45);
				}
				func_41(Global_1898004, Local_18.f_46);
				func_42(&Local_18);
				if (!bVar0)
				{
					func_43(&(Local_18.f_51), &(Local_18.f_2024));
				}
				if (func_38(32768))
				{
					func_44(&(Global_1357549->f_3));
					func_45(&Local_18);
					func_46();
					if (func_47(Local_18.f_45, iVar1))
					{
						func_48(&(Global_1357549->f_1691));
					}
					func_49(&Local_18);
					func_50(32768);
				}
				if (func_51() && func_47(Local_18.f_45, iVar1))
				{
					func_52(Local_18.f_45, &(Global_1357549->f_1691));
				}
				else if (Global_1357549->f_1691 != 0)
				{
					func_48(&(Global_1357549->f_1691));
				}
				break;
			case 2:
				func_53(&Local_18, 0);
				func_54("Shutdown camp....", 1, 1);
				terminate_this_thread();
				break;
		}
		func_55();
	}
	func_53(&Local_18, 0);
	if (func_56() == -1)
	{
	}
	else
	{
		func_57();
	}
}

void func_1(int iParam0)
{
	func_53(iParam0, 1);
	func_58(iParam0->f_46, 1);
	if (network_get_this_script_is_network_script())
	{
	}
	else
	{
		terminate_this_thread();
	}
}

void func_2()
{
	Local_18.f_40 = 0;
	Local_18.f_41 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Local_18.f_14[iVar0] = 0;
		iVar0++;
	}
}

void func_3()
{
	func_60(0, 12797, 0);
	func_60(1, 13154, 1);
	func_60(2, 13170, 1);
	func_60(3, 13233, 1);
	func_60(4, 13264, 2);
	func_60(5, 13378, 16);
	func_60(6, 13513, 1);
	func_60(7, 14127, 4);
	func_60(8, 14221, 1);
	func_60(9, 14351, 128);
	func_60(10, 14360, 792);
	func_60(11, 14408, 1024);
}

void func_4()
{
	if (network_is_game_in_progress())
	{
		func_72(32, -1);
		func_73();
		func_74();
		set_this_script_can_be_paused(false);
		register_script_with_audio(1);
	}
}

void func_5()
{
	func_75(32);
}

void func_6(var uParam0)
{
	Var0.f_1 = 20;
	_copy_memory(uParam0, &Var0, 65);
	func_79(uParam0, 0, 15088, 15192, 15631);
	func_79(uParam0, 1, 15919, 15965, 16432);
	func_79(uParam0, 2, 16462, 16500, 16928);
	func_79(uParam0, 3, 16958, 16984, 17063);
	func_79(uParam0, 4, 17071, 17225, 17063);
	func_91(uParam0, 0);
}

void func_7(var uParam0)
{
	Var0.f_1 = 20;
	_copy_memory(uParam0, &Var0, 65);
	func_79(uParam0, 0, 17297, 17375, 17063);
	func_79(uParam0, 1, 18531, 18658, 17063);
	func_79(uParam0, 2, 17063, 19500, 17063);
	func_79(uParam0, 3, 19658, 20204, 17063);
	func_79(uParam0, 4, 20832, 21062, 17063);
	func_79(uParam0, 5, 21485, 21518, 17063);
	func_79(uParam0, 6, 22235, 22320, 17063);
	func_91(uParam0, 0);
}

void func_8(var uParam0)
{
	Var0.f_1 = 20;
	_copy_memory(uParam0, &Var0, 65);
	func_79(uParam0, 0, 22375, 22457, 17063);
	func_79(uParam0, 1, 22778, 22814, 17063);
	func_79(uParam0, 2, 23283, 23414, 23823);
	func_79(uParam0, 3, 23842, 23909, 24313);
	func_91(uParam0, 0);
}

void func_9()
{
	Var0.f_1 = 20;
	_copy_memory(&(Local_18.f_1934), &Var0, 65);
	func_79(&(Local_18.f_1934), 0, 24382, 24419, 17063);
	func_79(&(Local_18.f_1934), 1, 24602, 24625, 17063);
	func_79(&(Local_18.f_1934), 2, 24830, 24877, 17063);
	func_79(&(Local_18.f_1934), 3, 25151, 25202, 17063);
	func_79(&(Local_18.f_1934), 4, 25221, 25277, 17063);
	func_91(&(Local_18.f_1934), 0);
}

void func_10(var uParam0)
{
	uParam0->f_45 = 5;
	uParam0->f_47 = 5;
	uParam0->f_1714 = { func_125(uParam0->f_45) };
	uParam0->f_1717 = 0f;
	uParam0->f_49 = 1;
}

bool func_11()
{
	return true;
}

bool func_12(int iParam0)
{
	switch (func_56())
	{
		case -1:
			return (Global_1357549->f_1494 && iParam0) != 0;
	}
	return false;
}

void func_13(var uParam0)
{
	iVar0 = 0;
	if (uParam0->f_62 != -1 && uParam0->f_64 == -1)
	{
		Call_Loc(uParam0->f_1[uParam0->f_62]->f_1);
		uParam0->f_64 = StackVal;
	}
	while (uParam0->f_64 != -1)
	{
		if (uParam0->f_62 != -1)
		{
			Call_Loc(uParam0->f_1[uParam0->f_62]->f_2);
		}
		uParam0->f_62 = uParam0->f_64;
		Call_Loc(&uParam0->f_1[uParam0->f_62]);
		Call_Loc(uParam0->f_1[uParam0->f_62]->f_1);
		uParam0->f_64 = StackVal;
		iVar0++;
		if (iVar0 > 10)
		{
		}
	else
	{
		}
	}
}

void func_14()
{
	if (func_38(1) && func_126(0, 0, 1))
	{
		return;
	}
	if (!_does_volume_exist(&(Global_1357549->f_3[0])) || !_does_volume_exist(&(Global_1357549->f_3[2])))
	{
		return;
	}
	if ((func_127(&Global_1935630, 16384) || func_130(func_129(func_128()), 256)) || _0x99f92061efe908ba())
	{
		return;
	}
	iVar0 = func_131(Global_1359489->f_10);
	if (func_132(iVar0, Global_1359489->f_10))
	{
		func_133(iVar0);
	}
	iVar1 = Local_18.f_1712;
	if (func_132(Global_1357549->f_1675[iVar1]->f_3, -1))
	{
		func_133(Global_1357549->f_1675[iVar1]->f_3);
	}
	iVar2 = Local_18.f_1712 + 1;
	if (iVar2 >= 3)
	{
		iVar2 = 0;
	}
	Local_18.f_1712 = iVar2;
}

void func_15()
{
	if (func_134())
	{
		if (!func_135())
		{
			func_136(1);
			func_137(32);
		}
	}
	else if (func_12(32768))
	{
		if (func_138(&uVar0))
		{
			if (!func_135())
			{
				func_136(1);
			}
			func_139();
			func_140(32);
			func_136(0);
		}
		if (func_135())
		{
			func_136(0);
		}
		if ((func_141() == 7 && func_142()) && !func_143(67))
		{
			if (!func_144(-999503751))
			{
				func_145(-999503751);
			}
			if (!func_144(81053684))
			{
				func_145(81053684);
			}
			if (!func_144(-1719060085))
			{
				func_145(-1719060085);
			}
			if (!func_144(-2061583405))
			{
				func_145(-2061583405);
			}
		}
	}
	else
	{
		if (!func_135())
		{
			func_136(1);
			func_137(32);
		}
		if ((func_141() == 7 && func_142()) && !func_143(67))
		{
			if (func_144(-999503751))
			{
				func_146(-999503751);
			}
			if (func_144(81053684))
			{
				func_146(81053684);
			}
			if (func_144(-1719060085))
			{
				func_146(-1719060085);
			}
			if (func_144(-2061583405))
			{
				func_146(-2061583405);
			}
		}
	}
}

void func_16()
{
	func_147();
}

bool func_17()
{
	switch (Local_18.f_51.f_20)
	{
		case 14:
		case 15:
		case 16:
			return false;
		default:
			break;
	}
	return true;
}

void func_18(float fParam0, float fParam1, float fParam2)
{
	func_148(fParam0, fParam1, fParam2);
	func_150(func_149());
	func_151(_money_get_cash_balance());
}

bool func_19()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (is_bit_set(Local_18.f_41, iVar1))
		{
		}
		else
		{
			if (!is_bit_set(Local_18.f_40, iVar1))
			{
				if (func_152(iVar1))
				{
					set_bit(&(Local_18.f_40), iVar1);
					Local_18.f_27[iVar1] = get_game_timer() + 20000;
				}
			}
			if (is_bit_set(Local_18.f_40, iVar1))
			{
				Call_Loc(&Local_18.f_1[iVar1]);
				if (StackVal)
				{
					set_bit(&(Local_18.f_41), iVar1);
				}
				else if (get_game_timer() > &Local_18.f_27[iVar1])
				{
					set_bit(&(Local_18.f_41), iVar1);
				}
			}
			if (!is_bit_set(Local_18.f_41, iVar1))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_20(int iParam0)
{
	Local_18 = iParam0;
}

void func_21(int iParam0)
{
	func_153(iParam0);
	func_154(&(Global_1357549->f_3[0]), &(Global_1357549->f_3[2]), &(Global_1357549->f_3[4]), &(Global_1357549->f_3[5]));
	func_155(&(Global_1357549->f_3[2]));
	func_156(iParam0);
	func_157();
	if (func_12(32768))
	{
		if (is_entity_on_fire(Global_35))
		{
			stop_entity_fire(Global_35, 1);
		}
		if (!func_38(2048))
		{
			if (!func_12(64))
			{
				func_158(0);
			}
			_0x9461a8fab0378e5b(player_id(), 1);
			if (!func_38(67108864))
			{
				_0x24db6b9f2b719043(0.1f);
			}
		}
	}
	else if (func_38(2048))
	{
		_0x9461a8fab0378e5b(player_id(), 0);
	}
	if (!func_12(32768) && func_38(2048))
	{
		if (!func_12(64))
		{
			func_158(1);
		}
		if (!func_38(67108864))
		{
			_0x24db6b9f2b719043(-1f);
		}
	}
	if (func_38(512))
	{
		if (!func_38(2))
		{
			disable_control_action(0, -1616532217, false);
		}
	}
	if (func_159())
	{
		if (!func_12(1024))
		{
			set_audio_flag("EnableIdleMusic", false);
			func_140(1024);
		}
	}
	else if (func_12(1024))
	{
		set_audio_flag("EnableIdleMusic", true);
		func_137(1024);
	}
	if (get_game_timer() <= Global_1357549->f_1892)
	{
		func_160(4194304);
	}
	else
	{
		func_50(4194304);
	}
	if ((((!func_12(262144) && func_161(&(Global_1357549->f_3[2]), Global_36)) && !func_12(4)) && !func_12(2)) && func_141() != 8)
	{
		_0x632be8d84846fa56();
	}
	if (Local_18.f_2019 != 0)
	{
		if (!func_38(16777216))
		{
			_0x1392105da88bbffb(Local_18.f_2019, Local_18.f_2019.f_3, Local_18.f_2019.f_4, Local_18.f_2019.f_2, Local_18.f_2019.f_1);
			func_160(16777216);
		}
	}
	else if (func_38(16777216))
	{
		_0xe057fea9a22eb3ee(Local_18.f_2019);
		func_50(16777216);
	}
	if (func_162())
	{
		if (!func_130(Local_18.f_47, 64))
		{
			func_163(Local_18.f_47, 64);
		}
	}
	else if (func_130(Local_18.f_47, 64))
	{
		func_164(Local_18.f_47, 64);
	}
	Global_1357549->f_1484 = get_game_timer();
}

void func_22()
{
	if (func_159())
	{
		return;
	}
	if (Global_1357549->f_1658 == 0)
	{
		if ((get_clock_seconds() % 20) != 0)
		{
			return;
		}
	}
	Global_1357549->f_1659[0] = 0;
	Global_1357549->f_1659[1] = 1;
	sVar0 = "script@common@cnv_camp@grief@tent@tentgrief";
	fVar1 = 21f;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (_does_volume_exist(&(Global_1357549->f_1663[iVar2])) == 0)
		{
			Global_1357549->f_1663[iVar2] = func_165(&(Global_1357549->f_1659[iVar2]));
		}
		switch (Global_1357549->f_1658)
		{
			case 0:
				if (func_166(iVar2))
				{
					if (func_167(iVar2))
					{
						if (func_168(Global_1357549->f_1651[iVar2]))
						{
							if (func_169(Global_1357549->f_1651[iVar2]) > fVar1)
							{
								if (func_170(&(Global_1357549->f_1659[iVar2]), 1, 1) || func_171(&(Global_1357549->f_1659[iVar2]), 8))
								{
									Global_1357549->f_1666 = 0;
									Global_1357549->f_1667 = 0;
									Global_1357549->f_1658 = 1;
								}
							}
							else if (func_169(Global_1357549->f_1651[iVar2]) > (fVar1 - 5f) && Global_1357549->f_1666 == 0)
							{
								Global_1357549->f_1666 = 1;
								func_173(func_172(&(Global_1357549->f_1659[iVar2])), "EXPLAIN_YOURSELF", 272211449, Global_35, 1, 0, 0, 1);
								task_look_at_entity(func_172(&(Global_1357549->f_1659[iVar2])), Global_35, 2000, 0, 51, 0);
							}
							else if (func_169(Global_1357549->f_1651[iVar2]) > (fVar1 - 12f) && Global_1357549->f_1667 == 0)
							{
								Global_1357549->f_1667 = 1;
								task_look_at_entity(func_172(&(Global_1357549->f_1659[iVar2])), Global_35, 2000, 0, 51, 0);
								func_173(func_172(&(Global_1357549->f_1659[iVar2])), "INTRUDED_AGAIN", 272211449, Global_35, 1, 0, 0, 1);
							}
							else if (Global_1357549->f_1668 == 0)
							{
								if (func_174())
								{
									Global_1357549->f_1668 = 1;
									func_173(func_172(&(Global_1357549->f_1659[iVar2])), "ITEM_PICKUP_REACT", -128067431, Global_35, 1, 0, 0, 1);
								}
							}
						}
						else
						{
							func_173(func_172(&(Global_1357549->f_1659[iVar2])), "GET_OUT", 272211449, Global_35, 1, 0, 0, 1);
							func_175(Global_1357549->f_1651[iVar2], 0);
						}
					}
					else if (func_168(Global_1357549->f_1651[iVar2]))
					{
						Global_1357549->f_1666 = 0;
						Global_1357549->f_1667 = 0;
						Global_1357549->f_1668 = 0;
						func_176(Global_1357549->f_1651[iVar2]);
					}
				}
				break;
			case 1:
				if (func_168(Global_1357549->f_1651[iVar2]))
				{
					if (func_177(&(Global_1357549->f_1659[iVar2])))
					{
						Global_1357549->f_1669 = _create_anim_scene(sVar0, 0, 0, false, true);
						load_anim_scene(Global_1357549->f_1669);
						_0xdf7b5144e25cd3fe(Global_1357549->f_1669, func_178(&(Global_1357549->f_1659[iVar2])));
						Global_1357549->f_1658 = 5;
					}
					else
					{
						func_179(&(Global_1357549->f_1659[iVar2]), 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					}
				}
				break;
			case 5:
				if (func_168(Global_1357549->f_1651[iVar2]))
				{
					if (_does_anim_scene_exist(Global_1357549->f_1669))
					{
						if (_is_anim_scene_loaded(Global_1357549->f_1669, true, false))
						{
							if (_0x23e33cb9f4a3f547(Global_1357549->f_1669, func_178(&(Global_1357549->f_1659[iVar2]))))
							{
								func_180(&(Global_1357549->f_1659[iVar2]));
								_set_anim_scene_playback_list_bool(Global_1357549->f_1669, func_178(&(Global_1357549->f_1659[iVar2])), true);
								set_ped_config_flag(Global_35, 174, true);
								start_anim_scene(Global_1357549->f_1669);
								func_173(func_172(&(Global_1357549->f_1659[iVar2])), "LEAVE_NOW", 272211449, Global_35, 1, 0, 0, 1);
								Global_1357549->f_1658 = 6;
							}
						}
					}
				}
				break;
			case 6:
				if (func_168(Global_1357549->f_1651[iVar2]))
				{
					if (_is_anim_scene_active(Global_1357549->f_1669))
					{
						set_gameplay_cam_relative_heading(0f, 1f);
						set_gameplay_cam_relative_pitch(0f, 1f);
						_0xae6ada8fe7e84acc(Global_1357549->f_1669, func_178(&(Global_1357549->f_1659[iVar2])));
						reset_anim_scene(Global_1357549->f_1669, 0);
						_delete_anim_scene(Global_1357549->f_1669);
						clear_ped_tasks(Global_35, 1, 0);
						set_ped_relationship_group_hash(func_172(&(Global_1357549->f_1659[iVar2])), 1030835986);
						set_ped_config_flag(func_172(&(Global_1357549->f_1659[iVar2])), 40, false);
						set_player_control(player_id(), true, 0, false);
						_0x631cd2d77fdc0316(_0x32a1e3b83d501096(func_172(&(Global_1357549->f_1659[iVar2]))));
						func_181(&(Global_1357549->f_1659[iVar2]), 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
						func_182(Global_1357549->f_1651[iVar2]);
						Global_1357549->f_1658 = 7;
					}
				}
				break;
			case 7:
				if (func_168(Global_1357549->f_1651[iVar2]))
				{
					if (func_169(Global_1357549->f_1651[iVar2]) > 1.5f)
					{
						func_176(Global_1357549->f_1651[iVar2]);
						func_183(&(Global_1357549->f_1659[iVar2]));
						set_ped_config_flag(Global_35, 174, false);
						Global_1357549->f_1658 = 0;
					}
				}
				break;
		}
		iVar2++;
	}
}

void func_23()
{
	if (is_screen_faded_out())
	{
		return;
	}
	switch (Global_1357549->f_11)
	{
		case 0:
			func_184();
			Global_1357549->f_11 = 1;
			break;
		case 1:
			func_185();
			break;
		case 2:
			break;
	}
}

void func_24()
{
	iVar0 = func_141();
	if (((iVar0 == 0 || iVar0 == 7) || iVar0 == 4) || iVar0 == 5)
	{
		if (!func_186(1024))
		{
			func_187(1024);
			func_160(-2147483648);
		}
		if (!func_186(64))
		{
			func_187(64);
			func_160(-2147483648);
		}
		if (iVar0 == 7)
		{
			if (!func_38(131072))
			{
				func_160(131072);
				func_160(-2147483648);
			}
		}
	}
	else if (func_159() && !func_188())
	{
		if (!func_186(64))
		{
			func_187(64);
			func_160(-2147483648);
		}
	}
	else if (func_38(-2147483648))
	{
		if (func_186(1024))
		{
			func_189(1024);
		}
		if (func_186(64))
		{
			func_189(64);
		}
		if (func_38(131072))
		{
			func_50(131072);
		}
		func_50(-2147483648);
	}
}

void func_25()
{
	if (func_12(32768) && !func_38(2048))
	{
		if (func_38(4096))
		{
			return;
		}
		if (get_game_timer() < Local_18.f_50)
		{
			return;
		}
		if (func_126(0, 0, 1))
		{
			return;
		}
		func_160(4096);
	}
	if (func_38(4096))
	{
		if (get_game_timer() < Local_18.f_50)
		{
			return;
		}
		if (!func_190())
		{
			return;
		}
		if (!func_38(8192))
		{
			func_191();
			Local_18.f_50 = get_game_timer() + 5500;
			func_160(8192);
		}
		else
		{
			func_192();
			func_193();
			Local_18.f_50 = (get_game_timer() + 120000);
		}
	}
}

void func_26()
{
}

void func_27(var uParam0, var uParam1)
{
	if (uParam1->f_5 == -15)
	{
		func_194(&(uParam1->f_5));
	}
	if (func_195(uParam1->f_5) && func_196(uParam1->f_5))
	{
		func_197(uParam0, uParam1);
		func_194(&(uParam1->f_5));
	}
}

void func_28()
{
	if (func_198(2))
	{
		if (func_199())
		{
			if (func_143(15))
			{
				if (func_143(4) && !func_143(37))
				{
					if (!func_200(605) && !func_201(605))
					{
						func_202(605, 0);
					}
				}
				else if (func_143(43))
				{
					if (!func_200(605) && !func_201(605))
					{
						func_202(605, 0);
					}
				}
			}
		}
		if (func_142() && func_143(73))
		{
			if (!func_200(606) && !func_201(606))
			{
				func_202(606, 0);
			}
		}
	}
	if (func_203() && !func_200(538))
	{
		if ((does_blip_exist(Local_18.f_51.f_14) && does_blip_exist(Local_18.f_51.f_15)) && does_blip_exist(Local_18.f_51.f_13))
		{
			func_202(538, 0);
		}
	}
}

void func_29()
{
	if (does_entity_exist(Global_35) && !is_entity_dead(Global_35))
	{
		iVar1 = 0;
		while (iVar1 < 15)
		{
			switch (Local_18.f_3057[iVar1]->f_3)
			{
				case 0:
					if (func_38(4))
					{
						if (func_204(&(Local_18.f_3057[iVar1])))
						{
							func_205(Local_18.f_3057[iVar1], 1, 1);
						}
					}
					else if (_does_volume_exist(Local_18.f_3057[iVar1]->f_4))
					{
						if (is_entity_in_volume(Global_35, Local_18.f_3057[iVar1]->f_4, false, 0))
						{
							if (!func_206(Local_18.f_3057[iVar1]->f_6))
							{
								if (!func_204(&(Local_18.f_3057[iVar1])))
								{
									Local_18.f_3057[iVar1] = func_208(func_207(), Local_18.f_3057[iVar1]->f_16, Local_18.f_3057[iVar1]->f_4, 2, 1, 0, Local_18.f_3057[iVar1]->f_17, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
									if ((iVar1 == 0 || iVar1 == 8) || iVar1 == 4)
									{
										func_209(&(Local_18.f_3057[iVar1]), 26, 1, 1);
									}
									if (Local_18.f_3057[iVar1]->f_18 != -1)
									{
										func_210(&(Local_18.f_3057[iVar1]), Local_18.f_3057[iVar1]->f_18, 0, 1);
									}
								}
								else if ((Local_18.f_3057[iVar1]->f_17 == 0 && func_211(&(Local_18.f_3057[iVar1]), 1)) || (Local_18.f_3057[iVar1]->f_17 != 0 && func_212(&(Local_18.f_3057[iVar1]), 1)))
								{
									func_205(Local_18.f_3057[iVar1], 1, 1);
									Local_18.f_3057[iVar1]->f_3 = 1;
								}
							}
						}
					}
					break;
				case 1:
					if (func_213(Global_35, 0, 1, 1) == -160924582)
					{
						_hide_ped_weapons(Global_35, 2, false);
					}
					open_sequence_task(&iVar0);
					task_look_at_coord(0, Local_18.f_3057[iVar1]->f_6, -1, 1, 51, 1);
					task_pause(0, 400);
					task_turn_ped_to_face_coord(0, Local_18.f_3057[iVar1]->f_6, 0);
					close_sequence_task(iVar0);
					clear_ped_tasks(Global_35, 1, 0);
					task_perform_sequence(Global_35, iVar0);
					clear_sequence_task(&iVar0);
					set_player_control(player_id(), false, 0, false);
					Local_18.f_3057[iVar1]->f_3 = 2;
					break;
				case 2:
					if (!does_cam_exist(Local_18.f_3057[iVar1]->f_5))
					{
						if (!func_206(Local_18.f_3057[iVar1]->f_9))
						{
							Local_18.f_3057[iVar1]->f_5 = create_camera_with_params(26379945, Local_18.f_3057[iVar1]->f_9, Local_18.f_3057[iVar1]->f_12, Local_18.f_3057[iVar1]->f_15, false, 2);
						}
					}
					if (Local_18.f_3057[iVar1]->f_19 != -1)
					{
						func_214(iVar1);
						if (func_204(Local_18.f_3057[iVar1]->f_1))
						{
							if (func_215(iVar1))
							{
							}
							else
							{
								if (func_206(Local_18.f_3057[iVar1]->f_9))
								{
									if (!is_gameplay_hint_active())
									{
										set_gameplay_coord_hint(Local_18.f_3057[iVar1]->f_6, -1, 2000, 2000, 0);
									}
								}
								else if (does_cam_exist(Local_18.f_3057[iVar1]->f_5))
								{
									if (!is_cam_rendering(Local_18.f_3057[iVar1]->f_5))
									{
										set_cam_active(Local_18.f_3057[iVar1]->f_5, true);
										render_script_cams(true, false, 3000, true, false, 0);
									}
								}
								func_216(iVar1);
								_uiprompt_set_ambient_group_this_frame(Global_35, 1f, 2, 1, 799218720, Local_18.f_3057[iVar1]->f_20, 0);
								if (func_204(Local_18.f_3057[iVar1]->f_2))
								{
									if (func_217(Local_18.f_3057[iVar1]->f_2, 1))
									{
										if (Local_18.f_3057[iVar1]->f_19 != -1)
										{
											iVar2 = 0;
											while (iVar2 < 15)
											{
												Local_18.f_3057[iVar2]->f_3 = 0;
												func_205(Local_18.f_3057[iVar2], 1, 1);
												func_205(&(Local_18.f_3057[iVar2]->f_1), 1, 1);
												func_205(&(Local_18.f_3057[iVar2]->f_2), 1, 1);
												iVar2++;
											}
										}
										Local_18.f_3057[iVar1]->f_3 = 4;
									}
								}
								Jump @1081; //curOff = 1059
								Jump @1081; //curOff = 1062
								func_218(Local_18.f_3057[iVar1]);
							}
							iVar1++;
						}
					}
					default:
						break;
			}
		}
	}
}

void func_30()
{
	iVar0 = 0;
	if (func_219(player_ped_id()))
	{
		iVar0 = get_mount(player_ped_id());
	}
	else
	{
		iVar0 = _get_last_mount(player_ped_id());
	}
	if (func_220(iVar0))
	{
		if (func_221(iVar0) && func_222(iVar0))
		{
			if (Global_1357549->f_1897 != iVar0)
			{
				if (does_entity_exist(Global_1357549->f_1897))
				{
					func_223();
				}
				func_224(iVar0, Local_18.f_45, 1);
			}
		}
		else if (does_entity_exist(Global_1357549->f_1897) && Global_1357549->f_1897 == iVar0)
		{
			func_223();
		}
		else if ((does_entity_exist(Global_1357549->f_1897) && Global_1357549->f_1897 != iVar0) && func_219(player_ped_id()))
		{
			iVar1 = func_225(get_entity_coords(iVar0, true, false), 2);
			if (_does_scenario_point_exist(iVar1))
			{
				if (func_226(iVar0, _get_scenario_point_coords(iVar1, true), 1) < 8f)
				{
					if (!func_200(604))
					{
						func_202(604, 0);
					}
				}
			}
		}
	}
	if (does_entity_exist(Global_1357549->f_1897))
	{
		if (!is_entity_dead(Global_1357549->f_1897) && func_220(Global_1357549->f_1897))
		{
			if (!does_blip_exist(Global_1357549->f_1897.f_1))
			{
				if (!_0x9fa00e2fc134a9d0(Global_1357549->f_1897))
				{
					Global_1357549->f_1897.f_1 = _blip_add_for_entity(-1230993421, Global_1357549->f_1897);
					_blip_set_modifier(Global_1357549->f_1897.f_1, 287169430);
					_blip_set_modifier(Global_1357549->f_1897.f_1, -201249929);
					set_blip_name_from_text_file(Global_1357549->f_1897.f_1, "BLIP_CAMP_HORSE");
				}
			}
			else if (get_blip_from_entity(Global_1357549->f_1897) != Global_1357549->f_1897.f_1)
			{
				remove_blip(&(Global_1357549->f_1897.f_1));
			}
		}
		else
		{
			if (does_blip_exist(Global_1357549->f_1897.f_1))
			{
				remove_blip(&(Global_1357549->f_1897.f_1));
			}
			if (Global_40.f_4283.f_567)
			{
				func_223();
			}
		}
	}
	else if (does_blip_exist(Global_1357549->f_1897.f_1))
	{
		remove_blip(&(Global_1357549->f_1897.f_1));
	}
}

void func_31(int iParam0)
{
	if (((func_227(-1461741225, 1) || func_227(-404697685, 1)) || func_227(1674863702, 1)) || func_227(-1917134080, 1))
	{
		return;
	}
	if (func_228())
	{
		if (!func_168(&(iParam0->f_3480)))
		{
			func_229();
			func_175(&(iParam0->f_3480), 0);
		}
		if (func_169(&(iParam0->f_3480)) > 10f && !func_159())
		{
			func_230();
		}
	}
}

int func_32()
{
	return Global_40.f_4283.f_4;
}

void func_33(int iParam0, int iParam1)
{
	iVar0 = func_231(iParam0);
	if (iVar0 != -1)
	{
		if (!func_232(19, 4))
		{
			if (_does_volume_exist(Global_1914319->f_3[19]->f_26))
			{
				_delete_volume(Global_1914319->f_3[19]->f_26);
			}
			switch (iParam0)
			{
				case 1:
					iVar1 = _create_volume_box(-142.2027f, -23.89317f, 95.0883f, 0f, 0f, -19.50431f, 2f, 1.8f, 5f);
					break;
				case 2:
					iVar1 = _create_volume_box(674.9565f, -1251.201f, 43.0152f, 0f, 0f, -101.9433f, 2f, 1.8f, 5f);
					break;
				case 3:
					iVar1 = _create_volume_box(1874.646f, -1859.152f, 41.8f, 0f, 0f, -99.40799f, 2f, 1.8f, 5f);
					break;
				case 6:
					iVar1 = _create_volume_box(2365.858f, 1346.675f, 105.1305f, 0f, 0f, -22.49011f, 2f, 1.8f, 5f);
					break;
			}
			func_233(19, 16384);
			func_233(19, 32768);
			func_234(19, -1, &(Global_1357549->f_3[4]), iParam1, iVar1, 0, 12, -1082130432, 0, 0);
		}
		if (func_235(iVar0))
		{
			func_236(iVar0, 19, 0, 1);
		}
	}
}

bool func_34(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 6:
			return true;
		default:
			break;
	}
	return false;
}

void func_35(int iParam0, var uParam1)
{
	iVar0 = 0;
	if (func_38(8))
	{
		if (!uParam1->f_1029)
		{
			func_237(uParam1);
			uParam1->f_1029 = 1;
		}
		return;
	}
	else if (uParam1->f_1029)
	{
		uParam1->f_1029 = 0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_238(iParam0, iVar1, (*uParam1)[iVar1], &iVar0);
		iVar1++;
	}
}

void func_36(bool bParam0)
{
	if ((get_frame_count() % 60) == 0 || bParam0)
	{
		Local_18.f_3054 = func_239(Local_18.f_2024[0]);
		Local_18.f_3055 = func_239(Local_18.f_2024[2]);
		Local_18.f_3056 = func_239(Local_18.f_2024[1]);
		Global_1357549->f_1899 = func_240();
		Global_1357549->f_1900 = func_241(Local_18.f_3056, Global_1357549->f_1899);
	}
}

void func_37()
{
	if (func_12(8192) || func_242())
	{
		func_243(1000);
		return;
	}
	if (Local_18.f_51.f_20 != 0)
	{
		func_243(1000);
		return;
	}
	if (func_244(Local_18.f_51.f_1, 1) || func_244(Local_18.f_51.f_6, 1))
	{
		func_243(1000);
		return;
	}
}

bool func_38(int iParam0)
{
	switch (func_56())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return false;
}

void func_39(bool bParam0)
{
	_hide_hud_component(-950624750);
	if (bParam0 && func_245())
	{
		func_246();
	}
	else
	{
		func_247();
	}
}

void func_40(int iParam0)
{
	iVar0 = func_231(iParam0);
	if (iVar0 != -1)
	{
		if (func_232(19, 4))
		{
			func_248(19);
		}
		if (!func_235(iVar0))
		{
			func_236(iVar0, 19, 1, 1);
		}
	}
}

void func_41(var uParam0, int iParam1)
{
	if ((vdist(Global_36, 0f, 0f, 0f) <= 5f || func_127(&Global_1935630, 16384)) || func_127(&Global_1935630, 8388608))
	{
		return;
	}
	if (func_249(uParam0, 1))
	{
		return;
	}
	uParam0->f_63++;
	if (uParam0->f_63 < 10)
	{
		return;
	}
	uParam0->f_63 = 0;
	bVar0 = false;
	bVar1 = ((is_screen_faded_out() || is_screen_fading_in()) || is_screen_fading_out());
	bVar2 = func_250();
	iVar3 = 0;
	while (iVar3 < uParam0->f_61)
	{
		switch ((*uParam0)[iVar3]->f_1)
		{
			case 1:
				if (_does_volume_exist(uParam0[iVar3]))
				{
					if (_0xf256a75210c5c0eb(uParam0[iVar3], Global_36))
					{
						if (!bVar1 && !bVar2)
						{
							if ((!func_251((*uParam0)[iVar3], 1) && func_252(iParam1)) && !func_253(iParam1, 16))
							{
								func_255(iParam1, func_254(), -1, 0, -1, 0);
								func_256((*uParam0)[iVar3], 1);
							}
							func_257(iParam1, 0);
						}
						bVar0 = true;
					}
				}
				break;
			default:
				break;
		}
		iVar3++;
	}
	if (func_56() == -1)
	{
		if (func_258() != bVar0)
		{
			iVar4 = 0;
			if (bVar0)
			{
				iVar4 = 2;
			}
			else
			{
				iVar4 = 1;
			}
			func_259();
			func_260(Global_1310750->f_16071, 0, iVar4, 0, 0);
		}
	}
	func_261(bVar0);
	if (func_56() == -1)
	{
		func_263((iParam1 == func_262() && bVar0));
	}
}

void func_42(int iParam0)
{
	if (_does_volume_exist(iVar3510))
	{
		bVar0 = func_264(player_ped_id(), iVar3510, 1, 0);
		bVar1 = func_265(1);
		if (bVar0 && !bVar1)
		{
			func_266(1);
		}
		else if (!bVar0 && bVar1)
		{
			func_267(1);
		}
	}
}

void func_43(int* iParam0, var uParam1)
{
	if (func_268())
	{
		func_269(iParam0);
		func_270(0, 0);
		func_271();
	}
	func_272(iParam0);
	func_273(iParam0, uParam1);
	func_274(iParam0);
	func_275(iParam0, uParam1);
	if (!func_277(func_276()))
	{
		return;
	}
	func_278(iParam0);
}

void func_44(var uParam0)
{
	iVar0 = uParam0[2];
	if (_does_volume_exist(iVar0))
	{
		func_279(iVar0);
		_0x74c2b3dc0b294102(iVar0);
		_0xa1cfb35069d23c23(iVar0);
		_0x7274f84b1501b523(iVar0);
	}
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (_does_volume_exist(uParam0[iVar1]))
		{
			func_280(uParam0[iVar1]);
		}
		iVar1++;
	}
}

void func_45(int iParam0)
{
	iParam0->f_1713 = 2;
	iVar0 = 0;
	Global_1357549->f_3[0] = _create_volume_aggregate_with_custom_name("Lakay volCampAreas[CVA_INNER]");
	func_281(Global_1357549->f_3[0], &iVar0, 0, 2254f, -789.5063f, 44.76498f, 0f, 0f, 0f, 17.5f, 22.5f, 30f, -1612834106, 0);
	func_281(Global_1357549->f_3[0], &iVar0, 0, 2228.5f, -770.5f, 45f, 0f, 0f, -3f, 21f, 16.25f, 30f, -1612834106, 0);
	func_281(Global_1357549->f_3[0], &iVar0, 0, 2246.25f, -759.5f, 43f, 0f, 0f, -22f, 3f, 5.5f, 30f, 665633627, 0);
	func_281(Global_1357549->f_3[0], &iVar0, 0, 2249.658f, -770.3062f, 43f, 0f, 0f, 0f, 28f, 18f, 30f, -1612834106, 0);
	Global_1357549->f_3[1] = _create_volume_aggregate_with_custom_name("Lakay volCampAreas[CVA_WALK]");
	func_281(Global_1357549->f_3[1], &iVar0, 1, 2250.632f, -768.3993f, 53.83809f, 0f, 0f, -52.18186f, 37.30481f, 35.353f, 25.28685f, 665633627, 0);
	Global_1357549->f_3[2] = _create_volume_aggregate_with_custom_name("Lakay volCampAreas[CVA_OUTER]");
	Global_1357549->f_3[3] = _create_volume_aggregate_with_custom_name("Lakay volCampAreas[CVA_OUTER_THRESHOLD]");
	func_281(Global_1357549->f_3[2], Global_1357549->f_3[3], 2, 2253.741f, -742.7828f, 61.2578f, 0f, 0f, 66f, 28f, 43f, 30f, 665633627, 0);
	func_281(Global_1357549->f_3[2], Global_1357549->f_3[3], 2, 2240.492f, -772.2779f, 52.7971f, 0f, 0f, -1f, 51f, 60f, 60f, -1612834106, 0);
	func_281(Global_1357549->f_3[2], Global_1357549->f_3[3], 2, 2280.981f, -762.709f, 60.5683f, 0f, 0f, -12f, 22f, 46f, 30f, 665633627, 0);
	Global_1357549->f_3[4] = _create_volume_aggregate_with_custom_name("Lakay volCampAreas[CVA_SURROUNDING]");
	Global_1357549->f_3[5] = _create_volume_aggregate_with_custom_name("Lakay volCampAreas[CVA_SURROUNDING_THRESHOLD]");
	func_281(Global_1357549->f_3[4], Global_1357549->f_3[5], 4, 2258.598f, -760.9487f, 57.5579f, 0f, 0f, 0f, 76f, 76f, 30f, 665633627, 0);
	Global_1357549->f_3[6] = _create_volume_box_with_custom_name(2223.536f, -771.6528f, 43.4563f, 0f, 0f, -90.73467f, 5.06848f, 5.355191f, 2.283684f, "Lakay volCampAreas[CVA_PROPERTY]");
	iLocal_3513 = _create_volume_by_hash(-1612834106, 2229.49f, -771.7467f, 40.1123f, 0f, 0f, 1f, 20f, 10.5f, 4f);
}

void func_46()
{
}

bool func_47(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
		case 7:
			if (iParam1 == 1)
			{
				return true;
			}
			break;
		case 8:
			return func_143(73);
	}
	return false;
}

void func_48(var uParam0)
{
	if (does_blip_exist(uParam0->f_4))
	{
		remove_blip(&(uParam0->f_4));
	}
	clear_bit(&(uParam0->f_1), 2);
	func_282(uParam0);
	func_283(uParam0);
	if (is_bit_set(uParam0->f_1, 6))
	{
		func_284(1, uParam0);
	}
	if (uParam0->f_6 != -1)
	{
		_0x9cf1836c03fb67a2(&(uParam0->f_6), 0);
	}
	if (_does_volume_exist(uParam0->f_5))
	{
		_delete_volume(uParam0->f_5);
	}
	func_285(uParam0);
}

void func_49(int iParam0)
{
	_0xfd010a2154b40676(&(Global_1357549->f_3[2]), 1030835986);
	_0xfd010a2154b40676(&(Global_1357549->f_3[3]), 1030835986);
	if (iParam0->f_1713 != 0)
	{
		_0xb469cfd9e065eb99(&(Global_1357549->f_3[4]), iParam0->f_1713);
	}
	iVar0 = &Global_1357549->f_3[2];
	_0x18262cafebb5fbe1(iVar0, 0, 4787584, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iVar0, 0, 4787584, 0, -1, -1, 0);
	func_286(iVar0, 0);
	func_287(&(Global_1357549->f_3[4]), 0, 0, 0);
	func_288(iVar0, 0);
	func_289(iVar0, 0, 0);
	iVar1 = 0;
	func_290(&iVar1, 0);
	func_290(&iVar1, 14);
	func_290(&iVar1, 16);
	_0x3caad93fa5b9579a(iVar0, 2, iVar1);
	func_291(Local_18.f_47, Local_18.f_1714, Local_18.f_1717, &(Global_1357549->f_3[6]));
}

void func_50(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_1357549->f_1495 = (Global_1357549->f_1495 - (Global_1357549->f_1495 && iParam0));
			break;
	}
}

bool func_51()
{
	return Global_40.f_4283.f_322 > 1;
}

void func_52(int iParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 0:
			if (func_292(iParam0))
			{
				func_293(iParam0, uParam1);
				func_294(uParam1, 2);
			}
			break;
		case 2:
			if (func_292(iParam0))
			{
				if (!is_bit_set(uParam1->f_1, 2))
				{
					if (is_bit_set(uParam1->f_1, 5))
					{
						func_283(uParam1);
					}
					if (!is_bit_set(uParam1->f_1, 3))
					{
						func_295(uParam1);
					}
					if ((!is_entity_dead(Global_35) && _does_volume_exist(uParam1->f_5)) && is_entity_in_volume(Global_35, uParam1->f_5, true, 0))
					{
						disable_control_action(0, 613911080, false);
					}
					if (!is_ped_on_mount(Global_35))
					{
						if (is_bit_set(uParam1->f_1, 4))
						{
							func_296(uParam1->f_8, 0);
							clear_bit(&(uParam1->f_1), 4);
						}
					}
					else if (!is_bit_set(uParam1->f_1, 4))
					{
						func_296(uParam1->f_8, 1);
						set_bit(&(uParam1->f_1), 4);
					}
				}
				else
				{
					if (is_bit_set(uParam1->f_1, 3))
					{
						func_282(uParam1);
					}
					if (!is_bit_set(uParam1->f_1, 5))
					{
						func_297(uParam1);
					}
					if ((is_entity_dead(Global_35) || !_does_volume_exist(uParam1->f_5)) || !is_entity_in_volume(Global_35, uParam1->f_5, true, 0))
					{
						clear_bit(&(uParam1->f_1), 2);
					}
					disable_control_action(0, 1287709438, false);
					disable_control_action(0, -209515122, false);
					disable_control_action(0, -2131587435, false);
					disable_control_action(0, 255439828, false);
					_uiprompt_set_active_group_this_frame(1842627646, "BLIP_CAMP_HITCH", 1, 0, 0, 0);
				}
			}
			else
			{
				if (is_bit_set(uParam1->f_1, 5))
				{
					func_283(uParam1);
				}
				if (is_bit_set(uParam1->f_1, 3))
				{
					func_282(uParam1);
				}
				if (is_bit_set(uParam1->f_1, 2))
				{
					clear_bit(&(uParam1->f_1), 2);
				}
			}
			if (is_bit_set(uParam1->f_1, 3))
			{
				if (!is_bit_set(uParam1->f_1, 4))
				{
					if (func_212(uParam1->f_8, 1))
					{
						if (func_298(&iVar0))
						{
							func_299(uParam1->f_8, 1);
							set_bit(&(uParam1->f_1), 2);
						}
						else
						{
							switch (iVar0)
							{
								case -1:
									break;
								case 0:
									if (!func_200(611))
									{
										func_300("TF_CAMP_HITCH_MANAGE_HORSES_NO_HORSES", 10000, 0, 0, 0, 1);
										func_301(611);
									}
									break;
								case 1:
									if (!func_200(612))
									{
										func_300("TF_CAMP_HITCH_MANAGE_HORSES_HORSE_DEAD", 10000, 0, 0, 0, 1);
										func_301(612);
									}
									break;
								case 2:
									if (!func_302())
									{
										if (iParam0 == 7 || iParam0 == 8)
										{
											func_300("TF_CAMP_HITCH_MANAGE_HORSES_UNAVAILABLE_RANCH", 10000, 0, 0, 0, 1);
										}
										else
										{
											func_300("TF_CAMP_HITCH_MANAGE_HORSES_UNAVAILABLE_CAMP", 10000, 0, 0, 0, 1);
										}
									}
									break;
							}
						}
					}
				}
			}
			if (is_bit_set(uParam1->f_1, 5))
			{
				if (func_217(uParam1->f_10, 1))
				{
					set_bit(&(uParam1->f_1), 7);
					clear_bit(&(uParam1->f_1), 2);
					func_284(0, uParam1);
					func_283(uParam1);
					func_294(uParam1, 3);
					return;
				}
				if (func_217(uParam1->f_11, 1))
				{
					uParam1->f_7 = 0;
					clear_bit(&(uParam1->f_1), 2);
					clear_bit(&(uParam1->f_1), 7);
					func_284(0, uParam1);
					func_283(uParam1);
					func_294(uParam1, 3);
					return;
				}
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (func_217(&(uParam1->f_12[iVar1]), 1))
					{
						uParam1->f_7 = func_303(iVar1);
						clear_bit(&(uParam1->f_1), 2);
						clear_bit(&(uParam1->f_1), 7);
						func_284(0, uParam1);
						func_283(uParam1);
						func_294(uParam1, 3);
						return;
					}
					iVar1++;
				}
				if (func_217(uParam1->f_9, 1))
				{
					func_283(uParam1);
					clear_bit(&(uParam1->f_1), 2);
				}
			}
			break;
		case 3:
			if (!is_screen_faded_out())
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(800);
				}
			}
			else
			{
				set_entity_coords(Global_35, func_304(iParam0), true, false, true, true);
				set_entity_heading(Global_35, func_305(iParam0));
				if (is_bit_set(uParam1->f_1, 7))
				{
					func_294(uParam1, 6);
				}
				else
				{
					func_294(uParam1, 4);
				}
			}
			break;
		case 4:
			if (!is_bit_set(uParam1->f_1, 1))
			{
				if (uParam1->f_7 != 0)
				{
					func_306(uParam1->f_7);
				}
				func_308(func_307(iParam0, -1), 0.5f, 1, 1, 0, 0, 0);
				uParam1->f_7 = -1;
				set_bit(&(uParam1->f_1), 1);
				return;
			}
			if (func_309(iParam0, uParam1))
			{
				func_310(0);
				func_311();
				if (func_312(0) == 0)
				{
					func_313(0, 5);
				}
				set_entity_coords(Global_35, func_304(iParam0), true, false, true, true);
				set_entity_heading(Global_35, func_305(iParam0));
				set_gameplay_cam_relative_heading(0f, 1f);
				set_gameplay_cam_relative_pitch(0f, 1f);
				uParam1->f_2 = get_game_timer() + 500;
				func_294(uParam1, 5);
			}
			break;
		case 6:
			if (!is_bit_set(uParam1->f_1, 8))
			{
				if (func_314())
				{
					func_315();
				}
				func_316(2);
				func_318(func_317(iParam0));
				_set_ped_as_saddle_horse_for_player(player_id(), 0);
				clear_area(func_317(iParam0), 0.4f, 2442122);
				set_bit(&(uParam1->f_1), 8);
			}
			if (func_319(func_317(iParam0), 0f, 1))
			{
				activate_physics(Global_1900383->f_393);
				set_entity_coords(Global_35, func_304(iParam0), true, false, true, true);
				set_entity_heading(Global_35, func_305(iParam0));
				set_gameplay_cam_relative_heading(0f, 1f);
				set_gameplay_cam_relative_pitch(0f, 1f);
				clear_bit(&(uParam1->f_1), 8);
				clear_bit(&(uParam1->f_1), 7);
				uParam1->f_2 = get_game_timer() + 500;
				func_294(uParam1, 5);
			}
			break;
		case 5:
			if (get_game_timer() > uParam1->f_2)
			{
				func_284(1, uParam1);
				func_294(uParam1, 7);
			}
			break;
		case 7:
			if (!is_screen_faded_in())
			{
				if (!is_screen_fading_in())
				{
					do_screen_fade_in(800);
				}
			}
			else
			{
				uParam1->f_3 = 0;
				clear_bit(&(uParam1->f_1), 2);
				func_294(uParam1, 2);
			}
			break;
	}
}

void func_53(int iParam0, bool bParam1)
{
	if (network_is_in_session())
	{
	}
	set_ped_config_flag(Global_35, 473, false);
	set_ped_config_flag(Global_35, 474, false);
	set_ped_config_flag(Global_35, 475, false);
	func_247();
	_display_hud_component(-950624750);
	if (func_38(2097152) && get_ped_config_flag(Global_35, 334, true))
	{
		set_ped_config_flag(Global_35, 334, false);
		func_50(2097152);
	}
	func_320(iParam0);
	func_321(iParam0);
	func_137(235110816);
	if (!func_159())
	{
		if (!func_12(64))
		{
			func_322(1);
			func_323(0);
		}
		if (bParam1 == 0)
		{
			func_324(1, -1);
		}
		_0x1096603b519c905f("");
		if (!_is_ped_carrying(player_ped_id()) && !(func_325(get_mount(player_ped_id()), 0) && _is_ped_carrying(get_mount(player_ped_id()))))
		{
			_0x9851de7aec10b4e1(func_326(func_141()), func_327(), 1, 0);
		}
	}
	if (func_328(4))
	{
		func_329(0);
	}
	_0x9461a8fab0378e5b(player_id(), 0);
	func_330(1, 0, 1103626240);
	if (!func_12(16777216))
	{
		func_331();
		func_137(16777216);
	}
	if (!func_12(2048))
	{
		_set_milliseconds_per_game_minute(2000);
		func_137(2048);
	}
	if (func_12(32))
	{
		func_136(1);
		func_137(32);
	}
	if (func_38(1073741824))
	{
		func_50(1073741824);
	}
	func_332(&(iParam0->f_51));
	func_333();
	func_334(iParam0->f_46);
	set_audio_flag("EnableIdleMusic", false);
	func_335(iParam0->f_46, 4);
	func_335(iParam0->f_46, 8);
	func_261(0);
	if (func_56() == -1)
	{
		func_263(0);
	}
	if (func_336(32))
	{
		func_137(4);
		func_137(2);
		func_337(32);
		iVar0 = 0;
		while (iVar0 < &Global_1360165)
		{
			if (!func_338(iVar0) && func_339(iVar0, 0))
			{
				func_340(iVar0);
			}
			iVar0++;
		}
	}
	if (Local_18.f_1721.f_62 == 3)
	{
		if (!is_screen_faded_out())
		{
			do_screen_fade_out(0);
		}
		func_89();
		func_341();
	}
	if (func_262() == iParam0->f_46)
	{
		func_342(bParam1);
		func_189(1073741824);
		func_343(0, 0, 0);
	}
	if (func_344(iParam0->f_46, &iVar2, &iVar3, 0, 0))
	{
		iVar1 = iVar2;
		while (iVar1 <= iVar3)
		{
			if (!func_345(iVar1, 0))
			{
				func_346(iVar1);
			}
			iVar1++;
		}
	}
	iVar4 = 0;
	while (iVar4 < 2)
	{
		if (_does_volume_exist(&(Global_1357549->f_1663[iVar4])))
		{
			_delete_volume(&(Global_1357549->f_1663[iVar4]));
		}
		iVar4++;
	}
	func_347();
	func_348();
	func_349(iParam0);
	func_350(iParam0);
	func_351();
	func_352();
	func_353();
	func_193();
	func_354(0);
	remove_decals_in_range(func_326(func_141()), 100f);
	if (func_336(8))
	{
		func_355(0);
		func_337(8);
	}
	if (!func_12(64))
	{
		func_158(1);
	}
	if (func_356(1))
	{
		_0x816a3acd265e2297(1361896662, 1);
		func_357(1);
	}
	if (func_356(8192))
	{
		_0x816a3acd265e2297(-2146271366, 1);
		func_357(8192);
	}
	iVar5 = func_358(7);
	if (does_entity_exist(iVar5))
	{
		set_ped_config_flag(iVar5, 419, false);
	}
	func_137(229376);
	func_50(2560);
	Global_1357549->f_1896 = 0;
	_0x0ada3ec589e1736e();
	if (func_359(func_254()))
	{
		func_360(func_254(), 8);
	}
	func_361(&(Local_18.f_2024));
	func_362(&(Local_18.f_2024));
	func_363(&(Local_18.f_2024));
	Local_18.f_43 = 0;
	func_48(&(Global_1357549->f_1691));
	func_364();
	if (Local_18.f_2019 != 0 && func_38(16777216))
	{
		_0xe057fea9a22eb3ee(Local_18.f_2019);
		func_50(16777216);
	}
	if (!func_38(67108864))
	{
		_0x24db6b9f2b719043(-1f);
	}
	if (func_38(-2147483648))
	{
		if (func_186(1024))
		{
			func_189(1024);
		}
		if (func_186(64))
		{
			func_189(64);
		}
		if (func_38(131072))
		{
			func_50(131072);
		}
		func_50(-2147483648);
	}
	if (func_141() == 2 || func_141() == 3)
	{
		if (func_365(13, 0) > 1)
		{
			set_model_as_no_longer_needed(-180755040);
		}
	}
	func_267(8);
	func_267(16);
	func_366(Global_1935630, 8388608);
	if (network_is_game_in_progress())
	{
	}
}

void func_54(char* sParam0, int iParam1, int iParam2)
{
}

void func_55()
{
	if (func_12(32768))
	{
		func_160(2048);
	}
	else
	{
		func_50(2048);
	}
	if (func_38(4194304))
	{
		func_160(8388608);
	}
	else
	{
		func_50(8388608);
	}
}

int func_56()
{
	return Global_1572887->f_12;
}

void func_57()
{
	terminate_this_thread();
}

int func_58(int iParam0, bool bParam1)
{
	if (func_56() != -1)
	{
		return 1;
	}
	if (!func_367(iParam0))
	{
		return 1;
	}
	if (func_344(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1897950->f_1 < iVar0 || Global_1897950->f_1 > iVar1)
		{
			Global_1897950->f_1 = iVar0;
		}
		while (true)
		{
			if (!func_368(Global_1897950->f_1, 16))
			{
				func_369(Global_1897950->f_1, 0);
			}
			Global_1897950->f_1++;
			iVar2++;
			if (Global_1897950->f_1 > iVar1)
			{
				Global_1897950->f_1 = -1;
				return 1;
			}
			if (iVar2 >= 20 && !bParam1)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_59()
{
	_0x9bf2c0c568c61641(1);
	if (func_359(func_370(Local_18.f_46)))
	{
		func_360(func_370(Local_18.f_46), 4);
	}
	if (func_38(32768))
	{
		func_50(32768);
	}
	func_373(func_372(func_371(Local_18.f_46)));
	iVar0 = func_374(func_141());
	func_375(iVar0, 1137976064, 1120952528, -1, 1, 1, 0);
	func_376(Local_18.f_45, Global_40.f_4283.f_4, &(Local_18.f_2019));
	func_259();
	func_45(&Local_18);
	func_49(&Local_18);
	func_377(Global_1898004);
	func_378(Global_1898004, &(Global_1357549->f_3[2]), 1);
	if ((does_entity_exist(Global_35) && _is_ped_carrying(Global_35)) || (does_entity_exist(get_mount(Global_35)) && _is_ped_carrying(get_mount(Global_35))))
	{
		func_140(33554432);
		func_379(17, -2147483648, 1, -1);
		StringCopy(&cVar1, func_380(func_141()), 64);
		if (!is_string_null_or_empty(&cVar1))
		{
			func_381(17, cVar1, 2);
		}
	}
	if (func_141() == 2 || func_141() == 3)
	{
		if (func_365(13, 0) > 1)
		{
			request_model(-180755040, false);
		}
	}
	func_382();
	return 1;
}

void func_60(int iParam0, int iParam1, int iParam2)
{
	Local_18.f_1[iParam0] = iParam1;
	Local_18.f_14[iParam0] = iParam2;
}

int func_61()
{
	return func_383(Local_18.f_46);
}

int func_62()
{
	if (func_34(Local_18.f_45))
	{
		if (!is_bit_set(Local_18.f_43, 1))
		{
			func_384(&(Local_18.f_2024));
			set_bit(&(Local_18.f_43), 1);
		}
		return func_385(&(Local_18.f_2024));
	}
	return 1;
}

int func_63()
{
	if (!is_bit_set(Local_18.f_43, 4))
	{
		set_bit(&(Local_18.f_43), 4);
	}
	return 1;
}

int func_64()
{
	if (func_141() == 2 || func_141() == 3)
	{
		if (func_365(13, 0) > 1)
		{
			if (!has_model_loaded(-180755040))
			{
				return 0;
			}
		}
	}
	if (func_386())
	{
		if (!func_126(0, 0, 1))
		{
			func_387(func_326(func_141()), func_327(), 0);
			func_388(func_326(func_141()), func_327(), 0);
		}
		return 1;
	}
	return 0;
}

int func_65()
{
	if (Local_18.f_3479 == -1)
	{
		func_389(Local_18.f_45, 1, 1);
		Local_18.f_3479 = 0;
	}
	if (func_390(Local_18.f_45))
	{
		iVar0 = func_391(Local_18.f_45);
		iVar1 = 0;
		while (iVar1 < 6)
		{
			func_392(iVar0, Local_18.f_3479, iVar1, 1, 1);
			iVar1++;
		}
		iVar2 = Local_18.f_3479;
		iVar2++;
		Local_18.f_3479 = iVar2;
		if (Local_18.f_3479 >= 26)
		{
			Local_18.f_3479 = -1;
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_66()
{
	bVar0 = func_393();
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_394(iVar1))
		{
			Local_18.f_3402[iVar1] = _0xa00df706c60173d1(func_395(iVar1));
			request_model(&(Local_18.f_3402[iVar1]), false);
			iVar2++;
			if (bVar0 && func_396(iVar1, 32768, 1))
			{
				Local_18.f_3430[iVar1] = _0xa00df706c60173d1(func_397(iVar1, 1));
				Local_18.f_3430[iVar1] = &Local_18.f_3430[iVar1];
				request_model(&(Local_18.f_3430[iVar1]), false);
				iVar2++;
				if (has_model_loaded(&(Local_18.f_3430[iVar1])) && &Local_18.f_3374[iVar1] == 0)
				{
					iVar3 = func_398(iVar1);
					if (_does_metaped_outfit_exist_for_ped_model(iVar3, &(Local_18.f_3430[iVar1])))
					{
						Local_18.f_3374[iVar1] = _request_metaped_outfit(&(Local_18.f_3430[iVar1]), iVar3);
					}
				}
			}
		}
		if ((iVar2 - Local_18.f_44) > 5)
		{
			Local_18.f_44 = iVar2;
			return 0;
		}
		iVar1++;
	}
	if (Global_40.f_4283.f_567)
	{
		Local_18.f_3478 = func_399();
		if (Local_18.f_3478 != 0)
		{
			request_model(Local_18.f_3478, false);
			iVar2++;
		}
	}
	if (func_400(Local_18.f_45))
	{
		iVar4 = 0;
		while (iVar4 < 3)
		{
			Global_1357549->f_1675[iVar4] = func_401(iVar4);
			if (&Global_1357549->f_1675[iVar4] == 0)
			{
			}
			else
			{
				Local_18.f_3458[iVar4] = _0xa00df706c60173d1(&(Global_1357549->f_1675[iVar4]));
				if (&Local_18.f_3458[iVar4] != 0)
				{
					request_model(&(Local_18.f_3458[iVar4]), false);
					iVar2++;
					if ((iVar2 - Local_18.f_44) > 5)
					{
						Local_18.f_44 = iVar2;
						return 0;
					}
				}
			}
			iVar4++;
		}
	}
	if (func_344(Local_18.f_46, &iVar6, &iVar7, 0, 1))
	{
		iVar5 = iVar6;
		while (iVar5 <= iVar7)
		{
			if (!func_402(iVar5))
			{
			}
			else if (func_368(iVar5, 32) && Local_18.f_46 != 22)
			{
			}
			else if (iVar8 < 15)
			{
				Local_18.f_3462[iVar8] = _0xa00df706c60173d1(func_403(iVar5));
				if (&Local_18.f_3462[iVar8] != 0)
				{
					request_model(&(Local_18.f_3462[iVar8]), false);
					iVar2++;
					iVar8++;
					if ((iVar2 - Local_18.f_44) > 5)
					{
						Local_18.f_44 = iVar2;
						return 0;
					}
				}
			}
			iVar5++;
		}
	}
	return 1;
}

int func_67()
{
	if (func_34(Local_18.f_45))
	{
		if (!is_bit_set(Local_18.f_43, 2))
		{
			func_404(Local_18.f_45, &(Local_18.f_2024));
			func_405(&(Local_18.f_2024), &(Global_40.f_4283.f_415));
			set_bit(&(Local_18.f_43), 2);
		}
		return func_406(&(Local_18.f_2024), &(Global_40.f_4283.f_415));
	}
	return 1;
}

int func_68()
{
	if (!is_bit_set(Local_18.f_43, 3))
	{
		Local_18.f_42 = get_game_timer() + 15000;
		Global_1357549->f_2 = 0;
		func_407();
		set_bit(&(Local_18.f_43), 3);
	}
	bVar0 = false;
	if (func_408(&Local_18))
	{
		bVar0 = true;
	}
	else if (get_game_timer() > Local_18.f_42)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_409(Local_18.f_46, 4);
		iVar1 = 0;
		while (iVar1 < 27)
		{
			func_410(iVar1, 4, 1);
			iVar1++;
		}
		return 1;
	}
	return 0;
}

int func_69()
{
	return 1;
}

int func_70()
{
	func_411(&Local_18);
	func_46();
	func_412(&(Local_18.f_51));
	func_413();
	func_414();
	func_36(1);
	func_407();
	func_415();
	return 1;
}

int func_71()
{
	if (func_416(32))
	{
		if (is_screen_faded_out())
		{
			do_screen_fade_in(500);
		}
		func_417(32);
	}
	func_320(&Local_18);
	func_321(&Local_18);
	if (!func_12(2048))
	{
		_set_milliseconds_per_game_minute(4000);
	}
	set_ped_config_flag(Global_35, 473, true);
	set_ped_config_flag(Global_35, 474, true);
	set_ped_config_flag(Global_35, 475, true);
	func_418(&(Global_1391438->f_5), 32, 1);
	func_419();
	set_audio_flag("EnableIdleMusic", true);
	func_420(0);
	func_409(Local_18.f_46, 8);
	func_160(1073741824);
	return 1;
}

void func_72(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_57();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_73()
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
			func_57();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_57();
					break;
				case 2:
					func_57();
					break;
				case 4:
					func_57();
					break;
				case 3:
					func_57();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_57();
		}
		if (!network_is_game_in_progress())
		{
			func_57();
		}
		if (!network_is_signed_online())
		{
			func_57();
		}
		if (func_56() == 0)
		{
			if (func_421())
			{
				func_57();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_57();
	}
	return 1;
}

void func_74()
{
	iVar0 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar0++;
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_57();
					break;
				case 2:
					func_57();
					break;
				case 4:
					func_57();
					break;
				case 3:
					func_57();
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
		if (iVar0 >= 3600)
		{
			func_57();
			return;
		}
		wait(0);
	}
}

void func_75(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_40.f_4283.f_2 = (Global_40.f_4283.f_2 || iParam0);
			break;
	}
}

void func_76()
{
	if (func_336(8))
	{
		func_355(0);
		func_337(8);
	}
	if (func_336(4))
	{
		func_158(1);
		func_337(4);
	}
	Local_18.f_1718 = 0;
	if (is_itemset_valid(Local_18.f_1718.f_1))
	{
		destroy_itemset(Local_18.f_1718.f_1);
	}
	if (func_336(32))
	{
		func_337(32);
	}
	Local_18.f_1718.f_1 = create_itemset(false);
}

int func_77()
{
	if (func_227(180573150, 1))
	{
		return -1;
	}
	if (func_12(4))
	{
		return -1;
	}
	if (is_entity_dead(Global_35))
	{
		return -1;
	}
	if (_0x5407b7288d0478b7(Global_35, 516) == 0)
	{
		return -1;
	}
	if (_0x336b3d200ab007cb(Global_35, Global_36, 100f, 512) == 0)
	{
		return -1;
	}
	if (func_126(0, 0, 1))
	{
		return -1;
	}
	if (_get_number_of_references_of_script_with_name_hash(-443368600) > 0)
	{
		return -1;
	}
	bVar0 = ((Local_18.f_45 == 7 || Local_18.f_45 == 8) || Local_18.f_45 == 4);
	if (!func_336(1))
	{
		if (_0x9d5c9a5a3321b128(player_id()))
		{
			if (bVar0)
			{
				func_300("RANCH_LAW_WARN", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_300("CAMP_LAW_WARN", 10000, 0, 0, 0, 1);
			}
		}
		else if (bVar0)
		{
			func_300("RANCH_COMBAT_WARN", 10000, 0, 0, 0, 1);
		}
		else
		{
			func_300("CAMP_COMBAT_WARN", 10000, 0, 0, 0, 1);
		}
		func_422(1);
	}
	if (!bVar0)
	{
		func_423();
	}
	if (func_38(512))
	{
		if (bVar0)
		{
			func_423();
			return 2;
		}
		else
		{
			return 1;
		}
	}
	if (Global_1357549->f_1497 != -1)
	{
		iVar1 = func_172(Global_1357549->f_1497);
		if (does_entity_exist(iVar1) && !is_entity_dead(iVar1))
		{
			iVar2 = func_424(Local_18.f_1718.f_1);
			iVar3 = 0;
			while (iVar3 < iVar2)
			{
				iVar4 = _0x3ffb15534067dcd4(get_indexed_item_in_itemset(iVar3, Local_18.f_1718.f_1));
				if (has_entity_clear_los_to_entity(iVar1, iVar4, 17))
				{
					if (bVar0)
					{
						func_423();
						return 2;
					}
					else
					{
						return 1;
					}
				}
				iVar3++;
			}
		}
	}
	return -1;
}

void func_78()
{
	if (Local_18.f_45 == 7 || Local_18.f_45 == 8)
	{
		if (_0x9d5c9a5a3321b128(player_id()))
		{
			func_300("RANCH_LAW_GRIEF", 10000, 0, 0, 0, 1);
			func_425(2, 158959085, 0, "RANCH_LAW_HON", 0, 0, 1065353216, 0);
		}
		else
		{
			func_300("RANCH_COMBAT_GRIEF", 10000, 0, 0, 0, 1);
			func_425(2, 158959085, 0, "RANCH_COMBAT_HON", 0, 0, 1065353216, 0);
		}
	}
	else if (_0x9d5c9a5a3321b128(player_id()))
	{
		func_300("CAMP_LAW_GRIEF", 10000, 0, 0, 0, 1);
		func_425(2, 158959085, 0, "CAMP_LAW_HON", 0, 0, 1065353216, 0);
	}
	else
	{
		func_300("CAMP_COMBAT_GRIEF", 10000, 0, 0, 0, 1);
		func_425(2, 158959085, 0, "CAMP_COMBAT_HON", 0, 0, 1065353216, 0);
	}
	func_426();
}

void func_79(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	uParam0->f_1[iVar0] = iParam2;
	uParam0->f_1[iVar0]->f_1 = iParam3;
	uParam0->f_1[iVar0]->f_2 = iParam4;
}

void func_80()
{
	func_140(4);
	func_140(2);
	func_422(32);
	Local_18.f_1718.f_2 = (get_game_timer() + get_random_int_in_range(3000, 5000));
}

int func_81()
{
	func_427();
	func_428();
	if (is_entity_dead(Global_35))
	{
		return 0;
	}
	if (func_126(0, 0, 1))
	{
		return 0;
	}
	if (_get_number_of_references_of_script_with_name_hash(-443368600) > 0)
	{
		return 0;
	}
	if (get_game_timer() < Local_18.f_1718.f_2)
	{
		return -1;
	}
	iVar0 = func_424(Local_18.f_1718.f_1);
	if (iVar0 == 0)
	{
		return 3;
	}
	Var1.f_8 = -1082130432;
	iVar21 = 0;
	while (iVar21 < iVar0)
	{
		iVar22 = _0x3ffb15534067dcd4(get_indexed_item_in_itemset(iVar21, Local_18.f_1718.f_1));
		if (is_entity_dead(iVar22))
		{
		}
		else
		{
			switch (get_random_int_in_range(0, 6))
			{
				case 0:
					iVar23 = 21030;
					break;
				case 1:
					iVar23 = 14284;
					break;
				case 2:
					iVar23 = 65478;
					break;
				case 3:
					iVar23 = 6884;
					break;
				case 4:
					iVar23 = 56200;
					break;
				case 5:
					iVar23 = 0;
					break;
			}
			switch (get_random_int_in_range(0, 2))
			{
				case 0:
					iVar24 = -183018591;
					break;
				case 1:
					iVar24 = 1676963302;
					break;
			}
			vVar25 = { func_429(func_326(func_141()), 50f, 2f) };
			Var1.f_14 = 1;
			Var1.f_13 = 0;
			Var1.f_16 = 1;
			Var1.f_18 = 1;
			Var1.f_19 = 0;
			Var1.f_12 = 1;
			Var1.f_7 = 200f;
			Var1.f_10 = iVar22;
			Var1 = { vVar25 };
			Var1.f_3 = { get_ped_bone_coords(iVar22, iVar23, 0f, 0f, 0f) };
			Var1.f_6 = iVar24;
			_fire_single_bullet_ignore_entity_new(&Var1);
			_set_entity_health(iVar22, 0, 0);
			if (iVar0 <= 1)
			{
				Local_18.f_1718.f_2 = get_game_timer() + 4000;
			}
			else
			{
				Local_18.f_1718.f_2 = (get_game_timer() + get_random_int_in_range(3000, 6000));
			}
		}
		else
		{
			iVar21++;
		}
	}
	return -1;
}

void func_82()
{
	Local_18.f_3373 = -1;
	func_137(2);
	func_137(4);
	func_337(32);
}

void func_83()
{
	func_140(4);
	func_140(2);
	func_422(32);
	Local_18.f_1718.f_2 = get_game_timer() + 5000;
}

int func_84()
{
	func_427();
	func_428();
	if (is_entity_dead(Global_35))
	{
		return 0;
	}
	if (func_126(0, 0, 1))
	{
		return 0;
	}
	if (_get_number_of_references_of_script_with_name_hash(-443368600) > 0)
	{
		return 0;
	}
	iVar0 = func_424(Local_18.f_1718.f_1);
	if (iVar0 == 0)
	{
		return 3;
	}
	if (get_game_timer() < Local_18.f_1718.f_2)
	{
		return -1;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = _0x3ffb15534067dcd4(get_indexed_item_in_itemset(iVar1, Local_18.f_1718.f_1));
		if (is_entity_dead(iVar2))
		{
		}
		else if (has_entity_been_damaged_by_entity(Global_35, iVar2, 1, 1))
		{
			_set_entity_health(Global_35, 0, iVar2);
			func_137(4);
			func_137(2);
			return -1;
		}
		iVar1++;
	}
	if (!func_336(16))
	{
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			iVar20 = _0x3ffb15534067dcd4(get_indexed_item_in_itemset(iVar1, Local_18.f_1718.f_1));
			if (is_entity_dead(iVar20))
			{
			}
			else
			{
				switch (get_random_int_in_range(0, 6))
				{
					case 0:
						iVar21 = 21030;
						break;
					case 1:
						iVar21 = 14284;
						break;
					case 2:
						iVar21 = 65478;
						break;
					case 3:
						iVar21 = 6884;
						break;
					case 4:
						iVar21 = 56200;
						break;
					case 5:
						iVar21 = 0;
						break;
				}
				Var3.f_14 = 1;
				Var3.f_6 = 0;
				Var3.f_4 = 1500;
				Var3.f_5 = 0;
				Var3.f_7 = 1;
				Var3.f_10 = 1;
				Var3.f_11 = 1f;
				Var3.f_1 = { get_ped_bone_coords(Global_35, iVar21, 0f, 0f, 0f) };
				Var3.f_15 = 1;
				_0x5230d3f6ee56cfe6(iVar20, 0);
				task_shoot_with_weapon(iVar20, &Var3);
			}
			iVar1++;
		}
		func_422(16);
	}
	return -1;
}

void func_85()
{
	Local_18.f_3373 = -1;
	func_137(2);
	func_137(4);
	func_337(32);
}

void func_86()
{
	set_player_control(player_id(), false, 0, false);
	do_screen_fade_out(3000);
}

int func_87()
{
	func_427();
	if (func_126(0, 0, 1) || _get_number_of_references_of_script_with_name_hash(-443368600) > 0)
	{
		if (is_screen_faded_out() || is_screen_fading_out())
		{
			do_screen_fade_in(800);
		}
		return 0;
	}
	if (is_screen_faded_out())
	{
		return 4;
	}
	return -1;
}

void func_88()
{
}

void func_89()
{
	if (is_ped_on_mount(Global_35))
	{
		task_dismount_animal(Global_35, 16, 0, 0, 0, 0);
	}
	_0x8674d138391ffb1b(get_player_index(), 1);
	vVar2 = { func_430(func_141(), &uVar0, &uVar1) };
	func_431(vVar2, uVar1, uVar0, 0);
	func_432(0);
	func_433();
	func_434(6);
	func_435(4096);
	Global_1310720->f_6 = 1;
	Global_1310720->f_17 = 8;
	iVar5 = 0;
	while (iVar5 < 27)
	{
		iVar6 = func_172(iVar5);
		if (does_entity_exist(iVar6))
		{
			_0x06d26a96ca1bca75(iVar6, 1, 0f, 0);
		}
		iVar5++;
	}
	func_436();
}

int func_90()
{
	func_427();
	if (func_190())
	{
		func_341();
		return 0;
	}
	return -1;
}

void func_91(var uParam0, int iParam1)
{
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	*uParam0 = iVar0;
	func_437(uParam0);
}

void func_92()
{
	Local_18.f_1786 &= 8193;
	Local_18.f_1786.f_1 = 0;
	Local_18.f_1786.f_2 = 0;
	Local_18.f_1786.f_3 = 0;
	Local_18.f_1786.f_5 = 0;
	Local_18.f_1786.f_7 = 0;
	Local_18.f_1786.f_8 = 0;
	Local_18.f_1786.f_10 = -1;
}

int func_93()
{
	if (func_38(64) && func_38(32))
	{
		return -1;
	}
	if (is_entity_dead(Global_35))
	{
		return -1;
	}
	if (!_does_volume_exist(&(Global_1357549->f_3[4])))
	{
		return -1;
	}
	if (func_356(1))
	{
		if (!is_entity_in_volume(Global_35, &(Global_1357549->f_3[4]), false, 0))
		{
			_0x816a3acd265e2297(1361896662, 1);
			func_357(1);
		}
	}
	if (func_356(8192))
	{
		if (!is_entity_in_volume(Global_35, &(Global_1357549->f_3[4]), false, 0))
		{
			_0x816a3acd265e2297(-2146271366, 1);
			func_357(8192);
		}
	}
	if (func_356(4096))
	{
		if (!is_entity_in_volume(Global_35, &(Global_1357549->f_3[4]), false, 0))
		{
			func_357(4096);
		}
	}
	if (!is_entity_in_volume(Global_35, &(Global_1357549->f_3[5]), false, 0))
	{
		return -1;
	}
	if (func_356(4096))
	{
		func_438(0);
	}
	bVar0 = false;
	if (func_439(Global_35, &(Local_18.f_1786.f_7), &bVar0))
	{
		if (bVar0)
		{
			if (!func_38(64))
			{
				func_440(2);
			}
		}
		else if (!func_38(32))
		{
			func_440(4);
		}
	}
	else if (func_441(Global_35, &(Local_18.f_1786.f_7), &bVar0))
	{
		if (bVar0)
		{
			if (!func_38(64))
			{
				func_440(32);
			}
		}
		else if (!func_38(32))
		{
			func_440(64);
		}
	}
	if (is_ped_on_mount(Global_35))
	{
		Local_18.f_1786.f_5 = get_mount(Global_35);
		if (func_439(Local_18.f_1786.f_5, &(Local_18.f_1786.f_8), &bVar0))
		{
			if (bVar0)
			{
				if (!func_38(64))
				{
					func_440(8);
				}
			}
			else if (!func_38(32))
			{
				func_440(16);
			}
		}
	}
	else if (_0xefc4303ddc6e60d3(Global_35))
	{
		Local_18.f_1786.f_5 = _0xed1f514af4732258(Global_35);
		if (func_439(Local_18.f_1786.f_5, &(Local_18.f_1786.f_8), &bVar0))
		{
			if (bVar0)
			{
				if (!func_38(64))
				{
					func_440(8);
				}
			}
			else if (!func_38(32))
			{
				func_440(16);
			}
		}
	}
	else
	{
		Local_18.f_1786.f_5 = func_358(0);
		if (func_325(Local_18.f_1786.f_5, 0) && func_442(Local_18.f_1786.f_5, 2043986356))
		{
			if (func_439(Local_18.f_1786.f_5, &(Local_18.f_1786.f_8), &bVar0))
			{
				if (bVar0)
				{
					if (!func_38(64))
					{
						func_440(8);
					}
				}
				else if (!func_38(32))
				{
					func_440(16);
				}
			}
		}
	}
	bVar1 = false;
	Local_18.f_1786.f_6 = func_358(1);
	if ((func_325(Local_18.f_1786.f_6, 0) && Local_18.f_1786.f_5 != Local_18.f_1786.f_6) && func_442(Local_18.f_1786.f_6, 2043986356))
	{
		bVar1 = true;
	}
	else
	{
		Local_18.f_1786.f_6 = func_358(0);
		if ((func_325(Local_18.f_1786.f_6, 0) && Local_18.f_1786.f_5 != Local_18.f_1786.f_6) && func_442(Local_18.f_1786.f_6, 2043986356))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (func_439(Local_18.f_1786.f_6, &(Local_18.f_1786.f_9), &bVar0))
		{
			if (bVar0)
			{
				func_440(2048);
			}
			else
			{
				func_440(1024);
			}
		}
	}
	if (((((((func_356(2) || func_356(4)) || func_356(8)) || func_356(16)) || func_356(32)) || func_356(64)) || func_356(2048)) || func_356(1024))
	{
		set_player_control(player_id(), false, 256, false);
		if (func_443())
		{
			return 6;
		}
		else
		{
			return 1;
		}
	}
	if (!func_356(4096) && func_443())
	{
		iVar2 = func_358(1);
		if (func_439(iVar2, &uVar3, &bVar0))
		{
			func_440(4096);
		}
		else
		{
			iVar2 = func_358(0);
			if (func_439(iVar2, &uVar3, &bVar0))
			{
				func_440(4096);
			}
		}
	}
	if ((!func_356(1) && !func_356(4096)) && !func_38(64))
	{
		_0x816a3acd265e2297(1361896662, 0);
		func_440(1);
	}
	if ((!func_356(8192) && !func_356(4096)) && !func_38(32))
	{
		_0x816a3acd265e2297(-2146271366, 0);
		func_440(8192);
	}
	return -1;
}

void func_94()
{
	set_player_control(get_player_index(), false, 0, false);
	Local_18.f_1786.f_10 = func_444(1, 8);
	Local_18.f_1786.f_2 = get_game_timer() + 3000;
	if ((func_356(2) || func_356(8)) || func_356(32))
	{
		func_202(535, 0);
	}
	if ((func_356(4) || func_356(16)) || func_356(64))
	{
		func_202(536, 0);
	}
}

int func_95()
{
	if ((func_356(8) || func_356(16)) || func_356(64))
	{
		func_445(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584, 100, 0, 0);
	}
	if (func_356(2048) || func_356(1024))
	{
		func_445(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584, 100, 0, 0);
	}
	if (is_entity_dead(Global_35))
	{
		return 5;
	}
	if (Local_18.f_1786.f_10 == -1)
	{
		return 2;
	}
	if (get_game_timer() > Local_18.f_1786.f_2)
	{
		return 2;
	}
	iVar0 = func_172(Local_18.f_1786.f_10);
	if (is_entity_dead(iVar0))
	{
		Local_18.f_1786.f_10 = func_444(1, 8);
		return -1;
	}
	if (get_game_timer() < Local_18.f_1786.f_1)
	{
		return -1;
	}
	if (!func_356(128))
	{
		if (func_173(iVar0, "GENERIC_ANGRY_REACTION", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_440(128);
			Local_18.f_1786.f_1 = get_game_timer() + 1500;
		}
		if (func_173(iVar0, "GENERIC_SHOCKED_DISBELIEF", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_440(128);
			Local_18.f_1786.f_1 = get_game_timer() + 1500;
		}
		if (func_173(iVar0, "STOP_THAT", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_440(128);
			Local_18.f_1786.f_1 = get_game_timer() + 1500;
		}
		if (func_173(iVar0, "STOP_THAT_ANNOYED", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_440(128);
			Local_18.f_1786.f_1 = get_game_timer() + 1500;
		}
		if (func_173(iVar0, "CUT_THAT_OUT", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_440(128);
			Local_18.f_1786.f_1 = get_game_timer() + 1500;
		}
		if (func_173(iVar0, "GENERIC_INTERRUPT", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_440(128);
			Local_18.f_1786.f_1 = get_game_timer() + 1500;
		}
	}
	else if (!func_356(256))
	{
		if ((func_356(2) || func_356(8)) || func_356(32))
		{
			if (func_173(iVar0, "GREET_PLAYER_DEAD_BODY", -1323320425, Global_35, 0, 0, 0, 1))
			{
				func_440(256);
				return 2;
			}
			if (func_173(iVar0, "GREET_PLAYER_DEAD_BODY_INNOCENT", -1323320425, Global_35, 0, 0, 0, 1))
			{
				func_440(256);
				return 2;
			}
			if (func_173(iVar0, "GREET_PLAYER_DEAD_BODY_LONGTIME", -1323320425, Global_35, 0, 0, 0, 1))
			{
				func_440(256);
				return 2;
			}
		}
		if ((func_356(4) || func_356(16)) || func_356(64))
		{
			if (func_173(iVar0, "GREET_PLAYER_HOGTIED_BODY", -1323320425, Global_35, 0, 0, 0, 1))
			{
				func_440(256);
				return 2;
			}
			if (func_173(iVar0, "GREET_PLAYER_HOGTIED_BODY_INNOCENT", -1323320425, Global_35, 0, 0, 0, 1))
			{
				func_440(256);
				return 2;
			}
		}
		if (func_173(iVar0, "SHAME_ON_YOU", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_440(256);
			return 2;
		}
		if (func_173(iVar0, "KNOCKOUT_WARNING", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_440(256);
			return 2;
		}
	}
	return -1;
}

int func_96()
{
	bVar0 = true;
	if ((func_356(8) || func_356(16)) || func_356(64))
	{
		bVar0 = func_445(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584, 100, 0, 0);
	}
	if (func_356(2048) || func_356(1024))
	{
		bVar0 = func_445(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584, 100, 0, 0);
	}
	if (bVar0)
	{
		if (func_446(3072))
		{
			return 4;
		}
		else
		{
			return 3;
		}
	}
	return -1;
}

void func_97()
{
	if (((func_356(2) || func_356(4)) || func_356(8)) || func_356(16))
	{
		open_sequence_task(&iVar0);
		if (func_356(2) || func_356(4))
		{
			if (_is_ped_carrying(Global_35))
			{
				task_place_carried_entity_at_coord(0, Local_18.f_1786.f_7, 0f, 0f, 0f, 2f, 1);
			}
			if (func_356(4))
			{
				if (_is_ped_hogtied(Local_18.f_1786.f_7))
				{
					_0x18ff3110cf47115d(Local_18.f_1786.f_7, 1, 1);
					_task_cut_free_hogtied_target_ped(0, Local_18.f_1786.f_7);
				}
			}
		}
		if (func_356(8) || func_356(16))
		{
			func_445(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584, 100, 0, 0);
			if (does_entity_exist(Local_18.f_1786.f_5) && !is_entity_dead(Local_18.f_1786.f_5))
			{
				if (_is_ped_carrying(Local_18.f_1786.f_5))
				{
					if (_0xefc4303ddc6e60d3(Global_35))
					{
						_0xed27560703f37258(0);
					}
					if (!is_ped_on_mount(Global_35))
					{
						task_pickup_carriable_entity(0, Local_18.f_1786.f_8);
						task_place_carried_entity_at_coord(0, Local_18.f_1786.f_8, get_offset_from_entity_in_world_coords(Local_18.f_1786.f_5, 0f, -1.5f, 0f), 1f, 8);
					}
					else
					{
						task_dump_carriable_from_parent(0, Local_18.f_1786.f_5, Local_18.f_1786.f_8);
						if (func_356(16))
						{
							task_follow_nav_mesh_to_coord(0, get_offset_from_entity_in_world_coords(Local_18.f_1786.f_5, 0f, 3f, 0f), 1f, 20000, 0.25f, 0, 40000f);
						}
						task_dismount_animal(0, 0, 0, 0, 0, 0);
					}
				}
			}
			if (func_356(16))
			{
				if (_is_ped_hogtied(Local_18.f_1786.f_8))
				{
					_0x18ff3110cf47115d(Local_18.f_1786.f_8, 1, 1);
					_task_cut_free_hogtied_target_ped(0, Local_18.f_1786.f_8);
				}
			}
		}
		func_447(Global_35, &iVar0, 0, 0, 1, 1);
		Local_18.f_1786.f_1 = get_game_timer() + 1500;
	}
	if (func_356(32) || func_356(64))
	{
		func_445(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584, 100, 0, 0);
		disable_control_action(0, -128997553, false);
		set_ped_reset_flag(Global_35, 295, true);
	}
}

int func_98()
{
	if (is_entity_dead(Global_35))
	{
		return 5;
	}
	if (func_356(128) || func_356(256))
	{
		if (!func_356(512))
		{
			if (func_173(Global_35, "PLAYER_REACTION_CAUGHT_OUT", 1017772929, 0, 0, 0, 0, 1))
			{
				func_440(512);
			}
		}
	}
	if (func_356(2048) || func_356(1024))
	{
		func_445(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584, 100, 0, 0);
	}
	func_445(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584, 100, 0, 0);
	if ((((Local_18.f_1786.f_1 > get_game_timer() || func_442(Global_35, -208384378)) || func_442(Global_35, -1619621311)) || func_442(Global_35, 724175444)) || func_442(Global_35, 242628503))
	{
		return -1;
	}
	if (does_entity_exist(Local_18.f_1786.f_7))
	{
		if (_0x0ccfe72b43c9cf96(Local_18.f_1786.f_7))
		{
			_0x9ebd34958ab6f824(Local_18.f_1786.f_7);
		}
		if (!is_entity_dead(Local_18.f_1786.f_7))
		{
			task_smart_flee_coord(Local_18.f_1786.f_7, func_448(Local_18.f_45), 999f, -1, false, 1077936128);
		}
		_0x18ff3110cf47115d(Local_18.f_1786.f_7, 0, 0);
		_0x18ff3110cf47115d(Local_18.f_1786.f_7, 2, 0);
		_0x18ff3110cf47115d(Local_18.f_1786.f_7, 3, 0);
	}
	if (does_entity_exist(Local_18.f_1786.f_8))
	{
		if (_0x0ccfe72b43c9cf96(Local_18.f_1786.f_8))
		{
			task_horse_action(Local_18.f_1786.f_5, 1, 0, 0);
			_0x9ebd34958ab6f824(Local_18.f_1786.f_8);
		}
		if (!is_entity_dead(Local_18.f_1786.f_8))
		{
			task_smart_flee_coord(Local_18.f_1786.f_8, func_448(Local_18.f_45), 999f, -1, false, 1077936128);
		}
		_0x18ff3110cf47115d(Local_18.f_1786.f_8, 0, 0);
		_0x18ff3110cf47115d(Local_18.f_1786.f_8, 2, 0);
		_0x18ff3110cf47115d(Local_18.f_1786.f_8, 3, 0);
	}
	if (func_356(2048) || func_356(1024))
	{
		return 4;
	}
	if (!func_356(1) && !func_38(64))
	{
		_0x816a3acd265e2297(1361896662, 0);
		func_440(1);
	}
	if (!func_356(8192) && !func_38(32))
	{
		_0x816a3acd265e2297(-2146271366, 0);
		func_440(8192);
	}
	return 5;
}

void func_99()
{
	func_445(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584, 100, 0, 0);
	if (does_entity_exist(Local_18.f_1786.f_6) && !is_entity_dead(Local_18.f_1786.f_6))
	{
		if (does_entity_exist(Local_18.f_1786.f_9))
		{
			open_sequence_task(&iVar0);
			if (is_ped_on_mount(Global_35))
			{
				task_dismount_animal(0, 0, 0, 0, 0, 0);
			}
			task_pickup_carriable_entity(0, Local_18.f_1786.f_9);
			task_place_carried_entity_at_coord(0, Local_18.f_1786.f_9, get_offset_from_entity_in_world_coords(Local_18.f_1786.f_6, 0f, -1.5f, 0f), 1f, 8);
			if (func_356(16))
			{
				if (_is_ped_hogtied(Local_18.f_1786.f_9))
				{
					_0x18ff3110cf47115d(Local_18.f_1786.f_9, 1, 1);
					_task_cut_free_hogtied_target_ped(0, Local_18.f_1786.f_9);
				}
			}
			func_447(Global_35, &iVar0, 0, 0, 1, 1);
			Local_18.f_1786.f_1 = get_game_timer() + 500;
		}
	}
}

int func_100()
{
	if (is_entity_dead(Global_35))
	{
		return 5;
	}
	func_445(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584, 100, 0, 0);
	if (func_356(128) || func_356(256))
	{
		if (!func_356(512))
		{
			if (func_173(Global_35, "PLAYER_REACTION_CAUGHT_OUT", 1017772929, 0, 0, 0, 0, 1))
			{
				func_440(512);
			}
		}
	}
	if ((((Local_18.f_1786.f_1 > get_game_timer() || func_442(Global_35, -208384378)) || func_442(Global_35, -1619621311)) || func_442(Global_35, 724175444)) || func_442(Global_35, 242628503))
	{
		return -1;
	}
	if (does_entity_exist(Local_18.f_1786.f_9))
	{
		if (_0x0ccfe72b43c9cf96(Local_18.f_1786.f_9))
		{
			task_horse_action(Local_18.f_1786.f_6, 1, 0, 0);
			_0x9ebd34958ab6f824(Local_18.f_1786.f_9);
		}
		if (!is_entity_dead(Local_18.f_1786.f_9))
		{
			task_smart_flee_coord(Local_18.f_1786.f_9, func_448(Local_18.f_45), 999f, -1, false, 1077936128);
		}
		_0x18ff3110cf47115d(Local_18.f_1786.f_9, 0, 0);
		_0x18ff3110cf47115d(Local_18.f_1786.f_9, 2, 0);
		_0x18ff3110cf47115d(Local_18.f_1786.f_9, 3, 0);
	}
	if (!func_356(1) && !func_38(64))
	{
		_0x816a3acd265e2297(1361896662, 0);
		func_440(1);
	}
	if (!func_356(8192) && !func_38(32))
	{
		_0x816a3acd265e2297(-2146271366, 0);
		func_440(8192);
	}
	return 5;
}

void func_101()
{
	Local_18.f_1786.f_1 = get_game_timer() + 2000;
	set_player_control(get_player_index(), true, 0, false);
}

int func_102()
{
	if (get_game_timer() > Local_18.f_1786.f_1)
	{
		if (func_356(2))
		{
			func_357(2);
			func_425(3, -1972216640, 0, "CAMP_DBODY_HON", 0, 0, 1065353216, 0);
			if (((((func_356(8) || func_356(16)) || func_356(32)) || func_356(64)) || func_356(2048)) || func_356(1024))
			{
				Local_18.f_1786.f_1 = get_game_timer() + 2000;
				return -1;
			}
		}
		if (func_356(4))
		{
			func_357(4);
			func_425(3, -1972216640, 0, "CAMP_HOGT_HON", 0, 0, 1065353216, 0);
			if (((((func_356(8) || func_356(16)) || func_356(32)) || func_356(64)) || func_356(2048)) || func_356(1024))
			{
				Local_18.f_1786.f_1 = get_game_timer() + 2000;
				return -1;
			}
		}
		if (func_356(8))
		{
			func_357(8);
			func_425(3, -1972216640, 0, "CAMP_DBODY_HON", 0, 0, 1065353216, 0);
			if (((func_356(32) || func_356(64)) || func_356(2048)) || func_356(1024))
			{
				Local_18.f_1786.f_1 = get_game_timer() + 2000;
				return -1;
			}
		}
		if (func_356(16))
		{
			func_357(16);
			func_425(3, -1972216640, 0, "CAMP_HOGT_HON", 0, 0, 1065353216, 0);
			if (((func_356(32) || func_356(64)) || func_356(2048)) || func_356(1024))
			{
				Local_18.f_1786.f_1 = get_game_timer() + 2000;
				return -1;
			}
		}
		if (func_356(2048))
		{
			func_357(2048);
			func_425(3, -1972216640, 0, "CAMP_DBODY_HON", 0, 0, 1065353216, 0);
			if (func_356(32) || func_356(64))
			{
				Local_18.f_1786.f_1 = get_game_timer() + 2000;
				return -1;
			}
		}
		if (func_356(1024))
		{
			func_357(1024);
			func_425(3, -1972216640, 0, "CAMP_HOGT_HON", 0, 0, 1065353216, 0);
			if (func_356(32) || func_356(64))
			{
				Local_18.f_1786.f_1 = get_game_timer() + 2000;
				return -1;
			}
		}
		if (func_356(32))
		{
			func_357(32);
			func_425(3, -1972216640, 0, "CAMP_DBODY_HON", 0, 0, 1065353216, 0);
		}
		if (func_356(64))
		{
			func_357(64);
			func_425(3, -1972216640, 0, "CAMP_HOGT_HON", 0, 0, 1065353216, 0);
		}
		return 0;
	}
	return -1;
}

void func_103()
{
	set_player_control(player_id(), false, 256, false);
	vVar0 = { func_449() };
	vVar0.f_2 = 0f;
	vVar0 = { vVar0 * Vector(20f, 20f, 20f) };
	vVar3 = { Global_36 - vVar0 };
	task_smart_flee_coord(Global_35, vVar3, 2000f, -1, 8388608, 1f);
}

int func_104()
{
	if (!func_264(Global_35, &(Global_1357549->f_3[4]), 1, 0))
	{
		clear_ped_tasks(Global_35, 1, 0);
		set_player_control(player_id(), true, 0, false);
		return 0;
	}
	return -1;
}

void func_105()
{
	Local_18.f_1862 = 0;
	Local_18.f_1862.f_1 = 0;
	Local_18.f_1862.f_2 = 0;
	Local_18.f_1862.f_3 = -1;
	Local_18.f_1862.f_5 = func_450();
	if (Local_18.f_1862.f_4 != -1)
	{
		func_451(Local_18.f_1862.f_4, 256);
	}
	Local_18.f_1862.f_4 = -1;
}

int func_106()
{
	if (func_38(1))
	{
		if (func_126(0, 0, 1))
		{
			return -1;
		}
		else
		{
			func_50(1);
		}
	}
	if ((func_127(&Global_1935630, 16384) || func_130(func_129(func_128()), 256)) || _0x99f92061efe908ba())
	{
		return -1;
	}
	if (Local_18.f_1721.f_62 > 0)
	{
		return -1;
	}
	if (is_entity_dead(Global_35))
	{
		return -1;
	}
	if (!_does_volume_exist(&(Global_1357549->f_3[0])))
	{
		return -1;
	}
	if (!is_entity_in_volume(Global_35, &(Global_1357549->f_3[0]), false, 0))
	{
		return -1;
	}
	if (is_ped_on_mount(Global_35))
	{
		if (func_452(func_141(), &vVar0, &uVar3) && vdist2(vVar0, Global_36) < 4f)
		{
			return -1;
		}
		Local_18.f_1862.f_5 = get_mount(Global_35);
		func_453(1);
	}
	if (_0xefc4303ddc6e60d3(Global_35))
	{
		Local_18.f_1862.f_5 = _0xed1f514af4732258(Global_35);
		func_453(2);
	}
	if (!func_454(1) && !func_454(2))
	{
		return -1;
	}
	if (!does_entity_exist(Local_18.f_1862.f_5) || is_entity_dead(Local_18.f_1862.f_5))
	{
		return -1;
	}
	return 1;
}

void func_107()
{
	Local_18.f_1862.f_3 = func_444(1, 8);
	Local_18.f_1862.f_1 = get_game_timer() + 1500;
}

int func_108()
{
	disable_control_action(0, -1453452184, false);
	if (func_38(1))
	{
		if (func_126(0, 0, 1))
		{
			return 0;
		}
	}
	if (func_127(&Global_1935630, 16384) || _0x99f92061efe908ba())
	{
		return 0;
	}
	if (Local_18.f_1721.f_62 > 0)
	{
		return 0;
	}
	if (is_entity_dead(Global_35))
	{
		return 0;
	}
	set_ped_reset_flag(Global_35, 184, true);
	if (!is_entity_in_volume(Global_35, &(Global_1357549->f_3[0]), false, 0))
	{
		return 0;
	}
	if (func_454(1))
	{
		if (!is_ped_on_mount(Global_35))
		{
			return 3;
		}
	}
	if (func_454(2))
	{
		if (!_0xefc4303ddc6e60d3(Global_35))
		{
			return 3;
		}
	}
	if (!does_entity_exist(Local_18.f_1862.f_5) || is_entity_dead(Local_18.f_1862.f_5))
	{
		return 0;
	}
	if (Local_18.f_1862.f_3 == -1)
	{
		return 2;
	}
	if (get_game_timer() > Local_18.f_1862.f_1)
	{
		return 2;
	}
	iVar0 = func_172(Local_18.f_1862.f_3);
	if (is_entity_dead(iVar0))
	{
		Local_18.f_1862.f_3 = func_444(1, 8);
		return -1;
	}
	if (!func_454(4))
	{
		if (func_173(iVar0, "RIDING_HORSE_IN_CAMP", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_453(4);
			return 2;
		}
		if (func_173(iVar0, "SHAME_ON_YOU", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_453(4);
			return 2;
		}
		if (func_173(iVar0, "SHAME_ON_YOU_DOWN", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_453(4);
			return 2;
		}
		if (func_173(iVar0, "PLAYER_ACTING_WEIRD", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_453(4);
			return 2;
		}
		if (func_173(iVar0, "PLAYER_ACTING_WEIRD_DOWN", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_453(4);
			return 2;
		}
	}
	return -1;
}

void func_109()
{
	set_player_control(get_player_index(), false, 0, false);
	if (!func_456(func_455(44)) && func_141() != 0)
	{
		func_202(533, 0);
	}
	Local_18.f_1862.f_4 = func_457(Local_18.f_1862.f_5);
	if (Local_18.f_1862.f_4 != -1)
	{
		func_458(Local_18.f_1862.f_4, 256);
	}
	Local_18.f_1862.f_1 = get_game_timer();
	if (func_141() != 0)
	{
		Local_18.f_1862.f_1 += 1200;
	}
}

int func_110()
{
	disable_control_action(0, -1453452184, false);
	if (is_entity_dead(Global_35))
	{
		return 0;
	}
	set_ped_reset_flag(Global_35, 184, true);
	if (func_127(&Global_1935630, 16384) || _0x99f92061efe908ba())
	{
		return 0;
	}
	if (!func_454(4))
	{
		if (func_38(1))
		{
			if (func_126(0, 0, 1))
			{
				return 0;
			}
		}
		if (!is_entity_in_volume(Global_35, &(Global_1357549->f_3[0]), false, 0))
		{
			return 0;
		}
	}
	if (func_454(1))
	{
		if (!is_ped_on_mount(Global_35))
		{
			simulate_player_input_gait(player_id(), 1f, 3000, 0f, true, false);
			return 3;
		}
	}
	if (func_454(2))
	{
		if (!_0xefc4303ddc6e60d3(Global_35))
		{
			return 3;
		}
	}
	if (!does_entity_exist(Local_18.f_1862.f_5) || is_entity_dead(Local_18.f_1862.f_5))
	{
		return 0;
	}
	func_445(Local_18.f_1862.f_5, &(Local_18.f_1862.f_2), 32, 0, 0, 1084227584, 100, 0, 0);
	if (get_game_timer() < Local_18.f_1862.f_1)
	{
		return -1;
	}
	if (func_454(4))
	{
		if (!func_454(8))
		{
			if (func_173(Global_35, "DEFUSE_ARGUMENT_TOUGH", 1017772929, 0, 0, 0, 0, 1))
			{
				func_453(8);
				Local_18.f_1862.f_1 = get_game_timer() + 1000;
				return -1;
			}
		}
	}
	if (func_454(1))
	{
		if (!func_442(Global_35, 501393341))
		{
			task_dismount_animal(Global_35, 0, 0, 0, 0, 0);
		}
	}
	if (func_454(2))
	{
		if (!func_454(64))
		{
			_0xed27560703f37258(Global_35);
			func_453(64);
		}
	}
	return -1;
}

void func_111()
{
	set_player_control(get_player_index(), true, 0, false);
}

void func_112()
{
	set_ped_config_flag(Local_18.f_1862.f_5, 419, true);
	set_ped_config_flag(Local_18.f_1862.f_5, 412, true);
	set_ped_config_flag(Local_18.f_1862.f_5, 355, true);
	Local_18.f_1862.f_1 = get_game_timer() + 10000;
}

int func_113()
{
	if (func_454(1) && !func_454(32))
	{
		if (func_459(Global_35, Local_18.f_1862.f_5, 1, 1) > 2f || get_game_timer() > Local_18.f_1862.f_1)
		{
			Local_18.f_1862.f_1 = get_game_timer() + 10000;
			func_460(1);
		}
		else
		{
			return -1;
		}
	}
	_0xc3abcfbc7d74afa5(Local_18.f_1862.f_5, 6, 1);
	if (func_38(1))
	{
		if (func_126(0, 0, 1))
		{
			return 0;
		}
	}
	if (func_127(&Global_1935630, 16384) || _0x99f92061efe908ba())
	{
		return 0;
	}
	if (!does_entity_exist(Local_18.f_1862.f_5) || is_entity_dead(Local_18.f_1862.f_5))
	{
		return 0;
	}
	set_ped_reset_flag(Global_35, 184, true);
	if (!func_454(16))
	{
		if (func_173(Global_35, "SPURS_HORSE", 1017772929, 0, 0, 0, 0, 1))
		{
			func_453(16);
		}
	}
	if (get_game_timer() > Local_18.f_1862.f_1)
	{
		return 0;
	}
	if (!_does_scenario_point_exist(Local_18.f_1862.f_6))
	{
		Local_18.f_1862.f_6 = func_461();
	}
	if (_does_scenario_point_exist(Local_18.f_1862.f_6))
	{
		if (!func_454(32))
		{
			task_follow_nav_mesh_to_coord(Local_18.f_1862.f_5, _get_scenario_point_coords(Local_18.f_1862.f_6, true), 1.5f, 35000, 0.25f, 0, 40000f);
			func_453(32);
		}
		if (is_entity_at_coord(Local_18.f_1862.f_5, _get_scenario_point_coords(Local_18.f_1862.f_6, true), 0.5f, 0.5f, 2f, false, true, 0))
		{
			return 0;
		}
	}
	return -1;
}

void func_114()
{
	if (does_entity_exist(Local_18.f_1862.f_5) && !is_entity_dead(Local_18.f_1862.f_5))
	{
		set_ped_config_flag(Local_18.f_1862.f_5, 419, false);
		set_ped_config_flag(Local_18.f_1862.f_5, 412, false);
	}
}

void func_115()
{
	Local_18.f_1934.f_65 = 0;
	Local_18.f_1934.f_66 = 0;
	_0x5199405eabfbd7f0("CamTransitionBlinkSlow");
	func_462();
}

int func_116()
{
	if (func_463())
	{
		if (get_entity_speed(Global_35) > 0.5f)
		{
			set_ped_reset_flag(Global_35, 203, true);
		}
	}
	if (!func_464())
	{
		return -1;
	}
	if (!_is_ped_carrying(Global_35))
	{
		return -1;
	}
	Local_18.f_1934.f_66 = _get_first_entity_ped_is_carrying(Global_35);
	if ((does_entity_exist(Local_18.f_1934.f_66) && is_entity_a_ped(Local_18.f_1934.f_66)) && is_ped_human(get_ped_index_from_entity_index(Local_18.f_1934.f_66)))
	{
		return -1;
	}
	else if (func_465(Local_18.f_1934.f_66))
	{
		Local_18.f_1934.f_83 = 1;
	}
	else if (func_466(Global_35))
	{
		Local_18.f_1934.f_84 = 1;
	}
	return 1;
}

void func_117()
{
	Local_18.f_1934.f_79 = _0xb958d97a0dfaa0c2("CamTransitionBlinkSlow");
}

int func_118()
{
	if (!func_464())
	{
		return 0;
	}
	if (!does_entity_exist(Local_18.f_1934.f_66))
	{
		return 0;
	}
	if (_get_first_entity_ped_is_carrying(Global_35) != Local_18.f_1934.f_66)
	{
		return 0;
	}
	if (is_ped_in_melee_combat(Global_35))
	{
		return -1;
	}
	if (func_463())
	{
		if (get_entity_speed(Global_35) > 0.5f)
		{
			set_ped_reset_flag(Global_35, 203, true);
		}
	}
	if (!func_467(Global_35))
	{
		return -1;
	}
	if (func_442(Global_35, -208384378))
	{
		return -1;
	}
	set_ped_reset_flag(Global_35, 203, true);
	fVar0 = vdist2(Global_36, func_468(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_6, Local_18.f_1934.f_67));
	if (fVar0 > 3f)
	{
		return 2;
	}
	return 3;
}

void func_119()
{
	set_ped_reset_flag(Global_35, 203, true);
	clear_ped_tasks(Global_35, 1, 0);
	animpostfx_play("CamTransitionBlinkSlow");
	func_175(&(Local_18.f_1934.f_80), 1);
}

int func_120()
{
	set_ped_reset_flag(Global_35, 203, true);
	if (animpostfx_is_running("CamTransitionBlinkSlow") && _0xfbf161fcfec8589e("CamTransitionBlinkSlow", 2, 0, &(Local_18.f_1934.f_79)))
	{
		_set_entity_coords_and_heading(player_ped_id(), func_468(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_6, Local_18.f_1934.f_67), func_469(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_9, Local_18.f_1934.f_67.f_3), true, true, false);
		set_gameplay_cam_relative_heading(func_469(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_10, Local_18.f_1934.f_67.f_4), 1f);
		set_gameplay_cam_relative_pitch(func_469(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_11, Local_18.f_1934.f_67.f_5), 1f);
		task_place_carried_entity_at_coord(Global_35, Local_18.f_1934.f_66, 0f, 0f, 0f, 2f, 33);
		return 4;
	}
	if (func_168(&(Local_18.f_1934.f_80)) && func_470(&(Local_18.f_1934.f_80)) > 5000)
	{
		clear_ped_tasks(Global_35, 1, 0);
		return 0;
	}
	return -1;
}

void func_121()
{
	set_ped_reset_flag(Global_35, 203, true);
	clear_ped_tasks(Global_35, 1, 0);
	task_place_carried_entity_at_coord(Global_35, Local_18.f_1934.f_66, 0f, 0f, 0f, 2f, 33);
}

int func_122()
{
	set_ped_reset_flag(Global_35, 203, true);
	return 4;
}

void func_123()
{
	set_ped_reset_flag(Global_35, 203, true);
	if (Local_18.f_1934.f_79)
	{
		_0xa201a3d0ac087c37("CamTransitionBlinkSlow");
		Local_18.f_1934.f_79 = 0;
	}
	func_175(&(Local_18.f_1934.f_80), 1);
}

int func_124()
{
	set_ped_reset_flag(Global_35, 203, true);
	if (!_is_ped_carrying(Global_35))
	{
		vVar4 = { get_entity_coords(Local_18.f_1934.f_66, true, false) };
		if (get_ground_z_and_normal_for_3d_coord(vVar4.x, vVar4.y, (vVar4.z + 10f), &fVar0, &uVar1))
		{
			if (vVar4.z < fVar0)
			{
				vVar7 = { func_468(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_6, Local_18.f_1934.f_67) };
				fVar10 = func_469(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_9, Local_18.f_1934.f_67.f_3);
				vVar11 = { _get_object_offset_from_coords(vVar7, fVar10, 0f, 0.75f, 0f) };
				vVar11.f_2 = fVar0;
				set_entity_coords(Local_18.f_1934.f_66, vVar11, true, false, true, true);
				_0x9587913b9e772d29(Local_18.f_1934.f_66, 0);
			}
		}
		if (!func_467(player_ped_id()))
		{
			if (Local_18.f_1934.f_83 && func_277(Local_18.f_45))
			{
				func_202(615, 1);
			}
			else if (Local_18.f_45 == 8 || Local_18.f_45 == 7)
			{
				func_202(617, 1);
			}
			else
			{
				func_202(616, 1);
			}
			Local_18.f_1934.f_83 = 0;
			Local_18.f_1934.f_84 = 0;
			clear_ped_tasks(Global_35, 1, 0);
			return 0;
		}
	}
	if (func_168(&(Local_18.f_1934.f_80)) && func_470(&(Local_18.f_1934.f_80)) > 5000)
	{
		clear_ped_tasks(Global_35, 1, 0);
		return 0;
	}
	set_ped_reset_flag(Global_35, 203, true);
	return -1;
}

Vector3 func_125(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1356.339f, 2443.121f, 308.1876f;
		case 1:
			return -125.85f, -39.9599f, 96.0908f;
		case 2:
			return 654.1f, -1245.5f, 43.5f;
		case 3:
			return 1905.086f, -1861.727f, 46.3492f;
		case 5:
			return 2222.172f, -772.852f, 42.662f;
		case 6:
			return 2342.779f, 1359.049f, 106.3936f;
		case 4:
			return 1422.625f, -7332.473f, 80.5977f;
		case 7:
			return -2592.702f, 453.0722f, 146.4588f;
		case 8:
			return -1639.306f, -1361.465f, 83.3963f;
	}
	return 0f, 0f, 0f;
}

bool func_126(int iParam0, bool bParam1, bool bParam2)
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
		if (func_471())
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
		iVar0 = func_472(&(Global_1898164->f_1[0]));
		if (func_473(iVar0) && func_474((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_475(&(Global_1898164->f_1[0])))
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

bool func_127(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_128()
{
	return Global_1894899->f_2;
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 7;
		case 79:
			return 0;
		case 43:
			return 1;
		case 98:
			return 2;
		case 58:
			return 3;
		case 71:
			return 4;
		case 4:
			return 5;
		case 76:
			return 8;
		case 9:
			return 6;
		case 5:
			return 9;
		case 38:
			return 10;
		case 105:
			return 11;
		case 92:
			return 12;
		case 78:
			return 13;
		case 26:
			return 14;
		case 37:
			return 15;
		case 115:
			return 16;
		default:
			break;
	}
	return -1;
}

bool func_130(int iParam0, int iParam1)
{
	if (!func_476(iParam0))
	{
		return false;
	}
	return (Global_40.f_9384[iParam0] && iParam1) != 0;
}

int func_131(int iParam0)
{
	if (!func_477(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

bool func_132(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!_is_this_model_a_horse(get_entity_model(iParam0)))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (func_442(iParam0, 713668775))
	{
		return false;
	}
	if (((func_442(iParam0, -76381094) || func_442(iParam0, -1098463898)) || func_442(iParam0, 993674639)) || get_is_task_active(iParam0, 7))
	{
		return false;
	}
	if (!is_entity_in_volume(iParam0, &(Global_1357549->f_3[0]), false, 0))
	{
		return false;
	}
	if (!_0x2d64376cf437363e(iParam0))
	{
		return true;
	}
	if (!_is_mount_seat_free(iParam0, -1))
	{
		return false;
	}
	if (iParam1 != -1 && func_478(iParam1))
	{
		return false;
	}
	return true;
}

void func_133(int iParam0)
{
	iVar0 = func_461();
	if (!_does_scenario_point_exist(iVar0))
	{
		return;
	}
	task_follow_nav_mesh_to_coord(iParam0, _get_scenario_point_coords(iVar0, true), 1.5f, 20000, 0.25f, 0, 40000f);
}

bool func_134()
{
	return Global_1949598->f_1;
}

bool func_135()
{
	return func_479();
}

void func_136(bool bParam0)
{
	if (bParam0 == func_135())
	{
		return;
	}
	if (bParam0)
	{
		func_146(81053684);
		if (!func_481(func_480(0)))
		{
			func_146(-525676072);
		}
	}
	else
	{
		func_145(81053684);
		func_145(-525676072);
	}
	Global_1946804->f_2792 = bParam0;
}

void func_137(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

bool func_138(int iParam0)
{
	if (-1829635046 == func_482(81053684))
	{
		if (func_483(iParam0))
		{
			return true;
		}
	}
	else if (func_484(-525676072, iParam0))
	{
		if (func_483(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_139()
{
	if (!func_479())
	{
		return 0;
	}
	if (!func_483(&iVar0))
	{
		return 0;
	}
	if (!func_485(iVar0))
	{
		return 0;
	}
	return func_486(iVar0, 0);
}

void func_140(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

int func_141()
{
	return Global_40.f_4283;
}

bool func_142()
{
	if (func_56() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_143(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_487((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_144(int iParam0)
{
	return func_489(func_488(iParam0));
}

void func_145(int iParam0)
{
	iVar2 = func_490(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_491(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_492(func_488(iParam0), 6);
}

void func_146(int iParam0)
{
	iVar2 = func_490(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_491(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_493(func_488(iParam0), 6);
}

void func_147()
{
	bVar0 = func_38(16);
	bVar1 = Global_1357549->f_1485 > to_float(5400);
	bVar2 = func_12(32768);
	if ((!bVar0 && bVar2) && bVar1)
	{
		func_160(16);
		func_425(2, -549508280, 0, 0, 0, 0, 1065353216, 0);
	}
	if (bVar0 && !bVar2)
	{
		func_50(16);
		Global_1357549->f_1485 = 0f;
	}
}

void func_148(float fParam0, float fParam1, float fParam2)
{
	Var0 = { func_494(fParam0, fParam1, fParam2) };
	_databinding_write_data_string(Global_1357549->f_1886.f_1, &Var0);
}

int func_149()
{
	return Global_40.f_4283.f_324;
}

void func_150(int iParam0)
{
	func_495(iParam0, &iVar0, &iVar1);
	_databinding_write_data_int(Global_1357549->f_1886.f_2, iVar0);
	_databinding_write_data_int(Global_1357549->f_1886.f_2.f_1, iVar1);
}

void func_151(int iParam0)
{
	func_495(iParam0, &iVar0, &iVar1);
	_databinding_write_data_int(Global_1357549->f_1886.f_4, iVar0);
	_databinding_write_data_int(Global_1357549->f_1886.f_4.f_1, iVar1);
}

bool func_152(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (is_bit_set(&(Local_18.f_14[iParam0]), iVar0))
		{
			if (!is_bit_set(Local_18.f_41, iVar0))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_153(int iParam0)
{
	func_496(iParam0, &(Global_1357549->f_3[2]), &(Global_1357549->f_3[3]), 0);
	func_497(&(Global_1357549->f_3[2]));
	if (((!func_12(64) && !func_336(4)) && !func_127(&Global_1935630, 4194304)) && _0xf256a75210c5c0eb(&(Global_1357549->f_3[2]), Global_36))
	{
		func_158(0);
	}
	if (iParam0->f_49)
	{
		func_498(iParam0);
	}
	else
	{
		func_499(iParam0);
	}
}

void func_154(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (_does_volume_exist(bParam0) && _0xf256a75210c5c0eb(bParam0, Global_36))
	{
		if (!func_12(1073741824))
		{
			func_140(1073741824);
		}
	}
	else if (func_12(1073741824))
	{
		func_137(1073741824);
	}
	if (_does_volume_exist(bParam1) && _0xf256a75210c5c0eb(bParam1, Global_36))
	{
		if (!func_12(32768))
		{
			func_140(32768);
		}
	}
	else if (func_12(32768))
	{
		func_137(32768);
	}
	if (_does_volume_exist(bParam2) && _0xf256a75210c5c0eb(bParam2, Global_36))
	{
		if (!func_38(512))
		{
			func_160(512);
		}
	}
	else if (func_38(512))
	{
		func_50(512);
	}
	if (_does_volume_exist(bParam3) && _0xf256a75210c5c0eb(bParam3, Global_36))
	{
		if (!func_38(1024))
		{
			func_160(1024);
		}
	}
	else if (func_38(1024))
	{
		func_50(1024);
	}
}

void func_155(bool bParam0)
{
	iVar1[0] = 0;
	iVar1[1] = 1;
	iVar4 = 0;
	while (iVar4 < iVar1)
	{
		iVar0 = func_358(&(iVar1[iVar4]));
		if ((does_entity_exist(iVar0) && _does_volume_exist(bParam0)) && _0xf256a75210c5c0eb(bParam0, get_entity_coords(iVar0, true, false)))
		{
			func_500(&(iVar1[iVar4]), 1);
		}
		else
		{
			func_500(&(iVar1[iVar4]), 0);
		}
		iVar4++;
	}
}

void func_156(int iParam0)
{
	if (!func_38(33554432))
	{
		if (func_38(1024))
		{
			func_160(33554432);
			_0xc6dcc2a3a8825c85(0);
		}
	}
	else
	{
		_0x8ec7cd701f872f87(0f, 4270208, 0, 0, -1, -1);
		_0x8ec7cd701f872f87(0.3f, 1760, 0, 0, -1, -1);
		if (!func_38(512))
		{
			_0xbc90bdf4e5228ea1();
			func_50(33554432);
		}
	}
}

void func_157()
{
	if (((get_frame_count() % 15) != 0 || func_265(4)) || func_159())
	{
		return;
	}
	iVar0 = func_141();
	vVar1 = { func_448(iVar0) };
	fVar4 = 50f;
	if ((iVar0 == 7 || iVar0 == 8) || iVar0 == 3)
	{
		fVar4 = 150f;
	}
	iVar5 = _0xba2c49ea6a8d24ff(vVar1, fVar4, 0, 1, 0);
	iVar6 = get_ped_index_from_entity_index(iVar5);
	if (((!does_entity_exist(iVar5) || !does_entity_exist(iVar6)) || !_0x5170dda6d63acaaa(iVar6)) || is_entity_on_screen(iVar5))
	{
		return;
	}
	set_ped_config_flag(iVar6, 186, false);
	set_entity_coords(iVar5, 523.9103f, -6.4477f, 110.8692f, false, false, false, true);
	_0x9d16896f0dbe78a2(523.9103f, -6.4477f, 110.8692f, 2.5f);
}

void func_158(bool bParam0)
{
	func_322(bParam0);
	func_323(!bParam0);
}

bool func_159()
{
	return Global_1898164->f_163;
}

void func_160(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_1357549->f_1495 = (Global_1357549->f_1495 || iParam0);
			break;
	}
}

bool func_161(bool bParam0, vector3 vParam1)
{
	if (!_does_volume_exist(bParam0))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(bParam0, vParam1);
}

bool func_162()
{
	return func_365(10, 0) >= 3;
}

void func_163(int iParam0, int iParam1)
{
	if (!func_476(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0] = (Global_40.f_9384[iParam0] || iParam1);
}

void func_164(int iParam0, int iParam1)
{
	if (!func_476(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0] = (&Global_40.f_9384[iParam0] - (Global_40.f_9384[iParam0] && iParam1));
}

int func_165(int iParam0)
{
	switch (func_141())
	{
		case 2:
			return func_501(iParam0);
		case 1:
			return func_502(iParam0);
		case 6:
			return func_503(iParam0);
		case 3:
			return func_504(iParam0);
	}
	return 0;
}

bool func_166(int iParam0)
{
	if (func_505())
	{
		return false;
	}
	if (_0x54b187f111d9c6f8(Global_35, 0))
	{
		return false;
	}
	if (func_325(func_172(&(Global_1357549->f_1659[iParam0])), 0))
	{
		if (_0x9337183fda2e9035(func_172(&(Global_1357549->f_1659[iParam0])), player_id()) || _0xa454d234e45bb6e5(func_172(&(Global_1357549->f_1659[iParam0])), player_id()))
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	if (func_174())
	{
		return false;
	}
	return true;
}

bool func_167(int iParam0)
{
	iVar0 = func_172(&(Global_1357549->f_1659[iParam0]));
	if (func_325(iVar0, 0) && func_170(&(Global_1357549->f_1659[iParam0]), 1, 1))
	{
		if (_does_volume_exist(&(Global_1357549->f_1663[iParam0])))
		{
			if (func_264(Global_35, &(Global_1357549->f_1663[iParam0]), 1, 0) && func_264(iVar0, &(Global_1357549->f_1663[iParam0]), 1, 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_168(var uParam0)
{
	return func_506(*uParam0, 1);
}

float func_169(var uParam0)
{
	if (!func_168(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_507(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_508() - uParam0->f_1);
}

bool func_170(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_509(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		return func_510(iParam0, 26, 1);
	}
	if (bParam2)
	{
		if (!func_325(func_172(iParam0), 0))
		{
			return false;
		}
	}
	if (!func_511(iParam0, 1, 0))
	{
		return false;
	}
	if (func_510(iParam0, 44, 1))
	{
		return false;
	}
	return true;
}

bool func_171(int iParam0, int iParam1)
{
	if (!func_509(iParam0))
	{
		return false;
	}
	if (((*Global_1360165)[iParam0]->f_140 && iParam1) != 0)
	{
		return true;
	}
	if (((*Global_1360165)[iParam0]->f_141 && iParam1) != 0)
	{
		return true;
	}
	return false;
}

int func_172(int iParam0)
{
	if (!func_509(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

bool func_173(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_512(iParam0, &Var0);
}

bool func_174()
{
	iVar0 = _0xd04241bbf6d03a5e(Global_35);
	if (_does_scenario_point_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_175(var uParam0, bool bParam1)
{
	if (bParam1 || !func_168(uParam0))
	{
		func_182(uParam0);
	}
}

void func_176(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_177(int iParam0)
{
	if (!func_477(iParam0))
	{
		return false;
	}
	if (!func_338(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

char* func_178(int iParam0)
{
	sVar0 = "";
	if (func_141() == 3)
	{
		if (iParam0 == 0)
		{
			sVar0 = "PL_DUTCH";
		}
		else
		{
			sVar0 = "PL_JOHN_SHADY";
		}
	}
	else if (iParam0 == 0)
	{
		sVar0 = "PL_DUTCH";
	}
	else
	{
		sVar0 = "PL_JOHN";
	}
	return sVar0;
}

int func_179(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_477(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch ((*Global_1360165)[iParam0]->f_11)
	{
		case 0:
			if (func_510(iParam0, 2, 1))
			{
				func_410(iParam0, 2, 1);
			}
			if (func_396(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_513(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_181(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_325(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_325(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_514(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_513(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_515(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_513(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_515(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0]->f_4;
				}
			}
			if (!func_510(iParam0, 44, 0))
			{
				func_513(iParam0, 44, 0);
			}
			if (func_516(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_515(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_410(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_517(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_518(iParam0, 0, 0, 1);
			}
			func_410(iParam0, 33, 1);
			func_410(iParam0, 34, 1);
			func_410(iParam0, 29, 1);
			if (!func_206(vVar0) && bParam7)
			{
				func_515(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_515(iParam0, 4);
			}
			else
			{
				func_515(iParam0, 5);
			}
			break;
		case 3:
			if (!is_entity_dead(Global_1360165[iParam0]) && !_0x3ab6c7b0bb0df4b1(Global_1360165[iParam0], -1))
			{
				if (is_entity_attached(Global_1360165[iParam0]))
				{
					if (is_ped_on_mount(Global_1360165[iParam0]) && bParam10)
					{
					}
					else if (is_ped_using_any_scenario(Global_1360165[iParam0]))
					{
						func_514(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						detach_entity(Global_1360165[iParam0], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_519(Global_1360165[iParam0], vVar0, iParam6, 2, 1073741824);
			}
			else if (bParam16)
			{
				if (is_ped_active_in_scenario(Global_1360165[iParam0], 0) && !_0x0c3cb2e600c8977d(Global_1360165[iParam0], 1))
				{
					clear_ped_tasks(Global_1360165[iParam0], 1, 0);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_515(iParam0, 4);
			}
			else
			{
				func_515(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0]->f_4;
					}
				}
				if (func_520(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_521(iParam0, iParam13, 0);
						func_522(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_510(iParam0, 25, 0))
						{
							func_410(iParam0, 25, 0);
						}
						func_513(iParam0, 66, 0);
						func_515(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_515(iParam0, 5);
				}
				func_513(iParam0, 28, 1);
			}
			else
			{
				func_515(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_515(iParam0, 6);
			}
			break;
		case 6:
			if (func_325(Global_1360165[iParam0], 0))
			{
				if (bParam24)
				{
					set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], true);
				}
				if (bParam18)
				{
					if (!_0x3ab6c7b0bb0df4b1(Global_1360165[iParam0], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							clear_ped_blood_damage_by_zone(Global_1360165[iParam0], iVar5);
							clear_ped_damage_decal_by_zone(Global_1360165[iParam0], iVar5, "ALL");
							iVar5++;
						}
						_0xe3144b932dfdff65(Global_1360165[iParam0], 0f, -1, 1, 1);
						_0xd049920cd29f6cc8(Global_1360165[iParam0], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					func_523(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_524(Global_1360165[iParam0], 1);
				}
			}
			func_515(iParam0, 7);
		case 7:
			func_517(iParam0, bParam9, bParam15, 0);
			func_525(iParam0, 4, bParam11);
			func_526(iParam0);
			if (bParam20)
			{
				if (func_527(Global_1360165[iParam0]))
				{
				}
			}
			func_528(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_515(iParam0, 0);
			func_529(iParam0, 16, 1);
			func_410(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_180(int iParam0)
{
	func_530(iParam0);
	set_anim_scene_entity(Global_1357549->f_1669, "ARTHUR", Global_35, 0);
	if (iParam0 == 0)
	{
		clear_ped_tasks_immediately(func_172(0), false, true);
		set_anim_scene_entity(Global_1357549->f_1669, "DUTCH", func_172(0), 0);
	}
	else
	{
		clear_ped_tasks_immediately(func_172(1), false, true);
		set_anim_scene_entity(Global_1357549->f_1669, "JOHN", func_172(1), 0);
	}
	func_531(iParam0);
}

void func_181(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_477(iParam0))
	{
		return;
	}
	if (func_338(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_513(iParam0, 56, 1);
		func_175(&(Global_1359489->f_40), 1);
	}
	func_532(iParam0, 0);
	func_525(iParam0, 4, 0);
	func_533(iParam0);
	func_526(iParam0);
	func_410(iParam0, 37, 1);
	bVar0 = func_325(Global_1360165[iParam0], 0);
	iVar1 = func_534(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_510(iParam0, 64, 1))
	{
		func_410(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_410(iParam0, 33, 1);
		func_410(iParam0, 34, 1);
		func_535(iParam0, 1056964608, -1, 1061158912);
		func_517(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_513(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_513(iParam0, 35, 1);
			if (bParam8)
			{
				func_513(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_536(iParam0, 0);
			if (is_ped_in_group(Global_1360165[iParam0]))
			{
				set_ped_keep_task(Global_1360165[iParam0], true);
			}
			_0xf74e134f40192884(Global_1360165[iParam0], 1);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
		}
		if (bVar2)
		{
			_0xbb68908cd11aebdc(iVar1);
		}
		func_410(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_513(iParam0, 33, 1);
		func_517(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_175(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_176(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_513(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_537(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_510(iParam0, 45, 1))
	{
		func_410(iParam0, 45, 1);
	}
	func_538(iParam0, 16, 1);
	func_410(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_325(func_131(iParam0), 0))
		{
			func_539(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_182(var uParam0)
{
	func_540(uParam0, 0f);
}

void func_183(int iParam0)
{
	if (func_141() == 3 && iParam0 == 0)
	{
		_0x1bc47a9dedc8df5d(58833085, 0);
		_0x1bc47a9dedc8df5d(-629053815, 0);
		remove_door_from_system(58833085);
		remove_door_from_system(-629053815);
	}
	if (func_141() == 3 && iParam0 == 1)
	{
		_0x1bc47a9dedc8df5d(1163459288, 0);
		remove_door_from_system(1163459288);
	}
}

void func_184()
{
	Global_1357549->f_12[0] = 1;
	Global_1357549->f_12[0]->f_1 = 970924250;
	Global_1357549->f_12[0]->f_2 = { -148.3662f, -26.0562f, 95.8773f };
	Global_1357549->f_12[0]->f_5 = 1935100224;
	Global_1357549->f_12[0]->f_6 = 0f;
	Global_1357549->f_12[1] = 1;
	Global_1357549->f_12[1]->f_1 = 970924250;
	Global_1357549->f_12[1]->f_2 = { -148.0154f, -13.4206f, 95.314f };
	Global_1357549->f_12[1]->f_5 = -274058460;
	Global_1357549->f_12[1]->f_6 = 0f;
	Global_1357549->f_12[2] = 1;
	Global_1357549->f_12[2]->f_1 = 970924250;
	Global_1357549->f_12[2]->f_2 = { -125.0946f, -21.7405f, 95.1253f };
	Global_1357549->f_12[2]->f_5 = 1935100224;
	Global_1357549->f_12[2]->f_6 = 0f;
	Global_1357549->f_12[8] = 1;
	Global_1357549->f_12[8]->f_1 = -1166561064;
	Global_1357549->f_12[8]->f_2 = { -132.0545f, -31.1304f, 95.9688f };
	Global_1357549->f_12[8]->f_5 = -274058460;
	Global_1357549->f_12[8]->f_6 = 0f;
	Global_1357549->f_12[7] = 1;
	Global_1357549->f_12[7]->f_1 = 172011504;
	Global_1357549->f_12[7]->f_2 = { -132.1342f, -30.8928f, 95.6164f };
	Global_1357549->f_12[7]->f_5 = 319326044;
	Global_1357549->f_12[7]->f_6 = 0f;
	Global_1357549->f_12[6] = 1;
	Global_1357549->f_12[6]->f_1 = -1365193577;
	Global_1357549->f_12[6]->f_2 = { -132.1342f, -30.8928f, 95.6164f };
	Global_1357549->f_12[6]->f_5 = 319326044;
	Global_1357549->f_12[6]->f_6 = 0f;
	Global_1357549->f_12[4] = 1;
	Global_1357549->f_12[4]->f_1 = 172011504;
	Global_1357549->f_12[4]->f_2 = { -129.8749f, -30.5768f, 95.5843f };
	Global_1357549->f_12[4]->f_5 = -843424619;
	Global_1357549->f_12[4]->f_6 = 0f;
	Global_1357549->f_12[5] = 1;
	Global_1357549->f_12[5]->f_1 = -1166561064;
	Global_1357549->f_12[5]->f_2 = { -129.8767f, -30.3077f, 95.6024f };
	Global_1357549->f_12[5]->f_5 = -1753113092;
	Global_1357549->f_12[5]->f_6 = 0f;
	Global_1357549->f_12[9] = 1;
	Global_1357549->f_12[9]->f_1 = -1166561064;
	Global_1357549->f_12[9]->f_2 = { -131.4675f, -31.6383f, 97.1984f };
	Global_1357549->f_12[9]->f_5 = 219115318;
	Global_1357549->f_12[9]->f_6 = 0f;
	Global_1357549->f_12[12] = 1;
	Global_1357549->f_12[12]->f_1 = 163126540;
	Global_1357549->f_12[12]->f_2 = { -116.1046f, -36.3356f, 95.1647f };
	Global_1357549->f_12[12]->f_5 = -1200234060;
	Global_1357549->f_12[12]->f_6 = 0f;
	Global_1357549->f_12[13] = 2;
	Global_1357549->f_12[13]->f_1 = 1802272784;
	Global_1357549->f_12[13]->f_2 = { 690.5589f, -1253.308f, 43.9556f };
	Global_1357549->f_12[13]->f_5 = 1935100224;
	Global_1357549->f_12[13]->f_6 = 0f;
	Global_1357549->f_12[14] = 2;
	Global_1357549->f_12[14]->f_1 = -1010466481;
	Global_1357549->f_12[14]->f_2 = { 691.5306f, -1258.313f, 44.2328f };
	Global_1357549->f_12[14]->f_5 = -843424619;
	Global_1357549->f_12[14]->f_6 = 0f;
	Global_1357549->f_12[15] = 2;
	Global_1357549->f_12[15]->f_1 = 1084869405;
	Global_1357549->f_12[15]->f_2 = { 673.365f, -1269.473f, 44.0022f };
	Global_1357549->f_12[15]->f_5 = -916457800;
	Global_1357549->f_12[15]->f_6 = 0f;
	Global_1357549->f_12[16] = 2;
	Global_1357549->f_12[16]->f_1 = 1802272784;
	Global_1357549->f_12[16]->f_2 = { 675.5692f, -1269.244f, 45.3696f };
	Global_1357549->f_12[16]->f_5 = -916457800;
	Global_1357549->f_12[16]->f_6 = 0f;
	Global_1357549->f_12[17] = 2;
	Global_1357549->f_12[17]->f_1 = -850189983;
	Global_1357549->f_12[17]->f_2 = { 676.3393f, -1250.768f, 43.8081f };
	Global_1357549->f_12[17]->f_5 = 1935100224;
	Global_1357549->f_12[17]->f_6 = 0f;
	Global_1357549->f_12[18] = 2;
	Global_1357549->f_12[18]->f_1 = 2108368013;
	Global_1357549->f_12[18]->f_2 = { 662.1107f, -1256.578f, 42.7845f };
	Global_1357549->f_12[18]->f_5 = 319326044;
	Global_1357549->f_12[18]->f_6 = 0f;
	Global_1357549->f_12[19] = 2;
	Global_1357549->f_12[19]->f_1 = 2728487;
	Global_1357549->f_12[19]->f_2 = { 661.0519f, -1259.052f, 43.1332f };
	Global_1357549->f_12[19]->f_5 = -1200234060;
	Global_1357549->f_12[19]->f_6 = 0f;
	Global_1357549->f_12[20] = 2;
	Global_1357549->f_12[20]->f_1 = 1128417383;
	Global_1357549->f_12[20]->f_2 = { 672.6604f, -1241.364f, 43.4735f };
	Global_1357549->f_12[20]->f_5 = -843424619;
	Global_1357549->f_12[20]->f_6 = 0f;
	Global_1357549->f_12[21] = 2;
	Global_1357549->f_12[21]->f_1 = 1802272784;
	Global_1357549->f_12[21]->f_2 = { 674.6741f, -1238.333f, 43.6628f };
	Global_1357549->f_12[21]->f_5 = 1935100224;
	Global_1357549->f_12[21]->f_6 = 0f;
	Global_1357549->f_12[22] = 2;
	Global_1357549->f_12[22]->f_1 = 1802272784;
	Global_1357549->f_12[22]->f_2 = { 656.9509f, -1234.653f, 45.8639f };
	Global_1357549->f_12[22]->f_5 = 1566690690;
	Global_1357549->f_12[22]->f_6 = 0f;
	Global_1357549->f_12[23] = 2;
	Global_1357549->f_12[23]->f_1 = 2108368013;
	Global_1357549->f_12[23]->f_2 = { 653.0373f, -1246.106f, 44.595f };
	Global_1357549->f_12[23]->f_5 = 480074467;
	Global_1357549->f_12[23]->f_6 = 0f;
	Global_1357549->f_12[24] = 2;
	Global_1357549->f_12[24]->f_1 = 2108368013;
	Global_1357549->f_12[24]->f_2 = { 650.8378f, -1252.101f, 43.1323f };
	Global_1357549->f_12[24]->f_5 = 436323736;
	Global_1357549->f_12[24]->f_6 = 0f;
	Global_1357549->f_12[25] = 2;
	Global_1357549->f_12[25]->f_1 = 2108368013;
	Global_1357549->f_12[25]->f_2 = { 650.781f, -1252.204f, 43.132f };
	Global_1357549->f_12[25]->f_5 = 436323736;
	Global_1357549->f_12[25]->f_6 = 0f;
	Global_1357549->f_12[26] = 2;
	Global_1357549->f_12[26]->f_1 = 1049842342;
	Global_1357549->f_12[26]->f_2 = { 652.8052f, -1253.324f, 43.6418f };
	Global_1357549->f_12[26]->f_5 = -274058460;
	Global_1357549->f_12[26]->f_6 = 0f;
	Global_1357549->f_12[27] = 2;
	Global_1357549->f_12[27]->f_1 = 1034009086;
	Global_1357549->f_12[27]->f_2 = { 652.6848f, -1253.207f, 43.2953f };
	Global_1357549->f_12[27]->f_5 = 319326044;
	Global_1357549->f_12[27]->f_6 = 0f;
	Global_1357549->f_12[36] = 3;
	Global_1357549->f_12[36]->f_1 = 414622870;
	Global_1357549->f_12[36]->f_2 = { 1878.206f, -1864.335f, 43.5632f };
	Global_1357549->f_12[36]->f_5 = -274058460;
	Global_1357549->f_12[36]->f_6 = 0f;
	Global_1357549->f_12[37] = 3;
	Global_1357549->f_12[37]->f_1 = 414622870;
	Global_1357549->f_12[37]->f_2 = { 1872.988f, -1881.333f, 44.1306f };
	Global_1357549->f_12[37]->f_5 = -916457800;
	Global_1357549->f_12[37]->f_6 = 0f;
	Global_1357549->f_12[38] = 3;
	Global_1357549->f_12[38]->f_1 = 414622870;
	Global_1357549->f_12[38]->f_2 = { 1883.117f, -1885.653f, 43.7719f };
	Global_1357549->f_12[38]->f_5 = 480074467;
	Global_1357549->f_12[38]->f_6 = 0f;
	Global_1357549->f_12[39] = 3;
	Global_1357549->f_12[39]->f_1 = 1079213989;
	Global_1357549->f_12[39]->f_2 = { 1875.758f, -1881.731f, 42.8273f };
	Global_1357549->f_12[39]->f_5 = -916457800;
	Global_1357549->f_12[39]->f_6 = 0f;
	Global_1357549->f_12[28] = 2;
	Global_1357549->f_12[28]->f_1 = -160392273;
	Global_1357549->f_12[28]->f_2 = { 652.6238f, -1253.39f, 43.6368f };
	Global_1357549->f_12[28]->f_5 = 319326044;
	Global_1357549->f_12[28]->f_6 = 0f;
	Global_1357549->f_12[29] = 2;
	Global_1357549->f_12[29]->f_1 = 1049842342;
	Global_1357549->f_12[29]->f_2 = { 653.7182f, -1253.372f, 44.8718f };
	Global_1357549->f_12[29]->f_5 = 219115318;
	Global_1357549->f_12[29]->f_6 = 0f;
	Global_1357549->f_12[31] = 2;
	Global_1357549->f_12[31]->f_1 = 1034009086;
	Global_1357549->f_12[31]->f_2 = { 654.2183f, -1251.526f, 43.2551f };
	Global_1357549->f_12[31]->f_5 = -843424619;
	Global_1357549->f_12[31]->f_6 = 0f;
	Global_1357549->f_12[34] = 3;
	Global_1357549->f_12[34]->f_1 = 414622870;
	Global_1357549->f_12[34]->f_2 = { 1889.558f, -1879.846f, 42.6053f };
	Global_1357549->f_12[34]->f_5 = 1935100224;
	Global_1357549->f_12[34]->f_6 = 0f;
	Global_1357549->f_12[35] = 3;
	Global_1357549->f_12[35]->f_1 = 414622870;
	Global_1357549->f_12[35]->f_2 = { 1875.46f, -1860.001f, 42.5923f };
	Global_1357549->f_12[35]->f_5 = -274058460;
	Global_1357549->f_12[35]->f_6 = 0f;
	Global_1357549->f_12[32] = 3;
	Global_1357549->f_12[32]->f_1 = 414622870;
	Global_1357549->f_12[32]->f_2 = { 1868.881f, -1874.209f, 42.3693f };
	Global_1357549->f_12[32]->f_5 = 1935100224;
	Global_1357549->f_12[32]->f_6 = 0f;
	Global_1357549->f_12[33] = 3;
	Global_1357549->f_12[33]->f_1 = 964593693;
	Global_1357549->f_12[33]->f_2 = { 1869.735f, -1870.672f, 42.18f };
	Global_1357549->f_12[33]->f_5 = -843424619;
	Global_1357549->f_12[33]->f_6 = 0f;
	Global_1357549->f_12[30] = 2;
	Global_1357549->f_12[30]->f_1 = 1049842342;
	Global_1357549->f_12[30]->f_2 = { 654.0408f, -1251.324f, 43.2742f };
	Global_1357549->f_12[30]->f_5 = -1753113092;
	Global_1357549->f_12[30]->f_6 = 0f;
	Global_1357549->f_12[10] = 1;
	Global_1357549->f_12[10]->f_1 = -1611076340;
	Global_1357549->f_12[10]->f_2 = { -118.1006f, -34.2279f, 94.8062f };
	Global_1357549->f_12[10]->f_5 = 319326044;
	Global_1357549->f_12[10]->f_6 = 0f;
	Global_1357549->f_12[11] = 1;
	Global_1357549->f_12[11]->f_1 = 970924250;
	Global_1357549->f_12[11]->f_2 = { -108.722f, -41.1198f, 97.1374f };
	Global_1357549->f_12[11]->f_5 = -916457800;
	Global_1357549->f_12[11]->f_6 = 0f;
	Global_1357549->f_12[3] = 1;
	Global_1357549->f_12[3]->f_1 = -1920340119;
	Global_1357549->f_12[3]->f_2 = { -121.9807f, -22.507f, 95.3463f };
	Global_1357549->f_12[3]->f_5 = -843424619;
	Global_1357549->f_12[3]->f_6 = 0f;
}

void func_185()
{
	iVar0 = Global_1357549->f_573;
	if (iVar0 >= 0 && iVar0 < 40)
	{
		if (func_141() == &Global_1357549->f_12[iVar0])
		{
			if (Global_1357549->f_12[iVar0]->f_7 == 0)
			{
				if (_is_imap_active(Global_1357549->f_12[iVar0]->f_1) && func_541() == 0)
				{
					Global_1357549->f_12[iVar0]->f_7 = _0x6f3068258a499e52(Global_1357549->f_12[iVar0]->f_5, Global_1357549->f_12[iVar0]->f_2, 15);
				}
			}
			if (Global_1357549->f_12[iVar0]->f_7 != 0)
			{
				if (!Global_1357549->f_12[iVar0]->f_10)
				{
					Global_1357549->f_12[iVar0]->f_10 = _0x1ff441d7954f8709(Global_1357549->f_12[iVar0]->f_7);
					if (Global_1357549->f_12[iVar0]->f_10)
					{
						Global_1357549->f_12[iVar0]->f_8 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(Global_1357549->f_12[iVar0]->f_7));
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Global_1357549->f_573 == iVar0 || Global_1357549->f_12[iVar0]->f_9)
		{
			if (Global_1357549->f_12[iVar0]->f_10)
			{
				func_542(iVar0);
			}
		}
		iVar0++;
	}
	Global_1357549->f_573++;
	if (Global_1357549->f_573 >= 40)
	{
		Global_1357549->f_573 = 0;
	}
}

bool func_186(int iParam0)
{
	return (Global_1359489->f_16 && iParam0) != 0;
}

void func_187(int iParam0)
{
	Global_1359489->f_16 = (Global_1359489->f_16 || iParam0);
}

bool func_188()
{
	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar0] != -1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_189(int iParam0)
{
	Global_1359489->f_16 = (Global_1359489->f_16 - (Global_1359489->f_16 && iParam0));
}

bool func_190()
{
	if (!is_screen_faded_in())
	{
		return false;
	}
	if (!is_gameplay_cam_rendering())
	{
		return false;
	}
	if (is_ped_active_in_scenario(Global_35, 1))
	{
		return false;
	}
	if (func_134())
	{
		return false;
	}
	if (func_38(1048576))
	{
		return false;
	}
	return true;
}

void func_191()
{
	sVar0 = func_543(func_141());
	if (is_string_null_or_empty(sVar0))
	{
		return;
	}
	Var1 = { func_494(Local_18.f_3054, Local_18.f_3055, Global_1357549->f_1900) };
	func_545(sVar0, _create_var_string(10, "CAMP_INFO_SUPPLIES", func_544(&Var1, 109029619)), 4000, 0, 0, 0, 0, 1);
}

void func_192()
{
	sVar0 = func_543(func_141());
	if (is_string_null_or_empty(sVar0))
	{
		return;
	}
	iVar1 = func_149();
	sVar2 = _0x2b6846401d68e563((to_float(iVar1) * 0.01f), 2);
	func_545(sVar0, _create_var_string(10, "CAMP_INFO_FUNDS", func_544(sVar2, 109029619)), 4000, 0, 0, 0, 0, 1);
}

void func_193()
{
	func_50(4096);
	func_50(8192);
}

void func_194(int iParam0)
{
	if (*iParam0 == -15)
	{
		*iParam0 = func_546();
	}
	if (func_547())
	{
		iVar1 = get_random_int_in_range(18, 27);
	}
	else
	{
		iVar1 = get_random_int_in_range(7, 21);
	}
	func_548(iParam0, 0, 0, iVar1, 0, 0, 0, 0);
}

bool func_195(int iParam0)
{
	return iParam0 != -15;
}

bool func_196(int iParam0)
{
	return &Global_1899515 > iParam0;
}

void func_197(var uParam0, var uParam1)
{
	if (!func_549(uParam0, uParam1))
	{
		return;
	}
	iVar1 = 0;
	bVar2 = false;
	while (!bVar2 && iVar1 < 20)
	{
		iVar1++;
		iVar0 = get_random_int_in_range(0, 4);
		if (func_550(iVar0) && func_551((*uParam0)[iVar0], (*uParam1)[iVar0]))
		{
			bVar2 = true;
		}
	}
	if (iVar1 >= 20)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 50)
	{
		iVar1++;
		iVar3 = get_random_int_in_range(0, (*uParam0)[iVar0]->f_253);
		if (!is_bit_set(uParam1[iVar0], iVar3))
		{
			set_bit((*uParam1)[iVar0], iVar3);
			return;
		}
	}
	if (iVar1 >= 50)
	{
		return;
	}
}

bool func_198(int iParam0)
{
	return func_552(Global_35, iParam0);
}

bool func_199()
{
	if (func_56() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

bool func_200(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_56() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

bool func_201(int iParam0)
{
	func_553(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return is_bit_set(iVar2, iVar1);
}

void func_202(int iParam0, bool bParam1)
{
	func_553(iParam0, &iVar0, &iVar1);
	if (!func_554(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_555(iVar0, iVar1);
}

bool func_203()
{
	return func_12(1073741824);
}

bool func_204(int iParam0)
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

void func_205(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_204(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_556(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_557(iVar0);
	*uParam0 = 0;
}

bool func_206(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

char* func_207()
{
	return "INSPECT";
}

int func_208(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
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
		if (func_558(iVar0, 2))
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
		func_559(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, bParam12, bParam13);
		return iVar1;
	}
	return 0;
}

void func_209(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_204(iParam0))
	{
		return;
	}
	iVar0 = func_556(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_210(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_204(iParam0))
	{
		return;
	}
	iVar0 = func_556(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

bool func_211(int iParam0, bool bParam1)
{
	if (bParam1 && !func_204(iParam0))
	{
		return false;
	}
	iVar0 = func_556(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

bool func_212(int iParam0, bool bParam1)
{
	if (bParam1 && !func_204(iParam0))
	{
		return false;
	}
	iVar0 = func_556(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

int func_213(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_214(int iParam0)
{
	if (!func_204(Local_18.f_3057[iParam0]->f_1))
	{
		Local_18.f_3057[iParam0]->f_1 = func_560(func_207(), -1384133541, 1710877787, 0);
		func_210(Local_18.f_3057[iParam0]->f_1, 799218720, 0, 1);
	}
}

bool func_215(int iParam0)
{
	bVar0 = func_561(Local_18.f_3057[iParam0]->f_1, 1, 1);
	bVar1 = func_561(Local_18.f_3057[iParam0]->f_1, 0, 1);
	if (bVar0 || bVar1)
	{
		func_205(&(Local_18.f_3057[iParam0]->f_1), 1, 1);
		iVar2 = iParam0;
		iVar3 = 0;
		while (iVar3 < 15)
		{
			if (bVar0)
			{
				iVar2++;
				if (iVar2 >= 15)
				{
					iVar2 = 0;
				}
			}
			else
			{
				iVar2 = (iVar2 - 1);
				if (iVar2 < 0)
				{
					iVar2 = 14;
				}
			}
			if (Local_18.f_3057[iVar2]->f_19 == Local_18.f_3057[iParam0]->f_19)
			{
				func_562(iParam0, iVar2);
				return true;
			}
			iVar3++;
		}
	}
	return false;
}

void func_216(int iParam0)
{
	if (!func_204(Local_18.f_3057[iParam0]->f_2))
	{
		Local_18.f_3057[iParam0]->f_2 = func_564(func_563(), 359624985, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		func_210(Local_18.f_3057[iParam0]->f_2, 799218720, 0, 1);
	}
}

bool func_217(int iParam0, bool bParam1)
{
	if (bParam1 && !func_204(iParam0))
	{
		return false;
	}
	iVar0 = func_556(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_218(var uParam0)
{
	if (uParam0->f_3 != 0)
	{
		if (does_cam_exist(uParam0->f_5))
		{
			if (is_cam_rendering(uParam0->f_5))
			{
				render_script_cams(false, false, 3000, true, false, 0);
			}
			destroy_cam(uParam0->f_5, false);
		}
		if (func_204(uParam0->f_2))
		{
			func_205(&(uParam0->f_2), 1, 1);
		}
		if (func_204(uParam0->f_1))
		{
			func_205(&(uParam0->f_1), 1, 1);
		}
		if (func_204(*uParam0))
		{
			func_205(uParam0, 1, 1);
		}
		if (does_entity_exist(Global_35) && !is_entity_dead(Global_35))
		{
			task_clear_look_at(Global_35);
			set_player_control(player_id(), true, 0, false);
		}
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
		uParam0->f_3 = 0;
	}
}

bool func_219(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return _is_ped_getting_into_a_mount_seat(iParam0, true);
	}
	return false;
}

bool func_220(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if ((((iParam0 == func_358(0) || iParam0 == func_358(1)) || iParam0 == func_358(2)) || iParam0 == func_358(3)) || iParam0 == func_358(4))
	{
		return false;
	}
	if (func_565() < 1)
	{
		return false;
	}
	return true;
}

bool func_221(int iParam0)
{
	return func_552(iParam0, 2);
}

bool func_222(int iParam0)
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

void func_223()
{
	Global_40.f_4283.f_567 = { Var0 };
	func_566();
	Global_1357549->f_1897 = 0;
}

void func_224(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_1357549->f_1897 = iParam0;
	}
	Global_40.f_4283.f_567 = 1;
	Global_40.f_4283.f_567.f_1 = uParam1;
	Global_40.f_4283.f_567.f_2 = { get_entity_coords(iParam0, true, false) };
	Global_40.f_4283.f_567.f_5 = get_entity_heading(iParam0);
	Global_40.f_4283.f_567.f_6 = func_567(iParam0);
	func_568(iParam0);
}

int func_225(vector3 vParam0, int iParam3)
{
	if (func_206(vParam0))
	{
		return 0;
	}
	if (iParam3 == 7)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = create_itemset(true);
	_0xb8e213d02f37947d(&(Global_1357549->f_3[iParam3]), iVar2, -1805387726, 1, 1, 0, 0);
	iVar3 = get_itemset_size(iVar2);
	iVar4 = 0;
	fVar5 = 9999.99f;
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar0 = get_indexed_scenario_point_index_in_itemset(iVar4, iVar2);
		if (_is_scenario_point_active(iVar0))
		{
			vVar7 = { _get_scenario_point_coords(iVar0, true) };
			if (!func_206(vVar7))
			{
				fVar6 = get_distance_between_coords(vParam0, vVar7, true);
				if (fVar6 < fVar5)
				{
					fVar5 = fVar6;
					iVar1 = iVar0;
				}
			}
		}
		iVar4++;
	}
	destroy_itemset(iVar2);
	return iVar1;
}

float func_226(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_227(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_569(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_228()
{
	return &Global_1935436 == 2;
}

void func_229()
{
	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar0] != -1)
		{
			if (Global_1327590->f_19547[iVar0]->f_1 < 5)
			{
				func_570(iVar0);
			}
		}
		iVar0++;
	}
}

void func_230()
{
	if (!Global_1935436->f_18.f_1)
	{
		Global_1935436->f_18.f_1 = 1;
	}
}

int func_231(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 56;
		case 2:
			return 57;
		case 3:
			return 58;
		case 6:
			return 59;
		default:
			break;
	}
	return -1;
}

bool func_232(int iParam0, int iParam1)
{
	if (!func_571(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_3[iParam0]->f_7 && iParam1) != 0;
}

void func_233(int iParam0, int iParam1)
{
	func_572(&(Global_1914319->f_3[iParam0]->f_5), iParam1);
}

void func_234(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	if (iParam0 == 11)
	{
		return;
	}
	iVar0 = func_573(iParam3, iParam0);
	vVar1 = { func_574(iVar0) };
	vVar4 = { func_575(iVar0) };
	if (func_206(vVar1))
	{
		return;
	}
	if (!func_576(19, 16384))
	{
		if (!func_402(iParam1))
		{
			return;
		}
	}
	if (!_does_volume_exist(iParam2))
	{
		return;
	}
	_0x748c5f51a18cb8f0(0);
	set_this_script_can_remove_blips_created_by_any_script(true);
	func_248(iParam0);
	Global_1914319->f_3[iParam0]->f_22 = -1;
	Global_1914319->f_3[iParam0]->f_11 = { vVar1 };
	if (func_206(vVar4))
	{
		Global_1914319->f_3[iParam0]->f_11 = { vVar1 };
	}
	else
	{
		Global_1914319->f_15936[iVar0]->f_2 = { vVar4 };
	}
	Global_1914319->f_3[iParam0]->f_10 = iVar0;
	Global_1914319->f_3[iParam0]->f_25 = iParam2;
	Global_1914319->f_3[iParam0]->f_26 = iParam4;
	Global_1914319->f_3[iParam0]->f_28 = iParam5;
	Global_1914319->f_3[iParam0]->f_29 = iParam9;
	Global_1914319->f_3[iParam0]->f_9 = iParam3;
	Global_1914319->f_3[iParam0]->f_409 = iParam8;
	if (func_577(iVar0) || func_578(iVar0, iParam0))
	{
		switch (iVar0)
		{
			case 29:
				iVar7 = 770563571;
				break;
			case 61:
				iVar7 = 922959422;
				break;
			case 73:
				iVar7 = 646741747;
				break;
			case 43:
				iVar7 = -1159824322;
				break;
			case 41:
				iVar7 = 327042733;
				break;
		}
		Global_1914319->f_3[iParam0]->f_20 = func_579(5, Global_1914319->f_3[iParam0]->f_10, 2, iVar7);
	}
	*Global_1393529->f_114[iParam0] = { 0f, 0f, 0f };
	Global_1393529->f_220[iParam0] = 0f;
	Global_1393529->f_569[iParam0] = 0;
	StringCopy(Global_1393529->f_288[iParam0], "", 64);
	if (fParam7 <= 0f)
	{
		fParam7 = func_580(iParam0);
	}
	Global_1914319->f_3[iParam0]->f_19 = fParam7;
	Global_1914319->f_3[iParam0]->f_8 = iParam6;
	if (!func_581(iParam0, iParam1))
	{
	}
	switch (iParam0)
	{
		case 1:
		case 2:
			func_582(iParam3);
			break;
		case 10:
			func_583(iParam3);
			break;
		case 18:
			func_584();
			break;
		case 9:
			func_585();
			break;
		case 22:
			func_586();
			break;
	}
	func_587(Global_1914319->f_3[iParam0]->f_10);
	func_588(iParam0, 16);
	func_589(iParam0, 4);
	_0x748c5f51a18cb8f0(1);
}

bool func_235(int iParam0)
{
	return func_590(iParam0, 32);
}

void func_236(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (func_591(iParam0))
		{
			return;
		}
	}
	if (bParam2)
	{
		if (!func_592(iParam0, 4))
		{
			func_593(iParam0, 4);
		}
	}
	else
	{
		func_594(iParam0, 4);
	}
	func_595(iParam0);
}

void func_237(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_596((*uParam0)[iVar0]);
		func_597((*uParam0)[iVar0]);
		func_598((*uParam0)[iVar0]);
		set_bit(&((*uParam0)[iVar0]->f_254), 0);
		iVar0++;
	}
}

void func_238(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (!func_599(iParam0, iParam1))
	{
		if (uParam2->f_255 != 0)
		{
			func_596(uParam2);
			func_597(uParam2);
			func_598(uParam2);
		}
		return;
	}
	iVar0 = func_600(iParam1);
	if (*uParam2 != iParam1 || uParam2->f_1 != iVar0)
	{
		func_596(uParam2);
		func_597(uParam2);
		func_598(uParam2);
		*uParam2 = iParam1;
		uParam2->f_1 = iVar0;
		set_bit(&(uParam2->f_254), 0);
	}
	if (uParam2->f_256 != &Global_40.f_4283.f_415[iParam1])
	{
		set_bit(&(uParam2->f_254), 0);
		clear_bit(&(uParam2->f_254), 4);
		uParam2->f_256 = &Global_40.f_4283.f_415[iParam1];
	}
	if (is_bit_set(uParam2->f_254, 0))
	{
		if (!is_bit_set(uParam2->f_254, 1))
		{
			func_601(iParam1, uParam2);
		}
		else if (!is_bit_set(uParam2->f_254, 2))
		{
			if (func_602(uParam2))
			{
				func_603(iParam0, iParam1, iVar0, uParam2);
			}
		}
		else if (!is_bit_set(uParam2->f_254, 3))
		{
			func_604(uParam2, Global_40.f_4283.f_415[iParam1]);
		}
		else if (!is_bit_set(uParam2->f_254, 4))
		{
			func_605(uParam2, Global_40.f_4283.f_415[iParam1], iParam3);
		}
		else
		{
			func_597(uParam2);
			func_598(uParam2);
			clear_bit(&(uParam2->f_254), 0);
		}
		return;
	}
	iVar1 = 0;
	while (iVar1 < uParam2->f_253)
	{
		if (!is_bit_set(uParam2->f_255, iVar1) || is_bit_set(&(Global_40.f_4283.f_415[iParam1]), iVar1))
		{
		}
		else
		{
			if (!does_entity_exist(&(uParam2->f_9[iVar1])))
			{
				set_bit(Global_40.f_4283.f_415[iParam1], iVar1);
				clear_bit(&(uParam2->f_255), iVar1);
				func_243(5000);
			}
			if (has_object_been_broken(&(uParam2->f_9[iVar1])))
			{
				set_bit(Global_40.f_4283.f_415[iParam1], iVar1);
				clear_bit(&(uParam2->f_255), iVar1);
				func_243(5000);
			}
		}
		iVar1++;
	}
	uParam2->f_256 = &Global_40.f_4283.f_415[iParam1];
}

float func_239(var uParam0)
{
	if (*uParam0 == 4)
	{
		return 0f;
	}
	iVar2 = 0;
	while (iVar2 < uParam0->f_253)
	{
		if (uParam0->f_9[iVar2]->f_8 != 0 && !func_606(uParam0->f_9[iVar2]->f_8))
		{
			iVar1++;
		}
		else if (!is_bit_set(&(Global_40.f_4283.f_415[*uParam0]), iVar2))
		{
			iVar0++;
		}
		iVar2++;
	}
	fVar3 = (to_float(iVar0) / IntToFloat((uParam0->f_253 - iVar1)));
	return (fVar3 * 100f);
}

float func_240()
{
	iVar0 = func_607();
	return func_609((IntToFloat(iVar0) * func_608()), 100f);
}

float func_241(float fParam0, float fParam1)
{
	return ((fParam0 / 2f) + (fParam1 / 2f));
}

bool func_242()
{
	if (func_325(Global_35, 0))
	{
		if (_is_ped_using_scenario_hash(Global_35, 1855656219))
		{
			return true;
		}
	}
	return false;
}

void func_243(int iParam0)
{
	Global_1357549->f_1892 = (get_game_timer() + iParam0);
}

bool func_244(int iParam0, bool bParam1)
{
	if (bParam1 && !func_204(iParam0))
	{
		return false;
	}
	iVar0 = func_556(iParam0);
	return _uiprompt_is_active((*Global_1945938)[iVar0]->f_3);
}

bool func_245()
{
	if (is_hud_hidden())
	{
		return false;
	}
	if (is_cinematic_cam_rendering())
	{
		return false;
	}
	if (func_610())
	{
		return false;
	}
	if (func_227(180573150, 1))
	{
		return false;
	}
	if (func_227(-404697685, 1))
	{
		return false;
	}
	return true;
}

void func_246()
{
	_hide_hud_component(1670279562);
}

void func_247()
{
	_display_hud_component(1670279562);
}

void func_248(int iParam0)
{
	if (func_402(Global_1914319->f_3[iParam0]->f_21) && func_611(Global_1914319->f_3[iParam0]->f_21))
	{
		func_612(Global_1914319->f_3[iParam0]->f_21, 0, 1, 0, 0);
	}
	Global_1914319->f_3[iParam0]->f_11 = { 0f, 0f, 0f };
	Global_1914319->f_3[iParam0]->f_21 = -1;
	Global_1914319->f_3[iParam0]->f_22 = -1;
	Global_1914319->f_3[iParam0]->f_17 = 0;
	Global_1914319->f_3[iParam0]->f_1 = 0;
	if (_0x91a5f9cbebb9d936(Global_1914319->f_3[iParam0]->f_34))
	{
		remove_scenario_blocking_area(Global_1914319->f_3[iParam0]->f_34, false);
	}
	func_613(Global_1914319->f_3[iParam0]->f_10, 0);
	func_588(iParam0, 536870912);
	iVar1 = func_614(iParam0);
	if (iVar1 >= 15)
	{
		Global_1914319->f_3[iParam0]->f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_615(&(Global_1914319->f_3[iParam0]->f_317[iVar0]));
			Global_1914319->f_3[iParam0]->f_317[iVar0] = 0;
			Global_1914319->f_3[iParam0]->f_317[iVar0]->f_1 = { 0f, 0f, 0f };
			Global_1914319->f_3[iParam0]->f_317[iVar0]->f_4 = 0f;
			Global_1914319->f_3[iParam0]->f_317[iVar0]->f_5 = 0;
			iVar0++;
		}
		Global_1914319->f_3[iParam0]->f_408 = 0;
	}
	if (Global_1914319->f_3[iParam0]->f_440 != 0)
	{
		_0x2f901291ef177b02(Global_1914319->f_3[iParam0]->f_440, 0);
	}
	Global_1914319->f_3[iParam0]->f_23 = 0;
	func_616(iParam0);
	Global_1914319->f_3[iParam0]->f_10 = -1;
	Global_1914319->f_3[iParam0]->f_9 = -1;
	func_617(iParam0, 0);
}

bool func_249(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_250()
{
	return func_127(&Global_1935630, 4096);
}

bool func_251(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_252(int iParam0)
{
	if (!func_367(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_618(iParam0));
}

bool func_253(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return ((*Global_1888801)[iParam0]->f_21 && iParam1) != 0;
}

int func_254()
{
	return Global_1897952->f_41;
}

void func_255(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (!func_619())
	{
		return;
	}
	sVar1 = func_620(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (is_string_null_or_empty(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_621(iParam4))
	{
		if (func_367(iParam0))
		{
			iParam4 = func_622(func_370(iParam0));
		}
		else
		{
			iParam4 = func_622(iParam1);
		}
	}
	if (func_621(iParam4))
	{
		iVar3 = func_623(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_625(func_624(iParam2));
	}
	else if ((func_626(iParam1, 2) || func_627(iParam4, 2)) && !Global_1894899->f_9)
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
		Global_1894899->f_9 = 1;
	}
	else if ((func_367(iParam0) && func_628(iParam0, 16777216)) && !Global_1894899->f_9)
	{
		sVar2 = _create_var_string(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899->f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1894899->f_9)
	{
		sVar2 = _create_var_string(2, "REGION_BOUNTY", iVar3);
		Global_1894899->f_9 = 1;
	}
	else
	{
		iVar4 = func_629(func_546());
		iVar5 = func_630(func_546());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = _get_temperature_at_coords(Global_36);
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
				fVar7 = func_631(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(674, sVar8, iVar4, func_544(&cVar6, 109029619), sVar9, func_544(&cVar10, 109029619));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!_should_use_metric_temperature())
			{
				fVar7 = func_631(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(162, sVar8, iVar4, func_544(&cVar6, 109029619), func_544(&cVar10, 109029619));
		}
		Global_1894899->f_9 = 0;
	}
	Global_1934266->f_148 = func_545(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_256(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_257(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_56() == 0)
	{
		return;
	}
	if (func_632(128))
	{
		return;
	}
	if (!func_633(iParam0))
	{
		return;
	}
	if (func_628(iParam0, 32))
	{
		return;
	}
	func_409(iParam0, 32);
	func_634(Global_1935630, 8192);
	func_636(func_635(-1532769513, -36357794), 1);
	switch (func_370(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_636(func_635(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_636(func_635(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_636(func_635(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_636(func_635(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_636(func_635(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_636(func_635(-1532769513, -910218296), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			_0xd8c7162ab2e2af45(1822876181);
			break;
		case 1:
			_0xd8c7162ab2e2af45(1092217275);
			break;
		case 2:
			_0xd8c7162ab2e2af45(1855549007);
			_0xd8c7162ab2e2af45(1542246539);
			break;
		case 6:
			_0xd8c7162ab2e2af45(-237206861);
			break;
		case 7:
			_0xd8c7162ab2e2af45(276890716);
			break;
		case 9:
			_0xd8c7162ab2e2af45(-353968602);
			break;
		case 10:
			_0xd8c7162ab2e2af45(-1354901649);
			_0xd8c7162ab2e2af45(-1354901649);
			break;
		case 11:
			_0xd8c7162ab2e2af45(-496244122);
			break;
		case 12:
			_0xd8c7162ab2e2af45(-678676588);
			break;
		case 15:
			_0xd8c7162ab2e2af45(-732274047);
			break;
		case 16:
			_0xd8c7162ab2e2af45(-12216052);
			break;
		case 17:
			_0xd8c7162ab2e2af45(-1456731677);
			break;
		case 21:
			_0xd8c7162ab2e2af45(-2086563810);
			break;
		case 22:
			_0xd8c7162ab2e2af45(221661572);
			break;
		case 24:
			_0xd8c7162ab2e2af45(222265732);
			break;
		case 25:
			_0xd8c7162ab2e2af45(-1484929764);
			break;
		case 26:
			_0xd8c7162ab2e2af45(1104975149);
			break;
		case 27:
			_0xd8c7162ab2e2af45(235472255);
			break;
		case 28:
			_0xd8c7162ab2e2af45(-1337880478);
			break;
		case 29:
			_0xd8c7162ab2e2af45(-1813267128);
			break;
		case 30:
			_0xd8c7162ab2e2af45(-1941572412);
			break;
		case 31:
			_0xd8c7162ab2e2af45(1006072805);
			break;
		case 121:
			_0xd8c7162ab2e2af45(929640770);
			break;
		case 122:
			_0xd8c7162ab2e2af45(1603579970);
			break;
		case 124:
			_0xd8c7162ab2e2af45(-1332669948);
			break;
		case 123:
			_0xd8c7162ab2e2af45(-1807212021);
			break;
		case 34:
			_0xd8c7162ab2e2af45(-1347759053);
			break;
		case 36:
			_0xd8c7162ab2e2af45(-918096609);
			break;
		case 114:
			_0xd8c7162ab2e2af45(1728445882);
			break;
		case 37:
			_0xd8c7162ab2e2af45(-507075109);
			break;
		case 40:
			_0xd8c7162ab2e2af45(462373845);
			break;
		case 42:
			_0xd8c7162ab2e2af45(-1727895786);
			break;
		case 43:
			_0xd8c7162ab2e2af45(1826504111);
			break;
		case 44:
			_0xd8c7162ab2e2af45(1714554710);
			break;
		case 45:
			_0xd8c7162ab2e2af45(-91026072);
			break;
		case 54:
			_0xd8c7162ab2e2af45(893855320);
			break;
		case 55:
			_0xd8c7162ab2e2af45(326709244);
			break;
		case 49:
			_0xd8c7162ab2e2af45(653799702);
			break;
		case 62:
			_0xd8c7162ab2e2af45(415864829);
			break;
		case 64:
			_0xd8c7162ab2e2af45(-1836330842);
			break;
		case 65:
			_0xd8c7162ab2e2af45(648073069);
			break;
		case 66:
			_0xd8c7162ab2e2af45(770074951);
			break;
		case 68:
			_0xd8c7162ab2e2af45(-1276637644);
			break;
		case 71:
			_0xd8c7162ab2e2af45(-431488293);
			break;
		case 72:
			_0xd8c7162ab2e2af45(-1101810198);
			break;
		case 74:
			_0xd8c7162ab2e2af45(-1344767066);
			break;
		case 77:
			_0xd8c7162ab2e2af45(1472232821);
			break;
		case 79:
			_0xd8c7162ab2e2af45(-1368676121);
			break;
		case 63:
			_0xd8c7162ab2e2af45(-33677540);
			break;
		case 80:
			_0xd8c7162ab2e2af45(1602161184);
			_0xd8c7162ab2e2af45(-443207523);
			_0xd8c7162ab2e2af45(-683043834);
			break;
		case 82:
			_0xd8c7162ab2e2af45(147256338);
			_0xd8c7162ab2e2af45(-134804027);
			_0xd8c7162ab2e2af45(2027689141);
			break;
		case 83:
			_0xd8c7162ab2e2af45(-161135375);
			break;
		case 85:
			_0xd8c7162ab2e2af45(1625008147);
			break;
		case 86:
			_0xd8c7162ab2e2af45(121074776);
			break;
		case 87:
			_0xd8c7162ab2e2af45(1876184276);
			break;
		case 89:
			_0xd8c7162ab2e2af45(458479023);
			break;
		case 91:
			_0xd8c7162ab2e2af45(85299473);
			break;
		case 96:
			_0xd8c7162ab2e2af45(-1150244084);
			break;
		case 98:
			_0xd8c7162ab2e2af45(759314201);
			break;
		case 99:
			_0xd8c7162ab2e2af45(2063457042);
			break;
		case 100:
			_0xd8c7162ab2e2af45(1877776161);
			break;
		case 102:
			_0xd8c7162ab2e2af45(2143316225);
			break;
		case 104:
			_0xd8c7162ab2e2af45(-1623232489);
			_0xd8c7162ab2e2af45(-1393093729);
			break;
		case 106:
			_0xd8c7162ab2e2af45(1354284392);
			break;
		case 107:
			_0xd8c7162ab2e2af45(-1430883057);
			break;
		case 109:
			_0xd8c7162ab2e2af45(820139809);
			break;
		case 112:
			_0xd8c7162ab2e2af45(1561007383);
			_0xd8c7162ab2e2af45(-960425936);
			break;
	}
	if (bParam1)
	{
		func_409(iParam0, 64);
	}
}

bool func_258()
{
	return (Global_1894899 & 1 != 0 && func_128() != -1);
}

void func_259()
{
	if (!func_637(&Global_1327479))
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
	func_638(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_260(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_639() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_637(iVar1) && !func_640(iVar1, iParam2)) && (!bParam3 || !func_641(iVar1))) && (!bParam4 || !func_642(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_643(iVar0);
			}
		}
		iVar0++;
	}
}

void func_261(bool bParam0)
{
	bVar0 = Global_1894899 & 1 != false;
	if (bVar0 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_1894899 |= 1;
		_0xda26263c07cce9c2(1);
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 1);
		_0xda26263c07cce9c2(0);
	}
}

int func_262()
{
	return Global_40.f_4283.f_1;
}

void func_263(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 2;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 2);
	}
}

bool func_264(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_265(int iParam0)
{
	switch (func_56())
	{
		case -1:
			return (Global_1357549->f_1496 && iParam0) != 0;
	}
	return false;
}

void func_266(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_1357549->f_1496 = (Global_1357549->f_1496 || iParam0);
			break;
	}
}

void func_267(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_1357549->f_1496 = (Global_1357549->f_1496 - (Global_1357549->f_1496 && iParam0));
			break;
	}
}

bool func_268()
{
	return Global_1357549->f_1616;
}

void func_269(int* iParam0)
{
	iParam0->f_1424 = 0;
}

void func_270(int iParam0, bool bParam1)
{
	Global_1357549->f_1616 = iParam0;
	if (bParam1)
	{
	}
}

void func_271()
{
	if (func_141() != 2 && func_141() != 1)
	{
		return;
	}
}

void func_272(int* iParam0)
{
	if ((get_frame_count() % 30) != 0)
	{
		return;
	}
	bVar0 = false;
	if (((((Global_1357549->f_1672 == -774242862 || Global_1357549->f_1672 == -2100684454) || Global_1357549->f_1672 == -1167047117) || Global_1357549->f_1672 == 396444962) || Global_1357549->f_1672 == -498064062) || Global_1357549->f_1672 == 513694516)
	{
		if (func_227(-666548248, 1) == 0)
		{
			bVar0 = true;
			func_375(-666548248, 1017034651, 1120952528, -1, 1, 1, 0);
		}
	}
	else
	{
		func_644(-666548248, 1, 0);
	}
	if (bVar0)
	{
		if (func_204(iParam0->f_1))
		{
			func_645(iParam0->f_1, "MONEY_LOANSHARK_ALL_DEBTS", 1);
		}
	}
	if (Global_1357549->f_1672 == 0)
	{
		if (func_646(-774242862, 0, 0) >= 1)
		{
			func_647(-774242862, -62869733);
			return;
		}
		if (func_646(-2100684454, 0, 0) >= 1)
		{
			func_647(-2100684454, -62869733);
			return;
		}
		if (func_646(-1167047117, 0, 0) >= 1)
		{
			func_647(-1167047117, -62869733);
			return;
		}
		if (func_646(396444962, 0, 0) >= 1)
		{
			func_647(396444962, -62869733);
			return;
		}
		if (func_646(-498064062, 0, 0) >= 1)
		{
			func_647(-498064062, -62869733);
			return;
		}
		if (func_646(513694516, 0, 0) >= 1)
		{
			func_647(513694516, -62869733);
			return;
		}
	}
}

void func_273(int* iParam0, var uParam1)
{
	vVar0 = { func_648(func_276()) };
	fVar3 = 5f;
	if (func_206(vVar0))
	{
		return;
	}
	if ((func_649(26) == 0 || func_159()) && !func_12(8))
	{
		func_650(iParam0);
		return;
	}
	if (func_227(-1461741225, 1))
	{
		func_650(iParam0);
		return;
	}
	if (func_32() != 1)
	{
		return;
	}
	if (!does_blip_exist(*iParam0) && !func_242())
	{
		if (!func_12(8))
		{
			*iParam0 = _blip_add_for_coord(168093330, vVar0);
			_blip_set_modifier(*iParam0, 1046501997);
			set_blip_sprite(*iParam0, -1954662204, true);
			set_blip_flash_timer(*iParam0, 66, -1);
			func_651(*iParam0, func_262());
		}
	}
	func_652(iParam0, uParam1);
	if (!_does_scenario_point_exist(iParam0->f_863))
	{
		if ((get_clock_seconds() % 15) == 0)
		{
			iParam0->f_863 = _find_closest_active_scenario_point_of_type(vVar0, 1855656219, fVar3, 1, false);
		}
		return;
	}
	if (!does_entity_exist(iParam0->f_866))
	{
		request_model(-62869733, false);
		if (has_model_loaded(-62869733))
		{
			iParam0->f_866 = _get_entity_scenario_point_is_attached_to(iParam0->f_863);
			func_653(iParam0);
			if (does_entity_exist(iParam0->f_866))
			{
				freeze_entity_position(iParam0->f_866, true);
			}
		}
		return;
	}
	if (_0x9c54041bb66bcf9e(Global_35, iParam0->f_863) || func_12(67108864))
	{
		return;
	}
	if (iParam0->f_856 == 0)
	{
		if (func_12(8192) == 0)
		{
			if (!func_204(iParam0->f_1))
			{
				if (Global_1357549->f_1672 == 0)
				{
					iParam0->f_1 = func_656("GIVE_TITHE", -719620017, func_654(func_276()), func_655(), 3, 1, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
					func_210(iParam0->f_1, 736625733, 0, 1);
				}
				else if (func_657())
				{
					iParam0->f_1 = func_656("ITEM_TITHE", -719620017, func_654(func_276()), func_655(), 3, 1, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
					func_645(iParam0->f_1, "MONEY_LOANSHARK_ALL_DEBTS", 1);
					func_210(iParam0->f_1, 736625733, 0, 1);
				}
				else
				{
					iParam0->f_1 = func_656("ITEM_TITHE", -719620017, func_654(func_276()), func_655(), 3, 1, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
					func_659(iParam0->f_1, "ITEM_TITHE", func_658(Global_1357549->f_1672), 1);
					func_210(iParam0->f_1, 736625733, 0, 1);
				}
			}
		}
	}
	if (func_226(Global_35, func_654(func_276()), 1) <= (func_655() + 0.25f))
	{
		disable_control_action(0, 1287709438, false);
		_uiprompt_set_ambient_group_this_frame(Global_35, 1f, 1, 1, 736625733, func_660(), 0);
	}
	if ((get_frame_count() % 30) == 0)
	{
		bVar4 = false;
		if ((((func_661() || func_662()) || _is_ped_carrying(Global_35)) || func_466(Global_35)) || func_663())
		{
			bVar4 = true;
		}
		if (func_204(iParam0->f_1))
		{
			func_296(iParam0->f_1, bVar4);
		}
		if (func_204(iParam0->f_6))
		{
			func_296(iParam0->f_6, bVar4);
		}
	}
	if (iParam0->f_856)
	{
		if (func_204(iParam0->f_855) == 0)
		{
			iParam0->f_855 = func_664("BACK_TITHE", 814057702, Global_35, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		}
		else if (func_217(iParam0->f_855, 1))
		{
			play_sound_frontend("Back", "HUD_Camp_Status_Sounds", true, 0);
			func_205(&(iParam0->f_855), 1, 1);
			func_205(&(iParam0->f_883), 1, 1);
			func_205(&(iParam0->f_884), 1, 1);
			set_player_control(player_id(), true, 0, false);
			iParam0->f_856 = 0;
		}
	}
	if (func_665(iParam0->f_1, 1) || iParam0->f_2 == 1)
	{
		iParam0->f_2 = 1;
		set_player_control(player_id(), false, 256, false);
		if (func_204(iParam0->f_1))
		{
			func_666(iParam0->f_1, 0, 1);
		}
		if (func_204(iParam0->f_6))
		{
			func_666(iParam0->f_6, 0, 1);
		}
		if (func_168(&(iParam0->f_870)) == 0)
		{
			func_175(&(iParam0->f_870), 0);
		}
		if (((func_667(Global_35, 1, 0, 0) == -1569615261 && func_667(Global_35, 0, 1, 0) == -1569615261) && func_668() == 0) && _is_ped_carrying(Global_35) == 0)
		{
			if (_0x9c54041bb66bcf9e(Global_35, iParam0->f_863) == 0)
			{
				if (func_169(&(iParam0->f_870)) > 0f)
				{
					func_140(8192);
					clear_ped_secondary_task(Global_35);
					play_sound_frontend("Give_To_Gang", "HUD_Donate_Sounds", true, 0);
					func_669(iParam0);
					iParam0->f_2 = 0;
					func_75(128);
					func_650(iParam0);
				}
			}
		}
		else
		{
			_hide_ped_weapons(Global_35, 2, true);
			func_540(&(iParam0->f_870), -0.75f);
		}
	}
}

void func_274(int* iParam0)
{
	iVar0 = -1;
	if (func_206(func_670(func_276())) == 0)
	{
		if (func_226(Global_35, func_670(func_276()), 1) < 20f && !func_142())
		{
			if (iParam0->f_4 == 1)
			{
				iParam0->f_4 = 0;
				if (func_200(256) == 0)
				{
					func_202(256, 0);
				}
				else if (func_200(257) == 0)
				{
					func_202(257, 0);
				}
			}
		}
	}
	switch (func_141())
	{
		case 1:
			iVar0 = 56;
			break;
		case 2:
			iVar0 = 57;
			break;
		case 6:
			iVar0 = 59;
			break;
		case 3:
			iVar0 = 58;
			break;
	}
	if (iVar0 != -1)
	{
		if (func_12(33554432))
		{
			if (!func_227(-692943180, 1))
			{
				func_375(-692943180, 195285667, 1120952528, 2, 1, 1, 0);
			}
		}
		else if (func_227(-692943180, 1))
		{
			func_644(-692943180, 1, 0);
		}
		if (func_671(iParam0))
		{
			if (func_590(iVar0, 16384))
			{
				func_672(iVar0, 16384);
			}
		}
		else if (func_590(iVar0, 16384) == 0)
		{
			func_673(iVar0, 16384);
		}
	}
}

void func_275(int* iParam0, var uParam1)
{
	if (func_32() == 1)
	{
		func_674(&(iParam0->f_14), (*uParam1)[2]->f_255);
		func_674(&(iParam0->f_15), (*uParam1)[0]->f_255);
		func_674(&(iParam0->f_13), (*uParam1)[1]->f_255);
	}
	else
	{
		func_675(iParam0);
	}
}

int func_276()
{
	switch (func_56())
	{
		case -1:
			return Global_40.f_4283;
	}
	return -1;
}

bool func_277(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return true;
		default:
			break;
	}
	return false;
}

void func_278(int* iParam0)
{
	if (Global_1357549->f_1671 == -1)
	{
		return;
	}
	switch (Global_1357549->f_1671)
	{
		case 0:
			StringCopy(&cVar0, "DONATE_M_SMALL", 24);
			break;
		case 1:
			StringCopy(&cVar0, "DONATE_M_MID", 24);
			break;
		case 2:
			StringCopy(&cVar0, "DONATE_M_BIG", 24);
			break;
		case 3:
			StringCopy(&cVar0, "DONATE_FOOD", 24);
			break;
		case 4:
			StringCopy(&cVar0, "DONATE_SUPP", 24);
			break;
		case 5:
			StringCopy(&cVar0, "DONATE_REMIND", 24);
			break;
		case 6:
			StringCopy(&cVar0, "DONATE_LOW", 24);
			break;
		case 7:
			StringCopy(&cVar0, "ASK_ABIGAIL", 24);
			func_676(&(iParam0->f_1325), func_172(13), "ABIGAIL", 0);
			break;
		case 8:
			StringCopy(&cVar0, "GIVE_ABIGAIL", 24);
			func_676(&(iParam0->f_1325), func_172(13), "ABIGAIL", 0);
			break;
		case 10:
			StringCopy(&cVar0, "ASK_JACK1", 24);
			func_676(&(iParam0->f_1325), func_172(14), "JACK", 0);
			break;
		case 11:
			StringCopy(&cVar0, "GIVE_JACK1", 24);
			func_676(&(iParam0->f_1325), func_172(14), "JACK", 0);
			break;
		case 13:
			StringCopy(&cVar0, "ASK_JACK2", 24);
			func_676(&(iParam0->f_1325), func_172(14), "JACK", 0);
			break;
		case 14:
			StringCopy(&cVar0, "GIVE_JACK2", 24);
			func_676(&(iParam0->f_1325), func_172(14), "JACK", 0);
			break;
		case 16:
			StringCopy(&cVar0, "ASK_CHARLES1", 24);
			func_676(&(iParam0->f_1325), func_172(7), "CHARLES_SMITH", 0);
			break;
		case 17:
			StringCopy(&cVar0, "GIVE_CHARLES1", 24);
			func_676(&(iParam0->f_1325), func_172(7), "CHARLES_SMITH", 0);
			break;
		case 18:
			StringCopy(&cVar0, "THANK_CHARLES1", 24);
			func_676(&(iParam0->f_1325), func_172(7), "CHARLES_SMITH", 0);
			break;
		case 19:
			StringCopy(&cVar0, "ASK_CHARLES2", 24);
			func_676(&(iParam0->f_1325), func_172(7), "CHARLES_SMITH", 0);
			break;
		case 20:
			StringCopy(&cVar0, "GIVE_CHARLES2", 24);
			func_676(&(iParam0->f_1325), func_172(7), "CHARLES_SMITH", 0);
			break;
		case 21:
			StringCopy(&cVar0, "THANK_CHARLES2", 24);
			func_676(&(iParam0->f_1325), func_172(7), "CHARLES_SMITH", 0);
			break;
		case 22:
			StringCopy(&cVar0, "ASK_CHARLES3", 24);
			func_676(&(iParam0->f_1325), func_172(7), "CHARLES_SMITH", 0);
			break;
		case 23:
			StringCopy(&cVar0, "GIVE_CHARLES3", 24);
			func_676(&(iParam0->f_1325), func_172(7), "CHARLES_SMITH", 0);
			break;
		case 24:
			StringCopy(&cVar0, "THANK_CHARLES3", 24);
			func_676(&(iParam0->f_1325), func_172(7), "CHARLES_SMITH", 0);
			break;
		case 25:
			StringCopy(&cVar0, "ASK_CHARLES4", 24);
			func_676(&(iParam0->f_1325), func_172(7), "CHARLES_SMITH", 0);
			break;
		case 26:
			StringCopy(&cVar0, "GIVE_CHARLES4", 24);
			func_676(&(iParam0->f_1325), func_172(7), "CHARLES_SMITH", 0);
			break;
		case 27:
			StringCopy(&cVar0, "THANK_CHARLES4", 24);
			func_676(&(iParam0->f_1325), func_172(7), "CHARLES_SMITH", 0);
			break;
		case 28:
			StringCopy(&cVar0, "ASK_SUSAN1", 24);
			func_676(&(iParam0->f_1325), func_172(19), "SUSAN", 0);
			break;
		case 29:
			StringCopy(&cVar0, "GIVE_SUSAN1", 24);
			func_676(&(iParam0->f_1325), func_172(19), "SUSAN", 0);
			break;
		case 30:
			StringCopy(&cVar0, "THANK_SUSAN1", 24);
			func_676(&(iParam0->f_1325), func_172(19), "SUSAN", 0);
			break;
		case 31:
			StringCopy(&cVar0, "ASK_SUSAN2", 24);
			func_676(&(iParam0->f_1325), func_172(19), "SUSAN", 0);
			break;
		case 32:
			StringCopy(&cVar0, "GIVE_SUSAN2", 24);
			func_676(&(iParam0->f_1325), func_172(19), "SUSAN", 0);
			break;
		case 33:
			StringCopy(&cVar0, "THANK_SUSAN2", 24);
			func_676(&(iParam0->f_1325), func_172(19), "SUSAN", 0);
			break;
		case 34:
			StringCopy(&cVar0, "ASK_SWANSON", 24);
			func_676(&(iParam0->f_1325), func_172(21), "SWANSON", 0);
			break;
		case 35:
			StringCopy(&cVar0, "GIVE_SWANSON", 24);
			func_676(&(iParam0->f_1325), func_172(21), "SWANSON", 0);
			break;
		case 36:
			StringCopy(&cVar0, "THANK_SWANSON", 24);
			func_676(&(iParam0->f_1325), func_172(21), "SWANSON", 0);
			break;
		case 37:
			StringCopy(&cVar0, "ASK_PEARSON1", 24);
			func_676(&(iParam0->f_1325), func_172(17), "PEARSON", 0);
			break;
		case 38:
			StringCopy(&cVar0, "GIVE_PEARSON1", 24);
			func_676(&(iParam0->f_1325), func_172(17), "PEARSON", 0);
			break;
		case 39:
			StringCopy(&cVar0, "THANK_PEARSON1", 24);
			func_676(&(iParam0->f_1325), func_172(17), "PEARSON", 0);
			break;
		case 40:
			StringCopy(&cVar0, "ASK_PEARSON2", 24);
			func_676(&(iParam0->f_1325), func_172(17), "PEARSON", 0);
			break;
		case 41:
			StringCopy(&cVar0, "GIVE_PEARSON2", 24);
			func_676(&(iParam0->f_1325), func_172(17), "PEARSON", 0);
			break;
		case 42:
			StringCopy(&cVar0, "THANK_PEARSON2", 24);
			func_676(&(iParam0->f_1325), func_172(17), "PEARSON", 0);
			break;
		case 43:
			StringCopy(&cVar0, "ASK_JAVIER", 24);
			func_676(&(iParam0->f_1325), func_172(2), "JAVIER", 0);
			break;
		case 44:
			StringCopy(&cVar0, "GIVE_JAVIER", 24);
			func_676(&(iParam0->f_1325), func_172(2), "JAVIER", 0);
			break;
		case 45:
			StringCopy(&cVar0, "THANK_JAVIER", 24);
			func_676(&(iParam0->f_1325), func_172(2), "JAVIER", 0);
			break;
		case 46:
			StringCopy(&cVar0, "ASK_BILL", 24);
			func_676(&(iParam0->f_1325), func_172(3), "BILL", 0);
			break;
		case 47:
			StringCopy(&cVar0, "GIVE_BILL", 24);
			func_676(&(iParam0->f_1325), func_172(3), "BILL", 0);
			break;
		case 48:
			StringCopy(&cVar0, "THANK_BILL", 24);
			func_676(&(iParam0->f_1325), func_172(3), "BILL", 0);
			break;
		case 49:
			StringCopy(&cVar0, "ASK_SEAN", 24);
			func_676(&(iParam0->f_1325), func_172(8), "SEAN", 0);
			break;
		case 50:
			StringCopy(&cVar0, "GIVE_SEAN", 24);
			func_676(&(iParam0->f_1325), func_172(8), "SEAN", 0);
			break;
		case 51:
			StringCopy(&cVar0, "THANK_SEAN", 24);
			func_676(&(iParam0->f_1325), func_172(8), "SEAN", 0);
			break;
		case 82:
			StringCopy(&cVar0, "ASK_KIERAN", 24);
			func_676(&(iParam0->f_1325), func_172(10), "KIERAN", 0);
			break;
		case 83:
			StringCopy(&cVar0, "GIVE_KIERAN", 24);
			func_676(&(iParam0->f_1325), func_172(10), "KIERAN", 0);
			break;
		case 84:
			StringCopy(&cVar0, "THANK_KIERAN", 24);
			func_676(&(iParam0->f_1325), func_172(10), "KIERAN", 0);
			Jump @3405; //curOff = 2056
			StringCopy(&cVar0, "ASK_TILLY", 24);
			func_676(&(iParam0->f_1325), func_172(22), "TILLY", 0);
			Jump @3405; //curOff = 2087
			StringCopy(&cVar0, "GIVE_TILLY", 24);
			func_676(&(iParam0->f_1325), func_172(22), "TILLY", 0);
			Jump @3405; //curOff = 2118
			StringCopy(&cVar0, "THANK_TILLY", 24);
			func_676(&(iParam0->f_1325), func_172(22), "TILLY", 0);
			Jump @3405; //curOff = 2149
			StringCopy(&cVar0, "ASK_LENNY1", 24);
			func_676(&(iParam0->f_1325), func_172(9), "LENNY", 0);
			Jump @3405; //curOff = 2180
			StringCopy(&cVar0, "GIVE_LENNY1", 24);
			func_676(&(iParam0->f_1325), func_172(9), "LENNY", 0);
			Jump @3405; //curOff = 2211
			StringCopy(&cVar0, "THANK_LENNY1", 24);
			func_676(&(iParam0->f_1325), func_172(9), "LENNY", 0);
			Jump @3405; //curOff = 2242
			StringCopy(&cVar0, "ASK_LENNY2", 24);
			func_676(&(iParam0->f_1325), func_172(9), "LENNY", 0);
			Jump @3405; //curOff = 2273
			StringCopy(&cVar0, "GIVE_LENNY2", 24);
			func_676(&(iParam0->f_1325), func_172(9), "LENNY", 0);
			Jump @3405; //curOff = 2304
			StringCopy(&cVar0, "THANK_LENNY2", 24);
			func_676(&(iParam0->f_1325), func_172(9), "LENNY", 0);
			Jump @3405; //curOff = 2335
			StringCopy(&cVar0, "ASK_MARY1", 24);
			func_676(&(iParam0->f_1325), func_172(15), "MARYBETH", 0);
			Jump @3405; //curOff = 2366
			StringCopy(&cVar0, "GIVE_MARY1", 24);
			func_676(&(iParam0->f_1325), func_172(15), "MARYBETH", 0);
			Jump @3405; //curOff = 2397
			StringCopy(&cVar0, "THANK_MARY1", 24);
			func_676(&(iParam0->f_1325), func_172(15), "MARYBETH", 0);
			Jump @3405; //curOff = 2428
			StringCopy(&cVar0, "ASK_MARY2", 24);
			func_676(&(iParam0->f_1325), func_172(15), "MARYBETH", 0);
			Jump @3405; //curOff = 2459
			StringCopy(&cVar0, "GIVE_MARY2", 24);
			func_676(&(iParam0->f_1325), func_172(15), "MARYBETH", 0);
			Jump @3405; //curOff = 2490
			StringCopy(&cVar0, "THANK_MARY2", 24);
			func_676(&(iParam0->f_1325), func_172(15), "MARYBETH", 0);
			Jump @3405; //curOff = 2521
			StringCopy(&cVar0, "ASK_UNCLE", 24);
			func_676(&(iParam0->f_1325), func_172(4), "UNCLE", 0);
			Jump @3405; //curOff = 2551
			StringCopy(&cVar0, "GIVE_UNCLE", 24);
			func_676(&(iParam0->f_1325), func_172(4), "UNCLE", 0);
			Jump @3405; //curOff = 2581
			StringCopy(&cVar0, "THANK_UNCLE", 24);
			func_676(&(iParam0->f_1325), func_172(4), "UNCLE", 0);
			Jump @3405; //curOff = 2611
			StringCopy(&cVar0, "ASK_TRELW", 24);
			func_676(&(iParam0->f_1325), func_172(23), "TRELAWNY", 0);
			Jump @3405; //curOff = 2642
			StringCopy(&cVar0, "GIVE_TRELW", 24);
			func_676(&(iParam0->f_1325), func_172(23), "TRELAWNY", 0);
			Jump @3405; //curOff = 2673
			StringCopy(&cVar0, "THANK_TRELW", 24);
			func_676(&(iParam0->f_1325), func_172(23), "TRELAWNY", 0);
			Jump @3405; //curOff = 2704
			StringCopy(&cVar0, "ASK_HOSEA1", 24);
			func_676(&(iParam0->f_1325), func_172(5), "HOSEA", 0);
			Jump @3405; //curOff = 2734
			StringCopy(&cVar0, "GIVE_HOSEA1", 24);
			func_676(&(iParam0->f_1325), func_172(5), "HOSEA", 0);
			Jump @3405; //curOff = 2764
			StringCopy(&cVar0, "THANK_HOSEA1", 24);
			func_676(&(iParam0->f_1325), func_172(5), "HOSEA", 0);
			Jump @3405; //curOff = 2794
			StringCopy(&cVar0, "ASK_HOSEA2", 24);
			func_676(&(iParam0->f_1325), func_172(5), "HOSEA", 0);
			Jump @3405; //curOff = 2824
			StringCopy(&cVar0, "GIVE_HOSEA2", 24);
			func_676(&(iParam0->f_1325), func_172(5), "HOSEA", 0);
			Jump @3405; //curOff = 2854
			StringCopy(&cVar0, "THANK_HOSEA2", 24);
			func_676(&(iParam0->f_1325), func_172(5), "HOSEA", 0);
			Jump @3405; //curOff = 2884
			StringCopy(&cVar0, "ASK_KAREN", 24);
			func_676(&(iParam0->f_1325), func_172(20), "KAREN", 0);
			Jump @3405; //curOff = 2915
			StringCopy(&cVar0, "GIVE_KAREN", 24);
			func_676(&(iParam0->f_1325), func_172(20), "KAREN", 0);
			Jump @3405; //curOff = 2946
			StringCopy(&cVar0, "THANK_KAREN", 24);
			func_676(&(iParam0->f_1325), func_172(20), "KAREN", 0);
			Jump @3405; //curOff = 2977
			StringCopy(&cVar0, "ASK_DUTCH", 24);
			func_676(&(iParam0->f_1325), func_172(0), "DUTCH", 0);
			Jump @3405; //curOff = 3007
			StringCopy(&cVar0, "GIVE_DUTCH", 24);
			func_676(&(iParam0->f_1325), func_172(0), "DUTCH", 0);
			Jump @3405; //curOff = 3037
			StringCopy(&cVar0, "THANK_DUTCH", 24);
			func_676(&(iParam0->f_1325), func_172(0), "DUTCH", 0);
			Jump @3405; //curOff = 3067
			StringCopy(&cVar0, "ASK_MICAH", 24);
			func_676(&(iParam0->f_1325), func_172(6), "MICAH_BELL", 0);
			Jump @3405; //curOff = 3097
			StringCopy(&cVar0, "GIVE_MICAH", 24);
			func_676(&(iParam0->f_1325), func_172(6), "MICAH_BELL", 0);
			Jump @3405; //curOff = 3127
			StringCopy(&cVar0, "THANK_MICAH", 24);
			func_676(&(iParam0->f_1325), func_172(6), "MICAH_BELL", 0);
			Jump @3405; //curOff = 3157
			StringCopy(&cVar0, "ASK_SADIE", 24);
			func_676(&(iParam0->f_1325), func_172(11), "SADIE_ADLER", 0);
			Jump @3405; //curOff = 3188
			StringCopy(&cVar0, "GIVE_SADIE", 24);
			func_676(&(iParam0->f_1325), func_172(11), "SADIE_ADLER", 0);
			Jump @3405; //curOff = 3219
			StringCopy(&cVar0, "THANK_SADIE", 24);
			func_676(&(iParam0->f_1325), func_172(11), "SADIE_ADLER", 0);
			Jump @3405; //curOff = 3250
			StringCopy(&cVar0, "ASK_MOLLY", 24);
			func_676(&(iParam0->f_1325), func_172(16), "MOLLY", 0);
			Jump @3405; //curOff = 3281
			StringCopy(&cVar0, "GIVE_MOLLY", 24);
			func_676(&(iParam0->f_1325), func_172(16), "MOLLY", 0);
			Jump @3405; //curOff = 3312
			StringCopy(&cVar0, "THANK_MOLLY", 24);
			func_676(&(iParam0->f_1325), func_172(16), "MOLLY", 0);
			Jump @3405; //curOff = 3343
			StringCopy(&cVar0, "CPGEN_DTBOX1", 24);
			func_676(&(iParam0->f_1325), func_172(0), "DUTCH", 0);
			func_677(&(iParam0->f_1325), cVar0, 0, -1, 0, 0);
			Global_1357549->f_1671 = -1;
			return;
			Global_1357549->f_1671 = -1;
			if (!is_string_null_or_empty(&cVar0))
			{
				func_677(&(iParam0->f_1325), cVar0, 0, -1, 0, 0);
			}
		}

void func_279(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0x74c2b3dc0b294102(iParam0);
	_0xa1cfb35069d23c23(iParam0);
}

void func_280(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_281(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, vector3 vParam9, int iParam12, int iParam13)
{
	if (iParam2 < 0 || iParam2 > 4)
	{
		return;
	}
	iVar0 = func_678(iParam2, 1);
	iVar1 = func_678(iParam2, 0);
	bVar4 = (iParam2 == 0 || iParam2 == 2);
	if (iVar0 != 7)
	{
		if (iVar0 != -1)
		{
			func_679(&iVar2, vParam3, vParam6, vParam9, iVar0, iParam12, iParam13, bVar4);
			_0x6e0d3c3f828da773(*uParam0, iVar2);
		}
	}
	if (iVar1 != 7)
	{
		if (iVar1 != -1)
		{
			func_679(&iVar3, vParam3, vParam6, vParam9, iVar1, iParam12, iParam13, bVar4);
			_0x6e0d3c3f828da773(*uParam0, iVar3);
		}
	}
	if (*iParam1 != 0 && _does_volume_exist(*iParam1))
	{
		fVar5 = func_680(iParam2);
		fVar6 = func_681((vParam9.x - fVar5), 0.1f);
		fVar7 = func_681((vParam9.y - fVar5), 0.1f);
		vVar8 = { fVar6, fVar7, vParam9.z };
		iVar11 = _create_volume_by_hash(iParam12, vParam3, vParam6, vVar8);
		_0x6e0d3c3f828da773(*iParam1, iVar11);
	}
}

void func_282(var uParam0)
{
	if (func_204(uParam0->f_8))
	{
		func_205(&(uParam0->f_8), 1, 1);
	}
	clear_bit(&(uParam0->f_1), 3);
}

void func_283(var uParam0)
{
	if (func_204(uParam0->f_10))
	{
		func_205(&(uParam0->f_10), 1, 1);
	}
	if (func_204(uParam0->f_11))
	{
		func_205(&(uParam0->f_11), 1, 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_204(&(uParam0->f_12[iVar0])))
		{
			func_205(uParam0->f_12[iVar0], 1, 1);
		}
		iVar0++;
	}
	if (func_204(uParam0->f_9))
	{
		func_205(&(uParam0->f_9), 1, 1);
	}
	clear_bit(&(uParam0->f_1), 5);
}

void func_284(bool bParam0, var uParam1)
{
	set_player_control(player_id(), bParam0, 0, false);
	if (bParam0)
	{
		set_bit(&(uParam1->f_1), 2);
	}
	else
	{
		clear_bit(&(uParam1->f_1), 2);
	}
}

void func_285(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_12[iVar0] = 0;
		iVar0++;
	}
}

void func_286(int iParam0, bool bParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, 2228479, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, 2228479, 16384, 0, -1, -1, 0);
	if (bParam1)
	{
		_0x2161278c6322f740(2228479, 16384, 0, -1, -1, iParam0);
	}
}

void func_287(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_682(&iParam1, 8192);
	}
	if (bParam3)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_288(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_289(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 1048576;
	if (bParam1)
	{
		iVar0 |= 131072;
	}
	if (bParam2)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_290(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	*iParam0 = (*iParam0 || shift_left(1, iVar0));
}

void func_291(int iParam0, vector3 vParam1, var uParam4, int iParam5)
{
	if (!func_476(iParam0))
	{
		return;
	}
	if (func_206(vParam1))
	{
		return;
	}
	Global_1395601->f_5[iParam0]->f_15 = { vParam1 };
	Global_1395601->f_5[iParam0]->f_18 = uParam4;
	Global_1395601->f_5[iParam0]->f_23 = iParam5;
	if (_does_volume_exist(iParam5))
	{
	}
	if (!func_126(242, 1, 1))
	{
		func_683(iParam0, 1);
	}
	func_684(iParam0);
	func_685(iParam0, 1);
	Global_40.f_9384[iParam0]->f_1 = func_546();
}

bool func_292(int iParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return false;
	}
	if (is_entity_dead(Global_35))
	{
		return false;
	}
	if (!is_screen_faded_in())
	{
		return false;
	}
	if (func_126(0, 0, 1))
	{
		return false;
	}
	if (iParam0 == 7)
	{
		if (!func_143(60))
		{
			return false;
		}
	}
	return true;
}

void func_293(int iParam0, var uParam1)
{
	func_285(uParam1);
	vVar0 = { func_686(iParam0) };
	uParam1->f_5 = _create_volume_cylinder(vVar0, 0f, 0f, 0f, 2.25f, 2.25f, 2f);
	uParam1->f_6 = _0xfa50f79257745e74(vVar0, 2f, 1, 36, 0);
	if (does_blip_exist(uParam1->f_4))
	{
		remove_blip(&(uParam1->f_4));
	}
	uParam1->f_4 = _blip_add_for_coord(1687768444, func_686(iParam0));
	_blip_set_modifier(uParam1->f_4, 287169430);
	set_blip_name_from_text_file(uParam1->f_4, "BLIP_CAMP_HITCH");
	set_blip_flash_timer(uParam1->f_4, 68, -1);
	func_651(uParam1->f_4, func_262());
}

void func_294(var uParam0, int iParam1)
{
	if (iParam1 == *uParam0)
	{
		return;
	}
	*uParam0 = iParam1;
	clear_bit(&(uParam0->f_1), 1);
}

void func_295(var uParam0)
{
	uParam0->f_8 = func_208("BLIP_CAMP_HITCH", 1940454787, uParam0->f_5, 1, 0, 0, 4, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
	set_bit(&(uParam0->f_1), 3);
}

void func_296(int iParam0, bool bParam1)
{
	if (!func_204(iParam0))
	{
		return;
	}
	iVar0 = func_556(iParam0);
	_uiprompt_set_enabled((*Global_1945938)[iVar0]->f_3, !bParam1);
}

void func_297(var uParam0)
{
	if (func_687())
	{
		uParam0->f_11 = func_688(uParam0);
		_uiprompt_set_group(func_689(uParam0->f_11), 1842627646, 0);
	}
	else if (func_690())
	{
		uParam0->f_10 = func_208("CAMP_HITCH_SADDLE", 1940454787, uParam0->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
		_uiprompt_set_group(func_689(uParam0->f_10), 1842627646, 0);
	}
	if (func_691(2) == 2)
	{
		func_692(2, -1384133541, uParam0);
	}
	if (func_691(3) == 2)
	{
		func_692(3, 1710877787, uParam0);
	}
	if (func_691(4) == 2)
	{
		func_692(4, 1141111167, uParam0);
	}
	uParam0->f_9 = func_208("SHOP_EXIT", 992265328, uParam0->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
	_uiprompt_set_group(func_689(uParam0->f_9), 1842627646, 0);
	set_bit(&(uParam0->f_1), 5);
}

bool func_298(var uParam0)
{
	*uParam0 = -1;
	if (is_ped_on_mount(Global_35))
	{
		return false;
	}
	if (func_690())
	{
		return true;
	}
	if (func_691(2) == 2)
	{
		return true;
	}
	if (func_691(3) == 2)
	{
		return true;
	}
	if (func_691(4) == 2)
	{
		return true;
	}
	if (func_687())
	{
		return true;
	}
	else if (!func_693())
	{
		*uParam0 = 0;
	}
	else if (does_entity_exist(func_358(0)) && func_221(func_358(0)))
	{
		*uParam0 = 2;
	}
	else if (func_694(0) || (does_entity_exist(func_358(0)) && is_entity_dead(func_358(0))))
	{
		*uParam0 = 1;
	}
	return false;
}

void func_299(int iParam0, bool bParam1)
{
	if (bParam1 && !func_204(iParam0))
	{
		return;
	}
	iVar0 = func_556(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

var func_300(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_301(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 630)
	{
		return;
	}
	func_553(iParam0, &uVar0, &uVar1);
	func_695(&uVar0, &uVar1);
}

bool func_302()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) <= 4);
}

int func_303(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 3;
		case 2:
			return 4;
		default:
			break;
	}
	return -1;
}

Vector3 func_304(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -108.5488f, -31.9591f, 94.9533f;
		case 2:
			return 703.402f, -1230.448f, 44.2554f;
		case 3:
			return 1848.78f, -1838.562f, 42.1948f;
		case 5:
			return 2277.974f, -753.376f, 41.0869f;
		case 6:
			return 2370.903f, 1339.88f, 105.1385f;
		case 7:
			return -2591.979f, 464.4913f, 145.3082f;
		case 8:
			if (!func_696())
			{
				return -1663.893f, -1331.753f, 82.9211f;
			}
			else
			{
				return -1642.401f, -1376.996f, 82.9705f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_305(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 302.5949f;
		case 2:
			return 25.2604f;
		case 3:
			return 296.4873f;
		case 5:
			return 318.2845f;
		case 6:
			return 350.6767f;
		case 7:
			return 320.8711f;
		case 8:
			if (!func_696())
			{
				return 102.5146f;
			}
			else
			{
				return 76.6876f;
			}
			break;
	}
	return 0f;
}

void func_306(int iParam0)
{
	bVar0 = func_697();
	func_698(0, iParam0);
	func_699(0, 1);
	if (bVar0)
	{
		func_699(iParam0, 2);
		if (func_700(iParam0))
		{
			func_701(iParam0);
		}
	}
	else
	{
		iVar1 = func_358(iParam0);
		if (does_entity_exist(iVar1))
		{
			func_702(iVar1);
			_update_ped_variation(iVar1, false, true, true, true, true);
		}
		func_703(iParam0);
		func_704(iParam0);
		func_699(iParam0, 0);
	}
	if (func_705() == 0)
	{
		func_706(0);
		func_316(0);
	}
}

Vector3 func_307(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case -1:
					return -106.1076f, -31.1365f, 94.9429f;
				case 0:
					return _get_object_offset_from_coords(-106.1076f, -31.1365f, 94.9429f, func_707(iParam0), 0.75f, 0f, 0f);
				case 1:
					return _get_object_offset_from_coords(-106.1076f, -31.1365f, 94.9429f, func_707(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case -1:
					return 702.1609f, -1228.529f, 44.1236f;
				case 0:
					return _get_object_offset_from_coords(702.1609f, -1228.529f, 44.1236f, func_707(iParam0), 0.75f, 0f, 0f);
				case 1:
					return _get_object_offset_from_coords(702.1609f, -1228.529f, 44.1236f, func_707(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case -1:
					return 1850.179f, -1838.022f, 42.1198f;
				case 0:
					return _get_object_offset_from_coords(1850.179f, -1838.022f, 42.1198f, func_707(iParam0), 0.75f, 0f, 0f);
				case 1:
					return _get_object_offset_from_coords(1850.179f, -1838.022f, 42.1198f, func_707(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case -1:
					return 2279.944f, -751.8282f, 40.9738f;
				case 0:
					return _get_object_offset_from_coords(2279.944f, -751.8282f, 40.9738f, func_707(iParam0), 0.75f, 0f, 0f);
				case 1:
					return _get_object_offset_from_coords(2279.944f, -751.8282f, 40.9738f, func_707(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case -1:
					return 2371.779f, 1341.602f, 105.1376f;
				case 0:
					return _get_object_offset_from_coords(2371.779f, 1341.602f, 105.1376f, func_707(iParam0), 0.75f, 0f, 0f);
				case 1:
					return _get_object_offset_from_coords(2371.779f, 1341.602f, 105.1376f, func_707(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case -1:
					return -2590.321f, 464.9799f, 145.1713f;
				case 0:
					return _get_object_offset_from_coords(-2590.321f, 464.9799f, 145.1713f, func_707(iParam0), 0.75f, 0f, 0f);
				case 1:
					return _get_object_offset_from_coords(-2590.321f, 464.9799f, 145.1713f, func_707(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case -1:
					if (!func_696())
					{
						return -1665.684f, -1332.361f, 82.8786f;
					}
					else
					{
						return -1644.99f, -1376.751f, 82.9679f;
					}
					break;
				case 0:
					if (!func_696())
					{
						return _get_object_offset_from_coords(-1665.684f, -1332.361f, 82.8786f, func_707(iParam0), 0.75f, 0f, 0f);
					}
					else
					{
						return _get_object_offset_from_coords(-1644.99f, -1376.751f, 82.9679f, func_707(iParam0), 0.75f, 0f, 0f);
					}
					break;
				case 1:
					if (!func_696())
					{
						return _get_object_offset_from_coords(-1665.684f, -1332.361f, 82.8786f, func_707(iParam0), -0.75f, 0f, 0f);
					}
					else
					{
						return _get_object_offset_from_coords(-1644.99f, -1376.751f, 82.9679f, func_707(iParam0), -0.75f, 0f, 0f);
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_308(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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

bool func_309(int iParam0, var uParam1)
{
	if (!func_708())
	{
		return true;
	}
	vVar0 = { func_307(iParam0, -1) };
	if (func_206(vVar0))
	{
		return false;
	}
	iVar6 = func_358(0);
	iVar7 = func_358(1);
	bVar8 = false;
	if (does_entity_exist(iVar7))
	{
		if (func_709(iVar7, vVar0, 2f, 1, 0))
		{
			bVar8 = true;
		}
	}
	if (does_entity_exist(iVar6) && _0xa0bc8faed8cfeb3c(iVar6))
	{
		if (_get_rider_of_mount(iVar6, true) != 0 || get_mount(Global_35) == iVar6)
		{
			return true;
		}
		func_710();
		func_711();
		clear_ped_tasks_immediately(iVar6, false, true);
		clear_area(vVar0, 1f, 2442122);
		if (bVar8)
		{
			vVar3 = { func_307(iParam0, 1) };
		}
		else
		{
			vVar3 = { vVar0 };
		}
		set_entity_coords(iVar6, vVar3, true, false, true, true);
		set_entity_heading(iVar6, func_707(iParam0));
		task_use_nearest_scenario_to_coord_warp(iVar6, vVar0, 0.25f, -1, false, false, false, false);
		iVar9 = _find_closest_active_scenario_point_of_type(vVar0, -1805387726, 0.5f, 0, false);
		if (_does_scenario_point_exist(iVar9))
		{
			vVar10 = { get_offset_from_entity_in_world_coords(_get_entity_scenario_point_is_attached_to(iVar9), func_712(2, 1)) };
			_0x06aade17334f7a40(iVar6, vVar10);
		}
		if (does_entity_exist(iVar7) && bVar8)
		{
			vVar3 = { func_307(iParam0, 0) };
			set_entity_coords(iVar7, vVar3, true, false, true, true);
			set_entity_heading(iVar7, func_707(iParam0));
			task_use_nearest_scenario_to_coord_warp(iVar7, vVar0, 0.25f, -1, false, false, false, false);
			if (_does_scenario_point_exist(iVar9))
			{
				vVar13 = { get_offset_from_entity_in_world_coords(_get_entity_scenario_point_is_attached_to(iVar9), func_712(2, 0)) };
				_0x06aade17334f7a40(iVar7, vVar13);
			}
		}
		uParam1->f_3 = iVar6;
		return true;
	}
	Var17.f_10 = 7;
	if (!does_entity_exist(uParam1->f_3))
	{
		Var17.f_10 = 0;
		Var17.f_6 = { vVar0 };
		Var17.f_9 = 0f;
		Var17.f_1 = 0;
		Var17 = 1;
		Var17.f_2 = 1;
		iVar6 = func_713(&iVar16, &Var17);
		switch (iVar16)
		{
			case 0:
				return false;
			case 1:
				return true;
			case 2:
				break;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_310(int iParam0)
{
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_700(iParam0))
	{
		return;
	}
	iVar0 = func_358(iParam0);
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iVar0, iVar1);
	iVar2 = get_itemset_size(iVar1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar4 = _get_entity_from_item(get_indexed_item_in_itemset(iVar3, iVar1));
		if (!is_entity_a_ped(iVar4))
		{
		}
		else
		{
			iVar5 = get_ped_index_from_entity_index(iVar4);
			if (!is_ped_human(iVar5))
			{
			}
			else if (is_entity_a_mission_entity(iVar4))
			{
			}
			else
			{
				_0x0d0db2b6af19a987(&iVar4);
			}
		}
		iVar3++;
	}
	if (is_itemset_valid(iVar1))
	{
		destroy_itemset(iVar1);
	}
}

void func_311()
{
	iVar0 = func_358(0);
	if (get_ped_config_flag(iVar0, 136, true))
	{
		set_ped_config_flag(iVar0, 136, false);
	}
	if (get_ped_config_flag(iVar0, 312, true))
	{
		set_ped_config_flag(iVar0, 312, false);
	}
	if (get_ped_config_flag(iVar0, 113, true))
	{
		set_ped_config_flag(iVar0, 113, false);
	}
	if (get_ped_config_flag(iVar0, 301, true))
	{
		set_ped_config_flag(iVar0, 301, false);
	}
	if (get_ped_config_flag(iVar0, 367, true))
	{
		set_ped_config_flag(iVar0, 367, false);
	}
	if (get_ped_config_flag(iVar0, 72, true))
	{
		set_ped_config_flag(iVar0, 72, false);
	}
	if (!_0x2c76fa0e01681f8d(iVar0, 0))
	{
		_0xae6004120c18df97(iVar0, 0, 1);
	}
	set_blocking_of_non_temporary_events(iVar0, false);
	if (get_animal_tuning_bool_param(iVar0, 48))
	{
		set_animal_tuning_bool_param(iVar0, 48, false);
	}
	if (_0x083d497d57b7400f(iVar0))
	{
		freeze_entity_position(iVar0, false);
	}
	if (!is_entity_visible(iVar0))
	{
		set_entity_visible(iVar0, true);
	}
	if (!_0x75df9e73f2f005fd(iVar0))
	{
		set_entity_invincible(iVar0, false);
	}
}

int func_312(int iParam0)
{
	iParam0 = func_714(iParam0);
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

void func_313(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return;
	}
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (iParam0 != 0)
	{
		if (!func_649(43))
		{
			return;
		}
	}
	iVar0 = func_715(iParam0);
	if (func_716(iVar0) || func_717(iVar0))
	{
		return;
	}
	iVar1 = func_312(iParam0);
	if (iVar1 >= func_718(iVar0))
	{
		return;
	}
	if (func_719(iParam0, iParam1))
	{
		return;
	}
	if (func_720(iParam0, iParam1))
	{
		return;
	}
	fVar2 = func_721(iParam0, iParam1);
	fVar3 = func_722(iParam1);
	fVar3 = (fVar3 * (1f + Global_40.f_11095.f_68));
	switch (iParam1)
	{
		case 1:
			iVar4 = func_358(iParam0);
			if (func_723(iVar4, 0))
			{
				fVar3 = (fVar3 * 0.5f);
			}
			Global_1900383->f_317.f_2[iParam0]->f_2 = (Global_1900383->f_317.f_2[iParam0]->f_2 + fVar3);
			break;
		case 2:
		case 3:
			if (func_724())
			{
				fVar3 = (fVar3 * 2f);
			}
			Global_1900383->f_317.f_2[iParam0]->f_2 = (Global_1900383->f_317.f_2[iParam0]->f_2 + fVar3);
			break;
		case 4:
			Global_1900383->f_317.f_2[iParam0]->f_4 = (Global_1900383->f_317.f_2[iParam0]->f_4 + fVar3);
			break;
		case 5:
			if (iVar1 < 1)
			{
				fVar5 = func_725(iParam0);
				fVar6 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
				fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1 + 1));
				fVar3 = (fVar7 - (fVar6 + fVar5));
			}
			else
			{
				fVar3 = 0f;
			}
			break;
		default:
			func_726(iParam1, fVar3);
			break;
	}
	func_727(iParam0, fVar3);
	func_728(iParam0, iParam1, (fVar2 + fVar3));
}

bool func_314()
{
	iVar0 = func_729();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_315()
{
	iVar0 = func_729();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_730(0);
}

void func_316(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

Vector3 func_317(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -107.3742f, -33.2291f, 94.9708f;
		case 2:
			return 704.5956f, -1229.202f, 44.2563f;
		case 3:
			return 1848.884f, -1836.363f, 42.333f;
		case 5:
			return 2277.335f, -751.5715f, 41.0714f;
		case 6:
			return 2369.604f, 1340.72f, 105.1302f;
		case 7:
			return -2590.858f, 468.7466f, 145.054f;
		case 8:
			if (!func_696())
			{
				return -1664.295f, -1330.149f, 82.9397f;
			}
			else
			{
				return -1646.427f, -1375.833f, 82.9658f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_318(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

bool func_319(vector3 vParam0, float fParam3, bool bParam4)
{
	if (func_314())
	{
		func_731();
		func_315();
	}
	iVar0 = func_732();
	if (!has_model_loaded(iVar0))
	{
		request_model(iVar0, false);
		return false;
	}
	iVar1 = create_object(iVar0, vParam0, true, true, false, false, true);
	if (!does_entity_exist(iVar1))
	{
		return false;
	}
	func_730(iVar1);
	bVar2 = false;
	if (is_entity_a_mission_entity(iVar1))
	{
		bVar2 = true;
	}
	bVar3 = false;
	if (_0x88ad6cc10d8d35b2(iVar1))
	{
		bVar3 = true;
	}
	if (!bVar2 || !bVar3)
	{
		set_entity_as_mission_entity(iVar1, true, true);
	}
	set_entity_heading(iVar1, fParam3);
	if (bParam4)
	{
		_0x9587913b9e772d29(iVar1, 0);
	}
	task_carriable(iVar1, 822715387, 0, 0, 0);
	return true;
}

void func_320(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (&iParam0->f_3374[iVar0] != 0)
		{
			_release_metaped_outfit_request(&(iParam0->f_3374[iVar0]));
			iParam0->f_3374[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_321(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		func_733(iParam0->f_3402[iVar0]);
		func_733(iParam0->f_3430[iVar0]);
		iVar0++;
	}
	func_733(&(iParam0->f_3478));
	iVar1 = 0;
	while (iVar1 < 3)
	{
		func_733(iParam0->f_3458[iVar1]);
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 15)
	{
		func_733(iParam0->f_3462[iVar2]);
		iVar2++;
	}
}

void func_322(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_366(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_634(Global_1935630, 4194304);
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

int func_323(bool bParam0)
{
	if (!bParam0 && func_734(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_324(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_735(&Global_0, 8);
	}
	if (!func_736() || func_56() != -1)
	{
		return;
	}
	func_735(&Global_0, 1);
}

bool func_325(int iParam0, int iParam1)
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
	if (func_737(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_737(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_737(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_737(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_737(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_737(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_737(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_737(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

Vector3 func_326(int iParam0)
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
			return func_738();
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_327()
{
	iVar0 = func_262();
	switch (iVar0)
	{
		case 79:
			return 50f;
		case 58:
			return 50f;
		case 71:
			return 50f;
		case 43:
			return 50f;
		case 4:
			return 50f;
		case 9:
			return 50f;
		case 22:
			return 120f;
		case 98:
			return 60f;
		case 37:
			return 120f;
	}
	return 25f;
}

bool func_328(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			if ((Global_1898077->f_1 == 1 || Global_1898077->f_1 == 3) || Global_1898077->f_1 == 4)
			{
				return true;
			}
			break;
		case 2:
			if ((((Global_1898077->f_1 == 2 || Global_1898077->f_1 == 5) || Global_1898077->f_1 == 1) || Global_1898077->f_1 == 3) || Global_1898077->f_1 == 4)
			{
				return true;
			}
			break;
		case 5:
			if (((Global_1898077->f_1 == 5 || Global_1898077->f_1 == 1) || Global_1898077->f_1 == 3) || Global_1898077->f_1 == 4)
			{
				return true;
			}
			break;
		case 3:
			if (Global_1898077->f_1 == 3 || Global_1898077->f_1 == 4)
			{
				return true;
			}
			break;
		case 4:
			if (Global_1898077->f_1 == 4)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_329(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_56() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_739(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_740();
		Global_1898077->f_9 = func_741(Global_1894899->f_2);
		func_742(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

void func_330(int iParam0, bool bParam1, float fParam2)
{
	func_743(iParam0, bParam1, fParam2);
}

void func_331()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (&Global_1934765->f_275[iVar0] == get_id_of_this_thread())
		{
			Global_1934765->f_286 = (Global_1934765->f_286 + Global_1934765->f_275[iVar0]->f_1);
			Global_1934765->f_275[iVar0] = 0;
			Global_1934765->f_275[iVar0]->f_1 = 0;
			func_744();
			return;
		}
		iVar0++;
	}
}

void func_332(int* iParam0)
{
	func_650(iParam0);
	func_745(iParam0);
	func_675(iParam0);
	if (does_entity_exist(iParam0->f_11))
	{
		delete_object(&(iParam0->f_11));
	}
	if (does_entity_exist(iParam0->f_12))
	{
		delete_object(&(iParam0->f_12));
	}
	if (func_746())
	{
		clear_room_for_entity(iParam0->f_864);
	}
	if (does_entity_exist(iParam0->f_864))
	{
		release_named_rendertarget("ledger_ct");
		delete_object(&(iParam0->f_864));
	}
	set_model_as_no_longer_needed(iParam0->f_33);
	_text_database_delete("CPGENAU");
	func_747(iParam0->f_1426, &iVar0, &uVar1, &uVar2, &uVar3);
	Global_1357549->f_1723 = 0;
	func_525(iVar0, 512, 0);
	if (((func_276() == 1 || func_276() == 2) || func_276() == 3) || func_276() == 6)
	{
		func_748(&(iParam0->f_1428));
	}
}

void func_333()
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Global_1357549->f_12[iVar0]->f_7 != 0)
		{
			_0xd2b9c78537ed5759(Global_1357549->f_12[iVar0]->f_7);
			Global_1357549->f_12[iVar0]->f_7 = 0;
			Global_1357549->f_12[iVar0]->f_10 = 0;
			Global_1357549->f_12[iVar0]->f_8 = 0;
		}
		iVar0++;
	}
}

void func_334(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (Global_1914319->f_3[iVar0]->f_9 == iParam0)
		{
			func_248(iVar0);
		}
		iVar0++;
	}
}

void func_335(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

bool func_336(int iParam0)
{
	return (Local_18.f_1718 && iParam0) == iParam0;
}

void func_337(int iParam0)
{
	Local_18.f_1718 = (Local_18.f_1718 - (Local_18.f_1718 && iParam0));
}

bool func_338(int iParam0)
{
	return func_396(iParam0, 16, 1);
}

bool func_339(int iParam0, bool bParam1)
{
	iVar0 = func_172(iParam0);
	if (bParam1)
	{
		if (!func_325(iVar0, 0))
		{
			return false;
		}
	}
	return is_ped_group_member(iVar0, func_749(), 1);
}

void func_340(int iParam0)
{
	if (!func_477(iParam0))
	{
		return;
	}
	if (!func_339(iParam0, 0))
	{
	}
	func_750(iParam0);
	Global_1359489->f_15 = func_751(1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == iParam0)
		{
			(*Global_1359489)[iVar0] = -1;
		}
		iVar0++;
	}
	func_752();
	func_410(iParam0, 32, 1);
	if (func_325(Global_1360165[iParam0], 0))
	{
		set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
		set_ped_combat_attributes(Global_1360165[iParam0], 83, false);
		set_ped_config_flag(Global_1360165[iParam0], 152, false);
		Var1 = get_player_ped(get_player_index());
		Var1.f_12 = 8;
		Var1.f_3 = Global_1360165[iParam0];
		Var1.f_7 = func_128();
		Var1.f_8 = 0;
		Var1.f_11 = 10;
		Var1.f_14 = Global_1360165[iParam0];
		_0x88bc5f4aef77fc4e(&Var1, 17);
	}
}

void func_341()
{
	func_375(-505205920, 1017034651, -469960592, 4, 1, 1, 1);
	func_753(544);
	func_753(595);
	func_753(548);
	func_754(0);
	func_754(19);
	func_755(1, 1, 0);
	func_756();
}

void func_342(bool bParam0)
{
	if (func_56() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1360165)
	{
		if ((!func_338(iVar0) && !func_757(iVar0)) && iVar0 != Global_1357549->f_1497)
		{
			if ((!func_510(iVar0, 33, 1) || !does_entity_exist(Global_1360165[iVar0])) || !is_entity_on_screen(Global_1360165[iVar0]))
			{
				func_758(iVar0, 0, 0, 1, bParam0);
			}
		}
		iVar0++;
	}
}

void func_343(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		func_140(4096);
		if (bParam1 && _does_volume_exist(iParam2))
		{
			iVar0 = 0;
			while (iVar0 < 27)
			{
				if (func_325(func_131(iVar0), 0))
				{
					if (!func_478(iVar0))
					{
						if (func_396(iVar0, 32768, 1))
						{
							_0x7b204f88f6c3d287(func_759(iVar0, 0));
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		func_137(4096);
	}
}

bool func_344(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = func_56() != -1;
	switch (iParam0)
	{
		case 76:
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
		case 105:
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
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*iParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*iParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*iParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*iParam1 = 472;
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
			*iParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*iParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*iParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*iParam1 = 589;
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
			*iParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*iParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*iParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*iParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*iParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 659;
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
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*iParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*iParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*iParam1 = 715;
			}
			else
			{
				*iParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*iParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*iParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*iParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*iParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*iParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*iParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*iParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*iParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*iParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*iParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*iParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*iParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*iParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*iParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*iParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*iParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*iParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*iParam1 = 834;
			*iParam2 = 857;
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

bool func_345(int iParam0, bool bParam1)
{
	if (func_56() != -1)
	{
		return false;
	}
	if (!func_402(iParam0))
	{
		return false;
	}
	if (!func_611(iParam0) && bParam1)
	{
		return false;
	}
	return func_368(iParam0, 1);
}

int func_346(int iParam0)
{
	if (!func_402(iParam0))
	{
		return 0;
	}
	if (!func_760(func_403(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_761(iParam0)))
	{
		return 0;
	}
	if (network_is_in_session())
	{
		if (!network_has_control_of_entity(_0x31c70a716cae1fee(func_761(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _0x31c70a716cae1fee(func_761(iParam0));
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, true);
		}
	}
	_0x7b204f88f6c3d287(func_761(iParam0));
	return 1;
}

void func_347()
{
	if (func_325(Global_35, 0))
	{
		_0x86f0b6730c32ac14(Global_35, 0);
	}
	if (func_325(func_172(0), 0))
	{
		_0x86f0b6730c32ac14(func_172(0), 0);
	}
	if (func_325(func_172(16), 0))
	{
		_0x86f0b6730c32ac14(func_172(16), 0);
	}
}

void func_348()
{
	iVar0[0] = 67198036;
	iVar0[1] = -1656481590;
	iVar0[2] = -1670262487;
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (_is_imap_active(&(iVar0[iVar4])))
		{
			_remove_imap(&(iVar0[iVar4]));
		}
		iVar4++;
	}
}

void func_349(int iParam0)
{
	if (iParam0->f_49 && !is_entity_dead(iParam0->f_48))
	{
		delete_vehicle(&(iParam0->f_48));
	}
	func_44(&(Global_1357549->f_3));
}

void func_350(int iParam0)
{
	func_280(iVar3510);
}

void func_351()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_325(Global_1357549->f_1675[iVar0]->f_3, 0))
		{
			if (!func_762(Global_1357549->f_1675[iVar0]->f_3) && !does_entity_exist(_get_rider_of_mount(Global_1357549->f_1675[iVar0]->f_3, false)))
			{
				bVar1 = false;
				if (!_0x88ad6cc10d8d35b2(Global_1357549->f_1675[iVar0]->f_3))
				{
					_0xf008e0ba1fe1d644(1);
					bVar1 = true;
					set_entity_as_mission_entity(Global_1357549->f_1675[iVar0]->f_3, true, true);
				}
				_0x7b204f88f6c3d287(Global_1357549->f_1675[iVar0]->f_4);
				if (bVar1)
				{
					_0x7d4e70a67a651c71(1);
				}
				_0xfcc6db8dbe709bc8(Global_1357549->f_1675[iVar0]->f_4);
			}
		}
		iVar0++;
	}
}

void func_352()
{
	if (Global_40.f_4283.f_567)
	{
		func_763(&(Global_1357549->f_1897));
	}
}

void func_353()
{
	if (Global_1357549->f_1832 != -1 && is_stream_playing(Global_1357549->f_1832))
	{
		stop_stream(Global_1357549->f_1832);
	}
	if (!is_string_null_or_empty(&(Global_1357549->f_1841)))
	{
		_0x9d746964e0cf2c5f(&(Global_1357549->f_1841), &(Global_1357549->f_1833));
	}
	func_176(&(Global_1357549->f_1845));
	Global_1357549->f_1832 = -1;
	func_137(1048576);
}

void func_354(bool bParam0)
{
	if (bParam0)
	{
		_hide_hud_component(-1618603322);
		func_140(8388608);
	}
	else
	{
		_display_hud_component(-1618603322);
		func_137(8388608);
	}
}

void func_355(bool bParam0)
{
	if (bParam0)
	{
	}
	block_dispatch_service_resource_creation(15, bParam0);
	block_dispatch_service_resource_creation(6, bParam0);
	block_dispatch_service_resource_creation(1, bParam0);
}

bool func_356(int iParam0)
{
	return (Local_18.f_1786 && iParam0) == iParam0;
}

void func_357(int iParam0)
{
	Local_18.f_1786 = (Local_18.f_1786 - (Local_18.f_1786 && iParam0));
}

int func_358(int iParam0)
{
	iParam0 = func_714(iParam0);
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

bool func_359(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_360(int iParam0, int iParam1)
{
	(*Global_1897952)[iParam0] = (Global_1897952[iParam0] || iParam1);
}

void func_361(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_596((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_362(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_597((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_363(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_598((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_364()
{
	if (!Global_1894899->f_186)
	{
		_0xf5ffb08976911b50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

int func_365(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 5:
				return Global_40.f_4283.f_320;
			default:
				break;
		}
	}
	switch (iParam0)
	{
		case 0:
			return Global_40.f_4283.f_313;
		case 1:
			return Global_40.f_4283.f_316;
		case 2:
			return Global_40.f_4283.f_317;
		case 12:
			return Global_40.f_4283.f_315;
		case 13:
			return Global_40.f_4283.f_314;
		case 14:
			return Global_40.f_4283.f_322;
		case 3:
			return Global_40.f_4283.f_318;
		case 4:
			return Global_40.f_4283.f_319;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 15:
			return Global_40.f_4283.f_321;
		default:
			break;
	}
	return 1;
}

void func_366(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_367(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_368(int iParam0, int iParam1)
{
	if (func_56() != -1)
	{
		return false;
	}
	if (!func_402(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

int func_369(int iParam0, bool bParam1)
{
	if (!func_402(iParam0))
	{
		return 0;
	}
	if (!func_368(iParam0, 2))
	{
		return 0;
	}
	if (func_403(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_761(iParam0)))
	{
		return 1;
	}
	if (func_368(iParam0, 1) && !bParam1)
	{
		func_764(iParam0, 128);
		return 1;
	}
	func_765(iParam0, 129);
	func_766(iParam0);
	_0xfc77c5b44d5ff7c0(func_761(iParam0));
	func_767(iParam0, 0);
	return 1;
}

int func_370(int iParam0)
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
	else if (iParam0 <= 116)
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

int func_371(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 4:
			return 5;
		case 79:
			return 6;
		case 43:
			return 0;
		case 98:
			return 2;
		case 58:
			return 4;
		case 71:
			return 1;
		case 9:
			return 3;
		case 22:
			return 7;
		case 37:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_372(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 150;
		case 4:
			return 30;
		case 5:
		case 6:
			return 150;
		case 7:
		case 8:
			return 50;
		default:
			break;
	}
	return 150;
}

void func_373(int iParam0)
{
	if (iParam0 > 150)
	{
		iParam0 = 150;
	}
	if (iParam0 > (Global_1934765->f_286 - 150))
	{
	}
	if (func_768(&iVar0))
	{
		if (Global_1934765->f_275[iVar0]->f_1 != iParam0)
		{
			Global_1934765->f_286 = (Global_1934765->f_286 + Global_1934765->f_275[iVar0]->f_1);
			Global_1934765->f_275[iVar0]->f_1 = iParam0;
			Global_1934765->f_286 = (Global_1934765->f_286 - iParam0);
			_0x2f9ac754fe179d58(func_769());
		}
		return;
	}
	iVar0 = func_770();
	if (iVar0 == -1)
	{
		return;
	}
	Global_1934765->f_275[iVar0]->f_1 = iParam0;
	Global_1934765->f_275[iVar0] = get_id_of_this_thread();
	Global_1934765->f_286 = (Global_1934765->f_286 - iParam0);
	_0x2f9ac754fe179d58(func_769());
}

int func_374(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -850999370;
		case 1:
			return -807742826;
		case 2:
			return 866755445;
		case 3:
			return 2082303678;
		case 4:
			return 1349313303;
		case 5:
			return 1267596926;
		case 6:
			return 676394410;
		case 7:
			return -1190705999;
		case 8:
			return -1802212639;
		default:
			break;
	}
	return 176656832;
}

int func_375(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = func_771(iParam0);
	iVar3 = func_772(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0] = iParam0;
			Global_40.f_4283.f_6[iVar0]->f_2 = iParam1;
			Global_40.f_4283.f_6[iVar0]->f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_546();
				func_548(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_773(iParam0, 1);
			if (func_774(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_775(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_776(1, iParam0);
				}
				else
				{
					func_777(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_376(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			*uParam2 = 1442468227;
			uParam2->f_3 = 665f;
			uParam2->f_4 = 2490f;
			uParam2->f_2 = 0;
			break;
		case 1:
			*uParam2 = 297498058;
			uParam2->f_3 = -120f;
			uParam2->f_4 = -30f;
			uParam2->f_2 = 0;
			switch (iParam1)
			{
				case 0:
					uParam2->f_1 = 1;
					break;
				case 2:
					uParam2->f_1 = 2;
					break;
			}
			break;
		case 2:
			*uParam2 = -2041482106;
			uParam2->f_3 = 671.5f;
			uParam2->f_4 = -1250f;
			uParam2->f_2 = 0;
			switch (iParam1)
			{
				case 0:
					uParam2->f_1 = 1;
					break;
				case 2:
					uParam2->f_1 = 2;
					break;
			}
			break;
		case 3:
			*uParam2 = -1322422742;
			uParam2->f_3 = 1881f;
			uParam2->f_4 = -1859.5f;
			uParam2->f_2 = 0;
			switch (iParam1)
			{
				case 0:
					uParam2->f_1 = 1;
					break;
			}
			break;
		case 4:
			*uParam2 = 0;
			uParam2->f_3 = 0f;
			uParam2->f_4 = 0f;
			uParam2->f_2 = 0;
			break;
		case 5:
			*uParam2 = 188702764;
			uParam2->f_3 = 2260f;
			uParam2->f_4 = -780f;
			uParam2->f_2 = 0;
			break;
		case 6:
			*uParam2 = 833544090;
			uParam2->f_3 = 2350f;
			uParam2->f_4 = 1350f;
			uParam2->f_2 = 0;
			switch (iParam1)
			{
				case 0:
					uParam2->f_1 = 1;
					break;
			}
			break;
		case 7:
			*uParam2 = 0;
			uParam2->f_3 = 0f;
			uParam2->f_4 = 0f;
			uParam2->f_2 = 0;
			break;
		case 8:
			*uParam2 = 0;
			uParam2->f_3 = 0f;
			uParam2->f_4 = 0f;
			uParam2->f_2 = 0;
			break;
	}
}

void func_377(var uParam0)
{
	if (uParam0->f_61 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		(*uParam0)[iVar0] = 0;
		(*uParam0)[iVar0]->f_1 = 0;
		(*uParam0)[uParam0->f_61]->f_2 = 0;
		iVar0++;
	}
	uParam0->f_61 = 0;
}

void func_378(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	if (!func_778(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61] = iParam1;
	(*uParam0)[uParam0->f_61]->f_1 = iParam2;
	(*uParam0)[uParam0->f_61]->f_2 = 0;
	uParam0->f_61++;
}

int func_379(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_477(iParam0))
	{
		return 0;
	}
	if (!bParam2)
	{
		if (func_779(iParam0, iParam1, 0))
		{
			return 0;
		}
	}
	if (iParam3 == -1)
	{
		(*Global_1360165)[iParam0]->f_140 = ((*Global_1360165)[iParam0]->f_140 || iParam1);
	}
	else
	{
		(*Global_1360165)[iParam0]->f_141 = ((*Global_1360165)[iParam0]->f_141 || iParam1);
		(*Global_1360165)[iParam0]->f_142 = &Global_1899515;
		func_548(&((*Global_1360165)[iParam0]->f_142), 0, 0, iParam3, 0, 0, 0, 0);
	}
	return 1;
}

char* func_380(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "horseshoeOverlook/hso_animal_pearson";
		case 2:
			return "clemensPoint/clm_animal_pearson";
		case 3:
			return "shadyBelle/shb_animal_pearson";
		case 6:
			return "beaverHollow/bvh_animal_pearson";
		default:
			break;
	}
	return "";
}

int func_381(int iParam0, char[32] cParam1, int iParam9)
{
	if (is_string_null_or_empty(&cParam1))
	{
		return 0;
	}
	if (!func_509(iParam0))
	{
		return 0;
	}
	iVar0 = func_395(iParam0);
	if (iVar0 != 0 && func_780(iParam0))
	{
		(*Global_1360165)[iParam0]->f_39 = { cParam1 };
		_0x187d65f3aec5d679(iVar0, &cParam1);
		func_513(iParam0, 17, 1);
		if (iParam9 != -1)
		{
			iVar1 = func_546();
			func_548(&iVar1, 0, 0, iParam9, 0, 0, 0, 0);
			Global_40.f_4942[iParam0]->f_46 = iVar1;
			Global_40.f_4942[iParam0]->f_49 = 4;
		}
		else
		{
			Global_40.f_4942[iParam0]->f_46 = -15;
			Global_40.f_4942[iParam0]->f_49 = 0;
		}
		(*Global_1360165)[iParam0]->f_56 = 1;
		return 1;
	}
	return 0;
}

void func_382()
{
	if (func_781(26))
	{
		_set_weather_type(-702816767, false, true, true, 10f, false);
		return;
	}
	if (func_781(59) || func_782(59))
	{
		return;
	}
	if (!func_783(1))
	{
		func_784(-193557170, 1, 0, 1103626240);
	}
}

int func_383(int iParam0)
{
	iVar0 = func_262();
	if (iParam0 != iVar0)
	{
		return 1;
	}
	vVar1 = { func_785(iParam0, 1) };
	if (func_206(vVar1))
	{
		return 0;
	}
	_0xa8432a14d4dc2101(vVar1);
	if (_0xda8b2eaf29e872e2(vVar1))
	{
		return 1;
	}
	return 0;
}

void func_384(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		func_601(iVar1, (*uParam0)[iVar0]);
		iVar0++;
	}
}

int func_385(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_602((*uParam0)[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_386()
{
	return true;
}

void func_387(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_388(vector3 vParam0, float fParam3, int iParam4)
{
	iVar0 = 512;
	if (iParam4 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam4 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam4 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam4 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam4 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_389(int iParam0, bool bParam1, bool bParam2)
{
	func_786(iParam0);
	iVar1 = func_391(iParam0);
	vVar2 = { func_785(iVar1, 1) };
	if (func_141() == iParam0)
	{
		vVar5 = { func_448(iParam0) };
		fVar8 = func_787(iParam0);
		func_788(iParam0, bParam1);
		if (!func_789(vVar5))
		{
			func_790(vVar5, fVar8, "CaravanCamp", 0, 0, 4, 0, -1082130432);
		}
		func_791(iParam0);
		if (func_390(iParam0))
		{
			iVar0 = func_792(iParam0);
			if (func_32() != 2)
			{
				if (func_793(iVar0))
				{
					if (!_is_imap_active(iVar0))
					{
						_request_imap(iVar0);
					}
				}
			}
			else if (func_793(iVar0))
			{
				if (_is_imap_active(iVar0))
				{
					_remove_imap(iVar0);
				}
			}
			func_794(iParam0);
		}
		func_795(iParam0, 1);
		if (!bParam2)
		{
			func_796(iParam0, iVar1, 1, 1);
		}
	}
	else
	{
		func_797(iParam0, &iVar0);
		if (func_789(vVar2))
		{
			func_798(vVar2, 0);
		}
		func_795(iParam0, 0);
		if (!bParam2)
		{
			func_796(iParam0, iVar1, 0, 0);
		}
	}
}

bool func_390(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			return true;
	}
	return false;
}

int func_391(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 79;
		case 0:
			return 43;
		case 2:
			return 98;
		case 4:
			return 58;
		case 1:
			return 71;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 37;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

void func_392(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	MemCopy(&cVar0, {(*Global_1888801)[iParam0]->f_22}, 8);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, func_799(iParam1), 64);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, func_800(iParam2), 64);
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

bool func_393()
{
	return (func_801() && !func_12(4096));
}

bool func_394(int iParam0)
{
	if (!func_509(iParam0))
	{
		return false;
	}
	if (!func_511(iParam0, 1, 0))
	{
		if (func_802(iParam0))
		{
			if (!func_396(iParam0, 512, 1) || !func_803(iParam0))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	return true;
}

int func_395(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -177936449;
		case 0:
			return -1758735922;
		case 6:
			return -680519380;
		case 3:
			return 263744889;
		case 7:
			return 351057032;
		case 4:
			return 1172283326;
		case 2:
			return -1046310682;
		case 5:
			return 652984488;
		case 8:
			return 1389665576;
		case 9:
			return -1066280913;
		case 13:
			return 1975793632;
		case 14:
			return -1887627202;
		case 15:
			return 1851096281;
		case 16:
			return 47402526;
		case 17:
			return 1762683397;
		case 18:
			return -1154551809;
		case 19:
			return -333682158;
		case 20:
			return 1465089966;
		case 21:
			return 511213393;
		case 22:
			return -1214580355;
		case 23:
			return -1397900723;
		case 10:
			return 541398842;
		case 24:
			return -1960060437;
		case 25:
			return 1634371177;
		case 26:
			return -1308114737;
		case 11:
			return 683250525;
		case 12:
			return -814958461;
	}
	return 0;
}

bool func_396(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_509(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

int func_397(int iParam0, bool bParam1)
{
	if (!func_509(iParam0))
	{
		return 0;
	}
	if ((*Global_1360165)[iParam0]->f_127 != 0)
	{
		return (*Global_1360165)[iParam0]->f_127;
	}
	switch (iParam0)
	{
		case 3:
			return -698095578;
		case 7:
			return 230221572;
		case 0:
			return 47961446;
		case 5:
			return 1268955201;
		case 2:
			return 2103924091;
		case 1:
			return 1554677062;
		case 9:
			return 984702223;
		case 6:
			return -1825091419;
		case 11:
			return 948152617;
		case 8:
			return 795059774;
		case 23:
			return -1880884094;
		case 20:
			return 849012978;
		case 4:
			return 404801781;
		case 10:
			return -1094022447;
		case 26:
			return -1484815615;
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	if (bParam1)
	{
		(*Global_1360165)[iParam0]->f_127 = func_804(iParam0);
		return (*Global_1360165)[iParam0]->f_127;
	}
	return 0;
}

int func_398(int iParam0)
{
	return 1268180497;
}

int func_399()
{
	iVar0 = -352578118;
	Var1.f_9 = -1591664384;
	Var30.f_9 = -1591664384;
	Var44 = { func_805(0) };
	if (!func_806(Var44, iVar0, &Var30, 0, 0))
	{
		return 0;
	}
	if (!func_807(&Var30, &Var1))
	{
		return 0;
	}
	return Var1.f_14;
}

bool func_400(int iParam0)
{
	if (func_12(4096))
	{
		return false;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 6:
			return true;
		case 5:
			if (func_143(44))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_401(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -784953535;
		case 1:
			return -543937540;
		case 2:
			return 893704044;
	}
	return 0;
}

bool func_402(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_403(int iParam0)
{
	if (!func_402(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

void func_404(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		func_603(iParam0, iVar1, func_600(iVar1), (*uParam1)[iVar0]);
		iVar0++;
	}
}

void func_405(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_604((*uParam0)[iVar0], (*uParam1)[iVar0]);
		iVar0++;
	}
}

int func_406(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_808((*uParam0)[iVar0], (*uParam1)[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_407()
{
}

bool func_408(var uParam0)
{
	switch (Global_1357549->f_2)
	{
		case 0:
			if (uParam0->f_46 != func_262())
			{
				return true;
			}
			if (func_809())
			{
				Global_1357549->f_2 = 1;
			}
			else
			{
				return false;
			}
		case 1:
			if (func_810(uParam0->f_46, 0))
			{
				Global_1357549->f_2 = 2;
			}
			else
			{
				return false;
			}
		case 2:
			if (func_811(uParam0->f_46))
			{
				Global_1357549->f_2 = 3;
			}
			else
			{
				return false;
			}
		case 3:
			if (func_812(uParam0))
			{
				Global_1357549->f_2 = 4;
			}
			else
			{
				return false;
			}
		case 4:
			if (func_813(uParam0))
			{
				Global_1357549->f_2 = 5;
			}
			else
			{
				return false;
			}
		case 5:
			iVar0 = 0;
			while (iVar0 < 27)
			{
				func_410(iVar0, 4, 1);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < 3)
			{
				Global_1357549->f_1675[iVar1]->f_2 = 0;
				iVar1++;
			}
			Global_1357549->f_2 = 0;
			return true;
		default:
			break;
	}
	return false;
}

void func_409(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (Global_23118[iParam0] || iParam1);
	}
	else
	{
		Global_1058888->f_40615[iParam0] = (Global_1058888->f_40615[iParam0] || iParam1);
	}
}

void func_410(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_509(iParam0))
		{
			return;
		}
	}
	func_814(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_411(var uParam0)
{
}

void func_412(var uParam0)
{
	if (func_32() == 1)
	{
		func_815(uParam0);
	}
	uParam0->f_859 = 1;
	if (Global_1357549->f_1721 == 0)
	{
		uVar1 = _databinding_add_data_container(Global_1357549->f_1724, "camp_detail");
		uVar0 = _databinding_add_data_container(uVar1, func_816(0));
		Global_1357549->f_1726[0] = uVar0;
		Global_1357549->f_1726[0]->f_1 = _databinding_add_data_hash(uVar0, "label", 1820034266);
		Global_1357549->f_1726[0]->f_2 = _databinding_add_data_int(uVar0, "value_string", 0);
		_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1357549->f_1725, 0, "camp_item", uVar0);
		uVar1 = _databinding_add_data_container(Global_1357549->f_1724, "camp_detail");
		uVar0 = _databinding_add_data_container(uVar1, func_816(1));
		Global_1357549->f_1726[1] = uVar0;
		Global_1357549->f_1726[1]->f_1 = _databinding_add_data_hash(uVar0, "label", 156970377);
		Global_1357549->f_1726[1]->f_2 = _databinding_add_data_int(uVar0, "value_string", 0);
		_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1357549->f_1725, 1, "camp_item", uVar0);
		uVar1 = _databinding_add_data_container(Global_1357549->f_1724, "camp_detail");
		uVar0 = _databinding_add_data_container(uVar1, func_816(2));
		Global_1357549->f_1726[2] = uVar0;
		Global_1357549->f_1726[2]->f_1 = _databinding_add_data_hash(uVar0, "label", -609488505);
		Global_1357549->f_1726[2]->f_2 = _databinding_add_data_int(uVar0, "value_string", 0);
		_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1357549->f_1725, 2, "camp_item", uVar0);
		uVar1 = _databinding_add_data_container(Global_1357549->f_1724, "camp_detail");
		uVar0 = _databinding_add_data_container(uVar1, func_816(3));
		Global_1357549->f_1726[3] = uVar0;
		Global_1357549->f_1726[3]->f_1 = _databinding_add_data_hash(uVar0, "label", 1967383862);
		Global_1357549->f_1726[3]->f_2 = _databinding_add_data_int(uVar0, "value_string", 0);
		_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1357549->f_1725, 3, "camp_item", uVar0);
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 31)
		{
			if (&Global_40.f_4283.f_335[iVar4] == 1)
			{
				func_817(&uVar2, iVar4);
				uVar1 = _databinding_add_data_container(Global_1357549->f_1724, "camp_detail");
				uVar0 = _databinding_add_data_container(uVar1, func_816(iVar4 + 4));
				Global_1357549->f_1726[iVar4 + 4] = uVar0;
				(Global_1357549->f_1726[iVar4 + 4])->f_1 = _databinding_add_data_hash(uVar0, "label", get_hash_key(&uVar2));
				(Global_1357549->f_1726[iVar4 + 4])->f_2 = _databinding_add_data_int(uVar0, "value", 0);
				_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1357549->f_1725, iVar4 + 4, "camp_item", uVar0);
			}
			iVar4++;
		}
		Global_1357549->f_1721 = 1;
	}
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 < 31)
	{
		func_818(iVar7, &iVar5);
		func_819(iVar7, &iVar6);
		if (func_820(uParam0->f_1425, iVar5))
		{
			func_821(&(uParam0->f_1425), iVar5);
		}
		if (func_822(&((*Global_1360165)[iVar6]->f_12), 512))
		{
			func_525(iVar6, 512, 0);
		}
		if (func_204(&(uParam0->f_885[uParam0->f_1426])))
		{
			func_205(uParam0->f_885[uParam0->f_1426], 1, 1);
		}
		iVar7++;
	}
	request_anim_dict("script_common@handover@generic@player_handover@money");
	func_823(128);
	func_676(&(uParam0->f_1325), Global_35, "ARTHUR", 0);
	_text_database_request("CPGENAU");
	func_271();
	if (func_824(func_141()))
	{
		func_825(&(uParam0->f_35.f_2));
		func_826(&(uParam0->f_35));
	}
	iVar8 = func_827(func_141());
	if (func_162())
	{
		if (!func_130(iVar8, 64))
		{
			func_163(iVar8, 64);
			func_163(iVar8, 262144);
		}
	}
	else if (func_130(iVar8, 64))
	{
		func_164(iVar8, 64);
	}
}

void func_413()
{
}

void func_414()
{
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (iVar0 < 6 || iVar0 >= 23)
		{
			_0x12f2d161bf4031fc(iVar0, 0.5f);
		}
		else if (iVar0 < 12)
		{
			_0x12f2d161bf4031fc(iVar0, 1.5f);
		}
		else
		{
			_0x12f2d161bf4031fc(iVar0, 1f);
		}
		iVar0++;
	}
}

void func_415()
{
	func_828(&(Local_18.f_51.f_35));
	func_176(&(Global_1359489->f_52));
	_0xcb61a63aa53d7d22(get_player_index(), 0);
	func_644(779383250, 1, 0);
	if (func_829())
	{
		func_375(-1526278254, 195285667, 1120952528, -1, 1, 1, 0);
	}
	else if (func_227(-1526278254, 1))
	{
		func_644(-1526278254, 1, 0);
	}
	if (func_830())
	{
		func_375(-544096309, 195285667, 1120952528, -1, 1, 1, 0);
	}
	else if (func_227(-544096309, 1))
	{
		func_644(-544096309, 1, 0);
	}
	iVar0 = func_831();
	if (iVar0 > Global_40.f_4283.f_323)
	{
		if ((iVar0 - Global_40.f_4283.f_323) > 5)
		{
			func_375(534766068, 195285667, 1120952528, -1, 1, 1, 0);
		}
		if ((iVar0 - Global_40.f_4283.f_323) > 10)
		{
			func_375(13460468, 195285667, 1120952528, -1, 1, 1, 0);
		}
		Global_40.f_4283.f_323 = iVar0;
	}
	if (func_141() == 6)
	{
		if (func_832(25))
		{
		}
	}
	if (get_attribute_base_rank(Global_35, 22) >= 40 || get_attribute_base_rank(Global_35, 16) >= 40)
	{
		func_375(1618734891, 195285667, 1120952528, -1, 1, 1, 0);
	}
	else if (func_227(1618734891, 1))
	{
		func_644(1618734891, 1, 0);
	}
	if (func_227(443165194, 1))
	{
		func_644(443165194, 1, 0);
	}
	if (func_227(1004978630, 1))
	{
		func_644(1004978630, 1, 0);
	}
	fVar1 = func_833();
	if (fVar1 < 25f)
	{
		if (!func_227(-625309660, 1) && !func_12(33554432))
		{
			func_375(1004978630, 195285667, 1120952528, -1, 1, 1, 0);
		}
	}
	else if (fVar1 > 75f)
	{
		func_375(443165194, 195285667, 1120952528, -1, 1, 1, 0);
	}
	if (func_149() < round((IntToFloat(func_834(&(Local_18.f_51.f_35))) * 0.2f)) && !func_227(-218211995, 1))
	{
		if (!func_227(397857304, 1))
		{
			func_375(397857304, 195285667, 1120952528, -1, 1, 1, 0);
		}
	}
	if (Global_1357549->f_1610)
	{
		return;
	}
	if (Global_40.f_4283.f_4 != 1)
	{
		return;
	}
	bVar2 = true;
	if (func_227(1004978630, 0) || func_227(397857304, 0))
	{
		if (func_835())
		{
			switch (func_141())
			{
				case 1:
					func_375(-2041153728, 195285667, -469960592, -1, 1, 1, 0);
					bVar2 = false;
					break;
				case 2:
					func_375(-811804990, 195285667, -469960592, -1, 1, 1, 0);
					bVar2 = false;
					break;
				case 3:
					func_375(-1689239424, 195285667, -469960592, -1, 1, 1, 0);
					bVar2 = false;
					break;
			}
		}
	}
	else if (func_836())
	{
		if (func_835())
		{
			switch (func_141())
			{
				case 1:
					func_375(1665139197, 195285667, -469960592, -1, 1, 1, 0);
					break;
				case 2:
					func_375(-1302664729, 195285667, -469960592, -1, 1, 1, 0);
					break;
				case 3:
					func_375(-670201310, 195285667, -469960592, -1, 1, 1, 0);
					break;
			}
		}
	}
	if (bVar2)
	{
		iVar3 = get_random_int_in_range(0, 5);
		iVar4 = 176656832;
		iVar5 = 176656832;
		iVar6 = 176656832;
		switch (func_141())
		{
			case 1:
				if (func_170(2, 0, 0))
				{
					iVar4 = -1520159291;
				}
				if (func_170(4, 0, 0))
				{
					iVar5 = -1825730216;
				}
				if (func_170(7, 0, 0))
				{
					iVar6 = -66788599;
				}
				break;
			case 2:
				if (func_170(2, 0, 0))
				{
					iVar4 = 1647502903;
				}
				if (func_170(4, 0, 0))
				{
					iVar5 = -1408927269;
				}
				if (func_170(7, 0, 0))
				{
					iVar6 = -1648173738;
				}
				break;
			case 3:
				if (func_170(2, 0, 0))
				{
					iVar4 = -1143028112;
				}
				if (func_170(4, 0, 0))
				{
					iVar5 = -1211711936;
				}
				if (func_170(7, 0, 0))
				{
					iVar6 = -1483924019;
				}
				break;
			default:
				return;
		}
		switch (iVar3)
		{
			case 0:
				if (iVar4 != 176656832)
				{
					func_375(iVar4, 195285667, 1120952528, -1, 1, 1, 0);
				}
				break;
			case 1:
				if (iVar5 != 176656832)
				{
					func_375(iVar5, 195285667, 1120952528, -1, 1, 1, 0);
				}
				break;
			case 2:
				if (iVar6 != 176656832)
				{
					func_375(iVar6, 195285667, 1120952528, -1, 1, 1, 0);
				}
				break;
		}
	}
}

bool func_416(int iParam0)
{
	return (Global_1894899 && iParam0) != 0;
}

void func_417(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

void func_418(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

void func_419()
{
	if (func_325(Global_35, 0))
	{
		_0x86f0b6730c32ac14(Global_35, 1);
		_0xef371232bc6053e1(Global_35);
	}
	if (func_325(func_172(0), 0))
	{
		_0x86f0b6730c32ac14(func_172(0), 1);
		_0xef371232bc6053e1(func_172(0));
	}
	if (func_325(func_172(16), 0))
	{
		_0x86f0b6730c32ac14(func_172(16), 1);
		_0xef371232bc6053e1(func_172(16));
	}
}

void func_420(int iParam0)
{
	if (((Global_1898077->f_1 == 2 || Global_1898077->f_1 == 5) || Global_1898077->f_1 == 3) || Global_1898077->f_1 == 1)
	{
		return;
	}
	iVar0 = 0;
	if (func_56() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_2 = Global_1898077->f_1;
	Global_1898077->f_13 = Global_1898077->f_12;
	Global_1898077->f_1 = 4;
	Global_1898077->f_7 = iVar0;
	Global_1898077->f_12 = iParam0;
	func_739(Global_1898077->f_7, Global_1898077->f_12);
}

bool func_421()
{
	return Global_1051081->f_8;
}

void func_422(int iParam0)
{
	Local_18.f_1718 = (Local_18.f_1718 || iParam0);
}

void func_423()
{
	if (!func_336(8))
	{
		func_355(1);
		func_422(8);
	}
}

int func_424(int iParam0)
{
	_0x20a4bf0e09bee146(iParam0);
	vVar0 = { get_entity_coords(Global_35, true, false) };
	_0x7be607daff382fd2(Global_35, iParam0, 512);
	_0x3acce14dfa6ba8c2(Global_35, 4, vVar0, 100f, iParam0);
	_0x3acce14dfa6ba8c2(Global_35, 6, vVar0, 100f, iParam0);
	_0x3acce14dfa6ba8c2(Global_35, 5, vVar0, 100f, iParam0);
	iVar3 = get_itemset_size(iParam0);
	return iVar3;
}

void func_425(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_56() != -1)
	{
		return;
	}
	if ((Global_36616 && func_837(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_838(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_839(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_840(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_839(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_426()
{
	Local_18.f_3373 = 0;
}

void func_427()
{
	Global_1905944->f_5695 = 1;
}

void func_428()
{
	if (Local_18.f_3373 != -1)
	{
		if (func_396(Local_18.f_3373, 4, 0))
		{
			if (Local_18.f_3373 != 10 || func_832(63))
			{
				iVar0 = func_172(Local_18.f_3373);
				if (!func_841(iVar0, 1))
				{
					if (!func_510(Local_18.f_3373, 3, 0) || func_842(Local_18.f_3373))
					{
						func_843(Local_18.f_3373, 1);
						task_combat_hated_targets_in_area(iVar0, get_entity_coords(Global_35, true, false), 200f, 0, 16);
						set_ped_config_flag(iVar0, 366, true);
					}
					else
					{
						_task_flee_from_ped(iVar0, Global_35, 0f, 0f, 0f, 200f, 20000, 0, 1077936128, 0);
					}
				}
			}
		}
		iVar1 = Local_18.f_3373;
		iVar1++;
		Local_18.f_3373 = iVar1;
		if (Local_18.f_3373 >= 26)
		{
			Local_18.f_3373 = -1;
		}
	}
}

Vector3 func_429(vector3 vParam0, float fParam3, float fParam4)
{
	vVar0 = { get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_844(vVar0, get_random_float_in_range(0f, fParam3)) };
	vVar0.f_2 = get_random_float_in_range(-fVar3, fVar3);
	return vParam0 + vVar0;
}

Vector3 func_430(float fParam0, var uParam1, var uParam2)
{
	vVar0 = { func_845(Global_36, uParam1, uParam2, 1, 0, 0, 0, 0, 0, 0, fParam0, 10f) };
	return vVar0;
}

void func_431(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_432(int iParam0)
{
	Global_1310720->f_9 = iParam0;
}

void func_433()
{
	Global_1310720->f_8 = 0;
	Global_1935630->f_4 = 1;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "respawn_persistence", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_846(Var10, 0);
}

void func_434(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = get_game_timer();
}

void func_435(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_436()
{
	iVar0 = 0;
	while (iVar0 < 26)
	{
		if (func_339(iVar0, 1))
		{
			func_340(iVar0);
		}
		iVar1 = func_172(iVar0);
		if (func_841(iVar1, 1))
		{
		}
		else
		{
			if (get_ped_config_flag(iVar1, 366, true))
			{
				set_ped_config_flag(iVar1, 366, false);
			}
			if (!func_396(iVar0, 4, 0))
			{
			}
			else if (func_396(iVar0, 16, 0))
			{
			}
			else
			{
				task_persistent_character(iVar1);
			}
		}
		iVar0++;
	}
}

void func_437(var uParam0)
{
	uParam0->f_62 = -1;
	uParam0->f_64 = *uParam0;
}

void func_438(bool bParam0)
{
	if (bParam0)
	{
		func_847(4);
	}
	func_847(2);
	set_bit(&(Global_1956580->f_1), 0);
}

bool func_439(int iParam0, var uParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = _get_first_entity_ped_is_carrying(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (!is_entity_a_ped(iVar0))
	{
		return false;
	}
	iVar1 = iVar0;
	if (!is_ped_human(iVar1))
	{
		return false;
	}
	if (is_entity_dead(iVar0))
	{
		*bParam2 = 1;
		*uParam1 = iVar1;
		return true;
	}
	if (_is_ped_hogtied(iVar1))
	{
		*bParam2 = 0;
		*uParam1 = iVar1;
		return true;
	}
	return false;
}

void func_440(int iParam0)
{
	Local_18.f_1786 = (Local_18.f_1786 || iParam0);
}

bool func_441(int iParam0, var uParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = _get_lassoed_entity(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (!is_ped_human(iVar0))
	{
		return false;
	}
	*bParam2 = is_entity_dead(iVar0);
	*uParam1 = iVar0;
	return true;
}

bool func_442(int iParam0, int iParam1)
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

bool func_443()
{
	if (Global_1392235->f_4 == 1)
	{
		return true;
	}
	else if (func_848((*Global_1835011)[7]->f_1))
	{
		return true;
	}
	else if (func_848((*Global_1835011)[69]->f_1))
	{
		return true;
	}
	else if (func_848((*Global_1835011)[70]->f_1))
	{
		return true;
	}
	else if (func_848((*Global_1835011)[71]->f_1))
	{
		return true;
	}
	else if (func_848((*Global_1835011)[72]->f_1))
	{
		return true;
	}
	else if (func_848((*Global_1347702)[32]->f_15))
	{
		return true;
	}
	else if (func_848((*Global_1347702)[132]->f_15))
	{
		return true;
	}
	return false;
}

int func_444(bool bParam0, int iParam1)
{
	if (is_entity_dead(Global_35))
	{
		return -1;
	}
	iVar0 = -1;
	fVar1 = 9999999f;
	iVar2 = 0;
	while (iVar2 < 26)
	{
		iVar3 = iVar2;
		if (!func_170(iVar3, 1, 1))
		{
		}
		else if (!bParam0)
		{
			if (Global_1357549->f_1497 == iVar3)
			{
			}
			else if (!func_849(iVar3, 0, iParam1))
			{
			}
			else
			{
				fVar4 = vdist(get_entity_coords(Global_35, true, false), get_entity_coords(func_172(iVar3), true, false));
				if (fVar4 < fVar1)
				{
					fVar1 = fVar4;
					iVar0 = iVar3;
				}
			}
			iVar2++;
			return iVar0;
		}
	}
}

int func_445(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
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
	if (func_737(*iParam1, 128))
	{
		if (!func_442(iParam0, 1245594896))
		{
			clear_ped_tasks(iParam0, 1, 0);
			*iParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_737(*iParam1, 2))
	{
		if (bVar3)
		{
			if (!func_850(iVar2))
			{
				return 0;
			}
			if (!func_442(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { get_entity_coords(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_851(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_737(*iParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				clear_ped_tasks(iParam0, 1, 0);
				task_dismount_animal(iParam0, iParam4, 0, 0, 0, 0);
			}
			return 0;
		}
		else if ((func_852(iParam2, 128) && does_entity_exist(_get_last_mount(iParam0))) && does_entity_exist(_get_first_entity_ped_is_carrying(_get_last_mount(iParam0))))
		{
			task_pickup_carriable_entity(iParam0, _get_first_entity_ped_is_carrying(_get_last_mount(iParam0)));
			func_853(iParam1, 128);
			return 0;
		}
		else
		{
			*iParam1 = 0;
			return 1;
		}
	}
	if (func_737(*iParam1, 4))
	{
		if (is_ped_in_any_vehicle(iParam0, true))
		{
			return 0;
		}
		else
		{
			clear_ped_tasks_immediately(iParam0, false, true);
			*iParam1 = 0;
			return 1;
		}
	}
	if (func_737(*iParam1, 8))
	{
		if (bVar3)
		{
			if (!func_850(iVar2))
			{
				return 0;
			}
		}
		if ((!bVar3 && is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iParam0))) || (bVar3 && is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iVar2))))
		{
			*iParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (is_ped_a_player(iParam0) && is_player_control_on(get_player_index()))
	{
		if (!func_852(iParam2, 2) && _0xb16223cb7da965f0(get_player_index()))
		{
			_0xae637bb8ef017875(get_player_index(), 1);
		}
		if (!func_852(iParam2, 2048))
		{
			if (is_player_control_on(get_player_index()))
			{
				set_player_control(get_player_index(), false, iParam3, false);
				if (func_852(iParam2, 8192))
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
		if (func_737(*iParam1, 2336))
		{
			if (!func_850(iVar2))
			{
			}
			if (func_854(iVar2, *iParam1))
			{
				func_855(iParam1, 32);
				func_855(iParam1, 256);
				func_855(iParam1, 2048);
				func_853(iParam1, 512);
				func_853(iParam1, 1024);
				func_853(iParam1, 4096);
			}
			else
			{
				return 0;
			}
		}
		if (func_737(*iParam1, 64))
		{
			disable_control_action(0, 1520437207, false);
			if (!func_850(iVar2))
			{
			}
			if (is_ped_walking(iVar2))
			{
				return 0;
			}
			else
			{
				func_855(iParam1, 64);
			}
		}
		if (func_852(iParam2, 16))
		{
			task_horse_action(iVar2, 2, 0, 0);
			*iParam1 = 0;
			return 1;
		}
		disable_control_action(0, 1520437207, false);
		if (((is_ped_sprinting(iVar2) || (is_ped_running(iVar2) && func_852(iParam2, 1024))) || func_852(iParam2, 8)) && !func_737(*iParam1, 5632))
		{
			task_horse_action(iVar2, 1, 0, 0);
			func_853(iParam1, 32);
		}
		else if ((is_ped_running(iVar2) && func_852(iParam2, 4096)) && !func_737(*iParam1, 5632))
		{
			task_horse_action(iVar2, 8, 0, 0);
			func_853(iParam1, 2048);
			func_853(iParam1, 4096);
		}
		else if (((get_ped_desired_move_blend_ratio(iVar2) <= 1.5f && get_ped_desired_move_blend_ratio(iVar2) >= 1.001f) && func_852(iParam2, 32)) && !func_737(*iParam1, 5632))
		{
			task_horse_action(iVar2, 3, 0, 0);
			func_853(iParam1, 256);
			func_853(iParam1, 1024);
		}
		else if (is_ped_walking(iVar2))
		{
			task_stand_still(iVar2, -1);
			func_853(iParam1, 64);
		}
		else if (!func_852(iParam2, 1))
		{
			if (!func_852(iParam2, 256))
			{
				_0xb832f1a686b9b810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_851(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_737(*iParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			task_dismount_animal(iParam0, iParam4, 0, 0, 0, 0);
			set_ped_desired_move_blend_ratio(iVar2, 0f);
			func_853(iParam1, 2);
		}
		else
		{
			task_stand_still(iParam0, 1000);
			func_853(iParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_852(iParam2, 1))
		{
			open_sequence_task(&iVar0);
			task_stand_still(0, 250);
			task_leave_any_vehicle(0, 0, 0);
			close_sequence_task(iVar0);
			task_perform_sequence(iParam0, iVar0);
			clear_sequence_task(&iVar0);
			bring_vehicle_to_halt(iVar1, fParam5, iParam6, false);
			func_853(iParam1, 4);
		}
		else
		{
			*iParam1 = 0;
			return 1;
		}
	}
	else if (!func_852(iParam2, 512))
	{
		task_stand_still(iParam0, 200);
		func_853(iParam1, 8);
	}
	return 0;
}

bool func_446(int iParam0)
{
	return (Local_18.f_1786 - iParam0) == 0;
}

void func_447(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

Vector3 func_448(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -127.3136f, -23.7866f, 95.356f;
		case 6:
			return 2334.85f, 1351.68f, 105.11f;
		case 3:
			return 1865.22f, -1887.22f, 41.39f;
		case 5:
			return 2275.63f, -729.34f, 40.43f;
		case 2:
			return 663.0678f, -1181.825f, 92.08381f;
		case 8:
			return -1621.825f, -1377.163f, 76.24816f;
		default:
			break;
	}
	return func_785(func_391(iParam0), 0);
}

Vector3 func_449()
{
	vVar0 = { _0xf70f00013a62f866(&(Global_1357549->f_3[5])) };
	return func_856(Global_36 - vVar0);
}

int func_450()
{
	return -1;
}

void func_451(int iParam0, int iParam1)
{
	iParam0 = func_714(iParam0);
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

bool func_452(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 6:
			*uParam1 = { 2368.145f, 1339.411f, 105.2073f };
			*uParam2 = 0f;
			break;
		case 0:
			*uParam1 = { -1347.354f, 2415.999f, 306.1693f };
			*uParam2 = 0f;
			break;
		case 2:
			*uParam1 = { 676.0986f, -1223.26f, 44.8735f };
			*uParam2 = 186f;
			break;
		case 1:
			*uParam1 = { -113.3444f, -16.16381f, 94.90366f };
			*uParam2 = 0f;
			break;
		case 3:
			*uParam1 = { 1855.146f, -1834.112f, 42.1034f };
			*uParam2 = 0f;
			break;
		case 7:
			*uParam1 = { -2591.77f, 465.7827f, 146.256f };
			*uParam2 = 0f;
			break;
		case 8:
			*uParam1 = { -1595.7f, -1414.78f, 83.7f };
			*uParam2 = 0f;
			break;
		case 5:
			*uParam1 = { 2278.67f, -751.0582f, 40.9953f };
			*uParam2 = 0f;
			break;
		default:
			return false;
	}
	return true;
}

void func_453(int iParam0)
{
	Local_18.f_1862 = (Local_18.f_1862 || iParam0);
}

bool func_454(int iParam0)
{
	return (Local_18.f_1862 && iParam0) == iParam0;
}

int func_455(int iParam0)
{
	if (!func_857(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

bool func_456(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return false;
		}
		iVar0 = Global_12106[iParam0]->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return false;
		}
		iVar0 = func_858(iParam0);
	}
	if (iVar0 == 1)
	{
		return true;
	}
	if (iVar0 == 2)
	{
		return true;
	}
	return false;
}

int func_457(int iParam0)
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

void func_458(int iParam0, int iParam1)
{
	iParam0 = func_714(iParam0);
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

float func_459(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_460(int iParam0)
{
	Local_18.f_1862 = (Local_18.f_1862 - (Local_18.f_1862 && iParam0));
}

int func_461()
{
	if (!_does_volume_exist(&(Global_1357549->f_3[0])) || !_does_volume_exist(&(Global_1357549->f_3[2])))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = create_itemset(true);
	_0xb8e213d02f37947d(&(Global_1357549->f_3[2]), iVar1, -1805387726, 1, 1, 0, 0);
	iVar2 = get_itemset_size(iVar1);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar0 = get_indexed_scenario_point_index_in_itemset(iVar3, iVar1);
		if (!_does_scenario_point_exist(iVar0))
		{
		}
		else if (_0xf256a75210c5c0eb(&(Global_1357549->f_3[0]), _get_scenario_point_coords(iVar0, true)))
		{
		}
	else
	{
		}
		else
		{
			iVar3++;
		}
	}
	destroy_itemset(iVar1);
	return iVar0;
}

int func_462()
{
	_copy_memory(&(Local_18.f_1934.f_67), &uVar0, 12);
	switch (func_141())
	{
		case 0:
			Local_18.f_1934.f_67 = { -1356.409f, 2433.987f, 307.1412f };
			Local_18.f_1934.f_67.f_3 = 315.3194f;
			Local_18.f_1934.f_67.f_4 = -92.6032f;
			Local_18.f_1934.f_67.f_5 = 0f;
			Local_18.f_1934.f_67.f_6 = { -1355.259f, 2428.821f, 306.6295f };
			Local_18.f_1934.f_67.f_9 = 137.8667f;
			Local_18.f_1934.f_67.f_10 = 27.6689f;
			Local_18.f_1934.f_67.f_11 = -32.8653f;
			return 1;
		case 1:
			Local_18.f_1934.f_67 = { -92.0169f, -46.8868f, 94.6083f };
			Local_18.f_1934.f_67.f_3 = 290.5712f;
			Local_18.f_1934.f_67.f_4 = -163.5061f;
			Local_18.f_1934.f_67.f_5 = -12.8288f;
			Local_18.f_1934.f_67.f_6 = { -127.8335f, -41.6741f, 94.4926f };
			Local_18.f_1934.f_67.f_9 = 343.9563f;
			Local_18.f_1934.f_67.f_10 = -5.4978f;
			Local_18.f_1934.f_67.f_11 = -9.5034f;
			return 1;
		case 2:
			Local_18.f_1934.f_67 = { 656.9079f, -1217.916f, 45.5739f };
			Local_18.f_1934.f_67.f_3 = 118.549f;
			Local_18.f_1934.f_67.f_4 = 108.4593f;
			Local_18.f_1934.f_67.f_5 = -3.7555f;
			Local_18.f_1934.f_67.f_6 = { 652.0198f, -1241.254f, 42.7896f };
			Local_18.f_1934.f_67.f_9 = 226.1829f;
			Local_18.f_1934.f_67.f_10 = -1.8674f;
			Local_18.f_1934.f_67.f_11 = -5.8606f;
			return 1;
		case 3:
			Local_18.f_1934.f_67 = { 1876.795f, -1819.649f, 41.3889f };
			Local_18.f_1934.f_67.f_3 = 146.2366f;
			Local_18.f_1934.f_67.f_4 = 29.2738f;
			Local_18.f_1934.f_67.f_5 = 0f;
			Local_18.f_1934.f_67.f_6 = { 1891.238f, -1852.065f, 41.5036f };
			Local_18.f_1934.f_67.f_9 = 235.0809f;
			Local_18.f_1934.f_67.f_10 = -4.8707f;
			Local_18.f_1934.f_67.f_11 = -31.7036f;
			return 1;
		case 4:
			Local_18.f_1934.f_67 = { 1430.64f, -7326.889f, 80.462f };
			Local_18.f_1934.f_67.f_3 = 39.9393f;
			Local_18.f_1934.f_67.f_4 = 33.7948f;
			Local_18.f_1934.f_67.f_5 = -2.9747f;
			Local_18.f_1934.f_67.f_6 = { 1425.97f, -7322.658f, 80.4454f };
			Local_18.f_1934.f_67.f_9 = 280.6111f;
			Local_18.f_1934.f_67.f_10 = -2.9136f;
			Local_18.f_1934.f_67.f_11 = -3.5024f;
			return 1;
		case 5:
			Local_18.f_1934.f_67 = { 2247.849f, -763.8032f, 41.9284f };
			Local_18.f_1934.f_67.f_3 = 52.0321f;
			Local_18.f_1934.f_67.f_4 = 48.5302f;
			Local_18.f_1934.f_67.f_5 = 2.8185f;
			Local_18.f_1934.f_67.f_6 = { 2238.481f, -776.7674f, 42.7447f };
			Local_18.f_1934.f_67.f_9 = 267.1989f;
			Local_18.f_1934.f_67.f_10 = -0.4043f;
			Local_18.f_1934.f_67.f_11 = -4.3617f;
			return 1;
		case 6:
			Local_18.f_1934.f_67 = { 2339.874f, 1371.26f, 105.2484f };
			Local_18.f_1934.f_67.f_3 = 221.9975f;
			Local_18.f_1934.f_67.f_4 = 16.3205f;
			Local_18.f_1934.f_67.f_5 = 2.6571f;
			Local_18.f_1934.f_67.f_6 = { 2338.244f, 1360.923f, 105.3035f };
			Local_18.f_1934.f_67.f_9 = 243.8945f;
			Local_18.f_1934.f_67.f_10 = 15.1624f;
			Local_18.f_1934.f_67.f_11 = -6.8075f;
			return 1;
		case 7:
			Local_18.f_1934.f_67 = { -2594.485f, 474.4041f, 144.9143f };
			Local_18.f_1934.f_67.f_3 = 93.6876f;
			Local_18.f_1934.f_67.f_4 = 20.3982f;
			Local_18.f_1934.f_67.f_5 = 0f;
			Local_18.f_1934.f_67.f_6 = { -2590.465f, 463.0091f, 145.2393f };
			Local_18.f_1934.f_67.f_9 = 168.0908f;
			Local_18.f_1934.f_67.f_10 = 1.7979f;
			Local_18.f_1934.f_67.f_11 = -5.3603f;
			return 1;
		case 8:
			Local_18.f_1934.f_67 = { -1610.253f, -1357.077f, 81.7792f };
			Local_18.f_1934.f_67.f_3 = 17.8936f;
			Local_18.f_1934.f_67.f_4 = 63.7332f;
			Local_18.f_1934.f_67.f_5 = -6.9619f;
			Local_18.f_1934.f_67.f_6 = { -1642.565f, -1356.53f, 82.9641f };
			Local_18.f_1934.f_67.f_9 = 200.1213f;
			Local_18.f_1934.f_67.f_10 = 77.8545f;
			Local_18.f_1934.f_67.f_11 = 10.0593f;
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_463()
{
	if (!func_12(32768))
	{
		return false;
	}
	if (func_12(16384))
	{
		return false;
	}
	if (func_12(4))
	{
		return false;
	}
	return true;
}

bool func_464()
{
	if (!func_463())
	{
		return false;
	}
	if (func_127(&Global_1935630, 16384))
	{
		return false;
	}
	if (func_127(&Global_1935630, 32768))
	{
		return false;
	}
	if (func_127(&Global_1935630, 8388608))
	{
		return false;
	}
	if (!is_player_control_on(player_id()))
	{
		return false;
	}
	if (!func_198(3))
	{
		return false;
	}
	return true;
}

bool func_465(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_a_ped(iParam0))
	{
		return !is_ped_human(get_ped_index_from_entity_index(iParam0));
	}
	else
	{
		iVar0 = func_859(iParam0);
		iVar1 = 0;
		func_860(iVar0, 761605153, &iVar1);
		if (func_861(iVar0) || iVar1 > 0)
		{
			return true;
		}
	}
	return false;
}

bool func_466(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = create_itemset(false);
	if (!is_itemset_valid(iVar0))
	{
		return false;
	}
	_0x20a4bf0e09bee146(iVar0);
	find_all_attached_carriable_entities(iParam0, iVar0);
	iVar1 = get_itemset_size(iVar0);
	if (iVar1 == 0)
	{
	}
	destroy_itemset(iVar0);
	iVar9 = 0;
	while (iVar9 < 4)
	{
		iVar2 = func_862(iVar9);
		if (!_0x608bc6a6aacd5036(&Var3, iParam0, iVar2, 0))
		{
		}
		else
		{
			iVar7 = Var3.f_3;
			if (!does_entity_exist(iVar7))
			{
			}
			else
			{
				if (is_entity_dead(iVar7))
				{
				}
				iVar8 = _get_entity_carry_config(iVar7);
				if (iVar8 == -1992418870 || iVar8 == 822715387)
				{
					return true;
				}
			}
		}
		iVar9++;
	}
	return false;
}

bool func_467(int iParam0)
{
	return func_863(iParam0, 6);
}

Vector3 func_468(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam4;
}

float func_469(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_470(var uParam0)
{
	if (!func_168(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_507(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_864() - round((uParam0->f_1 * 1000f)));
}

bool func_471()
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

int func_472(int iParam0)
{
	if (!func_475(iParam0))
	{
		return -1;
	}
	return func_866(func_865(iParam0));
}

bool func_473(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_474(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_475(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_476(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_477(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_478(int iParam0)
{
	if (!func_509(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_479()
{
	return Global_1946804->f_2792;
}

int func_480(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

bool func_481(int iParam0)
{
	if (!func_475(iParam0))
	{
		return false;
	}
	switch (func_867(iParam0))
	{
		case 1:
			switch (func_472(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return true;
			}
			break;
		case 8:
			switch (func_472(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return true;
			}
			break;
	}
	return false;
}

int func_482(int iParam0)
{
	iVar0 = func_869(func_868(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_483(int iParam0)
{
	if (func_484(81053684, iParam0))
	{
		return true;
	}
	if (func_484(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_484(int iParam0, int iParam1)
{
	iVar1 = func_869(func_868(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_491(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

bool func_485(int iParam0)
{
	if (func_870())
	{
		return false;
	}
	if (!func_871(iParam0, 0))
	{
		return false;
	}
	if (!func_872(iParam0, 1, 0))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

int func_486(int iParam0, int iParam1)
{
	bVar3 = func_873(iParam0);
	if (func_874(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_138(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_875();
			}
			else
			{
				iVar0 = func_876();
			}
		}
		else if (func_737(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_877();
		}
		else
		{
			iVar0 = func_878();
		}
	}
	else if (func_483(&iVar2))
	{
		if (func_874(iVar2, -1303648999))
		{
			iVar0 = func_875();
		}
		else
		{
			iVar0 = func_876();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_877();
	}
	else
	{
		iVar0 = func_878();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = get_game_timer();
		_task_item_interaction(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

bool func_487(int iParam0, bool bParam1)
{
	switch (func_879(iParam0))
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

int func_488(int iParam0)
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
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

bool func_489(int iParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && iParam0) != 0;
}

int func_490(bool bParam0)
{
	if (func_56() == -1)
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

int func_491(int iParam0)
{
	if (!func_871(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_492(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_493(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

struct<16> func_494(float fParam0, float fParam1, float fParam2)
{
	Var16 = { func_880(fParam0) };
	MemCopy(&cVar0, {Var16}, 16);
	StringConCat(&cVar0, "~BLIP_SUPPLY_ICON_HEALTH~", 128);
	Var16 = { func_880(fParam1) };
	StringConCat(&cVar0, &Var16, 128);
	StringConCat(&cVar0, "~BLIP_SUPPLY_ICON_AMMO~", 128);
	Var16 = { func_880(fParam2) };
	StringConCat(&cVar0, &Var16, 128);
	StringConCat(&cVar0, "~BLIP_SUPPLY_ICON_FOOD~", 128);
	return cVar0;
}

void func_495(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = floor((to_float(iParam0) / 100f));
	*uParam2 = (iParam0 % 100);
}

int func_496(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_325(Global_35, 0))
	{
		return 0;
	}
	bVar2 = ((func_12(4) || Global_1357549->f_1614) || bParam3);
	if (bVar2)
	{
		if (_0x666c2f53abefc952(bParam1) == 1030835986)
		{
			_0xfd010a2154b40676(bParam1, 623901053);
			_0xfd010a2154b40676(bParam2, 623901053);
		}
		set_ped_reset_flag(Global_35, 154, true);
		if (func_12(8388608))
		{
			func_354(0);
		}
		if (func_38(2097152) && get_ped_config_flag(Global_35, 334, true))
		{
			set_ped_config_flag(Global_35, 334, false);
			func_50(2097152);
		}
		return 0;
	}
	bVar1 = _0xf256a75210c5c0eb(bParam1, Global_36);
	if (bVar1 && !bVar2)
	{
		bVar0 = is_ped_in_melee_combat(Global_35);
		if (!bVar0)
		{
			disable_control_action(0, -1292666904, false);
		}
		disable_control_action(0, 42190210, false);
		disable_control_action(0, -562475458, false);
		if (!func_265(1))
		{
			disable_control_action(0, -620139643, false);
			if (_get_ped_crouch_movement(Global_35))
			{
				_set_ped_crouch_movement(Global_35, false, 0, false);
			}
		}
		disable_control_action(0, 440314811, false);
		disable_control_action(0, 2028806450, false);
		disable_control_action(0, 371916472, false);
		if (!get_ped_config_flag(Global_35, 334, true))
		{
			set_ped_config_flag(Global_35, 334, true);
			func_160(2097152);
		}
		set_ped_reset_flag(Global_35, 268, true);
		set_ped_reset_flag(Global_35, 179, true);
		set_ped_reset_flag(Global_35, 241, true);
		set_ped_reset_flag(Global_35, 260, true);
		set_ped_reset_flag(Global_35, 27, true);
		set_ped_reset_flag(Global_35, 198, true);
		switch (Global_1935630->f_44)
		{
			case -1569615261:
				if (_0x666c2f53abefc952(bParam1) != 1030835986)
				{
					_0xfd010a2154b40676(bParam1, 1030835986);
					_0xfd010a2154b40676(bParam2, 1030835986);
				}
				iVar4 = func_213(Global_35, 1, 1, 0);
				if (((!func_12(536870912) && !func_38(4)) && iVar4 != 0) && iVar4 != -1569615261)
				{
					_hide_ped_weapons(Global_35, 2, false);
				}
				break;
			case -1415022764:
			case -1016714371:
			case -164645981:
			case -160924582:
			case 827679807:
			case 1030402560:
			case 1247405313:
			case 1549070292:
				bVar3 = true;
				if (_0x666c2f53abefc952(bParam1) == 1030835986)
				{
					_0xfd010a2154b40676(bParam1, 623901053);
					_0xfd010a2154b40676(bParam2, 623901053);
				}
				break;
			default:
				if (!func_12(536870912) && !func_38(4))
				{
					_hide_ped_weapons(Global_35, 2, false);
				}
				if (_0x666c2f53abefc952(bParam1) != 1030835986)
				{
					_0xfd010a2154b40676(bParam1, 1030835986);
					_0xfd010a2154b40676(bParam2, 1030835986);
				}
				break;
		}
		if (!bVar3)
		{
			disable_control_action(0, -1304887797, false);
			disable_control_action(0, -128997553, false);
			disable_control_action(0, 130948705, false);
		}
		if (!func_12(8388608))
		{
			func_354(1);
		}
		if (bVar1)
		{
			set_ped_reset_flag(Global_35, 288, true);
			set_ped_reset_flag(Global_35, 2, true);
			if (iParam0->f_45 != 8 && iParam0->f_45 != 7)
			{
				iVar5 = get_mount(Global_35);
				if (does_entity_exist(iVar5))
				{
					set_ped_reset_flag(iVar5, 223, true);
					set_ped_reset_flag(Global_35, 287, true);
				}
			}
		}
	}
	else
	{
		if (func_12(8388608))
		{
			func_354(0);
		}
		if (get_ped_config_flag(Global_35, 334, true))
		{
			func_50(2097152);
			set_ped_config_flag(Global_35, 334, false);
		}
		if (_0x666c2f53abefc952(bParam1) != 1030835986)
		{
			_0xfd010a2154b40676(bParam1, 1030835986);
			_0xfd010a2154b40676(bParam2, 1030835986);
		}
	}
	if (func_12(2) || bVar2)
	{
		set_ped_reset_flag(Global_35, 154, true);
	}
	if ((!bVar2 && !bVar3) && func_667(Global_35, 1, 0, 0) != -1569615261)
	{
		if (is_disabled_control_pressed(0, 130948705))
		{
			if (func_142())
			{
				if (!func_200(556))
				{
					func_202(556, 0);
				}
			}
			else if (!func_200(555))
			{
				func_202(555, 0);
			}
		}
	}
	return 1;
}

void func_497(bool bParam0)
{
	iVar1[0] = 0;
	iVar1[1] = 1;
	iVar4 = 0;
	while (iVar4 < iVar1)
	{
		iVar0 = func_358(&(iVar1[iVar4]));
		if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
		{
		}
		else if (_get_rider_of_mount(iVar0, false) != 0)
		{
		}
		else if (!_does_volume_exist(bParam0))
		{
		}
		else if (!_0xf256a75210c5c0eb(bParam0, get_entity_coords(iVar0, true, false)))
		{
		}
		else
		{
			bVar5 = (func_12(4) || Global_1357549->f_1614);
			if (func_12(2) || bVar5)
			{
				set_ped_reset_flag(iVar0, 154, true);
			}
		}
		iVar4++;
	}
}

void func_498(int iParam0)
{
	switch (iParam0->f_3483.f_1)
	{
		case 0:
			if (func_881(&(iParam0->f_3483)))
			{
				func_882(iParam0, 1);
			}
			break;
		case 1:
			if (!is_ped_in_any_vehicle(Global_35, false) || !is_vehicle_driveable(iParam0->f_3483, false, false))
			{
				iParam0->f_3483 = 0;
				func_882(iParam0, 0);
			}
			else
			{
				if (((!func_12(2) && _does_volume_exist(&(Global_1357549->f_3[4]))) && is_entity_in_volume(iParam0->f_3483, &(Global_1357549->f_3[4]), true, 0)) && is_ped_heading_towards_position(Global_35, _0xf70f00013a62f866(&(Global_1357549->f_3[4])), 75f))
				{
					func_882(iParam0, 2);
					set_player_control(player_id(), false, 256, false);
				}
				Jump @404; //curOff = 212
				if (func_883(1, 1084227584, 1, 1056964608))
				{
					if (!func_456(func_455(44)))
					{
						func_202(534, 0);
					}
					task_leave_vehicle(Global_35, iParam0->f_3483, 0, 0);
					func_882(iParam0, 3);
				}
				Jump @404; //curOff = 277
				if (!is_ped_in_vehicle(Global_35, iParam0->f_3483, false))
				{
					set_vehicle_is_considered_by_player(iParam0->f_3483, false);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (&iParam0->f_3483.f_2[iVar0] == 0)
						{
							iParam0->f_3483.f_2[iVar0] = iParam0->f_3483;
							iParam0->f_3483.f_6[iVar0] = get_game_timer() + 30000;
						}
						else
						{
							if (iVar0 == 2)
							{
							}
							iVar0++;
						}
					}
					set_player_control(player_id(), true, 0, false);
					func_882(iParam0, 0);
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (&iParam0->f_3483.f_2[iVar0] != 0)
				{
					if (!does_entity_exist(&(iParam0->f_3483.f_2[iVar0])) || !is_vehicle_driveable(&(iParam0->f_3483.f_2[iVar0]), false, false))
					{
						iParam0->f_3483.f_2[iVar0] = 0;
					}
					else if (get_game_timer() > &iParam0->f_3483.f_6[iVar0])
					{
						vVar1 = { get_entity_coords(&(iParam0->f_3483.f_2[iVar0]), false, false) };
						if (vdist(Global_36, vVar1) > 80f && !is_sphere_visible(vVar1, 10f))
						{
							fVar4 = get_entity_heading(&(iParam0->f_3483.f_2[iVar0]));
							set_entity_heading(&(iParam0->f_3483.f_2[iVar0]), (fVar4 + 180f));
							set_vehicle_is_considered_by_player(&(iParam0->f_3483.f_2[iVar0]), true);
							iParam0->f_3483.f_2[iVar0] = 0;
							iParam0->f_3483.f_6[iVar0] = 0;
						}
					}
				}
				iVar0++;
			}
			default:
				break;
	}
}

void func_499(int iParam0)
{
	fVar0 = 2.5f;
	if (func_38(512) && !func_12(2))
	{
		fVar0 = 1.25f;
	}
	if (func_881(&(iParam0->f_3483)))
	{
		if (!is_entity_dead(iParam0->f_3483) && _is_draft_vehicle(iParam0->f_3483))
		{
			iVar1 = 0;
			while (iVar1 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iParam0->f_3483, iVar1);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, fVar0);
					_0x0c3f0f7f92ca847c(iParam0->f_3483, _0x46bf2a810679d6e6(iVar2, fVar0));
				}
				iVar1++;
			}
		}
	}
}

void func_500(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (!func_12(65536))
				{
					func_140(65536);
				}
			}
			else if (func_12(65536))
			{
				func_137(65536);
			}
			break;
		case 1:
			if (bParam1)
			{
				if (!func_12(131072))
				{
					func_140(131072);
				}
			}
			else if (func_12(131072))
			{
				func_137(131072);
			}
			break;
	}
}

int func_501(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _create_volume_box(653.589f, -1253.396f, 44.461f, 0f, 0f, -54.05f, 3.85f, 4.6f, 5.7f);
		case 1:
			return _create_volume_box(660.721f, -1257.044f, 43.797f, 0f, 0f, -14.4f, 2.15f, 3.1f, 5.7f);
	}
	return 0;
}

int func_502(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _create_volume_box(-131.488f, -31.805f, 96.082f, 0f, 0f, -4.35f, 3.9f, 3.45f, 1.9f);
		case 1:
			return _create_volume_box(-117.938f, -36.055f, 95.882f, 0f, 0f, -31.4f, 3.65f, 3f, 2.5f);
	}
	return 0;
}

int func_503(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _create_volume_box(2359.789f, 1376.458f, 106.883f, 0f, 0f, -26.9f, 4f, 4.35f, 2.7f);
		case 1:
			return _create_volume_box(2343.321f, 1350.422f, 106.762f, 0f, 3.9f, 27.75f, 3.9f, 2.6f, 2.95f);
	}
	return 0;
}

int func_504(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _create_volume_box(1895.776f, -1858.61f, 47.535f, 0f, 0f, -38.85f, 6.3f, 9.9f, 3.55f);
		case 1:
			return _create_volume_box(1897.918f, -1870.142f, 48.126f, 0f, 0f, -38.85f, 6.05f, 7.35f, 3.55f);
	}
	return 0;
}

bool func_505()
{
	if (is_thread_active((*Global_1347702)[66]->f_42, false) && !func_884((*Global_1347702)[66]->f_13, 4))
	{
		return true;
	}
	return false;
}

bool func_506(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_507(var uParam0)
{
	return func_506(*uParam0, 2);
}

float func_508()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_509(int iParam0)
{
	return iParam0 > -1;
}

bool func_510(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_509(iParam0))
		{
			return false;
		}
	}
	func_814(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

bool func_511(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_509(iParam0))
	{
		return false;
	}
	if (func_396(iParam0, 32, 1))
	{
		return false;
	}
	if (!func_396(iParam0, 2, 1))
	{
		return false;
	}
	if (!func_396(iParam0, 4, 1))
	{
		return false;
	}
	if (func_510(iParam0, 33, 1))
	{
		return false;
	}
	if (func_338(iParam0))
	{
		return false;
	}
	if (func_802(iParam0))
	{
		if (!bParam2)
		{
			return false;
		}
	}
	if (!bParam1)
	{
		if (Global_1357549->f_1497 == iParam0)
		{
			return false;
		}
	}
	return true;
}

bool func_512(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

void func_513(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_509(iParam0))
		{
			return;
		}
	}
	func_814(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_514(int iParam0, bool bParam1, char* sParam2)
{
	iVar0 = func_172(iParam0);
	if (!func_477(iParam0) || is_entity_dead(iVar0))
	{
		return;
	}
	_0xf1c03a5352243a30(iVar0);
	if (bParam1)
	{
		clear_ped_tasks_immediately(iVar0, false, true);
	}
	else
	{
		clear_ped_tasks(iVar0, 1, 0);
	}
}

void func_515(int iParam0, int iParam1)
{
	if (!func_509(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_11 = iParam1;
}

bool func_516(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_509(iParam0))
	{
		return false;
	}
	switch ((*Global_1360165)[iParam0]->f_3)
	{
		case 0:
			if (!has_script_with_name_hash_loaded(89040947))
			{
				request_script_with_name_hash(89040947);
			}
			(*Global_1360165)[iParam0]->f_3 = 1;
		case 1:
			if (!has_script_with_name_hash_loaded(89040947))
			{
				return false;
			}
			if (Global_1359489->f_9 != -1)
			{
				return false;
			}
			Global_1359489->f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_885(iParam0, iParam9, bParam7, 1);
				}
				else if (((*Global_1360165)[iParam0]->f_4.f_2 != 0 && (*Global_1360165)[iParam0]->f_4.f_2 == Global_40.f_4942[iParam0]->f_59) && (func_456((*Global_1360165)[iParam0]->f_4.f_2) || func_848((*Global_1360165)[iParam0]->f_4.f_2)))
				{
					iParam4 = (*Global_1360165)[iParam0]->f_4.f_1;
				}
				else
				{
					iParam4 = func_885(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if ((*Global_1360165)[iParam0]->f_63 != iParam4 && func_886((*Global_1360165)[iParam0]->f_63))
				{
					if (!func_887(iParam0, 0))
					{
						func_513(iParam0, 25, 0);
					}
				}
			}
			(*Global_1360165)[iParam0]->f_4 = { func_888(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0]->f_59, bParam11) };
			if (!bParam6)
			{
				func_410(iParam0, 44, 1);
			}
			(*Global_1360165)[iParam0]->f_3 = 2;
		case 2:
			if (!func_325(func_172(iParam0), 0))
			{
				return false;
			}
			if (iParam5 && iParam10)
			{
				if (!func_325(func_131(iParam0), 0))
				{
					return false;
				}
			}
			(*Global_1360165)[iParam0]->f_3 = 3;
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

void func_517(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_509(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_410(iParam0, 50, 1);
		func_410(iParam0, 48, 1);
		func_410(iParam0, 49, 1);
		func_410(iParam0, 51, 1);
		func_410(iParam0, 52, 1);
		func_410(iParam0, 54, 1);
		func_410(iParam0, 55, 1);
	}
	else
	{
		func_513(iParam0, 50, 1);
		func_513(iParam0, 48, 1);
		func_513(iParam0, 49, 1);
		func_513(iParam0, 51, 1);
		if (bParam3)
		{
			func_513(iParam0, 54, 1);
		}
		else
		{
			func_410(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_513(iParam0, 52, 1);
			if (bParam3)
			{
				func_513(iParam0, 55, 1);
			}
		}
		else
		{
			func_410(iParam0, 52, 1);
			if (!bParam3)
			{
				func_410(iParam0, 55, 1);
			}
		}
	}
}

void func_518(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_477(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_889(iParam0, bParam3);
	}
	else
	{
		func_890(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_891(iParam0, bParam3);
	}
	else
	{
		func_892(iParam0, bParam3);
	}
}

void func_519(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_893(Global_35) && is_player_teleport_active())
	{
	}
	if (func_894(iParam0))
	{
		if (func_222(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_737(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_519(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_519(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_737(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_737(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_737(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_737(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_737(iParam5, 129))
	{
		if (func_737(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_737(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_737(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_737(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_894(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_737(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_737(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_520(int iParam0, int iParam1)
{
	if (!func_477(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_895(iParam0, iParam1);
	return bVar0;
}

void func_521(int iParam0, int iParam1, bool bParam2)
{
	if (!func_477(iParam0))
	{
		return;
	}
	if (!func_520(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0]->f_3 = iParam1;
	if (bParam2)
	{
		func_513(iParam0, 25, 1);
	}
}

void func_522(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!is_entity_dead(iParam1))
	{
		if (func_896(iParam2))
		{
			iVar0 = func_897(iParam2, -1);
			if (func_898(iParam1, iVar0))
			{
				if (func_899(iParam1, iVar0))
				{
					if (func_900(iParam1, iVar0))
					{
						_apply_ped_metaped_outfit(decor_get_int(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_901(iParam1);
					}
				}
				else
				{
					_set_ped_body_component(iParam1, iVar0);
				}
			}
		}
		func_902(iParam0, iParam1, 0);
		_update_ped_variation(iParam1, false, true, true, true, false);
		_0xe3144b932dfdff65(iParam1, 0f, -1, 1, 1);
		clear_ped_damage_decal_by_zone(iParam1, 10, "ALL");
		clear_ped_blood_damage_by_zone(iParam1, 3);
		clear_ped_blood_damage_by_zone(iParam1, 0);
		clear_ped_blood_damage_by_zone(iParam1, 5);
		clear_ped_blood_damage_by_zone(iParam1, 7);
		clear_ped_blood_damage_by_zone(iParam1, 8);
		clear_ped_blood_damage_by_zone(iParam1, 9);
		if (bParam3)
		{
			func_513(iParam0, 66, 0);
		}
	}
}

void func_523(int iParam0)
{
	func_903(iParam0);
	func_904(iParam0, 0);
}

void func_524(int iParam0, int iParam1)
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

void func_525(int iParam0, int iParam1, bool bParam2)
{
	if (!func_509(iParam0))
	{
		return;
	}
	func_905(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

void func_526(int iParam0)
{
	func_513(iParam0, 36, 1);
}

bool func_527(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!is_ped_human(iParam0))
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		get_current_ped_weapon(iParam0, &iVar1, true, iVar0, true);
		if (!is_weapon_valid(iVar1))
		{
		}
		else if (!_is_weapon_two_handed(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			_0xe9bd19f8121ade3e(iParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_528(int iParam0, int iParam1)
{
	if (!func_509(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0]->f_3 == -1341683964)
			{
				func_906(iParam1, 1240907314, 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_906(iParam1, -2088446466, 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_529(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_477(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

void func_530(int iParam0)
{
	switch (func_141())
	{
		case 2:
			if (iParam0 == 0)
			{
				vVar0 = { 655.5186f, -1252.901f, 42.8413f };
				vVar3 = { 0f, 0f, 143.2273f };
			}
			if (iParam0 == 1)
			{
				vVar0 = { 660.9746f, -1255.074f, 42.7057f };
				vVar3 = { 0f, 0f, 177.9986f };
			}
			break;
		case 1:
			if (iParam0 == 0)
			{
				vVar0 = { -129.2241f, -32.6858f, 95.083f };
				vVar3 = { 0f, 0f, 87.1887f };
			}
			if (iParam0 == 1)
			{
				vVar0 = { -120.3756f, -35.1044f, 94.7365f };
				vVar3 = { 0f, 0f, 233.7959f };
			}
			break;
		case 6:
			if (iParam0 == 0)
			{
				vVar0 = { 2358.067f, 1375.013f, 105.5566f };
				vVar3 = { 0f, 0f, 328.4377f };
			}
			if (iParam0 == 1)
			{
				vVar0 = { 2344.865f, 1351.729f, 105.1657f };
				vVar3 = { 0f, 0f, 138.0917f };
			}
			break;
		case 3:
			if (iParam0 == 0)
			{
				vVar0 = { 1892.641f, -1862.309f, 46.3347f };
				vVar3 = { 0f, 0f, 333.8364f };
			}
			if (iParam0 == 1)
			{
				vVar0 = { 1902.226f, -1868.772f, 46.3492f };
				vVar3 = { 0f, 0f, 148.4403f };
			}
			break;
	}
	vVar0.f_2 = (vVar0.z + 0.25f);
	get_ground_z_for_3d_coord(vVar0, &(vVar0.f_2), false);
	set_anim_scene_origin(Global_1357549->f_1669, vVar0, vVar3, 2);
}

void func_531(int iParam0)
{
	if (func_141() == 3 && iParam0 == 1)
	{
		func_907(1163459288, 0, 0);
		func_908(1163459288, 0, -1f, 0, 1, 0.4f, 1, 0);
	}
	if (func_141() == 3 && iParam0 == 0)
	{
		func_907(58833085, 0, 0);
		func_907(-629053815, 0, 0);
		func_908(58833085, 0, 1f, 0, 1, 0.4f, 1, 0);
		func_908(-629053815, 0, -1f, 0, 1, 0.4f, 1, 0);
	}
}

void func_532(int iParam0, bool bParam1)
{
	if (!func_509(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_822(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_525(iParam0, 1, 0);
		}
	}
	func_525(iParam0, 16, bParam1);
}

void func_533(int iParam0)
{
	func_525(iParam0, 8, 0);
}

int func_534(int iParam0, bool bParam1)
{
	if (!func_477(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_909(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

void func_535(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_477(iParam0))
	{
		iVar1 = func_172(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_910(iParam0);
		}
	}
	if (func_510(iParam0, 5, 1))
	{
		set_ped_config_flag(func_172(iParam0), 137, true);
	}
}

void func_536(int iParam0, bool bParam1)
{
	if (!func_509(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_172(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_172(iParam0), 204, false);
	}
}

void func_537(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_477(iParam0))
	{
		return;
	}
	if (func_338(iParam0))
	{
		if (!func_177(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_510(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_534(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_172(iParam0);
	if (((does_entity_exist(iVar1) && func_911(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
	{
		return;
	}
	if (does_entity_exist(iVar1) && is_entity_attached(iVar1))
	{
		if (((is_ped_active_in_scenario(iVar1, 1) || _0x0c3cb2e600c8977d(iVar1, 1)) || is_ped_on_mount(iVar1)) || is_ped_in_any_vehicle(iVar1, false))
		{
			_0xf1c03a5352243a30(iVar1);
			clear_ped_tasks_immediately(iVar1, true, true);
		}
		detach_entity(iVar1, true, true);
	}
	if (bParam4)
	{
		func_513(iParam0, 2, 1);
	}
	else
	{
		func_912(iParam0);
		func_513(iParam0, 1, 1);
	}
}

void func_538(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_477(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

void func_539(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_509(iParam1))
	{
		return;
	}
	iVar0 = func_131(iParam1);
	if (func_478(iParam1))
	{
		if (!func_913(iParam1))
		{
			return;
		}
	}
	func_410(iParam1, 39, 1);
	func_914(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_914(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_914(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_513(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_915(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_540(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_508() - fParam1);
	func_916(uParam0, 1);
	func_917(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_541()
{
	return func_918(32);
}

void func_542(int iParam0)
{
	fVar0 = 2f;
	iVar1 = 20;
	iVar2 = 0;
	iVar3 = 5;
	iVar4 = get_clock_hours();
	iVar5 = get_clock_minutes();
	func_919(iParam0, &iVar7, &iVar8, &iVar9, &iVar10);
	if (func_227(180573150, 1) || func_227(-404697685, 1))
	{
		func_920(iParam0, &iVar7, &iVar8, &iVar9, &iVar10);
	}
	else if (func_227(1305416676, 1))
	{
		func_921(iParam0, &iVar7, &iVar8, &iVar9, &iVar10);
	}
	else if (func_227(-1837343824, 1))
	{
		func_922(iParam0, &iVar7, &iVar8, &iVar9, &iVar10);
	}
	if (((func_781(22) || func_782(22)) || func_781(23)) || func_782(23))
	{
		if (((((iParam0 == 26 || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31)
		{
			iVar9 = 6;
			iVar10 = 0;
		}
	}
	if (iVar7 < iVar9)
	{
		bVar6 = func_923(iVar7, iVar8, iVar9, iVar10);
	}
	else if (iVar9 < iVar7)
	{
		bVar6 = func_924(iVar7, iVar8, iVar9, iVar10);
	}
	else
	{
		bVar6 = func_925(iVar7, iVar8, iVar9, iVar10);
	}
	if (iVar1 == iVar4)
	{
		if (iVar5 < iVar2)
		{
			bVar6 = false;
		}
	}
	if (iVar4 < iVar1 && iVar4 > iVar3)
	{
		bVar6 = false;
	}
	iVar11 = Global_1357549->f_12[iParam0]->f_8;
	if (_0xfa3b61ec249b4674(iVar11) > 0f)
	{
		if (get_clock_hours() <= 20 && get_clock_hours() >= 7)
		{
			_0xf49574e2332a8f06(iVar11, 0f);
			_0x56e0735d6273b227(iVar11, 1);
		}
	}
	if (bVar6)
	{
		_0x56e0735d6273b227(iVar11, 0);
		if (_0xfa3b61ec249b4674(iVar11) < 1f)
		{
			if (Global_1357549->f_12[iParam0]->f_9 == 1)
			{
				fVar12 = (func_169(&(Global_1357549->f_12[iParam0]->f_11)) / fVar0);
				if (fVar12 > 1f)
				{
					fVar12 = 1f;
				}
				_0xf49574e2332a8f06(iVar11, fVar12);
				func_926(iVar11, fVar12);
				if (absf((_0xfa3b61ec249b4674(iVar11) - 1f)) < 0.005f)
				{
					_0xf49574e2332a8f06(iVar11, 1f);
				}
			}
			else
			{
				Global_1357549->f_12[iParam0]->f_9 = 1;
				func_175(&(Global_1357549->f_12[iParam0]->f_11), 0);
			}
		}
		else if (Global_1357549->f_12[iParam0]->f_9 == 1)
		{
			Global_1357549->f_12[iParam0]->f_9 = 0;
			func_176(&(Global_1357549->f_12[iParam0]->f_11));
			_0xf49574e2332a8f06(iVar11, 1f);
			func_926(iVar11, 1f);
		}
	}
	else if (_0xfa3b61ec249b4674(iVar11) > Global_1357549->f_12[iParam0]->f_6)
	{
		if (Global_1357549->f_12[iParam0]->f_9 == 1)
		{
			fVar12 = (1f - (func_169(&(Global_1357549->f_12[iParam0]->f_11)) / fVar0));
			if (fVar12 < 0f)
			{
				fVar12 = 0f;
			}
			_0xf49574e2332a8f06(iVar11, fVar12);
			func_926(iVar11, fVar12);
			if (absf((_0xfa3b61ec249b4674(iVar11) - Global_1357549->f_12[iParam0]->f_6)) < 0.005f)
			{
				_0xf49574e2332a8f06(iVar11, Global_1357549->f_12[iParam0]->f_6);
			}
		}
		else
		{
			Global_1357549->f_12[iParam0]->f_9 = 1;
			func_175(&(Global_1357549->f_12[iParam0]->f_11), 0);
		}
	}
	else if (Global_1357549->f_12[iParam0]->f_9 == 1)
	{
		Global_1357549->f_12[iParam0]->f_9 = 0;
		func_176(&(Global_1357549->f_12[iParam0]->f_11));
		_0x56e0735d6273b227(iVar11, 1);
		_0xf49574e2332a8f06(iVar11, Global_1357549->f_12[iParam0]->f_6);
		func_926(iVar11, Global_1357549->f_12[iParam0]->f_6);
	}
}

char* func_543(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 2:
			return "HIDEOUT_CLEMENS_POINT";
		case 3:
			return "HIDEOUT_SHADY_BELLE";
		default:
			break;
	}
	return "";
}

char* func_544(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_927(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_545(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

int func_546()
{
	return &Global_1899515;
}

bool func_547()
{
	return func_365(10, 0) >= 4;
}

void func_548(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_928(*iParam0);
	iVar1 = func_929(*iParam0);
	iVar2 = func_930(*iParam0);
	iVar3 = func_629(*iParam0);
	iVar4 = func_630(*iParam0);
	iVar5 = func_931(*iParam0);
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
	iVar6 = func_932(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_932(iVar1, iVar0);
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
	func_933(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_549(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_551((*uParam0)[iVar0], (*uParam1)[iVar0]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_550(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return true;
		case 3:
			return false;
		default:
			break;
	}
	return false;
}

bool func_551(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_253)
	{
		if (!is_bit_set(*uParam1, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_552(int iParam0, int iParam1)
{
	if (iParam1 == 7)
	{
		return false;
	}
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist(&(Global_1357549->f_3[iParam1])))
	{
		return false;
	}
	return is_entity_in_volume(iParam0, &(Global_1357549->f_3[iParam1]), true, 0);
}

void func_553(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_554(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_934(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_935(iParam0))
	{
		return false;
	}
	if (func_936(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_937(iParam0, 1)) || func_632(32768))
	{
		if (!func_937(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_938())
	{
		return false;
	}
	return true;
}

void func_555(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_556(int iParam0)
{
	return iParam0;
}

void func_557(int iParam0)
{
	if (!func_939(iParam0))
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

bool func_558(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_559(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
	func_940(iParam0, 1);
	func_941(iParam0, 1);
	func_942(iParam0, 128);
}

int func_560(char* sParam0, int iParam1, int iParam2, int iParam3)
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
	while (iVar0 < 48)
	{
		if (func_558(iVar0, 2))
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
		func_559(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 0, iParam2, 1704213876, 0);
		return iVar1;
	}
	return 0;
}

bool func_561(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_204(iParam0))
	{
		return false;
	}
	iVar0 = func_556(iParam0);
	return _uiprompt_has_standard_mode_completed((*Global_1945938)[iVar0]->f_3, iParam1);
}

void func_562(int iParam0, int iParam1)
{
	if (does_cam_exist(Local_18.f_3057[iParam0]->f_5))
	{
		if (is_cam_rendering(Local_18.f_3057[iParam0]->f_5))
		{
			render_script_cams(false, false, 3000, true, false, 0);
		}
		destroy_cam(Local_18.f_3057[iParam0]->f_5, false);
	}
	if (!does_cam_exist(Local_18.f_3057[iParam1]->f_5))
	{
		if (!func_206(Local_18.f_3057[iParam1]->f_9))
		{
			Local_18.f_3057[iParam1]->f_5 = create_camera_with_params(26379945, Local_18.f_3057[iParam1]->f_9, Local_18.f_3057[iParam1]->f_12, Local_18.f_3057[iParam1]->f_15, false, 2);
		}
	}
	if (does_cam_exist(Local_18.f_3057[iParam1]->f_5))
	{
		if (!is_cam_rendering(Local_18.f_3057[iParam1]->f_5))
		{
			set_cam_active(Local_18.f_3057[iParam1]->f_5, true);
			render_script_cams(true, false, 3000, true, false, 0);
		}
	}
	Local_18.f_3057[iParam0]->f_3 = 3;
	Local_18.f_3057[iParam1]->f_3 = 2;
	if (func_204(Local_18.f_3057[iParam0]->f_2))
	{
		func_205(&(Local_18.f_3057[iParam0]->f_2), 1, 1);
	}
	if (func_204(Local_18.f_3057[iParam0]->f_1))
	{
		func_205(&(Local_18.f_3057[iParam0]->f_1), 1, 1);
	}
	func_214(iParam1);
	func_216(iParam1);
	_uiprompt_set_ambient_group_this_frame(Global_35, 1f, 2, 1, 799218720, Local_18.f_3057[iParam1]->f_20, 0);
}

char* func_563()
{
	return "SHOP_BACK";
}

int func_564(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
	while (iVar0 < 48)
	{
		if (func_558(iVar0, 2))
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
		func_559(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

int func_565()
{
	if (!func_487((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_487((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_487((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_487((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_487((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_487((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_487((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

int func_566()
{
	iVar0 = func_399();
	iVar1 = func_943(iVar0);
	if (!is_model_valid(iVar0))
	{
		return 0;
	}
	if (!func_871(iVar1, 0))
	{
		return 0;
	}
	if (!func_944(iVar1))
	{
		return 0;
	}
	Var2 = { func_805(0) };
	Var2.f_4 = -352578118;
	Var7 = { func_945(iVar1, Var2, Var2.f_4, 0) };
	if (!func_946(iVar1, &Var7, &Var2, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_567(int iParam0)
{
	iVar0 = 1;
	fVar1 = _get_ped_face_feature(iParam0, 41611);
	if (fVar1 == 1f)
	{
		iVar0 = 2;
	}
	return iVar0;
}

int func_568(int iParam0)
{
	iVar0 = get_entity_model(iParam0);
	iVar1 = func_943(iVar0);
	if (!func_871(iVar1, 0))
	{
		return 0;
	}
	if (!func_944(iVar1))
	{
		return 0;
	}
	Var2 = { func_805(0) };
	Var2.f_4 = -352578118;
	if (func_947(iVar1, &Var2, 1, 0, 0))
	{
		return 0;
	}
	if (!func_948(iVar1, &uVar7, &Var2, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

bool func_569(int iParam0)
{
	func_949(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_570(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_1327590->f_19547)
	{
		Global_1327590->f_19547[iParam0]->f_4 = 1;
	}
}

bool func_571(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

void func_572(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_573(int iParam0, int iParam1)
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

Vector3 func_574(int iParam0)
{
	if (!func_950(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2947.055f, 1320.15f, 43.8203f;
		case 2:
			return 2939.063f, 1287.116f, 43.6529f;
		case 3:
			return 2932.97f, 1282.56f, 43.67f;
		case 1:
			return 2947.64f, 1344.901f, 43.899f;
		case 99:
			return -5227.357f, -3470.067f, -20.49293f;
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
		case 7:
			return -784.49f, -1321.95f, 42.88f;
		case 10:
			return -753.4219f, -1284.24f, 43.20049f;
		case 9:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.03f, -1327.09f, 42.97f;
		case 15:
			return -875.02f, -1326.71f, 42.97f;
		case 17:
			return -762.0716f, -1293.549f, 42.8355f;
		case 12:
			return -813.6f, -1373.8f, 44.2f;
		case 16:
			return -805.72f, -1330.5f, 42.67f;
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
		case 20:
			return 1521.91f, 441.15f, 89.68f;
		case 21:
			return 1523.63f, 442.65f, 89.68f;
		case 22:
			return 2161.5f, -618.5f, 43f;
		case 23:
			return -1092.88f, -575.69f, 81.41f;
		case 24:
			return -1094.35f, -577.48f, 81.41f;
		case 25:
			return 1294.084f, -1303.102f, 76.0418f;
		case 26:
			return 1297.423f, -1278.412f, 75.65752f;
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
		case 28:
			return 1329.755f, -1294.218f, 76.0092f;
		case 29:
			return 1323.734f, -1321.775f, 77.8924f;
		case 30:
			return 1226.71f, -1295.08f, 75.9f;
		case 31:
			return 1230.34f, -1298.578f, 75.9027f;
		case 32:
			return 1332.55f, -1298.679f, 75.35602f;
		case 35:
			return 1209.053f, -193.1814f, 101.9785f;
		case 36:
			return 2644.188f, -1292.507f, 51.2496f;
		case 37:
			return 2657.466f, -1180.96f, 53.2785f;
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
		case 41:
			return 2859.51f, -1202.16f, 48.59f;
		case 42:
			return 2825.607f, -1318.207f, 45.7557f;
		case 43:
			return 2718f, -1287f, 49.6f;
		case 44:
			return 2508.212f, -1449.654f, 48.41523f;
		case 45:
			return 2748.811f, -1398.277f, 45.18309f;
		case 46:
			return 2747.824f, -1396.384f, 45.18309f;
		case 47:
			return 2555.09f, -1166.97f, 52.68f;
		case 48:
			return 2842.45f, -1227.66f, 46.66f;
		case 49:
			return 2817.64f, -1325.011f, 47.00512f;
		case 50:
			return 2836.992f, -1305.805f, 45.6964f;
		case 55:
			return 2832.02f, -1225.563f, 46.6422f;
		case 54:
			return 2734.174f, -1119.755f, 50.10792f;
		case 51:
			return 2683.84f, -1399.642f, 45.37881f;
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
		case 61:
			return -1790f, -388.27f, 159.33f;
		case 62:
			return -1818.99f, -370.94f, 162.3f;
		case 63:
			return -1819.88f, -561.8194f, 157.2323f;
		case 65:
			return -1763.78f, -385.1118f, 156.7401f;
		case 64:
			return -1773.314f, -393.9122f, 155.5647f;
		case 68:
			return -307.9643f, 773.6048f, 117.7031f;
		case 69:
			return -306.3f, 815.08f, 117.98f;
		case 70:
			return 0f, 0f, 0f;
		case 72:
			return -338.8647f, 767.4334f, 115.5628f;
		case 73:
			return -287.9538f, 804.0544f, 118.3859f;
		case 74:
			return -324f, 803.72f, 116.88f;
		case 75:
			return -281.82f, 778.97f, 118.5f;
		case 76:
			return -369.4457f, 786.6935f, 115.9904f;
		case 77:
			return -178.0316f, 628.0621f, 113.0896f;
		case 78:
			return -175.0377f, 631.7999f, 113.0896f;
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
		case 79:
			return -325.532f, 773.6285f, 117.5038f;
		case 82:
			return 3025.786f, 562.7253f, 43.7167f;
		case 86:
			return 2986.224f, 569.9468f, 43.62284f;
		case 85:
			return 2986.94f, 574.9f, 43.64f;
		case 84:
			return 2967.273f, 796.7416f, 52.5948f;
		case 87:
			return -1302.951f, 394.6608f, 94.3817f;
		case 89:
			return -1300.83f, 399.7599f, 94.38248f;
		case 88:
			return -1299.891f, 401.3615f, 94.38248f;
		case 93:
			return -5518.071f, -2906.217f, -2.7513f;
		case 90:
			return -5487.197f, -2939.038f, -1.3872f;
		case 91:
			return -5507.993f, -2964.844f, -1.6215f;
		case 92:
			return -5509.019f, -2947.435f, -2.8934f;
		case 94:
			return -5520.701f, -3044.427f, -1.40419f;
		case 95:
			return -3687.3f, -2623.39f, -14.44f;
		case 4:
			return -2842.211f, 137.3398f, 183.8268f;
		case 5:
			return -1005.934f, -540.8262f, 97.9502f;
		case 34:
			return 2076.835f, 1000.829f, 111.4973f;
		case 67:
			return -2251.034f, -1916.911f, 115.9488f;
		case 56:
			return -142.072f, -23.5242f, 95.0883f;
		case 57:
			return 675.3091f, -1251.233f, 43.0152f;
		case 58:
			return 1875.2f, -1859.182f, 41.8f;
		case 59:
			return 2366.084f, 1347.122f, 105.1305f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_575(int iParam0)
{
	if (!func_950(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2941.929f, 1320.927f, 46.2401f;
		case 2:
			return 2936.9f, 1281.7f, 43.6529f;
		case 3:
			return 2931.596f, 1282.839f, 44.6783f;
		case 99:
			return -5227.45f, -3468.19f, -20.49293f;
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
		case 10:
			return -753.4219f, -1285.01f, 43.20049f;
		case 7:
			return -785.1682f, -1324.179f, 46.3505f;
		case 9:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.0186f, -1328.058f, 44.00846f;
		case 17:
			return -764.2743f, -1292.576f, 44.3442f;
		case 12:
			return -813.7f, -1374.1f, 44.2f;
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
		case 20:
			return 1522.305f, 442.8598f, 89.6785f;
		case 21:
			return 1525.407f, 442.7721f, 90.6467f;
		case 22:
			return 2161.5f, -618.5f, 43f;
		case 23:
			return -1092.88f, -575.69f, 81.41f;
		case 24:
			return -1094.41f, -577.51f, 81.41f;
		case 25:
			return 1294.084f, -1303.102f, 76.0418f;
		case 26:
			return 1297.423f, -1278.412f, 75.65752f;
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
		case 28:
			return 1327.036f, -1292.386f, 77.2488f;
		case 29:
			return 1326.268f, -1323.129f, 78.1929f;
		case 30:
			return 1228.508f, -1296.796f, 77.6347f;
		case 31:
			return 1232.206f, -1300.197f, 77.8496f;
		case 35:
			return 1209.053f, -193.1814f, 101.9785f;
		case 37:
			return 2657.466f, -1180.96f, 53.2785f;
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
		case 41:
			return 2851.2f, -1202.3f, 49.046f;
		case 42:
			return 2828.087f, -1315.179f, 47.4196f;
		case 43:
			return 2714.586f, -1286.893f, 50.3211f;
		case 44:
			return 2508.212f, -1449.654f, 48.41523f;
		case 45:
			return 2747.906f, -1397.089f, 47.1107f;
		case 46:
			return 2746.599f, -1394.278f, 46.918f;
		case 47:
			return 2554.144f, -1166.025f, 54.3474f;
		case 48:
			return 2842.45f, -1227.66f, 46.66f;
		case 49:
			return 2817.64f, -1325.011f, 47.00512f;
		case 50:
			return 2836.992f, -1305.805f, 45.6964f;
		case 55:
			return 2832.02f, -1225.563f, 46.6422f;
		case 54:
			return 2734.174f, -1119.755f, 50.10792f;
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
		case 61:
			return -1792.444f, -385.412f, 160.6924f;
		case 62:
			return -1812.343f, -370.618f, 161.8814f;
		case 63:
			return -1819.88f, -561.8194f, 157.2323f;
		case 65:
			return -1763.78f, -385.1118f, 156.7401f;
		case 68:
			return -307.9643f, 773.6048f, 117.7031f;
		case 69:
			return -308.18f, 812.19f, 117.99f;
		case 70:
			return 0f, 0f, 0f;
		case 72:
			return -338.8647f, 767.4334f, 115.5628f;
		case 73:
			return -286.9307f, 809.6714f, 120.6565f;
		case 74:
			return -323.5066f, 799.6924f, 118.973f;
		case 75:
			return -279.273f, 781.7448f, 118.7954f;
		case 76:
			return -369.4457f, 786.6935f, 115.9904f;
		case 77:
			return -176.3f, 630.1f, 115.331f;
		case 78:
			return -174.0662f, 633.9207f, 115.109f;
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
		case 79:
			return -326.1232f, 771.9214f, 116.436f;
		case 1:
			return 2947.64f, 1344.901f, 43.899f;
		case 51:
			return 2683.84f, -1399.642f, 45.37881f;
		case 16:
			return -805.72f, -1330.5f, 42.67f;
		case 64:
			return -1773.314f, -393.9122f, 155.5647f;
		case 32:
			return 1332.55f, -1298.679f, 75.35602f;
		case 82:
			return 3023.859f, 561.206f, 46.7352f;
		case 86:
			return 2986.003f, 567.9055f, 45.337f;
		case 84:
			return 2967.273f, 796.7416f, 52.5948f;
		case 87:
			return -1302.951f, 394.6608f, 94.3817f;
		case 89:
			return -1300.283f, 400.4247f, 94.3817f;
		case 88:
			return -1299.608f, 401.5503f, 94.97269f;
		case 93:
			return -5518.071f, -2906.217f, -2.7513f;
		case 90:
			return -5488.293f, -2937.662f, 0.6299f;
		case 91:
			return -5506.691f, -2968.343f, -1.2586f;
		case 92:
			return -5509.019f, -2947.435f, -2.8934f;
		case 94:
			return -5520.701f, -3044.427f, -1.40419f;
		case 95:
			return -3684.342f, -2626.877f, -12.5497f;
		case 4:
			return -2842.211f, 137.3398f, 183.8268f;
		case 5:
			return -1005.934f, -540.8262f, 97.9502f;
		case 34:
			return 2076.835f, 1000.829f, 111.4973f;
		case 67:
			return -2251.034f, -1916.911f, 115.9488f;
		case 56:
			return -142.072f, -23.5242f, 95.0883f;
		case 57:
			return 675.3091f, -1251.233f, 43.0152f;
		case 58:
			return 1875.2f, -1859.182f, 41.8f;
		case 59:
			return 2366.084f, 1347.122f, 105.1305f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_576(int iParam0, int iParam1)
{
	return func_852(Global_1914319->f_3[iParam0]->f_5, iParam1);
}

int func_577(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 43:
		case 61:
		case 73:
			return 1;
	}
	return 0;
}

int func_578(int iParam0, int iParam1)
{
	if (iParam1 > 25)
	{
		return 0;
	}
	switch (iParam1)
	{
		case -1:
		case 1:
		case 2:
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
			return 0;
		case 4:
			if (iParam0 == 41)
			{
				return 1;
			}
			return 0;
		default:
			break;
	}
	return 1;
}

int func_579(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = get_hash_key(&((*Global_1835011)[iParam0]->f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = get_hash_key(&((*Global_1347702)[iParam0]->f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_951())
	{
		iVar2 = func_951();
	}
	iVar5 = func_952(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_865(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_865(iVar6) == 0)
			{
				return func_953(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_865(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_865(iVar6) == 0)
			{
				return func_953(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0] == 0)
			{
				return func_953(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

float func_580(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 75f;
		case 9:
			return 25f;
		case 10:
			return 25f;
		case 22:
			return 55f;
	}
	return 12.5f;
}

bool func_581(int iParam0, int iParam1)
{
	if (func_576(iParam0, 16384) && !func_954(iParam0, 1))
	{
		return true;
	}
	if (!func_402(iParam1))
	{
		return false;
	}
	iVar0 = func_955(iParam1);
	if (!does_entity_exist(iVar0))
	{
	}
	if (_does_volume_exist(Global_1914319->f_3[iParam0]->f_25))
	{
		iVar1 = _0x7fd78dfd0c5d7b9b(Global_1914319->f_3[iParam0]->f_25);
		if (does_entity_exist(iVar1))
		{
			if (iVar1 != iVar0)
			{
				_0x6d5f9e69ba1be783(Global_1914319->f_3[iParam0]->f_25);
			}
		}
		func_956(iParam1, Global_1914319->f_3[iParam0]->f_25, 1);
		_0x4a8fefc43fd8ac9b(Global_1914319->f_3[iParam0]->f_25, 1, 1);
	}
	if (_does_volume_exist(Global_1914319->f_3[iParam0]->f_28))
	{
		iVar2 = _0x7fd78dfd0c5d7b9b(Global_1914319->f_3[iParam0]->f_28);
		if (does_entity_exist(iVar2))
		{
			if (iVar2 != iVar0)
			{
				_0x6d5f9e69ba1be783(Global_1914319->f_3[iParam0]->f_28);
			}
		}
		func_956(iParam1, Global_1914319->f_3[iParam0]->f_28, 1);
		_0x4a8fefc43fd8ac9b(Global_1914319->f_3[iParam0]->f_28, 0, 1);
	}
	Global_1914319->f_3[iParam0]->f_21 = iParam1;
	Global_1914319->f_3[iParam0]->f_23 = iVar0;
	return true;
}

void func_582(int iParam0)
{
	switch (iParam0)
	{
		case 92:
			StringCopy(Global_1393529->f_288[2], "0507_U_M_M_VhtStationClerk_01", 64);
			StringCopy(Global_1393529->f_288[1], "0507_U_M_M_VhtStationClerk_01", 64);
			return;
		case 38:
			StringCopy(Global_1393529->f_288[2], "0078_U_M_M_BlWTrainStationWorker_01", 64);
			StringCopy(Global_1393529->f_288[1], "0078_U_M_M_BlWTrainStationWorker_01", 64);
			return;
		case 26:
			StringCopy(Global_1393529->f_288[2], "0442_U_M_M_StrFreightStationOwner_01", 64);
			StringCopy(Global_1393529->f_288[1], "0442_U_M_M_StrFreightStationOwner_01", 64);
			return;
		case 105:
			StringCopy(Global_1393529->f_288[2], "0406_U_M_M_RhdTrainStationWorker_01", 64);
			StringCopy(Global_1393529->f_288[1], "0406_U_M_M_RhdTrainStationWorker_01", 64);
			return;
		case 76:
			if (!func_782(29))
			{
				if (func_143(29) && func_565() <= func_957(29))
				{
					StringCopy(Global_1393529->f_288[2], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					StringCopy(Global_1393529->f_288[1], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					return;
				}
			}
			if (!func_782(3))
			{
				if (func_143(3) && func_565() <= func_957(3))
				{
					StringCopy(Global_1393529->f_288[2], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					StringCopy(Global_1393529->f_288[1], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					return;
				}
			}
			if (!func_782(25))
			{
				if (func_143(25) && func_565() <= func_957(25))
				{
					StringCopy(Global_1393529->f_288[2], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
					StringCopy(Global_1393529->f_288[1], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
					return;
				}
			}
			break;
	}
	iVar0 = get_random_int_in_range(100, 200);
	iVar1 = get_random_int_in_range(0, iVar0);
	if (iVar1 > 80)
	{
		StringCopy(Global_1393529->f_288[2], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
		StringCopy(Global_1393529->f_288[1], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
	}
	else if (iVar1 < 40)
	{
		StringCopy(Global_1393529->f_288[2], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
		StringCopy(Global_1393529->f_288[1], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
	}
	else
	{
		StringCopy(Global_1393529->f_288[2], "0832_S_M_M_TrainStationWorker_01_WHITE_01", 64);
		StringCopy(Global_1393529->f_288[1], "0832_S_M_M_TrainStationWorker_01_WHITE_01", 64);
	}
}

void func_583(int iParam0)
{
	if (iParam0 == 76)
	{
		StringCopy(Global_1393529->f_288[10], "1025_U_M_M_ValButcher_01", 64);
	}
	else if (iParam0 == 115)
	{
		StringCopy(Global_1393529->f_288[10], "1086_U_M_M_TumButcher_01", 64);
	}
	else
	{
		switch (get_random_int_in_range(0, 6))
		{
			case 0:
			case 3:
				StringCopy(Global_1393529->f_288[10], "0842_S_M_M_UniButchers_01_WHITE_01", 64);
				break;
			case 1:
			case 4:
				StringCopy(Global_1393529->f_288[10], "0843_S_M_M_UniButchers_01_WHITE_02", 64);
				break;
			case 2:
			case 5:
				StringCopy(Global_1393529->f_288[10], "0844_S_M_M_UniButchers_01_WHITE_03", 64);
				break;
		}
	}
}

void func_584()
{
	StringCopy(Global_1393529->f_288[18], "1035_U_M_M_SDCUSTOMVENDOR_01", 64);
}

void func_585()
{
	iVar0 = get_random_int_in_range(100, 200);
	iVar1 = get_random_int_in_range(0, iVar0);
	if (iVar1 > 80)
	{
		StringCopy(Global_1393529->f_288[9], "0825_S_M_M_LiveryWorker_01_WHITE_01", 64);
	}
	else if (iVar1 < 40)
	{
		StringCopy(Global_1393529->f_288[9], "0826_S_M_M_LiveryWorker_01_WHITE_02", 64);
	}
	else
	{
		StringCopy(Global_1393529->f_288[9], "0827_S_M_M_LiveryWorker_01_WHITE_03", 64);
	}
}

void func_586()
{
	switch (get_random_int_in_range(0, 6))
	{
		case 0:
		case 3:
			StringCopy(Global_1393529->f_288[22], "0829_S_M_Y_NewspaperBoy_01_WHITE_01", 64);
			break;
		case 1:
		case 4:
			StringCopy(Global_1393529->f_288[22], "0830_S_M_Y_NewspaperBoy_01_WHITE_02", 64);
			break;
		case 2:
		case 5:
			StringCopy(Global_1393529->f_288[22], "0831_S_M_Y_NewspaperBoy_01_WHITE_03", 64);
			break;
	}
}

void func_587(int iParam0)
{
	if (!func_950(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 4:
		case 5:
		case 18:
		case 22:
		case 27:
		case 34:
		case 38:
		case 55:
		case 60:
		case 67:
		case 72:
		case 92:
			if (!func_590(iParam0, 2))
			{
				func_673(iParam0, 2);
			}
			break;
	}
}

void func_588(int iParam0, int iParam1)
{
	if (!func_571(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 - (Global_1914319->f_3[iParam0]->f_7 && iParam1));
}

void func_589(int iParam0, int iParam1)
{
	if (!func_571(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 || iParam1);
}

bool func_590(int iParam0, int iParam1)
{
	if (!func_950(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

bool func_591(int iParam0)
{
	if (!func_950(iParam0))
	{
		return false;
	}
	if (iParam0 == 41 || iParam0 == 82)
	{
		return false;
	}
	iVar0 = func_958(iParam0);
	if ((((((((((iVar0 == 10 || iVar0 == 4) || iVar0 == 17) || iVar0 == 31) || iVar0 == 18) || iVar0 == 19) || iVar0 == 22) || iVar0 == 12) || iVar0 == 13) || iVar0 == 14) || iVar0 == 32)
	{
		return true;
	}
	return false;
}

bool func_592(int iParam0, int iParam1)
{
	if (!func_950(iParam0))
	{
		return false;
	}
	return (Global_20710.f_2246[iParam0] && iParam1) != 0;
}

void func_593(int iParam0, int iParam1)
{
	if (!func_950(iParam0))
	{
	}
	else
	{
		Global_20710.f_2246[iParam0] = (Global_20710.f_2246[iParam0] || iParam1);
	}
}

void func_594(int iParam0, int iParam1)
{
	if (!func_950(iParam0))
	{
	}
	else
	{
		Global_20710.f_2246[iParam0] = (&Global_20710.f_2246[iParam0] - (Global_20710.f_2246[iParam0] && iParam1));
	}
}

void func_595(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_1914319->f_15922 = iParam0;
	}
}

void func_596(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_253)
	{
		func_959(iVar0, uParam0);
		iVar0++;
	}
	clear_bit(&(uParam0->f_254), 4);
}

void func_597(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_253)
	{
		set_model_as_no_longer_needed(uParam0->f_9[iVar0]->f_1);
		iVar0++;
	}
	clear_bit(&(uParam0->f_254), 3);
}

void func_598(var uParam0)
{
	_datafile_unload(uParam0->f_2);
	clear_bit(&(uParam0->f_254), 1);
	clear_bit(&(uParam0->f_254), 2);
}

bool func_599(int iParam0, int iParam1)
{
	if (iParam0 == 6)
	{
		if (iParam1 == 0)
		{
			if (!_is_imap_active(-1437554707))
			{
				return false;
			}
		}
	}
	return true;
}

int func_600(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_365(4, 0) - 1);
		case 1:
			return (func_365(3, 0) - 1);
		case 2:
			return (func_365(5, 0) - 1);
		case 3:
			return (func_365(10, 0) - 1);
		default:
			break;
	}
	return 0;
}

void func_601(int iParam0, var uParam1)
{
	iVar0 = func_960(iParam0);
	if (!_0x4f9e3ed7617123ac(iVar0))
	{
		return;
	}
	uParam1->f_2 = _0xd97d8d905f1562f2(iVar0);
	set_bit(&(uParam1->f_254), 1);
}

bool func_602(var uParam0)
{
	return _0x603ac35fd4602c76(uParam0->f_2);
}

void func_603(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (iParam2 < 0)
	{
		return;
	}
	_datafile_register_query(uParam3->f_2, 0, "Supplies");
	_datafile_register_query(uParam3->f_2, 1, "Camp");
	_datafile_register_query(uParam3->f_2, 2, "Camp(%i)");
	_datafile_register_query(uParam3->f_2, 3, "UpgradeLevel");
	_datafile_register_query(uParam3->f_2, 4, "UpgradeLevel(%i)");
	_datafile_register_query(uParam3->f_2, 5, "Item");
	_datafile_register_query(uParam3->f_2, 6, "Item(%i)");
	_datafile_register_query(uParam3->f_2, 7, ":id");
	_datafile_register_query(uParam3->f_2, 8, ":rootPosition");
	_datafile_register_query(uParam3->f_2, 9, ":rootRotation");
	_datafile_register_query(uParam3->f_2, 10, ":model");
	_datafile_register_query(uParam3->f_2, 11, ":offset");
	_datafile_register_query(uParam3->f_2, 12, ":rotation");
	_datafile_register_query(uParam3->f_2, 13, ":unlock");
	Var0 = uParam3->f_2;
	Var0.f_1 = 0;
	Var0.f_2 = 0;
	if (!_datafile_get_data_node_index(&uVar5, &Var0))
	{
		return;
	}
	Var0.f_1 = uVar5;
	Var0.f_2 = 1;
	iVar6 = _datafile_get_num_nodes(&Var0);
	if (iVar6 == 0)
	{
		return;
	}
	iVar10 = func_961(iParam0);
	iVar11 = 0;
	while (iVar11 < iVar6)
	{
		Var0.f_1 = uVar5;
		Var0.f_2 = 2;
		Var0.f_3 = iVar11;
		if (!_datafile_get_data_node_index(&uVar7, &Var0))
		{
		}
		else
		{
			iVar12 = 0;
			Var0.f_1 = uVar7;
			Var0.f_2 = 7;
			if (!_datafile_get_hash(&iVar12, &Var0))
			{
			}
			else if (iVar12 != iVar10)
			{
			}
			else
			{
				Var0.f_1 = uVar7;
				Var0.f_2 = 8;
				if (!_datafile_get_vector(&(uParam3->f_3), &Var0))
				{
				}
				Var0.f_1 = uVar7;
				Var0.f_2 = 9;
				if (!_datafile_get_vector(&(uParam3->f_3.f_3), &Var0))
				{
				}
				Var0.f_1 = uVar7;
				Var0.f_2 = 3;
				iVar13 = _datafile_get_num_nodes(&Var0);
				if (iVar13 <= iParam2)
				{
					return;
				}
				Var0.f_1 = uVar7;
				Var0.f_2 = 4;
				Var0.f_3 = iParam2;
				if (!_datafile_get_data_node_index(&uVar8, &Var0))
				{
					return;
				}
				Var0.f_1 = uVar8;
				Var0.f_2 = 5;
				iVar14 = _datafile_get_num_nodes(&Var0);
				if (iVar14 == 0)
				{
				}
				if (iVar14 > 27)
				{
				}
				iVar15 = 0;
				while (iVar15 < iVar14)
				{
					if (iVar15 >= 27)
					{
					}
					else
					{
						Var0.f_1 = uVar8;
						Var0.f_2 = 6;
						Var0.f_3 = iVar15;
						if (!_datafile_get_data_node_index(&uVar9, &Var0))
						{
							uParam3->f_9[iVar15]->f_1 = 0;
						}
						else
						{
							iVar16 = 0;
							Var0.f_1 = uVar9;
							Var0.f_2 = 10;
							if (!_datafile_get_hash(&iVar16, &Var0))
							{
							}
							else
							{
								uParam3->f_9[iVar15]->f_1 = iVar16;
							}
							Var0.f_1 = uVar9;
							Var0.f_2 = 11;
							if (!_datafile_get_vector(&(uParam3->f_9[iVar15]->f_2), &Var0))
							{
							}
							Var0.f_1 = uVar9;
							Var0.f_2 = 12;
							if (!_datafile_get_vector(&(uParam3->f_9[iVar15]->f_5), &Var0))
							{
							}
							Var0.f_1 = uVar9;
							Var0.f_2 = 13;
							if (_datafile_get_hash(&(uParam3->f_9[iVar15]->f_8), &Var0))
							{
							}
							else
							{
								uParam3->f_9[iVar15]->f_8 = 0;
							}
						}
						iVar15++;
					}
				}
				*uParam3 = iParam1;
				uParam3->f_1 = iParam2;
				uParam3->f_253 = iVar14;
				set_bit(&(uParam3->f_254), 2);
				set_bit(&(uParam3->f_254), 0);
			}
			else
			{
				iVar11++;
			}
		}
	}
}

void func_604(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_253)
	{
		if (is_bit_set(*uParam1, iVar0))
		{
		}
		else if (uParam0->f_9[iVar0]->f_1 == 0)
		{
		}
		else if (uParam0->f_9[iVar0]->f_8 != 0)
		{
			if (!func_606(uParam0->f_9[iVar0]->f_8))
			{
			}
			else
			{
				request_model(uParam0->f_9[iVar0]->f_1, false);
			}
			iVar0++;
			set_bit(&(uParam0->f_254), 3);
		}
	}
}

void func_605(var uParam0, var uParam1, int iParam2)
{
	if (*iParam2)
	{
		return;
	}
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < uParam0->f_253)
	{
		if (is_bit_set(*uParam1, iVar1))
		{
		}
		else if (is_bit_set(uParam0->f_255, iVar1))
		{
		}
		else if (uParam0->f_9[iVar1]->f_8 != 0)
		{
			if (!func_606(uParam0->f_9[iVar1]->f_8))
			{
			}
			else if (uParam0->f_9[iVar1]->f_1 == 0)
			{
			}
			else if (!has_model_loaded(uParam0->f_9[iVar1]->f_1))
			{
				request_model(uParam0->f_9[iVar1]->f_1, false);
				bVar0 = false;
			}
			else
			{
				func_962(iVar1, uParam0);
				*iParam2 = 1;
				if (iVar1 != (uParam0->f_253 - 1))
				{
					bVar0 = false;
				}
			}
			else
			{
				iVar1++;
			}
			if (bVar0)
			{
				set_bit(&(uParam0->f_254), 4);
				return;
			}
		}
	}
}

bool func_606(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_40.f_4283.f_415.f_24)
	{
		if (iParam0 == &Global_40.f_4283.f_415.f_6[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_607()
{
	Var3 = { func_963(0, 1426626782, -1591664384, -1591664384, 0, 0) };
	if (func_964(&Var3, &iVar1, &iVar2, 0))
	{
		Var17.f_9 = -1591664384;
		iVar31 = 0;
		while (iVar31 < iVar2)
		{
			if (func_965(&Var17, iVar31, iVar1, iVar2))
			{
				if (func_861(Var17.f_4))
				{
					iVar0 = (iVar0 + Var17.f_11);
					if (func_966(Var17.f_4))
					{
						iVar0 = (iVar0 - 1);
					}
					if (iVar0 > 30)
					{
						iVar32 = (iVar0 - 30);
						func_967(Var17.f_4, 2, iVar32, -142743235);
						iVar0 = 30;
					}
				}
			}
			iVar31++;
		}
		func_968(iVar1);
	}
	return iVar0;
}

float func_608()
{
	return 5f;
}

float func_609(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_610()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

bool func_611(int iParam0)
{
	if (!func_402(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_612(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_402(iParam0))
	{
		return;
	}
	if (!func_368(iParam0, 1))
	{
		return;
	}
	if (!func_368(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_611(iParam0)) && func_969(iParam0))
	{
		return;
	}
	func_765(iParam0, 1);
	func_766(iParam0);
	if (func_760(func_403(iParam0)))
	{
		iVar0 = func_761(iParam0);
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
		func_765(iParam0, 16);
	}
	if (func_368(iParam0, 128) && !bParam3)
	{
		func_369(iParam0, 0);
	}
}

void func_613(int iParam0, bool bParam1)
{
	if (!func_950(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_590(iParam0, 1024))
		{
			func_673(iParam0, 1024);
			_0x9b4e793b1cb6550a();
		}
	}
	else if (func_590(iParam0, 1024))
	{
		func_672(iParam0, 1024);
		_0x9b4e793b1cb6550a();
	}
	func_970(iParam0);
}

int func_614(int iParam0)
{
	return Global_1914319->f_3[iParam0]->f_408;
}

void func_615(int iParam0)
{
	if (func_971(iParam0) && func_972())
	{
		remove_door_from_system(iParam0);
	}
}

void func_616(int iParam0)
{
	Global_1914319->f_3[iParam0]->f_7 = 0;
}

void func_617(int iParam0, bool bParam1)
{
	if (!func_571(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (bParam1)
	{
		set_bit(Global_1914319->f_15924[iVar1], iVar2);
	}
	else
	{
		clear_bit(Global_1914319->f_15924[iVar1], iVar2);
	}
}

bool func_618(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_142())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

bool func_619()
{
	if (Global_16)
	{
		return false;
	}
	if (!func_973())
	{
		return false;
	}
	if (_databinding_read_data_bool(Global_1934266->f_78.f_55))
	{
		return false;
	}
	if (func_126(-1 ^ 9, 0, 1))
	{
		return false;
	}
	return true;
}

char* func_620(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!is_string_null_or_empty(&(Global_1894899->f_162)))
	{
		sVar0 = func_974(Global_1894899->f_162);
	}
	if (is_string_null_or_empty(sVar0) && bParam4)
	{
		sVar0 = func_976(func_975(Global_36));
	}
	if (is_string_null_or_empty(sVar0))
	{
		if (!func_977(iParam0) || func_649(45))
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
				case 29:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 30:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 31:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 32:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 120:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 121:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 124:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 123:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 125:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 33:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 34:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 35:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 36:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 114:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 116:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 115:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 37:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 38:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 39:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 40:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 50:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 43:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 41:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 45:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 48:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 54:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 56:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 49:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 57:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 59:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 60:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 61:
					sVar0 = "TOWN_MANICATO";
					break;
				case 126:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 127:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 62:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 64:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 65:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 66:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 67:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 68:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 69:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 70:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 72:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 74:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 75:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 76:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 77:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 78:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 79:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 82:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 80:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 81:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 83:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 86:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 87:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 88:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 89:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 92:
					sVar0 = "TOWN_VANHORN";
					break;
				case 117:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 118:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 119:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 93:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 94:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 95:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 96:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 98:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 99:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 100:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 102:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 104:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 105:
					sVar0 = "TOWN_RHODES";
					break;
				case 108:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 110:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 111:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 112:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 128:
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
				*bParam6 = 1;
				break;
			case -196675805:
				sVar0 = "WATER_AURORA_BASIN";
				*bParam6 = 1;
				break;
			case -1168459546:
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*bParam6 = 1;
				break;
			case 795414694:
				sVar0 = "WATER_BARROW_LAGOON";
				*bParam6 = 1;
				break;
			case -557290573:
				sVar0 = "DISTRICT_BAYOU_NWA";
				*bParam6 = 1;
				break;
			case -1073312073:
				sVar0 = "WATER_CAIRN_LAKE";
				*bParam6 = 1;
				break;
			case -804804953:
				sVar0 = "WATER_CATTAIL_POND";
				*bParam6 = 1;
				break;
			case 370072007:
				sVar0 = "WATER_DAKOTA_RIVER";
				*bParam6 = 1;
				break;
			case 1245451421:
				sVar0 = "WATER_DEADBOOT_CREEK";
				*bParam6 = 1;
				break;
			case -105598602:
				sVar0 = "WATER_ELYSIAN_POOL";
				*bParam6 = 1;
				break;
			case -1356490953:
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*bParam6 = 1;
				break;
			case -1276586360:
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*bParam6 = 1;
				break;
			case 1755369577:
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*bParam6 = 1;
				break;
			case 1175365009:
				sVar0 = "WATER_COTORRA_SPRINGS";
				*bParam6 = 1;
				break;
			case -1369817450:
				sVar0 = "WATER_LAKE_DON_JULIO";
				*bParam6 = 1;
				break;
			case 592454541:
				sVar0 = "WATER_LAKE_ISABELLA";
				*bParam6 = 1;
				break;
			case -2040708515:
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*bParam6 = 1;
				break;
			case -1410384421:
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*bParam6 = 1;
				break;
			case -1308233316:
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case 301094150:
				sVar0 = "WATER_MATTOCK_POND";
				*bParam6 = 1;
				break;
			case -811730579:
				sVar0 = "WATER_MOONSTONE_POND";
				*bParam6 = 1;
				break;
			case -1817904483:
				sVar0 = "WATER_OCREAGHS_RUN";
				*bParam6 = 1;
				break;
			case -1300497193:
				sVar0 = "WATER_OWANJILA";
				*bParam6 = 1;
				break;
			case 2005774838:
				sVar0 = "WATER_RINGNECK_CREEK";
				*bParam6 = 1;
				break;
			case -247856387:
				sVar0 = "WATER_SEA_OF_CORONADO";
				*bParam6 = 1;
				break;
			case -823661292:
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*bParam6 = 1;
				break;
			case -218679770:
				sVar0 = "WATER_SPIDER_GORGE";
				*bParam6 = 1;
				break;
			case -1287619521:
				sVar0 = "WATER_STILLWATER_CREEK";
				*bParam6 = 1;
				break;
			case -1781130443:
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case -261541730:
				sVar0 = "WATER_WHINYARD_STRAIT";
				*bParam6 = 1;
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
				*bParam6 = 1;
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
				*bParam6 = 1;
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

bool func_621(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_622(int iParam0)
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

int func_623(int iParam0)
{
	if (!func_621(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0]);
	}
	return &(Global_1058888->f_42266[iParam0]);
}

int func_624(int iParam0)
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

char* func_625(int iParam0)
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

bool func_626(int iParam0, int iParam1)
{
	if (!func_359(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

bool func_627(int iParam0, int iParam1)
{
	if (!func_621(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_358[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1058888->f_42266[iParam0]->f_5 && iParam1) != 0;
}

bool func_628(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

int func_629(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_630(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

float func_631(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

bool func_632(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_633(int iParam0)
{
	if (func_977(iParam0))
	{
		if (!func_649(45))
		{
			return false;
		}
	}
	iVar0 = func_370(iParam0);
	if (func_736())
	{
		if (!func_487((*Global_1835011)[3]->f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return true;
}

void func_634(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_635(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_636(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_637(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_638(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_639()
{
	return Global_1310750->f_16037;
}

bool func_640(int iParam0, int iParam1)
{
	if (!func_637(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_641(int iParam0)
{
	if (!func_637(iParam0))
	{
		return false;
	}
	if (func_978(64) && func_979(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_642(int iParam0)
{
	if (!func_637(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_643(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_637(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_980(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

int func_644(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_775(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_645(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_204(iParam0))
	{
		return;
	}
	iVar0 = func_556(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

int func_646(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_871(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_981(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_982(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_983(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_490(bParam2), iParam0, 0);
	return iVar2;
}

void func_647(int iParam0, int iParam1)
{
	Global_1357549->f_1672 = iParam0;
	Global_1357549->f_1673 = iParam1;
}

Vector3 func_648(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -135.483f, -34.0573f, 95.0734f;
		case 2:
			return 651.8384f, -1257.425f, 42.7455f;
		case 3:
			return 1889.356f, -1866.249f, 47.2413f;
	}
	return 0f, 0f, 0f;
}

bool func_649(int iParam0)
{
	if (!func_984(iParam0))
	{
		return false;
	}
	return func_985(iParam0);
}

void func_650(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
	if (func_204(iParam0->f_6))
	{
		func_205(&(iParam0->f_6), 1, 1);
	}
	if (func_204(iParam0->f_1))
	{
		func_205(&(iParam0->f_1), 1, 1);
	}
}

void func_651(int iParam0, int iParam1)
{
	if (func_367(iParam1))
	{
		if (func_986(Global_1934051->f_33))
		{
			iVar0 = func_987(iParam1);
			if (iVar0 != 0)
			{
				_blip_set_modifier(iParam0, iVar0);
			}
		}
	}
}

void func_652(int* iParam0, var uParam1)
{
	if (func_206(func_988()) || func_989(1) == 0)
	{
		return;
	}
	sVar0 = "script@ambient@shop@CATALOG_PLAYER";
	sVar1 = "PBL_ENTER";
	sVar2 = "PBL_FLIP_L1";
	sVar3 = "PBL_FLIP_R1";
	if (is_bit_set(Global_1357549->f_1893, 4))
	{
		sVar4 = "PBL_EXIT_SECTION";
	}
	else
	{
		sVar4 = "PBL_EXIT_INDEX";
	}
	sVar5 = "ledger_ct";
	sVar6 = func_990();
	sVar7 = func_991(iParam0->f_35.f_491.f_1);
	if (!does_entity_exist(iParam0->f_864))
	{
		request_model(iParam0->f_33, false);
		if (has_model_loaded(iParam0->f_33))
		{
			iParam0->f_864 = create_object(iParam0->f_33, func_988(), true, true, false, false, true);
			set_entity_coords(iParam0->f_864, func_988(), true, false, true, true);
			set_entity_rotation(iParam0->f_864, func_992(), 2, true);
			freeze_entity_position(iParam0->f_864, true);
			set_model_as_no_longer_needed(iParam0->f_33);
		}
	}
	else if (is_named_rendertarget_registered(sVar5) == 0)
	{
		register_named_rendertarget(sVar5, false);
		link_named_rendertarget(iParam0->f_33);
		if (is_named_rendertarget_linked(iParam0->f_33))
		{
		}
		else
		{
			if (is_named_rendertarget_registered(sVar5))
			{
				release_named_rendertarget(sVar5);
			}
			return;
		}
		iVar8 = get_named_rendertarget_render_id(sVar5);
		set_text_render_id(iVar8);
	}
	if (iParam0->f_20 != 0)
	{
		if (func_325(Global_35, 0))
		{
			set_ped_can_play_gesture_anims(Global_35, 0, 1);
			set_ped_reset_flag(Global_35, 258, true);
		}
		func_438(0);
	}
	if (iParam0->f_20 >= 4)
	{
		_0x2804658eb7d8a50b(4, 1492915442);
	}
	func_993(iParam0, uParam1);
	func_994(&(iParam0->f_35), iParam0->f_20);
	switch (iParam0->f_20)
	{
		case 0:
			if (func_204(iParam0->f_6))
			{
				if (func_217(iParam0->f_6, 1))
				{
					if (func_746())
					{
						force_room_for_entity(iParam0->f_864, get_interior_from_entity(Global_35), get_room_key_from_entity(Global_35));
					}
					func_140(8192);
					func_140(67108864);
					iParam0->f_858 = 0;
					func_650(iParam0);
					func_995(0);
					if (_does_anim_scene_exist(iParam0->f_18))
					{
						reset_anim_scene(iParam0->f_18, 0);
					}
					iParam0->f_18 = _create_anim_scene(sVar0, 0, sVar1, false, true);
					load_anim_scene(iParam0->f_18);
					func_996(&(iParam0->f_35), 0);
					Global_1357549->f_1894 = 0;
					func_997(&(iParam0->f_35.f_2), func_141());
					func_998(&(iParam0->f_35));
					func_999();
					display_radar(false);
					_hide_ped_weapons(Global_35, 2, true);
					set_bit(&(Global_1357549->f_1893), 0);
					func_1000(iParam0, 2);
				}
			}
			else if (func_12(8192) == 0)
			{
				if ((func_141() == 1 || func_141() == 2) || func_141() == 3)
				{
					if (func_989(0))
					{
						iParam0->f_6 = func_656("LDGR_TITHE", -473983589, func_654(func_276()), func_655(), 3, 1, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
						func_210(iParam0->f_6, 736625733, 0, 1);
					}
				}
			}
			break;
		case 2:
			if ((((_is_anim_scene_loaded(iParam0->f_18, true, false) && _is_anim_scene_metadata_loaded(iParam0->f_18, false)) && func_1001(&(iParam0->f_35))) && func_1002()) && func_995(1))
			{
				iParam0->f_5 = func_149();
				func_828(&(iParam0->f_35));
				func_1003(iParam0->f_35.f_2.f_1[0], iParam0->f_35.f_498[Global_1357549->f_1894], &(iParam0->f_35.f_531));
				if (func_1004(*iParam0->f_35.f_498[Global_1357549->f_1894], 0, &(iParam0->f_35.f_2), &(iParam0->f_35.f_491)) && iParam0->f_35.f_491.f_1 != -1)
				{
					func_996(&(iParam0->f_35), 1);
					if (iParam0->f_35.f_491.f_5)
					{
						func_1005(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *iParam0->f_35.f_531[iParam0->f_35.f_491.f_1]);
					}
					else
					{
						func_1006(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *iParam0->f_35.f_531[iParam0->f_35.f_491.f_1]);
					}
				}
				else
				{
					func_996(&(iParam0->f_35), 0);
				}
				set_anim_scene_entity(iParam0->f_18, "player", Global_35, 0);
				set_anim_scene_entity(iParam0->f_18, "CATALOG", iParam0->f_864, 0);
				set_anim_scene_origin(iParam0->f_18, func_1007(iParam0->f_864), func_992(), 2);
				_0xdf7b5144e25cd3fe(iParam0->f_18, sVar1);
				_get_anim_scene_entity_matrix(iParam0->f_18, "player", &(iParam0->f_21), false, 0, 2);
				func_1000(iParam0, 1);
			}
			break;
		case 1:
			if (get_script_task_status(Global_35, 713668775, true) != 1 && get_script_task_status(Global_35, -208384378, true) != 1)
			{
				func_1000(iParam0, 3);
			}
			break;
		case 3:
			if (_0x23e33cb9f4a3f547(iParam0->f_18, sVar1))
			{
				_set_anim_scene_playback_list_bool(iParam0->f_18, sVar1, true);
				func_1000(iParam0, 4);
			}
			break;
		case 4:
			if (func_325(Global_35, 0))
			{
				clear_ped_secondary_task(Global_35);
				task_enter_anim_scene(Global_35, iParam0->f_18, "player", sVar1, 1069379748, 1, 128, 20000, -1082130432);
			}
			func_1008(&(iParam0->f_35));
			if (_0xa24c1d341c6e0d53(1, 0, 0))
			{
				iParam0->f_3 = 1;
				func_1009(&(iParam0->f_816), func_141(), 0, 1065353216);
			}
			else
			{
				iParam0->f_3 = 0;
			}
			func_1000(iParam0, 5);
			func_182(&(iParam0->f_813));
			break;
		case 5:
			if (get_script_task_status(Global_35, 1369124074, true) != 1)
			{
				if (_get_anim_scene_progress(iParam0->f_18) > 0.36f)
				{
					if (!iParam0->f_3)
					{
						func_1009(&(iParam0->f_816), func_141(), 0, 1065353216);
					}
					func_1010(&(iParam0->f_35), 0);
					set_bit(&(Global_1357549->f_1893), 1);
					func_1000(iParam0, 6);
					return;
				}
			}
			if (func_470(&(iParam0->f_813)) > 6000)
			{
				func_745(iParam0);
				func_1000(iParam0, 7);
			}
			break;
		case 6:
			func_1011(&(iParam0->f_816));
			_uiprompt_set_active_group_this_frame(-2019190071, "LDGR_TITHE", 1, 0, 0, 0);
			if (func_1012(iParam0))
			{
				return;
			}
			if (iParam0->f_35.f_772 && func_204(iParam0->f_35.f_1))
			{
				if (!func_1013(iParam0))
				{
					func_1015(&(iParam0->f_816), func_1014(func_141(), 1), 1);
				}
			}
			else if (func_1013(iParam0))
			{
				func_1015(&(iParam0->f_816), func_1014(func_141(), 0), 1);
			}
			func_1016(iParam0);
			if (func_217(iParam0->f_7, 1) && Global_1357549->f_1894 < 3)
			{
				func_996(&(iParam0->f_35), 0);
				_0xdf7b5144e25cd3fe(iParam0->f_18, sVar2);
				func_1000(iParam0, 9);
			}
			if (func_217(iParam0->f_8, 1) && Global_1357549->f_1894 > 0)
			{
				func_996(&(iParam0->f_35), 0);
				_0xdf7b5144e25cd3fe(iParam0->f_18, sVar3);
				func_1000(iParam0, 11);
			}
			if (func_217(iParam0->f_35.f_1, 1))
			{
				func_1017(&(iParam0->f_35), 1);
			}
			if (func_217(iParam0->f_9, 1))
			{
				func_996(&(iParam0->f_35), 0);
				func_175(&(iParam0->f_810), 0);
				clear_bit(&(Global_1357549->f_1893), 1);
				_0xdf7b5144e25cd3fe(iParam0->f_18, sVar4);
				func_1000(iParam0, 8);
			}
			break;
		case 9:
			if (_0x23e33cb9f4a3f547(iParam0->f_18, sVar2))
			{
				Global_1357549->f_1894++;
				func_1003(iParam0->f_35.f_2.f_1[1], iParam0->f_35.f_498[Global_1357549->f_1894], &(iParam0->f_35.f_531));
				_set_anim_scene_playback_list_bool(iParam0->f_18, sVar2, true);
				set_bit(&(Global_1357549->f_1893), 2);
				set_bit(&(Global_1357549->f_1893), 4);
				clear_bit(&(Global_1357549->f_1893), 1);
				func_1000(iParam0, 10);
			}
			break;
		case 11:
			if (_0x23e33cb9f4a3f547(iParam0->f_18, sVar3))
			{
				Global_1357549->f_1894 = (Global_1357549->f_1894 - 1);
				func_1003(iParam0->f_35.f_2.f_1[0], iParam0->f_35.f_498[Global_1357549->f_1894], &(iParam0->f_35.f_531));
				_set_anim_scene_playback_list_bool(iParam0->f_18, sVar3, true);
				set_bit(&(Global_1357549->f_1893), 2);
				set_bit(&(Global_1357549->f_1893), 4);
				clear_bit(&(Global_1357549->f_1893), 1);
				func_1000(iParam0, 12);
			}
			break;
		case 10:
			if (_get_anim_scene_progress(iParam0->f_18) > 0.09f)
			{
				func_1003(iParam0->f_35.f_2.f_1[0], iParam0->f_35.f_498[Global_1357549->f_1894], &(iParam0->f_35.f_531));
				iParam0->f_35.f_491.f_2 = 1;
				if (func_1004(*iParam0->f_35.f_498[Global_1357549->f_1894], iParam0->f_35.f_491.f_2, &(iParam0->f_35.f_2), &(iParam0->f_35.f_491)) && iParam0->f_35.f_491.f_1 != -1)
				{
					func_996(&(iParam0->f_35), 1);
					if (iParam0->f_35.f_491.f_5)
					{
						func_1005(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *iParam0->f_35.f_531[iParam0->f_35.f_491.f_1]);
					}
					else
					{
						func_1006(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *iParam0->f_35.f_531[iParam0->f_35.f_491.f_1]);
					}
				}
				else
				{
					func_996(&(iParam0->f_35), 0);
				}
				func_1000(iParam0, 13);
			}
			break;
		case 12:
			if (_get_anim_scene_progress(iParam0->f_18) > 0.09f)
			{
				func_1003(iParam0->f_35.f_2.f_1[1], iParam0->f_35.f_498[Global_1357549->f_1894], &(iParam0->f_35.f_531));
				iParam0->f_35.f_491.f_2 = 0;
				if (func_1004(*iParam0->f_35.f_498[Global_1357549->f_1894], iParam0->f_35.f_491.f_2, &(iParam0->f_35.f_2), &(iParam0->f_35.f_491)) && iParam0->f_35.f_491.f_1 != -1)
				{
					func_996(&(iParam0->f_35), 1);
					if (iParam0->f_35.f_491.f_5)
					{
						func_1005(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *iParam0->f_35.f_531[iParam0->f_35.f_491.f_1]);
					}
					else
					{
						func_1006(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *iParam0->f_35.f_531[iParam0->f_35.f_491.f_1]);
					}
				}
				else
				{
					func_996(&(iParam0->f_35), 0);
				}
				func_1000(iParam0, 13);
			}
			break;
		case 13:
			if (_get_anim_scene_progress(iParam0->f_18) > 0.15f)
			{
				clear_bit(&(Global_1357549->f_1893), 2);
				set_bit(&(Global_1357549->f_1893), 1);
				func_1000(iParam0, 6);
			}
			break;
		case 14:
			if (!func_168(&(iParam0->f_810)))
			{
				func_175(&(iParam0->f_810), 0);
			}
			if (func_470(&(iParam0->f_810)) > 2500)
			{
				if (_does_anim_scene_exist(iParam0->f_16))
				{
					_delete_anim_scene(iParam0->f_16);
				}
				if (!is_string_null_or_empty(sVar6) && !is_string_null_or_empty(sVar7))
				{
					iParam0->f_16 = _create_anim_scene(sVar6, 0, sVar7, false, true);
					load_anim_scene(iParam0->f_16);
					iParam0->f_17 = iParam0->f_35.f_491.f_1;
					func_1000(iParam0, 15);
				}
			}
			break;
		case 15:
			if (_is_anim_scene_loaded(iParam0->f_16, true, false) && _is_anim_scene_metadata_loaded(iParam0->f_16, false))
			{
				if (_is_anim_scene_started(iParam0->f_16, false))
				{
					func_1018(&(iParam0->f_816));
					set_bit(&(Global_1357549->f_1893), 3);
					clear_bit(&(Global_1357549->f_1893), 1);
					func_1003(iParam0->f_35.f_2.f_1[iParam0->f_35.f_491.f_2], iParam0->f_35.f_498[Global_1357549->f_1894], &(iParam0->f_35.f_531));
					if (func_1004(*iParam0->f_35.f_498[Global_1357549->f_1894], iParam0->f_35.f_491.f_2, &(iParam0->f_35.f_2), &(iParam0->f_35.f_491)) && iParam0->f_35.f_491.f_1 != -1)
					{
						if (iParam0->f_35.f_491.f_5)
						{
							func_1005(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *iParam0->f_35.f_531[iParam0->f_35.f_491.f_1]);
						}
						else
						{
							func_1006(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *iParam0->f_35.f_531[iParam0->f_35.f_491.f_1]);
						}
					}
					func_1000(iParam0, 16);
				}
				else
				{
					start_anim_scene(iParam0->f_16);
					func_1019();
				}
			}
			break;
		case 16:
			if (func_1020(iParam0, 0) && _is_anim_scene_active(iParam0->f_16))
			{
				abort_anim_scene(iParam0->f_18, false);
				clear_bit(&(Global_1357549->f_1893), 3);
				iParam0->f_17 = -1;
				func_176(&(iParam0->f_810));
				if (_does_anim_scene_exist(iParam0->f_16))
				{
					_delete_anim_scene(iParam0->f_16);
				}
				func_653(iParam0);
				func_745(iParam0);
				func_1000(iParam0, 7);
			}
			if (_does_anim_scene_exist(iParam0->f_16) && _is_anim_scene_finished(iParam0->f_16, false))
			{
				func_137(134217728);
				func_996(&(iParam0->f_35), iParam0->f_35.f_491);
				if (iParam0->f_35.f_773 && iParam0->f_35.f_772)
				{
					func_1009(&(iParam0->f_816), func_141(), 1, 1065353216);
				}
				else
				{
					func_1009(&(iParam0->f_816), func_141(), 0, 1065353216);
				}
				clear_bit(&(Global_1357549->f_1893), 3);
				set_bit(&(Global_1357549->f_1893), 1);
				iParam0->f_17 = -1;
				func_176(&(iParam0->f_810));
				if (_does_anim_scene_exist(iParam0->f_16))
				{
					_delete_anim_scene(iParam0->f_16);
				}
				func_1000(iParam0, 6);
			}
			break;
		case 7:
			set_entity_coords(iParam0->f_864, func_988(), true, false, true, true);
			set_entity_rotation(iParam0->f_864, func_992(), 2, true);
			func_1000(iParam0, 0);
			break;
		case 8:
			if (_0x23e33cb9f4a3f547(iParam0->f_18, sVar4))
			{
				_set_anim_scene_playback_list_bool(iParam0->f_18, sVar4, true);
				func_1021(&(iParam0->f_35), 0);
				if (func_1022(64))
				{
					func_1023(64);
					func_1024(128);
				}
				func_1000(iParam0, 17);
			}
			break;
		case 17:
			if (func_169(&(iParam0->f_810)) > 0.75f)
			{
				func_176(&(iParam0->f_810));
				if (!iParam0->f_3)
				{
					func_1018(&(iParam0->f_816));
				}
			}
			if (_is_anim_scene_active(iParam0->f_18))
			{
				func_653(iParam0);
				func_745(iParam0);
			}
			break;
	}
}

void func_653(int* iParam0)
{
	vVar0 = { get_entity_rotation(iParam0->f_866, 2) };
	vVar3 = { get_entity_coords(iParam0->f_866, true, false) };
	if (func_149() > 1000)
	{
		if (does_entity_exist(iParam0->f_11) == 0)
		{
			iParam0->f_11 = create_object(-62869733, vVar3.x, vVar3.y, (vVar3.z + 0.03f), true, true, false, false, true);
			set_entity_rotation(iParam0->f_11, vVar0.x, vVar0.y, (vVar0.z + 100f), 2, true);
			freeze_entity_position(iParam0->f_11, true);
		}
	}
	else if (does_entity_exist(iParam0->f_11))
	{
		delete_object(&(iParam0->f_11));
	}
	if (func_149() > 10000)
	{
		if (does_entity_exist(iParam0->f_12) == 0)
		{
			iParam0->f_12 = create_object(-62869733, vVar3.x, vVar3.y, (vVar3.z + 0.06f), true, true, false, false, true);
			set_entity_rotation(iParam0->f_12, vVar0.x, vVar0.y, (vVar0.z + 90f), 2, true);
			freeze_entity_position(iParam0->f_12, true);
		}
	}
	else if (does_entity_exist(iParam0->f_12))
	{
		delete_object(&(iParam0->f_12));
	}
}

Vector3 func_654(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -136.1656f, -33.9941f, 95.0068f;
		case 2:
			return 651.7131f, -1258.331f, 42.7264f;
		case 3:
			return 1890.439f, -1865.85f, 46.3426f;
		case 8:
			return -1634.48f, -1356.272f, 83.3963f;
	}
	return 0f, 0f, 0f;
}

float func_655()
{
	if (func_141() == 3)
	{
		return 0.95f;
	}
	return 1.35f;
}

int func_656(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_206(vParam2))
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
		if (func_558(iVar0, 2))
		{
			if (func_1025(vParam2, (*Global_1945938)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1945938)[iVar0]->f_4)
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
		func_559(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

bool func_657()
{
	if (((((Global_1357549->f_1672 == -774242862 || Global_1357549->f_1672 == -2100684454) || Global_1357549->f_1672 == -1167047117) || Global_1357549->f_1672 == 396444962) || Global_1357549->f_1672 == -498064062) || Global_1357549->f_1672 == 513694516)
	{
		return true;
	}
	return false;
}

int func_658(int iParam0)
{
	if (!func_871(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_659(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_204(iParam0))
	{
		return;
	}
	iVar0 = func_556(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, _create_var_string(0, sParam2)));
}

char* func_660()
{
	switch (func_141())
	{
		case 1:
			return "HSO";
		case 2:
			return "CLP";
		case 3:
			return "SHB";
		default:
			break;
	}
	return "";
}

int func_661()
{
	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (Global_1327590->f_19547[iVar0]->f_1 >= 5)
		{
			if (get_distance_between_coords(func_654(func_276()), func_1026(&(Global_1327590->f_19547[iVar0])), true) < 3.25f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_662()
{
	return Global_1327590->f_19745;
}

bool func_663()
{
	switch (Global_1935630->f_44)
	{
		case -1415022764:
		case -1016714371:
		case -160924582:
		case 1030402560:
		case 1549070292:
			return true;
	}
	if (is_weapon_valid(Global_1935630->f_44))
	{
		if (_is_weapon_lantern(Global_1935630->f_44))
		{
			return true;
		}
	}
	return false;
}

int func_664(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_558(iVar0, 2))
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
				func_559(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

bool func_665(int iParam0, bool bParam1)
{
	if (bParam1 && !func_204(iParam0))
	{
		return false;
	}
	iVar0 = func_556(iParam0);
	return _uiprompt_is_released((*Global_1945938)[iVar0]->f_3);
}

void func_666(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_204(iParam0))
	{
		return;
	}
	iVar0 = func_556(iParam0);
	func_940(iVar0, bParam1);
}

int func_667(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_668()
{
	get_current_ped_weapon(Global_35, &iVar0, true, 0, false);
	if (iVar0 == 1549070292 || iVar0 == 1030402560)
	{
		return 1;
	}
	return 0;
}

void func_669(int* iParam0)
{
	func_653(iParam0);
	if (func_325(Global_35, 0))
	{
		if (_get_ped_crouch_movement(Global_35))
		{
			_set_ped_crouch_movement(Global_35, false, 0, false);
		}
		_task_use_scenario_point(Global_35, iParam0->f_863, 0, 0, true, false, 0, false, -1f, false);
	}
}

Vector3 func_670(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -141.9612f, -23.6935f, 95.5885f;
		case 2:
			return 675.319f, -1251.379f, 43.0152f;
		case 3:
			return 1875.195f, -1859.172f, 41.8f;
		case 6:
			return 2366.094f, 1347.076f, 105.6301f;
		case 8:
			return -1646.82f, -1348.768f, 83.0685f;
	}
	return 0f, 0f, 0f;
}

bool func_671(int* iParam0)
{
	if (func_32() == 1)
	{
		if (func_206(func_670(func_276())) == 0)
		{
			if (func_662() == 0)
			{
				if (func_649(27))
				{
					if (func_159() == 0)
					{
						if (func_1027(iParam0))
						{
							return true;
						}
					}
					else
					{
						func_1028("Camp Butcher: mission running", iParam0);
					}
				}
				else
				{
					func_1028("Camp Butcher: locked feature", iParam0);
				}
			}
			else
			{
				func_1028("Camp Butcher: walk n talk vig active", iParam0);
			}
		}
		else
		{
			func_1028("Camp Butcher: no donation point", iParam0);
		}
	}
	else
	{
		func_1028("Camp Butcher: not in running state", iParam0);
	}
	return false;
}

void func_672(int iParam0, int iParam1)
{
	if (!func_950(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_673(int iParam0, int iParam1)
{
	if (!func_950(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

void func_674(var uParam0, int iParam1)
{
	if (does_blip_exist(*uParam0))
	{
		if (iParam1 == 0)
		{
			_blip_set_modifier(*uParam0, 1191951699);
			_blip_set_modifier(*uParam0, 37805592);
		}
		else
		{
			_set_blip_flash_style(*uParam0, 1191951699);
			_set_blip_flash_style(*uParam0, 37805592);
		}
	}
}

void func_675(int* iParam0)
{
	if (does_blip_exist(iParam0->f_14))
	{
		remove_blip(&(iParam0->f_14));
	}
	if (does_blip_exist(iParam0->f_15))
	{
		remove_blip(&(iParam0->f_15));
	}
	if (does_blip_exist(iParam0->f_13))
	{
		remove_blip(&(iParam0->f_13));
	}
	func_1029(538);
}

void func_676(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_1030(uParam0, iParam1, sParam2))
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

bool func_677(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_1031(cParam1, cParam0);
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

int func_678(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return 0;
			}
			else
			{
				return 7;
			}
			break;
		case 0:
			if (bParam1)
			{
				return 7;
			}
			else
			{
				return 3;
			}
			break;
		case 2:
			if (bParam1)
			{
				return 7;
			}
			else if (func_38(262144))
			{
				return 6;
			}
			else
			{
				return 5;
			}
			break;
		case 4:
			if (bParam1)
			{
				return 7;
			}
			else
			{
				return 6;
			}
			break;
	}
	return -1;
}

void func_679(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	if (_does_volume_exist(*uParam0))
	{
		return;
	}
	iVar5 = 0;
	iVar6 = 0;
	switch (iParam10)
	{
		case 0:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar5 = 1;
			break;
		case 1:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar5 = 1;
			break;
		case 2:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 1f;
			fVar0[3] = 1f;
			iVar5 = 1;
			break;
		case 3:
			fVar0[0] = 0.35f;
			fVar0[1] = 0f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar6 = 1;
			break;
		case 4:
			fVar0[0] = 0.45f;
			fVar0[1] = 0.2f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar6 = 1;
			break;
		case 5:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar6 = 1;
			break;
		case 6:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 1f;
			fVar0[3] = 1f;
			iVar6 = 1;
			break;
	}
	*uParam0 = _create_speed_volume(iParam11, vParam1, vParam4, vParam7, iVar5, iVar6, &fVar0, iParam12, bParam13);
}

float func_680(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1.75f;
		case 4:
			return 4f;
		default:
			break;
	}
	return 0f;
}

float func_681(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_682(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_683(int iParam0, bool bParam1)
{
	if (_does_volume_exist(Global_1395601->f_5[iParam0]->f_23) && is_entity_in_volume(Global_35, Global_1395601->f_5[iParam0]->f_23, true, 0))
	{
		return;
	}
	if (func_126(242, 1, 1))
	{
		bParam1 = false;
	}
	switch (iParam0)
	{
		case 8:
			func_1032(238680582, bParam1);
			break;
		case 9:
			func_1032(1555588463, bParam1);
			func_1032(1275780106, bParam1);
			func_1032(-833560428, bParam1);
			func_1032(-1601174253, bParam1);
			func_1032(-1295111793, bParam1);
			break;
		case 11:
			func_1032(-1482639045, bParam1);
			break;
		case 10:
			func_1032(254520182, bParam1);
			break;
		case 12:
			func_1032(1997650502, bParam1);
			break;
		case 13:
			func_1032(1335986638, bParam1);
			break;
		case 14:
			func_1032(1407130373, bParam1);
			break;
		case 16:
			func_1032(-1335647241, bParam1);
			break;
		case 15:
			func_1032(1731691513, !func_143(70));
			break;
	}
}

void func_684(int iParam0)
{
	if (!func_476(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0] = 0;
}

void func_685(int iParam0, int iParam1)
{
	if (!func_476(iParam0))
	{
		return;
	}
	Global_1395601->f_5[iParam0]->f_20 = iParam1;
}

Vector3 func_686(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -107.0047f, -32.0697f, 94.9574f;
		case 2:
			return 703.7057f, -1228.871f, 44.2991f;
		case 3:
			return 1849.943f, -1837.089f, 42.2036f;
		case 5:
			return 2278.213f, -751.9426f, 41.0419f;
		case 6:
			return 2370.389f, 1340.97f, 105.1306f;
		case 7:
			return -2591.632f, 466.4086f, 145.2065f;
		case 8:
			if (!func_696())
			{
				return -1665.274f, -1330.899f, 82.9343f;
			}
			else
			{
				return -1643.673f, -1375.62f, 82.9683f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_687()
{
	if (!func_697())
	{
		return false;
	}
	iVar0 = func_358(0);
	if (!does_entity_exist(iVar0))
	{
		return true;
	}
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	if (func_221(iVar0))
	{
		return false;
	}
	return true;
}

int func_688(var uParam0)
{
	sVar0 = func_1034(func_1033(0));
	if (!is_string_null_or_empty(sVar0))
	{
		return func_208(_create_var_string(10, "CAMP_HITCH_MAIN_NAME", sVar0), 1940454787, uParam0->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
	}
	iVar1 = func_1035(0);
	sVar0 = _get_label_text_by_hash(get_hash_key(func_1036(iVar1)));
	return func_208(_create_var_string(10, "CAMP_HITCH_STABLE", sVar0), 1940454787, uParam0->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
}

int func_689(int iParam0)
{
	iVar0 = func_556(iParam0);
	if (iVar0 < 0 || iVar0 >= 48)
	{
		return 0;
	}
	return (*Global_1945938)[iVar0]->f_3;
}

bool func_690()
{
	if (!func_1037())
	{
		return false;
	}
	if (func_1039(func_1038()))
	{
		return false;
	}
	switch (func_705())
	{
		case 0:
			if (func_1040() != 5)
			{
				return false;
			}
			break;
		case 1:
			return false;
	}
	return true;
}

int func_691(int iParam0)
{
	iParam0 = func_714(iParam0);
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

void func_692(int iParam0, int iParam1, var uParam2)
{
	sVar0 = func_1034(func_1033(iParam0));
	if (is_string_null_or_empty(sVar0))
	{
		iVar1 = func_1035(iParam0);
		sVar0 = _get_label_text_by_hash(get_hash_key(func_1036(iVar1)));
	}
	iVar2 = func_1041(iParam0);
	if (iVar2 == -1 || iVar2 == 3)
	{
		return;
	}
	uParam2->f_12[iVar2] = func_208(_create_var_string(10, "CAMP_HITCH_STABLE", sVar0), iParam1, uParam2->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
	_uiprompt_set_group(func_689(&(uParam2->f_12[iVar2])), 1842627646, 0);
}

bool func_693()
{
	if (((func_691(0) != 0 || func_691(2) != 0) || func_691(3) != 0) || func_691(4) != 0)
	{
		return true;
	}
	return false;
}

bool func_694(int iParam0)
{
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_700(iParam0))
	{
		return false;
	}
	iVar0 = func_358(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

void func_695(var uParam0, var uParam1)
{
	if (func_56() != -1)
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

bool func_696()
{
	return func_143(70);
}

bool func_697()
{
	if (!func_708())
	{
		return false;
	}
	if (func_694(0))
	{
		return false;
	}
	if (func_1042(0))
	{
		return false;
	}
	return true;
}

void func_698(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_1043(iParam0);
	func_1043(iParam0);
	func_1044(iParam0, iParam1);
	func_1045(iParam0, iParam1);
	func_1046(iParam0, iParam1);
	iVar1 = func_358(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1047(iVar1);
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
	iVar3 = func_358(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1047(iVar3);
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
	func_711();
}

void func_699(int iParam0, int iParam1)
{
	iParam0 = func_714(iParam0);
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

bool func_700(int iParam0)
{
	iParam0 = func_714(iParam0);
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

void func_701(int iParam0)
{
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_700(iParam0))
	{
		return;
	}
	iVar0 = func_358(iParam0);
	func_1048(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_1049(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_1050(iParam0, 0);
	func_1051(iParam0);
}

void func_702(int iParam0)
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
	_0xdf631e4bce1b1fc4(iParam0, 399422490, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -1163401704, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, 88372018, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -630346294, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -273475295, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -2142954459, 0, false);
}

void func_703(int iParam0)
{
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1052(iParam0);
	func_1053(iParam0, 0);
	func_1054(iParam0, 0f);
}

void func_704(int iParam0)
{
	iParam0 = func_714(iParam0);
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
	func_1055(&Var0);
	func_1056(iParam0, Var0);
	func_1057(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1058(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1059(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1060(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1061(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1062(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1063(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1064(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1065(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

int func_705()
{
	return Global_40.f_1095.f_3054.f_1;
}

void func_706(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

float func_707(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 164.6267f;
		case 2:
			return 253.0561f;
		case 3:
			return 46.2992f;
		case 5:
			return 70.2681f;
		case 6:
			return 109.4813f;
		case 7:
			return 81.6192f;
		case 8:
			if (!func_696())
			{
				return 21.0508f;
			}
			else
			{
				return 329.6172f;
			}
			break;
	}
	return 0f;
}

bool func_708()
{
	if (func_691(0) == 1)
	{
		return true;
	}
	return false;
}

bool func_709(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_1066(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_710()
{
	iVar0 = func_358(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
	}
	if (is_ped_injured(iVar0))
	{
	}
	if (is_ped_in_writhe(iVar0))
	{
	}
	if (does_entity_exist(Global_1900383->f_393))
	{
		if (!_0x88ad6cc10d8d35b2(Global_1900383->f_393))
		{
			set_entity_as_mission_entity(Global_1900383->f_393, false, true);
		}
		delete_object(&(Global_1900383->f_393));
	}
	Var1 = { func_1067(0) };
	Var3 = { func_1068() };
	func_1069(iVar0, &Var1, &Var3, 0);
	_set_ped_as_saddle_horse_for_player(get_player_index(), iVar0);
	func_706(0);
	func_316(0);
}

void func_711()
{
	if (func_700(0))
	{
		func_1070(0);
	}
	if (func_700(1))
	{
		func_1070(1);
	}
	if (func_700(5))
	{
		func_1070(5);
	}
	if (func_700(6))
	{
		func_1043(6);
	}
}

Vector3 func_712(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		return 0f, 0f, 0.6f;
	}
	else if (iParam0 == 2)
	{
		if (iParam1 == 0)
		{
			return -0.26f, -0.069f, 0.919f;
		}
		else
		{
			return 0.487f, -0.066f, 0.935f;
		}
	}
	else if (iParam0 == 3)
	{
		if (iParam1 == 0)
		{
			return 0.42f, 0f, 0.88f;
		}
		else if (iParam1 == 1)
		{
			return -0.42f, 0f, 0.88f;
		}
		else if (iParam1 == 2)
		{
			return 0f, 0f, 0.88f;
		}
	}
	return 0f, 0f, 0f;
}

int func_713(int iParam0, var uParam1)
{
	uParam1->f_10 = func_714(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*iParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*iParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_206(uParam1->f_6))
		{
		}
	}
	bVar0 = func_736();
	if (*uParam1)
	{
		if (bVar0 && !func_487((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1071(5))
			{
				func_701(5);
				func_704(5);
				func_706(0);
				func_316(0);
			}
		}
	}
	if (func_1072(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_487((*Global_1835011)[37]->f_1, 1)) && !func_487((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_487((*Global_1835011)[43]->f_1, 1)) && !func_487((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_358(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_700(iVar1))
	{
		bVar3 = true;
		if (func_694(iVar1))
		{
			bVar4 = true;
		}
		if (func_1042(iVar1))
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
				func_1073(uParam1->f_10);
				*iParam0 = 0;
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
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_1071(0) && func_1071(1))
			{
				func_698(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_314())
			{
				func_315();
			}
			func_706(0);
			func_316(0);
			func_318(uParam1->f_6);
		}
	}
	if (!func_700(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_715(uParam1->f_10) == 0 || func_1035(uParam1->f_10) == 0) || func_691(uParam1->f_10) == 0)
			{
				func_1074(uParam1->f_10);
			}
			func_1075(uParam1->f_10);
			func_1076(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_358(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_700(iVar1))
	{
		bVar3 = true;
		if (func_694(iVar1))
		{
			bVar4 = true;
		}
		if (func_1042(iVar1))
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
			if (!func_206(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_1077(uParam1->f_10))
	{
		*iParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!_0xa0bc8faed8cfeb3c(iVar2))
			{
				*iParam0 = 0;
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
			Var8 = { func_1067(uParam1->f_10) };
			Var10 = { func_1068() };
			func_1069(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_1078(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1079(uParam1->f_10);
		if (uParam1->f_2 && !func_206(uParam1->f_6))
		{
			freeze_entity_position(iVar2, false);
			_0x0348469daa17576c(iVar2);
			set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
			set_entity_heading(iVar2, uParam1->f_9);
			_0x9587913b9e772d29(iVar2, 0);
		}
		*iParam0 = 2;
		return iVar2;
	}
	func_1080(uParam1->f_10);
	if (func_1078(uParam1->f_10))
	{
		iVar16 = func_1081(uParam1->f_10);
		iVar17 = get_id_of_this_thread();
		if (iVar16 != iVar17)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	*iParam0 = 2;
	return iVar2;
}

int func_714(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_715(int iParam0)
{
	iParam0 = func_714(iParam0);
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

int func_716(int iParam0)
{
	switch (iParam0)
	{
		case 1772321403:
			return 1;
	}
	return 0;
}

int func_717(int iParam0)
{
	switch (iParam0)
	{
		case -1230516683:
		case 594040097:
			return 1;
	}
	return 0;
}

int func_718(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		iParam0 = 1074477367;
	}
	iVar0 = get_default_max_attribute_rank(iParam0, 7);
	return iVar0;
}

bool func_719(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return false;
	}
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	fVar0 = func_1082(iParam1);
	if (fVar0 == 1E+09f)
	{
		return false;
	}
	if (func_721(iParam0, iParam1) >= fVar0)
	{
		return true;
	}
	return false;
}

bool func_720(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return false;
	}
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	switch (iParam1)
	{
		case 0:
		case 5:
		case 6:
		case 7:
		case 9:
			return false;
	}
	iVar0 = func_358(iParam0);
	fVar1 = func_1083(iVar0);
	if (fVar1 >= 0.1f)
	{
		return true;
	}
	return false;
}

float func_721(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0f;
	}
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return &(Global_40.f_1095.f_1[iParam0]->f_372.f_2[iParam1]);
}

float func_722(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15f;
		case 4:
			return 4f;
		case 1:
			return 2f;
		case 2:
			return 1f;
		case 3:
			return 1f;
		case 5:
			return 100f;
		case 6:
			return 25f;
		case 7:
			return 5f;
		case 8:
			return 1f;
		case 9:
			return 15f;
		case 10:
			return 1f;
		case 11:
			return 15f;
		case 12:
			return 1f;
		case 13:
			return 15f;
		case 14:
			return 5f;
		case 15:
			return 1f;
		case 16:
			return 5f;
		case 17:
			return 15f;
		case 18:
			return 5f;
		case 19:
			return 1f;
		case 20:
			return 5f;
		case 21:
			return 15f;
		case 22:
			return 1f;
	}
	return 0f;
}

bool func_723(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return false;
	}
	iVar0 = func_1084(iParam1);
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

bool func_724()
{
	return Global_40.f_1095.f_3140;
}

float func_725(int iParam0)
{
	iParam0 = func_714(iParam0);
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

void func_726(int iParam0, float fParam1)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "HORSE_XP_TRUST_EARNED";
			break;
		case 1:
		case 2:
		case 3:
			return;
		case 4:
			sVar0 = "HORSE_XP_LEADING";
			break;
		case 11:
		case 12:
			sVar0 = "HORSE_XP_HITCH";
			break;
		case 5:
			return;
		case 6:
			sVar0 = "HORSE_XP_BREAK_HORSE";
			break;
		case 13:
		case 14:
		case 15:
			sVar0 = "HORSE_XP_FED";
			break;
		case 16:
			sVar0 = "HORSE_XP_TREAT";
			break;
		case 17:
		case 18:
		case 19:
			sVar0 = "HORSE_XP_GROOM";
			break;
		case 20:
			sVar0 = "HORSE_XP_OINTMENT";
			break;
		case 7:
		case 8:
			sVar0 = "HORSE_XP_PATTED";
			break;
		case 9:
		case 10:
			sVar0 = "HORSE_XP_CALM";
			break;
		case 21:
		case 22:
			sVar0 = "HORSE_XP_LIGHT_LOAD";
			break;
		default:
			return;
	}
	bVar1 = false;
	if (bVar1)
	{
		sVar0 = _create_var_string(2, sVar0, floor(fParam1));
	}
	else
	{
		sVar0 = _create_var_string(2, "HORSE_XP_GENERIC_EARNED");
	}
	func_1085(sVar0, "ITEMTYPE_TEXTURES", 48560695, 0, 109029619, 0, 0, 0, 1);
}

void func_727(int iParam0, float fParam1)
{
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_715(iParam0);
	iVar1 = func_312(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	if (iVar1 >= iVar2)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = (Global_40.f_1095.f_1[iParam0]->f_372.f_1 + fParam1);
	iVar3 = func_358(iParam0);
	if (!does_entity_exist(iVar3))
	{
		return;
	}
	if (is_entity_dead(iVar3) || is_ped_injured(iVar3))
	{
		return;
	}
	func_1086(iVar3, floor(Global_40.f_1095.f_1[iParam0]->f_372.f_1));
	iVar4 = func_1087(iVar3);
	Global_40.f_1095.f_1[iParam0]->f_372 = iVar4;
	_0xa69899995997a63b(iVar3, iVar4);
	func_1088(iVar4);
	if (iVar4 > iVar1)
	{
		func_1089(iParam0, iVar4);
		if (iParam0 == 6)
		{
			if (iVar4 == 1)
			{
				if (func_649(42))
				{
					func_202(19, 1);
				}
				else
				{
					func_202(20, 1);
				}
			}
		}
		if (iVar4 == 2)
		{
			func_202(21, 1);
		}
		else if (iVar4 == 3)
		{
			func_202(22, 1);
		}
		else if (iVar4 == 4)
		{
			func_202(23, 1);
		}
		if (iVar4 >= 2)
		{
			iVar5 = func_1090(iVar3);
			iVar6 = func_1091();
			func_1092(iVar6, iVar5 + 1);
			iVar7 = func_1093(iVar3);
			iVar8 = func_1094();
			func_1092(iVar8, iVar7 + 1);
		}
		compendium_horse_bonding(iVar3, iVar4);
		func_636(func_1095(352983236), 1);
		if (iVar4 == iVar2)
		{
			func_636(func_1095(-2116919750), 1);
		}
		func_324(0, -1);
	}
}

void func_728(int iParam0, int iParam1, float fParam2)
{
	if (iParam1 == -1)
	{
		return;
	}
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_372.f_2[iParam1] = fParam2;
}

int func_729()
{
	return Global_1900383->f_393;
}

void func_730(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

void func_731()
{
	if (func_1096())
	{
		uVar0 = func_1097();
		remove_blip(&uVar0);
		func_1098(0);
	}
}

int func_732()
{
	iVar0 = -1427204870;
	return iVar0;
}

void func_733(var uParam0)
{
	if (*uParam0 != 0)
	{
		set_model_as_no_longer_needed(*uParam0);
		*uParam0 = 0;
	}
}

bool func_734(int iParam0)
{
	iVar0 = func_1099(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_735(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_736()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_737(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

Vector3 func_738()
{
	if (func_143(70))
	{
		return -1634.252f, -1358.577f, 83.9077f;
	}
	if (func_143(73))
	{
		return -1665.419f, -1346.258f, 84.11175f;
	}
	return -1641.1f, -1359.979f, 83.4932f;
}

void func_739(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_740()
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

int func_741(int iParam0)
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
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_742(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_743(int iParam0, bool bParam1, float fParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_1100(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_1101(iVar0);
	if (iVar0 == Global_1934765->f_338)
	{
		if (Global_1934765->f_337 == 0)
		{
			func_1102();
		}
		else
		{
			func_1103(bParam1, fParam2);
		}
	}
	else
	{
		uVar1 = Global_1934765->f_338;
		Global_1934765->f_338 = func_1104();
	}
}

void func_744()
{
	if (Global_1934765->f_286 > 300)
	{
		Global_1934765->f_286 = 300;
	}
	_0x2f9ac754fe179d58(func_769());
}

void func_745(int* iParam0)
{
	if (is_bit_set(Global_1357549->f_1893, 0))
	{
		if (iParam0->f_3)
		{
			func_1018(&(iParam0->f_816));
		}
		display_radar(true);
		Global_1357549->f_1894 = 0;
		reset_anim_scene(iParam0->f_18, 0);
		_delete_anim_scene(iParam0->f_18);
		func_137(8192);
		func_137(67108864);
		func_1105();
		func_1106(&(iParam0->f_35));
		func_1107(&(iParam0->f_35));
		func_1108();
		func_995(2);
		if (func_1022(128))
		{
			func_1023(128);
		}
		set_entity_coords(iParam0->f_864, func_988(), true, false, true, true);
		set_entity_rotation(iParam0->f_864, func_992(), 2, true);
		clear_bit(&(Global_1357549->f_1893), 0);
		clear_bit(&(Global_1357549->f_1893), 4);
		func_1000(iParam0, 0);
	}
}

bool func_746()
{
	if (func_141() == 3)
	{
		return true;
	}
	return false;
}

void func_747(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 13;
			*uParam2 = 7;
			*uParam3 = 8;
			*uParam4 = 9;
			break;
		case 1:
			*iParam1 = 14;
			*uParam2 = 10;
			*uParam3 = 11;
			*uParam4 = 12;
			break;
		case 2:
			*iParam1 = 14;
			*uParam2 = 13;
			*uParam3 = 14;
			*uParam4 = 15;
			break;
		case 3:
			*iParam1 = 7;
			*uParam2 = 16;
			*uParam3 = 17;
			*uParam4 = 18;
			break;
		case 4:
			*iParam1 = 7;
			*uParam2 = 19;
			*uParam3 = 20;
			*uParam4 = 21;
			break;
		case 5:
			*iParam1 = 7;
			*uParam2 = 22;
			*uParam3 = 23;
			*uParam4 = 24;
			break;
		case 6:
			*iParam1 = 7;
			*uParam2 = 25;
			*uParam3 = 26;
			*uParam4 = 27;
			break;
		case 7:
			*iParam1 = 19;
			*uParam2 = 28;
			*uParam3 = 29;
			*uParam4 = 30;
			break;
		case 8:
			*iParam1 = 19;
			*uParam2 = 31;
			*uParam3 = 32;
			*uParam4 = 33;
			break;
		case 9:
			*iParam1 = 21;
			*uParam2 = 34;
			*uParam3 = 35;
			*uParam4 = 36;
			break;
		case 10:
			*iParam1 = 17;
			*uParam2 = 37;
			*uParam3 = 38;
			*uParam4 = 39;
			break;
		case 11:
			*iParam1 = 17;
			*uParam2 = 40;
			*uParam3 = 41;
			*uParam4 = 42;
			break;
		case 12:
			*iParam1 = 2;
			*uParam2 = 43;
			*uParam3 = 44;
			*uParam4 = 45;
			break;
		case 13:
			*iParam1 = 3;
			*uParam2 = 46;
			*uParam3 = 47;
			*uParam4 = 48;
			break;
		case 14:
			*iParam1 = 8;
			*uParam2 = 49;
			*uParam3 = 50;
			*uParam4 = 51;
			break;
		case 15:
			*iParam1 = 10;
			*uParam2 = 82;
			*uParam3 = 83;
			*uParam4 = 84;
			break;
		case 16:
			*iParam1 = 22;
			*uParam2 = 88;
			*uParam3 = 89;
			*uParam4 = 90;
			break;
		case 17:
			*iParam1 = 5;
			*uParam2 = 64;
			*uParam3 = 65;
			*uParam4 = 66;
			break;
		case 18:
			*iParam1 = 5;
			*uParam2 = 67;
			*uParam3 = 68;
			*uParam4 = 69;
			break;
		case 19:
			*iParam1 = 9;
			*uParam2 = 52;
			*uParam3 = 53;
			*uParam4 = 54;
			break;
		case 20:
			*iParam1 = 9;
			*uParam2 = 55;
			*uParam3 = 56;
			*uParam4 = 57;
			break;
		case 21:
			*iParam1 = 4;
			*uParam2 = 91;
			*uParam3 = 92;
			*uParam4 = 93;
			break;
		case 22:
			*iParam1 = 15;
			*uParam2 = 58;
			*uParam3 = 59;
			*uParam4 = 60;
			break;
		case 23:
			*iParam1 = 15;
			*uParam2 = 61;
			*uParam3 = 62;
			*uParam4 = 63;
			break;
		case 24:
			*iParam1 = 23;
			*uParam2 = 94;
			*uParam3 = 95;
			*uParam4 = 96;
			break;
		case 25:
			*iParam1 = 16;
			*uParam2 = 85;
			*uParam3 = 86;
			*uParam4 = 87;
			break;
		case 27:
			*iParam1 = 20;
			*uParam2 = 70;
			*uParam3 = 71;
			*uParam4 = 72;
			break;
		case 28:
			*iParam1 = 0;
			*uParam2 = 73;
			*uParam3 = 74;
			*uParam4 = 75;
			break;
		case 29:
			*iParam1 = 11;
			*uParam2 = 79;
			*uParam3 = 80;
			*uParam4 = 81;
			break;
		case 30:
			*iParam1 = 6;
			*uParam2 = 76;
			*uParam3 = 77;
			*uParam4 = 78;
			break;
	}
}

void func_748(var uParam0)
{
	func_176(&(uParam0->f_101));
	if (func_177(17))
	{
		func_181(17, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(func_172(17), false);
	}
}

int func_749()
{
	return get_player_group(get_player_index());
}

void func_750(int iParam0)
{
	iVar0 = Global_1360165[iParam0];
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return;
	}
	if (!func_477(iParam0))
	{
		return;
	}
	if (!is_ped_in_group(iVar0))
	{
		return;
	}
	if (get_ped_group_index(iVar0) != get_player_group(get_player_index()))
	{
		return;
	}
	if (_0x917760cfe7a0e0f1(iVar0))
	{
		_0xd747979c053efa7a(func_749());
	}
	set_ped_config_flag(iVar0, 279, false);
	remove_ped_from_group(iVar0);
	func_1109(iParam0, 0, 0);
}

int func_751(bool bParam0)
{
	if (bParam0)
	{
		return func_1110(Global_1359489->f_4);
	}
	get_group_size(func_749(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_749(), iVar3);
		if (func_1111(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_752()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = func_1112(iVar0);
		iVar2 = func_1112(iVar0 + 1);
		if (!func_477(iVar1))
		{
			if (func_477(iVar2))
			{
				(*Global_1359489)[iVar0] = iVar2;
				(*Global_1359489)[iVar0 + 1] = -1;
			}
		}
		iVar0++;
	}
}

void func_753(int iParam0)
{
	Global_1327590->f_11465[iParam0]->f_5 = func_1113();
}

void func_754(int iParam0)
{
	Global_1327590->f_19692[iParam0] = func_1113();
}

void func_755(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_1327590->f_19622[iParam0]->f_9 = func_1113();
	if (bParam1)
	{
		Global_1327590->f_19622[iParam0]->f_10 = Global_1327590->f_19622[iParam0]->f_11;
	}
	if (iParam2 > 0)
	{
		func_548(&(Global_1327590->f_19622[iParam0]->f_9), 0, iParam2, 0, 0, 0, 0, 0);
	}
}

void func_756()
{
	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar0] != -1)
		{
			func_570(iVar0);
		}
		iVar0++;
	}
}

bool func_757(int iParam0)
{
	return func_510(iParam0, 32, 1);
}

void func_758(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!does_entity_exist(func_172(iParam0)))
	{
		func_410(iParam0, 4, 1);
		func_410(iParam0, 17, 1);
		func_410(iParam0, 1, 1);
		func_410(iParam0, 2, 1);
		return;
	}
	if (!func_477(iParam0))
	{
		return;
	}
	if (func_757(iParam0) && !bParam2)
	{
		return;
	}
	if (func_338(iParam0) && !bParam2)
	{
		return;
	}
	if (iParam0 == Global_1357549->f_1497 && !bParam2)
	{
		return;
	}
	if (((!bParam3 && does_entity_exist(func_172(iParam0))) && func_911(iParam0) < 5000f) && !is_screen_faded_out())
	{
		return;
	}
	func_410(iParam0, 4, 1);
	func_410(iParam0, 17, 1);
	func_410(iParam0, 1, 1);
	func_410(iParam0, 2, 1);
	func_1114(iParam0, func_172(iParam0));
	func_537(iParam0, 1, 1, 1, bParam4);
}

int func_759(int iParam0, bool bParam1)
{
	if (!func_509(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126) && bParam1)
	{
		(*Global_1360165)[iParam0]->f_126 = func_1115(iParam0);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

bool func_760(int iParam0)
{
	return iParam0 != 0;
}

int func_761(int iParam0)
{
	if (!func_402(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

bool func_762(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_457(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_763(int* iParam0)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (_0xa7e51b53309eac97(*iParam0))
	{
		return;
	}
	if (!is_entity_a_mission_entity(*iParam0))
	{
		set_entity_as_mission_entity(*iParam0, true, false);
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (!is_entity_dead(*iParam0))
	{
		set_entity_load_collision_flag(*iParam0, 0);
	}
	delete_ped(iParam0);
}

void func_764(int iParam0, int iParam1)
{
	if (func_56() != -1)
	{
		return;
	}
	if (!func_402(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

void func_765(int iParam0, int iParam1)
{
	if (func_56() != -1)
	{
		return;
	}
	if (!func_402(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

void func_766(int iParam0)
{
	if (!func_402(iParam0))
	{
		return;
	}
	iVar0 = func_955(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

void func_767(int iParam0, int iParam1)
{
	if (!func_402(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

bool func_768(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (is_thread_active(&(Global_1934765->f_275[iVar0]), false) && &Global_1934765->f_275[iVar0] == get_id_of_this_thread())
		{
			*uParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

float func_769()
{
	return (func_681(150f, to_float(Global_1934765->f_286)) / to_float(300));
}

int func_770()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!is_thread_active(&(Global_1934765->f_275[iVar0]), false))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_771(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1116(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1117(iVar6);
	}
	return iVar5;
}

int func_772(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1118(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_773(int iParam0, bool bParam1)
{
	func_949(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_774(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 5:
			return false;
		case 7:
			return false;
		case 9:
			return true;
		case 10:
			return false;
		case 11:
			return true;
		case 8:
			return true;
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
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return false;
		default:
			break;
	}
	return false;
}

void func_775(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_773(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_776(2, *uParam0);
		}
		else
		{
			func_777(2, *uParam0);
		}
	}
	func_1119(uParam0);
}

void func_776(int iParam0, int iParam1)
{
	if (Global_1357549->f_1483 >= 25)
	{
		Global_1357549->f_1483 = 0;
	}
	Global_1357549->f_1407[Global_1357549->f_1483] = iParam0;
	Global_1357549->f_1407[Global_1357549->f_1483]->f_1 = iParam1;
	Global_1357549->f_1407[Global_1357549->f_1483]->f_2 = 0;
	Global_1357549->f_1483++;
}

void func_777(int iParam0, int iParam1)
{
	if (Global_1357549->f_1406 >= 50)
	{
		return;
	}
	if (&Global_1357549->f_1252[Global_1357549->f_1406] != 0)
	{
		return;
	}
	Global_1357549->f_1252[Global_1357549->f_1406] = iParam0;
	Global_1357549->f_1252[Global_1357549->f_1406]->f_1 = iParam1;
	Global_1357549->f_1252[Global_1357549->f_1406]->f_2 = 0;
	Global_1357549->f_1403++;
	Global_1357549->f_1406++;
}

bool func_778(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

bool func_779(int iParam0, int iParam1, bool bParam2)
{
	if (!func_509(iParam0))
	{
		return false;
	}
	if (!func_1120(iParam0))
	{
		return false;
	}
	if (func_171(iParam0, -2147483648))
	{
		return true;
	}
	if (func_171(iParam0, 1073741824))
	{
		return true;
	}
	iVar0 = func_1121(iParam1);
	if (iVar0 < (*Global_1360165)[iParam0]->f_22)
	{
		return true;
	}
	if (iVar0 == (*Global_1360165)[iParam0]->f_22)
	{
		if (bParam2)
		{
			return true;
		}
		if (!func_171(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_780(int iParam0)
{
	return func_396(iParam0, 2, 1);
}

bool func_781(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_456((*Global_1835011)[iParam0]->f_1);
}

bool func_782(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_848((*Global_1835011)[iParam0]->f_1);
}

bool func_783(int iParam0)
{
	if (Global_1934765->f_337 == 0)
	{
		return false;
	}
	iVar0 = func_1100(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 == Global_1934765->f_338;
}

void func_784(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	func_1122(iParam0, iParam1, bParam2, fParam3);
}

Vector3 func_785(int iParam0, bool bParam1)
{
	vVar0 = { 0f, 0f, 0f };
	if (!func_367(iParam0))
	{
		return vVar0;
	}
	if (_does_volume_exist((*Global_1888801)[iParam0]->f_3))
	{
		vVar0 = { _0xf70f00013a62f866((*Global_1888801)[iParam0]->f_3) };
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

void func_786(int iParam0)
{
	iVar0 = func_32();
	switch (iParam0)
	{
		case 1:
			if (iParam0 != func_141())
			{
				iVar1[0] = 633503129;
				iVar12[0] = -697307430;
				iVar12[1] = -1873685184;
				iVar12[2] = -1536198599;
			}
			else
			{
				iVar12[0] = 633503129;
				switch (iVar0)
				{
					case 0:
						iVar1[0] = -697307430;
						iVar12[1] = -1873685184;
						iVar12[2] = -1536198599;
						break;
					case 1:
						iVar1[0] = -1873685184;
						iVar12[1] = -697307430;
						iVar12[2] = -1536198599;
						break;
					case 2:
						iVar1[0] = -1536198599;
						iVar12[1] = -697307430;
						iVar12[2] = -1873685184;
						break;
				}
			}
			break;
		case 3:
			if (iParam0 != func_141())
			{
				if (!func_734(282809459) && !func_734(1626481264))
				{
					iVar1[0] = 2113454609;
					iVar12[0] = func_1123();
				}
				else
				{
					iVar1[0] = func_1123();
					iVar12[0] = 2113454609;
				}
				iVar12[1] = func_1123();
			}
			else
			{
				iVar12[0] = 2113454609;
				switch (iVar0)
				{
					case 0:
						iVar1[0] = func_1123();
						iVar12[1] = func_1123();
						break;
					case 1:
						iVar1[0] = func_1123();
						iVar12[1] = func_1123();
						break;
				}
			}
			break;
		case 2:
			if (iParam0 != func_141())
			{
				iVar1[0] = 1764814553;
				iVar12[0] = 519091847;
				iVar12[1] = -1874720370;
				iVar12[2] = -376056363;
				if (func_141() == 0 || func_141() == 1)
				{
					iVar1[1] = -1225606266;
					iVar1[2] = -648893593;
					iVar1[3] = -1496619689;
					iVar12[3] = -1936937394;
					iVar12[4] = -61896664;
				}
				else
				{
					iVar1[1] = -1936937394;
					iVar1[2] = -61896664;
					iVar12[3] = -1496619689;
					iVar12[4] = -648893593;
					iVar12[5] = -1225606266;
				}
			}
			else
			{
				iVar12[0] = 1764814553;
				switch (iVar0)
				{
					case 0:
						iVar1[0] = 519091847;
						iVar12[1] = -1874720370;
						iVar12[2] = -376056363;
						break;
					case 1:
						iVar1[0] = -1874720370;
						iVar1[1] = -61896664;
						iVar12[1] = 519091847;
						iVar12[2] = -376056363;
						iVar12[3] = -648893593;
						iVar12[4] = -1225606266;
						iVar12[5] = -1496619689;
						break;
					case 2:
						iVar1[0] = -376056363;
						iVar12[1] = 519091847;
						iVar12[2] = -1874720370;
						break;
				}
			}
			break;
		case 6:
			if (iParam0 != func_141())
			{
				if (func_487((*Global_1347702)[68]->f_15, 1))
				{
					iVar1[0] = 753181111;
					iVar12[0] = 1475089455;
				}
				else
				{
					iVar1[0] = 1475089455;
					iVar12[0] = 753181111;
				}
				iVar12[1] = 702867922;
				iVar12[2] = 913170302;
				iVar12[3] = 637861796;
			}
			else
			{
				switch (iVar0)
				{
					case 0:
						iVar1[0] = 913170302;
						iVar12[0] = 753181111;
						iVar12[1] = 1475089455;
						iVar12[2] = 702867922;
						iVar12[3] = 637861796;
						break;
					case 1:
						iVar1[0] = 637861796;
						iVar12[0] = 753181111;
						iVar12[1] = 1475089455;
						iVar12[2] = 913170302;
						iVar12[3] = 702867922;
						break;
					case 2:
						iVar1[0] = 702867922;
						iVar12[0] = 753181111;
						iVar12[1] = 1475089455;
						iVar12[2] = 913170302;
						iVar12[3] = 637861796;
						break;
				}
			}
			break;
	}
	iVar23 = 0;
	while (iVar23 < iVar1)
	{
		if (func_793(&(iVar1[iVar23])))
		{
			if (!_is_imap_active(&(iVar1[iVar23])))
			{
				_request_imap(&(iVar1[iVar23]));
			}
		}
		iVar23++;
	}
	iVar23 = 0;
	while (iVar23 < iVar12)
	{
		if (func_793(&(iVar12[iVar23])))
		{
			if (_is_imap_active(&(iVar12[iVar23])))
			{
				_remove_imap(&(iVar12[iVar23]));
			}
		}
		iVar23++;
	}
}

float func_787(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 40f;
		case 2:
			return 170f;
		case 4:
			return 50f;
		case 6:
			return 50f;
		case 3:
			return 260.5f;
		case 7:
			return 220f;
		case 5:
			return 157.25f;
		case 8:
			return 175f;
		default:
			break;
	}
	return 250f;
}

void func_788(int iParam0, bool bParam1)
{
	if (bParam1 && _0xcf45df50c7775f2a())
	{
		return;
	}
	Var2 = 9;
	Var2.f_1 = 12;
	Var2.f_1.f_13 = 12;
	Var2.f_1.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 12;
	(*Var2[5])[0] = func_1123();
	(*Var2[5])[1] = func_1123();
	(*Var2[5])[2] = func_1123();
	(*Var2[5])[3] = func_1123();
	(*Var2[5])[4] = func_1123();
	(*Var2[5])[5] = func_1123();
	(*Var2[5])[6] = func_1123();
	(*Var2[5])[7] = func_1123();
	(*Var2[5])[8] = func_1123();
	(*Var2[5])[9] = func_1123();
	(*Var2[5])[10] = func_1123();
	(*Var2[5])[11] = func_1123();
	if (func_848((*Global_1835011)[59]->f_1))
	{
		(*Var2[6])[0] = func_1123();
	}
	else
	{
		(*Var2[6])[0] = -828094297;
	}
	(*Var2[6])[1] = 1561231200;
	(*Var2[6])[2] = -407402757;
	(*Var2[6])[3] = -1849681615;
	(*Var2[6])[4] = -981684452;
	(*Var2[6])[5] = 1547347496;
	(*Var2[6])[6] = -1966238128;
	if ((func_456((*Global_1835011)[58]->f_1) || func_848((*Global_1835011)[58]->f_1)) || func_487((*Global_1835011)[58]->f_1, 1))
	{
		(*Var2[6])[7] = func_1123();
		if (_is_imap_active(-1437554707))
		{
			_remove_imap(-1437554707);
		}
	}
	else
	{
		(*Var2[6])[7] = -1437554707;
	}
	if (func_848((*Global_1835011)[58]->f_1) || func_456((*Global_1835011)[58]->f_1))
	{
		if (_is_imap_active(-1310355638))
		{
			_remove_imap(-1310355638);
		}
		(*Var2[6])[8] = 1387226336;
	}
	else
	{
		if (_is_imap_active(1387226336))
		{
			_remove_imap(1387226336);
		}
		(*Var2[6])[8] = -1310355638;
	}
	(*Var2[6])[9] = -149795084;
	(*Var2[6])[10] = -419935200;
	(*Var2[6])[11] = -1496155572;
	(*Var2[0])[0] = 1289304923;
	(*Var2[0])[1] = -584714922;
	(*Var2[0])[2] = func_1123();
	(*Var2[0])[3] = func_1123();
	(*Var2[0])[4] = func_1123();
	(*Var2[0])[5] = func_1123();
	(*Var2[0])[6] = func_1123();
	(*Var2[0])[7] = func_1123();
	(*Var2[0])[8] = func_1123();
	(*Var2[0])[9] = func_1123();
	(*Var2[0])[10] = func_1123();
	(*Var2[0])[11] = func_1123();
	(*Var2[2])[0] = 1706275010;
	(*Var2[2])[1] = 1290371072;
	(*Var2[2])[2] = 1734859244;
	(*Var2[2])[3] = 1309652195;
	(*Var2[2])[4] = -1291679096;
	(*Var2[2])[5] = 1676971154;
	(*Var2[2])[6] = func_1124();
	(*Var2[2])[7] = -1841279810;
	(*Var2[2])[8] = func_1125();
	(*Var2[2])[9] = func_1126();
	(*Var2[2])[10] = func_1127();
	(*Var2[2])[11] = func_1128();
	(*Var2[4])[0] = func_1123();
	(*Var2[4])[1] = func_1123();
	(*Var2[4])[2] = func_1123();
	(*Var2[4])[3] = func_1123();
	(*Var2[4])[4] = func_1123();
	(*Var2[4])[5] = func_1123();
	(*Var2[4])[6] = func_1123();
	(*Var2[4])[7] = func_1123();
	(*Var2[4])[8] = func_1123();
	(*Var2[4])[9] = func_1123();
	(*Var2[4])[10] = func_1123();
	(*Var2[4])[11] = func_1123();
	(*Var2[1])[0] = 288413571;
	(*Var2[1])[1] = -441619793;
	(*Var2[1])[2] = -1916602073;
	(*Var2[1])[3] = func_1129();
	(*Var2[1])[4] = -80564929;
	(*Var2[1])[5] = -676881895;
	(*Var2[1])[6] = -1445186253;
	(*Var2[1])[7] = -1893724593;
	(*Var2[1])[8] = func_1130();
	(*Var2[1])[9] = func_1131();
	(*Var2[1])[10] = func_1123();
	(*Var2[1])[11] = func_1123();
	(*Var2[3])[0] = 923572416;
	(*Var2[3])[1] = -555683060;
	(*Var2[3])[2] = -1828030290;
	(*Var2[3])[3] = -960337247;
	(*Var2[3])[4] = -299265919;
	(*Var2[3])[5] = func_1123();
	(*Var2[3])[6] = func_1123();
	(*Var2[3])[7] = func_1123();
	(*Var2[3])[8] = func_1123();
	(*Var2[3])[9] = func_1123();
	(*Var2[3])[10] = func_1123();
	(*Var2[3])[11] = func_1123();
	(*Var2[7])[0] = func_1132();
	(*Var2[7])[1] = 764025611;
	(*Var2[7])[2] = func_1123();
	(*Var2[7])[3] = func_1123();
	(*Var2[7])[4] = func_1123();
	(*Var2[7])[5] = func_1123();
	(*Var2[7])[6] = func_1123();
	(*Var2[7])[7] = func_1123();
	(*Var2[7])[8] = func_1123();
	(*Var2[7])[9] = func_1123();
	(*Var2[7])[10] = func_1123();
	(*Var2[7])[11] = func_1123();
	(*Var2[8])[0] = func_1123();
	(*Var2[8])[1] = func_1123();
	(*Var2[8])[2] = func_1123();
	(*Var2[8])[3] = func_1123();
	(*Var2[8])[4] = func_1123();
	(*Var2[8])[5] = func_1123();
	(*Var2[8])[6] = func_1123();
	(*Var2[8])[7] = func_1123();
	(*Var2[8])[8] = func_1123();
	(*Var2[8])[9] = func_1123();
	(*Var2[8])[10] = func_1123();
	(*Var2[8])[11] = func_1123();
	if (iParam0 != 0)
	{
		func_1133(-1170496998, 0, 0);
	}
	if (iParam0 == 7)
	{
		if (!func_265(2))
		{
			if (func_396(13, 4, 1))
			{
				func_1134(128);
				func_1135(126);
			}
			else
			{
				func_1134(126);
				func_1135(128);
			}
		}
		func_1135(129);
	}
	else
	{
		func_1134(127);
		func_1134(126);
		func_1134(128);
		func_1134(129);
	}
	if (func_143(44))
	{
		func_1135(28);
		func_1134(27);
	}
	else
	{
		func_1135(27);
		func_1134(28);
	}
	func_1136(1, bParam1);
	if (iParam0 == 3)
	{
		if (_is_imap_active(809554858))
		{
			_remove_imap(809554858);
		}
		func_1135(2);
		func_1135(7);
		func_1135(8);
		func_1134(1);
	}
	else
	{
		func_1134(2);
		func_1134(7);
		func_1134(8);
	}
	if (iParam0 == 3 && func_872(-1515028452, 1, 0) == 0)
	{
		func_1135(10);
	}
	else
	{
		func_1134(10);
	}
	if (iParam0 == 3 && func_872(-520532433, 1, 0) == 0)
	{
		func_1135(9);
	}
	else
	{
		func_1134(9);
	}
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 4) || iParam0 == 7) || iParam0 == 8)
	{
		if (func_487((*Global_1347702)[83]->f_15, 1))
		{
			func_1135(4);
		}
	}
	else
	{
		func_1134(4);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Var2[iVar0][iVar1] != func_1123())
			{
				if (iParam0 == iVar0 && func_32() == 1)
				{
					if (!_is_imap_active(Var2[iVar0][iVar1]))
					{
						_request_imap(Var2[iVar0][iVar1]);
					}
				}
				else if (_is_imap_active(Var2[iVar0][iVar1]))
				{
					_remove_imap(Var2[iVar0][iVar1]);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

bool func_789(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_790(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_206(vParam0))
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
		if (func_789(vParam0))
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
	if (iParam7 != 0)
	{
		_0xb440f4e35393fc39(iVar0, iParam7);
	}
	if (fParam9 >= 0f)
	{
		_0xd460135c98940274(iVar0, fParam9);
	}
	func_1137(iVar0, bParam8);
	return iVar0;
}

void func_791(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			if (func_781(58) || func_143(58))
			{
				_0x3743ce6948194349("AZ_camp_dark_mood_zone", 2358f, 1360f, 108f, 0f);
			}
			break;
	}
}

int func_792(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return -1395712024;
		case 1:
			return -1611076340;
		case 2:
			return 2108368013;
		case 6:
			return -1162254606;
		case 3:
			return -412827149;
		default:
			break;
	}
	return func_1123();
}

bool func_793(int iParam0)
{
	return iParam0 != 0;
}

void func_794(int iParam0)
{
	func_1138(iParam0);
	iVar9 = 0;
	while (iVar9 <= 2)
	{
		if (func_1139(iParam0, iVar9))
		{
			func_1140(iParam0);
			Var0 = { func_1141(iParam0, iVar9) };
			iVar8 = func_1142(iParam0, iVar9);
			func_1143(iVar8, 1);
			if (func_32() == iVar9)
			{
				if (!_0x5ac0944c156e5f44(&Var0))
				{
					_0x7c334ff4d9215912(&Var0);
				}
				if (!_is_imap_active(iVar8))
				{
					_request_imap(iVar8);
				}
			}
			else
			{
				if (_0x5ac0944c156e5f44(&Var0))
				{
					_0x527b97c203bb8606(&Var0);
				}
				if (_is_imap_active(iVar8))
				{
					_remove_imap(iVar8);
				}
			}
		}
		iVar9++;
	}
}

void func_795(int iParam0, bool bParam1)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 1:
			sVar0 = "HSO_PLAYER_CHORES";
			break;
	}
	if (is_string_null_or_empty(sVar0) == 0)
	{
		if (bParam1)
		{
			if (does_scenario_group_exist(sVar0) && !is_scenario_group_enabled(sVar0))
			{
				set_scenario_group_enabled(sVar0, true);
			}
		}
		else if (is_scenario_group_enabled(sVar0))
		{
			set_scenario_group_enabled(sVar0, false);
		}
	}
}

void func_796(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_390(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 27)
		{
			iVar1 = 0;
			while (iVar1 < 6)
			{
				func_392(iParam1, iVar0, iVar1, bParam2, bParam3);
				iVar1++;
			}
			iVar0++;
		}
	}
}

void func_797(int iParam0, int iParam1)
{
	if (func_390(iParam0))
	{
		*iParam1 = func_792(iParam0);
		if (func_793(*iParam1))
		{
			if (_is_imap_active(*iParam1))
			{
				_remove_imap(*iParam1);
			}
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_1139(iParam0, iVar0))
			{
				Var1 = { func_1141(iParam0, iVar0) };
				*iParam1 = func_1142(iParam0, iVar0);
				func_1143(*iParam1, 0);
				if (_0x5ac0944c156e5f44(&Var1))
				{
					_0x527b97c203bb8606(&Var1);
				}
				if (func_793(*iParam1))
				{
					if (_is_imap_active(*iParam1))
					{
						_remove_imap(*iParam1);
					}
				}
			}
			iVar0++;
		}
		iVar11 = 0;
		while (iVar11 < 27)
		{
			iVar9 = func_1144(iParam0, iVar11, 0);
			iVar10 = func_1144(iParam0, iVar11, 1);
			if (func_793(iVar9))
			{
				if (_is_imap_active(iVar9))
				{
					_remove_imap(iVar9);
				}
			}
			if (func_793(iVar10))
			{
				if (_is_imap_active(iVar10))
				{
					_remove_imap(iVar10);
				}
			}
			iVar11++;
		}
	}
}

void func_798(vector3 vParam0, int iParam3)
{
	if (func_206(vParam0))
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
			if (func_1025(vVar2, vParam0, 2f, 1))
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

char* func_799(int iParam0)
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

char* func_800(int iParam0)
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

bool func_801()
{
	iVar0 = Global_40.f_4283;
	if (iVar0 == 4 || iVar0 == 7)
	{
		return false;
	}
	if (iVar0 == 0 && Global_40.f_4283.f_4 == 2)
	{
		return false;
	}
	if (iVar0 == 5)
	{
		if (!func_487((*Global_1835011)[44]->f_1, 1))
		{
			return false;
		}
	}
	return true;
}

bool func_802(int iParam0)
{
	if (Global_40.f_4942[iParam0]->f_59 != 0)
	{
		return true;
	}
	return false;
}

bool func_803(int iParam0)
{
	return func_396(iParam0, 4, 1);
}

int func_804(int iParam0)
{
	iVar0 = 0;
	if (!func_509(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (Global_1357549->f_1675[iVar1]->f_1 == iParam0)
			{
				(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
				return &(Global_1357549->f_1675[iVar1]);
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (&Global_1357549->f_1675[iVar1] != 0 && Global_1357549->f_1675[iVar1]->f_1 == -1)
		{
			iVar0 = &Global_1357549->f_1675[iVar1];
			Jump @165; //curOff = 150
		}
		iVar1++;
	}
	if (!func_509(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549->f_1675[iVar1]->f_1 = iParam0;
			(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
		}
	}
	return iVar0;
}

struct<4> func_805(bool bParam0)
{
	return func_945(1328661203, func_1145(), -1591664384, bParam0);
}

bool func_806(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_490(bParam7);
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

bool func_807(var uParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(func_490(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_808(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_253)
	{
		if (is_bit_set(*uParam1, iVar0))
		{
		}
		else if (is_bit_set(uParam0->f_255, iVar0))
		{
		}
		else if (uParam0->f_9[iVar0]->f_8 != 0)
		{
			if (!func_606(uParam0->f_9[iVar0]->f_8))
			{
			}
			else if (uParam0->f_9[iVar0]->f_1 == 0)
			{
			}
			else if (!has_model_loaded(uParam0->f_9[iVar0]->f_1))
			{
				return false;
			}
			iVar0++;
			return true;
		}
	}
}

bool func_809()
{
	if (&Global_1879534)
	{
		return false;
	}
	if (func_126(0, 1, 0))
	{
		return true;
	}
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (Global_40.f_4942[iVar1]->f_59 != 0)
		{
			iVar0 = func_867(Global_40.f_4942[iVar1]->f_59);
			bVar2 = false;
			switch (iVar0)
			{
				case 8:
					if (!func_1147(func_1146(Global_40.f_4942[iVar1]->f_59), 0))
					{
						bVar2 = true;
					}
					break;
				default:
					if (!func_456(Global_40.f_4942[iVar1]->f_59))
					{
						bVar2 = true;
					}
					break;
			}
			if (bVar2)
			{
				Global_40.f_4942[iVar1]->f_59 = 0;
				func_538(iVar1, 512, 1);
			}
		}
		iVar1++;
	}
	return true;
}

bool func_810(int iParam0, bool bParam1)
{
	iVar0 = 1;
	bVar1 = func_393();
	iVar2 = func_371(iParam0);
	iVar3 = 0;
	while (iVar3 < 27)
	{
		if (!func_510(iVar3, 4, 1))
		{
			if (func_394(iVar3))
			{
				iVar4 = 0;
				if (bVar1 && func_396(iVar3, 32768, 1))
				{
					iVar4 = 1;
				}
				if (!func_1148(iVar3, iVar4, iVar2, 0, bParam1))
				{
					iVar0 = 0;
				}
				else if (bParam1 && !func_338(iVar3))
				{
					if (func_179(iVar3, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1) != 0)
					{
						func_513(iVar3, 4, 1);
					}
				}
				else
				{
					func_513(iVar3, 4, 1);
				}
			}
			else
			{
				if (((func_1149(iVar3) && !func_338(iVar3)) && !func_802(iVar3)) && iVar3 != Global_1357549->f_1497)
				{
					func_758(iVar3, 0, 0, 0, 0);
				}
				func_513(iVar3, 4, 1);
			}
		}
		iVar3++;
	}
	return iVar0;
}

bool func_811(int iParam0)
{
	iVar0 = 1;
	if (!func_344(iParam0, &uVar2, &iVar3, 0, 1))
	{
		return true;
	}
	bVar4 = iParam0 == 22;
	iVar1 = uVar2;
	while (iVar1 <= iVar3)
	{
		if (!func_402(iVar1))
		{
		}
		else if (func_368(iVar1, 32) && iParam0 != 22)
		{
		}
		else
		{
			iVar5 = func_955(iVar1);
			if (!func_325(iVar5, 0))
			{
				func_1150(iVar1, 0);
				_0x6759bee6762e140b(func_761(iVar1));
				if (func_1151(iVar1, 0, 0, 0, 0, 1))
				{
					return false;
				}
				iVar0 = 0;
			}
			else
			{
				if (bVar4 && func_1152(iVar5))
				{
					if (!decor_exist_on(iVar5, "CaravanLivestock"))
					{
						decor_set_bool(iVar5, "CaravanLivestock", true);
					}
				}
				set_ped_relationship_group_hash(iVar5, -1538724068);
				func_765(iVar1, 128);
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_812(var uParam0)
{
	if (!func_400(uParam0->f_45))
	{
		return true;
	}
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_1357549->f_1675[iVar1] = func_401(iVar1);
		if (&Global_1357549->f_1675[iVar1] == 0)
		{
		}
		else if (!func_1153(iVar1))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_813(var uParam0)
{
	iVar0 = 1;
	if (Global_40.f_4283.f_567)
	{
		vVar1 = { 0f, 0f, 0f };
		iVar6 = 0;
		if (uParam0->f_45 == Global_40.f_4283.f_567.f_1)
		{
			vVar1 = { Global_40.f_4283.f_567.f_2 };
			uVar4 = Global_40.f_4283.f_567.f_5;
			iVar5 = func_225(vVar1, 2);
		}
		else
		{
			iVar5 = func_461();
			if (!func_206(_get_scenario_point_coords(iVar5, true)))
			{
				vVar1 = { _get_scenario_point_coords(iVar5, true) };
			}
		}
		if (!func_206(vVar1))
		{
			iVar6 = func_399();
			if (!does_entity_exist(Global_1357549->f_1897))
			{
				if (iVar6 != 0)
				{
					if (has_model_loaded(iVar6))
					{
						Global_1357549->f_1897 = func_1154(iVar6, vVar1, uVar4, 1, 1, Global_40.f_4283.f_567.f_6, 1, 0, 1, 0, 0, 0, 0);
					}
					else
					{
						request_model(iVar6, false);
					}
				}
				iVar0 = 0;
			}
			else
			{
				set_model_as_no_longer_needed(iVar6);
				_0xc9151483cc06a414(Global_1357549->f_1897);
				_task_use_scenario_point(Global_1357549->f_1897, iVar5, 0, 0, false, true, 0, false, -1f, false);
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_814(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_815(var uParam0)
{
	switch (func_141())
	{
		case 1:
			uParam0->f_14 = _blip_add_for_coord(168093330, -125.3398f, -43.2379f, 94.3833f);
			uParam0->f_15 = _blip_add_for_coord(168093330, -149.5986f, -20.2218f, 95.1022f);
			uParam0->f_13 = _blip_add_for_coord(168093330, -138.8856f, -21.4424f, 95.0883f);
			break;
		case 2:
			uParam0->f_14 = _blip_add_for_coord(168093330, 647.7324f, -1245.42f, 42.7703f);
			uParam0->f_15 = _blip_add_for_coord(168093330, 658.9856f, -1229.287f, 43.2276f);
			uParam0->f_13 = _blip_add_for_coord(168093330, 677.5646f, -1254.409f, 43.0152f);
			break;
		case 3:
			uParam0->f_14 = _blip_add_for_coord(168093330, 1906.91f, -1862.294f, 46.3492f);
			uParam0->f_15 = _blip_add_for_coord(168093330, 1886.88f, -1884.633f, 41.8302f);
			uParam0->f_13 = _blip_add_for_coord(168093330, 1877.423f, -1861.41f, 41.8078f);
			break;
	}
	if (does_blip_exist(uParam0->f_14))
	{
		set_blip_sprite(uParam0->f_14, 1576459965, true);
		set_blip_flash_timer(uParam0->f_14, 69, -1);
		func_651(uParam0->f_14, func_262());
	}
	if (does_blip_exist(uParam0->f_15))
	{
		set_blip_sprite(uParam0->f_15, -695368421, true);
		set_blip_flash_timer(uParam0->f_15, 70, -1);
		func_651(uParam0->f_15, func_262());
	}
	if (does_blip_exist(uParam0->f_13))
	{
		set_blip_sprite(uParam0->f_13, -1852063472, true);
		set_blip_flash_timer(uParam0->f_13, 71, -1);
		func_651(uParam0->f_13, func_262());
	}
}

char* func_816(int iParam0)
{
	return _0x2b6846401d68e563(to_float(iParam0), 0);
}

void func_817(char* sParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			StringCopy(sParam0, "ABI_TITHE", 16);
			break;
		case 1:
			StringCopy(sParam0, "JACK1_TITHE", 16);
			break;
		case 2:
			StringCopy(sParam0, "JACK2_TITHE", 16);
			break;
		case 3:
			StringCopy(sParam0, "CHAR1_TITHE", 16);
			break;
		case 4:
			StringCopy(sParam0, "CHAR2_TITHE", 16);
			break;
		case 5:
			StringCopy(sParam0, "CHAR3_TITHE", 16);
			break;
		case 6:
			StringCopy(sParam0, "CHAR4_TITHE", 16);
			break;
		case 7:
			StringCopy(sParam0, "SUSAN1_TITHE", 16);
			break;
		case 8:
			StringCopy(sParam0, "SUSAN2_TITHE", 16);
			break;
		case 9:
			StringCopy(sParam0, "SWANS_TITHE", 16);
			break;
		case 10:
			StringCopy(sParam0, "PEARS1_TITHE", 16);
			break;
		case 11:
			StringCopy(sParam0, "PEARS2_TITHE", 16);
			break;
		case 12:
			StringCopy(sParam0, "JAVIER_TITHE", 16);
			break;
		case 13:
			StringCopy(sParam0, "BILL_TITHE", 16);
			break;
		case 14:
			StringCopy(sParam0, "SEAN_TITHE", 16);
			break;
		case 15:
			StringCopy(sParam0, "KIER_TITHE", 16);
			break;
		case 16:
			StringCopy(sParam0, "TILLY_TITHE", 16);
			break;
		case 17:
			StringCopy(sParam0, "HOSEA1_TITHE", 16);
			break;
		case 18:
			StringCopy(sParam0, "HOSEA2_TITHE", 16);
			break;
		case 19:
			StringCopy(sParam0, "LENNY1_TITHE", 16);
			break;
		case 20:
			StringCopy(sParam0, "LENNY2_TITHE", 16);
			break;
		case 21:
			StringCopy(sParam0, "UNCLE_TITHE", 16);
			break;
		case 22:
			StringCopy(sParam0, "MARY1_TITHE", 16);
			break;
		case 23:
			StringCopy(sParam0, "MARY2_TITHE", 16);
			break;
		case 24:
			StringCopy(sParam0, "TREWL_TITHE", 16);
			break;
		case 25:
			StringCopy(sParam0, "MOLLY_TITHE", 16);
			break;
		case 26:
			StringCopy(sParam0, "STRAU_TITHE", 16);
			break;
		case 27:
			StringCopy(sParam0, "KAREN_TITHE", 16);
			break;
		case 28:
			StringCopy(sParam0, "DUTCH_TITHE", 16);
			break;
		case 29:
			StringCopy(sParam0, "SADIE_TITHE", 16);
			break;
		case 30:
			StringCopy(sParam0, "MICAH_TITHE", 16);
			break;
	}
}

void func_818(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 1;
			break;
		case 1:
			*uParam1 = 2;
			break;
		case 2:
			*uParam1 = 4;
			break;
		case 3:
			*uParam1 = 8;
			break;
		case 4:
			*uParam1 = 16;
			break;
		case 5:
			*uParam1 = 32;
			break;
		case 6:
			*uParam1 = 64;
			break;
		case 7:
			*uParam1 = 128;
			break;
		case 8:
			*uParam1 = 256;
			break;
		case 9:
			*uParam1 = 512;
			break;
		case 10:
			*uParam1 = 1024;
			break;
		case 11:
			*uParam1 = 2048;
			break;
		case 12:
			*uParam1 = 4096;
			break;
		case 13:
			*uParam1 = 8192;
			break;
		case 14:
			*uParam1 = 16384;
			break;
		case 15:
			*uParam1 = 32768;
			break;
		case 16:
			*uParam1 = 65536;
			break;
		case 17:
			*uParam1 = 131072;
			break;
		case 18:
			*uParam1 = 262144;
			break;
		case 19:
			*uParam1 = 524288;
			break;
		case 20:
			*uParam1 = 1048576;
			break;
		case 21:
			*uParam1 = 2097152;
			break;
		case 22:
			*uParam1 = 4194304;
			break;
		case 23:
			*uParam1 = 8388608;
			break;
		case 24:
			*uParam1 = 16777216;
			break;
		case 25:
			*uParam1 = 33554432;
			break;
		case 26:
			*uParam1 = 67108864;
			break;
		case 27:
			*uParam1 = 134217728;
			break;
		case 28:
			*uParam1 = 268435456;
			break;
		case 29:
			*uParam1 = 536870912;
			break;
		case 30:
			*uParam1 = 1073741824;
			break;
	}
}

void func_819(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 13;
			break;
		case 1:
			*uParam1 = 14;
			break;
		case 2:
			*uParam1 = 14;
			break;
		case 3:
			*uParam1 = 7;
			break;
		case 4:
			*uParam1 = 7;
			break;
		case 5:
			*uParam1 = 7;
			break;
		case 6:
			*uParam1 = 7;
			break;
		case 7:
			*uParam1 = 19;
			break;
		case 8:
			*uParam1 = 19;
			break;
		case 9:
			*uParam1 = 21;
			break;
		case 10:
			*uParam1 = 17;
			break;
		case 11:
			*uParam1 = 17;
			break;
		case 12:
			*uParam1 = 2;
			break;
		case 13:
			*uParam1 = 3;
			break;
		case 14:
			*uParam1 = 8;
			break;
		case 15:
			*uParam1 = 10;
			break;
		case 16:
			*uParam1 = 22;
			break;
		case 17:
			*uParam1 = 5;
			break;
		case 18:
			*uParam1 = 5;
			break;
		case 19:
			*uParam1 = 9;
			break;
		case 20:
			*uParam1 = 9;
			break;
		case 21:
			*uParam1 = 4;
			break;
		case 22:
			*uParam1 = 15;
			break;
		case 23:
			*uParam1 = 15;
			break;
		case 24:
			*uParam1 = 23;
			break;
		case 25:
			*uParam1 = 16;
			break;
		case 26:
			*uParam1 = 18;
			break;
		case 27:
			*uParam1 = 20;
			break;
		case 28:
			*uParam1 = 0;
			break;
		case 29:
			*uParam1 = 11;
			break;
		case 30:
			*uParam1 = 6;
			break;
	}
}

bool func_820(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

void func_821(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_822(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_823(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_40.f_4283.f_2 = (Global_40.f_4283.f_2 - (Global_40.f_4283.f_2 && iParam0));
			break;
	}
}

bool func_824(int iParam0)
{
	vVar0 = { func_648(iParam0) };
	if (func_206(vVar0))
	{
		return false;
	}
	return true;
}

void func_825(var uParam0)
{
	uVar0 = _databinding_add_data_container_from_path("", "Ledger");
	*uParam0 = _databinding_add_data_int(uVar0, "CampId", 1);
	uVar1 = _databinding_add_data_container(uVar0, "RtSpreadTop");
	func_1155(uVar1, uParam0->f_1[0]);
	uVar2 = _databinding_add_data_container(uVar0, "RtSpreadBottom");
	func_1155(uVar2, uParam0->f_1[1]);
	uVar3 = _databinding_add_data_container_from_path("", "DynamicCatalogItems");
	uVar3 = _databinding_add_data_container(uVar3, "CatalogItemInspection");
	func_1156(uVar3, &(uParam0->f_476));
	uParam0->f_487 = _databinding_add_data_int(uVar0, "CampMoneyDonated", func_149());
	uParam0->f_488 = _databinding_add_data_string(uVar0, "CampMoneyLevel", "");
}

void func_826(var uParam0)
{
	iVar0 = func_141();
	uParam0->f_498[0] = 0;
	uParam0->f_498[0]->f_1 = -1;
	uParam0->f_498[0]->f_2 = -1;
	uParam0->f_498[0]->f_3 = -1;
	uParam0->f_498[0]->f_4 = 1;
	uParam0->f_498[0]->f_5 = -1;
	uParam0->f_498[0]->f_6 = -1;
	uParam0->f_498[0]->f_7 = -1;
	uParam0->f_498[1] = -1;
	uParam0->f_498[1]->f_1 = 1;
	uParam0->f_498[1]->f_2 = -1;
	uParam0->f_498[1]->f_3 = -1;
	uParam0->f_498[1]->f_4 = -1;
	uParam0->f_498[1]->f_5 = 0;
	uParam0->f_498[1]->f_6 = -1;
	uParam0->f_498[1]->f_7 = -1;
	uParam0->f_498[2] = -1;
	uParam0->f_498[2]->f_1 = 2;
	uParam0->f_498[2]->f_2 = -1;
	uParam0->f_498[2]->f_3 = -1;
	uParam0->f_498[2]->f_4 = -1;
	uParam0->f_498[2]->f_5 = 3;
	uParam0->f_498[2]->f_6 = -1;
	uParam0->f_498[2]->f_7 = -1;
	uParam0->f_498[3] = -1;
	uParam0->f_498[3]->f_1 = -1;
	uParam0->f_498[3]->f_2 = 7;
	uParam0->f_498[3]->f_3 = 5;
	uParam0->f_498[3]->f_4 = -1;
	uParam0->f_498[3]->f_5 = -1;
	uParam0->f_498[3]->f_6 = 6;
	if (iVar0 == 1)
	{
		uParam0->f_498[3]->f_7 = -1;
	}
	else
	{
		uParam0->f_498[3]->f_7 = 4;
	}
}

int func_827(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 4;
		case 2:
			return 2;
		case 3:
			return 6;
		case 5:
			return 5;
		case 6:
			return 0;
		case 4:
			return 3;
		case 7:
			return 7;
		case 8:
			return 15;
	}
	return -1;
}

void func_828(var uParam0)
{
	uParam0->f_531[1] = 1259027903;
	uParam0->f_531[1]->f_1 = 0;
	uParam0->f_531[1]->f_2[0] = -371380166;
	uParam0->f_531[1]->f_2[0]->f_1 = 1185646829;
	uParam0->f_531[1]->f_2[0]->f_2 = 0;
	uParam0->f_531[1]->f_2[0]->f_3 = -1;
	uParam0->f_531[1]->f_2[1] = -681440444;
	uParam0->f_531[1]->f_2[1]->f_1 = 2020699256;
	uParam0->f_531[1]->f_2[1]->f_2 = 525024705;
	uParam0->f_531[1]->f_2[1]->f_3 = func_1157(30);
	uParam0->f_531[1]->f_2[2] = 125037415;
	uParam0->f_531[1]->f_2[2]->f_1 = -1412836568;
	uParam0->f_531[1]->f_2[2]->f_2 = 682446981;
	uParam0->f_531[1]->f_2[2]->f_3 = func_1157(50);
	uParam0->f_531[1]->f_2[3] = -105033734;
	uParam0->f_531[1]->f_2[3]->f_1 = 1568913053;
	uParam0->f_531[1]->f_2[3]->f_2 = 1181715465;
	uParam0->f_531[1]->f_2[3]->f_3 = func_1157(75);
	uParam0->f_531[1]->f_2[4] = 0;
	uParam0->f_531[1]->f_2[4]->f_1 = 0;
	uParam0->f_531[1]->f_2[4]->f_2 = 2099654106;
	uParam0->f_531[1]->f_2[4]->f_3 = -1;
	uParam0->f_531[1]->f_23 = 1;
	uParam0->f_531[1]->f_24[0] = func_1157(15);
	uParam0->f_531[1]->f_24[1] = func_1157(25);
	uParam0->f_531[1]->f_24[2] = func_1157(45);
	uParam0->f_531[1]->f_24[3] = func_1157(75);
	uParam0->f_531[0] = 1069539174;
	uParam0->f_531[0]->f_1 = 0;
	uParam0->f_531[0]->f_2[0] = -1163134641;
	uParam0->f_531[0]->f_2[0]->f_1 = -57804606;
	uParam0->f_531[0]->f_2[0]->f_2 = 0;
	uParam0->f_531[0]->f_2[0]->f_3 = -1;
	uParam0->f_531[0]->f_2[1] = -1946608662;
	uParam0->f_531[0]->f_2[1]->f_1 = 926019081;
	uParam0->f_531[0]->f_2[1]->f_2 = 482064073;
	uParam0->f_531[0]->f_2[1]->f_3 = func_1157(30);
	uParam0->f_531[0]->f_2[2] = -1651982583;
	uParam0->f_531[0]->f_2[2]->f_1 = 552518019;
	uParam0->f_531[0]->f_2[2]->f_2 = 905767243;
	uParam0->f_531[0]->f_2[2]->f_3 = func_1157(45);
	uParam0->f_531[0]->f_2[3] = -542883057;
	uParam0->f_531[0]->f_2[3]->f_1 = 1002010396;
	uParam0->f_531[0]->f_2[3]->f_2 = 432025806;
	uParam0->f_531[0]->f_2[3]->f_3 = func_1157(55);
	uParam0->f_531[0]->f_2[4] = 0;
	uParam0->f_531[0]->f_2[4]->f_1 = 0;
	uParam0->f_531[0]->f_2[4]->f_2 = 2099654106;
	uParam0->f_531[0]->f_2[4]->f_3 = -1;
	uParam0->f_531[0]->f_23 = 1;
	uParam0->f_531[0]->f_24[0] = func_1157(15);
	uParam0->f_531[0]->f_24[1] = func_1157(25);
	uParam0->f_531[0]->f_24[2] = func_1157(40);
	uParam0->f_531[0]->f_24[3] = func_1157(50);
	uParam0->f_531[2] = -2146471150;
	uParam0->f_531[2]->f_1 = 0;
	uParam0->f_531[2]->f_2[0] = 1973763900;
	uParam0->f_531[2]->f_2[0]->f_1 = 1507459390;
	uParam0->f_531[2]->f_2[0]->f_2 = 0;
	uParam0->f_531[2]->f_2[0]->f_3 = -1;
	uParam0->f_531[2]->f_2[1] = 1201857340;
	uParam0->f_531[2]->f_2[1]->f_1 = 1813751233;
	uParam0->f_531[2]->f_2[1]->f_2 = -1620504213;
	uParam0->f_531[2]->f_2[1]->f_3 = func_1157(60);
	uParam0->f_531[2]->f_2[2] = 374407321;
	uParam0->f_531[2]->f_2[2]->f_1 = 2101200901;
	uParam0->f_531[2]->f_2[2]->f_2 = -1314015756;
	uParam0->f_531[2]->f_2[2]->f_3 = func_1157(90);
	uParam0->f_531[2]->f_2[3] = 679585018;
	uParam0->f_531[2]->f_2[3]->f_1 = -1884656418;
	uParam0->f_531[2]->f_2[3]->f_2 = 2137248097;
	uParam0->f_531[2]->f_2[3]->f_3 = func_1157(110);
	uParam0->f_531[2]->f_2[4] = 0;
	uParam0->f_531[2]->f_2[4]->f_1 = 0;
	uParam0->f_531[2]->f_2[4]->f_2 = 2099654106;
	uParam0->f_531[2]->f_2[4]->f_3 = -1;
	uParam0->f_531[2]->f_23 = 1;
	uParam0->f_531[2]->f_24[0] = func_1157(8);
	uParam0->f_531[2]->f_24[1] = func_1157(10);
	uParam0->f_531[2]->f_24[2] = func_1157(15);
	uParam0->f_531[2]->f_24[3] = func_1157(20);
	uParam0->f_531[3] = -2087690276;
	uParam0->f_531[3]->f_1 = 0;
	uParam0->f_531[3]->f_2[0] = 840935239;
	uParam0->f_531[3]->f_2[0]->f_1 = 1470166745;
	uParam0->f_531[3]->f_2[0]->f_2 = 0;
	uParam0->f_531[3]->f_2[0]->f_3 = -1;
	uParam0->f_531[3]->f_2[1] = 2020258780;
	uParam0->f_531[3]->f_2[1]->f_1 = 1123011959;
	uParam0->f_531[3]->f_2[1]->f_2 = 548799892;
	uParam0->f_531[3]->f_2[1]->f_3 = func_1157(220);
	uParam0->f_531[3]->f_2[2] = 1187500183;
	uParam0->f_531[3]->f_2[2]->f_1 = 742826021;
	uParam0->f_531[3]->f_2[2]->f_2 = 1316282641;
	uParam0->f_531[3]->f_2[2]->f_3 = func_1157(325);
	uParam0->f_531[3]->f_2[3] = 181229727;
	uParam0->f_531[3]->f_2[3]->f_1 = -1952031021;
	uParam0->f_531[3]->f_2[3]->f_2 = -2076291933;
	uParam0->f_531[3]->f_2[3]->f_3 = func_1157(300);
	uParam0->f_531[3]->f_2[4] = 0;
	uParam0->f_531[3]->f_2[4]->f_1 = 0;
	uParam0->f_531[3]->f_2[4]->f_2 = 2099654106;
	uParam0->f_531[3]->f_2[4]->f_3 = -1;
	uParam0->f_531[3]->f_23 = 0;
	uParam0->f_531[4] = 2108789685;
	uParam0->f_531[4]->f_1 = 0;
	uParam0->f_531[4]->f_2[1]->f_1 = -912712840;
	uParam0->f_531[4]->f_2[1]->f_2 = -1497934411;
	uParam0->f_531[4]->f_2[1]->f_3 = func_1157(450);
	uParam0->f_531[4]->f_2[2]->f_1 = 0;
	uParam0->f_531[4]->f_2[2]->f_2 = 2099654106;
	uParam0->f_531[4]->f_2[2]->f_3 = -1;
	uParam0->f_531[4]->f_23 = 0;
	uParam0->f_531[5] = -480748016;
	uParam0->f_531[5]->f_1 = 0;
	uParam0->f_531[5]->f_2[1]->f_1 = -1503751759;
	uParam0->f_531[5]->f_2[1]->f_2 = -492500419;
	uParam0->f_531[5]->f_2[1]->f_3 = func_1157(175);
	uParam0->f_531[5]->f_2[2]->f_1 = 0;
	uParam0->f_531[5]->f_2[2]->f_2 = 2099654106;
	uParam0->f_531[5]->f_2[2]->f_3 = -1;
	uParam0->f_531[5]->f_23 = 0;
	uParam0->f_531[6] = 2011014118;
	uParam0->f_531[6]->f_1 = 0;
	uParam0->f_531[6]->f_2[1]->f_1 = 2107034732;
	uParam0->f_531[6]->f_2[1]->f_2 = 351632167;
	uParam0->f_531[6]->f_2[1]->f_3 = func_1157(225);
	uParam0->f_531[6]->f_2[2]->f_1 = 0;
	uParam0->f_531[6]->f_2[2]->f_2 = 2099654106;
	uParam0->f_531[6]->f_2[2]->f_3 = -1;
	uParam0->f_531[6]->f_23 = 0;
	uParam0->f_531[7] = -594525626;
	uParam0->f_531[7]->f_1 = 0;
	uParam0->f_531[7]->f_2[1]->f_1 = 2006016232;
	uParam0->f_531[7]->f_2[1]->f_2 = 385851330;
	uParam0->f_531[7]->f_2[1]->f_3 = func_1157(300);
	uParam0->f_531[7]->f_2[2]->f_1 = 0;
	uParam0->f_531[7]->f_2[2]->f_2 = 2099654106;
	uParam0->f_531[7]->f_2[2]->f_3 = -1;
	uParam0->f_531[7]->f_23 = 0;
}

bool func_829()
{
	iVar0 = func_1158();
	return iVar0 <= -160;
}

bool func_830()
{
	iVar0 = func_1158();
	return iVar0 >= 160;
}

var func_831()
{
	return Global_23118.f_1768;
}

bool func_832(int iParam0)
{
	if (func_56() != -1)
	{
		return false;
	}
	if (!func_473(iParam0))
	{
		return false;
	}
	return func_487((*Global_1347702)[iParam0]->f_15, 1);
}

float func_833()
{
	return Global_1357549->f_1900;
}

int func_834(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_531[iVar0]->f_2[iVar1]->f_3 != -1)
			{
				iVar2 = (iVar2 + uParam0->f_531[iVar0]->f_2[iVar1]->f_3);
			}
			iVar1++;
		}
		iVar0++;
	}
	return iVar2 * 100;
}

bool func_835()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

bool func_836()
{
	iVar0 = func_141();
	if (iVar0 == 6 || iVar0 == 5)
	{
		return false;
	}
	if (iVar0 == 3 && !func_143(28))
	{
		return false;
	}
	if ((((func_227(-625309660, 0) || func_227(-218211995, 0)) || func_227(443165194, 0)) || func_227(1685749736, 0)) || func_835())
	{
		return true;
	}
	return false;
}

int func_837(int iParam0)
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

int func_838(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_839(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1158();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1159(iParam0);
		}
		if (does_entity_exist(iParam5))
		{
			if (decor_exist_on(iParam5, "honor_override"))
			{
				iParam0 = (decor_get_int(iParam5, "honor_override") * -1);
				decor_remove(iParam5, "honor_override");
			}
			else if (decor_exist_on(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - decor_get_int(iParam5, "honor_bank"));
				decor_set_int(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_649(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_142())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = ceil((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = floor((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_1160(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1158();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1161(iVar1);
		func_1163(func_1162(), 0, 4000);
		func_1164(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_1165(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_636(func_1166(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_838(14))
				{
					sVar7 = "Honor_Increase_Big";
					animpostfx_play("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (is_string_null_or_empty(sParam4))
				{
					sParam4 = func_1167(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_1085(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1085(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_636(func_1166(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_838(4))
				{
					sVar7 = "Honor_Decrease_Big";
					animpostfx_play("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (is_string_null_or_empty(sParam4))
				{
					sParam4 = func_1167(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_1085(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1085(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_1166(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_1168(10, 1);
	}
}

void func_840(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

bool func_841(int iParam0, bool bParam1)
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

bool func_842(int iParam0)
{
	return ((iParam0 == Global_1357549->f_1497 && Global_1357549->f_1497.f_5 >= 4) && Global_1357549->f_1497.f_5 < 11);
}

int func_843(int iParam0, bool bParam1)
{
	if (!func_477(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		return 0;
	}
	if (is_entity_dead(Global_1360165[iParam0]))
	{
		return 0;
	}
	if (func_339(iParam0, 0))
	{
		func_1169(iParam0, 1);
		return 1;
	}
	if (!func_1170())
	{
		return 0;
	}
	if (bParam1)
	{
		func_514(iParam0, 0, "Adding to Group");
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == -1)
		{
			(*Global_1359489)[iVar0] = iParam0;
		}
		else
		{
			iVar0++;
		}
	}
	func_1169(iParam0, 1);
	Global_1359489->f_15 = func_751(1);
	func_513(iParam0, 32, 1);
	set_ped_relationship_group_hash(Global_1360165[iParam0], -1247684992);
	set_ped_combat_attributes(Global_1360165[iParam0], 83, true);
	_0x9238a3d970bbb0a9(Global_1360165[iParam0], -1972074710);
	set_ped_config_flag(Global_1360165[iParam0], 152, true);
	if (_0xb7e0590c86e1711f(get_player_group(get_player_index())) != 234527101)
	{
		_0x0de02da3c0f66955(func_172(iParam0), _0xb7e0590c86e1711f(get_player_group(get_player_index())));
		_0x61bda07407754a5c(func_172(iParam0), Global_1391438->f_414.f_37);
	}
	_0x89e59dbd15e21177(func_749(), 0);
	func_1171(iParam0);
	Var1 = get_player_ped(get_player_index());
	Var1.f_12 = 3;
	Var1.f_3 = Global_1360165[iParam0];
	Var1.f_7 = func_128();
	Var1.f_8 = 0;
	Var1.f_11 = 10;
	Var1.f_14 = Global_1360165[iParam0];
	_0x88bc5f4aef77fc4e(&Var1, 17);
	return 1;
}

Vector3 func_844(vector3 vParam0, float fParam3)
{
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

Vector3 func_845(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, float fParam10, int iParam11, int iParam12, bool bParam13)
{
	fVar2 = 9999999f;
	func_1172(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1040() == 0 && !func_1173(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1174(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1175();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_252(Global_1310720->f_21))
	{
		fParam10 = iParam11;
	}
	Var15.f_2 = 723128514;
	_datafile_get_data_node_index(&uVar25, &Var15);
	while (_datafile_get_num_children(Var15, uVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		_datafile_get_data_node_index(&uVar26, &Var20);
		while (_datafile_get_num_children(Var20, uVar26) > iVar1)
		{
			vVar7 = { func_1176(iVar0, iVar1) };
			bVar11 = func_1177(iVar0, iVar1);
			fVar3 = vdist(vParam0, vVar7);
			if (((((fVar3 < fVar2 && fVar3 > fParam10) && !func_206(vVar7)) && func_1178(iVar0, bParam8, iParam12)) && !func_1179(iVar0)) || bVar11)
			{
				if (func_1180(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 };
					fVar2 = vdist(vParam0, vVar7);
					*iParam3 = iVar0;
					*iParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					_0x748c5f51a18cb8f0(1);
					return vVar4;
				}
			}
		}
	}
}

void func_846(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_1181(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_1182(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (is_string_null_or_empty(&((*Global_1934603)[iVar0]->f_10)))
		{
			*(*Global_1934603)[iVar0] = { Param0 };
			Global_1934603->f_161++;
			func_1183(iParam16);
			return;
		}
		iVar0++;
	}
}

void func_847(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

bool func_848(int iParam0)
{
	iVar0 = func_879(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_849(int iParam0, bool bParam1, int iParam2)
{
	if (!func_477(iParam0))
	{
		return false;
	}
	if (bParam1 && !func_1149(iParam0))
	{
		return false;
	}
	if (iParam2 == -1)
	{
		return true;
	}
	iVar0 = iParam2;
	if (func_737(iVar0, 1))
	{
		if (func_1184(iParam0) && !func_1185(iParam0))
		{
			return true;
		}
	}
	if (func_737(iVar0, 2))
	{
		if (!func_1184(iParam0))
		{
			return true;
		}
	}
	if (func_737(iVar0, 4))
	{
		if (func_1185(iParam0))
		{
			return true;
		}
	}
	if (func_737(iVar0, 8))
	{
		if (func_1186(iParam0) && !func_1185(iParam0))
		{
			return true;
		}
	}
	if (func_737(iVar0, 16))
	{
		if (!func_1186(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_850(int iParam0)
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
	if (func_442(iParam0, 1041577989))
	{
		return false;
	}
	if (is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_851(int iParam0, vector3 vParam1)
{
	vVar0 = { get_entity_coords(iParam0, true, false) };
	vVar3 = { vVar0 + get_entity_forward_vector(iParam0) };
	return func_1187(vVar0, vVar3, vParam1);
}

bool func_852(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_853(int iParam0, int iParam1)
{
	func_1188(iParam0, iParam1);
}

bool func_854(int iParam0, int iParam1)
{
	if (!func_442(iParam0, 1041577989))
	{
		return true;
	}
	fVar0 = _0xa710dc5d25f8b942(iParam0, 1041577989);
	if (func_737(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return true;
		}
		return false;
	}
	if (func_737(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return true;
		}
		return false;
	}
	if (func_737(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_855(int iParam0, int iParam1)
{
	func_821(iParam0, iParam1);
}

Vector3 func_856(vector3 vParam0)
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

bool func_857(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_858(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_1189(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_859(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (_0x9a100f1cf4546629(iParam0) || _0xc346a546612c49a9(iParam0))
	{
		iVar0 = func_1190(iParam0);
		if (!func_871(iVar0, 0))
		{
			iVar0 = func_1191(iParam0);
		}
	}
	else
	{
		iVar0 = func_1191(iParam0);
	}
	return iVar0;
}

int func_860(int iParam0, int iParam1, int iParam2)
{
	if (!func_871(iParam0, 0))
	{
		return 0;
	}
	*iParam2 = 0;
	Var0 = { func_1192(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, 0, 0) };
	iVar11 = _item_database_create_item_collection(&Var0, &iVar10, 1);
	if (iVar11 != -1)
	{
		iVar12 = 0;
		while (iVar12 < iVar10)
		{
			if (_0x8750f69a720c2e41(iVar11, iVar12, &iVar13))
			{
				if (func_1193(iVar13, iParam1, &Var14, &iVar45, 1, 0))
				{
					iVar46 = 0;
					while (iVar46 < iVar45)
					{
						if (iParam0 == &Var14[iVar46])
						{
							*iParam2 = (*iParam2 + Var14[iVar46]->f_1);
						}
						iVar46++;
					}
				}
			}
			iVar12++;
		}
		_0xcbb7b6edfa933ade(iVar11);
	}
	return 1;
}

bool func_861(int iParam0)
{
	if ((func_874(iParam0, -839724752) || func_874(iParam0, -887064662)) || func_874(iParam0, 1286414894))
	{
		return true;
	}
	return false;
}

int func_862(int iParam0)
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
	}
	return 0;
}

int func_863(int iParam0, int iParam1)
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

int func_864()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

int func_865(int iParam0)
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

int func_866(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_867(int iParam0)
{
	if (!func_475(iParam0))
	{
		return 0;
	}
	return func_1194(func_865(iParam0));
}

int func_868(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_1195(iVar0);
}

int func_869(int iParam0, int iParam1)
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

bool func_870()
{
	if (Global_1946804->f_2793)
	{
		return true;
	}
	if (absi((get_game_timer() - Global_1946804->f_2791)) < 1250)
	{
		return true;
	}
	if (func_1196())
	{
		return true;
	}
	if (_0xec7e480ff8bd0bed(Global_35))
	{
		return true;
	}
	return false;
}

bool func_871(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_872(int iParam0, int iParam1, bool bParam2)
{
	if (!func_871(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_981(iParam0);
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
		if (!func_1197(iParam0, 1))
		{
			return false;
		}
	}
	return func_646(iParam0, 0, bParam2) >= iParam1;
}

int func_873(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_483(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_874(int iParam0, int iParam1)
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

int func_875()
{
	iVar0 = 1549701178;
	switch (func_1198())
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

int func_876()
{
	iVar0 = 614608656;
	switch (func_1198())
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

int func_877()
{
	iVar0 = -1832677570;
	switch (func_1198())
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

int func_878()
{
	iVar0 = 1623252156;
	switch (func_1198())
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

int func_879(int iParam0)
{
	if (!func_475(iParam0))
	{
		return -1;
	}
	return func_858(iParam0);
}

struct<2> func_880(float fParam0)
{
	if (fParam0 <= 30f)
	{
		StringCopy(&cVar0, "~COLOR_RED~", 16);
	}
	else if (fParam0 <= 75f)
	{
		StringCopy(&cVar0, "~COLOR_WHITE~", 16);
	}
	else
	{
		StringCopy(&cVar0, "~COLOR_YELLOW~", 16);
	}
	return cVar0;
}

bool func_881(var uParam0)
{
	if ((is_ped_in_any_vehicle(player_ped_id(), false) && !is_ped_in_any_boat(Global_35)) && _0x4e76cb57222a00e5(Global_35) == -1)
	{
		*uParam0 = get_vehicle_ped_is_in(player_ped_id(), false);
		if (is_entity_a_mission_entity(*uParam0))
		{
			return false;
		}
		return true;
	}
	return false;
}

void func_882(int iParam0, int iParam1)
{
	if (iParam0->f_3483.f_1 != iParam1)
	{
		iParam0->f_3483.f_1 = iParam1;
	}
}

bool func_883(bool bParam0, float fParam1, int iParam2, float fParam3)
{
	if (!is_ped_in_any_vehicle(Global_35, false))
	{
		return true;
	}
	iVar0 = get_vehicle_ped_is_in(Global_35, false);
	if (is_entity_dead(iVar0))
	{
		return true;
	}
	func_1199(1);
	if (!is_vehicle_stopped(iVar0) && !_0x404527bc03da0e6c(iVar0))
	{
		bring_vehicle_to_halt(iVar0, fParam1, iParam2, false);
	}
	else
	{
		fVar1 = get_entity_speed(iVar0);
		if (absf(fVar1) <= fParam3)
		{
			func_1200(&iVar0);
			if (!bParam0)
			{
				return true;
			}
			else if (!func_442(Global_35, -828834893))
			{
				task_leave_any_vehicle(Global_35, 0, 0);
			}
		}
	}
	return false;
}

bool func_884(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_885(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_509(iParam0))
	{
		return 0;
	}
	iVar0 = get_clock_hours() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (func_487((*Global_1835011)[4]->f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (func_1201(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (func_487((*Global_1347702)[63]->f_15, 1) || func_848((*Global_1347702)[63]->f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (func_1201(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!func_487((*Global_1835011)[14]->f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_396(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_1201(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (func_487((*Global_1347702)[134]->f_15, 1) || func_848((*Global_1347702)[134]->f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					if (func_487((*Global_1835011)[38]->f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				default:
					iVar1[0] = 1593315648;
					break;
			}
			break;
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_1201(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				case 11:
					iVar1[0] = -2051275045;
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar7 = 2;
					break;
				case 14:
					iVar1[0] = -426171916;
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				case 4:
					if (func_227(747937920, 1) && !func_487((*Global_1347702)[1]->f_15, 1))
					{
						iVar1[0] = -1155031950;
					}
					else
					{
						iVar1[0] = -1341683964;
					}
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar1[2] = 1484386316;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -1092189504;
					iVar1[1] = 80515440;
					iVar7 = 2;
					break;
				case 4:
					iVar1[0] = -1341683964;
					iVar1[1] = 867156718;
					iVar7 = 2;
					break;
				case 7:
					iVar1[0] = -1341683964;
					iVar1[1] = 1484386316;
					iVar7 = 2;
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
	}
	if (bParam3 && does_entity_exist(func_172(iParam0)))
	{
		iVar10 = 0;
		while (iVar10 < iVar7)
		{
			if (&iVar1[iVar10] == Global_40.f_4942[iParam0]->f_3)
			{
				bVar9 = true;
				iVar8 = Global_40.f_4942[iParam0]->f_3;
			}
			iVar10++;
		}
	}
	if (!bVar9)
	{
		iVar11 = 0;
		if (iVar7 > 0 && bParam2)
		{
			iVar11 = get_random_int_in_range(0, iVar7);
		}
		iVar8 = &iVar1[iVar11];
	}
	if (!func_520(iParam0, iVar8))
	{
		iVar8 = Global_40.f_4942[iParam0]->f_3;
	}
	return iVar8;
}

bool func_886(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return true;
		default:
			break;
	}
	return false;
}

bool func_887(int iParam0, bool bParam1)
{
	if (!func_509(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_338(iParam0) || func_510(iParam0, 44, 1))
		{
			return false;
		}
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1) || !_0xa8120ebeaf290c7a((*Global_1360165)[iParam0]->f_1))
	{
		return false;
	}
	iVar0 = _0xec254c2c9b0f08f1((*Global_1360165)[iParam0]->f_1, (*Global_1360165)[iParam0]->f_47);
	return iVar0 == -285580801;
}

struct<7> func_888(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_3 = { vParam2 };
	Var0.f_2 = uParam8;
	Var0.f_6 = 0;
	if (bParam5)
	{
		set_bit(&(Var0.f_6), 0);
	}
	if (bParam6)
	{
		set_bit(&(Var0.f_6), 1);
	}
	if (bParam7)
	{
		set_bit(&(Var0.f_6), 2);
	}
	if (bParam9)
	{
		set_bit(&(Var0.f_6), 3);
	}
	return Var0;
}

void func_889(int iParam0, bool bParam1)
{
	if (!func_509(iParam0))
	{
		return;
	}
	iVar0 = func_172(iParam0);
	func_1202(iVar0);
	func_513(iParam0, 60, 1);
	if (bParam1)
	{
		func_1203(iParam0);
	}
}

void func_890(int iParam0, bool bParam1)
{
	if (!func_509(iParam0))
	{
		return;
	}
	iVar0 = func_172(iParam0);
	func_1204(iVar0);
	func_410(iParam0, 60, 1);
	if (bParam1)
	{
		func_1205(iParam0);
	}
}

void func_891(int iParam0, bool bParam1)
{
	if (!func_509(iParam0))
	{
		return;
	}
	iVar0 = func_172(iParam0);
	func_1206(iVar0);
	if (iParam0 == 14)
	{
		func_1207(iVar0);
	}
	func_513(iParam0, 61, 1);
	if (bParam1)
	{
		func_1208(iParam0);
	}
}

void func_892(int iParam0, bool bParam1)
{
	if (!func_509(iParam0))
	{
		return;
	}
	iVar0 = func_172(iParam0);
	func_1209(iVar0);
	func_410(iParam0, 61, 1);
	if (bParam1)
	{
		func_1210(iParam0);
	}
}

int func_893(var uParam0)
{
	return uParam0;
}

bool func_894(int iParam0)
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

bool func_895(int iParam0, int iParam1)
{
	if (!func_509(iParam0))
	{
		return false;
	}
	func_1211(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_65[iVar0]), iVar1);
}

bool func_896(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

int func_897(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 178615350:
			return 331645018;
		case 2094043703:
			return -1395382793;
		case -695701225:
			return -1090160065;
		case 404503428:
			return -1704514526;
		case -1268239471:
			return -1832874334;
		case -1874208704:
			return 1680324116;
		case 1593315648:
			return 989578874;
		case -1559986688:
			return 174754238;
		case 1071744295:
			return -2065784734;
		case 977450639:
			return 2111449038;
		case 1901494236:
			return 1245083301;
		case 713940276:
			return -1949892659;
		case 1744281750:
			return -663077666;
		case 283037683:
			return 1996046145;
		case -2051275045:
			return -306710010;
		case 1495063555:
			return -339275545;
		case 1046468203:
			return 393090546;
		case 1018353621:
			return 114272443;
		case -433615745:
			return 643643053;
		case 777603945:
			return -328334844;
		case -1668922931:
			return -1915831038;
		case -1341683964:
			return 1689938120;
		case 928493661:
			return 861275228;
		case 431390894:
			return -20643141;
		case -301101630:
			return -1187204983;
		case -1155031950:
			return 1883650185;
		case -1248623443:
			return -1437962122;
		case 350498312:
			return 1959714099;
		case -481967001:
			return 1833893952;
		case 513932985:
			return 505715365;
		case -193269670:
			return -1774801049;
		case -1684458716:
			return 1976273473;
		case -973332710:
			return -2045878709;
		case 1658153743:
			return -2072429185;
		case 1842975347:
			return 491764525;
		case -1678882891:
			return -1638703055;
		case -268604689:
			return -1496612359;
		case 1818898449:
			return 30596609;
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return 41788943;
				default:
					break;
			}
			return -99272505;
		case 1205492208:
			return 1598276604;
		case 1199580439:
			return -1443192745;
		case -310473775:
			return -877585857;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case 296923297:
			iVar0 = func_1212(296923297, iParam1);
			return func_1213(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_1212(1237718549, iParam1);
			return func_1213(iVar0);
		case -23947011:
			return -456769142;
		case 1295334688:
			return 869636257;
		case 1200878026:
			return 1560123389;
		case -1692022104:
			return -1851470579;
		case 707545953:
			return 890352471;
		case -1532979576:
			return 1391951221;
		case -1642335258:
			return -1491647079;
		case 876797088:
			return 1309207681;
		case -1587546924:
			return -1303789247;
		case 961676983:
			return -1527307534;
		case 1300659195:
			return -309158751;
		case -571427255:
			return -251280159;
		case 837028314:
			return -20984612;
		case -1394723994:
			return -1857650992;
		case -1335291723:
			return -1120526485;
		case -445211559:
			return -757536090;
		case -946772361:
			return 646599895;
		case 1950972546:
			return -1699183538;
		case -1092189504:
			return 389057251;
		case 80515440:
			return -2137653778;
		case 6418928:
			return -211106360;
		case -1648322231:
			return 1074183062;
		case -1065026089:
			return 1087308308;
		case 2062813606:
			return 1709174532;
		case 876535472:
			return -1916145078;
		case -1205468859:
			return -757536090;
		case 1484386316:
			return -800489594;
		case 1254970547:
			return -211106360;
		case 867156718:
			return 241911854;
		case -426171916:
			return 41788943;
	}
	return 41788943;
}

bool func_898(int iParam0, int iParam1)
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

bool func_899(int iParam0, int iParam1)
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

bool func_900(int iParam0, int iParam1)
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
	if (!func_898(iParam0, iVar0))
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

void func_901(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_902(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam1) || is_entity_dead(iParam1))
	{
		return;
	}
	if (_is_metaped_using_component(iParam1, 1933068772))
	{
		_set_ped_component_disabled(iParam1, 1933068772, 1);
	}
	if (_is_metaped_using_component(iParam1, 494009478))
	{
		_set_ped_component_disabled(iParam1, 494009478, 1);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1 > 0 && func_898(iParam1, 860729266))
	{
		_set_ped_body_component(iParam1, 860729266);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4096 > 0 && func_898(iParam1, 879715242))
	{
		_set_ped_body_component(iParam1, 879715242);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 128 > 0 && func_898(iParam1, 1606325429))
	{
		_set_ped_body_component(iParam1, 1606325429);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 256 > 0 && func_898(iParam1, 1743550585))
	{
		_set_ped_body_component(iParam1, 1743550585);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 512 > 0 && func_898(iParam1, 1064646155))
	{
		_set_ped_body_component(iParam1, 1064646155);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1024 > 0 && func_898(iParam1, -536694793))
	{
		_set_ped_body_component(iParam1, -536694793);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2048 > 0 && func_898(iParam1, -1304053509))
	{
		_set_ped_body_component(iParam1, -1304053509);
	}
	if (Global_40.f_4942[iParam0]->f_5 & -2147483648 > 0 && func_898(iParam1, 718939204))
	{
		_set_ped_body_component(iParam1, 718939204);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 65536 > 0 && func_898(iParam1, -972364774))
	{
		_set_ped_body_component(iParam1, -972364774);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16384 > 0 && func_898(iParam1, -1100875244))
	{
		if (_is_metaped_using_component(iParam1, -134124598))
		{
			_set_ped_component_disabled(iParam1, -134124598, 1);
		}
		if (_is_metaped_using_component(iParam1, 2071466316))
		{
			_set_ped_component_disabled(iParam1, 2071466316, 1);
		}
		_set_ped_body_component(iParam1, -1100875244);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 262144 > 0 && func_898(iParam1, 1153596794))
	{
		_set_ped_body_component(iParam1, 1153596794);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 524288 > 0 && func_898(iParam1, 1016389820))
	{
		_set_ped_body_component(iParam1, 1016389820);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1048576 > 0 && func_898(iParam1, -726966617))
	{
		_set_ped_body_component(iParam1, -726966617);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2097152 > 0 && func_898(iParam1, 1365901568))
	{
		_set_ped_body_component(iParam1, 1365901568);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 32768 > 0 && func_898(iParam1, -1658942149))
	{
		_set_ped_body_component(iParam1, -1658942149);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 131072 > 0 && func_898(iParam1, -1980913856))
	{
		_set_ped_body_component(iParam1, -1980913856);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4194304 > 0 && func_898(iParam1, 491764525))
	{
		_set_ped_body_component(iParam1, 491764525);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8388608 > 0 && func_898(iParam1, -76015264))
	{
		_set_ped_body_component(iParam1, -76015264);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16777216 > 0 && func_898(iParam1, 622113465))
	{
		_set_ped_body_component(iParam1, 622113465);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 33554432 > 0 && func_898(iParam1, 781533162))
	{
		_set_ped_body_component(iParam1, 781533162);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 67108864 > 0 && func_898(iParam1, -271415321))
	{
		_set_ped_body_component(iParam1, -271415321);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 134217728 > 0 && func_898(iParam1, -1683207356))
	{
		_set_ped_body_component(iParam1, -1683207356);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 268435456 > 0 && func_898(iParam1, -254794762))
	{
		_set_ped_body_component(iParam1, -254794762);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 536870912 > 0 && func_898(iParam1, 609066278))
	{
		_set_ped_body_component(iParam1, 609066278);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1073741824 > 0 && func_898(iParam1, -1712783565))
	{
		_set_ped_body_component(iParam1, -1712783565);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8192 > 0 && func_898(iParam1, 1544915253))
	{
		_set_ped_body_component(iParam1, 1544915253);
	}
	if (bParam2)
	{
		(*Global_1360165)[iParam0]->f_57 = 1;
	}
}

void func_903(int iParam0)
{
	func_1214(iParam0, 1);
	func_1214(iParam0, 128);
	func_1214(iParam0, 256);
	func_1214(iParam0, 512);
	func_1214(iParam0, 1024);
	func_1214(iParam0, 2048);
	func_1214(iParam0, 4096);
	func_1214(iParam0, 65536);
	func_1214(iParam0, 16384);
	func_1214(iParam0, 262144);
	func_1214(iParam0, 524288);
	func_1214(iParam0, 1048576);
	func_1214(iParam0, 2097152);
	func_1214(iParam0, 32768);
	func_1214(iParam0, 131072);
	func_1214(iParam0, 134217728);
	func_1214(iParam0, 1073741824);
}

void func_904(int iParam0, bool bParam1)
{
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		return;
	}
	if (!bParam1)
	{
		if (decor_exist_on(Global_1360165[iParam0], "wearing_bandana"))
		{
			decor_remove(Global_1360165[iParam0], "wearing_bandana");
		}
	}
	else if (!decor_exist_on(Global_1360165[iParam0], "wearing_bandana"))
	{
		decor_set_bool(Global_1360165[iParam0], "wearing_bandana", true);
	}
}

void func_905(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

int func_906(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_1215(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_1215(iVar4) && iVar4 != iVar0)
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
	if (func_56() == -1 && !func_1216(iVar0))
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
				if (func_1216(-183018591))
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
		if (iParam0 != Global_35 && func_1215(iVar0))
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
		func_1217(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_1218(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_1219(iVar0))
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

int func_907(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_door_registered_with_system(iParam0))
	{
		if ((network_is_in_session() && _does_thread_exist(&(Global_1051081->f_15[0]))) && bParam1)
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
		else
		{
			_0xd99229fe93b46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((network_is_in_session() && _does_thread_exist(&(Global_1051081->f_15[0]))) && bParam1)
	{
		if (!_0xb5ded7b65c604fdf(iParam0))
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		_0x1f1fabfe9b2a1254(iParam0, 1);
	}
	return iParam0;
}

void func_908(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_907(iParam0, 0, 0);
	if (func_971(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_1220(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_1221(iParam0, 1);
			}
			else
			{
				func_1222(iParam0, 1);
			}
		}
		else
		{
			func_1223(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_1224())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_909(int iParam0)
{
	if (!func_509(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_395(iParam0);
		if (iVar0 != 0)
		{
			(*Global_1360165)[iParam0]->f_1 = _create_persistent_character(iVar0);
			_0xfcc6db8dbe709bc8((*Global_1360165)[iParam0]->f_1);
		}
		else
		{
			(*Global_1360165)[iParam0]->f_1 = 0;
		}
	}
}

void func_910(int iParam0)
{
	if (func_477(iParam0))
	{
		if (does_entity_exist(func_172(iParam0)))
		{
			func_529(iParam0, 67108864, 1);
			func_410(iParam0, 19, 1);
		}
	}
}

float func_911(int iParam0)
{
	if (!func_509(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_912(int iParam0)
{
	iVar0 = func_172(iParam0);
	iVar1 = func_534(iParam0, 0);
	func_1114(iParam0, iVar0);
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			_0xf008e0ba1fe1d644(1);
			bVar2 = true;
			set_entity_as_mission_entity(iVar0, true, true);
		}
		_0x7b204f88f6c3d287(iVar1);
		if (bVar2)
		{
			_0x7d4e70a67a651c71(1);
		}
	}
	_0xfcc6db8dbe709bc8(iVar1);
}

bool func_913(int iParam0)
{
	if (!func_509(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_914(int iParam0, int iParam1, bool bParam2)
{
	if (!func_509(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		(*Global_1360165)[iParam0]->f_70.f_1 = ((*Global_1360165)[iParam0]->f_70.f_1 || iParam1);
	}
	else
	{
		(*Global_1360165)[iParam0]->f_70.f_1 = ((*Global_1360165)[iParam0]->f_70.f_1 - ((*Global_1360165)[iParam0]->f_70.f_1 && iParam1));
	}
}

int func_915(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_509(iParam0))
	{
		return 0;
	}
	iVar0 = func_131(iParam0);
	if (func_325(iVar0, 0))
	{
		if (func_325(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_478(iParam0)) || func_913(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_1225(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_397(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_1226(iParam0);
					_0x7b204f88f6c3d287(func_759(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_759(iParam0, 0));
					func_1227(iParam0);
				}
			}
			else
			{
				if (func_396(iParam0, 32768, 1))
				{
					iVar2 = func_759(iParam0, 0);
					_0xb65e7f733956cf25(iVar2);
					_0xfcc6db8dbe709bc8(iVar2);
				}
				else
				{
					set_ped_as_no_longer_needed(&iVar0);
				}
				set_blocking_of_non_temporary_events(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_325((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_396(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_1226(iParam0);
				_0x7b204f88f6c3d287(func_759(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_759(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_1226(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_1228(iParam0, 0);
	return 1;
}

void func_916(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_917(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_918(int iParam0)
{
	switch (func_56())
	{
		case -1:
			return (Global_40.f_4283.f_2 && iParam0) != 0;
	}
	return false;
}

void func_919(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*iParam1 = 19;
	*iParam2 = 30;
	switch (iParam0)
	{
		case 0:
			*iParam3 = 22;
			*iParam4 = 20;
			break;
		case 1:
			*iParam3 = 22;
			*iParam4 = 55;
			break;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*iParam3 = 23;
			*iParam4 = 30;
			break;
		case 11:
			*iParam3 = 22;
			*iParam4 = 30;
			break;
		case 10:
		case 12:
			*iParam3 = 2;
			*iParam4 = 55;
			break;
		case 13:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 14:
			*iParam3 = 0;
			*iParam4 = 50;
			break;
		case 15:
		case 16:
			*iParam3 = 23;
			*iParam4 = 50;
			break;
		case 17:
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 18:
		case 19:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 20:
		case 21:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 22:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 23:
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			*iParam3 = 22;
			*iParam4 = 30;
			break;
		case 34:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 35:
		case 36:
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 37:
		case 38:
		case 39:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 32:
		case 33:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 2:
		case 3:
			*iParam3 = 23;
			*iParam4 = 5;
			break;
	}
}

void func_920(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*iParam1 = 19;
	*iParam2 = 30;
	switch (iParam0)
	{
		case 0:
			*iParam3 = 23;
			*iParam4 = 30;
			break;
		case 1:
			*iParam3 = 22;
			*iParam4 = 55;
			break;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*iParam3 = 3;
			*iParam4 = 40;
			break;
		case 10:
		case 12:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 11:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 13:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 14:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 15:
		case 16:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 17:
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 18:
		case 19:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 20:
		case 21:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 22:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 23:
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 34:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 35:
		case 36:
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 37:
		case 38:
		case 39:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 32:
		case 33:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 2:
		case 3:
			*iParam3 = 3;
			*iParam4 = 0;
			break;
	}
}

void func_921(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*iParam1 = 19;
	*iParam2 = 30;
	switch (iParam0)
	{
		case 0:
			*iParam3 = 22;
			*iParam4 = 20;
			break;
		case 1:
			*iParam3 = 22;
			*iParam4 = 55;
			break;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*iParam3 = 23;
			*iParam4 = 30;
			break;
		case 10:
		case 12:
			*iParam3 = 2;
			*iParam4 = 55;
			break;
		case 13:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 14:
			*iParam3 = 0;
			*iParam4 = 50;
			break;
		case 15:
		case 16:
			*iParam3 = 23;
			*iParam4 = 50;
			break;
		case 17:
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 18:
		case 19:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 20:
		case 21:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 22:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 23:
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			*iParam3 = 22;
			*iParam4 = 30;
			break;
		case 34:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 35:
		case 36:
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 37:
		case 38:
		case 39:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 32:
		case 33:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 11:
			*iParam3 = 22;
			*iParam4 = 30;
			break;
		case 2:
		case 3:
			*iParam3 = 23;
			*iParam4 = 5;
			break;
	}
}

void func_922(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*iParam1 = 19;
	*iParam2 = 30;
	switch (iParam0)
	{
		case 0:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 1:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 11:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 10:
		case 12:
			*iParam3 = 0;
			*iParam4 = 0;
			break;
		case 13:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 14:
			*iParam3 = 0;
			*iParam4 = 50;
			break;
		case 15:
		case 16:
			*iParam3 = 23;
			*iParam4 = 50;
			break;
		case 17:
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 18:
		case 19:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 20:
		case 21:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 22:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 23:
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			*iParam3 = 22;
			*iParam4 = 30;
			break;
		case 34:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 35:
		case 36:
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 37:
		case 38:
		case 39:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 32:
		case 33:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 2:
		case 3:
			*iParam3 = 0;
			*iParam4 = 0;
			break;
	}
}

int func_923(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = get_clock_hours();
	iVar1 = get_clock_minutes();
	if (iVar0 == iParam0)
	{
		if (iVar1 < iParam1)
		{
			return 0;
		}
	}
	if (iVar0 == iParam2)
	{
		if (iVar1 > iParam3)
		{
			return 0;
		}
	}
	if (iVar0 < iParam0)
	{
		return 0;
	}
	if (iVar0 > iParam2)
	{
		return 0;
	}
	return 1;
}

int func_924(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = get_clock_hours();
	iVar1 = get_clock_minutes();
	if (iVar0 < iParam0 && iVar0 > iParam2)
	{
		return 0;
	}
	if (iVar0 == iParam0)
	{
		if (iVar1 < iParam1)
		{
			return 0;
		}
	}
	if (iVar0 == iParam2)
	{
		if (iVar1 > iParam3)
		{
			return 0;
		}
	}
	return 1;
}

int func_925(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = get_clock_minutes();
	if (iVar0 > iParam3)
	{
		return 0;
	}
	if (iVar0 < iParam1)
	{
		return 0;
	}
	return 1;
}

void func_926(int iParam0, float fParam1)
{
	switch (get_entity_model(iParam0))
	{
		case -1279776992:
		case -1179266405:
		case -689630872:
		case 312012583:
			_0xc8e21c1677dc5e6f(iParam0, fParam1);
			break;
	}
}

char* func_927(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_928(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1229(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_929(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_930(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_931(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_932(int iParam0, int iParam1)
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

void func_933(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1230(iParam0, iParam6);
	func_1231(iParam0, iParam5);
	func_1232(iParam0, iParam4);
	func_1233(iParam0, iParam3);
	func_1234(iParam0, iParam2);
	func_1235(iParam0, iParam1);
}

bool func_934(int iParam0, int iParam1)
{
	if (func_56() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_935(int iParam0)
{
	if (func_56() != -1)
	{
		if (func_937(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_937(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_936(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_937(iParam0, 65536) && !func_937(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_937(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_937(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_937(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_938()
{
	return Global_1905944->f_5694;
}

bool func_939(int iParam0)
{
	return func_558(iParam0, 2);
}

void func_940(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_558(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_941(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_942(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

int func_943(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return 559905966;
	}
	switch (iParam0)
	{
		case -450053710:
			return 1538827865;
		case -1679658797:
			return -1792561227;
		case 1792770814:
			return 1033678910;
		case -1963397600:
			return -1942141178;
		case -1250098797:
			return 671599957;
		case -318278790:
			return -1554935503;
		case 55096099:
			return 694610769;
		case -458397856:
			return 1941463607;
		case -444610976:
			return -887316537;
		case 746627200:
			return 1762474047;
		case 705691988:
			return -828859553;
		case 2130094044:
			return 1410237043;
		case -1554827654:
			return -2026073756;
		case 604357666:
			return 729407854;
		case -1029277326:
			return 2002245664;
		case -1140650619:
			return -1120227140;
		case -1999198818:
			return 1142681594;
		case 1496579364:
			return 1214981718;
		case -1523757120:
			return -845373950;
		case -403470324:
			return -864588185;
		case 1576849913:
			return 1482814085;
		case -925223936:
			return -1040918754;
		case -1547438906:
			return 535545841;
		case -635239558:
			return 1686036388;
		case -2026265047:
			return -621245377;
		case -586898625:
			return 2125477381;
		case 937246805:
			return 1808724704;
		case 1593035738:
			return -1745871311;
		case 861505058:
			return -1366099125;
		case 687445866:
			return -1900776854;
		case 1705182311:
			return 1381855825;
		case -78273782:
			return -470894301;
		case -819697512:
			return -58297715;
		case -247265944:
			return 919533729;
		case -1516219602:
			return -1158763155;
		case -1265030920:
			return 1112812928;
		case 2024948086:
			return 753764318;
		case 1696286663:
			return 2100045093;
		case -1342159303:
			return 1097965086;
		case -1154406788:
			return -2136667309;
		case 2030804811:
			return -376463594;
		case 1230359523:
			return -1917318030;
		case -1038436471:
			return 1631640006;
		case -1063137731:
			return -1565311117;
		case 96930969:
			return 1714576673;
		case -1180427609:
			return 210760725;
		case 2119038574:
			return 2051021144;
		case 43825738:
			return 1924406350;
		case 2145697477:
			return -1990143531;
		case -1261814606:
			return 1741899492;
		case 107013696:
			return -1629575335;
		case 1066034872:
			return 1096294193;
		case 36009259:
			return -1162498792;
		case -1599683008:
			return -212500005;
		case -1693870200:
			return -538557079;
		case 1072019803:
			return 171150858;
		case 1074477367:
			return 67538819;
		case -85890205:
			return -126472599;
		case 1048964673:
			return -1219957736;
		case -727455979:
			return -332060056;
		case -1667789645:
			return 1917500091;
		case -1924405794:
			return -1043453945;
		case 1861665605:
			return 1723487083;
		case -526169133:
			return 2044230644;
		case 900144280:
			return 1680713143;
		case 1133837220:
			return 344528703;
		case 1702024301:
			return -1674873797;
		case -1604180548:
			return 281852151;
		case 1772321403:
			return -285185056;
		case -1028075925:
			return -1692268955;
		case 84224102:
			return 2130706226;
		case -1896838685:
			return -1754375530;
		case -420599285:
			return -71211764;
		case 478986344:
			return -1390353518;
		case 446670976:
			return 330935532;
		case 802784330:
			return -935042458;
		case 549900435:
			return -41062704;
		case -2063289686:
			return 887669186;
		case 917402668:
			return 2102774612;
		case -914712122:
			return -2011111190;
		case -598917269:
			return -535752499;
		default:
			break;
	}
	return 0;
}

bool func_944(int iParam0)
{
	return func_981(iParam0) == -1784221369;
}

struct<4> func_945(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_871(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_490(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_946(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1236(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1237(*uParam1, &Var0, bParam6, 0))
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
	if (!func_1238(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_490(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_947(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1239(&iParam0);
	if (!func_871(iParam0, 0))
	{
		return false;
	}
	if (!func_1238(0))
	{
		bParam3 = true;
	}
	if (func_1240(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1241(0) };
			Var4.f_9 = -1591664384;
			if (!func_1242(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1243(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1244(iParam0, 1))
			{
				if (!func_1242(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1243(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1245(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1246(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3)
	{
		iVar28 = func_1247(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_490(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

bool func_948(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_871(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_947(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_1238(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_490(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_949(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1248(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_950(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

int func_951()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_952(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_953(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1249(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_951())
	{
		return -1;
	}
	iVar0 = func_952(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_1250(iVar1, 0);
	func_1251(iVar1, 0);
	func_1252(iVar1, 0);
	func_1253(iVar1, 0);
	func_1254(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1255(iVar1, iParam4);
	}
	return iVar1;
}

bool func_954(int iParam0, int iParam1)
{
	return func_852(Global_1914319->f_3[iParam0]->f_6, iParam1);
}

int func_955(int iParam0)
{
	iVar0 = func_761(iParam0);
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

int func_956(int iParam0, int iParam1, int iParam2)
{
	if (func_56() != -1)
	{
		return 0;
	}
	if (!func_1256(iParam0, 0))
	{
		return 0;
	}
	if (!_does_volume_exist(iParam1))
	{
		return 0;
	}
	iVar0 = func_761(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	_0xe2be6ffa4a13cbb0(iParam1, iVar0, iParam2);
	return 1;
}

int func_957(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_958(int iParam0)
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

void func_959(int iParam0, var uParam1)
{
	if (does_entity_exist(&(uParam1->f_9[iParam0])))
	{
		delete_object(uParam1->f_9[iParam0]);
	}
	clear_bit(&(uParam1->f_255), iParam0);
}

int func_960(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1487530998;
		case 1:
			return -2107109207;
		case 2:
			return -74563350;
		case 3:
			return -74166807;
		default:
			break;
	}
	return 0;
}

int func_961(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1942842017;
		case 2:
			return -1562525601;
		case 3:
			return -1474583373;
		case 6:
			return 1273085440;
		default:
			break;
	}
	return 0;
}

void func_962(int iParam0, var uParam1)
{
	vVar0 = { func_1257(uParam1->f_3, uParam1->f_3.f_3, uParam1->f_9[iParam0]->f_2) };
	uParam1->f_9[iParam0] = create_object(uParam1->f_9[iParam0]->f_1, vVar0, false, true, false, false, true);
	set_entity_rotation(&(uParam1->f_9[iParam0]), uParam1->f_9[iParam0]->f_5, 2, true);
	set_entity_has_gravity(&(uParam1->f_9[iParam0]), true);
	set_entity_collision(&(uParam1->f_9[iParam0]), true, false);
	func_1258(iParam0, uParam1);
	set_bit(&(uParam1->f_255), iParam0);
}

struct<14> func_963(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_964(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_490(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_965(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_966(int iParam0)
{
	switch (iParam0)
	{
		case 1846915545:
			if (func_1259(-1329287819, 3) == 0)
			{
				return true;
			}
			break;
		case 1641833719:
			if (func_1259(765991018, 3) == 0)
			{
				return true;
			}
			break;
		case -1188120304:
			if (func_1259(-837651311, 3) == 0)
			{
				return true;
			}
			break;
	}
	return false;
}

int func_967(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_56() == 0)
	{
		return 0;
	}
	if (!func_871(iParam0, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_805(0) };
	Var0.f_4 = func_1260(iParam1);
	Var5 = { func_945(iParam0, Var0, Var0.f_4, 0) };
	if (!func_946(iParam0, &Var5, &Var0, iParam2, iParam3, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_968(int iParam0)
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

bool func_969(int iParam0)
{
	if (!func_402(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_970(int iParam0)
{
	func_1261(func_958(iParam0));
}

bool func_971(int iParam0)
{
	if (func_1262(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

bool func_972()
{
	return true;
}

bool func_973()
{
	if (func_56() != 0)
	{
		return true;
	}
	return true;
}

char* func_974(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_975(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_1263(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_976(int iParam0)
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

bool func_977(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 63:
			return true;
	}
	return false;
}

bool func_978(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_979(int iParam0)
{
	return func_640(iParam0, Global_1310750->f_16072 | 64);
}

void func_980(int iParam0)
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

int func_981(int iParam0)
{
	if (!func_871(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_982(int iParam0, int iParam1)
{
	if (!func_871(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_981(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_874(iParam0, 1399091007))
	{
		func_1264(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_983(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_963(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1265(&Var0, func_1241(0));
	}
	if (!func_964(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_968(iVar14);
	return uVar15;
}

bool func_984(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_985(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

bool func_986(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return does_blip_exist(&(Global_36308[iParam0]));
	}
	return false;
}

int func_987(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return -160705043;
		case 5:
			return -726606177;
		case 26:
			return -49572609;
		case 38:
			return 417546980;
		case 69:
			return -117334654;
		case 76:
			return -357010019;
		case 78:
			return 719613628;
		case 92:
			return 1459616333;
		case 105:
			return 1607757565;
		case 115:
			return -161326102;
		case 120:
			return -1909997854;
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return -1025871137;
		default:
			break;
	}
	return 0;
}

Vector3 func_988()
{
	switch (func_141())
	{
		case 1:
			return -134.29f, -34.339f, 96.1221f;
		case 2:
			return 653.431f, -1257.437f, 43.7682f;
		case 3:
			return 1889.412f, -1866.691f, 47.403f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_989(bool bParam0)
{
	if (bParam0)
	{
		if (((((Global_1357549->f_1672 == -774242862 || Global_1357549->f_1672 == -2100684454) || Global_1357549->f_1672 == -1167047117) || Global_1357549->f_1672 == 396444962) || Global_1357549->f_1672 == -498064062) || Global_1357549->f_1672 == 513694516)
		{
			return true;
		}
	}
	if (func_487((*Global_1347702)[61]->f_15, 1) || (func_848((*Global_1347702)[61]->f_15) && func_38(16384)))
	{
		return true;
	}
	return false;
}

char* func_990()
{
	switch (func_141())
	{
		case 1:
			return "script@camp_upgrade@horseshoe_overlook";
		case 2:
			return "script@camp_upgrade@clemens_cove";
		case 3:
			return "script@camp_upgrade@shady_bell";
		default:
			break;
	}
	return "";
}

char* func_991(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_PEARSON_FOOD";
		case 1:
			return "pl_STRAUSS";
		case 2:
			return "pl_ARTHUR_AMMO";
		case 3:
			switch (func_365(10, 0))
			{
				case 2:
					return "pl_DUTCH_TENT";
				case 3:
					return "pl_ARTHUR_FT";
				case 4:
					return "pl_MISC_TENTS";
				default:
					break;
			}
			break;
		case 4:
			return "pl_BOAT";
		case 5:
			return "pl_CHICKEN_COOP";
		case 6:
			return "pl_PEARSON_TOOLS";
		case 7:
			return "pl_HITCHING_POST";
	}
	return "";
}

Vector3 func_992()
{
	switch (func_141())
	{
		case 1:
			return 0f, 0f, -120.79f;
		case 2:
			return 0f, 0f, -71.11f;
		case 3:
			return 0f, 0f, 135f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_993(int* iParam0, var uParam1)
{
	switch (iParam0->f_20)
	{
		case 6:
			func_1266(iParam0);
			func_1267(&(iParam0->f_35));
			func_1268(iParam0, uParam1);
			func_1269(iParam0);
			break;
		default:
			func_1270(iParam0);
			func_1271(&(iParam0->f_35));
			func_1272(iParam0);
			func_1273(iParam0);
			break;
	}
}

void func_994(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (uParam0->f_773 && uParam0->f_772)
	{
		if (!_is_app_active(1749944028))
		{
			_launch_app_by_hash_with_entry(1749944028, -702860656);
		}
	}
	else if (_is_app_active(1749944028))
	{
		_close_app_by_hash(1749944028);
	}
}

bool func_995(int iParam0)
{
	iVar0[0] = -180755040;
	switch (iParam0)
	{
		case 0:
			iVar2 = 0;
			while (iVar2 < iVar0)
			{
				request_model(&(iVar0[iVar2]), false);
				iVar2++;
			}
			break;
		case 1:
			iVar2 = 0;
			while (iVar2 < iVar0)
			{
				if (has_model_loaded(&(iVar0[iVar2])) == 0)
				{
					return false;
				}
				iVar2++;
			}
			break;
		case 2:
			iVar2 = 0;
			while (iVar2 < iVar0)
			{
				set_model_as_no_longer_needed(&(iVar0[iVar2]));
				iVar2++;
			}
			break;
	}
	return true;
}

void func_996(var uParam0, int iParam1)
{
	uParam0->f_773 = iParam1;
}

void func_997(var uParam0, int iParam1)
{
	_databinding_write_data_int(*uParam0, iParam1);
}

void func_998(var uParam0)
{
	*uParam0 = _uiflowblock_request(196480927);
}

void func_999()
{
	_0xd9130842d7226045("Ledger_Sounds", 0);
}

void func_1000(int* iParam0, int iParam1)
{
	if (iParam0->f_20 != iParam1)
	{
		if (func_325(Global_35, 0))
		{
			switch (iParam1)
			{
				case 6:
				case 9:
				case 10:
				case 11:
				case 12:
				case 13:
				case 14:
				case 15:
					if (func_1274(&Global_35) && func_1275(-1406972469) == -1)
					{
						func_1276(-1406972469, Global_35, 0, 1);
					}
					break;
				default:
					func_1277(Global_35, -1406972469, 1);
					break;
			}
		}
	}
	iParam0->f_20 = iParam1;
}

bool func_1001(var uParam0)
{
	return _uiflowblock_is_loaded(*uParam0);
}

bool func_1002()
{
	return _0xd9130842d7226045("Ledger_Sounds", 0);
}

void func_1003(var uParam0, var uParam1, var uParam2)
{
	func_1278((*uParam0)[0]);
	func_1278((*uParam0)[1]);
	func_1279(*uParam1, (*uParam0)[0]);
	func_1280(uParam1->f_1, &((*uParam0)[0]->f_55), uParam2);
	func_1281(uParam1->f_2, &((*uParam0)[0]->f_102), uParam2);
	func_1281(uParam1->f_3, &((*uParam0)[0]->f_110), uParam2);
	func_1279(uParam1->f_4, (*uParam0)[1]);
	func_1280(uParam1->f_5, &((*uParam0)[1]->f_55), uParam2);
	func_1281(uParam1->f_6, &((*uParam0)[1]->f_102), uParam2);
	func_1281(uParam1->f_7, &((*uParam0)[1]->f_110), uParam2);
}

bool func_1004(struct<8> Param0, int iParam8, var uParam9, var uParam10)
{
	if (func_1282((*uParam9->f_1[iParam8])[0], uParam10))
	{
		switch (uParam10->f_4)
		{
			case 0:
				uParam10->f_1 = Param0.f_1;
				break;
			case 1:
				uParam10->f_1 = Param0.f_2;
				break;
			case 2:
				uParam10->f_1 = Param0.f_3;
				break;
		}
		uParam10->f_2 = iParam8;
		uParam10->f_3 = 0;
		*uParam10 = 1;
		return true;
	}
	if (func_1282((*uParam9->f_1[iParam8])[1], uParam10))
	{
		switch (uParam10->f_4)
		{
			case 0:
				uParam10->f_1 = Param0.f_5;
				break;
			case 1:
				uParam10->f_1 = Param0.f_6;
				break;
			case 2:
				uParam10->f_1 = Param0.f_7;
				break;
		}
		uParam10->f_2 = iParam8;
		uParam10->f_3 = 1;
		*uParam10 = 1;
		return true;
	}
	*uParam10 = 0;
	return false;
}

void func_1005(var uParam0, int iParam1, vector3 vParam2, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	iVar0 = func_1283(iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	_databinding_write_data_hash_string(*uParam0, vParam2.x);
	iVar1 = func_365(iVar0, 0);
	_databinding_write_data_string(uParam0->f_1, _create_var_string(0, vParam2.f_2[iVar1]->f_2));
	if (vParam2.f_2[iVar1]->f_3 > 0)
	{
		_databinding_write_data_string(uParam0->f_2, _create_var_string(2, "LDGR_INFO_PRICE"));
		_databinding_write_data_int(uParam0->f_3, vParam2.f_2[iVar1]->f_3 * 100);
	}
	else
	{
		_databinding_write_data_string(uParam0->f_2, "");
	}
}

void func_1006(var uParam0, int iParam1, struct<25> Param2, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	iVar0 = func_1283(iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	_databinding_write_data_hash_string(*uParam0, Param2);
	iVar1 = (func_365(iVar0, 0) - 1);
	_databinding_write_data_string(uParam0->f_1, _create_var_string(2, "RESUPPLY_INFO_PANEL"));
	if (&Param2.f_24[iVar1] > 0)
	{
		_databinding_write_data_string(uParam0->f_2, _create_var_string(2, "LDGR_INFO_PRICE"));
		_databinding_write_data_int(uParam0->f_3, &Param2.f_24[iVar1] * 100);
	}
	else
	{
		_databinding_write_data_string(uParam0->f_2, "");
		_databinding_write_data_int(uParam0->f_3, 0);
	}
}

Vector3 func_1007(int iParam0)
{
	return get_offset_from_entity_in_world_coords(iParam0, 0f, 0f, -1.066f);
}

void func_1008(var uParam0)
{
	if (!_uiflowblock_is_loaded(*uParam0))
	{
		return;
	}
	_uiflowblock_enter(*uParam0, 0);
	_uistatemachine_create(func_1284(), *uParam0);
}

void func_1009(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	iVar0 = 20;
	iVar1 = 10;
	if (is_pc_version())
	{
		iVar0 = 10;
		iVar1 = 2;
	}
	func_1286(uParam0, func_1014(iParam1, bParam2), func_1285(iParam1), 55f, iVar0, iVar1, 0.001f, 15f, 0, 0, -1082130432, 1, 0, 1044549468);
	uParam0->f_11 = iParam3;
}

void func_1010(var uParam0, bool bParam1)
{
	uParam0->f_772 = 1;
	uParam0->f_774 = get_game_timer() + 250;
	if (bParam1)
	{
		play_sound_frontend("INFO_SHOW", "Ledger_Sounds", true, 0);
	}
}

void func_1011(var uParam0)
{
	if (!does_cam_exist(*uParam0))
	{
		return;
	}
	uParam0->f_29[2] = floor((get_control_unbound_normal(1, -1450761377) * 127f));
	uParam0->f_29[3] = floor((get_control_unbound_normal(1, -771458680) * 127f));
	if (is_look_inverted())
	{
		uParam0->f_29[3] = (&uParam0->f_29[3] * -1);
	}
	if (uParam0->f_34 == &uParam0->f_29[2] && uParam0->f_35 == &uParam0->f_29[3])
	{
		if (uParam0->f_37 < get_game_timer())
		{
			uParam0->f_34 = 0;
			uParam0->f_35 = 0;
		}
	}
	else
	{
		uParam0->f_34 = &uParam0->f_29[2];
		uParam0->f_35 = &uParam0->f_29[3];
		uParam0->f_37 = get_game_timer() + 4000;
	}
	uParam0->f_13.f_2 = (-(to_float(&(uParam0->f_29[2])) / 127f) * IntToFloat(uParam0->f_25));
	uParam0->f_13.f_1 = ((-uParam0->f_13.f_2 * uParam0->f_27) / IntToFloat(uParam0->f_25));
	if (is_look_inverted())
	{
		uParam0->f_13 = ((to_float(&(uParam0->f_29[3])) / 127f) * IntToFloat(uParam0->f_26));
	}
	else
	{
		uParam0->f_13 = (-(to_float(&(uParam0->f_29[3])) / 127f) * IntToFloat(uParam0->f_26));
	}
	fVar0 = (30f * timestep());
	if (!func_1287(uParam0->f_1, uParam0->f_8))
	{
		uParam0->f_12 = (uParam0->f_12 + get_frame_time());
		if (uParam0->f_12 > uParam0->f_11)
		{
			uParam0->f_12 = uParam0->f_11;
		}
		fVar1 = (uParam0->f_12 / uParam0->f_11);
		uParam0->f_1 = { func_1288(uParam0->f_1, uParam0->f_8, fVar1) };
	}
	vVar2 = { uParam0->f_13 + uParam0->f_16 };
	uParam0->f_19 = (uParam0->f_19 + func_1289((((vVar2.x - uParam0->f_19) * 0.05f) * fVar0), -3f, 3f));
	uParam0->f_19.f_1 = (uParam0->f_19.f_1 + func_1289((((vVar2.y - uParam0->f_19.f_1) * 0.05f) * fVar0), -3f, 3f));
	uParam0->f_19.f_2 = (uParam0->f_19.f_2 + func_1289((((vVar2.z - uParam0->f_19.f_2) * 0.05f) * fVar0), -3f, 3f));
	if (uParam0->f_36)
	{
		uParam0->f_19 = func_1289(uParam0->f_19, to_float(-uParam0->f_26), to_float(uParam0->f_26));
		uParam0->f_19.f_1 = func_1289(uParam0->f_19.f_1, -uParam0->f_27, uParam0->f_27);
		uParam0->f_19.f_2 = func_1289(uParam0->f_19.f_2, to_float(-uParam0->f_25), to_float(uParam0->f_25));
	}
	uParam0->f_22 = uParam0->f_7;
	fVar5 = get_control_unbound_normal(0, 1395223413);
	if (fVar5 > 0f)
	{
		uParam0->f_22 = (uParam0->f_22 - IntToFloat(round((fVar5 * uParam0->f_24))));
	}
	uParam0->f_23 = (uParam0->f_23 + (((uParam0->f_22 - uParam0->f_23) * get_frame_time()) * (2.5f / 0.65f)));
	set_cam_params(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_19, uParam0->f_23, 0, 1, 1, 2, 1, 0);
}

bool func_1012(int* iParam0)
{
	return !func_1287(iParam0->f_816.f_1, iParam0->f_816.f_8);
}

bool func_1013(int* iParam0)
{
	vVar0 = { get_cam_coord(iParam0->f_816) };
	vVar3 = { func_1014(func_141(), 1) };
	if (vVar0.z == vVar3.z)
	{
		return true;
	}
	return false;
}

Vector3 func_1014(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				vVar0 = { -134.6045f, -34.2293f, 96.5638f };
				break;
			case 2:
				vVar0 = { 653.1854f, -1257.589f, 44.2421f };
				break;
			case 3:
				vVar0 = { 1889.572f, -1866.438f, 47.8536f };
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				vVar0 = { -134.6193f, -34.3059f, 96.5245f };
				break;
			case 2:
				vVar0 = { 653.2174f, -1257.633f, 44.1706f };
				break;
			case 3:
				vVar0 = { 1889.519f, -1866.399f, 47.8054f };
				break;
		}
	}
	return vVar0;
}

void func_1015(var uParam0, vector3 vParam1, bool bParam4)
{
	if (!bParam4)
	{
		uParam0->f_1 = { vParam1 };
	}
	uParam0->f_8 = { vParam1 };
	uParam0->f_12 = 0f;
}

void func_1016(int* iParam0)
{
	if (get_game_timer() < iParam0->f_19)
	{
		return;
	}
	bVar0 = false;
	if (is_control_just_pressed(2, -1860390754) || is_control_just_pressed(2, -1666616423))
	{
		bVar0 = true;
		iVar1 = 0;
	}
	if (is_control_just_pressed(2, 1141111167) || is_control_just_pressed(2, 1669958966))
	{
		bVar0 = true;
		iVar1 = 1;
	}
	if (is_control_just_pressed(2, -1384133541) || is_control_just_pressed(2, 113281492))
	{
		bVar0 = true;
		iVar1 = 2;
	}
	if (is_control_just_pressed(2, 1710877787) || is_control_just_pressed(2, 1541138497))
	{
		bVar0 = true;
		iVar1 = 3;
	}
	if (is_control_just_released(2, 1138488863))
	{
		iParam0->f_860 = 1;
	}
	if (bVar0)
	{
		if (func_1290(iVar1, &(iParam0->f_35.f_491), *iParam0->f_35.f_498[Global_1357549->f_1894], iParam0->f_35.f_2.f_1[iParam0->f_35.f_491.f_2]))
		{
			if (iParam0->f_35.f_491.f_1 != -1)
			{
				if (iParam0->f_35.f_491.f_5)
				{
					func_1005(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *iParam0->f_35.f_531[iParam0->f_35.f_491.f_1]);
				}
				else
				{
					func_1006(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *iParam0->f_35.f_531[iParam0->f_35.f_491.f_1]);
				}
			}
			if (Global_1357549->f_1894 > 0)
			{
				func_1291(iVar1);
			}
			iParam0->f_19 = get_game_timer() + 250;
		}
	}
	if (func_212(iParam0->f_10, 1))
	{
		bVar2 = false;
		if (iParam0->f_35.f_491.f_5)
		{
			switch (iParam0->f_35.f_491.f_1)
			{
				case 1:
					func_1292(iParam0, 1, 4, 1, &bVar2);
					if (bVar2)
					{
						func_1293(0);
					}
					break;
				case 0:
					func_1292(iParam0, 0, 3, 1, &bVar2);
					if (bVar2)
					{
						func_1293(1);
					}
					break;
				case 2:
					func_1292(iParam0, 2, 5, 1, &bVar2);
					if (bVar2)
					{
						func_1293(2);
					}
					break;
				case 3:
					func_1292(iParam0, 3, 10, 1, &bVar2);
					break;
				case 4:
					if (func_141() == 2 || func_141() == 3)
					{
						func_1292(iParam0, 4, 13, 3, &bVar2);
					}
					break;
				case 5:
					func_1292(iParam0, 5, 0, 3, &bVar2);
					break;
				case 7:
					func_1292(iParam0, 7, 14, 1, &bVar2);
					break;
				case 6:
					func_1292(iParam0, 6, 12, 3, &bVar2);
					break;
			}
		}
		else
		{
			switch (iParam0->f_35.f_491.f_1)
			{
				case 1:
					func_1294(iParam0, 1, 4, &bVar2);
					break;
				case 0:
					func_1294(iParam0, 0, 3, &bVar2);
					break;
				case 2:
					func_1294(iParam0, 2, 5, &bVar2);
					break;
				default:
					break;
			}
		}
		if (bVar2)
		{
			if (iParam0->f_860)
			{
				func_1295();
				iParam0->f_860 = 0;
			}
			iParam0->f_19 = get_game_timer() + 250;
		}
		else if (iParam0->f_860)
		{
			func_1296();
			iParam0->f_860 = 0;
		}
	}
}

void func_1017(var uParam0, bool bParam1)
{
	if (get_game_timer() > uParam0->f_774)
	{
		if (uParam0->f_772)
		{
			func_1021(uParam0, bParam1);
		}
		else
		{
			func_1010(uParam0, bParam1);
		}
	}
}

void func_1018(var uParam0)
{
	if (does_cam_exist(*uParam0))
	{
		render_script_cams(false, false, 3000, true, false, 0);
		if (is_cam_active(*uParam0))
		{
			set_cam_active(*uParam0, false);
		}
		destroy_cam(*uParam0, false);
	}
	if (uParam0->f_28)
	{
		unlock_minimap_angle();
		uParam0->f_28 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0f;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0f;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_16 = { 0f, 0f, 0f };
	uParam0->f_19 = { 0f, 0f, 0f };
	uParam0->f_22 = 0f;
	uParam0->f_23 = 0f;
}

void func_1019()
{
	play_sound_frontend("upgrade_cam_pan", "Ledger_Sounds", true, 0);
}

bool func_1020(int* iParam0, bool bParam1)
{
	if (func_848((*Global_1347702)[61]->f_15))
	{
		if (bParam1)
		{
			if (func_149() < iParam0->f_5)
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

void func_1021(var uParam0, bool bParam1)
{
	uParam0->f_772 = 0;
	uParam0->f_774 = get_game_timer() + 250;
	if (bParam1)
	{
		play_sound_frontend("INFO_HIDE", "Ledger_Sounds", true, 0);
	}
}

bool func_1022(int iParam0)
{
	switch (func_56())
	{
		case -1:
			return (Global_40.f_4283.f_3 && iParam0) != 0;
	}
	return false;
}

void func_1023(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_40.f_4283.f_3 = (Global_40.f_4283.f_3 - (Global_40.f_4283.f_3 && iParam0));
			break;
	}
}

void func_1024(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_40.f_4283.f_3 = (Global_40.f_4283.f_3 || iParam0);
			break;
	}
}

bool func_1025(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

Vector3 func_1026(int iParam0)
{
	return Global_1327590->f_11465[iParam0]->f_1;
}

bool func_1027(int* iParam0)
{
	iVar0 = 1;
	iVar1 = func_1297();
	if (does_entity_exist(func_172(iVar1)) == 0)
	{
		func_1028("Camp Butcher: companion does not exist (check if he's locked)", iParam0);
		iVar0 = 0;
	}
	if (func_338(iVar1))
	{
		if (((((func_177(iVar1) == 0 && func_171(iVar1, 8) == 0) && func_171(iVar1, 16) == 0) && func_171(iVar1, 32) == 0) && func_171(iVar1, 2) == 0) && func_171(iVar1, 2048) == 0)
		{
			if (func_171(iVar1, -2147483648) && func_12(33554432) == 0)
			{
				func_1028("Camp Butcher: stolen (mission critical)", iParam0);
				iVar0 = 0;
			}
			else
			{
				func_1028("Camp Butcher: stolen", iParam0);
				iVar0 = 0;
			}
		}
	}
	iVar2 = 0;
	while (iVar2 < Global_1327590->f_19547)
	{
		if (Global_1327590->f_19547[iVar2]->f_1 >= 5)
		{
			if (get_distance_between_coords(func_670(func_276()), func_1026(&(Global_1327590->f_19547[iVar2])), true) < 2.25f)
			{
				func_1028("Camp Butcher: vignette running", iParam0);
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar2] == 486)
		{
			func_1028("Camp Butcher: special Pearson vig running", iParam0);
			iVar0 = 0;
		}
		iVar2++;
	}
	if (iVar0 == 0)
	{
		if (does_blip_exist(iParam0->f_879))
		{
			remove_blip(&(iParam0->f_879));
		}
	}
	if (iVar0 == 1)
	{
		func_1028("Camp Butcher: Available", iParam0);
	}
	return iVar0;
}

void func_1028(char* sParam0, int* iParam1)
{
}

void func_1029(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_1905944[iVar1];
	clear_bit(&uVar3, iVar2);
	(*Global_1905944)[iVar1] = uVar3;
}

bool func_1030(var uParam0, int iParam1, char* sParam2)
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

void func_1031(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	iVar0 = 0;
	while (iVar0 < cParam3->f_97)
	{
		if (does_entity_exist(cParam3[iVar0]))
		{
			if (!is_entity_dead(cParam3[iVar0]))
			{
				add_ped_to_conversation(&cParam0, cParam3[iVar0], &((*cParam3)[iVar0]->f_1));
			}
		}
		iVar0++;
	}
}

void func_1032(int iParam0, bool bParam1)
{
	if (func_1262(iParam0))
	{
		if (bParam1)
		{
			if (!func_1298(iParam0))
			{
				func_908(iParam0, 1, 0f, 0, 0, 1f, 0, 0);
			}
		}
		else if (func_1298(iParam0))
		{
			func_1299(iParam0, 1);
		}
	}
}

struct<8> func_1033(int iParam0)
{
	StringCopy(&cVar0, "", 64);
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return cVar0;
	}
	if (iParam0 >= 7)
	{
		return cVar0;
	}
	return *Global_40.f_1095.f_1[iParam0];
}

var func_1034(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_1035(int iParam0)
{
	iParam0 = func_714(iParam0);
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

char* func_1036(int iParam0)
{
	switch (iParam0)
	{
		case -974145463:
		case -842044823:
		case 92296905:
		case 1432602132:
			return "BREED_AMERICANPAINT";
		case -1943445834:
		case -783061276:
		case -745453539:
		case 1371398552:
		case 1583029039:
			return "BREED_AMERICANSTANDARDBRED";
		case -1322521536:
		case 728055838:
		case 1100711204:
			return "BREED_ANDALUSIAN";
		case -1782334639:
		case -1266863668:
		case -1181052732:
		case -635244104:
		case -540812301:
		case -179102320:
			return "BREED_APPALOOSA";
		case -2105447887:
		case -2078767648:
		case -2055655009:
		case -1506685618:
		case -1427377767:
		case -852553462:
		case -80004868:
			return "BREED_ARABIAN";
		case 153881023:
		case 836323303:
		case 1813208211:
			return "BREED_ARDENNES";
		case -1256798240:
		case 2118089359:
			return "BREED_BELGIAN";
		case -1537586382:
		case 697143532:
		case 1440692746:
			return "BREED_DUTCHWARMBLOOD";
		case -1376299681:
		case -1293672675:
		case 281128160:
		case 1854519167:
			return "BREED_HUNGARIANHALFBRED";
		case -1955947684:
		case 545109431:
		case 1361788230:
		case 1427053849:
		case 1974379573:
			return "BREED_KENTUCKYSADDLE";
		case -1179079660:
		case 1275638003:
		case 2083573823:
			return "BREED_MISSOURIFOXTROTTER";
		case 648301150:
		case 892601357:
		case 955937750:
		case 1224695367:
		case 1235275977:
			return "BREED_MORGAN";
		case -1597490733:
		case -1428527735:
		case 805526368:
		case 2000205872:
			return "BREED_MUSTANG";
		case -1714171692:
		case -742726637:
		case 170010697:
			return "BREED_NOKOTA";
		case -1999094324:
		case -126555855:
		case -103101636:
			return "BREED_SHIRE";
		case 237935328:
		case 1724200240:
			return "BREED_SUFFOLKPUNCH";
		case -887362763:
		case -868094182:
		case -847714194:
		case 120848852:
		case 1342496140:
		case 1756765331:
		case 2059232991:
			return "BREED_TENNESSEEWALKER";
		case -1900569233:
		case -1262715164:
		case -813071670:
		case 1688250187:
		case 2010625508:
			return "BREED_THOROUGHBRED";
		case -1882436593:
		case -225011104:
		case -136225010:
			return "BREED_TURKOMAN";
		case -1331210307:
			return "BREED_DONKEY";
		case -1784502482:
		case 122449722:
			return "BREED_MULE";
		case 294243421:
			return "BREED_DUTCHWARMBLOOD";
		case -997197050:
			return "BREED_THOROUGHBRED";
		case -235714362:
			return "BREED_APPALOOSA";
		case -1678164:
			return "BREED_NOKOTA";
		case -977833913:
			return "BREED_TENNESSEEWALKER";
		case 1589164943:
			return "BREED_THOROUGHBRED";
		case -1087523615:
			return "BREED_AMERICANPAINT";
		case -496814209:
			return "BREED_ARDENNES";
		case 2109055751:
			return "BREED_APPALOOSA";
		case -776673611:
			return "BREED_NOKOTA";
		case 1764402253:
			return "BREED_ARABIAN";
		case -1417310078:
			return "BREED_TURKOMAN";
		case 1096273915:
			return "BREED_AMERICANPAINT";
		case 772751081:
			return "BREED_HUNGARIANHALFBRED";
		case -1140435723:
			return "BREED_NOKOTA";
		case 2002524329:
			return "BREED_TENNESSEEWALKER";
		case 1151530184:
			return "BREED_MUSTANG";
		case -1266525037:
			return "BREED_MISSOURIFOXTROTTER";
		case -2018137175:
			return "BREED_TURKOMAN";
		case -574151692:
			return "BREED_MUSTANG";
		case 649786380:
			return "BREED_AMERICANSTANDARDBRED";
		case -1921328920:
			return "BREED_APPALOOSA";
		case -837607790:
			return "BREED_KENTUCKYSADDLE";
		case 370424594:
			return "BREED_APPALOOSA";
		case -364764277:
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "BREED_INVALID";
}

bool func_1037()
{
	if (!does_entity_exist(Global_35))
	{
		return false;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	if (get_ped_config_flag(Global_35, 367, true))
	{
		return false;
	}
	return true;
}

Vector3 func_1038()
{
	return Global_40.f_1095.f_3054.f_77;
}

bool func_1039(vector3 vParam0)
{
	return func_1300(vParam0, 2);
}

int func_1040()
{
	return Global_40.f_1095.f_3054;
}

int func_1041(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		case 3:
			return 1;
		case 4:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_1042(int iParam0)
{
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_700(iParam0))
	{
		return false;
	}
	iVar0 = func_358(iParam0);
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

void func_1043(int iParam0)
{
	iParam0 = func_714(iParam0);
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

void func_1044(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam1], Global_40.f_1095.f_1[iParam0], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam0], &(Global_1900383->f_508), 436);
}

void func_1045(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_463), (*Global_1900383)[iParam1], 45);
	_copy_memory((*Global_1900383)[iParam1], (*Global_1900383)[iParam0], 45);
	_copy_memory((*Global_1900383)[iParam0], &(Global_1900383->f_463), 45);
}

int func_1046(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_1301(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_1301(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_1302(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_1303(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_1304(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1047(int iParam0)
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
	if (func_1305(iParam0))
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
	if (func_762(iParam0))
	{
		iVar3 = func_457(iParam0);
		if (func_1306(iVar3))
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

void func_1048(int iParam0)
{
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_358(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1084(iVar6);
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

bool func_1049(int iParam0)
{
	if (!func_1307(iParam0))
	{
		return false;
	}
	if (!func_1308())
	{
		return true;
	}
	return false;
}

void func_1050(int iParam0, int iParam1)
{
	iParam0 = func_714(iParam0);
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

void func_1051(int iParam0)
{
	iParam0 = func_714(iParam0);
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

void func_1052(int iParam0)
{
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			Global_40.f_1095.f_1[iParam0]->f_372.f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_1053(int iParam0, int iParam1)
{
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_715(iParam0);
	if (!is_model_valid(iVar0))
	{
		func_1309(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = get_default_max_attribute_rank(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0]->f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = fVar4;
	func_1088(iParam1);
	iVar5 = func_358(iParam0);
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

void func_1054(int iParam0, float fParam1)
{
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = fParam1;
	iVar0 = func_358(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return;
	}
	iVar1 = floor(Global_40.f_1095.f_1[iParam0]->f_372.f_1);
	set_attribute_points(iVar0, 7, iVar1);
	iVar2 = get_attribute_rank(iVar0, 7);
	Global_40.f_1095.f_1[iParam0]->f_372 = iVar2;
	_0xa69899995997a63b(iVar0, iVar2);
	func_1088(iVar2);
}

void func_1055(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_1056(int iParam0, struct<2> Param1)
{
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1310(iParam0, Param1))
	{
	}
	if (!func_1311(iParam0, Param1.f_1))
	{
	}
}

void func_1057(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1312((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_1058(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_1059(var uParam0)
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

void func_1060(var uParam0)
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

void func_1061(int iParam0, var uParam1)
{
	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1062(int iParam0, var uParam1)
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

void func_1063(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_1064(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_1065(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

float func_1066(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

struct<2> func_1067(int iParam0)
{
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1313(iParam0, &uVar2))
	{
	}
	if (!func_1314(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1068()
{
	if (func_1315(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1315(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1315(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1315(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1315(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1315(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1069(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1316(iParam0);
	func_1317(iParam0, uParam1);
	func_702(iParam0);
	func_1318(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1319(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_1070(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_358(iParam0);
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
	if (func_1320(iParam0, 64))
	{
		func_1043(iParam0);
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
	bVar3 = func_649(42);
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
				func_1321(&((*Global_1900383)[iParam0]->f_27));
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
		func_1043(iParam0);
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
		if (func_312(1) < 1)
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
		func_1322(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1320(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_1323(iParam0);
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
	fVar15 = func_1324(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1325(iParam0))
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
		func_1326((*Global_1900383)[iParam0]->f_26);
		func_1327((*Global_1900383)[iParam0]->f_26);
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
	if (func_222(iVar0) && !bVar9)
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
	iVar21 = func_312(iParam0);
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

bool func_1071(int iParam0)
{
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_691(iParam0) == 0)
	{
		return false;
	}
	return true;
}

int func_1072(vector3 vParam0)
{
	return func_1328(_get_map_zone_at_coords(vParam0, 10));
}

void func_1073(int iParam0)
{
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_700(iParam0))
	{
		return;
	}
	iVar0 = func_358(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_1074(int iParam0)
{
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1309(&uVar0, &uVar1, &uVar2);
	func_1329(iParam0, uVar0);
	func_1330(iParam0, uVar1);
	func_1331(iParam0, uVar2);
	func_699(iParam0, 1);
	func_1053(iParam0, 1);
}

void func_1075(int iParam0)
{
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_458(iParam0, 1);
}

void func_1076(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_714(iParam0);
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

bool func_1077(int iParam0)
{
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_1320(iParam0, 1);
}

bool func_1078(int iParam0)
{
	iParam0 = func_714(iParam0);
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

void func_1079(int iParam0)
{
	iParam0 = func_714(iParam0);
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

void func_1080(int iParam0)
{
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1081(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_1051(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_1051(iParam0);
	}
}

int func_1081(int iParam0)
{
	iParam0 = func_714(iParam0);
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

float func_1082(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15f;
		case 4:
			return 1E+09f;
		case 1:
			return 1E+09f;
		case 2:
			return 1E+09f;
		case 3:
			return 1E+09f;
		case 5:
			return 100f;
		case 6:
			return 30f;
		case 7:
			return 1E+09f;
		case 8:
			return 1E+09f;
		case 9:
			return 1E+09f;
		case 10:
			return 1E+09f;
		case 11:
			return 1E+09f;
		case 12:
			return 1E+09f;
		case 13:
			return 1E+09f;
		case 14:
			return 1E+09f;
		case 15:
			return 1E+09f;
		case 16:
			return 1E+09f;
		case 17:
			return 1E+09f;
		case 18:
			return 1E+09f;
		case 19:
			return 1E+09f;
		case 20:
			return 1E+09f;
		case 21:
			return 1E+09f;
		case 22:
			return 1E+09f;
	}
	return 1E+09f;
}

float func_1083(int iParam0)
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

int func_1084(int iParam0)
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

var func_1085(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1332(sParam0, sParam1, iParam2);
	return uVar20;
}

void func_1086(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	set_attribute_points(iParam0, 7, iParam1);
}

int func_1087(int iParam0)
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

void func_1088(int iParam0)
{
	if (func_1333() < iParam0)
	{
		func_1334(iParam0);
	}
}

void func_1089(int iParam0, int iParam1)
{
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_715(iParam0);
	iVar1 = get_default_max_attribute_rank(iVar0, 7);
	if (iParam1 == 1)
	{
		sVar2 = "HORSE_BONDED";
	}
	else if (iParam1 == iVar1)
	{
		sVar2 = "HORSE_BONDING_MAXIMUM";
	}
	else
	{
		sVar2 = "HORSE_BONDING_LEVELUP";
	}
	func_1335(sVar2, _create_var_string(2, "HORSE_BONDING_LEVEL", iParam1), 908516622, -961843223, -2, "HUD_Toast_Soundset", "horse_bonding", 0, 0, 1, 1);
}

int func_1090(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = get_attribute_rank(iParam0, func_1091());
	return iVar0;
}

int func_1091()
{
	return 0;
}

void func_1092(int iParam0, char* sParam1)
{
	sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
	switch (iParam0)
	{
		case 0:
			sVar1 = "RPG_HEALTH";
			break;
		case 1:
			sVar1 = "RPG_STAMINA";
			break;
		default:
			return;
	}
	sVar2 = _create_var_string(2, "HORSE_RPG_LEVEL_PROGRESS", sParam1);
	switch (iParam0)
	{
		case 0:
			iVar3 = -1114634884;
			break;
		case 1:
			iVar3 = 1944692767;
			break;
		default:
			return;
	}
	sVar4 = func_1337(func_1336(sParam1));
	iVar5 = get_hash_key(sVar4);
	sVar6 = "";
	sVar7 = "HUD_Toast_Soundset";
	func_1335(_create_var_string(10, sVar0, sVar1), sVar2, iVar3, iVar5, -2, sVar7, sVar6, 0, 0, 1, 1);
}

int func_1093(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = get_attribute_rank(iParam0, func_1094());
	return iVar0;
}

int func_1094()
{
	return 1;
}

struct<2> func_1095(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

bool func_1096()
{
	iVar0 = func_1097();
	if (does_blip_exist(iVar0))
	{
		return true;
	}
	return false;
}

int func_1097()
{
	return Global_1900383->f_393.f_1;
}

void func_1098(int iParam0)
{
	Global_1900383->f_393.f_1 = iParam0;
}

int func_1099(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case 747514327:
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
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

int func_1100(int iParam0)
{
	if (Global_1934765->f_337 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_1934765->f_337)
	{
		if (Global_1934765->f_318[iVar0]->f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1101(int iParam0)
{
	if (Global_1934765->f_337 == 0)
	{
		return;
	}
	if (Global_1934765->f_337 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_1934765->f_337 - 2))
		{
			_copy_memory(Global_1934765->f_318[iVar0], Global_1934765->f_318[iVar0 + 1], 3);
			iVar0++;
		}
	}
	Global_1934765->f_337 = (Global_1934765->f_337 - 1);
}

void func_1102()
{
	_0x243cede8f916b994();
	Global_1934765->f_338 = -1;
}

void func_1103(bool bParam0, float fParam1)
{
	if (is_bit_set(Global_1934765->f_301, 1))
	{
		return;
	}
	iVar0 = func_1104();
	if (iVar0 < 0)
	{
		return;
	}
	if (iVar0 >= 6)
	{
		return;
	}
	if (iVar0 == Global_1934765->f_338)
	{
		return;
	}
	if (func_1338(&(Global_1934765->f_318[iVar0]), bParam0, fParam1))
	{
		Global_1934765->f_338 = iVar0;
	}
}

int func_1104()
{
	iVar0 = -1;
	iVar1 = -1;
	if (Global_1934765->f_337 <= 0)
	{
		return -1;
	}
	iVar2 = (Global_1934765->f_337 - 1);
	while (iVar2 >= 0)
	{
		iVar3 = func_1339(Global_1934765->f_318[iVar2]->f_1);
		if (iVar3 > iVar0)
		{
			iVar0 = iVar3;
			iVar1 = iVar2;
		}
		iVar2 = (iVar2 + -1);
	}
	return iVar1;
}

void func_1105()
{
	if (_uistatemachine_exists(func_1284()))
	{
		_uistatemachine_destroy(func_1284());
	}
}

void func_1106(var uParam0)
{
	if (_is_app_active(1749944028))
	{
		_close_app_by_hash(1749944028);
	}
	if (func_204(uParam0->f_1))
	{
		func_205(&(uParam0->f_1), 1, 1);
	}
	uParam0->f_772 = 0;
	uParam0->f_773 = 0;
}

void func_1107(var uParam0)
{
	if (*uParam0 != 0)
	{
		_uiflowblock_release(uParam0);
	}
}

void func_1108()
{
	_0x531a78d6bf27014b("Ledger_Sounds");
}

void func_1109(int iParam0, bool bParam1, int iParam2)
{
	if (!func_477(iParam0))
	{
		return;
	}
	if (!func_1149(iParam0))
	{
		return;
	}
	if (bParam1 && !does_entity_exist(iParam2))
	{
		return;
	}
	if (bParam1 && is_entity_dead(iParam2))
	{
		return;
	}
	iVar0 = func_172(iParam0);
	if (bParam1)
	{
		set_ped_config_flag(iParam2, 155, true);
		set_blocking_of_non_temporary_events(iVar0, false);
	}
	else
	{
		set_blocking_of_non_temporary_events(iVar0, true);
	}
	set_ped_config_flag(iVar0, 152, bParam1);
	set_ped_config_flag(iVar0, 154, bParam1);
	set_ped_config_flag(iVar0, 156, bParam1);
	set_ped_config_flag(iVar0, 25, bParam1);
	set_ped_combat_attributes(iVar0, 87, bParam1);
	if (bParam1)
	{
		_0xd428c3f92fc3f6f8(iVar0, func_799(iParam0));
		_0x9238a3d970bbb0a9(iVar0, -1972074710);
		_0x9238a3d970bbb0a9(Global_35, -1972074710);
	}
	else
	{
		_0x9a4ac116cc1eee14(iVar0);
		if (!func_1340())
		{
			_0x9a4ac116cc1eee14(Global_35);
		}
	}
}

int func_1110(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_821(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_1111(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_56() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0];
		if (!is_entity_dead(iVar1) && iParam0 == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1112(int iParam0)
{
	if (!func_509(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_751(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

var func_1113()
{
	return &Global_1899515;
}

void func_1114(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		func_1341(iParam1);
	}
}

int func_1115(int iParam0)
{
	if (!func_509(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126))
	{
		iVar0 = func_397(iParam0, 1);
		iVar1 = _0xa00df706c60173d1(iVar0);
		if (Global_40.f_4942[iParam0]->f_7 != 0 && iVar1 != Global_40.f_4942[iParam0]->f_7)
		{
			_0x8bc555034a5a5e8c(iVar0, Global_40.f_4942[iParam0]->f_7);
		}
		(*Global_1360165)[iParam0]->f_126 = _create_persistent_character(iVar0);
		_0xfcc6db8dbe709bc8((*Global_1360165)[iParam0]->f_126);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

bool func_1116(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1117(int iParam0)
{
	switch (iParam0)
	{
		case 1928985868:
			return 7;
		case 1784174017:
			return 8;
		case 1763160914:
			return 10;
		case 2051438686:
			return 11;
		case 1155669136:
			return 1;
		case 1871598:
			return 9;
		case -1379218218:
			return 6;
		case 1059981727:
			return 2;
		case -1216736853:
			return 4;
		case 1191674135:
			return 3;
		case -112322057:
			return 12;
		case -823778732:
			return 25;
		case 1338623152:
			return 16;
		case 1401247110:
			return 20;
		case 1007627076:
			return 13;
		case 864606355:
			return 31;
		case 1338525796:
			return 18;
		case -2076625074:
			return 26;
		case -288774278:
			return 15;
		case 1934998953:
			return 14;
		case -1148482643:
			return 32;
		case 603776282:
			return 22;
		case 1339344423:
			return 27;
		case 1562395675:
			return 19;
		case 1316832864:
			return 28;
		case -1619448191:
			return 29;
		case -520130198:
			return 24;
		case 1418253584:
			return 30;
		case -348149883:
			return 33;
		case 814591385:
			return 34;
		case 981348373:
			return 17;
		case -1100417366:
			return 35;
		case 1438856241:
			return 23;
		case -1989143022:
			return 21;
		default:
			break;
	}
	return 0;
}

bool func_1118(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_int(iParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

void func_1119(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

bool func_1120(int iParam0)
{
	if (!func_509(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_140 != 0 || (*Global_1360165)[iParam0]->f_141 != 0)
	{
		return true;
	}
	return false;
}

int func_1121(int iParam0)
{
	switch (iParam0)
	{
		case -2147483648:
		case 2048:
		case 8192:
			return 5;
		case 1:
		case 16:
		case 32:
		case 1024:
		case 4096:
			return 4;
		case 2:
		case 64:
			return 3;
		case 4:
		case 8:
		case 128:
			return 2;
		case 512:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1122(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	iVar0 = func_1100(iParam1);
	if (iVar0 == -1)
	{
		func_1342(iParam0, iParam1, fParam3);
		func_1103(bParam2, fParam3);
		return;
	}
	if (iParam0 != &Global_1934765->f_318[iVar0])
	{
		func_1101(iVar0);
		func_1342(iParam0, iParam1, fParam3);
		Global_1934765->f_338 = -1;
		func_1103(bParam2, fParam3);
		return;
	}
}

int func_1123()
{
	return 0;
}

int func_1124()
{
	if (func_1343())
	{
		if (_is_imap_active(-850189983))
		{
			_remove_imap(-850189983);
		}
		iVar0 = -172246728;
	}
	else
	{
		if (_is_imap_active(-172246728))
		{
			_remove_imap(-172246728);
		}
		iVar0 = -850189983;
	}
	return iVar0;
}

int func_1125()
{
	if (func_848((*Global_1347702)[134]->f_15))
	{
		iVar0 = func_1344();
		if (_is_imap_active(-387018143))
		{
			_remove_imap(-387018143);
		}
	}
	else
	{
		iVar0 = -387018143;
	}
	return iVar0;
}

int func_1126()
{
	if (func_456((*Global_1347702)[134]->f_15))
	{
		if (_is_imap_active(126970802))
		{
			_remove_imap(126970802);
		}
		return func_1123();
	}
	return 126970802;
}

int func_1127()
{
	if (func_872(-520532433, 1, 0))
	{
		if (_is_imap_active(-1739164071))
		{
			_remove_imap(-1739164071);
		}
		return func_1123();
	}
	return -1739164071;
}

int func_1128()
{
	if (func_872(-1515028452, 1, 0))
	{
		if (_is_imap_active(-1331617405))
		{
			_remove_imap(-1331617405);
		}
		return func_1123();
	}
	return -1331617405;
}

int func_1129()
{
	if (func_456((*Global_1835011)[6]->f_1) || func_848((*Global_1835011)[6]->f_1))
	{
		return 1998041523;
	}
	else if (_is_imap_active(1998041523))
	{
		_remove_imap(1998041523);
	}
	return func_1344();
}

int func_1130()
{
	if (func_872(-1515028452, 1, 0))
	{
		if (_is_imap_active(-539928451))
		{
			_remove_imap(-539928451);
		}
		return func_1123();
	}
	return -539928451;
}

int func_1131()
{
	if (func_872(-520532433, 1, 0))
	{
		if (_is_imap_active(-293283707))
		{
			_remove_imap(-293283707);
		}
		return func_1123();
	}
	return -293283707;
}

int func_1132()
{
	if (func_396(13, 4, 1))
	{
		return 1036815507;
	}
	if (_is_imap_active(1036815507))
	{
		_remove_imap(1036815507);
	}
	return func_1344();
}

void func_1133(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1345(1497516462);
			func_1346(2016141805);
			func_1346(1010885152);
			func_1346(-502324015);
			break;
		case 2016141805:
			func_1346(1497516462);
			func_1345(2016141805);
			func_1346(1010885152);
			func_1346(-502324015);
			break;
		case 1010885152:
			func_1346(1497516462);
			func_1346(2016141805);
			func_1345(1010885152);
			func_1346(-502324015);
			break;
		case -502324015:
			func_1346(1497516462);
			func_1346(2016141805);
			func_1346(1010885152);
			func_1345(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1346(-538889627);
			func_1346(-538880323);
			func_1346(-1056767524);
			func_1345(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1347();
			func_1345(iParam0);
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
			func_1348();
			func_1345(iParam0);
			break;
		case 2019386373:
			func_1346(-664252410);
			func_1346(2109952320);
			func_1345(2019386373);
			break;
		case -664252410:
			func_1346(2019386373);
			func_1346(2109952320);
			func_1345(-664252410);
			break;
		case 2109952320:
			func_1346(2019386373);
			func_1346(-664252410);
			func_1345(2109952320);
			break;
		case -1674179981:
			func_1346(-1835851517);
			func_1346(-1838352012);
			func_1345(-1674179981);
			break;
		case -1835851517:
			func_1346(-1674179981);
			func_1346(-1838352012);
			func_1345(-1835851517);
			break;
		case -1838352012:
			func_1346(-1674179981);
			func_1346(-1835851517);
			func_1345(-1838352012);
			break;
		case -1717960576:
			func_1346(210001842);
			func_1345(-1717960576);
			break;
		case 210001842:
			func_1346(-1717960576);
			func_1345(210001842);
			break;
		case -150493654:
			func_1346(-1271608261);
			func_1346(1846061697);
			func_1346(-1145519186);
			func_1345(-150493654);
			break;
		case -1271608261:
			func_1346(-150493654);
			func_1346(1846061697);
			func_1346(-1145519186);
			func_1345(-1271608261);
			break;
		case 1846061697:
			func_1346(-150493654);
			func_1346(-1271608261);
			func_1346(-1145519186);
			func_1345(1846061697);
			break;
		case -1145519186:
			func_1346(-150493654);
			func_1346(-1271608261);
			func_1346(1846061697);
			func_1345(-1145519186);
			break;
		case 1766284049:
			func_1346(280705402);
			func_1346(1926308480);
			func_1345(1766284049);
			break;
		case 280705402:
			func_1346(1766284049);
			func_1346(1926308480);
			func_1345(280705402);
			break;
		case 1926308480:
			func_1346(1766284049);
			func_1346(280705402);
			func_1345(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1346(439465264);
				func_1345(1609506757);
			}
			else
			{
				func_1346(1609506757);
				func_1346(439465264);
			}
			break;
		case 439465264:
			if (func_734(1609506757))
			{
				if (bParam1)
				{
					func_1345(439465264);
				}
				else
				{
					func_1346(439465264);
				}
			}
			break;
		case 1822001510:
			func_1346(-1612662716);
			func_1345(1822001510);
			break;
		case -1612662716:
			func_1346(1822001510);
			func_1345(-1612662716);
			break;
		case 1306158345:
			func_1346(1952610440);
			func_1346(-223469678);
			func_1346(-404698347);
			func_1346(1517904467);
			func_1345(1306158345);
			break;
		case 1952610440:
			func_1346(1306158345);
			func_1346(-223469678);
			func_1346(-404698347);
			func_1346(1517904467);
			func_1345(1952610440);
			break;
		case -223469678:
			func_1346(1306158345);
			func_1346(1952610440);
			func_1346(-404698347);
			func_1346(1517904467);
			func_1345(-223469678);
			break;
		case -404698347:
			func_1346(1306158345);
			func_1346(1952610440);
			func_1346(-223469678);
			func_1346(1517904467);
			func_1345(-404698347);
			break;
		case 1517904467:
			func_1346(1306158345);
			func_1346(1952610440);
			func_1346(-223469678);
			func_1346(-404698347);
			func_1345(1517904467);
			break;
		case 1376646519:
			func_1346(931649776);
			func_1346(-434590080);
			func_1346(1743048395);
			func_1346(449774763);
			func_1345(1376646519);
			break;
		case 931649776:
			func_1346(1376646519);
			func_1346(-434590080);
			func_1346(1743048395);
			func_1346(449774763);
			func_1345(931649776);
			break;
		case -434590080:
			func_1346(1376646519);
			func_1346(931649776);
			func_1346(1743048395);
			func_1346(449774763);
			func_1345(-434590080);
			break;
		case 1743048395:
			func_1346(1376646519);
			func_1346(931649776);
			func_1346(-434590080);
			func_1346(449774763);
			func_1345(1743048395);
			break;
		case 449774763:
			func_1346(1376646519);
			func_1346(931649776);
			func_1346(-434590080);
			func_1346(1743048395);
			func_1345(449774763);
			break;
		case -1414537028:
			func_1346(38162571);
			func_1346(1350391819);
			func_1346(54073871);
			func_1345(-1414537028);
			break;
		case 38162571:
			func_1346(-1414537028);
			func_1346(1350391819);
			func_1346(54073871);
			func_1345(38162571);
			break;
		case 1350391819:
			func_1346(-1414537028);
			func_1346(38162571);
			func_1346(54073871);
			func_1345(1350391819);
			break;
		case 54073871:
			func_1346(-1414537028);
			func_1346(38162571);
			func_1346(1350391819);
			func_1345(54073871);
			break;
		case 198200492:
			func_1345(198200492);
			func_1346(-1124061431);
			func_1346(52706132);
			func_1346(-259123672);
			break;
		case -1124061431:
			func_1346(198200492);
			func_1345(-1124061431);
			func_1346(52706132);
			func_1346(-259123672);
			break;
		case 52706132:
			func_1346(198200492);
			func_1346(-1124061431);
			func_1345(52706132);
			func_1346(-259123672);
			break;
		case -259123672:
			func_1346(198200492);
			func_1346(-1124061431);
			func_1346(52706132);
			func_1345(-259123672);
			break;
		case -919512195:
			func_1345(-919512195);
			func_1346(-1925798111);
			func_1346(420709909);
			func_1346(1703426636);
			break;
		case -1925798111:
			func_1345(-1925798111);
			func_1346(-919512195);
			func_1346(420709909);
			func_1346(1703426636);
			break;
		case 420709909:
			func_1345(420709909);
			func_1346(-919512195);
			func_1346(-1925798111);
			func_1346(1703426636);
			break;
		case 1703426636:
			func_1345(1703426636);
			func_1346(-919512195);
			func_1346(-1925798111);
			func_1346(420709909);
			break;
		case -1223121209:
			func_1345(-1223121209);
			func_1346(630808005);
			break;
		case 630808005:
			func_1345(630808005);
			func_1346(-1223121209);
			break;
		case 1453909576:
			func_1345(1453909576);
			func_1346(1643531967);
			break;
		case 1643531967:
			func_1345(1643531967);
			func_1346(1453909576);
			break;
		case 0:
			func_1345(0);
			func_1346(473295046);
			func_1346(-1738165526);
			break;
		case 473295046:
			func_1345(473295046);
			func_1346(0);
			func_1346(-1738165526);
			break;
		case -1738165526:
			func_1345(-1738165526);
			func_1346(0);
			func_1346(473295046);
			break;
		case 932909855:
			func_1345(932909855);
			func_1346(2051822093);
			break;
		case 2051822093:
			func_1345(2051822093);
			func_1346(932909855);
			break;
		case 405586984:
			func_1345(405586984);
			func_1346(1509509592);
			func_1346(-959357075);
			func_1346(-1311865656);
			break;
		case 1509509592:
			func_1345(1509509592);
			func_1346(405586984);
			func_1346(-959357075);
			func_1346(-1311865656);
			break;
		case -959357075:
			func_1345(-959357075);
			func_1346(1509509592);
			func_1346(405586984);
			func_1346(-1311865656);
			break;
		case -1311865656:
			func_1345(-1311865656);
			func_1346(1509509592);
			func_1346(-959357075);
			func_1346(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1345(-524145696);
			}
			else
			{
				func_1346(-524145696);
			}
			func_1346(1626481264);
			func_1346(282809459);
			break;
		case 282809459:
			func_1345(282809459);
			func_1346(1626481264);
			func_1346(-524145696);
			break;
		case 1626481264:
			func_1345(1626481264);
			func_1346(-524145696);
			func_1346(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1345(885203519);
			}
			else
			{
				func_1346(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1345(-1080627546);
			}
			else
			{
				func_1346(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_734(iParam0))
				{
					func_1345(iParam0);
				}
			}
			else if (func_734(iParam0))
			{
				func_1346(iParam0);
			}
			break;
	}
}

void func_1134(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	clear_bit(Global_1934765->f_21[iVar1], iVar2);
}

void func_1135(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_1934765->f_21[iVar1], iVar2);
}

void func_1136(bool bParam0, bool bParam1)
{
	if (func_541())
	{
		if (func_1349() == 0)
		{
			return;
		}
		bParam0 = true;
	}
	if ((get_frame_count() % 10) == 0 || bParam0)
	{
		if (func_1350() == 0 || bParam0)
		{
			if (func_1351() && !func_848((*Global_1835011)[4]->f_1))
			{
				func_1352(0, 1, bParam0);
			}
			else
			{
				func_1352(0, 0, bParam0);
			}
		}
	}
	if ((get_frame_count() % 10) == 0 || bParam0)
	{
		if ((func_887(1, 0) && func_1353()) && func_1354() == 0)
		{
			func_1352(1, 1, bParam0);
		}
		else
		{
			func_1352(1, 0, bParam0);
		}
	}
	bVar0 = false;
	if (func_32() == 1)
	{
		bVar0 = true;
	}
	iVar1 = func_141();
	if (bParam0)
	{
		if (!func_38(1048576))
		{
			Global_1357549->f_575 = 18;
			Global_1357549->f_575 = 0;
			while (Global_1357549->f_575 < 18)
			{
				func_1355(iVar1, 0, 0);
				Global_1357549->f_575++;
			}
			Global_1357549->f_575 = 0;
		}
	}
	else if (func_38(1048576))
	{
		func_1355(iVar1, bParam1, 1);
	}
	if (((func_541() && _0xcf45df50c7775f2a() == 0) && func_480(0) == (*Global_1835011)[4]->f_1 == 0) && func_1356())
	{
		func_1357();
		uVar2 = func_1358();
		func_1359(iVar1, &uVar2, bVar0, func_1343(), bParam1);
		if (func_365(10, 0) > 1)
		{
			if (func_227(2057380366, 0))
			{
				func_644(2057380366, 1, 0);
			}
		}
		else if (!func_227(2057380366, 1))
		{
			func_375(2057380366, 1017034651, 1120952528, -1, 1, 1, 0);
		}
		if ((func_365(10, 0) >= 3 && iVar1 == 3) && bVar0)
		{
			func_1135(6);
		}
		else
		{
			func_1134(6);
		}
		if (func_1360(iVar1, bVar0))
		{
			if (((((_does_anim_scene_exist(&(Global_1357549->f_1713[0])) && _is_anim_scene_loaded(&(Global_1357549->f_1713[0]), true, false)) && _does_anim_scene_exist(&(Global_1357549->f_1713[1]))) && _is_anim_scene_loaded(&(Global_1357549->f_1713[1]), true, false)) && _does_anim_scene_exist(&(Global_1357549->f_1713[2]))) && _is_anim_scene_loaded(&(Global_1357549->f_1713[2]), true, false))
			{
				if (((func_1361(16) != 1 && !_is_anim_scene_started(&(Global_1357549->f_1713[0]), false)) && !_is_anim_scene_started(&(Global_1357549->f_1713[1]), false)) && !_is_anim_scene_started(&(Global_1357549->f_1713[2]), false))
				{
					if (func_1361(16) == 2 && func_918(256) == 0)
					{
						if (!is_screen_faded_out() && !is_screen_fading_out())
						{
							do_screen_fade_out(1);
						}
						if (!is_screen_faded_in() && !is_screen_fading_in())
						{
							do_screen_fade_in(7000);
						}
						_set_anim_scene_playback_list_bool(&(Global_1357549->f_1713[0]), "PBL_LEVEL_2", true);
						start_anim_scene(&(Global_1357549->f_1713[0]));
						func_75(256);
					}
					else if (func_1361(16) == 3 && func_918(512) == 0)
					{
						if (!is_screen_faded_out() && !is_screen_fading_out())
						{
							do_screen_fade_out(1);
						}
						if (!is_screen_faded_in() && !is_screen_fading_in())
						{
							do_screen_fade_in(7000);
						}
						_set_anim_scene_playback_list_bool(&(Global_1357549->f_1713[1]), "PBL_LEVEL_3", true);
						start_anim_scene(&(Global_1357549->f_1713[1]));
						func_75(512);
					}
					else if (func_1361(16) == 4 && func_918(1024) == 0)
					{
						if (!is_screen_faded_out() && !is_screen_fading_out())
						{
							do_screen_fade_out(1);
						}
						if (!is_screen_faded_in() && !is_screen_fading_in())
						{
							do_screen_fade_in(7000);
						}
						_set_anim_scene_playback_list_bool(&(Global_1357549->f_1713[2]), "PBL_LEVEL_4", true);
						start_anim_scene(&(Global_1357549->f_1713[2]));
						func_75(1024);
					}
				}
			}
		}
	}
	if (func_480(0) == (*Global_1835011)[4]->f_1)
	{
		if (_is_imap_active(825179479) == 0)
		{
			_request_imap(825179479);
		}
	}
}

int func_1137(int iParam0, bool bParam1)
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

void func_1138(int iParam0)
{
	if (iParam0 == 1)
	{
		func_1362("hso_post_caravan");
	}
	if (iParam0 == 2)
	{
		func_1362("dewclm_post_caravan");
	}
	if (iParam0 == 6)
	{
		func_1362("bvh_nav_endless_summer");
	}
}

bool func_1139(int iParam0, int iParam1)
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

void func_1140(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			func_1362("shb_nav_camp_00");
			func_1362("shb_nav_camp_01");
			break;
	}
}

struct<8> func_1141(int iParam0, int iParam1)
{
	StringCopy(&cVar0, func_1363(iParam0), 64);
	StringConCat(&cVar0, "_nav_camp_", 64);
	StringConCat(&cVar0, func_1364(iParam1), 64);
	return cVar0;
}

int func_1142(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 0:
					return func_1123();
				case 1:
					return -1232260252;
				case 2:
					return 1404611977;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2022451711;
				case 1:
					return 970924250;
				case 2:
					return -1177590512;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1402472902;
				case 1:
					return 1802272784;
				case 2:
					return -1458944281;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return func_1123();
				case 1:
					return -1869016398;
				case 2:
					if (func_12(268435456))
					{
						if (_is_imap_active(806681228))
						{
							_remove_imap(806681228);
						}
						return 1311984381;
					}
					else
					{
						if (_is_imap_active(1311984381))
						{
							_remove_imap(1311984381);
						}
						return 806681228;
					}
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return func_1123();
				case 1:
					return 414622870;
				case 2:
					return 557551306;
				default:
					break;
			}
			break;
	}
	return func_1123();
}

void func_1143(int iParam0, bool bParam1)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case -1999825729:
			iVar0 = -1999825729;
			break;
		case 414622870:
			iVar0 = 414622870;
			break;
		case 1802272784:
			iVar0 = 1802272784;
			break;
		case 970924250:
			iVar0 = 446964392;
			break;
	}
	if (iVar0 != -1)
	{
		if (bParam1)
		{
			if (_0xde9bad3292aa6d5e(iVar0) == 0)
			{
				_0xdfea23ec90113657(iVar0);
			}
		}
		else if (_0xde9bad3292aa6d5e(iVar0))
		{
			_0xdd0bc0edcb2162f6(iVar0);
		}
	}
}

int func_1144(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 1:
			return func_1365(iParam1, bParam2);
		case 2:
			return func_1366(iParam1, bParam2);
		case 6:
			return func_1367(iParam1, bParam2);
	}
	return func_1123();
}

struct<4> func_1145()
{
	return Var0;
}

int func_1146(int iParam0)
{
	if (func_867(iParam0) == 8)
	{
		return func_472(iParam0);
	}
	return -1;
}

bool func_1147(int iParam0, bool bParam1)
{
	if (func_56() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || (*Global_1347702)[iVar0]->f_13 & 16384 == 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1148(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!func_516(iParam0, 0f, 0f, 0f, 0, iParam1, bParam4, 1, 1, iParam2, iParam3, 1))
	{
		return false;
	}
	return true;
}

bool func_1149(int iParam0)
{
	if (func_477(iParam0))
	{
		if (func_325(Global_1360165[iParam0], 0))
		{
			return true;
		}
	}
	return false;
}

int func_1150(int iParam0, bool bParam1)
{
	if (!func_402(iParam0))
	{
		return 0;
	}
	if (!func_368(iParam0, 2))
	{
		return 0;
	}
	if (func_368(iParam0, 32) && !bParam1)
	{
		func_767(iParam0, _create_persistent_character(func_403(iParam0)));
		if (func_56() == -1)
		{
			if (func_368(iParam0, 2048))
			{
				_0x49a8c2cd97815215(func_761(iParam0));
				func_765(iParam0, 2048);
			}
			_0xfcc6db8dbe709bc8(func_761(iParam0));
		}
		return 0;
	}
	if (!func_1368(iParam0) && func_56() == -1)
	{
		return 0;
	}
	if (_0x800df3fc913355f3(func_761(iParam0)))
	{
		func_765(iParam0, 128);
		return 1;
	}
	func_767(iParam0, _create_persistent_character(func_403(iParam0)));
	_0x4f81ead1de8fa19b(func_761(iParam0));
	if (func_368(iParam0, 2048))
	{
		_0x49a8c2cd97815215(func_761(iParam0));
		func_765(iParam0, 2048);
	}
	return 1;
}

bool func_1151(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_402(iParam0))
	{
		return false;
	}
	if (!func_760(func_403(iParam0)))
	{
		return true;
	}
	if (!_0x800df3fc913355f3(func_761(iParam0)))
	{
		func_1150(iParam0, 0);
		return false;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!func_1256(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_1369(iParam0))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (!func_206(vVar0))
	{
		_0x59c7ad6fea2ac449(func_761(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = _0x08fc896d2cb31fcc(func_761(iParam0), 0);
	}
	else
	{
		iVar3 = _0x0cadc3a977997472(func_761(iParam0), 0);
	}
	if (!func_206(vVar0))
	{
		_0xbb68908cd11aebdc(func_761(iParam0));
	}
	if (does_entity_exist(iVar3))
	{
		return true;
	}
	return false;
}

bool func_1152(int iParam0)
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

bool func_1153(int iParam0)
{
	switch (Global_1357549->f_1675[iParam0]->f_2)
	{
		case 0:
			if (!_0x800df3fc913355f3(Global_1357549->f_1675[iParam0]->f_4))
			{
				Global_1357549->f_1675[iParam0]->f_4 = _create_persistent_character(&(Global_1357549->f_1675[iParam0]));
				_0x187d65f3aec5d679(&(Global_1357549->f_1675[iParam0]), func_1370(func_141()));
				_0xfcc6db8dbe709bc8(Global_1357549->f_1675[iParam0]->f_4);
				return false;
			}
			Global_1357549->f_1675[iParam0]->f_2 = 1;
		case 1:
			if (!_0xa8120ebeaf290c7a(Global_1357549->f_1675[iParam0]->f_4))
			{
				return false;
			}
			if (_0xeb98b38ca60742d7(Global_1357549->f_1675[iParam0]->f_4))
			{
				_0x49a8c2cd97815215(Global_1357549->f_1675[iParam0]->f_4);
			}
			if (func_325(Global_1357549->f_1675[iParam0]->f_3, 0))
			{
				Global_1359489->f_12 = 1;
				Global_1357549->f_1675[iParam0]->f_2 = 2;
			}
			else
			{
				if (!Global_1359489->f_12)
				{
					_0x4f81ead1de8fa19b(Global_1357549->f_1675[iParam0]->f_4);
					Global_1357549->f_1675[iParam0]->f_3 = _0x0cadc3a977997472(Global_1357549->f_1675[iParam0]->f_4, 0);
					_0x6759bee6762e140b(Global_1357549->f_1675[iParam0]->f_4);
				}
				return false;
			}
		case 2:
			func_1371(Global_1357549->f_1675[iParam0]->f_3);
			Global_1357549->f_1675[iParam0]->f_2 = 3;
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

int func_1154(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_1372(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_1155(var uParam0, var uParam1)
{
	uVar0 = _databinding_add_data_container(uParam0, "PageLeft");
	func_1373(uVar0, (*uParam1)[0]);
	uVar1 = _databinding_add_data_container(uParam0, "PageRight");
	func_1373(uVar1, (*uParam1)[1]);
}

void func_1156(var uParam0, var uParam1)
{
	*uParam1 = _databinding_add_data_hash(uParam0, "itemLabel", 0);
	uParam1->f_1 = _databinding_add_data_string(uParam0, "itemDescription", "");
	uParam1->f_2 = _databinding_add_data_string(uParam0, "purchaseLabel", "");
	uParam1->f_3 = _databinding_add_data_int(uParam0, "purchasePrice", 0);
	uParam1->f_4 = _databinding_add_data_bool(uParam0, "isGoldPrice", 0);
	_0x9d21b185abc2dbc4(uParam0, "effects", 0, 0);
}

int func_1157(int iParam0)
{
	if (!_get_special_edition_cash_camp_bonus_enabled())
	{
		return iParam0;
	}
	if (!func_1374())
	{
		return iParam0;
	}
	iVar0 = round((to_float(iParam0) * 0.8f));
	return iVar0;
}

int func_1158()
{
	iVar0 = func_1375();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_1159(int iParam0)
{
	if (func_56() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < get_game_timer()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = get_game_timer();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = get_game_timer();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (to_float(iParam0) * fVar0);
	fVar1 = func_469(absf(fVar1) < 1f, func_469(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

int func_1160(int iParam0, int iParam1, int iParam2)
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

int func_1161(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_1162()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_1163(int iParam0, bool bParam1, int iParam2)
{
	func_1376((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1377(iParam0);
}

void func_1164(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), 0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), 1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1378(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1165(bool bParam0)
{
	bVar3 = false;
	if (func_1379(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1380(iVar5, &iVar2, &iVar0))
			{
				if (!func_871(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1381(iVar2);
					if (_unlock_is_unlocked(iVar1))
					{
						if (bParam0)
						{
							_unlock_set_unlocked(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_981(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1158() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1158() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1382();
							}
							if (bVar3)
							{
								_unlock_set_unlocked(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}
}

struct<2> func_1166(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

char* func_1167(int iParam0)
{
	switch (iParam0)
	{
		case 2139774588:
			return "HONOR_EVENT_LOOT_INNOCENT";
		case 1142025875:
			return "HONOR_EVENT_AMBIENT_KILL";
		case 1587891565:
			return "HONOR_EVENT_AMBIENT_KO";
		case 1877013492:
			return "HONOR_EVENT_SCARE";
		case -643014279:
			return "HONOR_EVENT_KILL_VERMIN";
		case -597116214:
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case 551416228:
			return "HONOR_EVENT_KILL_HORSE";
		case 1022576842:
			return "HONOR_EVENT_STEAL_HORSE";
		case 953325896:
			return "HONOR_EVENT_STEAL_DONKEY";
		case 508358508:
			return "HONOR_EVENT_STEAL_MULE";
		case -856432278:
			return "HONOR_EVENT_STEAL_WAGON";
		case -735200598:
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case -2010847721:
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case 446961221:
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case -1972216640:
			return "HONOR_EVENT_ANTAGONIZE";
		case 530833824:
			return "HONOR_EVENT_THEFT";
		case 1682361219:
			return "HONOR_EVENT_INTERVENED";
		case 158959085:
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case 1919819559:
			return "HONOR_EVENT_DONATED_GAME";
		case 1461411082:
			return "HONOR_EVENT_ITEM_REQUEST";
		case -549508280:
			return "HONOR_EVENT_LONG_ABSENCE";
		case -1787248475:
			return "HONOR_EVENT_CRUEL_DEATH";
		case 932872355:
			return "HONOR_EVENT_JUSTICE_SERVED";
		case -1091304842:
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

int func_1168(int iParam0, int iParam1)
{
	if (!func_1383(iParam0))
	{
		return 0;
	}
	if (!func_736())
	{
		return 0;
	}
	if (!func_1384(iParam0, &iVar0, &uVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	chal_add_goal_progress_int(iVar0, uVar1, iParam1);
	return 1;
}

void func_1169(int iParam0, bool bParam1)
{
	iVar0 = Global_1360165[iParam0];
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
		return;
	}
	if (!func_477(iParam0))
	{
		return;
	}
	iVar1 = get_player_group(get_player_index());
	if (is_ped_group_member(iVar0, iVar1, 0))
	{
		return;
	}
	_0xcbd9ec60495c728c(func_749());
	set_ped_config_flag(iVar0, 279, true);
	set_ped_as_group_member(iVar0, iVar1);
	if (bParam1)
	{
		func_1109(iParam0, 1, Global_35);
	}
}

bool func_1170()
{
	return func_751(1) < 3;
}

void func_1171(int iParam0)
{
	if (func_477(iParam0))
	{
		iVar0 = 0;
		iVar1 = 0;
		switch (iParam0)
		{
			case 2:
				func_1385(&iVar0, 1);
				break;
			case 14:
				func_1385(&iVar0, 8);
				func_1385(&iVar1, 4);
				func_1385(&iVar1, 5);
				func_1385(&iVar1, 0);
				break;
			case 13:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
				func_1385(&iVar0, 8);
				func_1385(&iVar0, 5);
				func_1385(&iVar1, 4);
				func_1385(&iVar1, 0);
				break;
		}
		_0xdeb369f6ad168c58(func_172(iParam0), iVar0);
		_0x1740e3dee0ae4d27(func_172(iParam0), iVar1);
	}
}

int func_1172(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_736();
	bVar1 = false;
	if (bVar0 && !func_143(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_143(37)) && !func_143(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_143(43)) && !func_143(44))
	{
		bVar2 = true;
	}
	if (bVar1)
	{
		*bParam0 = 1;
		return 1;
	}
	if (!bVar1 && !bVar2)
	{
		if (func_691(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_691(1) == 1)
		{
			*uParam1 = 1;
		}
	}
	if (*bParam0 || *uParam1)
	{
		return 1;
	}
	return 0;
}

bool func_1173(int iParam0)
{
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_40.f_1095.f_1[iParam0]->f_420;
}

bool func_1174(int iParam0, var uParam1)
{
	if (!func_1386(iParam0))
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

int func_1175()
{
	if (func_736())
	{
		if (!func_143(3))
		{
			return func_1387(43);
		}
		if (func_143(38) && !func_143(43))
		{
			return func_1388(8);
		}
	}
	return 0;
}

Vector3 func_1176(int iParam0, int iParam1)
{
	func_1174(15, &Var0);
	Var0.f_2 = -1999103282;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -495185473;
		_datafile_get_vector(&vVar5, &Var0);
	}
	return vVar5;
}

int func_1177(int iParam0, int iParam1)
{
	if (_get_bounty_for_player(player_id()) <= 0)
	{
		return 0;
	}
	if (Global_1310720->f_21 == -1)
	{
		return 0;
	}
	if (Global_1310720->f_23 >= 3)
	{
		return 0;
	}
	iVar0 = func_573(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1174(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1389(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1178(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1390(iParam0);
	if (func_734(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_1179(int iParam0)
{
	if (!func_1174(15, &Var0))
	{
		return false;
	}
	Var0.f_3 = iParam0;
	Var0.f_2 = 303248275;
	if (_datafile_get_bool(&uVar5, &Var0))
	{
	}
	return uVar5;
}

bool func_1180(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (bParam5)
	{
		if (func_1391(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1392(5))
	{
		if (func_1393(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_1072(vParam0);
	if (bParam6)
	{
		iVar1 = func_1394(vParam0, 1);
		if (func_1395(iVar1) || func_1396(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1397(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1398())
	{
		if (func_1399(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1400(iVar0))
		{
			return false;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_1394(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_1401(iParam3, iParam4))
	{
		return false;
	}
	if (func_1402(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1403(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (func_736())
	{
		if (_does_volume_exist(bParam8))
		{
			if (!_0xf256a75210c5c0eb(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_1404(vParam0, iParam10) || func_1405(vParam0, iParam10))
		{
			return false;
		}
	}
	else if (bParam9)
	{
		if (vParam0.x < -450f && vParam0.y < -600f)
		{
			return false;
		}
	}
	return true;
}

bool func_1181(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_1182(char* sParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (are_strings_equal(&((*Global_1934603)[iVar0]->f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1183(int iParam0)
{
	if (func_1181(iParam0, 1))
	{
		func_1406(1);
	}
}

bool func_1184(int iParam0)
{
	if ((((((iParam0 == 11 || iParam0 == 13) || iParam0 == 15) || iParam0 == 16) || iParam0 == 19) || iParam0 == 20) || iParam0 == 22)
	{
		return false;
	}
	return true;
}

bool func_1185(int iParam0)
{
	return func_510(iParam0, 5, 1);
}

bool func_1186(int iParam0)
{
	if (iParam0 == 14)
	{
		return false;
	}
	return true;
}

bool func_1187(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_1188(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_1189(int iParam0)
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

int func_1190(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return 0;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_1407(iVar0, &uVar2, &uVar3, &iVar1, &uVar4);
	if (func_1408(&uVar5, iVar0, iVar1, uVar2))
	{
	}
	return uVar5;
}

int func_1191(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = _0x31fef6a20f00b963(iParam0);
	if (iVar0 == 0)
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar1 = get_ped_index_from_entity_index(iParam0);
			iVar0 = func_1409(iVar1);
		}
	}
	return iVar0;
}

struct<10> func_1192(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_1193(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_871(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	*iParam3 = Var0.f_3;
	iVar47 = 0;
	while (iVar47 < Var0.f_3)
	{
		if (!bParam5)
		{
		}
		*(*uParam2)[iVar47] = { *Var0.f_4[iVar47] };
		iVar47++;
	}
	if (bParam4)
	{
		func_1410(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_1194(int iParam0)
{
	return iParam0 & 31;
}

int func_1195(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1411(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_1196()
{
	iVar0 = &Global_1946804->f_529[9];
	iVar0 = (&Global_1946804->f_529[4] + iVar0);
	iVar0 = (&Global_1946804->f_529[10] + iVar0);
	iVar0 = (&Global_1946804->f_529[1] + iVar0);
	iVar0 = (&Global_1946804->f_529[2] + iVar0);
	iVar0 = (&Global_1946804->f_529[6] + iVar0);
	iVar0 = (&Global_1946804->f_529[29] + iVar0);
	iVar0 = (&Global_1946804->f_529[26] + iVar0);
	iVar0 = (&Global_1946804->f_529[18] + iVar0);
	iVar0 = (&Global_1946804->f_529[19] + iVar0);
	return iVar0 > 0;
}

bool func_1197(int iParam0, int iParam1)
{
	if (!func_871(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_982(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1412("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_965(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_1215(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_968(iVar1);
				return true;
			}
			iVar3++;
		}
		func_968(iVar1);
	}
	return false;
}

int func_1198()
{
	if (_is_ped_carrying(Global_35))
	{
		return 1;
	}
	if (get_current_ped_weapon(Global_35, &iVar0, true, 0, false))
	{
	}
	if (get_current_ped_weapon(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == -1569615261)
	{
		if (iVar0 == -1569615261)
		{
			return 1;
		}
		else if ((((is_weapon_valid(iVar0) && _is_weapon_two_handed(iVar0)) && !func_1413(iVar0)) && !_is_ped_getting_into_a_mount_seat(Global_35, true)) && !(is_ped_in_any_vehicle(Global_35, false) && !_0xa24c1d341c6e0d53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == -160924582)
		{
			return 1;
		}
		else if ((is_weapon_valid(iVar0) && func_1413(iVar0)) || iVar0 == 2055893578)
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

void func_1199(int iParam0)
{
	disable_control_action(0, -236813012, false);
	disable_control_action(0, -1971208180, false);
	disable_control_action(0, -558006538, false);
	disable_control_action(0, 383204893, false);
	disable_control_action(0, -1644869882, false);
	disable_control_action(0, -1750532712, false);
	disable_control_action(0, 1228478939, false);
	disable_control_action(0, -1225530114, false);
	disable_control_action(0, 1210409198, false);
	disable_control_action(0, -674562833, false);
	disable_control_action(0, -197984200, false);
	disable_control_action(0, -238861894, false);
	disable_control_action(0, 1537201378, false);
	disable_control_action(0, 1847550875, false);
	disable_control_action(0, -248506778, false);
	disable_control_action(0, -17122892, false);
	disable_control_action(0, 1708280984, false);
	disable_control_action(0, -890654697, false);
	disable_control_action(0, 1644850270, false);
	disable_control_action(0, 585168871, false);
	disable_control_action(0, -1752838637, false);
	disable_control_action(0, 1226157066, false);
	disable_control_action(0, 1671483992, false);
	disable_control_action(0, 1915927219, false);
	disable_control_action(0, 139329429, false);
	disable_control_action(0, 827890385, false);
	disable_control_action(0, -1122746426, false);
	disable_control_action(0, -299367216, false);
	disable_control_action(0, 665666611, false);
	disable_control_action(0, 1589851512, false);
	disable_control_action(0, 1252087310, false);
	disable_control_action(0, -2074653976, false);
	disable_control_action(0, -271587657, false);
	disable_control_action(0, 598619298, false);
	disable_control_action(0, 1808336124, false);
	disable_control_action(0, -2003148177, false);
	disable_control_action(0, 211270343, false);
	disable_control_action(0, 1048377764, false);
	disable_control_action(0, -1437157082, false);
	disable_control_action(0, -1182422434, false);
	disable_control_action(0, 1652311577, false);
	disable_control_action(0, 1156046995, false);
	disable_control_action(0, -410363332, false);
	disable_control_action(0, 1184686705, false);
	disable_control_action(0, -101775574, false);
	disable_control_action(0, -1171447126, false);
	disable_control_action(0, -762559377, false);
	disable_control_action(0, -172830981, false);
	disable_control_action(0, -677830796, false);
	disable_control_action(0, 2102517284, false);
	disable_control_action(0, 1679904073, false);
	disable_control_action(0, -1538519165, false);
	disable_control_action(0, -41065305, false);
	disable_control_action(0, 1482593325, false);
	disable_control_action(0, 308778731, false);
	disable_control_action(0, 1002303471, false);
	disable_control_action(0, 1771341755, false);
	disable_control_action(0, 1459101765, false);
	disable_control_action(0, -2032700426, false);
	disable_control_action(0, 2120975890, false);
	disable_control_action(0, 1879610457, false);
	disable_control_action(0, 1033498310, false);
	disable_control_action(0, -1074497799, false);
	disable_control_action(0, 1623727326, false);
	disable_control_action(0, -922478227, false);
	disable_control_action(0, 1520437207, false);
	disable_control_action(0, -513041747, false);
	disable_control_action(0, -874806616, false);
	disable_control_action(0, -2128083607, false);
	disable_control_action(0, -128997553, false);
	disable_control_action(0, 130948705, false);
	disable_control_action(0, -640622144, false);
	disable_control_action(0, -1879280170, false);
	disable_control_action(0, -485697785, false);
	disable_control_action(0, 1938056823, false);
	disable_control_action(0, -822242784, false);
	disable_control_action(0, 1301263553, false);
	disable_control_action(0, -39308912, false);
	if (iParam0 == 1)
	{
		disable_control_action(0, -1450761377, false);
		disable_control_action(0, -771458680, false);
	}
}

void func_1200(int iParam0)
{
	if (is_entity_dead(*iParam0))
	{
		return;
	}
	if (!_is_draft_vehicle(*iParam0))
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = _get_ped_in_draft_seat(*iParam0, iVar0);
		if (func_325(iVar1, 1))
		{
			clear_ped_tasks(iVar1, 1, 0);
			task_stand_still(iVar1, -1);
		}
		iVar0++;
	}
}

bool func_1201(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return false;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return false;
	}
	if (iParam1 == iParam2)
	{
		return true;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	if (!bVar0)
	{
		return false;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	return false;
}

void func_1202(int iParam0)
{
	if (func_841(iParam0, 0))
	{
		return;
	}
	set_entity_invincible(iParam0, true);
	set_ped_config_flag(iParam0, 179, true);
	set_entity_proofs(iParam0, 127, false);
	if (is_entity_on_fire(iParam0))
	{
		stop_entity_fire(iParam0, 0);
		_set_entity_health(iParam0, get_entity_max_health(iParam0, false), 0);
	}
}

void func_1203(int iParam0)
{
	if (!func_509(iParam0))
	{
		return;
	}
	if (func_397(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_131(iParam0);
	func_1202(iVar0);
	func_914(iParam0, 8192, 1);
}

void func_1204(int iParam0)
{
	if (func_841(iParam0, 0))
	{
		return;
	}
	set_entity_invincible(iParam0, false);
	set_ped_config_flag(iParam0, 179, false);
	set_entity_proofs(iParam0, 0, false);
}

void func_1205(int iParam0)
{
	if (!func_509(iParam0))
	{
		return;
	}
	if (func_397(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_131(iParam0);
	func_1204(iVar0);
	func_914(iParam0, 8192, 0);
}

void func_1206(int iParam0)
{
	if (func_841(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 8229);
	set_ped_can_ragdoll_from_player_impact(iParam0, false);
}

void func_1207(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (func_338(14))
	{
		return;
	}
	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
	{
		return;
	}
	if (!_does_volume_exist(&(Global_1357549->f_3[4])))
	{
		return;
	}
	if (!is_entity_in_volume(iParam0, &(Global_1357549->f_3[4]), true, 0))
	{
		return;
	}
	set_ragdoll_blocking_flags(iParam0, 909522);
}

void func_1208(int iParam0)
{
	if (!func_509(iParam0))
	{
		return;
	}
	if (func_397(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_131(iParam0);
	func_1206(iVar0);
	func_914(iParam0, 16384, 1);
}

void func_1209(int iParam0)
{
	if (func_841(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 1);
	set_ped_can_ragdoll_from_player_impact(iParam0, true);
}

void func_1210(int iParam0)
{
	if (!func_509(iParam0))
	{
		return;
	}
	if (func_397(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_131(iParam0);
	func_1209(iVar0);
	func_914(iParam0, 16384, 0);
}

int func_1211(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1414(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_1212(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 296923297:
			iVar2 = -268604689;
			iVar0 = get_random_int_in_range(0, 3);
			switch (iVar0)
			{
				case 0:
					iVar1 = -268604689;
					break;
				case 1:
					iVar1 = -1632589543;
					break;
				case 2:
					iVar1 = -1862464078;
					break;
			}
			break;
		case 1237718549:
			iVar2 = -922193456;
			iVar0 = get_random_int_in_range(0, 4);
			switch (iVar0)
			{
				case 0:
					iVar1 = -922193456;
					break;
				case 1:
					iVar1 = -2040275819;
					break;
				case 2:
					iVar1 = -1114682645;
					break;
				case 3:
					iVar1 = -1414977761;
					break;
			}
			break;
	}
	if (iParam1 != -1)
	{
		if (func_520(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_1213(int iParam0)
{
	switch (iParam0)
	{
		case -268604689:
			return -1496612359;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case -922193456:
			return -99272505;
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		default:
			break;
	}
	return 41788943;
}

void func_1214(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0]->f_5 = (Global_40.f_4942[iParam0]->f_5 - (Global_40.f_4942[iParam0]->f_5 && iParam1));
}

bool func_1215(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_1216(int iParam0)
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

int func_1217(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_1415(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1416((386 + iVar28), 1);
			if (func_1242(iParam0, &Var0, iVar5, 0))
			{
				if (func_1243(iParam0, &Var6, iVar5))
				{
					Var29 = { func_945(iParam0, Var0, iVar5, 0) };
					func_946(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_1238(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_1417(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1418(iParam0, iParam1);
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

void func_1218(int iParam0, int iParam1, float fParam2)
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

bool func_1219(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

void func_1220(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (func_971(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, fParam1, iParam3);
	}
}

void func_1221(int iParam0, bool bParam1)
{
	if (func_971(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_1222(int iParam0, bool bParam1)
{
	if (func_971(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_1223(int iParam0, bool bParam1)
{
	if (func_971(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_1224()
{
	return true;
}

float func_1225(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	if (!does_entity_exist(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return vdist2(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
	}
	return func_1066(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

void func_1226(int iParam0)
{
	iVar0 = func_131(iParam0);
	if (!_is_ped_carrying(iVar0))
	{
		return;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < get_itemset_size(iVar1))
	{
		iVar3 = _get_entity_from_item(get_indexed_item_in_itemset(iVar2, iVar1));
		if (!does_entity_exist(iVar3))
		{
		}
		else
		{
			if (!_0x88ad6cc10d8d35b2(iVar3))
			{
				set_entity_as_mission_entity(iVar3, true, true);
			}
			_0x0d0db2b6af19a987(&iVar3);
		}
		iVar2++;
	}
}

void func_1227(int iParam0)
{
	if (!func_509(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1357549->f_1675[iVar0]->f_1 == iParam0)
		{
			Global_1357549->f_1675[iVar0]->f_1 = -1;
			(*Global_1360165)[iParam0]->f_127 = 0;
		}
		iVar0++;
	}
}

void func_1228(int iParam0, int iParam1)
{
	if (!func_509(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_70.f_12 = iParam1;
}

int func_1229(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1230(int iParam0, int iParam1)
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

void func_1231(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1232(int iParam0, int iParam1)
{
	iVar0 = func_929(*iParam0);
	iVar1 = func_928(*iParam0);
	if (iParam1 < 1 || iParam1 > func_932(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1233(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1234(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1235(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

bool func_1236(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_1237(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_490(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_1238(bool bParam0)
{
	if (func_56() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_490(bParam0));
}

int func_1239(int iParam0)
{
	if (!func_871(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995:
			*iParam0 = -1753819339;
			return 1;
		case 1903483453:
			*iParam0 = -1527293029;
			return 1;
		case -541584777:
			*iParam0 = 206762213;
			return 1;
		case 998010398:
			*iParam0 = -324053813;
			return 1;
		case -1424823393:
			*iParam0 = -885810591;
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_1240(int iParam0)
{
	return func_981(iParam0) == -427144552;
}

struct<4> func_1241(bool bParam0)
{
	iVar0 = func_490(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_945(923904168, func_805(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_945(923904168, func_805(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_945(923904168, func_805(bParam0), -740156546, 0);
}

bool func_1242(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1247(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1243(int iParam0, var uParam1, int iParam2)
{
	if (func_1419(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

bool func_1244(int iParam0, bool bParam1)
{
	if (func_491(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_649(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_1245(int iParam0, var uParam1, bool bParam2)
{
	if (!func_871(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_1415(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1416((386 + iVar29), 1);
		if (func_1242(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_1243(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

int func_1246(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_871(iParam0, 0))
	{
		return 0;
	}
	if (!func_1238(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_490(bParam3), iParam0);
}

int func_1247(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_871(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_945(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_490(bParam6), &Var0, 0);
	return uVar4;
}

int func_1248(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2147332013:
			return 129;
		case -2137730706:
			return 13;
		case -2129915369:
			return 383;
		case -2122981486:
			return 179;
		case -2104294676:
			return 83;
		case -2098336883:
			return 145;
		case -2093351659:
			return 297;
		case -2093199573:
			return 185;
		case -2082302444:
			return 259;
		case -2075517304:
			return 393;
		case -2071373019:
			return 440;
		case -2063047758:
			return 190;
		case -2047114234:
			return 351;
		case -2041153728:
			return 277;
		case -2038346064:
			return 244;
		case -2033572567:
			return 92;
		case -2030965067:
			return 380;
		case -2023813568:
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case -1988547710:
			return 457;
		case -1981702243:
			return 96;
		case -1971110347:
			return 435;
		case -1955429862:
			return 387;
		case -1949364492:
			return 285;
		case -1943655584:
			return 460;
		case -1935893216:
			return 124;
		case -1934704933:
			return 423;
		case -1922834065:
			return 320;
		case -1917134080:
			return 309;
		case -1916588959:
			return 29;
		case -1897704131:
			return 225;
		case -1888506091:
			return 142;
		case -1885734028:
			return 110;
		case -1868521635:
			return 396;
		case -1866112883:
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case -1832590852:
			return 326;
		case -1827461037:
			return 233;
		case -1827211287:
			return 197;
		case -1827011525:
			return 98;
		case -1825730216:
			return 18;
		case -1818590041:
			return 246;
		case -1812183035:
			return 97;
		case -1805142260:
			return 273;
		case -1804466187:
			return 77;
		case -1802212639:
			return 10;
		case -1790474454:
			return 331;
		case -1771575988:
			return 16;
		case -1757085331:
			return 454;
		case -1738185394:
			return 411;
		case -1728071186:
			return 108;
		case -1719149624:
			return 131;
		case -1689239424:
			return 312;
		case -1675752723:
			return 249;
		case -1671819791:
			return 196;
		case -1667151809:
			return 139;
		case -1664107227:
			return 405;
		case -1648173738:
			return 22;
		case -1646431667:
			return 415;
		case -1633236438:
			return 426;
		case -1596446207:
			return 252;
		case -1584659518:
			return 210;
		case -1582252733:
			return 409;
		case -1565979762:
			return 507;
		case -1564254711:
			return 158;
		case -1557862414:
			return 88;
		case -1557856056:
			return 112;
		case -1548165899:
			return 422;
		case -1538781541:
			return 483;
		case -1526278254:
			return 338;
		case -1520159291:
			return 17;
		case -1512720465:
			return 413;
		case -1501120273:
			return 57;
		case -1486701482:
			return 437;
		case -1483924019:
			return 27;
		case -1482329777:
			return 369;
		case -1479860879:
			return 482;
		case -1466029365:
			return 223;
		case -1461741225:
			return 280;
		case -1426009748:
			return 119;
		case -1425653701:
			return 199;
		case -1417145007:
			return 472;
		case -1409307734:
			return 289;
		case -1408927269:
			return 21;
		case -1405475146:
			return 329;
		case -1396074730:
			return 427;
		case -1393633441:
			return 377;
		case -1383535454:
			return 135;
		case -1381943684:
			return 470;
		case -1377327596:
			return 205;
		case -1370062029:
			return 148;
		case -1355784201:
			return 311;
		case -1340559426:
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case -1316284753:
			return 114;
		case -1302664729:
			return 294;
		case -1299405763:
			return 206;
		case -1276847784:
			return 229;
		case -1238376790:
			return 445;
		case -1235200494:
			return 165;
		case -1233518925:
			return 318;
		case -1220678266:
			return 120;
		case -1211711936:
			return 26;
		case -1205318041:
			return 23;
		case -1202860612:
			return 327;
		case -1198456774:
			return 442;
		case -1190705999:
			return 9;
		case -1179993139:
			return 284;
		case -1171086122:
			return 41;
		case -1164176475:
			return 138;
		case -1152282847:
			return 33;
		case -1143028112:
			return 25;
		case -1117048125:
			return 238;
		case -1088604829:
			return 247;
		case -1077843421:
			return 324;
		case -1061998329:
			return 164;
		case -1061765120:
			return 169;
		case -1048889581:
			return 391;
		case -1045864225:
			return 510;
		case -1036305792:
			return 58;
		case -1032742879:
			return 61;
		case -1025265051:
			return 485;
		case -978287173:
			return 12;
		case -954047483:
			return 395;
		case -948342953:
			return 359;
		case -935212592:
			return 486;
		case -925475803:
			return 484;
		case -916887991:
			return 76;
		case -908082222:
			return 187;
		case -895048976:
			return 374;
		case -890266811:
			return 172;
		case -872824399:
			return 170;
		case -860304527:
			return 186;
		case -850999370:
			return 2;
		case -833577856:
			return 86;
		case -830432609:
			return 492;
		case -825056768:
			return 149;
		case -820146008:
			return 52;
		case -820014425:
			return 439;
		case -818926670:
			return 200;
		case -813365276:
			return 243;
		case -811804990:
			return 293;
		case -807742826:
			return 3;
		case -807680461:
			return 68;
		case -807112425:
			return 180;
		case -803062666:
			return 65;
		case -779264865:
			return 106;
		case -757336127:
			return 372;
		case -742985447:
			return 302;
		case -736212459:
			return 275;
		case -715535005:
			return 362;
		case -713369135:
			return 461;
		case -710247698:
			return 251;
		case -697342513:
			return 242;
		case -695655810:
			return 443;
		case -694047360:
			return 375;
		case -693094356:
			return 89;
		case -692943180:
			return 341;
		case -681593414:
			return 175;
		case -671103079:
			return 504;
		case -670201310:
			return 313;
		case -666548248:
			return 345;
		case -650501093:
			return 509;
		case -646454939:
			return 94;
		case -637873918:
			return 404;
		case -636774257:
			return 146;
		case -625309660:
			return 343;
		case -625171987:
			return 234;
		case -620369863:
			return 403;
		case -619139736:
			return 104;
		case -604891653:
			return 237;
		case -597010176:
			return 487;
		case -582523927:
			return 424;
		case -574426587:
			return 261;
		case -561040434:
			return 400;
		case -558867971:
			return 266;
		case -554271718:
			return 232;
		case -550689301:
			return 283;
		case -544885621:
			return 310;
		case -544096309:
			return 337;
		case -534913305:
			return 174;
		case -532430534:
			return 444;
		case -527348304:
			return 253;
		case -515663690:
			return 330;
		case -505205920:
			return 39;
		case -453449739:
			return 182;
		case -449489613:
			return 140;
		case -445710060:
			return 469;
		case -435161770:
			return 150;
		case -426458298:
			return 59;
		case -423162607:
			return 133;
		case -413943699:
			return 141;
		case -404697685:
			return 308;
		case -402973141:
			return 418;
		case -399703928:
			return 155;
		case -384358266:
			return 295;
		case -381477663:
			return 37;
		case -365550600:
			return 30;
		case -332258016:
			return 382;
		case -331451824:
			return 303;
		case -330340613:
			return 489;
		case -328226663:
			return 323;
		case -324786054:
			return 288;
		case -319093529:
			return 260;
		case -317452243:
			return 128;
		case -314300362:
			return 473;
		case -308211771:
			return 194;
		case -303175962:
			return 431;
		case -302690754:
			return 67;
		case -302574837:
			return 24;
		case -290258665:
			return 317;
		case -286479684:
			return 269;
		case -285172118:
			return 505;
		case -270246276:
			return 490;
		case -266920872:
			return 357;
		case -259827569:
			return 425;
		case -258855820:
			return 464;
		case -248683070:
			return 429;
		case -231638975:
			return 34;
		case -222982511:
			return 204;
		case -221923309:
			return 406;
		case -221398783:
			return 354;
		case -219249641:
			return 474;
		case -218211995:
			return 344;
		case -207368052:
			return 361;
		case -172442174:
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case -164763388:
			return 376;
		case -164125056:
			return 438;
		case -162152912:
			return 441;
		case -144509608:
			return 113;
		case -134086241:
			return 222;
		case -125979788:
			return 95;
		case -123719783:
			return 151;
		case -121904458:
			return 208;
		case -120359954:
			return 316;
		case -117389654:
			return 93;
		case -115054321:
			return 325;
		case -110297889:
			return 290;
		case -98209688:
			return 55;
		case -94582539:
			return 239;
		case -72799657:
			return 287;
		case -66788599:
			return 19;
		case -58963831:
			return 105;
		case -58291054:
			return 201;
		case -56411631:
			return 342;
		case -54575589:
			return 353;
		case -21372580:
			return 46;
		case -18183703:
			return 466;
		case -8269375:
			return 137;
		case 13460468:
			return 350;
		case 15906262:
			return 321;
		case 16938930:
			return 81;
		case 61425283:
			return 51;
		case 65871884:
			return 54;
		case 70047950:
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case 95619635:
			return 408;
		case 98434060:
			return 458;
		case 108841201:
			return 358;
		case 121222228:
			return 476;
		case 121466883:
			return 498;
		case 122725574:
			return 477;
		case 124507607:
			return 480;
		case 127002552:
			return 455;
		case 132239274:
			return 494;
		case 132287504:
			return 184;
		case 137433874:
			return 227;
		case 139790602:
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case 180573150:
			return 279;
		case 187832713:
			return 282;
		case 195634974:
			return 433;
		case 200640922:
			return 35;
		case 207369059:
			return 64;
		case 209896562:
			return 304;
		case 217189690:
			return 241;
		case 220165734:
			return 134;
		case 228261307:
			return 74;
		case 229393477:
			return 270;
		case 278608719:
			return 399;
		case 281905065:
			return 419;
		case 289706151:
			return 364;
		case 290238735:
			return 250;
		case 291150162:
			return 103;
		case 299577191:
			return 90;
		case 315283201:
			return 240;
		case 315850182:
			return 193;
		case 319124397:
			return 506;
		case 340819214:
			return 84;
		case 388356689:
			return 101;
		case 397857304:
			return 335;
		case 400034151:
			return 71;
		case 403634348:
			return 291;
		case 404260466:
			return 73;
		case 408875702:
			return 80;
		case 411591903:
			return 132;
		case 437096661:
			return 446;
		case 443165194:
			return 332;
		case 446631778:
			return 436;
		case 448165982:
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case 487107418:
			return 370;
		case 490619049:
			return 163;
		case 500323776:
			return 40;
		case 501194998:
			return 471;
		case 512067206:
			return 452;
		case 525567468:
			return 160;
		case 531203229:
			return 245;
		case 532176461:
			return 203;
		case 533929296:
			return 346;
		case 534386033:
			return 488;
		case 534766068:
			return 349;
		case 542655528:
			return 360;
		case 545240164:
			return 398;
		case 553023190:
			return 78;
		case 561912024:
			return 420;
		case 569547151:
			return 389;
		case 579829077:
			return 178;
		case 597768834:
			return 315;
		case 627421591:
			return 268;
		case 634843927:
			return 66;
		case 643583911:
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case 676394410:
			return 8;
		case 678897243:
			return 211;
		case 679257961:
			return 126;
		case 685466172:
			return 217;
		case 692218123:
			return 467;
		case 693884302:
			return 177;
		case 703663141:
			return 328;
		case 705436149:
			return 365;
		case 709886296:
			return 414;
		case 720937389:
			return 115;
		case 727456822:
			return 153;
		case 730196087:
			return 157;
		case 737744809:
			return 50;
		case 747937920:
			return 481;
		case 753501669:
			return 367;
		case 761196368:
			return 218;
		case 766757422:
			return 296;
		case 772151702:
			return 28;
		case 779383250:
			return 336;
		case 787526397:
			return 202;
		case 794696385:
			return 14;
		case 812866778:
			return 355;
		case 833697503:
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case 853563984:
			return 49;
		case 856952521:
			return 42;
		case 866755445:
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case 920901415:
			return 412;
		case 921753284:
			return 272;
		case 951007010:
			return 407;
		case 951777606:
			return 212;
		case 953460136:
			return 159;
		case 960236560:
			return 70;
		case 1004978630:
			return 333;
		case 1005520287:
			return 38;
		case 1019519723:
			return 256;
		case 1025198797:
			return 171;
		case 1046168872:
			return 456;
		case 1057391314:
			return 356;
		case 1059753202:
			return 198;
		case 1061621862:
			return 299;
		case 1073595144:
			return 417;
		case 1080053708:
			return 189;
		case 1086705486:
			return 265;
		case 1092859156:
			return 116;
		case 1098143971:
			return 305;
		case 1130474589:
			return 264;
		case 1132574871:
			return 402;
		case 1134064472:
			return 271;
		case 1138578991:
			return 286;
		case 1141344854:
			return 378;
		case 1150653348:
			return 392;
		case 1156064998:
			return 366;
		case 1157034909:
			return 451;
		case 1165920102:
			return 292;
		case 1166284695:
			return 363;
		case 1176031365:
			return 224;
		case 1176450045:
			return 87;
		case 1185998732:
			return 410;
		case 1188734721:
			return 214;
		case 1219566057:
			return 166;
		case 1234351222:
			return 463;
		case 1249990864:
			return 428;
		case 1264235360:
			return 450;
		case 1267596926:
			return 7;
		case 1267957796:
			return 32;
		case 1292421672:
			return 215;
		case 1296800590:
			return 107;
		case 1297331434:
			return 130;
		case 1300783988:
			return 45;
		case 1305416676:
			return 495;
		case 1314347520:
			return 122;
		case 1328264128:
			return 258;
		case 1330480767:
			return 102;
		case 1335382896:
			return 248;
		case 1338855384:
			return 152;
		case 1344816618:
			return 314;
		case 1344986053:
			return 168;
		case 1349313303:
			return 6;
		case 1354948947:
			return 300;
		case 1357649685:
			return 267;
		case 1358951864:
			return 368;
		case 1360004037:
			return 322;
		case 1365311568:
			return 85;
		case 1366067161:
			return 91;
		case 1402899606:
			return 195;
		case 1406459015:
			return 53;
		case 1410684624:
			return 181;
		case 1415827953:
			return 432;
		case 1425403638:
			return 479;
		case 1427678219:
			return 230;
		case 1437607594:
			return 306;
		case 1438982821:
			return 111;
		case 1441230304:
			return 502;
		case 1447433250:
			return 352;
		case 1448617333:
			return 99;
		case 1454698172:
			return 421;
		case 1456958671:
			return 397;
		case 1467569385:
			return 69;
		case 1469701481:
			return 394;
		case 1508162848:
			return 434;
		case 1522535287:
			return 48;
		case 1524405765:
			return 79;
		case 1534808110:
			return 301;
		case 1549419655:
			return 216;
		case 1566844391:
			return 63;
		case 1571380021:
			return 75;
		case 1578693170:
			return 144;
		case 1593516439:
			return 462;
		case 1618734891:
			return 339;
		case 1621135203:
			return 44;
		case 1623482561:
			return 503;
		case 1636680094:
			return 478;
		case 1647502903:
			return 20;
		case 1665139197:
			return 278;
		case 1674863702:
			return 281;
		case 1675028401:
			return 109;
		case 1685749736:
			return 334;
		case 1688887348:
			return 209;
		case 1699962800:
			return 263;
		case 1701503387:
			return 207;
		case 1707661169:
			return 167;
		case 1723031480:
			return 161;
		case 1731971171:
			return 262;
		case 1750892420:
			return 183;
		case 1756182884:
			return 162;
		case 1759111208:
			return 72;
		case 1769573516:
			return 468;
		case 1773135364:
			return 231;
		case 1777191912:
			return 340;
		case 1783253542:
			return 384;
		case 1784248599:
			return 143;
		case 1786449168:
			return 31;
		case 1791780428:
			return 117;
		case 1792418811:
			return 100;
		case 1796786552:
			return 379;
		case 1817180056:
			return 390;
		case 1819621703:
			return 276;
		case 1824331150:
			return 449;
		case 1852529797:
			return 307;
		case 1863892775:
			return 274;
		case 1874987418:
			return 191;
		case 1888528254:
			return 447;
		case 1889392998:
			return 508;
		case 1890596065:
			return 235;
		case 1899640864:
			return 388;
		case 1909655985:
			return 430;
		case 1914552023:
			return 176;
		case 1927460276:
			return 448;
		case 1935952956:
			return 475;
		case 1937922313:
			return 459;
		case 1945593927:
			return 62;
		case 1955664182:
			return 226;
		case 1964695690:
			return 491;
		case 1971155641:
			return 453;
		case 1974689262:
			return 500;
		case 1978339427:
			return 154;
		case 2011168490:
			return 123;
		case 2011368334:
			return 221;
		case 2016323151:
			return 36;
		case 2030928096:
			return 381;
		case 2033246305:
			return 82;
		case 2045192987:
			return 319;
		case 2045388447:
			return 121;
		case 2050878222:
			return 497;
		case 2057380366:
			return 348;
		case 2071287828:
			return 347;
		case 2080199877:
			return 213;
		case 2082303678:
			return 5;
		case 2091083291:
			return 15;
		case 2137967386:
			return 386;
		case 2143106360:
			return 416;
		case 2143139308:
			return 465;
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

bool func_1249(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1250(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1420(iParam0);
	}
	else
	{
		func_1421(iParam0, iParam1);
	}
	func_1422();
}

void func_1251(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_1252(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1253(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1254(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1255(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

bool func_1256(int iParam0, bool bParam1)
{
	if (func_56() != -1)
	{
		return false;
	}
	if (!func_402(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_761(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_955(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_761(iParam0));
}

Vector3 func_1257(vector3 vParam0, vector3 vParam3, vector3 vParam6)
{
	vVar0 = { func_1423(vParam6, vParam3) };
	return vParam0 + vVar0;
}

void func_1258(int iParam0, var uParam1)
{
	if (Global_40.f_4283 == 3)
	{
		if (*uParam1 == 3)
		{
			force_room_for_entity(&(uParam1->f_9[iParam0]), get_interior_at_coords(uParam1->f_3), -1289461573);
		}
	}
}

int func_1259(int iParam0, int iParam1)
{
	if (!func_871(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_805(0) };
	Var0.f_4 = func_1260(iParam1);
	Var5 = { func_945(iParam0, Var0, Var0.f_4, 0) };
	if (!_0xb881ca836cc4b6d4(&Var5))
	{
		return 0;
	}
	uVar9 = _0xc97e0d2302382211(func_490(0), &Var5, 0);
	return uVar9;
}

int func_1260(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		case 2:
			return 1426626782;
		case 3:
			return 1227915917;
		default:
			break;
	}
	return 1084182731;
}

void func_1261(int iParam0)
{
	Global_1914319->f_15923 = iParam0;
}

bool func_1262(int iParam0)
{
	return iParam0 != 0;
}

bool func_1263(vector3 vParam0, int iParam3)
{
	func_1424(iParam3, &vVar0, &Var3, &uVar6);
	if (func_1425(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

void func_1264(int iParam0, var uParam1, var uParam2)
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

void func_1265(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

void func_1266(int* iParam0)
{
	if (Global_1357549->f_1894 > 0)
	{
		if (!func_204(iParam0->f_8))
		{
			iParam0->f_8 = func_564("SHOP_PREV_PAGE", -875187602, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_210(iParam0->f_8, -2019190071, 0, 1);
		}
	}
	else
	{
		func_205(&(iParam0->f_8), 1, 1);
	}
	if (Global_1357549->f_1894 < 3)
	{
		if (!func_204(iParam0->f_7))
		{
			iParam0->f_7 = func_564("SHOP_NEXT_PAGE", 285921746, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_210(iParam0->f_7, -2019190071, 0, 1);
		}
	}
	else
	{
		func_205(&(iParam0->f_7), 1, 1);
	}
	if (func_1426(iParam0->f_10, 1) > 0f)
	{
		if (func_1427(iParam0->f_8, 1))
		{
			func_1428(iParam0->f_8, 0, 0);
		}
		if (func_1427(iParam0->f_7, 1))
		{
			func_1428(iParam0->f_7, 0, 0);
		}
	}
	else
	{
		if (func_204(iParam0->f_8) && !func_1427(iParam0->f_8, 0))
		{
			func_1428(iParam0->f_8, 1, 0);
		}
		if (func_204(iParam0->f_7) && !func_1427(iParam0->f_7, 0))
		{
			func_1428(iParam0->f_7, 1, 0);
		}
	}
}

void func_1267(var uParam0)
{
	if (uParam0->f_773)
	{
		func_1429(uParam0);
		if (uParam0->f_772)
		{
			func_645(uParam0->f_1, "JOURNAL_INFO_HIDE", 1);
		}
		else
		{
			func_645(uParam0->f_1, "JOURNAL_INFO_SHOW", 1);
		}
	}
	else
	{
		func_1271(uParam0);
	}
}

void func_1268(int* iParam0, var uParam1)
{
	if (iParam0->f_35.f_491)
	{
		if (!func_204(iParam0->f_10))
		{
			iParam0->f_10 = func_564("PURCHASE_UPGRADE", 1138488863, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_210(iParam0->f_10, -2019190071, 0, 1);
			func_1428(iParam0->f_10, 0, 1);
		}
		if (iParam0->f_35.f_491.f_5)
		{
			if (func_204(iParam0->f_10) && !func_1427(iParam0->f_10, 0))
			{
				func_1428(iParam0->f_10, 1, 0);
			}
		}
		else
		{
			bVar0 = true;
			if (func_1020(iParam0, 0))
			{
				bVar0 = false;
			}
			else if (iParam0->f_35.f_491.f_1 == 2 && func_1430(2, uParam1, 1120403456))
			{
				bVar0 = false;
			}
			else if (iParam0->f_35.f_491.f_1 == 1 && func_1430(0, uParam1, 1120403456))
			{
				bVar0 = false;
			}
			else if (iParam0->f_35.f_491.f_1 == 0 && func_1430(1, uParam1, 1120403456))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (func_204(iParam0->f_10) && !func_1427(iParam0->f_10, 0))
				{
					func_1428(iParam0->f_10, 1, 0);
				}
			}
			else if (func_1427(iParam0->f_10, 1))
			{
				func_1428(iParam0->f_10, 0, 0);
			}
		}
	}
}

void func_1269(int* iParam0)
{
	if (!func_1020(iParam0, 1) && !func_204(iParam0->f_9))
	{
		iParam0->f_9 = func_564("BUTCH_DONE", 814057702, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		func_210(iParam0->f_9, -2019190071, 0, 1);
	}
}

void func_1270(int* iParam0)
{
	func_205(&(iParam0->f_8), 1, 1);
	func_205(&(iParam0->f_7), 1, 1);
}

void func_1271(var uParam0)
{
	if (func_204(uParam0->f_1))
	{
		func_205(&(uParam0->f_1), 1, 1);
	}
}

void func_1272(int* iParam0)
{
	func_205(&(iParam0->f_10), 1, 1);
}

void func_1273(int* iParam0)
{
	func_205(&(iParam0->f_9), 1, 1);
}

bool func_1274(var uParam0)
{
	if (!does_entity_exist(*uParam0) || is_entity_dead(*uParam0))
	{
		return false;
	}
	if (func_1431(*uParam0, -1725579161, 0))
	{
		return true;
	}
	return false;
}

int func_1275(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2535.f_1)
	{
		if (&Global_1946804->f_2535.f_43[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1276(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return func_1432(iParam0, iParam1, bParam2, bParam3);
}

void func_1277(int iParam0, int iParam1, bool bParam2)
{
	func_1433(iParam0, iParam1, bParam2, 1);
}

void func_1278(var uParam0)
{
	_databinding_write_data_bool(uParam0->f_102.f_7, 0);
	_databinding_write_data_bool(uParam0->f_110.f_7, 0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		_databinding_write_data_bool(uParam0->f_55.f_5[iVar0]->f_5, 0);
		_databinding_write_data_bool(uParam0->f_55.f_30[iVar0]->f_3, 0);
		iVar0++;
	}
}

void func_1279(int iParam0, var uParam1)
{
	if (iParam0 == -1)
	{
		_databinding_write_data_bool(*uParam1, 0);
		return;
	}
	_databinding_write_data_bool(*uParam1, 1);
	if (iParam0 == 0)
	{
		switch (func_141())
		{
			case 1:
				_databinding_write_data_hash_string(uParam1->f_1, 160827397);
				break;
			case 2:
				_databinding_write_data_hash_string(uParam1->f_1, 1003809922);
				break;
			case 3:
				_databinding_write_data_hash_string(uParam1->f_1, -518834432);
				break;
		}
	}
	else
	{
		_databinding_write_data_hash_string(uParam1->f_1, 0);
	}
	if (&Global_40.f_4283.f_440[iParam0] > 0)
	{
		_databinding_write_data_bool(uParam1->f_2, 1);
		_databinding_write_data_string(uParam1->f_2.f_1, _create_var_string(2, "CASH_STRING", &(Global_40.f_4283.f_440[iParam0])));
	}
	else
	{
		_databinding_write_data_bool(uParam1->f_2, 0);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_1434(iParam0, iVar0, uParam1->f_4[iVar0]);
		iVar0++;
	}
	switch (iParam0)
	{
		case 0:
			if (Global_40.f_4283.f_440[1]->f_62 == 0)
			{
				_databinding_write_data_bool(uParam1->f_53, 1);
			}
			else
			{
				_databinding_write_data_bool(uParam1->f_53, 0);
			}
			break;
		case 1:
			if (Global_40.f_4283.f_440[1]->f_62 > 0)
			{
				_databinding_write_data_bool(uParam1->f_53, 1);
			}
			else
			{
				_databinding_write_data_bool(uParam1->f_53, 0);
			}
			break;
	}
	iVar1 = func_1435(Global_40.f_4283.f_440[iParam0]);
	sVar2 = "CASH_STRING";
	if (iVar1 < 0)
	{
		sVar2 = "CASH_STRING_NEG";
	}
	_databinding_write_data_string(uParam1->f_53.f_1, _create_var_string(2, sVar2, iVar1));
}

void func_1280(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == -1)
	{
		_databinding_write_data_bool(*uParam1, 0);
		return;
	}
	iVar0 = (func_365(func_1283(iParam0), 0) - 1);
	_databinding_write_data_bool(*uParam1, 1);
	_databinding_write_data_bool(uParam1->f_4, (*uParam2)[iParam0]->f_23);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		_databinding_write_data_hash_string(uParam1->f_5[iVar1]->f_1, &((*uParam2)[iParam0]->f_2[iVar1]));
		_databinding_write_data_hash_string(uParam1->f_5[iVar1]->f_2, (*uParam2)[iParam0]->f_2[iVar1]->f_1);
		if ((*uParam2)[iParam0]->f_2[iVar1]->f_3 != -1)
		{
			_databinding_write_data_string(uParam1->f_5[iVar1]->f_3, _create_var_string(2, "LDGR_PRICE", (*uParam2)[iParam0]->f_2[iVar1]->f_3));
		}
		else
		{
			_databinding_write_data_string(uParam1->f_5[iVar1]->f_3, "");
		}
		_databinding_write_data_bool(&(uParam1->f_5[iVar1]), iVar1 <= iVar0 + 1);
		_databinding_write_data_bool(uParam1->f_5[iVar1]->f_4, iVar1 <= iVar0);
		if ((*uParam2)[iParam0]->f_23)
		{
			_databinding_write_data_string(uParam1->f_30[iVar1]->f_1, _create_var_string(2, "LDGR_PRICE", &((*uParam2)[iParam0]->f_24[iVar1])));
			_databinding_write_data_bool(&(uParam1->f_30[iVar1]), iVar1 <= iVar0);
			_databinding_write_data_bool(uParam1->f_30[iVar1]->f_2, iVar1 < iVar0);
		}
		iVar1++;
	}
	switch (iParam0)
	{
		case 0:
			_databinding_write_data_hash_string(uParam1->f_1, -393102324);
			_databinding_write_data_hash_string(uParam1->f_2, 2011573789);
			_databinding_write_data_hash_string(uParam1->f_3, -1557506224);
			break;
		case 1:
			_databinding_write_data_hash_string(uParam1->f_1, -528257027);
			_databinding_write_data_hash_string(uParam1->f_2, 1071167867);
			_databinding_write_data_hash_string(uParam1->f_3, -1627564647);
			break;
		case 2:
			_databinding_write_data_hash_string(uParam1->f_1, 283666457);
			_databinding_write_data_hash_string(uParam1->f_2, 1013492974);
			_databinding_write_data_hash_string(uParam1->f_3, -1468577886);
			break;
		case 3:
			_databinding_write_data_hash_string(uParam1->f_1, -803999078);
			_databinding_write_data_hash_string(uParam1->f_2, 0);
			_databinding_write_data_hash_string(uParam1->f_3, -1952675429);
			break;
		default:
			break;
	}
}

void func_1281(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == -1)
	{
		_databinding_write_data_bool(*uParam1, 0);
		return;
	}
	iVar0 = (func_365(func_1283(iParam0), 0) - 1);
	_databinding_write_data_bool(*uParam1, 1);
	_databinding_write_data_bool(uParam1->f_5, iVar0 > 0);
	_databinding_write_data_bool(uParam1->f_6, iVar0 > 0);
	_databinding_write_data_hash_string(uParam1->f_2, (*uParam2)[iParam0]->f_2[1]->f_1);
	_databinding_write_data_string(uParam1->f_4, _create_var_string(2, "LDGR_PRICE", (*uParam2)[iParam0]->f_2[1]->f_3));
	switch (iParam0)
	{
		case 4:
			_databinding_write_data_hash_string(uParam1->f_1, 61188257);
			_databinding_write_data_hash_string(uParam1->f_3, -492089529);
			break;
		case 5:
			_databinding_write_data_hash_string(uParam1->f_1, -593314660);
			_databinding_write_data_hash_string(uParam1->f_3, 1084624964);
			break;
		case 7:
			_databinding_write_data_hash_string(uParam1->f_1, -1156421435);
			_databinding_write_data_hash_string(uParam1->f_3, 1642689245);
			break;
		case 6:
			_databinding_write_data_hash_string(uParam1->f_1, -1477784184);
			_databinding_write_data_hash_string(uParam1->f_3, -1832854507);
			break;
		default:
			break;
	}
}

bool func_1282(var uParam0, var uParam1)
{
	if (func_1436(&(uParam0->f_55), uParam1))
	{
		uParam1->f_4 = 0;
		return true;
	}
	if (func_1437(&(uParam0->f_102), uParam1))
	{
		uParam1->f_4 = 1;
		return true;
	}
	if (func_1437(&(uParam0->f_110), uParam1))
	{
		uParam1->f_4 = 2;
		return true;
	}
	return false;
}

int func_1283(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 4;
		case 2:
			return 5;
		case 3:
			return 10;
		case 4:
			return 13;
		case 5:
			return 0;
		case 6:
			return 12;
		case 7:
			return 14;
		default:
			break;
	}
	return -1;
}

int func_1284()
{
	return -1802590239;
}

Vector3 func_1285(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			vVar0 = { -72.4089f, 2.8532f, -117.5962f };
			break;
		case 2:
			vVar0 = { -77.3119f, -0.0017f, -71.347f };
			break;
		case 3:
			vVar0 = { -73.0725f, -0.1101f, 134.3503f };
			break;
	}
	return vVar0;
}

void func_1286(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8, int iParam9, float fParam10, float fParam11, int iParam12, int iParam13, float fParam14, bool bParam15, float fParam16, float fParam17)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam4 };
	uParam0->f_7 = fParam7;
	uParam0->f_25 = iParam8;
	uParam0->f_26 = iParam9;
	uParam0->f_27 = fParam10;
	uParam0->f_8 = { vParam1 };
	uParam0->f_11 = 1f;
	uParam0->f_12 = 0f;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_16 = { 0f, 0f, 0f };
	uParam0->f_19 = { 0f, 0f, 0f };
	uParam0->f_22 = fParam7;
	uParam0->f_23 = (fParam7 + fParam16);
	uParam0->f_28 = iParam12;
	uParam0->f_24 = fParam11;
	*uParam0 = create_cam("DEFAULT_SCRIPTED_CAMERA", false);
	set_cam_active(*uParam0, true);
	set_cam_params(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_23, 0, 1, 1, 2, 1, 0);
	if (!bParam15)
	{
		shake_cam(*uParam0, "HAND_SHAKE", fParam17);
	}
	render_script_cams(true, false, 3000, true, false, 0);
	if (fParam14 > 0f)
	{
		set_cam_near_clip(*uParam0, fParam14);
	}
	if (uParam0->f_28)
	{
		lock_minimap_angle(iParam13);
	}
	uParam0->f_34 = 0;
	uParam0->f_35 = 0;
	uParam0->f_36 = 0;
	uParam0->f_38 = 0;
	uParam0->f_37 = 0;
}

bool func_1287(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_1288(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return FtoV((1f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

float func_1289(float fParam0, float fParam1, float fParam2)
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

bool func_1290(int iParam0, var uParam1, struct<8> Param2, var uParam10)
{
	if (!*uParam1)
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			switch (uParam1->f_4)
			{
				case 1:
					return false;
				case 2:
					if (uParam1->f_3 == 0 && Param2.f_2 == -1)
					{
						return false;
					}
					if (uParam1->f_3 == 1 && Param2.f_6 == -1)
					{
						return false;
					}
					if (!func_1438(&((*uParam10)[uParam1->f_3]->f_102)))
					{
						return false;
					}
					_databinding_write_data_bool((*uParam10)[uParam1->f_3]->f_110.f_7, 0);
					_databinding_write_data_bool((*uParam10)[uParam1->f_3]->f_102.f_7, 1);
					if (uParam1->f_3 == 1)
					{
						uParam1->f_1 = Param2.f_6;
					}
					else
					{
						uParam1->f_1 = Param2.f_2;
					}
					uParam1->f_4 = 1;
					uParam1->f_5 = 1;
					uParam1->f_6 = -1;
					return true;
				case 0:
					if (uParam1->f_5)
					{
						return false;
					}
					iVar0 = func_1439(&((*uParam10)[uParam1->f_3]->f_55));
					if (iVar0 == -1)
					{
						return false;
					}
					func_1278((*uParam10)[uParam1->f_3]);
					_databinding_write_data_bool((*uParam10)[uParam1->f_3]->f_55.f_5[iVar0]->f_5, 1);
					uParam1->f_5 = 1;
					uParam1->f_6 = iVar0;
					return true;
				default:
					break;
			}
			break;
		case 1:
			switch (uParam1->f_4)
			{
				case 2:
					return false;
				case 1:
					if (uParam1->f_3 == 0 && Param2.f_3 == -1)
					{
						return false;
					}
					if (uParam1->f_3 == 1 && Param2.f_7 == -1)
					{
						return false;
					}
					if (!func_1438(&((*uParam10)[uParam1->f_3]->f_110)))
					{
						return false;
					}
					_databinding_write_data_bool((*uParam10)[uParam1->f_3]->f_102.f_7, 0);
					_databinding_write_data_bool((*uParam10)[uParam1->f_3]->f_110.f_7, 1);
					if (uParam1->f_3 == 1)
					{
						uParam1->f_1 = Param2.f_7;
					}
					else
					{
						uParam1->f_1 = Param2.f_3;
					}
					uParam1->f_4 = 2;
					uParam1->f_5 = 1;
					uParam1->f_6 = -1;
					return true;
				case 0:
					if (!uParam1->f_5)
					{
						return false;
					}
					iVar0 = func_1440(&((*uParam10)[uParam1->f_3]->f_55));
					if (iVar0 == -1)
					{
						return false;
					}
					func_1278((*uParam10)[uParam1->f_3]);
					_databinding_write_data_bool((*uParam10)[uParam1->f_3]->f_55.f_30[iVar0]->f_3, 1);
					uParam1->f_5 = 0;
					uParam1->f_6 = iVar0;
					return true;
				default:
					break;
			}
			break;
		case 2:
			if (uParam1->f_3 == 0)
			{
				return false;
			}
			switch (uParam1->f_4)
			{
				case 2:
					if (Param2.f_3 != -1 && func_1438(&((*uParam10)[0]->f_110)))
					{
						_databinding_write_data_bool((*uParam10)[1]->f_110.f_7, 0);
						_databinding_write_data_bool((*uParam10)[0]->f_110.f_7, 1);
						uParam1->f_1 = Param2.f_3;
						uParam1->f_3 = 0;
						uParam1->f_4 = 2;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return true;
					}
					else if (Param2.f_2 != -1 && func_1438(&((*uParam10)[0]->f_102)))
					{
						_databinding_write_data_bool((*uParam10)[1]->f_110.f_7, 0);
						_databinding_write_data_bool((*uParam10)[0]->f_102.f_7, 1);
						uParam1->f_1 = Param2.f_2;
						uParam1->f_3 = 0;
						uParam1->f_4 = 1;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return true;
					}
					return false;
				case 1:
					if (Param2.f_2 != -1 && func_1438(&((*uParam10)[0]->f_102)))
					{
						_databinding_write_data_bool((*uParam10)[1]->f_102.f_7, 0);
						_databinding_write_data_bool((*uParam10)[0]->f_102.f_7, 1);
						uParam1->f_1 = Param2.f_2;
						uParam1->f_3 = 0;
						uParam1->f_4 = 1;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return true;
					}
					else if (Param2.f_3 != -1 && func_1438(&((*uParam10)[0]->f_110)))
					{
						_databinding_write_data_bool((*uParam10)[1]->f_102.f_7, 0);
						_databinding_write_data_bool((*uParam10)[0]->f_110.f_7, 1);
						uParam1->f_1 = Param2.f_3;
						uParam1->f_3 = 0;
						uParam1->f_4 = 2;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return true;
					}
					return false;
				case 0:
					if (Param2.f_1 == -1)
					{
						return false;
					}
					if (uParam1->f_5)
					{
						iVar0 = func_1439(&((*uParam10)[0]->f_55));
						if (iVar0 != -1)
						{
							func_1278((*uParam10)[1]);
							_databinding_write_data_bool((*uParam10)[0]->f_55.f_5[iVar0]->f_5, 1);
							uParam1->f_1 = Param2.f_1;
							uParam1->f_3 = 0;
							uParam1->f_4 = 0;
							uParam1->f_5 = 1;
							uParam1->f_6 = iVar0;
							return true;
						}
						iVar0 = func_1440(&((*uParam10)[0]->f_55));
						if (iVar0 != -1)
						{
							func_1278((*uParam10)[1]);
							_databinding_write_data_bool((*uParam10)[0]->f_55.f_30[iVar0]->f_3, 1);
							uParam1->f_1 = Param2.f_1;
							uParam1->f_3 = 0;
							uParam1->f_4 = 0;
							uParam1->f_5 = 0;
							uParam1->f_6 = iVar0;
							return true;
						}
					}
					else
					{
						iVar0 = func_1440(&((*uParam10)[0]->f_55));
						if (iVar0 != -1)
						{
							func_1278((*uParam10)[1]);
							_databinding_write_data_bool((*uParam10)[0]->f_55.f_30[iVar0]->f_3, 1);
							uParam1->f_1 = Param2.f_1;
							uParam1->f_3 = 0;
							uParam1->f_4 = 0;
							uParam1->f_5 = 0;
							uParam1->f_6 = iVar0;
							return true;
						}
						iVar0 = func_1439(&((*uParam10)[0]->f_55));
						if (iVar0 != -1)
						{
							func_1278((*uParam10)[1]);
							_databinding_write_data_bool((*uParam10)[0]->f_55.f_5[iVar0]->f_5, 1);
							uParam1->f_1 = Param2.f_1;
							uParam1->f_3 = 0;
							uParam1->f_4 = 0;
							uParam1->f_5 = 1;
							uParam1->f_6 = iVar0;
							return true;
						}
					}
					return false;
				default:
					break;
			}
			break;
		case 3:
			if (uParam1->f_3 == 1)
			{
				return false;
			}
			switch (uParam1->f_4)
			{
				case 2:
					if (Param2.f_7 != -1 && func_1438(&((*uParam10)[1]->f_110)))
					{
						_databinding_write_data_bool((*uParam10)[0]->f_110.f_7, 0);
						_databinding_write_data_bool((*uParam10)[1]->f_110.f_7, 1);
						uParam1->f_1 = Param2.f_7;
						uParam1->f_3 = 1;
						uParam1->f_4 = 2;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return true;
					}
					else if (Param2.f_6 != -1 && func_1438(&((*uParam10)[1]->f_102)))
					{
						_databinding_write_data_bool((*uParam10)[0]->f_110.f_7, 0);
						_databinding_write_data_bool((*uParam10)[1]->f_102.f_7, 1);
						uParam1->f_1 = Param2.f_6;
						uParam1->f_3 = 1;
						uParam1->f_4 = 1;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return true;
					}
					return false;
				case 1:
					if (Param2.f_6 != -1 && func_1438(&((*uParam10)[1]->f_102)))
					{
						_databinding_write_data_bool((*uParam10)[0]->f_102.f_7, 0);
						_databinding_write_data_bool((*uParam10)[1]->f_102.f_7, 1);
						uParam1->f_1 = Param2.f_6;
						uParam1->f_3 = 1;
						uParam1->f_4 = 1;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return true;
					}
					else if (Param2.f_7 != -1 && func_1438(&((*uParam10)[1]->f_110)))
					{
						_databinding_write_data_bool((*uParam10)[0]->f_102.f_7, 0);
						_databinding_write_data_bool((*uParam10)[1]->f_110.f_7, 1);
						uParam1->f_1 = Param2.f_7;
						uParam1->f_3 = 1;
						uParam1->f_4 = 2;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return true;
					}
					return false;
				case 0:
					if (Param2.f_5 == -1)
					{
						return false;
					}
					if (uParam1->f_5)
					{
						iVar0 = func_1439(&((*uParam10)[1]->f_55));
						if (iVar0 != -1)
						{
							func_1278((*uParam10)[0]);
							_databinding_write_data_bool((*uParam10)[1]->f_55.f_5[iVar0]->f_5, 1);
							uParam1->f_1 = Param2.f_5;
							uParam1->f_3 = 1;
							uParam1->f_4 = 0;
							uParam1->f_5 = 1;
							uParam1->f_6 = iVar0;
							return true;
						}
						iVar0 = func_1440(&((*uParam10)[1]->f_55));
						if (iVar0 != -1)
						{
							func_1278((*uParam10)[0]);
							_databinding_write_data_bool((*uParam10)[1]->f_55.f_30[iVar0]->f_3, 1);
							uParam1->f_1 = Param2.f_5;
							uParam1->f_3 = 1;
							uParam1->f_4 = 0;
							uParam1->f_5 = 0;
							uParam1->f_6 = iVar0;
							return true;
						}
					}
					else
					{
						iVar0 = func_1440(&((*uParam10)[1]->f_55));
						if (iVar0 != -1)
						{
							func_1278((*uParam10)[0]);
							_databinding_write_data_bool((*uParam10)[1]->f_55.f_30[iVar0]->f_3, 1);
							uParam1->f_1 = Param2.f_5;
							uParam1->f_3 = 1;
							uParam1->f_4 = 0;
							uParam1->f_5 = 0;
							uParam1->f_6 = iVar0;
							return true;
						}
						iVar0 = func_1439(&((*uParam10)[1]->f_55));
						if (iVar0 != -1)
						{
							func_1278((*uParam10)[0]);
							_databinding_write_data_bool((*uParam10)[1]->f_55.f_5[iVar0]->f_5, 1);
							uParam1->f_1 = Param2.f_5;
							uParam1->f_3 = 1;
							uParam1->f_4 = 0;
							uParam1->f_5 = 1;
							uParam1->f_6 = iVar0;
							return true;
						}
					}
					break;
			}
			break;
	}
	return false;
}

void func_1291(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			play_sound_frontend("NAV_UP", "Ledger_Sounds", true, 0);
			break;
		case 1:
			play_sound_frontend("NAV_DOWN", "Ledger_Sounds", true, 0);
			break;
		case 2:
			play_sound_frontend("NAV_LEFT", "Ledger_Sounds", true, 0);
			break;
		case 3:
			play_sound_frontend("NAV_RIGHT", "Ledger_Sounds", true, 0);
			break;
	}
}

void func_1292(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_365(iParam2, 0) < func_1441(iParam2))
	{
		iVar0 = func_1442(iParam0, iParam2);
		if (func_149() < iVar0)
		{
			iVar1 = (iVar0 - func_149());
			if (func_1443(1) >= iVar1)
			{
				func_1444(iVar1, 0, 0, 1, 1);
				func_1445(iVar1);
			}
		}
		if (func_149() >= iVar0)
		{
			*bParam4 = 1;
			if (iParam1 == 3)
			{
				if (func_365(10, 0) == 1)
				{
					func_1024(64);
				}
			}
			func_1446(iParam1, 0, iVar0);
			iVar2 = (func_365(iParam2, 0) + iParam3);
			if (iParam2 == 10)
			{
				if (iVar2 >= 3)
				{
					iVar3 = func_827(func_141());
					if (!func_130(iVar3, 64))
					{
						func_163(iVar3, 64);
						func_163(iVar3, 262144);
					}
				}
			}
			func_1447(iParam2, iVar2);
			func_5();
			func_140(134217728);
			if (iParam1 == 5)
			{
				func_1448(&(Global_1357549->f_1492));
			}
			if (iParam1 == 2)
			{
				if (iVar2 >= 3 && !func_1216(-764310200))
				{
					func_1449(-764310200);
				}
				if (iVar2 >= 4 && !func_1216(1885857703))
				{
					func_1449(1885857703);
				}
			}
			func_205(&(iParam0->f_7), 1, 1);
			func_205(&(iParam0->f_8), 1, 1);
			func_205(&(iParam0->f_35.f_1), 1, 1);
			func_205(&(iParam0->f_10), 1, 1);
			func_205(&(iParam0->f_9), 1, 1);
			func_996(&(iParam0->f_35), 0);
			func_175(&(iParam0->f_810), 0);
			sVar4 = func_1450(iParam2, iVar2);
			if (is_string_null_or_empty(sVar4) == 0)
			{
				func_300(sVar4, 14500, 0, 0, 0, 1);
			}
			func_1000(iParam0, 14);
			iVar5 = func_1451(func_141());
			_0x217f47761376e16e(iVar5, iParam1, iVar2, iVar0, 0);
		}
		else
		{
			func_300("CAMP_UPG_BROKE", 9000, 0, 0, 0, 1);
		}
	}
}

void func_1293(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return;
	}
	Global_40.f_4283.f_415[iParam0] = 0;
}

void func_1294(int* iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			break;
		default:
			return;
	}
	iVar0 = func_1452(iParam0, iParam2);
	if (func_149() < iVar0)
	{
		iVar1 = (iVar0 - func_149());
		if (func_1443(1) >= iVar1)
		{
			func_1444(iVar1, 0, 0, 1, 1);
			func_1445(iVar1);
		}
	}
	if (func_149() >= iVar0)
	{
		*bParam3 = 1;
		func_1428(iParam0->f_10, 0, 1);
		func_1293(func_1453(iParam1));
		func_1293(3);
		func_1446(iParam1, 1, iVar0);
		iVar2 = func_1451(func_141());
		_0x217f47761376e16e(iVar2, iParam1, func_365(iParam2, 0), iVar0, 1);
	}
	else
	{
		func_300("CAMP_UPG_BROKE", 9000, 0, 0, 0, 1);
	}
}

void func_1295()
{
	play_sound_frontend("PURCHASE", "Ledger_Sounds", true, 0);
}

void func_1296()
{
	play_sound_frontend("UNAFFORDABLE", "Ledger_Sounds", true, 0);
}

int func_1297()
{
	if (func_141() == 8)
	{
		return 4;
	}
	return 17;
}

bool func_1298(int iParam0)
{
	func_907(iParam0, 0, 0);
	if (func_971(iParam0))
	{
		return (door_system_get_door_state(iParam0) == 2 || door_system_get_door_state(iParam0) == 1);
	}
	return false;
}

void func_1299(int iParam0, int iParam1)
{
	func_908(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

bool func_1300(vector3 vParam0, int iParam3)
{
	if (iParam3 == 7)
	{
		return false;
	}
	if (!_does_volume_exist(&(Global_1357549->f_3[iParam3])))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(&(Global_1357549->f_3[iParam3]), vParam0);
}

bool func_1301(int iParam0, var uParam1)
{
	if (!func_1454(iParam0))
	{
		return false;
	}
	iVar0 = func_1302(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_805(0) };
	if (!func_806(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_807(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

int func_1302(int iParam0)
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

bool func_1303(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	if (!func_1238(bParam10))
	{
		return func_1455(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1237(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (func_1456(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!_0xdccaa7c3bfd88862(func_490(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_1457(Var14, 1))
		{
		}
	}
	return true;
}

bool func_1304(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!func_1238(bParam9))
	{
		return func_1458(Param0, Param4, iParam8, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	if (func_1456(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_1237(Param0, &Var0, bParam9, 1) || !func_1237(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (func_1456(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_490(0);
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

bool func_1305(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_1459(get_entity_model(iParam0)))
	{
		return true;
	}
	if (decor_exist_on(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_1306(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

bool func_1307(int iParam0)
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

bool func_1308()
{
	return _unlock_is_unlocked(99890643);
}

int func_1309(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_736())
	{
		if (func_199())
		{
			bVar0 = false;
			if (!func_487((*Global_1835011)[15]->f_1, 1) && !func_649(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_1460();
				*iParam1 = func_1461();
				*uParam2 = func_1462();
				return 1;
			}
			else
			{
				*uParam0 = func_1463();
				*iParam1 = func_1464();
				*uParam2 = func_1465();
				return 1;
			}
		}
		else if (func_142())
		{
			if (!func_487((*Global_1835011)[60]->f_1, 1))
			{
				*uParam0 = func_1466();
				*iParam1 = func_1467();
				*uParam2 = func_1468();
				return 1;
			}
			else
			{
				*uParam0 = func_1469();
				*iParam1 = func_1470();
				*uParam2 = func_1471();
				return 1;
			}
		}
	}
	else if (func_199())
	{
		*uParam0 = func_1472();
		*iParam1 = func_1473();
		*uParam2 = func_1474();
		return 1;
	}
	else if (func_142())
	{
		*uParam0 = func_1475();
		*iParam1 = func_1476();
		*uParam2 = func_1477();
		return 1;
	}
	return 0;
}

bool func_1310(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1301(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_945(iParam1, Var0, 1415981582, 0) };
	return func_1457(Var29, 1);
}

bool func_1311(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1301(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_945(iParam1, Var0, -2119169513, 0) };
	return func_1457(Var29, 1);
}

void func_1312(var uParam0)
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

bool func_1313(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1301(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1478(Var0, 1415981582, 0);
	if (!func_871(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_1314(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1301(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1478(Var0, -2119169513, 0);
	if (!func_871(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_1315(int iParam0, var uParam1)
{
	if (!func_1479(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_1480() };
	*uParam1 = func_1478(Var0, iParam0, 0);
	if (!func_871(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_1316(int iParam0)
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
	_0xdf631e4bce1b1fc4(iParam0, -1442703445, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -1505972720, 0, false);
}

void func_1317(int iParam0, var uParam1)
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
	func_1481(iParam0, *uParam1);
	func_1481(iParam0, uParam1->f_1);
}

void func_1318(int iParam0, var uParam1)
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
	func_1481(iParam0, *uParam1);
	func_1481(iParam0, uParam1->f_1);
	func_1481(iParam0, uParam1->f_2);
	func_1481(iParam0, uParam1->f_3);
	func_1481(iParam0, uParam1->f_4);
	func_1481(iParam0, uParam1->f_5);
}

int func_1319(int iParam0, int iParam1, bool bParam2)
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

bool func_1320(int iParam0, int iParam1)
{
	iParam0 = func_714(iParam0);
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

void func_1321(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1483(func_1482(255), 109029619));
	}
	else if (func_199())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_142();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

void func_1322(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1483(func_1482(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_199())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_142())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1323(int iParam0)
{
	iParam0 = func_714(iParam0);
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

float func_1324(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1325(int iParam0)
{
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_715(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_312(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_312(iParam0) + 1;
	fVar6 = func_725(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1484(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1326(int iParam0)
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

void func_1327(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

int func_1328(int iParam0)
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

void func_1329(int iParam0, var uParam1)
{
	iParam0 = func_714(iParam0);
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

void func_1330(int iParam0, var uParam1)
{
	iParam0 = func_714(iParam0);
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

void func_1331(int iParam0, var uParam1)
{
	iParam0 = func_714(iParam0);
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

void func_1332(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1333()
{
	return Global_40.f_1095.f_3135;
}

void func_1334(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

var func_1335(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
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

struct<4> func_1336(int iParam0)
{
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, 0, 32);
	return cVar0;
}

char* func_1337(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_1338(int iParam0, bool bParam1, float fParam2)
{
	if (!is_bit_set(Global_1934765->f_301, 0))
	{
		return 0;
	}
	if (is_bit_set(Global_1934765->f_301, 1))
	{
		return 0;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		_0x243cede8f916b994();
		return 0;
	}
	iVar0 = func_1485(iParam0, 1);
	iVar1 = 0;
	while (iVar1 < 24)
	{
		iVar2 = func_1486(iVar1, 1);
		if (iVar2 == 0 || iVar2 == -1439599467)
		{
		}
		else if (is_bit_set(&(Global_1934765->f_302[iVar0]), iVar1))
		{
			_0xd3f943b88f55376a(iVar2);
		}
		else
		{
			_0x2916b30dc6c41179(iVar2);
		}
		iVar1++;
	}
	return func_1487(iParam0, bParam1, fParam2);
}

int func_1339(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 5;
		case 2:
			return 4;
		case 3:
			return 3;
		case 4:
			return 2;
		case 5:
			return 1;
		default:
			break;
	}
	return -1;
}

bool func_1340()
{
	if (func_56() != -1)
	{
		return false;
	}
	return func_751(1) > 0;
}

void func_1341(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request");
	if (_is_metaped_outfit_request_valid(iVar0))
	{
		_release_metaped_outfit_request(iVar0);
	}
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_1342(int iParam0, int iParam1, float fParam2)
{
	if (iParam1 == -1)
	{
		return;
	}
	if (Global_1934765->f_337 >= 6)
	{
		return;
	}
	Global_1934765->f_318[Global_1934765->f_337] = iParam0;
	Global_1934765->f_318[Global_1934765->f_337]->f_1 = iParam1;
	Global_1934765->f_318[Global_1934765->f_337]->f_2 = fParam2;
	Global_1934765->f_337++;
}

bool func_1343()
{
	if ((is_thread_active((*Global_1347702)[134]->f_42, false) && !func_848((*Global_1347702)[134]->f_15)) && !func_884((*Global_1347702)[134]->f_13, 4))
	{
		return true;
	}
	if (func_848((*Global_1347702)[134]->f_15))
	{
		return true;
	}
	return false;
}

int func_1344()
{
	return 0;
}

void func_1345(int iParam0)
{
	iVar0 = func_1099(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		set_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			set_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			set_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
		set_bit(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_1346(int iParam0)
{
	iVar0 = func_1099(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		clear_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			clear_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			clear_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_1347()
{
	func_1346(-939420910);
	func_1346(-1187950766);
	func_1346(356365161);
	func_1346(753127042);
	func_1346(-2038424081);
	func_1346(1884271742);
	func_1346(459290420);
}

void func_1348()
{
	func_1346(704802028);
	func_1346(588987611);
	func_1346(2008888900);
	func_1346(1649996811);
	func_1346(227918160);
	func_1346(168171957);
	func_1346(1193080109);
	func_1346(-491981251);
	func_1346(-639037538);
	func_1346(-618620429);
}

int func_1349()
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (func_141() == &Global_1357549->f_12[iVar0])
		{
			if (Global_1357549->f_12[iVar0]->f_7 != 0)
			{
				_0xd2b9c78537ed5759(Global_1357549->f_12[iVar0]->f_7);
				Global_1357549->f_12[iVar0]->f_7 = 0;
				Global_1357549->f_12[iVar0]->f_10 = 0;
				Global_1357549->f_12[iVar0]->f_8 = 0;
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1350()
{
	if (is_screen_faded_out())
	{
		return 0;
	}
	if (func_1022(64) || func_1022(128))
	{
		return 0;
	}
	switch (func_141())
	{
		case 2:
			if (is_sphere_visible(654.7123f, -1252.524f, 42.8435f, 5f))
			{
				return 1;
			}
			break;
		case 1:
			if (is_sphere_visible(-131.7905f, -31.7847f, 95.0884f, 5f))
			{
				return 1;
			}
			break;
		case 6:
			if (is_sphere_visible(2358.853f, 1375.151f, 105.5556f, 5f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_1351()
{
	if (func_227(180573150, 1) || func_227(-404697685, 1))
	{
		if ((_is_ped_using_scenario_hash(func_172(0), 49488831) && is_ped_active_in_scenario(func_172(0), 1)) && func_264(func_172(0), &(Global_1357549->f_1663[0]), 1, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	switch (func_141())
	{
		case 6:
			if (get_clock_hours() < 9)
			{
				return true;
			}
			if (get_clock_hours() == 9)
			{
				if (get_clock_minutes() < 30)
				{
					return true;
				}
			}
			if (get_clock_hours() >= 19)
			{
				if (get_clock_minutes() > 30)
				{
					return true;
				}
			}
			if (get_clock_hours() >= 20)
			{
				return true;
			}
			break;
		default:
			if (get_clock_hours() < 6)
			{
				return true;
			}
			break;
	}
	return false;
}

int func_1352(int iParam0, bool bParam1, bool bParam2)
{
	if (_0xcf45df50c7775f2a())
	{
		return 0;
	}
	iVar1 = func_141();
	iVar0 = func_1144(iVar1, iParam0, bParam1);
	if (!func_793(iVar0))
	{
		return 1;
	}
	return 1;
}

bool func_1353()
{
	if (does_entity_exist(func_172(1)))
	{
		if (_does_volume_exist(&(Global_1357549->f_1663[1])))
		{
			if (func_264(func_172(1), &(Global_1357549->f_1663[1]), 1, 0))
			{
				if ((_is_ped_using_scenario_hash(func_172(1), 640190094) || _is_ped_using_scenario_hash(func_172(1), 343112864)) || _is_ped_using_scenario_hash(func_172(1), 1774730608))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_1354()
{
	if (_does_volume_exist(&(Global_1357549->f_1663[1])))
	{
		if (func_264(Global_35, &(Global_1357549->f_1663[1]), 1, 0))
		{
			return true;
		}
	}
	return false;
}

void func_1355(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || iParam0 == 1)
	{
		func_1488(iParam0, 0);
	}
	if (!bParam1 || iParam0 == 2)
	{
		func_1489(iParam0, 0);
	}
	if (!bParam1 || iParam0 == 3)
	{
		func_1490(iParam0, 0);
	}
	if (!bParam1 || iParam0 == 6)
	{
		func_1491(iParam0, 0);
	}
	if (bParam2)
	{
		Global_1357549->f_575++;
		if (Global_1357549->f_575 >= 18)
		{
			Global_1357549->f_575 = 0;
		}
	}
}

bool func_1356()
{
	if (func_141() == 2 || func_141() == 3)
	{
		if (func_365(13, 0) > 1)
		{
			request_model(-180755040, false);
			if (has_model_loaded(-180755040))
			{
				return true;
			}
			return false;
		}
	}
	return true;
}

void func_1357()
{
	func_823(32);
}

var func_1358()
{
	return Global_1357549->f_1670;
}

void func_1359(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_1361(16);
	fVar1 = func_833();
	if (!bParam4 || iParam0 == 1)
	{
		func_1492(iParam0, uParam1, bParam2);
		func_1493(iParam0, fVar1, bParam2);
	}
	if (!bParam4 || iParam0 == 2)
	{
		func_1494(iParam0, uParam1, bParam2, bParam3);
		func_1495(iParam0, fVar1, bParam2, bParam3);
	}
	if (!bParam4 || iParam0 == 3)
	{
		func_1496(iParam0, uParam1, bParam2);
		func_1497(iParam0, fVar1, bParam2);
	}
	func_1498(iParam0, Global_40.f_4283.f_314);
	func_1499(iParam0, iVar0);
}

bool func_1360(int iParam0, bool bParam1)
{
	fVar0 = func_833();
	if (((iParam0 == 1 && func_1500(fVar0, bParam1)) || (iParam0 == 3 && func_1501(fVar0, bParam1))) || (iParam0 == 2 && func_1502(fVar0, bParam1)))
	{
		return true;
	}
	return false;
}

int func_1361(int iParam0)
{
	iVar0 = 1;
	if (iParam0 == 16)
	{
		iVar0 = Global_40.f_4283.f_312;
	}
	else
	{
		iVar0 = func_365(iParam0, 0);
	}
	return iVar0;
}

void func_1362(char* sParam0)
{
	if (_0x5ac0944c156e5f44(sParam0))
	{
		_0x527b97c203bb8606(sParam0);
	}
}

var func_1363(int iParam0)
{
	if (iParam0 == 2)
	{
		return "dewclm";
	}
	if (iParam0 == 4)
	{
		return "gua";
	}
	return func_1503(&((*Global_1888801)[func_391(iParam0)]->f_22));
}

char* func_1364(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "setup";
		case 1:
			return "running";
		case 2:
			if (func_12(268435456))
			{
				if (_0x5ac0944c156e5f44("bvh_nav_camp_teardown"))
				{
					_0x527b97c203bb8606("bvh_nav_camp_teardown");
				}
				return "finale1";
			}
			else
			{
				if (_0x5ac0944c156e5f44("bvh_nav_camp_finale1"))
				{
					_0x527b97c203bb8606("bvh_nav_camp_finale1");
				}
				return "teardown";
			}
			break;
	}
	return "";
}

int func_1365(int iParam0, bool bParam1)
{
	iVar0 = func_1123();
	iVar1[0] = -1687561002;
	iVar1[1] = 1957225320;
	iVar1[2] = -860696938;
	iVar5[0] = -1971474291;
	iVar5[1] = -1425946870;
	iVar5[2] = -1114426126;
	iVar9[0] = -316909020;
	iVar9[1] = -1962893335;
	iVar9[2] = 1351589798;
	iVar13[0] = 300868838;
	iVar13[1] = -1788578071;
	iVar13[2] = 1157066259;
	if (((func_1504() || func_848((*Global_1347702)[59]->f_15)) || func_848((*Global_1347702)[0]->f_15)) || func_1022(64))
	{
		iVar13[0] = -316909020;
		iVar13[1] = -1962893335;
		iVar13[2] = 1351589798;
		if (iParam0 == 0)
		{
			if (_is_imap_active(300868838))
			{
				_remove_imap(300868838);
			}
			if (_is_imap_active(-1788578071))
			{
				_remove_imap(-1788578071);
			}
			if (_is_imap_active(1157066259))
			{
				_remove_imap(1157066259);
			}
		}
		if (func_456((*Global_1835011)[9]->f_1) == 0 && func_848((*Global_1835011)[9]->f_1) == 0)
		{
			if (iParam0 == 0)
			{
				if (_is_imap_active(1475953931))
				{
					_remove_imap(1475953931);
				}
				if (_is_imap_active(1475953931))
				{
					_remove_imap(1475953931);
				}
				if (_is_imap_active(1475953931))
				{
					_remove_imap(1475953931);
				}
			}
		}
	}
	if (((((func_456((*Global_1835011)[9]->f_1) || func_848((*Global_1835011)[9]->f_1)) || func_505()) || func_32() == 2) || func_848((*Global_1347702)[66]->f_15)) || ((func_848((*Global_1835011)[10]->f_1) && func_143(11)) && func_1022(64) == 0))
	{
		iVar9[0] = 1475953931;
		iVar9[1] = 1475953931;
		iVar9[2] = 1475953931;
		iVar13[0] = 1475953931;
		iVar13[1] = 1475953931;
		iVar13[2] = 1475953931;
	}
	else
	{
		iVar9[0] = -316909020;
		iVar9[1] = -1962893335;
		iVar9[2] = 1351589798;
	}
	if (func_1354() || func_848((*Global_1835011)[4]->f_1))
	{
		iVar5[0] = &iVar1[0];
		iVar5[1] = &iVar1[1];
		iVar5[2] = &iVar1[2];
	}
	if (func_1505(1) && iParam0 == 1)
	{
		iVar1[0] = -1971474291;
		iVar1[1] = -1425946870;
		iVar1[2] = -1114426126;
		iVar5[0] = -1687561002;
		iVar5[1] = 1957225320;
		iVar5[2] = -860696938;
		iVar17 = 0;
		while (iVar17 < 3)
		{
			if (_is_imap_active(&(iVar1[iVar17])))
			{
				_remove_imap(&(iVar1[iVar17]));
			}
			if (_is_imap_active(&(iVar5[iVar17])))
			{
				_remove_imap(&(iVar5[iVar17]));
			}
			iVar17++;
		}
		return func_1344();
	}
	switch (iParam0)
	{
		case 1:
			iVar0 = func_1506(&iVar1, &iVar5, bParam1);
			break;
		case 0:
			iVar0 = func_1506(&iVar9, &iVar13, bParam1);
			break;
	}
	return iVar0;
}

int func_1366(int iParam0, bool bParam1)
{
	iVar0 = func_1123();
	iVar1[0] = 1209017192;
	iVar1[1] = -2143243848;
	iVar1[2] = 510052409;
	iVar5[0] = -644575724;
	iVar5[1] = 291770965;
	iVar5[2] = 1700661865;
	iVar9[0] = 1070723367;
	iVar9[1] = 1070723367;
	iVar9[2] = 1070723367;
	if ((((((func_456((*Global_1835011)[22]->f_1) || func_848((*Global_1835011)[22]->f_1)) || func_456((*Global_1835011)[26]->f_1)) || func_848((*Global_1835011)[26]->f_1)) || ((func_848((*Global_1835011)[20]->f_1) || func_143(20)) && func_143(22) == 0)) || (((func_848((*Global_1835011)[19]->f_1) || (func_472(&Global_1898437) == 19 && func_1507())) || func_143(19)) && func_143(22) == 0)) && func_1022(64) == 0)
	{
		if (iParam0 == 0)
		{
			if (_is_imap_active(-109425099))
			{
				_remove_imap(-109425099);
			}
		}
		iVar13[0] = 1261237250;
		iVar13[1] = 1261237250;
		iVar13[2] = 1261237250;
		iVar9[0] = 1261237250;
		iVar9[1] = 1261237250;
		iVar9[2] = 1261237250;
	}
	else
	{
		if (iParam0 == 0)
		{
			if (_is_imap_active(1261237250))
			{
				_remove_imap(1261237250);
			}
		}
		iVar13[0] = -109425099;
		iVar13[1] = -109425099;
		iVar13[2] = -109425099;
	}
	if ((((func_456((*Global_1835011)[23]->f_1) || func_848((*Global_1835011)[23]->f_1)) || (((func_143(22) && func_143(23) == 0) && func_143(24)) && (func_782(20) || func_143(20)))) || (((func_143(22) && func_143(23) == 0) && func_143(20)) && (func_782(24) || func_143(24)))) || func_1022(64))
	{
		if (iParam0 == 0)
		{
			if (_is_imap_active(1070723367))
			{
				_remove_imap(1070723367);
			}
		}
		iVar9[0] = -109425099;
		iVar9[1] = -109425099;
		iVar9[2] = -109425099;
	}
	if (func_1354())
	{
		iVar5[0] = &iVar1[0];
		iVar5[1] = &iVar1[1];
		iVar5[2] = &iVar1[2];
	}
	switch (iParam0)
	{
		case 1:
			iVar0 = func_1506(&iVar1, &iVar5, bParam1);
			break;
		case 0:
			iVar0 = func_1506(&iVar13, &iVar9, bParam1);
			break;
	}
	return iVar0;
}

int func_1367(int iParam0, bool bParam1)
{
	iVar0 = func_1123();
	iVar1[0] = 531106429;
	iVar1[1] = 531106429;
	iVar1[2] = 531106429;
	iVar5[0] = 1069611813;
	iVar5[1] = 1069611813;
	iVar5[2] = 1069611813;
	iVar9[0] = 1102643191;
	iVar9[1] = 1102643191;
	iVar9[2] = 1102643191;
	iVar13[0] = 44502487;
	iVar13[1] = 44502487;
	iVar13[2] = 44502487;
	if ((((((func_456((*Global_1835011)[57]->f_1) || func_848((*Global_1835011)[57]->f_1)) || func_456((*Global_1835011)[59]->f_1)) || func_848((*Global_1835011)[59]->f_1)) || func_456((*Global_1835011)[58]->f_1)) || func_848((*Global_1835011)[58]->f_1)) || func_1508())
	{
		iVar13[0] = 1102643191;
		iVar13[1] = 1102643191;
		iVar13[2] = 1102643191;
		if (iParam0 == 0)
		{
			if (_is_imap_active(44502487))
			{
				_remove_imap(44502487);
			}
		}
	}
	if (func_1354())
	{
		iVar5[0] = &iVar1[0];
		iVar5[1] = &iVar1[1];
		iVar5[2] = &iVar1[2];
	}
	switch (iParam0)
	{
		case 1:
			iVar0 = func_1506(&iVar1, &iVar5, bParam1);
			break;
		case 0:
			iVar0 = func_1506(&iVar9, &iVar13, bParam1);
			break;
	}
	return iVar0;
}

bool func_1368(int iParam0)
{
	if (!func_402(iParam0))
	{
		return false;
	}
	if (!func_368(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1369(int iParam0)
{
	if (!func_402(iParam0))
	{
		return false;
	}
	if (_0x800df3fc913355f3(func_761(iParam0)))
	{
		_0x49a8c2cd97815215(func_761(iParam0));
		if (!does_entity_exist(_0x0cadc3a977997472(func_761(iParam0), 0)))
		{
			return false;
		}
	}
	return true;
}

char* func_1370(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "horseshoeOverlook/hso_default_horses1";
		case 2:
			return "clemensPoint/clm_default_horses1";
		case 3:
			return "shadyBelle/shb_default_horses1";
		case 5:
			return "lakay/lak_default_horses1";
		case 6:
			return "beaverHollow/bvh_default_horses1";
		default:
			break;
	}
	return "";
}

void func_1371(int iParam0)
{
	if (!func_325(iParam0, 0))
	{
	}
	decor_set_bool(iParam0, "CaravanCommonHorse", true);
	set_ped_relationship_group_default_hash(iParam0, -1856989775);
	set_ped_relationship_group_hash(iParam0, -1856989775);
	set_ped_config_flag(iParam0, 324, true);
	set_ped_config_flag(iParam0, 330, true);
	set_ped_config_flag(iParam0, 331, true);
	set_ped_config_flag(iParam0, 471, true);
	set_ped_config_flag(iParam0, 1, false);
	set_ped_config_flag(iParam0, 54, false);
	set_ped_config_flag(iParam0, 121, false);
	set_ped_config_flag(iParam0, 302, false);
	set_ped_config_flag(iParam0, 412, false);
	_0xae6004120c18df97(iParam0, 2, 0);
	_0xae6004120c18df97(iParam0, 3, 0);
}

void func_1372(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_1509(iParam1))
		{
			func_1510(iParam0, 41788943);
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
			func_1511(iParam0, 0, 1);
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
			func_1512(iParam0, 0);
			bVar0 = true;
		}
		func_1513(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_1373(var uParam0, var uParam1)
{
	uVar0 = _databinding_add_data_container(uParam0, "ContPage");
	func_1514(uVar0, uParam1);
	uVar1 = _databinding_add_data_container(uParam0, "FullPage");
	func_1515(uVar1, &(uParam1->f_55));
	uVar2 = _databinding_add_data_container(uParam0, "HalfPageTop");
	func_1516(uVar2, &(uParam1->f_102));
	uVar3 = _databinding_add_data_container(uParam0, "HalfPageBottom");
	func_1516(uVar3, &(uParam1->f_110));
}

bool func_1374()
{
	return _unlock_is_unlocked(-121456797);
}

int func_1375()
{
	return Global_40.f_11095.f_35;
}

void func_1376(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1517(bParam1);
	}
}

void func_1377(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_1378(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

bool func_1379(int iParam0)
{
	if (!func_1174(23, &vVar0))
	{
		return false;
	}
	vVar0.f_2 = 1781729525;
	if (_datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = _datafile_get_num_nodes(&vVar0);
		return true;
	}
	return false;
}

bool func_1380(int iParam0, int iParam1, int iParam2)
{
	if (!func_1174(23, &Var0))
	{
		return false;
	}
	Var0.f_2 = 1781729525;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			_datafile_get_hash(&uVar5, &Var0);
			*iParam1 = uVar5;
			Var0.f_2 = 316053773;
			_datafile_get_hash(&uVar5, &Var0);
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

int func_1381(int iParam0)
{
	return iParam0;
}

int func_1382()
{
	iVar0 = func_1158();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		case 240:
		case 280:
		case 320:
			return -2132502231;
		default:
			break;
	}
	return -1130204298;
}

bool func_1383(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_1384(int iParam0, int iParam1, var uParam2)
{
	if (!func_1383(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*iParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*iParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*iParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*iParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*iParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*iParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*iParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*iParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*iParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*iParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*iParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*iParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			*iParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		case 14:
			*iParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*iParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*iParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		default:
			return false;
	}
	return true;
}

void func_1385(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	*iParam0 = (*iParam0 || shift_left(1, iVar0));
}

bool func_1386(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1387(int iParam0)
{
	if (!func_367(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

int func_1388(int iParam0)
{
	if (_does_volume_exist((*Global_1897952)[iParam0]->f_1))
	{
		return (*Global_1897952)[iParam0]->f_1;
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
			if (_does_volume_exist((*Global_1897952)[6]->f_1) && _does_volume_exist((*Global_1897952)[7]->f_1))
			{
				iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GRIZZLIES");
				_0x6e0d3c3f828da773(iVar0, (*Global_1897952)[6]->f_1);
				_0x6e0d3c3f828da773(iVar0, (*Global_1897952)[7]->f_1);
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
	(*Global_1897952)[iParam0]->f_1 = iVar0;
	return iVar0;
}

int func_1389(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 443958153;
		case 8:
			return 1035357148;
		case 9:
			return -990591911;
		case 17:
			return 1434435999;
		case 13:
			return 914613127;
		case 14:
			return 277114628;
		case 15:
			return -441298053;
		case 108:
			return 1671261677;
		case 12:
			return -2008988392;
		case 16:
			return -1779570775;
		case 106:
			return 1866591384;
		case 107:
			return -810797676;
		case 6:
			return 1591504033;
		case 10:
			return -1481022983;
		case 11:
			return -200160067;
		case 19:
			return 213861089;
		case 20:
			return 187124199;
		case 21:
			return -1639286351;
		case 18:
			return 1244472740;
		case 105:
			return -1711647719;
		case 22:
			return -184950877;
		case 118:
			return 354888782;
		case 39:
			return -922179383;
		case 42:
			return 877339314;
		case 41:
			return 327042733;
		case 43:
			return -1159824322;
		case 36:
			return 187784199;
		case 37:
			return 156869848;
		case 38:
			return 959980967;
		case 40:
			return 268171375;
		case 44:
			return -605457855;
		case 45:
			return -967272484;
		case 46:
			return 253446434;
		case 47:
			return -24930371;
		case 55:
			return -491616406;
		case 111:
			return 806137889;
		case 48:
			return 683812333;
		case 49:
			return 1055138492;
		case 50:
			return -1673339528;
		case 53:
			return 1428271505;
		case 54:
			return -2132681852;
		case 51:
			return 641024601;
		case 109:
			return 1479356600;
		case 110:
			return -1608228131;
		case 52:
			return 1700741106;
		case 23:
			return -768596287;
		case 24:
			return -1789795772;
		case 28:
			return 986912071;
		case 27:
			return 312948291;
		case 29:
			return 770563571;
		case 30:
			return 288839560;
		case 26:
			return 399352507;
		case 31:
			return -1241147617;
		case 113:
			return 399096998;
		case 32:
			return -483073269;
		case 112:
			return 1576805996;
		case 25:
			return -1427623397;
		case 33:
			return 305555540;
		case 60:
			return 2080716288;
		case 61:
			return 922959422;
		case 62:
			return 1948709075;
		case 63:
			return 599204508;
		case 65:
			return -362796541;
		case 115:
			return -1178912317;
		case 64:
			return -1575046645;
		case 114:
			return -176953214;
		case 66:
			return -1992095599;
		case 73:
			return 646741747;
		case 74:
			return -773037432;
		case 75:
			return 1444751354;
		case 69:
			return 709943351;
		case 77:
			return 731746260;
		case 76:
			return 405856312;
		case 72:
			return -1749578899;
		case 78:
			return 1581089825;
		case 104:
			return -883880335;
		case 71:
			return 1124822890;
		case 81:
			return 1618521465;
		case 80:
			return -1675300716;
		case 79:
			return -442258411;
		case 102:
			return 1665083003;
		case 103:
			return 810431028;
		case 68:
			return 1161446575;
		case 70:
			return -406930559;
		case 35:
			return 1523596125;
		case 86:
			return -372049939;
		case 85:
			return 226213668;
		case 82:
			return 1437804895;
		case 117:
			return 430529746;
		case 84:
			return -1254552445;
		case 83:
			return 1526480524;
		case 116:
			return 644508980;
		case 1:
			return 1628277480;
		case 120:
			return -1985767496;
		case 0:
			return 1117878254;
		case 2:
			return 622553269;
		case 3:
			return -1934358691;
		case 121:
			return 962619556;
		case 89:
			return 94750187;
		case 87:
			return 545745902;
		case 88:
			return 1875117241;
		case 101:
			return -1861588330;
		case 126:
			return -1079912632;
		case 127:
			return -1624899219;
		case 124:
			return 646944986;
		case 149:
			return 1712034773;
		case 150:
			return 1084233913;
		case 151:
			return -1628307596;
		case 152:
			return 1244193358;
		case 128:
			return -268420964;
		case 129:
			return -283845926;
		case 130:
			return 76731659;
		case 131:
			return 2141489518;
		case 59:
			return 1529797091;
		case 132:
			return 1120323763;
		case 133:
			return -1951530479;
		case 134:
			return 2034257465;
		case 135:
			return 278587369;
		case 57:
			return 1388932648;
		case 137:
			return 1467401843;
		case 138:
			return -1049737591;
		case 139:
			return 1175719437;
		case 140:
			return 2115547696;
		case 56:
			return 878376253;
		case 141:
			return -508879537;
		case 142:
			return -654369397;
		case 143:
			return 1573058547;
		case 144:
			return 1753151614;
		case 145:
			return -2113647360;
		case 146:
			return 1337275619;
		case 147:
			return -237650722;
		case 148:
			return 283754781;
		case 58:
			return -2076086367;
		case 136:
			return -487054121;
		case 119:
			return 551011289;
		case 122:
			return -647250101;
		case 95:
			return -1769964380;
		case 97:
			return -1464928880;
		case 96:
			return 1315212395;
		case 90:
			return -1495157302;
		case 93:
			return -2140031237;
		case 91:
			return -1829807698;
		case 92:
			return 186603357;
		case 94:
			return -1575817877;
		case 98:
			return 1087483310;
		case 125:
			return -552506176;
		case 123:
			return -614248279;
		case 99:
			return 441769767;
		case 100:
			return 1318049946;
		case 4:
			return 548657065;
		case 5:
			return 243086140;
		case 34:
			return -305029900;
		case 67:
			return 1008537949;
		default:
			break;
	}
	return 0;
}

int func_1390(int iParam0)
{
	if (!func_1174(15, &Var0))
	{
		return -1;
	}
	Var0.f_3 = iParam0;
	Var0.f_2 = -125049320;
	if (_datafile_get_hash(&iVar5, &Var0))
	{
		iVar6 = func_1518(iVar5);
		return iVar6;
	}
	return -1;
}

bool func_1391(int iParam0, int iParam1)
{
	iVar1 = (shift_left(iParam1, 11) || iParam0);
	iVar0 = 0;
	while (iVar0 < Global_40.f_9.f_16)
	{
		if (&Global_40.f_9.f_16[iVar0] == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1392(int iParam0)
{
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1519(iParam0) == 0)
	{
		return false;
	}
	return true;
}

bool func_1393(int iParam0, int iParam1)
{
	func_1174(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = iParam0;
	_datafile_get_data_node_index(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	_datafile_get_hash(&uVar6, &Var0);
	func_1174(15, &Var7);
	Var7.f_2 = -1222062814;
	Var7.f_3 = uVar6;
	if (_datafile_get_data_node_index(&(Var7.f_1), &Var7))
	{
		Var7.f_2 = -1148228754;
		_datafile_get_bool(&uVar5, &Var7);
	}
	return uVar5;
}

int func_1394(vector3 vParam0, int iParam3)
{
	iVar0 = func_128();
	if (func_367(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_1520(vParam0, iParam3);
}

bool func_1395(int iParam0)
{
	if (!func_367(iParam0))
	{
		return false;
	}
	return func_628(iParam0, 33554432);
}

bool func_1396(int iParam0, bool bParam1)
{
	if (!func_359(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_626(iParam0, 8))
		{
			return false;
		}
	}
	if (func_626(iParam0, 1))
	{
		return true;
	}
	return false;
}

bool func_1397(int iParam0, int iParam1)
{
	func_1174(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = iParam0;
	_datafile_get_data_node_index(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	_datafile_get_hash(&uVar5, &Var0);
	func_1174(15, &Var8);
	Var8.f_2 = -1222062814;
	Var8.f_3 = uVar5;
	if (_datafile_get_data_node_index(&(Var8.f_1), &Var8))
	{
		Var8.f_2 = 939842437;
		if (_datafile_get_hash(&iVar6, &Var8))
		{
			iVar7 = iVar6;
			return func_872(iVar7, 1, 0);
		}
	}
	return true;
}

bool func_1398()
{
	if (func_736())
	{
		if (!func_143(4))
		{
			return true;
		}
	}
	return (_is_metaped_using_component(Global_35, -1725579161) || func_484(-2061583405, &uVar0));
}

bool func_1399(int iParam0, int iParam1)
{
	func_1174(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = iParam0;
	_datafile_get_data_node_index(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	_datafile_get_hash(&uVar5, &Var0);
	func_1174(15, &Var7);
	Var7.f_2 = -1222062814;
	Var7.f_3 = uVar5;
	if (_datafile_get_data_node_index(&(Var7.f_1), &Var7))
	{
		Var7.f_2 = 1689379704;
		if (_datafile_get_bool(&uVar6, &Var7))
		{
			return uVar6;
		}
	}
	return false;
}

bool func_1400(int iParam0)
{
	if (!func_359(Global_1310720->f_22))
	{
		return true;
	}
	if (func_1396(Global_1310720->f_22, 1))
	{
		return true;
	}
	if ((0 == iParam0 && 2 == Global_1310720->f_22) || (2 == iParam0 && 0 == Global_1310720->f_22))
	{
		return true;
	}
	return Global_1310720->f_22 == iParam0;
}

bool func_1401(int iParam0, int iParam1)
{
	func_1174(15, &Var0);
	Var0.f_2 = -1999103282;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1563492982;
		if (_datafile_get_hash(&iVar5, &Var0))
		{
			iVar6 = func_1521(iVar5);
			if (func_143(iVar6))
			{
				return false;
			}
		}
		Var0.f_2 = 1975530226;
		if (_datafile_get_hash(&iVar5, &Var0))
		{
			iVar6 = func_1521(iVar5);
			if (!func_143(iVar6))
			{
				return false;
			}
		}
		Var0.f_2 = 108838230;
		if (_datafile_get_hash(&iVar5, &Var0))
		{
			iVar7 = func_1522(iVar5);
			if (func_832(iVar7))
			{
				return false;
			}
		}
		Var0.f_2 = 181294442;
		if (_datafile_get_hash(&iVar5, &Var0))
		{
			iVar7 = func_1522(iVar5);
			if (!func_832(iVar7))
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

int func_1402(int iParam0)
{
	if (!func_1523(iParam0))
	{
		return -1;
	}
	return &(Global_40.f_9096[iParam0]);
}

bool func_1403(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

int func_1404(vector3 vParam0, int iParam3)
{
	iVar0 = 0;
	while (iVar0 < &Global_1898329)
	{
		if (!func_475(Global_1898330[iVar0]))
		{
		}
		else
		{
			switch ((*Global_1898346)[iVar0]->f_3)
			{
				case 1:
					iVar1 = (*Global_1898346)[iVar0]->f_4;
					if (vdist(func_1524(iVar1), vParam0) < func_469(func_1525(iVar1) == 0f, iParam3, func_1525(iVar1)))
					{
						return 1;
					}
					break;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1405(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 201)
	{
		if (func_1147(iVar0, 0))
		{
			if (vdist(func_1526(iVar0), vParam0) < fParam3)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_1406(int iParam0)
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

void func_1407(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	*iParam3 = _get_ped_damage(iParam0);
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

bool func_1408(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = _0x9e7738b291706746(iParam0, iParam1, iParam2);
	return uVar2;
}

int func_1409(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!_0x9a100f1cf4546629(iParam0) && !_0xc346a546612c49a9(iParam0))
	{
		return 0;
	}
	func_1407(iParam0, &iVar1, &uVar2, &iVar0, &uVar3);
	func_1408(&iVar4, iParam0, iVar0, iVar1);
	if (iVar4 != 0)
	{
		return iVar4;
	}
	switch (iVar0)
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

void func_1410(int iParam0, int iParam1, var uParam2, int iParam3)
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
								Var21[iVar0]->f_1 = (Var21[iVar0]->f_1 - Var19.f_1);
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

int func_1411(int iParam0, int iParam1)
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

bool func_1412(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_490(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1413(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_1414(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2051275045:
			return 14;
		case -2040275819:
			return 46;
		case -1874208704:
			return 5;
		case -1862464078:
			return 44;
		case -1692022104:
			return 63;
		case -1684458716:
			return 31;
		case -1678882891:
			return 36;
		case -1668922931:
			return 20;
		case -1648322231:
			return 72;
		case -1642335258:
			return 66;
		case -1632589543:
			return 43;
		case -1587546924:
			return 54;
		case -1559986688:
			return 7;
		case -1532979576:
			return 65;
		case -1414977761:
			return 48;
		case -1394723994:
			return 59;
		case -1341683964:
			return 21;
		case -1335291723:
			return 60;
		case -1268239471:
			return 68;
		case -1256711921:
			return 35;
		case -1248623443:
			return 26;
		case -1205468859:
			return 76;
		case -1155031950:
			return 25;
		case -1114682645:
			return 47;
		case -1092189504:
			return 69;
		case -1065026089:
			return 73;
		case -973332710:
			return 32;
		case -946772361:
			return 62;
		case -922193456:
			return 39;
		case -695701225:
			return 3;
		case -571427255:
			return 57;
		case -481967001:
			return 28;
		case -445211559:
			return 61;
		case -433615745:
			return 18;
		case -426171916:
			return 80;
		case -310473775:
			return 42;
		case -301101630:
			return 24;
		case -268604689:
			return 37;
		case -193269670:
			return 30;
		case -23947011:
			return 50;
		case 0:
			return 0;
		case 6418928:
			return 71;
		case 80515440:
			return 70;
		case 178615350:
			return 1;
		case 283037683:
			return 13;
		case 296923297:
			return 45;
		case 350498312:
			return 27;
		case 404503428:
			return 4;
		case 431390894:
			return 23;
		case 513932985:
			return 29;
		case 707545953:
			return 64;
		case 713940276:
			return 11;
		case 777603945:
			return 19;
		case 837028314:
			return 58;
		case 867156718:
			return 79;
		case 876535472:
			return 75;
		case 876797088:
			return 53;
		case 928493661:
			return 22;
		case 961676983:
			return 55;
		case 977450639:
			return 9;
		case 1018353621:
			return 17;
		case 1046468203:
			return 16;
		case 1071744295:
			return 8;
		case 1199580439:
			return 41;
		case 1200878026:
			return 52;
		case 1205492208:
			return 40;
		case 1237718549:
			return 49;
		case 1254970547:
			return 78;
		case 1295334688:
			return 51;
		case 1300659195:
			return 56;
		case 1484386316:
			return 77;
		case 1495063555:
			return 15;
		case 1593315648:
			return 6;
		case 1658153743:
			return 33;
		case 1744281750:
			return 12;
		case 1818898449:
			return 38;
		case 1842975347:
			return 34;
		case 1901494236:
			return 10;
		case 1950972546:
			return 67;
		case 2062813606:
			return 74;
		case 2094043703:
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

struct<5> func_1415(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_805(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_981(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_945(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1241(bParam1) };
			if (bParam2 && func_1244(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1242(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1242(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1243(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1527(bParam1) };
			switch (func_491(iParam0))
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
			if (func_1528(iParam0, -1823706425))
			{
				Var0 = { func_945(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1528(iParam0, -1483207246))
			{
				Var0 = { func_945(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1237(Var0, &Var27, bParam1, 0))
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

int func_1416(int iParam0, int iParam1)
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

int func_1417(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_1529(iParam0))
	{
		return 0;
	}
	if (!func_1238(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_1418(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1530(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

bool func_1419(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_490(0);
	*uParam1 = { func_945(iParam0, func_1241(0), iParam3, 0) };
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

int func_1420(int iParam0)
{
	iVar0 = func_1189(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1531(iVar0);
}

int func_1421(int iParam0, int iParam1)
{
	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*Global_1058888->f_40501.f_1[Global_1058888->f_40501] = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2])
		{
			*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2])
		{
			func_1532(iVar2);
			*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_1422()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

Vector3 func_1423(vector3 vParam0, vector3 vParam3)
{
	fVar0 = cos(vParam3.x);
	fVar1 = sin(vParam3.x);
	vVar2.x = vParam0.x;
	vVar2.f_1 = ((fVar0 * vParam0.y) - (fVar1 * vParam0.z));
	vVar2.f_2 = ((fVar1 * vParam0.y) + (fVar0 * vParam0.z));
	vParam0 = { vVar2 };
	fVar0 = cos(vParam3.y);
	fVar1 = sin(vParam3.y);
	vVar2.x = ((fVar0 * vParam0.x) + (fVar1 * vParam0.z));
	vVar2.f_1 = vParam0.y;
	vVar2.f_2 = ((fVar0 * vParam0.z) - (fVar1 * vParam0.x));
	vParam0 = { vVar2 };
	fVar0 = cos(vParam3.z);
	fVar1 = sin(vParam3.z);
	vVar2.x = ((fVar0 * vParam0.x) - (fVar1 * vParam0.y));
	vVar2.f_1 = ((fVar1 * vParam0.x) + (fVar0 * vParam0.y));
	vVar2.f_2 = vParam0.z;
	vParam0 = { vVar2 };
	return vParam0;
}

void func_1424(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 693
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			Jump @2719; //curOff = 742
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			Jump @2719; //curOff = 791
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 836
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			Jump @2719; //curOff = 885
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			Jump @2719; //curOff = 934
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 979
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			Jump @2719; //curOff = 1028
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 1073
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			Jump @2719; //curOff = 1122
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			Jump @2719; //curOff = 1171
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 1216
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			Jump @2719; //curOff = 1265
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			Jump @2719; //curOff = 1314
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 1359
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 1404
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 1449
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			Jump @2719; //curOff = 1498
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			Jump @2719; //curOff = 1547
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 1592
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			Jump @2719; //curOff = 1641
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			Jump @2719; //curOff = 1690
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 1735
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 1780
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			Jump @2719; //curOff = 1829
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			Jump @2719; //curOff = 1878
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			Jump @2719; //curOff = 1927
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 1972
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			Jump @2719; //curOff = 2021
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2066
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			Jump @2719; //curOff = 2115
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2160
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			Jump @2719; //curOff = 2209
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2254
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2299
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2344
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2389
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2434
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			Jump @2719; //curOff = 2483
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			Jump @2719; //curOff = 2532
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			Jump @2719; //curOff = 2581
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2626
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2671
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
		}

bool func_1425(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * cos(fParam8)) + (vVar0.y * sin(fParam8)));
	Var3.f_1 = ((vVar0.x * sin(fParam8)) - (vVar0.y * cos(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

float func_1426(int iParam0, bool bParam1)
{
	if (bParam1 && !func_204(iParam0))
	{
		return 0f;
	}
	iVar0 = func_556(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1945938)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1945938)[iVar0]->f_3);
}

bool func_1427(int iParam0, bool bParam1)
{
	if (bParam1 && !func_204(iParam0))
	{
		return false;
	}
	return !func_558(iParam0, 4);
}

void func_1428(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_204(iParam0))
	{
		return;
	}
	iVar0 = func_556(iParam0);
	if (bParam1)
	{
		func_1533(iParam0, 4);
		func_940(iVar0, 1);
		func_941(iVar0, 1);
	}
	else
	{
		func_942(iParam0, 4);
		func_941(iVar0, 0);
	}
}

void func_1429(var uParam0)
{
	if (!func_204(uParam0->f_1))
	{
		StringCopy(&cVar0, "JOURNAL_INFO_SHOW", 64);
		if (uParam0->f_772)
		{
			StringCopy(&cVar0, "JOURNAL_INFO_HIDE", 64);
		}
		uParam0->f_1 = func_564(&cVar0, -711536720, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		func_210(uParam0->f_1, -2019190071, 0, 1);
		func_1428(uParam0->f_1, uParam0->f_773, 1);
	}
}

bool func_1430(int iParam0, var uParam1, float fParam2)
{
	return func_239((*uParam1)[iParam0]) >= fParam2;
}

bool func_1431(int iParam0, int iParam1, bool bParam2)
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

int func_1432(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (Global_1946804->f_2535.f_1 >= 5)
	{
		return 0;
	}
	if (!func_1534(iParam0))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_1535(iParam0);
	return func_1536(iParam1, iVar0, bParam2, 1);
}

int func_1433(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_1537(iParam1))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_1535(iParam1);
	return func_1538(iParam0, iVar0, bParam2, bParam2);
}

void func_1434(int iParam0, int iParam1, var uParam2)
{
	if (Global_40.f_4283.f_440[iParam0]->f_1[iParam1]->f_4 == 0)
	{
		_databinding_write_data_bool(*uParam2, 0);
		return;
	}
	_databinding_write_data_bool(*uParam2, 1);
	if (is_bit_set(&(Global_40.f_4283.f_440[iParam0]->f_1[iParam1]), 0))
	{
		_databinding_write_data_hash_string(uParam2->f_1, 0);
	}
	else if (Global_40.f_4283.f_440[iParam0]->f_1[iParam1]->f_1 == -1)
	{
		_databinding_write_data_hash_string(uParam2->f_1, -799346912);
	}
	else
	{
		_databinding_write_data_hash_string(uParam2->f_1, func_1539(Global_40.f_4283.f_440[iParam0]->f_1[iParam1]->f_1, 1));
	}
	if (is_bit_set(&(Global_40.f_4283.f_440[iParam0]->f_1[iParam1]), 0))
	{
		if (is_bit_set(&(Global_40.f_4283.f_440[iParam0]->f_1[iParam1]), 1))
		{
			_databinding_write_data_hash_string(uParam2->f_2, func_1540(Global_40.f_4283.f_440[iParam0]->f_1[iParam1]->f_3, 1));
		}
		else
		{
			_databinding_write_data_hash_string(uParam2->f_2, func_1540(Global_40.f_4283.f_440[iParam0]->f_1[iParam1]->f_3, 0));
		}
	}
	else if (Global_40.f_4283.f_440[iParam0]->f_1[iParam1]->f_2 == 0)
	{
		_databinding_write_data_hash_string(uParam2->f_2, -1328473345);
	}
	else
	{
		_databinding_write_data_hash_string(uParam2->f_2, Global_40.f_4283.f_440[iParam0]->f_1[iParam1]->f_2);
	}
	iVar0 = Global_40.f_4283.f_440[iParam0]->f_1[iParam1]->f_4;
	if (is_bit_set(&(Global_40.f_4283.f_440[iParam0]->f_1[iParam1]), 0))
	{
		if (iVar0 >= 0)
		{
		}
		_databinding_write_data_string(uParam2->f_3, _create_var_string(2, "CASH_STRING_NEG", -iVar0));
	}
	else
	{
		_databinding_write_data_string(uParam2->f_3, _create_var_string(2, "CASH_STRING", iVar0));
	}
}

int func_1435(var uParam0)
{
	iVar0 = *uParam0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_62)
	{
		iVar0 = (iVar0 + uParam0->f_1[iVar1]->f_4);
		iVar1++;
	}
	return iVar0;
}

bool func_1436(var uParam0, var uParam1)
{
	if (!_databinding_read_data_bool(*uParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_1541(uParam0->f_5[iVar0]))
		{
		}
		else
		{
			_databinding_write_data_bool(uParam0->f_5[iVar0]->f_5, 1);
			uParam1->f_5 = 1;
			uParam1->f_6 = iVar0;
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_1542(uParam0->f_30[iVar0]))
		{
		}
		else
		{
			_databinding_write_data_bool(uParam0->f_30[iVar0]->f_3, 1);
			uParam1->f_5 = 0;
			uParam1->f_6 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1437(var uParam0, var uParam1)
{
	if (!func_1438(uParam0))
	{
		return false;
	}
	_databinding_write_data_bool(uParam0->f_7, 1);
	uParam1->f_5 = 1;
	uParam1->f_6 = -1;
	return true;
}

bool func_1438(var uParam0)
{
	if (!_databinding_read_data_bool(*uParam0))
	{
		return false;
	}
	if (_databinding_read_data_bool(uParam0->f_5))
	{
		return false;
	}
	return true;
}

int func_1439(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_1541(uParam0->f_5[iVar0]))
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

int func_1440(var uParam0)
{
	if (_databinding_read_data_bool(uParam0->f_4))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!func_1542(uParam0->f_30[iVar0]))
			{
			}
			else
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_1441(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 12:
		case 13:
		case 14:
			return 2;
	}
	return 4;
}

int func_1442(int* iParam0, int iParam1)
{
	iVar0 = func_365(iParam1, 0);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 3:
			iVar1 = iParam0->f_35.f_531[0]->f_2[iVar0]->f_3;
			break;
		case 4:
			iVar1 = iParam0->f_35.f_531[1]->f_2[iVar0]->f_3;
			break;
		case 5:
			iVar1 = iParam0->f_35.f_531[2]->f_2[iVar0]->f_3;
			break;
		case 10:
			iVar1 = iParam0->f_35.f_531[3]->f_2[iVar0]->f_3;
			break;
		case 12:
			iVar1 = iParam0->f_35.f_531[6]->f_2[1]->f_3;
			break;
		case 13:
			iVar1 = iParam0->f_35.f_531[4]->f_2[1]->f_3;
			break;
		case 14:
			iVar1 = iParam0->f_35.f_531[7]->f_2[1]->f_3;
			break;
		case 0:
			iVar1 = iParam0->f_35.f_531[5]->f_2[1]->f_3;
			break;
		default:
			return 0;
	}
	return iVar1 * 100;
}

int func_1443(int iParam0)
{
	return _money_get_cash_balance();
}

void func_1444(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1543(iParam0);
	if (bParam3)
	{
		func_1544(iParam0, sParam1, iParam2);
	}
}

void func_1445(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1545(-1, 0, iParam0, Global_40.f_4283.f_440[0], 1, 1))
	{
		return;
	}
	if (func_1545(-1, 0, iParam0, Global_40.f_4283.f_440[1], 1, 1))
	{
		if (&Global_40.f_4283.f_440[1] == 0)
		{
			Global_40.f_4283.f_440[1] = func_1435(Global_40.f_4283.f_440[0]);
		}
		return;
	}
	func_1546(&(Global_40.f_4283.f_440));
	func_1545(-1, 0, iParam0, Global_40.f_4283.f_440[1], 1, 1);
}

void func_1446(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if ((iParam0 != 2 && iParam0 != 0) && iParam0 != 1)
		{
			return;
		}
	}
	if (func_1547(iParam0, bParam1, iParam2, Global_40.f_4283.f_440[0]))
	{
		return;
	}
	if (func_1547(iParam0, bParam1, iParam2, Global_40.f_4283.f_440[1]))
	{
		if (&Global_40.f_4283.f_440[1] == 0)
		{
			Global_40.f_4283.f_440[1] = func_1435(Global_40.f_4283.f_440[0]);
		}
		return;
	}
	func_1546(&(Global_40.f_4283.f_440));
	func_1547(iParam0, bParam1, iParam2, Global_40.f_4283.f_440[1]);
}

void func_1447(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_40.f_4283.f_313 = iParam1;
			break;
		case 1:
			Global_40.f_4283.f_316 = iParam1;
			break;
		case 2:
			Global_40.f_4283.f_317 = iParam1;
			break;
		case 3:
			Global_40.f_4283.f_318 = iParam1;
			break;
		case 4:
			Global_40.f_4283.f_319 = iParam1;
			break;
		case 5:
			Global_40.f_4283.f_320 = iParam1;
			break;
		case 10:
			Global_40.f_4283.f_321 = iParam1;
			break;
		case 12:
			Global_40.f_4283.f_315 = iParam1;
			break;
		case 13:
			Global_40.f_4283.f_314 = iParam1;
			break;
		case 14:
			Global_40.f_4283.f_322 = iParam1;
			break;
	}
}

void func_1448(var uParam0)
{
	if (Global_40.f_4283.f_313 > 1)
	{
		switch (*uParam0)
		{
			case 878851736:
				*uParam0 = 1762298001;
				break;
			case 1869130580:
				*uParam0 = 1336518004;
				break;
			case 116793994:
				*uParam0 = 515084529;
				break;
			case -1760041550:
				*uParam0 = -1977068039;
				break;
			case -1708424762:
				*uParam0 = -399865011;
				break;
		}
	}
}

void func_1449(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_1215(iParam0))
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

char* func_1450(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "CAMP_UPG_COOP";
		case 3:
			return "CAMP_UPG_PROV";
		case 4:
			return "CAMP_UPG_MED";
		case 5:
			return "CAMP_UPG_ARMO";
		case 12:
			return "CAMP_UPG_TOOLS";
		case 13:
			return "CAMP_UPG_VEH";
		case 14:
			return "CAMP_UPG_HITCH";
		case 10:
			switch (iParam1)
			{
				case 2:
					return "CAMP_UPG_TENT_D";
				case 3:
					return "CAMP_UPG_TENT_A";
				case 4:
					return "CAMP_UPG_TENT_C";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_1451(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 695356898;
		case 1:
			return -432333475;
		case 2:
			return 2093317438;
		case 3:
			return -1327067584;
		case 4:
			return -145951480;
		case 5:
			return -2045110373;
		case 6:
			return 2092390181;
		case 7:
			return -1192044061;
		case 8:
			return 1206762561;
		default:
			break;
	}
	return 991030100;
}

int func_1452(int* iParam0, int iParam1)
{
	iVar0 = (func_365(iParam1, 0) - 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 3:
			iVar1 = &iParam0->f_35.f_531[0]->f_24[iVar0];
			break;
		case 4:
			iVar1 = &iParam0->f_35.f_531[1]->f_24[iVar0];
			break;
		case 5:
			iVar1 = &iParam0->f_35.f_531[2]->f_24[iVar0];
			break;
		default:
			return 0;
	}
	return iVar1 * 100;
}

int func_1453(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		case 1:
			return 0;
		case 0:
			return 1;
		case 3:
			return 3;
		default:
			break;
	}
	return -1;
}

bool func_1454(int iParam0)
{
	iVar0 = func_1302(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_805(0) };
	if (func_1548(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_1455(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_1237(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_1456(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_1247(Var0.f_4, Param4, iParam8, 0);
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
	Var16 = { func_1549(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar32 = func_1550(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

bool func_1456(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

bool func_1457(struct<4> Param0, int iParam4)
{
	if (!func_1238(0))
	{
		return func_1551(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1237(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_490(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

int func_1458(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	if (func_1456(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_1237(Param0, &Var0, 1, 0) || !func_1237(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_1456(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_1549(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var44 = { func_1549(&Var14) };
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
					func_1552(iVar60, 1);
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
		iVar60 = func_1550(1168099063, &Var28, 0);
		iVar60 = func_1550(1168099063, &Var44, 0);
	}
	return iVar60;
}

bool func_1459(int iParam0)
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

int func_1460()
{
	return 1342496140;
}

int func_1461()
{
	return 446670976;
}

int func_1462()
{
	return 1;
}

int func_1463()
{
	return -868094182;
}

int func_1464()
{
	return 1074477367;
}

int func_1465()
{
	return 1;
}

int func_1466()
{
	return -997197050;
}

int func_1467()
{
	return -2063289686;
}

int func_1468()
{
	return 2;
}

int func_1469()
{
	return -868094182;
}

int func_1470()
{
	return 1074477367;
}

int func_1471()
{
	return 1;
}

int func_1472()
{
	return 1235275977;
}

int func_1473()
{
	return 2030804811;
}

int func_1474()
{
	return 1;
}

int func_1475()
{
	return 1974379573;
}

int func_1476()
{
	return 2024948086;
}

int func_1477()
{
	return 1;
}

int func_1478(struct<4> Param0, int iParam4, int iParam5)
{
	Var0.f_9 = -1591664384;
	if (func_1553(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1479(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_491(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1554(iParam0);
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

struct<4> func_1480()
{
	Var0 = { func_805(0) };
	return func_945(856287005, Var0, -218846335, 0);
}

void func_1481(int iParam0, int iParam1)
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

char* func_1482(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_1555(37, iParam0))
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
	if (func_1555(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_1483(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_927(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_1484(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_1485(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1368127279:
			return 3;
		case -1324765740:
			return 4;
		case -1119640448:
			return 6;
		case -1015925347:
			return 8;
		case -857562377:
			return 7;
		case -579939614:
			return 10;
		case -193557170:
			return 9;
		case 0:
			return 13;
		case 15:
			return 14;
		case 54488187:
			return 2;
		case 100010212:
			return 11;
		case 679418883:
			return 0;
		case 880414984:
			return 12;
		case 1077154516:
			return 1;
		case 1620037762:
			return 5;
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

int func_1486(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 669657108;
		case 1:
			return 821931868;
		case 2:
			return -1721991356;
		case 3:
			return -702816767;
		case 4:
			return 2137137442;
		case 5:
			return 1974067816;
		case 6:
			return -173507739;
		case 7:
			return 839715153;
		case 8:
			return 1500834021;
		case 9:
			return -1148613331;
		case 10:
			return 433385945;
		case 11:
			return 1420204096;
		case 12:
			return -1317052143;
		case 13:
			return -416908843;
		case 14:
			return 212278652;
		case 15:
			return -273223690;
		case 16:
			return 1679686673;
		case 17:
			return 603685163;
		case 18:
			return 1632247697;
		case 19:
			return -1233681761;
		case 20:
			return 2082228755;
		case 21:
			return 725623432;
		case 22:
			return 0;
		case 23:
			return -1439599467;
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

int func_1487(int iParam0, bool bParam1, float fParam2)
{
	if (!is_bit_set(Global_1934765->f_301, 0))
	{
		return 0;
	}
	iVar0 = func_1485(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return 0;
	}
	iVar1 = _get_prev_weather_type_hash_name();
	iVar2 = func_1556(iVar1, 1);
	if (iVar2 < 0 || iVar2 > 31)
	{
		return 0;
	}
	iVar3 = _get_next_weather_type_hash_name();
	iVar4 = func_1556(iVar3, 1);
	if (iVar4 < 0 || iVar4 > 31)
	{
		return 0;
	}
	_0xdd560abef5d3784c(&iVar5, &iVar6);
	iVar7 = func_1556(iVar5, 1);
	if (iVar6 != 0 && !bParam1)
	{
		return 0;
	}
	if (iVar5 != 0)
	{
		if (is_bit_set(&(Global_1934765->f_302[iVar0]), iVar7))
		{
			return 1;
		}
	}
	else if (is_bit_set(&(Global_1934765->f_302[iVar0]), iVar2) && is_bit_set(&(Global_1934765->f_302[iVar0]), iVar4))
	{
		return 1;
	}
	iVar8 = 0;
	while (iVar8 < 20)
	{
		iVar8++;
		iVar9 = _0x7f4ce164d9a11dfe();
		if (!is_bit_set(&(Global_1934765->f_302[iVar0]), iVar9))
		{
		}
		else
		{
			iVar10 = func_1486(iVar9, 1);
			if (iVar10 == 0 || iVar10 == -1439599467)
			{
			}
			else
			{
				if (bParam1)
				{
					_set_weather_type(iVar10, true, false, false, 0f, false);
				}
				else
				{
					_set_weather_type(iVar10, true, false, true, fParam2, false);
				}
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 679418883:
			iVar11 = 1500834021;
			break;
		case 1077154516:
			iVar11 = 1420204096;
			break;
		case 54488187:
			iVar11 = -702816767;
			break;
		case -1368127279:
			iVar11 = -173507739;
			break;
		case -1324765740:
			iVar11 = 1632247697;
			break;
		case 1620037762:
			iVar11 = 821931868;
			break;
		case -1119640448:
			iVar11 = 1632247697;
			break;
		case -857562377:
			iVar11 = 1632247697;
			break;
		case -1015925347:
			iVar11 = -173507739;
			break;
		case -193557170:
			iVar11 = 821931868;
			break;
		case -579939614:
			iVar11 = -1148613331;
			break;
		case 100010212:
			iVar11 = 821931868;
			break;
		case 880414984:
			iVar11 = 2082228755;
			break;
		default:
			iVar11 = -1148613331;
			break;
	}
	if (bParam1)
	{
		_set_weather_type(iVar11, true, false, false, 0f, false);
	}
	else
	{
		_set_weather_type(iVar11, false, false, true, fParam2, false);
	}
	return 1;
}

void func_1488(int iParam0, bool bParam1)
{
	iVar0[0] = -224845272;
	iVar19[0] = -268335331;
	iVar38[0] = func_1344();
	iVar0[1] = -147867326;
	iVar19[1] = 1546110128;
	iVar38[1] = -855912354;
	iVar0[2] = -1262979941;
	iVar19[2] = 324486076;
	iVar38[2] = func_1344();
	iVar0[3] = -2119627968;
	iVar19[3] = -2052582076;
	iVar38[3] = -402976431;
	iVar0[4] = -837651311;
	iVar19[4] = 1029525997;
	iVar38[4] = func_1344();
	iVar0[5] = -2089261255;
	iVar19[5] = -1472352094;
	iVar38[5] = func_1344();
	iVar0[6] = -1145367359;
	iVar19[6] = -745860880;
	iVar38[6] = func_1344();
	iVar0[7] = -1145367359;
	iVar19[7] = 1219276914;
	iVar38[7] = func_1344();
	iVar0[8] = -1608451354;
	iVar19[8] = -2104773585;
	iVar38[8] = func_1344();
	iVar0[9] = 2137149309;
	iVar19[9] = -302735166;
	iVar38[9] = func_1344();
	iVar0[10] = -1329287819;
	iVar19[10] = -2077690059;
	iVar38[10] = func_1344();
	iVar0[11] = -848232571;
	iVar19[11] = 1548546221;
	iVar38[11] = func_1344();
	iVar0[12] = -804860583;
	iVar19[12] = 2101101756;
	iVar38[12] = func_1344();
	iVar0[13] = -7810518;
	iVar19[13] = 1560807181;
	iVar38[13] = func_1344();
	iVar0[14] = 1510372288;
	iVar19[14] = 106249677;
	iVar38[14] = func_1344();
	iVar0[15] = 858182906;
	iVar19[15] = -723982773;
	iVar38[15] = func_1344();
	iVar0[16] = 708084994;
	iVar19[16] = 327932996;
	iVar38[16] = func_1344();
	iVar0[17] = 765991018;
	iVar19[17] = -15722296;
	iVar38[17] = func_1344();
	bVar59 = false;
	if (iParam0 == 1)
	{
		iVar57 = func_1259(&(iVar0[Global_1357549->f_575]), 3);
		bVar58 = func_1557(&(iVar0[Global_1357549->f_575]));
		bVar59 = (iVar57 > 0 || bVar58);
		if (bVar59 || bParam1)
		{
			if (func_793(&(iVar19[Global_1357549->f_575])))
			{
				if (!_is_imap_active(&(iVar19[Global_1357549->f_575])))
				{
					func_1143(&(iVar19[Global_1357549->f_575]), 1);
					func_1558(&(iVar19[Global_1357549->f_575]));
				}
				if (func_793(&(iVar38[Global_1357549->f_575])))
				{
					if (_is_imap_active(&(iVar38[Global_1357549->f_575])))
					{
						_remove_imap(&(iVar38[Global_1357549->f_575]));
					}
				}
			}
		}
		else
		{
			if (func_793(&(iVar19[Global_1357549->f_575])))
			{
				if (_is_imap_active(&(iVar19[Global_1357549->f_575])))
				{
					func_1143(&(iVar19[Global_1357549->f_575]), 0);
					_remove_imap(&(iVar19[Global_1357549->f_575]));
				}
			}
			if (func_793(&(iVar38[Global_1357549->f_575])))
			{
				if (_is_imap_active(&(iVar38[Global_1357549->f_575])) == 0)
				{
					_request_imap(&(iVar38[Global_1357549->f_575]));
				}
			}
		}
	}
	if (iParam0 != 1 || func_32() == 2)
	{
		if (func_793(&(iVar38[Global_1357549->f_575])))
		{
			if (_is_imap_active(&(iVar38[Global_1357549->f_575])))
			{
				_remove_imap(&(iVar38[Global_1357549->f_575]));
			}
		}
		if (func_793(&(iVar19[Global_1357549->f_575])))
		{
			if (_is_imap_active(&(iVar19[Global_1357549->f_575])))
			{
				func_1143(&(iVar19[Global_1357549->f_575]), 0);
				_remove_imap(&(iVar19[Global_1357549->f_575]));
			}
		}
	}
}

void func_1489(int iParam0, bool bParam1)
{
	iVar0[0] = 2137149309;
	iVar19[0] = -1999825729;
	iVar38[0] = func_1344();
	iVar0[1] = -147867326;
	iVar19[1] = -1774140220;
	iVar38[1] = -262271608;
	iVar0[2] = -1262979941;
	iVar19[2] = 1601820048;
	iVar38[2] = func_1344();
	iVar0[3] = -2119627968;
	iVar19[3] = 2025485344;
	iVar38[3] = 901520480;
	iVar0[4] = -837651311;
	iVar19[4] = -1999465365;
	iVar38[4] = func_1344();
	iVar0[5] = -2089261255;
	iVar19[5] = 853723410;
	iVar38[5] = func_1344();
	iVar0[6] = -1145367359;
	iVar19[6] = 1169958167;
	iVar38[6] = func_1344();
	iVar0[7] = -1145367359;
	iVar19[7] = -792944828;
	iVar38[7] = func_1344();
	iVar0[8] = -1608451354;
	iVar19[8] = -2001921071;
	iVar38[8] = func_1344();
	iVar0[9] = -7810518;
	iVar19[9] = 157361403;
	iVar38[9] = func_1344();
	iVar0[10] = -1329287819;
	iVar19[10] = -492479795;
	iVar38[10] = func_1344();
	iVar0[11] = -848232571;
	iVar19[11] = -1284301817;
	iVar38[11] = func_1344();
	iVar0[12] = -804860583;
	iVar19[12] = -1045282549;
	iVar38[12] = func_1344();
	iVar0[13] = 1510372288;
	iVar19[13] = -989202374;
	iVar38[13] = func_1344();
	iVar0[14] = -224845272;
	iVar19[14] = 1538837441;
	iVar38[14] = func_1344();
	iVar0[15] = 858182906;
	iVar19[15] = 530288130;
	iVar38[15] = func_1344();
	iVar0[16] = 708084994;
	iVar19[16] = -1887167048;
	iVar38[16] = func_1344();
	iVar0[17] = 765991018;
	iVar19[17] = -347518940;
	iVar38[17] = func_1344();
	if (iParam0 == 2)
	{
		if ((func_1259(&(iVar0[Global_1357549->f_575]), 3) > 0 || func_1557(&(iVar0[Global_1357549->f_575]))) || bParam1)
		{
			if (func_793(&(iVar19[Global_1357549->f_575])))
			{
				if (!_is_imap_active(&(iVar19[Global_1357549->f_575])))
				{
					func_1143(&(iVar19[Global_1357549->f_575]), 1);
					func_1558(&(iVar19[Global_1357549->f_575]));
				}
			}
			if (func_793(&(iVar38[Global_1357549->f_575])))
			{
				if (_is_imap_active(&(iVar38[Global_1357549->f_575])))
				{
					_remove_imap(&(iVar38[Global_1357549->f_575]));
				}
			}
		}
		else
		{
			if (func_793(&(iVar19[Global_1357549->f_575])))
			{
				if (_is_imap_active(&(iVar19[Global_1357549->f_575])))
				{
					func_1143(&(iVar19[Global_1357549->f_575]), 0);
					_remove_imap(&(iVar19[Global_1357549->f_575]));
				}
			}
			if (func_793(&(iVar38[Global_1357549->f_575])))
			{
				if (_is_imap_active(&(iVar38[Global_1357549->f_575])) == 0)
				{
					_request_imap(&(iVar38[Global_1357549->f_575]));
				}
			}
		}
	}
	if (iParam0 != 2 || func_32() != 1)
	{
		if (func_793(&(iVar38[Global_1357549->f_575])))
		{
			if (_is_imap_active(&(iVar38[Global_1357549->f_575])))
			{
				_remove_imap(&(iVar38[Global_1357549->f_575]));
			}
		}
		if (func_793(&(iVar19[Global_1357549->f_575])))
		{
			if (_is_imap_active(&(iVar19[Global_1357549->f_575])))
			{
				func_1143(&(iVar19[Global_1357549->f_575]), 0);
				_remove_imap(&(iVar19[Global_1357549->f_575]));
			}
		}
	}
}

void func_1490(int iParam0, bool bParam1)
{
	iVar0[0] = 2137149309;
	iVar19[0] = -134624703;
	iVar0[1] = -147867326;
	iVar19[1] = func_1123();
	iVar0[2] = -1262979941;
	iVar19[2] = func_1123();
	iVar0[3] = -2119627968;
	iVar19[3] = func_1123();
	iVar0[4] = -837651311;
	iVar19[4] = func_1123();
	iVar0[5] = -2089261255;
	iVar19[5] = func_1123();
	iVar0[6] = -1145367359;
	iVar19[6] = -1535722316;
	iVar0[7] = -1145367359;
	iVar19[7] = 1547994518;
	iVar0[8] = -1608451354;
	iVar19[8] = func_1123();
	iVar0[9] = -1329287819;
	iVar19[9] = -910918420;
	iVar0[10] = -848232571;
	iVar19[10] = 495480888;
	iVar0[11] = -804860583;
	iVar19[11] = 2004706822;
	iVar0[12] = 1510372288;
	iVar19[12] = 884576413;
	iVar0[13] = -7810518;
	iVar19[13] = 778703691;
	iVar0[14] = -224845272;
	iVar19[14] = -421730990;
	iVar0[15] = 858182906;
	iVar19[15] = 514406510;
	iVar0[16] = 765991018;
	iVar19[16] = -327708229;
	iVar0[17] = 708084994;
	iVar19[17] = 1048845581;
	if (iParam0 == 3 && ((func_872(&(iVar0[Global_1357549->f_575]), 1, 0) || func_1557(&(iVar0[Global_1357549->f_575]))) || bParam1))
	{
		if (func_793(&(iVar19[Global_1357549->f_575])))
		{
			if (!_is_imap_active(&(iVar19[Global_1357549->f_575])))
			{
				func_1143(&(iVar19[Global_1357549->f_575]), 1);
				func_1558(&(iVar19[Global_1357549->f_575]));
			}
		}
	}
	else if (func_793(&(iVar19[Global_1357549->f_575])))
	{
		if (_is_imap_active(&(iVar19[Global_1357549->f_575])))
		{
			func_1143(&(iVar19[Global_1357549->f_575]), 0);
			_remove_imap(&(iVar19[Global_1357549->f_575]));
		}
	}
	iVar38[0] = -1608451354;
	iVar45[0] = 11;
	iVar38[1] = -147867326;
	iVar45[1] = 12;
	iVar38[2] = -1262979941;
	iVar45[2] = 13;
	iVar38[3] = -837651311;
	iVar45[3] = 14;
	iVar38[4] = -2119627968;
	iVar45[4] = 16;
	iVar38[5] = -2089261255;
	iVar45[5] = 15;
	bVar55 = false;
	iVar52 = 0;
	while (iVar52 < 6)
	{
		if (iParam0 == 3)
		{
			iVar53 = func_1259(&(iVar38[iVar52]), 3);
			bVar54 = func_1557(&(iVar38[iVar52]));
			bVar55 = (iVar53 > 0 || bVar54);
		}
		if (bVar55 || bParam1)
		{
			if (func_1559(&(iVar45[iVar52])) == 0)
			{
				func_1135(&(iVar45[iVar52]));
			}
		}
		else if (func_1559(&(iVar45[iVar52])))
		{
			func_1134(&(iVar45[iVar52]));
		}
		iVar52++;
	}
}

void func_1491(int iParam0, bool bParam1)
{
	iVar0[0] = 2137149309;
	iVar19[0] = 1104800593;
	iVar38[0] = func_1344();
	iVar0[1] = -1145367359;
	iVar19[1] = 968084866;
	iVar38[1] = func_1344();
	iVar0[2] = -1145367359;
	iVar19[2] = -696422730;
	iVar38[2] = func_1344();
	iVar0[3] = -1329287819;
	iVar19[3] = 1423158124;
	iVar38[3] = func_1344();
	iVar0[4] = -1608451354;
	iVar19[4] = -1063259251;
	iVar38[4] = func_1344();
	iVar0[5] = -147867326;
	iVar19[5] = -317096325;
	iVar38[5] = 1025787994;
	iVar0[6] = -1262979941;
	iVar19[6] = -1255331540;
	iVar38[6] = func_1344();
	iVar0[7] = -2119627968;
	iVar19[7] = -1063926197;
	iVar38[7] = 629519239;
	iVar0[8] = -837651311;
	iVar19[8] = 360408116;
	iVar38[8] = func_1344();
	iVar0[9] = -2089261255;
	iVar19[9] = -408234235;
	iVar38[9] = func_1344();
	iVar0[10] = -848232571;
	iVar19[10] = -1016007592;
	iVar38[10] = func_1344();
	iVar0[11] = -804860583;
	iVar19[11] = -763678874;
	iVar38[11] = func_1344();
	iVar0[12] = 1510372288;
	iVar19[12] = -1361342903;
	iVar38[12] = func_1344();
	iVar0[13] = -7810518;
	iVar19[13] = -483001024;
	iVar38[13] = func_1344();
	iVar0[14] = -224845272;
	iVar19[14] = 255767990;
	iVar38[14] = func_1344();
	iVar0[15] = 858182906;
	iVar19[15] = -2048221620;
	iVar38[15] = func_1344();
	iVar0[16] = 765991018;
	iVar19[16] = 339295570;
	iVar38[16] = func_1344();
	iVar0[17] = 708084994;
	iVar19[17] = 668976634;
	iVar38[17] = func_1344();
	bVar59 = false;
	if (iParam0 == 6)
	{
		iVar57 = func_1259(&(iVar0[Global_1357549->f_575]), 3);
		bVar58 = func_1557(&(iVar0[Global_1357549->f_575]));
		bVar59 = (iVar57 > 0 || bVar58);
		if (bVar59 || bParam1)
		{
			if (func_793(&(iVar19[Global_1357549->f_575])))
			{
				if (!_is_imap_active(&(iVar19[Global_1357549->f_575])))
				{
					func_1143(&(iVar19[Global_1357549->f_575]), 1);
					func_1558(&(iVar19[Global_1357549->f_575]));
				}
			}
			if (func_793(&(iVar38[Global_1357549->f_575])))
			{
				if (_is_imap_active(&(iVar38[Global_1357549->f_575])))
				{
					_remove_imap(&(iVar38[Global_1357549->f_575]));
				}
			}
		}
		else
		{
			if (func_793(&(iVar19[Global_1357549->f_575])))
			{
				if (_is_imap_active(&(iVar19[Global_1357549->f_575])))
				{
					func_1143(&(iVar19[Global_1357549->f_575]), 0);
					_remove_imap(&(iVar19[Global_1357549->f_575]));
				}
			}
			if (func_793(&(iVar38[Global_1357549->f_575])))
			{
				if (_is_imap_active(&(iVar38[Global_1357549->f_575])) == 0)
				{
					_request_imap(&(iVar38[Global_1357549->f_575]));
				}
			}
		}
	}
	if (iParam0 != 6 || func_32() != 1)
	{
		if (func_793(&(iVar38[Global_1357549->f_575])))
		{
			if (_is_imap_active(&(iVar38[Global_1357549->f_575])))
			{
				_remove_imap(&(iVar38[Global_1357549->f_575]));
			}
		}
		if (func_793(&(iVar19[Global_1357549->f_575])))
		{
			if (_is_imap_active(&(iVar19[Global_1357549->f_575])))
			{
				func_1143(&(iVar19[Global_1357549->f_575]), 0);
				_remove_imap(&(iVar19[Global_1357549->f_575]));
			}
		}
	}
}

void func_1492(int iParam0, var uParam1, bool bParam2)
{
	Var0 = 17;
	Var0.f_1 = 4;
	Var0.f_1.f_5 = 4;
	Var0.f_1.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	(*Var0[15])[0] = func_1344();
	(*Var0[15])[1] = func_1344();
	(*Var0[15])[2] = 1079303588;
	(*Var0[15])[3] = 1079303588;
	(*Var0[10])[0] = -937893311;
	(*Var0[10])[1] = -937893311;
	(*Var0[10])[2] = -937893311;
	(*Var0[10])[3] = 394987827;
	(*Var0[11])[0] = func_1344();
	(*Var0[11])[1] = func_1344();
	(*Var0[11])[2] = func_1344();
	(*Var0[11])[3] = func_1344();
	(*Var0[12])[0] = func_1344();
	(*Var0[12])[1] = func_1344();
	(*Var0[12])[2] = func_1344();
	(*Var0[12])[3] = func_1344();
	(*Var0[13])[0] = func_1344();
	(*Var0[13])[1] = func_1344();
	(*Var0[13])[2] = func_1344();
	(*Var0[13])[3] = func_1344();
	(*Var0[9])[0] = -1365193577;
	(*Var0[9])[1] = -1166561064;
	(*Var0[9])[2] = -1166561064;
	(*Var0[9])[3] = -1166561064;
	(*Var0[8])[0] = -1620486708;
	(*Var0[8])[1] = -1620486708;
	(*Var0[8])[2] = -1620486708;
	(*Var0[8])[3] = 163126540;
	(*Var0[7])[0] = 1808508475;
	(*Var0[7])[1] = 1808508475;
	(*Var0[7])[2] = 1808508475;
	(*Var0[7])[3] = 2015311123;
	(*Var0[6])[0] = -1576393943;
	(*Var0[6])[1] = -1576393943;
	(*Var0[6])[2] = -1576393943;
	(*Var0[6])[3] = -1920340119;
	(*Var0[5])[0] = -1563072795;
	(*Var0[5])[1] = -1563072795;
	(*Var0[5])[2] = 607574432;
	(*Var0[5])[3] = 607574432;
	(*Var0[4])[0] = -1987982797;
	(*Var0[4])[1] = -1987982797;
	(*Var0[4])[2] = -1987982797;
	(*Var0[4])[3] = -1933895237;
	(*Var0[3])[0] = -182995231;
	(*Var0[3])[1] = -182995231;
	(*Var0[3])[2] = 1267297807;
	(*Var0[3])[3] = 1267297807;
	(*Var0[0])[0] = func_1344();
	(*Var0[0])[1] = -1150137955;
	(*Var0[0])[2] = -1150137955;
	(*Var0[0])[3] = -1150137955;
	(*Var0[1])[0] = func_1344();
	(*Var0[1])[1] = func_1344();
	(*Var0[1])[2] = func_1344();
	(*Var0[1])[3] = func_1344();
	(*Var0[2])[0] = func_1344();
	(*Var0[2])[1] = func_1344();
	(*Var0[2])[2] = func_1344();
	(*Var0[2])[3] = func_1344();
	iVar87 = 0;
	while (iVar87 < 17)
	{
		iVar86 = 0;
		while (iVar86 < 4)
		{
			if (Var0[iVar87][iVar86] != func_1344())
			{
				if ((iVar86 + 1 == func_365(iVar87, 1) && iParam0 == 1) && bParam2)
				{
					if (!_is_imap_active(Var0[iVar87][iVar86]))
					{
						_request_imap(Var0[iVar87][iVar86]);
						func_1560(Var0[iVar87][iVar86], 1, uParam1);
					}
				}
				else if ((Var0[iVar87][(func_365(iVar87, 1) - 1)] != Var0[iVar87][iVar86] || iParam0 != 1) || bParam2 == 0)
				{
					if (_is_imap_active(Var0[iVar87][iVar86]))
					{
						_remove_imap(Var0[iVar87][iVar86]);
						func_1560(Var0[iVar87][iVar86], 0, uParam1);
					}
				}
			}
			iVar86++;
		}
		iVar87++;
	}
}

void func_1493(int iParam0, float fParam1, bool bParam2)
{
	if (fParam1 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam1 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	(*(*Var1[0])[0])[0] = func_1344();
	(*(*Var1[1])[0])[0] = func_1344();
	(*(*Var1[2])[0])[0] = func_1344();
	(*(*Var1[0])[0])[1] = -710911638;
	(*(*Var1[1])[0])[1] = -710911638;
	(*(*Var1[2])[0])[1] = -710911638;
	(*(*Var1[0])[0])[2] = -942555699;
	(*(*Var1[1])[0])[2] = -942555699;
	(*(*Var1[2])[0])[2] = -942555699;
	(*(*Var1[0])[0])[3] = -760097927;
	(*(*Var1[1])[0])[3] = -760097927;
	(*(*Var1[2])[0])[3] = -760097927;
	(*(*Var1[0])[1])[0] = func_1344();
	(*(*Var1[1])[1])[0] = func_1344();
	(*(*Var1[2])[1])[0] = func_1344();
	(*(*Var1[0])[1])[1] = 2047954825;
	(*(*Var1[1])[1])[1] = 2047954825;
	(*(*Var1[2])[1])[1] = 2047954825;
	(*(*Var1[0])[1])[2] = -2085723453;
	(*(*Var1[1])[1])[2] = -2085723453;
	(*(*Var1[2])[1])[2] = -2085723453;
	(*(*Var1[0])[1])[3] = 1434945142;
	(*(*Var1[1])[1])[3] = 1434945142;
	(*(*Var1[2])[1])[3] = 1434945142;
	(*(*Var1[0])[2])[0] = 1924209179;
	(*(*Var1[1])[2])[0] = 1924209179;
	(*(*Var1[2])[2])[0] = 1924209179;
	(*(*Var1[0])[2])[1] = -2084193212;
	(*(*Var1[1])[2])[1] = -2084193212;
	(*(*Var1[2])[2])[1] = -2084193212;
	(*(*Var1[0])[2])[2] = -838184752;
	(*(*Var1[1])[2])[2] = -838184752;
	(*(*Var1[2])[2])[2] = -838184752;
	(*(*Var1[0])[2])[3] = -1433138716;
	(*(*Var1[1])[2])[3] = -1433138716;
	(*(*Var1[2])[2])[3] = -1433138716;
	iVar52 = 0;
	while (iVar52 < 3)
	{
		iVar51 = 0;
		while (iVar51 < 3)
		{
			iVar50 = 0;
			while (iVar50 < 4)
			{
				if (*Var1[iVar52])[iVar51][iVar50] != func_1344()
				{
					if (((iVar52 == iVar0 && iVar50 + 1 == func_1561(iVar51)) && iParam0 == 1) && bParam2)
					{
						if (!_is_imap_active((*Var1[iVar52])[iVar51][iVar50]))
						{
							_request_imap((*Var1[iVar52])[iVar51][iVar50]);
						}
					}
					else if (((*Var1[iVar0])[iVar51][(func_1561(iVar51) - 1)] != (*Var1[iVar52])[iVar51][iVar50] || iParam0 != 1) || bParam2 == 0)
					{
						if (_is_imap_active((*Var1[iVar52])[iVar51][iVar50]))
						{
							_remove_imap((*Var1[iVar52])[iVar51][iVar50]);
						}
					}
				}
				iVar50++;
			}
			iVar51++;
		}
		iVar52++;
	}
}

void func_1494(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	Var0 = 17;
	Var0.f_1 = 4;
	Var0.f_1.f_5 = 4;
	Var0.f_1.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	(*Var0[15])[0] = func_1344();
	(*Var0[15])[1] = func_1344();
	(*Var0[15])[2] = -1147256587;
	(*Var0[15])[3] = -1147256587;
	(*Var0[10])[0] = -1247551347;
	(*Var0[10])[1] = -1247551347;
	(*Var0[10])[2] = -1247551347;
	(*Var0[10])[3] = -1010466481;
	(*Var0[11])[0] = func_1344();
	(*Var0[11])[1] = func_1344();
	(*Var0[11])[2] = func_1344();
	(*Var0[11])[3] = func_1344();
	(*Var0[12])[0] = func_1344();
	(*Var0[12])[1] = func_1344();
	(*Var0[12])[2] = func_1344();
	(*Var0[12])[3] = func_1344();
	(*Var0[13])[0] = func_1344();
	(*Var0[13])[1] = func_1344();
	(*Var0[13])[2] = func_1344();
	(*Var0[13])[3] = func_1344();
	(*Var0[9])[0] = -160392273;
	(*Var0[9])[1] = 1049842342;
	(*Var0[9])[2] = 1049842342;
	(*Var0[9])[3] = 1049842342;
	(*Var0[8])[0] = 1674800958;
	(*Var0[8])[1] = 1674800958;
	(*Var0[8])[2] = 1674800958;
	(*Var0[8])[3] = 2728487;
	(*Var0[7])[0] = 1636281938;
	(*Var0[7])[1] = 1636281938;
	(*Var0[7])[2] = 1636281938;
	(*Var0[7])[3] = 1084869405;
	(*Var0[6])[0] = -1451784475;
	(*Var0[6])[1] = -1451784475;
	(*Var0[6])[2] = -1451784475;
	(*Var0[6])[3] = 1128417383;
	(*Var0[5])[0] = -2016771661;
	(*Var0[5])[1] = -2016771661;
	(*Var0[5])[2] = 202127432;
	(*Var0[5])[3] = 202127432;
	(*Var0[4])[0] = -546137515;
	(*Var0[4])[1] = -546137515;
	(*Var0[4])[2] = -546137515;
	(*Var0[4])[3] = 1679038623;
	if (bParam3)
	{
		func_1562(1);
	}
	else
	{
		func_1562(0);
	}
	(*Var0[3])[0] = 1742990618;
	(*Var0[3])[1] = 1742990618;
	(*Var0[3])[2] = -751959361;
	(*Var0[3])[3] = -751959361;
	(*Var0[0])[0] = func_1344();
	(*Var0[0])[1] = func_1344();
	(*Var0[0])[2] = -2000080725;
	(*Var0[0])[3] = -2000080725;
	(*Var0[1])[0] = 2123887232;
	(*Var0[1])[1] = 2123887232;
	(*Var0[1])[2] = 2123887232;
	(*Var0[1])[3] = 2123887232;
	(*Var0[2])[0] = 102652153;
	(*Var0[2])[1] = 102652153;
	(*Var0[2])[2] = 102652153;
	(*Var0[2])[3] = 102652153;
	iVar87 = 0;
	while (iVar87 < 17)
	{
		iVar86 = 0;
		while (iVar86 < 4)
		{
			if (Var0[iVar87][iVar86] != func_1344())
			{
				if ((iVar86 + 1 == func_365(iVar87, 1) && iParam0 == 2) && bParam2)
				{
					if (!_is_imap_active(Var0[iVar87][iVar86]))
					{
						_request_imap(Var0[iVar87][iVar86]);
						func_1560(Var0[iVar87][iVar86], 1, uParam1);
					}
				}
				else if ((Var0[iVar87][(func_365(iVar87, 1) - 1)] != Var0[iVar87][iVar86] || iParam0 != 2) || bParam2 == 0)
				{
					if (_is_imap_active(Var0[iVar87][iVar86]))
					{
						_remove_imap(Var0[iVar87][iVar86]);
						func_1560(Var0[iVar87][iVar86], 0, uParam1);
					}
				}
			}
			iVar86++;
		}
		iVar87++;
	}
}

void func_1495(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (fParam1 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam1 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	(*(*Var1[0])[0])[0] = func_1344();
	(*(*Var1[1])[0])[0] = func_1344();
	(*(*Var1[2])[0])[0] = func_1344();
	(*(*Var1[0])[0])[1] = 626928579;
	(*(*Var1[1])[0])[1] = 626928579;
	(*(*Var1[2])[0])[1] = 626928579;
	(*(*Var1[0])[0])[2] = 313722477;
	(*(*Var1[1])[0])[2] = 313722477;
	(*(*Var1[2])[0])[2] = 313722477;
	(*(*Var1[0])[0])[3] = 976082270;
	(*(*Var1[1])[0])[3] = 976082270;
	(*(*Var1[2])[0])[3] = 976082270;
	if (bParam3)
	{
		(*(*Var1[0])[1])[0] = func_1344();
		(*(*Var1[1])[1])[0] = func_1344();
		(*(*Var1[2])[1])[0] = func_1344();
		(*(*Var1[0])[1])[1] = -1370620659;
		(*(*Var1[1])[1])[1] = -1370620659;
		(*(*Var1[2])[1])[1] = -1370620659;
		(*(*Var1[0])[1])[2] = -624219879;
		(*(*Var1[1])[1])[2] = -624219879;
		(*(*Var1[2])[1])[2] = -624219879;
		(*(*Var1[0])[1])[3] = 715730031;
		(*(*Var1[1])[1])[3] = 715730031;
		(*(*Var1[2])[1])[3] = 715730031;
		func_1563(1);
	}
	else
	{
		(*(*Var1[0])[1])[0] = func_1344();
		(*(*Var1[1])[1])[0] = func_1344();
		(*(*Var1[2])[1])[0] = func_1344();
		(*(*Var1[0])[1])[1] = 5585502;
		(*(*Var1[1])[1])[1] = 5585502;
		(*(*Var1[2])[1])[1] = 5585502;
		(*(*Var1[0])[1])[2] = -1362716862;
		(*(*Var1[1])[1])[2] = -1362716862;
		(*(*Var1[2])[1])[2] = -1362716862;
		(*(*Var1[0])[1])[3] = 482931525;
		(*(*Var1[1])[1])[3] = 482931525;
		(*(*Var1[2])[1])[3] = 482931525;
		func_1563(0);
	}
	(*(*Var1[0])[2])[0] = -462274808;
	(*(*Var1[1])[2])[0] = -462274808;
	(*(*Var1[2])[2])[0] = -462274808;
	(*(*Var1[0])[2])[1] = -1906732332;
	(*(*Var1[1])[2])[1] = -1906732332;
	(*(*Var1[2])[2])[1] = -1906732332;
	(*(*Var1[0])[2])[2] = -526829;
	(*(*Var1[1])[2])[2] = -526829;
	(*(*Var1[2])[2])[2] = -526829;
	(*(*Var1[0])[2])[3] = -1754422016;
	(*(*Var1[1])[2])[3] = -1754422016;
	(*(*Var1[2])[2])[3] = -1754422016;
	iVar52 = 0;
	while (iVar52 < 3)
	{
		iVar51 = 0;
		while (iVar51 < 3)
		{
			iVar50 = 0;
			while (iVar50 < 4)
			{
				if (*Var1[iVar52])[iVar51][iVar50] != func_1344()
				{
					if (((iVar52 == iVar0 && iVar50 + 1 == func_1561(iVar51)) && iParam0 == 2) && bParam2)
					{
						if (!_is_imap_active((*Var1[iVar52])[iVar51][iVar50]))
						{
							_request_imap((*Var1[iVar52])[iVar51][iVar50]);
						}
					}
					else if (((*Var1[iVar0])[iVar51][(func_1561(iVar51) - 1)] != (*Var1[iVar52])[iVar51][iVar50] || iParam0 != 2) || bParam2 == 0)
					{
						if (_is_imap_active((*Var1[iVar52])[iVar51][iVar50]))
						{
							_remove_imap((*Var1[iVar52])[iVar51][iVar50]);
						}
					}
				}
				iVar50++;
			}
			iVar51++;
		}
		iVar52++;
	}
}

void func_1496(int iParam0, var uParam1, bool bParam2)
{
	Var0 = 17;
	Var0.f_1 = 4;
	Var0.f_1.f_5 = 4;
	Var0.f_1.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	(*Var0[10])[0] = 2036492390;
	(*Var0[10])[1] = 2036492390;
	(*Var0[10])[2] = 2036492390;
	(*Var0[10])[3] = 1865439665;
	(*Var0[11])[0] = func_1344();
	(*Var0[11])[1] = func_1344();
	(*Var0[11])[2] = func_1344();
	(*Var0[11])[3] = func_1344();
	(*Var0[12])[0] = func_1344();
	(*Var0[12])[1] = func_1344();
	(*Var0[12])[2] = func_1344();
	(*Var0[12])[3] = func_1344();
	(*Var0[13])[0] = func_1344();
	(*Var0[13])[1] = func_1344();
	(*Var0[13])[2] = func_1344();
	(*Var0[13])[3] = func_1344();
	(*Var0[9])[0] = func_1344();
	(*Var0[9])[1] = func_1344();
	(*Var0[9])[2] = func_1344();
	(*Var0[9])[3] = func_1344();
	(*Var0[8])[0] = func_1344();
	(*Var0[8])[1] = func_1344();
	(*Var0[8])[2] = func_1344();
	(*Var0[8])[3] = func_1344();
	(*Var0[7])[0] = -621187540;
	(*Var0[7])[1] = -621187540;
	(*Var0[7])[2] = -621187540;
	(*Var0[7])[3] = 1079213989;
	(*Var0[6])[0] = -882188392;
	(*Var0[6])[1] = -882188392;
	(*Var0[6])[2] = -882188392;
	(*Var0[6])[3] = 964593693;
	(*Var0[5])[0] = func_1344();
	(*Var0[5])[1] = func_1344();
	(*Var0[5])[2] = func_1344();
	(*Var0[5])[3] = func_1344();
	(*Var0[4])[0] = -997495998;
	(*Var0[4])[1] = -997495998;
	(*Var0[4])[2] = -997495998;
	(*Var0[4])[3] = -2147051362;
	(*Var0[3])[0] = -1115840558;
	(*Var0[3])[1] = -1115840558;
	(*Var0[3])[2] = 1674493966;
	(*Var0[3])[3] = 1674493966;
	(*Var0[0])[0] = func_1344();
	(*Var0[0])[1] = -1618574684;
	(*Var0[0])[2] = -1618574684;
	(*Var0[0])[3] = -1618574684;
	(*Var0[1])[0] = func_1344();
	(*Var0[1])[1] = func_1344();
	(*Var0[1])[2] = func_1344();
	(*Var0[1])[3] = func_1344();
	(*Var0[2])[0] = func_1344();
	(*Var0[2])[1] = func_1344();
	(*Var0[2])[2] = func_1344();
	(*Var0[2])[3] = func_1344();
	iVar87 = 0;
	while (iVar87 < 17)
	{
		iVar86 = 0;
		while (iVar86 < 4)
		{
			if (Var0[iVar87][iVar86] != func_1344())
			{
				if ((iVar86 + 1 == func_365(iVar87, 1) && iParam0 == 3) && bParam2)
				{
					if (!_is_imap_active(Var0[iVar87][iVar86]))
					{
						_request_imap(Var0[iVar87][iVar86]);
						func_1560(Var0[iVar87][iVar86], 1, uParam1);
					}
				}
				else if ((Var0[iVar87][(func_365(iVar87, 1) - 1)] != Var0[iVar87][iVar86] || iParam0 != 3) || bParam2 == 0)
				{
					if (_is_imap_active(Var0[iVar87][iVar86]))
					{
						_remove_imap(Var0[iVar87][iVar86]);
						func_1560(Var0[iVar87][iVar86], 0, uParam1);
					}
				}
			}
			iVar86++;
		}
		iVar87++;
	}
}

void func_1497(int iParam0, float fParam1, bool bParam2)
{
	if (fParam1 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam1 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	(*(*Var1[0])[0])[0] = func_1344();
	(*(*Var1[1])[0])[0] = func_1344();
	(*(*Var1[2])[0])[0] = func_1344();
	(*(*Var1[0])[0])[1] = func_1344();
	(*(*Var1[1])[0])[1] = func_1344();
	(*(*Var1[2])[0])[1] = func_1344();
	(*(*Var1[0])[0])[2] = func_1344();
	(*(*Var1[1])[0])[2] = func_1344();
	(*(*Var1[2])[0])[2] = func_1344();
	(*(*Var1[0])[0])[3] = func_1344();
	(*(*Var1[1])[0])[3] = func_1344();
	(*(*Var1[2])[0])[3] = func_1344();
	(*(*Var1[0])[1])[0] = func_1344();
	(*(*Var1[1])[1])[0] = func_1344();
	(*(*Var1[2])[1])[0] = func_1344();
	(*(*Var1[0])[1])[1] = 1155877447;
	(*(*Var1[1])[1])[1] = 1155877447;
	(*(*Var1[2])[1])[1] = 1155877447;
	(*(*Var1[0])[1])[2] = 928165666;
	(*(*Var1[1])[1])[2] = 928165666;
	(*(*Var1[2])[1])[2] = 928165666;
	(*(*Var1[0])[1])[3] = 2048341166;
	(*(*Var1[1])[1])[3] = 2048341166;
	(*(*Var1[2])[1])[3] = 2048341166;
	(*(*Var1[0])[2])[0] = -414377604;
	(*(*Var1[1])[2])[0] = -414377604;
	(*(*Var1[2])[2])[0] = -414377604;
	(*(*Var1[0])[2])[1] = -109593135;
	(*(*Var1[1])[2])[1] = -109593135;
	(*(*Var1[2])[2])[1] = -109593135;
	(*(*Var1[0])[2])[2] = 990134505;
	(*(*Var1[1])[2])[2] = 990134505;
	(*(*Var1[2])[2])[2] = 990134505;
	(*(*Var1[0])[2])[3] = 1279910772;
	(*(*Var1[1])[2])[3] = 1279910772;
	(*(*Var1[2])[2])[3] = 1279910772;
	iVar52 = 0;
	while (iVar52 < 3)
	{
		iVar51 = 0;
		while (iVar51 < 3)
		{
			iVar50 = 0;
			while (iVar50 < 4)
			{
				if (*Var1[iVar52])[iVar51][iVar50] != func_1344()
				{
					if (((iVar52 == iVar0 && iVar50 + 1 == func_1561(iVar51)) && iParam0 == 3) && bParam2)
					{
						if (!_is_imap_active((*Var1[iVar52])[iVar51][iVar50]))
						{
							_request_imap((*Var1[iVar52])[iVar51][iVar50]);
						}
					}
					else if (((*Var1[iVar0])[iVar51][(func_1561(iVar51) - 1)] != (*Var1[iVar52])[iVar51][iVar50] || iParam0 != 3) || bParam2 == 0)
					{
						if (_is_imap_active((*Var1[iVar52])[iVar51][iVar50]))
						{
							_remove_imap((*Var1[iVar52])[iVar51][iVar50]);
						}
					}
				}
				iVar50++;
			}
			iVar51++;
		}
		iVar52++;
	}
	sVar53[0] = "";
	sVar53[1] = "shb_p_ammo01";
	sVar53[2] = "shb_p_ammo02";
	sVar53[3] = "shb_p_ammo03";
	iVar58 = get_interior_at_coords(1906.472f, -1862.567f, 46.362f);
	iVar50 = 0;
	while (iVar50 < 4)
	{
		if (is_string_null_or_empty(&(sVar53[iVar50])) == 0)
		{
			if (((iVar50 + 1 == func_1561(0) && iParam0 == 3) && bParam2) && Global_1357549->f_1495 & 8 != 0 == 0)
			{
				if (is_interior_entity_set_active(iVar58, &(sVar53[iVar50])) == 0)
				{
					activate_interior_entity_set(iVar58, &(sVar53[iVar50]), 0);
				}
			}
			else if (((iParam0 != 3 || iVar50 + 1 != func_1561(0)) || bParam2 == 0) || Global_1357549->f_1495 & 8 != 0)
			{
				if (is_interior_entity_set_active(iVar58, &(sVar53[iVar50])))
				{
					deactivate_interior_entity_set(iVar58, &(sVar53[iVar50]), true);
				}
			}
		}
		iVar50++;
	}
}

void func_1498(int iParam0, int iParam1)
{
	fVar8 = 25f;
	switch (iParam0)
	{
		case 2:
			iVar0 = -180755040;
			iVar1 = 4;
			vVar3 = { 623.54f, -1251.056f, 40.2502f };
			fVar6 = 137.4389f;
			iVar2 = 8194;
			break;
		case 3:
			iVar0 = -180755040;
			iVar1 = 4;
			vVar3 = { 1908.325f, -1816.88f, 40.456f };
			fVar6 = 251.3719f;
			iVar2 = 8194;
			break;
		default:
			iVar0 = 0;
			iVar1 = 100;
			vVar3 = { 0f, 0f, 0f };
			fVar6 = 0f;
			iVar2 = 0;
			break;
	}
	iVar7 = get_closest_vehicle(vVar3, fVar8, iVar0, iVar2);
	if (does_entity_exist(iVar7))
	{
		Global_1357549->f_1674 = iVar7;
		set_entity_coords(iVar7, vVar3, true, false, true, true);
		set_entity_heading(iVar7, fVar6);
		set_entity_as_mission_entity(Global_1357549->f_1674, true, true);
	}
	if (iParam1 >= iVar1 && iVar0 != 0)
	{
		if (does_entity_exist(Global_1357549->f_1674) == 0 && does_entity_exist(iVar7) == 0)
		{
			request_model(iVar0, false);
			if (has_model_loaded(iVar0))
			{
				Global_1357549->f_1674 = create_vehicle(iVar0, vVar3, fVar6, true, true, false, false);
			}
		}
		else
		{
			set_model_as_no_longer_needed(iVar0);
		}
	}
	else
	{
		func_1564();
	}
	if (does_entity_exist(Global_1357549->f_1674))
	{
		if (iParam0 == 3 || iParam0 == 2)
		{
			set_boat_anchor(Global_1357549->f_1674, true);
			_0x6b53f4b811e583d2(Global_1357549->f_1674, 1);
		}
		if (get_entity_model(Global_1357549->f_1674) != iVar0)
		{
			set_vehicle_as_no_longer_needed(&(Global_1357549->f_1674));
		}
	}
}

void func_1499(int iParam0, int iParam1)
{
	func_1565(iParam0);
}

bool func_1500(float fParam0, bool bParam1)
{
	if (fParam0 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam0 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	(*(*Var1[0])[0])[0] = func_1344();
	(*(*Var1[1])[0])[0] = func_1344();
	(*(*Var1[2])[0])[0] = func_1344();
	(*(*Var1[0])[0])[1] = -710911638;
	(*(*Var1[1])[0])[1] = -710911638;
	(*(*Var1[2])[0])[1] = -710911638;
	(*(*Var1[0])[0])[2] = -942555699;
	(*(*Var1[1])[0])[2] = -942555699;
	(*(*Var1[2])[0])[2] = -942555699;
	(*(*Var1[0])[0])[3] = -760097927;
	(*(*Var1[1])[0])[3] = -760097927;
	(*(*Var1[2])[0])[3] = -760097927;
	(*(*Var1[0])[1])[0] = func_1344();
	(*(*Var1[1])[1])[0] = func_1344();
	(*(*Var1[2])[1])[0] = func_1344();
	(*(*Var1[0])[1])[1] = 2047954825;
	(*(*Var1[1])[1])[1] = 2047954825;
	(*(*Var1[2])[1])[1] = 2047954825;
	(*(*Var1[0])[1])[2] = -2085723453;
	(*(*Var1[1])[1])[2] = -2085723453;
	(*(*Var1[2])[1])[2] = -2085723453;
	(*(*Var1[0])[1])[3] = 1434945142;
	(*(*Var1[1])[1])[3] = 1434945142;
	(*(*Var1[2])[1])[3] = 1434945142;
	(*(*Var1[0])[2])[0] = 1924209179;
	(*(*Var1[1])[2])[0] = 1924209179;
	(*(*Var1[2])[2])[0] = 1924209179;
	(*(*Var1[0])[2])[1] = -2084193212;
	(*(*Var1[1])[2])[1] = -2084193212;
	(*(*Var1[2])[2])[1] = -2084193212;
	(*(*Var1[0])[2])[2] = -838184752;
	(*(*Var1[1])[2])[2] = -838184752;
	(*(*Var1[2])[2])[2] = -838184752;
	(*(*Var1[0])[2])[3] = -1433138716;
	(*(*Var1[1])[2])[3] = -1433138716;
	(*(*Var1[2])[2])[3] = -1433138716;
	iVar50 = 0;
	iVar53 = 0;
	while (iVar53 < 3)
	{
		iVar52 = 0;
		while (iVar52 < 3)
		{
			iVar51 = 0;
			while (iVar51 < 4)
			{
				if (*Var1[iVar53])[iVar52][iVar51] != func_1344()
				{
					if ((iVar53 == iVar0 && iVar51 + 1 == func_1561(iVar52)) && bParam1)
					{
						if (_is_imap_active((*Var1[iVar53])[iVar52][iVar51]))
						{
							iVar50++;
						}
					}
				}
				iVar51++;
			}
			iVar52++;
		}
		iVar53++;
	}
	if (iVar50 == 3)
	{
		return true;
	}
	return false;
}

bool func_1501(float fParam0, bool bParam1)
{
	if (fParam0 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam0 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	(*(*Var1[0])[0])[0] = func_1344();
	(*(*Var1[1])[0])[0] = func_1344();
	(*(*Var1[2])[0])[0] = func_1344();
	(*(*Var1[0])[0])[1] = func_1344();
	(*(*Var1[1])[0])[1] = func_1344();
	(*(*Var1[2])[0])[1] = func_1344();
	(*(*Var1[0])[0])[2] = func_1344();
	(*(*Var1[1])[0])[2] = func_1344();
	(*(*Var1[2])[0])[2] = func_1344();
	(*(*Var1[0])[0])[3] = func_1344();
	(*(*Var1[1])[0])[3] = func_1344();
	(*(*Var1[2])[0])[3] = func_1344();
	(*(*Var1[0])[1])[0] = func_1344();
	(*(*Var1[1])[1])[0] = func_1344();
	(*(*Var1[2])[1])[0] = func_1344();
	(*(*Var1[0])[1])[1] = 1155877447;
	(*(*Var1[1])[1])[1] = 1155877447;
	(*(*Var1[2])[1])[1] = 1155877447;
	(*(*Var1[0])[1])[2] = 928165666;
	(*(*Var1[1])[1])[2] = 928165666;
	(*(*Var1[2])[1])[2] = 928165666;
	(*(*Var1[0])[1])[3] = 2048341166;
	(*(*Var1[1])[1])[3] = 2048341166;
	(*(*Var1[2])[1])[3] = 2048341166;
	(*(*Var1[0])[2])[0] = -414377604;
	(*(*Var1[1])[2])[0] = -414377604;
	(*(*Var1[2])[2])[0] = -414377604;
	(*(*Var1[0])[2])[1] = -109593135;
	(*(*Var1[1])[2])[1] = -109593135;
	(*(*Var1[2])[2])[1] = -109593135;
	(*(*Var1[0])[2])[2] = 990134505;
	(*(*Var1[1])[2])[2] = 990134505;
	(*(*Var1[2])[2])[2] = 990134505;
	(*(*Var1[0])[2])[3] = 1279910772;
	(*(*Var1[1])[2])[3] = 1279910772;
	(*(*Var1[2])[2])[3] = 1279910772;
	iVar50 = 0;
	iVar53 = 0;
	while (iVar53 < 3)
	{
		iVar52 = 0;
		while (iVar52 < 3)
		{
			iVar51 = 0;
			while (iVar51 < 4)
			{
				if (*Var1[iVar53])[iVar52][iVar51] != func_1344()
				{
					if ((iVar53 == iVar0 && iVar51 + 1 == func_1561(iVar52)) && bParam1)
					{
						if (_is_imap_active((*Var1[iVar53])[iVar52][iVar51]))
						{
							iVar50++;
						}
					}
				}
				iVar51++;
			}
			iVar52++;
		}
		iVar53++;
	}
	if (iVar50 == 2)
	{
		return true;
	}
	return false;
}

bool func_1502(float fParam0, bool bParam1)
{
	if (fParam0 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam0 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	(*(*Var1[0])[0])[0] = func_1344();
	(*(*Var1[1])[0])[0] = func_1344();
	(*(*Var1[2])[0])[0] = func_1344();
	(*(*Var1[0])[0])[1] = 626928579;
	(*(*Var1[1])[0])[1] = 626928579;
	(*(*Var1[2])[0])[1] = 626928579;
	(*(*Var1[0])[0])[2] = 313722477;
	(*(*Var1[1])[0])[2] = 313722477;
	(*(*Var1[2])[0])[2] = 313722477;
	(*(*Var1[0])[0])[3] = 976082270;
	(*(*Var1[1])[0])[3] = 976082270;
	(*(*Var1[2])[0])[3] = 976082270;
	(*(*Var1[0])[1])[0] = func_1344();
	(*(*Var1[1])[1])[0] = func_1344();
	(*(*Var1[2])[1])[0] = func_1344();
	(*(*Var1[0])[1])[1] = 5585502;
	(*(*Var1[1])[1])[1] = 5585502;
	(*(*Var1[2])[1])[1] = 5585502;
	(*(*Var1[0])[1])[2] = -1362716862;
	(*(*Var1[1])[1])[2] = -1362716862;
	(*(*Var1[2])[1])[2] = -1362716862;
	(*(*Var1[0])[1])[3] = 482931525;
	(*(*Var1[1])[1])[3] = 482931525;
	(*(*Var1[2])[1])[3] = 482931525;
	(*(*Var1[0])[2])[0] = -462274808;
	(*(*Var1[1])[2])[0] = -462274808;
	(*(*Var1[2])[2])[0] = -462274808;
	(*(*Var1[0])[2])[1] = -1906732332;
	(*(*Var1[1])[2])[1] = -1906732332;
	(*(*Var1[2])[2])[1] = -1906732332;
	(*(*Var1[0])[2])[2] = -526829;
	(*(*Var1[1])[2])[2] = -526829;
	(*(*Var1[2])[2])[2] = -526829;
	(*(*Var1[0])[2])[3] = -1754422016;
	(*(*Var1[1])[2])[3] = -1754422016;
	(*(*Var1[2])[2])[3] = -1754422016;
	iVar50 = 0;
	iVar53 = 0;
	while (iVar53 < 3)
	{
		iVar52 = 0;
		while (iVar52 < 3)
		{
			iVar51 = 0;
			while (iVar51 < 4)
			{
				if (*Var1[iVar53])[iVar52][iVar51] != func_1344()
				{
					if ((iVar53 == iVar0 && iVar51 + 1 == func_1561(iVar52)) && bParam1)
					{
						if (_is_imap_active((*Var1[iVar53])[iVar52][iVar51]))
						{
							iVar50++;
						}
					}
				}
				iVar51++;
			}
			iVar52++;
		}
		iVar53++;
	}
	if (iVar50 == 3)
	{
		return true;
	}
	return false;
}

var func_1503(var uParam0)
{
	return uParam0;
}

bool func_1504()
{
	if (is_thread_active((*Global_1347702)[59]->f_42, false) && !func_884((*Global_1347702)[59]->f_13, 4))
	{
		return true;
	}
	return false;
}

bool func_1505(int iParam0)
{
	if (Global_1327590->f_10 == 14)
	{
		return true;
	}
	return false;
}

int func_1506(int iParam0, int iParam1, bool bParam2)
{
	fVar3 = func_833();
	if (fVar3 < 30f)
	{
		iVar1 = 0;
	}
	else if (fVar3 < 75f)
	{
		iVar1 = 1;
	}
	else
	{
		iVar1 = 2;
	}
	if (bParam2)
	{
		iVar0 = iParam1[iVar1];
	}
	else
	{
		iVar0 = iParam0[iVar1];
	}
	if (_is_imap_active(iVar0) == 0)
	{
		_request_imap(iVar0);
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar0 != iParam1[iVar2])
			{
				if (_is_imap_active(iParam1[iVar2]))
				{
					_remove_imap(iParam1[iVar2]);
				}
			}
			if (iVar0 != iParam0[iVar2])
			{
				if (_is_imap_active(iParam0[iVar2]))
				{
					_remove_imap(iParam0[iVar2]);
				}
			}
			func_1566(iVar0);
			iVar2++;
		}
	}
	return iVar0;
}

bool func_1507()
{
	if (func_475(&Global_1898437) && func_867(&Global_1898437) == 1)
	{
		iVar0 = func_472(&Global_1898437);
		if ((func_857(iVar0) && does_script_exist(&((*Global_1835011)[iVar0]->f_22))) && _get_number_of_references_of_script_with_name_hash(get_hash_key(&((*Global_1835011)[iVar0]->f_22))) > 0)
		{
			return true;
		}
	}
	return false;
}

bool func_1508()
{
	if (func_141() == 6)
	{
		return false;
	}
	if (func_848((*Global_1347702)[68]->f_15))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == 68)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1509(int iParam0)
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

void func_1510(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_898(iParam0, iParam1))
		{
			if (func_899(iParam0, iParam1))
			{
				if (func_900(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_901(iParam0);
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

void func_1511(int iParam0, int iParam1, bool bParam2)
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

void func_1512(int iParam0, bool bParam1)
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

void func_1513(int iParam0, int iParam1)
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

void func_1514(var uParam0, var uParam1)
{
	*uParam1 = _databinding_add_data_bool(uParam0, "Visible", 0);
	uParam1->f_1 = _databinding_add_data_hash(uParam0, "Title", 0);
	uVar0 = _databinding_add_data_container(uParam0, "Carried");
	func_1567(uVar0, &(uParam1->f_2));
	iVar5 = 0;
	while (iVar5 < 12)
	{
		StringCopy(&cVar2, "Contribution", 24);
		StringIntConCat(&cVar2, iVar5, 24);
		uVar1 = _databinding_add_data_container(uParam0, &cVar2);
		func_1568(uVar1, uParam1->f_4[iVar5]);
		iVar5++;
	}
	uVar6 = _databinding_add_data_container(uParam0, "Total");
	func_1569(uVar6, &(uParam1->f_53));
}

void func_1515(var uParam0, var uParam1)
{
	*uParam1 = _databinding_add_data_bool(uParam0, "Visible", 1);
	uParam1->f_1 = _databinding_add_data_hash(uParam0, "Title", 0);
	uParam1->f_2 = _databinding_add_data_hash(uParam0, "SubTitle", 0);
	uParam1->f_3 = _databinding_add_data_hash(uParam0, "SketchTexture", 0);
	uParam1->f_4 = _databinding_add_data_bool(uParam0, "ShowRestock", 0);
	iVar4 = 0;
	while (iVar4 < 4)
	{
		StringCopy(&cVar1, "Upgrade", 24);
		StringIntConCat(&cVar1, iVar4, 24);
		uVar0 = _databinding_add_data_container(uParam0, &cVar1);
		func_1570(uVar0, uParam1->f_5[iVar4]);
		StringCopy(&cVar1, "Restock", 24);
		StringIntConCat(&cVar1, iVar4, 24);
		uVar0 = _databinding_add_data_container(uParam0, &cVar1);
		func_1571(uVar0, uParam1->f_30[iVar4]);
		iVar4++;
	}
}

void func_1516(var uParam0, var uParam1)
{
	*uParam1 = _databinding_add_data_bool(uParam0, "Visible", 0);
	uParam1->f_1 = _databinding_add_data_hash(uParam0, "Title", 0);
	uParam1->f_2 = _databinding_add_data_hash(uParam0, "Notes", 0);
	uParam1->f_3 = _databinding_add_data_hash(uParam0, "SketchTexture", 0);
	uParam1->f_5 = _databinding_add_data_bool(uParam0, "CrossedOut", 0);
	uVar0 = _databinding_add_data_container(uParam0, "Price");
	uParam1->f_4 = _databinding_add_data_string(uVar0, "Price", "");
	uParam1->f_6 = _databinding_add_data_bool(uVar0, "CrossedOut", 0);
	uParam1->f_7 = _databinding_add_data_bool(uVar0, "Highlighted", 0);
}

void func_1517(bool bParam0)
{
	func_1572(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		_hide_hud_component(121713391);
	}
	else
	{
		_display_hud_component(121713391);
	}
}

int func_1518(int iParam0)
{
	switch (iParam0)
	{
		case -2045110373:
			return 5;
		case 2092390181:
			return 6;
		case 695356898:
			return 0;
		case 2093317438:
			return 2;
		case -145951480:
			return 4;
		case -432333475:
			return 1;
		case -1327067584:
			return 3;
		case -1192044061:
			return 7;
		case 1206762561:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_1519(int iParam0)
{
	iParam0 = func_714(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_11;
}

int func_1520(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1573(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1894065)[iVar0][iVar2];
			if (_does_volume_exist((*Global_1888801)[iVar4]->f_3))
			{
				if (_0xf256a75210c5c0eb((*Global_1888801)[iVar4]->f_3, vParam0))
				{
					switch ((*Global_1888801)[iVar4]->f_20)
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

int func_1521(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1835011)
	{
		if (get_hash_key(&((*Global_1835011)[iVar0]->f_8)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1522(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (get_hash_key(&((*Global_1347702)[iVar0]->f_3)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1523(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

Vector3 func_1524(int iParam0)
{
	return func_1574(iParam0);
}

float func_1525(int iParam0)
{
	switch (iParam0)
	{
		case 17:
			return 50f;
	}
	return 0f;
}

Vector3 func_1526(int iParam0)
{
	if (!func_473(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_1575(iParam0, &vVar0))
	{
		(*Global_1347702)[iParam0]->f_24 = { vVar0 };
	}
	return (*Global_1347702)[iParam0]->f_24;
}

struct<4> func_1527(bool bParam0)
{
	iVar0 = func_490(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_945(271701509, func_805(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_945(271701509, func_805(bParam0), 12999093, 0);
}

bool func_1528(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_491(iParam0);
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

bool func_1529(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_1530(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_1531(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*Global_1058888->f_40501.f_1[iVar0] = { *(Global_1058888->f_40501.f_1[iVar0 + 1]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*Global_1058888->f_40501.f_1[Global_1058888->f_40501] = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_1532(int iParam0)
{
	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1]) = { *Global_1058888->f_40501.f_1[iVar0] };
		}
		iVar0 = (iVar0 - 1);
	}
	*Global_1058888->f_40501.f_1[iParam0] = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

void func_1533(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

bool func_1534(int iParam0)
{
	Var3 = -961687407;
	if (func_56() == -1)
	{
		Var3 = 1444744190;
	}
	Var3.f_1 = iParam0;
	Var3.f_3 = 0;
	_0x91ded5dd64bb2691(&Var3);
	if (!_0xed4413cee1bf142c(&Var3))
	{
		return false;
	}
	if (!_0x44b3a36933ac009c(&iVar0, &Var3, -2008906477))
	{
		return false;
	}
	iVar2 = func_1576(iParam0);
	if (func_1577(iVar0, &iVar1))
	{
		func_1578(iVar1, iVar2);
	}
	while (_0xed4413cee1bf142c(&Var3))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var3, -2008906477))
		{
		}
		else if (!func_1577(iVar0, &iVar1))
		{
		}
		else
		{
			func_1578(iVar1, iVar2);
		}
	}
	return true;
}

int func_1535(int iParam0)
{
	Var1 = -961687407;
	if (func_56() == -1)
	{
		Var1 = 1444744190;
	}
	Var1.f_1 = iParam0;
	Var1.f_3 = 0;
	_0x91ded5dd64bb2691(&Var1);
	if (!_0xed4413cee1bf142c(&Var1))
	{
		return 0;
	}
	if (!_0x44b3a36933ac009c(&iVar0, &Var1, -624749060))
	{
		return 0;
	}
	return func_1579(iVar0);
}

int func_1536(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_1580(13, iParam1, 0, 0, 0);
		}
		else
		{
			func_1580(13, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_1581(0))
	{
	}
	func_1582(&(Global_1946804->f_1497), iParam0, 1, iParam1, 1, bParam3, 1);
	return 1;
}

bool func_1537(int iParam0)
{
	if (Global_1946804->f_2535.f_1 <= 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		Global_1946804->f_2535.f_2 = 0;
		Global_1946804->f_2535.f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			*Global_1946804->f_2535.f_43[iVar0] = { Var2 };
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			Global_1946804->f_2535.f_3[iVar1] = 0;
			iVar1++;
		}
		return true;
	}
	iVar0 = func_1275(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	Global_1946804->f_2535.f_2 = (Global_1946804->f_2535.f_2 - (Global_1946804->f_2535.f_2 && Global_1946804->f_2535.f_43[iVar0]->f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_1583(iVar1, Global_1946804->f_2535.f_43[iVar0]->f_1))
		{
			func_1584(iVar1, Global_1946804->f_2535.f_43[iVar0]->f_1);
		}
		iVar1++;
	}
	Global_1946804->f_2535.f_1 = (Global_1946804->f_2535.f_1 - 1);
	*Global_1946804->f_2535.f_43[iVar0] = { *Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1] };
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1]->f_1 = 0;
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1] = 0;
	return true;
}

int func_1538(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_1580(14, iParam1, 0, 0, 0);
		}
		else
		{
			func_1580(14, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_1585(0))
	{
	}
	func_1582(&(Global_1946804->f_1497), iParam0, 1, iParam1, 1, bParam3, 1);
	return 1;
}

int func_1539(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1287024003;
		case 1:
			return 1062310057;
		case 2:
			return 793334521;
		case 3:
			return -1434694737;
		case 4:
			return 749790628;
		case 5:
			return 1878409227;
		case 6:
			return -864297994;
		case 7:
			return -1542683454;
		case 8:
			return -361558012;
		case 9:
			return -1113328569;
		case 10:
			return 1147740076;
		case 23:
			return 1069443176;
		case 17:
			return 863139058;
		case 18:
			return -1225165750;
		case 13:
			return -757131476;
		case 14:
			return 969930481;
		case 16:
			return -1786335099;
		case 19:
			return -63427201;
		case 15:
			return -1862061946;
		case 20:
			return 644763533;
		case 22:
			return 2069410535;
		case 11:
			return -1112144297;
		case 24:
			return -1319809587;
		case 25:
			return 775505860;
		case 26:
			return -1600350223;
		case 12:
			if ((func_487((*Global_1835011)[59]->f_1, 1) || func_487((*Global_1347702)[1]->f_15, 1)) || func_848((*Global_1347702)[1]->f_15))
			{
				return 481972149;
			}
			else if (func_227(403634348, 1))
			{
				return 826139819;
			}
			return -1667100926;
		case 21:
			if (bParam1)
			{
				return -75169463;
			}
			else
			{
				return 261441658;
			}
			break;
	}
	return 0;
}

int func_1540(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 2:
				return 491176353;
			case 0:
				return -616621656;
			case 1:
				return -1828628461;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 2:
				return 2128795131;
			case 0:
				return -974808650;
			case 1:
				return 7599255;
			case 3:
				return -2032628373;
			case 4:
				return -1202199859;
			case 5:
				return 119245970;
			case 6:
				return -195936553;
			case 7:
				return 674858266;
			default:
				break;
		}
	}
	return 0;
}

bool func_1541(var uParam0)
{
	if (!_databinding_read_data_bool(*uParam0))
	{
		return false;
	}
	if (_databinding_read_data_bool(uParam0->f_4))
	{
		return false;
	}
	return true;
}

bool func_1542(var uParam0)
{
	if (!_databinding_read_data_bool(*uParam0))
	{
		return false;
	}
	if (_databinding_read_data_bool(uParam0->f_2))
	{
		return false;
	}
	return true;
}

void func_1543(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1443(1) < iParam0)
	{
		iParam0 = func_1443(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_1166(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_1544(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_1085(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

bool func_1545(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	if (uParam3->f_62 >= 12)
	{
		return false;
	}
	if (iParam2 <= 0)
	{
		return false;
	}
	iVar0 = func_149();
	func_1586(iParam2, bParam4);
	if (iVar0 != func_149())
	{
		uParam3->f_1[uParam3->f_62] = 0;
		uParam3->f_1[uParam3->f_62]->f_3 = -1;
		uParam3->f_1[uParam3->f_62]->f_1 = iParam0;
		uParam3->f_1[uParam3->f_62]->f_2 = iParam1;
		uParam3->f_1[uParam3->f_62]->f_4 = iParam2;
		uParam3->f_62++;
		if (bParam4)
		{
			if (iParam1 == 0)
			{
				func_1587(iParam2);
			}
			else if (bParam5)
			{
				func_1588(1);
			}
		}
	}
	return true;
}

void func_1546(var uParam0)
{
	Var0.f_1 = 12;
	Var0.f_1.f_1.f_1 = -1;
	Var0.f_1.f_1.f_3 = -1;
	Var0.f_1.f_1.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	_copy_memory((*uParam0)[0], (*uParam0)[1], 63);
	_copy_memory((*uParam0)[1], &Var0, 63);
	(*uParam0)[1] = func_1435((*uParam0)[0]);
}

bool func_1547(int iParam0, bool bParam1, int iParam2, var uParam3)
{
	if (uParam3->f_62 >= 12)
	{
		return false;
	}
	if (iParam2 <= 0)
	{
		return false;
	}
	uParam3->f_1[uParam3->f_62] = 0;
	set_bit(uParam3->f_1[uParam3->f_62], 0);
	if (bParam1)
	{
		set_bit(uParam3->f_1[uParam3->f_62], 1);
	}
	uParam3->f_1[uParam3->f_62]->f_3 = iParam0;
	uParam3->f_1[uParam3->f_62]->f_1 = -1;
	uParam3->f_1[uParam3->f_62]->f_2 = 0;
	uParam3->f_1[uParam3->f_62]->f_4 = -iParam2;
	uParam3->f_62++;
	func_1589(iParam2);
	return true;
}

int func_1548(var uParam0, int iParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_490(bParam2), uParam0, iParam1);
}

struct<16> func_1549(var uParam0)
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

int func_1550(int iParam0, var uParam1, bool bParam2)
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
					func_1552(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1552(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16))
	{
		func_1552(iVar0, 1);
		return iVar0;
	}
	return -1;
}

int func_1551(struct<4> Param0, int iParam4, bool bParam5)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_1237(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_981(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1590(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1591(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1592(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1593(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1549(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1550(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

void func_1552(int iParam0, int iParam1)
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
	func_1594(iParam0, iParam1);
}

bool func_1553(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_490(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_1237(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_1554(int iParam0)
{
	if (!func_871(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_491(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

bool func_1555(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1595(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_1596())
	{
		return func_1595(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_1595(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

int func_1556(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1721991356:
			return 2;
		case -1439599467:
			return 23;
		case -1317052143:
			return 12;
		case -1233681761:
			return 19;
		case -1148613331:
			return 9;
		case -702816767:
			return 3;
		case -416908843:
			return 13;
		case -273223690:
			return 15;
		case -173507739:
			return 6;
		case 0:
			return 22;
		case 212278652:
			return 14;
		case 433385945:
			return 10;
		case 603685163:
			return 17;
		case 669657108:
			return 0;
		case 725623432:
			return 21;
		case 821931868:
			return 1;
		case 839715153:
			return 7;
		case 1420204096:
			return 11;
		case 1500834021:
			return 8;
		case 1632247697:
			return 18;
		case 1679686673:
			return 16;
		case 1974067816:
			return 5;
		case 2082228755:
			return 20;
		case 2137137442:
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

bool func_1557(int iParam0)
{
	return (Global_1357549->f_1885 == iParam0 && !func_1597(&(Global_1357549->f_1901)));
}

void func_1558(int iParam0)
{
	_request_imap(iParam0);
}

bool func_1559(var uParam0)
{
	iVar0 = uParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_1934765->f_21[iVar1]), iVar2);
}

void func_1560(int iParam0, bool bParam1, var uParam2)
{
	switch (iParam0)
	{
		case -2000080725:
			if (bParam1)
			{
				*uParam2 = _0xfa50f79257745e74(701.0167f, -1247.185f, 43.9899f, 3f, 2, -1, 0);
			}
			else
			{
				_0x9cf1836c03fb67a2(uParam2, 0);
			}
			break;
	}
	switch (iParam0)
	{
		case -1563072795:
		case 607574432:
		case 825179479:
			remove_decals_in_range(-125.9479f, -39.4579f, 94.6035f, 4f);
			break;
		case -2016771661:
		case 202127432:
		case 2072112547:
			remove_decals_in_range(653.7093f, -1244.043f, 42.6971f, 4f);
			break;
		case -782359587:
		case 2728487:
		case 1674800958:
			remove_decals_in_range(660.9469f, -1255.986f, 42.7088f, 4f);
			break;
		case -1642249622:
		case 1084869405:
		case 1636281938:
			remove_decals_in_range(674.1929f, -1266.091f, 42.984f, 4f);
			break;
		case -1451784475:
		case 1028224932:
		case 1128417383:
			remove_decals_in_range(673.2328f, -1239.627f, 43.1471f, 4f);
			break;
		case -1123811713:
		case -546137515:
		case 1679038623:
			remove_decals_in_range(658.2036f, -1233.099f, 43.2507f, 4f);
			break;
		case -1279618207:
		case -751959361:
		case 1742990618:
			remove_decals_in_range(678.267f, -1251.873f, 43.0153f, 4f);
			break;
		case -1620486708:
		case -223906810:
		case 163126540:
			remove_decals_in_range(-118.3392f, -35.8852f, 94.7422f, 4f);
			break;
		case -379409079:
		case 1808508475:
		case 2015311123:
			remove_decals_in_range(-111.4885f, -39.7478f, 94.8525f, 4f);
			break;
		case -1920340119:
		case -1576393943:
		case -413795019:
			remove_decals_in_range(-123.9274f, -22.8559f, 95.0845f, 4f);
			break;
		case -1987982797:
		case -1933895237:
		case -104137172:
			remove_decals_in_range(-147.6751f, -24.5264f, 95.2101f, 4f);
			break;
		case -1426249148:
		case -182995231:
		case 1267297807:
			remove_decals_in_range(-142.3644f, -21.2133f, 95.0883f, 4f);
			break;
		case -638481378:
		case -621187540:
		case 1079213989:
			remove_decals_in_range(1880.102f, -1880.512f, 41.9323f, 4f);
			break;
		case -882188392:
		case 773757120:
		case 964593693:
			remove_decals_in_range(1870.625f, -1872.112f, 41.8191f, 4f);
			break;
		case -2147051362:
		case -997495998:
		case 266022415:
			remove_decals_in_range(1887.52f, -1880.757f, 41.9442f, 4f);
			break;
		case -1910456812:
		case -1115840558:
		case 1674493966:
			remove_decals_in_range(1877.485f, -1861f, 41.8078f, 4f);
			break;
	}
}

int func_1561(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_40.f_4283.f_320;
		case 1:
			return Global_40.f_4283.f_318;
		case 2:
			return Global_40.f_4283.f_319;
	}
	return 1;
}

void func_1562(bool bParam0)
{
	iVar0 = (func_365(3, 0) - 1);
	iVar1[0] = -916538063;
	iVar1[1] = -916538063;
	iVar1[2] = 110400393;
	iVar1[3] = 110400393;
	iVar6 = &iVar1[iVar0];
	if (bParam0)
	{
		if (_is_imap_active(iVar6) == 0)
		{
			_request_imap(iVar6);
		}
		iVar7 = 0;
		while (iVar7 < 4)
		{
			if (_is_imap_active(&(iVar1[iVar7])))
			{
				if (&iVar1[iVar7] != iVar6)
				{
					_remove_imap(&(iVar1[iVar7]));
				}
			}
			iVar7++;
		}
	}
	else
	{
		iVar7 = 0;
		while (iVar7 < 4)
		{
			if (_is_imap_active(&(iVar1[iVar7])))
			{
				_remove_imap(&(iVar1[iVar7]));
			}
			iVar7++;
		}
	}
}

void func_1563(bool bParam0)
{
	if (bParam0)
	{
		iVar0[0] = -1370620659;
		iVar0[1] = -624219879;
		iVar0[2] = 715730031;
	}
	else
	{
		iVar0[0] = 5585502;
		iVar0[1] = -1362716862;
		iVar0[2] = 482931525;
	}
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (_is_imap_active(&(iVar0[iVar4])))
		{
			if (&iVar0[iVar4] != func_1344())
			{
				_remove_imap(&(iVar0[iVar4]));
			}
		}
		iVar4++;
	}
}

void func_1564()
{
	if (does_entity_exist(Global_1357549->f_1674))
	{
		if (!_0x88ad6cc10d8d35b2(Global_1357549->f_1674))
		{
			set_entity_as_mission_entity(Global_1357549->f_1674, true, false);
		}
		if (is_entity_dead(Global_1357549->f_1674) == 0)
		{
			delete_vehicle(&(Global_1357549->f_1674));
		}
	}
}

void func_1565(int iParam0)
{
}

void func_1566(int iParam0)
{
	switch (iParam0)
	{
		case 1261237250:
			if (_is_imap_active(-109425099))
			{
				_remove_imap(-109425099);
			}
			if (_is_imap_active(1070723367))
			{
				_remove_imap(1070723367);
			}
			break;
		case -109425099:
		case 1070723367:
			if (_is_imap_active(1261237250))
			{
				_remove_imap(1261237250);
			}
			break;
		case 1475953931:
			if (_is_imap_active(-316909020))
			{
				_remove_imap(-316909020);
			}
			if (_is_imap_active(-1962893335))
			{
				_remove_imap(-1962893335);
			}
			if (_is_imap_active(1351589798))
			{
				_remove_imap(1351589798);
			}
			if (_is_imap_active(300868838))
			{
				_remove_imap(300868838);
			}
			if (_is_imap_active(-1788578071))
			{
				_remove_imap(-1788578071);
			}
			if (_is_imap_active(1157066259))
			{
				_remove_imap(1157066259);
			}
			break;
		case -1962893335:
		case -1788578071:
		case -316909020:
		case 300868838:
		case 1157066259:
		case 1351589798:
			if (_is_imap_active(1475953931))
			{
				_remove_imap(1475953931);
			}
			break;
	}
}

void func_1567(var uParam0, var uParam1)
{
	*uParam1 = _databinding_add_data_bool(uParam0, "Visible", 0);
	uParam1->f_1 = _databinding_add_data_string(uParam0, "Price", "");
}

void func_1568(var uParam0, var uParam1)
{
	*uParam1 = _databinding_add_data_bool(uParam0, "Visible", 0);
	uParam1->f_1 = _databinding_add_data_hash(uParam0, "Name", 0);
	uParam1->f_2 = _databinding_add_data_hash(uParam0, "Description", 0);
	uParam1->f_3 = _databinding_add_data_string(uParam0, "Price", "");
}

void func_1569(var uParam0, var uParam1)
{
	*uParam1 = _databinding_add_data_bool(uParam0, "Visible", 0);
	uParam1->f_1 = _databinding_add_data_string(uParam0, "Price", "");
}

void func_1570(var uParam0, var uParam1)
{
	*uParam1 = _databinding_add_data_bool(uParam0, "Visible", 0);
	uParam1->f_1 = _databinding_add_data_hash(uParam0, "Title", 0);
	uParam1->f_2 = _databinding_add_data_hash(uParam0, "Notes", 0);
	uParam1->f_4 = _databinding_add_data_bool(uParam0, "CrossedOut", 0);
	uVar0 = _databinding_add_data_container(uParam0, "Price");
	uParam1->f_3 = _databinding_add_data_string(uVar0, "Price", "");
	uParam1->f_5 = _databinding_add_data_bool(uVar0, "Highlighted", 0);
	uVar1 = _databinding_add_data_bool(uVar0, "CrossedOut", 0);
}

void func_1571(var uParam0, var uParam1)
{
	*uParam1 = _databinding_add_data_bool(uParam0, "Visible", 0);
	uParam1->f_1 = _databinding_add_data_string(uParam0, "Price", "");
	uParam1->f_2 = _databinding_add_data_bool(uParam0, "CrossedOut", 0);
	uParam1->f_3 = _databinding_add_data_bool(uParam0, "Highlighted", 0);
}

void func_1572(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

int func_1573(vector3 vParam0)
{
	iVar0 = func_1598(vParam0, 0f, 0f, 0, 2);
	return func_1598(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

Vector3 func_1574(int iParam0)
{
	if (func_1599(iParam0))
	{
		return func_1600(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

bool func_1575(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_1601((*Global_1347702)[iParam0]->f_15) != 0)
		{
			(*Global_1347702)[iParam0]->f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return true;
		}
	}
	else if (iParam0 == 96)
	{
		if ((*Global_1347702)[iParam0]->f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return true;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return true;
		}
	}
	return false;
}

int func_1576(int iParam0)
{
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1] = iParam0;
	iVar0 = Global_1946804->f_2535.f_2 ^ -1;
	iVar0 = (iVar0 && -iVar0);
	Global_1946804->f_2535.f_2 = (Global_1946804->f_2535.f_2 || iVar0);
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1]->f_1 = iVar0;
	Global_1946804->f_2535.f_1++;
	return iVar0;
}

bool func_1577(int iParam0, int iParam1)
{
	if (iParam0 == -696754231)
	{
		iVar0 = 1742327865;
		if (func_491(func_1602(iVar0)) != 81053684)
		{
			return false;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	*iParam1 = func_869(iVar0, 1);
	return true;
}

void func_1578(int iParam0, int iParam1)
{
	Global_1946804->f_2535.f_3[iParam0] = (Global_1946804->f_2535.f_3[iParam0] || iParam1);
}

int func_1579(int iParam0)
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
			return 128;
		case 350097565:
			return 256;
		case 346761890:
			return 512;
		case -915377750:
			return 1024;
		case -1283403230:
			return 2048;
		case 1024778115:
			return 4096;
		case 75507907:
			return 8192;
		case -1678578495:
			return 16384;
		case -1925540957:
			return 32768;
		case -2125161702:
			return 131072;
		case 1929486675:
			return 262144;
		case -1932005642:
			return 65536;
		case 315750675:
			return 524288;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 1136;
		case -141044514:
			return 4208;
		case 884232794:
			return 8304;
		case 836721350:
			return 20480;
		case -1062102573:
			return 32833;
		case -884591393:
			return 96;
		case -1886898087:
			return 16496;
		case -1674046782:
			return 139376;
		case 1481630954:
			return 262256;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_1580(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1603(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1604(Var0);
}

bool func_1581(bool bParam0)
{
	if (Global_1946804->f_2535.f_1 <= 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_1411(iVar0, 1);
		if (func_1605(iVar2, 2))
		{
		}
		else if (&Global_1946804->f_2535.f_3[iVar0] == 0)
		{
		}
		else
		{
			if (bParam0 && func_1606(iVar0) == -1)
			{
				func_1607(iVar0, 0);
				func_1608(Global_1946804->f_2589.f_2[(Global_1946804->f_2589 - 1)], 2, 6);
			}
			func_1609(iVar2, 2, 6);
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

void func_1582(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_56() != -1;
	Global_1946804->f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		_0x0bfa1bd465cdfefd(iParam1);
		if (!bVar4)
		{
			if (Global_1347477->f_189 != 0)
			{
				_set_ped_body_component(iParam1, Global_1347477->f_189);
			}
			if ((Global_1946804->f_1 == -2125499975 || Global_1946804->f_1 == -449205311) && Global_1347477->f_190 != 0)
			{
				_set_ped_body_component(iParam1, Global_1347477->f_190);
			}
			func_1603(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1610(iParam1, 29, bVar4, 1, 0);
			func_1610(iParam1, 31, bVar4, 1, 0);
			func_1610(iParam1, 30, bVar4, 1, 0);
			func_1610(iParam1, 22, bVar4, 1, 0);
			func_1610(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1611(32768) && func_1605(1108822547, 8)) && func_1612(10, iParam3))
	{
		func_1613(iParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = &Global_1946804->f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_1411(iVar1, 1);
			if (func_1605(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1612(iVar1, iParam3))
				{
				}
				else if ((func_1605(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1605(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1610(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1609(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && &uParam0->f_1[iVar1] == &Global_1946804->f_2456[iVar1]) && uParam0->f_1[iVar1]->f_1 == Global_1946804->f_2456[iVar1]->f_1)
						{
						}
						else
						{
							if (Global_1946804->f_57[iVar1]->f_1 > 1)
							{
								func_1610(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1605(iVar3, 1))
							{
								func_1614(iVar3, 1, 6);
							}
							Global_1946804->f_857++;
							_set_ped_component_enabled(iParam1, iVar2, false, bVar4, false);
							if (uParam0->f_1[iVar1]->f_1 != 0)
							{
								_0x66b957aac2eaaeab(iParam1, iVar2, uParam0->f_1[iVar1]->f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804->f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							_0xaab86462966168ce(iParam1, bVar4);
							_update_ped_variation(iParam1, false, true, true, true, bParam5);
						}
					}
				}
			}
		}
	}
}

bool func_1583(int iParam0, var uParam1)
{
	return (Global_1946804->f_2535.f_3[iParam0] && uParam1) != 0;
}

void func_1584(int iParam0, var uParam1)
{
	Global_1946804->f_2535.f_3[iParam0] = (&Global_1946804->f_2535.f_3[iParam0] - (Global_1946804->f_2535.f_3[iParam0] && uParam1));
}

bool func_1585(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_1411(iVar0, 1);
		if (!func_1605(iVar2, 2))
		{
		}
		else if (&Global_1946804->f_2535.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0 && func_1606(iVar0) == -1)
			{
				func_1607(iVar0, 0);
				func_1608(Global_1946804->f_2589.f_2[(Global_1946804->f_2589 - 1)], 2, 6);
			}
			func_1614(iVar2, 3, 6);
			Global_1946804->f_2456[iVar0] = 0;
			Global_1946804->f_2456[iVar0]->f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

void func_1586(int iParam0, bool bParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_324 + iParam0) < 0)
	{
		return;
	}
	func_1615((Global_40.f_4283.f_324 + iParam0));
	if (bParam1)
	{
		func_1168(9, iParam0);
	}
}

void func_1587(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (!func_1616(310186733))
	{
		Global_40.f_4283.f_307.f_3 = (Global_40.f_4283.f_307.f_3 + iParam0);
		if (Global_40.f_4283.f_307.f_3 >= 5000)
		{
			func_1617(310186733);
		}
	}
}

void func_1588(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (!func_1616(-1959946884))
	{
		Global_40.f_4283.f_307.f_4 = (Global_40.f_4283.f_307.f_4 + iParam0);
		if (Global_40.f_4283.f_307.f_4 >= 3)
		{
			func_1617(-1959946884);
		}
	}
}

void func_1589(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = (Global_40.f_4283.f_324 - iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	func_1615(iVar0);
}

struct<28> func_1590(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_490(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1549(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1591(int iParam0, var uParam1, bool bParam2)
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
					func_1552(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1552(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28))
	{
		func_1552(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1592(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_490(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1549(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1593(int iParam0, var uParam1, bool bParam2)
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
					func_1552(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1552(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17))
	{
		func_1552(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1594(int iParam0, int iParam1)
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

bool func_1595(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_1596()
{
	return Global_1109400->f_245;
}

bool func_1597(var uParam0)
{
	return func_506(*uParam0, 1);
}

int func_1598(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

bool func_1599(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1618((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_1600(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
		case 34:
			return 2544.982f, -1187.344f, 52.3104f;
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_1601(int iParam0)
{
	if (!func_475(iParam0))
	{
		return -1;
	}
	return func_1619(iParam0);
}

int func_1602(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_869(iParam0, 1)]);
}

void func_1603(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1604(struct<4> Param0)
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
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_1620(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1] == Param0 && Global_1946804->f_668[iVar1]->f_1 == Param0.f_1) && Global_1946804->f_668[iVar1]->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_1621(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1603(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_1620(Param0))
			{
				return;
			}
			func_1621(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1603(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1622(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

bool func_1605(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_869(iParam0, 1)])->f_10 && iParam1) != 0;
}

int func_1606(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2589)
	{
		if (&Global_1946804->f_2589.f_2[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1607(int iParam0, int iParam1)
{
	func_1623(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_1608(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1609(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_869(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_869(iParam0, 1)])->f_10 || iParam1);
}

void func_1610(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_1411(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1624(iParam4);
		}
		else if (iParam4 != &Global_1946804->f_57[iParam1])
		{
			iVar1 = _get_ped_component_category(iParam4, _get_metaped_type(iParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_57[iParam1]->f_1)
		{
			if (&Global_1946804->f_57[iParam1]->f_2[iVar0] != iVar1)
			{
				_0xdf631e4bce1b1fc4(iParam0, &(Global_1946804->f_57[iParam1]->f_2[iVar0]), 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_57[iParam1]->f_1)
		{
			if (&Global_1946804->f_57[iParam1]->f_2[iVar0] != iVar1)
			{
				_set_ped_component_disabled(iParam0, &(Global_1946804->f_57[iParam1]->f_2[iVar0]), 0);
			}
			iVar0++;
		}
	}
}

bool func_1611(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

bool func_1612(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1613(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1605(1108822547, 6))
	{
		if (bParam2)
		{
			func_1610(iParam0, iVar0, func_56() != -1, 0, 0);
			func_1609(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1614(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1614(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_869(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_869(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_869(iParam0, 1)])->f_10 && iParam1));
}

void func_1615(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_324 = iParam0;
	Var0 = { func_1166(1736503291) };
	stat_id_set_int(&Var0, iParam0, true);
}

bool func_1616(int iParam0)
{
	if (!func_1625(iParam0))
	{
		return false;
	}
	return is_bit_set(Global_40.f_4283.f_307, func_1626(iParam0, 1));
}

void func_1617(int iParam0)
{
	if (!func_1625(iParam0))
	{
		return;
	}
	set_bit(&(Global_40.f_4283.f_307), func_1626(iParam0, 1));
}

bool func_1618(var uParam0)
{
	if (func_1627(&(uParam0->f_29), 62))
	{
		switch (func_1628())
		{
			case 1:
				if (!func_1627(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1627(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1627(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1627(&(uParam0->f_29), 32))
				{
					if (func_1627(&(uParam0->f_29), 2))
					{
						if (func_629(func_546()) < 5)
						{
							return false;
						}
					}
					else
					{
						return false;
					}
				}
				break;
		}
	}
	return true;
}

int func_1619(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_1620(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1621(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

void func_1622(var uParam0, var uParam1, var uParam2)
{
	Var0.f_1 = uParam2;
	Var0 = uParam0;
	Var0.f_2 = uParam1;
	func_1629(Var0);
}

void func_1623(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1630(uParam0, 1))
	{
		func_1631(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

int func_1624(int iParam0)
{
	iVar0 = func_491(iParam0);
	switch (iVar0)
	{
		case -2061583405:
			return -1725579161;
		case -525676072:
			return 1249071452;
		default:
			break;
	}
	return 0;
}

bool func_1625(int iParam0)
{
	switch (iParam0)
	{
		case -1959946884:
		case -1784068921:
		case -1642438278:
		case -1349086674:
		case 310186733:
		case 456315479:
		case 471747275:
		case 1166592425:
		case 1486898918:
		case 1500419820:
			return true;
		default:
			break;
	}
	return false;
}

int func_1626(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1959946884:
			return 6;
		case -1784068921:
			return 7;
		case -1642438278:
			return 2;
		case -1349086674:
			return 8;
		case 310186733:
			return 5;
		case 456315479:
			return 9;
		case 471747275:
			return 3;
		case 1166592425:
			return 4;
		case 1486898918:
			return 0;
		case 1500419820:
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

bool func_1627(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_1628()
{
	return &Global_1899516;
}

void func_1629(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1620(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_1620(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1621(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1603(8);
}

bool func_1630(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1631(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

